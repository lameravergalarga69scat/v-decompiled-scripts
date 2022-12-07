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
	int iLocal_20[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_21[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_22[76] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_23[102] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_24[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_25 = 0;
	bool bLocal_26 = 0;
	int iLocal_27[1] = { 0 };
	int iLocal_28 = 0;
	int iLocal_29[1] = { 0 };
	int iLocal_30 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_40();
	}
	func_24();
	while (true)
	{
		if (__LIB_0__::func_39(13) || __LIB_0__::func_39(14))
		{
			if (bLocal_26)
			{
				func_15();
			}
		}
		else if (!bLocal_26)
		{
			func_24();
		}
		func_14();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x87
{
	if (!iLocal_25)
	{
		if (__LIB_0__::func_368(75))
		{
			func_10();
			iLocal_25 = 1;
		}
	}
	if (!iLocal_28)
	{
		if (__LIB_0__::func_368(75))
		{
			if (__LIB_0__::func_116())
			{
				func_6();
				iLocal_28 = 1;
			}
		}
	}
	if (!iLocal_30)
	{
		if (__LIB_0__::func_176(62))
		{
			if (__LIB_0__::func_116())
			{
				func_2();
				iLocal_30 = 1;
			}
		}
	}
}

void func_2()//Position - 0xE5
{
	if (__LIB_0__::func_116())
	{
		func_3(0, joaat("PICKUP_WEAPON_HATCHET"), 156.24f, 0f, 71.2f, 1, 1);
	}
}

void func_3(int iParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4)//Position - 0x10B
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	if (bParam4)
	{
		MISC::SET_BIT(&iVar0, 4);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_29[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(iParam1, func_4(iParam0), Param2, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_29[iParam0], 600000);
}

Vector3 func_4(int iParam0)//Position - 0x168
{
	switch (iParam0)
	{
		case 0:
			return -35.64201f, 2871.7441f, 58.61521f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_6()//Position - 0x1C1
{
	if (__LIB_0__::func_116())
	{
		func_7(0, joaat("PICKUP_WEAPON_RAILGUN"), 156.24f, 0f, 166.2f, 1, 1);
	}
}

void func_7(int iParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4)//Position - 0x1E7
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	if (bParam4)
	{
		MISC::SET_BIT(&iVar0, 4);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_27[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(iParam1, func_8(iParam0), Param2, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_27[iParam0], 600000);
}

Vector3 func_8(int iParam0)//Position - 0x244
{
	switch (iParam0)
	{
		case 0:
			return 299.41788f, 3942.4434f, -3.18848f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_10()//Position - 0x329
{
	func_11(0, joaat("PICKUP_WEAPON_GRENADELAUNCHER"), 156.24f, 0f, 25.2f, 1, 1);
	func_11(1, joaat("PICKUP_WEAPON_RPG"), -92.68f, 62.64f, -264.24f, 1, 1);
	func_11(2, joaat("PICKUP_WEAPON_COMBATMG"), -70f, 0f, -40f, 1, 1);
	func_11(3, joaat("PICKUP_ARMOUR_STANDARD"), -71f, 0f, 168.48f, 1, 1);
	func_11(4, joaat("PICKUP_WEAPON_APPISTOL"), -100.8f, 92.8f, 0f, 1, 1);
	func_11(5, joaat("PICKUP_WEAPON_PUMPSHOTGUN"), 77.76f, 10.08f, -17.28f, 1, 1);
	func_11(6, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 97.92f, 0f, 100.8f, 1, 1);
	func_11(7, joaat("PICKUP_WEAPON_STICKYBOMB"), 0f, 0f, 0f, 1, 1);
	func_11(8, joaat("PICKUP_WEAPON_STICKYBOMB"), 0f, 0f, 0f, 1, 1);
}

void func_11(int iParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4)//Position - 0x3F9
{
	int iVar0;
	iVar0 = 0;
	if (iParam1 == joaat("PICKUP_ARMOUR_STANDARD"))
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&iVar0, 4);
		MISC::SET_BIT(&iVar0, 1);
		if (bParam3)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&iVar0, 1);
		if (bParam4)
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		if (bParam3)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	iLocal_24[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(iParam1, func_12(iParam0), Param2, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_24[iParam0], 600000);
}

Vector3 func_12(int iParam0)//Position - 0x484
{
	switch (iParam0)
	{
		case 0:
			return 346.89f, 3999.51f, -6.4f;
			break;
		case 1:
			return 303.8f, 3949.8f, -5.19f;
			break;
		case 2:
			return 308.5f, 3972.7f, -8.16f;
			break;
		case 3:
			return 295.2f, 3961f, -7.74f;
			break;
		case 4:
			return 293f, 3969.6f, -9.21f;
			break;
		case 5:
			return 289.23f, 3955.22f, -6.54f;
			break;
		case 6:
			return 302.19f, 3983.12f, -11.02f;
			break;
		case 7:
			return 282.4f, 3966.9f, -7.63f;
			break;
		case 8:
			return 317.8f, 3968.13f, -10.11f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_14()//Position - 0x5B6
{
	switch (Global_32203)
	{
		case 0:
			break;
		case 1:
			switch (Global_32204)
			{
				case 0:
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_20[Global_32205]) && OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_20[Global_32205]))
					{
						Global_32206 = 0;
					}
					else
					{
						Global_32206 = 1;
					}
					break;
				case 1:
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_22[Global_32205]) && OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_22[Global_32205]))
					{
						Global_32206 = 0;
					}
					else
					{
						Global_32206 = 1;
					}
					break;
				case 2:
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_23[Global_32205]) && OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_23[Global_32205]))
					{
						Global_32206 = 0;
					}
					else
					{
						Global_32206 = 1;
					}
					break;
				case 3:
					Global_32203 = 3;
					break;
			}
			Global_32203 = 2;
			break;
		case 2:
			break;
		case 3:
			Global_32205 = 0;
			Global_32206 = 0;
			Global_32203 = 0;
			break;
	}
}

void func_15()//Position - 0x6A5
{
	func_22();
	func_21();
	func_20();
	func_19();
	if (iLocal_25)
	{
		func_18();
	}
	if (iLocal_28)
	{
		func_17();
	}
	if (iLocal_30)
	{
		func_16();
	}
	bLocal_26 = false;
}

void func_16()//Position - 0x6DF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_29[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_29[iVar0]);
		}
		iVar0++;
	}
	iLocal_30 = 0;
}

void func_17()//Position - 0x716
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_27[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_27[iVar0]);
		}
		iVar0++;
	}
	iLocal_28 = 0;
}

void func_18()//Position - 0x74D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_24[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_24[iVar0]);
		}
		iVar0++;
	}
	iLocal_25 = 0;
}

void func_19()//Position - 0x785
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_23[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_23[iVar0]);
		}
		iVar0++;
	}
}

void func_20()//Position - 0x7B7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 76)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_22[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_22[iVar0]);
		}
		iVar0++;
	}
}

void func_21()//Position - 0x7E9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_21[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_21[iVar0]);
		}
		iVar0++;
	}
}

void func_22()//Position - 0x81B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 45)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_20[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_20[iVar0]);
		}
		iVar0++;
	}
}

void func_24()//Position - 0x85B
{
	func_36();
	func_33();
	func_29();
	func_25();
	bLocal_26 = true;
}

void func_25()//Position - 0x877
{
	func_26(0, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 90f, 0f, 70f, 0, 0, 1);
	func_26(1, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 90f, 0f, 0f, 0, 0, 1);
	func_26(2, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(3, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(4, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(5, joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(6, joaat("PICKUP_WEAPON_GRENADE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(7, joaat("PICKUP_WEAPON_GRENADE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(8, joaat("PICKUP_WEAPON_GRENADE"), 95f, 0f, 0f, 0, 0, 1);
	func_26(9, joaat("PICKUP_WEAPON_GRENADE"), 0f, 0f, 0f, 1, 0, 1);
	func_26(10, joaat("PICKUP_WEAPON_GRENADELAUNCHER"), 0f, 0f, 0f, 1, 0, 1);
	func_26(11, joaat("PICKUP_WEAPON_GRENADELAUNCHER"), 118f, 0f, 92f, 0, 0, 0);
	func_26(12, joaat("PICKUP_WEAPON_GRENADELAUNCHER"), 82f, -60f, 0f, 0, 0, 0);
	func_26(13, joaat("PICKUP_WEAPON_MINIGUN"), 0f, 0f, 0f, 1, 1, 1);
	func_26(14, joaat("PICKUP_WEAPON_MG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(15, joaat("PICKUP_WEAPON_MG"), 97.92f, 60.48f, 0f, 0, 0, 1);
	func_26(16, joaat("PICKUP_WEAPON_MG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(17, joaat("PICKUP_WEAPON_MG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(18, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(19, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(20, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(21, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(22, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(23, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(24, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(25, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(26, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 0f, 1, 0, 1);
	func_26(27, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 36f, 1, 0, 1);
	func_26(28, joaat("PICKUP_WEAPON_RPG"), 86f, 0f, 0f, 1, 0, 1);
	func_26(29, joaat("PICKUP_WEAPON_RPG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(30, joaat("PICKUP_WEAPON_RPG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(31, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), -82f, 0f, 0f, 0, 0, 1);
	func_26(32, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 0f, 0f, 24f, 1, 0, 1);
	func_26(33, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 0f, 0f, 12f, 1, 0, 1);
	func_26(34, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 0f, 0f, 98f, 1, 0, 1);
	func_26(35, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 90f, 0f, 140f, 1, 0, 1);
	func_26(36, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 90f, 0f, 120f, 0, 0, 1);
	func_26(37, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(38, joaat("PICKUP_WEAPON_SMG"), 85.68f, -92.88f, 0f, 0, 0, 1);
	func_26(39, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(40, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 20f, 1, 0, 1);
	func_26(41, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 0f, 1, 0, 1);
	func_26(42, joaat("PICKUP_WEAPON_SMG"), 0f, 0f, 0f, 1, 1, 1);
	func_26(43, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 42f, 1, 0, 1);
	func_26(44, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 52f, 1, 0, 1);
	func_26(45, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 90f, 0f, 87f, 1, 0, 1);
	func_26(46, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 98f, 1, 0, 1);
	func_26(47, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 20f, 1, 0, 1);
	func_26(48, joaat("PICKUP_WEAPON_STICKYBOMB"), 0f, 0f, 0f, 1, 0, 1);
	func_26(49, joaat("PICKUP_WEAPON_STICKYBOMB"), 0f, 0f, 0f, 1, 0, 1);
	func_26(50, joaat("PICKUP_WEAPON_RPG"), 63f, 0f, 0f, 0, 0, 1);
	func_26(51, joaat("PICKUP_WEAPON_PISTOL"), 0f, 0f, 4f, 1, 0, 1);
	func_26(52, joaat("PICKUP_WEAPON_PISTOL"), 90f, 90f, 90f, 0, 0, 0);
	func_26(53, joaat("PICKUP_WEAPON_SNIPERRIFLE"), 0f, 0f, 2f, 1, 0, 1);
	func_26(54, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 0f, 0f, 0f, 1, 0, 1);
	func_26(55, joaat("PICKUP_WEAPON_BAT"), 90f, 0f, 4f, 1, 0, 1);
	func_26(56, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(57, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(58, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(59, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(60, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(61, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 1, 1);
	func_26(62, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(63, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(64, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 1, 1);
	func_26(65, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(66, joaat("PICKUP_WEAPON_CROWBAR"), 90f, 0f, 45f, 0, 0, 1);
	func_26(67, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(68, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(69, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(70, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(71, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(72, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(73, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(74, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(75, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(76, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(77, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(78, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(79, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(80, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(81, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(82, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(83, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(84, joaat("PICKUP_WEAPON_MOLOTOV"), 0f, 0f, 0f, 1, 0, 1);
	func_26(85, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(86, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(87, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(88, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(89, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(90, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(91, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(92, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(93, joaat("PICKUP_WEAPON_BAT"), 0f, 0f, 0f, 1, 0, 1);
	func_26(94, joaat("PICKUP_WEAPON_CROWBAR"), 0f, 0f, 0f, 1, 0, 1);
	func_26(95, joaat("PICKUP_WEAPON_CARBINERIFLE"), 0f, 0f, 87f, 1, 0, 1);
	func_26(96, joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"), 0f, 0f, 0f, 1, 1, 1);
	func_26(97, joaat("PICKUP_WEAPON_ASSAULTSHOTGUN"), 85.7f, 0f, 136f, 0, 0, 0);
	func_26(98, joaat("PICKUP_PARACHUTE"), 10f, 0f, -90f, 0, 0, 0);
	func_26(99, joaat("PICKUP_WEAPON_PUMPSHOTGUN"), -88f, 0f, 0f, 0, 0, 0);
	func_26(100, joaat("PICKUP_PARACHUTE"), 11f, 0f, 28.16f, 0, 0, 0);
	func_26(101, joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 92.8f, 0f, 50.4f, 0, 0, 0);
}

void func_26(int iParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xFF5
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	if (bParam5)
	{
		MISC::SET_BIT(&iVar0, 4);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_23[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(iParam1, __LIB_30__::func_615(iParam0, 0), Param2, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_23[iParam0], 600000);
	if (bParam4)
	{
		INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_23[iParam0], func_27(iParam0));
	}
}

char* func_27(int iParam0)//Position - 0x1066
{
	switch (iParam0)
	{
		case 13:
			return "V_25_ObsvDckRm";
			break;
		case 42:
			return "GtaMloRoom002";
			break;
		case 31:
			return "V_70_GamesRm";
			break;
		case 61:
			return "V_68_BackRm";
			break;
		case 64:
			return "V_51_StoreRm";
			break;
		case 96:
			return "GtaMloRoomTun2";
			break;
		default:
			return "";
			break;
	}
	return "";
}

void func_29()//Position - 0x2017
{
	func_30(0, 0f, 0f, 0f, 0, 0);
	func_30(1, 0f, 0f, 24f, 0, 0);
	func_30(2, 0f, 0f, 60f, 1, 1);
	func_30(3, 0f, 0f, 45f, 0, 0);
	func_30(4, 0f, 0f, 55f, 1, 0);
	func_30(5, 0f, 0f, 0f, 0, 0);
	func_30(6, 0f, 0f, 0f, 0, 0);
	func_30(7, 0f, 0f, 0f, 0, 0);
	func_30(8, 0f, 0f, 90f, 1, 1);
	func_30(9, 0f, 0f, 0f, 0, 0);
	func_30(10, 0f, 0f, -112f, 0, 0);
	func_30(11, 0f, 0f, 0f, 0, 0);
	func_30(12, 0f, 0f, 0f, 0, 0);
	func_30(13, 0f, 0f, 0f, 0, 0);
	func_30(14, 0f, 0f, 0f, 0, 0);
	func_30(15, 0f, 0f, 35f, 0, 0);
	func_30(16, 0f, 0f, 13f, 0, 0);
	func_30(17, 0f, 0f, 0f, 0, 1);
	func_30(18, 0f, 0f, -64f, 1, 0);
	func_30(19, 0f, 0f, 0f, 0, 0);
	func_30(20, 0f, 0f, -62.4f, 1, 0);
	func_30(21, 0f, 0f, 0f, 0, 0);
	func_30(22, 0f, 0f, 0f, 0, 0);
	func_30(23, 0f, 0f, 0f, 0, 0);
	func_30(24, 0f, 0f, 95f, 0, 0);
	func_30(25, 0f, 0f, 0f, 0, 0);
	func_30(26, 0f, 0f, -15f, 1, 0);
	func_30(27, 0f, 0f, 0f, 0, 0);
	func_30(28, 0f, 0f, -5f, 0, 0);
	func_30(29, 5f, 0f, -45f, 0, 0);
	func_30(30, 0f, 0f, 0f, 0, 0);
	func_30(31, 6f, 0f, 51f, 0, 0);
	func_30(32, 0f, 0f, -28f, 0, 0);
	func_30(33, 0f, 0f, 33f, 0, 0);
	func_30(34, 0f, 0f, 0f, 0, 0);
	func_30(35, 0f, 0f, 0f, 0, 0);
	func_30(36, 5f, 0f, 30.2f, 1, 0);
	func_30(37, 0f, 0f, 0f, 1, 0);
	func_30(38, 0f, 0f, 70.5f, 1, 1);
	func_30(39, 0f, 0f, 70f, 1, 0);
	func_30(40, 0f, 0f, 45f, 0, 0);
	func_30(41, 0f, 0f, -7f, 1, 0);
	func_30(42, 0f, 0f, -13f, 1, 0);
	func_30(43, 0f, 0f, 44.4f, 1, 0);
	func_30(44, 0f, 0f, 35f, 0, 0);
	func_30(45, 0f, 0f, 89.8f, 1, 0);
	func_30(46, 0f, 0f, -166f, 0, 0);
	func_30(47, 0f, 0f, 0f, 0, 0);
	func_30(48, 0f, 0f, 0f, 0, 1);
	func_30(49, 0f, 2f, 90f, 1, 0);
	func_30(50, 0f, 0f, 34f, 0, 0);
	func_30(51, 0f, 0f, 59f, 1, 1);
	func_30(52, 0f, 0f, 5f, 0, 0);
	func_30(53, 0f, 0f, 70f, 0, 0);
	func_30(54, 0f, 0f, 104f, 0, 0);
	func_30(55, 0f, 0f, -85f, 0, 0);
	func_30(56, 0f, 0f, 32f, 0, 0);
	func_30(57, 0f, 0f, 38f, 1, 0);
	func_30(58, 0f, 0f, 100f, 0, 1);
	func_30(59, 0f, 0f, 70f, 1, 0);
	func_30(60, 0f, 0f, 69.7f, 1, 0);
	func_30(61, 0f, 0f, 100f, 0, 0);
	func_30(62, 0f, 20.1f, 52.5f, 1, 0);
	func_30(63, 0f, 0f, 339f, 1, 1);
	func_30(64, 0f, 0f, 61f, 0, 0);
	func_30(65, 0f, 0f, 284f, 1, 1);
	func_30(66, 0f, 0f, -20f, 1, 0);
	func_30(67, 6f, 0f, 0f, 1, 0);
	func_30(68, 6f, 0f, -215f, 1, 0);
	func_30(69, -6f, 0f, -40f, 1, 0);
	func_30(70, 6f, 0f, 140f, 1, 0);
	func_30(71, 6f, 0f, -110f, 1, 0);
	func_30(72, -6f, 0f, -110f, 1, 0);
	func_30(73, 6f, 0f, -7f, 1, 0);
	func_30(74, 6f, 0f, 173f, 1, 0);
	func_30(75, 0f, 0f, 23.3f, 1, 0);
}

void func_30(int iParam0, struct<3> Param1, bool bParam2, bool bParam3)//Position - 0x2437
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 8);
	MISC::SET_BIT(&iVar0, 4);
	if (!bParam2)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_22[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), __LIB_30__::func_616(iParam0, 0), Param1, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_22[iParam0], 600000);
	if (bParam3)
	{
		INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_22[iParam0], func_31(iParam0));
	}
}

char* func_31(int iParam0)//Position - 0x24AF
{
	switch (iParam0)
	{
		case 2:
			return "V_25_ControlRm";
			break;
		case 8:
			return "FireDeptRoom";
			break;
		case 15:
			return "Inside Dam";
			break;
		case 17:
			return "V_CarModRoom";
			break;
		case 20:
			return "V_70_Toilet";
			break;
		case 38:
			return "rm_garage";
			break;
		case 48:
			return "GtaMloRoom001";
			break;
		case 51:
			return "v_refit";
			break;
		case 58:
			return "V_39_ShopRm";
			break;
		case 63:
			return "V_FIB03_atr_off1";
			break;
		case 65:
			return "GtaMloRoomTun2";
			break;
		case 67:
			return "V_34_ProcessRm";
			break;
		case 68:
			return "V_34_Ent_office";
			break;
		case 69:
			return "V_34_WareRm";
			break;
		default:
			return "";
			break;
	}
	return "";
}

void func_33()//Position - 0x3374
{
	func_34(0, 0f, 0f, 0f, 1);
	func_34(1, 0f, 0f, 0f, 1);
	func_34(2, 0f, 0f, 0f, 1);
	func_34(3, 0f, 0f, 0f, 1);
	func_34(4, 0f, 0f, 0f, 1);
	func_34(5, 0f, 0f, 0f, 1);
	func_34(6, 0f, 0f, 0f, 1);
	func_34(7, 0f, 0f, 0f, 1);
	func_34(8, 0f, 0f, 0f, 1);
	func_34(9, 0f, 0f, 0f, 1);
	func_34(10, 0f, 0f, 0f, 1);
	func_34(11, 0f, 0f, 0f, 1);
	func_34(12, 0f, 0f, 0f, 1);
	func_34(13, 0f, 0f, 0f, 1);
	func_34(14, 0f, 0f, 0f, 1);
	func_34(15, 0f, 0f, 0f, 1);
	func_34(16, 0f, 0f, 0f, 1);
	func_34(17, 0f, 0f, 0f, 1);
	func_34(18, 0f, 0f, 0f, 1);
}

void func_34(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x3432
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 8);
	if (bParam2)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_21[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PETROLCAN"), func_35(iParam0), Param1, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_21[iParam0], 600000);
}

Vector3 func_35(int iParam0)//Position - 0x3493
{
	switch (iParam0)
	{
		case 0:
			return 818.7551f, -1027.4293f, 25.4043f;
			break;
		case 1:
			return -1804.5659f, 794.3649f, 137.6856f;
			break;
		case 2:
			return 264.9156f, 2606.0127f, 43.8688f;
			break;
		case 3:
			return 1183.3037f, -330.2197f, 68.1744f;
			break;
		case 4:
			return 289.336f, -1272.1393f, 28.4408f;
			break;
		case 5:
			return -723.6323f, -936.4893f, 18.2141f;
			break;
		case 6:
			return -70.3154f, -1760.2888f, 28.539f;
			break;
		case 7:
			return 157.897f, -1562.516f, 28.2619f;
			break;
		case 8:
			return 172.5852f, 6601.821f, 30.8682f;
			break;
		case 9:
			return 1195.6464f, -1396.0403f, 34.2207f;
			break;
		case 10:
			return -1437.5946f, -282.2951f, 45.3922f;
			break;
		case 11:
			return -2073.7073f, -322.7324f, 12.3162f;
			break;
		case 12:
			return -2558.8562f, 2333.5364f, 32.2575f;
			break;
		case 13:
			return 1691.2345f, 4928.9194f, 41.2317f;
			break;
		case 14:
			return 43.4899f, 2773.5117f, 56.8786f;
			break;
		case 15:
			return 1042.862f, 2667.4263f, 38.7f;
			break;
		case 16:
			return 2668.9294f, 3260.676f, 54.2403f;
			break;
		case 17:
			return 2002.7366f, 3772.7563f, 31.4059f;
			break;
		case 18:
			return 1703.254f, 6415.81f, 31.7642f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_36()//Position - 0x36A6
{
	func_37(0, 0f, 0f, 6f, 1, 0, 0);
	func_37(1, 0f, 0f, 78f, 1, 0, 0);
	func_37(2, 90f, 0f, 2f, 1, 0, 0);
	func_37(3, 0f, 0f, 330f, 1, 0, 0);
	func_37(4, 0f, 0f, 0f, 1, 0, 0);
	func_37(5, 0f, 0f, 0f, 1, 0, 0);
	func_37(6, 0f, 0f, 6f, 1, 0, 0);
	func_37(7, 0f, 0f, 0f, 1, 0, 0);
	func_37(8, 90f, 0f, 0f, 0, 0, 0);
	func_37(9, 0f, 0f, 46f, 1, 0, 0);
	func_37(10, 90f, 0f, 9f, 1, 0, 0);
	func_37(11, -83.56f, 0f, 0f, 0, 0, 0);
	func_37(12, -102.96f, 0f, 0f, 0, 0, 0);
	func_37(13, 0f, 0f, 0f, 1, 0, 0);
	func_37(14, 0f, 0f, 0f, 1, 0, 0);
	func_37(15, 0f, 0f, 78f, 1, 0, 0);
	func_37(16, -90f, 0f, 145.4f, 0, 0, 0);
	func_37(17, 0f, 0f, 0f, 1, 0, 0);
	func_37(18, 0f, 0f, 42f, 1, 0, 0);
	func_37(19, 0f, 0f, 0f, 1, 0, 0);
	func_37(20, 0f, 0f, 0f, 1, 0, 0);
	func_37(21, 0f, 0f, 0f, 1, 0, 0);
	func_37(22, 0f, 0f, 3f, 1, 0, 0);
	func_37(23, 0f, 0f, 0f, 1, 0, 0);
	func_37(24, 0f, 0f, 0f, 1, 0, 0);
	func_37(25, 5f, 0f, -146f, 1, 0, 0);
	func_37(26, 0f, 0f, 108f, 1, 0, 0);
	func_37(27, 0f, 0f, 130f, 1, 0, 0);
	func_37(28, -90f, 0f, -180f, 0, 1, 0);
	func_37(29, 0f, 0f, 14f, 1, 0, 0);
	func_37(30, 0f, 0f, 0f, 1, 0, 0);
	func_37(31, 0f, 0f, 0f, 1, 0, 0);
	func_37(32, 0f, 0f, 5f, 1, 0, 0);
	func_37(33, 0f, 0f, 72f, 1, 0, 0);
	func_37(34, 0f, 0f, 27f, 1, 0, 0);
	func_37(35, 0f, 0f, 7f, 1, 0, 0);
	func_37(36, 0f, 0f, 7f, 1, 0, 0);
	func_37(37, 0f, 0f, 7f, 1, 0, 0);
	func_37(38, 0f, 0f, 7f, 1, 0, 0);
	func_37(39, -90f, 0f, -20f, 0, 1, 0);
	func_37(40, -90f, 0f, 0f, 0, 0, 0);
	func_37(41, 0f, 0f, 7f, 1, 1, 0);
	func_37(42, 0f, 0f, 7f, 1, 0, 0);
	func_37(43, -92f, 0f, -18f, 0, 0, 0);
	func_37(44, 90f, 0f, -108f, 0, 0, 0);
}

void func_37(int iParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3932
{
	int iVar0;
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 1);
	if (bParam4)
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	iLocal_20[iParam0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_ARMOUR_STANDARD"), __LIB_30__::func_617(iParam0, 0), Param1, iVar0, -1, 2, true, 0);
	OBJECT::SET_PICKUP_REGENERATION_TIME(iLocal_20[iParam0], 600000);
	if (bParam3)
	{
		INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_20[iParam0], func_38(iParam0));
	}
}

char* func_38(int iParam0)//Position - 0x39AE
{
	switch (iParam0)
	{
		case 28:
			return "PH_LOBBY_ROOM";
			break;
		case 39:
			return "V_FIB03_atr_off2";
			break;
		case 41:
			return "GtaMloRoomTun2";
			break;
		default:
			return "";
			break;
	}
	return "";
}

void func_40()//Position - 0x4189
{
	func_22();
	func_21();
	func_20();
	func_19();
	if (iLocal_25)
	{
		func_18();
	}
	if (iLocal_28)
	{
		func_17();
	}
	if (iLocal_30)
	{
		func_16();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

