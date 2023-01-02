bool func_0()//Position - 0x4DCDB5
{
	return Global_2621837.f_2;
}

bool func_1(int iParam0)//Position - 0x4DCE4A
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 10);
}

int func_2(bool bParam0)//Position - 0x4DCE97
{
	if (bParam0)
	{
	}
	return Global_2714762.f_9;
}

bool func_3(int iParam0)//Position - 0x4DD21B
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 20);
}

int func_4()//Position - 0x4DD267
{
	if (Global_2653167.f_9 == 0)
	{
		return 0;
	}
	if (MISC::GET_GAME_TIMER() > Global_2653167.f_9)
	{
		Global_2653167.f_9 = 0;
		return 0;
	}
	return 1;
}

void func_5(int iParam0)//Position - 0x4DD36E
{
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 10);
}

void func_6(int iParam0)//Position - 0x4DD386
{
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 10);
}

bool func_7(int iParam0)//Position - 0x4DD39E
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 10);
}

int func_8(int iParam0)//Position - 0x4DD53C
{
	switch (iParam0)
	{
		case 0:
			return 9120;
		case 1:
			return 9121;
		case 2:
			return 9122;
		default:
	}
	return 9116;
}

int func_9(int iParam0)//Position - 0x4DD572
{
	switch (iParam0)
	{
		case 0:
			return 50;
		case 1:
			return 51;
		case 2:
			return 52;
		default:
	}
	return 43;
}

char* func_10(int iParam0)//Position - 0x4DD5A4
{
	switch (iParam0)
	{
		case 1:
			return "Arm_Wrestling_Icon";
		case 4:
			return "Darts_Icon";
		case 22:
			return "Pilot_School_Icon";
		case 8:
			return "Golf_Icon";
		case 14:
			return "Shooting_Range_Icon";
		case 16:
			return "Tennis_Icon";
		case 2:
			return "BaseJump_Icon";
		case 5:
			return "Deathmatch_Marker_256";
		case 18:
			return "TeamDeathmatch_Icon";
		case 17:
			return "VehicleDeathmatch_Icon";
		case 7:
			return "GangAttack_Icon";
		case 3:
			return "Custom_Icon";
		case 15:
			return "Survival_Icon";
		case 12:
			return "Land_Race_Icon";
		case 11:
			return "Sea_Race_Icon";
		case 10:
			return "Air_Race_Icon";
		case 19:
			return "Bike_Race_Icon";
		case 20:
			return "Foot_Race_Icon";
		case 21:
			return "Capture_The_Flag_Icon";
		case 23:
			return "Last_Team_Standing_Icon";
		case 24:
			return "Stunt_Mode_Icon";
		case 25:
			return "Featured_Series";
		case 26:
			return "Adversary_4";
		case 27:
			return "Adversary_8";
		case 28:
			return "Adversary_10";
		case 29:
			return "Adversary_12";
		case 30:
			return "Adversary_16";
		case 31:
			return "Stunt_Premium_Icon";
		case 32:
			return "Special_Vehicle_Race_Series";
		case 33:
			return "Challenge_Series";
		case 34:
			return "Adversary_Bunker";
		case 35:
			return "Transform_Race_Icon";
		case 36:
			return "Target_race";
		case 37:
			return "Hotring_circuit";
		case 38:
			return "Arena_Series" /* GXT: Arena War Series */;
		case 39:
			return "Land_Race_Icon";
		case 40:
			return "Survival_Icon";
		case 41:
			return "King_Of_The_Hill";
		case 42:
			return "King_Of_The_Hill_Teams";
		case 43:
			return "Open_Wheel_Race";
		case 45:
			return "Pursuit_Series";
		case 44:
			return "Street_Race_Series";
		case 46:
			return "Community_Series_Icon";
		case 47:
			return "Cayo_Perico_Icon";
		default:
	}
	return "Off_Road_Race_Icon";
}

var func_11(int iParam0)//Position - 0x4DD820
{
	return Global_2621865[iParam0 /*26*/].f_6.f_3;
}

bool func_12()//Position - 0x4DD834
{
	return Global_1573131.f_13;
}

int func_13(int iParam0)//Position - 0x4DD842
{
	struct<10> Var0;
	var uVar1;
	var uVar2;
	if (!__LIB_5__::getGlobal_2714762_f_692())
	{
		return 0;
	}
	Var0 = { __LIB_12__::func_467(iParam0) };
	MemCopy(&uVar1, {__LIB_18__::func_169()}, 8);
	MemCopy(&uVar2, {Var0.f_3}, 8);
	if (!MISC::ARE_STRINGS_EQUAL(&uVar1, &uVar2))
	{
		return 0;
	}
	return 1;
}

void func_14(int iParam0, int iParam1, struct<6> Param2, struct<16> Param3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x4DE167
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_1)
	{
		return;
	}
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/] = iParam1;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_5 = { Param2 };
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_27 = bParam4;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_11 = { Param3 };
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_28 = bParam5;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_29 = iParam6;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_30 = iParam7;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_31 = iParam8;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_32 = iParam9;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_33 = iParam10;
}

void func_15(int iParam0, int iParam1)//Position - 0x4DE601
{
	if (iParam1 != 4)
	{
		if (iParam1 == 2)
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
		}
		else if (iParam1 == 3)
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
		}
		else if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
		}
		else if (iParam1 == 1)
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
	}
}

char* func_16(int iParam0)//Position - 0x4DE773
{
	switch (iParam0)
	{
		case 0:
			return "CLM_ERROR_RANK" /* GXT: Your Rank is too low. */;
		case 1:
			return "CLM_ERROR_TIME" /* GXT: This Job is now closed until */;
		case 2:
			return "CLM_ERROR_WANTED" /* GXT: You have a Wanted Level. */;
		case 3:
			return "CLM_ERROR_CASH" /* GXT: You cannot afford to play. */;
		case 4:
			return "";
		default:
	}
	return "";
}

int func_17(int iParam0)//Position - 0x4DE7CC
{
	bool bVar0;
	if (!__LIB_18__::func_134(iParam0))
	{
		bVar0 = false;
		bVar0 = CLOCK::GET_CLOCK_HOURS();
		while (bVar0 <= 23)
		{
			if (BitTest(Global_2621865[iParam0 /*26*/].f_6.f_4, bVar0))
			{
				return bVar0;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 23)
		{
			if (BitTest(Global_2621865[iParam0 /*26*/].f_6.f_4, bVar0))
			{
				return bVar0;
			}
			bVar0++;
		}
		return bVar0;
	}
	return -1;
}

var func_18(int iParam0)//Position - 0x4DEE23
{
	return Global_2621865[iParam0 /*26*/].f_6.f_1;
}

void func_19(int iParam0)//Position - 0x4DEEA1
{
	Global_1659366[iParam0 /*11*/] = 3;
}

void func_20(int iParam0)//Position - 0x4DEEB2
{
	Global_1659366[iParam0 /*11*/] = 2;
}

bool func_21()//Position - 0x4DF294
{
	return Global_1573131.f_7;
}

int func_22(int iParam0, int iParam1)//Position - 0x4DF679
{
	if (iParam1 == 40)
	{
		return 2;
	}
	if (__LIB_18__::func_106(iParam0))
	{
		return 6;
	}
	if (__LIB_18__::func_153(iParam0))
	{
		return 1;
	}
	if (iParam1 == PLAYER::PLAYER_ID())
	{
		return 5;
	}
	if (iParam1 == 63)
	{
		return 3;
	}
	if (iParam1 == 62)
	{
		return 4;
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x4DF6CA
{
	if (__LIB_18__::func_122(iParam0))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 22);
	return 1;
}

int func_24(int iParam0)//Position - 0x4DF75E
{
	if (!__LIB_18__::func_122(iParam0))
	{
		return 0;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 22);
	return 1;
}

void func_25(int iParam0)//Position - 0x4DF7C2
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	Var0 = { __LIB_18__::func_104(iParam0) };
	fVar1 = Var0.f_2;
	fVar2 = 0f;
	Var0.f_2 = (Var0.f_2 + 2f);
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar2, false, false))
	{
		return;
	}
	fVar3 = (fVar1 - fVar2);
	if (fVar3 < 0.3f && fVar3 > -0.3f)
	{
		return;
	}
	if (fVar3 < -3f)
	{
		return;
	}
}

bool func_26()//Position - 0x4DF82A
{
	return Global_2714762.f_688;
}

void func_27(int iParam0)//Position - 0x4DF934
{
	if (!__LIB_18__::func_130(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 19);
	if (Global_2621540 > 0)
	{
		Global_2621540 = (Global_2621540 - 1);
	}
}

float func_28(int iParam0)//Position - 0x4DFA0A
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false) };
	Var1 = { Global_2621865[iParam0 /*26*/].f_3 };
	fVar2 = 0f;
	Var0.f_2 = (Var0.f_2 - 1f);
	fVar2 = (Var0.f_2 - Var1.f_2);
	if (fVar2 < -1f || fVar2 > 3f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
}

void func_29(int iParam0)//Position - 0x4DFAA9
{
	if (!__LIB_18__::func_109(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 16);
}

void func_30(int iParam0)//Position - 0x4DFBEA
{
	if (!__LIB_18__::func_120(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 25);
}

void func_31(int iParam0)//Position - 0x4DFC0F
{
	if (__LIB_18__::func_120(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 25);
}

void func_32(int iParam0)//Position - 0x4DFC9B
{
	if (!__LIB_18__::func_121(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 24);
}

void func_33(int iParam0)//Position - 0x4DFCC0
{
	if (__LIB_18__::func_121(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 24);
}

void func_34(int iParam0, int iParam1)//Position - 0x4DFF7F
{
	struct<10> Var0;
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		default:
			return;
	}
	Var0 = { __LIB_12__::func_467(iParam0) };
	if (Var0.f_9 == -1)
	{
		return;
	}
	if (__LIB_12__::func_466(&Var0))
	{
		return;
	}
	Global_2621865[iParam0 /*26*/].f_15.f_9 = -1;
}

int func_35(int iParam0)//Position - 0x4DFFDB
{
	return Global_2653067[iParam0];
}

int func_36(int iParam0)//Position - 0x4DFFEB
{
	return Global_1573860[iParam0 /*4*/];
}

void func_37(int iParam0, struct<3> Param1)//Position - 0x4E090F
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_1)
	{
		return;
	}
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_1 = 1;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_2 = { Param1 };
}

void func_38(int iParam0)//Position - 0x4E095A
{
	Global_1659366[iParam0 /*11*/] = 5;
}

int func_39()//Position - 0x4E29DB
{
	int iVar0;
	iVar0 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 12000);
	return iVar0;
}

void func_40(int iParam0, int iParam1)//Position - 0x4E3480
{
	struct<75> Var0;
	Var0 = { Global_2653243[iParam0 /*75*/] };
	Global_2653243[iParam0 /*75*/] = { Global_2653243[iParam1 /*75*/] };
	Global_2653243[iParam1 /*75*/] = { Var0 };
}

bool func_41(int iParam0)//Position - 0x4E3719
{
	return Global_2655137[iParam0 /*99*/].f_1;
}

struct<16> func_42(int iParam0)//Position - 0x4E372B
{
	struct<16> Var0;
	if (__LIB_0__::func_53())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2655137[iParam0 /*99*/].f_31)))
		{
			return Global_2655137[iParam0 /*99*/].f_31;
		}
	}
	Var0 = { Global_2655137[iParam0 /*99*/].f_15 };
	return Var0;
}

int func_43(int iParam0)//Position - 0x4E3773
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < Global_1659410)
	{
		if (Global_1659409 >= 12)
		{
			return iVar0;
		}
		if (Global_2654152[iVar1 /*82*/])
		{
			bVar2 = false;
			if (iParam0 == -1)
			{
				bVar2 = true;
			}
			if (!bVar2)
			{
				if (iParam0 == Global_2654152[iVar1 /*82*/].f_54)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!__LIB_13__::func_464(iVar1))
				{
					Global_2653243[Global_1659409 /*75*/].f_5 = 0;
					Global_2653243[Global_1659409 /*75*/] = 4;
					if (Global_2654152[iVar1 /*82*/].f_11)
					{
						Global_2653243[Global_1659409 /*75*/].f_1 = Global_2654152[iVar1 /*82*/].f_9;
						MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 4);
					}
					else
					{
						Global_2653243[Global_1659409 /*75*/].f_1 = Global_2654152[iVar1 /*82*/].f_10;
					}
					Global_2653243[Global_1659409 /*75*/].f_2 = Global_2654152[iVar1 /*82*/].f_13;
					Global_2653243[Global_1659409 /*75*/].f_3 = Global_2654152[iVar1 /*82*/].f_14;
					Global_2653243[Global_1659409 /*75*/].f_4 = Global_2654152[iVar1 /*82*/].f_12;
					Global_2653243[Global_1659409 /*75*/].f_6 = { Global_2654152[iVar1 /*82*/].f_6 };
					Global_2653243[Global_1659409 /*75*/].f_25 = { Global_2654152[iVar1 /*82*/].f_21 };
					Global_2653243[Global_1659409 /*75*/].f_41 = { Global_2654152[iVar1 /*82*/].f_37 };
					Global_2653243[Global_1659409 /*75*/].f_57 = Global_2654152[iVar1 /*82*/].f_15;
					Global_2653243[Global_1659409 /*75*/].f_64 = Global_2654152[iVar1 /*82*/].f_62;
					Global_2653243[Global_1659409 /*75*/].f_65 = Global_2654152[iVar1 /*82*/].f_63;
					Global_2653243[Global_1659409 /*75*/].f_72 = Global_2654152[iVar1 /*82*/].f_75;
					Global_2653243[Global_1659409 /*75*/].f_58 = { Global_2654152[iVar1 /*82*/].f_56 };
					Global_2653243[Global_1659409 /*75*/].f_66 = Global_2654152[iVar1 /*82*/].f_68;
					Global_2653243[Global_1659409 /*75*/].f_67 = Global_2654152[iVar1 /*82*/].f_69;
					Global_2653243[Global_1659409 /*75*/].f_68 = Global_2654152[iVar1 /*82*/].f_70;
					Global_2653243[Global_1659409 /*75*/].f_69 = Global_2654152[iVar1 /*82*/].f_72;
					Global_2653243[Global_1659409 /*75*/].f_70 = Global_2654152[iVar1 /*82*/].f_73;
					Global_2653243[Global_1659409 /*75*/].f_71 = Global_2654152[iVar1 /*82*/].f_74;
					if (!__LIB_13__::func_455(iVar1))
					{
						MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 3);
					}
					Global_1659409++;
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_44(int iParam0)//Position - 0x4E3CD8
{
	return Global_2656326[iParam0 /*46*/].f_3;
}

int func_45(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4E4061
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = 0;
	iVar1 = -1;
	Var2 = { Global_1853348[iParam0 /*834*/].f_36.f_10 };
	iVar0 = 0;
	while (iVar0 < Global_1659409)
	{
		iVar1 = Global_2653243[iVar0 /*75*/].f_1;
		if (Global_2653243[iVar0 /*75*/].f_2 == iParam1 && Global_2653243[iVar0 /*75*/].f_4 == iParam2)
		{
			Var3 = { Global_1853348[iVar1 /*834*/].f_36.f_10 };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var3, true) <= 0.3f)
			{
				if (bParam3)
				{
					MISC::SET_BIT(&(Global_2653243[iVar0 /*75*/].f_5), 1);
				}
				if (BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 7))
				{
					MISC::SET_BIT(&(Global_2653243[iVar0 /*75*/].f_5), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x4E4128
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = Global_1853348[iParam0 /*834*/].f_11;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659409)
	{
		iVar2 = Global_2653243[iVar0 /*75*/].f_4;
		if (iVar1 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x4E4170
{
	switch (iParam0)
	{
		case 6:
			return 0;
		default:
	}
	if (__LIB_12__::func_590(0))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x4E426C
{
	if (Global_1659409 >= 12)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	Global_2653243[Global_1659409 /*75*/] = iParam0;
	Global_2653243[Global_1659409 /*75*/].f_2 = iParam2;
	Global_2653243[Global_1659409 /*75*/].f_3 = -1;
	Global_2653243[Global_1659409 /*75*/].f_1 = iParam1;
	Global_1659409++;
	return 1;
}

bool func_49(int iParam0, int iParam1)//Position - 0x4E4396
{
	var uVar0;
	uVar0 = __LIB_27__::func_464(iParam0);
	return BitTest(uVar0, iParam1);
}

int func_50(var uParam0)//Position - 0x4E445C
{
	int iVar0;
	if (!uParam0->f_901 == Global_1659409)
	{
		return 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!(uParam0[iVar0 /*75*/])->f_1 == Global_2653243[iVar0 /*75*/].f_1 || !(uParam0[iVar0 /*75*/])->f_5 == Global_2653243[iVar0 /*75*/].f_5)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void initGlobal_2653243()//Position - 0x4E44C2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_2653243[iVar0 /*75*/] = 0;
		Global_2653243[iVar0 /*75*/].f_1 = 0;
		Global_2653243[iVar0 /*75*/].f_2 = 0;
		Global_2653243[iVar0 /*75*/].f_3 = -1;
		Global_2653243[iVar0 /*75*/].f_4 = -1;
		Global_2653243[iVar0 /*75*/].f_5 = 0;
		Global_2653243[iVar0 /*75*/].f_6 = { 0f, 0f, 0f };
		StringCopy(&(Global_2653243[iVar0 /*75*/].f_9), "", 64);
		StringCopy(&(Global_2653243[iVar0 /*75*/].f_25), "", 64);
		StringCopy(&(Global_2653243[iVar0 /*75*/].f_41), "", 64);
		Global_2653243[iVar0 /*75*/].f_57 = 0;
		Global_2653243[iVar0 /*75*/].f_66 = 0;
		Global_2653243[iVar0 /*75*/].f_67 = 0;
		Global_2653243[iVar0 /*75*/].f_68 = -1;
		Global_2653243[iVar0 /*75*/].f_69 = 0;
		Global_2653243[iVar0 /*75*/].f_70 = -1;
		Global_2653243[iVar0 /*75*/].f_71 = 0;
		Global_2653243[iVar0 /*75*/].f_73 = 0;
		iVar0++;
	}
	Global_1659409 = 0;
}

void func_52()//Position - 0x4E4E8D
{
	Global_22667 = 1;
}

void func_53()//Position - 0x4E4E99
{
	if (Global_8941[3 /*2811*/][5 /*281*/].f_259 == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", "Phone_SoundSet_Default", true);
	}
}

void func_54(var uParam0)//Position - 0x4E4EC2
{
	Global_22663 = 2;
	Global_22662 = uParam0;
}

int func_55(int iParam0)//Position - 0x4E516E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9493[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_56()//Position - 0x4E519E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::THEFEED_SET_RGBA_PARAMETER_FOR_NEXT_MESSAGE(iVar0, iVar1, iVar2, iVar3);
	iVar4 = 1;
	HUD::THEFEED_SET_FLASH_DURATION_PARAMETER_FOR_NEXT_MESSAGE(iVar4);
	bVar5 = false;
	if (Global_113386.f_14051[Global_20266 /*20*/].f_10 == 1)
	{
		bVar5 = true;
	}
	HUD::THEFEED_SET_VIBRATE_PARAMETER_FOR_NEXT_MESSAGE(bVar5);
}

int func_57(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x4E5317
{
	int iVar0;
	int iVar1;
	if (Global_262145.f_3777 /* Tunable: DISABLE_UGC_PLANNING_CACHE */)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -1;
	}
	if (Global_786550 == 0)
	{
		return -1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return -1;
	}
	iVar0 = MISC::GET_HASH_KEY(&uParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_786550)
	{
		if (Global_786550.f_3082[iVar1 /*13*/].f_3 == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_58(char* sParam0, var uParam1)//Position - 0x4E53A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		StringCopy(uParam1[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0);
	iVar2 = 0;
	iVar3 = 63;
	iVar0 = 0;
	if (iVar1 > 0)
	{
		while (iVar1 >= iVar3 && iVar0 < 8)
		{
			StringCopy(uParam1[iVar0 /*16*/], HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, iVar2, iVar3), 64);
			iVar0++;
			iVar2 = iVar3;
			iVar3 += 63;
		}
		if (iVar0 < 8)
		{
			if (iVar1 > iVar2 && iVar1 < iVar3)
			{
				StringCopy(uParam1[iVar0 /*16*/], HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, iVar2, iVar1), 64);
				iVar0++;
			}
		}
	}
}

char* func_59(int iParam0)//Position - 0x4E5902
{
	switch (iParam0)
	{
		case 0:
			return "FMCI_CHCKPNT_N" /* GXT: Scramble */;
		case 1:
			return "FMCI_HDTHD_N" /* GXT: Head-to-Head Race */;
		case 2:
			return "FMCI_SPRINT_N" /* GXT: Sprint */;
		default:
	}
	return "";
}

void func_60()//Position - 0x4E630F
{
	Global_22667 = 0;
}

var func_61()//Position - 0x4E631B
{
	return Global_1659442;
}

var func_62(bool bParam0)//Position - 0x4E76F9
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_11.f_1, 3);
}

var func_63(bool bParam0)//Position - 0x4E7710
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_11.f_1, 2);
}

int func_64(bool bParam0)//Position - 0x4E7B06
{
	struct<13> Var0;
	if (!__LIB_0__::func_53())
	{
		return 0;
	}
	Var0 = { __LIB_1__::func_696(bParam0) };
	if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
	{
		return 0;
	}
	return 1;
}

int func_65(bool bParam0)//Position - 0x4E7B33
{
	struct<13> Var0;
	if (!__LIB_0__::func_53())
	{
		return 0;
	}
	Var0 = { __LIB_1__::func_696(bParam0) };
	if (NETWORK::NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(&Var0))
	{
		return 0;
	}
	return 1;
}

void func_66(int iParam0)//Position - 0x4E845A
{
	Global_2725419 = iParam0;
}

void func_67()//Position - 0x4E84BD
{
	Global_2725858 = 1;
}

void func_68(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x4EBC55
{
	*uParam0 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
	CAM::SET_CAM_PARAMS(*uParam0, Param1, Param2, fParam3, 0, 1, 1, 2);
	CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.25f);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_FAR_CLIP(*uParam0, 500f);
}

void func_69(var uParam0, int iParam1, int iParam2)//Position - 0x4EC0DC
{
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -885.9518f, 223.3702f, 88.5406f };
					uParam0->f_3 = { 26.6167f, 0f, -45.2182f };
					uParam0->f_6 = 49.3611f;
					break;
				case 1:
					*uParam0 = { -1005.929f, 445.3399f, 143.0898f };
					uParam0->f_3 = { 2.6541f, 0.6784f, -131.8131f };
					uParam0->f_6 = 48.691f;
					break;
				case 2:
					*uParam0 = { -680.1154f, 266.1721f, 87.2771f };
					uParam0->f_3 = { 37.4194f, 0f, 53.8767f };
					uParam0->f_6 = 54.6037f;
					break;
				case 3:
					*uParam0 = { -779.2855f, 405.9464f, 106.2266f };
					uParam0->f_3 = { 45.3313f, 0f, -179.6772f };
					uParam0->f_6 = 44.2609f;
					break;
				case 4:
					*uParam0 = { -894.9058f, 157.4258f, 179.9194f };
					uParam0->f_3 = { 1.196f, 0f, -43.6586f };
					uParam0->f_6 = 36.4321f;
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -213.5606f, -1073.0078f, 32.9946f };
					uParam0->f_3 = { 22.7554f, 0f, 28.5746f };
					uParam0->f_6 = 50.0029f;
					break;
				case 1:
					*uParam0 = { -323.6761f, -938.0006f, 33.1388f };
					uParam0->f_3 = { 50.3562f, 0f, -110.0558f };
					uParam0->f_6 = 50.9248f;
					break;
				case 2:
					*uParam0 = { -197.8791f, -1036.0192f, 30.8882f };
					uParam0->f_3 = { 39.0954f, 0f, 51.9377f };
					uParam0->f_6 = 32.7032f;
					break;
				case 3:
					*uParam0 = { -302.5071f, -1045.5717f, 227.9951f };
					uParam0->f_3 = { -54.0979f, 0f, -20.4519f };
					uParam0->f_6 = 35.9315f;
					break;
				case 4:
					*uParam0 = { -282.1573f, -1005.9299f, 232.2077f };
					uParam0->f_3 = { -76.6024f, 0f, 8.6575f };
					uParam0->f_6 = 15.9715f;
					break;
			}
			break;
		case 3:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -1392.0742f, -570.8373f, 31.4774f };
					uParam0->f_3 = { 30.5301f, 0f, 64.2307f };
					uParam0->f_6 = 35.9982f;
					break;
				case 1:
					*uParam0 = { -1548.4984f, -465.9476f, 62.9037f };
					uParam0->f_3 = { 5.9567f, 0f, -121.5631f };
					uParam0->f_6 = 27.5041f;
					break;
				case 2:
					*uParam0 = { -1325.3636f, -538.2483f, 31.2659f };
					uParam0->f_3 = { 13.3032f, 0f, 83.3714f };
					uParam0->f_6 = 36.7475f;
					break;
				case 3:
					*uParam0 = { -1375.7029f, -547.4904f, 29.652f };
					uParam0->f_3 = { 26.5662f, 0f, 91.0091f };
					uParam0->f_6 = 40.2773f;
					break;
				case 4:
					*uParam0 = { -1360.2229f, -538.6799f, 38.6917f };
					uParam0->f_3 = { 10.2413f, -2.8388f, 102.5978f };
					uParam0->f_6 = 53.2355f;
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -961.9043f, -550.012f, 32.5747f };
					uParam0->f_3 = { 28.8097f, 0f, -26.8876f };
					uParam0->f_6 = 50f;
					break;
				case 1:
					*uParam0 = { -944.8992f, -589.884f, 114.2766f };
					uParam0->f_3 = { 9.8026f, 0f, -28.0001f };
					uParam0->f_6 = 39.3835f;
					break;
				case 2:
					*uParam0 = { -1061.914f, -465.8897f, 111.6679f };
					uParam0->f_3 = { 10.0297f, 0f, -95.863f };
					uParam0->f_6 = 37.074f;
					break;
				case 3:
					*uParam0 = { -898.0392f, -399.63f, 39.1545f };
					uParam0->f_3 = { 58.7284f, 0.0897f, -179.1522f };
					uParam0->f_6 = 50f;
					break;
				case 4:
					*uParam0 = { -932.1243f, -471.0513f, 193.7404f };
					uParam0->f_3 = { -74.0834f, 0f, -15.0768f };
					uParam0->f_6 = 41.0466f;
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -67.3495f, -513.4921f, 42.6787f };
					uParam0->f_3 = { 23.7233f, 0f, -151.7019f };
					uParam0->f_6 = 55.5648f;
					break;
				case 1:
					*uParam0 = { -72.4999f, -582.1418f, 39.1127f };
					uParam0->f_3 = { 49.0853f, 0f, -127.3052f };
					uParam0->f_6 = 63.5539f;
					break;
				case 2:
					*uParam0 = { -107.6931f, -603.4216f, 38.2444f };
					uParam0->f_3 = { 33.9707f, 0f, -92.9207f };
					uParam0->f_6 = 47.4136f;
					break;
				case 3:
					*uParam0 = { -61.3588f, -680.9072f, 40.2634f };
					uParam0->f_3 = { 25.5856f, 0f, 4.5153f };
					uParam0->f_6 = 60.2176f;
					break;
				case 4:
					*uParam0 = { -70.9133f, -561.0882f, 131.3551f };
					uParam0->f_3 = { -58.5274f, 0f, -145.3088f };
					uParam0->f_6 = 44.7537f;
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -960.2891f, -472.7867f, 39.0439f };
					uParam0->f_3 = { 24.7986f, 0.0409f, -21.4827f };
					uParam0->f_6 = 52.0185f;
					break;
				case 1:
					*uParam0 = { -948.9227f, -417.8185f, 38.2592f };
					uParam0->f_3 = { 40.3772f, 0f, -15.5227f };
					uParam0->f_6 = 67.7998f;
					break;
				case 2:
					*uParam0 = { -892.0462f, -394.0205f, 141.2545f };
					uParam0->f_3 = { -52.4628f, 0f, 60.5147f };
					uParam0->f_6 = 75.2894f;
					break;
				case 3:
					*uParam0 = { -928.1372f, -428.1431f, 124.677f };
					uParam0->f_3 = { -1.9624f, -0.2152f, -14.2648f };
					uParam0->f_6 = 54.9758f;
					break;
				case 4:
					*uParam0 = { -905.6004f, -293.2657f, 41.9486f };
					uParam0->f_3 = { 43.2627f, 3.8988f, 175.5304f };
					uParam0->f_6 = 33.937f;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -667.2404f, -25.1369f, 43.1678f };
					uParam0->f_3 = { 21.8261f, 0f, -39.9922f };
					uParam0->f_6 = 48.3545f;
					break;
				case 1:
					*uParam0 = { -667.8553f, -28.9006f, 41.2252f };
					uParam0->f_3 = { 22.8893f, 0f, -52.7611f };
					uParam0->f_6 = 54.0359f;
					break;
				case 2:
					*uParam0 = { -610.4257f, 204.0192f, 100.9878f };
					uParam0->f_3 = { -5.2361f, 0f, -165.0898f };
					uParam0->f_6 = 38.4484f;
					break;
				case 3:
					*uParam0 = { -545.654f, -41.3291f, 74.0575f };
					uParam0->f_3 = { 2.8113f, 0f, 44.689f };
					uParam0->f_6 = 62.0178f;
					break;
				case 4:
					*uParam0 = { -586.9001f, -92.5411f, 61.7151f };
					uParam0->f_3 = { 4.1604f, 0f, 4.4756f };
					uParam0->f_6 = 46.1658f;
					break;
			}
			break;
		case 58:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -197.7389f, 510.5206f, 136.3903f };
					uParam0->f_3 = { 4.4541f, 0f, -130.5121f };
					uParam0->f_6 = 50.4296f;
					break;
				case 1:
					*uParam0 = { -169.1212f, 527.376f, 142.9745f };
					uParam0->f_3 = { -6.3103f, 0f, 164.9361f };
					uParam0->f_6 = 32.4097f;
					break;
				case 2:
					*uParam0 = { -169.2143f, 518.2604f, 139.0207f };
					uParam0->f_3 = { -4.6553f, 0f, 161.8068f };
					uParam0->f_6 = 47.2748f;
					break;
				case 3:
					*uParam0 = { -207.4332f, 510.9664f, 134.9146f };
					uParam0->f_3 = { 5.9677f, 0f, -121.2417f };
					uParam0->f_6 = 33.5913f;
					break;
				case 4:
					*uParam0 = { -168.7606f, 517.1948f, 144.7751f };
					uParam0->f_3 = { -24.9315f, 0f, 159.1448f };
					uParam0->f_6 = 45.9462f;
					break;
			}
			break;
		case 59:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 349.7426f, 463.4214f, 150.5502f };
					uParam0->f_3 = { -2.7041f, 0f, 161.0581f };
					uParam0->f_6 = 35.5099f;
					break;
				case 1:
					*uParam0 = { 369.4083f, 446.0274f, 149.2577f };
					uParam0->f_3 = { -6.2912f, 0f, 118.4015f };
					uParam0->f_6 = 48.7713f;
					break;
				case 2:
					*uParam0 = { 369.3146f, 439.4409f, 145.6846f };
					uParam0->f_3 = { 5.6182f, 0f, 97.9462f };
					uParam0->f_6 = 43.3638f;
					break;
				case 3:
					*uParam0 = { 349.6898f, 458.571f, 148.8095f };
					uParam0->f_3 = { 6.2431f, 0f, 169.6303f };
					uParam0->f_6 = 52.1804f;
					break;
				case 4:
					*uParam0 = { 364.7197f, 459.9904f, 155.0079f };
					uParam0->f_3 = { -11.3527f, 0f, 142.9213f };
					uParam0->f_6 = 41.522f;
					break;
			}
			break;
		case 60:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -728.8906f, 604.4725f, 145.8867f };
					uParam0->f_3 = { -5.1049f, 0f, 58.7266f };
					uParam0->f_6 = 43.6559f;
					break;
				case 1:
					*uParam0 = { -742.6712f, 642.7081f, 147.123f };
					uParam0->f_3 = { -1.8667f, 0f, 143.9352f };
					uParam0->f_6 = 45.2768f;
					break;
				case 2:
					*uParam0 = { -736.4854f, 629.4451f, 151.568f };
					uParam0->f_3 = { -19.0573f, 0f, 118.6126f };
					uParam0->f_6 = 52.8655f;
					break;
				case 3:
					*uParam0 = { -750.1407f, 635.4058f, 143.2065f };
					uParam0->f_3 = { 7.281f, 0f, 150.2378f };
					uParam0->f_6 = 56.8287f;
					break;
				case 4:
					*uParam0 = { -741.3972f, 608.1267f, 145.6561f };
					uParam0->f_3 = { -4.0551f, 0f, 65.9835f };
					uParam0->f_6 = 58.8565f;
					break;
			}
			break;
		case 61:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -717.0034f, 600.6978f, 147.893f };
					uParam0->f_3 = { -4.9085f, 0f, -98.586f };
					uParam0->f_6 = 32.2276f;
					break;
				case 1:
					*uParam0 = { -701.1855f, 600.7932f, 143.6584f };
					uParam0->f_3 = { 7.7196f, 0f, -113.1052f };
					uParam0->f_6 = 49.7649f;
					break;
				case 2:
					*uParam0 = { -701.0754f, 605.7044f, 149.8881f };
					uParam0->f_3 = { -13.0822f, 0f, -127.8861f };
					uParam0->f_6 = 47.8507f;
					break;
				case 3:
					*uParam0 = { -689.851f, 613.3149f, 144.5428f };
					uParam0->f_3 = { 2.7851f, 0f, -159.4652f };
					uParam0->f_6 = 36.3593f;
					break;
				case 4:
					*uParam0 = { -684.5708f, 616.9944f, 146.6868f };
					uParam0->f_3 = { -1.7926f, 0f, -174.1436f };
					uParam0->f_6 = 41.2348f;
					break;
			}
			break;
		case 62:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 130.9311f, 583.0837f, 190.7715f };
					uParam0->f_3 = { -8.6044f, 0f, 169.1267f };
					uParam0->f_6 = 54.4566f;
					break;
				case 1:
					*uParam0 = { 111.3322f, 576.2406f, 183.0462f };
					uParam0->f_3 = { 13.1423f, 0f, -136.5486f };
					uParam0->f_6 = 44.7519f;
					break;
				case 2:
					*uParam0 = { 123.3129f, 580.7582f, 185.1801f };
					uParam0->f_3 = { 6.9979f, 0f, -175.0756f };
					uParam0->f_6 = 50.0517f;
					break;
				case 3:
					*uParam0 = { 140.2376f, 575.8712f, 183.975f };
					uParam0->f_3 = { 7.5347f, 0f, 125.2426f };
					uParam0->f_6 = 45.2281f;
					break;
				case 4:
					*uParam0 = { 132.543f, 586.0762f, 189.4462f };
					uParam0->f_3 = { -8.4016f, 0f, 162.3881f };
					uParam0->f_6 = 31.4711f;
					break;
			}
			break;
		case 63:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6597f, 674.514f, 147.0296f };
					uParam0->f_3 = { -2.4999f, 0f, 129.3025f };
					uParam0->f_6 = 33.2745f;
					break;
				case 1:
					*uParam0 = { -536.9955f, 669.2134f, 144.4017f };
					uParam0->f_3 = { 10.3434f, 0f, 110.239f };
					uParam0->f_6 = 34.9284f;
					break;
				case 2:
					*uParam0 = { -571.9711f, 682.6545f, 150.4516f };
					uParam0->f_3 = { -10.9494f, 0f, -144.6349f };
					uParam0->f_6 = 41.6942f;
					break;
				case 3:
					*uParam0 = { -529.8699f, 672.4476f, 143.8666f };
					uParam0->f_3 = { 5.4286f, 0f, 107.2091f };
					uParam0->f_6 = 31.2494f;
					break;
				case 4:
					*uParam0 = { -524.9136f, 665.4783f, 158.24f };
					uParam0->f_3 = { -20.6896f, 0f, 102.291f };
					uParam0->f_6 = 26.0316f;
					break;
			}
			break;
		case 64:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -714.4224f, 598.4947f, 144.1234f };
					uParam0->f_3 = { 5.9852f, 0f, 94.4228f };
					uParam0->f_6 = 45.565f;
					break;
				case 1:
					*uParam0 = { -738.5571f, 612.7238f, 142.0696f };
					uParam0->f_3 = { 14.136f, 0.6588f, 169.283f };
					uParam0->f_6 = 54.2471f;
					break;
				case 2:
					*uParam0 = { -718.2198f, 608.2428f, 152.5514f };
					uParam0->f_3 = { -19.1555f, 0.6588f, 128.9267f };
					uParam0->f_6 = 40.0876f;
					break;
				case 3:
					*uParam0 = { -742.6341f, 622.4393f, 144.8027f };
					uParam0->f_3 = { -0.3429f, 0f, -173.5023f };
					uParam0->f_6 = 41.1613f;
					break;
				case 4:
					*uParam0 = { -737.188f, 616.2004f, 148.5f };
					uParam0->f_3 = { -7.1895f, 0f, -171.5297f };
					uParam0->f_6 = 40.1556f;
					break;
					break;
			}
			break;
		case 65:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -846.7444f, 711.5901f, 151.8802f };
					uParam0->f_3 = { -5.2972f, 0f, 145.8721f };
					uParam0->f_6 = 40.4533f;
					break;
				case 1:
					*uParam0 = { -875.7339f, 710.2248f, 152.0264f };
					uParam0->f_3 = { -0.8038f, 0f, -139.0049f };
					uParam0->f_6 = 43.0582f;
					break;
				case 2:
					*uParam0 = { -861.1381f, 718.2349f, 166.3458f };
					uParam0->f_3 = { -34.0003f, 0f, -166.629f };
					uParam0->f_6 = 47.9323f;
					break;
				case 3:
					*uParam0 = { -861.1381f, 718.2349f, 166.3458f };
					uParam0->f_3 = { -34.0003f, 0f, -166.629f };
					uParam0->f_6 = 47.9323f;
					break;
				case 4:
					*uParam0 = { -893.9624f, 715.9857f, 153.2935f };
					uParam0->f_3 = { -4.2714f, 0f, -116.7937f };
					uParam0->f_6 = 28.0439f;
					break;
			}
			break;
		case 66:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -1300.0275f, 465.0517f, 101.3412f };
					uParam0->f_3 = { -10.5096f, 0f, -152.1912f };
					uParam0->f_6 = 44.4357f;
					break;
				case 1:
					*uParam0 = { -1282.027f, 465.9779f, 95.7958f };
					uParam0->f_3 = { 17.283f, 0f, 152.5088f };
					uParam0->f_6 = 53.4171f;
					break;
				case 2:
					*uParam0 = { -1276.7308f, 461.4053f, 96.401f };
					uParam0->f_3 = { 8.1526f, 0f, 136.4044f };
					uParam0->f_6 = 50f;
					break;
				case 3:
					*uParam0 = { -1273.4889f, 460.8777f, 102.1842f };
					uParam0->f_3 = { -24.7807f, 0f, 135.9527f };
					uParam0->f_6 = 50f;
					break;
				case 4:
					*uParam0 = { -1304.7279f, 468.4829f, 102.4148f };
					uParam0->f_3 = { -10.122f, 0f, -145.0509f };
					uParam0->f_6 = 39.8609f;
					break;
			}
			break;
		case 67:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 384.7624f, 440.3207f, 145.0527f };
					uParam0->f_3 = { -1.9896f, 0f, 144.6732f };
					uParam0->f_6 = 48.4143f;
					break;
				case 1:
					*uParam0 = { 365.7408f, 443.1193f, 145.9301f };
					uParam0->f_3 = { 0.1767f, 0f, -162.6344f };
					uParam0->f_6 = 43.6114f;
					break;
				case 2:
					*uParam0 = { 386.8551f, 450.5209f, 148.9287f };
					uParam0->f_3 = { -5.2061f, 0f, 151.8171f };
					uParam0->f_6 = 29.5462f;
					break;
				case 3:
					*uParam0 = { 357.9258f, 451.9459f, 145.8073f };
					uParam0->f_3 = { 0.652f, 0f, -149.457f };
					uParam0->f_6 = 33.9579f;
					break;
				case 4:
					*uParam0 = { 393.1492f, 444.4349f, 151.6931f };
					uParam0->f_3 = { -13.4973f, 0f, 148.1239f };
					uParam0->f_6 = 50f;
					break;
			}
			break;
		case 68:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -1584.1599f, -627.3773f, 100.8102f };
					uParam0->f_3 = { 2.1506f, 0f, 0.071f };
					uParam0->f_6 = 55.535f;
					break;
				case 1:
					*uParam0 = { -1643.2924f, -580.6568f, 101.245f };
					uParam0->f_3 = { -3.349f, 0f, -83.8367f };
					uParam0->f_6 = 41.6441f;
					break;
				case 2:
					*uParam0 = { -1662.2368f, -576.6899f, 33.5333f };
					uParam0->f_3 = { 33.7445f, 0f, -92.6563f };
					uParam0->f_6 = 33.1968f;
					break;
				case 3:
					*uParam0 = { -1623.911f, -675.9907f, 77.093f };
					uParam0->f_3 = { 6.6353f, 0f, -26.9933f };
					uParam0->f_6 = 33.1968f;
					break;
				case 4:
					*uParam0 = { -1640.9473f, -584.2517f, 123.2783f };
					uParam0->f_3 = { -9.4922f, 0f, -83.882f };
					uParam0->f_6 = 37.9602f;
					break;
			}
			break;
		case 69:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -1319.483f, -525.5394f, 59.4223f };
					uParam0->f_3 = { 3.8675f, 0f, 52.6338f };
					uParam0->f_6 = 55.5659f;
					break;
				case 1:
					*uParam0 = { -1366.5627f, -540.9052f, 41.7059f };
					uParam0->f_3 = { 19.1456f, 0f, -0.523f };
					uParam0->f_6 = 62.4535f;
					break;
				case 2:
					*uParam0 = { -1447.0181f, -477.3477f, 89.4685f };
					uParam0->f_3 = { -7.8524f, 0f, -90.1828f };
					uParam0->f_6 = 45f;
					break;
				case 3:
					*uParam0 = { -1436.4829f, -519.5764f, 46.4599f };
					uParam0->f_3 = { 11.9961f, 0f, -49.6801f };
					uParam0->f_6 = 60.6974f;
					break;
				case 4:
					*uParam0 = { -1413.0717f, -544.0135f, 50.3749f };
					uParam0->f_3 = { 5.7809f, 0f, -29.3278f };
					uParam0->f_6 = 64.5079f;
					break;
			}
			break;
		case 70:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -90.5981f, -639.1288f, 43.0304f };
					uParam0->f_3 = { 21.7355f, 0f, 23.903f };
					uParam0->f_6 = 50f;
					break;
				case 1:
					*uParam0 = { -209.4408f, -637.1819f, 51.2638f };
					uParam0->f_3 = { 28.8177f, 0f, -53.9284f };
					uParam0->f_6 = 69.4782f;
					break;
				case 2:
					*uParam0 = { -291.8475f, -682.1937f, 115.9967f };
					uParam0->f_3 = { -11.4594f, 0f, -59.2777f };
					uParam0->f_6 = 46.6231f;
					break;
				case 3:
					*uParam0 = { -156.8309f, -706.6057f, 43.1322f };
					uParam0->f_3 = { 42.7982f, 0f, -9.9844f };
					uParam0->f_6 = 53.0363f;
					break;
				case 4:
					*uParam0 = { -21.7145f, -552.9631f, 178.1255f };
					uParam0->f_3 = { -8.6541f, 0f, 115.174f };
					uParam0->f_6 = 49.6327f;
					break;
			}
			break;
		case 71:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -116.9155f, -876.4891f, 299.0441f };
					uParam0->f_3 = { 1.171f, 0f, -43.7803f };
					uParam0->f_6 = 50f;
					break;
				case 1:
					*uParam0 = { -23.493f, -698.7332f, 261.5253f };
					uParam0->f_3 = { 5.0408f, 0f, 157.9843f };
					uParam0->f_6 = 56.6759f;
					break;
				case 2:
					*uParam0 = { -152.7363f, -747.0823f, 40.5166f };
					uParam0->f_3 = { 37.7232f, 0f, -120.7514f };
					uParam0->f_6 = 71.9701f;
					break;
				case 3:
					*uParam0 = { -9.5656f, -784.3034f, 323.6057f };
					uParam0->f_3 = { -18.6225f, 0f, 108.7237f };
					uParam0->f_6 = 52.5694f;
					break;
				case 4:
					*uParam0 = { -109.0389f, -899.1192f, 358.453f };
					uParam0->f_3 = { -35.1415f, 0f, -23.7808f };
					uParam0->f_6 = 38.9297f;
					break;
			}
			break;
	}
}

int func_70()//Position - 0x4EDB66
{
	return Global_1937518.f_3;
}

void initGlobal_2656879()//Position - 0x4EDC9F
{
	struct<35> Var0;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_24 = -1;
	Global_2656879 = { Var0 };
	Global_2656879.f_21 = { 0f, 0f, 0f };
	Global_2656879.f_25 = MISC::GET_GAME_TIMER();
}

bool func_72()//Position - 0x4EDCDD
{
	return Global_2656879.f_20;
}

Vector3 func_73(int iParam0, struct<3> Param1, float fParam2)//Position - 0x4EE4FF
{
	struct<3> Var0;
	float fVar1;
	int iVar2[3];
	int iVar3;
	int iVar4;
	float fVar5[3];
	float fVar6;
	struct<2> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	fVar1 = (fParam2 / 3f);
	iVar2[0] = 5;
	iVar2[1] = 10;
	iVar2[2] = 17;
	if (iParam0 <= iVar2[0])
	{
		iVar3 = 0;
		iVar4 = iParam0;
	}
	else if (iParam0 <= (iVar2[1] + iVar2[0]))
	{
		iVar3 = 1;
		iVar4 = (iParam0 - iVar2[0]);
	}
	else
	{
		iVar3 = 2;
		iVar4 = ((iParam0 - iVar2[1]) - iVar2[0]);
	}
	fVar5[0] = SYSTEM::TO_FLOAT((360 / iVar2[0]));
	fVar5[1] = SYSTEM::TO_FLOAT((360 / iVar2[1]));
	fVar5[2] = SYSTEM::TO_FLOAT((360 / iVar2[2]));
	fVar6 = (fVar5[iVar3] * IntToFloat(iVar4));
	fVar9 = SYSTEM::COS(fVar6);
	fVar10 = SYSTEM::SIN(fVar6);
	Var7.f_0 = ((fVar9 * 0f) - (fVar10 * 1f));
	Var7.f_1 = ((fVar10 * 0f) + (fVar9 * 1f));
	fVar8 = MISC::GET_HEADING_FROM_VECTOR_2D(Var7.f_0, Var7.f_1);
	Var11 = { 0f, (fVar1 * IntToFloat(iVar3 + 1)), 0f };
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fVar8, Var11) };
	return Var0;
}

void func_74()//Position - 0x4EE83F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659410)
	{
		if (Global_2654152[iVar0 /*82*/].f_54 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_2654152[iVar0 /*82*/].f_54);
			Global_2654152[iVar0 /*82*/].f_54 = -1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1659438)
	{
		if (Global_2655137[iVar0 /*99*/].f_92 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_2655137[iVar0 /*99*/].f_92);
			Global_2655137[iVar0 /*99*/].f_92 = -1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1659440)
	{
		if (Global_2656326[iVar0 /*46*/].f_26 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_2656326[iVar0 /*46*/].f_26);
			Global_2656326[iVar0 /*46*/].f_26 = -1;
		}
		iVar0++;
	}
}

void func_75(var uParam0, char* sParam1, var uParam2)//Position - 0x4EE9D0
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				iVar1 = __LIB_5__::func_190(iVar2, 0, 0, 0);
				Var0.f_0 = -1908874529;
				Var0.f_1 = PLAYER::PLAYER_ID();
				StringCopy(&(Var0.f_2), sParam1, 64);
				Var0.f_18 = uParam0;
				Var0.f_19 = uParam2;
				if (iVar1 != 0)
				{
					SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 20, iVar1);
				}
				return;
			}
		}
	}
}

bool func_76()//Position - 0x4EEA7C
{
	return Global_2656879.f_1 != 0;
}

void func_77()//Position - 0x4EEC2D
{
	Global_2653202.f_3 = 0;
}

void func_78()//Position - 0x4EEC3C
{
	Global_2653202.f_1 = 0;
}

bool func_79()//Position - 0x4EF140
{
	return BitTest(Global_2653202.f_1, 4);
}

void func_80()//Position - 0x4EF33B
{
	Global_2667121 = (MISC::GET_GAME_TIMER() + 600000);
}

void func_81()//Position - 0x4EF621
{
	int iVar0;
	if (__LIB_27__::func_334(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		Global_2689235[iVar0 /*453*/].f_237 = 0;
		Global_2689235[iVar0 /*453*/].f_236 = 0;
	}
}

void func_82(int iParam0)//Position - 0x4EF70F
{
	Global_2667225.f_602 = iParam0;
}

void func_83(struct<3> Param0)//Position - 0x4EFE7E
{
	Global_2714762.f_43.f_575 = { Param0 };
}

bool func_84()//Position - 0x4F0852
{
	return BitTest(Global_2653202.f_1, 8);
}

bool func_85()//Position - 0x4F0863
{
	return BitTest(Global_2653202.f_1, 3);
}

bool func_86()//Position - 0x4F0873
{
	return BitTest(Global_2653202.f_1, 2);
}

void func_87()//Position - 0x4F0A66
{
	Global_2653202 = 6;
}

void func_88()//Position - 0x4F0C16
{
	Global_2653202 = 3;
}

int func_89()//Position - 0x4F122B
{
	if (Global_2653202 == 0)
	{
		return 0;
	}
	return 1;
}

int func_90(char* sParam0, int iParam1, struct<17> Param2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x4F2BB5
{
	if (SCRIPT::DOES_SCRIPT_EXIST(sParam0))
	{
		if (iParam8 && Param2.f_16 != -1)
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 4);
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_1 = Param2.f_16;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			if (bParam11)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			}
		}
		if (bParam7)
		{
			HUD::SET_FRONTEND_ACTIVE(false);
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
			}
		}
		SCRIPT::REQUEST_SCRIPT(sParam0);
		if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			if (bParam7)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					return 0;
				}
			}
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			SYSTEM::START_NEW_SCRIPT_WITH_ARGS(sParam0, &Param2, 21, iParam1);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
			if (!bParam10)
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 0);
			}
			MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 4);
			if (bParam9)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					__LIB_13__::func_430();
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_91()//Position - 0x4F5775
{
	return BitTest(Global_1977083.f_1, 0);
}

void func_92(int iParam0)//Position - 0x4F5837
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_2 = iParam0;
}

int func_93()//Position - 0x4F59B5
{
	return Global_262145.f_29248 /* Tunable: 1899222198 */;
}

int func_94(int iParam0)//Position - 0x4F8D43
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1946250.f_10, 14);
	}
	return 0;
}

void func_95(int iParam0, bool bParam1)//Position - 0x4F8D9D
{
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 12);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_10), 12);
		}
	}
}

void func_96(int iParam0, bool bParam1)//Position - 0x4FD093
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	iVar0 = __LIB_18__::func_119(iParam0);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 21);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 21);
	}
	bVar1 = true;
	if (bParam1)
	{
		bVar1 = false;
	}
	if (HUD::GET_BLIP_INFO_ID_DISPLAY(iVar0) == 0)
	{
		return;
	}
	HUD::SET_BLIP_AS_SHORT_RANGE(iVar0, bVar1);
}

bool func_97()//Position - 0x4FFDAC
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 7);
}

char* func_98(int iParam0)//Position - 0x506242
{
	char* sVar0;
	sVar0 = "MPInventory";
	if (iParam0 == 1)
	{
	}
	return sVar0;
}

char* func_99(int iParam0)//Position - 0x506259
{
	char* sVar0;
	sVar0 = "MP_SpecItem_Car";
	switch (iParam0)
	{
		case 1:
			return "MP_Cop_PoliceCar";
			break;
		case 4:
			return "MP_Vagos_Cavalcade";
			break;
		case 23:
			return "MP_Biker_Hexer";
			break;
		case 2:
			return "MP_Cop_Heli";
			break;
		case 3:
			return "MP_Cop_Bike";
			break;
		case 14:
			return "MP_SpecItem_Heli";
			break;
		case 8:
			return "MP_SpecItem_Boat";
			break;
		case 9:
			return "MP_SpecItem_Bike";
			break;
		case 12:
			return "MP_SpecItem_Plane";
			break;
		case 16:
			return "MP_SpecItem_Heli";
			break;
		case 17:
			return "MP_SpecItem_Plane";
			break;
		case 19:
			return "MP_SpecItem_Bike";
			break;
		case 32:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 33:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 34:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 35:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 36:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 37:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 38:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 25:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 26:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 27:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 28:
			sVar0 = "MP_SpecItem_Heli";
			break;
		case 29:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 30:
			sVar0 = "MP_SpecItem_Plane";
			break;
		case 31:
			sVar0 = "MP_SpecItem_Plane";
			break;
	}
	return sVar0;
}

char* func_100(int iParam0)//Position - 0x50641D
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "VEHLC_COPCAR_D";
			break;
		case 2:
			return "VEHLC_COPHELI_D";
			break;
		case 3:
			return "VEHLC_COPBIKE_D";
			break;
		case 4:
			return "VEHLC_VAGCAR_D";
			break;
		case 23:
			return "VEHLC_LOST_D";
			break;
	}
	return sVar0;
}

char* func_101(int iParam0)//Position - 0x506488
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "VEHLC_COPCAR";
			break;
		case 2:
			return "VEHLC_COPHELI";
			break;
		case 3:
			return "VEHLC_COPBIKE";
			break;
		case 4:
			return "VEHLC_VAGCAR";
			break;
		case 23:
			return "VEHLC_LOST";
			break;
		case 5:
			return "VEHCL_INSUR" /* GXT: HVY Insurgent Pick-Up */;
			break;
		case 6:
			return "VEHCL_INSURG2" /* GXT: HVY Insurgent */;
			break;
		case 7:
			return "VEHCL_CASCO" /* GXT: Lampadati Casco */;
			break;
		case 8:
			return "VEHCL_DINGHY3" /* GXT: Nagasaki Dinghy */;
			break;
		case 9:
			return "VEHCL_ENDURO" /* GXT: Dinka Enduro */;
			break;
		case 10:
			return "VEHCL_GBURR2" /* GXT: Declasse Gang Burrito */;
			break;
		case 11:
			return "VEHCL_GUARD" /* GXT: Vapid Guardian */;
			break;
		case 12:
			return "VEHCL_HYDRA" /* GXT: Mammoth Hydra */;
			break;
		case 13:
			return "VEHCL_PBUS" /* GXT: Police Prison Bus */;
			break;
		case 14:
			return "VEHCL_SAVAGE" /* GXT: Savage */;
			break;
		case 15:
			return "VEHCL_TECH" /* GXT: Karin Technical */;
			break;
		case 16:
			return "VEHCL_VAL" /* GXT: Buckingham Valkyrie */;
			break;
		case 17:
			return "VEHCL_VELUM2" /* GXT: Velum */;
			break;
		case 20:
			return "VEHCL_BOX4" /* GXT: Brute Boxville */;
			break;
		case 18:
			return "VEHCL_KURUMA" /* GXT: Kuruma */;
			break;
		case 22:
			return "VEHCL_KURUMA2" /* GXT: Kuruma (Armored) */;
			break;
		case 19:
			return "VEHCL_LECTRO" /* GXT: Lectro */;
			break;
		case 21:
			return "VEHCL_MULE3" /* GXT: Mule */;
			break;
		case 24:
			return "VEHCL_SHOTAR" /* GXT: Shotaro */;
			break;
		case 32:
			return "SMUGBOMBUSHKAb" /* GXT: Bombushka */;
			break;
		case 33:
			return "SMUGHOWARDb" /* GXT: Howard NX-25 */;
			break;
		case 34:
			return "SMUGMOGULb" /* GXT: Mogul */;
			break;
		case 35:
			return "SMUGHUNTERb" /* GXT: Hunter */;
			break;
		case 36:
			return "SMUGSEABREEb" /* GXT: Western Seabreeze */;
			break;
		case 37:
			return "SMUGNOKOTAb" /* GXT: P-45 Nokota */;
			break;
		case 38:
			return "SMUGPYROb" /* GXT: Pyro */;
			break;
		case 25:
			return "SMUGMICROLIGHTb" /* GXT: Ultralight */;
			break;
		case 26:
			return "SMUGROGUEb" /* GXT: Rogue */;
			break;
		case 27:
			return "SMUGALPHAZ1b" /* GXT: Alpha-Z1 */;
			break;
		case 28:
			return "SMUGHAVOKb" /* GXT: Havok */;
			break;
		case 29:
			return "SMUGSTARLINGb" /* GXT: Starling */;
			break;
		case 30:
			return "SMUGMOLOTOKb" /* GXT: V-65 Molotok */;
			break;
		case 31:
			return "SMUGTULAb" /* GXT: Tula */;
			break;
	}
	return sVar0;
}

var func_102(int iParam0)//Position - 0x506741
{
	var uVar0;
	uVar0 = Global_2825435.f_1053[__LIB_0__::func_161(iParam0)];
	return uVar0;
}

bool func_103()//Position - 0x511511
{
	return __LIB_1__::func_702();
}

char* func_104(int iParam0, bool bParam1)//Position - 0x5127EF
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "HPSTRAND_IAAb" /* GXT: The Data Breaches */;
			}
			return "HPSTRAND_IAA" /* GXT: THE DATA BREACHES */;
		case 1:
			if (bParam1)
			{
				return "HPSTRAND_SUBb" /* GXT: The Bogdan Problem */;
			}
			return "HPSTRAND_SUB" /* GXT: THE BOGDAN PROBLEM */;
		case 2:
			if (bParam1)
			{
				return "HPSTRAND_MSILb" /* GXT: The Doomsday Scenario */;
			}
			return "HPSTRAND_MSIL" /* GXT: THE DOOMSDAY SCENARIO */;
		default:
	}
	return "*INVALID*";
}

int func_105(int iParam0)//Position - 0x512854
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
	}
	return -1;
}

void func_106(int iParam0, bool bParam1)//Position - 0x512B31
{
	bool bVar0;
	bVar0 = iParam0;
	if (bParam1)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_414.f_1, bVar0))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_414.f_1), bVar0);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_414.f_1, bVar0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_414.f_1), bVar0);
	}
}

int func_107(int iParam0)//Position - 0x513679
{
	switch (iParam0)
	{
		case 5:
		case 8:
		case 1:
		case 11:
		case 22:
		case 4:
		case 6:
		case 24:
		case 27:
		case 28:
		case 13:
		case 30:
		case 7:
			return 1;
		default:
	}
	return 0;
}

void func_108(int iParam0, bool bParam1)//Position - 0x513AC0
{
	var uVar0;
	int iVar1;
	uVar0 = Global_1659583[iParam0];
	iVar1 = uVar0;
	STATS::STAT_SET_BOOL(iVar1, bParam1, true);
}

void func_109(int iParam0, float fParam1)//Position - 0x514B94
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_FLOAT(iVar0, fParam1, true);
	}
}

int func_110(float fParam0)//Position - 0x51B495
{
	int iVar0;
	iVar0 = 0;
	if (fParam0 > 95f)
	{
		iVar0 = Global_262145.f_24069 /* Tunable: NIGHTCLUBINCOMEUPTOPOP100 */;
	}
	else if (fParam0 > 90f)
	{
		iVar0 = Global_262145.f_24068 /* Tunable: NIGHTCLUBINCOMEUPTOPOP95 */;
	}
	else if (fParam0 > 85f)
	{
		iVar0 = Global_262145.f_24067 /* Tunable: NIGHTCLUBINCOMEUPTOPOP90 */;
	}
	else if (fParam0 > 80f)
	{
		iVar0 = Global_262145.f_24066 /* Tunable: NIGHTCLUBINCOMEUPTOPOP85 */;
	}
	else if (fParam0 > 75f)
	{
		iVar0 = Global_262145.f_24065 /* Tunable: NIGHTCLUBINCOMEUPTOPOP80 */;
	}
	else if (fParam0 > 70f)
	{
		iVar0 = Global_262145.f_24064 /* Tunable: NIGHTCLUBINCOMEUPTOPOP75 */;
	}
	else if (fParam0 > 65f)
	{
		iVar0 = Global_262145.f_24063 /* Tunable: NIGHTCLUBINCOMEUPTOPOP70 */;
	}
	else if (fParam0 > 60f)
	{
		iVar0 = Global_262145.f_24062 /* Tunable: NIGHTCLUBINCOMEUPTOPOP65 */;
	}
	else if (fParam0 > 55f)
	{
		iVar0 = Global_262145.f_24061 /* Tunable: NIGHTCLUBINCOMEUPTOPOP60 */;
	}
	else if (fParam0 > 50f)
	{
		iVar0 = Global_262145.f_24060 /* Tunable: NIGHTCLUBINCOMEUPTOPOP55 */;
	}
	else if (fParam0 > 45f)
	{
		iVar0 = Global_262145.f_24059 /* Tunable: NIGHTCLUBINCOMEUPTOPOP50 */;
	}
	else if (fParam0 > 40f)
	{
		iVar0 = Global_262145.f_24058 /* Tunable: NIGHTCLUBINCOMEUPTOPOP45 */;
	}
	else if (fParam0 > 35f)
	{
		iVar0 = Global_262145.f_24057 /* Tunable: NIGHTCLUBINCOMEUPTOPOP40 */;
	}
	else if (fParam0 > 30f)
	{
		iVar0 = Global_262145.f_24056 /* Tunable: NIGHTCLUBINCOMEUPTOPOP35 */;
	}
	else if (fParam0 > 25f)
	{
		iVar0 = Global_262145.f_24055 /* Tunable: NIGHTCLUBINCOMEUPTOPOP30 */;
	}
	else if (fParam0 > 20f)
	{
		iVar0 = Global_262145.f_24054 /* Tunable: NIGHTCLUBINCOMEUPTOPOP25 */;
	}
	else if (fParam0 > 15f)
	{
		iVar0 = Global_262145.f_24053 /* Tunable: NIGHTCLUBINCOMEUPTOPOP20 */;
	}
	else if (fParam0 > 10f)
	{
		iVar0 = Global_262145.f_24052 /* Tunable: NIGHTCLUBINCOMEUPTOPOP15 */;
	}
	else if (fParam0 > 5f)
	{
		iVar0 = Global_262145.f_24051 /* Tunable: NIGHTCLUBINCOMEUPTOPOP10 */;
	}
	else
	{
		iVar0 = Global_262145.f_24050 /* Tunable: NIGHTCLUBINCOMEUPTOPOP5 */;
	}
	return SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_24368 /* Tunable: -2058124054 */));
}

int func_111(int iParam0)//Position - 0x51B669
{
	switch (iParam0)
	{
		case 0:
			return 22036;
		case 1:
			return 22037;
		case 2:
			return 22038;
		case 3:
			return 22039;
		case 4:
			return 22040;
		case 5:
			return 22041;
		case 6:
			return 22034;
		default:
	}
	return 22036;
}

bool func_112(int iParam0, int iParam1)//Position - 0x51B90C
{
	int iVar0;
	iVar0 = __LIB_13__::func_27(iParam0);
	return iParam1 > iVar0 * 4;
}

void func_113(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x51B923
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 > 0)
	{
		iVar0 = 1;
	}
	else if (Global_1964472[iParam0 /*10*/] > 20)
	{
		iVar0 = 2;
	}
	switch (iParam1)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 10;
					break;
				case 1:
					*uParam2 = 11;
					*uParam3 = 50;
					break;
				case 2:
					*uParam2 = 41;
					*uParam3 = 50;
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 20;
					break;
				case 1:
					*uParam2 = 21;
					*uParam3 = 100;
					break;
				case 2:
					*uParam2 = 81;
					*uParam3 = 100;
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 2;
					break;
				case 1:
					*uParam2 = 3;
					*uParam3 = 10;
					break;
				case 2:
					*uParam2 = 9;
					*uParam3 = 10;
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 4;
					break;
				case 1:
					*uParam2 = 5;
					*uParam3 = 20;
					break;
				case 2:
					*uParam2 = 17;
					*uParam3 = 20;
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 16;
					break;
				case 1:
					*uParam2 = 17;
					*uParam3 = 80;
					break;
				case 2:
					*uParam2 = 65;
					*uParam3 = 80;
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 12;
					break;
				case 1:
					*uParam2 = 13;
					*uParam3 = 60;
					break;
				case 2:
					*uParam2 = 49;
					*uParam3 = 60;
					break;
			}
			break;
		case 6:
			switch (iVar0)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 8;
					break;
				case 1:
					*uParam2 = 9;
					*uParam3 = 40;
					break;
				case 2:
					*uParam2 = 33;
					*uParam3 = 40;
					break;
			}
			break;
	}
}

void func_114(var uParam0, int iParam1)//Position - 0x51BBDF
{
	int iVar0;
	(*uParam0)[iParam1] = -1;
	iVar0 = iParam1;
	while (iVar0 <= (7 - 2))
	{
		if ((*uParam0)[iVar0] == -1)
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
			(*uParam0)[iVar0 + 1] = -1;
		}
		iVar0++;
	}
}

int func_115(var uParam0, int iParam1, int iParam2)//Position - 0x51BC24
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			*iParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_116(var uParam0)//Position - 0x51BC53
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		(*uParam0)[iVar0] = iVar0;
		iVar0++;
	}
}

int func_117(int iParam0, bool bParam1, int iParam2)//Position - 0x51BC75
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = 0;
	iVar2 = 1;
	iVar3 = (20 - iParam0);
	if (bParam1)
	{
		iVar2 = 21;
		iVar3 = 27;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
		iVar4 = iVar0;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
		iVar4 = (*iParam2)[iVar0];
		(*iParam2)[iVar0] = 0;
		iVar1 = iVar0;
		while (iVar1 <= (20 - 2))
		{
			if ((*iParam2)[iVar1] == 0)
			{
				(*iParam2)[iVar1] = (*iParam2)[iVar1 + 1];
				(*iParam2)[iVar1 + 1] = 0;
			}
			iVar1++;
		}
	}
	return iVar4;
}

void func_118(var uParam0, int iParam1)//Position - 0x51CBEE
{
	*uParam0 = (*uParam0 - 2);
	*uParam0 = (*uParam0 + iParam1 * 4);
}

void func_119(bool bParam0)//Position - 0x51D196
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 3))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 3);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 3))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 3);
	}
}

char* func_120(int iParam0)//Position - 0x51D9A9
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 9:
			sVar0 = "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */;
			break;
		case 10:
			sVar0 = "RADIO_02_POP" /* GXT: Non-Stop-Pop FM */;
			break;
		case 12:
			sVar0 = "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */;
			break;
		case 18:
			sVar0 = "RADIO_04_PUNK" /* GXT: Channel X */;
			break;
		case 17:
			sVar0 = "RADIO_06_COUNTRY" /* GXT: Rebel Radio */;
			break;
		case 15:
			sVar0 = "RADIO_07_DANCE_01" /* GXT: Soulwax FM */;
			break;
		case 16:
			sVar0 = "RADIO_08_MEXICAN" /* GXT: East Los FM */;
			break;
		case 11:
			sVar0 = "RADIO_09_HIPHOP_OLD" /* GXT: West Coast Classics */;
			break;
		case 23:
			sVar0 = "RADIO_11_TALK_02" /* GXT: Blaine County Radio */;
			break;
		case 22:
			sVar0 = "RADIO_12_REGGAE" /* GXT: Blue Ark */;
			break;
		case 5:
			sVar0 = "RADIO_13_JAZZ" /* GXT: Worldwide FM */;
			break;
		case 6:
			sVar0 = "RADIO_14_DANCE_02" /* GXT: FlyLo FM */;
			break;
		case 21:
			sVar0 = "RADIO_15_MOTOWN" /* GXT: The Lowdown 91.1 */;
			break;
		case 13:
			sVar0 = "RADIO_20_THELAB" /* GXT: The Lab */;
			break;
		case 14:
			sVar0 = "RADIO_16_SILVERLAKE" /* GXT: Radio Mirror Park */;
			break;
		case 20:
			sVar0 = "RADIO_17_FUNK" /* GXT: Space 103.2 */;
			break;
		case 19:
			sVar0 = "RADIO_18_90S_ROCK" /* GXT: Vinewood Boulevard Radio */;
			break;
		case 8:
			sVar0 = "RADIO_21_DLC_XM17" /* GXT: Blonded Los Santos 97.8 FM */;
			break;
		case 7:
			sVar0 = "RADIO_22_DLC_SHORT" /* GXT: Los Santos Underground Radio */;
			break;
		case 4:
			sVar0 = "RADIO_23_DLC_SHORT" /* GXT: iFruit Radio */;
			break;
		case 24:
			sVar0 = "RADIO_05_TALK_01" /* GXT: West Coast Talk Radio */;
			break;
		case 1:
			sVar0 = "RADIO_35_SHORT" /* GXT: The Music Locker */;
			break;
		case 0:
			sVar0 = "RADIO_36_SHORT" /* GXT: Media Player */;
			break;
		case 3:
			sVar0 = "RADIO_34_SHORT" /* GXT: Kult FM */;
			break;
		case 2:
			sVar0 = "RADIO_27_DLC_PRHEI4" /* GXT: Still Slipping Los Santos */;
			break;
		case 25:
			sVar0 = "RADIO_37_SHORT" /* GXT: MOTOMAMI Los Santos */;
			break;
	}
	return sVar0;
}

Vector3 func_121()//Position - 0x51FA1A
{
	return -788.722f, -239.5369f, 37.3525f;
}

int func_122(int iParam0)//Position - 0x521A57
{
	int iVar0;
	iVar0 = -1;
	iVar0 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
	if ((((((((iVar0 == MISC::GET_HASH_KEY("v_39_ShopRm") || iVar0 == MISC::GET_HASH_KEY("v_39_StairsRm")) || iVar0 == MISC::GET_HASH_KEY("v_66_ShopRm")) || iVar0 == MISC::GET_HASH_KEY("v_66_BackRm")) || iVar0 == MISC::GET_HASH_KEY("liquor_front")) || iVar0 == MISC::GET_HASH_KEY("liquor_back")) || iVar0 == MISC::GET_HASH_KEY("v_68_GasRm")) || iVar0 == MISC::GET_HASH_KEY("v_68_BackRm")) || iVar0 == MISC::GET_HASH_KEY("v_68_Toilets"))
	{
		return 1;
	}
	return 0;
}

var func_123()//Position - 0x521B0E
{
	return BitTest(Global_1958736, 10);
}

float func_124(struct<3> Param0, struct<3> Param1)//Position - 0x521E67
{
	struct<3> Var0;
	Var0 = { Param1 - Param0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1);
}

void func_125(bool bParam0)//Position - 0x524A32
{
	if (bParam0)
	{
		if (!BitTest(Global_1958736, 11))
		{
			MISC::SET_BIT(&Global_1958736, 11);
		}
	}
	else if (BitTest(Global_1958736, 11))
	{
		MISC::CLEAR_BIT(&Global_1958736, 11);
	}
}

void func_126(bool bParam0)//Position - 0x525530
{
	if (bParam0)
	{
		if (!BitTest(Global_1958736, 8))
		{
			MISC::SET_BIT(&Global_1958736, 8);
		}
	}
	else if (BitTest(Global_1958736, 8))
	{
		MISC::CLEAR_BIT(&Global_1958736, 8);
	}
}

void func_127(int iParam0, int iParam1)//Position - 0x525BB7
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_128()//Position - 0x525E73
{
	return BitTest(Global_1958736, 12);
}

bool func_129()//Position - 0x525EB5
{
	return BitTest(Global_1958736, 9);
}

void func_130(bool bParam0)//Position - 0x525F6A
{
	if (bParam0)
	{
		if (!BitTest(Global_1958736, 6))
		{
			MISC::SET_BIT(&Global_1958736, 6);
		}
	}
	else if (BitTest(Global_1958736, 6))
	{
		MISC::CLEAR_BIT(&Global_1958736, 6);
	}
}

void func_131(bool bParam0)//Position - 0x525F9F
{
	if (bParam0)
	{
		if (!BitTest(Global_1958736, 7))
		{
			MISC::SET_BIT(&Global_1958736, 7);
		}
	}
	else if (BitTest(Global_1958736, 7))
	{
		MISC::CLEAR_BIT(&Global_1958736, 7);
	}
}

void func_132(bool bParam0)//Position - 0x5263C1
{
	if (!__LIB_2__::func_703(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (BitTest(Global_1836844.f_1, 4))
	{
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 4);
		return;
	}
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 9);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 6);
	}
}

void func_133()//Position - 0x528B7F
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
}

char* func_134()//Position - 0x52DF2A
{
	return "ILftw0VGzEmaDjbavoRLDA";
}

struct<10> func_135()//Position - 0x52DF37
{
	return Global_2621837.f_18;
}

bool func_136()//Position - 0x52DF48
{
	return Global_2621837.f_4;
}

int func_137()//Position - 0x52DF8A
{
	return Global_2621837;
}

bool func_138()//Position - 0x52DF96
{
	return Global_2621837.f_1;
}

void func_139(bool bParam0)//Position - 0x52EB82
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 29);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 29);
	}
}

void func_140(bool bParam0)//Position - 0x52EE1F
{
	if (bParam0)
	{
		if (!BitTest(Global_1922761, 30))
		{
			MISC::SET_BIT(&Global_1922761, 30);
		}
	}
	else if (BitTest(Global_1922761, 30))
	{
		MISC::CLEAR_BIT(&Global_1922761, 30);
	}
}

void func_141(int iParam0)//Position - 0x52FA7F
{
	Global_1836615 = iParam0;
}

void func_142(int iParam0, bool bParam1)//Position - 0x52FEC5
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 12);
	}
}

bool func_143()//Position - 0x530B11
{
	return BitTest(Global_2815059.f_1795, 5);
}

void func_144(bool bParam0)//Position - 0x531EA2
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2815059.f_1795), 10);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1795), 10);
	}
}

void func_145(int iParam0)//Position - 0x5336D1
{
	Global_2815059.f_442 = iParam0;
}

int func_146(bool bParam0)//Position - 0x533CF3
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
	if ((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2854.4204f, 3373.5728f, 30.809174f, -1816.8866f, 2786.2144f, 212.4194f, 220f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2477.663f, 2910.3364f, 31.885231f, -2411.8474f, 3022.681f, 211.80995f, 220f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2486.4978f, 3362.571f, 31.67714f, -1686.191f, 2873.5325f, 212.65228f, 220f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1705.9786f, 3129.6887f, 29.268982f, -2047.0344f, 3334.4087f, 210.02782f, 210f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1600.4845f, 2806.9873f, 15.480474f, -1707.008f, 2956.7622f, 211.87146f, 30f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2300.8777f, 3385.5645f, 29.05954f, -2241.9717f, 3346.3152f, 212.0413f, 30f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1720.183f, 2961.0786f, 30.806297f, -1760.0618f, 3204.2004f, 211.71394f, 100f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2000.7423f, 3322.5764f, 30.960247f, -2284.7527f, 3336.5557f, 211.8176f, 100f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2165.8674f, 3305.2993f, 30.810333f, -2076.54f, 3253.8176f, 211.81033f, 50f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_147(var uParam0, var uParam1)//Position - 0x53603A
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam1, bVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837161[bVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_1837161[bVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837161[bVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1837161[bVar0]);
		}
		bVar0++;
	}
}

int func_148(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x536D5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		if (bParam6)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (bParam2)
	{
		iVar0 = 1;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam4)
	{
		iVar1 = iParam0;
		iVar2 = uParam5;
		iVar1 += 10;
		iVar2 += 20;
		MISC::SET_BIT(&iVar0, iVar1);
		MISC::SET_BIT(&iVar0, iVar2);
		return iVar0;
	}
	return iVar0;
}

int func_149(var uParam0)//Position - 0x540091
{
	*uParam0 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if ((*uParam0 == joaat("rm_BettingRoom") || *uParam0 == joaat("rm_Corridor_01")) || *uParam0 == joaat("rm_Corridor_02"))
	{
		return 1;
	}
	return 0;
}

void func_150(var uParam0)//Position - 0x540148
{
	int iVar0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_3[iVar0] = 0;
		uParam0->f_10[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_17 = -1;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_1__::func_377(&(uParam0->f_22[iVar0 /*3*/]));
		iVar0++;
	}
}

int func_151()//Position - 0x540EA5
{
	if (__LIB_0__::func_137(28158, -1))
	{
		return 1;
	}
	return 0;
}

int func_152(int* iParam0)//Position - 0x5437CC
{
	return iParam0->f_2;
}

int func_153()//Position - 0x54944D
{
	if ((__LIB_3__::func_184(PLAYER::PLAYER_ID(), 0) > -1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_property_int")) <= 0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_yacht")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_154(char* sParam0)//Position - 0x54E519
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!MISC::IS_STRING_NULL(&(Global_4539964[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_4539964[iVar0 /*104*/]), sParam0))
			{
				if (Global_4539964[iVar0 /*104*/].f_28 == 1)
				{
					return 1;
				}
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

int func_155(int iParam0)//Position - 0x555C30
{
	char cVar0[64];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_TUNER_CLIENT_VEHICLE_0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_TUNER_CLIENT_VEHICLE_1_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_156(int iParam0)//Position - 0x555F34
{
	switch (iParam0)
	{
		case 1:
			return joaat("weevil");
		case 2:
			return joaat("brioso2");
		case 3:
			return joaat("rhapsody");
		case 4:
			return joaat("club");
		case 5:
			return joaat("issi3");
		case 6:
			return joaat("nebula");
		case 7:
			return joaat("dynasty");
		case 8:
			return joaat("fagaloa");
		case 9:
			return joaat("futo");
		case 10:
			return joaat("asbo");
		case 11:
			return joaat("sentinel");
		case 12:
			return joaat("dominator3");
		case 13:
			return joaat("vamos");
		case 14:
			return joaat("hermes");
		case 15:
			return joaat("coquette3");
		case 16:
			return joaat("riata");
		case 17:
			return joaat("everon");
		case 18:
			return joaat("glendale2");
		case 19:
			return joaat("schafter3");
		case 20:
			return joaat("warrener");
		case 21:
			return joaat("primo2");
		case 22:
			return joaat("seminole2");
		case 23:
			return joaat("rebla");
		case 24:
			return joaat("swinger");
		case 25:
			return joaat("flashgt");
		case 26:
			return joaat("raiden");
		case 27:
			return joaat("surano");
		case 28:
			return joaat("penumbra2");
		case 29:
			return joaat("vstr");
		case 30:
			return joaat("jugular");
		case 31:
			return joaat("toros");
		case 32:
			return joaat("entity2");
		case 33:
			return joaat("tempesta");
		case 34:
			return joaat("thrax");
		case 35:
			return joaat("sc1");
		case 36:
			return joaat("gp1");
		case 37:
			return joaat("cheetah2");
		case 38:
			return joaat("neo");
		case 39:
			return joaat("comet2");
		case 40:
			return joaat("paragon");
		default:
	}
	return 0;
}

void func_157(int iParam0, bool bParam1)//Position - 0x557BCF
{
	if (iParam0 == -1)
	{
		return;
	}
	if ((iParam0 / 32) >= Global_77095)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_77095[(iParam0 / 32)]), (iParam0 % 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_77095[(iParam0 / 32)]), (iParam0 % 32));
	}
}

void func_158(char* sParam0, int iParam1, char* sParam2)//Position - 0x557C1F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
}

void func_159(int iParam0, bool bParam1)//Position - 0x557EA5
{
	if (iParam0 == -1)
	{
		return;
	}
	if ((iParam0 / 32) >= Global_77075)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_77075[(iParam0 / 32)]), (iParam0 % 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_77075[(iParam0 / 32)]), (iParam0 % 32));
	}
}

void func_160(int iParam0, bool bParam1)//Position - 0x5585BC
{
	if ((iParam0 / 32) >= Global_77073)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_77073[(iParam0 / 32)]), (iParam0 % 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_77073[(iParam0 / 32)]), (iParam0 % 32));
	}
}

void func_161(int iParam0, bool bParam1)//Position - 0x55886A
{
	if (iParam0 == -1)
	{
		return;
	}
	if ((iParam0 / 32) >= Global_77053)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_77053[(iParam0 / 32)]), (iParam0 % 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_77053[(iParam0 / 32)]), (iParam0 % 32));
	}
}

bool func_162()//Position - 0x5591A5
{
	return __LIB_3__::func_28();
}

int func_163(int iParam0, bool bParam1)//Position - 0x559A8B
{
	if (iParam0 == 1234)
	{
		if (bParam1)
		{
			return 2000;
		}
		else
		{
			return 1000;
		}
	}
	return -1;
}

int func_164(var uParam0)//Position - 0x55A11C
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 <= 0 || iVar0 >= 11)
	{
		return 0;
	}
	return 1;
}

int func_165(int iParam0)//Position - 0x55BEB0
{
	struct<3> Var0;
	int iVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312193[1 /*1951*/].f_1742.f_150, true) < 30f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312193[1 /*1951*/].f_1742.f_153, Global_1312193[1 /*1951*/].f_1742.f_153.f_3, Global_1312193[1 /*1951*/].f_1742.f_153.f_6, false, true))
		{
			return 1;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312193[8 /*1951*/].f_1742.f_150, true) < 30f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312193[8 /*1951*/].f_1742.f_153, Global_1312193[8 /*1951*/].f_1742.f_153.f_3, Global_1312193[8 /*1951*/].f_1742.f_153.f_6, false, true))
		{
			return 1;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312193[17 /*1951*/].f_1742.f_150, true) < 30f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312193[17 /*1951*/].f_1742.f_153, Global_1312193[17 /*1951*/].f_1742.f_153.f_3, Global_1312193[17 /*1951*/].f_1742.f_153.f_6, false, true))
		{
			return 1;
		}
	}
	iVar1 = 103;
	while (iVar1 <= 114)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_1312193[iVar1 /*1951*/].f_146.f_47, true) <= 40f)
		{
			if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312193[iVar1 /*1951*/].f_146.f_57[0 /*8*/], Global_1312193[iVar1 /*1951*/].f_146.f_57[0 /*8*/].f_3, Global_1312193[iVar1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312193[iVar1 /*1951*/].f_146.f_57[1 /*8*/], Global_1312193[iVar1 /*1951*/].f_146.f_57[1 /*8*/].f_3, Global_1312193[iVar1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, Global_1312193[iVar1 /*1951*/].f_146.f_57[2 /*8*/], Global_1312193[iVar1 /*1951*/].f_146.f_57[2 /*8*/].f_3, Global_1312193[iVar1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_166()//Position - 0x55C819
{
	Global_1888478.f_1++;
}

void func_167(var uParam0)//Position - 0x55CBCA
{
	Global_22663 = 4;
	Global_22662 = uParam0;
	Global_1888478.f_5 = 1;
}

struct<4> func_168()//Position - 0x55CC2A
{
	struct<4> Var0;
	switch (Global_1836068.f_18)
	{
		case 183:
			StringCopy(&Var0, "BA_APP_BODY_RC" /* GXT: Has invited you to ~a~. */, 16);
			break;
		case 182:
			StringCopy(&Var0, "BA_APP_BODY_RC" /* GXT: Has invited you to ~a~. */, 16);
			break;
		default:
			break;
	}
	return Var0;
}

int func_169(int iParam0)//Position - 0x55CCB8
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 1;
		default:
	}
	return 0;
}

void func_170()//Position - 0x55CCE4
{
	Global_1888478++;
}

void func_171(int iParam0)//Position - 0x568815
{
	int iVar0;
	iVar0 = iParam0;
	MISC::SET_BIT(&Global_1835421, iVar0);
}

void func_172(int iParam0)//Position - 0x5699B4
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1911933[NETWORK::PARTICIPANT_ID_TO_INT() /*260*/].f_29.f_1[iVar0]), iVar1);
}

void func_173()//Position - 0x57AB85
{
	MISC::CLEAR_BIT(&(Global_2815059.f_5194), 6);
}

bool func_174()//Position - 0x57ACB5
{
	return BitTest(Global_2815059.f_5194, 6);
}

void func_175()//Position - 0x57BDA6
{
	MISC::CLEAR_BIT(&(Global_2815059.f_5194), 5);
}

int func_176()//Position - 0x57C0DC
{
	float fVar0;
	if (__LIB_26__::func_149(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = Global_262145.f_10547 /* Tunable: HEIST_HEAVY_ARMOUR_SPEED */;
		fVar0 = __LIB_0__::func_331(fVar0, 0.0001f, 1.5f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), (2f * fVar0));
		return 1;
	}
	return 0;
}

float func_177(int iParam0)//Position - 0x57C661
{
	switch (iParam0)
	{
		case 0:
			return 15.25f;
		case 1:
			return 4.75f;
		case 2:
			return 3f;
		case 3:
			return 15f;
		case 4:
			return 1f;
		case 5:
			return 1.75f;
		case 6:
			return 2f;
		case 7:
			return 4.75f;
		case 8:
			return 5f;
		case 9:
			return 3.25f;
		case 10:
			return 2.5f;
		case 11:
			return 5f;
		case 12:
			return 11.5f;
		case 13:
			return 2.75f;
		case 14:
			return 5.25f;
		case 15:
			return 14.75f;
		case 16:
			return 4f;
		case 17:
			return 17.25f;
		case 18:
			return 59.75f;
		case 19:
			return 30.65f;
		case 20:
			return 9f;
		case 21:
			return 9.5f;
		case 22:
			return 5f;
		case 23:
			return 4.75f;
		case 24:
			return 5.75f;
		case 25:
			return 14f;
		case 26:
			return 8.25f;
		case 27:
			return 1f;
		case 28:
			return 32f;
		case 29:
			return 8f;
		case 30:
			return 11.5f;
		case 31:
			return 3.75f;
		case 32:
			return 2.25f;
		case 33:
			return 16.25f;
		case 34:
			return 4.5f;
		case 35:
			return 12f;
		case 36:
			return 12f;
		case 37:
			return 12f;
		case 38:
			return 12f;
		case 39:
			return 2f;
		default:
	}
	return 0f;
}

Vector3 func_178(int iParam0, bool bParam1)//Position - 0x57C87D
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return Global_1853212.f_6;
			case 1:
				return 9.5f, 5f, 3f;
			case 2:
				return 2.5f, 2f, 1f;
			case 3:
				return 3f, 2.5f, 2f;
			case 4:
				return 3f, 2.5f, 1.5f;
			case 5:
				return 4f, 3.5f, 1f;
			case 6:
				return 3f, 3f, 1f;
			case 7:
				return 3.5f, 2f, 1f;
			case 8:
				return 3f, 3f, 1f;
			case 9:
				return 2.5f, 1.5f, 1f;
			case 10:
				return 1f, 1.5f, 1.5f;
			case 11:
				return 3f, 2.5f, 1f;
			case 12:
				return 1.5f, 1.5f, 1f;
			case 13:
				return 2f, 3.5f, 1.5f;
			case 14:
				return 5f, 3f, 1f;
			case 15:
				return 1f, 1.5f, 6f;
			case 16:
				return 2.5f, 2f, 1.5f;
			case 17:
				return 1f, 2.5f, 1f;
			case 18:
				return 4f, 2.5f, 0.5f;
			case 19:
				return 8f, 3.5f, 2.5f;
			case 20:
				return 0.5f, 0.5f, 1f;
			case 21:
				return 1f, 1f, 0.5f;
			case 22:
				return 1f, 6f, 1f;
			case 23:
				return 1.25f, 1.75f, 3.25f;
			case 24:
				return 1.5f, 1.5f, 2.5f;
			case 25:
				return 1f, 1.5f, 1.5f;
			case 26:
				return 1f, 1.5f, 2f;
			case 27:
				return 1f, 1.5f, 1.5f;
			case 28:
				return 3f, 3f, 2.5f;
			case 29:
				return 2f, 1f, 1.5f;
			case 30:
				return 1f, 1f, 1.5f;
			case 31:
				return 1.5f, 4.5f, 0.5f;
			case 32:
				return 2f, 2.5f, 1f;
			case 33:
				return 0.5f, 1.5f, 1.5f;
			case 34:
				return 2f, 2f, 1f;
			case 35:
				return 0.7f, 2.35f, 0.5f;
			case 36:
				return 1.938f, 1.063f, 1.5f;
			case 37:
				return 1.5f, 1f, 2f;
			case 38:
				return 0.75f, 0.75f, 2f;
			case 39:
				return 4.25f, 5.5f, 5f;
			case 40:
				return 2.5f, 5.25f, 7f;
			case 41:
				return 0.5f, 0.5f, 1.5f;
			case 42:
				return 1.5f, 0.8f, 1.1f;
			case 43:
				return 4.75f, 3.75f, 7f;
			case 44:
				return 2f, 10.25f, 2f;
			case 45:
				return 1.75f, 2.5f, 4.25f;
			case 46:
				return 6f, 8.75f, 1.75f;
			case 47:
				return 2f, 2.25f, 0.7f;
			case 48:
				return 5.25f, 8.5f, 5.75f;
			case 49:
				return 2f, 2f, 16f;
			case 50:
				return 2f, 2f, 16f;
			case 51:
				return 3.75f, 7.25f, 4f;
			case 52:
				return 17f, 6.5f, 5f;
			case 53:
				return 4f, 4.25f, 6.5f;
			case 54:
				return 3.5f, 4f, 3f;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -147.68665f, 185.66858f, 91.31802f;
			case 1:
				return -1290.7003f, -1385.2628f, 10.476853f;
			case 2:
				return -607.58563f, -2282.718f, 9.208073f;
			case 3:
				return -1013.28455f, -1142.2578f, 5.9086f;
			case 4:
				return 2614.6128f, 513.93774f, 101.603806f;
			case 5:
				return 183.8037f, -1315.585f, 32.57409f;
			case 6:
				return 15.217538f, 158.63664f, 104.71889f;
			case 7:
				return 1669.2426f, -8.629438f, 157.78552f;
			case 8:
				return 1529.8635f, 3778.0542f, 39.35786f;
			case 9:
				return -1211.9185f, -2754.1714f, 19.977116f;
			case 10:
				return -1426.5067f, -267.4678f, 49.76388f;
			case 11:
				return 1043.9934f, -2019.3704f, 41.92201f;
			case 12:
				return -1049.9882f, -239.92331f, 50.786922f;
			case 13:
				return 1530.1016f, 3781.6157f, 35.970623f;
			case 14:
				return 699.3227f, -1024.9379f, 24.775423f;
			case 15:
				return 2.486047f, -669.6122f, 22.400042f;
			case 16:
				return -1038.1976f, -999.8744f, 7.816154f;
			case 17:
				return -1175.2538f, -915.3665f, 7.947606f;
			case 18:
				return 393.71432f, -7.272818f, 105.50608f;
			case 19:
				return -693.4418f, -2268.6853f, 18.28622f;
			case 20:
				return 130.43195f, -628.95654f, 261.6011f;
			case 21:
				return -701.5641f, 316.53412f, 97.58429f;
			case 22:
				return -904.65674f, -1426.408f, 13.071739f;
			case 23:
				return -49.17297f, -398.99756f, 40.00881f;
			case 24:
				return 9.110067f, -677.54895f, 39.312004f;
			case 25:
				return 15.944671f, -693.1216f, 42.139038f;
			case 26:
				return -770.8153f, -2232.0522f, 9.757195f;
			case 27:
				return -1207.2487f, -706.86237f, 29.418034f;
			case 28:
				return -1125.4791f, -2140.1343f, 28.402946f;
			case 29:
				return -1573.2236f, -554.11444f, 43.953705f;
			case 30:
				return -1421.1635f, -3019.6895f, 5.313002f;
			case 31:
				return -1985.9263f, -319.06375f, 45.10603f;
			case 32:
				return 1136.9639f, -1540.3357f, 49.64507f;
			case 33:
				return -3176.3901f, 1050.1741f, 26.533627f;
			case 34:
				return 342.4716f, -581.6075f, 72.4763f;
			case 35:
				return 171.16142f, -743.4989f, 57.863537f;
			case 36:
				return 166.31621f, -733.0771f, 57.863567f;
			case 37:
				return 157.89105f, -725.3965f, 57.89556f;
			case 38:
				return 146.43954f, -720.5424f, 57.863537f;
			case 39:
				return -1461.6658f, -239.52814f, 54.839943f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_179(int iParam0, bool bParam1)//Position - 0x57D05F
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return Global_1853212;
			case 1:
				return -701f, -2236.25f, 15.55f;
			case 2:
				return -655.5f, 802f, 201.95f;
			case 3:
				return -779f, 306f, 92.5f;
			case 4:
				return -59.7f, 355.76f, 117.4f;
			case 5:
				return -725f, 125.5f, 60f;
			case 6:
				return -517.8f, 204.8f, 82.4f;
			case 7:
				return -428.9f, 144.2f, 68.7f;
			case 8:
				return -51.7f, 157.3f, 85.5f;
			case 9:
				return -1147.95f, -166.1f, 44.3f;
			case 10:
				return -739.6f, -280.9f, 40.9f;
			case 11:
				return 68.9f, -270.3f, 52.3f;
			case 12:
				return 145f, -296.2f, 49.3f;
			case 13:
				return -21.3f, -301.7f, 49.3f;
			case 14:
				return 25.7f, -665.4f, 35f;
			case 15:
				return 52.2f, -924f, 44.3f;
			case 16:
				return 137.3f, -1048.2f, 34f;
			case 17:
				return 113.6f, -1114.2f, 32.5f;
			case 18:
				return 119.7f, -1305.8f, 32.5f;
			case 19:
				return 478.5f, -1031.5f, 27.5f;
			case 20:
				return 706.6f, -1026.8f, 21f;
			case 21:
				return 924.9f, -827f, 37.4f;
			case 22:
				return -1344f, -947f, 11.7f;
			case 23:
				return -1185.3823f, -1234.6755f, 9.629701f;
			case 24:
				return -664.9f, -1108.2f, 21.2f;
			case 25:
				return -2012.5f, 448.6f, 102.9f;
			case 26:
				return -721.2f, 446.5f, 105.9f;
			case 27:
				return 755.8f, -2536f, 12.2f;
			case 28:
				return 1307.2f, -1142f, 44.8f;
			case 29:
				return 444f, -2927.5f, -6.6f;
			case 30:
				return -1217f, -696.5f, 25.1f;
			case 31:
				return -1201.9f, -710.7f, 24.6f;
			case 32:
				return -208f, 155.9f, 73.5f;
			case 33:
				return 524.4f, -1969f, 26.8f;
			case 34:
				return -680.5f, -2268.5f, 15.5f;
			case 35:
				return -857.8f, -2644.7f, 16.4f;
			case 36:
				return -1122.44f, -1583.45f, 3.39f;
			case 37:
				return -653.5f, -550.2f, 23.4f;
			case 38:
				return 890.8f, -1046.2f, 32.5f;
			case 39:
				return 886.1063f, -984.4135f, 30.59999f;
			case 40:
				return 778.6307f, -1285.9015f, 36.806305f;
			case 41:
				return -1302.8567f, -1366.6079f, 5.015059f;
			case 42:
				return -898.87646f, 144.63657f, 63.280323f;
			case 43:
				return -1554.5131f, -574.1351f, 33.707912f;
			case 44:
				return 2474.346f, -380.05615f, 98.47422f;
			case 45:
				return -170.57018f, -584.4093f, 194.7069f;
			case 46:
				return -604.0977f, -583.6525f, 31.35151f;
			case 47:
				return 438.6248f, -270.44852f, 69.56553f;
			case 48:
				return -447.52756f, -418.05768f, 44.21907f;
			case 49:
				return -1812.5223f, -363.05206f, 76.42702f;
			case 50:
				return -1864.3639f, -327.34763f, 76.663574f;
			case 51:
				return 278.60657f, -1111.949f, 35.75998f;
			case 52:
				return -718.4734f, -2237.7917f, 18.507374f;
			case 53:
				return -25.33898f, -293.06635f, 55.07753f;
			case 54:
				return 1854.8198f, 2248.5525f, 56.428654f;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -133.13182f, 180.247f, 87.4315f;
			case 1:
				return -1295.9646f, -1387.1523f, 3.53841f;
			case 2:
				return -605.65137f, -2287.5288f, 5.028299f;
			case 3:
				return -1021.31305f, -1146.8293f, 1.0844f;
			case 4:
				return 2614.8984f, 507.7975f, 99.54963f;
			case 5:
				return 185.67824f, -1310.8912f, 28.326382f;
			case 6:
				return 8.13529f, 139.1436f, 95.895836f;
			case 7:
				return 1676.9541f, -36.409584f, 162.7056f;
			case 8:
				return 1532.2454f, 3774.6694f, 37.10786f;
			case 9:
				return -1217.9727f, -2764.565f, 17.227116f;
			case 10:
				return -1422.9213f, -271.65784f, 45.2611f;
			case 11:
				return 1038.1971f, -2019.2499f, 50.17201f;
			case 12:
				return -1044.9215f, -229.95995f, 43.16981f;
			case 13:
				return 1526.7811f, 3779.4114f, 33.470623f;
			case 14:
				return 713.8806f, -1023.13007f, 21.356781f;
			case 15:
				return 6.697172f, -657.93774f, 10.779981f;
			case 16:
				return -1035.1631f, -1005.7836f, 5.280054f;
			case 17:
				return -1164.074f, -935.0273f, 4.948693f;
			case 18:
				return 430.6286f, -28.091093f, 87.20728f;
			case 19:
				return -693.048f, -2241.6035f, 0.063834f;
			case 20:
				return 117.502205f, -621.11584f, 255.28455f;
			case 21:
				return -651.94806f, 312.19376f, 91.04256f;
			case 22:
				return -909.20123f, -1414.4415f, 6.114755f;
			case 23:
				return -55.84374f, -396.72238f, 54.40229f;
			case 24:
				return 7.774166f, -664.05365f, 35.49939f;
			case 25:
				return 12.072571f, -702.95013f, 30.730804f;
			case 26:
				return -742.9391f, -2231.9915f, 17.757195f;
			case 27:
				return -1214.4694f, -698.1962f, 24.773708f;
			case 28:
				return -1153.478f, -2167.4436f, -13.826853f;
			case 29:
				return -1554.8907f, -579.98676f, 32.91862f;
			case 30:
				return -1435.0189f, -3019.5508f, 12.799299f;
			case 31:
				return -1983.2426f, -315.251f, 43.10603f;
			case 32:
				return 1136.9409f, -1541.7917f, 47.14507f;
			case 33:
				return -3166.1887f, 1046.2037f, 23.09884f;
			case 34:
				return 338.33408f, -581.89655f, 69.7263f;
			case 35:
				return 165.61343f, -744.76355f, 53.863537f;
			case 36:
				return 162.0354f, -736.29364f, 53.863567f;
			case 37:
				return 154.90419f, -730.3234f, 53.86357f;
			case 38:
				return 144.48189f, -725.68585f, 54.018585f;
			case 39:
				return -1462.5369f, -238.74416f, 52.858128f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

int func_180(int iParam0)//Position - 0x57D95F
{
	switch (iParam0)
	{
		case 15:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_162496, 5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_181(struct<3> Param0)//Position - 0x57E5A2
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Param0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
		}
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
	}
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
}

int func_182(int iParam0)//Position - 0x57F2AB
{
	switch (iParam0)
	{
		case -1:
		case 6:
			return 0;
		case 0:
			return joaat("zion3");
		case 1:
			return joaat("granger");
		case 2:
			return joaat("mesa3");
		case 3:
			return joaat("manchez");
		case 4:
			return joaat("verus");
		case 5:
			return joaat("caddy3");
		default:
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x57FBE1
{
	switch (iParam0)
	{
		case -1:
		case 2:
			return 0;
		case 0:
			return joaat("schafter3");
		case 1:
			return joaat("patriot2");
		default:
	}
	return 0;
}

int func_184(bool bParam0)//Position - 0x57FDB8
{
	if (__LIB_5__::func_185(bParam0) == 300)
	{
		return __LIB_3__::func_233(bParam0);
	}
	return -1;
}

bool func_185(int iParam0)//Position - 0x584200
{
	int iVar0;
	iVar0 = __LIB_0__::func_991(joaat("MPPLY_HEIST_ACH_TRACKER"));
	return BitTest(iVar0, iParam0);
}

bool func_186()//Position - 0x584B06
{
	return BitTest(Global_2714762, 8);
}

int func_187()//Position - 0x58ECC4
{
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADING_OUT())
		{
			if (!__LIB_3__::func_144(PLAYER::PLAYER_ID(), 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_188(bool bParam0)//Position - 0x590F8B
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 28);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 28);
	}
}

int func_189(int iParam0, var uParam1, var uParam2, int* iParam3)//Position - 0x5989D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		(*uParam2)[iVar0] = -1;
		iVar0++;
	}
	*iParam3 = 0;
	if (Global_2666787 == 0)
	{
		return 0;
	}
	if (Global_2666788 != 0 && Global_2666788 != 1)
	{
		return 0;
	}
	if (iParam0 != 12)
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_2666787)
	{
		if (Global_2666436[iVar0 /*14*/].f_13)
		{
			(*uParam2)[iVar1] = iVar0;
			if (!__LIB_12__::func_478(iVar0))
			{
				MISC::SET_BIT(iParam3, iVar1);
			}
			else
			{
				MISC::CLEAR_BIT(iParam3, iVar1);
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = iVar1;
	if (iVar2 > 1)
	{
		iVar3 = 0;
		iVar4 = 0;
		bVar5 = false;
		iVar6 = 0;
		bVar7 = false;
		iVar1 = 0;
		bVar8 = true;
		iVar3 = 0;
		while (iVar3 < 5)
		{
			bVar5 = iVar1;
			iVar4 = -1;
			switch (iVar3)
			{
				case 0:
					iVar4 = Global_262145.f_9050 /* Tunable: ROOT_ID_HASH_THE_FLECCA_JOB */;
					break;
				case 1:
					iVar4 = Global_262145.f_9055 /* Tunable: ROOT_ID_HASH_THE_PRISON_BREAK */;
					break;
				case 2:
					iVar4 = Global_262145.f_9062 /* Tunable: ROOT_ID_HASH_THE_HUMANE_LABS_RAID */;
					break;
				case 3:
					iVar4 = Global_262145.f_9068 /* Tunable: ROOT_ID_HASH_SERIES_A_FUNDING */;
					break;
				case 4:
					iVar4 = Global_262145.f_9074 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB */;
					break;
			}
			bVar8 = true;
			if (bVar5 >= iVar2 || iVar4 == -1)
			{
				bVar8 = false;
			}
			while (bVar8)
			{
				if ((*uParam2)[bVar5] != -1)
				{
					if (iVar4 == Global_2666436[(*uParam2)[bVar5] /*14*/].f_12)
					{
						if (bVar5 != iVar1)
						{
							iVar6 = (*uParam2)[iVar1];
							(*uParam2)[iVar1] = (*uParam2)[bVar5];
							(*uParam2)[bVar5] = iVar6;
							bVar7 = BitTest(*iParam3, iVar1);
							if (BitTest(*iParam3, bVar5))
							{
								MISC::SET_BIT(iParam3, iVar1);
							}
							else
							{
								MISC::CLEAR_BIT(iParam3, iVar1);
							}
							if (bVar7)
							{
								MISC::SET_BIT(iParam3, bVar5);
							}
							else
							{
								MISC::CLEAR_BIT(iParam3, bVar5);
							}
						}
						iVar1++;
						bVar8 = false;
					}
				}
				if (bVar8)
				{
					bVar5++;
					if (bVar5 >= iVar2)
					{
						bVar8 = false;
					}
				}
			}
			iVar3++;
		}
	}
	return iVar2;
}

int func_190(int iParam0)//Position - 0x598EB0
{
	if (__LIB_0__::func_192())
	{
		return 1;
	}
	if (__LIB_0__::func_191())
	{
		return 1;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 26);
}

char* func_191(int iParam0, int iParam1)//Position - 0x599079
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "LOWCA_CALL1";
				case 1:
					return "LOWCA_CALL2";
				case 2:
					return "LOWCA_CALL6";
				case 3:
					return "LOWCA_CALL3";
				case 4:
					return "LOWCA_CALL7";
				case 5:
					return "LOWCA_CALL4";
				case 6:
					return "LOWCA_CALL8";
				case 7:
					return "LOWCA_CALL5";
				case 8:
					return "LOWCA_CALLXX";
				default:
			}
			return "";
		default:
	}
	return "";
}

int func_192()//Position - 0x59C66F
{
	return Global_262145.f_10100 /* Tunable: DAILY_OBJ_TIME_REFRESH */ * 3600;
}

void func_193()//Position - 0x59FF54
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!__LIB_0__::func_864(&Global_1965614))
	{
		__LIB_0__::func_795(&Global_1965614, 0, 0);
	}
	else if (__LIB_25__::func_243())
	{
	}
}

void func_194(int iParam0)//Position - 0x5A5B10
{
	Global_2815059.f_6782.f_61 = iParam0;
}

bool func_195()//Position - 0x5A5B5C
{
	return Global_2815059.f_6782.f_61.f_3;
}

int func_196()//Position - 0x5A5B6F
{
	return Global_2815059.f_6782.f_61;
}

bool func_197(int iParam0)//Position - 0x5A5D94
{
	return Global_2815059.f_6782[iParam0 /*5*/].f_3;
}

int func_198(int iParam0)//Position - 0x5A5DA9
{
	return Global_2815059.f_6782[iParam0 /*5*/];
}

int func_199(int iParam0)//Position - 0x5A628D
{
	switch (iParam0)
	{
		case 0:
			return 9840;
		case 1:
			return 9841;
		case 2:
			return 9842;
		case 3:
			return 9843;
		case 4:
			return 9844;
		case 5:
			return 9845;
		case 6:
			return 9846;
		case 7:
			return 9847;
		default:
	}
	return 13122;
}

int func_200(int iParam0)//Position - 0x5A6F39
{
	if (iParam0 != -1)
	{
		return Global_1970897[iParam0 /*68*/].f_18.f_9;
	}
	return 0;
}

int func_201(int iParam0)//Position - 0x5A6F78
{
	if (iParam0 != -1)
	{
		return Global_1970897[iParam0 /*68*/].f_18.f_8;
	}
	return 0;
}

int func_202(int iParam0)//Position - 0x5A6FF6
{
	if (iParam0 != -1)
	{
		return Global_1970897[iParam0 /*68*/].f_18.f_6;
	}
	return 0;
}

void func_203(bool bParam0)//Position - 0x5AD10B
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_1931610, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1931610, 15);
	}
}

bool func_204(int iParam0)//Position - 0x5B7DB9
{
	return Global_262145.f_5032[6] == iParam0;
}

bool func_205()//Position - 0x5BC34D
{
	return __LIB_0__::func_137(15533, -1);
}

bool func_206()//Position - 0x5BC35D
{
	return __LIB_0__::func_137(22083, -1);
}

bool func_207()//Position - 0x5BC36D
{
	return __LIB_0__::func_137(22082, -1);
}

bool func_208(int iParam0)//Position - 0x5BDECF
{
	return Global_1853348[iParam0 /*834*/].f_267.f_384 != 0;
}

void func_209(int iParam0)//Position - 0x5BDFDC
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_31[iVar0]), iVar1);
}

int func_210(int iParam0)//Position - 0x5C10CC
{
	switch (iParam0)
	{
		case 10:
		case 8:
		case 3:
			return 1;
		default:
	}
	return 0;
}

bool func_211()//Position - 0x5D2041
{
	return Global_262145.f_13404 /* Tunable: BGRIEFPASSIVEENABLED */;
}

void func_212(int iParam0, int iParam1)//Position - 0x5D23C8
{
	Global_1941273[iParam0 /*8*/].f_6 = iParam1;
}

void func_213(bool bParam0)//Position - 0x5D34E9
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 17))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 17);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 17))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 17);
	}
}

void func_214(bool bParam0)//Position - 0x5D355C
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 0))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 0);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 0);
	}
}

void func_215(bool bParam0)//Position - 0x5D35B5
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 4))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 4);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 4))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143), 4);
	}
}

void func_216()//Position - 0x5D38DB
{
	Global_2723612.f_5 = 0;
}

bool func_217()//Position - 0x5D43EE
{
	return BitTest(Global_1836844.f_1, 15);
}

bool func_218()//Position - 0x5D43FF
{
	return Global_2815059.f_28.f_43;
}

void func_219(int iParam0)//Position - 0x5D900B
{
	if (__LIB_16__::func_758(&(Global_2789194.f_1), iParam0))
	{
	}
}

Vector3 func_220(int iParam0)//Position - 0x5D90AC
{
	switch (iParam0)
	{
		case 0:
			return -500.745f, -688.264f, 32.215f;
		case 1:
			return -817.452f, -1108.984f, 10.179f;
		case 2:
			return -1275.15f, -1382.53f, 3.342f;
		case 3:
			return -1139.034f, -1971.844f, 12.163f;
		case 4:
			return -11.887f, -1478.417f, 29.503f;
		case 5:
			return -46.48f, -1760.771f, 28.47f;
		case 6:
			return 461.144f, -1852.454f, 26.844f;
		case 7:
			return 819.335f, -2989.663f, 5.023f;
		case 8:
			return 1318.303f, -1652.426f, 51.153f;
		case 9:
			return 1163.372f, -1472.293f, 33.866f;
		case 10:
			return 1086.39f, -776.638f, 57.271f;
		case 11:
			return 439.799f, -604.455f, 27.716f;
		case 12:
			return -53.535f, -210.859f, 44.81f;
		case 13:
			return -1331.744f, -404.851f, 35.621f;
		case 14:
			return -548.694f, 282.75f, 82.023f;
		case 15:
			return 644.468f, 263.836f, 102.297f;
		case 16:
			return 1167.219f, -324.307f, 68.257f;
		case 17:
			return 2558.971f, 367.762f, 107.624f;
		case 18:
			return -1819.115f, 796.446f, 137.126f;
		case 19:
			return -2521.314f, 2312.653f, 32.219f;
		case 20:
			return -1092.246f, 2714.735f, 18.079f;
		case 21:
			return 538.647f, 2672.482f, 41.177f;
		case 22:
			return 1052.804f, 2658.326f, 38.554f;
		case 23:
			return 2562.796f, 2587.696f, 37.086f;
		case 24:
			return 2001.298f, 3050.104f, 46.217f;
		case 25:
			return 1769.703f, 3336.996f, 40.436f;
		case 26:
			return 1352.56f, 3608.704f, 33.907f;
		case 27:
			return 1989.874f, 3781.915f, 31.175f;
		case 28:
			return 2506.284f, 4201.888f, 38.947f;
		case 29:
			return 1697.755f, 4918.81f, 41.081f;
		case 30:
			return -756.948f, 5587.421f, 35.714f;
		case 31:
			return -82.02f, 6417.125f, 30.643f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_221()//Position - 0x5D93BE
{
	return Global_2789194.f_5;
}

void func_222(int iParam0)//Position - 0x5D9772
{
	if (Global_2789194.f_5 != iParam0)
	{
		Global_2789194.f_5 = iParam0;
	}
}

bool func_223(int iParam0)//Position - 0x5D9834
{
	return __LIB_13__::func_445(&(Global_2789194.f_1), iParam0);
}

int func_224()//Position - 0x5D98FA
{
	return Global_2789194;
}

int func_225()//Position - 0x5DA1BE
{
	return BitTest(Global_2727820, 1);
}

void func_226(int iParam0)//Position - 0x5DA4BB
{
	Global_1575052 = iParam0;
}

int func_227(int iParam0, int iParam1)//Position - 0x5DBD66
{
	switch (iParam0)
	{
		case 0:
		case 59:
		case 15:
		case 75:
		case 67:
		case 61:
		case 58:
		case 18:
		case 5:
		case 22:
		case 12:
		case 68:
		case 69:
		case 71:
		case 60:
		case 19:
		case 66:
		case 72:
		case 73:
		case 74:
		case 21:
		case 8:
		case 70:
		case 25:
		case 26:
		case 20:
		case 4:
		case 16:
		case 17:
		case 13:
		case 14:
			if (((iParam1 == joaat("slamtruck") || iParam1 == joaat("patriot2")) || iParam1 == joaat("caracara")) || iParam1 == joaat("caracara2"))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_228(int iParam0, int iParam1)//Position - 0x5DBEA6
{
	if (__LIB_1__::func_458(&(Global_1888617.f_1[iParam0 /*15*/].f_3), iParam1))
	{
	}
}

void func_229(int iParam0)//Position - 0x5DF15B
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_2 == Global_2703735.f_4.f_16)
		{
			MISC::SET_BIT(&(Global_2815059.f_6694), 12);
		}
	}
}

void func_230(int iParam0)//Position - 0x5DF1C3
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 1))
	{
		Global_1836102 = 1;
	}
}

void func_231(int iParam0, char[32] cParam1)//Position - 0x5DF565
{
	int iVar0;
	Global_1922049 = 1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (__LIB_1__::func_76(&(Global_1922049.f_34[iVar0 /*8*/])))
		{
			Global_1922049.f_34[iVar0 /*8*/] = { cParam1 };
			Global_1922049.f_1[iVar0] = iParam0;
			iVar0 = 32;
		}
		iVar0++;
	}
}

int func_232(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x5DFE02
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659438)
	{
		if (MISC::ARE_STRINGS_EQUAL(&cParam0, &(Global_2655137[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_233()//Position - 0x5E0604
{
	Global_1575071 = 1;
}

void func_234(int iParam0)//Position - 0x5E0663
{
	struct<2> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (Var0.f_1 == PLAYER::PLAYER_PED_ID())
		{
		}
	}
}

void func_235(int iParam0, int iParam1)//Position - 0x5E3456
{
	struct<3> Var0;
	Var0.f_0 = -1838276770;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

bool func_236(int iParam0)//Position - 0x5E3504
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_772, 1);
}

int func_237(int iParam0)//Position - 0x5E3550
{
	if (__LIB_3__::func_709(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 142:
		case 148:
		case 164:
		case 157:
		case 159:
		case 166:
		case 168:
		case 167:
		case 173:
		case 170:
		case 190:
		case 192:
		case 201:
		case 198:
			return 1;
		default:
	}
	return 0;
}

int func_238()//Position - 0x5E3852
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (BitTest(Global_4718592.f_33, 27))
		{
			return 1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = __LIB_14__::func_348(iVar0);
			bVar2 = __LIB_0__::func_872(iVar0, 1);
			if (bVar2 && BitTest(Global_4718592.f_33, 26))
			{
				return 1;
			}
			if (iVar1 > 0)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (Global_4718592.f_174966.f_9[iVar3] > -1 && iVar1 == Global_4718592.f_174966.f_9[iVar3])
					{
						return 1;
					}
					iVar3++;
				}
			}
		}
	}
	return 0;
}

void func_239()//Position - 0x5E3916
{
	Global_1888187++;
}

void func_240()//Position - 0x5E3C9B
{
	MISC::CLEAR_BIT(&(Global_2703735.f_1571.f_756), 13);
	MISC::CLEAR_BIT(&(Global_2703735.f_1571.f_756), 14);
	MISC::CLEAR_BIT(&(Global_2703735.f_1571.f_756), 15);
}

int func_241(int iParam0)//Position - 0x5E5B21
{
	if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
	{
		return 1;
	}
	if (PED::WAS_PED_KILLED_BY_TAKEDOWN(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0)//Position - 0x5E5B44
{
	Global_1836091 = (Global_1836091 + iParam0);
	switch (Global_1853348[PLAYER::PLAYER_ID() /*834*/])
	{
		case 0:
		case 4:
		case 9:
		case 37:
		case 7:
		case 165:
		case 10:
			if (Global_1836091 >= Global_262145.f_7097 /* Tunable: PLAYER_KILL_RP_MISSION_CAP */)
			{
				return 0;
			}
			break;
		case 2:
		case 32:
			if (Global_1836091 >= Global_262145.f_7096 /* Tunable: PLAYER_KILL_RP_RACE_CAP */)
			{
				return 0;
			}
			break;
		case 1:
			if (Global_1836091 >= Global_262145.f_7095 /* Tunable: PLAYER_KILL_RP_DM_CAP */)
			{
				return 0;
			}
			break;
	}
	if (__LIB_27__::func_333(PLAYER::PLAYER_ID()) || __LIB_27__::func_332(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_243(int iParam0, int iParam1)//Position - 0x5E5D36
{
	if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 || PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
	{
		return 1;
	}
	if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1))
	{
		return 0;
	}
	return 1;
}

int func_244(bool bParam0)//Position - 0x5E5D6F
{
	if (__LIB_3__::func_581())
	{
		if (BitTest(Global_1853348[bParam0 /*834*/].f_198, bParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_245(bool bParam0)//Position - 0x5E5E55
{
	Global_2703735.f_2389.f_1 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 4000);
	Global_2703735.f_2389.f_3 = 1;
	if (Global_2703735.f_2389.f_3)
	{
		if (__LIB_1__::func_693(Global_2703735.f_2389, 0, 1))
		{
			NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Global_2703735.f_2389, false);
		}
	}
	Global_2703735.f_2389 = bParam0;
	NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(bParam0, true);
}

void func_246(int iParam0, int iParam1, int iParam2)//Position - 0x5E5EB3
{
	if (Global_1888188 != -1)
	{
		if ((MISC::GET_GAME_TIMER() - Global_1888189) < 10000)
		{
			Global_2703735.f_1571.f_816 = Global_1888188;
			*iParam2 = Global_1888188;
			*iParam1 = *iParam2;
			*iParam0 = PLAYER::GET_PLAYER_PED(*iParam1);
		}
	}
}

void func_247(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5E5EFD
{
	if (bParam0 == Global_1888190)
	{
		if ((MISC::GET_GAME_TIMER() - Global_1888191) < 10000)
		{
			Global_2703735.f_1571.f_816 = PLAYER::PLAYER_ID();
			*iParam3 = PLAYER::PLAYER_ID();
			*iParam2 = PLAYER::PLAYER_ID();
			*iParam1 = PLAYER::PLAYER_PED_ID();
		}
	}
}

int func_248()//Position - 0x5E5F46
{
	if (__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 191)
	{
		switch (__LIB_3__::func_233(PLAYER::PLAYER_ID()))
		{
			case 4:
			case 5:
				return 1;
			}
		default:
	}
	return 0;
}

void func_249(bool bParam0)//Position - 0x5E63D7
{
	bool bVar0;
	bVar0 = bParam0;
	Global_2678393.f_168[bVar0] = NETWORK::GET_NETWORK_TIME();
	if (!BitTest(Global_2678393.f_376, bVar0))
	{
		MISC::SET_BIT(&(Global_2678393.f_376), bVar0);
	}
}

void func_250(var uParam0)//Position - 0x5E640C
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_2788165 != iVar0)
	{
		Global_2788165 = iVar0;
		Global_2788165.f_1 = 0;
		Global_2788165.f_2 = 0;
	}
	if (uParam0->f_10)
	{
		Global_2788165.f_2++;
	}
	Global_2788165.f_1 = (Global_2788165.f_1 + SYSTEM::ROUND(uParam0->f_2));
}

int func_251(int iParam0)//Position - 0x5E6461
{
	switch (iParam0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
			break;
	}
	return 0;
}

int func_252(int iParam0)//Position - 0x5E64C0
{
	switch (iParam0)
	{
		case joaat("S_M_Y_Cop_01"):
		case joaat("S_F_Y_Cop_01"):
		case joaat("S_M_Y_Swat_01"):
		case joaat("S_M_M_FIBOffice_01"):
		case joaat("S_M_Y_Sheriff_01"):
		case joaat("S_F_Y_Sheriff_01"):
		case joaat("S_M_Y_Ranger_01"):
		case joaat("S_F_Y_Ranger_01"):
		case joaat("S_M_Y_BlackOps_01"):
		case joaat("S_M_M_Armoured_01"):
		case joaat("S_M_Y_Pilot_01"):
		case joaat("S_M_M_FIBSec_01"):
		case joaat("S_M_Y_Marine_03"):
		case joaat("S_M_Y_Marine_01"):
		case joaat("S_M_Y_Marine_02"):
		case joaat("S_M_M_Marine_01"):
		case joaat("S_M_M_Marine_02"):
		case joaat("S_M_M_CIASec_01"):
		case joaat("S_M_Y_ArmyMech_01"):
			return 1;
			break;
	}
	return 0;
}

int func_253(int iParam0)//Position - 0x5E68A7
{
	switch (iParam0)
	{
		case joaat("S_M_Y_Cop_01"):
		case joaat("S_F_Y_Cop_01"):
		case joaat("S_M_Y_Swat_01"):
		case joaat("S_M_M_FIBOffice_01"):
		case joaat("S_M_Y_Sheriff_01"):
		case joaat("S_F_Y_Sheriff_01"):
		case joaat("S_M_Y_Ranger_01"):
		case joaat("S_F_Y_Ranger_01"):
		case joaat("S_M_Y_BlackOps_01"):
		case joaat("S_M_M_Armoured_01"):
		case joaat("S_M_Y_Pilot_01"):
		case joaat("S_M_M_FIBSec_01"):
			return 1;
			break;
		case joaat("S_M_Y_Marine_03"):
			if (__LIB_1__::func_448(PLAYER::PLAYER_ID()) == 0 || BitTest(Global_2815059.f_4624, 0))
			{
				return 1;
			}
			break;
		case joaat("S_M_Y_Marine_01"):
		case joaat("S_M_Y_Marine_02"):
		case joaat("S_M_M_Marine_01"):
		case joaat("S_M_M_Marine_02"):
			if (BitTest(Global_2815059.f_4624, 0))
			{
				return 1;
			}
			break;
		case joaat("S_M_M_CIASec_01"):
			return 1;
			break;
	}
	return 0;
}

void func_254(var uParam0)//Position - 0x5E6967
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (BitTest(Global_4718592.f_31, 5))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			}
			if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_1))
			{
				iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false);
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
			}
			if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
			{
				iVar5 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0);
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar5, -1, false);
			}
			else if (ENTITY::IS_ENTITY_A_PED(*uParam0))
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::DOES_ENTITY_EXIST(iVar2)) && PED::IS_PED_A_PLAYER(iVar1)) && PED::IS_PED_A_PLAYER(iVar2))
			{
				if ((iVar0 == iVar1 && iVar0 != 0) || (iVar3 == iVar4 && iVar3 != 0))
				{
					if (iVar0 != iVar2 && iVar3 != iVar5)
					{
						Global_1888190 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						Global_1888191 = MISC::GET_GAME_TIMER();
					}
				}
				else if ((NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2) == Global_1888190 && iVar2 != iVar1) && iVar5 != iVar4)
				{
					Global_1888190 = -1;
				}
			}
		}
	}
}

int func_255(int iParam0)//Position - 0x5E6D3E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
			if (__LIB_1__::func_422(iVar2))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_256(int iParam0)//Position - 0x5E6D8D
{
	int iVar0;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		return BitTest(iVar0, 13);
	}
	return 0;
}

int func_257(int iParam0)//Position - 0x5E6DC3
{
	if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0), joaat("PLAYER")) == 4)
	{
		return 1;
	}
	return 0;
}

void func_258()//Position - 0x5E6FE4
{
	Global_2815059.f_337.f_1++;
}

void func_259(bool bParam0, float fParam1)//Position - 0x5E72A0
{
	if (bParam0)
	{
		if (fParam1 < 1000f)
		{
			Global_1888180 = (Global_1888180 + fParam1);
		}
	}
	else if (fParam1 < 1000f)
	{
		Global_1888181 = (Global_1888181 + fParam1);
	}
}

void func_260(struct<11> Param0, var uParam1, var uParam2)//Position - 0x5E734A
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1))
	{
		if (ENTITY::IS_ENTITY_A_PED(Param0.f_1))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Param0.f_0))
				{
					if (ENTITY::IS_ENTITY_A_PED(Param0.f_0))
					{
						iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_0);
						if (Param0.f_6 == joaat("WEAPON_DOUBLEACTION"))
						{
							if (Param0.f_10)
							{
								__LIB_1__::func_28(162);
							}
						}
						if (PED::IS_PED_A_PLAYER(iVar0))
						{
							if (Param0.f_6 == joaat("WEAPON_SNOWBALL"))
							{
								__LIB_1__::func_28(161);
							}
						}
					}
				}
			}
		}
	}
}

int func_261(int iParam0)//Position - 0x5E766E
{
	int iVar0;
	if (PED::IS_PED_ON_ANY_BIKE(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if ((((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("chimera") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer2")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer3")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

void func_262(int iParam0)//Position - 0x5EA103
{
	struct<7> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Var0.f_2 != -1)
		{
			if (!__LIB_0__::func_490(Global_1888617.f_1[Var0.f_2 /*15*/].f_10, Var0.f_3, 1056964608, 0))
			{
				Global_1888617.f_1[Var0.f_2 /*15*/].f_10 = { Var0.f_3 };
				if (Var0.f_6 != -1f)
				{
					Global_1888617.f_1[Var0.f_2 /*15*/].f_13 = Var0.f_6;
				}
			}
		}
	}
}

void func_263(int iParam0, int iParam1)//Position - 0x5EA264
{
	if (__LIB_1__::func_458(&(Global_1888862[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*120*/].f_77.f_1[iParam0 /*3*/].f_1), iParam1))
	{
	}
}

void func_264(var uParam0, int iParam1)//Position - 0x5EA289
{
	struct<3> Var0;
	if (uParam0->f_803)
	{
		return;
	}
	Var0.f_2 = -1;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam1, &Var0, 3))
	{
		return;
	}
	uParam0->f_804 = 132;
	uParam0->f_804.f_16 = Var0.f_2;
	uParam0->f_803 = 1;
}

void func_265(bool bParam0)//Position - 0x5EA4EC
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_58 = bParam0;
}

char* func_266(int iParam0)//Position - 0x5EA626
{
	switch (iParam0)
	{
		case 0:
			return "FMCI_CHCKPNT_D" /* GXT: Hey, think you can beat me in a Scramble at the LS Car Meet Test Track? */;
		case 1:
			return "FMCI_HDTHD_D" /* GXT: Hey, think you can beat me in a Head-to-Head Race at the LS Car Meet Test Track? */;
		case 2:
			return "FMCI_SPRINT_D" /* GXT: Hey, think you can beat me in a point-to-point Sprint? */;
		default:
	}
	return "";
}

void func_267(int iParam0)//Position - 0x5EA77B
{
	int iVar0;
	iVar0 = Global_1911872[iParam0 /*6*/].f_5;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_268(int iParam0)//Position - 0x5EA7B1
{
	int iVar0;
	iVar0 = Global_1911933[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*260*/].f_94.f_21[iParam0 /*14*/].f_4;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
	}
	Global_1911933[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*260*/].f_94.f_21[iParam0 /*14*/].f_11 = 0;
}

void func_269(bool bParam0)//Position - 0x5EA808
{
	struct<3> Var0;
	if (bParam0 != PLAYER::PLAYER_ID())
	{
		if (__LIB_1__::func_693(bParam0, 1, 1))
		{
			if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, true) < 60f)
				{
					Global_2788199.f_378 = 1;
					Global_2788199.f_379 = { Var0 };
				}
			}
		}
	}
}

void func_270(int iParam0)//Position - 0x5EA92B
{
	struct<3> Var0;
	Var0.f_2.f_40 = -1;
	Var0.f_2.f_41 = -1;
	Var0.f_2.f_42 = -1;
	Var0.f_2.f_44 = 1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 48))
	{
		if (Var0.f_0 == -585528181)
		{
			if (Var0.f_1 != PLAYER::PLAYER_ID())
			{
				MISC::COPY_SCRIPT_STRUCT(&Global_1973206, &(Var0.f_2), 46);
			}
		}
	}
}

void func_271(int iParam0)//Position - 0x5EA9EC
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_0 == 2131601101)
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (!__LIB_0__::func_121(iVar1))
			{
				return;
			}
			iVar2 = PLAYER::PLAYER_PED_ID();
			if (!__LIB_0__::func_121(iVar2))
			{
				return;
			}
			if (__LIB_0__::func_687(iVar1, iVar2, 125f, 1))
			{
				switch (Var0.f_2)
				{
					case 0:
						MISC::SET_BIT(&(Global_1966471.f_22), 10);
						break;
					}
				}
			}
	}
}

void func_272(int iParam0)//Position - 0x5EAA64
{
	struct<3> Var0;
	Var0.f_2.f_23 = 5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 30))
	{
		if (Var0.f_0 == -350081451)
		{
			MISC::COPY_SCRIPT_STRUCT(&Global_1966500, &(Var0.f_2), 28);
		}
	}
}

void func_273(int iParam0)//Position - 0x5ECE7C
{
	struct<6> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (Var0.f_0 == -397256754)
		{
			FIRE::STOP_FIRE_IN_RANGE(Var0.f_2, Var0.f_5);
		}
	}
}

void func_274(int iParam0)//Position - 0x5ED141
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_0 == -280224876)
		{
			if (Var0.f_1 == PLAYER::PLAYER_ID())
			{
				return;
			}
			iVar1 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				return;
			}
			if (__LIB_0__::func_825(PLAYER::GET_PLAYER_TEAM(Var0.f_1), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
			{
				return;
			}
			if (NETWORK::IS_ENTITY_A_GHOST(PLAYER::PLAYER_PED_ID()))
			{
				return;
			}
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
			Var4 = { ENTITY::GET_ENTITY_COORDS(iVar2, true) - ENTITY::GET_ENTITY_COORDS(iVar3, true) };
			Var4 = { __LIB_0__::func_79(Var4) };
			fVar5 = Var0.f_2;
			fVar6 = (200f * fVar5);
			if (fVar6 < 15f)
			{
				fVar6 = 15f;
			}
			fVar7 = (VEHICLE::GET_VEHICLE_BODY_HEALTH(iVar2) - fVar6);
			if (fVar7 < 0f)
			{
				fVar7 = 0f;
				NETWORK::NETWORK_EXPLODE_VEHICLE(iVar2, true, false, Var0.f_1);
			}
			VEHICLE::SET_VEHICLE_BODY_HEALTH(iVar2, fVar7);
		}
	}
}

void func_275(int iParam0)//Position - 0x5ED29E
{
	struct<3> Var0;
	Var0.f_2 = 16;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 19))
	{
		Global_1058372 = { Var0.f_2 };
	}
}

void func_276(int iParam0)//Position - 0x5ED30A
{
	Global_2727087 = iParam0;
}

int func_277(int iParam0)//Position - 0x5ED318
{
	if (iParam0 != 0)
	{
		if (iParam0 == Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_510 || iParam0 == Global_1920254)
		{
			return 1;
		}
	}
	return 0;
}

bool func_278(int iParam0)//Position - 0x5ED483
{
	if (!Global_1660946)
	{
		return 0;
	}
	return Global_1660946.f_1 == iParam0;
}

void func_279(int iParam0)//Position - 0x5ED4A0
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (Var0.f_3 < 0 || Var0.f_3 >= Global_1945972)
		{
			return;
		}
		__LIB_19__::func_956(Var0.f_4, Var0.f_3, Var0.f_2, 1, -1);
		Global_1945972[Var0.f_3] = Var0.f_2;
	}
}

void func_280(int iParam0)//Position - 0x5ED4F1
{
	struct<3> Var0;
	int iVar1;
	Var0.f_2 = 11;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 14))
	{
		iVar1 = 100;
		while (iVar1 <= 110)
		{
			Global_1945972[iVar1] = Var0.f_2[(iVar1 - 100)];
			iVar1++;
		}
	}
}

void func_281(int iParam0)//Position - 0x5ED53B
{
	struct<3> Var0;
	int iVar1;
	Var0.f_2 = 50;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 53))
	{
		iVar1 = 50;
		while (iVar1 <= 99)
		{
			Global_1945972[iVar1] = Var0.f_2[(iVar1 - 50)];
			iVar1++;
		}
	}
}

void func_282(int iParam0)//Position - 0x5ED585
{
	struct<3> Var0;
	int iVar1;
	Var0.f_2 = 50;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 53))
	{
		iVar1 = 0;
		while (iVar1 <= 49)
		{
			Global_1945972[iVar1] = Var0.f_2[iVar1];
			iVar1++;
		}
	}
}

void func_283(int iParam0)//Position - 0x5EE0EB
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2)
		{
			__LIB_4__::func_479(1);
		}
		else
		{
			__LIB_4__::func_479(0);
		}
	}
}

void func_284(int iParam0)//Position - 0x5EE206
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2)
		{
			__LIB_4__::func_489(1);
			Global_1946250.f_4538 = Var0.f_1;
		}
		else
		{
			__LIB_4__::func_487(1);
			Global_1946250.f_4538 = Var0.f_1;
		}
		if (PLAYER::PLAYER_ID() != Var0.f_1)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
		}
	}
}

void func_285(int iParam0)//Position - 0x5EE25E
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2)
		{
			__LIB_4__::func_726(1);
			Global_1946250.f_3631 = Var0.f_1;
		}
		else
		{
			__LIB_4__::func_724(1);
			Global_1946250.f_3631 = Var0.f_1;
		}
		if (PLAYER::PLAYER_ID() != Var0.f_1)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
		}
	}
}

void func_286(int iParam0)//Position - 0x5EEAD4
{
	struct<4> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (__LIB_1__::func_693(Var0.f_1, 1, 1) && __LIB_2__::func_789(PLAYER::GET_PLAYER_PED(Var0.f_1), iVar1, 0))
				{
					if (Var0.f_2)
					{
						VEHICLE::SET_VEHICLE_BOMB_AMMO(iVar1, (VEHICLE::GET_VEHICLE_BOMB_AMMO(iVar1) - 1));
					}
					else if (Var0.f_3)
					{
						VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(iVar1, (VEHICLE::GET_VEHICLE_COUNTERMEASURE_AMMO(iVar1) - 1));
					}
				}
			}
		}
	}
}

void func_287(int iParam0)//Position - 0x5EEB5A
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (__LIB_1__::func_693(Var0.f_1, 1, 1) && __LIB_2__::func_789(PLAYER::GET_PLAYER_PED(Var0.f_1), iVar1, 0))
				{
					if (Var0.f_2)
					{
						VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iVar1, false, false);
					}
					else
					{
						VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iVar1, true, false);
					}
				}
			}
		}
	}
}

void func_288(struct<2> Param0)//Position - 0x5EF493
{
	if (Param0.f_0 > 0 || Param0.f_1 > 0)
	{
		if (Global_2787554.f_26 < Global_2787554.f_27)
		{
			Global_2787554.f_27[Global_2787554.f_26 /*2*/] = { Param0 };
			Global_2787554.f_26++;
		}
	}
}

var func_289()//Position - 0x5EF4E5
{
	return Global_262145.f_19435 /* Tunable: IMPEXP_SELL_SCRAPYARD_DELIVERY_RP */;
}

int func_290()//Position - 0x5EF4F4
{
	return Global_262145.f_19434 /* Tunable: IMPEXP_SELL_SCRAPYARD_DELIVERY_CASH */;
}

var func_291()//Position - 0x5EF503
{
	return Global_262145.f_19433 /* Tunable: IMPEXP_SELL_POLICE_DELIVERY_RP */;
}

int func_292()//Position - 0x5EF512
{
	return Global_262145.f_19432 /* Tunable: IMPEXP_SELL_POLICE_DELIVERY_CASH */;
}

void func_293(int iParam0)//Position - 0x5EF577
{
	int iVar0;
	if (iParam0 == 0 || iParam0 == 97)
	{
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2787554.f_86[iVar0] == 0)
		{
			Global_2787554.f_86[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_294(int iParam0)//Position - 0x5EFC82
{
	switch (__LIB_13__::func_497(iParam0))
	{
		case 3:
			return Global_262145.f_19706 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_HARD */;
		case 2:
			return Global_262145.f_19707 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_MEDIUM */;
		case 1:
			return Global_262145.f_19708 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_EASY */;
		default:
	}
	return 0;
}

int func_295(int iParam0)//Position - 0x5EFCC6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2787554.f_86[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_296(int iParam0)//Position - 0x5EFD4D
{
	switch (iParam0)
	{
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
			return 1;
		default:
	}
	return 0;
}

void func_297(int iParam0)//Position - 0x5F0F25
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_3)
		{
			Global_2815059.f_5195.f_752 = 1;
			Global_2815059.f_5195.f_753 = Var0.f_2;
			Global_2815059.f_5195.f_754 = 1;
		}
		else
		{
			Global_2815059.f_5195.f_754 = 0;
		}
	}
}

void func_298(int iParam0)//Position - 0x5F0F76
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2 < 0 || Var0.f_2 >= Global_1853348.f_1.f_794)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Global_1835502.f_527.f_4), Var0.f_2);
		}
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_794[Var0.f_2] = -1;
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Global_1853348[iVar1 /*834*/].f_794[Var0.f_2] == -1)
			{
				Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_794[Var0.f_2] = -1;
				iVar1 = 33;
			}
			iVar1++;
		}
		Global_1946139 = 1;
	}
}

void func_299(var uParam0, bool bParam1, var uParam2)//Position - 0x5F10BF
{
	if (Global_1946244 == 0 && bParam1)
	{
		return;
	}
	if (bParam1)
	{
		Global_1946250.f_4716 = uParam0;
		Global_1946250.f_4716.f_3 = 0;
		Global_1946250.f_4716.f_5 = uParam2;
	}
	else
	{
		Global_1946250.f_4716 = -1;
		Global_1946250.f_4716.f_5 = -1;
	}
}

int func_300(int iParam0)//Position - 0x5F1947
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
			return joaat("reh_prop_reh_bag_para_01a");
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
			return joaat("reh_prop_reh_cabine_01a");
		default:
	}
	return joaat("reh_prop_reh_bag_para_01a");
}

float func_301(int iParam0)//Position - 0x5F1FE0
{
	if ((iParam0 == 23 || iParam0 == 24) || iParam0 == 21)
	{
		return 10f;
	}
	return 0f;
}

int func_302(int iParam0, int iParam1)//Position - 0x5F23FA
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = iParam1;
	iVar1 = 0;
	while (iVar1 < Global_2683918.f_1485.f_940[iVar0])
	{
		if (Global_2683918.f_1485.f_81[iVar0 /*33*/][iVar1] == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_303(int iParam0)//Position - 0x5F2600
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		STATS::SEND_METRIC_VIP_POACH(Var0.f_2, Var0.f_3, Var0.f_4);
	}
}

void func_304(int iParam0)//Position - 0x5F2625
{
	struct<3> Var0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2 > -1 && Var0.f_2 < 32)
		{
			MISC::SET_BIT(&(Global_2680265.f_903.f_101), Var0.f_2);
		}
	}
}

void func_305(int iParam0)//Position - 0x5F266B
{
	struct<3> Var0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2 > -1 && Var0.f_2 < 32)
		{
			MISC::CLEAR_BIT(&(Global_2680265.f_903.f_67), Var0.f_2);
			Global_2680265.f_903.f_68[Var0.f_2] = 0;
		}
	}
}

int func_306(int iParam0)//Position - 0x5F2BB0
{
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_307()//Position - 0x5F2BD8
{
	if ((((__LIB_4__::func_843() || Global_1946250.f_4590 != -1) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 2)) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 3)) || BitTest(Global_1946250.f_3, 5))
	{
		return 0;
	}
	return 1;
}

void func_308(int iParam0)//Position - 0x5F2C52
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2)
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_181 = NETWORK::GET_CLOUD_TIME_AS_INT();
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_180 = 0;
			__LIB_1__::func_69(joaat("MPPLY_VIPGAMEPLAYDISABLEDTIMER"), Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_181);
		}
		else
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_180 = 0;
		}
	}
}

char* func_309()//Position - 0x5F2F89
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			return "GOTXT_RIVALD" /* GXT: Why did you destroy it?! We could've used that equipment. */;
		case 1:
			return "GOTXT_RIVALD1" /* GXT: What the hell?! We could've used that. */;
		case 2:
			return "GOTXT_RIVALD2" /* GXT: Well that's equipment gone to waste! */;
		default:
	}
	return "GOTXT_RIVALD" /* GXT: Why did you destroy it?! We could've used that equipment. */;
}

int func_310()//Position - 0x5F2FEE
{
	return Global_262145.f_16783 /* Tunable: EXEC_CASH_DESTROY_CONTRABAND_MAX_PER_HOUR */;
}

int func_311(int iParam0)//Position - 0x5F31CA
{
	switch (*iParam0)
	{
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_FIREWORK"):
		case joaat("WEAPON_HOMINGLAUNCHER"):
		case joaat("WEAPON_FLAREGUN"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 1;
			break;
	}
	return 0;
}

int func_312(int iParam0, int iParam1)//Position - 0x5F33EA
{
	switch (iParam0)
	{
		case -1292453789:
			if (iParam1 == 168)
			{
				return Global_262145.f_15599 /* Tunable: EXEC_RP_REWARD_PREVENT_SELL */;
			}
			else
			{
				return Global_262145.f_15634 /* Tunable: EXEC_RP_REWARD_PREVENT_BUY */;
			}
			break;
		case 1623637790:
			return Global_262145.f_19096 /* Tunable: -1146521 */;
		case -81613951:
			return 500;
		case -1905128202:
			return Global_262145.f_21605 /* Tunable: 1596220896 */;
		case 1160415507:
			return Global_262145.f_22725 /* Tunable: 280332325 */;
		case 1553945504:
			return 500;
		case 198210293:
			return Global_262145.f_24537 /* Tunable: -154476683 */;
		case 173130779:
			return Global_262145.f_24478 /* Tunable: 1473092486 */;
	}
	return 0;
}

int func_313(int iParam0)//Position - 0x5F3489
{
	switch (iParam0)
	{
		case -1292453789:
			return Global_262145.f_16782 /* Tunable: EXEC_CASH_DESTROY_CONTRABAND */;
		case 1623637790:
			return Global_262145.f_19095 /* Tunable: -1686689049 */;
		case -81613951:
			return 2000;
		case -1905128202:
			return Global_262145.f_21604 /* Tunable: -1203923029 */;
		case 1160415507:
			return Global_262145.f_22724 /* Tunable: -291673561 */;
		case 1553945504:
			return 2000;
		case 198210293:
			return Global_262145.f_24536 /* Tunable: 532150422 */;
		case 173130779:
			return Global_262145.f_24477 /* Tunable: -1211077436 */;
		default:
	}
	return 0;
}

int func_314()//Position - 0x5F358C
{
	return Global_262145.f_16784 /* Tunable: EXEC_DESTROY_CONTRABAND_RATE_LIMITER_COOLDOWN */;
}

int func_315(int iParam0, int iParam1)//Position - 0x5F35CC
{
	if (iParam0 != 0 || iParam1 != 0)
	{
		if (((iParam0 == Global_1920255.f_9 || iParam0 == Global_1920255.f_10) || iParam1 == Global_1920255.f_9) || iParam1 == Global_1920255.f_10)
		{
			return 1;
		}
	}
	return 0;
}

void func_316(int iParam0)//Position - 0x5F36B6
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 3))
	{
		Global_2725439.f_132 = 1;
	}
}

void func_317(int iParam0)//Position - 0x5F39C7
{
	struct<8> Var0;
	struct<3> Var1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		if (Global_2815059.f_5981)
		{
			Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			if (SYSTEM::VDIST(Var0.f_2, Var1) > SYSTEM::VDIST(Global_2815059.f_5982, Var1))
			{
				return;
			}
		}
		Global_2815059.f_5981 = 1;
		Global_2815059.f_5982 = { Var0.f_2 };
		Global_2815059.f_5985 = Var0.f_5;
		Global_2815059.f_5988 = Var0.f_6;
		Global_2815059.f_5986 = NETWORK::GET_NETWORK_TIME();
		Global_2815059.f_5987 = Var0.f_7;
	}
}

void func_318(int iParam0)//Position - 0x5F3BC8
{
	struct<6> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		Global_2727845 = Var0.f_2;
		Global_2727846 = Var0.f_3;
		Global_2727847 = Var0.f_4;
		Global_2727848 = Var0.f_5;
	}
}

void func_319(int iParam0, int iParam1)//Position - 0x5F3D01
{
	if (__LIB_1__::func_778(iParam0))
	{
		Global_2683918[iParam1 /*3*/].f_1 = iParam0;
		Global_2683918.f_97[iParam0 /*33*/].f_1 = iParam1;
		Global_2683918.f_97[iParam0 /*33*/].f_30 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_320(int iParam0)//Position - 0x5F3E4D
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		iVar1 = Var0.f_1;
		if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_173[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_173[iVar1], false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_173[iVar1]))
				{
					switch (Var0.f_2)
					{
						case 0:
							VEHICLE::SET_HYDRAULIC_VEHICLE_STATE(Global_2703735.f_173[iVar1], 3);
							break;
						case 1:
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 0, 1f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 1, 1f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 4, 1f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 5, 1f);
							break;
						case 2:
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 0, 1f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 1, 1f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 4, 0f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 5, 0f);
							break;
						case 3:
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 0, 0f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 1, 0f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 4, 1f);
							VEHICLE::SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Global_2703735.f_173[iVar1], 5, 1f);
							break;
						}
					}
				}
		}
	}
}

void func_321(int iParam0)//Position - 0x5F3F9C
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		iVar1 = Var0.f_1;
		if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_173[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_173[iVar1], false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_173[iVar1]))
				{
					if (Var0.f_2)
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Global_2703735.f_173[iVar1], false);
					}
					else
					{
						VEHICLE::RAISE_CONVERTIBLE_ROOF(Global_2703735.f_173[iVar1], false);
					}
				}
			}
		}
	}
}

void func_322(int iParam0)//Position - 0x5F4018
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		iVar1 = Var0.f_1;
		if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_173[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_173[iVar1], false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_173[iVar1]))
				{
					VEHICLE::SET_REDUCED_SUSPENSION_FORCE(Global_2703735.f_173[iVar1], Var0.f_2);
				}
			}
		}
	}
}

void func_323(int iParam0)//Position - 0x5F407D
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		iVar1 = Var0.f_1;
		if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_173[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_173[iVar1], false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_173[iVar1]))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Global_2703735.f_173[iVar1], Var0.f_2);
				}
			}
		}
	}
}

void func_324(int iParam0)//Position - 0x5F40E2
{
	struct<4> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		iVar1 = Var0.f_1;
		if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_173[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_173[iVar1], false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_173[iVar1]))
				{
					if (Var0.f_2)
					{
						if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Global_2703735.f_173[iVar1]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Global_2703735.f_173[iVar1], true, Var0.f_3, false);
						}
					}
					else if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Global_2703735.f_173[iVar1]))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Global_2703735.f_173[iVar1], false, Var0.f_3, false);
					}
					VEHICLE::SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Global_2703735.f_173[iVar1], Var0.f_2);
				}
			}
		}
	}
}

void func_325(int iParam0)//Position - 0x5F419C
{
	struct<5> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		iVar1 = Var0.f_1;
		if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_173[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_173[iVar1], false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_173[iVar1]))
				{
					AUDIO::SET_VEHICLE_RADIO_LOUD(Global_2703735.f_173[iVar1], Var0.f_4);
					AUDIO::SET_VEH_RADIO_STATION(Global_2703735.f_173[iVar1], AUDIO::GET_RADIO_STATION_NAME(Var0.f_3));
					AUDIO::SET_VEH_FORCED_RADIO_THIS_FRAME(Global_2703735.f_173[iVar1]);
					if (!Var0.f_2)
					{
						AUDIO::SET_VEH_RADIO_STATION(Global_2703735.f_173[iVar1], "OFF");
					}
				}
			}
		}
	}
}

void func_326(int iParam0)//Position - 0x5F423F
{
	struct<3> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		iVar1 = Var0.f_1;
		if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_173[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_173[iVar1], false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_173[iVar1]))
				{
					VEHICLE::SUPPRESS_NEONS_ON_VEHICLE(Global_2703735.f_173[iVar1], Var0.f_2);
				}
			}
		}
	}
}

void func_327(int iParam0)//Position - 0x5F42A4
{
	struct<8> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		iVar1 = NETWORK::NETWORK_GET_ENTITY_FROM_OBJECT_ID(Var0.f_3);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
					{
						if (Var0.f_4)
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar2, -1, false))
							{
								iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
								if (!PED::IS_PED_INJURED(iVar3))
								{
									iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
									if (iVar4 != Var0.f_1)
									{
										return;
									}
								}
							}
						}
						switch (Var0.f_5)
						{
							case 0:
								break;
							case 1:
								if (Var0.f_2 == 4)
								{
									VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar2, Var0.f_2, 5, 0.9f);
								}
								else
								{
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iVar2, Var0.f_2, Var0.f_6, Var0.f_7);
									VEHICLE::SET_VEHICLE_DOOR_AUTO_LOCK(iVar2, Var0.f_2, true);
								}
								break;
							case 2:
								VEHICLE::SET_VEHICLE_DOOR_SHUT(iVar2, Var0.f_2, Var0.f_7);
								break;
							}
						}
					}
			}
		}
	}
}

void func_328(int iParam0)//Position - 0x5F43BB
{
	struct<3> Var0;
	Var0.f_2.f_3 = 6;
	Var0.f_2.f_10 = 6;
	Var0.f_2.f_17 = -1;
	Var0.f_2.f_20 = -1;
	Var0.f_2.f_22 = 5;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 40))
	{
		__LIB_27__::func_391(&(Var0.f_2), &Global_2788921);
	}
}

void func_329(int iParam0)//Position - 0x5F4554
{
	struct<3> Var0;
	Var0.f_2 = 2147483647;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 36))
	{
		if (!Global_262145.f_24104 /* Tunable: BLOCK_NS_TRANS */)
		{
			if (Var0.f_1 != PLAYER::PLAYER_ID())
			{
			}
			else if (SCRIPT::HAS_SCRIPT_LOADED("AM_ARENA_SHP"))
			{
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("AM_ARENA_SHP", &(Var0.f_2), 34, 512);
			}
			else
			{
				__LIB_0__::func_949();
			}
		}
	}
}

void func_330(bool bParam0, var uParam1)//Position - 0x5F4A9A
{
	if (bParam0 == Global_1946250.f_4592)
	{
		Global_1946250.f_4592.f_2 = (*uParam1)[0];
	}
}

void func_331(int iParam0, var uParam1)//Position - 0x5F4BE8
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 < 0 || iParam0 >= Global_1964904)
	{
		return;
	}
	if (*uParam1 < 16)
	{
		return;
	}
	(*uParam1)[0] = iParam0;
	(*uParam1)[1] = Global_1964904[iVar0 /*15*/];
	(*uParam1)[2] = Global_1964904[iVar0 /*15*/].f_1;
	(*uParam1)[3] = Global_1964904[iVar0 /*15*/].f_2;
	(*uParam1)[4] = Global_1964904[iVar0 /*15*/].f_3;
	(*uParam1)[5] = Global_1964904[iVar0 /*15*/].f_4;
	(*uParam1)[6] = Global_1964904[iVar0 /*15*/].f_5;
	(*uParam1)[7] = Global_1964904[iVar0 /*15*/].f_6;
	(*uParam1)[8] = Global_1964904[iVar0 /*15*/].f_7;
	(*uParam1)[9] = Global_1964904[iVar0 /*15*/].f_8;
	(*uParam1)[10] = Global_1964904[iVar0 /*15*/].f_10;
	(*uParam1)[11] = Global_1964904[iVar0 /*15*/].f_9;
	(*uParam1)[12] = Global_1964904[iVar0 /*15*/].f_11;
	(*uParam1)[13] = Global_1964904[iVar0 /*15*/].f_12;
	(*uParam1)[14] = Global_1964904[iVar0 /*15*/].f_13;
	(*uParam1)[15] = Global_1964904[iVar0 /*15*/].f_14;
}

void func_332(var uParam0, var uParam1)//Position - 0x5F50BC
{
	Global_1946250.f_4547 = uParam0;
	Global_1946250.f_4548 = uParam1;
}

int func_333(int iParam0)//Position - 0x5F56BD
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
			return 11;
			break;
		case 7:
		case 8:
		case 9:
			return 14;
			break;
	}
	return -1;
}

void func_334(int iParam0)//Position - 0x5F5719
{
	struct<21> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 21))
	{
		__LIB_2__::func_486(&(Global_1579075[Var0.f_19]), Var0.f_2);
		Global_1579201[Var0.f_19] = Var0.f_20;
		Global_1579327[Var0.f_19 /*16*/] = { Var0.f_3 };
	}
}

void func_335(int iParam0)//Position - 0x5F5A86
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		__LIB_11__::func_670(12);
	}
}

void func_336(int iParam0)//Position - 0x5F5AA4
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		__LIB_11__::func_670(5);
	}
}

int func_337(int iParam0)//Position - 0x5F5F91
{
	switch (iParam0)
	{
		case -1292453789:
		case 1623637790:
		case -81613951:
		case -1905128202:
		case 1160415507:
			return 1;
		case 935751890:
		case 198210293:
		case 173130779:
			return 1;
		default:
	}
	return 0;
}

int func_338(int iParam0, bool bParam1)//Position - 0x5F6058
{
	if (!bParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1292453789:
			return 1;
		case 1623637790:
			return 2;
		case -81613951:
			return 3;
		case -1905128202:
			return 4;
		case 1160415507:
			return 5;
		case 1553945504:
			return 6;
		case 198210293:
			return 7;
		default:
	}
	return 0;
}

void func_339(int iParam0)//Position - 0x5F60B8
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		Global_2815059.f_5972 = 1;
	}
}

void func_340(int iParam0)//Position - 0x5F619A
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2)
		{
			__LIB_1__::func_966(7);
		}
		else
		{
			__LIB_1__::func_966(8);
		}
	}
}

void func_341(struct<21> Param0)//Position - 0x5F6417
{
	Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_1 = { Param0 };
}

void func_342(struct<21> Param0)//Position - 0x5F6434
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_280 = { Param0 };
}

void func_343(struct<21> Param0)//Position - 0x5F6454
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_257.f_1 = { Param0 };
}

void func_344(struct<21> Param0)//Position - 0x5F6476
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_234.f_1 = { Param0 };
}

void func_345(struct<21> Param0)//Position - 0x5F6497
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_212.f_1 = { Param0 };
}

void func_346(struct<3> Param0, var uParam1)//Position - 0x5F6675
{
	if (Global_2703735.f_61.f_18 == 0)
	{
		return;
	}
	Global_2703735.f_61.f_76 = { Param0 };
	Global_2703735.f_61.f_79 = uParam1;
	Global_2703735.f_61.f_19 = 1;
}

void func_347(struct<3> Param0)//Position - 0x5F66AD
{
	if (Global_2703735.f_61.f_99 == 0)
	{
		return;
	}
	Global_2703735.f_61.f_100 = { Param0 };
}

void func_348()//Position - 0x5F66D2
{
	Global_2703735.f_61.f_99 = 1;
}

void func_349(int iParam0)//Position - 0x5F6809
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		Global_2815059.f_5195.f_42 = 1;
	}
}

void func_350(int iParam0)//Position - 0x5F682B
{
	struct<4> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		return;
	}
	else
	{
		Global_2703735.f_3669 = 1;
		if (Var0.f_2)
		{
			Global_2703735.f_3670 = 1;
		}
		else if (Var0.f_3)
		{
			Global_2703735.f_3671 = 1;
		}
	}
}

void func_351(int iParam0)//Position - 0x5F6870
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		Global_2815059.f_5028 = 1;
	}
}

void func_352(int iParam0)//Position - 0x5F6DE3
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		Global_786547 = Var0.f_2;
		Global_786547.f_1 = Var0.f_3;
	}
}

void func_353(int iParam0, int iParam1)//Position - 0x5F776B
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_17 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_17 + iParam1);
			break;
		case 1:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_20 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_20 + iParam1);
			break;
		case 2:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_23 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_23 + iParam1);
			break;
		case 3:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_26 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_26 + iParam1);
			break;
		case 4:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_29 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_29 + iParam1);
			break;
		case 99:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_32 = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_32 + iParam1);
			break;
	}
	iVar0 = __LIB_27__::func_407(iParam0);
	if (iVar0 != -1)
	{
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_36[iVar0] = (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_36[iVar0] + iParam1);
	}
}

void func_354(int iParam0)//Position - 0x5F78AD
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_16++;
			return;
			break;
		case 1:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_19++;
			return;
			break;
		case 2:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_22++;
			return;
			break;
		case 3:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_25++;
			return;
			break;
		case 4:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_28++;
			return;
			break;
		case 99:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_31++;
			return;
			break;
	}
	iVar0 = __LIB_27__::func_407(iParam0);
	if (iVar0 != -1)
	{
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_59[iVar0]++;
	}
}

void func_355()//Position - 0x5F7A54
{
	Global_2714762.f_686 = 1;
}

var func_356()//Position - 0x5F7FFF
{
	return Global_2715699.f_1.f_2799;
}

void func_357(int iParam0, int iParam1)//Position - 0x5F8E46
{
	if (iParam0 == 7)
	{
		Global_2715699.f_5982 = SYSTEM::TO_FLOAT(iParam1);
	}
	else if (iParam0 == 8)
	{
		Global_2715699.f_5982.f_1 = SYSTEM::TO_FLOAT(iParam1);
	}
	else if (iParam0 == 9)
	{
		Global_2715699.f_5982.f_2 = SYSTEM::TO_FLOAT(iParam1);
	}
}

void func_358(int iParam0)//Position - 0x5F8EFD
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		Global_2726738 = Var0.f_2;
		Global_2726739 = Var0.f_3;
		Global_2726740 = Var0.f_4;
	}
}

void func_359(int iParam0)//Position - 0x5F8F2D
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		Global_2726704 = Var0.f_2;
		Global_2726705 = Var0.f_3;
		Global_2726706 = Var0.f_4;
	}
}

void func_360(int iParam0)//Position - 0x5F8F5D
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_2 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(Global_2703735.f_3672), Var0.f_3);
		}
	}
}

int func_361(int iParam0)//Position - 0x5F90BF
{
	switch (iParam0)
	{
		case 2:
			return 600000;
			break;
	}
	return 0;
}

void func_362(int iParam0)//Position - 0x5F90DF
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		Global_2715699.f_4316[Var0.f_3] = Var0.f_4;
	}
}

void func_363(int iParam0)//Position - 0x5F9108
{
	struct<6> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (Var0.f_3 == 1 && Var0.f_5 == 1)
		{
			Global_2815059.f_4534.f_1 = Var0.f_4;
		}
		else
		{
			iVar1 = Var0.f_3;
			if (iVar1 < 0 || iVar1 >= Global_2715699.f_4316)
			{
				return;
			}
			Global_2715699.f_4316[iVar1] = Var0.f_4;
		}
	}
}

int func_364(int iParam0)//Position - 0x5F91CD
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_365(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x5F929B
{
	MISC::SET_BIT(&(Global_1835502.f_254[iParam1 /*4*/].f_3), 0);
	Global_1835502.f_254[iParam1 /*4*/] = uParam0;
	Global_1835502.f_254[iParam1 /*4*/].f_2 = uParam3;
	Global_1835502.f_254[iParam1 /*4*/].f_1 = uParam2;
}

void func_366(int iParam0)//Position - 0x5F9766
{
	struct<4> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		return;
	}
	else if (__LIB_27__::func_334(Var0.f_1))
	{
	}
	if (__LIB_27__::func_334(Var0.f_1))
	{
		if (Var0.f_1 == Global_1836489 || Var0.f_1 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(Global_2703735.f_872), Var0.f_3);
			MISC::SET_BIT(&Global_1836490, Var0.f_3);
		}
	}
}

void func_367(int iParam0)//Position - 0x5F9ACB
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		Global_2725914.f_2[Var0.f_1] = Var0.f_2;
	}
}

void func_368(int iParam0)//Position - 0x5F9DAA
{
	struct<8> Var0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0.f_2 = 4;
	Var0.f_7 = 4;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1931940.f_7[iVar1] = Var0.f_2[iVar1];
		Global_1931940.f_1[iVar1] = Var0.f_7[iVar1];
		iVar1++;
	}
}

void func_369(int iParam0)//Position - 0x5F9E14
{
	struct<3> Var0;
	int iVar1;
	Var0.f_2 = 7;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		Global_1933908.f_372[iVar1 /*4*/] = Var0.f_2[iVar1 /*4*/];
		Global_1933908.f_372[iVar1 /*4*/].f_1 = Var0.f_2[iVar1 /*4*/].f_1;
		Global_1933908.f_372[iVar1 /*4*/].f_2 = Var0.f_2[iVar1 /*4*/].f_2;
		Global_1933908.f_372[iVar1 /*4*/].f_3 = Var0.f_2[iVar1 /*4*/].f_3;
		iVar1++;
	}
	Global_1933908.f_2803 = 0;
}

int func_370(int iParam0)//Position - 0x5F9F67
{
	return iParam0 * 4;
}

void func_371(int iParam0)//Position - 0x5F9F73
{
	struct<3> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() == Var0.f_2)
	{
		__LIB_27__::func_449(1);
		MISC::SET_BIT(&(Global_1937518.f_1339), Var0.f_1);
		Global_1937518.f_1334 = 0;
		Global_1937518.f_1335 = 0;
	}
}

void func_372(int iParam0)//Position - 0x5F9FBB
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	iVar1 = Var0.f_2;
	iVar2 = 1;
	while (iVar2 <= 3)
	{
		if (iVar2 >= iVar1)
		{
			if (iVar2 == 3)
			{
				Global_1931940.f_12[iVar2] = -1;
				Global_1931940.f_7[iVar2] = -2;
				Global_1931940.f_1[iVar2] = 0;
			}
			else
			{
				Global_1931940.f_12[iVar2] = Global_1931940.f_12[iVar2 + 1];
				Global_1931940.f_7[iVar2] = Global_1931940.f_7[iVar2 + 1];
			}
		}
		iVar2++;
	}
}

void func_373(int iParam0)//Position - 0x5FA2EB
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		return;
	}
	Global_1933908.f_3033.f_140 = 1;
	bVar1 = false;
	iVar2 = Var0.f_2;
	if (iVar2 < 0 || iVar2 >= Global_1931940.f_12)
	{
		return;
	}
	if (Global_1931940.f_12[iVar2] == PLAYER::PLAYER_ID())
	{
		if (Var0.f_3 < -1)
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = -1;
			bVar1 = true;
		}
		else
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = Var0.f_3;
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (Var0.f_4 == PLAYER::PLAYER_ID())
		{
			Global_1853348[Var0.f_4 /*834*/].f_96.f_28 = Var0.f_3;
		}
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Global_1931940.f_7[iVar2] = Var0.f_3;
	}
}

void func_374(int iParam0)//Position - 0x5FA3AE
{
	struct<3> Var0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Global_1931940.f_12[iVar1] == Var0.f_1)
		{
			Global_1931940.f_17[iVar1] = Var0.f_2;
		}
		iVar1++;
	}
}

void func_375(int iParam0)//Position - 0x5FA468
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	Var0.f_2 = 4;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1931940.f_7[iVar1] = Var0.f_2[iVar1];
			iVar1++;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (Global_1931940.f_12[iVar2] == PLAYER::PLAYER_ID())
		{
			if (Var0.f_2[iVar2] < -1)
			{
				Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = -1;
			}
			else
			{
				Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = Var0.f_2[iVar2];
			}
		}
		iVar2++;
	}
}

int func_376(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x5FA6BF
{
	int iVar0;
	iVar0 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return -1;
	}
	if (iParam6 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_27__::func_451(iVar0))
		{
			if (iParam6 == Global_2657492.f_356[iVar0 /*75*/].f_2 && MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2657492.f_356[iVar0 /*75*/].f_10)))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_377(bool bParam0)//Position - 0x5FA73E
{
	int iVar0;
	bool bVar1;
	if (!__LIB_1__::func_693(bParam0, 0, 1))
	{
		return -1;
	}
	iVar0 = 0;
	bVar1 = bParam0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_27__::func_451(iVar0))
		{
			if (BitTest(Global_2657492.f_356[iVar0 /*75*/].f_3, bVar1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_378(int iParam0)//Position - 0x5FA8CF
{
	return BitTest(Global_2657492.f_356[iParam0 /*75*/].f_5, 2);
}

bool func_379(int iParam0)//Position - 0x5FA93E
{
	return BitTest(Global_2657492.f_356[iParam0 /*75*/].f_5, 1);
}

bool func_380(int iParam0)//Position - 0x5FA99E
{
	return BitTest(Global_2657492.f_356[iParam0 /*75*/].f_5, 0);
}

void func_381(int iParam0)//Position - 0x5FAB36
{
	MISC::SET_BIT(&(Global_2657492.f_356[iParam0 /*75*/].f_5), 2);
}

void func_382(int iParam0)//Position - 0x5FABC4
{
	MISC::SET_BIT(&(Global_2657492.f_356[iParam0 /*75*/].f_5), 1);
}

void func_383(int iParam0)//Position - 0x5FAC3B
{
	MISC::SET_BIT(&(Global_2657492.f_356[iParam0 /*75*/].f_5), 0);
}

void func_384(int iParam0, var uParam1)//Position - 0x5FB071
{
	int iVar0;
	bool bVar1;
	iVar0 = uParam1;
	bVar1 = false;
	if (Global_2657492.f_356[iParam0 /*75*/].f_3 == 0)
	{
		bVar1 = true;
	}
	MISC::SET_BIT(&(Global_2657492.f_356[iParam0 /*75*/].f_3), iVar0);
	if (bVar1)
	{
		Global_2657492.f_356[iParam0 /*75*/].f_4 = 0;
		MISC::SET_BIT(&(Global_2657492.f_356[iParam0 /*75*/].f_4), iVar0);
	}
}

int func_385()//Position - 0x5FB0CD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	iVar0 = 0;
	iVar1 = -1;
	bVar2 = false;
	iVar3 = -1;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!__LIB_27__::func_451(iVar0))
		{
			if (!Global_2657492.f_356[iVar0 /*75*/].f_1)
			{
				if (bVar2)
				{
					return iVar1;
				}
				iVar1 = iVar0;
				bVar2 = true;
			}
			else if (!bVar4)
			{
				bVar4 = true;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (!bVar2)
	{
		if (!bVar4)
		{
			return -1;
		}
		bVar2 = true;
		iVar1 = iVar3;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!__LIB_27__::func_451(iVar0))
		{
			if (Global_2657492.f_356[iVar0 /*75*/].f_1)
			{
				Global_2657492.f_356[iVar0 /*75*/].f_1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_386(int iParam0)//Position - 0x5FB437
{
	var uVar0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 5))
	{
		return;
	}
}

void func_387(int iParam0, char* sParam1, var uParam2)//Position - 0x5FB4E7
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "FM_PLY_JOINED" /* GXT: JOINED */, 16);
			*uParam2 = 18;
			break;
		case 2:
			StringCopy(sParam1, "FM_PLY_JOINING" /* GXT: JOINING */, 16);
			*uParam2 = 15;
			break;
		case 12:
			StringCopy(sParam1, "FM_PLY_ON_CALL" /* GXT: ON CALL */, 16);
			*uParam2 = 15;
			break;
		case 13:
			StringCopy(sParam1, "FM_PLY_ON_CALLH" /* GXT: ON CALL HOST */, 16);
			*uParam2 = 116;
			break;
		case 3:
			StringCopy(sParam1, "FM_PLY_INVITED" /* GXT: INVITED */, 16);
			*uParam2 = 6;
			break;
		case 4:
			StringCopy(sParam1, "FM_PLY_HOST" /* GXT: HOST */, 16);
			*uParam2 = 116;
			break;
		case 9:
			StringCopy(sParam1, "FM_PLY_ACC" /* GXT: ACCEPTED */, 16);
			*uParam2 = 15;
			break;
		case 10:
			StringCopy(sParam1, "FM_PLY_REJ" /* GXT: REJECTED */, 16);
			*uParam2 = 6;
			break;
		case 11:
			StringCopy(sParam1, "FM_PLY_LEFT" /* GXT: LEFT */, 16);
			*uParam2 = 15;
			break;
		case 5:
			StringCopy(sParam1, "FM_PLY_BUSY" /* GXT: BUSY */, 16);
			*uParam2 = 6;
			break;
		case 6:
			StringCopy(sParam1, "FM_PLY_BLCK" /* GXT: BLOCKED */, 16);
			*uParam2 = 6;
			break;
		case 7:
			StringCopy(sParam1, "FM_PLY_CHEAT" /* GXT: CHEATER */, 16);
			*uParam2 = 6;
			break;
		case 8:
			StringCopy(sParam1, "FM_PLY_BAD" /* GXT: BAD SPORT */, 16);
			*uParam2 = 6;
			break;
	}
}

void func_388(int iParam0, var uParam1)//Position - 0x5FBD3B
{
	int iVar0;
	iVar0 = uParam1;
	MISC::SET_BIT(&(Global_2686568[iParam0 /*41*/].f_38), iVar0);
}

void func_389(int iParam0)//Position - 0x5FBD94
{
	if (!BitTest(Global_2686568[iParam0 /*41*/].f_40, 4))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2686568[iParam0 /*41*/].f_40), 4);
}

void func_390(int iParam0)//Position - 0x5FBDFB
{
	if (BitTest(Global_2686568[iParam0 /*41*/].f_40, 4))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2686568[iParam0 /*41*/].f_40), 4);
}

void func_391()//Position - 0x5FBE73
{
	MISC::SET_BIT(&(Global_2653202.f_1), 8);
}

void func_392(int iParam0)//Position - 0x5FC065
{
	Global_2686568[iParam0 /*41*/] = 1;
}

void func_393(int iParam0)//Position - 0x5FC076
{
	if (__LIB_18__::func_313(Global_2686568[iParam0 /*41*/].f_3))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2686568[iParam0 /*41*/].f_40), 2);
}

void func_394(int iParam0)//Position - 0x5FC1DF
{
	MISC::CLEAR_BIT(&(Global_2686568[iParam0 /*41*/].f_40), 2);
}

void func_395(int iParam0)//Position - 0x5FC1F6
{
	struct<3> Var0;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		return;
	}
	switch (Var0.f_2)
	{
		case 0:
			break;
		case 5:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
	}
}

void func_396()//Position - 0x5FC2BD
{
	MISC::SET_BIT(&(Global_2653202.f_1), 5);
}

int func_397(int iParam0)//Position - 0x5FC7AA
{
	switch (iParam0)
	{
		case 181:
		case 186:
		case 182:
		case 183:
		case 184:
		case 185:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 187:
		case 49:
			return 1;
		default:
	}
	return 0;
}

void func_398(int iParam0, var uParam1)//Position - 0x5FC8F1
{
	int iVar0;
	iVar0 = uParam1;
	MISC::SET_BIT(&(Global_2686568[iParam0 /*41*/].f_39), iVar0);
}

void func_399(int iParam0, var uParam1)//Position - 0x5FCAB5
{
	int iVar0;
	iVar0 = uParam1;
	MISC::CLEAR_BIT(&(Global_2686568[iParam0 /*41*/].f_39), iVar0);
}

void func_400()//Position - 0x5FCCB7
{
	MISC::SET_BIT(&(Global_2653202.f_1), 6);
}

void func_401()//Position - 0x5FCCDB
{
	MISC::SET_BIT(&(Global_2653202.f_1), 7);
}

void func_402()//Position - 0x5FCCEE
{
	MISC::SET_BIT(&(Global_2653202.f_1), 1);
}

void func_403()//Position - 0x5FCD23
{
	Global_2653202.f_25 = 0;
}

void func_404()//Position - 0x5FCE8A
{
	Global_2653202 = 1;
}

void func_405()//Position - 0x5FCEDB
{
	MISC::SET_BIT(&(Global_2653202.f_1), 9);
}

void func_406(int iParam0, int iParam1)//Position - 0x5FD105
{
	Global_2686568[iParam0 /*41*/].f_2 = iParam1;
}

void func_407(int iParam0)//Position - 0x5FD32A
{
	Global_2686568[iParam0 /*41*/] = 3;
}

void func_408(int iParam0, int iParam1)//Position - 0x5FD581
{
	int iVar0;
	iVar0 = iParam1;
	MISC::CLEAR_BIT(&(Global_2686568[iParam0 /*41*/].f_38), iVar0);
}

void func_409(int iParam0, bool bParam1)//Position - 0x5FD643
{
	if (bParam1 == -1)
	{
		return;
	}
	if (bParam1 < 0)
	{
		return;
	}
	MISC::SET_BIT(&(Global_2686568[iParam0 /*41*/].f_28), bParam1);
}

bool func_410(bool bParam0, var uParam1)//Position - 0x5FD7F2
{
	return BitTest(uParam1->f_3, bParam0);
}

var func_411(int iParam0)//Position - 0x5FDA5C
{
	var uVar0;
	var uVar1;
	uVar0 = Global_2686568[iParam0 /*41*/].f_34;
	uVar1 = Global_2686568[iParam0 /*41*/].f_35;
	uVar0 = (uVar0 || uVar1);
	return uVar0;
}

void func_412(int iParam0)//Position - 0x5FDB49
{
	MISC::SET_BIT(&(Global_2686568[iParam0 /*41*/].f_40), 0);
}

void func_413(int iParam0, var uParam1)//Position - 0x5FDB60
{
	Global_2686568[iParam0 /*41*/].f_27 = uParam1;
}

void func_414(int iParam0)//Position - 0x5FDB74
{
	Global_2686568[iParam0 /*41*/] = 4;
}

void func_415(int iParam0, var uParam1)//Position - 0x5FDBDB
{
	Global_2686568[iParam0 /*41*/].f_1 = uParam1;
}

var func_416(int iParam0, var uParam1)//Position - 0x5FDCDB
{
	var uVar0;
	uVar0 = uParam1;
	return BitTest(Global_2686568[iParam0 /*41*/].f_36, uVar0);
}

var func_417(int iParam0, var uParam1)//Position - 0x5FDCF4
{
	var uVar0;
	uVar0 = uParam1;
	return BitTest(Global_2686568[iParam0 /*41*/].f_35, uVar0);
}

var func_418(int iParam0)//Position - 0x5FE169
{
	return Global_2686568[iParam0 /*41*/].f_27;
}

void func_419(int iParam0, var uParam1)//Position - 0x5FE782
{
	Global_2686568[iParam0 /*41*/].f_3.f_17 = uParam1;
}

void func_420(int iParam0)//Position - 0x5FE7BF
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (BitTest(Var0.f_4, 3))
		{
			Global_2703735.f_3580.f_38 = 1;
			StringCopy(&(Global_2703735.f_3580.f_18), PLAYER::GET_PLAYER_NAME(Var0.f_1), 64);
			Global_2703735.f_3580.f_1 = Var0.f_1;
		}
		else
		{
			Global_2703735.f_3580.f_38 = 0;
		}
	}
}

void func_421(int iParam0)//Position - 0x5FE8C9
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (BitTest(Var0.f_4, 1))
		{
			Global_2703735.f_3580.f_36++;
			MISC::SET_BIT(&(Global_2703735.f_3580.f_35), 2);
		}
		if (BitTest(Var0.f_4, 2))
		{
			Global_2703735.f_3580.f_36 = (Global_2703735.f_3580.f_36 - 1);
			if (Global_2703735.f_3580.f_36 <= 0)
			{
				MISC::CLEAR_BIT(&(Global_2703735.f_3580.f_35), 2);
				Global_2703735.f_3580.f_36 = 0;
			}
		}
		if (BitTest(Var0.f_4, 3))
		{
			MISC::SET_BIT(&(Global_2703735.f_3580.f_35), 3);
		}
		if (BitTest(Var0.f_4, 4))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_3580.f_35), 3);
		}
	}
}

void func_422(int iParam0)//Position - 0x5FE97C
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		if (BitTest(Var0.f_4, 5))
		{
			if (!BitTest(Global_2703735.f_3580.f_35, 5))
			{
				MISC::SET_BIT(&(Global_2703735.f_3580.f_35), 5);
			}
		}
		else if (BitTest(Global_2703735.f_3580.f_35, 5))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_3580.f_35), 5);
		}
	}
}

void func_423(int iParam0)//Position - 0x5FE9D9
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
		{
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == PLAYER::GET_PLAYER_TEAM(Var0.f_1))
			{
				Global_2703735.f_3620.f_37 = Var0.f_2;
			}
		}
	}
}

void func_424(int iParam0)//Position - 0x5FEA1C
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
		{
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == PLAYER::GET_PLAYER_TEAM(Var0.f_1))
			{
				Global_2703735.f_3620.f_34 = Var0.f_2;
			}
		}
	}
}

void func_425(int iParam0)//Position - 0x5FEA5F
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
		{
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == PLAYER::GET_PLAYER_TEAM(Var0.f_1))
			{
				if (BitTest(Var0.f_4, 3))
				{
					Global_2703735.f_3620.f_39 = 1;
					StringCopy(&(Global_2703735.f_3620.f_18), PLAYER::GET_PLAYER_NAME(Var0.f_1), 64);
					Global_2703735.f_3620.f_1 = Var0.f_1;
				}
				else
				{
					Global_2703735.f_3620.f_39 = 0;
				}
			}
		}
	}
}

void func_426(int iParam0)//Position - 0x5FEB7C
{
	struct<2> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		MISC::SET_BIT(&(Global_2815059.f_1777), 1);
		MISC::SET_BIT(&(Global_2815059.f_1778), Var0.f_1);
	}
}

void func_427(int iParam0)//Position - 0x5FEBAF
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 0))
		{
			MISC::SET_BIT(&Global_1922763, 1);
		}
	}
}

void func_428(int iParam0)//Position - 0x5FEBE2
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 3))
	{
		Global_2815059.f_1788 = 1;
	}
}

void func_429(int iParam0)//Position - 0x5FEC02
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		MISC::SET_BIT(&(Global_1835502.f_3), 1);
	}
}

void func_430(int iParam0)//Position - 0x5FEC25
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		MISC::SET_BIT(&(Global_1835502.f_3), 0);
	}
}

void func_431(int iParam0)//Position - 0x5FEC48
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (BitTest(Var0.f_2, PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&Global_1922761, 13);
			Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_22 = Var0.f_4;
			if (Var0.f_3)
			{
				MISC::SET_BIT(&Global_1922761, 14);
			}
		}
	}
}

int func_432(bool bParam0)//Position - 0x5FF17B
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659410)
	{
		if (Global_2654152[iVar0 /*82*/].f_11)
		{
			if (Global_2654152[iVar0 /*82*/].f_9 == bParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_433(int iParam0)//Position - 0x5FF353
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2)
		{
			if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 869.29156f, -2313.3784f, 29.570631f, 869.8371f, -2307.426f, 32.570633f, 9.75f, false, true, 0))
				{
					Global_2815059.f_873 = 1;
				}
			}
		}
		else
		{
			Global_2815059.f_873 = 0;
		}
	}
}

char* func_434(int iParam0)//Position - 0x5FF45A
{
	switch (iParam0)
	{
		case 12:
			return "FMMC_MPM_TY9" /* GXT: Tennis */;
		case 15:
			return "FMMC_MPM_TY10" /* GXT: Arm Wrestling */;
		case 14:
			return "FMMC_MPM_TY11" /* GXT: Darts */;
		case 13:
			return "FMMC_MPM_TY12" /* GXT: Shooting Range */;
		case 11:
			return "FMMC_MPM_TY13" /* GXT: Golf */;
		case 122:
			return "FMMC_MPM_TY122" /* GXT: San Andreas Flight School */;
		default:
	}
	return "";
}

void func_435()//Position - 0x5FF943
{
	__LIB_18__::func_38(170);
}

void func_436(var uParam0)//Position - 0x5FF9A4
{
	Global_2712057.f_423 = uParam0;
	Global_2712057.f_424 = uParam0;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_34 = uParam0;
}

void func_437(int iParam0)//Position - 0x5FF9CF
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		Global_2712057[Var0.f_4 /*13*/].f_6 = Var0.f_2;
		Global_2712057[Var0.f_4 /*13*/].f_10 = Var0.f_3;
	}
}

void func_438(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x5FFB06
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 >= 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2712057[iVar0 /*13*/]) && !ENTITY::IS_ENTITY_DEAD(Global_2712057[iVar0 /*13*/], false))
		{
			Global_2712057[iVar0 /*13*/].f_5 = uParam1;
			Global_2712057[iVar0 /*13*/].f_7 = uParam2;
			Global_2712057[iVar0 /*13*/].f_10 = uParam3;
			if (BitTest(Global_2712057[iVar0 /*13*/].f_1, 3))
			{
				MISC::SET_BIT(&(Global_2712057[iVar0 /*13*/].f_1), 8);
			}
			MISC::SET_BIT(&(Global_2712057[iVar0 /*13*/].f_1), 3);
			if (bParam4)
			{
				MISC::SET_BIT(&(Global_2712057[iVar0 /*13*/].f_1), 7);
			}
		}
	}
}

void func_439(int iParam0, int iParam1)//Position - 0x6010E4
{
	Global_2688483.f_324[iParam0 /*8*/].f_5 = iParam1;
}

var func_440(int iParam0)//Position - 0x6010FB
{
	return Global_2688483.f_324[iParam0 /*8*/].f_5;
}

void func_441(int iParam0)//Position - 0x6013A6
{
	MISC::SET_BIT(&(Global_2688483[iParam0 /*10*/].f_6), 5);
}

void func_442(int iParam0, int iParam1)//Position - 0x6013BD
{
	Global_2688483[iParam0 /*10*/].f_9 = iParam1;
}

void func_443(int iParam0, int iParam1)//Position - 0x6013D1
{
	Global_2688483[iParam0 /*10*/].f_8 = iParam1;
}

void func_444(int iParam0, int iParam1)//Position - 0x6013E5
{
	Global_2688483[iParam0 /*10*/].f_5 = iParam1;
}

void func_445(struct<3> Param0)//Position - 0x6013F9
{
	struct<8> Var0;
	int iVar1;
	Var0.f_3 = 1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Global_2688483.f_324[iVar1 /*8*/] = { Var0 };
		iVar1++;
	}
	Global_2688483.f_321 = { Param0 };
}

int func_446()//Position - 0x6015E7
{
	return (Global_262145.f_7045 /* Tunable: CAP_MAX_AMOUNT_CASH_RECIEVED */ - Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1301);
}

void func_447(int iParam0)//Position - 0x601848
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (Global_2870058.f_252 == Var0.f_2)
		{
			Global_2870058.f_252.f_1++;
			Global_2870058.f_252.f_68[Var0.f_1] = Var0.f_4;
		}
	}
}

void func_448(int iParam0)//Position - 0x601891
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (Global_2870058.f_252 == Var0.f_2)
		{
			Global_2870058.f_252.f_1++;
			Global_2870058.f_252.f_35[Var0.f_1] = Var0.f_4;
		}
	}
}

void func_449(int iParam0)//Position - 0x6018DA
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (Global_2870058.f_252 == Var0.f_2)
		{
			Global_2870058.f_252.f_1++;
			Global_2870058.f_252.f_2[Var0.f_1] = Var0.f_4;
		}
	}
}

void func_450(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x601956
{
	struct<5> Var0;
	Var0.f_0 = 1615479955;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = bParam2;
	if (!iParam3 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iParam3);
	}
}

void func_451(var uParam0, var uParam1, float fParam2, int iParam3)//Position - 0x6019C7
{
	struct<5> Var0;
	Var0.f_0 = 758867073;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = fParam2;
	if (!iParam3 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iParam3);
	}
}

void func_452(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x601A39
{
	struct<5> Var0;
	Var0.f_0 = -1264175533;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	if (!iParam3 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iParam3);
	}
}

void func_453(int iParam0)//Position - 0x601A77
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		Global_2681762.f_84.f_3 = Var0.f_2;
	}
}

void func_454(int iParam0)//Position - 0x601A9B
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		Global_2681762.f_84.f_2 = Var0.f_2;
	}
}

void func_455(int iParam0)//Position - 0x601ABF
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2)
		{
			Global_2815059.f_1723 = 1;
		}
		else
		{
			Global_2815059.f_1724 = 1;
		}
	}
}

void func_456(int iParam0)//Position - 0x601CF8
{
	struct<3> Var0;
	int iVar1;
	Var0.f_2 = 50;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 53))
	{
		iVar1 = 0;
		while (iVar1 < 50)
		{
			Global_1958555[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 50)
		{
			Global_1958555[iVar1] = Var0.f_2[iVar1];
			iVar1++;
		}
		Global_1958606 = 1;
	}
}

int func_457(int iParam0)//Position - 0x60287F
{
	switch (iParam0)
	{
		case 684:
		case 685:
		case 686:
		case 687:
		case 688:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
			return 1;
		default:
	}
	return 0;
}

int func_458()//Position - 0x6029F4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1958609[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x602A66
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		case joaat("sm_prop_smug_crate_m_medical"):
			return 2;
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 3;
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 4;
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 5;
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 6;
		case joaat("sm_prop_smug_crate_l_narc"):
			return 7;
		case joaat("sm_prop_smug_crate_m_narc"):
			return 8;
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 9;
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 10;
		case joaat("sm_prop_smug_crate_l_bones"):
			return 11;
		case joaat("sm_prop_smug_crate_m_bones"):
			return 12;
		case joaat("sm_prop_smug_crate_l_fake"):
			return 13;
		case joaat("sm_prop_smug_crate_m_fake"):
			return 14;
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 15;
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 16;
		default:
	}
	return 0;
}

int func_460(struct<2> Param0)//Position - 0x602B72
{
	switch (Param0.f_0)
	{
		case 5:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_medical");
					break;
				case 0:
					return joaat("sm_prop_smug_crate_m_medical");
					break;
			}
			break;
		case 7:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_tobacco");
					break;
				case 0:
					return joaat("sm_prop_smug_crate_m_tobacco");
					break;
			}
			break;
		case 1:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_antiques");
					break;
				case 0:
					return joaat("sm_prop_smug_crate_m_antiques");
					break;
			}
			break;
		case 6:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_narc");
					break;
				case 0:
					return joaat("sm_prop_smug_crate_m_narc");
					break;
			}
			break;
		case 4:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_jewellery");
					break;
				case 0:
					return joaat("sm_prop_smug_crate_m_jewellery");
					break;
			}
			break;
		case 0:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_bones");
					break;
				case 0:
					return joaat("sm_prop_smug_crate_m_bones");
					break;
			}
			break;
		case 3:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_fake");
					break;
				case 0:
					return joaat("sm_prop_smug_crate_m_fake");
					break;
			}
			break;
		case 2:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_hazard");
					break;
				case 0:
					return joaat("sm_prop_smug_crate_m_hazard");
					break;
			}
			break;
	}
	return 0;
}

int func_461(int iParam0)//Position - 0x602E0A
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		case joaat("sm_prop_smug_crate_m_medical"):
			return 0;
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 1;
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 0;
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 0;
		case joaat("sm_prop_smug_crate_l_narc"):
			return 1;
		case joaat("sm_prop_smug_crate_m_narc"):
			return 0;
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 1;
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 0;
		case joaat("sm_prop_smug_crate_l_bones"):
			return 1;
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		case joaat("sm_prop_smug_crate_l_fake"):
			return 1;
		case joaat("sm_prop_smug_crate_m_fake"):
			return 0;
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 1;
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 0;
		default:
	}
	return 0;
}

void func_462(var uParam0, var uParam1)//Position - 0x602EBA
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*uParam0 = uParam1;
	uParam0->f_1 = iVar0;
}

int func_463(int iParam0)//Position - 0x602ED5
{
	switch (iParam0)
	{
		case 5:
			return 0;
		case 6:
			return 1;
		case 7:
			return 2;
		case 8:
			return 3;
		case 9:
			return 4;
		case 10:
			return 5;
		case 11:
			return 6;
		case 12:
			return 7;
		default:
	}
	return -1;
}

bool func_464(int iParam0)//Position - 0x602F35
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_465()//Position - 0x602F4B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (Global_1958555[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_466(int iParam0)//Position - 0x603987
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("VehicleList", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "VehicleList"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "VehicleList");
	}
}

int func_467()//Position - 0x60BD6D
{
	return Global_262145.f_31017 /* Tunable: -496354504 */;
}

int func_468()//Position - 0x60BE01
{
	return Global_262145.f_31018 /* Tunable: -1554113093 */;
}

var func_469()//Position - 0x60BE10
{
	return Global_262145.f_31016 /* Tunable: -685830594 */;
}

int func_470(int iParam0, int iParam1)//Position - 0x60CBDC
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		switch (iParam1)
		{
			case 5:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 0);
			case 8:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 1);
			case 1:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 5);
			case 11:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 6);
			case 22:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 7);
			case 4:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 8);
			case 6:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 9);
			case 24:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 10);
			case 27:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 11);
			case 28:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 12);
			case 13:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 13);
			case 30:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 14);
			case 7:
				return BitTest(Global_1970897[iVar0 /*68*/].f_45, 15);
			}
		default:
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x60D1B5
{
	switch (iParam0)
	{
		case 3:
			return 4;
		case 2:
			return 4;
		case 8:
			return 2;
		default:
	}
	return 0;
}

int func_472(int iParam0)//Position - 0x60D226
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 8:
			return 1;
		default:
	}
	return 0;
}

int func_473(int iParam0, int iParam1)//Position - 0x60D279
{
	switch (iParam0)
	{
		case 16:
		case 17:
		case 15:
		case 18:
		case 19:
		case 22:
		case 24:
			return 0;
		case 23:
			switch (iParam1)
			{
				case 256:
					return 1;
				case 263:
					return 1;
				default:
			}
			return 0;
			break;
	}
	return 1;
}

int func_474()//Position - 0x60DF01
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("avenger"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_475()//Position - 0x60DF39
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("phantom3") || ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("hauler2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_476(int iParam0)//Position - 0x60DF8A
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		iVar1 = Var0.f_2;
		iVar2 = (iVar1 / 32);
		if (iVar2 >= 2)
		{
		}
		iVar1 = (iVar1 % 32);
		if (Var0.f_3)
		{
			MISC::SET_BIT(&(Global_1835498[iVar2]), iVar1);
			Global_2815059.f_4468 = 1;
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				MISC::SET_BIT(&(Global_1835502[iVar2]), iVar1);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1835498[iVar2]), iVar1);
			if (Var0.f_4)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::CLEAR_BIT(&(Global_1835502[iVar2]), iVar1);
				}
			}
		}
	}
}

int func_477(int iParam0)//Position - 0x60E1BA
{
	int iVar0;
	int iVar1;
	iVar0 = VEHICLE::GET_ALL_VEHICLES(&Global_1578027);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1578027[iVar1]) && !ENTITY::IS_ENTITY_DEAD(Global_1578027[iVar1], false))
		{
			if (!Global_1578027[iVar1] == iParam0)
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Global_1578027[iVar1]) && __LIB_4__::func_717(Global_1578027[iVar1], 1))
				{
					return Global_1578027[iVar1];
				}
			}
		}
		iVar1++;
	}
	return -1;
}

void func_478(int iParam0)//Position - 0x60E30B
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Previous_Owner"))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot"))
	{
	}
}

void func_479(int iParam0)//Position - 0x60E41A
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		Global_2667225.f_671 = 1;
		Global_2667225.f_672 = Var0.f_2;
		Global_2667225.f_674 = Var0.f_3;
	}
}

int func_480(struct<4> Param0, var uParam1, struct<4> Param2, var uParam3)//Position - 0x60E5CE
{
	if (Param0.f_4 == Param2.f_4)
	{
		if (SYSTEM::VDIST(Param0, Param2) < 1f)
		{
			if (MISC::ABSF((Param0.f_3 - Param2.f_3)) < 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_481(int iParam0)//Position - 0x60E648
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		Global_2667225.f_662 = 1;
		Global_2667225.f_663 = Var0.f_2;
	}
}

void func_482(int iParam0)//Position - 0x60E739
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		Global_2667225.f_657 = 1;
		Global_2667225.f_658 = Var0.f_2;
		Global_2667225.f_659 = Var0.f_3;
		Global_2667225.f_661 = Var0.f_4;
	}
}

void func_483(int iParam0)//Position - 0x60EA65
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(-1643.5242f, -1124.6805f, 17.4326f, 0.1f, joaat("prop_roller_car_01"), true);
		ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(-1645.1455f, -1126.6127f, 17.4326f, 0.1f, joaat("prop_roller_car_02"), true);
		ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(-1646.7676f, -1128.5453f, 17.4326f, 0.1f, joaat("prop_roller_car_02"), true);
		ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(-1648.3896f, -1130.4784f, 17.4326f, 0.1f, joaat("prop_roller_car_02"), true);
	}
}

void func_484(int iParam0)//Position - 0x60EC75
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		Global_2815059.f_5120 = Var0.f_2;
	}
}

void func_485(int iParam0)//Position - 0x60EC98
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
	{
		if (VEHICLE::HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE())
		{
			VEHICLE::CLEAR_VEHICLE_PHONE_EXPLOSIVE_DEVICE();
		}
	}
}

void func_486(int iParam0)//Position - 0x60ECBB
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		Global_2681762.f_88 = { Var0.f_2 };
	}
}

void func_487(int iParam0)//Position - 0x60ECE1
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 3))
	{
	}
}

void func_488(int iParam0)//Position - 0x60ED5F
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_2 != 0)
		{
			Global_2815059.f_28.f_46 = 1;
			Global_2815059.f_28.f_47[Var0.f_1] = Var0.f_2;
		}
	}
}

void func_489(int iParam0)//Position - 0x60ED9D
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (Var0.f_2 > -1)
		{
			MISC::SET_BIT(&(Global_2815059.f_28.f_44), Var0.f_2);
		}
	}
}

void func_490(int iParam0)//Position - 0x60EE03
{
	struct<5> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		MISC::CLEAR_BIT(&Global_1836068, 10);
		MISC::CLEAR_BIT(&Global_1836068, 9);
		Global_1836068.f_8 = Var0.f_4;
		MISC::SET_BIT(&Global_1836068, 9);
		if (Var0.f_3)
		{
			MISC::SET_BIT(&Global_1836068, 5);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1836068, 5);
		}
		MISC::CLEAR_BIT(&Global_1836068, 8);
	}
}

void func_491(int iParam0)//Position - 0x60EE67
{
	struct<10> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		MISC::CLEAR_BIT(&Global_1836068, 10);
		MISC::CLEAR_BIT(&Global_1836068, 9);
		MISC::CLEAR_BIT(&Global_1836068, 19);
		if (Var0.f_2)
		{
			Global_1836068.f_8 = Var0.f_4;
			MISC::SET_BIT(&Global_1836068, 9);
			if (Var0.f_3)
			{
				MISC::SET_BIT(&Global_1836068, 5);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_1836068, 5);
			}
		}
		else
		{
			MISC::SET_BIT(&Global_1836068, 10);
			if (Var0.f_9 == 1)
			{
				MISC::SET_BIT(&Global_1836068, 19);
			}
		}
		MISC::CLEAR_BIT(&Global_1836068, 8);
	}
}

void func_492(int iParam0)//Position - 0x60EFAF
{
	struct<7> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_6 != Global_2680265.f_1)
		{
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1836068, 2);
			MISC::CLEAR_BIT(&Global_1836068, 1);
			if (Var0.f_2)
			{
				Global_1836068.f_3 = Var0.f_4;
				MISC::SET_BIT(&Global_1836068, 1);
				if (Var0.f_3)
				{
					MISC::SET_BIT(&Global_1836068, 5);
				}
				else
				{
					MISC::CLEAR_BIT(&Global_1836068, 5);
				}
			}
			else
			{
				MISC::SET_BIT(&Global_1836068, 2);
			}
			MISC::CLEAR_BIT(&Global_1836068, 0);
		}
	}
}

void func_493(int iParam0)//Position - 0x60F031
{
	struct<7> Var0;
	if (BitTest(Global_1836068, 0))
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_6 != Global_2680265.f_1)
		{
		}
		else if (Var0.f_1 != PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&Global_1836068, 0);
			if (Var0.f_3)
			{
				MISC::SET_BIT(&Global_1836068, 5);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_1836068, 5);
			}
			Global_1836068.f_13 = Var0.f_1;
			Global_1836068.f_5 = Var0.f_5;
		}
	}
}

void func_494(int iParam0)//Position - 0x60F0A6
{
	struct<10> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		Global_2815059.f_28.f_36 = Var0.f_1;
		Global_2815059.f_28.f_23 = Var0.f_2;
		Global_2815059.f_28.f_24 = { Var0.f_3 };
		Global_2815059.f_28.f_27 = { Var0.f_6 };
		Global_2815059.f_28.f_30 = { Var0.f_9 };
	}
}

void func_495(int iParam0)//Position - 0x60F107
{
	struct<2> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (Global_2815059.f_8 == 0)
		{
			Global_2815059.f_8 = 1;
			Global_2815059.f_9 = Var0.f_1;
		}
	}
}

void func_496(int iParam0)//Position - 0x60F13A
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_2 < 0 || Var0.f_2 >= Global_2689064.f_108)
		{
			return;
		}
		if (Var0.f_3)
		{
			if (!BitTest(Global_2689064.f_108[Var0.f_2], Var0.f_1))
			{
				Global_2689064.f_129[Var0.f_2]++;
				MISC::SET_BIT(&(Global_2689064.f_108[Var0.f_2]), Var0.f_1);
			}
		}
		else if (BitTest(Global_2689064.f_108[Var0.f_2], Var0.f_1))
		{
			Global_2689064.f_129[Var0.f_2] = (Global_2689064.f_129[Var0.f_2] - 1);
			MISC::CLEAR_BIT(&(Global_2689064.f_108[Var0.f_2]), Var0.f_1);
		}
	}
}

void func_497(int iParam0)//Position - 0x60F1FE
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_3)
		{
			if (!BitTest(Global_2689064.f_66[Var0.f_2], Var0.f_1))
			{
				Global_2689064.f_87[Var0.f_2]++;
				MISC::SET_BIT(&(Global_2689064.f_66[Var0.f_2]), Var0.f_1);
			}
		}
		else if (BitTest(Global_2689064.f_66[Var0.f_2], Var0.f_1))
		{
			Global_2689064.f_87[Var0.f_2] = (Global_2689064.f_87[Var0.f_2] - 1);
			MISC::CLEAR_BIT(&(Global_2689064.f_66[Var0.f_2]), Var0.f_1);
		}
	}
}

void func_498(int iParam0)//Position - 0x60F308
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_2 < 0 || Var0.f_2 > 31)
		{
			return;
		}
		if (Var0.f_3)
		{
			MISC::SET_BIT(&(Global_2689064.f_65), Var0.f_2);
		}
		else
		{
			Global_2689064.f_41[Var0.f_2] = -1;
			MISC::CLEAR_BIT(&(Global_2689064.f_65), Var0.f_2);
		}
	}
}

void func_499(int iParam0)//Position - 0x60F36C
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_3)
		{
			Global_2689064.f_41[Var0.f_2] = -1;
			MISC::SET_BIT(&(Global_2689064.f_63), Var0.f_2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2689064.f_63), Var0.f_2);
		}
	}
}

void func_500(int iParam0)//Position - 0x60F3E6
{
	struct<3> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		Global_2779753.f_136[0 /*2*/].f_1 = Var0.f_2;
	}
}

void func_501()//Position - 0x60FC57
{
	Global_1941031.f_210 = 1;
}

void func_502(bool bParam0)//Position - 0x60FC66
{
	Global_1940603.f_21++;
}

void func_503()//Position - 0x60FCBD
{
	Global_1940603.f_20 = 1;
}

void func_504(int iParam0)//Position - 0x60FCDC
{
	Global_1931975.f_1771 = iParam0;
}

void func_505(bool bParam0)//Position - 0x6100D3
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Global_2657492.f_1 = NETWORK::GET_NETWORK_TIME();
}

void func_506(bool bParam0)//Position - 0x6100F0
{
	Global_1573913 = 1;
	Global_1573913.f_1 = bParam0;
}

void func_507(bool bParam0)//Position - 0x610105
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = bParam0;
	MISC::SET_BIT(&Global_2657492, iVar0);
}

void func_508(struct<3> Param0)//Position - 0x61016D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_2667225.f_45.f_197[iVar0] = Global_2667225.f_45.f_197[iVar0 + 1];
		Global_2667225.f_45.f_184[iVar0 /*3*/] = { Global_2667225.f_45.f_184[iVar0 + 1 /*3*/] };
		iVar0++;
	}
	Global_2667225.f_45.f_197[3] = NETWORK::GET_NETWORK_TIME();
	Global_2667225.f_45.f_184[3 /*3*/] = { Param0 };
}

void func_509()//Position - 0x610208
{
	MISC::SET_BIT(&(Global_1048576.f_10), 19);
}

int func_510(var uParam0)//Position - 0x61024E
{
	int iVar0;
	int iVar1;
	iVar1 = uParam0;
	iVar0 = 0;
	while (iVar0 < Global_1664817.f_44)
	{
		if (Global_1664817.f_45[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_511(var uParam0)//Position - 0x612618
{
	int iVar0;
	int iVar1;
	iVar1 = uParam0;
	iVar0 = 0;
	while (iVar0 < Global_1664817.f_66)
	{
		if (Global_1664817.f_67[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_512(int iParam0)//Position - 0x6127FD
{
	struct<4> Var0;
	var uVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		uVar1 = Var0.f_1;
		if (Var0.f_3)
		{
			Global_1057830.f_95 = uVar1;
			Global_1057830.f_96 = Var0.f_2;
			Global_1057830.f_97 = 1;
		}
	}
}

char* func_513(int iParam0)//Position - 0x616E90
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "GB_BB_T_DES" /* GXT: <C>~a~</C>~s~ destroyed a vehicle. */;
			switch (__LIB_6__::func_306(PLAYER::PLAYER_ID()))
			{
				case 4:
					sVar0 = "CSH_TCK_DES_R" /* GXT: <C>~a~</C>~s~ destroyed a security shipment. */;
					break;
			}
			break;
		case 1:
			sVar0 = "GB_BB_T_UDES" /* GXT: You destroyed a vehicle. */;
			switch (__LIB_6__::func_306(PLAYER::PLAYER_ID()))
			{
				case 4:
					sVar0 = "CSH_TCK_DES_L" /* GXT: You destroyed a security shipment. */;
					break;
			}
			break;
		case 2:
			sVar0 = "GB_BB_T_MDES" /* GXT: A vehicle was destroyed. */;
			switch (__LIB_6__::func_306(PLAYER::PLAYER_ID()))
			{
				case 4:
					sVar0 = "CSH_TCK_DES_S" /* GXT: Someone destroyed a security shipment. */;
					break;
			}
			break;
	}
	return sVar0;
}

int func_514(bool bParam0)//Position - 0x6172BB
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			if ((VEHICLE::GET_VEHICLE_CLASS(iVar1) == 15 || VEHICLE::GET_VEHICLE_CLASS(iVar1) == 16) || (Global_262145.f_2418 /* Tunable: FORMATION_BIKE_MODEL */ != 0 && ENTITY::GET_ENTITY_MODEL(iVar1) == Global_262145.f_2418 /* Tunable: FORMATION_BIKE_MODEL */))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false) == iVar0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_515(bool bParam0)//Position - 0x6177A1
{
	if (__LIB_5__::func_185(bParam0) == 258)
	{
		return __LIB_3__::func_233(bParam0);
	}
	return -1;
}

char* func_516(int iParam0, bool bParam1, int iParam2)//Position - 0x6177BF
{
	switch (__LIB_20__::func_789(iParam0))
	{
		case 1:
			if (bParam1)
			{
				return "ILH_T_MPCOLa" /* GXT: You collected the Alkonost. */;
			}
			return "ILH_T_MPCOLb" /* GXT: ~a~ collected the Alkonost. */;
		case 2:
			if (bParam1)
			{
				return "ILH_T_SHCOLa" /* GXT: You collected the stealth helicopter. */;
			}
			return "ILH_T_SHCOLb" /* GXT: ~a~ collected the stealth helicopter. */;
		case 3:
			if (bParam1)
			{
				return "ILH_T_PTBCOLa" /* GXT: You collected the Patrol Boat. */;
			}
			return "ILH_T_PTBCOLb" /* GXT: ~a~ collected the Patrol Boat. */;
		case 4:
			if (bParam1)
			{
				return "ILH_T_SMBCOLa" /* GXT: You collected the Longfin. */;
			}
			return "ILH_T_SMBCOLb" /* GXT: ~a~ collected the Longfin. */;
		case 5:
			if (bParam1)
			{
				return "ILH_T_SMPCOLa" /* GXT: You collected the Velum. */;
			}
			return "ILH_T_SMPCOLb" /* GXT: ~a~ collected the Velum. */;
		case 6:
			switch (iParam0)
			{
				case 13:
					if (bParam1)
					{
						return "ILH_T_DSTCOLa" /* GXT: You collected the Western Rogue. */;
					}
					return "ILH_T_DSTCOLb" /* GXT: ~a~ collected the Western Rogue. */;
				default:
			}
			break;
		case 7:
			if (bParam1)
			{
				return "ILH_T_SNRCOLa" /* GXT: You collected the sonar jammer. */;
			}
			return "ILH_T_SNRCOLb" /* GXT: ~a~ collected the sonar jammer. */;
		case 8:
			if (bParam1)
			{
				return "ILH_T_DEMCOLa" /* GXT: You collected the demolition charges. */;
			}
			return "ILH_T_DEMCOLb" /* GXT: ~a~ collected the demolition charges. */;
		case 9:
			if (bParam1)
			{
				return "ILH_T_CUTCOLa" /* GXT: You collected a cutting torch. */;
			}
			return "ILH_T_CUTCOLb" /* GXT: ~a~ collected a cutting torch. */;
		case 10:
			if (bParam1)
			{
				return "ILH_T_PLSCOLa" /* GXT: You collected a plasma cutter. */;
			}
			return "ILH_T_PLSCOLb" /* GXT: ~a~ collected a plasma cutter. */;
		case 11:
			if (bParam1)
			{
				return "ILH_T_SAFCOLa" /* GXT: You collected the safe code. */;
			}
			return "ILH_T_SAFCOLb" /* GXT: ~a~ collected the safe code. */;
		case 12:
			if (bParam1)
			{
				return "ILH_T_FNGCOLa" /* GXT: You collected the fingerprint cloner. */;
			}
			return "ILH_T_FNGCOLb" /* GXT: ~a~ collected the fingerprint cloner. */;
		case 13:
			if (bParam1)
			{
				return "ILH_T_UWPCOLa" /* GXT: You collected the weapons. */;
			}
			return "ILH_T_UWPCOLb" /* GXT: ~a~ collected the weapons. */;
	}
	return "";
}

char* func_517(int iParam0)//Position - 0x61841B
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iParam0)
	{
		case 1160415507:
			switch (iVar0)
			{
				case 0:
					return "SMTXT_RIVALD" /* GXT: Looks like rival smugglers are on the move. Send them a message won't ya - blow them outta the sky! */;
				case 1:
					return "SMTXT_RIVALD1" /* GXT: Another smuggler operation's not far away - my old partner woulda really showed them who was boss! */;
				case 2:
					return "SMTXT_RIVALD2" /* GXT: Smugglers moving a shipment through our patch. You gonna deal with them, or let them walk all over us? */;
				default:
			}
			break;
		case 198210293:
			switch (iVar0)
			{
				case 0:
					return "MBTXT_RIVAL" /* GXT: I've got word that your rivals are moving their stuff. I'm not telling you to go out there and destroy their shipment, but that might be what you want to do. Tx */;
				case 1:
					return "MBTXT_RIVAL1" /* GXT: A little birdie told me some of your professional rivals are moving product. Now, if you wanted to destroy the shipment, that might be a savvy business move...  but who am I to say? Txx */;
				case 2:
					return "MBTXT_RIVAL2" /* GXT: Hey, you know I don't know what you're doing downstairs in the store room. Well, I also don't know about your rivals moving product around town. Maybe don't tell me if you go and destroy their shipment, okay. Does that make sense?  Txx */;
				default:
			}
			break;
		case 173130779:
			switch (iVar0)
			{
				case 0:
					return "MBCTXT_RIVAL" /* GXT: No one said the club business wasn't cutthroat. It's a small market, and we need to stop other places promoting themselves. Get out there and do that will you! Txx */;
				case 1:
					return "MBCTXT_RIVAL1" /* GXT: Only one dance club can be the place to go in Los Santos, and we need to make sure that's us! Some other fools are promoting themselves, get out there and put a stop to it! Txx */;
				case 2:
					return "MBCTXT_RIVAL2" /* GXT: Hey, we both know our club is better than anyone else's, but that's not what the other guys' promotional material says. Can you get out there and stop them circulating it please? Thanks! Txx */;
				default:
			}
			break;
	}
	return "SMTXT_RIVALD" /* GXT: Looks like rival smugglers are on the move. Send them a message won't ya - blow them outta the sky! */;
}

char* func_518(int iParam0)//Position - 0x6184E5
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iParam0)
	{
		case 1160415507:
			switch (iVar0)
			{
				case 0:
					return "SMTXT_RIVAL" /* GXT: Oh, oh. I've found us a shipment we can steal. Only another smuggler operation's moving it. Take 'em out and recover the stuff if you want. */;
				case 1:
					return "SMTXT_RIVAL1" /* GXT: Are you serious about this business? If you are, take out these other smugglers, and steal their cargo. It's the only way we'll get ahead. */;
				case 2:
					return "SMTXT_RIVAL2" /* GXT: We want to go up in the world, we gotta get ruthless. Take down these smugglers in the area and steal their cargo. Thatta girl! */;
				default:
			}
			break;
		case 1553945504:
			switch (iVar0)
			{
				case 0:
					return "GOTXT_RIVAL" /* GXT: I've picked up a rival heist crew moving prep equipment. Take them down and recover the gear for yourself. */;
				case 1:
					return "GOTXT_RIVAL1" /* GXT: A rival heist crew are moving prep equipment. Take them down and recover the gear for yourself. */;
				case 2:
					return "GOTXT_RIVAL2" /* GXT: Prep equipment is on the move. Take down the rival Heist crew and recover the gear for yourself. */;
				default:
			}
			break;
		case 639967857:
			switch (iVar0)
			{
				case 0:
					return "CHTXT_RIVAL1" /* GXT: Hey - you know the equipment we're trying to source? Well another crew has some of their own, and it's in transit. What do you think? Do we take it? */;
				case 1:
					return "CHTXT_RIVAL2" /* GXT: Word on The Open Road is there's another heist crew with some of the equipment we need. They're moving it right now. Your call – do we make a move? */;
				case 2:
					return "CHTXT_RIVAL3" /* GXT: One of my contacts has good news. Some of your rival criminal elements are shipping some equipment we could use for the heist. Do you want to make a play for it? It's practically a buffet. */;
				default:
			}
			break;
		case -1396457166:
			switch (iVar0)
			{
				case 0:
					return "IHTXT_RIVAL_0" /* GXT: I have reports of a rival organization transporting some equipment that would be useful to us. If you want it, it's there for the taking. */;
				case 1:
					return "IHTXT_RIVAL_1" /* GXT: Surveillance suggests that someone is currently moving some equipment we could use in our operation. We could ask them nicely, or... */;
				case 2:
					return "IHTXT_RIVAL_2" /* GXT: Good news. Another organization is relocating some of their equipment - we could use it for our work. Low-hanging fruit, yes? */;
				default:
			}
			break;
		case -956255885:
			switch (iVar0)
			{
				case 0:
					return "SMRD_FXR_TXT1" /* GXT: Hey, partner. Word is some other organization is moving equipment. Time to hustle. */;
				case 1:
					return "SMRD_FXR_TXT2" /* GXT: Hey, another company's moving equipment around. Wanna show them who runs LS? */;
				case 2:
					return "SMRD_FXR_TXT3" /* GXT: Hey, some organization is moving equipment across town. You thinking what I'm thinking, homie? */;
				default:
			}
			break;
	}
	return "SMTXT_RIVAL" /* GXT: Oh, oh. I've found us a shipment we can steal. Only another smuggler operation's moving it. Take 'em out and recover the stuff if you want. */;
}

char* func_519(bool bParam0, int iParam1)//Position - 0x618623
{
	switch (iParam1)
	{
		case 229:
			if (bParam0)
			{
				return "SMT_STTICKj" /* GXT: ~a~~s~ stole an Air-Freight Shipment from ~a~~s~ and secured it at their Hangar. */;
			}
			return "SMT_STTICKk" /* GXT: ~a~~s~ stole an Air-Freight Shipment from a rival and secured it at their Hangar. */;
		case 233:
			if (bParam0)
			{
				return "SMRD_FMH_DTIC" /* GXT: ~a~~s~ stole Heist Prep Equipment from ~a~~s~ and secured it at their Facility. */;
			}
			return "SMRD_FMH_QTIC" /* GXT: ~a~~s~ stole Heist Prep Equipment from a rival and secured it at their Facility. */;
		case 158:
			if (bParam0)
			{
				return "SMRD_CSH_DTIC" /* GXT: ~a~~s~ stole Heist Prep Equipment from ~a~~s~ and secured it at their Arcade. */;
			}
			return "SMRD_CSH_QTIC" /* GXT: ~a~~s~ stole Heist Prep Equipment from a rival and secured it at their Arcade. */;
		case 256:
			if (bParam0)
			{
				return "SMRD_ILH_DTIC" /* GXT: ~a~~s~ stole Heist Prep Equipment from ~a~~s~ and secured it at their Kosatka. */;
			}
			return "SMRD_ILH_QTIC" /* GXT: ~a~~s~ stole Heist Prep Equipment from a rival and secured it at their Kosatka. */;
		case 263:
			if (bParam0)
			{
				return "SMRD_FXR_DTIC" /* GXT: ~a~~s~ stole an Agency Asset from ~a~~s~. */;
			}
			return "SMRD_FXR_QTIC" /* GXT: ~a~~s~ stole an Agency Asset from a rival. */;
		default:
	}
	return "";
}

char* func_520(int iParam0)//Position - 0x6186BC
{
	switch (iParam0)
	{
		case 4:
			return "BG_CONT_TICKSC" /* GXT: ~a~ ~s~sold Product from their Cocaine business. */;
		case 0:
			return "BG_CONT_TICKSI" /* GXT: ~a~ ~s~sold Product from their Document Forgery business. */;
		case 2:
			return "BG_CONT_TICKSM" /* GXT: ~a~ ~s~sold Product from their Counterfeit Cash Business. */;
		case 3:
			return "BG_CONT_TICKSA" /* GXT: ~a~ ~s~sold Product from their Meth business. */;
		case 1:
			return "BG_CONT_TICKSW" /* GXT: ~a~ ~s~sold Product from their Weed business. */;
		default:
	}
	return "BG_CONT_TICKSG";
}

int func_521(bool bParam0)//Position - 0x619837
{
	if (__LIB_5__::func_185(bParam0) == 262)
	{
		return __LIB_3__::func_233(bParam0);
	}
	return -1;
}

int func_522(bool bParam0)//Position - 0x6198B9
{
	if (__LIB_5__::func_185(bParam0) == 263)
	{
		return __LIB_3__::func_233(bParam0);
	}
	return -1;
}

bool func_523(bool bParam0)//Position - 0x61A103
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_366, 12);
}

bool func_524(bool bParam0)//Position - 0x61A11D
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_366, 13);
}

int func_525(bool bParam0)//Position - 0x61A60B
{
	if (bParam0)
	{
		return 0;
	}
	if (__LIB_2__::func_106(PLAYER::PLAYER_ID()) || __LIB_2__::func_125(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_526(bool bParam0)//Position - 0x61A921
{
	if (__LIB_5__::func_185(bParam0) == 299)
	{
		return __LIB_3__::func_233(bParam0);
	}
	return -1;
}

int func_527(var uParam0)//Position - 0x61B277
{
	int iVar0;
	int iVar1;
	iVar1 = uParam0;
	iVar0 = 0;
	while (iVar0 < Global_1664817)
	{
		if (Global_1664817.f_1[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_528()//Position - 0x61B627
{
	Global_1577871 = 0;
	Global_1577872 = 0;
	Global_1577873 = 0f;
	Global_1577879 = 0;
	Global_1577880 = 0;
	Global_1577881 = 0f;
}

int func_529(int iParam0)//Position - 0x61B706
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1911872[iVar0 /*6*/].f_5 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_530(int iParam0)//Position - 0x61DC5E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (iParam0 == Global_2724923[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_531(int iParam0)//Position - 0x61E06A
{
	switch (iParam0)
	{
		case 0:
			return "pogo_space_monkey";
		case 1:
			return "alien";
		case 2:
			return "alien";
		case 3:
			return "alien";
		case 4:
			return "alien";
		case 5:
			return "alien";
		case 6:
			return "alien";
		case 7:
			return "alien";
		case 8:
			return "alien";
		case 9:
			return "impotent_rage";
		case 10:
			return "impotent_rage";
		case 11:
			return "impotent_rage";
		case 12:
			return "impotent_rage";
		case 13:
			return "impotent_rage";
		case 14:
			return "impotent_rage";
		case 15:
			return "impotent_rage";
		case 16:
			return "impotent_rage";
		case 17:
			return "impotent_rage";
		case 18:
			return "impotent_rage";
		case 19:
			return "impotent_rage";
		case 20:
			return "impotent_rage";
		case 21:
			return "impotent_rage";
		case 22:
			return "impotent_rage";
		case 23:
			return "impotent_rage";
		case 24:
			return "impotent_rage";
		case 25:
			return "impotent_rage";
		case 26:
			return "impotent_rage";
		case 27:
			return "princess_robot_bubblegum";
		case 28:
			return "princess_robot_bubblegum";
		case 29:
			return "princess_robot_bubblegum";
		case 30:
			return "princess_robot_bubblegum";
		case 31:
			return "princess_robot_bubblegum";
		case 32:
			return "princess_robot_bubblegum";
		case 33:
			return "princess_robot_bubblegum";
		case 34:
			return "princess_robot_bubblegum";
		case 35:
			return "princess_robot_bubblegum";
		case 36:
			return "princess_robot_bubblegum";
		case 37:
			return "princess_robot_bubblegum";
		case 38:
			return "princess_robot_bubblegum";
		case 39:
			return "princess_robot_bubblegum";
		case 40:
			return "princess_robot_bubblegum";
		case 41:
			return "princess_robot_bubblegum";
		case 42:
			return "princess_robot_bubblegum";
		case 43:
			return "princess_robot_bubblegum";
		case 44:
			return "princess_robot_bubblegum";
		case 45:
			return "pogo_space_monkey";
		case 46:
			return "pogo_space_monkey";
		case 47:
			return "pogo_space_monkey";
		case 48:
			return "pogo_space_monkey";
		case 49:
			return "pogo_space_monkey";
		case 50:
			return "pogo_space_monkey";
		case 51:
			return "pogo_space_monkey";
		case 52:
			return "pogo_space_monkey";
		case 53:
			return "pogo_space_monkey";
		case 54:
			return "pogo_space_monkey";
		case 55:
			return "pogo_space_monkey";
		case 56:
			return "pogo_space_monkey";
		case 57:
			return "pogo_space_monkey";
		case 58:
			return "pogo_space_monkey";
		case 59:
			return "pogo_space_monkey";
		case 60:
			return "pogo_space_monkey";
		case 61:
			return "pogo_space_monkey";
		case 62:
			return "space_ranger_commander";
		case 63:
			return "space_ranger_commander";
		case 64:
			return "space_ranger_commander";
		case 65:
			return "space_ranger_commander";
		case 66:
			return "space_ranger_commander";
		case 67:
			return "space_ranger_commander";
		case 68:
			return "space_ranger_commander";
		case 69:
			return "space_ranger_commander";
		case 70:
			return "space_ranger_commander";
		case 71:
			return "space_ranger_commander";
		case 72:
			return "space_ranger_commander";
		case 73:
			return "space_ranger_commander";
		case 74:
			return "space_ranger_commander";
		case 75:
			return "space_ranger_commander";
		case 76:
			return "space_ranger_commander";
		case 77:
			return "space_ranger_commander";
		case 78:
			return "space_ranger_commander";
		case 79:
			return "space_ranger_commander";
		case 80:
			return "republican_space_ranger";
		case 81:
			return "republican_space_ranger";
		case 82:
			return "republican_space_ranger";
		case 83:
			return "republican_space_ranger";
		case 84:
			return "republican_space_ranger";
		case 85:
			return "republican_space_ranger";
		case 86:
			return "republican_space_ranger";
		case 87:
			return "republican_space_ranger";
		case 88:
			return "republican_space_ranger";
		case 89:
			return "republican_space_ranger";
		case 90:
			return "republican_space_ranger";
		case 91:
			return "republican_space_ranger";
		case 92:
			return "republican_space_ranger";
		case 93:
			return "republican_space_ranger";
		case 94:
			return "republican_space_ranger";
		case 95:
			return "republican_space_ranger";
		case 96:
			return "republican_space_ranger";
		case 97:
			return "republican_space_ranger";
		case 98:
			return "beast";
		case 99:
			return "sasquatch";
		default:
	}
	return "sasquatch";
}

void func_532(int iParam0)//Position - 0x61E98A
{
	Global_1574508 = 1;
	if (iParam0 < 1)
	{
		iParam0 = Global_4718592.f_169000;
	}
	Global_1574508.f_1 = iParam0;
}

void func_533()//Position - 0x61EA44
{
	if (Global_1574492 == 0)
	{
		if (Global_1574485 == 0)
		{
			Global_1574485 = 1;
		}
	}
}

void func_534()//Position - 0x61EA9D
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var1 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iVar0, true) };
			if (Var1.f_1 > 0f)
			{
				VEHICLE::SET_VEHICLE_TYRE_BURST(iVar0, 0, true, 1000f);
				VEHICLE::SET_VEHICLE_TYRE_BURST(iVar0, 1, true, 1000f);
			}
			else
			{
				VEHICLE::SET_VEHICLE_TYRE_BURST(iVar0, 4, true, 1000f);
				VEHICLE::SET_VEHICLE_TYRE_BURST(iVar0, 5, true, 1000f);
			}
		}
	}
}

int func_535(var uParam0)//Position - 0x61EB14
{
	*uParam0 = OBJECT::CONVERT_OLD_PICKUP_TYPE_TO_NEW(*uParam0);
	switch (*uParam0)
	{
		case joaat("PICKUP_WEAPON_GRENADE"):
		case joaat("PICKUP_WEAPON_MOLOTOV"):
		case joaat("PICKUP_WEAPON_STICKYBOMB"):
		case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_WEAPON_PROXMINE"):
		case joaat("PICKUP_WEAPON_PIPEBOMB"):
			return 1;
			break;
	}
	return 0;
}

int func_536(int iParam0)//Position - 0x61EB5A
{
	switch (iParam0)
	{
		case joaat("PICKUP_WEAPON_GRENADE"):
		case joaat("PICKUP_VEHICLE_WEAPON_GRENADE"):
			return 66;
			break;
		case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMOKEGRENADE"):
			return 68;
			break;
		case joaat("PICKUP_WEAPON_STICKYBOMB"):
		case joaat("PICKUP_VEHICLE_WEAPON_STICKYBOMB"):
			return 70;
			break;
		case joaat("PICKUP_WEAPON_MOLOTOV"):
		case joaat("PICKUP_VEHICLE_WEAPON_MOLOTOV"):
			return 72;
			break;
		case joaat("PICKUP_WEAPON_PISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL"):
			return 18;
			break;
		case joaat("PICKUP_WEAPON_COMBATPISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_COMBATPISTOL"):
			return 40;
			break;
		case joaat("PICKUP_WEAPON_PISTOL50"):
		case joaat("PICKUP_VEHICLE_WEAPON_PISTOL50"):
			return 22;
			break;
		case joaat("PICKUP_WEAPON_APPISTOL"):
		case joaat("PICKUP_VEHICLE_WEAPON_APPISTOL"):
			return 24;
			break;
		case joaat("PICKUP_WEAPON_MICROSMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_MICROSMG"):
			return 26;
			break;
		case joaat("PICKUP_WEAPON_SMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_SMG"):
			return 28;
			break;
		case joaat("PICKUP_WEAPON_ASSAULTSMG"):
			return 30;
			break;
		case joaat("PICKUP_WEAPON_ASSAULTRIFLE"):
			return 32;
			break;
		case joaat("PICKUP_WEAPON_CARBINERIFLE"):
			return 34;
			break;
		case joaat("PICKUP_WEAPON_ADVANCEDRIFLE"):
			return 36;
			break;
		case joaat("PICKUP_WEAPON_MG"):
			return 38;
			break;
		case joaat("PICKUP_WEAPON_ASSAULTMG"):
		case joaat("PICKUP_VEHICLE_WEAPON_ASSAULTSMG"):
			return 42;
			break;
		case joaat("PICKUP_WEAPON_PUMPSHOTGUN"):
			return 44;
			break;
		case joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"):
		case joaat("PICKUP_VEHICLE_WEAPON_SAWNOFF"):
			return 46;
			break;
		case joaat("PICKUP_WEAPON_BULLPUPSHOTGUN"):
			return 48;
			break;
		case joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"):
			return 50;
			break;
		case joaat("PICKUP_WEAPON_SNIPERRIFLE"):
			return 54;
			break;
		case joaat("PICKUP_WEAPON_HEAVYSNIPER"):
			return 56;
			break;
		case joaat("PICKUP_WEAPON_GRENADELAUNCHER"):
			return 60;
			break;
		case joaat("PICKUP_WEAPON_RPG"):
			return 62;
			break;
		case joaat("PICKUP_WEAPON_MINIGUN"):
			return 64;
			break;
		case joaat("PICKUP_WEAPON_STUNGUN"):
			return 52;
			break;
		case joaat("PICKUP_WEAPON_PETROLCAN"):
			return 75;
			break;
		case joaat("PICKUP_WEAPON_KNIFE"):
			return 2;
			break;
		case joaat("PICKUP_WEAPON_NIGHTSTICK"):
			return 4;
			break;
		case joaat("PICKUP_WEAPON_HAMMER"):
			return 12;
			break;
		case joaat("PICKUP_WEAPON_BAT"):
			return 14;
			break;
		case joaat("PICKUP_WEAPON_CROWBAR"):
			return 6;
			break;
		case joaat("PICKUP_WEAPON_GOLFCLUB"):
			return 16;
			break;
		case joaat("PICKUP_WEAPON_COMBATMG"):
			return 40;
			break;
		case joaat("PICKUP_WEAPON_SPECIALCARBINE"):
			return 349;
			break;
		case joaat("PICKUP_WEAPON_BOTTLE"):
			return 143;
			break;
		case joaat("PICKUP_WEAPON_SNSPISTOL"):
			return 145;
			break;
		case joaat("PICKUP_WEAPON_BULLPUPRIFLE"):
			return 351;
			break;
		case joaat("PICKUP_WEAPON_HEAVYPISTOL"):
			return 347;
			break;
		case joaat("PICKUP_WEAPON_GUSENBERG"):
			return 353;
			break;
		case joaat("PICKUP_WEAPON_DAGGER"):
			return 374;
			break;
		case joaat("PICKUP_WEAPON_VINTAGEPISTOL"):
			return 376;
			break;
		case joaat("PICKUP_WEAPON_MUSKET"):
			return 380;
			break;
		case joaat("PICKUP_WEAPON_FIREWORK"):
			return 378;
			break;
		case joaat("PICKUP_WEAPON_HEAVYSHOTGUN"):
			return 392;
			break;
		case joaat("PICKUP_WEAPON_MARKSMANRIFLE"):
			return 394;
			break;
		case joaat("PICKUP_WEAPON_PROXMINE"):
			return 398;
			break;
		case joaat("PICKUP_WEAPON_HOMINGLAUNCHER"):
			return 400;
			break;
		case joaat("PICKUP_WEAPON_COMBATPDW"):
			return 402;
			break;
		case joaat("PICKUP_WEAPON_KNUCKLE"):
			return 404;
			break;
		case joaat("PICKUP_WEAPON_MARKSMANPISTOL"):
			return 406;
			break;
		case joaat("PICKUP_WEAPON_MACHETE"):
			return 408;
			break;
		case joaat("PICKUP_WEAPON_MACHINEPISTOL"):
			return 410;
			break;
		case joaat("PICKUP_WEAPON_DBSHOTGUN"):
			return 415;
			break;
		case joaat("PICKUP_WEAPON_COMPACTRIFLE"):
			return 413;
			break;
		case joaat("PICKUP_WEAPON_HATCHET"):
			return 396;
			break;
		case joaat("PICKUP_WEAPON_FLASHLIGHT"):
			return 417;
			break;
		case joaat("PICKUP_WEAPON_REVOLVER"):
			return 420;
		case joaat("PICKUP_WEAPON_SWITCHBLADE"):
			return 422;
		case joaat("PICKUP_WEAPON_AUTOSHOTGUN"):
			return 427;
			break;
		case joaat("PICKUP_WEAPON_MINISMG"):
			return 433;
			break;
		case joaat("PICKUP_WEAPON_COMPACTLAUNCHER"):
			return 431;
			break;
		case joaat("PICKUP_WEAPON_BATTLEAXE"):
			return 429;
			break;
		case joaat("PICKUP_WEAPON_PIPEBOMB"):
			return 435;
			break;
		case joaat("PICKUP_WEAPON_POOLCUE"):
			return 437;
			break;
		case joaat("PICKUP_WEAPON_WRENCH"):
			return 10;
			break;
	}
	return 2;
}

int func_537(var uParam0)//Position - 0x61F0E2
{
	*uParam0 = OBJECT::CONVERT_OLD_PICKUP_TYPE_TO_NEW(*uParam0);
	switch (*uParam0)
	{
		case joaat("PICKUP_WEAPON_KNIFE"):
		case joaat("PICKUP_WEAPON_BAT"):
		case joaat("PICKUP_WEAPON_NIGHTSTICK"):
		case joaat("PICKUP_WEAPON_HAMMER"):
		case joaat("PICKUP_WEAPON_GOLFCLUB"):
		case joaat("PICKUP_WEAPON_CROWBAR"):
		case joaat("PICKUP_WEAPON_BOTTLE"):
		case joaat("PICKUP_WEAPON_DAGGER"):
		case joaat("PICKUP_WEAPON_KNUCKLE"):
		case joaat("PICKUP_WEAPON_BATTLEAXE"):
		case joaat("PICKUP_WEAPON_POOLCUE"):
		case joaat("PICKUP_WEAPON_WRENCH"):
		case joaat("PICKUP_WEAPON_PIPEBOMB"):
		case joaat("PICKUP_WEAPON_STONE_HATCHET"):
			return 1;
			break;
	}
	return 0;
}

void func_538(var uParam0)//Position - 0x61FC05
{
	if (Global_1836575 == 1)
	{
		if (Global_1836574 == 0)
		{
			Global_1836565 = uParam0;
			Global_1836574 = 1;
		}
	}
}

void func_539()//Position - 0x61FCF1
{
	__LIB_27__::func_504();
	Global_1575070 = 1;
}

void func_540()//Position - 0x61FF25
{
	if (__LIB_0__::func_626() || __LIB_1__::func_585())
	{
		__LIB_27__::func_513();
	}
	else
	{
		Global_2714762.f_754 = 1;
	}
}

bool func_541(bool bParam0)//Position - 0x620684
{
	return Global_1892703[bParam0 /*599*/].f_10 == bParam0;
}

int func_542(bool bParam0)//Position - 0x620B7E
{
	if (__LIB_12__::func_747(__LIB_5__::func_185(bParam0)))
	{
		return 1;
	}
	return 0;
}

void func_543(var uParam0)//Position - 0x620C19
{
	int iVar0;
	iVar0 = uParam0;
	MISC::CLEAR_BIT(&(Global_2678393.f_388), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_389), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_390), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_392), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_396), iVar0);
	MISC::CLEAR_BIT(&(Global_2678393.f_391), iVar0);
}

bool func_544(int iParam0)//Position - 0x620D1F
{
	return Global_1880550[iParam0 /*100*/].f_66;
}

void func_545(var* uParam0, int iParam1, int iParam2)//Position - 0x620D31
{
	switch (iParam1)
	{
		case 1:
			NETWORK::BAD_SPORT_PLAYER_LEFT_DETECTED(uParam0, iParam1, iParam2);
			break;
		case 3:
			NETWORK::BAD_SPORT_PLAYER_LEFT_DETECTED(uParam0, iParam1, iParam2);
			break;
		case 4:
			NETWORK::BAD_SPORT_PLAYER_LEFT_DETECTED(uParam0, iParam1, iParam2);
			break;
		case 2:
			NETWORK::BAD_SPORT_PLAYER_LEFT_DETECTED(uParam0, iParam1, iParam2);
			break;
		case 5:
			NETWORK::BAD_SPORT_PLAYER_LEFT_DETECTED(uParam0, iParam1, iParam2);
			break;
	}
}

int func_546(int iParam0)//Position - 0x620DB5
{
	int iVar0;
	iVar0 = __LIB_1__::func_448(iParam0);
	switch (iVar0)
	{
		case 0:
		case 4:
			return 3;
			break;
		case 1:
		case 5:
			return 1;
			break;
		case 2:
		case 32:
			return 2;
			break;
		case 3:
		case 6:
		case 8:
		case 118:
		case 7:
		case 165:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 33:
		case 34:
		case 35:
			return 4;
			break;
	}
	return 0;
}

int func_547(int iParam0)//Position - 0x620E67
{
	int iVar0;
	iVar0 = __LIB_1__::func_448(iParam0);
	switch (iVar0)
	{
		case 0:
		case 4:
		case 1:
		case 5:
		case 2:
		case 32:
		case 3:
		case 6:
		case 7:
		case 165:
		case 8:
		case 118:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 33:
		case 34:
		case 35:
			return 1;
			break;
	}
	return 0;
}

void func_548()//Position - 0x620F04
{
	int iVar0;
	int iVar1;
	Global_2703735.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			MISC::SET_BIT(&(Global_2703735.f_1), iVar0);
		}
		iVar1 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
		}
		iVar0++;
	}
}

void func_549(int iParam0)//Position - 0x620F59
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Global_1648034.f_241[iVar0 /*33*/][iParam0] = 0;
		iVar0++;
	}
}

int func_550(int* iParam0)//Position - 0x621168
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(*iParam0, "Veh_Modded_By_Player"))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(*iParam0, "Veh_Modded_By_Player");
			if (!iVar1 == -1)
			{
				if (__LIB_2__::func_613(*iParam0, &bVar2))
				{
					DECORATOR::DECOR_SET_INT(*iParam0, "Veh_Modded_By_Player", -1);
					if (bVar2)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					}
					*iParam0 = -1;
					iVar0 = 1;
				}
				else if (bVar2)
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
			}
			else
			{
				*iParam0 = -1;
			}
		}
		else
		{
			*iParam0 = -1;
		}
	}
	return iVar0;
}

void func_551(int iParam0)//Position - 0x62131F
{
	int iVar0;
	struct<13> Var1;
	iVar0 = iParam0;
	while (iVar0 <= (Global_2715699.f_1.f_835 - 2))
	{
		Global_2715699.f_1.f_417[iVar0 /*13*/] = { Global_2715699.f_1.f_417[iVar0 + 1 /*13*/] };
		iVar0++;
	}
	if (Global_2715699.f_1.f_835 > 1)
	{
		Global_2715699.f_1.f_417[(Global_2715699.f_1.f_835 - 1) /*13*/] = { Var1 };
	}
	Global_2715699.f_1.f_835 = (Global_2715699.f_1.f_835 - 1);
}

void func_552(var uParam0)//Position - 0x6213B6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1880550[*uParam0 /*100*/][iVar0] = 0;
		iVar0++;
	}
	Global_1880550[PLAYER::PLAYER_ID() /*100*/][*uParam0] = 0;
}

void func_553(int iParam0)//Position - 0x6216CF
{
	int iVar0;
	struct<57> Var1;
	iVar0 = iParam0;
	while (iVar0 <= (Global_2715699.f_1.f_2805 - 2))
	{
		Global_2715699.f_1.f_845[iVar0 /*57*/] = { Global_2715699.f_1.f_845[iVar0 + 1 /*57*/] };
		if (__LIB_18__::func_583() == iVar0 + 1)
		{
			__LIB_27__::func_408(iVar0);
		}
		iVar0++;
	}
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	if (Global_2715699.f_1.f_2805 > 1)
	{
		Global_2715699.f_1.f_845[(Global_2715699.f_1.f_2805 - 1) /*57*/] = { Var1 };
	}
}

int func_554(var uParam0, int iParam1)//Position - 0x621761
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	if (iVar0 > -1 && iVar0 < 32)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 > -1 && iVar1 < 32)
		{
			if (iParam1 == 19)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_555(var uParam0)//Position - 0x6217A1
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	if (iVar0 > -1 && iVar0 < 32)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 > -1 && iVar1 < 32)
		{
			if (Global_1880550[iVar1 /*100*/].f_67[iVar0] == 1)
			{
				Global_1880550[iVar1 /*100*/].f_67[iVar0] = 0;
				return 1;
			}
		}
	}
	return 0;
}

void func_556(var* uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6234F9
{
	int iVar0;
	if (!__LIB_0__::func_800(*uParam0))
	{
		return;
	}
	if (!__LIB_18__::func_587(*uParam0))
	{
		return;
	}
	iVar0 = 2;
	if (bParam4)
	{
		iVar0 = 3;
	}
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(uParam0, sParam1, iVar0, 2, bParam3);
			break;
		case 1:
			NETWORK::NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(uParam0, sParam1, iVar0, 3, bParam3);
			break;
	}
}

void func_557(int iParam0, int iParam1, int iParam2)//Position - 0x623561
{
	switch (iParam2)
	{
		case 0:
			MISC::SET_BIT(&(Global_2715699.f_1.f_845[iParam0 /*57*/].f_55), iParam1);
			MISC::SET_BIT(&(Global_2715699.f_1.f_845[iParam1 /*57*/].f_55), iParam0);
			break;
		case 1:
			MISC::SET_BIT(&(Global_2715699.f_1.f_845[iParam0 /*57*/].f_56), iParam1);
			MISC::SET_BIT(&(Global_2715699.f_1.f_845[iParam1 /*57*/].f_56), iParam0);
			break;
	}
}

void func_558(int iParam0, var* uParam1, var uParam2)//Position - 0x62373D
{
	struct<16> Var0;
	Var0.f_0 = 15576267;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { *uParam1 };
	Var0.f_15 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 16, iParam0);
	}
}

void func_559()//Position - 0x623796
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (NETWORK::NETWORK_IS_IN_TRANSITION() || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = __LIB_18__::func_584();
		iVar1 = Global_2715699.f_1.f_2806;
		iVar2 = (iVar0 - iVar1);
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_3 = iVar2;
	}
}

void func_560()//Position - 0x6237E5
{
	Global_1576213 = 0;
}

void func_561(int iParam0)//Position - 0x623858
{
	if (!iParam0 == PLAYER::PLAYER_ID())
	{
		NETWORK::NETWORK_DISABLE_INVINCIBLE_FLASHING(iParam0, true);
		MISC::SET_BIT(&(Global_2667225.f_2701), iParam0);
		Global_2667225.f_2702[iParam0] = NETWORK::GET_NETWORK_TIME();
	}
}

int func_562(int iParam0, int iParam1)//Position - 0x6238E2
{
	struct<13> Var0;
	struct<13> Var1;
	Var0 = { __LIB_1__::func_696(iParam0) };
	Var1 = { __LIB_1__::func_696(iParam1) };
	if (__LIB_18__::func_228(&Var0) == __LIB_18__::func_228(&Var1))
	{
		return 1;
	}
	return 0;
}

int func_563(int iParam0)//Position - 0x623914
{
	bool bVar0;
	char cVar1[64];
	StringCopy(&cVar1, PLAYER::GET_PLAYER_NAME(iParam0), 64);
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(Global_1581361, bVar0))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1581361.f_418[bVar0 /*16*/]), &cVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_564(int iParam0)//Position - 0x623974
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_1664817.f_22)
	{
		if (Global_1664817.f_23[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_565()//Position - 0x623E02
{
	int iVar0;
	iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
	if (__LIB_0__::func_845(Global_1852994.f_19, -1))
	{
		if (iVar0 == 293)
		{
			return 1;
		}
	}
	return 0;
}

void func_566(bool bParam0)//Position - 0x62459A
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 26))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 26);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 26))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 26);
	}
}

int func_567()//Position - 0x624CA6
{
	return Global_262145.f_24475 /* Tunable: 1763921019 */;
}

int func_568(int iParam0)//Position - 0x624CC4
{
	return Global_1958659[iParam0 /*5*/].f_2;
}

int func_569(int iParam0)//Position - 0x624CD6
{
	if (iParam0 == 239)
	{
		return Global_1958659.f_17;
	}
	return Global_1958659.f_21;
}

int func_570()//Position - 0x624CF4
{
	return Global_262145.f_24664 /* Tunable: -926426916 */;
}

int func_571()//Position - 0x624D2D
{
	return Global_262145.f_24669 /* Tunable: 181533481 */;
}

void func_572(int iParam0)//Position - 0x625967
{
	Global_32236 = iParam0;
}

void func_573(bool bParam0)//Position - 0x62CF98
{
	if (bParam0)
	{
		Global_2787915 = 1;
	}
	else
	{
		Global_2787915 = 0;
	}
}

char* func_574(int iParam0, int iParam1)//Position - 0x62E526
{
	if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam0)
		{
			case 50:
				return "DLC_MP_IE_M_OUTFIT_3";
				break;
			case 52:
				return "DLC_MP_IE_M_OUTFIT_4";
				break;
			case 45:
				return "DLC_MP_IE_M_OUTFIT_5";
				break;
			case 44:
				return "DLC_MP_IE_M_OUTFIT_6";
				break;
			case 48:
				return "DLC_MP_IE_M_OUTFIT_7";
				break;
			case 47:
				return "DLC_MP_IE_M_OUTFIT_8";
				break;
			case 46:
				return "DLC_MP_IE_M_OUTFIT_9";
				break;
			case 49:
				return "DLC_MP_IE_M_OUTFIT_10";
				break;
			case 51:
				return "DLC_MP_IE_M_OUTFIT_11";
				break;
			case 43:
				return "DLC_MP_IE_M_OUTFIT_12";
				break;
			case 22:
				return "DLC_MP_STUNT_M_OUTFIT_0";
				break;
			case 23:
				return "DLC_MP_STUNT_M_OUTFIT_1";
				break;
			case 24:
				return "DLC_MP_STUNT_M_OUTFIT_2";
				break;
			case 25:
				return "DLC_MP_STUNT_M_OUTFIT_3";
				break;
			case 26:
				return "DLC_MP_STUNT_M_OUTFIT_4";
				break;
			case 27:
				return "DLC_MP_STUNT_M_OUTFIT_5";
				break;
			case 28:
				return "DLC_MP_STUNT_M_OUTFIT_6";
				break;
			case 29:
				return "DLC_MP_STUNT_M_OUTFIT_7";
				break;
			case 30:
				return "DLC_MP_STUNT_M_OUTFIT_8";
				break;
			case 31:
				return "DLC_MP_STUNT_M_OUTFIT_9";
				break;
			case 32:
				return "DLC_MP_STUNT_M_OUTFIT_10";
				break;
			case 33:
				return "DLC_MP_STUNT_M_OUTFIT_11";
				break;
			case 34:
				return "DLC_MP_STUNT_M_OUTFIT_12";
				break;
			case 35:
				return "DLC_MP_STUNT_M_OUTFIT_13";
				break;
			case 36:
				return "DLC_MP_STUNT_M_OUTFIT_14";
				break;
			case 37:
				return "DLC_MP_STUNT_M_OUTFIT_15";
				break;
			case 38:
				return "DLC_MP_STUNT_M_OUTFIT_16";
				break;
			case 39:
				return "DLC_MP_STUNT_M_OUTFIT_17";
				break;
			case 40:
				return "DLC_MP_STUNT_M_OUTFIT_18";
				break;
			case 41:
				return "DLC_MP_STUNT_M_OUTFIT_19";
				break;
			case 42:
				return "DLC_MP_STUNT_M_OUTFIT_20";
				break;
			case 75:
				return "MP_MP_Biker_Tat_000_M";
				break;
			case 74:
				return "MP_MP_Biker_Tat_001_M";
				break;
			case 108:
				return "MP_MP_Biker_Tat_002_M";
				break;
			case 80:
				return "MP_MP_Biker_Tat_003_M";
				break;
			case 113:
				return "MP_MP_Biker_Tat_004_M";
				break;
			case 73:
				return "MP_MP_Biker_Tat_005_M";
				break;
			case 59:
				return "MP_MP_Biker_Tat_006_M";
				break;
			case 100:
				return "MP_MP_Biker_Tat_007_M";
				break;
			case 58:
				return "MP_MP_Biker_Tat_008_M";
				break;
			case 83:
				return "MP_MP_Biker_Tat_009_M";
				break;
			case 79:
				return "MP_MP_Biker_Tat_010_M";
				break;
			case 57:
				return "MP_MP_Biker_Tat_011_M";
				break;
			case 92:
				return "MP_MP_Biker_Tat_012_M";
				break;
			case 72:
				return "MP_MP_Biker_Tat_013_M";
				break;
			case 99:
				return "MP_MP_Biker_Tat_014_M";
				break;
			case 107:
				return "MP_MP_Biker_Tat_015_M";
				break;
			case 91:
				return "MP_MP_Biker_Tat_016_M";
				break;
			case 56:
				return "MP_MP_Biker_Tat_017_M";
				break;
			case 71:
				return "MP_MP_Biker_Tat_018_M";
				break;
			case 70:
				return "MP_MP_Biker_Tat_019_M";
				break;
			case 90:
				return "MP_MP_Biker_Tat_020_M";
				break;
			case 55:
				return "MP_MP_Biker_Tat_021_M";
				break;
			case 112:
				return "MP_MP_Biker_Tat_022_M";
				break;
			case 69:
				return "MP_MP_Biker_Tat_023_M";
				break;
			case 89:
				return "MP_MP_Biker_Tat_024_M";
				break;
			case 88:
				return "MP_MP_Biker_Tat_025_M";
				break;
			case 68:
				return "MP_MP_Biker_Tat_026_M";
				break;
			case 106:
				return "MP_MP_Biker_Tat_027_M";
				break;
			case 111:
				return "MP_MP_Biker_Tat_028_M";
				break;
			case 67:
				return "MP_MP_Biker_Tat_029_M";
				break;
			case 54:
				return "MP_MP_Biker_Tat_030_M";
				break;
			case 78:
				return "MP_MP_Biker_Tat_031_M";
				break;
			case 66:
				return "MP_MP_Biker_Tat_032_M";
				break;
			case 98:
				return "MP_MP_Biker_Tat_033_M";
				break;
			case 65:
				return "MP_MP_Biker_Tat_034_M";
				break;
			case 87:
				return "MP_MP_Biker_Tat_035_M";
				break;
			case 105:
				return "MP_MP_Biker_Tat_036_M";
				break;
			case 104:
				return "MP_MP_Biker_Tat_037_M";
				break;
			case 82:
				return "MP_MP_Biker_Tat_038_M";
				break;
			case 77:
				return "MP_MP_Biker_Tat_039_M";
				break;
			case 110:
				return "MP_MP_Biker_Tat_040_M";
				break;
			case 64:
				return "MP_MP_Biker_Tat_041_M";
				break;
			case 97:
				return "MP_MP_Biker_Tat_042_M";
				break;
			case 53:
				return "MP_MP_Biker_Tat_043_M";
				break;
			case 103:
				return "MP_MP_Biker_Tat_044_M";
				break;
			case 86:
				return "MP_MP_Biker_Tat_045_M";
				break;
			case 96:
				return "MP_MP_Biker_Tat_046_M";
				break;
			case 95:
				return "MP_MP_Biker_Tat_047_M";
				break;
			case 109:
				return "MP_MP_Biker_Tat_048_M";
				break;
			case 94:
				return "MP_MP_Biker_Tat_049_M";
				break;
			case 63:
				return "MP_MP_Biker_Tat_050_M";
				break;
			case 81:
				return "MP_MP_Biker_Tat_051_M";
				break;
			case 76:
				return "MP_MP_Biker_Tat_052_M";
				break;
			case 84:
				return "MP_MP_Biker_Tat_053_M";
				break;
			case 93:
				return "MP_MP_Biker_Tat_054_M";
				break;
			case 85:
				return "MP_MP_Biker_Tat_055_M";
				break;
			case 102:
				return "MP_MP_Biker_Tat_056_M";
				break;
			case 101:
				return "MP_MP_Biker_Tat_057_M";
				break;
			case 62:
				return "MP_MP_Biker_Tat_058_M";
				break;
			case 60:
				return "MP_MP_Biker_Tat_059_M";
				break;
			case 61:
				return "MP_MP_Biker_Tat_060_M";
				break;
		}
		return "";
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		switch (iParam0)
		{
			case 50:
				return "DLC_MP_IE_F_OUTFIT_3";
				break;
			case 52:
				return "DLC_MP_IE_F_OUTFIT_4";
				break;
			case 45:
				return "DLC_MP_IE_F_OUTFIT_5";
				break;
			case 44:
				return "DLC_MP_IE_F_OUTFIT_6";
				break;
			case 48:
				return "DLC_MP_IE_F_OUTFIT_7";
				break;
			case 47:
				return "DLC_MP_IE_F_OUTFIT_8";
				break;
			case 46:
				return "DLC_MP_IE_F_OUTFIT_9";
				break;
			case 49:
				return "DLC_MP_IE_F_OUTFIT_10";
				break;
			case 51:
				return "DLC_MP_IE_F_OUTFIT_11";
				break;
			case 43:
				return "DLC_MP_IE_F_OUTFIT_12";
				break;
			case 22:
				return "DLC_MP_STUNT_F_OUTFIT_0";
				break;
			case 23:
				return "DLC_MP_STUNT_F_OUTFIT_1";
				break;
			case 24:
				return "DLC_MP_STUNT_F_OUTFIT_2";
				break;
			case 25:
				return "DLC_MP_STUNT_F_OUTFIT_3";
				break;
			case 26:
				return "DLC_MP_STUNT_F_OUTFIT_4";
				break;
			case 27:
				return "DLC_MP_STUNT_F_OUTFIT_5";
				break;
			case 28:
				return "DLC_MP_STUNT_F_OUTFIT_6";
				break;
			case 29:
				return "DLC_MP_STUNT_F_OUTFIT_7";
				break;
			case 30:
				return "DLC_MP_STUNT_F_OUTFIT_8";
				break;
			case 31:
				return "DLC_MP_STUNT_F_OUTFIT_9";
				break;
			case 32:
				return "DLC_MP_STUNT_F_OUTFIT_10";
				break;
			case 33:
				return "DLC_MP_STUNT_F_OUTFIT_11";
				break;
			case 34:
				return "DLC_MP_STUNT_F_OUTFIT_12";
				break;
			case 35:
				return "DLC_MP_STUNT_F_OUTFIT_13";
				break;
			case 36:
				return "DLC_MP_STUNT_F_OUTFIT_14";
				break;
			case 37:
				return "DLC_MP_STUNT_F_OUTFIT_15";
				break;
			case 38:
				return "DLC_MP_STUNT_F_OUTFIT_16";
				break;
			case 39:
				return "DLC_MP_STUNT_F_OUTFIT_17";
				break;
			case 40:
				return "DLC_MP_STUNT_F_OUTFIT_18";
				break;
			case 41:
				return "DLC_MP_STUNT_F_OUTFIT_19";
				break;
			case 42:
				return "DLC_MP_STUNT_F_OUTFIT_20";
				break;
			case 75:
				return "MP_MP_Biker_Tat_000_F";
				break;
			case 74:
				return "MP_MP_Biker_Tat_001_F";
				break;
			case 108:
				return "MP_MP_Biker_Tat_002_F";
				break;
			case 80:
				return "MP_MP_Biker_Tat_003_F";
				break;
			case 113:
				return "MP_MP_Biker_Tat_004_F";
				break;
			case 73:
				return "MP_MP_Biker_Tat_005_F";
				break;
			case 59:
				return "MP_MP_Biker_Tat_006_F";
				break;
			case 100:
				return "MP_MP_Biker_Tat_007_F";
				break;
			case 58:
				return "MP_MP_Biker_Tat_008_F";
				break;
			case 83:
				return "MP_MP_Biker_Tat_009_F";
				break;
			case 79:
				return "MP_MP_Biker_Tat_010_F";
				break;
			case 57:
				return "MP_MP_Biker_Tat_011_F";
				break;
			case 92:
				return "MP_MP_Biker_Tat_012_F";
				break;
			case 72:
				return "MP_MP_Biker_Tat_013_F";
				break;
			case 99:
				return "MP_MP_Biker_Tat_014_F";
				break;
			case 107:
				return "MP_MP_Biker_Tat_015_F";
				break;
			case 91:
				return "MP_MP_Biker_Tat_016_F";
				break;
			case 56:
				return "MP_MP_Biker_Tat_017_F";
				break;
			case 71:
				return "MP_MP_Biker_Tat_018_F";
				break;
			case 70:
				return "MP_MP_Biker_Tat_019_F";
				break;
			case 90:
				return "MP_MP_Biker_Tat_020_F";
				break;
			case 55:
				return "MP_MP_Biker_Tat_021_F";
				break;
			case 112:
				return "MP_MP_Biker_Tat_022_F";
				break;
			case 69:
				return "MP_MP_Biker_Tat_023_F";
				break;
			case 89:
				return "MP_MP_Biker_Tat_024_F";
				break;
			case 88:
				return "MP_MP_Biker_Tat_025_F";
				break;
			case 68:
				return "MP_MP_Biker_Tat_026_F";
				break;
			case 106:
				return "MP_MP_Biker_Tat_027_F";
				break;
			case 111:
				return "MP_MP_Biker_Tat_028_F";
				break;
			case 67:
				return "MP_MP_Biker_Tat_029_F";
				break;
			case 54:
				return "MP_MP_Biker_Tat_030_F";
				break;
			case 78:
				return "MP_MP_Biker_Tat_031_F";
				break;
			case 66:
				return "MP_MP_Biker_Tat_032_F";
				break;
			case 98:
				return "MP_MP_Biker_Tat_033_F";
				break;
			case 65:
				return "MP_MP_Biker_Tat_034_F";
				break;
			case 87:
				return "MP_MP_Biker_Tat_035_F";
				break;
			case 105:
				return "MP_MP_Biker_Tat_036_F";
				break;
			case 104:
				return "MP_MP_Biker_Tat_037_F";
				break;
			case 82:
				return "MP_MP_Biker_Tat_038_F";
				break;
			case 77:
				return "MP_MP_Biker_Tat_039_F";
				break;
			case 110:
				return "MP_MP_Biker_Tat_040_F";
				break;
			case 64:
				return "MP_MP_Biker_Tat_041_F";
				break;
			case 97:
				return "MP_MP_Biker_Tat_042_F";
				break;
			case 53:
				return "MP_MP_Biker_Tat_043_F";
				break;
			case 103:
				return "MP_MP_Biker_Tat_044_F";
				break;
			case 86:
				return "MP_MP_Biker_Tat_045_F";
				break;
			case 96:
				return "MP_MP_Biker_Tat_046_F";
				break;
			case 95:
				return "MP_MP_Biker_Tat_047_F";
				break;
			case 109:
				return "MP_MP_Biker_Tat_048_F";
				break;
			case 94:
				return "MP_MP_Biker_Tat_049_F";
				break;
			case 63:
				return "MP_MP_Biker_Tat_050_F";
				break;
			case 81:
				return "MP_MP_Biker_Tat_051_F";
				break;
			case 76:
				return "MP_MP_Biker_Tat_052_F";
				break;
			case 84:
				return "MP_MP_Biker_Tat_053_F";
				break;
			case 93:
				return "MP_MP_Biker_Tat_054_F";
				break;
			case 85:
				return "MP_MP_Biker_Tat_055_F";
				break;
			case 102:
				return "MP_MP_Biker_Tat_056_F";
				break;
			case 101:
				return "MP_MP_Biker_Tat_057_F";
				break;
			case 62:
				return "MP_MP_Biker_Tat_058_F";
				break;
			case 60:
				return "MP_MP_Biker_Tat_059_F";
				break;
			case 61:
				return "MP_MP_Biker_Tat_060_F";
				break;
		}
		return "";
	}
	return "";
}

void func_575(bool bParam0)//Position - 0x62F6C4
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 23))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 23);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 23))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 23);
	}
}

void func_576(bool bParam0)//Position - 0x62F739
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 22);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 22))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 22);
	}
}

void func_577(bool bParam0)//Position - 0x62F7AE
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 21))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 21);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 21);
	}
}

void func_578(int iParam0, bool bParam1)//Position - 0x62F823
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 12))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 12);
				}
				break;
			case 1:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 13))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 13);
				}
				break;
			case 2:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 14))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 14);
				}
				break;
			case 3:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 15))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 15);
				}
				break;
			case 4:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 16))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 16);
				}
				break;
			case 5:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 17))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 17);
				}
				break;
			case 6:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 18))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 18);
				}
				break;
			case 7:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 19))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 19);
				}
				break;
			case 8:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 20))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 20);
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 12))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 12);
				}
				break;
			case 1:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 13))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 13);
				}
				break;
			case 2:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 14))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 14);
				}
				break;
			case 3:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 15))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 15);
				}
				break;
			case 4:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 16))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 16);
				}
				break;
			case 5:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 17))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 17);
				}
				break;
			case 6:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 18))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 18);
				}
				break;
			case 7:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 19))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 19);
				}
				break;
			case 8:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 20))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 20);
				}
				break;
			}
	}
}

void func_579(int iParam0, bool bParam1)//Position - 0x62FC85
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 3))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 3);
				}
				break;
			case 1:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 4))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 4);
				}
				break;
			case 2:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 5))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 5);
				}
				break;
			case 3:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 6))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 6);
				}
				break;
			case 4:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 7))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 7);
				}
				break;
			case 5:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 8))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 8);
				}
				break;
			case 6:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 9))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 9);
				}
				break;
			case 7:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 10))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 10);
				}
				break;
			case 8:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 11))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 11);
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 3))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 3);
				}
				break;
			case 1:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 4))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 4);
				}
				break;
			case 2:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 5))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 5);
				}
				break;
			case 3:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 6))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 6);
				}
				break;
			case 4:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 7))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 7);
				}
				break;
			case 5:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 8))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 8);
				}
				break;
			case 6:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 9))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 9);
				}
				break;
			case 7:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 10))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 10);
				}
				break;
			case 8:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 11))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 11);
				}
				break;
			}
	}
}

void func_580(int iParam0, bool bParam1)//Position - 0x6300D7
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 0))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 0);
				}
				break;
			case 1:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 1))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 1);
				}
				break;
			case 2:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 2))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 2);
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 0))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 0);
				}
				break;
			case 1:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 1))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 1);
				}
				break;
			case 2:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1, 2))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_480.f_1), 2);
				}
				break;
			}
	}
}

int func_581(int iParam0)//Position - 0x630262
{
	switch (iParam0)
	{
		case 0:
			return 10281;
		case 1:
			return 10282;
		case 2:
			return 10283;
		case 3:
			return 10284;
		case 4:
			return 10285;
		case 5:
			return 10286;
		default:
	}
	return 0;
}

bool func_582()//Position - 0x631129
{
	return __LIB_0__::func_137(31755, -1);
}

void func_583(bool bParam0)//Position - 0x63131A
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 30);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 30))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 30);
	}
}

void func_584(bool bParam0)//Position - 0x63138F
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 29))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 29);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 29))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 29);
	}
}

void func_585(bool bParam0)//Position - 0x631404
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 28))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 28);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 28))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 28);
	}
}

void func_586(bool bParam0)//Position - 0x631479
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 27))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 27);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 27))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 27);
	}
}

void func_587(bool bParam0)//Position - 0x6314EE
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 26))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 26);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 26))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 26);
	}
}

int func_588(int iParam0)//Position - 0x631563
{
	switch (iParam0)
	{
		case 0:
			return 9626;
		case 1:
			return 9863;
		case 2:
			return 9864;
		case 3:
			return 9865;
		case 4:
			return 9627;
		case 5:
			return 9628;
		case 6:
			return 9629;
		case 7:
			return 9630;
		default:
	}
	return 13122;
}

void func_589(int iParam0, bool bParam1)//Position - 0x6315D5
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 18))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 18);
				}
				break;
			case 1:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 19))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 19);
				}
				break;
			case 2:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 20))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 20);
				}
				break;
			case 3:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 21))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 21);
				}
				break;
			case 4:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 22))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 22);
				}
				break;
			case 5:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 23))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 23);
				}
				break;
			case 6:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 24))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 24);
				}
				break;
			case 7:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 25))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 25);
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 18))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 18);
				}
				break;
			case 1:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 19))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 19);
				}
				break;
			case 2:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 20))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 20);
				}
				break;
			case 3:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 21))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 21);
				}
				break;
			case 4:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 22))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 22);
				}
				break;
			case 5:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 23))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 23);
				}
				break;
			case 6:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 24))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 24);
				}
				break;
			case 7:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 25))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 25);
				}
				break;
			}
	}
}

void func_590(int iParam0, bool bParam1)//Position - 0x6319D3
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 9))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 9);
				}
				break;
			case 1:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 10))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 10);
				}
				break;
			case 2:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 11))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 11);
				}
				break;
			case 3:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 12))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 12);
				}
				break;
			case 4:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 13))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 13);
				}
				break;
			case 5:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 14))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 14);
				}
				break;
			case 6:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 15))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 15);
				}
				break;
			case 7:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 16))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 16);
				}
				break;
			case 8:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 17))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 17);
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 9))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 9);
				}
				break;
			case 1:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 10))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 10);
				}
				break;
			case 2:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 11))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 11);
				}
				break;
			case 3:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 12))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 12);
				}
				break;
			case 4:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 13))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 13);
				}
				break;
			case 5:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 14))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 14);
				}
				break;
			case 6:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 15))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 15);
				}
				break;
			case 7:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 16))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 16);
				}
				break;
			case 8:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 17))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 17);
				}
				break;
			}
	}
}

void func_591(int iParam0, bool bParam1)//Position - 0x631E48
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 0))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 0);
				}
				break;
			case 1:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 1))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 1);
				}
				break;
			case 2:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 2))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 2);
				}
				break;
			case 3:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 3))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 3);
				}
				break;
			case 4:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 4))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 4);
				}
				break;
			case 5:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 5))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 5);
				}
				break;
			case 6:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 6))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 6);
				}
				break;
			case 7:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 7))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 7);
				}
				break;
			case 8:
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 8))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 8);
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 0))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 0);
				}
				break;
			case 1:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 1))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 1);
				}
				break;
			case 2:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 2))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 2);
				}
				break;
			case 3:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 3))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 3);
				}
				break;
			case 4:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 4))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 4);
				}
				break;
			case 5:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 5))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 5);
				}
				break;
			case 6:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 6))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 6);
				}
				break;
			case 7:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 7))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 7);
				}
				break;
			case 8:
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2, 8))
				{
					MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_465.f_2), 8);
				}
				break;
			}
	}
}

void func_592(bool bParam0)//Position - 0x6325BC
{
	if (bParam0)
	{
		Global_103940 = 1;
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476), 0);
	}
	else
	{
		Global_103940 = 0;
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476), 0);
	}
}

bool func_593()//Position - 0x6326BA
{
	return __LIB_0__::func_137(28149, -1);
}

void func_594(bool bParam0)//Position - 0x632762
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 26))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 26);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 26))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 26);
	}
}

void func_595(bool bParam0)//Position - 0x6327D7
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 25))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 25);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 25))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 25);
	}
}

void func_596(bool bParam0)//Position - 0x63284C
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 24))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 24);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 24))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 24);
	}
}

void func_597(bool bParam0)//Position - 0x6328C1
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 23))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 23);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 23))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 23);
	}
}

void func_598(bool bParam0)//Position - 0x632936
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 22))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 22);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 22))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 22);
	}
}

void func_599(bool bParam0)//Position - 0x6329AB
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 21))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 21);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 21))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 21);
	}
}

void func_600(bool bParam0)//Position - 0x632A20
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 20))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 20);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 20))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 20);
	}
}

void func_601(bool bParam0)//Position - 0x632A95
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 19))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 19);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 19))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 19);
	}
}

void func_602(bool bParam0)//Position - 0x632B0A
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 18))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 18);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 18))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 18);
	}
}

void func_603(bool bParam0)//Position - 0x632F31
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 5))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 5);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 5);
	}
}

void func_604(bool bParam0)//Position - 0x632FA2
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 4))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 4);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 4))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 4);
	}
}

void func_605(bool bParam0)//Position - 0x633084
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 2))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 2);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 2))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 2);
	}
}

void func_606(bool bParam0)//Position - 0x6332B4
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 1))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 1);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 1))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 1);
	}
}

int func_607(int iParam0)//Position - 0x6333E0
{
	switch (iParam0)
	{
		case 16:
			return 1;
			break;
	}
	return 0;
}

int func_608(int iParam0)//Position - 0x6333FD
{
	switch (iParam0)
	{
		case 14:
		case 15:
			return 1;
			break;
	}
	return 0;
}

void func_609(bool bParam0)//Position - 0x633420
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 12))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 12);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 12))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 12);
	}
}

void func_610(bool bParam0)//Position - 0x633495
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 0))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 0);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3, 0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_3), 0);
	}
}

void func_611(bool bParam0)//Position - 0x633506
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 30);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 30))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 30);
	}
}

void func_612(bool bParam0)//Position - 0x63357B
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 29))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 29);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 29))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 29);
	}
}

void func_613(bool bParam0)//Position - 0x6335F0
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 28))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 28);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 28))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 28);
	}
}

void func_614(bool bParam0)//Position - 0x633665
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 31))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 31);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 31))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 31);
	}
}

void func_615(bool bParam0)//Position - 0x6336DA
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_1, 23))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_1), 23);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_1, 23))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_1), 23);
	}
}

void func_616(bool bParam0)//Position - 0x6338A6
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 13))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 13);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 13))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 13);
	}
}

void func_617(int iParam0)//Position - 0x63391B
{
	if (iParam0 != Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_4)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_4 = iParam0;
	}
}

int func_618(int iParam0)//Position - 0x633AF7
{
	switch (iParam0)
	{
		case 17:
		case 18:
		case 19:
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_619(bool bParam0)//Position - 0x63597E
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 7))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 7);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 7))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 7);
	}
}

void func_620(bool bParam0)//Position - 0x6359EF
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 6))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 6);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 6);
	}
}

void func_621(bool bParam0)//Position - 0x635A60
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 5))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 5);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 5);
	}
}

void func_622(bool bParam0)//Position - 0x635AD1
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 4))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 4);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 4);
	}
}

void func_623(bool bParam0)//Position - 0x635B42
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 3))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 3);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 3);
	}
}

void func_624(bool bParam0)//Position - 0x635BB3
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 2))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 2);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 2);
	}
}

void func_625(bool bParam0)//Position - 0x635C24
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 1))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 1);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 1);
	}
}

void func_626(bool bParam0)//Position - 0x635C95
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 0))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 0);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_2), 0);
	}
}

void func_627(bool bParam0)//Position - 0x635D06
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 30))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 30);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 30))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 30);
	}
}

void func_628(bool bParam0)//Position - 0x635D7B
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 29))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 29);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 29))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 29);
	}
}

void func_629(bool bParam0)//Position - 0x635DF0
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 28))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 28);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 28))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 28);
	}
}

void func_630(bool bParam0)//Position - 0x635E65
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 27))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 27);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 27))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 27);
	}
}

void func_631(bool bParam0)//Position - 0x635EDA
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 26))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 26);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 26))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 26);
	}
}

void func_632(bool bParam0)//Position - 0x635F4F
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 25))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 25);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 25))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 25);
	}
}

void func_633(bool bParam0)//Position - 0x635FC4
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 24))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 24);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 24))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 24);
	}
}

void func_634(bool bParam0)//Position - 0x636039
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 23))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 23);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 23))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 23);
	}
}

void func_635(bool bParam0)//Position - 0x6360AE
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 22);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 22))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 22);
	}
}

void func_636(bool bParam0)//Position - 0x636123
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 21))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 21);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 21);
	}
}

void func_637(bool bParam0)//Position - 0x636198
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 20))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 20);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 20))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 20);
	}
}

void func_638(bool bParam0)//Position - 0x63620D
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 19))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 19);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1, 19))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_384.f_1), 19);
	}
}

var func_639(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x636AF2
{
	var uVar0;
	if (iParam0 >= 2)
	{
		MISC::SET_BIT(&uVar0, 9);
	}
	if (iParam0 >= 4)
	{
		MISC::SET_BIT(&uVar0, 3);
	}
	if (iParam0 >= 6)
	{
		MISC::SET_BIT(&uVar0, 5);
	}
	if (iParam0 >= 8)
	{
		MISC::SET_BIT(&uVar0, 10);
	}
	if (iParam0 >= 10)
	{
		MISC::SET_BIT(&uVar0, 1);
	}
	if (iParam0 >= 12)
	{
		MISC::SET_BIT(&uVar0, 7);
	}
	if (iParam0 >= 14)
	{
		MISC::SET_BIT(&uVar0, 6);
	}
	if (iParam0 >= 16)
	{
		MISC::SET_BIT(&uVar0, 2);
	}
	if (iParam0 >= 18)
	{
		MISC::SET_BIT(&uVar0, 8);
	}
	if (iParam0 >= 20)
	{
		MISC::SET_BIT(&uVar0, 4);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&uVar0, 11);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&uVar0, 12);
	}
	if (iParam1 >= 100)
	{
		MISC::SET_BIT(&uVar0, 13);
	}
	return uVar0;
}

int func_640(int iParam0)//Position - 0x63737D
{
	switch (iParam0)
	{
		case 0:
			return 7992;
			break;
		case 1:
			return 7993;
			break;
		case 2:
			return 7994;
			break;
		case 3:
			return 7995;
			break;
		case 4:
			return 7996;
			break;
		case 5:
			return 7997;
			break;
		case 6:
			return 7998;
			break;
		case 7:
			return 7999;
			break;
		case 8:
			return 8000;
			break;
		case 9:
			return 8001;
			break;
		case 10:
			return 8002;
			break;
		case 11:
			return 8003;
			break;
		case 12:
			return 8004;
			break;
		case 13:
			return 8005;
			break;
		case 14:
			return 8006;
			break;
		case 15:
			return 8007;
			break;
		case 16:
			return 8008;
			break;
		case 17:
			return 8009;
			break;
		case 18:
			return 8010;
			break;
		case 19:
			return 8011;
			break;
		case 20:
			return 8012;
			break;
	}
	return 7992;
}

void func_641(bool bParam0)//Position - 0x637C11
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 14))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 14);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 14))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 14);
	}
}

void func_642(bool bParam0)//Position - 0x637C86
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 13))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 13);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 13))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 13);
	}
}

void func_643(bool bParam0)//Position - 0x637CFB
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 12))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 12);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 12))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 12);
	}
}

void func_644(int iParam0)//Position - 0x637D70
{
	if (!Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_6 == iParam0)
	{
		if (iParam0 < 0 || iParam0 > 25)
		{
			return;
		}
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_6 = iParam0;
	}
}

void func_645(int iParam0)//Position - 0x637DBC
{
	if (!Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_5 == iParam0)
	{
		if (iParam0 < 0 || iParam0 > 25)
		{
			return;
		}
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_5 = iParam0;
	}
}

void func_646(bool bParam0)//Position - 0x637E08
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 11))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 11);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 11))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 11);
	}
}

void func_647(bool bParam0)//Position - 0x637E7D
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 10))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 10);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 10))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 10);
	}
}

void func_648(bool bParam0)//Position - 0x637EF2
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 9))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 9);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 9))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 9);
	}
}

void func_649(bool bParam0)//Position - 0x637F67
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 8))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 8);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 8))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 8);
	}
}

void func_650(bool bParam0)//Position - 0x637FDC
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 7))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 7);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 7))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 7);
	}
}

void func_651(bool bParam0)//Position - 0x63804E
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 6))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 6);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 6);
	}
}

void func_652(bool bParam0)//Position - 0x6380BF
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 5))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 5);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 5);
	}
}

void func_653(bool bParam0)//Position - 0x638130
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 4))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 4);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 4);
	}
}

void func_654(bool bParam0)//Position - 0x6381A1
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 3))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 3);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 3);
	}
}

void func_655(int iParam0)//Position - 0x638212
{
	if (!Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_4 == iParam0)
	{
		if (iParam0 < 0 || iParam0 > 25)
		{
			return;
		}
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_4 = iParam0;
	}
}

void func_656(bool bParam0)//Position - 0x63825E
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 2))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 2);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 2);
	}
}

void func_657(bool bParam0)//Position - 0x6382CF
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 1))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 1);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 1);
	}
}

void func_658(bool bParam0)//Position - 0x638340
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 0))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 0);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 0);
	}
}

int func_659(int iParam0)//Position - 0x6383EC
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 <= 0 || iVar0 >= 2)
	{
		return 0;
	}
	return 1;
}

int func_660(int iParam0)//Position - 0x639CF9
{
	switch (iParam0)
	{
		case 0:
			return 30484;
			break;
		case 1:
			return 30485;
			break;
		case 2:
			return 30486;
			break;
		case 3:
			return 30487;
			break;
		case 4:
			return 30488;
			break;
		case 5:
			return 30489;
			break;
		case 6:
			return 30490;
			break;
	}
	return 0;
}

int func_661(int iParam0)//Position - 0x63A1FC
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24438 /* Tunable: 110291087 */;
			break;
		case 2:
			return Global_262145.f_24439 /* Tunable: 252546283 */;
			break;
		case 3:
			return Global_262145.f_24440 /* Tunable: -893872940 */;
			break;
		case 4:
			return Global_262145.f_24441 /* Tunable: 1958040669 */;
			break;
		case 5:
			return Global_262145.f_24442 /* Tunable: 1636696402 */;
			break;
		case 6:
			return Global_262145.f_24443 /* Tunable: -1026126259 */;
			break;
		case 0:
			return Global_262145.f_24437 /* Tunable: -1195979598 */;
			break;
	}
	return 0;
}

int func_662(int iParam0)//Position - 0x63A81B
{
	switch (iParam0)
	{
		case 0:
			return 22023;
			break;
		case 1:
			return 22024;
			break;
		case 2:
			return 22025;
			break;
		case 3:
			return 22026;
			break;
		case 4:
			return 22027;
			break;
		case 5:
			return 22028;
			break;
	}
	return 0;
}

int func_663(int iParam0)//Position - 0x63CD0A
{
	switch (iParam0)
	{
		case 1:
			return 1525000;
		case 2:
			return 1200000;
		case 3:
			return 3250000;
		case 4:
			return 2085000;
		case 5:
			return 2650000;
		default:
	}
	return 0;
}

void func_664(char* sParam0, int iParam1)//Position - 0x63CE8A
{
	StringCopy(sParam0, "HANGAR_INDEX_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v0", 64);
}

int func_665(int iParam0)//Position - 0x63F3D7
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_19650 /* Tunable: IMPEXP_WAREHOUSE_LAPUERTA_BASE_COST */;
		case 2:
			return Global_262145.f_19651 /* Tunable: IMPEXP_WAREHOUSE_LAMESA_BASE_COST */;
		case 3:
			return Global_262145.f_19652 /* Tunable: IMPEXP_WAREHOUSE_DAVIS_BASE_COST */;
		case 4:
			return Global_262145.f_19653 /* Tunable: -2100999849 */;
		case 5:
			return Global_262145.f_19654 /* Tunable: IMPEXP_WAREHOUSE_MURRIETA_BASE_COST */;
		case 6:
			return Global_262145.f_19655 /* Tunable: IMPEXP_WAREHOUSE_CYPRESSFLATS_BASE_COST */;
		case 7:
			return Global_262145.f_19656 /* Tunable: IMPEXP_WAREHOUSE_ELBURRO_BASE_COST */;
		case 8:
			return Global_262145.f_19657 /* Tunable: IMPEXP_WAREHOUSE_ELYSIANISLAND_BASE_COST */;
		case 9:
			return Global_262145.f_19658 /* Tunable: IMPEXP_WAREHOUSE_LSIA1_BASE_COST */;
		case 10:
			return Global_262145.f_19659 /* Tunable: IMPEXP_WAREHOUSE_LSIA2_BASE_COST */;
		default:
	}
	return 0;
}

int func_666(int iParam0)//Position - 0x63F49C
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_19637 /* Tunable: IMPEXP_WAREHOUSE_LAPUERTA_COST */;
		case 2:
			return Global_262145.f_19638 /* Tunable: IMPEXP_WAREHOUSE_LAMESA_COST */;
		case 3:
			return Global_262145.f_19639 /* Tunable: IMPEXP_WAREHOUSE_DAVIS_COST */;
		case 4:
			return Global_262145.f_19640 /* Tunable: 14402113 */;
		case 5:
			return Global_262145.f_19641 /* Tunable: IMPEXP_WAREHOUSE_MURRIETA_COST */;
		case 6:
			return Global_262145.f_19642 /* Tunable: IMPEXP_WAREHOUSE_CYPRESSFLATS_COST */;
		case 7:
			return Global_262145.f_19643 /* Tunable: IMPEXP_WAREHOUSE_ELBURRO_COST */;
		case 8:
			return Global_262145.f_19644 /* Tunable: IMPEXP_WAREHOUSE_ELYSIANISLAND_COST */;
		case 9:
			return Global_262145.f_19645 /* Tunable: IMPEXP_WAREHOUSE_LSIA1_COST */;
		case 10:
			return Global_262145.f_19646 /* Tunable: IMPEXP_WAREHOUSE_LSIA2_COST */;
		default:
	}
	return 0;
}

int func_667(int iParam0)//Position - 0x64045B
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 1:
			return 4;
		case 4:
			return 2;
		case 3:
			return 3;
		case 0:
			return 5;
		case 2:
			return 6;
		default:
	}
	return -1;
}

void func_668(bool bParam0)//Position - 0x641CFA
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 2))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366), 2);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 2))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366), 2);
	}
}

void func_669(int iParam0)//Position - 0x641D63
{
	bool bVar0;
	switch (iParam0)
	{
		case 1:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 1))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 1);
			}
			break;
		case 2:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 2))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 2);
			}
			break;
		case 3:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 3))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 3);
			}
			break;
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 4))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 4);
			}
			break;
		case 5:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 5))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 5);
			}
			break;
		case 6:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 6))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 6);
			}
			break;
		case 7:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 7))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 7);
			}
			break;
		case 8:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 8))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 8);
			}
			break;
		case 9:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 9))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 9);
			}
			break;
		case 10:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 10))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 10);
			}
			break;
		case 11:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 11))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 11);
			}
			break;
		case 12:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 12))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 12);
			}
			break;
		case 13:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 13))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 13);
			}
			break;
		case 14:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 14))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 14);
			}
			break;
		case 15:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 15))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 15);
			}
			break;
		case 16:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 16))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 16);
			}
			break;
		case 17:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 17))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 17);
			}
			break;
		case 18:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 18))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 18);
			}
			break;
		case 19:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 19))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 19);
			}
			break;
		case 20:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, 20))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), 20);
			}
			break;
		default:
			break;
	}
	bVar0 = true;
	while (bVar0 <= 20)
	{
		if (bVar0 != iParam0)
		{
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190, bVar0))
			{
				MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_190), bVar0);
			}
		}
		bVar0++;
	}
}

void func_670(var uParam0)//Position - 0x6432C6
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_363 = uParam0;
}

int func_671(int iParam0)//Position - 0x64331A
{
	switch (iParam0)
	{
		case 0:
			return 11507;
		case 1:
			return 11508;
		case 2:
			return 11509;
		case 3:
			return 11510;
		case 4:
			return 8831;
		default:
	}
	return 11507;
}

void func_672(bool bParam0)//Position - 0x643441
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 20);
	}
}

void func_673(bool bParam0)//Position - 0x643490
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 19);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 19);
	}
}

void func_674(bool bParam0)//Position - 0x6434DF
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 18);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 18);
	}
}

void func_675(bool bParam0)//Position - 0x64352E
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 17);
	}
}

void func_676(bool bParam0)//Position - 0x64357D
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 16);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 16);
	}
}

int func_677(int iParam0)//Position - 0x643857
{
	switch (iParam0)
	{
		case 0:
			return 16;
			break;
		case 1:
			return 42;
			break;
		case 2:
			return 111;
			break;
	}
	return 0;
}

void func_678(bool bParam0)//Position - 0x6439A7
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 12))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 12);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 12))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 12);
	}
}

int func_679(int iParam0)//Position - 0x643ABB
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_3__::func_36(iParam0))
	{
		return iVar0;
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = Global_262145.f_15992 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE0 */;
			break;
		case 2:
			iVar0 = Global_262145.f_15993 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE1 */;
			break;
		case 3:
			iVar0 = Global_262145.f_15994 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE2 */;
			break;
		case 4:
			iVar0 = Global_262145.f_15995 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE3 */;
			break;
		case 5:
			iVar0 = Global_262145.f_15996 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE4 */;
			break;
		case 6:
			iVar0 = Global_262145.f_15997 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE5 */;
			break;
		case 7:
			iVar0 = Global_262145.f_15998 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE6 */;
			break;
		case 8:
			iVar0 = Global_262145.f_15999 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE7 */;
			break;
		case 9:
			iVar0 = Global_262145.f_16000 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE8 */;
			break;
		case 10:
			iVar0 = Global_262145.f_16001 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE9 */;
			break;
		case 11:
			iVar0 = Global_262145.f_16002 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE10 */;
			break;
		case 12:
			iVar0 = Global_262145.f_16003 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE11 */;
			break;
		case 13:
			iVar0 = Global_262145.f_16004 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE12 */;
			break;
		case 14:
			iVar0 = Global_262145.f_16005 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE13 */;
			break;
		case 15:
			iVar0 = Global_262145.f_16006 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE14 */;
			break;
		case 16:
			iVar0 = Global_262145.f_16007 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE15 */;
			break;
		case 17:
			iVar0 = Global_262145.f_16008 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE16 */;
			break;
		case 18:
			iVar0 = Global_262145.f_16009 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE17 */;
			break;
		case 19:
			iVar0 = Global_262145.f_16010 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE18 */;
			break;
		case 20:
			iVar0 = Global_262145.f_16011 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE19 */;
			break;
		case 21:
			iVar0 = Global_262145.f_16012 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE20 */;
			break;
		case 22:
			iVar0 = Global_262145.f_16013 /* Tunable: SECUROSERV_BASE_WAREHOUSE_WAREHOUSE21 */;
			break;
	}
	return iVar0;
}

int func_680(int iParam0)//Position - 0x643E2E
{
	switch (iParam0)
	{
		case 0:
			return 6368;
		case 1:
			return 6369;
		case 2:
			return 6370;
		case 3:
			return 6371;
		case 4:
			return 6372;
		default:
	}
	return 6368;
}

int func_681(int iParam0)//Position - 0x643E7C
{
	switch (iParam0)
	{
		case 0:
			return 6357;
		case 1:
			return 6358;
		case 2:
			return 6359;
		case 3:
			return 6360;
		case 4:
			return 6361;
		default:
	}
	return 6357;
}

var func_682()//Position - 0x643ECA
{
	return Global_2869994[__LIB_0__::getGlobal_1574918()];
}

void func_683()//Position - 0x6452E4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::getGlobal_1574918();
	iVar2 = __LIB_25__::func_313(iVar0);
	iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
	if (BitTest(iVar3, 1))
	{
		MISC::CLEAR_BIT(&iVar3, 1);
		bVar1 = true;
	}
	if (BitTest(iVar3, 2))
	{
		MISC::CLEAR_BIT(&iVar3, 2);
		bVar1 = true;
	}
	if (BitTest(iVar3, 3))
	{
		MISC::CLEAR_BIT(&iVar3, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::SET_FREEMODE_STRAND_PROGRESSION_STATUS(iVar2, iVar3);
	}
}

void func_684(int iParam0)//Position - 0x645B83
{
	Global_2727829 = iParam0;
}

int func_685(int iParam0)//Position - 0x645D5C
{
	int iVar0;
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = iParam0 + 1;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_686()//Position - 0x645E12
{
	if (BitTest(Global_2667185, 19))
	{
		Global_2667198.f_2 = 1;
		if (BitTest(Global_2667185, 27))
		{
			Global_2667198.f_3 = (MISC::GET_GAME_TIMER() + 60000);
		}
		else
		{
			Global_2667198.f_3 = (MISC::GET_GAME_TIMER() + 300000);
		}
		return;
	}
	__LIB_18__::func_97();
}

void func_687(int iParam0)//Position - 0x6482BC
{
	struct<2> Var0;
	Var0.f_0 = -624451532;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

void func_688()//Position - 0x64926D
{
	struct<464> Var0;
	Var0 = 33;
	Var0.f_430 = 33;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_1939845, &Var0, 464);
	}
	else
	{
		Global_1939845 = { Var0 };
	}
}

void func_689()//Position - 0x6492AA
{
	struct<35> Var0;
	Var0.f_1 = 5;
	Var0.f_7 = 4;
	Var0.f_12 = 4;
	Var0.f_17 = 4;
	Var0.f_22 = 4;
	Var0.f_31 = 300000;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_1931940, &Var0, 35);
	}
	else
	{
		Global_1931940 = { Var0 };
	}
}

void func_690()//Position - 0x649302
{
	struct<132> Var0;
	Var0 = 32;
	Var0.f_33 = 32;
	Var0.f_66 = 32;
	Var0.f_99 = 32;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_4533973, &Var0, 132);
	}
	else
	{
		Global_4533973 = { Var0 };
	}
}

void func_691()//Position - 0x649349
{
	struct<2757> Var0;
	Var0.f_2 = 16;
	Var0.f_2.f_1.f_1.f_1 = -1;
	Var0.f_2.f_1.f_1.f_2 = -1;
	Var0.f_2.f_1.f_1.f_9 = -1;
	Var0.f_2.f_1.f_14 = 145;
	Var0.f_2.f_1.f_16 = -1;
	Var0.f_2.f_1.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_1 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_2 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_1.f_9 = -1;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_14 = 145;
	Var0.f_2.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = -1;
	Var0.f_291 = 16;
	Var0.f_356 = 32;
	Var0.f_356.f_1.f_7 = -1;
	Var0.f_356.f_1.f_8 = -1;
	Var0.f_356.f_1.f_10.f_53 = -1;
	Var0.f_356.f_1.f_10.f_55 = -1;
	Var0.f_356.f_1.f_10.f_56 = -1;
	Var0.f_356.f_1.f_10.f_57 = -1;
	Var0.f_356.f_1.f_10.f_58 = -1;
	Var0.f_356.f_1.f_10.f_59 = -1;
	Var0.f_356.f_1.f_10.f_60 = -1;
	Var0.f_356.f_1.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_7 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_8 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_53 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_55 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_56 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_57 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_58 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_59 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_60 = -1;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_62 = 16777215;
	Var0.f_356.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_10.f_64 = 2;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2657492, &Var0, 2757);
	}
	else
	{
		Global_2657492 = { Var0 };
	}
}

void func_692()//Position - 0x649F48
{
	struct<171> Var0;
	Var0 = 20;
	Var0.f_41 = 20;
	Var0.f_66 = 20;
	Var0.f_87 = 20;
	Var0.f_108 = 20;
	Var0.f_129 = 20;
	Var0.f_150 = 20;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2689064, &Var0, 171);
	}
	else
	{
		Global_2689064 = { Var0 };
	}
}

void func_693()//Position - 0x649FA6
{
	struct<581> Var0;
	Var0 = 32;
	Var0.f_1.f_3 = -1;
	Var0.f_1.f_4 = -1;
	Var0.f_1.f_10.f_3 = -1;
	Var0.f_1.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_3 = -1;
	Var0.f_1.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_10.f_4 = -1;
	Var0.f_324 = 32;
	Var0.f_324.f_1.f_3 = 1;
	Var0.f_324.f_1.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	Var0.f_324.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_3 = 1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2688483, &Var0, 581);
	}
	else
	{
		Global_2688483 = { Var0 };
	}
}

void func_694()//Position - 0x64A2AB
{
	struct<823> Var0;
	Var0 = 1;
	Var0.f_1 = 41;
	Var0.f_1.f_1 = 3;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_6 = 3;
	Var0.f_1.f_1.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = 3;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_1.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1;
	Var0.f_248 = 41;
	Var0.f_248.f_1 = 2;
	Var0.f_248.f_1.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_248.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_372 = 32;
	Var0.f_372.f_1 = -1;
	Var0.f_372.f_1.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = -1;
	Var0.f_372.f_226 = 32;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2687660, &Var0, 823);
	}
	else
	{
		Global_2687660 = { Var0 };
	}
}

void func_695()//Position - 0x64A7A4
{
	struct<225> Var0;
	Var0 = 16;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2687435, &Var0, 225);
	}
	else
	{
		Global_2687435 = { Var0 };
	}
}

void func_696()//Position - 0x64A7D6
{
	struct<210> Var0;
	Var0 = 16;
	Var0.f_1.f_12 = -1;
	Var0.f_1.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	Var0.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_12 = -1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2687225, &Var0, 210);
	}
	else
	{
		Global_2687225 = { Var0 };
	}
}

void func_697()//Position - 0x64A88C
{
	struct<657> Var0;
	Var0 = 16;
	Var0.f_1 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_2 = 11;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_9 = -1;
	Var0.f_1.f_3.f_16 = -1;
	Var0.f_1.f_3.f_19 = -1;
	Var0.f_1.f_3.f_20 = -1;
	Var0.f_1.f_27 = -1;
	Var0.f_1.f_41 = 5;
	Var0.f_1.f_41.f_1 = 10;
	Var0.f_1.f_41.f_2 = 11;
	Var0.f_1.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41 = 5;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_1 = 10;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_2 = 11;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_1 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_2 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_9 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_16 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_19 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_3.f_20 = -1;
	Var0.f_1.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_41.f_27 = -1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2686568, &Var0, 657);
	}
	else
	{
		Global_2686568 = { Var0 };
	}
}

void func_698()//Position - 0x64AD05
{
	struct<2650> Var0;
	Var0 = 32;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_97 = 42;
	Var0.f_97.f_1 = -1;
	Var0.f_97.f_1.f_1 = -1;
	Var0.f_97.f_1.f_2 = -1;
	Var0.f_97.f_1.f_3 = -1;
	Var0.f_97.f_1.f_4 = -1;
	Var0.f_97.f_1.f_33 = -1;
	Var0.f_97.f_1.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_1 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_2 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_3 = -1;
	Var0.f_97.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_4 = -1;
	Var0.f_1485 = 26;
	Var0.f_1485.f_27 = 26;
	Var0.f_1485.f_54 = 26;
	Var0.f_1485.f_81 = 26;
	Var0.f_1485.f_81.f_1 = 32;
	Var0.f_1485.f_81.f_1.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_81.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var0.f_1485.f_940 = 26;
	Var0.f_2452 = 10;
	Var0.f_2452.f_1.f_13 = -1;
	Var0.f_2452.f_1.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_16.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_14 = 1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_13 = -1;
	Var0.f_2452.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_14 = 1;
	Var0.f_2613 = 32;
	Var0.f_2647 = -1;
	Var0.f_2649 = -1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2683918, &Var0, 2650);
	}
	else
	{
		Global_2683918 = { Var0 };
	}
}

void func_699()//Position - 0x64B5E6
{
	struct<2156> Var0;
	Var0.f_3 = 1;
	Var0.f_4 = 32;
	Var0.f_4.f_1 = 3;
	Var0.f_4.f_1.f_1 = -1;
	Var0.f_4.f_1.f_2 = 3;
	Var0.f_4.f_1.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 3;
	Var0.f_4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_70 = -1;
	Var0.f_70.f_4 = -1;
	Var0.f_77 = -1;
	Var0.f_77.f_4 = -1;
	Var0.f_84 = -1;
	Var0.f_84.f_1 = -15;
	Var0.f_94 = 32;
	Var0.f_127 = 32;
	Var0.f_127.f_1 = -1;
	Var0.f_127.f_1.f_1 = -1;
	Var0.f_127.f_1.f_2 = -1;
	Var0.f_127.f_1.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_127.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_192 = 6;
	Var0.f_199.f_1 = 64;
	Var0.f_199.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_5 = 5;
	Var0.f_199.f_1.f_1.f_11 = -1;
	Var0.f_199.f_1.f_1.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5 = 5;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_1 = -1;
	Var0.f_199.f_1.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_11.f_2 = -1000;
	Var0.f_199.f_962 = 10;
	Var0.f_199.f_962.f_1.f_1 = 18;
	Var0.f_199.f_962.f_1.f_20 = 18;
	Var0.f_199.f_962.f_1.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_1 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20 = 18;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_199.f_962.f_1.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_75.f_20.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1000;
	Var0.f_1912 = 3;
	Var0.f_1912.f_1 = 1;
	Var0.f_1912.f_1.f_8 = -1;
	Var0.f_1912.f_1.f_9 = -1;
	Var0.f_1912.f_1.f_10 = -1;
	Var0.f_1912.f_1.f_11 = -1;
	Var0.f_1912.f_1.f_12 = -1;
	Var0.f_1912.f_1.f_16 = 1;
	Var0.f_1912.f_1.f_16.f_8 = -1;
	Var0.f_1912.f_1.f_16.f_9 = -1;
	Var0.f_1912.f_1.f_16.f_10 = -1;
	Var0.f_1912.f_1.f_16.f_11 = -1;
	Var0.f_1912.f_1.f_16.f_12 = -1;
	Var0.f_1912.f_1.f_16.f_16 = 1;
	Var0.f_1912.f_1.f_16.f_16.f_8 = -1;
	Var0.f_1912.f_1.f_16.f_16.f_9 = -1;
	Var0.f_1912.f_1.f_16.f_16.f_10 = -1;
	Var0.f_1912.f_1.f_16.f_16.f_11 = -1;
	Var0.f_1912.f_1.f_16.f_16.f_12 = -1;
	Var0.f_1961 = 32;
	Var0.f_1994 = 32;
	Var0.f_2027 = 32;
	Var0.f_2027.f_1 = 3;
	Var0.f_2027.f_1.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var0.f_2027.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2681762, &Var0, 2156);
	}
	else
	{
		Global_2681762 = { Var0 };
	}
}

void func_700()//Position - 0x64D477
{
	struct<33> Var0;
	Var0 = 32;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_1883751, &Var0, 33);
	}
	else
	{
		Global_1883751 = { Var0 };
	}
}

void func_701()//Position - 0x64D4A9
{
	struct<35> Var0;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_4456449, &Var0, 35);
	}
	else
	{
		Global_4456449 = { Var0 };
	}
}

void func_702()//Position - 0x64D4D3
{
	struct<26> Var0;
	Var0.f_2 = 2;
	Var0.f_5 = 1;
	Var0.f_9 = 1;
	Var0.f_12 = 1;
	Var0.f_16 = 2;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_1659814, &Var0, 26);
	}
	else
	{
		Global_1659814 = { Var0 };
	}
}

void func_703()//Position - 0x64D51E
{
	int iVar0;
	struct<566> Var1;
	Var1 = 2;
	Var1.f_4 = 32;
	Var1.f_106 = 2;
	Var1.f_109 = 2;
	Var1.f_112 = 2;
	Var1.f_116 = 58;
	Var1.f_176 = 77;
	Var1.f_254 = 32;
	Var1.f_389 = 2;
	Var1.f_389.f_3 = 2;
	Var1.f_395.f_4 = 62;
	Var1.f_395.f_67 = 62;
	Var1.f_527 = 3;
	Var1.f_533 = 32;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Var1.f_106[iVar0] = -1;
		Var1.f_109[iVar0] = -1;
		iVar0++;
	}
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_1835502, &Var1, 566);
	}
	else
	{
		Global_1835502 = { Var1 };
	}
}

void func_704()//Position - 0x64D5D7
{
	struct<1497> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = 32;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2 = -1;
	Var0.f_2.f_1.f_4 = -1;
	Var0.f_2.f_1.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = -1;
	Var0.f_2.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = -1;
	Var0.f_131 = 32;
	Var0.f_228 = 32;
	Var0.f_261 = 32;
	Var0.f_294 = 32;
	Var0.f_327 = 32;
	Var0.f_361 = 32;
	Var0.f_394 = 32;
	Var0.f_427 = 32;
	Var0.f_461 = 32;
	Var0.f_461.f_1 = 2;
	Var0.f_461.f_1.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_461.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 2;
	Var0.f_818 = 10;
	Var0.f_818.f_1 = -1;
	Var0.f_818.f_1.f_1 = -1;
	Var0.f_818.f_1.f_1.f_1 = -1;
	Var0.f_818.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11 = 32;
	Var0.f_818.f_11.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_11.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_818.f_44 = 10;
	Var0.f_818.f_44.f_1 = -1;
	Var0.f_818.f_44.f_1.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_818.f_44.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_818.f_66 = 6;
	Var0.f_818.f_66.f_1 = 2;
	Var0.f_818.f_66.f_1.f_3 = 2;
	Var0.f_818.f_66.f_1.f_3.f_3 = 2;
	Var0.f_818.f_66.f_1.f_3.f_3.f_3 = 2;
	Var0.f_818.f_66.f_1.f_3.f_3.f_3.f_3 = 2;
	Var0.f_818.f_66.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_903.f_1 = 32;
	Var0.f_903.f_34 = 32;
	Var0.f_903.f_68 = 32;
	Var0.f_903.f_102 = 32;
	Var0.f_903.f_135 = 32;
	Var0.f_903.f_168 = 32;
	Var0.f_903.f_201 = 32;
	Var0.f_1137 = 32;
	Var0.f_1137.f_33 = 32;
	Var0.f_1137.f_66 = 32;
	Var0.f_1236 = 32;
	Var0.f_1236.f_1.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1236.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_1399 = 32;
	Var0.f_1399.f_1.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1399.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&Global_2680265, &Var0, 1497);
	}
	else
	{
		Global_2680265 = { Var0 };
	}
}

void func_705(int iParam0)//Position - 0x64DCCA
{
	struct<7> Var0;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1887882[iParam0 /*7*/]), &Var0, 7);
	}
	else
	{
		Global_1887882[iParam0 /*7*/] = { Var0 };
	}
}

void func_706(int iParam0)//Position - 0x64DCF9
{
	struct<51> Var0;
	Var0 = 50;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1886249[iParam0 /*51*/]), &Var0, 51);
	}
	else
	{
		Global_1886249[iParam0 /*51*/] = { Var0 };
	}
}

void func_707(int iParam0)//Position - 0x64DD33
{
	struct<77> Var0;
	Var0 = 7;
	Var0.f_9 = -1;
	Var0.f_11 = 1;
	Var0.f_13 = -1;
	Var0.f_24 = 7;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1883784[iParam0 /*77*/]), &Var0, 77);
	}
	else
	{
		Global_1883784[iParam0 /*77*/] = { Var0 };
	}
}

void func_708(int iParam0)//Position - 0x64DD84
{
	struct<199> Var0;
	Var0 = 15;
	Var0.f_91 = 3;
	Var0.f_91.f_1.f_30 = -1;
	Var0.f_91.f_1.f_31 = -1;
	Var0.f_91.f_1.f_32 = -1;
	Var0.f_91.f_1.f_33 = -1;
	Var0.f_91.f_1.f_34.f_30 = -1;
	Var0.f_91.f_1.f_34.f_31 = -1;
	Var0.f_91.f_1.f_34.f_32 = -1;
	Var0.f_91.f_1.f_34.f_33 = -1;
	Var0.f_91.f_1.f_34.f_34.f_30 = -1;
	Var0.f_91.f_1.f_34.f_34.f_31 = -1;
	Var0.f_91.f_1.f_34.f_34.f_32 = -1;
	Var0.f_91.f_1.f_34.f_34.f_33 = -1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1924338[iParam0 /*199*/]), &Var0, 199);
	}
	else
	{
		Global_1924338[iParam0 /*199*/] = { Var0 };
	}
}

void func_709(int iParam0)//Position - 0x64DE16
{
	struct<100> Var0;
	Var0 = 32;
	Var0.f_33 = 32;
	Var0.f_67 = 32;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1880550[iParam0 /*100*/]), &Var0, 100);
	}
	else
	{
		Global_1880550[iParam0 /*100*/] = { Var0 };
	}
}

void func_710(int iParam0)//Position - 0x64DE5E
{
	struct<120> Var0;
	Var0.f_4 = -1;
	Var0.f_15 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_25 = 1;
	Var0.f_38.f_1 = 4;
	Var0.f_38.f_6 = 4;
	Var0.f_38.f_11 = 4;
	Var0.f_38.f_16 = 5;
	Var0.f_38.f_31 = 4;
	Var0.f_77.f_1 = 13;
	Var0.f_77.f_1.f_1.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = 1;
	Var0.f_77.f_1.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = 1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1888862[iParam0 /*120*/]), &Var0, 120);
	}
	else
	{
		Global_1888862[iParam0 /*120*/] = { Var0 };
	}
}

void func_711(int iParam0)//Position - 0x64DF5E
{
	struct<26> Var0;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1659950[iParam0 /*26*/]), &Var0, 26);
	}
	else
	{
		Global_1659950[iParam0 /*26*/] = { Var0 };
	}
}

void func_712(int iParam0)//Position - 0x64DF90
{
	var uVar0;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1659869[iParam0]), &uVar0, 1);
	}
	else
	{
		Global_1659869[iParam0] = uVar0;
	}
}

void func_713(int iParam0)//Position - 0x64DFBB
{
	struct<834> Var0;
	struct<16> Var1;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_11.f_5 = -1;
	Var0.f_33 = 2;
	Var0.f_36.f_1 = -1;
	Var0.f_36.f_2 = -1;
	Var0.f_36.f_9 = -1;
	Var0.f_36.f_16 = -1;
	Var0.f_36.f_19 = -1;
	Var0.f_36.f_20 = -1;
	Var0.f_57 = 31;
	Var0.f_57.f_33 = -1;
	Var0.f_57.f_34 = -1;
	Var0.f_96.f_2 = -1;
	Var0.f_96.f_30 = -1;
	Var0.f_96.f_36 = 1000;
	Var0.f_141 = -1;
	Var0.f_180.f_4 = 1;
	Var0.f_185.f_1 = -1;
	Var0.f_200 = 2;
	Var0.f_267 = 29;
	Var0.f_267.f_32 = -1;
	Var0.f_267.f_33 = -1;
	Var0.f_267.f_36 = 32;
	Var0.f_267.f_82 = 29;
	Var0.f_267.f_112 = -1;
	Var0.f_267.f_113 = -1;
	Var0.f_267.f_114 = 5;
	Var0.f_267.f_142.f_2 = 40;
	Var0.f_267.f_191 = 6;
	Var0.f_267.f_295.f_8 = 7;
	Var0.f_267.f_295.f_16 = 16;
	Var0.f_267.f_295.f_33 = 7;
	Var0.f_267.f_336.f_6 = 10;
	Var0.f_267.f_336.f_7 = -1;
	Var0.f_267.f_353.f_4 = -1;
	Var0.f_267.f_353.f_5 = -1;
	Var0.f_267.f_353.f_6 = -1;
	Var0.f_267.f_353.f_7 = -1;
	Var0.f_267.f_353.f_8 = -1;
	Var0.f_267.f_370 = 7;
	Var0.f_267.f_378 = -1;
	Var0.f_267.f_381 = -1;
	Var0.f_267.f_384.f_6.f_16 = -1;
	Var0.f_267.f_416 = 41;
	Var0.f_267.f_465.f_4 = -1;
	Var0.f_267.f_465.f_5 = 2;
	Var0.f_267.f_473 = 2;
	Var0.f_752 = -1;
	Var0.f_765 = 2;
	Var0.f_773 = -1;
	Var0.f_774 = -1;
	Var0.f_776 = -1;
	Var0.f_777 = 2;
	Var0.f_780 = 6;
	Var0.f_788 = 2;
	Var0.f_791 = 1;
	Var0.f_794 = 3;
	Var0.f_801 = -1;
	Var0.f_803 = -1;
	Var0.f_811 = -1;
	Var0.f_816 = 9;
	Var0.f_827 = -1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1853348[iParam0 /*834*/]), &Var0, 834);
	}
	else
	{
		Global_1853348[iParam0 /*834*/] = { Var0 };
	}
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1880037[iParam0 /*16*/]), &Var1, 16);
	}
	else
	{
		Global_1880037[iParam0 /*16*/] = { Var1 };
	}
}

void func_714(int iParam0)//Position - 0x64E214
{
	struct<453> Var0;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_9 = -1;
	Var0.f_1.f_16 = -1;
	Var0.f_1.f_19 = -1;
	Var0.f_1.f_20 = -1;
	Var0.f_23 = -1;
	Var0.f_41 = 2;
	Var0.f_71.f_4 = 500;
	Var0.f_71.f_5 = 500;
	Var0.f_71.f_6 = -1;
	Var0.f_87.f_1 = 42;
	Var0.f_87.f_2 = -1;
	Var0.f_87.f_3 = -1;
	Var0.f_87.f_6.f_1 = 42;
	Var0.f_87.f_14 = 4;
	Var0.f_87.f_14.f_1 = 42;
	Var0.f_87.f_14.f_2.f_1 = -1;
	Var0.f_87.f_14.f_2.f_2 = -1;
	Var0.f_87.f_14.f_2.f_9 = -1;
	Var0.f_87.f_14.f_14 = 3;
	Var0.f_124.f_6 = 32;
	Var0.f_200 = -1;
	Var0.f_201 = -1;
	Var0.f_202 = -1;
	Var0.f_204 = -1;
	Var0.f_212 = -1;
	Var0.f_213 = -1;
	Var0.f_214 = -1;
	Var0.f_244 = -1;
	Var0.f_245 = -1;
	Var0.f_257 = -1;
	Var0.f_258 = -1;
	Var0.f_259 = -1;
	Var0.f_260 = -1;
	Var0.f_263 = 7;
	Var0.f_269.f_6 = 7;
	Var0.f_269.f_14 = -1;
	Var0.f_269.f_15 = -1;
	Var0.f_269.f_17 = 2;
	Var0.f_269.f_20 = -1;
	Var0.f_269.f_46 = -1;
	Var0.f_269.f_48 = -1;
	Var0.f_318.f_6 = -1;
	Var0.f_318.f_7 = -1;
	Var0.f_318.f_15 = -1;
	Var0.f_318.f_16 = -1;
	Var0.f_318.f_17 = -1;
	Var0.f_318.f_25 = -1;
	Var0.f_318.f_26 = -1;
	Var0.f_352.f_2 = -1;
	Var0.f_352.f_4 = 32;
	Var0.f_395 = 3;
	Var0.f_407 = 6;
	Var0.f_414 = -1;
	Var0.f_426 = -1;
	Var0.f_427 = -1;
	Var0.f_428.f_1 = -1;
	Var0.f_428.f_2 = -1;
	Var0.f_428.f_3 = -1;
	Var0.f_436.f_3 = -1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2689235[iParam0 /*453*/]), &Var0, 453);
	}
	else
	{
		Global_2689235[iParam0 /*453*/] = { Var0 };
	}
}

char* func_715()//Position - 0x64E6B8
{
	if (LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE())
	{
		return __LIB_1__::func_834();
	}
	if (NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA())
	{
		return __LIB_1__::func_834();
	}
	if (NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT())
	{
		return __LIB_1__::func_834();
	}
	switch (__LIB_0__::func_3())
	{
		case 0:
			return __LIB_1__::func_834();
			break;
		case 2:
			return "Creator";
			break;
	}
	return "";
}

int func_716()//Position - 0x64E8A0
{
	return Global_2715699.f_3879;
}

void func_717(bool bParam0)//Position - 0x64EA02
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("DLC_Tuner_Meet_Building_Music", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("DLC_Tuner_Meet_Building_Engines", bParam0);
}

void func_718()//Position - 0x64EB3A
{
	Global_2714762.f_765 = { 0f, 0f, 0f };
}

void func_719()//Position - 0x64F40B
{
	Global_2714762.f_835 = 1;
}

bool func_720(int iParam0)//Position - 0x64F48C
{
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 9);
}

bool func_721()//Position - 0x64F4A1
{
	return BitTest(Global_2714762.f_3, 0);
}

void func_722(int iParam0)//Position - 0x64FD0B
{
	Global_1931975.f_1766 = iParam0;
}

void func_723(var uParam0)//Position - 0x650404
{
	Global_2714762.f_13 = uParam0;
}

void func_724()//Position - 0x650474
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 24);
}

bool func_725(int iParam0)//Position - 0x650491
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_96.f_32, 12);
}

int func_726(int iParam0)//Position - 0x6504A9
{
	return Global_2689235[iParam0 /*453*/].f_220;
}

void func_727()//Position - 0x6504BC
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 10);
}

void func_728(var uParam0)//Position - 0x650523
{
	Global_2715699.f_1.f_2822 = uParam0;
}

void func_729()//Position - 0x650536
{
	MISC::SET_BIT(&Global_2714762, 1);
}

void func_730(int iParam0)//Position - 0x650607
{
	Global_2726694 = iParam0;
}

void func_731()//Position - 0x650615
{
	Global_2714762.f_748 = 1;
}

void func_732()//Position - 0x650625
{
	Global_2714762.f_747 = 1;
}

bool func_733(int iParam0)//Position - 0x6506DE
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_96.f_32, 6);
}

void func_734(struct<3> Param0, bool bParam1, bool bParam2)//Position - 0x6506F5
{
	if (__LIB_0__::func_490(Param0, 8000f, 8000f, 1500f, 5.8f, 0))
	{
		Param0 = { Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_35 };
	}
	Global_2714762.f_765 = { Param0 };
	if (bParam1)
	{
		Global_1835428 = { Param0 };
	}
	else if (bParam2)
	{
		Global_1835428 = { 0f, 0f, 0f };
	}
}

void func_735()//Position - 0x65075C
{
	Global_2714762.f_723 = 1;
}

void func_736()//Position - 0x65076C
{
	MISC::CLEAR_BIT(&Global_2714762, 1);
}

void func_737()//Position - 0x65077D
{
	Global_2714762.f_721 = 1;
}

void func_738(int iParam0)//Position - 0x65078D
{
	Global_2714762.f_764 = iParam0;
}

void func_739()//Position - 0x65079E
{
	Global_2714762.f_847 = 1;
}

bool func_740()//Position - 0x6507AE
{
	return Global_2714762.f_732;
}

bool func_741()//Position - 0x650823
{
	return Global_1931618.f_7;
}

void func_742(int iParam0)//Position - 0x65086E
{
	Global_2727822 = iParam0;
}

void func_743()//Position - 0x65087C
{
	Global_2714762.f_764 = -1;
}

int func_744(int iParam0)//Position - 0x65246D
{
	int iVar0;
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() / iParam0);
	iVar0++;
	iVar0 = (iVar0 * iParam0);
	return iVar0;
}

char* func_745(int iParam0, int iParam1)//Position - 0x652645
{
	int iVar0;
	iVar0 = Global_1659461[iParam0 /*3*/][__LIB_1__::func_27(iParam1)];
	return STATS::STAT_GET_USER_ID(iVar0);
}

void func_746(bool bParam0)//Position - 0x6526A7
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_1931610, 26);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1931610, 26);
	}
}

void func_747()//Position - 0x6530EC
{
	MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 9);
}

void func_748(int iParam0)//Position - 0x653106
{
	Global_2676210 = iParam0;
}

void func_749()//Position - 0x6531B5
{
	Global_1659608 = 0;
}

float func_750(int iParam0)//Position - 0x653E2D
{
	float fVar0;
	switch (iParam0)
	{
		case 2:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_TOTAL_RACES_WON")) / (__LIB_0__::func_991(joaat("MPPLY_TOTAL_RACES_WON")) + __LIB_0__::func_991(joaat("MPPLY_TOTAL_RACES_LOST")))));
			break;
		case 8:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_BJ_WINS")) / (__LIB_0__::func_991(joaat("MPPLY_BJ_WINS")) + __LIB_0__::func_991(joaat("MPPLY_BJ_LOST")))));
			break;
		case 3:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_HORDEWINS")) / __LIB_0__::func_991(joaat("MPPLY_CRHORDE"))));
			break;
		case 14:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_DARTS_TOTAL_WINS")) / __LIB_0__::func_991(joaat("MPPLY_DARTS_TOTAL_MATCHES"))));
			break;
		case 15:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_ARMWRESTLING_TOTAL_WINS")) / __LIB_0__::func_991(joaat("MPPLY_ARMWRESTLING_TOTAL_MATCH"))));
			break;
		case 12:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_TENNIS_MATCHES_WON")) / (__LIB_0__::func_991(joaat("MPPLY_TENNIS_MATCHES_WON")) + __LIB_0__::func_991(joaat("MPPLY_TENNIS_MATCHES_LOST")))));
			break;
		case 11:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_GOLF_WINS")) / (__LIB_0__::func_991(joaat("MPPLY_GOLF_WINS")) + __LIB_0__::func_991(joaat("MPPLY_GOLF_LOSSES")))));
			break;
		case 13:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_SHOOTINGRANGE_WINS")) / (__LIB_0__::func_991(joaat("MPPLY_SHOOTINGRANGE_WINS")) + __LIB_0__::func_991(joaat("MPPLY_SHOOTINGRANGE_LOSSES")))));
			break;
		case 1:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_TOTAL_DEATHMATCH_WON")) / (__LIB_0__::func_991(joaat("MPPLY_TOTAL_DEATHMATCH_WON")) + __LIB_0__::func_991(joaat("MPPLY_TOTAL_DEATHMATCH_LOST")))));
			break;
		case 0:
			fVar0 = SYSTEM::TO_FLOAT((__LIB_0__::func_991(joaat("MPPLY_MCMWIN")) / __LIB_0__::func_991(joaat("MPPLY_CRMISSION"))));
			break;
	}
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	return fVar0;
}

int func_751(int iParam0)//Position - 0x653FD8
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 8:
			return 1;
		case 3:
			return 2;
		case 14:
			return 3;
		case 15:
			return 4;
		case 12:
			return 5;
		case 11:
			return 6;
		case 13:
			return 7;
		case 1:
			return 8;
		case 0:
			return 9;
		default:
	}
	return -1;
}

void func_752(int iParam0, var uParam1)//Position - 0x6548D8
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("ARMY"), *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, joaat("ARMY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("SECURITY_GUARD"), *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, joaat("SECURITY_GUARD"));
}

void func_753()//Position - 0x654AC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 128;
	iVar2 = 22;
	if (!Global_1659608)
	{
		Global_1659609 = __LIB_0__::func_991(joaat("MPPLY_CREW_0_ID"));
		Global_1659610 = __LIB_0__::func_991(joaat("MPPLY_CREW_1_ID"));
		Global_1659611 = __LIB_0__::func_991(joaat("MPPLY_CREW_2_ID"));
		Global_1659612 = __LIB_0__::func_991(joaat("MPPLY_CREW_3_ID"));
		Global_1659613 = __LIB_0__::func_991(joaat("MPPLY_CREW_4_ID"));
		Global_1659614 = __LIB_0__::func_991(joaat("MPPLY_CREW_LOCAL_XP_0"));
		Global_1659615 = __LIB_0__::func_991(joaat("MPPLY_CREW_LOCAL_XP_1"));
		Global_1659616 = __LIB_0__::func_991(joaat("MPPLY_CREW_LOCAL_XP_2"));
		Global_1659617 = __LIB_0__::func_991(joaat("MPPLY_CREW_LOCAL_XP_3"));
		Global_1659618 = __LIB_0__::func_991(joaat("MPPLY_CREW_LOCAL_XP_4"));
		Global_1659619 = __LIB_0__::func_991(joaat("MPPLY_BECAME_CHEATER_NUM"));
		Global_1659620 = __LIB_0__::func_991(joaat("MPPLY_FRIENDLY"));
		Global_1659621 = __LIB_0__::func_991(joaat("MPPLY_OFFENSIVE_LANGUAGE"));
		Global_1659622 = __LIB_0__::func_991(joaat("MPPLY_GRIEFING"));
		Global_1659623 = __LIB_0__::func_991(joaat("MPPLY_HELPFUL"));
		Global_1659624 = __LIB_0__::func_991(joaat("MPPLY_OFFENSIVE_TAGPLATE"));
		Global_1659625 = __LIB_0__::func_991(joaat("MPPLY_OFFENSIVE_UGC"));
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_1659627[iVar0] = __LIB_13__::func_194(768, iVar0);
			Global_1659633[iVar0] = __LIB_13__::func_194(769, iVar0);
			Global_1659639[iVar0] = __LIB_13__::func_194(770, iVar0);
			Global_1659645[iVar0] = __LIB_13__::func_194(771, iVar0);
			Global_1659651[iVar0] = __LIB_13__::func_194(8733, iVar0);
			Global_1659657[iVar0] = __LIB_13__::func_194(778, iVar0);
			Global_1659663[iVar0] = __LIB_13__::func_194(779, iVar0);
			Global_1659669[iVar0] = __LIB_13__::func_194(780, iVar0);
			Global_1659675[iVar0] = __LIB_13__::func_194(781, iVar0);
			Global_1659681[iVar0] = __LIB_13__::func_194(8731, iVar0);
			Global_1659687[iVar0] = __LIB_13__::func_194(788, iVar0);
			Global_1659693[iVar0] = __LIB_13__::func_194(789, iVar0);
			Global_1659699[iVar0] = __LIB_13__::func_194(790, iVar0);
			Global_1659705[iVar0] = __LIB_13__::func_194(791, iVar0);
			Global_1659711[iVar0] = __LIB_13__::func_194(8729, iVar0);
			Global_1659717[iVar0] = __LIB_13__::func_194(758, iVar0);
			Global_1659723[iVar0] = __LIB_13__::func_194(759, iVar0);
			Global_1659729[iVar0] = __LIB_13__::func_194(760, iVar0);
			Global_1659735[iVar0] = __LIB_13__::func_194(761, iVar0);
			Global_1659741[iVar0] = __LIB_13__::func_194(8735, iVar0);
			Global_1659747[iVar0] = __LIB_13__::func_194(1304, iVar0);
			Global_1659753[iVar0] = __LIB_13__::func_194(7236, iVar0);
			Global_1659759[iVar0] = __LIB_13__::func_194(640, iVar0);
			Global_1659765[iVar0] = __LIB_13__::func_194(1279, iVar0);
			if (Global_1659765[iVar0] > iVar1)
			{
				Global_1659765[iVar0] = 0;
			}
			else
			{
				Global_1659765[iVar0] = Global_1659765[iVar0];
			}
			Global_2869777[0 /*3*/][iVar0] = __LIB_13__::func_194(1878, iVar0);
			if (Global_2869777[0 /*3*/][iVar0] > iVar1)
			{
				Global_2869777[0 /*3*/][iVar0] = 0;
			}
			else
			{
				Global_2869777[0 /*3*/][iVar0] = Global_2869777[0 /*3*/][iVar0];
			}
			Global_2869777[1 /*3*/][iVar0] = __LIB_13__::func_194(2269, iVar0);
			if (Global_2869777[1 /*3*/][iVar0] > iVar1)
			{
				Global_2869777[1 /*3*/][iVar0] = 0;
			}
			else
			{
				Global_2869777[1 /*3*/][iVar0] = Global_2869777[1 /*3*/][iVar0];
			}
			Global_2869777[2 /*3*/][iVar0] = __LIB_13__::func_194(2932, iVar0);
			if (Global_2869777[2 /*3*/][iVar0] > iVar1)
			{
				Global_2869777[2 /*3*/][iVar0] = 0;
			}
			else
			{
				Global_2869777[2 /*3*/][iVar0] = Global_2869777[2 /*3*/][iVar0];
			}
			Global_2869777[3 /*3*/][iVar0] = __LIB_13__::func_194(3061, iVar0);
			if (Global_2869777[3 /*3*/][iVar0] > iVar1)
			{
				Global_2869777[3 /*3*/][iVar0] = 0;
			}
			else
			{
				Global_2869777[3 /*3*/][iVar0] = Global_2869777[3 /*3*/][iVar0];
			}
			Global_2869950[iVar0] = __LIB_13__::func_194(11391, iVar0);
			Global_2869862[0 /*3*/][iVar0] = __LIB_13__::func_194(3056, iVar0);
			Global_2869862[1 /*3*/][iVar0] = __LIB_13__::func_194(3057, iVar0);
			Global_2869862[2 /*3*/][iVar0] = __LIB_13__::func_194(3058, iVar0);
			Global_2869862[3 /*3*/][iVar0] = __LIB_13__::func_194(3059, iVar0);
			Global_2869862[4 /*3*/][iVar0] = __LIB_13__::func_194(3060, iVar0);
			Global_2869862[5 /*3*/][iVar0] = __LIB_13__::func_194(3224, iVar0);
			Global_2869777[4 /*3*/][iVar0] = __LIB_13__::func_194(3230, iVar0);
			Global_2869862[6 /*3*/][iVar0] = __LIB_13__::func_194(3232, iVar0);
			Global_2869777[5 /*3*/][iVar0] = __LIB_13__::func_194(3233, iVar0);
			Global_2869862[7 /*3*/][iVar0] = __LIB_13__::func_194(3237, iVar0);
			Global_2869777[6 /*3*/][iVar0] = __LIB_13__::func_194(3235, iVar0);
			Global_2869862[8 /*3*/][iVar0] = __LIB_13__::func_194(4022, iVar0);
			Global_2869777[7 /*3*/][iVar0] = __LIB_13__::func_194(4023, iVar0);
			Global_2869862[9 /*3*/][iVar0] = __LIB_13__::func_194(4025, iVar0);
			Global_2869777[8 /*3*/][iVar0] = __LIB_13__::func_194(4026, iVar0);
			Global_2869862[10 /*3*/][iVar0] = __LIB_13__::func_194(4028, iVar0);
			Global_2869777[9 /*3*/][iVar0] = __LIB_13__::func_194(4029, iVar0);
			Global_2869862[11 /*3*/][iVar0] = __LIB_13__::func_194(4031, iVar0);
			Global_2869777[10 /*3*/][iVar0] = __LIB_13__::func_194(4032, iVar0);
			Global_2869862[12 /*3*/][iVar0] = __LIB_13__::func_194(6113, iVar0);
			Global_2869777[11 /*3*/][iVar0] = __LIB_13__::func_194(6113, iVar0);
			Global_2869862[13 /*3*/][iVar0] = __LIB_13__::func_194(6171, iVar0);
			Global_2869777[12 /*3*/][iVar0] = __LIB_13__::func_194(6171, iVar0);
			Global_2869862[14 /*3*/][iVar0] = __LIB_13__::func_194(6549, iVar0);
			Global_2869777[13 /*3*/][iVar0] = __LIB_13__::func_194(6549, iVar0);
			Global_2869862[15 /*3*/][iVar0] = __LIB_13__::func_194(6561, iVar0);
			Global_2869777[14 /*3*/][iVar0] = __LIB_13__::func_194(6562, iVar0);
			Global_2869862[16 /*3*/][iVar0] = __LIB_13__::func_194(6564, iVar0);
			Global_2869777[15 /*3*/][iVar0] = __LIB_13__::func_194(6565, iVar0);
			Global_2869862[17 /*3*/][iVar0] = __LIB_13__::func_194(6567, iVar0);
			Global_2869777[16 /*3*/][iVar0] = __LIB_13__::func_194(6568, iVar0);
			Global_2869777[17 /*3*/][iVar0] = __LIB_13__::func_194(7286, iVar0);
			Global_2869777[18 /*3*/][iVar0] = __LIB_13__::func_194(7288, iVar0);
			Global_2869777[19 /*3*/][iVar0] = __LIB_13__::func_194(7290, iVar0);
			Global_2869777[20 /*3*/][iVar0] = __LIB_13__::func_194(8013, iVar0);
			Global_2869777[21 /*3*/][iVar0] = __LIB_13__::func_194(8537, iVar0);
			Global_2869862[23 /*3*/][iVar0] = __LIB_13__::func_194(8982, iVar0);
			Global_2869777[22 /*3*/][iVar0] = __LIB_13__::func_194(8980, iVar0);
			Global_2869862[24 /*3*/][iVar0] = __LIB_13__::func_194(8985, iVar0);
			Global_2869777[23 /*3*/][iVar0] = __LIB_13__::func_194(8983, iVar0);
			Global_2869777[24 /*3*/][iVar0] = __LIB_13__::func_194(9624, iVar0);
			Global_2869777[25 /*3*/][iVar0] = __LIB_13__::func_194(9913, iVar0);
			Global_2869862[27 /*3*/][iVar0] = __LIB_13__::func_194(10443, iVar0);
			Global_2869777[26 /*3*/][iVar0] = __LIB_13__::func_194(10441, iVar0);
			Global_2869862[28 /*3*/][iVar0] = __LIB_13__::func_194(10446, iVar0);
			Global_2869777[27 /*3*/][iVar0] = __LIB_13__::func_194(10444, iVar0);
			Global_1659771[iVar0] = __LIB_13__::func_194(765, iVar0);
			Global_1659777[iVar0] = __LIB_13__::func_194(766, iVar0);
			Global_1659783[iVar0] = __LIB_13__::func_194(767, iVar0);
			Global_1659789[iVar0] = __LIB_13__::func_194(8734, iVar0);
			Global_1659795[iVar0] = __LIB_13__::func_194(9538, iVar0);
			Global_1659801[iVar0] = __LIB_13__::func_194(1237, iVar0);
			Global_2869953[0 /*3*/][iVar0] = __LIB_13__::func_194(3639, iVar0);
			if (Global_2869953[0 /*3*/][iVar0] > iVar2)
			{
				Global_2869953[0 /*3*/][iVar0] = 0;
			}
			Global_2869953[1 /*3*/][iVar0] = __LIB_13__::func_194(3640, iVar0);
			if (Global_2869953[1 /*3*/][iVar0] > iVar2)
			{
				Global_2869953[1 /*3*/][iVar0] = 0;
			}
			Global_2869953[2 /*3*/][iVar0] = __LIB_13__::func_194(3641, iVar0);
			if (Global_2869953[2 /*3*/][iVar0] > iVar2)
			{
				Global_2869953[2 /*3*/][iVar0] = 0;
			}
			Global_2869953[3 /*3*/][iVar0] = __LIB_13__::func_194(3642, iVar0);
			if (Global_2869953[3 /*3*/][iVar0] > iVar2)
			{
				Global_2869953[3 /*3*/][iVar0] = 0;
			}
			Global_2869953[4 /*3*/][iVar0] = __LIB_13__::func_194(3643, iVar0);
			if (Global_2869953[4 /*3*/][iVar0] > iVar2)
			{
				Global_2869953[4 /*3*/][iVar0] = 0;
			}
			Global_2869969[0 /*3*/][iVar0] = __LIB_13__::func_194(3644, iVar0);
			Global_2869969[1 /*3*/][iVar0] = __LIB_13__::func_194(3645, iVar0);
			Global_2869969[2 /*3*/][iVar0] = __LIB_13__::func_194(3646, iVar0);
			Global_2869969[3 /*3*/][iVar0] = __LIB_13__::func_194(3647, iVar0);
			Global_2869969[4 /*3*/][iVar0] = __LIB_13__::func_194(3648, iVar0);
			Global_2869985[iVar0] = __LIB_13__::func_194(3666, iVar0);
			Global_2869994[iVar0] = __LIB_13__::func_194(3667, iVar0);
			Global_2869988[iVar0] = __LIB_13__::func_194(3668, iVar0);
			Global_2869997[iVar0] = __LIB_13__::func_194(3669, iVar0);
			Global_2869991[iVar0] = __LIB_13__::func_194(3670, iVar0);
			Global_2870000[iVar0] = __LIB_13__::func_194(3671, iVar0);
			Global_2870003[iVar0] = __LIB_13__::func_194(3692, iVar0);
			Global_2870006[iVar0] = __LIB_13__::func_194(8285, iVar0);
			Global_2870009[iVar0] = __LIB_13__::func_194(8286, iVar0);
			Global_2870012[iVar0] = __LIB_13__::func_194(8287, iVar0);
			Global_2870015[iVar0] = __LIB_13__::func_194(8288, iVar0);
			Global_2870018[iVar0] = __LIB_13__::func_194(8289, iVar0);
			Global_2870021[iVar0] = __LIB_13__::func_194(8290, iVar0);
			Global_2870024[iVar0] = __LIB_13__::func_194(8291, iVar0);
			Global_2870027[iVar0] = __LIB_13__::func_194(8292, iVar0);
			Global_2870030[iVar0] = __LIB_13__::func_194(8293, iVar0);
			Global_2870033[iVar0] = __LIB_13__::func_194(8294, iVar0);
			Global_2870036[iVar0] = __LIB_13__::func_194(8295, iVar0);
			Global_2870039[iVar0] = __LIB_13__::func_194(8296, iVar0);
			Global_2870042[iVar0] = __LIB_13__::func_194(8297, iVar0);
			Global_2870045[iVar0] = __LIB_13__::func_194(8905, iVar0);
			iVar0++;
		}
		Global_1659608 = 1;
	}
}

void func_754(var uParam0, bool bParam1)//Position - 0x1776
{
	struct<4> Var0;
	Var0.f_0 = 1992522613;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = bParam1;
	Var0.f_2 = uParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, __LIB_1__::func_705(bParam1));
}

int func_755(bool bParam0, bool bParam1)//Position - 0x801A
{
	if (bParam1)
	{
		if (__LIB_27__::func_600(bParam0))
		{
			return 1;
		}
	}
	if ((((Global_1853348[bParam0 /*834*/] == 2 || Global_1853348[bParam0 /*834*/] == 1) || Global_1853348[bParam0 /*834*/] == 0) || Global_1853348[bParam0 /*834*/] == 3) || Global_1853348[bParam0 /*834*/] == 8)
	{
		return 1;
	}
	return 0;
}

int func_756(bool bParam0, struct<3> Param1)//Position - 0x927F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_2__::func_188(Param1, Global_2688483[iVar0 /*10*/]))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_27__::func_334(iVar2))
			{
				iVar1 = (iVar1 + Global_2689235[iVar2 /*453*/].f_124.f_6[bParam0 /*2*/]);
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_757(bool bParam0, int iParam1)//Position - 0xAA8C
{
	struct<24> Var0;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_2 = -1;
	Var0.f_2.f_9 = -1;
	Var0.f_2.f_16 = -1;
	Var0.f_2.f_19 = -1;
	Var0.f_2.f_20 = -1;
	Var0.f_0 = -442434037;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Global_2686568[iParam1 /*41*/].f_3 };
	Var0.f_23 = 0;
	if (BitTest(Global_2686568[iParam1 /*41*/].f_40, 1))
	{
		MISC::SET_BIT(&(Var0.f_23), 2);
	}
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 24, __LIB_1__::func_705(bParam0));
}

int func_758(int iParam0, int iParam1)//Position - 0xAB70
{
	int iVar0;
	int iVar1;
	if (!__LIB_27__::func_460(iParam1))
	{
		return -1;
	}
	iVar0 = Global_1642434[iParam0 /*6*/].f_5;
	iVar1 = Global_1642434[iParam0 /*6*/].f_4;
	switch (iVar1)
	{
		case 0:
			if (iParam1 == 0)
			{
				return iVar0;
			}
			return -1;
		case 1:
			if (iParam1 == 1)
			{
				return iVar0;
			}
			return -1;
		case 2:
			if (iParam1 == 2)
			{
				return iVar0;
			}
			return -1;
		case 3:
			if (iParam1 == 1)
			{
				return iVar0;
			}
			if (iParam1 == 2)
			{
				return iVar0 + 1;
			}
			return -1;
		case 4:
			return -1;
		default:
	}
	return -1;
}

int func_759(int iParam0, int iParam1)//Position - 0xAC47
{
	int iVar0;
	iVar0 = Global_1642434[iParam0 /*6*/].f_4;
	switch (iVar0)
	{
		case 0:
			return 0;
		case 1:
			if (__LIB_27__::func_459(iParam1))
			{
				return 1;
			}
			return 4;
		case 2:
			if (__LIB_27__::func_459(iParam1))
			{
				return 2;
			}
			return 4;
		case 3:
			if (__LIB_27__::func_459(iParam1))
			{
				return 1;
			}
			if (__LIB_27__::func_459(iParam1))
			{
				return 2;
			}
			return 4;
		case 4:
			return 4;
		default:
	}
	return 4;
}

void func_760(bool bParam0, int iParam1, int iParam2)//Position - 0xB86E
{
	struct<3> Var0;
	Var0.f_0 = 72408517;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2686568[iParam1 /*41*/].f_3.f_17;
	if (iParam2 != 0)
	{
		Var0.f_2 = iParam2;
	}
	if (Var0.f_2 == 0)
	{
		return;
	}
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_1__::func_705(bParam0));
}

void func_761(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xB96F
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	if (*uParam5 == 0)
	{
	}
	uVar0 = __LIB_18__::func_87(iParam0);
	uVar1 = __LIB_18__::func_708(iParam0);
	uVar2 = __LIB_18__::func_88(iParam0);
	bVar3 = false;
	bVar3 = false;
	while (bVar3 < 32)
	{
		if (iParam1 == -1)
		{
			if (BitTest(uVar2, bVar3))
			{
				*iParam2++;
			}
			if (BitTest(uVar0, bVar3))
			{
				*iParam3++;
			}
			if (BitTest(uVar1, bVar3))
			{
				*iParam4++;
			}
		}
		bVar3++;
	}
}

int func_762(bool bParam0)//Position - 0x11803
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[bParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

int func_763(bool bParam0)//Position - 0x6C38F
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_197, 9);
	}
	return 0;
}

void func_764(int iParam0, int iParam1, var uParam2, float fParam3, bool bParam4)//Position - 0x9ACAD
{
	if (!bParam4)
	{
		*uParam2 = { __LIB_2__::func_882(iParam1, Global_4282659[iParam0 /*10*/]) };
		*fParam3 = __LIB_2__::func_881(iParam1, Global_4282659[iParam0 /*10*/].f_3);
	}
	else if (__LIB_1__::func_779(iParam0, 1))
	{
		*uParam2 = { Global_4280768[iParam1 /*45*/].f_32[2 /*4*/] };
		*fParam3 = Global_4280768[iParam1 /*45*/].f_32[2 /*4*/].f_3;
	}
	else
	{
		*uParam2 = { Global_4280768[iParam1 /*45*/].f_32[1 /*4*/] };
		*fParam3 = Global_4280768[iParam1 /*45*/].f_32[1 /*4*/].f_3;
	}
}

void func_765(int iParam0)//Position - 0xA151D
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_699(iParam0);
	if (iVar0 == __LIB_0__::getMinusOneOrNull())
	{
		iVar0 = __LIB_26__::func_342(iParam0);
	}
	if (!iVar0 == __LIB_0__::getMinusOneOrNull())
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (__LIB_1__::func_779(iVar1, 1))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2689235[iVar0 /*453*/].f_269.f_6[iVar1]))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2689235[iVar0 /*453*/].f_269.f_6[iVar1]))
					{
						NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(NETWORK::NET_TO_VEH(Global_2689235[iVar0 /*453*/].f_269.f_6[iVar1]));
					}
				}
			}
			iVar1++;
		}
	}
}

void func_766(var uParam0, int iParam1)//Position - 0xA482D
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (uParam0->f_47 == 0)
	{
		if (__LIB_26__::func_163(iParam1))
		{
			iVar2 = __LIB_20__::func_791();
			if (*uParam0 == 36)
			{
				iVar2 = 1718520498;
			}
			else if (*uParam0 == 37)
			{
				iVar2 = joaat("h4_mp_apa_yacht");
			}
			else if (*uParam0 == 38)
			{
				iVar2 = joaat("h4_mp_apa_yacht");
			}
			else if (*uParam0 == 39)
			{
				iVar2 = joaat("h4_mp_apa_yacht");
			}
			else if (*uParam0 == 40)
			{
				iVar2 = joaat("sf_mp_apa_yacht");
			}
			else if (*uParam0 == 41)
			{
				iVar2 = joaat("sf_mp_apa_yacht");
			}
			Var0 = { __LIB_21__::func_626(*uParam0) };
			uParam0->f_40 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 100f, iVar2, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_40))
			{
				iVar1 = ENTITY::GET_ENTITY_ALPHA(uParam0->f_40);
				if (iVar1 == 255)
				{
					OBJECT::SET_OBJECT_TINT_INDEX(uParam0->f_40, uParam0->f_2.f_1);
					uParam0->f_47 = 1;
					uParam0->f_48 = 1;
					__LIB_20__::func_794(6);
				}
			}
		}
	}
	else
	{
		if (!uParam0->f_46)
		{
			uParam0->f_47 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_40))
		{
			iVar1 = ENTITY::GET_ENTITY_ALPHA(uParam0->f_40);
			if (!iVar1 == 255)
			{
				uParam0->f_47 = 0;
			}
		}
		else
		{
			uParam0->f_47 = 0;
		}
	}
}

void func_767(int iParam0, int iParam1)//Position - 0xB4536
{
	if (__LIB_6__::func_172(iParam1))
	{
		if (Global_1643888[iParam1] != iParam0)
		{
			Global_1643888[iParam1] = iParam0;
		}
	}
}

int func_768(bool bParam0)//Position - 0xB85E0
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_408.f_2, 16);
	}
	return 0;
}

int func_769(bool bParam0)//Position - 0xB8609
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

bool func_770(int iParam0, int iParam1)//Position - 0xB9706
{
	return __LIB_0__::func_137(__LIB_27__::func_364(iParam0, iParam1), -1);
}

char* func_771(var uParam0, int iParam1)//Position - 0xDC888
{
	switch (iParam1)
	{
		case 0:
			return "PIM_FHQ_INV_D" /* GXT: Invite players to your Agency. */;
			break;
		case 1:
			return "PIM_FHQ_INV_M" /* GXT: Invite to Agency */;
			break;
		case 3:
			return "PIM_FHQ_INV_T" /* GXT: INVITE TO AGENCY */;
			break;
		case 4:
			return "PIM_INV_FHQ" /* GXT: Invite to Agency has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_FHQ_AS" /* GXT: Invite to Agency has been sent to all players. */;
			break;
		case 6:
			return "CELL_FHQ_SHPINV" /* GXT: Hey, come over to the Agency. */;
			break;
		case 10:
			return "FHQ_DOCKA" /* GXT: Press ~INPUT_CONTEXT~ to land and enter the Agency. */;
			break;
		case 11:
			if (__LIB_26__::func_497(__LIB_0__::func_797()))
			{
				return "FHQ_DOCKD" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your President's Agency. */;
			}
			else if (__LIB_3__::func_673(__LIB_0__::func_797()))
			{
				return "FHQ_DOCKB" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your CEO's Agency. */;
			}
			else
			{
				return "FHQ_DOCKC" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your VIP's Agency. */;
			}
			break;
	}
	return "";
}

char* func_772(int iParam0)//Position - 0xE75E2
{
	switch (iParam0)
	{
		case 0:
			return "BWH_ENTRM_ALONE" /* GXT: Enter alone */;
		case 1:
			if (__LIB_26__::func_497(PLAYER::PLAYER_ID()))
			{
				return "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
			}
			else
			{
				return "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
			}
			break;
		case 2:
			return "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	}
	return "UNKNOWN";
}

void func_773(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xE7928
{
	StringCopy(sParam1, "CAR_MET_EXT_T" /* GXT: LS Car Meet */, 64);
	switch (__LIB_3__::func_616())
	{
		case 12:
		case 13:
		case 14:
		case 15:
			(*uParam2)[0] = "CAR_MET_E_O_1" /* GXT: Spectate Test Track */;
			break;
		default:
			(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
			break;
	}
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_774(bool bParam0)//Position - 0xE9C3D
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_5, 6);
	}
	return 0;
}

void func_775(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xF1443
{
	StringCopy(sParam1, "AUTOS_PROP_ET" /* GXT: AUTO SHOP */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_776(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4)//Position - 0xF5BB6
{
	iParam4 = (iParam4 - 1);
	if (*uParam2 != 9)
	{
		return;
	}
	if (iParam4 == 2 || iParam4 == 3)
	{
		StringCopy(sParam1, "MUS_STIO_EXT_T2" /* GXT: SMOKING ROOM */, 64);
	}
	else
	{
		StringCopy(sParam1, "MUS_STIO_EXT_T" /* GXT: RECORD A STUDIOS */, 64);
	}
	(*uParam2)[0] = "MUS_STIO__E_O_0" /* GXT: Exit */;
	(*uParam2)[2] = "MUS_STIO__E_O_1" /* GXT: Exit */;
	(*uParam2)[3] = "MUS_STIO__E_O_2" /* GXT: Exit to Roof */;
	(*uParam2)[4] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[5] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[5] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	*uParam3 = 6;
	if (iParam4 == 2)
	{
		(*uParam2)[0] = "MUS_STIO__E_O_3" /* GXT: Enter */;
	}
}

void func_777(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xF7A02
{
	StringCopy(sParam1, "MUS_STIO_EXT_T" /* GXT: RECORD A STUDIOS */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

bool func_778()//Position - 0x106B2C
{
	return __LIB_26__::func_497(PLAYER::PLAYER_ID());
}

int func_779(bool bParam0)//Position - 0x109C07
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (((((BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 5)) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 0)) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

void func_780(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x114765
{
	StringCopy(sParam1, "CAS_NCLB_EXT_T" /* GXT: THE MUSIC LOCKER */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_781(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x11D5FE
{
	if (__LIB_12__::func_304(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
}

bool func_782(int iParam0)//Position - 0x11D75E
{
	return !__LIB_12__::func_304(iParam0);
}

void func_783(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x12659D
{
	StringCopy(sParam1, "ARC_PROP_ET" /* GXT: ARCADE */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_784(bool bParam0, var uParam1)//Position - 0x12EDA1
{
	return __LIB_6__::func_91(bParam0);
}

void func_785(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x134A8B
{
	StringCopy(sParam1, "CASINO_APT_ENT_T", 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

char* func_786(var uParam0, int iParam1)//Position - 0x1369B3
{
	switch (iParam1)
	{
		case 0:
			return "PIM_HLSMO1" /* GXT: Invite Players to your Penthouse. */;
			break;
		case 1:
			return "PIM_TLSMO1" /* GXT: Invite to Penthouse */;
			break;
		case 3:
			return "PIM_ULSMO1" /* GXT: INVITE TO PENTHOUSE */;
			break;
		case 4:
			return "PIM_INVCAS_APT" /* GXT: Invite to Penthouse has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_A_T_PH" /* GXT: Invite to Penthouse has been sent to all players. */;
			break;
		case 6:
			return "CELL_CASAPTINV" /* GXT: Hey, come over to the Casino Penthouse. */;
			break;
		case 10:
			return "MP_CASIN_DOCKA" /* GXT: Press ~INPUT_CONTEXT~ to land and enter Penthouse. */;
			break;
		case 11:
			if (__LIB_26__::func_497(PLAYER::PLAYER_ID()))
			{
				return "MP_CASIN_DOCKD" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your President's Penthouse. */;
			}
			else if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
			{
				return "MP_CASIN_DOCKB" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your CEO's Penthouse. */;
			}
			else
			{
				return "MP_CASIN_DOCKC" /* GXT: Press ~INPUT_CONTEXT~ to land and enter your VIP's Penthouse. */;
			}
			break;
	}
	return "";
}

int func_787()//Position - 0x137E67
{
	if ((((((__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 229 || __LIB_5__::func_185(PLAYER::PLAYER_ID()) == 191) || __LIB_1__::func_718()) || __LIB_1__::func_632()) || __LIB_1__::func_717()) || Global_2788199.f_227 == 1) || (Global_2667225.f_1753 && __LIB_2__::func_607(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

void func_788(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x14489D
{
	StringCopy(sParam1, "ARENA_ENT_T" /* GXT: ARENA WORKSHOP */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_789(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x15AFAC
{
	int iVar0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			__LIB_3__::func_122(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_790(bool bParam0)//Position - 0x1617CA
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 10);
}

int func_791(bool bParam0)//Position - 0x1617F3
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 9);
}

int func_792(bool bParam0)//Position - 0x16181C
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 8);
}

int func_793(bool bParam0)//Position - 0x161845
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 7);
}

int func_794(bool bParam0)//Position - 0x1618D7
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 4);
}

int func_795(bool bParam0)//Position - 0x1618FF
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 3);
}

int func_796(bool bParam0)//Position - 0x161927
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 2);
}

int func_797(bool bParam0)//Position - 0x16194F
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 1);
}

int func_798(bool bParam0)//Position - 0x161977
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 0);
}

int func_799(bool bParam0)//Position - 0x164C56
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_3, 11);
	}
	return 0;
}

void func_800(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x165B2D
{
	if (__LIB_3__::func_616() == 2)
	{
		StringCopy(sParam1, "CLUB_TITLE" /* GXT: NIGHTCLUB */, 64);
	}
	else
	{
		StringCopy(sParam1, "HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */, 64);
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_801(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x16DB51
{
	switch (iParam0)
	{
		case 101:
			StringCopy(sParam1, "CHR17_TITLE" /* GXT: AVENGER */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_802(int iParam0)//Position - 0x17712E
{
	if (__LIB_12__::func_304(iParam0))
	{
		return 5;
	}
	if (__LIB_2__::func_50())
	{
		return __LIB_1__::func_389(__LIB_7__::func_610(PLAYER::PLAYER_ID()));
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		return __LIB_1__::func_389(__LIB_7__::func_610(__LIB_0__::func_797()));
	}
	return 4;
}

int func_803(int iParam0, var uParam1)//Position - 0x183A3D
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_983())
	{
		if (__LIB_0__::func_177() || __LIB_3__::func_719())
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (BitTest(Global_1946250.f_506, 11))
	{
		if (!__LIB_0__::func_983())
		{
			return 1;
		}
		return 0;
	}
	if (!BitTest(Global_1946250.f_4523, 16))
	{
		if (Global_2714762.f_15 > -1)
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 1;
	}
	bVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (Global_1946250.f_506 == 0)
	{
		return 1;
	}
	if (!BitTest(Global_1946250.f_506, 30))
	{
		bVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
	}
	if (bVar0 != __LIB_0__::getMinusOneOrNull())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			return 1;
		}
		if (__LIB_4__::func_501(bVar0) != __LIB_0__::func_846(iParam0))
		{
			MISC::SET_BIT(&Global_1946250, 18);
			return 1;
		}
	}
	if (bVar0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_5__::func_185(bVar0) == 233)
		{
			bVar1 = true;
		}
	}
	if (PLAYER::PLAYER_ID() != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_26__::func_155(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 12);
			return 1;
		}
	}
	if (!BitTest(Global_1946250.f_506, 30))
	{
		if (!__LIB_1__::func_693(bVar0, 0, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 6);
			return 1;
		}
		if (__LIB_4__::func_501(bVar0) != __LIB_0__::func_846(iParam0))
		{
			MISC::SET_BIT(&Global_1946250, 18);
			return 1;
		}
		if (bVar1)
		{
			if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_3__::func_136(PLAYER::PLAYER_ID(), bVar0))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 7);
			}
			else
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 8);
			}
			return !BitTest(Global_1946250.f_506, 9);
		}
		else if (__LIB_2__::func_72(bVar0, 0))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 10);
			return 1;
		}
	}
	else if (bVar1)
	{
		return !BitTest(Global_1946250.f_506, 9);
	}
	else
	{
		if (__LIB_4__::func_501(bVar0) != __LIB_0__::func_846(iParam0))
		{
			MISC::SET_BIT(&Global_1946250, 18);
			return 1;
		}
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	if ((BitTest(Global_1946250.f_506, 9) && !bVar1) && bVar0 != __LIB_0__::getMinusOneOrNull())
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_506), 9);
	}
	return 0;
}

void func_804(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x18409E
{
	switch (iParam0)
	{
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			StringCopy(sParam1, "BASE_TITLE" /* GXT: FACILITY */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_805(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x18A8B7
{
	switch (iParam0)
	{
		case 88:
			StringCopy(sParam1, "CHR17_TITLE" /* GXT: AVENGER */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_806(int iParam0)//Position - 0x190802
{
	if (__LIB_10__::func_797(&(Global_1952191.f_5470.f_3)) == iParam0)
	{
		return 5;
	}
	if (__LIB_2__::func_50())
	{
		return __LIB_1__::func_389(__LIB_7__::func_610(PLAYER::PLAYER_ID()));
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		return __LIB_1__::func_389(__LIB_7__::func_610(__LIB_0__::func_797()));
	}
	return 4;
}

void func_807(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x197D35
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			StringCopy(sParam1, "HANGAR_TITLE" /* GXT: HANGAR */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_808(bool bParam0)//Position - 0x19B04A
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if ((BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 12) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 13)) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_809(int iParam0, bool bParam1)//Position - 0x19B0A5
{
	if (bParam1 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 0))
			{
				return 3;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 3))
			{
				return 2;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 6))
			{
				return 4;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 9))
			{
				return 1;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 12))
			{
				return 7;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 15))
			{
				return 5;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 18))
			{
				return 6;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 21))
			{
				return 0;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 24))
			{
				return 8;
			}
			break;
		case 1:
			if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 1))
			{
				return 3;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 4))
			{
				return 2;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 7))
			{
				return 4;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 10))
			{
				return 1;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 13))
			{
				return 7;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 16))
			{
				return 5;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 19))
			{
				return 6;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 22))
			{
				return 0;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 25))
			{
				return 8;
			}
			break;
		case 2:
			if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 2))
			{
				return 3;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 5))
			{
				return 2;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 8))
			{
				return 4;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 11))
			{
				return 1;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 14))
			{
				return 7;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 17))
			{
				return 5;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 20))
			{
				return 6;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 23))
			{
				return 0;
			}
			else if (BitTest(Global_1853348[bParam1 /*834*/].f_267.f_273, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_810(bool bParam0)//Position - 0x19C253
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if ((BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

void func_811(var uParam0, var uParam1)//Position - 0x19D3D3
{
	uParam0->f_22.f_89[0] = 0;
	uParam0->f_22.f_89[1] = 0;
	uParam0->f_22.f_89[2] = 0;
	uParam0->f_22.f_89[3] = 0;
	Global_1946250.f_3621[0] = -1;
	Global_1946250.f_3621[1] = -1;
	Global_1946250.f_3621[2] = -1;
	Global_1946250.f_3621[3] = -1;
	__LIB_3__::func_122(&(uParam0->f_22.f_94));
	__LIB_0__::clearF_1Prop(&(uParam0->f_22.f_101));
	__LIB_4__::func_561(0);
	MISC::CLEAR_BIT(&Global_1946250, 10);
	__LIB_4__::func_646(0);
	if (!__LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
	}
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	MISC::CLEAR_BIT(&(Global_1946250.f_506), 1);
	MISC::CLEAR_BIT(&Global_1946250, 25);
	MISC::CLEAR_BIT(&Global_1946250, 23);
	MISC::CLEAR_BIT(&Global_1946250, 24);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_105))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_22.f_105));
	}
	__LIB_4__::func_658(0);
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_290))
	{
		Global_2815059.f_290 = 0;
	}
	uParam0->f_22.f_217 = 0;
	__LIB_4__::func_657(0);
	MISC::CLEAR_BIT(&(Global_1946250.f_1), 2);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		NETWORK::NETWORK_SET_ENTITY_CAN_BLEND(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("oppressor2")))
		{
			if (__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
			{
				VEHICLE::SET_DISABLE_HOVER_MODE_FLIGHT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
	{
		NETWORK::NETWORK_SET_ENTITY_CAN_BLEND(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true);
	}
	__LIB_4__::func_656(0);
	__LIB_4__::func_534(0);
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 23))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 23);
	}
	Global_2787785 = 0;
	if (__LIB_3__::func_934())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		__LIB_3__::func_933(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(false);
		}
	}
}

void func_812(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1B49B5
{
	StringCopy(sParam1, "BUNKER_TITLE" /* GXT: BUNKER */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1) && __LIB_26__::func_497(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_813(int iParam0)//Position - 0x1B7410
{
	return __LIB_25__::func_989(iParam0, 236);
}

int func_814(bool bParam0, int iParam1)//Position - 0x1C9FD7
{
	if (__LIB_26__::func_497(bParam0) && __LIB_5__::func_661(bParam0, __LIB_4__::func_715(iParam1)))
	{
		if (__LIB_1__::func_907(bParam0, 0))
		{
			if (__LIB_10__::func_415(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_815()//Position - 0x1DE84B
{
	if (__LIB_25__::func_291(PLAYER::PLAYER_ID()) >= __LIB_11__::func_613(160))
	{
		return PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
	}
	else if (__LIB_25__::func_291(PLAYER::PLAYER_ID()) >= __LIB_11__::func_613(159))
	{
		return SYSTEM::ROUND((__LIB_1__::func_75(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()), 100) * 80f));
	}
	else if (__LIB_25__::func_291(PLAYER::PLAYER_ID()) >= __LIB_11__::func_613(158))
	{
		return SYSTEM::ROUND((__LIB_1__::func_75(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()), 100) * 60f));
	}
	else if (__LIB_25__::func_291(PLAYER::PLAYER_ID()) >= __LIB_11__::func_613(157))
	{
		return SYSTEM::ROUND((__LIB_1__::func_75(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()), 100) * 40f));
	}
	return SYSTEM::ROUND((__LIB_1__::func_75(PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()), 100) * 20f));
}

void func_816(int iParam0)//Position - 0x1DFEAA
{
	Global_2788199.f_579 = iParam0;
	__LIB_0__::clearF_1Prop(&(Global_2788199.f_581));
	__LIB_0__::func_795(&(Global_2788199.f_581), 1, 0);
}

int func_817(int iParam0)//Position - 0x1E03A3
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_458, 1);
}

void func_818(int iParam0)//Position - 0x229067
{
	bool bVar0;
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
	}
	else
	{
		bVar0 = true;
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == iParam0)
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iParam0);
			__LIB_22__::func_622();
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_819()//Position - 0x22917C
{
	if (__LIB_10__::func_167(PLAYER::PLAYER_ID(), 8))
	{
		return 1;
	}
	if (__LIB_10__::func_167(PLAYER::PLAYER_ID(), 10))
	{
		return 1;
	}
	if (__LIB_10__::func_167(PLAYER::PLAYER_ID(), 12))
	{
		return 1;
	}
	if (__LIB_10__::func_167(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_10__::func_167(PLAYER::PLAYER_ID(), 13))
	{
		return 1;
	}
	if (__LIB_12__::func_469())
	{
		return 1;
	}
	if (__LIB_12__::func_468())
	{
		return 1;
	}
	if (!__LIB_0__::func_192() && !__LIB_0__::func_191())
	{
		if (!__LIB_1__::func_202())
		{
			if (!__LIB_12__::func_479())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_820(bool bParam0)//Position - 0x22F6CE
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_20), bParam0);
	}
}

int func_821(int iParam0)//Position - 0x230719
{
	switch (iParam0)
	{
		case 9:
			if (__LIB_0__::func_253(386, -1) == 0)
			{
				return Global_152058.f_7;
			}
			else
			{
				return Global_152058.f_8;
			}
			break;
		case 8:
			if (__LIB_0__::func_253(386, -1) == 0)
			{
				return Global_152138.f_7;
			}
			else
			{
				return Global_152138.f_8;
			}
			break;
	}
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

int func_822(int iParam0, int iParam1, int iParam2)//Position - 0x23AFA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!__LIB_20__::func_563(iParam0) && VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1))
	{
		if (__LIB_0__::func_121(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)))
	{
		if (__LIB_20__::func_562(iParam0))
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 0;
			}
		}
		else if (__LIB_20__::func_561(iParam0))
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && !VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_3__::func_690(iParam1))
	{
		return 0;
	}
	if ((__LIB_0__::func_872(iParam1, 1) || __LIB_1__::func_588(iParam1)) || __LIB_0__::func_870(iParam1, 1))
	{
		return iParam2;
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "MPBitset"))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iParam1, "MPBitset");
			if (BitTest(iVar2, 17))
			{
				return iParam2;
			}
		}
	}
	return 1;
}

void func_823(int iParam0, var uParam1)//Position - 0x23B4F2
{
	uParam1->f_4 = { __LIB_20__::func_568(iParam0) };
	if (__LIB_10__::func_806(iParam0, 0))
	{
		switch (iParam0)
		{
			case 714:
				*uParam1 = { -237.12f, 6228.7554f, 29.5005f };
				break;
			case 715:
				*uParam1 = { 1710.83f, 4760.13f, 40.0504f };
				break;
			case 716:
				*uParam1 = { -105.19f, -1778.3f, 27.51f };
				break;
			case 717:
				*uParam1 = { -617.7421f, 285.8363f, 79.6871f };
				break;
			case 718:
				*uParam1 = { -1287.1135f, -278.0045f, 36.5935f };
				break;
			case 719:
				*uParam1 = { 726.7626f, -822.4685f, 22.8603f };
				break;
		}
	}
	else
	{
		*uParam1 = { uParam1->f_4 };
	}
}

int func_824(int iParam0)//Position - 0x23B906
{
	int iVar0;
	if ((((((iParam0 == 735 || iParam0 == 736) || iParam0 == 742) || iParam0 == 743) || iParam0 == 744) || iParam0 == 745) || iParam0 == 746)
	{
		return 0;
	}
	if (__LIB_10__::func_806(iParam0, 1))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_121(iVar0) && __LIB_20__::func_570(iParam0, iVar0, 1))
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
	else
	{
		return 1;
	}
	return 0;
}

void func_825(int iParam0, var uParam1)//Position - 0x23BC2C
{
	uParam1->f_4 = { __LIB_20__::func_572(iParam0) };
	*uParam1 = { uParam1->f_4 };
}

void func_826(int iParam0, var uParam1)//Position - 0x23BE47
{
	uParam1->f_4 = { __LIB_15__::func_371(iParam0) };
	*uParam1 = { uParam1->f_4 };
}

void func_827(int iParam0, var uParam1)//Position - 0x23C2CB
{
	uParam1->f_4 = { __LIB_20__::func_577(iParam0) };
	*uParam1 = { uParam1->f_4 };
	switch (iParam0)
	{
		case 675:
			uParam1->f_20 = { 1273.6775f, 2835.7322f, 44.847424f };
			uParam1->f_23 = { 1264.7654f, 2828.705f, 55.94585f };
			uParam1->f_26 = 12.4375f;
			break;
		case 676:
			uParam1->f_20 = { 32.718624f, 2620.0369f, 81.45343f };
			uParam1->f_23 = { 41.51775f, 2625.4204f, 91.57298f };
			uParam1->f_26 = 12.4375f;
			break;
		case 677:
			uParam1->f_20 = { 2757.3706f, 3908.7166f, 41.285427f };
			uParam1->f_23 = { 2750.301f, 3902.2896f, 52.101288f };
			uParam1->f_26 = 12.4375f;
			break;
		case 678:
			uParam1->f_20 = { 3392.2385f, 5508.4644f, 21.731428f };
			uParam1->f_23 = { 3382.523f, 5510.846f, 31.626408f };
			uParam1->f_26 = 12.4375f;
			break;
		case 679:
			uParam1->f_20 = { 17.183691f, 6826.0957f, 11.270427f };
			uParam1->f_23 = { 26.708874f, 6822.4604f, 22.733427f };
			uParam1->f_26 = 12.4375f;
			break;
		case 680:
			uParam1->f_20 = { -2229.6096f, 2401.256f, 7.634426f };
			uParam1->f_23 = { -2229.2456f, 2390.6938f, 20.956161f };
			uParam1->f_26 = 12.4375f;
			break;
		case 681:
			uParam1->f_20 = { -3.066728f, 3343.304f, 38.146927f };
			uParam1->f_23 = { -0.032484f, 3354.4387f, 45.363083f };
			uParam1->f_26 = 12.4375f;
			break;
		case 682:
			uParam1->f_20 = { 2084.432f, 1759.6304f, 99.96742f };
			uParam1->f_23 = { 2091.107f, 1765.9384f, 110.71361f };
			uParam1->f_26 = 12.4375f;
			break;
		case 683:
			uParam1->f_20 = { 1866.0016f, 271.21497f, 159.75842f };
			uParam1->f_23 = { 1860.5043f, 262.67712f, 170.92197f };
			uParam1->f_26 = 12.4375f;
			break;
	}
}

int func_828(int iParam0)//Position - 0x246EF8
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_HELI(*iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(*iParam0, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_15__::func_551(&iVar0))
		{
			iVar1 = VEHICLE::GET_ENTITY_ATTACHED_TO_CARGOBOB(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_829(int iParam0)//Position - 0x248969
{
	switch (__LIB_10__::func_799(iParam0))
	{
		case 0:
			return __LIB_10__::func_802(&iParam0);
		case 1:
			return __LIB_10__::func_791(&iParam0);
			break;
		case 2:
			return __LIB_10__::func_789(&iParam0);
			break;
		case 3:
			return __LIB_4__::func_379(iParam0);
			break;
		case 4:
			return __LIB_10__::func_807(iParam0);
			break;
		case 5:
			return __LIB_10__::func_806(iParam0, 1);
			break;
		case 6:
			return __LIB_12__::func_289(iParam0);
			break;
		default:
			break;
	}
	return 0;
}

int func_830(struct<2> Param0)//Position - 0x248F32
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_433(Param0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_5[iVar1] == 0)
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return 0;
}

void func_831(int iParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0x249388
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	Var0 = { __LIB_19__::func_266(iParam0) };
	fVar1 = (1f * Param3.f_0);
	fVar2 = (1f * Param3.f_1);
	fVar3 = (2f * Param3.f_2);
	*uParam1 = { Var0 - Vector(0f, fVar2, fVar1) };
	*uParam2 = { Var0 + Vector(fVar3, fVar2, fVar1) };
}

void func_832(int iParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0x2493ED
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	Var0 = { __LIB_19__::func_397(iParam0) };
	fVar1 = (5f * Param3.f_0);
	fVar2 = (5f * Param3.f_1);
	fVar3 = (2.5f * Param3.f_2);
	fVar4 = 0f;
	if (Param3.f_2 != 1f)
	{
		fVar4 = (fVar3 * 0.5f);
		fVar3 = fVar4;
	}
	*uParam1 = { Var0 - Vector(fVar4, fVar2, fVar1) };
	*uParam2 = { Var0 + Vector(fVar3, fVar2, fVar1) };
}

int func_833()//Position - 0x24A3DE
{
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		if (((__LIB_0__::func_945() && !__LIB_1__::func_941()) || __LIB_10__::func_167(PLAYER::PLAYER_ID(), 21)) || __LIB_10__::func_167(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			__LIB_1__::func_967(27);
		}
	}
	return 0;
}

void func_834(var uParam0, int iParam1, char* sParam2)//Position - 0x24DB9D
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 = 0;
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_62 = uParam0;
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_70 = iParam1;
	StringCopy(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_71), sParam2, 16);
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_60 != 0)
	{
		__LIB_27__::func_402(0);
	}
}

int func_835(int iParam0)//Position - 0x24E823
{
	if (__LIB_7__::func_565(iParam0))
	{
		return __LIB_5__::func_247(2, iParam0);
	}
	return 0;
}

void func_836(bool bParam0)//Position - 0x24F603
{
	if (bParam0)
	{
		if (!__LIB_12__::func_637())
		{
			MISC::SET_BIT(&Global_1958711, 24);
		}
	}
	else if (__LIB_12__::func_637())
	{
		MISC::CLEAR_BIT(&Global_1958711, 24);
	}
}

void func_837(bool bParam0, int iParam1, int iParam2)//Position - 0x251B2B
{
	struct<4> Var0;
	int iVar1;
	Var0.f_3 = 6;
	Var0.f_0 = -320008018;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = { *iParam2 };
	iVar1 = __LIB_1__::func_705(bParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 10, iVar1);
	}
}

int func_838(bool bParam0)//Position - 0x255B8F
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_292, 24);
	}
	return 0;
}

void func_839(var uParam0, var uParam1, int iParam2)//Position - 0x25706B
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	Var0.f_0 = 1488038476;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	Var0.f_4 = uParam1;
	if (iParam2 != __LIB_0__::getMinusOneOrNull())
	{
		Var0.f_2 = iParam2;
	}
	else
	{
		Var0.f_2 = __LIB_0__::getMinusOneOrNull();
	}
	iVar1 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__::func_834(), -1, 0);
	if (iVar1 != __LIB_0__::getMinusOneOrNull())
	{
		MISC::SET_BIT(&iVar2, iVar1);
	}
	if (!iVar2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar2);
	}
}

void func_840()//Position - 0x25CB4D
{
	if (Global_1888617.f_199 != __LIB_0__::getMinusOneOrNull())
	{
		Global_1888617.f_199 = __LIB_0__::getMinusOneOrNull();
	}
}

void func_841()//Position - 0x26181D
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__::func_834(), -1, 0) == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (Global_2681762.f_199.f_962[iVar0 /*75*/] == __LIB_0__::getMinusOneOrNull())
			{
				iVar1 = iVar0;
				while (iVar1 <= 9)
				{
					if (Global_2681762.f_199.f_962[iVar1 /*75*/] != __LIB_0__::getMinusOneOrNull())
					{
						Var2 = { Global_2681762.f_199.f_962[iVar1 /*75*/] };
						Global_2681762.f_199.f_962[iVar1 /*75*/] = { Global_2681762.f_199.f_962[iVar0 /*75*/] };
						Global_2681762.f_199.f_962[iVar0 /*75*/] = { Var2 };
					}
					else
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_842(int iParam0, int iParam1, var uParam2)//Position - 0x26241E
{
	switch (iParam0)
	{
		case 181:
			return 0;
		case 256:
			return __LIB_19__::func_323(iParam1, uParam2);
		case 258:
			return __LIB_0__::func_109(iParam1, uParam2);
		case 271:
			return __LIB_19__::func_322(iParam1, uParam2);
		case 264:
			return __LIB_19__::func_321(iParam1, uParam2);
		case 263:
			return __LIB_19__::func_320(iParam1, uParam2);
		case 294:
			return __LIB_19__::func_317(iParam1, uParam2);
		case 300:
			return __LIB_3__::func_478(iParam1, uParam2);
		case 301:
			return __LIB_19__::func_319(iParam1, uParam2);
		case 291:
			return __LIB_3__::func_478(iParam1, uParam2);
		case 299:
			return __LIB_19__::func_318(iParam1, uParam2);
		case 293:
			return __LIB_19__::func_317(iParam1, uParam2);
		case 298:
			return __LIB_3__::func_478(iParam1, uParam2);
		case 296:
			return __LIB_3__::func_478(iParam1, uParam2);
		case 297:
			return __LIB_19__::func_317(iParam1, uParam2);
		default:
	}
	return 0;
}

void func_843(var uParam0)//Position - 0x26AD3C
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_7[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_11 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_12[iVar0 /*2*/] = -1;
		uParam0->f_12[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_21[iVar0 /*11*/] = __LIB_0__::getMinusOneOrNull();
		StringCopy(&(uParam0->f_21[iVar0 /*11*/].f_1), "", 32);
		uParam0->f_21[iVar0 /*11*/].f_9 = 0;
		uParam0->f_21[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	uParam0->f_66 = -1;
	uParam0->f_67 = -1;
}

void func_844(char* sParam0, int iParam1, int iParam2)//Position - 0x26AEF6
{
	__LIB_14__::func_551(&(Global_2703735.f_2724.f_1), 3, sParam0, "", iParam1, 0, iParam2, 0);
	Global_2703735.f_2724 = 1;
}

int func_845(int iParam0)//Position - 0x26B5FD
{
	int* iVar0;
	bool bVar1;
	int iVar2;
	__LIB_19__::func_678(iParam0, &iVar0);
	bVar1 = false;
	while (bVar1 < 7)
	{
		if (bVar1 != -1)
		{
			if (BitTest(iVar0, bVar1))
			{
				if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, bVar1))
				{
					iVar2++;
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

int func_846()//Position - 0x274671
{
	bool bVar0;
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
	{
		return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_331;
	}
	else
	{
		bVar0 = __LIB_0__::func_797();
		if (bVar0 != __LIB_0__::getMinusOneOrNull())
		{
			return Global_1892703[bVar0 /*599*/].f_10.f_331;
		}
	}
	return 2000;
}

int func_847(int iParam0, var uParam1)//Position - 0x274728
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (__LIB_12__::func_381(*uParam1))
	{
		iVar0 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(*uParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (__LIB_13__::func_166(iVar1))
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iVar0, "ContrabandDeliveryType"))
					{
						if (DECORATOR::DECOR_GET_INT(iVar0, "ContrabandDeliveryType") == -81613951)
						{
							*uParam1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
							return 1;
						}
					}
				}
			}
		}
	}
	*uParam1 = uVar2;
	return 0;
}

int func_848()//Position - 0x2755AF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar2))
		{
			if (__LIB_1__::func_744(bVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_849(int iParam0)//Position - 0x27D57C
{
	if (iParam0 > 0)
	{
		if (!__LIB_15__::func_354(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_850(int iParam0)//Position - 0x2A6322
{
	if (!__LIB_0__::func_109(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24445 /* Tunable: 1649232734 */;
		case 0:
			return Global_262145.f_24446 /* Tunable: 977314889 */;
		case 4:
			return Global_262145.f_24447 /* Tunable: -2020645410 */;
		case 2:
			return Global_262145.f_24448 /* Tunable: -673930872 */;
		case 3:
			return Global_262145.f_24449 /* Tunable: 963425342 */;
		case 5:
			return Global_262145.f_24450 /* Tunable: 317190636 */;
		default:
	}
	return 0;
}

int func_851()//Position - 0x2F729A
{
	if (__LIB_10__::func_169())
	{
		__LIB_0__::func_170(153, Global_20266, 1);
	}
	return 153;
}

int func_852()//Position - 0x302DDC
{
	switch (__LIB_5__::func_185(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 210:
		case 189:
			return 1;
		default:
	}
	if (__LIB_12__::func_620())
	{
		return 1;
	}
	return 0;
}

int func_853(bool bParam0)//Position - 0x365CB6
{
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1888862[bParam0 /*120*/].f_29, 20);
}

char* func_854(int iParam0)//Position - 0x368332
{
	__LIB_21__::func_276(&iParam0);
	switch (iParam0)
	{
		case 0:
			return "port";
		case 1:
			return "al";
		case 2:
			return "ry";
		case 3:
			return "n";
		case 4:
			return "WAR";
		case 5:
			return "bar";
		case 6:
			return "m";
		case 7:
			return "dset";
		case 8:
			return "lie";
		case 9:
			return "s";
		case 10:
			return "01";
		case 11:
			return "n_DEA";
		case 12:
			return "w";
		case 13:
			return "_1_tele";
		case 14:
			return "_aln";
		case 15:
			return "_R";
		case 16:
			return "_01_soun";
		case 17:
			return "IE";
		case 18:
			return "pa";
		case 19:
			return "t";
		case 20:
			return "scr";
		case 21:
			return "rc";
		case 22:
			return "th";
		case 23:
			return "a";
		case 24:
			return "p_in";
		case 25:
			return "_scene";
		case 26:
			return "_GR_";
		case 27:
			return "dlc_gr";
		case 28:
			return "_CS2_";
		case 29:
			return "oneshot";
		case 30:
			return "General";
		case 31:
			return "sounds";
		case 32:
			return "";
		default:
	}
	return "";
}

int func_855(bool bParam0)//Position - 0x36B9A9
{
	if (__LIB_2__::func_72(bParam0, 1))
	{
		return Global_2815059.f_5195.f_226[__LIB_2__::func_39(bParam0)];
	}
	return 0;
}

int func_856(int iParam0)//Position - 0x36F181
{
	if ((((((((((((__LIB_0__::func_75() || CAM::IS_SCREEN_FADED_OUT()) || __LIB_0__::func_193()) || __LIB_1__::func_381()) || HUD::IS_PAUSE_MENU_ACTIVE()) || __LIB_3__::func_462(PLAYER::PLAYER_ID())) || !__LIB_0__::func_893()) || __LIB_2__::func_285()) || __LIB_1__::getGlobal_2714762_f_691()) || __LIB_0__::func_983()) || !__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) || __LIB_1__::func_515()) || HUD::IS_RADAR_HIDDEN())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

int func_857(bool bParam0)//Position - 0x37E1CE
{
	if (__LIB_2__::func_72(bParam0, 1))
	{
		return Global_1892703[__LIB_0__::func_797() /*599*/].f_10.f_428;
	}
	return -1;
}

int func_858()//Position - 0x38157C
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_797();
	if (bVar0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_693(bVar0, 0, 1))
		{
			bVar1 = bVar0;
			if (bVar1 != -1)
			{
				return BitTest(Global_1892703[bVar1 /*599*/].f_1, 16);
			}
		}
	}
	return 0;
}

bool func_859()//Position - 0x3818AC
{
	return (__LIB_0__::func_974() && __LIB_26__::func_497(__LIB_1__::func_730()));
}

int func_860(int iParam0)//Position - 0x3818EA
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148 && __LIB_1__::func_918(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

int func_861(bool bParam0)//Position - 0x381ABB
{
	if (__LIB_2__::func_72(bParam0, 1))
	{
		return Global_1892703[__LIB_2__::func_39(bParam0) /*599*/].f_10.f_462;
	}
	return __LIB_0__::getMinusOneOrNull();
}

void func_862(var uParam0)//Position - 0x38483B
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!Global_1585359.f_21)
	{
		iVar1 = __LIB_27__::func_574(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1585359.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = __LIB_27__::func_573(iVar0);
			if (Global_1585359[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_ACCELERATION(iVar0);
			if (Global_1585359[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_AGILITY(iVar0);
			}
			else
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_TRACTION(iVar0);
			}
			if (Global_1585359[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_BRAKING(iVar0);
			if (Global_1585359[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1585359[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

void func_863(int iParam0)//Position - 0x3857FC
{
	__LIB_18__::func_63(1);
	Global_1937088 = iParam0;
}

void func_864(int iParam0, bool bParam1)//Position - 0x386514
{
	if (bParam1)
	{
		if (Global_1933908.f_197[iParam0 /*9*/].f_2 == 1)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1933908.f_197[iParam0 /*9*/].f_1))
			{
				PED::UNREGISTER_PEDHEADSHOT(Global_1933908.f_197[iParam0 /*9*/].f_1);
			}
		}
		else if (Global_1933908.f_197[iParam0 /*9*/].f_2 == 2)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1933908.f_197[iParam0 /*9*/].f_1))
			{
				PED::UNREGISTER_PEDHEADSHOT(Global_1933908.f_197[iParam0 /*9*/].f_1);
			}
			if (Global_1933908.f_197[iParam0 /*9*/].f_1 != 0)
			{
			}
		}
	}
	Global_1933908.f_197[iParam0 /*9*/] = __LIB_0__::getMinusOneOrNull();
	Global_1933908.f_197[iParam0 /*9*/].f_2 = 0;
	Global_1933908.f_197[iParam0 /*9*/].f_1 = 0;
	StringCopy(&(Global_1933908.f_197[iParam0 /*9*/].f_3), "NULL", 24);
}

int func_865()//Position - 0x396C4F
{
	if (!Global_1976975)
	{
		if (__LIB_25__::func_619(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_2__::func_638()) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(5017.4224f, -5130.4478f, 2.19928f, ENTITY::GET_ENTITY_COORDS(Global_2815059.f_298, true), true) < 1500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_866()//Position - 0x397BA9
{
	int iVar0;
	struct<13> Var1;
	bool bVar2;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2715699.f_6007.f_113), 13))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = iVar0;
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar2))
			{
				Var1 = { __LIB_1__::func_696(bVar2) };
				if (NETWORK::NETWORK_IS_HANDLE_VALID(&Var1, 13))
				{
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_2715699.f_6007.f_113), &Var1))
					{
						return iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return __LIB_0__::getMinusOneOrNull();
}

int func_867(int iParam0)//Position - 0x3A6B8B
{
	int iVar0;
	iParam0 += 159;
	__LIB_1__::func_775(iParam0, &iVar0, 0);
	if ((iVar0 >= 0 && Global_1585857[iVar0 /*142*/].f_66 != 0) && !__LIB_13__::func_374(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_868()//Position - 0x3ABCC4
{
	if ((__LIB_12__::func_597(2) || __LIB_12__::func_597(1)) || __LIB_12__::func_597(36))
	{
		return 1;
	}
	return 0;
}

void func_869(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x3AC18A
{
	if (bParam0)
	{
		__LIB_12__::func_783(2);
		if (!bParam7)
		{
			__LIB_12__::func_782(1);
			__LIB_12__::func_781(1);
		}
	}
	else
	{
		__LIB_12__::func_783(1);
	}
	if (bParam1)
	{
		__LIB_12__::func_783(11);
	}
	if (bParam2)
	{
		if (!bParam7)
		{
			__LIB_12__::func_782(1);
			__LIB_12__::func_781(1);
		}
		__LIB_12__::func_783(32);
		if (NETWORK::HAS_NETWORK_TIME_STARTED())
		{
			Global_2815059.f_6685 = NETWORK::GET_NETWORK_TIME();
		}
		if (bParam3)
		{
			__LIB_12__::func_783(33);
		}
		else
		{
			__LIB_12__::func_780(33);
		}
	}
	else if (bParam5)
	{
		__LIB_12__::func_783(37);
	}
	if (bParam4)
	{
		__LIB_12__::func_783(36);
		if (!bParam7)
		{
			__LIB_12__::func_782(1);
			__LIB_12__::func_781(1);
		}
	}
	if (__LIB_1__::func_842(36))
	{
		if (__LIB_1__::func_842(2))
		{
			__LIB_12__::func_780(36);
		}
	}
	if (bParam6)
	{
		__LIB_12__::func_783(38);
	}
	__LIB_12__::func_779(0);
}

int func_870(int iParam0)//Position - 0x3B2295
{
	if (__LIB_27__::func_368(iParam0, 91, -1, 0) || __LIB_27__::func_368(iParam0, 97, -1, 0))
	{
		return 1;
	}
	return 0;
}

void func_871(int iParam0)//Position - 0x3B24CF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(iParam0);
		if (!__LIB_4__::func_451())
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		}
		__LIB_27__::func_370(iParam0);
	}
}

int func_872(struct<3> Param0)//Position - 0x3B4D38
{
	int iVar0;
	iVar0 = 87;
	while (iVar0 <= 90)
	{
		if (__LIB_12__::func_823(Param0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_873(bool bParam0)//Position - 0x3B5D46
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_5, 5);
	}
	return 0;
}

int func_874()//Position - 0x3B60E7
{
	if (__LIB_1__::func_463() >= 0)
	{
		return __LIB_8__::func_889(__LIB_1__::func_463());
	}
	return 0;
}

void func_875()//Position - 0x3BAD83
{
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 9;
		Global_21618 = 1;
		if (Global_78319)
		{
			if (!MISC::IS_PC_VERSION())
			{
				__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
				MISC::SET_BIT(&(Global_2815059.f_1795), 15);
			}
		}
	}
}

int func_876(int iParam0, int iParam1)//Position - 0x3BCB4C
{
	int iVar0;
	if (iParam0 != __LIB_0__::getMinusOneOrNull() && __LIB_5__::func_661(iParam0, iParam1))
	{
		iVar0 = __LIB_7__::func_566(iParam0, iParam1);
		if (__LIB_7__::func_932(iVar0))
		{
			return Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_1 >= __LIB_6__::func_581(iParam1);
		}
	}
	return 0;
}

int func_877()//Position - 0x3BEC4C
{
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && ((__LIB_1__::getGlobal_2714762_f_691() || __LIB_5__::getGlobal_2714762_f_692()) || (__LIB_0__::func_983() && __LIB_1__::func_19() <= 21))) && __LIB_1__::func_675())
	{
		return 1;
	}
	return 0;
}

int func_878(bool bParam0)//Position - 0x3C18D7
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_162510.f_14, 6);
	}
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_295.f_4, 6);
}

int func_879(int iParam0)//Position - 0x3E7EB4
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_131, 16);
	}
	return 0;
}

void func_880()//Position - 0x3EE5C5
{
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	__LIB_11__::func_618();
}

int func_881(int iParam0)//Position - 0x3EF94D
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 6);
	}
	return 0;
}

int func_882(int iParam0)//Position - 0x3F04FA
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 9);
	}
	return 0;
}

int func_883(int iParam0)//Position - 0x3F0A17
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 13);
	}
	return 0;
}

void func_884(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3F1AB0
{
	__LIB_8__::func_71(1);
	__LIB_8__::func_70(0);
	if (bParam0)
	{
		__LIB_8__::func_69(2);
	}
	else
	{
		__LIB_8__::func_69(1);
	}
	if (bParam1)
	{
		__LIB_8__::func_69(11);
	}
	if (bParam2)
	{
		__LIB_7__::func_948(1);
		__LIB_8__::func_69(32);
		__LIB_8__::func_68(1);
		if (NETWORK::HAS_NETWORK_TIME_STARTED())
		{
			Global_2815059.f_6682 = NETWORK::GET_NETWORK_TIME();
		}
		if (bParam3)
		{
			if (!__LIB_6__::func_495(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_69(33);
			}
		}
		else
		{
			__LIB_8__::func_67(33);
		}
	}
	else if (bParam5)
	{
		__LIB_8__::func_69(37);
	}
	if (bParam4)
	{
		__LIB_8__::func_69(36);
	}
	if (__LIB_1__::func_850(36))
	{
		if (__LIB_1__::func_850(2))
		{
			__LIB_8__::func_67(36);
		}
	}
	if (bParam6)
	{
		__LIB_8__::func_69(38);
	}
}

void func_885(int iParam0)//Position - 0x3F7B7B
{
	int iVar0;
	int iVar1;
	Global_2815059.f_325 = NETWORK::NET_TO_VEH(iParam0);
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(iParam0));
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iParam0), "MPBitset"))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iParam0), "MPBitset");
		}
		DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iParam0), "MPBitset", iVar1);
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Submarine_Dinghy", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(Global_2815059.f_325, "Player_Submarine_Dinghy"))
		{
			DECORATOR::DECOR_SET_INT(Global_2815059.f_325, "Player_Submarine_Dinghy", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
		}
	}
	NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(iParam0, PLAYER::PLAYER_ID(), true);
	if (VEHICLE::GET_NUM_MOD_KITS(Global_2815059.f_325) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(Global_2815059.f_325, 0);
	}
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(iParam0), false);
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Global_2815059.f_325, false);
	VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(Global_2815059.f_325, true);
	if (Global_262145.f_29959 /* Tunable: 1695142738 */)
	{
		__LIB_12__::func_789(Global_2815059.f_325, "RADIO_34_DLC_HEI4_KULT" /* GXT: Kult FM */);
	}
	if (VEHICLE::CAN_ANCHOR_BOAT_HERE(Global_2815059.f_325))
	{
		VEHICLE::SET_BOAT_ANCHOR(Global_2815059.f_325, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_351 = Global_2815059.f_6005;
}

int func_886(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3FCF42
{
	int iVar0;
	iVar0 = Global_1585857[iParam1 /*142*/].f_66;
	if (!__LIB_4__::func_940(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("hauler2") || iVar0 == joaat("phantom3"))
	{
		return 0;
	}
	if (iParam0 && __LIB_9__::func_359(iVar0))
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_4718592 == 2 || iParam4)
		{
			if (!__LIB_12__::func_606(Global_1585857[iParam1 /*142*/].f_66, iParam2))
			{
				return 0;
			}
		}
		else if (Global_4718592 != 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_887(int iParam0, int iParam1, int iParam2)//Position - 0x3FD738
{
	int iVar0;
	iVar0 = __LIB_21__::func_981(iParam0, iParam1, iParam2);
	return iVar0 == -1;
}

int func_888(var uParam0, int iParam1, int iParam2)//Position - 0x3FE3C4
{
	if (!__LIB_0__::func_702(&(uParam0->f_22[iParam1 /*3*/])))
	{
	}
	return MISC::ABSI(((iParam2 / 1000) - SYSTEM::ROUND(__LIB_3__::func_108(&(uParam0->f_22[iParam1 /*3*/])))));
}

var func_889(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x401D4A
{
	struct<3> Var0;
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	__LIB_13__::func_594(1);
	Global_2787937 = { Var0 };
	Global_2787933 = iParam3;
	Global_2787943 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2787935 = 0;
	__LIB_2__::func_522(&Global_2787935, 0, !bParam4);
	Global_2787936 = 1;
	return Global_2787943;
}

int func_890()//Position - 0x40C2D8
{
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (Global_1836608 == 1)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				return 0;
			}
			if (__LIB_0__::func_258())
			{
				return 0;
			}
			if (HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN())
			{
				return 0;
			}
			if (Global_1931426 == 1)
			{
				return 0;
			}
			if (Global_1836571 == 1)
			{
				return 0;
			}
			if (__LIB_18__::func_700())
			{
				return 0;
			}
			if (Global_1836575 == 1 && (__LIB_1__::func_150() || __LIB_1__::func_149()))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 3 && (__LIB_1__::func_150() || __LIB_1__::func_149()))
			{
				return 0;
			}
			if (Global_1836577 == 1 && (__LIB_1__::func_150() || __LIB_1__::func_149()))
			{
				return 0;
			}
			if (Global_1640732)
			{
				return 0;
			}
			if (Global_1836613 == 1 || BitTest(Global_4718592.f_14, 29))
			{
				return 0;
			}
			if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if ((!__LIB_0__::func_194(8, -1) && !__LIB_5__::getGlobal_2714762_f_692()) && !__LIB_0__::func_629())
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

int func_891(int iParam0)//Position - 0x412676
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_364;
}

void func_892(int iParam0)//Position - 0x4139B1
{
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_137(7559, -1))
			{
				__LIB_0__::func_186(7559, 1, -1);
				__LIB_0__::func_186(7556, 1, -1);
			}
			else if (!__LIB_0__::func_137(7560, -1))
			{
				__LIB_0__::func_186(7559, 1, -1);
				__LIB_0__::func_186(7560, 1, -1);
				__LIB_0__::func_186(7556, 1, -1);
				__LIB_0__::func_186(7557, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7559, 1, -1);
				__LIB_0__::func_186(7560, 1, -1);
				__LIB_0__::func_186(7561, 1, -1);
				__LIB_0__::func_186(7556, 1, -1);
				__LIB_0__::func_186(7557, 1, -1);
				__LIB_0__::func_186(7558, 1, -1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_137(7589, -1))
			{
				__LIB_0__::func_186(7589, 1, -1);
			}
			else if (!__LIB_0__::func_137(7590, -1))
			{
				__LIB_0__::func_186(7589, 1, -1);
				__LIB_0__::func_186(7590, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7589, 1, -1);
				__LIB_0__::func_186(7590, 1, -1);
				__LIB_0__::func_186(7591, 1, -1);
			}
			break;
		case 2:
			if (!__LIB_0__::func_137(7592, -1))
			{
				__LIB_0__::func_186(7592, 1, -1);
			}
			else if (!__LIB_0__::func_137(7593, -1))
			{
				__LIB_0__::func_186(7592, 1, -1);
				__LIB_0__::func_186(7593, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7592, 1, -1);
				__LIB_0__::func_186(7593, 1, -1);
				__LIB_0__::func_186(7594, 1, -1);
			}
			break;
		case 3:
			if (!__LIB_0__::func_137(7577, -1))
			{
				__LIB_0__::func_186(7577, 1, -1);
			}
			else if (!__LIB_0__::func_137(7578, -1))
			{
				__LIB_0__::func_186(7577, 1, -1);
				__LIB_0__::func_186(7578, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7577, 1, -1);
				__LIB_0__::func_186(7578, 1, -1);
				__LIB_0__::func_186(7579, 1, -1);
			}
			break;
		case 4:
			if (!__LIB_0__::func_137(7568, -1))
			{
				__LIB_0__::func_186(7568, 1, -1);
			}
			else if (!__LIB_0__::func_137(7569, -1))
			{
				__LIB_0__::func_186(7568, 1, -1);
				__LIB_0__::func_186(7569, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7568, 1, -1);
				__LIB_0__::func_186(7569, 1, -1);
				__LIB_0__::func_186(7570, 1, -1);
			}
			break;
		case 5:
			if (!__LIB_0__::func_137(7583, -1))
			{
				__LIB_0__::func_186(7583, 1, -1);
				__LIB_0__::func_186(7580, 1, -1);
			}
			else if (!__LIB_0__::func_137(7584, -1))
			{
				__LIB_0__::func_186(7583, 1, -1);
				__LIB_0__::func_186(7584, 1, -1);
				__LIB_0__::func_186(7580, 1, -1);
				__LIB_0__::func_186(7581, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7583, 1, -1);
				__LIB_0__::func_186(7584, 1, -1);
				__LIB_0__::func_186(7585, 1, -1);
				__LIB_0__::func_186(7580, 1, -1);
				__LIB_0__::func_186(7581, 1, -1);
				__LIB_0__::func_186(7582, 1, -1);
			}
			break;
		case 6:
			if (!__LIB_0__::func_137(7571, -1))
			{
				__LIB_0__::func_186(7571, 1, -1);
			}
			else if (!__LIB_0__::func_137(7572, -1))
			{
				__LIB_0__::func_186(7571, 1, -1);
				__LIB_0__::func_186(7572, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7571, 1, -1);
				__LIB_0__::func_186(7572, 1, -1);
				__LIB_0__::func_186(7573, 1, -1);
			}
			break;
		case 7:
			if (!__LIB_0__::func_137(7574, -1))
			{
				__LIB_0__::func_186(7574, 1, -1);
				__LIB_0__::func_186(7565, 1, -1);
			}
			else if (!__LIB_0__::func_137(7575, -1))
			{
				__LIB_0__::func_186(7574, 1, -1);
				__LIB_0__::func_186(7575, 1, -1);
				__LIB_0__::func_186(7565, 1, -1);
				__LIB_0__::func_186(7566, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7574, 1, -1);
				__LIB_0__::func_186(7575, 1, -1);
				__LIB_0__::func_186(7576, 1, -1);
				__LIB_0__::func_186(7565, 1, -1);
				__LIB_0__::func_186(7566, 1, -1);
				__LIB_0__::func_186(7567, 1, -1);
			}
			break;
		case 8:
			if (!__LIB_0__::func_137(7586, -1))
			{
				__LIB_0__::func_186(7586, 1, -1);
			}
			else if (!__LIB_0__::func_137(7587, -1))
			{
				__LIB_0__::func_186(7586, 1, -1);
				__LIB_0__::func_186(7587, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7586, 1, -1);
				__LIB_0__::func_186(7587, 1, -1);
				__LIB_0__::func_186(7588, 1, -1);
			}
			break;
		case 9:
			if (!__LIB_0__::func_137(7562, -1))
			{
				__LIB_0__::func_186(7562, 1, -1);
			}
			else if (!__LIB_0__::func_137(7563, -1))
			{
				__LIB_0__::func_186(7562, 1, -1);
				__LIB_0__::func_186(7563, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7562, 1, -1);
				__LIB_0__::func_186(7563, 1, -1);
				__LIB_0__::func_186(7564, 1, -1);
			}
			break;
		case 10:
			if (!__LIB_0__::func_137(7553, -1))
			{
				__LIB_0__::func_186(7553, 1, -1);
			}
			else if (!__LIB_0__::func_137(7554, -1))
			{
				__LIB_0__::func_186(7553, 1, -1);
				__LIB_0__::func_186(7554, 1, -1);
			}
			else
			{
				__LIB_0__::func_186(7553, 1, -1);
				__LIB_0__::func_186(7554, 1, -1);
				__LIB_0__::func_186(7555, 1, -1);
			}
			break;
	}
}

bool func_893(int iParam0)//Position - 0x415452
{
	return 0 == __LIB_16__::func_239(iParam0);
}

bool func_894()//Position - 0x415B98
{
	return __LIB_6__::func_269();
}

int func_895()//Position - 0x41E292
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (!__LIB_3__::func_169(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	return 1;
}

int func_896(int iParam0)//Position - 0x4383F6
{
	if (__LIB_0__::func_116() && __LIB_0__::func_163())
	{
		if (iParam0 == 31)
		{
			return 1;
		}
	}
	if (__LIB_7__::func_269())
	{
		if (__LIB_13__::func_379(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_897(bool bParam0)//Position - 0x43C28F
{
	struct<13> Var0;
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (!__LIB_1__::func_693(bParam0, 0, 1))
	{
		return 0;
	}
	Var0 = { __LIB_1__::func_696(bParam0) };
	if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
	{
		return 0;
	}
	if (__LIB_27__::func_600(bParam0))
	{
		return 0;
	}
	return 1;
}

void func_898(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x43C54C
{
	struct<3> Var0;
	struct<13> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!__LIB_1__::func_693(bParam0, 0, 1))
	{
		return;
	}
	Var0.f_0 = -374624960;
	Var0.f_1 = PLAYER::PLAYER_ID();
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var1, 13);
	Var0.f_2 = { Var1 };
	if (bParam1)
	{
		iVar2 = 0;
		MISC::SET_BIT(&iVar2, 6);
		Var0.f_2.f_13 = iVar2;
		Var0.f_2.f_19 = 0;
		Var0.f_2.f_20 = 0;
	}
	if (bParam2)
	{
		iVar3 = 0;
		MISC::SET_BIT(&iVar3, 0);
		Var0.f_2.f_13 = iVar3;
		Var0.f_2.f_19 = 1;
		Var0.f_2.f_20 = 0;
	}
	if (bParam3)
	{
		iVar4 = 0;
		MISC::SET_BIT(&iVar4, 0);
		Var0.f_2.f_13 = iVar4;
		Var0.f_2.f_19 = 1;
		Var0.f_2.f_20 = 1;
	}
	Var0.f_2.f_14 = __LIB_25__::func_291(PLAYER::PLAYER_ID());
	StringCopy(&(Var0.f_2.f_15), "", 16);
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 23, __LIB_1__::func_705(bParam0));
}

void func_899(int iParam0)//Position - 0x43D4E4
{
	if (__LIB_18__::func_109(iParam0))
	{
		Global_1573131.f_14 = 1;
		return;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 16);
	Global_1573131.f_14 = 1;
}

void func_900(int iParam0)//Position - 0x43D81B
{
	int iVar0;
	int iVar1;
	if (Global_1573124 && Global_1573125)
	{
		return;
	}
	iVar0 = __LIB_12__::func_467(iParam0);
	iVar1 = __LIB_18__::func_112(iParam0);
	if (!Global_1573124)
	{
		if (iVar1 == 62 && iVar0 == 192)
		{
			Global_1573124 = 1;
		}
	}
	if (!Global_1573125)
	{
		if (iVar1 == 62 && iVar0 == 189)
		{
			Global_1573125 = 1;
		}
	}
}

void func_901(int iParam0)//Position - 0x43D8D6
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	if (!Global_2621797)
	{
		return;
	}
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
	{
		Var1 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
	}
	iVar2 = __LIB_18__::func_119(iParam0);
	if (iVar2 == 0)
	{
		return;
	}
	iVar3 = __LIB_12__::func_467(iParam0);
	if (iVar3 == 0)
	{
		return;
	}
	Var4 = { __LIB_18__::func_104(iParam0) };
	fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var4, true);
	iVar6 = 0;
	fVar7 = 0f;
	iVar8 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2621797.f_2[iVar0 /*3*/].f_2 == 0)
		{
			if (iVar6 < 3)
			{
				Global_2621797.f_2[iVar0 /*3*/] = iVar3;
				Global_2621797.f_2[iVar0 /*3*/].f_1 = fVar5;
				Global_2621797.f_2[iVar0 /*3*/].f_2 = iVar2;
				return;
			}
			if (fVar5 < fVar7)
			{
				Global_2621797.f_2[iVar8 /*3*/] = iVar3;
				Global_2621797.f_2[iVar8 /*3*/].f_1 = fVar5;
				Global_2621797.f_2[iVar8 /*3*/].f_2 = iVar2;
			}
			return;
		}
		if (Global_2621797.f_2[iVar0 /*3*/] == iVar3)
		{
			if (Global_2621797.f_2[iVar0 /*3*/].f_2 == iVar2)
			{
				return;
			}
			if (Global_2621797.f_2[iVar0 /*3*/].f_1 > fVar7)
			{
				fVar7 = Global_2621797.f_2[iVar0 /*3*/].f_1;
				iVar8 = iVar0;
			}
			iVar6++;
		}
		iVar0++;
	}
	if (iVar6 == 0)
	{
		return;
	}
	if (fVar5 < fVar7)
	{
		Global_2621797.f_2[iVar8 /*3*/] = iVar3;
		Global_2621797.f_2[iVar8 /*3*/].f_1 = fVar5;
		Global_2621797.f_2[iVar8 /*3*/].f_2 = iVar2;
	}
}

int func_902(int iParam0, int iParam1)//Position - 0x43DAB4
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_18__::func_105(iParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (Global_2653090[iParam1 /*5*/].f_1[iVar1 /*3*/] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_903(int iParam0)//Position - 0x43DBF2
{
	if (__LIB_18__::func_124(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_904(var uParam0)//Position - 0x43DC52
{
	if (*uParam0 != 191)
	{
		return 0;
	}
	return __LIB_17__::func_53(uParam0) == 8;
}

void func_905(int iParam0)//Position - 0x43DE72
{
	if (__LIB_18__::func_133(iParam0))
	{
		return;
	}
	if (__LIB_18__::func_132(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 7);
}

int func_906(int iParam0)//Position - 0x43EB3E
{
	int iVar0;
	if (__LIB_0__::func_3() == 0)
	{
		iVar0 = __LIB_0__::func_956(iParam0, 1);
		if (iVar0 == -1)
		{
			return 0;
		}
		return __LIB_18__::func_146(iVar0);
	}
	return 0;
}

void func_907(var uParam0, var uParam1)//Position - 0x43F198
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	switch (*uParam0)
	{
		case 190:
			break;
		default:
			return;
	}
	if (*uParam0 == 190)
	{
		iVar0 = __LIB_17__::func_53(uParam0);
		if (iVar0 < 0 || iVar0 >= Global_1039641.f_684)
		{
			return;
		}
		Var1 = { Global_1039641[iVar0 /*3*/] };
		Var2 = { Global_1039641.f_256[iVar0 /*3*/] };
		fVar3 = Global_1039641.f_512[iVar0];
		Var4 = { 0f, 0f, 0f };
		fVar5 = 0.1f;
		fVar6 = -0.1f;
		if (((__LIB_0__::func_490(Var1, Var4, 1056964608, 0) || __LIB_0__::func_490(Var2, Var4, 1056964608, 0)) || __LIB_0__::func_490(Var1, Var2, fVar5, 0)) || (fVar3 > fVar6 && fVar3 < fVar5))
		{
			return;
		}
		uParam1->f_14 = 1;
		uParam1->f_24 = { Var1 };
		uParam1->f_27 = { Var2 };
		uParam1->f_30 = fVar3;
		return;
	}
}

bool func_908(var uParam0)//Position - 0x43F497
{
	if (*uParam0 != 191)
	{
		return 0;
	}
	return __LIB_17__::func_53(uParam0) == 7;
}

bool func_909(var uParam0)//Position - 0x43F7ED
{
	if (*uParam0 != 191)
	{
		return 0;
	}
	return __LIB_17__::func_53(uParam0) == 3;
}

int func_910(var uParam0)//Position - 0x43FB9F
{
	int iVar0;
	iVar0 = __LIB_17__::func_53(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 6:
		case 7:
			return 12;
		case 18:
		case 19:
			return 36;
		case 10:
		case 11:
			return 20;
		case 12:
		case 13:
			return 19;
		case 2:
		case 3:
			return 11;
		case 4:
		case 5:
			return 10;
		case 20:
		case 21:
		case 22:
		case 23:
			return 38;
		case 24:
		case 25:
			return 43;
		case 26:
			return 45;
		case 27:
			return 44;
		default:
	}
	return 13;
}

bool func_911(var uParam0)//Position - 0x43FD41
{
	if (*uParam0 != 191)
	{
		return 0;
	}
	return __LIB_17__::func_53(uParam0) == 6;
}

bool func_912(var uParam0)//Position - 0x43FE23
{
	if (*uParam0 != 191)
	{
		return 0;
	}
	return __LIB_17__::func_53(uParam0) == 5;
}

int func_913(var uParam0)//Position - 0x43FE3F
{
	int iVar0;
	iVar0 = __LIB_17__::func_53(uParam0);
	switch (iVar0)
	{
		case 0:
			return 5;
		case 1:
			return 18;
		case 2:
			return 17;
		case 3:
			return 41;
		case 4:
			return 42;
		default:
	}
	return 5;
}

int func_914(int iParam0, int iParam1)//Position - 0x43FF41
{
	return __LIB_18__::func_431(5, iParam0, iParam1);
}

void func_915(int iParam0, int iParam1)//Position - 0x4440DB
{
	int iVar0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (Global_2815059.f_4546.f_6[iVar0] == iParam0)
			{
				iParam1 = iVar0;
			}
			iVar0++;
		}
	}
	if (iParam1 >= 0)
	{
		__LIB_0__::clearF_1Prop(&(Global_2815059.f_4546[iParam1 /*2*/]));
		__LIB_0__::clearF_1Prop(&(Global_2815059.f_4546.f_3[iParam1 /*2*/]));
		Global_2815059.f_4546.f_6[iParam1] = 0;
		Global_2815059.f_4546.f_8[iParam1] = 0;
		Global_2815059.f_4546.f_10[iParam1] = 0;
		Global_2815059.f_4546.f_12[iParam1] = 0;
		Global_2815059.f_4546.f_18 = (Global_2815059.f_4546.f_18 - 1);
	}
}

int func_916(int iParam0)//Position - 0x44B32D
{
	var uVar0;
	switch (iParam0)
	{
		case joaat("PICKUP_ARMOUR_STANDARD"):
			return __LIB_25__::func_543();
			break;
		case joaat("PICKUP_HEALTH_STANDARD"):
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
			return PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
			break;
		case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
			return 1000;
			break;
		case joaat("PICKUP_WEAPON_RPG"):
			return 4;
			break;
		case joaat("PICKUP_MONEY_CASE"):
			return 1;
			break;
		case joaat("PICKUP_WEAPON_MINIGUN"):
			return 200;
			break;
		case joaat("PICKUP_WEAPON_GRENADE"):
		case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
		case joaat("PICKUP_WEAPON_STICKYBOMB"):
			return 5;
			break;
		case joaat("PICKUP_WEAPON_RAYPISTOL"):
			return 1;
			break;
		case joaat("PICKUP_WEAPON_RAYMINIGUN"):
			return Global_262145.f_26761 /* Tunable: -888432705 */;
			break;
		case joaat("PICKUP_WEAPON_RAYCARBINE"):
			return Global_262145.f_26760 /* Tunable: -1290045798 */;
			break;
		case joaat("PICKUP_PARACHUTE"):
			return 1;
			break;
		default:
			uVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(iParam0), true) * 2;
			break;
	}
	return uVar0;
}

bool func_917()//Position - 0x44F09D
{
	return (__LIB_17__::func_992() && BitTest(Global_4718592.f_162497, 12));
}

int func_918(int iParam0)//Position - 0x44F66F
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_2, 15);
	}
	return 0;
}

int func_919()//Position - 0x44F949
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__::func_192())
	{
		return 1;
	}
	if (__LIB_0__::func_191())
	{
		return 1;
	}
	return __LIB_1__::func_342(115, -1);
}

void func_920(int iParam0, var uParam1)//Position - 0x455FDF
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	__LIB_27__::func_348(iParam0, &uVar0, &uVar2, &uVar1, &uVar3);
	__LIB_27__::func_347(uParam1, uVar0, uVar1, uVar3, uVar2);
}

void func_921(var uParam0)//Position - 0x4562CB
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	int iVar3;
	iVar2 = *uParam0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (__LIB_27__::func_351(iVar3, &Var0, &uVar1))
		{
			*(uParam0[iVar3 /*6*/]) = { Var0 };
			(uParam0[iVar3 /*6*/])->f_3 = { 0f, 0f, uVar1 };
		}
		iVar3++;
	}
}

void func_922(int iParam0, var uParam1)//Position - 0x456B4C
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	__LIB_27__::func_348(iParam0, &uVar0, &uVar2, &uVar1, &uVar3);
	__LIB_27__::func_354(uParam1, uVar0, uVar1, uVar3, uVar2);
}

void func_923(bool bParam0)//Position - 0x45729F
{
	__LIB_27__::func_629(PLAYER::PLAYER_ID(), bParam0);
}

void func_924(int iParam0, bool bParam1)//Position - 0x4589D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 4;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = iVar0;
		__LIB_27__::func_630(iParam0, iVar2, bParam1);
		iVar0++;
	}
}

int func_925(bool bParam0)//Position - 0x45B32E
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_408.f_2, 17);
	}
	return 0;
}

void func_926()//Position - 0x45B3A2
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	__LIB_3__::func_93(1);
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::SET_PAUSE_MENU_ACTIVE(false);
	}
}

int func_927()//Position - 0x4638C3
{
	int iVar0;
	iVar0 = 100;
	if (__LIB_6__::func_87(PLAYER::PLAYER_ID()))
	{
		iVar0 = 10;
	}
	if ((iVar0 == 0 || BitTest(Global_1946250.f_4, 19)) || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		return 1;
	}
	return 0;
}

int func_928(bool bParam0, int iParam1)//Position - 0x46A974
{
	if (__LIB_10__::func_774(bParam0, 1, 0) && __LIB_10__::func_774(iParam1, 1, 0))
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_33 == Global_1853348[iParam1 /*834*/].f_267.f_33)
		{
			if (!BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 3) == BitTest(Global_1853348[iParam1 /*834*/].f_267.f_30, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_929()//Position - 0x46AB1C
{
	if (__LIB_1__::func_141())
	{
		if (!__LIB_3__::func_143(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_930(bool bParam0)//Position - 0x46AB8F
{
	int iVar0;
	if (__LIB_2__::func_732(bParam0, 0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (!iVar0 == __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_6__::func_58(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_931(bool bParam0)//Position - 0x46AC69
{
	int iVar0;
	if (__LIB_2__::func_731(bParam0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (!iVar0 == __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_6__::func_62(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_932(bool bParam0)//Position - 0x46BD05
{
	if (BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 23))
	{
		if (!__LIB_3__::func_136(bParam0, Global_2703735))
		{
			return 1;
		}
	}
	return 0;
}

int func_933(int iParam0)//Position - 0x470249
{
	return __LIB_27__::func_528(PLAYER::GET_PLAYER_PED(iParam0));
}

int func_934(var uParam0)//Position - 0x48F52D
{
	int iVar0;
	switch (uParam0->f_1)
	{
		case 1:
			__LIB_22__::func_625();
			if (__LIB_1__::func_5())
			{
				return 0;
			}
			return 1;
			break;
		case 13:
		case 53:
		case 56:
			return 1;
		case 15:
		case 16:
		case 17:
		case 14:
		case 20:
		case 21:
		case 18:
		case 19:
		case 22:
		case 39:
		case 43:
		case 44:
		case 47:
			if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				__LIB_22__::func_625();
				return 0;
			}
			break;
		case 24:
		case 33:
		case 36:
		case 37:
		case 38:
		case 55:
			uParam0->f_2 = 5;
			return 0;
			break;
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam0->f_78, NETWORK::GET_NETWORK_TIME()));
	if (iVar0 < 1000)
	{
		return 0;
	}
	uParam0->f_79 = iVar0;
	return 1;
}

int func_935(bool bParam0)//Position - 0x491DC3
{
	if ((Global_1952191.f_5310 && Global_1952191.f_5314) && !Global_1952191.f_5316)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_1931426 && !__LIB_22__::func_632(&(Global_2703735.f_2400[0 /*80*/])))
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS() && !__LIB_22__::func_631(&(Global_2703735.f_2400[0 /*80*/])))
	{
		return 0;
	}
	if (Global_1057410)
	{
		if (!__LIB_16__::func_641(Global_4718592.f_168757))
		{
			return 0;
		}
		else if (((Global_2703735.f_2400[0 /*80*/].f_1 == 27 || Global_2703735.f_2400[0 /*80*/].f_1 == 42) || Global_2703735.f_2400[0 /*80*/].f_1 == 1) || Global_2703735.f_2400[0 /*80*/].f_1 == 34)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !__LIB_24__::func_672(&(Global_2703735.f_2400[0 /*80*/]), bParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_629())
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (__LIB_3__::func_462(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		if (Global_2703735.f_2400[0 /*80*/].f_1 != 1)
		{
			return 0;
		}
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(16))
	{
		if (Global_2703735.f_2400[0 /*80*/].f_1 != 1)
		{
			return 0;
		}
	}
	if (__LIB_0__::func_104(1))
	{
		if (Global_2703735.f_2400[0 /*80*/].f_1 != 2 && Global_2703735.f_2400[0 /*80*/].f_1 != 57)
		{
			return 0;
		}
	}
	if (Global_1836571 == 1)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (Global_2703735.f_2400[0 /*80*/].f_1 != 13 && Global_2703735.f_2400[0 /*80*/].f_1 != 53)
		{
			return 0;
		}
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING() && !__LIB_22__::func_632(&(Global_2703735.f_2400[0 /*80*/])))
	{
		if (!BitTest(Global_2815059.f_1792, 1) || Global_2703735.f_2400[0 /*80*/].f_1 != 1)
		{
			return 0;
		}
	}
	if (Global_1836363)
	{
		return 0;
	}
	if (BitTest(Global_2621446, 0))
	{
		return 0;
	}
	if (__LIB_2__::func_273(256))
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_4 > 0)
	{
		return 0;
	}
	if (__LIB_1__::func_256(Global_2703735.f_2400[0 /*80*/].f_1) && Global_2703735.f_2400[0 /*80*/].f_1 != 95)
	{
		if (__LIB_0__::func_193())
		{
			return 0;
		}
	}
	if (Global_1946138)
	{
		return 0;
	}
	if (BitTest(Global_2788199.f_213, 6))
	{
		return 0;
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428, 0))
	{
		return 0;
	}
	if (__LIB_22__::func_630(&(Global_2703735.f_2400[0 /*80*/]), bParam0))
	{
		return 0;
	}
	return 1;
}

int func_936(bool bParam0)//Position - 0x497D83
{
	int iVar0;
	if (__LIB_1__::func_744(bParam0))
	{
		iVar0 = bParam0;
		if (Global_2689235[iVar0 /*453*/].f_71.f_3 != 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_937(int iParam0)//Position - 0x499238
{
	MISC::CLEAR_BIT(&(Global_2678393.f_366), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_367), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_368), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_369), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_370), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_371), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_373), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_374), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_372), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_375), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_376), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_377), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_378), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_380), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_381), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_382), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_384), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_383), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_379), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_408), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_395), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_385), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_386), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_387), iParam0);
	MISC::CLEAR_BIT(&(Global_2678393.f_397), iParam0);
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		HUD::SET_BLIP_ALPHA(Global_2678393[iParam0], 0);
		__LIB_26__::func_291(&(Global_2678393[iParam0]), 1);
	}
}

int func_938(bool bParam0)//Position - 0x49B4A4
{
	if (__LIB_6__::func_530(Global_2703735) && __LIB_6__::func_530(bParam0))
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_9 == Global_2689235[Global_2703735 /*453*/].f_318.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_939(bool bParam0)//Position - 0x49B53D
{
	if (__LIB_2__::func_731(Global_2703735) && __LIB_2__::func_731(bParam0))
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_9 == Global_2689235[Global_2703735 /*453*/].f_318.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_940(bool bParam0)//Position - 0x49B61E
{
	if (__LIB_2__::func_732(Global_2703735, 0) && __LIB_2__::func_732(bParam0, 0))
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_9 == Global_2689235[Global_2703735 /*453*/].f_318.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_941(bool bParam0)//Position - 0x49B664
{
	int iVar0;
	if (__LIB_2__::func_732(bParam0, 0))
	{
		iVar0 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (!iVar0 == __LIB_0__::getMinusOneOrNull())
		{
			if (!__LIB_6__::func_58(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_942(bool bParam0)//Position - 0x49B6F5
{
	if (__LIB_2__::func_730(Global_2703735) && __LIB_2__::func_730(bParam0))
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_9 == Global_2689235[Global_2703735 /*453*/].f_318.f_9)
		{
			return 1;
		}
	}
	return 0;
}

int func_943(bool bParam0)//Position - 0x49BA6E
{
	if (__LIB_27__::func_530(PLAYER::GET_PLAYER_PED(bParam0), 0))
	{
		return 1;
	}
	return 0;
}

int func_944()//Position - 0x49CC28
{
	if (__LIB_1__::func_11() || __LIB_1__::func_141())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_13, 20);
}

void func_945()//Position - 0x4A8E8E
{
	__LIB_12__::func_915(0);
}

void func_946(int iParam0, bool bParam1, int iParam2)//Position - 0x4AC10F
{
	__LIB_0__::func_186(__LIB_0__::func_265(iParam0), bParam1, iParam2);
}

void func_947()//Position - 0x4CB584
{
	__LIB_1__::func_829(&Global_1660946);
}

void func_948(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4D0CF5
{
	int iVar0;
	__LIB_18__::func_61(1);
	iVar0 = __LIB_18__::func_60(iParam0);
	if (iVar0 == 12)
	{
		return;
	}
	if (__LIB_27__::func_452(iVar0, iParam1, iParam2, iParam3))
	{
		return;
	}
	if (Global_1573108 >= 12)
	{
		return;
	}
	Global_1573035[Global_1573108 /*6*/] = iVar0;
	Global_1573035[Global_1573108 /*6*/].f_1 = iParam1;
	Global_1573035[Global_1573108 /*6*/].f_2 = iParam2;
	Global_1573035[Global_1573108 /*6*/].f_3 = iParam3;
	Global_1573035[Global_1573108 /*6*/].f_4 = __LIB_18__::func_59();
	Global_1573035[Global_1573108 /*6*/].f_5 = 0;
	Global_1573108++;
}

int func_949(int iParam0, bool bParam1)//Position - 0x4DCD21
{
	if ((((__LIB_18__::func_141(iParam0) && !__LIB_1__::func_646()) && !__LIB_1__::func_647()) && !__LIB_2__::func_254()) && !__LIB_1__::func_140())
	{
		if (bParam1)
		{
		}
		return 1;
	}
	return 0;
}

void func_950(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4DE44A
{
	int iVar0;
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_1659366[iParam0 /*11*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iVar0, "SET_MISSION_NAME");
	__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(__LIB_18__::func_341(iParam1, -1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iVar0, "SET_PLAYERS_NEEDED");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_951(var uParam0, var uParam1)//Position - 0x4DE96E
{
	if (*uParam0 != 189)
	{
		return 0;
	}
	if (__LIB_17__::func_53(uParam0) == 4)
	{
		*uParam1 = 1;
		return 1;
	}
	*uParam1 = 0;
	return __LIB_17__::func_53(uParam0) == 3;
}

void func_952(float* fParam0, float* fParam1, float* fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x4DE9A0
{
	struct<16> Var0;
	int iVar1;
	struct<16> Var2;
	float fVar3;
	float fVar4;
	StringCopy(&Var0, "", 64);
	iVar1 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(iParam3);
	StringCopy(&Var2, "XP_MULTIPLIER", 64);
	Var0 = { __LIB_18__::func_367(iParam4, iParam5, iVar1, Var2, bParam6, bParam7, iParam10) };
	if (iParam4 == 0)
	{
		if (iParam5 == 1 || iParam5 == 7)
		{
			if (Global_262145.f_8573 /* Tunable: HEIST_BADGE_XP_MULTIPLIER */ >= 1f)
			{
				*fParam0 = Global_262145.f_8573 /* Tunable: HEIST_BADGE_XP_MULTIPLIER */;
			}
			if (Global_262145.f_8574 /* Tunable: HEIST_BADGE_CASH_MULTIPLIER */ >= 1f)
			{
				*fParam1 = Global_262145.f_8574 /* Tunable: HEIST_BADGE_CASH_MULTIPLIER */;
			}
			return;
		}
		if (bParam8)
		{
			if (Global_262145.f_23406 /* Tunable: H2_BADGE_XP_MULTIPLIER */ >= 1f)
			{
				*fParam0 = Global_262145.f_23406 /* Tunable: H2_BADGE_XP_MULTIPLIER */;
			}
			if (Global_262145.f_23407 /* Tunable: H2_BADGE_CASH_MULTIPLIER */ >= 1f)
			{
				*fParam1 = Global_262145.f_23407 /* Tunable: H2_BADGE_CASH_MULTIPLIER */;
			}
			return;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT(&Var0, &Var2, fParam0))
		{
		}
		if (NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT(&Var0, "FAKE_XP_MULTIPLIER", &fVar3))
		{
		}
		if (fVar3 > 0f)
		{
			*fParam0 = fVar3;
		}
	}
	StringCopy(&Var2, "CASH_MULTIPLIER", 64);
	Var0 = { __LIB_18__::func_367(iParam4, iParam5, iVar1, Var2, bParam6, bParam7, iParam10) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT(&Var0, &Var2, fParam1))
		{
		}
		if (NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT(&Var0, "FAKE_XP_MULTIPLIER", &fVar4))
		{
		}
		if (fVar4 > 0f)
		{
			*fParam1 = fVar4;
		}
	}
	if (bParam9)
	{
		StringCopy(&Var2, "AP_MULTIPLIER", 64);
		Var0 = { __LIB_18__::func_367(iParam4, iParam5, iVar1, Var2, bParam6, bParam7, iParam10) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			if (NETWORK::NETWORK_ACCESS_TUNABLE_FLOAT(&Var0, &Var2, fParam2))
			{
			}
		}
	}
}

var func_953(int iParam0)//Position - 0x4DEEC3
{
	return __LIB_1__::func_601(&(Global_1659366[iParam0 /*11*/].f_3));
}

int func_954()//Position - 0x4E19F4
{
	if (!__LIB_18__::func_450())
	{
		return 0;
	}
	return Global_2653202.f_4.f_17;
}

int func_955(int iParam0, int iParam1)//Position - 0x4E1A35
{
	if (!__LIB_18__::func_450())
	{
		return 0;
	}
	if (iParam0 != Global_2653202.f_4)
	{
		return 0;
	}
	if (iParam1 != -1)
	{
		if (iParam1 != Global_2653202.f_4.f_1)
		{
			return 0;
		}
	}
	return 1;
}

int func_956(int iParam0, int iParam1)//Position - 0x4E4FF0
{
	if (iParam0 != 0 || iParam1 != 0)
	{
		if (__LIB_7__::func_165(iParam0))
		{
			return 0;
		}
		if (__LIB_8__::func_338(iParam0))
		{
			if (Global_262145.f_12645 /* Tunable: DISABLEREDINVITE_COME_OUT_TO_PLAY */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_8__::func_340(iParam0))
		{
			if (Global_262145.f_12646 /* Tunable: DISABLEREDINVITE_SIEGE_MENTALITY */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_8__::func_339(iParam0))
		{
			if (Global_262145.f_12647 /* Tunable: DISABLEREDINVITE_HASTA_LA_VISTA */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_0__::func_996(iParam0, 1))
		{
			if (Global_262145.f_12648 /* Tunable: DISABLEREDINVITE_HUNTING_PACK */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_2__::func_312(iParam0))
		{
			if (Global_262145.f_12649 /* Tunable: DISABLEREDINVITE_CROSS_THE_LINE */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_7__::func_713(iParam0))
		{
			if (Global_262145.f_12650 /* Tunable: DISABLEREDINVITE_SHEPHERD */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_7__::func_709(iParam0))
		{
			if (Global_262145.f_12651 /* Tunable: DISABLEREDINVITE_RELAY */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_8__::func_337(iParam0))
		{
			if (Global_262145.f_12652 /* Tunable: DISABLEREDINVITE_SPEED_RACE */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_8__::func_335(iParam0))
		{
			if (Global_262145.f_12653 /* Tunable: DISABLEREDINVITE_EBC */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_8__::func_336(iParam0))
		{
			if (Global_262145.f_12654 /* Tunable: DISABLEREDINVITE_HUNT_DARK */)
			{
				return 0;
			}
			return 1;
		}
		else if (__LIB_2__::func_317(iParam0))
		{
			if (Global_262145.f_12655 /* Tunable: DISABLEREDINVITE_RUNNING_BACK */)
			{
				return 0;
			}
			return 1;
		}
		if (__LIB_12__::func_668(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

var func_957(int iParam0)//Position - 0x4E688C
{
	return __LIB_1__::func_601(&(Global_1998[iParam0 /*29*/].f_7));
}

int func_958()//Position - 0x4F16B1
{
	if (__LIB_0__::func_75())
	{
		return 1;
	}
	if (__LIB_27__::func_938())
	{
		return 1;
	}
	return 0;
}

int func_959(int iParam0)//Position - 0x4F5B43
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_480.f_2;
}

int func_960(int iParam0)//Position - 0x4FF684
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 20))
	{
		return 3;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 19))
	{
		return 2;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2, 18))
	{
		return 1;
	}
	return 0;
}

int func_961(int iParam0)//Position - 0x4FF6F1
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_336.f_9;
}

int func_962(int iParam0)//Position - 0x4FF717
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_336.f_8;
}

void func_963()//Position - 0x511A33
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	switch (__LIB_0__::func_253(18987, -1))
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 1:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 2:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 3:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 4:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
		case 5:
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 17);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 18);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 19);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 20);
			MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_267.f_285.f_3), 21);
			break;
	}
}

int func_964(int iParam0)//Position - 0x51BE8A
{
	int iVar0;
	if (!__LIB_8__::func_150(iParam0) || !__LIB_13__::func_248(iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			break;
		case 0:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_965(int iParam0)//Position - 0x51CA33
{
	int iVar0;
	if (!__LIB_8__::func_150(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_12__::func_983(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_966()//Position - 0x51D5C3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_614())
	{
		if (!__LIB_21__::func_747(0) && !__LIB_21__::func_747(1))
		{
			if (Global_2725439.f_303)
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_1__::func_675())
	{
		if (__LIB_2__::func_159(1))
		{
			bVar0 = __LIB_0__::func_797();
			if (bVar0 != __LIB_0__::getMinusOneOrNull())
			{
				iVar1 = BitTest(Global_1892703[bVar0 /*599*/].f_513, 7);
				return iVar1;
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 < __LIB_2__::func_10())
			{
				if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar2), 1, 1))
				{
					if (BitTest(Global_1892703[iVar2 /*599*/].f_513, 7))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

void func_967(int iParam0)//Position - 0x52BE22
{
	if (!__LIB_0__::func_43(iParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_2__::func_910(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

int func_968(int iParam0, int iParam1)//Position - 0x530D2E
{
	struct<82> Var0;
	if (!__LIB_0__::func_43(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_14__::func_75(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_969(var uParam0)//Position - 0x5335CB
{
	__LIB_21__::func_649(*uParam0, 1);
	__LIB_26__::func_525(uParam0->f_2, 0);
	STREAMING::REQUEST_MODEL(__LIB_21__::func_623(uParam0));
}

void func_970(bool bParam0)//Position - 0x534917
{
	if (bParam0)
	{
		if (!__LIB_12__::func_394())
		{
			MISC::SET_BIT(&Global_1958691, 0);
		}
	}
	else if (__LIB_12__::func_394())
	{
		MISC::CLEAR_BIT(&Global_1958691, 0);
	}
}

int func_971(int iParam0)//Position - 0x53930E
{
	if (__LIB_21__::func_363(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
			return !Global_262145.f_21145 /* Tunable: ENABLE_INSURGENT_MODSHOP */;
		case 11:
		case 12:
		case 13:
		case 14:
			return !Global_262145.f_21144 /* Tunable: ENABLE_TECHNICAL_MODSHOP */;
		default:
	}
	return 0;
}

int func_972(bool bParam0)//Position - 0x54353B
{
	if (__LIB_12__::func_510(__LIB_5__::func_185(bParam0)))
	{
		return 1;
	}
	return 0;
}

int func_973()//Position - 0x550158
{
	int iVar0;
	iVar0 = __LIB_0__::func_253(18981, -1);
	return iVar0;
}

int func_974(int iParam0)//Position - 0x5569CE
{
	if (__LIB_0__::func_253(30509, -1) == iParam0)
	{
		return 0;
	}
	if (__LIB_0__::func_253(30510, -1) == iParam0)
	{
		return 1;
	}
	return -1;
}

int func_975(var uParam0)//Position - 0x566CFC
{
	if (BitTest(uParam0->f_1, 9))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		if (__LIB_0__::func_937(&(uParam0->f_67), 4000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 9);
			__LIB_0__::clearF_1Prop(&(uParam0->f_67));
			if (BitTest(uParam0->f_1, 29))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 29);
				HUD::USE_FAKE_MP_CASH(false);
			}
		}
		return 1;
	}
	else if (BitTest(uParam0->f_2, 0))
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		if (__LIB_0__::func_937(&(uParam0->f_67), 1000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_2), 0);
			__LIB_0__::clearF_1Prop(&(uParam0->f_67));
			if (BitTest(uParam0->f_1, 29))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 29);
				HUD::USE_FAKE_MP_CASH(false);
			}
		}
		return 1;
	}
	return 0;
}

void func_976(var uParam0)//Position - 0x5748F2
{
	char[] cVar0[8];
	if (Global_2621446.f_69 == 1)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1471))
		{
			__LIB_26__::func_520(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4()), &cVar0);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "ADD_TICKER_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("SPEC_CRWT" /* GXT: Currently Watching */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			__LIB_0__::func_700(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4())));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&cVar0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_977(bool bParam0)//Position - 0x57BDCE
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0) && PLAYER::PLAYER_ID() != bVar0) && __LIB_3__::func_136(PLAYER::PLAYER_ID(), bVar0)) && !__LIB_10__::func_774(bVar0, 1, 0))
			{
				iVar2++;
			}
			iVar1++;
		}
		return iVar2 >= 2;
	}
	return __LIB_5__::func_377(PLAYER::PLAYER_ID()) >= 2;
}

int func_978(struct<2> Param0, var uParam1)//Position - 0x57C442
{
	int iVar0;
	if (Global_4718592.f_655)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_14__::func_852())
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		if (iVar0 == joaat("taxi"))
		{
			return 0;
		}
	}
	if (__LIB_3__::func_644(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_833())
	{
		return 0;
	}
	if (__LIB_15__::func_534(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_10__::func_774(PLAYER::PLAYER_ID(), 1, 1) && !__LIB_0__::func_93())
	{
		return 0;
	}
	if (Param0.f_0 < -1724f || Param0.f_0 > 1694f)
	{
		return 0;
	}
	if (Param0.f_1 < -3330f || Param0.f_1 > 5468f)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_80(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (__LIB_4__::func_451() || __LIB_4__::func_451())
	{
		return 0;
	}
	if (__LIB_4__::func_644() || __LIB_4__::func_671())
	{
		return 0;
	}
	if (__LIB_3__::func_599())
	{
		return 0;
	}
	if (BitTest(Global_1946250.f_4, 27))
	{
		return 0;
	}
	if (__LIB_1__::func_629())
	{
		return 0;
	}
	if (BitTest(Global_1946250.f_8, 15))
	{
		return 0;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 != 99)
	{
		return 0;
	}
	if (Global_2725439)
	{
		return 0;
	}
	if (Global_1952191.f_5314)
	{
		return 0;
	}
	return 1;
}

int func_979()//Position - 0x57E602
{
	if (Global_2815059.f_6753)
	{
		return 1;
	}
	if (!__LIB_0__::func_893())
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	return 0;
}

void func_980(int iParam0)//Position - 0x59131B
{
	int iVar0;
	iVar0 = __LIB_25__::func_820(iParam0);
	if (iVar0 > -1)
	{
		MISC::CLEAR_BIT(&Global_1931403, iVar0);
	}
}

void func_981(var uParam0, var uParam1)//Position - 0x59FE76
{
	struct<4> Var0;
	bool bVar1;
	int iVar2;
	Var0.f_0 = 1980827733;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	bVar1 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__::func_834(), -1, 0);
	if (bVar1 == PLAYER::PLAYER_ID())
	{
		__LIB_25__::func_254(&Var0);
	}
	else
	{
		iVar2 = __LIB_1__::func_705(bVar1);
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar2);
	}
}

int func_982(int iParam0, int iParam1)//Position - 0x5A9C37
{
	int iVar0;
	char* sVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = -1;
	sVar1 = "";
	if (!__LIB_5__::func_834(iParam0))
	{
		iVar0 = 3;
		if (iParam1 == 12)
		{
			sVar1 = "DLC_MP_ARENA_M_OUTFIT_EPSILON_0";
		}
		else
		{
			sVar1 = "DLC_MP_ARENA_M_TEETH_0_0";
		}
	}
	else
	{
		iVar0 = 4;
		if (iParam1 == 12)
		{
			sVar1 = "DLC_MP_ARENA_F_OUTFIT_EPSILON_0";
		}
		else
		{
			sVar1 = "DLC_MP_ARENA_F_TEETH_0_0";
		}
	}
	if (iParam1 == 12)
	{
		iVar4 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2.f_0))
			{
				if (Var2.f_1 == MISC::GET_HASH_KEY(sVar1))
				{
					iVar5 = (__LIB_0__::func_28(ENTITY::GET_ENTITY_MODEL(iParam0)) + iVar3);
					return iVar5;
				}
			}
			iVar3++;
		}
	}
	else
	{
		iVar6 = __LIB_0__::func_204(ENTITY::GET_ENTITY_MODEL(iParam0), MISC::GET_HASH_KEY(sVar1), iParam1, iVar0);
		return iVar6;
	}
	return -99;
}

int func_983(int iParam0)//Position - 0x5BC14E
{
	bool bVar0;
	int iVar1;
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_2, bVar0))
		{
			iVar1++;
		}
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_3, bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

int func_984(bool bParam0)//Position - 0x5BCD34
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_2__::func_750(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_985(var uParam0)//Position - 0x5D6289
{
	int iVar0;
	iVar0 = __LIB_12__::func_568(PLAYER::PLAYER_ID());
	if (__LIB_1__::func_999())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		case 132:
			return "FM_AE_SORT_5" /* GXT: Points */;
		case 133:
			switch (__LIB_26__::func_263())
			{
				case 0:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 1:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 2:
					return "FM_AE_SORT_3" /* GXT: Speed */;
				case 3:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 4:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 5:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 6:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 7:
					return "FM_AE_SORT_13" /* GXT: Vehicles */;
				case 8:
					return "FM_AE_SORT_4" /* GXT: Misses */;
				case 9:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 10:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 11:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 12:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 13:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 14:
					return "FM_AE_SORT_5" /* GXT: Points */;
				case 15:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				case 16:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				case 17:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				case 18:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				default:
			}
			break;
		case 136:
			return "";
		case 138:
			return "";
		case 139:
			return "FM_AE_SORT_10" /* GXT: Possession Time */;
		case 140:
			return "";
		case 141:
			return "FM_AE_SORT_5" /* GXT: Points */;
		case 144:
			return "FM_AE_SORT_1" /* GXT: Destruction Value */;
		case 129:
			return "FM_AE_SORT_9" /* GXT: Kills */;
	}
	return "";
}

char* func_986(var uParam0)//Position - 0x5D6458
{
	int iVar0;
	iVar0 = __LIB_12__::func_568(PLAYER::PLAYER_ID());
	if (__LIB_1__::func_999())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9" /* GXT: Moving Target */;
		case 132:
			if (__LIB_26__::func_264() == 0)
			{
				return "CPC_TILEL" /* GXT: Checkpoints */;
			}
			else if (__LIB_26__::func_264() == 1)
			{
				return "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			return "PIM_TA0" /* GXT: Checkpoints */;
			break;
		case 133:
			switch (__LIB_26__::func_263())
			{
				case 0:
					return "AMCH_0SLC" /* GXT: Longest Jump */;
				case 1:
					return "AMCH_1SLC" /* GXT: Longest Freefall */;
				case 2:
					return "AMCH_2SLC" /* GXT: Highest Speed */;
				case 3:
					return "AMCH_3SLC" /* GXT: Longest Stoppie */;
				case 4:
					return "AMCH_4SLC" /* GXT: Longest Wheelie */;
				case 5:
					return "AMCH_5SLC" /* GXT: No Crashes */;
				case 6:
					return "AMCH_6SLC" /* GXT: Lowest Parachute */;
				case 7:
					return "AMCH_7SLC" /* GXT: Vehicles Stolen */;
				case 8:
					return "AMCH_8SLC" /* GXT: Near Misses */;
				case 9:
					return "AMCH_12SLC" /* GXT: Reverse Driving */;
				case 10:
					return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
				case 11:
					return "AMCH_15SLC" /* GXT: Low Flying */;
				case 12:
					return "AMCH_16SLC" /* GXT: Inverted Flying */;
				case 13:
					return "AMCH_23SLC" /* GXT: Longest Bail */;
				case 14:
					return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
				case 15:
					return "AMCH_19SLC" /* GXT: Headshot Kills */;
				case 16:
					return "AMCH_20SLC" /* GXT: Driveby */;
				case 17:
					return "AMCH_21SLC" /* GXT: Melee */;
				case 18:
					return "AMCH_22SLC" /* GXT: Sniper Kills */;
				default:
			}
			break;
		case 136:
			return "PIM_TA10" /* GXT: Penned In */;
		case 138:
			return "PIM_TA4" /* GXT: Hold the Wheel */;
		case 139:
			return "PIM_TA5" /* GXT: Hot Property */;
		case 140:
			return "PIM_TA3" /* GXT: Dead Drop */;
		case 141:
			return "PIM_TA8" /* GXT: King of the Castle */;
		case 144:
			return "PIM_TA2" /* GXT: Criminal Damage */;
		case 129:
			if (__LIB_2__::func_0() == 1)
			{
				return "FM_AE_TITL_12" /* GXT: Kill List Competitive */;
			}
			else
			{
				return "PIM_TA7" /* GXT: Kill List */;
			}
			break;
		case 146:
			return "PIM_TA6" /* GXT: Hunt the Beast */;
	}
	return "";
}

int func_987(int iParam0)//Position - 0x5DB713
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 10)
	{
		if (__LIB_1__::func_394())
		{
			return Global_262145.f_29944[iVar0];
		}
		else
		{
			return Global_262145.f_29933[iVar0];
		}
	}
	return -1;
}

void func_988(int iParam0)//Position - 0x5DF0E1
{
	struct<2> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_1 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_6__::func_530(PLAYER::PLAYER_ID()))
			{
				__LIB_12__::func_298();
			}
		}
	}
}

void func_989(int iParam0)//Position - 0x5DF12B
{
	int iVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 3))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_6__::func_530(PLAYER::PLAYER_ID()))
			{
				__LIB_12__::func_298();
			}
		}
	}
}

void func_990(int iParam0)//Position - 0x5DF234
{
	struct<16> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 29))
	{
		if (Global_2815059.f_197 < 5)
		{
			if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_16)) != __LIB_0__::getMinusOneOrNull())
			{
				Global_2815059.f_111[Global_2815059.f_197 /*17*/] = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_16));
				Global_2815059.f_111[Global_2815059.f_197 /*17*/].f_1 = { Var0 };
				Global_2815059.f_197++;
			}
		}
	}
}

void func_991()//Position - 0x5E01EC
{
	int iVar0;
	int iVar1;
	__LIB_18__::func_327();
	if (SOCIALCLUB::SC_COMMUNITY_EVENT_IS_ACTIVE() && !__LIB_12__::func_696())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = SOCIALCLUB::SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(__LIB_18__::func_578(iVar0));
			if (iVar1 > 0)
			{
				Global_1931618.f_16[iVar0 /*44*/] = iVar1;
				__LIB_27__::func_324(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1931618.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_992(int iParam0)//Position - 0x5E0611
{
	struct<2> Var0;
	if (!__LIB_1__::func_85())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		if (Global_2703735.f_957 == 0)
		{
			Global_2703735.f_957++;
			Global_2703735.f_957.f_1 = { Var0.f_1 };
		}
	}
}

void func_993(int iParam0, bool bParam1)//Position - 0x5E3C58
{
	int iVar0;
	iVar0 = __LIB_27__::func_330(iParam0);
	if (bParam1)
	{
		if (!__LIB_25__::func_318(iVar0))
		{
			__LIB_27__::func_329(iParam0);
			return;
		}
	}
	else
	{
		__LIB_27__::func_328(iParam0);
	}
}

void func_994()//Position - 0x5E5C77
{
	Global_1888177++;
	__LIB_2__::func_338();
}

int func_995(int iParam0)//Position - 0x5E5CF9
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 22);
}

void func_996()//Position - 0x5E5D1B
{
	if (!__LIB_0__::func_137(150, -1))
	{
		__LIB_0__::func_186(150, 1, -1);
	}
}

void func_997(int iParam0)//Position - 0x5E5FFA
{
	if (__LIB_27__::func_626(iParam0))
	{
		__LIB_1__::func_69(__LIB_25__::func_322(iParam0), 0);
		MISC::SET_BIT(&Global_1940652, __LIB_27__::func_331(iParam0));
	}
}

void func_998(int iParam0, bool bParam1)//Position - 0x5E6DE3
{
	if (bParam1)
	{
		STATS::PLAYSTATS_MC_KILLED_RIVAL_MC_MEMBER(__LIB_7__::func_919(__LIB_0__::func_797()), __LIB_7__::func_918(__LIB_0__::func_797()), __LIB_2__::func_476(), __LIB_2__::func_475(), iParam0);
	}
}

int func_999(int iParam0)//Position - 0x5E6FA7
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != __LIB_0__::getMinusOneOrNull() && iParam0 != PLAYER::PLAYER_ID())
		{
			if (Global_1945749[iParam0 /*5*/].f_4 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}
