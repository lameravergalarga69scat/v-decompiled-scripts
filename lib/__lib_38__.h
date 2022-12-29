void func_0()//Position - 0x9C70B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = 0;
		while (iVar1 < Global_41748[iVar0 /*31*/].f_24)
		{
			Global_41748[iVar0 /*31*/].f_25[iVar1] = 0;
			iVar1++;
		}
		Global_41748[iVar0 /*31*/].f_24 = 0;
		iVar0++;
	}
}

void func_1()//Position - 0xA099A
{
	Global_95690 = 0;
	Global_95690 = (Global_95690 + __LIB_0__::func_752(joaat("SP0_DIED_IN_DROWNING")));
	Global_95690 = (Global_95690 + __LIB_0__::func_752(joaat("SP1_DIED_IN_DROWNING")));
	Global_95690 = (Global_95690 + __LIB_0__::func_752(joaat("SP2_DIED_IN_DROWNING")));
	Global_95690 = (Global_95690 + __LIB_0__::func_752(joaat("SP0_DIED_IN_DROWNINGINVEHICLE")));
	Global_95690 = (Global_95690 + __LIB_0__::func_752(joaat("SP1_DIED_IN_DROWNINGINVEHICLE")));
	Global_95690 = (Global_95690 + __LIB_0__::func_752(joaat("SP2_DIED_IN_DROWNINGINVEHICLE")));
	Global_95691 = 0;
	Global_95691 = (Global_95691 + __LIB_0__::func_752(joaat("SP0_DIED_IN_EXPLOSION")));
	Global_95691 = (Global_95691 + __LIB_0__::func_752(joaat("SP0_DIED_IN_EXPLOSION")));
	Global_95691 = (Global_95691 + __LIB_0__::func_752(joaat("SP0_DIED_IN_EXPLOSION")));
	Global_95692 = 0;
	Global_95692 = (Global_95692 + __LIB_0__::func_752(joaat("SP0_DIED_IN_FALL")));
	Global_95692 = (Global_95692 + __LIB_0__::func_752(joaat("SP0_DIED_IN_FALL")));
	Global_95692 = (Global_95692 + __LIB_0__::func_752(joaat("SP0_DIED_IN_FALL")));
	Global_95693 = 0;
	Global_95693 = (Global_95693 + __LIB_0__::func_752(joaat("SP0_DIED_IN_FIRE")));
	Global_95693 = (Global_95693 + __LIB_0__::func_752(joaat("SP0_DIED_IN_FIRE")));
	Global_95693 = (Global_95693 + __LIB_0__::func_752(joaat("SP0_DIED_IN_FIRE")));
	Global_95694 = 0;
	Global_95694 = (Global_95694 + __LIB_0__::func_752(joaat("SP0_DIED_IN_ROAD")));
	Global_95694 = (Global_95694 + __LIB_0__::func_752(joaat("SP0_DIED_IN_ROAD")));
	Global_95694 = (Global_95694 + __LIB_0__::func_752(joaat("SP0_DIED_IN_ROAD")));
	Global_95695 = 0;
	Global_95695 = (Global_95695 + __LIB_0__::func_752(joaat("SP0_DIED_IN_MISSION")));
	Global_95695 = (Global_95695 + __LIB_0__::func_752(joaat("SP0_DIED_IN_MISSION")));
	Global_95695 = (Global_95695 + __LIB_0__::func_752(joaat("SP0_DIED_IN_MISSION")));
}

void func_2()//Position - 0xA0C39
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
		{
			MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 0);
			MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 15);
			MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
		}
		iVar0++;
	}
}

void func_3(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA1171
{
	Global_96316[iParam0 /*5*/].f_4 = iParam1;
	Global_96316[iParam0 /*5*/].f_2 = iParam2;
	Global_96316[iParam0 /*5*/].f_3 = iParam3;
}

void func_4(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA119D
{
	Global_96316[iParam0 /*5*/] = iParam1;
	Global_96316[iParam0 /*5*/].f_1 = iParam2;
	if (bParam3)
	{
		MISC::SET_BIT(&(Global_113386.f_1.f_116), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_116), iParam0);
	}
	MISC::CLEAR_BIT(&(Global_113386.f_1.f_118), iParam0);
}

void func_5()//Position - 0xA12F7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 235)
	{
		Global_113386.f_8613[iVar0] = 0;
		Global_113386.f_8613.f_236[iVar0] = -1;
		iVar0++;
	}
}

void func_6()//Position - 0xA137A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		Global_113386.f_14141[iVar0 /*104*/].f_24 = 0;
		Global_113386.f_14141[iVar0 /*104*/].f_28 = 0;
		Global_113386.f_14141[iVar0 /*104*/].f_99[0] = 0;
		Global_113386.f_14141[iVar0 /*104*/].f_99[1] = 0;
		Global_113386.f_14141[iVar0 /*104*/].f_99[2] = 0;
		iVar0++;
	}
	Global_113386.f_14051[0 /*20*/].f_17 = 0;
	Global_113386.f_14051[0 /*20*/].f_18 = 0;
	Global_113386.f_14051[1 /*20*/].f_17 = 0;
	Global_113386.f_14051[1 /*20*/].f_18 = 0;
	Global_113386.f_14051[2 /*20*/].f_17 = 0;
	Global_113386.f_14051[2 /*20*/].f_18 = 0;
}

void func_7()//Position - 0xA14DD
{
	struct<15> Var0;
	struct<14> Var1;
	struct<10> Var2;
	struct<165> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	Var3 = 16;
	Global_43434 = { Var3 };
	iVar4 = MISC::GET_GAME_TIMER();
	Global_43603 = iVar4;
	iVar6 = __LIB_0__::func_684();
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		Global_43604[iVar5] = iVar4;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		Global_113386.f_7688.f_919[iVar5] = 0;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		Global_113386.f_7688[iVar5 /*15*/] = { Var0 };
		iVar5++;
	}
	Global_113386.f_7688.f_136 = 0;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		Global_113386.f_7688.f_137[iVar5 /*15*/] = { Var0 };
		iVar5++;
	}
	Global_113386.f_7688.f_198 = 0;
	iVar5 = 0;
	while (iVar5 < 30)
	{
		Global_113386.f_7688.f_199[iVar5 /*15*/] = { Var0 };
		iVar5++;
	}
	Global_113386.f_7688.f_650 = 0;
	iVar5 = 0;
	while (iVar5 < 8)
	{
		Global_113386.f_7688.f_651[iVar5 /*14*/] = { Var1 };
		iVar5++;
	}
	Global_113386.f_7688.f_764 = 0;
	iVar5 = 0;
	while (iVar5 < 3)
	{
		Global_113386.f_7688.f_867[iVar5 /*14*/] = { Var1 };
		iVar5++;
	}
	Global_113386.f_7688.f_910 = 0;
	iVar5 = 0;
	while (iVar5 < 10)
	{
		Global_113386.f_7688.f_765[iVar5 /*10*/] = { Var2 };
		iVar5++;
	}
	Global_113386.f_7688.f_866 = 0;
	Global_113386.f_7688.f_911 = -1;
	Global_113386.f_7688.f_912 = 0;
	Global_113386.f_7688.f_913 = 0;
	Global_113386.f_7688.f_914 = 0;
	Global_113386.f_7688.f_915 = -1;
	Global_113386.f_7688.f_916 = 0;
	Global_113386.f_7688.f_917 = 0;
	Global_113386.f_7688.f_918 = -1;
	Global_113386.f_7688.f_923 = 0;
	Global_43601 = 0;
}

void func_8()//Position - 0xA1768
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/].f_1 = Global_78588.f_12526[iVar0 /*2*/];
		iVar0++;
	}
}

void func_9()//Position - 0xA17F3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_10016[iVar0] = -1;
		Global_113386.f_10016.f_4[iVar0] = -1;
		Global_113386.f_10016.f_8[iVar0] = 0;
		Global_113386.f_10016.f_16[iVar0] = 0;
		Global_113386.f_10016.f_12[iVar0] = -1;
		iVar0++;
	}
	Global_113386.f_10016.f_20 = 0;
}

void func_10()//Position - 0xA185B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/].f_3 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		Global_113386.f_18574[iVar0 /*6*/].f_3 = -1;
		iVar0++;
	}
	Global_113386.f_18574.f_383 = -1;
	Global_113386.f_10016.f_21 = 0;
	Global_113386.f_18574.f_380 = 0;
}

void func_11()//Position - 0xA18C8
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[iVar0] = 0;
		iVar0++;
	}
}

void func_12()//Position - 0xA18F6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[iVar0] = 0;
		iVar0++;
	}
}

void func_13()//Position - 0xA1924
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 146)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[iVar0] = 0;
		iVar0++;
	}
}

void func_14()//Position - 0xA1952
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 57)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT[iVar0] = 0;
		iVar0++;
	}
}

void func_15()//Position - 0xA197E
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/] = 0;
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/].f_1 = -1;
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

int func_16()//Position - 0xA1C23
{
	if (((Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[24 /*6*/] == 1 || Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[25 /*6*/] == 1) || Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[26 /*6*/] == 1) || Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[27 /*6*/] == 1)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)//Position - 0xA1C85
{
	switch (iParam0)
	{
		case 1:
			return 94;
			break;
		case 7:
			return 63;
			break;
		default:
			break;
	}
	return -1;
}

int func_18(int iParam0, int iParam1)//Position - 0xA1CB4
{
	switch (iParam1)
	{
		case 1:
			return Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iParam0 /*6*/].f_3;
			break;
		case 7:
			return Global_113386.f_18574[iParam0 /*6*/].f_3;
			break;
		default:
			break;
	}
	return -1;
}

void func_19(bool bParam0, int iParam1)//Position - 0x2025
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iParam1 != -1)
	{
		if (__LIB_16__::func_603(Global_91229[iParam1 /*34*/].f_11, 0))
		{
			iVar0 = joaat("SP0_MISSIONS_FAILED");
			if (bParam0)
			{
				iVar0 = joaat("SP0_MISSIONS_PASSED");
			}
			STATS::STAT_GET_INT(iVar0, &iVar1, -1);
			iVar1++;
			STATS::STAT_SET_INT(iVar0, iVar1, true);
		}
		if (__LIB_16__::func_603(Global_91229[iParam1 /*34*/].f_11, 1))
		{
			iVar2 = joaat("SP1_MISSIONS_FAILED");
			if (bParam0)
			{
				iVar2 = joaat("SP1_MISSIONS_PASSED");
			}
			STATS::STAT_GET_INT(iVar2, &iVar3, -1);
			iVar3++;
			STATS::STAT_SET_INT(iVar2, iVar3, true);
		}
		if (__LIB_16__::func_603(Global_91229[iParam1 /*34*/].f_11, 2))
		{
			iVar4 = joaat("SP2_MISSIONS_FAILED");
			if (bParam0)
			{
				iVar4 = joaat("SP2_MISSIONS_PASSED");
			}
			STATS::STAT_GET_INT(iVar4, &iVar5, -1);
			iVar5++;
			STATS::STAT_SET_INT(iVar4, iVar5, true);
		}
	}
}

void func_20(int iParam0)//Position - 0x46D7
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::FACEBOOK_CAN_POST_TO_FACEBOOK())
		{
			switch (iParam0)
			{
				case 0:
					if (!BitTest(Global_113386.f_20118.f_290, 6))
					{
						iVar1 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[__LIB_0__::func_598(0)];
						iVar0 = Global_113386.f_1.f_126[0 /*23*/].f_2[0];
						iVar0 = (iVar0 + Global_113386.f_1.f_126[0 /*23*/].f_2[1]);
						switch (iVar1)
						{
							case 1:
								NETWORK::FACEBOOK_POST_COMPLETED_HEIST("JH2A", iVar0, 0);
								break;
							case 2:
								NETWORK::FACEBOOK_POST_COMPLETED_HEIST("JH2B", iVar0, 0);
								break;
						}
						__LIB_17__::func_674("FB_J_HEIST" /* GXT: First heist complete! */);
						MISC::SET_BIT(&(Global_113386.f_20118.f_290), 6);
					}
					break;
				case 4:
					if (!BitTest(Global_113386.f_20118.f_290, 7))
					{
						iVar1 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[__LIB_0__::func_598(4)];
						iVar0 = Global_113386.f_1.f_126[4 /*23*/].f_2[0];
						iVar0 = (iVar0 + Global_113386.f_1.f_126[4 /*23*/].f_2[1]);
						iVar0 = (iVar0 + Global_113386.f_1.f_126[4 /*23*/].f_2[2]);
						switch (iVar1)
						{
							case 8:
								NETWORK::FACEBOOK_POST_COMPLETED_HEIST("FH2A", iVar0, 0);
								break;
							case 9:
								NETWORK::FACEBOOK_POST_COMPLETED_HEIST("FH2B", iVar0, 0);
								break;
						}
						__LIB_17__::func_674("FB_BS_HEIST" /* GXT: Final heist complete! */);
						MISC::SET_BIT(&(Global_113386.f_20118.f_290), 7);
					}
					break;
				}
			}
	}
}

void func_21(int iParam0)//Position - 0x2308E
{
	switch (iParam0)
	{
		case 1:
			__LIB_17__::func_250(6, 140);
			__LIB_17__::func_250(7, 140);
			break;
		case 19:
			__LIB_17__::func_250(4, 140);
			break;
		case 43:
			__LIB_17__::func_250(6, 140);
			__LIB_17__::func_250(7, 140);
			break;
		case 63:
			__LIB_17__::func_250(10, 140);
			break;
	}
}

int func_22(int iParam0)//Position - 0x7B4C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = __LIB_17__::func_900(iParam0);
	if (!iVar0 == -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar2 = -1;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_91193[iVar1 /*5*/] == -1)
		{
			iVar2 = iVar1;
			bVar3 = false;
		}
		else
		{
			iVar1++;
			if (iVar1 >= 7)
			{
				bVar3 = false;
			}
		}
	}
	if (iVar2 == -1)
	{
		return -1;
	}
	Global_91193[iVar2 /*5*/] = iParam0;
	return iVar2;
}

int func_23(int iParam0, int iParam1, int iParam2)//Position - 0x8E806
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_14__::func_791(iParam0);
	iVar1 = __LIB_14__::func_791(iParam1);
	iVar2 = __LIB_13__::func_95(iVar0, iVar1);
	if (iVar2 == 10)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18103.f_175[iVar2 /*19*/].f_2, iParam2);
}

var func_24(bool bParam0, int iParam1, int iParam2)//Position - 0x91288
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_6__::func_350(iParam2, iParam1);
	iVar2 = __LIB_0__::func_161(iVar1);
	switch (iVar2)
	{
		case 0:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_0"), &uVar0, -1);
					break;
				case 1:
					STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_0"), &uVar0, -1);
					break;
				case 2:
					STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_0"), &uVar0, -1);
					break;
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_1"), &uVar0, -1);
					break;
				case 1:
					STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_1"), &uVar0, -1);
					break;
				case 2:
					STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_1"), &uVar0, -1);
					break;
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_2"), &uVar0, -1);
					break;
				case 1:
					STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_2"), &uVar0, -1);
					break;
				case 2:
					STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_2"), &uVar0, -1);
					break;
			}
			break;
		case 3:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_3"), &uVar0, -1);
					break;
				case 1:
					STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_3"), &uVar0, -1);
					break;
				case 2:
					STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_3"), &uVar0, -1);
					break;
			}
			break;
		case 4:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_4"), &uVar0, -1);
					break;
				case 1:
					STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_4"), &uVar0, -1);
					break;
				case 2:
					STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_4"), &uVar0, -1);
					break;
			}
			break;
		case 5:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_5"), &uVar0, -1);
					break;
				case 1:
					STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_5"), &uVar0, -1);
					break;
				case 2:
					STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_5"), &uVar0, -1);
					break;
			}
			break;
		case 6:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_6"), &uVar0, -1);
					break;
				case 1:
					STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_6"), &uVar0, -1);
					break;
				case 2:
					STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_6"), &uVar0, -1);
					break;
			}
			break;
		default:
			break;
	}
	return uVar0;
}

void func_25()//Position - 0x923F7
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_44252[iVar0] != -1)
		{
			Global_44252[iVar0] = -1;
		}
		iVar0++;
	}
	Global_44249 = 0;
	Global_44250 = 0;
	Global_44251 = 0;
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_47582[iVar0 /*46*/].f_31 = 0;
		Global_47582[iVar0 /*46*/].f_42 = 0;
		Global_47582[iVar0 /*46*/] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 277)
	{
		Global_44257[iVar0 /*12*/].f_10 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_53195[iVar0 /*120*/] = 0;
		iVar0++;
	}
	__LIB_37__::func_372();
}

void func_26()//Position - 0x9C444
{
	PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_LOCK(__LIB_16__::func_512(0), 0);
	PLAYER::SPECIAL_ABILITY_LOCK(__LIB_16__::func_512(1), 0);
	PLAYER::SPECIAL_ABILITY_LOCK(__LIB_16__::func_512(2), 0);
}

void func_27()//Position - 0x9C66A
{
	__LIB_18__::func_80();
}

void func_28()//Position - 0xA06C6
{
	int iVar0;
	int iVar1;
	if (!Global_113386.f_7229.f_27)
	{
		iVar0 = 0;
		while (iVar0 <= (7 - 1))
		{
			Global_113386.f_7229.f_17[iVar0] = 0;
			iVar0++;
		}
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[3]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[1]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[0]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[2]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[4]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[5]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[6]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[3]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[1]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[2]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[0]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[4]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[5]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_17[6]), 1);
		Global_113386.f_7229.f_27 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= (7 - 1))
	{
		__LIB_37__::func_431(iVar1, BitTest(Global_113386.f_7229.f_17[iVar1], 0));
		iVar1++;
	}
}

void func_29(int iParam0, int iParam1, int iParam2)//Position - 0xA109A
{
	__LIB_0__::func_594(iParam1, iParam2, &(Global_113386.f_1.f_73[iParam0 /*3*/].f_1), &(Global_113386.f_1.f_73[iParam0 /*3*/].f_2));
}

void func_30()//Position - 0xA11ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 94)
	{
		iVar1 = iVar0;
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/] = 0;
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/].f_1 = 0;
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/].f_2 = 0;
		__LIB_0__::func_379(iVar1, 0);
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/].f_3 = -1;
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/].f_4 = 0;
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/].f_5 = 0f;
		if (!__LIB_0__::func_2(0))
		{
			if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 7))
			{
				if (iVar1 != 90)
				{
					iVar2 = __LIB_37__::func_376(iVar1);
					if (iVar2 != joaat("CITIES_PASSED"))
					{
						STATS::STAT_SET_INT(iVar2, 0, true);
					}
				}
				else
				{
					STATS::STAT_SET_INT(joaat("FL_CO_JH2A"), 0, true);
					STATS::STAT_SET_INT(joaat("FL_CO_JH2B"), 0, true);
				}
			}
		}
		iVar0++;
	}
	Global_113386.f_10016.f_21 = 0;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		Global_113386.f_10016.f_26[iVar3] = 0;
		iVar3++;
	}
}

void func_31()//Position - 0xA1432
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_0__::func_684();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = iVar0;
		if (!__LIB_0__::func_169(iVar2, 0) == 2)
		{
			__LIB_0__::func_171(iVar2, 0, 0);
			__LIB_0__::func_171(iVar2, 1, 0);
			__LIB_0__::func_171(iVar2, 2, 0);
			__LIB_0__::func_170(iVar2, 0, 0);
			__LIB_0__::func_170(iVar2, 1, 0);
			__LIB_0__::func_170(iVar2, 2, 0);
			__LIB_13__::func_305(iVar2, 0, 0);
			__LIB_13__::func_305(iVar2, 1, 0);
			__LIB_13__::func_305(iVar2, 2, 0);
		}
		iVar0++;
	}
}

void func_32(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x231D0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	uParam2->f_97 = 0;
	iVar0 = 145;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = __LIB_17__::func_107(iParam0);
		if (iVar0 > 3)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			return;
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "GetawayVehicleValid"))
		{
			if (DECORATOR::DECOR_GET_BOOL(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[45] || Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[12]) || Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[34])
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
					return;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false) || iParam7)
		{
			*uParam5 = 2;
			Global_100144[iVar0] = iParam1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			*uParam5 = 2;
			Global_100144[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_77137.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar0], false))
			{
				if (!__LIB_17__::func_909(Global_100144[iVar0], iVar0, 0) || PED::IS_PED_IN_VEHICLE(iParam0, Global_100144[iVar0], false))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
					Var3 = { ENTITY::GET_ENTITY_COORDS(Global_100144[iVar0], true) };
					if (__LIB_14__::func_73(iParam0, Global_100144[iVar0], 0))
					{
						if (SYSTEM::VDIST2(Var2, Var3) < 22500f)
						{
							*uParam3 = { Var3 };
							*uParam4 = ENTITY::GET_ENTITY_HEADING(Global_100144[iVar0]);
							*uParam5 = 1;
							Global_100144[iVar0] = iParam1;
							if (SYSTEM::VDIST2(Var2, Var3) < (1.5f * 1.5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_100144[iVar0] = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar5))
		{
			uParam2->f_1 = ENTITY::GET_ENTITY_MODEL(iVar5);
		}
		uParam2->f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam1);
		uParam2->f_3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
		uParam2->f_4 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_BOAT(*uParam2))
		{
			uParam2->f_10 = 1;
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam1), 16);
		uParam2->f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1);
		uParam2->f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1);
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &(uParam2->f_84), &(uParam2->f_85), &(uParam2->f_86));
		uParam2->f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &(uParam2->f_93), &(uParam2->f_94), &(uParam2->f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2))
		{
			MISC::SET_BIT(&(uParam2->f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3))
		{
			MISC::SET_BIT(&(uParam2->f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0))
		{
			MISC::SET_BIT(&(uParam2->f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1))
		{
			MISC::SET_BIT(&(uParam2->f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_92), 31);
		}
		uParam2->f_89 = VEHICLE::GET_VEHICLE_LIVERY(iParam1);
		uParam2->f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam1);
		iVar4 = 0;
		while (iVar4 < 12)
		{
			uParam2->f_11[iVar4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, iVar4 + 1);
			iVar4++;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, false))
		{
			iVar6 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam1);
			if (iVar6 == 0 || iVar6 == 5)
			{
				uParam2->f_24 = 1;
			}
			else
			{
				uParam2->f_24 = 0;
			}
		}
		else
		{
			uParam2->f_24 = 0;
		}
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			uParam2->f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		}
		__LIB_0__::func_107(&iParam1, &(uParam2->f_31), &(uParam2->f_81));
		uParam2->f_96 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam1);
		uParam2->f_97 = __LIB_0__::func_117(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_113386.f_32749.f_69[0 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			case 1:
				if (Global_113386.f_32749.f_69[1 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			case 2:
				if (Global_113386.f_32749.f_69[2 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar4 = 0;
		while (iVar4 < uParam2->f_11)
		{
			uParam2->f_11[iVar4] = 0;
			iVar4++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_96 = 0f;
	}
}

void func_33(bool bParam0)//Position - 0x2D87A
{
	float fVar0;
	int iVar1;
	if (Global_113386.f_1.f_73[bParam0 /*3*/] == 2)
	{
		return;
	}
	fVar0 = 0f;
	switch (Global_96316[bParam0 /*5*/])
	{
		case 1:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(__LIB_16__::func_836(bParam0, iVar1)) / SYSTEM::TO_FLOAT(__LIB_0__::func_597(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 4f);
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 3)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(__LIB_16__::func_836(bParam0, iVar1)) / SYSTEM::TO_FLOAT(__LIB_0__::func_595(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 3f);
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 < 3)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(__LIB_16__::func_836(bParam0, iVar1)) / SYSTEM::TO_FLOAT(__LIB_0__::func_595(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 3f);
			break;
	}
	if (fVar0 > 66.6f)
	{
		if (Global_113386.f_1.f_73[bParam0 /*3*/] < 2)
		{
			Global_113386.f_1.f_73[bParam0 /*3*/] = 2;
		}
	}
	else if (fVar0 > 33.3f)
	{
		if (Global_113386.f_1.f_73[bParam0 /*3*/] < 1)
		{
			Global_113386.f_1.f_73[bParam0 /*3*/] = 1;
		}
	}
}

void func_34(int iParam0)//Position - 0x2E309
{
	switch (iParam0)
	{
		case 0:
			__LIB_17__::func_911(0);
			__LIB_17__::func_911(1);
			__LIB_17__::func_911(2);
			__LIB_17__::func_911(3);
			__LIB_17__::func_911(4);
			__LIB_17__::func_911(5);
			__LIB_17__::func_911(6);
			__LIB_17__::func_911(7);
			__LIB_17__::func_911(8);
			return;
		case 1:
			__LIB_17__::func_911(9);
			__LIB_17__::func_911(10);
			__LIB_17__::func_911(11);
			__LIB_17__::func_911(12);
			__LIB_17__::func_911(13);
			__LIB_17__::func_911(14);
			__LIB_17__::func_911(15);
			__LIB_17__::func_911(16);
			__LIB_17__::func_911(17);
			__LIB_17__::func_911(18);
			__LIB_17__::func_911(19);
			__LIB_17__::func_911(20);
			return;
		case 2:
			__LIB_17__::func_911(21);
			__LIB_17__::func_911(22);
			__LIB_17__::func_911(23);
			__LIB_17__::func_911(24);
			__LIB_17__::func_911(25);
			__LIB_17__::func_911(26);
			__LIB_17__::func_911(27);
			__LIB_17__::func_911(28);
			__LIB_17__::func_911(29);
			return;
		case 3:
			__LIB_17__::func_911(30);
			__LIB_17__::func_911(31);
			__LIB_17__::func_911(32);
			__LIB_17__::func_911(33);
			__LIB_17__::func_911(34);
			__LIB_17__::func_911(35);
			__LIB_17__::func_911(36);
			__LIB_17__::func_911(37);
			__LIB_17__::func_911(38);
			__LIB_17__::func_911(39);
			__LIB_17__::func_911(40);
			__LIB_17__::func_911(41);
			__LIB_17__::func_911(42);
			return;
		case 4:
			__LIB_17__::func_911(43);
			__LIB_17__::func_911(44);
			__LIB_17__::func_911(45);
			__LIB_17__::func_911(46);
			__LIB_17__::func_911(47);
			__LIB_17__::func_911(48);
			__LIB_17__::func_911(49);
			__LIB_17__::func_911(50);
			__LIB_17__::func_911(51);
			__LIB_17__::func_911(52);
			__LIB_17__::func_911(53);
			__LIB_17__::func_911(54);
			__LIB_17__::func_911(55);
			__LIB_17__::func_911(56);
			return;
		case 5:
			__LIB_17__::func_911(57);
			__LIB_17__::func_911(58);
			__LIB_17__::func_911(59);
			__LIB_17__::func_911(60);
			__LIB_17__::func_911(61);
			__LIB_17__::func_911(62);
			__LIB_17__::func_911(63);
			__LIB_17__::func_911(64);
			__LIB_17__::func_911(65);
			__LIB_17__::func_911(66);
			__LIB_17__::func_911(67);
			__LIB_17__::func_911(68);
			__LIB_17__::func_911(69);
			__LIB_17__::func_911(70);
			return;
		case 6:
			__LIB_17__::func_911(71);
			__LIB_17__::func_911(72);
			__LIB_17__::func_911(73);
			__LIB_17__::func_911(74);
			__LIB_17__::func_911(75);
			__LIB_17__::func_911(76);
			__LIB_17__::func_911(77);
			__LIB_17__::func_911(78);
			__LIB_17__::func_911(79);
			__LIB_17__::func_911(80);
			__LIB_17__::func_911(81);
			__LIB_17__::func_911(82);
			__LIB_17__::func_911(83);
			__LIB_17__::func_911(84);
			__LIB_17__::func_911(85);
			return;
		case 7:
			__LIB_17__::func_911(86);
			__LIB_17__::func_911(87);
			__LIB_17__::func_911(88);
			__LIB_17__::func_911(89);
			__LIB_17__::func_911(90);
			__LIB_17__::func_911(91);
			__LIB_17__::func_911(92);
			__LIB_17__::func_911(93);
			__LIB_17__::func_911(94);
			__LIB_17__::func_911(95);
			__LIB_17__::func_911(96);
			__LIB_17__::func_911(97);
			__LIB_17__::func_911(98);
			__LIB_17__::func_911(99);
			__LIB_17__::func_911(100);
			__LIB_17__::func_911(101);
			return;
		case 9:
			__LIB_17__::func_911(102);
			__LIB_17__::func_911(103);
			__LIB_17__::func_911(104);
			__LIB_17__::func_911(105);
			__LIB_17__::func_911(106);
			__LIB_17__::func_911(107);
			__LIB_17__::func_911(108);
			__LIB_17__::func_911(109);
			__LIB_17__::func_911(110);
			return;
		case 8:
			__LIB_17__::func_911(111);
			__LIB_17__::func_911(112);
			__LIB_17__::func_911(113);
			__LIB_17__::func_911(114);
			__LIB_17__::func_911(115);
			__LIB_17__::func_911(116);
			__LIB_17__::func_911(117);
			__LIB_17__::func_911(118);
			__LIB_17__::func_911(119);
			return;
		case 10:
			__LIB_17__::func_911(120);
			__LIB_17__::func_911(121);
			__LIB_17__::func_911(122);
			__LIB_17__::func_911(123);
			__LIB_17__::func_911(124);
			__LIB_17__::func_911(125);
			__LIB_17__::func_911(126);
			__LIB_17__::func_911(127);
			__LIB_17__::func_911(128);
			return;
		case 11:
			__LIB_17__::func_911(129);
			__LIB_17__::func_911(130);
			__LIB_17__::func_911(131);
			__LIB_17__::func_911(132);
			__LIB_17__::func_911(133);
			__LIB_17__::func_911(134);
			__LIB_17__::func_911(135);
			return;
		case 12:
			__LIB_17__::func_911(136);
			__LIB_17__::func_911(137);
			__LIB_17__::func_911(138);
			__LIB_17__::func_911(139);
			__LIB_17__::func_911(140);
			__LIB_17__::func_911(141);
			__LIB_17__::func_911(142);
			__LIB_17__::func_911(143);
			__LIB_17__::func_911(144);
			__LIB_17__::func_911(145);
			__LIB_17__::func_911(146);
			__LIB_17__::func_911(147);
			return;
		case 13:
			__LIB_17__::func_911(148);
			__LIB_17__::func_911(149);
			__LIB_17__::func_911(150);
			__LIB_17__::func_911(151);
			__LIB_17__::func_911(152);
			__LIB_17__::func_911(153);
			__LIB_17__::func_911(154);
			__LIB_17__::func_911(155);
			__LIB_17__::func_911(156);
			__LIB_17__::func_911(157);
			__LIB_17__::func_911(158);
			__LIB_17__::func_911(159);
			__LIB_17__::func_911(160);
			return;
		case 14:
			__LIB_17__::func_911(161);
			__LIB_17__::func_911(162);
			__LIB_17__::func_911(163);
			__LIB_17__::func_911(164);
			__LIB_17__::func_911(165);
			__LIB_17__::func_911(166);
			__LIB_17__::func_911(167);
			__LIB_17__::func_911(168);
			__LIB_17__::func_911(169);
			__LIB_17__::func_911(170);
			__LIB_17__::func_911(171);
			return;
		case 15:
			__LIB_17__::func_911(172);
			__LIB_17__::func_911(173);
			__LIB_17__::func_911(174);
			__LIB_17__::func_911(175);
			__LIB_17__::func_911(176);
			__LIB_17__::func_911(177);
			__LIB_17__::func_911(178);
			__LIB_17__::func_911(179);
			__LIB_17__::func_911(180);
			__LIB_17__::func_911(181);
			__LIB_17__::func_911(182);
			__LIB_17__::func_911(183);
			__LIB_17__::func_911(184);
			return;
		case 16:
			__LIB_17__::func_911(185);
			__LIB_17__::func_911(186);
			__LIB_17__::func_911(187);
			__LIB_17__::func_911(188);
			__LIB_17__::func_911(189);
			__LIB_17__::func_911(190);
			__LIB_17__::func_911(191);
			__LIB_17__::func_911(192);
			__LIB_17__::func_911(193);
			__LIB_17__::func_911(194);
			__LIB_17__::func_911(195);
			return;
		case 17:
			__LIB_17__::func_911(196);
			__LIB_17__::func_911(197);
			__LIB_17__::func_911(198);
			__LIB_17__::func_911(199);
			__LIB_17__::func_911(200);
			__LIB_17__::func_911(201);
			__LIB_17__::func_911(202);
			__LIB_17__::func_911(203);
			__LIB_17__::func_911(204);
			return;
		case 18:
			__LIB_17__::func_911(205);
			__LIB_17__::func_911(206);
			__LIB_17__::func_911(207);
			__LIB_17__::func_911(208);
			__LIB_17__::func_911(209);
			__LIB_17__::func_911(210);
			__LIB_17__::func_911(211);
			__LIB_17__::func_911(212);
			__LIB_17__::func_911(213);
			__LIB_17__::func_911(214);
			__LIB_17__::func_911(215);
			__LIB_17__::func_911(216);
			return;
		case 19:
			__LIB_17__::func_911(217);
			__LIB_17__::func_911(218);
			__LIB_17__::func_911(219);
			__LIB_17__::func_911(220);
			__LIB_17__::func_911(221);
			__LIB_17__::func_911(222);
			__LIB_17__::func_911(223);
			__LIB_17__::func_911(224);
			__LIB_17__::func_911(225);
			__LIB_17__::func_911(226);
			__LIB_17__::func_911(227);
			__LIB_17__::func_911(228);
			return;
		case 20:
			__LIB_17__::func_911(229);
			__LIB_17__::func_911(230);
			__LIB_17__::func_911(231);
			__LIB_17__::func_911(232);
			__LIB_17__::func_911(233);
			__LIB_17__::func_911(234);
			__LIB_17__::func_911(235);
			__LIB_17__::func_911(236);
			__LIB_17__::func_911(237);
			__LIB_17__::func_911(238);
			return;
		case 21:
			__LIB_17__::func_911(239);
			__LIB_17__::func_911(240);
			__LIB_17__::func_911(241);
			__LIB_17__::func_911(242);
			__LIB_17__::func_911(243);
			__LIB_17__::func_911(244);
			__LIB_17__::func_911(245);
			__LIB_17__::func_911(246);
			__LIB_17__::func_911(247);
			__LIB_17__::func_911(248);
			return;
		case 22:
			__LIB_17__::func_911(249);
			__LIB_17__::func_911(250);
			__LIB_17__::func_911(251);
			__LIB_17__::func_911(252);
			__LIB_17__::func_911(253);
			__LIB_17__::func_911(254);
			__LIB_17__::func_911(255);
			__LIB_17__::func_911(256);
			return;
		case 26:
			__LIB_17__::func_911(257);
			__LIB_17__::func_911(258);
			__LIB_17__::func_911(259);
			__LIB_17__::func_911(260);
			__LIB_17__::func_911(261);
			__LIB_17__::func_911(262);
			__LIB_17__::func_911(263);
			__LIB_17__::func_911(264);
			__LIB_17__::func_911(265);
			__LIB_17__::func_911(266);
			__LIB_17__::func_911(267);
			__LIB_17__::func_911(268);
			__LIB_17__::func_911(269);
			__LIB_17__::func_911(270);
			__LIB_17__::func_911(271);
			__LIB_17__::func_911(272);
			return;
		case 29:
			__LIB_17__::func_911(273);
			__LIB_17__::func_911(274);
			__LIB_17__::func_911(275);
			__LIB_17__::func_911(276);
			__LIB_17__::func_911(277);
			__LIB_17__::func_911(278);
			__LIB_17__::func_911(279);
			__LIB_17__::func_911(280);
			__LIB_17__::func_911(281);
			__LIB_17__::func_911(282);
			return;
		case 30:
			__LIB_17__::func_911(283);
			__LIB_17__::func_911(284);
			__LIB_17__::func_911(285);
			__LIB_17__::func_911(286);
			__LIB_17__::func_911(287);
			__LIB_17__::func_911(288);
			__LIB_17__::func_911(289);
			__LIB_17__::func_911(290);
			__LIB_17__::func_911(291);
			__LIB_17__::func_911(292);
			__LIB_17__::func_911(293);
			return;
		case 31:
			__LIB_17__::func_911(294);
			__LIB_17__::func_911(295);
			__LIB_17__::func_911(296);
			__LIB_17__::func_911(297);
			__LIB_17__::func_911(298);
			__LIB_17__::func_911(299);
			__LIB_17__::func_911(300);
			__LIB_17__::func_911(301);
			__LIB_17__::func_911(302);
			__LIB_17__::func_911(303);
			__LIB_17__::func_911(304);
			__LIB_17__::func_911(305);
			return;
		case 38:
			__LIB_17__::func_911(306);
			__LIB_17__::func_911(307);
			__LIB_17__::func_911(308);
			__LIB_17__::func_911(309);
			__LIB_17__::func_911(310);
			__LIB_17__::func_911(311);
			__LIB_17__::func_911(312);
			__LIB_17__::func_911(313);
			__LIB_17__::func_911(314);
			__LIB_17__::func_911(315);
			__LIB_17__::func_911(316);
			return;
		case 33:
			__LIB_17__::func_911(317);
			__LIB_17__::func_911(318);
			__LIB_17__::func_911(319);
			__LIB_17__::func_911(320);
			__LIB_17__::func_911(321);
			return;
		case 34:
			__LIB_17__::func_911(322);
			__LIB_17__::func_911(323);
			__LIB_17__::func_911(324);
			__LIB_17__::func_911(325);
			return;
		default:
	}
	switch (iParam0)
	{
		case 39:
			__LIB_17__::func_911(326);
			__LIB_17__::func_911(327);
			__LIB_17__::func_911(328);
			__LIB_17__::func_911(329);
			__LIB_17__::func_911(330);
			__LIB_17__::func_911(331);
			__LIB_17__::func_911(332);
			__LIB_17__::func_911(333);
			__LIB_17__::func_911(334);
			__LIB_17__::func_911(335);
			__LIB_17__::func_911(336);
			__LIB_17__::func_911(337);
			return;
		case 40:
			__LIB_17__::func_911(338);
			__LIB_17__::func_911(339);
			__LIB_17__::func_911(340);
			__LIB_17__::func_911(341);
			__LIB_17__::func_911(342);
			__LIB_17__::func_911(343);
			__LIB_17__::func_911(344);
			__LIB_17__::func_911(345);
			return;
		case 41:
			__LIB_17__::func_911(346);
			__LIB_17__::func_911(347);
			__LIB_17__::func_911(348);
			__LIB_17__::func_911(349);
			__LIB_17__::func_911(350);
			__LIB_17__::func_911(351);
			__LIB_17__::func_911(352);
			__LIB_17__::func_911(353);
			__LIB_17__::func_911(354);
			__LIB_17__::func_911(355);
			__LIB_17__::func_911(356);
			__LIB_17__::func_911(357);
			__LIB_17__::func_911(358);
			__LIB_17__::func_911(359);
			return;
		case 42:
			__LIB_17__::func_911(360);
			__LIB_17__::func_911(361);
			__LIB_17__::func_911(362);
			__LIB_17__::func_911(363);
			__LIB_17__::func_911(364);
			__LIB_17__::func_911(365);
			__LIB_17__::func_911(366);
			__LIB_17__::func_911(367);
			__LIB_17__::func_911(368);
			__LIB_17__::func_911(369);
			__LIB_17__::func_911(370);
			__LIB_17__::func_911(371);
			return;
		case 43:
			__LIB_17__::func_911(372);
			__LIB_17__::func_911(373);
			__LIB_17__::func_911(374);
			__LIB_17__::func_911(375);
			__LIB_17__::func_911(376);
			__LIB_17__::func_911(377);
			__LIB_17__::func_911(378);
			__LIB_17__::func_911(379);
			__LIB_17__::func_911(380);
			__LIB_17__::func_911(381);
			__LIB_17__::func_911(382);
			__LIB_17__::func_911(383);
			return;
		case 44:
			__LIB_17__::func_911(384);
			__LIB_17__::func_911(385);
			__LIB_17__::func_911(386);
			__LIB_17__::func_911(387);
			__LIB_17__::func_911(388);
			__LIB_17__::func_911(389);
			__LIB_17__::func_911(390);
			__LIB_17__::func_911(391);
			__LIB_17__::func_911(392);
			return;
		case 45:
			__LIB_17__::func_911(393);
			__LIB_17__::func_911(394);
			__LIB_17__::func_911(395);
			__LIB_17__::func_911(396);
			__LIB_17__::func_911(397);
			__LIB_17__::func_911(398);
			__LIB_17__::func_911(399);
			return;
		case 46:
			__LIB_17__::func_911(400);
			__LIB_17__::func_911(401);
			__LIB_17__::func_911(402);
			__LIB_17__::func_911(403);
			__LIB_17__::func_911(404);
			__LIB_17__::func_911(405);
			__LIB_17__::func_911(406);
			__LIB_17__::func_911(407);
			__LIB_17__::func_911(408);
			__LIB_17__::func_911(409);
			__LIB_17__::func_911(410);
			__LIB_17__::func_911(411);
			__LIB_17__::func_911(412);
			return;
		case 47:
			__LIB_17__::func_911(413);
			__LIB_17__::func_911(414);
			__LIB_17__::func_911(415);
			__LIB_17__::func_911(416);
			__LIB_17__::func_911(417);
			__LIB_17__::func_911(418);
			__LIB_17__::func_911(419);
			__LIB_17__::func_911(420);
			__LIB_17__::func_911(421);
			__LIB_17__::func_911(422);
			__LIB_17__::func_911(423);
			__LIB_17__::func_911(424);
			__LIB_17__::func_911(425);
			__LIB_17__::func_911(426);
			__LIB_17__::func_911(427);
			__LIB_17__::func_911(428);
			return;
		case 48:
			__LIB_17__::func_911(429);
			__LIB_17__::func_911(430);
			__LIB_17__::func_911(431);
			__LIB_17__::func_911(432);
			__LIB_17__::func_911(433);
			__LIB_17__::func_911(434);
			__LIB_17__::func_911(435);
			__LIB_17__::func_911(436);
			__LIB_17__::func_911(437);
			__LIB_17__::func_911(438);
			__LIB_17__::func_911(439);
			__LIB_17__::func_911(440);
			return;
		case 49:
			__LIB_17__::func_911(441);
			__LIB_17__::func_911(442);
			__LIB_17__::func_911(443);
			__LIB_17__::func_911(444);
			__LIB_17__::func_911(445);
			__LIB_17__::func_911(446);
			__LIB_17__::func_911(447);
			__LIB_17__::func_911(448);
			__LIB_17__::func_911(449);
			__LIB_17__::func_911(450);
			__LIB_17__::func_911(451);
			__LIB_17__::func_911(452);
			__LIB_17__::func_911(453);
			return;
		case 53:
			__LIB_17__::func_911(454);
			__LIB_17__::func_911(455);
			__LIB_17__::func_911(456);
			__LIB_17__::func_911(457);
			__LIB_17__::func_911(458);
			__LIB_17__::func_911(459);
			__LIB_17__::func_911(460);
			__LIB_17__::func_911(461);
			__LIB_17__::func_911(462);
			__LIB_17__::func_911(463);
			__LIB_17__::func_911(464);
			__LIB_17__::func_911(465);
			return;
		case 60:
			__LIB_17__::func_911(466);
			__LIB_17__::func_911(467);
			__LIB_17__::func_911(468);
			__LIB_17__::func_911(469);
			__LIB_17__::func_911(470);
			__LIB_17__::func_911(471);
			__LIB_17__::func_911(472);
			__LIB_17__::func_911(473);
			return;
		case 61:
			__LIB_17__::func_911(474);
			__LIB_17__::func_911(475);
			__LIB_17__::func_911(476);
			__LIB_17__::func_911(477);
			__LIB_17__::func_911(478);
			__LIB_17__::func_911(479);
			__LIB_17__::func_911(480);
			__LIB_17__::func_911(481);
			__LIB_17__::func_911(482);
			__LIB_17__::func_911(483);
			__LIB_17__::func_911(484);
			__LIB_17__::func_911(485);
			return;
		case 62:
			__LIB_17__::func_911(486);
			__LIB_17__::func_911(487);
			__LIB_17__::func_911(488);
			__LIB_17__::func_911(489);
			__LIB_17__::func_911(490);
			__LIB_17__::func_911(491);
			__LIB_17__::func_911(492);
			__LIB_17__::func_911(493);
			__LIB_17__::func_911(494);
			__LIB_17__::func_911(495);
			__LIB_17__::func_911(496);
			__LIB_17__::func_911(497);
			__LIB_17__::func_911(498);
			return;
		case 63:
			__LIB_17__::func_911(499);
			__LIB_17__::func_911(500);
			__LIB_17__::func_911(501);
			__LIB_17__::func_911(502);
			__LIB_17__::func_911(503);
			__LIB_17__::func_911(504);
			__LIB_17__::func_911(505);
			__LIB_17__::func_911(506);
			__LIB_17__::func_911(507);
			__LIB_17__::func_911(508);
			__LIB_17__::func_911(509);
			__LIB_17__::func_911(510);
			__LIB_17__::func_911(511);
			__LIB_17__::func_911(512);
			__LIB_17__::func_911(513);
			__LIB_17__::func_911(514);
			return;
		case 64:
			__LIB_17__::func_911(515);
			__LIB_17__::func_911(516);
			__LIB_17__::func_911(517);
			__LIB_17__::func_911(518);
			__LIB_17__::func_911(519);
			__LIB_17__::func_911(520);
			__LIB_17__::func_911(521);
			__LIB_17__::func_911(522);
			__LIB_17__::func_911(523);
			__LIB_17__::func_911(524);
			__LIB_17__::func_911(525);
			__LIB_17__::func_911(526);
			return;
		case 66:
			__LIB_17__::func_911(527);
			__LIB_17__::func_911(528);
			__LIB_17__::func_911(529);
			__LIB_17__::func_911(530);
			__LIB_17__::func_911(531);
			__LIB_17__::func_911(532);
			__LIB_17__::func_911(533);
			return;
		case 67:
			__LIB_17__::func_911(534);
			__LIB_17__::func_911(535);
			__LIB_17__::func_911(536);
			__LIB_17__::func_911(537);
			__LIB_17__::func_911(538);
			__LIB_17__::func_911(539);
			return;
		case 68:
			__LIB_17__::func_911(540);
			__LIB_17__::func_911(541);
			__LIB_17__::func_911(542);
			__LIB_17__::func_911(543);
			__LIB_17__::func_911(544);
			__LIB_17__::func_911(545);
			__LIB_17__::func_911(546);
			return;
		case 69:
			__LIB_17__::func_911(547);
			__LIB_17__::func_911(548);
			__LIB_17__::func_911(549);
			__LIB_17__::func_911(550);
			__LIB_17__::func_911(551);
			__LIB_17__::func_911(552);
			__LIB_17__::func_911(553);
			__LIB_17__::func_911(554);
			__LIB_17__::func_911(555);
			__LIB_17__::func_911(556);
			__LIB_17__::func_911(557);
			__LIB_17__::func_911(558);
			__LIB_17__::func_911(559);
			__LIB_17__::func_911(560);
			return;
		case 70:
			__LIB_17__::func_911(561);
			__LIB_17__::func_911(562);
			__LIB_17__::func_911(563);
			__LIB_17__::func_911(564);
			__LIB_17__::func_911(565);
			__LIB_17__::func_911(566);
			__LIB_17__::func_911(567);
			__LIB_17__::func_911(568);
			__LIB_17__::func_911(569);
			__LIB_17__::func_911(570);
			__LIB_17__::func_911(571);
			__LIB_17__::func_911(572);
			__LIB_17__::func_911(573);
			__LIB_17__::func_911(574);
			__LIB_17__::func_911(575);
			return;
		case 71:
			__LIB_17__::func_911(576);
			__LIB_17__::func_911(577);
			__LIB_17__::func_911(578);
			__LIB_17__::func_911(579);
			__LIB_17__::func_911(580);
			__LIB_17__::func_911(581);
			__LIB_17__::func_911(582);
			__LIB_17__::func_911(583);
			__LIB_17__::func_911(584);
			__LIB_17__::func_911(585);
			__LIB_17__::func_911(586);
			return;
		case 72:
			__LIB_17__::func_911(587);
			__LIB_17__::func_911(588);
			__LIB_17__::func_911(589);
			__LIB_17__::func_911(590);
			__LIB_17__::func_911(591);
			__LIB_17__::func_911(592);
			__LIB_17__::func_911(593);
			__LIB_17__::func_911(594);
			return;
		case 73:
			__LIB_17__::func_911(595);
			__LIB_17__::func_911(596);
			__LIB_17__::func_911(597);
			__LIB_17__::func_911(598);
			__LIB_17__::func_911(599);
			__LIB_17__::func_911(600);
			__LIB_17__::func_911(601);
			__LIB_17__::func_911(602);
			__LIB_17__::func_911(603);
			__LIB_17__::func_911(604);
			return;
		case 74:
			__LIB_17__::func_911(605);
			__LIB_17__::func_911(606);
			__LIB_17__::func_911(607);
			__LIB_17__::func_911(608);
			__LIB_17__::func_911(609);
			__LIB_17__::func_911(610);
			__LIB_17__::func_911(611);
			__LIB_17__::func_911(612);
			__LIB_17__::func_911(613);
			__LIB_17__::func_911(614);
			__LIB_17__::func_911(615);
			__LIB_17__::func_911(616);
			__LIB_17__::func_911(617);
			__LIB_17__::func_911(618);
			__LIB_17__::func_911(619);
			__LIB_17__::func_911(620);
			return;
		case 75:
			__LIB_17__::func_911(621);
			__LIB_17__::func_911(622);
			__LIB_17__::func_911(623);
			__LIB_17__::func_911(624);
			__LIB_17__::func_911(625);
			__LIB_17__::func_911(626);
			__LIB_17__::func_911(627);
			__LIB_17__::func_911(628);
			__LIB_17__::func_911(629);
			__LIB_17__::func_911(630);
			__LIB_17__::func_911(631);
			__LIB_17__::func_911(632);
			__LIB_17__::func_911(633);
			__LIB_17__::func_911(634);
			__LIB_17__::func_911(635);
			__LIB_17__::func_911(636);
			return;
		case 76:
			__LIB_17__::func_911(637);
			__LIB_17__::func_911(638);
			__LIB_17__::func_911(639);
			__LIB_17__::func_911(640);
			__LIB_17__::func_911(641);
			__LIB_17__::func_911(642);
			__LIB_17__::func_911(643);
			__LIB_17__::func_911(644);
			__LIB_17__::func_911(645);
			__LIB_17__::func_911(646);
			__LIB_17__::func_911(647);
			__LIB_17__::func_911(648);
			return;
		case 78:
			__LIB_17__::func_911(649);
			__LIB_17__::func_911(650);
			__LIB_17__::func_911(651);
			__LIB_17__::func_911(652);
			return;
		case 79:
			__LIB_17__::func_911(653);
			__LIB_17__::func_911(654);
			__LIB_17__::func_911(655);
			__LIB_17__::func_911(656);
			__LIB_17__::func_911(657);
			__LIB_17__::func_911(658);
			__LIB_17__::func_911(659);
			return;
		case 84:
			__LIB_17__::func_911(660);
			__LIB_17__::func_911(661);
			__LIB_17__::func_911(662);
			__LIB_17__::func_911(663);
			__LIB_17__::func_911(664);
			__LIB_17__::func_911(665);
			__LIB_17__::func_911(666);
			__LIB_17__::func_911(667);
			__LIB_17__::func_911(668);
			__LIB_17__::func_911(669);
			__LIB_17__::func_911(670);
			__LIB_17__::func_911(671);
			__LIB_17__::func_911(672);
			__LIB_17__::func_911(673);
			return;
		default:
	}
	switch (iParam0)
	{
		case 85:
			__LIB_17__::func_911(674);
			__LIB_17__::func_911(675);
			__LIB_17__::func_911(676);
			__LIB_17__::func_911(677);
			__LIB_17__::func_911(678);
			__LIB_17__::func_911(679);
			__LIB_17__::func_911(680);
			__LIB_17__::func_911(681);
			__LIB_17__::func_911(682);
			__LIB_17__::func_911(683);
			__LIB_17__::func_911(684);
			__LIB_17__::func_911(685);
			__LIB_17__::func_911(686);
			__LIB_17__::func_911(687);
			__LIB_17__::func_911(688);
			return;
		case 86:
			__LIB_17__::func_911(689);
			__LIB_17__::func_911(690);
			__LIB_17__::func_911(691);
			__LIB_17__::func_911(692);
			__LIB_17__::func_911(693);
			__LIB_17__::func_911(694);
			__LIB_17__::func_911(695);
			return;
		case 87:
			__LIB_17__::func_911(696);
			__LIB_17__::func_911(697);
			__LIB_17__::func_911(698);
			__LIB_17__::func_911(699);
			__LIB_17__::func_911(700);
			__LIB_17__::func_911(701);
			return;
		case 88:
			__LIB_17__::func_911(702);
			__LIB_17__::func_911(703);
			__LIB_17__::func_911(704);
			__LIB_17__::func_911(705);
			__LIB_17__::func_911(706);
			__LIB_17__::func_911(707);
			__LIB_17__::func_911(708);
			return;
		case 91:
			__LIB_17__::func_911(709);
			__LIB_17__::func_911(710);
			__LIB_17__::func_911(711);
			__LIB_17__::func_911(712);
			__LIB_17__::func_911(713);
			__LIB_17__::func_911(714);
			__LIB_17__::func_911(715);
			__LIB_17__::func_911(716);
			__LIB_17__::func_911(717);
			return;
		case 92:
			__LIB_17__::func_911(718);
			__LIB_17__::func_911(719);
			__LIB_17__::func_911(720);
			__LIB_17__::func_911(721);
			__LIB_17__::func_911(722);
			__LIB_17__::func_911(723);
			__LIB_17__::func_911(724);
			__LIB_17__::func_911(725);
			__LIB_17__::func_911(726);
			__LIB_17__::func_911(727);
			__LIB_17__::func_911(728);
			return;
		case 93:
			__LIB_17__::func_911(729);
			__LIB_17__::func_911(730);
			__LIB_17__::func_911(731);
			__LIB_17__::func_911(732);
			__LIB_17__::func_911(733);
			__LIB_17__::func_911(734);
			__LIB_17__::func_911(735);
			__LIB_17__::func_911(736);
			__LIB_17__::func_911(737);
			__LIB_17__::func_911(738);
			__LIB_17__::func_911(739);
			__LIB_17__::func_911(740);
			return;
		case 90:
			__LIB_17__::func_911(810);
			__LIB_17__::func_911(811);
			__LIB_17__::func_911(812);
			__LIB_17__::func_911(813);
			__LIB_17__::func_911(814);
			__LIB_17__::func_911(815);
			__LIB_17__::func_911(816);
			__LIB_17__::func_911(817);
			__LIB_17__::func_911(818);
			__LIB_17__::func_911(819);
			return;
		case 36:
			__LIB_17__::func_911(820);
			__LIB_17__::func_911(821);
			__LIB_17__::func_911(822);
			__LIB_17__::func_911(823);
			return;
		case 37:
			__LIB_17__::func_911(824);
			__LIB_17__::func_911(825);
			__LIB_17__::func_911(826);
			__LIB_17__::func_911(827);
			return;
		case 24:
			__LIB_17__::func_911(846);
			__LIB_17__::func_911(847);
			__LIB_17__::func_911(848);
			__LIB_17__::func_911(849);
			__LIB_17__::func_911(850);
			__LIB_17__::func_911(851);
			return;
		case 25:
			__LIB_17__::func_911(852);
			__LIB_17__::func_911(853);
			__LIB_17__::func_911(854);
			__LIB_17__::func_911(855);
			__LIB_17__::func_911(856);
			__LIB_17__::func_911(857);
			__LIB_17__::func_911(858);
			__LIB_17__::func_911(859);
			__LIB_17__::func_911(860);
			return;
		case 59:
			__LIB_17__::func_911(861);
			__LIB_17__::func_911(862);
			__LIB_17__::func_911(863);
			__LIB_17__::func_911(864);
			__LIB_17__::func_911(865);
			__LIB_17__::func_911(866);
			__LIB_17__::func_911(867);
			__LIB_17__::func_911(868);
			__LIB_17__::func_911(869);
			return;
		case 65:
			__LIB_17__::func_911(870);
			__LIB_17__::func_911(871);
			__LIB_17__::func_911(872);
			__LIB_17__::func_911(873);
			__LIB_17__::func_911(874);
			return;
		case 80:
			__LIB_17__::func_911(875);
			__LIB_17__::func_911(876);
			__LIB_17__::func_911(877);
			__LIB_17__::func_911(878);
			__LIB_17__::func_911(879);
			__LIB_17__::func_911(880);
			__LIB_17__::func_911(881);
			__LIB_17__::func_911(882);
			return;
		case 81:
			__LIB_17__::func_911(883);
			__LIB_17__::func_911(884);
			__LIB_17__::func_911(885);
			__LIB_17__::func_911(886);
			__LIB_17__::func_911(887);
			__LIB_17__::func_911(888);
			__LIB_17__::func_911(889);
			__LIB_17__::func_911(890);
			return;
		case 82:
			__LIB_17__::func_911(891);
			__LIB_17__::func_911(892);
			__LIB_17__::func_911(893);
			__LIB_17__::func_911(894);
			__LIB_17__::func_911(895);
			__LIB_17__::func_911(896);
			__LIB_17__::func_911(897);
			__LIB_17__::func_911(898);
			return;
		case 83:
			__LIB_17__::func_911(899);
			__LIB_17__::func_911(900);
			__LIB_17__::func_911(901);
			__LIB_17__::func_911(902);
			__LIB_17__::func_911(903);
			__LIB_17__::func_911(904);
			__LIB_17__::func_911(905);
			return;
		case 89:
			__LIB_17__::func_911(906);
			__LIB_17__::func_911(907);
			__LIB_17__::func_911(908);
			__LIB_17__::func_911(909);
			__LIB_17__::func_911(910);
			__LIB_17__::func_911(911);
			__LIB_17__::func_911(912);
			return;
		default:
	}
}

void func_35()//Position - 0x36E00
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 263)
	{
		if (Global_32338[iVar0 /*23*/].f_16 == 6)
		{
			iVar1 = iVar0;
			__LIB_16__::func_615(iVar1);
		}
		iVar0++;
	}
}

void func_36(int iParam0)//Position - 0x7BDF1
{
	if ((Global_97371 || __LIB_0__::func_540(0)) && Global_97372 == iParam0)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 7)
	{
		return;
	}
	if (!Global_97374[iParam0 /*17*/])
	{
		return;
	}
	if (Global_97374[iParam0 /*17*/].f_9 != 263)
	{
		__LIB_14__::func_622(Global_97374[iParam0 /*17*/].f_9, 0, 0);
	}
	__LIB_32__::func_134(iParam0);
}

void func_37(int iParam0)//Position - 0x7C17E
{
	if (!__LIB_0__::func_540(0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 7)
	{
		return;
	}
	Global_97371 = 0;
	Global_43052 = 15;
	Global_97374[iParam0 /*17*/].f_7 = -1;
	if (Global_97374[iParam0 /*17*/].f_9 != 263)
	{
		__LIB_14__::func_622(Global_97374[iParam0 /*17*/].f_9, 0, 0);
	}
	__LIB_32__::func_134(iParam0);
}

void func_38(int iParam0, int iParam1, float fParam2)//Position - 0x8E9EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar0 = __LIB_14__::func_791(iParam0);
	iVar1 = __LIB_14__::func_791(iParam1);
	iVar2 = __LIB_13__::func_95(iVar0, iVar1);
	if (iVar2 < 9)
	{
		fVar3 = 0f;
		if (__LIB_0__::func_702(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5)))
		{
			fVar3 = __LIB_3__::func_108(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5));
		}
		__LIB_0__::func_706(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5), (fVar3 + fParam2));
	}
}

void func_39(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8ECCF
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_6__::func_350(iParam2, iParam1);
	iVar1 = __LIB_0__::func_161(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_0"), iParam3, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_0"), iParam3, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_0"), iParam3, true);
					break;
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_1"), iParam3, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_1"), iParam3, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_1"), iParam3, true);
					break;
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_2"), iParam3, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_2"), iParam3, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_2"), iParam3, true);
					break;
			}
			break;
		case 3:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_3"), iParam3, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_3"), iParam3, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_3"), iParam3, true);
					break;
			}
			break;
		case 4:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_4"), iParam3, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_4"), iParam3, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_4"), iParam3, true);
					break;
			}
			break;
		case 5:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_5"), iParam3, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_5"), iParam3, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_5"), iParam3, true);
					break;
			}
			break;
		case 6:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_6"), iParam3, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_6"), iParam3, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_6"), iParam3, true);
					break;
			}
			break;
		default:
			break;
	}
}

void func_40(bool bParam0, int iParam1, int iParam2)//Position - 0x914EC
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_371(iParam1);
	iVar1 = __LIB_0__::func_161(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_UNLOCK_0"), iParam2, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_UNLOCK_0"), iParam2, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_UNLOCK_0"), iParam2, true);
					break;
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_UNLOCK_1"), iParam2, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_UNLOCK_1"), iParam2, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_UNLOCK_1"), iParam2, true);
					break;
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_WEAP_UNLOCK_2"), iParam2, true);
					break;
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_WEAP_UNLOCK_2"), iParam2, true);
					break;
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_WEAP_UNLOCK_2"), iParam2, true);
					break;
			}
			break;
		default:
			break;
	}
}

void func_41(int iParam0)//Position - 0xA2038
{
	if (!__LIB_0__::func_431(iParam0, 16, 1))
	{
		__LIB_13__::func_768(iParam0, 17, 1);
	}
}

void func_42(int iParam0)//Position - 0x13FF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_113386.f_18103.f_175[iVar0 /*19*/].f_3 == iParam0)
		{
			if (BitTest(Global_113386.f_18103.f_175[iVar0 /*19*/].f_2, 0))
			{
				MISC::CLEAR_BIT(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_2), 0);
				Global_113386.f_18103.f_175[iVar0 /*19*/].f_3 = -1;
				__LIB_1__::func_31(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_5));
				Global_113386.f_18103.f_175[iVar0 /*19*/].f_8 = 1;
			}
		}
		iVar0++;
	}
}

void func_43()//Position - 0xA2423
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/].f_2 = __LIB_31__::func_774(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/].f_1);
		iVar0++;
	}
}

void func_44(int iParam0)//Position - 0x211A
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	if (Global_100441 != 12)
	{
		iVar1 = Global_78588.f_109[iParam0 /*4*/];
		Var0 = { Global_91229[iVar1 /*34*/] };
		if (BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
		{
			return;
		}
		if ((MISC::ARE_STRINGS_EQUAL(&Var0, "me_amanda1") || MISC::ARE_STRINGS_EQUAL(&Var0, "me_jimmy1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "me_tracey1"))
		{
			iVar2 = 4;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&Var0, "carsteal4") || MISC::ARE_STRINGS_EQUAL(&Var0, "fbi3"))
		{
			iVar2 = 3;
		}
		else if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 2))
		{
			if (BitTest(Global_91229[iVar1 /*34*/].f_15, 17))
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else
		{
			iVar2 = 2;
		}
		iVar3 = __LIB_0__::func_510(iVar1);
		sVar4 = { Global_91229[iVar1 /*34*/].f_8 };
		if (iVar1 == 90)
		{
			switch (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[7])
			{
				case 1:
					StringConCat(&sVar4, "A", 8);
					break;
				case 2:
					StringConCat(&sVar4, "B", 8);
					break;
				}
		}
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&sVar4, iVar3, Global_100478, 0);
		__LIB_0__::func_47(&sVar4, iVar3, Global_100478, 1, 0);
		if (__LIB_14__::func_771(&Var0, iVar2, iVar1))
		{
			Global_100441.f_1 = iParam0;
		}
	}
}

int func_45(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3225C
{
	char* sVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (__LIB_17__::func_909(*uParam1, __LIB_17__::func_341(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_46(int iParam0, bool bParam1)//Position - 0x88383
{
	__LIB_28__::func_246(iParam0);
	__LIB_17__::func_452(iParam0, bParam1);
	__LIB_17__::func_443(iParam0);
	__LIB_17__::func_442(iParam0);
	__LIB_17__::func_441(iParam0);
	__LIB_17__::func_440(iParam0);
	__LIB_17__::func_439(iParam0);
}

void func_47(int iParam0)//Position - 0x9C758
{
	int iVar0;
	if (__LIB_37__::func_429())
	{
		iVar0 = 0;
		while (iVar0 < 198)
		{
			Global_39592[iVar0] = 1;
			__LIB_0__::func_456(iVar0, 1, iParam0, 0);
			iVar0++;
		}
		__LIB_37__::func_452();
		__LIB_37__::func_472();
	}
	Global_41584 = 1;
}

void func_48(int iParam0, float fParam1, bool bParam2)//Position - 0xBCC7
{
	if (bParam2)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_31969 = 1;
}

float func_49(int iParam0)//Position - 0xBD02
{
	return Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iParam0 /*6*/].f_5;
}

void func_50(int iParam0, float fParam1, bool bParam2)//Position - 0xBD1A
{
	if (bParam2)
	{
		Global_113386.f_18574[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_113386.f_18574[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_31969 = 1;
}

var func_51(int iParam0)//Position - 0xBD4F
{
	return Global_113386.f_18574[iParam0 /*6*/].f_5;
}

int func_52(float fParam0)//Position - 0xBEC7
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_53(int iParam0, int iParam1, bool bParam2)//Position - 0xBEFC
{
	float fVar0;
	float fVar1;
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

void func_54(int iParam0, int iParam1)//Position - 0xD60D
{
	int iVar0;
	int iVar1;
	iVar0 = Global_63379[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_63379[iParam1 /*13*/].f_1 = iParam0;
	iVar1 = iParam0 + 1;
	STATS::STAT_SET_INT(iVar0, iVar1, true);
	if (__LIB_0__::func_2(0) && Global_63146)
	{
		MISC::ADD_REPLAY_STAT_VALUE(iVar0);
		MISC::ADD_REPLAY_STAT_VALUE(iParam0);
		MISC::ADD_REPLAY_STAT_VALUE(iParam1);
	}
}

int func_55(int iParam0, int iParam1)//Position - 0xB9D9
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_63379[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_113386.f_24904[4 /*4*/] == __LIB_0__::func_683())
	{
		Global_63379[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_63379[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_63379[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_63379[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0)//Position - 0xD0B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/].f_5 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_57(int iParam0)//Position - 0xF61
{
	switch (iParam0)
	{
		case 86:
		case 90:
		case 87:
		case 89:
		case 88:
		case 71:
		case 74:
		case 75:
		case 72:
		case 73:
		case 91:
		case 92:
		case 93:
		case 66:
		case 68:
		case 69:
		case 70:
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
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 40:
		case 41:
		case 42:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 43:
		case 44:
		case 45:
		case 48:
		case 49:
		case 59:
		case 60:
		case 61:
		case 65:
			return 1;
			break;
	}
	return 0;
}

void func_58(int iParam0)//Position - 0x6F82
{
	int iVar0;
	if (__LIB_0__::func_2(0))
	{
		return;
	}
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (BitTest(Global_32338[iVar0 /*23*/].f_11, 9))
	{
		return;
	}
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 9);
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

int func_59(int iParam0)//Position - 0x6FFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	iVar1 = BitTest(Global_32338[iVar0 /*23*/].f_11, 0);
	iVar2 = BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
	if (iVar1 && iVar2)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x76EB
{
	switch (iParam0)
	{
		case 67:
		case 90:
		case 0:
		case 31:
		case 27:
		case 28:
		case 50:
		case 51:
		case 52:
		case 53:
		case 56:
		case 57:
			return 0;
			break;
	}
	return 1;
}

void func_61(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x7E139
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_62(bool bParam0)//Position - 0x83EAA
{
	if (!__LIB_0__::func_374(bParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
}

void func_63(int iParam0, int iParam1, int iParam2)//Position - 0x62F8
{
	if (Global_96287 == 5)
	{
		if (!__LIB_13__::func_94())
		{
			__LIB_17__::func_899(Global_96288);
		}
	}
	if (iParam0 >= 94)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 != iParam2 & 63)
	{
		return;
	}
	if (Global_96287 != 0)
	{
		if (Global_96288 != iParam0)
		{
			return;
		}
		if (Global_96289 != iParam2)
		{
		}
	}
	Global_96288 = iParam0;
	Global_96287 = iParam1;
	Global_96289 = iParam2;
}

int func_64()//Position - 0x637C
{
	if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_201()) || __LIB_0__::func_217())
	{
		return 1;
	}
	return 0;
}

void func_65(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x84C5
{
	__LIB_0__::func_218(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_66(int iParam0, bool bParam1)//Position - 0x76EFE
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 10, 0))
		{
			__LIB_13__::func_768(iParam0, 10, 0);
			__LIB_1__::func_714(iParam0);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 10, 0))
	{
		__LIB_13__::func_776(iParam0, 10, 0);
		__LIB_1__::func_714(iParam0);
	}
}

void func_67(int iParam0, bool bParam1)//Position - 0x769F7
{
	if (bParam1)
	{
		if (!__LIB_0__::func_431(iParam0, 8, 0))
		{
			__LIB_13__::func_768(iParam0, 8, 0);
			__LIB_1__::func_714(iParam0);
		}
	}
	else if (__LIB_0__::func_431(iParam0, 8, 0))
	{
		__LIB_13__::func_776(iParam0, 8, 0);
		__LIB_1__::func_714(iParam0);
	}
}

int func_68(var uParam0)//Position - 0x7DD8E
{
	int iVar0;
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!__LIB_31__::func_745(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

void func_69(var uParam0)//Position - 0x7DF57
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			__LIB_31__::func_748(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

int func_70()//Position - 0x5DEF
{
	int iVar0;
	iVar0 = __LIB_0__::func_350(PLAYER::PLAYER_PED_ID(), 3);
	if (((((iVar0 >= 0 && iVar0 <= 15) || (iVar0 >= 135 && iVar0 <= 150)) || (iVar0 >= 151 && iVar0 <= 160)) || (iVar0 >= 161 && iVar0 <= 168)) || iVar0 == 174)
	{
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_350(PLAYER::PLAYER_PED_ID(), 4);
	if ((iVar0 >= 0 && iVar0 <= 15) || iVar0 == 93)
	{
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_350(PLAYER::PLAYER_PED_ID(), 6);
	if ((((((((iVar0 >= 0 && iVar0 <= 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 18) || (iVar0 >= 39 && iVar0 <= 54)) || (iVar0 >= 55 && iVar0 <= 70)) || (iVar0 >= 71 && iVar0 <= 86)) || (iVar0 >= 87 && iVar0 <= 98))
	{
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_71(var uParam0)//Position - 0x71C7
{
	int iVar0;
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						__LIB_31__::func_747(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

int func_72()//Position - 0xB32
{
	return Global_97362;
}

void func_73(var uParam0)//Position - 0xD48
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
			Global_43019[iVar0 /*4*/].f_1 = 7;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_74(int iParam0)//Position - 0x29E1
{
	TASK::CLEAR_PED_TASKS(iParam0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, true);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
}

void func_75(int* iParam0)//Position - 0x2A34
{
	if (PHYSICS::DOES_ROPE_EXIST(iParam0))
	{
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(*iParam0))
		{
			PHYSICS::DELETE_ROPE(iParam0);
		}
	}
}

void func_76(int* iParam0)//Position - 0x2A55
{
	var uVar0;
	char* sVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
					{
						ENTITY::DETACH_ENTITY(*iParam0, true, true);
					}
				}
				iVar2 = HUD::GET_BLIP_FROM_ENTITY(*iParam0);
				if (iVar2 != 0)
				{
					HUD::REMOVE_BLIP(&iVar2);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missarmenian3leadinoutArmenian_3_int", "_intro_loop_car", 2))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, 1f, true);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_77(int* iParam0)//Position - 0x2ADE
{
	var uVar0;
	char* sVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				OBJECT::DELETE_OBJECT(iParam0);
			}
		}
	}
}

void func_78(int* iParam0)//Position - 0x2B18
{
	var uVar0;
	char* sVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, true, true);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_79()//Position - 0x2D0A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
			{
				if (!PED::IS_PED_TRACKED(Global_96938.f_9[iVar0]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(Global_96938.f_9[iVar0]);
				}
			}
		}
		iVar0++;
	}
}

int func_80(int iParam0)//Position - 0x2D68
{
	switch (iParam0)
	{
		case 69:
		case 86:
		case 17:
			return 1;
			break;
	}
	return 0;
}

float func_81(int iParam0)//Position - 0x2D91
{
	switch (iParam0)
	{
		case 69:
			return 6.6542f;
			break;
		case 2:
			return 264.248f;
			break;
		case 17:
			return 336.2897f;
			break;
		case 86:
			return 6.6542f;
			break;
		case 63:
			return 104.5966f;
			break;
		case 64:
			return 108f;
			break;
		case 30:
			return 22.1186f;
			break;
		case 76:
			return 44.5328f;
			break;
		case 43:
			return 239.6906f;
			break;
		case 49:
			return 261.8634f;
			break;
	}
	return 0f;
}

Vector3 func_82(int iParam0)//Position - 0x2E4B
{
	switch (iParam0)
	{
		case 69:
			return 717.6823f, -973.259f, 24.3306f;
			break;
		case 2:
			return -60.4359f, -1109.5474f, 25.4358f;
			break;
		case 17:
			return -790.8605f, 179.0219f, 71.8352f;
			break;
		case 86:
			return 717.6823f, -973.259f, 24.3306f;
			break;
		case 63:
			return 1977.7225f, 3815.1948f, 32.427f;
			break;
		case 64:
			return 1980.1436f, 3816.593f, 31.2676f;
			break;
		case 30:
			return 149.9259f, -680.9203f, 41.0273f;
			break;
		case 76:
			return 128.5236f, -1291.6091f, 28.2695f;
			break;
		case 43:
			return -14.4295f, -1437.7717f, 30.1015f;
			break;
		case 49:
			return 292.1715f, 186.6756f, 103.3441f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_83(struct<3> Param0)//Position - 0x558C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, 0.1f, 0.1f, 2f, true, true, 0);
	}
}

float func_84(int iParam0)//Position - 0x5666
{
	switch (iParam0)
	{
		case 69:
			return 2.5f;
			break;
		case 2:
			return 4f;
			break;
		case 17:
			return 2.5f;
			break;
		case 86:
			return 2.5f;
			break;
		case 63:
			return 2.5f;
			break;
		case 64:
			return 2.5f;
			break;
		case 30:
			return 2.5f;
			break;
		case 76:
			return 2.5f;
			break;
		case 43:
			return 2.5f;
			break;
		case 49:
			return 7f;
			break;
	}
	return 0f;
}

void func_85(int iParam0)//Position - 0x61C6
{
	int iVar0;
	if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 15))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938[iVar0], false, false, false, false, false, false, false, false);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938.f_9[iVar0], false, false, false, false, false, false, false, false);
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_96938.f_9[iVar0], 16);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938.f_28[iVar0], false, false, false, false, false, false, false, false);
				}
			}
			iVar0++;
		}
	}
}

void func_86(int iParam0)//Position - 0x6F56
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
	MISC::SET_BIT(&(Global_113386.f_10016.f_26[iVar1]), iVar0);
}

bool func_87(int iParam0)//Position - 0x709E
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
	return BitTest(Global_113386.f_10016.f_26[iVar1], iVar0);
}

int func_88(int iParam0)//Position - 0x7362
{
	if (!__LIB_0__::func_374(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

float func_89(struct<3> Param0)//Position - 0x7386
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
}

Vector3 func_90(int iParam0, bool bParam1)//Position - 0x73CD
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_32338[iVar0 /*23*/][bParam1 /*3*/];
}

void func_91(var uParam0)//Position - 0x769B
{
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 2);
	MISC::CLEAR_BIT(&(uParam0->f_1), 3);
	MISC::CLEAR_BIT(&(uParam0->f_1), 6);
	MISC::CLEAR_BIT(&(uParam0->f_1), 7);
	MISC::CLEAR_BIT(&(uParam0->f_1), 8);
	MISC::CLEAR_BIT(&(uParam0->f_1), 9);
	MISC::CLEAR_BIT(&(uParam0->f_1), 10);
	MISC::CLEAR_BIT(&(uParam0->f_1), 11);
}

int func_92()//Position - 0x8987
{
	if (__LIB_0__::func_178(58))
	{
		return 1;
	}
	return 0;
}

void func_93(int* iParam0)//Position - 0x8B2B
{
	var uVar0;
	char* sVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, true))
					{
						VEHICLE::DELETE_VEHICLE(iParam0);
					}
					else
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					}
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(iParam0);
				}
			}
		}
	}
}

void func_94()//Position - 0x8BA7
{
	MISC::CLEAR_AREA(-1894.9221f, -565.0509f, 11.3552f, 3f, true, false, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("comet2"), -1894.9221f, -565.0509f, 11.3552f, 49.63f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("comet2"));
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_96938[0], 6);
}

int func_95()//Position - 0x8C10
{
	if (STREAMING::HAS_MODEL_LOADED(joaat("comet2")))
	{
		return 1;
	}
	return 0;
}

void func_96()//Position - 0x8C29
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("comet2"));
}

void func_97()//Position - 0x8C3A
{
	STREAMING::REQUEST_MODEL(joaat("comet2"));
}

void func_98()//Position - 0x8DE5
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
}

void func_99()//Position - 0x911D
{
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
	{
		Global_78336 = 1;
	}
}

float func_100(int* iParam0)//Position - 0x748C4
{
	if (__LIB_0__::func_702(iParam0))
	{
		if (__LIB_0__::func_701(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (__LIB_0__::func_616(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_101()//Position - 0x748FD
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 5f))
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, false, false, true, true, false, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 1000, true, 0);
		}
	}
}

int func_102(char* sParam0)//Position - 0x75327
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Michael"))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Franklin"))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Trevor"))
	{
		return 2;
	}
	return 144;
}

int func_103(char* sParam0)//Position - 0x7536D
{
	int iVar0;
	int iVar1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar0 = -1;
		iVar1 = 0;
		while (iVar1 < Global_78343 && iVar0 == -1)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_78344[iVar1 /*6*/]), sParam0))
			{
				iVar0 = iVar1;
			}
			iVar1++;
		}
		if (iVar0 == -1)
		{
			if (Global_78343 < 6)
			{
				StringCopy(&(Global_78344[Global_78343 /*6*/]), sParam0, 24);
				Global_78343++;
				return (Global_78343 - 1);
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return -1;
}

int func_104()//Position - 0x76EF1
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_105(var uParam0, char* sParam1)//Position - 0x81BA8
{
	__LIB_38__::func_61(uParam0, 1, -1, sParam1, 0);
}

void func_106(var uParam0, int iParam1)//Position - 0x81BBB
{
	__LIB_38__::func_61(uParam0, 0, iParam1, "NULL", 0);
}

void func_107()//Position - 0x81C98
{
	STREAMING::REMOVE_ANIM_DICT("misstimelapse@franklinold_home");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_fa_frontdoor"));
}

void func_108()//Position - 0x81CB2
{
	STREAMING::REQUEST_ANIM_DICT("misstimelapse@franklinold_home");
	STREAMING::REQUEST_MODEL(joaat("v_ilev_fa_frontdoor"));
}

int func_109(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x82392
{
	if ((((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Param0, Param1, fParam2, joaat("WEAPON_GRENADELAUNCHER"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Param0, Param1, fParam2, joaat("WEAPON_RPG"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Param0, Param1, fParam2, joaat("WEAPON_GRENADE"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Param0, Param1, fParam2, joaat("WEAPON_MOLOTOV"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Param0, Param1, fParam2, joaat("WEAPON_FLARE"), false))
	{
		return 1;
	}
	return 0;
}

void func_110(int iParam0)//Position - 0x82F6F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		ENTITY::SET_ENTITY_VISIBLE(iParam0, true, false);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	}
}

void func_111(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x84860
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
}

void func_112(int iParam0)//Position - 0x8DA38
{
	Global_100493 = iParam0;
}

struct<5> func_113(int iParam0, char* sParam1, float fParam2, int iParam3)//Position - 0x8E4A7
{
	struct<5> Var0;
	struct<3> Var1;
	Var0 = 263;
	Var0.f_2 = 1065353216;
	Var0.f_0 = iParam0;
	Var0.f_1 = sParam1;
	Var0.f_2 = fParam2;
	if (iParam3 != -1)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iParam3, &Var1);
		__LIB_17__::func_561(Var0.f_0, Var1);
		Var0.f_3 = iParam3 + 1;
	}
	else if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Var0.f_1, Global_32338[Var0.f_0 /*23*/][0 /*3*/], &iParam3))
	{
		Var0.f_3 = iParam3;
	}
	return Var0;
}

struct<5> func_114(int iParam0, int iParam1)//Position - 0x8E572
{
	struct<5> Var0;
	Var0 = 263;
	Var0.f_2 = 1065353216;
	Var0.f_0 = iParam0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		Var0.f_4 = iParam1;
	}
	return Var0;
}

void func_115(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7)//Position - 0x936BB
{
	*uParam0 = iParam1;
	uParam0->f_2 = fParam2;
	uParam0->f_3 = fParam3;
	uParam0->f_4 = fParam4;
	uParam0->f_6 = iParam5;
	uParam0->f_5 = iParam6;
	if (BitTest(Global_91229[iParam1 /*34*/].f_15, 13))
	{
		Global_94426[iParam1 /*2*/].f_1 = (fParam2 + 5f);
	}
	else
	{
		Global_94426[iParam1 /*2*/].f_1 = 20f;
	}
	if (BitTest(iParam7, 0))
	{
		MISC::SET_BIT(&(uParam0->f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
	if (BitTest(iParam7, 1))
	{
		MISC::SET_BIT(&(uParam0->f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 5);
	}
	if (BitTest(iParam7, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 12);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 9);
	MISC::SET_BIT(&(uParam0->f_1), 0);
}

int func_116(int iParam0)//Position - 0xF3E
{
	if (BitTest(Global_91229[iParam0 /*34*/].f_15, 15))
	{
		return 2;
	}
	if (__LIB_38__::func_57(iParam0))
	{
		return 3;
	}
	return 0;
}

void func_117(var uParam0)//Position - 0x58B0
{
	if (!BitTest(uParam0->f_1, 8))
	{
		if (Global_96288 == *uParam0)
		{
			__LIB_17__::func_899(*uParam0);
		}
		MISC::CLEAR_BIT(&(uParam0->f_1), 6);
		MISC::CLEAR_BIT(&(uParam0->f_1), 7);
	}
}

void func_118(int iParam0)//Position - 0x6528
{
	int iVar0;
	int iVar1;
	if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 15))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938[iVar0], true, true, true, true, true, false, false, false);
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Global_96938[iVar0], true), 3.75f, 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938.f_9[iVar0], true, true, true, true, true, false, false, false);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_96938.f_9[iVar0], 16);
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[iVar0], true), 3.75f, 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938.f_28[iVar0], true, true, true, true, true, false, false, false);
				}
			}
			iVar0++;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 15))
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f, 0);
		}
		if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 15) && !BitTest(Global_91229[iParam0 /*34*/].f_15, 24))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::GET_ENTITY_HEALTH(iVar1) < 1)
				{
					ENTITY::SET_ENTITY_HEALTH(iVar1, 1, 0);
				}
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar1, 1f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar1, 1f);
				}
				__LIB_0__::func_213(iVar1, 2.5f, 2, 0.25f, 0, 1, 0);
				if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 500, 0);
						}
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 64);
					}
				}
			}
		}
	}
}

void func_119()//Position - 0x7A79
{
	if (Global_97361)
	{
		__LIB_17__::func_467();
	}
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_120()//Position - 0x8E8B
{
	int iVar0;
	int iVar1;
	if (!Global_97361)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938[iVar0], true, true, true, true, true, false, false, false);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938.f_9[iVar0], true, true, true, true, true, false, false, false);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_96938.f_9[iVar0], 16);
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[iVar0], true), 6f, 0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[iVar0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[iVar0], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_96938.f_28[iVar0], true, true, true, true, true, false, false, false);
				}
			}
			iVar0++;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 6f, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::GET_ENTITY_HEALTH(iVar1) < 1)
				{
					ENTITY::SET_ENTITY_HEALTH(iVar1, 1, 0);
				}
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar1, 1f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar1) < 1f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar1, 1f);
				}
				__LIB_0__::func_213(iVar1, 2.5f, 2, 0.5f, 0, 1, 0);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 500, 0);
					}
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
		__LIB_17__::func_468(1);
		PLAYER::FORCE_CLEANUP(8);
		Global_97361 = 1;
	}
}

void func_121(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x91AF
{
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
	{
		if (!(Global_78322 && Global_78324 == iParam0))
		{
			Global_78324 = iParam0;
			StringCopy(&Global_78325, sParam1, 24);
			Global_78331[0] = iParam2;
			Global_78331[1] = iParam3;
			Global_78331[2] = iParam4;
			Global_78322 = 1;
			Global_78323 = 0;
			__LIB_37__::func_988();
		}
	}
}

int func_122(int iParam0, char* sParam1, var uParam2, float fParam3)//Position - 0x8E3AA
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, *uParam2, &Var0))
	{
		if (!__LIB_0__::func_490(Global_32338[iParam0 /*23*/][0 /*3*/], Var0, 0.1f, 0))
		{
			fVar2 = __LIB_0__::func_331(((__LIB_3__::func_480(0.2f, (TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sParam1, *uParam2) * fParam3)) * SYSTEM::TIMESTEP()) / MISC::GET_DISTANCE_BETWEEN_COORDS(Global_32338[iParam0 /*23*/][0 /*3*/], Var0, true)), 0f, 1f);
			Var1 = { __LIB_1__::func_576(Global_32338[iParam0 /*23*/][0 /*3*/], Var0, fVar2) };
		}
		else
		{
			Var1 = { Var0 };
			*uParam2++;
		}
		__LIB_17__::func_561(iParam0, Var1);
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar3);
		if (*uParam2 >= iVar3)
		{
			*uParam2 = (*uParam2 - 1);
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_123()//Position - 0x8AAD9
{
	if (__LIB_38__::func_68(&(Global_96938.f_209)))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x925F0
{
	var uVar0[20];
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar1 = PED::GET_PED_NEARBY_VEHICLES(iParam0, &uVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar2], false))
			{
				if (__LIB_0__::func_527(uVar0[iVar2], Param1, Param2, fParam3))
				{
					return 0;
				}
			}
			iVar2++;
		}
	}
	return 1;
}

void func_125(int iParam0)//Position - 0x25C1
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(Global_97919.f_47, bVar0))
		{
			if (Global_97919[bVar0] == iParam0)
			{
				MISC::CLEAR_BIT(&(Global_97919.f_47), bVar0);
			}
			if (__LIB_3__::func_423(Global_113386.f_2363.f_539.f_2296[bVar0]))
			{
				Global_113386.f_2363.f_539.f_2296[bVar0] = -15;
			}
			if (!__LIB_0__::func_490(Global_113386.f_2363.f_539.f_2300[bVar0 /*3*/], 0f, 0f, 0f, 1.5f, 0))
			{
				Global_113386.f_2363.f_539.f_2300[bVar0 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_2363.f_539.f_2310[bVar0] = 0f;
			}
		}
		bVar0++;
	}
}

void func_126(var uParam0, bool bParam1)//Position - 0x818D0
{
	int iVar0;
	if (!bParam1)
	{
		__LIB_38__::func_69(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_14__::func_579(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

int func_127(int iParam0)//Position - 0x6778
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = __LIB_17__::func_341();
				if (!__LIB_0__::func_374(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_691()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || __LIB_0__::func_201()) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 4:
						if (((((__LIB_0__::func_201() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_217()) || __LIB_0__::func_690()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 5:
						if ((((__LIB_0__::func_194(8, -1) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_690()) || __LIB_0__::func_718())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || __LIB_0__::func_201()) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_719()) || __LIB_0__::func_691()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || __LIB_0__::func_201()) || __LIB_0__::func_719()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || Global_44238) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_690()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_690()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217())
						{
							return 0;
						}
						break;
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
	return 1;
}

bool func_128(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F6B
{
	struct<2> Var0;
	__LIB_17__::func_666(iParam0, &Var0);
	__LIB_13__::func_812(iParam0, &Var0, &(Var0.f_1));
	return __LIB_17__::func_96(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

void func_129()//Position - 0x7C48
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_38__::func_91(&(Global_97374[iVar0 /*17*/].f_10));
		iVar0++;
	}
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
}

void func_130()//Position - 0x897D
{
	__LIB_38__::func_76(&(Global_96938[0]));
}

void func_131(int iParam0)//Position - 0xCD4B
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_77137[iParam0] = 1;
}

void func_132()//Position - 0x86E7A
{
	__LIB_38__::func_99();
}

void func_133(int iParam0)//Position - 0x86E9F
{
	MISC::SET_BIT(&Global_96452, iParam0);
}

void func_134(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x8D629
{
	int iVar0;
	if (bParam3)
	{
		MISC::SET_BIT(&iVar0, 26);
	}
	__LIB_38__::func_61(uParam0, 8, iParam2, sParam1, iVar0);
}

void func_135(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8DF6F
{
	int iVar0;
	if (Global_78324 == iParam0)
	{
		if (Global_78381 < 30)
		{
			Global_78382[Global_78381 /*4*/] = __LIB_38__::func_103(sParam1);
			Global_78382[Global_78381 /*4*/].f_1 = iParam2;
			Global_78382[Global_78381 /*4*/].f_2 = iParam3;
			Global_78382[Global_78381 /*4*/].f_3 = iParam4;
			Global_78381++;
			iVar0 = __LIB_38__::func_102(sParam1);
			if (iVar0 != 144)
			{
				MISC::SET_BIT(&(Global_78339[iVar0]), iParam2);
			}
		}
	}
}

void func_136()//Position - 0x8ED78
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
}

bool func_137()//Position - 0x8EDF6
{
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI", false, -1);
}

void func_138()//Position - 0x8EE15
{
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI", false, -1);
}

void func_139()//Position - 0x8F0D3
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -700.1431f, -917.7708f, 18.2147f);
	if (fVar0 < 625f)
	{
		if (iLocal_437 == -1)
		{
			iLocal_437 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_437, "ASS_PAYPHONE_RING_master", -700.1431f, -917.7708f, 19f, 0, false, 0, false);
		}
	}
	else if (iLocal_437 != -1)
	{
		__LIB_2__::func_814(&iLocal_437);
		iLocal_437 = -1;
	}
}

void func_140()//Position - 0x8F1F2
{
	struct<3> Var0;
	Var0 = { -703.5674f, -917.5444f, 18.2147f };
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0 + Vector(3f, 2f, 3f), Var0 - Vector(3f, 2f, 3f), false, true, true, true);
}

void func_141()//Position - 0x8F2E5
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_38__::func_99();
}

int func_142()//Position - 0x8F378
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leaning@"))
	{
		return 1;
	}
	return 0;
}

void func_143()//Position - 0x8F391
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
}

void func_144()//Position - 0x8F3A2
{
	STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
}

void func_145()//Position - 0x8901
{
	__LIB_38__::func_93(&(Global_96938[0]));
}

void func_146()//Position - 0x8F313
{
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(8.2495f, -947.0913f, -1509.8623f) + Vector(2f, 2f, 2f), Vector(8.2495f, -947.0913f, -1509.8623f) - Vector(2f, 2f, 2f), false, true, true, true);
	MISC::CLEAR_AREA(-1509.8623f, -947.0913f, 6.2495f, 20f, true, false, false, false);
	__LIB_38__::func_121(3, "ASS_INT_2_ALT1", -1, 0, -1);
}

int func_147()//Position - 0x878F
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	char* sVar3;
	Var0 = { __LIB_38__::func_90(93, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.75f * 2.75f))
		{
			if (__LIB_11__::func_283(54))
			{
				iVar2 = 500;
				sVar3 = "AM_H_SHRCOST1" /* GXT: $500 */;
			}
			else if (__LIB_11__::func_283(55))
			{
				iVar2 = 1000;
				sVar3 = "AM_H_SHRCOST2" /* GXT: $1000 */;
			}
			else if (__LIB_11__::func_283(58))
			{
				iVar2 = 2000;
				sVar3 = "AM_H_SHRCOST5" /* GXT: $2000 */;
			}
			if (__LIB_15__::func_806(0) >= iVar2)
			{
				return 1;
			}
			switch (__LIB_13__::func_121("AM_H_SHRMON" /* GXT: Dr. Friedlander currently charges ~a~ for a therapy session. Return with more money. */))
			{
				case 2:
					__LIB_38__::func_65("AM_H_SHRMON" /* GXT: Dr. Friedlander currently charges ~a~ for a therapy session. Return with more money. */, sVar3, 3, 0, 1000, 10000, 1, 0, 0, 0);
					break;
			}
		}
		else if (__LIB_13__::func_121("AM_H_SHRMON" /* GXT: Dr. Friedlander currently charges ~a~ for a therapy session. Return with more money. */) == 1)
		{
			StringCopy(&Global_112029, "", 16);
		}
	}
	return 0;
}

int func_148(var uParam0)//Position - 0x8590B
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_1))
			{
				return __LIB_38__::func_122(*uParam0, uParam0->f_1, &(uParam0->f_3), uParam0->f_2);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, false))
	{
		__LIB_17__::func_561(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true));
	}
	return 1;
}

void func_149(int* iParam0)//Position - 0x2902
{
	var uVar0;
	char* sVar1;
	int iVar2;
	__LIB_38__::func_125(*iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						__LIB_38__::func_74(*iParam0);
						ENTITY::SET_ENTITY_HAS_GRAVITY(*iParam0, true);
						ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
						TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
						if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
							{
								ENTITY::DETACH_ENTITY(*iParam0, true, true);
							}
							ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
							TASK::TASK_WANDER_STANDARD(*iParam0, 40000f, 0);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar2);
						}
						PED::SET_PED_KEEP_TASK(*iParam0, true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

int func_150()//Position - 0x75F3
{
	__LIB_13__::func_767();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_151(int* iParam0)//Position - 0xCFE8
{
	var uVar0;
	char* sVar1;
	__LIB_38__::func_125(*iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						__LIB_38__::func_74(*iParam0);
						if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
							{
								ENTITY::DETACH_ENTITY(*iParam0, true, true);
							}
							ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
						}
						ENTITY::SET_ENTITY_HAS_GRAVITY(*iParam0, true);
						ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 16, true);
						TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
						TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
						PED::SET_PED_KEEP_TASK(*iParam0, true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_152(int* iParam0)//Position - 0x7F13A
{
	var uVar0;
	char* sVar1;
	__LIB_38__::func_125(*iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				__LIB_38__::func_74(*iParam0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
					{
						ENTITY::DETACH_ENTITY(*iParam0, true, true);
					}
					ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
				}
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
				ENTITY::SET_ENTITY_HAS_GRAVITY(*iParam0, true);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

int func_153()//Position - 0x853D1
{
	return __LIB_38__::func_68(&(Global_96938.f_209));
}

void func_154()//Position - 0x87BEE
{
	__LIB_38__::func_126(&(Global_96938.f_209), 0);
}

void func_155(int* iParam0)//Position - 0x2580
{
	var uVar0;
	char* sVar1;
	__LIB_38__::func_125(*iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				PED::DELETE_PED(iParam0);
			}
		}
	}
}

int func_156(int iParam0)//Position - 0x55BC
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return -1;
	}
	if (BitTest(Global_32338[iVar0 /*23*/].f_11, 19))
	{
		if (__LIB_0__::func_374(__LIB_15__::func_944()))
		{
			return Global_32338[iVar0 /*23*/].f_12[__LIB_15__::func_944()];
		}
	}
	return Global_32338[iVar0 /*23*/].f_12[0];
}

Vector3 func_157(int iParam0)//Position - 0x5718
{
	switch (iParam0)
	{
		case 69:
			return 717.6356f, -974.0173f, 23.9143f;
			break;
		case 2:
			return -60.4359f, -1109.5474f, 25.4358f;
			break;
		case 17:
			return -790.8605f, 179.0219f, 71.8352f;
			break;
		case 86:
			return 717.6356f, -974.0173f, 23.9143f;
			break;
		case 63:
			return 1977.7225f, 3815.1948f, 32.427f;
			break;
		case 64:
			return 1980.1436f, 3816.593f, 31.2676f;
			break;
		case 30:
			return 149.9259f, -680.9203f, 41.0273f;
			break;
		case 76:
			return 128.5236f, -1291.6091f, 28.2695f;
			break;
		case 43:
			return -14.4295f, -1437.7717f, 30.1015f;
			break;
		case 49:
			return 295.877f, 185.7382f, 103.2762f;
			break;
		case 84:
			return 115.4478f, -1295.9147f, 28.2692f;
			break;
		case 85:
			return 115.4478f, -1295.9147f, 28.2692f;
			break;
		case 62:
			switch (__LIB_15__::func_944())
			{
				case 2:
					return 1973.7245f, 3815.1743f, 32.4261f;
					break;
				default:
					return -817.8629f, 177.6462f, 71.2278f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_158(int iParam0)//Position - 0x5CEE
{
	if (iParam0 == 86)
	{
		if (!__LIB_38__::func_70())
		{
			return 0;
		}
	}
	if (Global_97361)
	{
		return 0;
	}
	if (__LIB_0__::func_75())
	{
		return 0;
	}
	if (Global_91229[iParam0 /*34*/].f_13 == -1 && Global_91229[iParam0 /*34*/].f_14 == -1)
	{
		return 0;
	}
	if (__LIB_13__::func_692(Global_91229[iParam0 /*34*/].f_13, Global_91229[iParam0 /*34*/].f_14))
	{
		return 0;
	}
	if (BitTest(Global_91229[iParam0 /*34*/].f_15, 23))
	{
		return 1;
	}
	switch (__LIB_15__::func_944())
	{
		case 0:
			if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 8))
			{
				return 0;
			}
			break;
		case 1:
			if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 9))
			{
				return 0;
			}
			break;
		case 2:
			if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 10))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_159(int iParam0)//Position - 0x6778
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = __LIB_15__::func_944();
				if (!__LIB_0__::func_374(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_691()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || __LIB_0__::func_201()) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 4:
						if (((((__LIB_0__::func_201() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_217()) || __LIB_0__::func_690()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 5:
						if ((((__LIB_0__::func_194(8, -1) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_690()) || __LIB_0__::func_718())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || __LIB_0__::func_201()) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_719()) || __LIB_0__::func_691()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || __LIB_0__::func_201()) || __LIB_0__::func_719()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || Global_44238) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_690()) || __LIB_0__::func_217()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || __LIB_0__::func_201()) || Global_112433) || Global_31962) || __LIB_0__::func_629()) || __LIB_0__::func_194(8, -1)) || __LIB_0__::func_691()) || __LIB_0__::func_690()) || __LIB_0__::func_329()) || __LIB_0__::func_719()) || __LIB_0__::func_217())
						{
							return 0;
						}
						break;
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
	return 1;
}

void func_160()//Position - 0x85541
{
	__LIB_38__::func_126(&(Global_96938.f_209), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
}

void func_161(bool bParam0, char* sParam1, int iParam2)//Position - 0x88505
{
	struct<50> Var0;
	struct<50> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_374(bParam0))
	{
		return;
	}
	Var0 = { Global_113386.f_2363.f_539[bParam0 /*65*/] };
	Var1 = { Global_113386.f_2363.f_539[bParam0 /*65*/] };
	iVar2 = 0;
	while (iVar2 < 12)
	{
		__LIB_34__::func_227(0, iVar2, &(Var1.f_13[iVar2]), &(Var1[iVar2]), &(Var1.f_26[iVar2]), iParam2, bParam0);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 9)
	{
		__LIB_34__::func_226(0, iVar2, &(Var1.f_39[iVar2]), &(Var1.f_49[iVar2]), iParam2, bParam0);
		iVar2++;
	}
	iVar6 = __LIB_0__::func_518(bParam0);
	iVar7 = 0;
	iVar8 = 0;
	iVar3 = 0;
	while (iVar3 < 12)
	{
		if (Var1.f_13[iVar3] != Var0.f_13[iVar3] || Var1[iVar3] != Var0[iVar3])
		{
			if (__LIB_0__::func_230(iVar6, __LIB_0__::func_33(iVar3), Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bParam0], &iVar4))
			{
				Var5 = { __LIB_13__::func_798(iVar6, 2, Var1.f_59, -1) };
				Var1.f_13[2] = Var5.f_3;
				Var1[2] = Var5.f_4;
				iVar7 = 1;
			}
			if (__LIB_0__::func_231(iVar6, __LIB_0__::func_33(iVar3), Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bParam0], &iVar4))
			{
				Var5 = { __LIB_13__::func_798(iVar6, 1, Var1.f_62, -1) };
				Var1.f_13[1] = Var5.f_3;
				Var1[1] = Var5.f_4;
				iVar8 = 1;
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 9)
	{
		if (Var1.f_39[iVar3] != Var0.f_39[iVar3] || Var1.f_49[iVar3] != Var0.f_49[iVar3])
		{
			if (__LIB_0__::func_230(iVar6, 14, Global_113386.f_2363.f_539.f_253[iVar3 /*4*/][bParam0], &iVar4))
			{
				Var5 = { __LIB_13__::func_798(iVar6, 2, Var1.f_59, -1) };
				Var1.f_13[2] = Var5.f_3;
				Var1[2] = Var5.f_4;
				iVar7 = 1;
			}
			if (__LIB_0__::func_231(iVar6, 14, Global_113386.f_2363.f_539.f_253[iVar3 /*4*/][bParam0], &iVar4))
			{
				Var5 = { __LIB_13__::func_798(iVar6, 1, Var1.f_62, -1) };
				Var1.f_13[1] = Var5.f_3;
				Var1[1] = Var5.f_4;
				iVar8 = 1;
			}
		}
		iVar3++;
	}
	if (iVar8 || iVar7)
	{
		iVar9 = Global_113386.f_2363.f_539.f_204[1 /*4*/][bParam0];
		iVar10 = Global_113386.f_2363.f_539.f_204[2 /*4*/][bParam0];
		iVar11 = __LIB_0__::func_24(iVar6, iVar10, iVar9);
		if (iVar11 != -99)
		{
			Var5 = { __LIB_13__::func_798(iVar6, 0, iVar11, -1) };
			Var1.f_13[0] = Var5.f_3;
			Var1[0] = Var5.f_4;
		}
	}
	iVar3 = 0;
	while (iVar3 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, iVar3, Var1.f_13[iVar3], Var1[iVar3], __LIB_0__::func_518(bParam0));
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 9)
	{
		if (Global_100166[bParam0 /*65*/].f_39[iVar3] == -1 || Global_100166[bParam0 /*65*/].f_39[iVar3] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar3, -1, 0, __LIB_0__::func_518(bParam0));
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar3, Var1.f_39[iVar3], Var1.f_49[iVar3], __LIB_0__::func_518(bParam0));
		}
		iVar3++;
	}
	__LIB_34__::func_229(sParam1, bParam0);
}

bool func_162(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2F6B
{
	struct<2> Var0;
	__LIB_17__::func_762(iParam0, &Var0);
	__LIB_13__::func_812(iParam0, &Var0, &(Var0.f_1));
	return __LIB_17__::func_634(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

void func_163()//Position - 0xE636
{
	Global_96938.f_357 = 0;
}

void func_164(int iParam0)//Position - 0x7530F
{
	if (!__LIB_0__::func_374(iParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_17__::func_29(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

void func_165(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x77797
{
	int iVar0;
	if (Global_78324 == iParam0)
	{
		if (Global_78529 < 5)
		{
			Global_78530[Global_78529 /*4*/] = __LIB_38__::func_103(sParam1);
			Global_78530[Global_78529 /*4*/].f_1 = iParam2;
			Global_78530[Global_78529 /*4*/].f_2 = iParam3;
			Global_78530[Global_78529 /*4*/].f_3 = iParam4;
			Global_78529++;
			iVar0 = __LIB_38__::func_102(sParam1);
			if (iVar0 != 144)
			{
				MISC::SET_BIT(&(Global_78339[iVar0]), (12 + iParam2));
			}
		}
	}
}

int func_166()//Position - 0x7A713
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
		{
			return 1;
		}
	}
	return 0;
}

int func_167()//Position - 0x846F9
{
	if (__LIB_11__::func_283(26))
	{
		return 1;
	}
	return 0;
}

void func_168()//Position - 0x8479A
{
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(27.6547f, -1075.9241f, 809.1208f) + Vector(5f, 5f, 5f), Vector(27.6547f, -1075.9241f, 809.1208f) - Vector(5f, 5f, 5f), false, true, true, true);
	MISC::CLEAR_AREA(809.1208f, -1075.9241f, 27.6547f, 20f, true, false, false, false);
}

int func_169(bool bParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x8A902
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	if (!__LIB_0__::func_374(bParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar2 = 0;
	__LIB_0__::func_378(bParam0, &Var1, iParam1);
	iVar2 = Var1.f_0;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar0], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_97772[iVar0]) == iVar2 && Global_97782[iVar0] == bParam0)
				{
					if (fParam3 == -1f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_97772[iVar0], false), Param2, true) <= fParam3)
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

int func_170(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x8ADDA
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (bParam2)
	{
		if ((iVar0 == 7 || iVar0 == 2) || TASK::GET_SEQUENCE_PROGRESS(iParam0) == iParam3)
		{
			return 1;
		}
	}
	else if (iVar0 == 7 || iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_171(int iParam0, char* sParam1, var uParam2)//Position - 0xF19A
{
	int iVar0;
	if (Global_78324 == iParam0)
	{
		if (Global_78517 < 5)
		{
			Global_78518[Global_78517 /*2*/] = __LIB_38__::func_103(sParam1);
			Global_78518[Global_78517 /*2*/].f_1 = uParam2;
			Global_78517++;
			iVar0 = __LIB_38__::func_102(sParam1);
			if (iVar0 != 144)
			{
				MISC::SET_BIT(&(Global_78339[iVar0]), 0);
				MISC::SET_BIT(&(Global_78339[iVar0]), 1);
				MISC::SET_BIT(&(Global_78339[iVar0]), 2);
				MISC::SET_BIT(&(Global_78339[iVar0]), 3);
				MISC::SET_BIT(&(Global_78339[iVar0]), 4);
				MISC::SET_BIT(&(Global_78339[iVar0]), 5);
				MISC::SET_BIT(&(Global_78339[iVar0]), 6);
				MISC::SET_BIT(&(Global_78339[iVar0]), 7);
				MISC::SET_BIT(&(Global_78339[iVar0]), 8);
				MISC::SET_BIT(&(Global_78339[iVar0]), 9);
				MISC::SET_BIT(&(Global_78339[iVar0]), 10);
				MISC::SET_BIT(&(Global_78339[iVar0]), 11);
			}
		}
	}
}

void func_172(int iParam0)//Position - 0xF35E
{
	if (!__LIB_0__::func_374(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_17__::func_29(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

int func_173(int iParam0)//Position - 0x75258
{
	if (__LIB_0__::func_374(iParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_512(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_174(int iParam0)//Position - 0x75335
{
	if (__LIB_0__::func_374(iParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_16__::func_512(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

bool func_175(var uParam0)//Position - 0x7F007
{
	return __LIB_37__::func_929(uParam0, PLAYER::PLAYER_PED_ID());
}

void func_176(int* iParam0)//Position - 0xDA74
{
	var uVar0;
	char* sVar1;
	__LIB_38__::func_125(*iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(*iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					__LIB_38__::func_74(*iParam0);
					if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
						{
							ENTITY::DETACH_ENTITY(*iParam0, true, true);
						}
						ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
					}
					ENTITY::SET_ENTITY_HAS_GRAVITY(*iParam0, true);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
					TASK::TASK_COWER(*iParam0, -1);
					PED::SET_PED_KEEP_TASK(*iParam0, true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_177(int iParam0, struct<3> Param1, float fParam2)//Position - 0x75BB5
{
	if (__LIB_15__::func_939(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param1 };
			Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = fParam2;
		}
	}
}

int func_178(int iParam0)//Position - 0x55BE
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return -1;
	}
	if (BitTest(Global_32338[iVar0 /*23*/].f_11, 19))
	{
		if (__LIB_0__::func_374(__LIB_17__::func_341()))
		{
			return Global_32338[iVar0 /*23*/].f_12[__LIB_17__::func_341()];
		}
	}
	return Global_32338[iVar0 /*23*/].f_12[0];
}

Vector3 func_179(int iParam0)//Position - 0x571A
{
	switch (iParam0)
	{
		case 69:
			return 717.6356f, -974.0173f, 23.9143f;
			break;
		case 2:
			return -60.4359f, -1109.5474f, 25.4358f;
			break;
		case 17:
			return -790.8605f, 179.0219f, 71.8352f;
			break;
		case 86:
			return 717.6356f, -974.0173f, 23.9143f;
			break;
		case 63:
			return 1977.7225f, 3815.1948f, 32.427f;
			break;
		case 64:
			return 1980.1436f, 3816.593f, 31.2676f;
			break;
		case 30:
			return 149.9259f, -680.9203f, 41.0273f;
			break;
		case 76:
			return 128.5236f, -1291.6091f, 28.2695f;
			break;
		case 43:
			return -14.4295f, -1437.7717f, 30.1015f;
			break;
		case 49:
			return 295.877f, 185.7382f, 103.2762f;
			break;
		case 84:
			return 115.4478f, -1295.9147f, 28.2692f;
			break;
		case 85:
			return 115.4478f, -1295.9147f, 28.2692f;
			break;
		case 62:
			switch (__LIB_17__::func_341())
			{
				case 2:
					return 1973.7245f, 3815.1743f, 32.4261f;
					break;
				default:
					return -817.8629f, 177.6462f, 71.2278f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_180(int iParam0)//Position - 0x5CF0
{
	if (iParam0 == 86)
	{
		if (!__LIB_38__::func_70())
		{
			return 0;
		}
	}
	if (Global_97361)
	{
		return 0;
	}
	if (__LIB_0__::func_75())
	{
		return 0;
	}
	if (Global_91229[iParam0 /*34*/].f_13 == -1 && Global_91229[iParam0 /*34*/].f_14 == -1)
	{
		return 0;
	}
	if (__LIB_13__::func_692(Global_91229[iParam0 /*34*/].f_13, Global_91229[iParam0 /*34*/].f_14))
	{
		return 0;
	}
	if (BitTest(Global_91229[iParam0 /*34*/].f_15, 23))
	{
		return 1;
	}
	switch (__LIB_17__::func_341())
	{
		case 0:
			if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 8))
			{
				return 0;
			}
			break;
		case 1:
			if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 9))
			{
				return 0;
			}
			break;
		case 2:
			if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 10))
			{
				return 0;
			}
			break;
	}
	return 1;
}

Vector3 func_181(int iParam0)//Position - 0x73A1
{
	if (BitTest(Global_32338[iParam0 /*23*/].f_11, 19))
	{
		return __LIB_38__::func_90(iParam0, __LIB_17__::func_341());
	}
	return __LIB_38__::func_90(iParam0, 0);
}

void func_182(int iParam0, struct<3> Param1, var uParam2)//Position - 0x7426
{
	char* sVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (__LIB_0__::func_374(__LIB_17__::func_341()))
	{
		if (!BitTest(Global_91229[iParam0 /*34*/].f_11, __LIB_17__::func_341()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (SYSTEM::VDIST2(Param1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 64f)
				{
					__LIB_0__::func_189();
					if (!*uParam2)
					{
						bVar1 = BitTest(Global_91229[iParam0 /*34*/].f_11, 0);
						bVar2 = BitTest(Global_91229[iParam0 /*34*/].f_11, 1);
						bVar3 = BitTest(Global_91229[iParam0 /*34*/].f_11, 2);
						switch (__LIB_17__::func_341())
						{
							case 0:
								if (bVar2)
								{
									if (bVar3)
									{
										sVar0 = "TRIG_FT" /* GXT: Return as Franklin or Trevor to start this mission. */;
									}
									else
									{
										sVar0 = "TRIG_F" /* GXT: Return as Franklin to start this mission. */;
									}
								}
								else if (bVar3)
								{
									sVar0 = "TRIG_T" /* GXT: Return as Trevor to start this mission. */;
								}
								break;
							case 1:
								if (bVar1)
								{
									if (bVar3)
									{
										sVar0 = "TRIG_MT" /* GXT: Return as Michael or Trevor to start this mission. */;
									}
									else
									{
										sVar0 = "TRIG_M" /* GXT: Return as Michael to start this mission. */;
									}
								}
								else if (bVar3)
								{
									sVar0 = "TRIG_T" /* GXT: Return as Trevor to start this mission. */;
								}
								break;
							case 2:
								if (bVar1)
								{
									if (bVar2)
									{
										sVar0 = "TRIG_MF" /* GXT: Return as Michael or Franklin to start this mission. */;
									}
									else
									{
										sVar0 = "TRIG_M" /* GXT: Return as Michael to start this mission. */;
									}
								}
								else if (bVar2)
								{
									sVar0 = "TRIG_F" /* GXT: Return as Franklin to start this mission. */;
								}
								break;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							switch (__LIB_13__::func_121(sVar0))
							{
								case 2:
									__LIB_0__::func_697(sVar0, 3, 0, 1000, 10000, __LIB_17__::func_345(), 0, 0, 0);
									break;
								case 1:
									*uParam2 = 1;
									StringCopy(&Global_112029, "", 16);
									if (!__LIB_0__::func_67(7))
									{
										__LIB_0__::func_697("TRIG_SWTCH" /* GXT: To SWITCH between characters hold ~INPUT_CHARACTER_WHEEL~ and pick a character with ~INPUTGROUP_WHEEL~ */, 3, 0, 21000, 10000, __LIB_17__::func_345(), 0, 0, 0);
									}
									break;
							}
						}
					}
				}
				else if (*uParam2)
				{
					*uParam2 = 0;
				}
			}
		}
	}
}

void func_183(int iParam0, var uParam1)//Position - 0x10E4
{
	bool bVar0;
	if (!__LIB_0__::func_215(__LIB_38__::func_116(Global_97374[iParam0 /*17*/].f_5)))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(Global_97374[iParam0 /*17*/].f_8, bVar0))
		{
			if (!BitTest(Global_23010, bVar0))
			{
				MISC::SET_BIT(&Global_23010, bVar0);
			}
		}
		bVar0++;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
		{
			if (BitTest(Global_97374[iParam0 /*17*/].f_8, __LIB_17__::func_341()))
			{
				Global_97372 = iParam0;
				Global_97371 = 1;
				uParam1->f_112 = 1;
				return;
			}
		}
	}
}

void func_184()//Position - 0x2430
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[iVar0]))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Global_96938.f_28[iVar0]))
			{
				__LIB_38__::func_78(&(Global_96938.f_28[iVar0]));
			}
			else
			{
				__LIB_38__::func_77(&(Global_96938.f_28[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_38__::func_76(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_38__::func_75(&(Global_96938.f_37[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[iVar0], false))
			{
				bVar1 = true;
				if (PED::IS_PED_TRACKED(Global_96938.f_9[iVar0]))
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(Global_96938.f_9[iVar0]);
				}
				if (bVar1)
				{
					__LIB_38__::func_149(&(Global_96938.f_9[iVar0]));
				}
				else
				{
					__LIB_38__::func_155(&(Global_96938.f_9[iVar0]));
				}
			}
			else
			{
				__LIB_38__::func_149(&(Global_96938.f_9[iVar0]));
			}
		}
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_2__::func_712(&(Global_112096.f_35), 262144);
	Global_78336 = 1;
}

int func_185(int iParam0, var uParam1)//Position - 0x63CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_97374[iParam0 /*17*/].f_5;
	if (BitTest(Global_97374[iParam0 /*17*/].f_8, __LIB_17__::func_341()))
	{
		iVar1 = 0;
		if (BitTest(Global_91229[iVar0 /*34*/].f_15, 15))
		{
			iVar1 = 1;
		}
		iVar2 = 0;
		if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 22))
		{
			if (Global_97361)
			{
				if (uParam1->f_111 == -1)
				{
					uParam1->f_111 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - uParam1->f_111) > 12000)
				{
					iVar2 = 1;
				}
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			Call_Loc(uParam1->f_1[iParam0 /*13*/].f_10);
			if (StackVal || iVar2)
			{
				if (__LIB_38__::func_127(iVar1))
				{
					if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 4) || Global_97363 == iVar0)
					{
						MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 8);
						PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
						__LIB_38__::func_63(iVar0, 4, Global_97374[iParam0 /*17*/].f_10.f_6);
						Global_78588.f_7 = 1;
						uParam1->f_111 = -1;
						if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 11))
						{
							__LIB_14__::func_622(Global_91229[iVar0 /*34*/].f_10, 0, 0);
						}
						MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 1);
						if (HUD::DOES_BLIP_EXIST(uParam1->f_114))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_114));
						}
						MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 13);
						__LIB_38__::func_118(iVar0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_186(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7F865
{
	struct<50> Var0;
	int iVar1;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	__LIB_37__::func_925(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

int func_187(int iParam0, int iParam1, int iParam2)//Position - 0x835C
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 0:
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
		case 1:
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
	}
	return 999;
}

char* func_188(int iParam0, int iParam1)//Position - 0x84B2
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "MPAWARDS5";
		case 1:
			return "MPAWARDS5";
		case 2:
			return "MPAWARDS5";
		case 3:
			return "MPAWARDS6";
		default:
	}
	return "";
}

char* func_189(int iParam0, int iParam1)//Position - 0x8500
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "RaceCreator";
		case 1:
			return "DeathmatchCreator";
		case 2:
			return "PlayedCreation";
		case 3:
			return "CreatorsScore";
		default:
	}
	return "";
}

char* func_190(int iParam0, int iParam1, bool bParam2)//Position - 0x85AF
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWT_686";
		case 1:
			return "AWT_688";
		case 2:
			return "AWT_689";
		case 3:
			return "AWT_690";
		default:
	}
	return "";
}

int func_191()//Position - 0x9ED3
{
	return 29;
}

char* func_192(int iParam0, int iParam1)//Position - 0x9EDD
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "MpAwardHeists";
		case 13:
			return "MpAwardHeists";
		case 14:
			return "MpAwardHeists";
		case 15:
			return "MpAwardHeists";
		case 16:
			return "MpAwardHeists";
		case 17:
			return "MpAwardHeists";
		case 18:
			return "MpAwardHeists";
		case 19:
			return "MpAwardHeists";
		case 20:
			return "MPAwardHeists";
		case 21:
			return "MPAwardHeists";
		case 1:
			return "MPAwardHeists2";
		case 2:
			return "MPAwardHeists2";
		case 6:
			return "MPAwardHeists2";
		case 3:
			return "MPAwardHeists2";
		case 4:
			return "MPAwardHeists2";
		case 5:
			return "MPAwardHeists2";
		case 7:
			return "MPAwardHeists2";
		case 8:
			return "MPAwardHeists2";
		case 9:
			return "MPAwardHeists2";
		case 10:
			return "MPAwardHeists2";
		case 11:
			return "MPAwardHeists2";
		default:
	}
	return "MPAwardHeists";
}

char* func_193(int iParam0, int iParam1)//Position - 0xA008
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "HeadForHeists";
		case 13:
			return "GoToJail";
		case 14:
			return "LabReport";
		case 15:
			return "ProductPlacement";
		case 16:
			return "SmoothSailing";
		case 17:
			return "AllInOrder";
		case 18:
			return "Loyalty";
		case 19:
			return "CriminalMastermind";
		case 20:
			return "AnotherPerspective";
		case 21:
			return "SupportingRole";
		case 1:
			return "IAAFinale";
		case 2:
			return "SubmarineFinale";
		case 6:
			return "MissleSiloFinale";
		case 3:
			return "AllInOrderII";
		case 4:
			return "LoyaltyIV";
		case 5:
			return "CriminalMastermindIV";
		case 7:
			return "LoyaltyII";
		case 8:
			return "LoyaltyIII";
		case 9:
			return "CriminalMastermindII";
		case 10:
			return "CriminalMastermindIII";
		case 11:
			return "SupportingRoleII";
		default:
	}
	return "";
}

int func_194(int iParam0)//Position - 0xA8FC
{
	switch (iParam0)
	{
		case default:
			break;
		case 0:
			return __LIB_1__::func_360(11014, -1, 0);
		case 1:
			return __LIB_1__::func_360(11015, -1, 0);
		case 2:
			return __LIB_1__::func_360(11016, -1, 0);
		case 3:
			return __LIB_1__::func_360(11017, -1, 0);
		case 4:
			return __LIB_1__::func_360(11018, -1, 0);
		case 5:
			return __LIB_1__::func_360(11019, -1, 0);
		case 6:
			return __LIB_1__::func_360(11020, -1, 0);
		case 7:
			return __LIB_1__::func_360(11021, -1, 0);
		case 8:
			return __LIB_1__::func_360(11022, -1, 0);
		case 9:
			return __LIB_1__::func_360(11023, -1, 0);
		case 10:
			return __LIB_1__::func_360(11024, -1, 0);
		case 11:
			return __LIB_1__::func_360(11025, -1, 0);
		case 12:
			return __LIB_1__::func_360(11026, -1, 0);
		case 13:
			return __LIB_1__::func_360(11027, -1, 0);
		case 14:
			return __LIB_1__::func_360(11028, -1, 0);
		case 15:
			return __LIB_1__::func_360(11029, -1, 0);
		case 16:
			return __LIB_1__::func_360(11030, -1, 0);
		case 17:
			return __LIB_1__::func_360(11031, -1, 0);
		case 18:
			return __LIB_1__::func_360(11032, -1, 0);
		case 19:
			return __LIB_1__::func_360(11033, -1, 0);
		case 20:
			return __LIB_1__::func_360(11034, -1, 0);
		case 21:
			return __LIB_1__::func_360(11035, -1, 0);
		case 22:
			return __LIB_1__::func_360(11036, -1, 0);
		case 23:
			return __LIB_1__::func_360(11037, -1, 0);
		case 24:
			return __LIB_1__::func_360(11038, -1, 0);
		case 25:
			return __LIB_1__::func_360(11039, -1, 0);
		case 26:
			return __LIB_1__::func_360(11040, -1, 0);
		case 27:
			return __LIB_1__::func_360(11041, -1, 0);
		case 28:
			return __LIB_1__::func_360(11042, -1, 0);
		case 29:
			return __LIB_1__::func_360(11043, -1, 0);
		case 30:
			return __LIB_1__::func_360(11044, -1, 0);
		case 31:
			return __LIB_1__::func_360(11045, -1, 0);
		case 32:
			return __LIB_1__::func_360(11046, -1, 0);
		case 33:
			return __LIB_1__::func_360(11047, -1, 0);
		case 34:
			return __LIB_1__::func_360(11048, -1, 0);
		case 35:
			return __LIB_1__::func_360(11049, -1, 0);
		case 36:
			return __LIB_1__::func_360(11050, -1, 0);
		case 37:
			return __LIB_1__::func_360(11051, -1, 0);
		case 38:
			return __LIB_1__::func_360(11052, -1, 0);
		case 39:
			return __LIB_1__::func_360(11053, -1, 0);
		case 40:
			return __LIB_1__::func_360(11054, -1, 0);
		case 41:
			return __LIB_1__::func_360(11055, -1, 0);
		case 42:
			return __LIB_1__::func_360(11056, -1, 0);
		case 43:
			return __LIB_1__::func_360(11057, -1, 0);
		case 44:
			return __LIB_1__::func_360(11058, -1, 0);
		case 45:
			return __LIB_1__::func_360(11059, -1, 0);
		case 46:
			return __LIB_1__::func_360(11060, -1, 0);
		case 47:
			return __LIB_1__::func_360(11061, -1, 0);
		case 48:
			return __LIB_1__::func_360(11062, -1, 0);
		case 49:
			return __LIB_1__::func_360(11063, -1, 0);
	}
	return 0;
}

char* func_195(int iParam0, int iParam1)//Position - 0xAD56
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "MPAwards2";
		case 2:
			return "MPAwards5";
		case 3:
			return "MPAwards5";
		case 4:
			return "MPAwards5";
		case 5:
			return "MPAwards5";
		case 6:
			return "MPAwards5";
		case 7:
			return "MPAwards5";
		case 8:
			return "MPAwards5";
		case 10:
			return "MPAwards5";
		case 11:
			return "MPAwards5";
		case 12:
			return "MPAwards5";
		case 13:
			return "MPAwards5";
		case 14:
			return "MPAwards5";
		case 15:
			return "MPAwards5";
		case 16:
			return "MPAwards5";
		case 17:
			return "MPAwards5";
		case 18:
			return "MPAwards5";
		case 20:
			return "MPAwards5";
		case 21:
			return "MPAwards5";
		case 22:
			return "MPAWARDS5";
		case 23:
			return "MPAwards4";
		case 25:
			return "MPAwardHeists";
		case 26:
			return "MPAwardHeists";
		case 27:
			return "MPAWARDS6";
		case 144:
			return "MPAwardHeists";
		case 143:
			return "MPAwardHeists";
		case 146:
			return "MPAwardHeists";
		case 147:
			return "MPAwardHeists";
		case 148:
			return "MPAwardHeists";
		case 149:
			return "MPAwardNightclub";
		case 150:
			return "MPAwardNightclub";
		case 151:
			return "MPAwardNightclub";
		case 30:
			return "MPAwardsArena";
		case 31:
			return "MPAwardsArena";
		case 32:
			return "MPAwardsArena";
		case 33:
			return "MPAwardsArena";
		case 34:
			return "MPAwardsArena";
		case 35:
			return "MPAwardsArena";
		case 36:
			return "MPAwardsArena";
		case 37:
			return "MPAwardsArena";
		case 38:
			return "MPAwardsArena";
		case 39:
			return "MPAwardsArena";
		case 40:
			return "MPAwardsArena";
		case 41:
			return "MPAwardsArena";
		case 42:
			return "MPAwardsArena";
		case 43:
			return "MPAwardsArena";
		case 44:
			return "MPAwardsArena";
		case 45:
			return "MPAwardsArena";
		case 46:
			return "MPAwardsArena";
		case 47:
			return "MPAwardsArena";
		case 48:
			return "MPAwardsArena";
		case 49:
			return "MPAwardsArena";
		case 50:
			return "MPAwardsArena";
		case 51:
			return "MPAwardsArena";
		case 52:
			return "MPAwardsArena";
		case 53:
			return "MPAwardCasino";
		case 54:
			return "MPAwardCasino";
		case 55:
			return "MPAwardCasino";
		case 56:
			return "MPAwardCasino";
		case 57:
			return "MPAwardCasino";
		case 58:
			return "MPAwardCasino";
		case 59:
			return "MPAwardCasino";
		case 62:
			return "MPAwardCasino";
		case 60:
			return "MPAwardCasino";
		case 61:
			return "MPAwardCasino";
		case 63:
			return "MPAwardCasinoHeist";
		case 64:
			return "MPAwardCasinoHeist";
		case 65:
			return "MPAwardCasinoHeist";
		case 66:
			return "MPAwardCasinoHeist";
		case 67:
			return "MPAwardCasinoHeist";
		case 68:
			return "MPAwardCasinoHeist";
		case 69:
			return "MPAwardCasinoHeist";
		case 70:
			return "MPAwardCasinoHeist";
		case 71:
			return "MPAwardCasinoHeist";
		case 72:
			return "MPAwardCasinoHeist";
		case 73:
			return "MPAwardCasinoHeist";
		case 74:
			return "MPAwardCasinoHeist";
		case 75:
			return "MPAwardCasinoHeist";
		case 76:
			return "MPAwardCasinoHeist";
		case 77:
			return "MPAwardCasinoHeist";
		case 78:
			return "MPAwardCasinoHeist";
		case 79:
			return "MPAwardCasinoHeist";
		case 80:
			return "MPAwardCasinoHeist";
		case 81:
			return "MPAwardCasinoHeist";
		case 82:
			return "MPAwardCasinoHeist";
		case 83:
			return "MPAwardCasinoHeist";
		case 84:
			return "MPAwardCasinoHeist";
		case 85:
			return "MPAwardCasinoHeist";
		case 86:
			return "MPAwardCasinoHeist";
		case 87:
			return "MPAwardCasinoHeist";
		case 88:
			return "MPAwardCasinoHeist";
		case 89:
			return "MPAwardSummer2020";
		case 90:
			return "MPAwardSummer2020";
		case 93:
			return "MPAwardSummer2020";
		case 92:
			return "MPAwardSummer2020";
		case 91:
			return "MPAwardSummer2020";
		case 94:
			return "MPAwardSummer2020";
		case 95:
			return "MPAwardIslandHeist";
		case 96:
			return "MPAwardIslandHeist";
		case 97:
			return "MPAwardIslandHeist";
		case 98:
			return "MPAwardIslandHeist";
		case 99:
			return "MPAwardIslandHeist";
		case 100:
			return "MPAwardIslandHeist";
		case 101:
			return "MPAwardIslandHeist";
		case 102:
			return "MPAwardIslandHeist";
		case 103:
			return "MPAwardIslandHeist";
		case 104:
			return "MPAwardIslandHeist";
		case 105:
			return "MPAwardIslandHeist";
		case 106:
			return "MPAwardIslandHeist";
		case 107:
			return "MPAwardIslandHeist";
		case 108:
			return "MPAwardIslandHeist";
		case 109:
			return "MPAwardIslandHeist";
		case 110:
			return "MPAwardIslandHeist";
		case 111:
			return "MPAwardIslandHeist";
		case 112:
			return "MPAwardIslandHeist";
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
			return "MPAwardTunerPack";
			break;
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
			return "MPAwardsFixer";
			break;
	}
	return "";
}

char* func_196(int iParam0, int iParam1)//Position - 0xB3FB
{
	if (iParam1 == 9)
	{
		iParam1 = 9;
	}
	switch (iParam0)
	{
		case 0:
			return "Buyeverygun";
		case 2:
			return "HoleInOne";
		case 3:
			return "TargetGridGranny";
		case 4:
			return "TennisFiveSets";
		case 5:
			return "TennisStraightSets";
		case 6:
			return "ClearAllGangHideouts";
		case 7:
			return "SixDartCheckout";
		case 8:
			return "WinEveryGameModeOnce";
		case 10:
			return "WinEveryTypeOfRace";
		case 11:
			return "HoldaRaceWorldRecord";
		case 12:
			return "Wear25DifferentItemsOfClothing";
		case 13:
			return "FullyModACar";
		case 14:
			return "WinACustomClassRace";
		case 15:
			return "Play25DifferentDeathmatches";
		case 16:
			return "Play25DifferentRaces";
		case 17:
			return "MostKillsInGangAttack";
		case 18:
			return "MostKillsInSurvival";
		case 20:
			return "Kill3InARaceAndWin";
		case 21:
			return "GetATattooOnEachBodyPart";
		case 22:
			return "10KillStreakDeathmatch";
		case 23:
			return "Unirider";
		case 25:
			return "goaloriented";
		case 26:
			return "overachiever";
		case 27:
			return "joyrider";
		case 144:
			return "CantTouchThis";
		case 143:
			return "FairPlay";
		case 146:
			return "JackOfAllTrades";
		case 147:
			return "ItTakesTwo";
		case 148:
			return "Showroom";
		case 149:
			return "Coordinated";
		case 150:
			return "HotSpot";
		case 151:
			return "Clubber";
		case 30:
			return "BEGINNER";
		case 31:
			return "FIELDFILLER";
		case 32:
			return "ArmchairRracer";
		case 33:
			return "LEARNER";
		case 34:
			return "SUNDAYDRIVER";
		case 35:
			return "THEROOKIE";
		case 36:
			return "BUMPANDRUN";
		case 37:
			return "GEARHEAD";
		case 38:
			return "DOORSLAMMER";
		case 39:
			return "HOTLAP";
		case 40:
			return "ARENAAMATEUR";
		case 41:
			return "PAINTTRADER";
		case 42:
			return "SHUNTER";
		case 43:
			return "JOCK";
		case 44:
			return "WARRIOR";
		case 45:
			return "TBONE";
		case 46:
			return "MAYHEM";
		case 47:
			return "WRECKER";
		case 48:
			return "CRASHCOURSE";
		case 49:
			return "ARENALEGEND";
		case 50:
			return "PEGASUS";
		case 51:
			return "contactsport";
		case 52:
			return "UNSTOPPABLE";
		case 53:
			return "LooseCheng";
		case 54:
			return "HouseKeeping";
		case 55:
			return "StrongArmTactics";
		case 56:
			return "PlayToWin";
		case 57:
			return "BadBeat";
		case 58:
			return "CashingOut";
		case 59:
			return "StraightFlush";
		case 62:
			return "LuckyLucky";
		case 60:
			return "TopPair";
		case 61:
			return "FullHouse";
		case 63:
			return "SCOPEOUT";
		case 64:
			return "ALLCREWEDUP";
		case 65:
			return "MOVINGON";
		case 66:
			return "AfterParty";
		case 67:
			return "GUNMAN";
		case 68:
			return "SmashAndGrab";
		case 69:
			return "HiddenInPlainSight";
		case 70:
			return "Undetected";
		case 71:
			return "AllRounder";
		case 72:
			return "EliteThief";
		case 73:
			return "Professional";
		case 74:
			return "SupportAct";
		case 75:
			return "Shafted";
		case 76:
			return "Collector";
		case 77:
			return "Deadeye";
		case 78:
			return "PistolAtDawn";
		case 79:
			return "BeatTheTraffic";
		case 80:
			return "AllWheels";
		case 81:
			return "FEELINGROGGY";
		case 82:
			return "ApeEscape";
		case 83:
			return "MonkeyMind";
		case 84:
			return "AquaticApe";
		case 85:
			return "KeepingTheFaith";
		case 86:
			return "TrueLove";
		case 87:
			return "Nemesis" /* GXT: Nemesis */;
		case 88:
			return "Friendzoned";
		case 89:
			return "KingOfQub3d";
		case 90:
			return "Qubism";
		case 93:
			return "CrankItTo11";
		case 92:
			return "GodofQub3d";
		case 91:
			return "Qubits";
		case 94:
			return "1111";
		case 95:
			return "Inandout";
		case 96:
			return "EasyAccess";
		case 97:
			return "ItsaSteal";
		case 98:
			return "MaximumDistruption";
		case 99:
			return "TheIslandHeist";
		case 100:
			return "GoingAlone";
		case 101:
			return "Teamwork";
		case 102:
			return "TravelPlans";
		case 103:
			return "ProfessionalThief";
		case 104:
			return "CatBurglar";
		case 105:
			return "OneOfThem";
		case 106:
			return "GoforGold";
		case 107:
			return "Elitist";
		case 108:
			return "Blowhard";
		case 109:
			return "HelpingOut";
		case 110:
			return "Courier";
		case 111:
			return "PartyVibes";
		case 112:
			return "HelpingHand";
		case 113:
			return "LSCarMeet";
		case 114:
			return "ProCarExporter";
		case 115:
			return "TheUnionDepositoryContract";
		case 116:
			return "TheSuperdollarDeal";
		case 117:
			return "TheBankContract";
		case 118:
			return "TheECUJob";
		case 119:
			return "ThePrisionContract";
		case 120:
			return "TheAgencyDeal";
		case 121:
			return "TheLostContract";
		case 122:
			return "TheDataContract";
		case 123:
			return "StraighttoVideo";
		case 124:
			return "MonkeyseeMonkeydo";
		case 125:
			return "Trainedtokill";
		case 126:
			return "TheDirector";
		case 127:
			return "OnCourse";
		case 128:
			return "TheNighClubLeak";
		case 129:
			return "TheCountryClubLeak";
		case 130:
			return "TheSouthCentralLeak";
		case 131:
			return "StudioTime";
		case 132:
			return "DontFuckWithDre";
		case 133:
			return "Backup";
		case 134:
			return "SeedCapitalFranklin";
		case 135:
			return "FireitUpFranklin";
		case 136:
			return "OGKushFranklin";
		case 137:
			return "ContractKiller";
		case 138:
			return "ADogsBestFriend";
		case 139:
			return "SoundCheck";
		case 140:
			return "SeedCapitaLamar";
		case 141:
			return "FireItUpLamar";
		case 142:
			return "OGKushLamar";
			break;
	}
	return "";
}

char* func_197(int iParam0, int iParam1, bool bParam2)//Position - 0xC310
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWT_521";
		case 2:
			return "AWT_660";
		case 3:
			return "AWT_667";
		case 4:
			return "AWT_670";
		case 5:
			return "AWT_671";
		case 6:
			return "AWT_691";
		case 7:
			return "AWT_697";
		case 8:
			return "AWT_701";
		case 10:
			return "AWT_705";
		case 11:
			return "AWT_706";
		case 12:
			return "AWT_709";
		case 13:
			return "AWT_711";
		case 14:
			return "AWT_712";
		case 15:
			return "AWT_714";
		case 16:
			return "AWT_715";
		case 17:
			return "AWT_718";
		case 18:
			return "AWT_719";
		case 20:
			return "AWT_725";
		case 21:
			return "AWT_727";
		case 22:
			return "AWT_717";
		case 23:
			return "AWT_729";
		case 25:
			return "AWT_783";
		case 26:
			return "AWT_784";
		case 144:
			return "AWT_751" /* GXT: Can't Touch This */;
		case 143:
			return "AWT_754" /* GXT: Four Way */;
		case 146:
			return "AWT_765" /* GXT: Jack Of All Trades */;
		case 148:
			return "AWT_763" /* GXT: Showroom */;
		case 147:
			return "AWT_756" /* GXT: It Takes Two */;
			break;
		case 149:
			return "AWT_793";
		case 150:
			return "AWT_794";
		case 151:
			return "AWT_795";
		case 30:
			return "AWT_796";
		case 31:
			return "AWT_797";
		case 32:
			return "AWT_798";
		case 33:
			return "AWT_799";
		case 34:
			return "AWT_800";
		case 35:
			return "AWT_801";
		case 36:
			return "AWT_802";
		case 37:
			return "AWT_803";
		case 38:
			return "AWT_804";
		case 39:
			return "AWT_805";
		case 40:
			return "AWT_806";
		case 41:
			return "AWT_807";
		case 42:
			return "AWT_808";
		case 43:
			return "AWT_809";
		case 44:
			return "AWT_810";
		case 45:
			return "AWT_811";
		case 46:
			return "AWT_812";
		case 47:
			return "AWT_813";
		case 48:
			return "AWT_814";
		case 49:
			return "AWT_815";
		case 50:
			return "AWT_816";
		case 51:
			return "AWT_819";
		case 52:
			return "AWT_820";
		case 53:
			return "AWT_836" /* GXT: Loose Cheng */;
		case 54:
			return "AWT_837" /* GXT: House Keeping */;
		case 55:
			return "AWT_838" /* GXT: Strong Arm Tactics */;
		case 56:
			return "AWT_839" /* GXT: Play to Win */;
		case 57:
			return "AWT_840" /* GXT: Bad Beat */;
		case 58:
			return "AWT_841" /* GXT: Cashing Out */;
		case 59:
			return "AWT_842" /* GXT: Straight */;
		case 62:
			return "AWT_846" /* GXT: Lucky Lucky */;
		case 60:
			return "AWT_843" /* GXT: Top Pair */;
		case 61:
			return "AWT_844" /* GXT: Full House */;
		case 63:
			return "AWT_857" /* GXT: Scope Out */;
		case 64:
			return "AWT_858" /* GXT: All Crewed Up */;
		case 65:
			return "AWT_859" /* GXT: Moving On */;
		case 66:
			return "AWT_860" /* GXT: After Party */;
		case 67:
			return "AWT_861" /* GXT: Gunman */;
		case 68:
			return "AWT_862" /* GXT: Smash & Grab */;
		case 69:
			return "AWT_863" /* GXT: Hidden In Plain Sight */;
		case 70:
			return "AWT_864" /* GXT: Undetected */;
		case 71:
			return "AWT_865" /* GXT: All Rounder */;
		case 72:
			return "AWT_866" /* GXT: Elite Thief */;
		case 73:
			return "AWT_867" /* GXT: Professional */;
		case 74:
			return "AWT_868" /* GXT: Support Act */;
		case 75:
			return "AWT_869" /* GXT: Shafted */;
		case 76:
			return "AWT_870" /* GXT: Collector */;
		case 77:
			return "AWT_871" /* GXT: Dead Eye */;
		case 78:
			return "AWT_872" /* GXT: Pistols At Dawn */;
		case 79:
			return "AWT_873" /* GXT: Beat The Traffic */;
		case 80:
			return "AWT_874" /* GXT: All Wheels */;
		case 81:
			return "AWT_875" /* GXT: Feelin' Groggy */;
		case 82:
			return "AWT_876" /* GXT: Ape Escape */;
		case 83:
			return "AWT_877" /* GXT: Monkey Mind */;
		case 84:
			return "AWT_878" /* GXT: Aquatic Ape */;
		case 85:
			return "AWT_879" /* GXT: Keeping The Faith */;
		case 86:
			return "AWT_880" /* GXT: True Love */;
		case 87:
			return "AWT_881" /* GXT: Nemesis */;
		case 88:
			return "AWT_882" /* GXT: Friendzoned */;
		case 89:
			return "AWT_886" /* GXT: King Of QUB3D */;
		case 90:
			return "AWT_887" /* GXT: Qubism */;
		case 93:
			return "AWT_888" /* GXT: Crank It To 11 */;
		case 92:
			return "AWT_889" /* GXT: God of QUB3D */;
		case 91:
			return "AWT_890" /* GXT: Qubits */;
		case 94:
			return "AWT_891" /* GXT: 11 11 */;
		case 95:
			return "AWT_917" /* GXT: In And Out */;
		case 96:
			return "AWT_918" /* GXT: Easy Access */;
		case 97:
			return "AWT_919" /* GXT: Its A Steal */;
		case 98:
			return "AWT_920" /* GXT: Maximum Disruption */;
		case 99:
			return "AWT_921" /* GXT: The Cayo Perico Heist */;
		case 100:
			return "AWT_922" /* GXT: Going Alone */;
		case 101:
			return "AWT_923" /* GXT: Teamwork */;
		case 102:
			return "AWT_924" /* GXT: Travel Plans */;
		case 103:
			return "AWT_925" /* GXT: Professional Thief */;
		case 104:
			return "AWT_926" /* GXT: Cat Burglar */;
		case 105:
			return "AWT_927" /* GXT: One Of Them */;
		case 106:
			return "AWT_928" /* GXT: Go For Gold */;
		case 107:
			return "AWT_929" /* GXT: Elitist */;
		case 108:
			return "AWT_930" /* GXT: Blow Hard */;
		case 109:
			return "AWT_931" /* GXT: Helping Out */;
		case 110:
			return "AWT_932" /* GXT: Courier */;
		case 111:
			return "AWT_933" /* GXT: Party Vibes */;
		case 112:
			return "AWT_934" /* GXT: Helping Hand */;
		case 113:
			return "AWT_944" /* GXT: LS Car Meet */;
		case 114:
			return "AWT_951" /* GXT: Pro Car Exporter */;
		case 115:
			return "AWT_953" /* GXT: The Union Depository Contract */;
		case 116:
			return "AWT_954" /* GXT: The Superdollar Deal */;
		case 117:
			return "AWT_955" /* GXT: The Bank Contract */;
		case 118:
			return "AWT_956" /* GXT: The E.C.U. Job */;
		case 119:
			return "AWT_957" /* GXT: The Prison Contract */;
		case 120:
			return "AWT_958" /* GXT: The Agency Deal */;
		case 121:
			return "AWT_959" /* GXT: The Lost Contract */;
		case 122:
			return "AWT_960" /* GXT: The Data Contract */;
		case 123:
			return "AWT_963" /* GXT: Straight To Video */;
		case 124:
			return "AWT_964" /* GXT: Monkey See Monkey Do */;
		case 125:
			return "AWT_965" /* GXT: Trained To Kill */;
		case 126:
			return "AWT_966" /* GXT: The Director */;
		case 127:
			return "AWT_968" /* GXT: On Course */;
		case 128:
			return "AWT_969" /* GXT: Nightlife Leak */;
		case 129:
			return "AWT_970" /* GXT: High Society Leak */;
		case 130:
			return "AWT_971" /* GXT: South Central Leak */;
		case 131:
			return "AWT_972" /* GXT: Studio Time */;
		case 132:
			return "AWT_973" /* GXT: Don't Fuck With Dre */;
		case 133:
			return "AWT_974" /* GXT: Backup */;
		case 134:
			return "AWT_975" /* GXT: Seed Capital - Franklin */;
		case 135:
			return "AWT_977" /* GXT: Fire It Up - Franklin */;
		case 136:
			return "AWT_984" /* GXT: OG Kush  - Franklin */;
		case 137:
			return "AWT_980" /* GXT: Contract Killer */;
		case 138:
			return "AWT_981" /* GXT: A Dog's Best Friend */;
		case 139:
			return "AWT_982" /* GXT: Sound Check */;
		case 140:
			return "AWT_976" /* GXT: Seed Capital - Lamar */;
		case 141:
			return "AWT_986" /* GXT: Fire It Up - Lamar */;
		case 142:
			return "AWT_985" /* GXT: OG Kush  - Lamar */;
	}
	return "";
}

void func_198(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)//Position - 0xF66A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_610("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_199(int iParam0)//Position - 0xF910
{
	switch (iParam0)
	{
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
		case 142:
		case 141:
			return 1;
			break;
	}
	return 0;
}

char* func_200(int iParam0, int iParam1, bool bParam2)//Position - 0xA271
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "AWT_775" /* GXT: Head For Heists */;
		case 13:
			return "AWT_767" /* GXT: Go To Jail */;
		case 14:
			return "AWT_768" /* GXT: Lab Report */;
		case 15:
			return "AWT_776" /* GXT: Product Placement */;
		case 16:
			return "AWT_780" /* GXT: Smooth Sailing */;
		case 17:
			return "AWT_777" /* GXT: All In Order */;
		case 18:
			return "AWT_778" /* GXT: Loyalty */;
		case 19:
			return "AWT_779" /* GXT: Criminal Mastermind */;
		case 20:
			return "AWT_785" /* GXT: Another Perspective */;
		case 21:
			return "AWT_786" /* GXT: Supporting Role */;
		case 1:
		case 2:
		case 6:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return __LIB_18__::func_309(iParam0);
		default:
	}
	return "";
}

var func_201(int iParam0)//Position - 0x714
{
	return BitTest(Global_2715699.f_1.f_845[iParam0 /*57*/].f_50, 2);
}

void func_202(int iParam0, var uParam1, var uParam2, int iParam3, struct<3> Param4, struct<6> Param5)//Position - 0x11E8
{
	struct<15> Var0;
	Var0.f_0 = 21543190;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = { Param4 };
	Var0.f_8 = { Param5 };
	Var0.f_14 = Global_2715699.f_1.f_2828.f_13;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 15, iParam0);
	}
}

void func_203(int iParam0)//Position - 0x12CB
{
	Global_1852993 = iParam0;
}

void func_204(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7029A
{
	if (bParam0)
	{
		if (iParam3 == 255)
		{
			*iParam1 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(2) + iParam4);
		}
		else if (iParam4 == 0)
		{
			*iParam1 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(0) + iParam3 * 2);
		}
		else if (iParam4 == 1)
		{
			*iParam1 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(0) + iParam3 * 2) + 1;
		}
		else if (iParam3 == 0)
		{
			*iParam1 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(0) + 12;
		}
		else if (iParam3 == 3)
		{
			*iParam1 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(0) + 13;
		}
		if (iParam5 == 255)
		{
			*iParam2 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(2) + iParam6);
		}
		else if (iParam6 == 0)
		{
			*iParam2 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(0) + iParam5 * 2);
		}
		else if (iParam6 == 1)
		{
			*iParam2 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(0) + iParam5 * 2) + 1;
		}
		else if (iParam5 == 0)
		{
			*iParam2 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(0) + 12;
		}
		else if (iParam5 == 3)
		{
			*iParam2 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(0) + 13;
		}
	}
	else
	{
		if (iParam3 == 255)
		{
			*iParam1 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(3) + iParam4);
		}
		else if (iParam4 == 0)
		{
			*iParam1 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(1) + iParam3 * 2);
		}
		else if (iParam4 == 1)
		{
			*iParam1 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(1) + iParam3 * 2) + 1;
		}
		else if (iParam3 == 2)
		{
			*iParam1 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(1) + 12;
		}
		else if (iParam3 == 1)
		{
			*iParam1 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(1) + 13;
		}
		if (iParam5 == 255)
		{
			*iParam2 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(3) + iParam6);
		}
		else if (iParam6 == 0)
		{
			*iParam2 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(1) + iParam5 * 2);
		}
		else if (iParam6 == 1)
		{
			*iParam2 = (PED::GET_PED_HEAD_BLEND_FIRST_INDEX(1) + iParam5 * 2) + 1;
		}
		else if (iParam5 == 2)
		{
			*iParam2 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(1) + 12;
		}
		else if (iParam5 == 1)
		{
			*iParam2 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(1) + 13;
		}
	}
}

int func_205(int iParam0, bool bParam1, bool bParam2)//Position - 0x706E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		iVar0 = 0;
		iVar1 = 2;
	}
	else
	{
		iVar0 = 1;
		iVar1 = 3;
	}
	iVar2 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(iVar0);
	if (bParam2)
	{
		iVar2 = PED::GET_PED_HEAD_BLEND_FIRST_INDEX(iVar1);
	}
	return (iVar2 + iParam0);
}

int func_206(int iParam0, int iParam1)//Position - 0x7071E
{
	switch (iParam0)
	{
		case 9:
		case 8:
			if (iParam1 == 0)
			{
				return Global_152058.f_7;
			}
			else
			{
				return Global_152058.f_8;
			}
			break;
	}
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

int func_207(int iParam0)//Position - 0x70E42
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("MP_M_Freemode_01") || iVar0 == joaat("MP_F_Freemode_01"))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x4CB3A
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_10__::func_578(iParam0);
	iVar1 = __LIB_0__::func_252(398, iParam0);
	if (iVar0 == 0 && iVar1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)//Position - 0x62C93
{
	return (__LIB_0__::func_252(410, iParam0) + __LIB_0__::func_252(18095, iParam0));
}

int func_210(int iParam0)//Position - 0x62CAE
{
	return (__LIB_0__::func_252(407, iParam0) + __LIB_0__::func_252(18094, iParam0));
}

int func_211(int iParam0)//Position - 0x62CC9
{
	return (__LIB_0__::func_252(402, iParam0) + __LIB_0__::func_252(18093, iParam0));
}

int func_212(int iParam0)//Position - 0x62CE4
{
	return (__LIB_0__::func_252(400, iParam0) + __LIB_0__::func_252(18092, iParam0));
}

bool func_213(int iParam0, int iParam1)//Position - 0x4CCD2
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_37__::func_653(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

int func_214(int iParam0, bool bParam1)//Position - 0x663AD
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 9:
			if (bParam1)
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				switch (iVar1)
				{
					case 0:
						iVar0 = 1;
						break;
					case 1:
						iVar0 = 7;
						break;
					case 2:
						iVar0 = 13;
						break;
					case 3:
						iVar0 = 19;
						break;
					default:
						iVar0 = 26;
						break;
				}
				iVar0 = __LIB_0__::func_463(iVar0);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				switch (iVar1)
				{
					case 0:
						iVar0 = 1;
						break;
					case 1:
						iVar0 = 7;
						break;
					case 2:
						iVar0 = 13;
						break;
					case 3:
						iVar0 = 18;
						break;
					default:
						iVar0 = 24;
						break;
				}
				iVar0 = __LIB_0__::func_462(iVar0);
			}
			break;
	}
	return iVar0;
}

int func_215(int iParam0, var* uParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, char* sParam6)//Position - 0xAC8
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (iParam4 == 3)
	{
		NETWORK::NETWORK_SET_GAMER_INVITED_TO_TRANSITION(uParam1);
	}
	else
	{
		NETWORK::NETWORK_REMOVE_TRANSITION_INVITE(uParam1);
	}
	if (iParam0 < 32)
	{
		if (iParam3 == 1 && NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(joaat("MP_Global"), 2064649238, true))
		{
			return iParam0;
		}
		if (__LIB_27__::func_457(uParam1))
		{
			bVar0 = true;
		}
		if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (iVar1 != __LIB_0__::func_162())
			{
				if (__LIB_0__::func_361(iVar1, 0))
				{
					bVar0 = true;
				}
			}
		}
		if ((iParam4 == 9 && !bVar0) || iParam4 == 11)
		{
			__LIB_30__::func_43(uParam1, sParam2, iParam4, 0);
			if (__LIB_1__::func_611())
			{
				__LIB_27__::func_455(uParam1);
			}
			__LIB_18__::func_38(23);
			return 0;
		}
		if (bVar0)
		{
			return iParam0;
		}
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (!__LIB_0__::func_800(Global_2712515[iVar2 /*37*/]))
			{
				if (__LIB_30__::func_42(iVar2, uParam1, sParam2, iParam4, sParam6))
				{
					if (__LIB_1__::func_611())
					{
						__LIB_27__::func_455(uParam1);
					}
					if (bParam5)
					{
						__LIB_27__::func_454(uParam1, &(Global_2712515[iVar2 /*37*/].f_13), Global_2712515[iVar2 /*37*/].f_35);
					}
					__LIB_18__::func_38(23);
				}
				return iVar2;
			}
			else if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam1, &(Global_2712515[iVar2 /*37*/])))
			{
				if (Global_2712515[iVar2 /*37*/].f_35 != 9 && !(Global_2712515[iVar2 /*37*/].f_35 == 3 && iParam4 == 3))
				{
					Global_2712515[iVar2 /*37*/].f_35 = iParam4;
					Global_2712515[iVar2 /*37*/].f_36 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				if (bParam5)
				{
					__LIB_27__::func_454(uParam1, &(Global_2712515[iVar2 /*37*/].f_13), Global_2712515[iVar2 /*37*/].f_35);
				}
				__LIB_18__::func_38(23);
				return iVar2;
			}
			iVar2++;
		}
	}
	return 32;
}

void func_216(bool bParam0)//Position - 0x6532E
{
	int iVar0;
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		if (__LIB_0__::func_137(3610, -1))
		{
		}
		iVar0 = __LIB_1__::func_360(2042, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (__LIB_1__::func_520(0))
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		}
		else
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_715(Global_2824753), 0);
		}
		__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar0), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar0), false);
		__LIB_32__::func_669(__LIB_1__::func_360(2042, -1, 0), 1);
		Global_2815059.f_287 = 1;
		__LIB_13__::func_717(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_217(int iParam0, bool bParam1)//Position - 0x665CF
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_1__::func_360(2103, iParam0, 0);
	if (iVar0 < 1)
	{
		iVar1 = __LIB_1__::func_360(2053, iParam0, 0);
		if (bParam1)
		{
			iVar3 = joaat("MP_M_Freemode_01");
			iVar1 = __LIB_0__::func_463(iVar1);
		}
		else
		{
			iVar3 = joaat("MP_F_Freemode_01");
			iVar1 = __LIB_0__::func_462(iVar1);
		}
		Var2 = { __LIB_3__::func_310(iVar3, 2, iVar1, -1) };
		iVar4 = PED::GET_TINT_INDEX_FOR_LAST_GEN_HAIR_TEXTURE(iVar3, Var2.f_3, Var2.f_4);
		iVar5 = PED::GET_DEFAULT_SECONDARY_TINT_FOR_CREATOR(iVar4);
		__LIB_1__::func_354(2153, iVar4, iParam0, 1, 0);
		__LIB_1__::func_354(2160, iVar5, iParam0, 1, 0);
	}
}

void func_218(int iParam0, var uParam1, var uParam2)//Position - 0x7AAC
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -3542.82f, 1488.25f, 5.42995f };
			*uParam2 = -123.045f;
			break;
		case 1:
			*uParam1 = { -3148.38f, 2807.55f, 5.42995f };
			*uParam2 = 91.955f;
			break;
		case 2:
			*uParam1 = { -3280.5f, 2140.51f, 5.42995f };
			*uParam2 = 86.955f;
			break;
		case 3:
			*uParam1 = { -2814.49f, 4072.74f, 5.42995f };
			*uParam2 = -108.045f;
			break;
		case 4:
			*uParam1 = { -3254.55f, 3685.68f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		case 5:
			*uParam1 = { -2368.44f, 4697.87f, 5.42995f };
			*uParam2 = -133.045f;
			break;
		case 6:
			*uParam1 = { -3205.34f, -219.01f, 5.42995f };
			*uParam2 = 176.955f;
			break;
		case 7:
			*uParam1 = { -3448.25f, 311.502f, 5.42995f };
			*uParam2 = -83.045f;
			break;
		case 8:
			*uParam1 = { -2697.86f, -540.612f, 5.42995f };
			*uParam2 = 146.955f;
			break;
		case 9:
			*uParam1 = { -1995.73f, -1523.69f, 5.42997f };
			*uParam2 = -38.045f;
			break;
		case 10:
			*uParam1 = { -2117.58f, -2543.35f, 5.42995f };
			*uParam2 = 36.955f;
			break;
		case 11:
			*uParam1 = { -1605.07f, -1872.47f, 5.42995f };
			*uParam2 = -68.045f;
			break;
		case 12:
			*uParam1 = { -753.082f, -3919.07f, 5.42995f };
			*uParam2 = 11.955f;
			break;
		case 13:
			*uParam1 = { -351.061f, -3553.32f, 5.42995f };
			*uParam2 = -123.045f;
			break;
		case 14:
			*uParam1 = { -1460.54f, -3761.47f, 5.42995f };
			*uParam2 = 161.955f;
			break;
		case 15:
			*uParam1 = { 1546.89f, -3045.63f, 5.42995f };
			*uParam2 = -118.045f;
			break;
		case 16:
			*uParam1 = { 2490.89f, -2428.85f, 5.42995f };
			*uParam2 = -168.045f;
			break;
		case 17:
			*uParam1 = { 2049.79f, -2821.62f, 5.42995f };
			*uParam2 = 31.955f;
			break;
		case 18:
			*uParam1 = { 3029.02f, -1495.7f, 5.42995f };
			*uParam2 = -108.045f;
			break;
		case 19:
			*uParam1 = { 3021.25f, -723.39f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		case 20:
			*uParam1 = { 2976.62f, -1994.76f, 5.42995f };
			*uParam2 = -133.045f;
			break;
		case 21:
			*uParam1 = { 3404.51f, 1977.04f, 5.42995f };
			*uParam2 = -103.045f;
			break;
		case 22:
			*uParam1 = { 3411.1f, 1193.44f, 5.42995f };
			*uParam2 = 31.955f;
			break;
		case 23:
			*uParam1 = { 3784.8f, 2548.54f, 5.42995f };
			*uParam2 = 86.955f;
			break;
		case 24:
			*uParam1 = { 4225.03f, 3988f, 5.42995f };
			*uParam2 = 61.955f;
			break;
		case 25:
			*uParam1 = { 4250.58f, 4576.57f, 5.42995f };
			*uParam2 = 111.955f;
			break;
		case 26:
			*uParam1 = { 4204.36f, 3373.7f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		case 27:
			*uParam1 = { 3751.68f, 5753.5f, 5.42995f };
			*uParam2 = 136.955f;
			break;
		case 28:
			*uParam1 = { 3490.11f, 6305.79f, 5.42995f };
			*uParam2 = 156.955f;
			break;
		case 29:
			*uParam1 = { 3684.85f, 5212.24f, 5.42995f };
			*uParam2 = -58.045f;
			break;
		case 30:
			*uParam1 = { 581.595f, 7124.56f, 5.42995f };
			*uParam2 = 121.955f;
			break;
		case 31:
			*uParam1 = { 2004.46f, 6907.16f, 5.42997f };
			*uParam2 = 6.955f;
			break;
		case 32:
			*uParam1 = { 1396.64f, 6860.2f, 5.42995f };
			*uParam2 = 176.955f;
			break;
		case 33:
			*uParam1 = { -1170.69f, 5980.68f, 5.42995f };
			*uParam2 = 91.955f;
			break;
		case 34:
			*uParam1 = { -777.487f, 6566.91f, 5.42995f };
			*uParam2 = 26.955f;
			break;
		case 35:
			*uParam1 = { -381.774f, 6946.96f, 5.42995f };
			*uParam2 = 71.955f;
			break;
		case 36:
			*uParam1 = { 3615.5232f, -4779.021f, 5.4337f };
			*uParam2 = 0f;
			break;
		case 37:
			*uParam1 = { 52.6177f, -3293.0867f, 5.4337f };
			*uParam2 = -90f;
			break;
		case 38:
			*uParam1 = { -3537.2012f, 736.4623f, 5.4337f };
			*uParam2 = 180f;
			break;
		case 39:
			*uParam1 = { -1748.0023f, 5328.746f, 5.4337f };
			*uParam2 = 170f;
			break;
		case 40:
			*uParam1 = { -3262.125f, -1586.9724f, 5.4337f };
			*uParam2 = 167.5f;
			break;
		case 41:
			*uParam1 = { -850.5552f, -4818.589f, 5.4337f };
			*uParam2 = 32.5f;
			break;
	}
}

void func_219(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3)//Position - 0x532D
{
	struct<6> Var0;
	struct<6> Var1;
	struct<6> Var2;
	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_3 = { 0f, 0f, 0f };
	switch (iParam3)
	{
		case 0:
			Var0 = { 285.8317f, -162.205f, 65.1628f };
			Var0.f_3 = { 0f, 0f, -110f };
			Var1 = { 285.138f, -162.024f, 63.614f };
			Var1.f_3 = { 0f, 0f, 160f };
			break;
		case 1:
			Var0 = { -968.2812f, -1432.9247f, 8.1858f };
			Var0.f_3 = { 0f, 0f, 70f };
			Var1 = { -968.944f, -1433.234f, 6.673f };
			Var1.f_3 = { 0f, 0f, -160f };
			break;
		case 2:
			Var0 = { -778.8333f, 313.5024f, 86.1362f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var1 = { -778.727f, 312.728f, 84.693f };
			Var1.f_3 = { 0f, 0f, -90f };
			break;
		case 3:
			Var0 = { -980.7506f, -1447.0208f, 4.5223f };
			Var0.f_3 = { 0f, 0f, -70f };
			Var1 = { -980.29f, -1447.934f, 3.723f };
			Var1.f_3 = { 0f, 0f, -70f };
			break;
		case 4:
			Var0 = { 895.5656f, -889.3296f, 27.6491f };
			Var0.f_3 = { 0f, 0f, -90f };
			Var1 = { 894.954f, -889.428f, 26.158f };
			Var1.f_3 = { 0f, 0f, 180f };
			break;
		case 5:
			Var0 = { 726.7885f, -1189.545f, 24.7175f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var1 = { 726.857f, -1190.163f, 23.27f };
			Var1.f_3 = { 0f, 0f, -90f };
			break;
		case 6:
			Var0 = { -833.9494f, -862.6305f, 21.2407f };
			Var0.f_3 = { 0f, 0f, 90f };
			Var1 = { -833.335f, -862.65f, 19.682f };
			Var1.f_3 = { 0f, 0f, 0f };
			break;
	}
	Var2 = { Param0 };
	Var2.f_3 = { Param1 };
	__LIB_11__::func_744(Var0, Var1, Var2, uParam2);
}

void func_220()//Position - 0xE088
{
	__LIB_38__::func_198(0, -1, -1, 0, 0);
}

void func_221(bool bParam0)//Position - 0xEE43
{
	if (bParam0)
	{
		__LIB_37__::func_532(0, 3, 0, 2, 0, 0);
	}
	else
	{
		__LIB_37__::func_532(0, 2, 0, 2, 1, 0);
	}
}

var func_222(int iParam0, int iParam1, int iParam2)//Position - 0x74F3
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(__LIB_6__::func_698(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_223(int iParam0, int iParam1)//Position - 0x2BA2
{
	int iVar0;
	iVar0 = __LIB_0__::func_369(__LIB_10__::func_610(iParam0), iParam1, 0);
	return iVar0;
}

char* func_224(int iParam0, bool bParam1)//Position - 0xD97F
{
	struct<16> Var0;
	struct<16> Var1;
	struct<16> Var2;
	struct<16> Var3;
	if (__LIB_18__::func_499(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_MARKSMANRIFLE"):
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE_MK2"), false))
					{
						return "WCD_MK1_LOCK" /* GXT: Revert to the stock variant to customize this weapon. */;
					}
				}
				return "WTDE2_MKRIFLE" /* GXT: Whether you're up close or a disconcertingly long way away, this weapon will get the job done. A multi-range tool for tools. Part of the Last Team Standing Update. This item is permanently free as part of the Criminal Enterprise Starter Pack. */;
				break;
			case joaat("WEAPON_COMPACTRIFLE"):
				return "WTDE2_CMPRIFLE" /* GXT: Half the size, all the power, double the recoil: there's no riskier way to say "I'm compensating for something". Part of Lowriders: Custom Classics. This item is permanently free as part of the Criminal Enterprise Starter Pack. */;
				break;
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return "WTDE2_CMPGL" /* GXT: Focus groups using the regular model suggested it was too accurate and found it awkward to use with one hand on the throttle. Easy fix. Part of Bikers. This item is permanently free as part of the Criminal Enterprise Starter Pack. */;
				break;
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		case joaat("WEAPON_UNARMED"):
			return "";
			break;
		case joaat("WEAPON_PISTOL"):
			return "WT_PIST_DESC" /* GXT: Standard handgun. A .45 caliber pistol with a magazine capacity of 12 rounds that can be extended to 16. */;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return "WTD_PIST_CBT" /* GXT: A compact, lightweight, semi-automatic pistol designed for law enforcement and personal defense. 12-round magazine with option to extend to 16 rounds. */;
			break;
		case joaat("WEAPON_APPISTOL"):
			return "WTD_PIST_AP" /* GXT: High-penetration, fully-automatic pistol. Holds 18 rounds in magazine with option to extend to 36 rounds. */;
			break;
		case joaat("WEAPON_SMG"):
			return "WTD_SMG" /* GXT: This is known as a good all-round submachine gun. Lightweight with an accurate sight and 30-round magazine capacity. */;
			break;
		case joaat("WEAPON_MICROSMG"):
			return "WTD_SMG_MCR" /* GXT: Combines compact design with a high rate of fire at approximately 700-900 rounds per minute. */;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "WTD_RIFLE_ASL" /* GXT: This standard assault rifle boasts a large capacity magazine and long distance accuracy. */;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return "WTD_RIFLE_CBN" /* GXT: Combining long distance accuracy with a high-capacity magazine, the carbine rifle can be relied on to make the hit. */;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "WTD_RIFLE_ADV" /* GXT: The most lightweight and compact of all assault rifles, without compromising accuracy and rate of fire. */;
			break;
		case joaat("WEAPON_MG"):
			return "WTD_MG" /* GXT: General purpose machine gun that combines rugged design with dependable performance. Long range penetrative power. Very effective against large groups. */;
			break;
		case joaat("WEAPON_COMBATMG"):
			return "WTD_MG_CBT" /* GXT: Lightweight, compact machine gun that combines excellent maneuverability with a high rate of fire to devastating effect. */;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "WTD_SG_PMP" /* GXT: Standard shotgun ideal for short-range combat. A high-projectile spread makes up for its lower accuracy at long range. */;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "WTD_SG_SOF" /* GXT: This single-barrel, sawed-off shotgun compensates for its low range and ammo capacity with devastating efficiency in close combat. */;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "WTD_SG_ASL" /* GXT: Fully automatic shotgun with 8 round magazine and high rate of fire. */;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return "WTD_SNIP_HVY" /* GXT: Features armor-piercing rounds for heavy damage. Comes with laser scope as standard. */;
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			return "WTD_SNIP_RMT" /* GXT: Remote controlled sniper system. */;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return "WTD_SNIP_RIF" /* GXT: Standard sniper rifle. Ideal for situations that require accuracy at long range. Limitations include slow reload speed and very low rate of fire. */;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "WTD_GL" /* GXT: A compact, lightweight grenade launcher with semi-automatic functionality. Holds up to 10 rounds. */;
			break;
		case joaat("WEAPON_RPG"):
			return "WTD_RPG" /* GXT: A portable, shoulder-launched, anti-tank weapon that fires explosive warheads. Very effective for taking down vehicles or large groups of assailants. */;
			break;
		case joaat("WEAPON_MINIGUN"):
			return "WTD_MINIGUN" /* GXT: A devastating 6-barrel machine gun that features Gatling-style rotating barrels. Very high rate of fire (2000 to 6000 rounds per minute). */;
			break;
		case joaat("WEAPON_GRENADE"):
			return "WTD_GNADE" /* GXT: Standard fragmentation grenade. Pull pin, throw, then find cover. Ideal for eliminating clustered assailants. */;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return "WTD_GNADE_SMK" /* GXT: Tear gas grenade, particularly effective at incapacitating multiple assailants. Sustained exposure can be lethal. */;
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return "WTD_GNADE_STK" /* GXT: A plastic explosive charge fitted with a remote detonator. Can be thrown and then detonated or attached to a vehicle then detonated. */;
			break;
		case joaat("WEAPON_MOLOTOV"):
			return "WTD_MOLOTOV" /* GXT: Crude yet highly effective incendiary weapon. No happy hour with this cocktail. */;
			break;
		case joaat("WEAPON_STUNGUN"):
			return "WTD_STUN" /* GXT: Fires a projectile that administers a voltage capable of temporarily stunning an assailant. Takes approximately 4 seconds to recharge after firing. */;
			break;
		case joaat("WEAPON_PETROLCAN"):
			return "WTD_PETROL" /* GXT: Leaves a trail of gasoline that can be ignited. */;
			break;
		case joaat("WEAPON_DIGISCANNER"):
			return "WTD_DIGI" /* GXT: Used to scan vehicle number plates. */;
			break;
		case joaat("WEAPON_ELECTRIC_FENCE"):
			return "WTD_ELCFEN";
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
			return "WTD_PARA" /* GXT: This nylon sports parachute features a ram-air parafoil design for increased control over direction and speed. */;
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
			return "WTD_KNIFE" /* GXT: This carbon steel 7" bladed knife is dual edged with a serrated spine to provide improved stabbing and thrusting capabilities. */;
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			return "WTD_NGTSTK" /* GXT: 24" polycarbonate side-handled nightstick. */;
			break;
		case joaat("WEAPON_HAMMER"):
			return "WTD_HAMMER" /* GXT: A robust, multi-purpose hammer with wooden handle and curved claw, this old classic still nails the competition. */;
			break;
		case joaat("WEAPON_BAT"):
			return "WTD_BAT" /* GXT: Aluminum baseball bat with leather grip. Lightweight yet powerful for all you big hitters out there. */;
			break;
		case joaat("WEAPON_CROWBAR"):
			return "WTD_CROWBAR" /* GXT: Heavy-duty crowbar forged from high quality, tempered steel for that extra leverage you need to get the job done. */;
			break;
		case joaat("WEAPON_GOLFCLUB"):
			return "WTD_GOLFCLUB" /* GXT: Standard length, mid iron golf club with rubber grip for a lethal short game. */;
			break;
		case joaat("WEAPON_HATCHET"):
			return "WTD_DLC_HATCHET" /* GXT: Make kindling... of your pals with this easy to wield, easy to hide hatchet. */;
			break;
		case joaat("WEAPON_RAMMED_BY_CAR"):
			return "";
			break;
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			return "";
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			return "WTD_SMG_ASL" /* GXT: A high-capacity submachine gun that is both compact and lightweight. Holds up to 30 bullets in one magazine. */;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return "WTD_SG_BLP" /* GXT: More than makes up for its slow, pump-action rate of fire with its range and spread.  Decimates anything in its projectile path. */;
			break;
		case joaat("WEAPON_PISTOL50"):
			return "WTD_PIST_50" /* GXT: High-impact pistol that delivers immense power but with extremely strong recoil. Holds 9 rounds in magazine. */;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return "WTD_VPISTOL" /* GXT: What you really need is a more recognizable gun. Stand out from the crowd at an armed robbery with this engraved pistol. Part of The "I'm Not a Hipster" Update. */;
			break;
		case joaat("WEAPON_DAGGER"):
			return "WTD_DAGGER" /* GXT: You've been rocking the pirate-chic look for a while, but no vicious weapon to complete the look? Get this dagger with guarded hilt. Part of The "I'm Not a Hipster" Update. */;
			break;
		case joaat("WEAPON_PROXMINE"):
			return "WTD_PRXMINE" /* GXT: Leave a present for your friends with these motion sensor landmines. Short delay after activation. Part of the Festive Surprise. */;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return "WTD_HOMLNCH" /* GXT: Infrared guided fire-and-forget missile launcher. For all your moving target needs. Part of the Festive Surprise. */;
			break;
		case joaat("WEAPON_MACHETE"):
			return "WTD_MACHETE" /* GXT: America's West African arms trade isn't just about giving. Rediscover the simple life with this rusty cleaver. Part of Lowriders. */;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return "WTD_MCHPIST" /* GXT: This fully automatic is the snare drum to your twin-engine V8 bass: no drive-by sounds quite right without it. Part of Lowriders. */;
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			return "WTD_FLASHLIGHT" /* GXT: Intensify your fear of the dark with this short range, battery-powered light source. Handy for blunt force trauma. Part of The Halloween Surprise. */;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return "WTD_DBSHGN" /* GXT: Do one thing, do it well. Who needs a high rate of fire when your first shot turns the other guy into a fine mist? Part of Lowriders: Custom Classics. */;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return "WTD_CMPRIFLE" /* GXT: Half the size, all the power, double the recoil: there's no riskier way to say "I'm compensating for something". Part of Lowriders: Custom Classics. */;
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return "WTD_SWBLADE" /* GXT: From your pocket to hilt-deep in the other guy's ribs in under a second: folding knives will never go out of style. Part of Executives and Other Criminals. */;
			break;
		case joaat("WEAPON_REVOLVER"):
			return "WTD_REVOLVER" /* GXT: A handgun with enough stopping power to drop a crazed rhino, and heavy enough to beat it to death if you're out of ammo. Part of Executives and Other Criminals. */;
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			if (__LIB_13__::func_641(joaat("MPPLY_HEADSHOTCHLENGECOMPLETED")) || bParam1)
			{
				return "WTD_REV_DA" /* GXT: Because sometimes revenge is a dish best served six times, in quick succession, right between the eyes. Part of The Doomsday Heist. */;
			}
			else if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				return "WTD_REV_DA_2" /* GXT: Because sometimes revenge is a dish best served six times, in quick succession, right between the eyes. Get 50 headshots with the Double-Action Revolver to unlock a GTA$ reward and an exclusive variation of the revolver in Red Dead Redemption 2. */;
			}
			else
			{
				return "WTD_REV_DA_3" /* GXT: Because sometimes revenge is a dish best served six times, in quick succession, right between the eyes. Sign up to the Rockstar Games Social Club to get access to the Double-Action Revolver headshot challenge. Beating this challenge will unlock a GTA$ reward and an exclusive variation of the weapon in Red Dead Redemption 2. Sign up now at socialclub.rockstargames.com and link your account. */;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SPECIALCARBINE_MK2"), false))
				{
					return "WCD_MK1_LOCK" /* GXT: Revert to the stock variant to customize this weapon. */;
				}
			}
			if (__LIB_0__::func_289(iParam0, &Var0) != -1)
			{
				return __LIB_1__::func_601(&(Var0.f_15));
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE_MK2"), false))
				{
					return "WCD_MK1_LOCK" /* GXT: Revert to the stock variant to customize this weapon. */;
				}
			}
			if (__LIB_0__::func_289(iParam0, &Var1) != -1)
			{
				return __LIB_1__::func_601(&(Var1.f_15));
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BULLPUPRIFLE_MK2"), false))
				{
					return "WCD_MK1_LOCK" /* GXT: Revert to the stock variant to customize this weapon. */;
				}
			}
			if (__LIB_0__::func_289(iParam0, &Var2) != -1)
			{
				return __LIB_1__::func_601(&(Var2.f_15));
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			return "WTD_RAYPISTOL" /* GXT: Republican Space Ranger Special, fresh from the galactic war on socialism: no ammo, no mag, just one brutal energy pulse after another. */;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			return "WTD_RAYCARBINE" /* GXT: Republican Space Ranger Special. If you want to turn a little green man into little green goo, this is the only American way to do it. */;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			return "WTD_RAYMINIGUN" /* GXT: Republican Space Ranger Special. GO AHEAD, SAY I'M COMPENSATING FOR SOMETHING. I DARE YOU. */;
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			return "WTD_REV_NV" /* GXT: A true museum piece. You want to know how the West was won - slow reload speeds and a whole heap of bloodshed. */;
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			return "WTD_CERPST" /* GXT: Not your grandma's ceramics. Although this pint-sized pistol is small enough to fit into her purse and won't set off a metal detector. */;
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			return "WTD_MLTRYRFL" /* GXT: This immensely powerful assault rifle was designed for highly qualified, exceptionally skilled soldiers. Yes, you can buy it. */;
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			return "WTD_GDGTPST" /* GXT: A deadly shot. Don't be precious. You won't scuff the titanium nitride finish. */;
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			return "WTD_CMBSHGN" /* GXT: There's only one semi-automatic shotgun with a fire rate that sets the LSFD alarm bells ringing, and you're looking at it. */;
			break;
		default:
			if (__LIB_0__::func_289(iParam0, &Var3) != -1)
			{
				return __LIB_1__::func_601(&(Var3.f_15));
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

void func_225(int iParam0)//Position - 0x31DBC
{
	bool bVar0;
	bVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_113386.f_2363.f_539.f_2328[bVar0], false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
}

bool func_226(int iParam0)//Position - 0x99C71
{
	__LIB_13__::func_817();
	return iParam0 == Global_113386.f_2363.f_539.f_4321;
}

void func_227(int iParam0, var uParam1)//Position - 0x3AC96
{
	int iVar0;
	int iVar1;
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = __LIB_34__::func_681();
	iVar1 = __LIB_0__::func_199(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (__LIB_0__::func_516(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_113386.f_7261[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		case 199:
		case 200:
		case 203:
		case 204:
			if (__LIB_0__::func_516(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_113386.f_7261[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		case 141:
		case 142:
			if (__LIB_0__::func_516(iParam0))
			{
				if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0) && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_113386.f_7261[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[4])
				{
					Global_113386.f_7261[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[4])
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113386.f_7261[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113386.f_7261[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
			}
			break;
		case 145:
		case 146:
		case 143:
		case 144:
			if (__LIB_0__::func_516(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_113386.f_7261[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		case 147:
		case 148:
			if (!__LIB_0__::func_516(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!__LIB_0__::func_516(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) == 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0)
			{
				Global_113386.f_7261[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		case 158:
		case 159:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[70 /*34*/].f_6) == 0)
			{
				if (!__LIB_0__::func_516(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		case 160:
		case 161:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2")) == 0)
			{
				if (!__LIB_0__::func_516(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		case 70:
		case 71:
		case 72:
			if (!__LIB_0__::func_516(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[26 /*34*/].f_6) == 0)
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		case 101:
		case 102:
		case 103:
		case 104:
			if (!__LIB_0__::func_516(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[43 /*34*/].f_6) == 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 190:
		case 191:
			if (!__LIB_0__::func_516(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		case 193:
			if (!__LIB_0__::func_516(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[93 /*34*/].f_6) > 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 198:
			if (!__LIB_0__::func_516(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		case 80:
			if (!__LIB_0__::func_516(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[8 /*34*/].f_6) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[10 /*34*/].f_6) == 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 205:
		case 206:
			if (!__LIB_0__::func_516(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[47 /*34*/].f_6) == 0)
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		case 207:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[70 /*34*/].f_6) == 0)
			{
				if (!__LIB_0__::func_516(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[48 /*34*/].f_6) == 0)
			{
				if (!__LIB_0__::func_516(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		case 99:
		case 100:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91229[39 /*34*/].f_6) == 0)
			{
				if (!__LIB_0__::func_516(iParam0))
				{
					Global_113386.f_7261[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
				}
			}
			break;
		case 216:
			if (!__LIB_0__::func_516(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		case 217:
		case 218:
			if (!__LIB_0__::func_516(iParam0))
			{
				Global_113386.f_7261[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
		case 219:
		case 220:
		case 221:
		case 222:
			if (__LIB_0__::func_516(iParam0))
			{
				Global_113386.f_7261[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
			}
			break;
	}
}

int func_228(int iParam0, int iParam1, bool bParam2)//Position - 0x89BE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 4;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 145)
	{
		iVar0 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_97919[iVar0]))
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Global_100366)
		{
			if (iVar1 < 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_100366[iVar2]))
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 < 0 || iVar1 > Global_100366)
		{
			iVar1 = 0;
		}
		Global_100366[iVar1] = Global_97919[iVar0];
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(Global_100366[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
					{
						TASK::CLEAR_PED_TASKS(Global_100366[iVar1]);
						TASK::TASK_SMART_FLEE_COORD(Global_100366[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, true), 1000f, -1, true, false);
					}
				}
			}
		}
	}
	Global_97919[iVar0] = iParam0;
	Global_113386.f_2363.f_539.f_2296[iParam1] = __LIB_34__::func_681();
	Global_113386.f_2363.f_539.f_2300[iParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Global_113386.f_2363.f_539.f_2310[iParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_97919.f_47), iVar0);
	}
	return 1;
}

int func_229(int iParam0, int iParam1, var uParam2)//Position - 0x94702
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	__LIB_37__::func_869(iParam1, &iVar0, &iVar1, &iVar2, &uVar3, &uVar4, &uVar5);
	*uParam2 = (SYSTEM::TO_FLOAT(((iVar0 + iVar1 * 60) + iVar2 * 60 * 60)) / 3600f);
	if (*uParam2 < 0f)
	{
		*uParam2 = 0f;
	}
	if (*uParam2 > 1f)
	{
		*uParam2 = 1f;
	}
	if (*uParam2 < 0.25f && !Global_97831[iParam0 /*29*/].f_15)
	{
		return 0;
	}
	if (*uParam2 < 0.5f)
	{
		return 1;
	}
	if (*uParam2 < 0.75f)
	{
		return 2;
	}
	return 3;
}

int func_230(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x416F0
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = __LIB_34__::func_681();
			iVar5 = __LIB_34__::func_681();
			__LIB_17__::func_873(&iVar5, iParam0);
			__LIB_17__::func_874(&iVar5, iParam1);
			__LIB_17__::func_875(&iVar5, 0);
			if (__LIB_11__::func_761(*uParam4, iVar5))
			{
				__LIB_37__::func_868(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			__LIB_13__::func_826(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			__LIB_15__::func_981((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			}
			__LIB_13__::func_811();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			__LIB_13__::func_788();
			uParam4->f_3++;
			break;
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, fParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							MISC::UNLOAD_ALL_CLOUD_HATS();
							MISC::LOAD_CLOUD_HAT(sParam3, 0f);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				__LIB_37__::func_868(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(iVar5), __LIB_0__::func_198(iVar5), __LIB_0__::func_615(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = __LIB_0__::func_331(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			__LIB_37__::func_868(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(iVar5), __LIB_0__::func_198(iVar5), __LIB_0__::func_615(iVar5));
			if (__LIB_0__::func_614(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(__LIB_0__::func_614(iVar5), __LIB_0__::func_553(iVar5), __LIB_0__::func_214(iVar5));
			}
			__LIB_0__::func_646();
			GRAPHICS::RESET_ADAPTATION(6);
			break;
	}
	return 0;
}

int func_231(int iParam0, int iParam1)//Position - 0x89FEE
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_3__::func_423(iParam0))
	{
		return 0;
	}
	__LIB_37__::func_869(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_232(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, char* sParam7, bool bParam8, int iParam9)//Position - 0x437E5
{
	return __LIB_16__::func_900(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, sParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_233(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)//Position - 0x42124
{
	return __LIB_16__::func_900(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

char* func_234()//Position - 0x4C3
{
	switch (Global_113386.f_10049.f_134)
	{
		case 1:
			return "NG_filmnoir_BW02";
		case 2:
			return "NG_filmnoir_BW01";
		default:
	}
	return "";
}

bool func_235()//Position - 0x2565
{
	return Global_1578997.f_2 != 8;
}

int func_236()//Position - 0x1D28
{
	if (Global_1977032 == 0 && __LIB_38__::func_235())
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x4FE91
{
	if (__LIB_0__::func_351(205, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_238(int iParam0, int iParam1, int iParam2)//Position - 0x512AF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		if (iParam2 == -1)
		{
			iParam2 = __LIB_0__::func_369(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = __LIB_0__::func_369(586, -1, 0);
		}
		if (__LIB_1__::func_520(1) && __LIB_0__::func_287(iParam0))
		{
			__LIB_3__::func_340(iParam0, __LIB_12__::func_412(Global_2824753), 0);
		}
		else
		{
			__LIB_3__::func_340(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			__LIB_3__::func_340(iParam0, Global_1836612, 1);
		}
		__LIB_0__::func_440(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

int func_239(int iParam0)//Position - 0x74458
{
	if (__LIB_13__::func_703() == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_240(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4E5FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if ((iParam1 >= 0 && iParam1 < 21) && iParam2 == iParam1 == 20)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar0] = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][iVar0] = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][iVar1] = PED::GET_PED_PROP_INDEX(iParam0, iVar1);
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2094[iParam1 /*10*/][iVar1] = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1);
			iVar1++;
		}
		if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][0] == 1)
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][0] = -1;
		}
		iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][1], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][1]);
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SCUBA_GEAR"), 0))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][1] = 0;
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][1] = 0;
		}
		iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][8], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][8]);
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("SCUBA_GEAR"), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][8] = 15;
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][8] = 0;
			}
			else
			{
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][8] = 3;
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][8] = 0;
			}
		}
		iVar4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][1], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2094[iParam1 /*10*/][1]);
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SCUBA_GEAR"), 1))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][1] = -1;
		}
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2327[iParam1] = 0;
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2349[iParam1] = 0;
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2371[iParam1] = 0;
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2393[iParam1] = 0;
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2415[iParam1] = 0;
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2437[iParam1] = 0;
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][0] = -1;
		if (bParam3)
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][5] = -1;
		}
		iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 2, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][2], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][2]);
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("NIGHT_VISION"), 0))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][2] = -1;
		}
		iVar6 = __LIB_0__::func_266(__LIB_0__::func_369(1759, -1, 0), __LIB_0__::func_276(iParam0));
		if (iVar6 != -1 && __LIB_0__::func_549(iVar6, -1))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2628[iParam1] = __LIB_0__::func_369(1759, -1, 0);
		}
		else
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2628[iParam1] = 0;
		}
		if (__LIB_0__::func_549(13, -1))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2327[iParam1] = 1;
		}
		if (__LIB_0__::func_549(14, -1))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2349[iParam1] = 1;
		}
		if (__LIB_0__::func_549(15, -1))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2371[iParam1] = 1;
		}
		if (__LIB_0__::func_549(16, -1))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2393[iParam1] = 1;
		}
		if (__LIB_0__::func_549(71, -1))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2415[iParam1] = 1;
		}
		if (__LIB_0__::func_549(72, -1))
		{
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2437[iParam1] = 1;
		}
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2305[iParam1] = 1;
	}
}

int func_241(int iParam0, int iParam1)//Position - 0x50324
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (__LIB_0__::func_438() == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	iVar0 = __LIB_10__::func_587(iParam0);
	if (iVar0 != 500 && __LIB_0__::func_351(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	uVar1 = __LIB_38__::func_223(iParam0, iParam1);
	iVar2 = __LIB_3__::func_371(iParam0);
	return BitTest(uVar1, __LIB_0__::func_160(iVar2));
}

void func_242(int iParam0)//Position - 0x739A1
{
	int iVar0;
	if (__LIB_1__::func_375(0))
	{
		iVar0 = __LIB_13__::func_387(__LIB_0__::func_797(), PLAYER::PLAYER_ID());
		if (iVar0 > -1 && iVar0 < 8)
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_11[iVar0] = iParam0;
		}
	}
}

int func_243(int iParam0)//Position - 0x2A08
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27.f_6, 1);
	}
	return 0;
}

int func_244(int iParam0)//Position - 0x2C54
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27.f_6, 0);
	}
	return 0;
}

int func_245(int iParam0)//Position - 0x56F21
{
	if (iParam0 != -1)
	{
		return Global_1977138[iParam0 /*57*/].f_27.f_7;
	}
	return -1;
}

void func_246(bool bParam0)//Position - 0x5709E
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 23))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 23);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 23))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 23);
	}
}

void func_247(bool bParam0)//Position - 0x5829A
{
	if (bParam0)
	{
		if (!BitTest(Global_1977048.f_3, 0))
		{
			MISC::SET_BIT(&(Global_1977048.f_3), 0);
		}
	}
	else if (BitTest(Global_1977048.f_3, 0))
	{
		MISC::CLEAR_BIT(&(Global_1977048.f_3), 0);
	}
}

void func_248(bool bParam0)//Position - 0x582D7
{
	if (bParam0)
	{
		if (!BitTest(Global_1977048.f_3, 1))
		{
			MISC::SET_BIT(&(Global_1977048.f_3), 1);
		}
	}
	else if (BitTest(Global_1977048.f_3, 1))
	{
		MISC::CLEAR_BIT(&(Global_1977048.f_3), 1);
	}
}

bool func_249()//Position - 0x58D20
{
	return BitTest(Global_1977048.f_3, 1);
}

int func_250(int iParam0)//Position - 0x56F3F
{
	if ((__LIB_5__::func_477(iParam0, 0) && __LIB_5__::func_477(iParam0, 1)) && __LIB_5__::func_477(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_251()//Position - 0x69974
{
	HUD::CLEAR_HELP(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_252(int iParam0)//Position - 0x6A834
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_458, 2);
}

void func_253(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xC8BF1
{
	int iVar0;
	iVar0 = __LIB_5__::func_493();
	if (!__LIB_4__::func_903(PLAYER::PLAYER_ID()))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_37__::func_964(uParam0, iVar0);
			__LIB_8__::func_923(iVar0, &(uParam0->f_413));
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_0__::func_1("BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
	}
}

void func_254(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x106AFE
{
	int iVar0;
	iVar0 = __LIB_7__::func_754();
	if (!__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_1__::func_637(__LIB_6__::func_856(iVar0, 1, 0)))
			{
				__LIB_37__::func_966(uParam0, iVar0);
			}
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_0__::func_1("BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
	}
}

void func_255(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x4DBD6
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam3->f_17.f_6);
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10) || *uParam0 < 1f) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (uParam0->f_12 == 0)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, MISC::GET_HASH_KEY(uParam0->f_10)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= *uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(uParam0->f_8);
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(uParam0->f_7, iParam2, uParam0->f_1, uParam0->f_4, 1f, false, false, false);
				uParam0->f_12 = 1;
			}
		}
	}
}

void func_256(var uParam0, int iParam1, int iParam2)//Position - 0x4DC6C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam2, MISC::GET_HASH_KEY(uParam0->f_10)))
		{
			GRAPHICS::USE_PARTICLE_FX_ASSET(uParam0->f_8);
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(uParam0->f_7, iParam1, uParam0->f_1, uParam0->f_4, 1f, false, false, false);
		}
	}
}

void func_257(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4DCC3
{
	int iVar0;
	if (!bParam4)
	{
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_17.f_6);
	}
	else
	{
		iVar0 = uParam1->f_17.f_6;
	}
	if (iVar0 != -1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if (!uParam0->f_8 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_11 || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY(uParam0->f_9))))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(uParam0->f_7);
				if (bParam4)
				{
					uParam0->f_13 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_6, iParam2, *uParam0, uParam0->f_3, 1f, false, false, false);
				}
				else
				{
					uParam0->f_13 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_6, iParam2, *uParam0, uParam0->f_3, 1f, false, false, false, 1f, 1f, 1f, 0f);
				}
				uParam0->f_8 = 1;
			}
			else if (uParam0->f_8 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_12 || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY(uParam0->f_10))))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_13, false);
				uParam0->f_8 = 0;
			}
		}
	}
}

void func_258(var uParam0, int iParam1, var uParam2)//Position - 0x4DDD5
{
	int iVar0;
	iVar0 = uParam2->f_17.f_6;
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10) || *uParam0 < 1f) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (uParam0->f_12 == 0)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, MISC::GET_HASH_KEY(uParam0->f_10)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= *uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(uParam0->f_8);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(uParam0->f_7, iParam1, uParam0->f_1, uParam0->f_4, uParam0->f_11, 1f, false, false, false);
				uParam0->f_12 = 1;
			}
		}
	}
}

void func_259(var uParam0, int iParam1, var uParam2)//Position - 0x4DE6B
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_17.f_6);
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10) || *uParam0 < 1f) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (uParam0->f_12 == 0)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, MISC::GET_HASH_KEY(uParam0->f_10)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= *uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(uParam0->f_8);
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(uParam0->f_7, iParam1, uParam0->f_1, uParam0->f_4, uParam0->f_11, 1f, false, false, false);
				uParam0->f_12 = 1;
			}
		}
	}
}

int func_260(var uParam0)//Position - 0x5D350
{
	float fVar0;
	fVar0 = 1f;
	if (uParam0->f_60[0] != 0f)
	{
		fVar0 = uParam0->f_60[0];
	}
	if (!uParam0->f_8)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_46[0 /*3*/], uParam0->f_53[0 /*3*/], fVar0, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_46[1 /*3*/], uParam0->f_53[1 /*3*/], fVar0, false, true, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_261()//Position - 0x5D43F
{
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_803 != Global_1581356)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_803 = Global_1581356;
	}
}

int func_262()//Position - 0x5DD92
{
	if ((((__LIB_4__::func_952(PLAYER::PLAYER_ID()) || __LIB_2__::func_730(PLAYER::PLAYER_ID())) || __LIB_4__::func_968(PLAYER::PLAYER_ID())) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || __LIB_6__::func_527(3))
	{
		return 1;
	}
	return 0;
}

int func_263()//Position - 0x5DE05
{
	if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_6__::func_551(Global_1853193) && !__LIB_1__::func_637(Global_1853193))
		{
			if (__LIB_9__::func_690())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_264()//Position - 0x5DE3E
{
	if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_6__::func_552(Global_1853193) && !__LIB_1__::func_637(Global_1853193))
		{
			return 1;
		}
	}
	return 0;
}

int func_265()//Position - 0x4DF05
{
	if (__LIB_3__::func_100())
	{
		return 0;
	}
	if (__LIB_16__::func_925())
	{
		return 0;
	}
	if (__LIB_0__::func_877())
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	if (((__LIB_0__::func_93() || __LIB_1__::func_943()) || __LIB_6__::func_180()) || (__LIB_6__::func_524() && __LIB_4__::func_946(PLAYER::PLAYER_ID(), 0)))
	{
		return 0;
	}
	return 1;
}

void func_266(int iParam0, bool bParam1)//Position - 0x4E5FC
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2), 17);
		__LIB_0__::func_186(15544, 1, -1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_336.f_2), 17);
		__LIB_0__::func_186(15544, 0, -1);
	}
}

void func_267(int iParam0)//Position - 0x5B8E2
{
	if (__LIB_4__::func_947(PLAYER::PLAYER_ID()) && !__LIB_4__::func_332(PLAYER::PLAYER_ID()))
	{
		Global_1952150 = iParam0;
	}
}

void func_268(struct<3> Param0, struct<3> Param1, var uParam2)//Position - 0x5BC45
{
	struct<6> Var0[2];
	struct<4> Var1;
	struct<3> Var2;
	Var1 = { *uParam2 };
	Var1.f_3 = { uParam2->f_3 };
	Var0[0 /*6*/] = { Param1 };
	Var0[1 /*6*/] = { Param0 };
	Var2 = { Var1 - Var0[0 /*6*/] };
	Var2 = { __LIB_0__::func_327(Var2, -Var0[0 /*6*/].f_3.f_2) };
	Var2 = { __LIB_0__::func_327(Var2, Var0[1 /*6*/].f_3.f_2) };
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0[1 /*6*/], 0f, Var2) };
	while (Var0[0 /*6*/].f_3.f_2 > 180f)
	{
		Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
	}
	while (Var0[0 /*6*/].f_3.f_2 < -180f)
	{
		Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
	}
	while (Var0[1 /*6*/].f_3.f_2 > 180f)
	{
		Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
	}
	while (Var0[1 /*6*/].f_3.f_2 < -180f)
	{
		Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
	}
	Var1.f_3.f_2 = (Var1.f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
	while (Var1.f_3.f_2 > 180f)
	{
		Var1.f_3.f_2 = (Var1.f_3.f_2 - 360f);
	}
	while (Var1.f_3.f_2 < -180f)
	{
		Var1.f_3.f_2 = (Var1.f_3.f_2 + 360f);
	}
	*uParam2 = { Var1 };
	uParam2->f_3 = { Var1.f_3 };
}

void func_269(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBA6
{
	if (__LIB_4__::func_947(PLAYER::PLAYER_ID()))
	{
		STATS::PLAYSTATS_MINIGAME_USAGE(1, 0, 0);
	}
	else
	{
		STATS::PLAYSTATS_MC_CLUBHOUSE_ACTIVITY(__LIB_2__::func_477(__LIB_0__::func_797()), __LIB_2__::func_552(__LIB_0__::func_797()), __LIB_2__::func_476(), __LIB_2__::func_475(), iParam1, iParam2, iParam3);
	}
}

void func_270(var uParam0)//Position - 0x5CDEC
{
	if (*uParam0 > 0 && *uParam0 < 206)
	{
		switch (*uParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 70:
			case 71:
			case 90:
			case 91:
			case 92:
			case 93:
			case 132:
			case 133:
			case 154:
			case 184:
			case 187:
			case 188:
			case 189:
			case 192:
			case 193:
			case 194:
			case 195:
			case 196:
			case 197:
			case 198:
			case 205:
				__LIB_0__::func_646();
				break;
			}
	}
}

void func_271(bool bParam0, int iParam1)//Position - 0x3C5A
{
	bParam0->f_4 = iParam1;
}

void func_272(int iParam0)//Position - 0x53F40
{
	Global_4718592.f_107227 = iParam0;
	if (Global_4718592.f_107227 != 18 && Global_4718592.f_107227 != 19)
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_28), 18);
	}
	__LIB_37__::func_778((__LIB_2__::func_629() || __LIB_0__::func_625()));
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x28BB9
{
	int iVar0;
	char* sVar1;
	__LIB_18__::func_404("cgsMBS", iParam3, iParam1, iParam0, bParam4, 0, -2340845);
	iParam3->f_1 = __LIB_18__::func_608("cgsWT", iParam1, &(iParam0->f_1), bParam4, 0, 0);
	iParam3->f_1.f_2 = __LIB_18__::func_608("cgsPT", iParam1, &(iParam0->f_2), bParam4, 0, 0);
	__LIB_18__::func_404("cgsTBS", &(iParam3->f_1.f_1), iParam1, &(iParam0->f_3), bParam4, 0, -2340845);
	iParam3->f_1.f_3 = __LIB_18__::func_608("cgsCT", iParam1, &(iParam0->f_4), bParam4, 0, 0);
	iParam3->f_1.f_7 = __LIB_18__::func_608("cgsAT", iParam1, &(iParam0->f_5), bParam4, 0, 0);
	iParam3->f_1.f_4 = __LIB_18__::func_608("cgsSC", iParam1, &(iParam0->f_6), bParam4, 1, 1);
	__LIB_18__::func_404("cgsST", &(iParam3->f_1.f_5), iParam1, &(iParam0->f_7), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgsTCL", &(iParam3->f_1.f_6), iParam1, &(iParam0->f_8), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgscSK", &(iParam3->f_9), iParam1, &(iParam0->f_9), bParam4, 1, -2340845);
	__LIB_18__::func_404("cgscSH", &(iParam3->f_9.f_1), iParam1, &(iParam0->f_10), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgscSM", &(iParam3->f_9.f_2), iParam1, &(iParam0->f_11), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgscSV", &(iParam3->f_9.f_3), iParam1, &(iParam0->f_12), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgscPF", &(iParam3->f_9.f_4), iParam1, &(iParam0->f_13), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgscPL", &(iParam3->f_9.f_5), iParam1, &(iParam0->f_14), bParam4, 0, -2340845);
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		__LIB_18__::func_5(&sVar1, "cgscSST_", iVar0, -1);
		__LIB_18__::func_404(&sVar1, &(iParam3->f_9.f_6[iVar0]), iParam1, &(iParam0->f_15[iVar0]), bParam4, 0, -2340845);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (iVar0 != 5)
		{
			__LIB_18__::func_5(&sVar1, "cgscSSWG_", iVar0, -1);
			__LIB_18__::func_404(&sVar1, &(iParam3->f_9.f_11[iVar0]), iParam1, &(iParam0->f_20[iVar0]), bParam4, 0, -2340845);
		}
		iVar0++;
	}
	__LIB_18__::func_404("cgscSF", &(iParam3->f_9.f_21), iParam1, &(iParam0->f_30), bParam4, -1, -2340845);
	__LIB_18__::func_404("cgscSS", &(iParam3->f_9.f_22), iParam1, &(iParam0->f_31), bParam4, -1, -2340845);
	__LIB_18__::func_404("cgscSB", &(iParam3->f_9.f_23), iParam1, &(iParam0->f_32), bParam4, -1, -2340845);
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		__LIB_18__::func_5(&sVar1, "cgsWDM_", iVar0, -1);
		__LIB_18__::func_404(&sVar1, &(iParam3->f_238[iVar0]), iParam1, &(iParam0->f_33[iVar0]), bParam4, 100, -2340845);
		iVar0++;
	}
	iParam3->f_248 = __LIB_18__::func_608("cgswIA", iParam1, &(iParam0->f_43), bParam4, -1, -1);
	__LIB_32__::func_201(iParam2, iParam3, bParam4);
	__LIB_18__::func_404("cgsHS", &(iParam3->f_249), iParam1, &(iParam0->f_239), bParam4, 100, -2340845);
	__LIB_18__::func_404("cgsSH", &(iParam3->f_250), iParam1, &(iParam0->f_240), bParam4, 100, -2340845);
	iParam3->f_251 = __LIB_18__::func_608("cgsHMR", iParam1, &(iParam0->f_241), bParam4, 1, 1);
	iParam3->f_252 = __LIB_18__::func_608("cgsHRS", iParam1, &(iParam0->f_242), bParam4, 2, 2);
	iParam3->f_253 = __LIB_18__::func_608("cgsER", iParam1, &(iParam0->f_243), bParam4, 0, 0);
	iParam3->f_33 = __LIB_18__::func_608("cgsBT", iParam1, &(iParam0->f_244), bParam4, 0, 0);
	__LIB_18__::func_404("cgsBCT", &(iParam3->f_33.f_1), iParam1, &(iParam0->f_245), bParam4, 9, -2340845);
	iParam3->f_35 = __LIB_18__::func_608("cgsMR", iParam1, &(iParam0->f_246), bParam4, 0, 0);
	iParam3->f_35.f_1 = __LIB_18__::func_608("cgsMS", iParam1, &(iParam0->f_247), bParam4, 1, 1);
	__LIB_18__::func_404("cgsONGH", &(iParam3->f_37.f_1), iParam1, &(iParam0->f_248), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgsONGR", &(iParam3->f_37.f_2), iParam1, &(iParam0->f_249), bParam4, 0, -2340845);
	iParam3->f_37.f_4 = __LIB_18__::func_608("cgsONAT", iParam1, &(iParam0->f_250), bParam4, 1, 1);
	__LIB_18__::func_404("cgsONGA", &(iParam3->f_37.f_3), iParam1, &(iParam0->f_251), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgsONAQ", &(iParam3->f_37.f_5), iParam1, &(iParam0->f_252), bParam4, 1, -2340845);
	__LIB_18__::func_404("cgsONHGH", &(iParam3->f_43.f_1), iParam1, &(iParam0->f_253), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgsONHGR", &(iParam3->f_43.f_2), iParam1, &(iParam0->f_254), bParam4, 0, -2340845);
	iParam3->f_43.f_4 = __LIB_18__::func_608("cgsONHAT", iParam1, &(iParam0->f_255), bParam4, 1, 1);
	__LIB_18__::func_404("cgsONHGA", &(iParam3->f_43.f_3), iParam1, &(iParam0->f_256), bParam4, 0, -2340845);
	__LIB_18__::func_404("cgsONHAQ", &(iParam3->f_43.f_5), iParam1, &(iParam0->f_257), bParam4, 1, -2340845);
	iParam3->f_254 = __LIB_18__::func_608("cgsspv", iParam1, &(iParam0->f_258), bParam4, 0, 0);
	__LIB_18__::func_404("cgsBOI", &(iParam3->f_255), iParam1, &(iParam0->f_259), bParam4, -1, -2340845);
}

float func_274()//Position - 0x94328
{
	return 29.2197f;
}

Vector3 func_275()//Position - 0x94359
{
	return -29.47945f, -1086.614f, 26.955f;
}

Vector3 func_276()//Position - 0x95194
{
	return 0f, 0f, -20f;
}

int func_277()//Position - 0x951A3
{
	return joaat("reh_prop_reh_door_gar_02a");
}

void func_278(int iParam0)//Position - 0x96450
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		HUD::REMOVE_BLIP(&iParam0);
	}
}

int func_279(int iParam0, var uParam1, bool bParam2)//Position - 0x96CE2
{
	int iVar0;
	int iVar1;
	iVar1 = NETWORK::GET_NETWORK_TIME();
	if (bParam2)
	{
		iVar1 = MISC::GET_GAME_TIMER();
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, iParam0));
	return iVar0;
}

void func_280(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x4FF72
{
	int iVar0;
	if (__LIB_0__::func_812(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0 = (iVar0 + 1);
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

bool func_281()//Position - 0x91675
{
	return __LIB_20__::func_137() != -1;
}

void func_282(int* iParam0, bool bParam1, bool bParam2)//Position - 0x94513
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!iParam0->f_386)
	{
		return;
	}
	if (iParam0->f_382 == 0 && !BitTest(iParam0->f_379, iParam0->f_382))
	{
		if (__LIB_0__::func_703(iParam0->f_1, 32))
		{
			NETWORK::NETWORK_HIDE_PROJECTILE_IN_CUTSCENE();
		}
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, __LIB_0__::func_703(iParam0->f_1, 4));
		if (!Global_2703735.f_3428)
		{
			__LIB_3__::func_81(1, 1, __LIB_0__::func_703(iParam0->f_1, 128));
		}
		iVar0 = 0;
		if (__LIB_0__::func_703(iParam0->f_1, 8))
		{
			__LIB_1__::func_489(&iVar0, 524288);
		}
		if (__LIB_0__::func_703(iParam0->f_1, 16))
		{
			__LIB_1__::func_489(&iVar0, 1048576);
		}
		if (__LIB_0__::func_893())
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, iVar0, 0);
		}
		iParam0->f_376 = MISC::GET_GAME_TIMER();
	}
	if (iParam0->f_383 == 0 && !iParam0->f_385)
	{
		iParam0->f_384 = MISC::GET_GAME_TIMER();
		iParam0->f_385 = 1;
	}
	if (!BitTest(iParam0->f_379, iParam0->f_382))
	{
		iParam0->f_374 = MISC::GET_GAME_TIMER();
		if (!CAM::DOES_CAM_EXIST(iParam0->f_387))
		{
			if (BitTest(*iParam0, 0))
			{
				iParam0->f_387 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
			}
			else
			{
				iParam0->f_387 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			}
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		iVar1 = iParam0->f_18[iParam0->f_382 /*36*/];
		if (iParam0->f_18[iParam0->f_382 /*36*/].f_26 > 0 && iParam0->f_18[iParam0->f_382 /*36*/].f_26 < iParam0->f_18[iParam0->f_382 /*36*/])
		{
			iVar1 = (iVar1 - iParam0->f_18[iParam0->f_382 /*36*/].f_26);
		}
		else if (iParam0->f_18[iParam0->f_382 /*36*/] < iParam0->f_18[iParam0->f_382 /*36*/].f_26)
		{
		}
		if (CAM::DOES_CAM_EXIST(iParam0->f_387))
		{
			if (BitTest(*iParam0, 0))
			{
				if (BitTest(*iParam0, 1))
				{
					iParam0->f_394 = PED::CREATE_SYNCHRONIZED_SCENE(iParam0->f_427, iParam0->f_430, iParam0->f_434);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iParam0->f_387, iParam0->f_394, &(iParam0->f_411), &(iParam0->f_395));
					MISC::SET_BIT(iParam0, 2);
				}
				else
				{
					CAM::PLAY_CAM_ANIM(iParam0->f_387, &(iParam0->f_411), &(iParam0->f_395), iParam0->f_427, iParam0->f_430, iParam0->f_433, iParam0->f_434);
				}
			}
			else
			{
				CAM::SET_CAM_PARAMS(iParam0->f_387, iParam0->f_18[iParam0->f_382 /*36*/].f_1, iParam0->f_18[iParam0->f_382 /*36*/].f_7, iParam0->f_18[iParam0->f_382 /*36*/].f_13, 0, 1, 1, 2);
				if ((!__LIB_0__::func_86(iParam0->f_18[iParam0->f_382 /*36*/].f_4) && !__LIB_0__::func_86(iParam0->f_18[iParam0->f_382 /*36*/].f_10)) && iParam0->f_18[iParam0->f_382 /*36*/].f_14 != 0f)
				{
					CAM::SET_CAM_PARAMS(iParam0->f_387, iParam0->f_18[iParam0->f_382 /*36*/].f_4, iParam0->f_18[iParam0->f_382 /*36*/].f_10, iParam0->f_18[iParam0->f_382 /*36*/].f_14, iVar1, iParam0->f_18[iParam0->f_382 /*36*/].f_27, iParam0->f_18[iParam0->f_382 /*36*/].f_28, 2);
				}
				CAM::STOP_CAM_SHAKING(iParam0->f_387, true);
				if (iParam0->f_18[iParam0->f_382 /*36*/].f_15 > 0f)
				{
					CAM::SHAKE_CAM(iParam0->f_387, "Hand_shake", iParam0->f_18[iParam0->f_382 /*36*/].f_15);
				}
			}
		}
		if (iParam0->f_18[iParam0->f_382 /*36*/].f_24 > 0)
		{
			CAM::DO_SCREEN_FADE_IN(iParam0->f_18[iParam0->f_382 /*36*/].f_24);
		}
		MISC::SET_BIT(&(iParam0->f_379), iParam0->f_382);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_387))
	{
		if (iParam0->f_18[iParam0->f_382 /*36*/].f_29)
		{
			CAM::SET_USE_HI_DOF();
			CAM::SET_CAM_USE_SHALLOW_DOF_MODE(iParam0->f_387, true);
			CAM::SET_CAM_DOF_PLANES(iParam0->f_387, iParam0->f_18[iParam0->f_382 /*36*/].f_31, iParam0->f_18[iParam0->f_382 /*36*/].f_33, iParam0->f_18[iParam0->f_382 /*36*/].f_34, iParam0->f_18[iParam0->f_382 /*36*/].f_32);
			CAM::SET_CAM_DOF_STRENGTH(iParam0->f_387, iParam0->f_18[iParam0->f_382 /*36*/].f_30);
		}
		else
		{
			CAM::SET_CAM_USE_SHALLOW_DOF_MODE(iParam0->f_387, false);
			CAM::SET_CAM_DOF_STRENGTH(iParam0->f_387, 0f);
		}
	}
	if (iParam0->f_18[iParam0->f_382 /*36*/].f_25 > 0)
	{
		if (!BitTest(iParam0->f_381, iParam0->f_382))
		{
			if (MISC::GET_GAME_TIMER() >= ((iParam0->f_374 + iParam0->f_18[iParam0->f_382 /*36*/]) - iParam0->f_18[iParam0->f_382 /*36*/].f_25))
			{
				CAM::DO_SCREEN_FADE_OUT(iParam0->f_18[iParam0->f_382 /*36*/].f_25);
				MISC::SET_BIT(&(iParam0->f_381), iParam0->f_382);
			}
		}
	}
	iVar2 = iParam0->f_18[iParam0->f_382 /*36*/];
	iParam0->f_375 = (MISC::GET_GAME_TIMER() - iParam0->f_374);
	iParam0->f_377 = (MISC::GET_GAME_TIMER() - iParam0->f_376);
	if (iParam0->f_375 >= iVar2)
	{
		if (iParam0->f_382 == (iParam0->f_372 - 1))
		{
			__LIB_30__::func_910(iParam0, __LIB_0__::func_703(iParam0->f_1, 2), bParam1, bParam2, __LIB_0__::func_703(iParam0->f_1, 64), 1);
		}
		else
		{
			iParam0->f_382++;
			iParam0->f_375 = 0;
		}
	}
	if (iParam0->f_386)
	{
		if ((MISC::GET_GAME_TIMER() - iParam0->f_384) >= iParam0->f_307[iParam0->f_383 /*8*/].f_1)
		{
			if (!BitTest(iParam0->f_380, iParam0->f_383))
			{
				MISC::SET_BIT(&(iParam0->f_380), iParam0->f_383);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_307[iParam0->f_383 /*8*/].f_2)))
				{
					HUD::CLEAR_HELP(true);
					__LIB_0__::func_151(&(iParam0->f_307[iParam0->f_383 /*8*/].f_2), iParam0->f_307[iParam0->f_383 /*8*/]);
					if (iParam0->f_383 + 1 < iParam0->f_373)
					{
						iParam0->f_383++;
					}
				}
			}
		}
	}
}

void func_283(int iParam0, bool bParam1)//Position - 0x789CE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		__LIB_25__::func_140(iParam0, &(Global_2667225.f_45.f_69), bParam1, 1, 0);
	}
}

void func_284(int iParam0, int iParam1)//Position - 0x5DD0B
{
	__LIB_25__::func_140(*iParam0, &(Global_1585857[iParam1 /*142*/]), 1, 1, 0);
	__LIB_3__::func_3(iParam0, iParam1);
}

void func_285()//Position - 0x2FF97
{
	PED::SET_PED_NON_CREATION_AREA(-1112.99f, 774.12f, 151.77f, -1077.99f, 853.65f, 187.66f);
}

int func_286()//Position - 0x2FFC1
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-1212.16f, 634.82f, 138.5f, -1010.08f, 830.94f, 180.47f, false, true, true, true);
}

void func_287(bool bParam0)//Position - 0x3079C
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	Var0 = { -1212.164f, 634.82306f, 100.50546f };
	Var1 = { -1010.0827f, 830.9487f, 250.4705f };
	Var2 = { Var0 };
	Var3 = { Var1 };
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Var2, Var3, 25f, false, bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, bParam0, true);
	if (!bParam0)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var0, Var1, 0);
		MISC::CLEAR_AREA(-1100.5f, 789.8f, 164.34f, 40f, true, false, false, false);
	}
}

int func_288()//Position - 0x299EA
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 1;
	}
	return 0;
}

bool func_289(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2AAD7
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	iVar2 = __LIB_37__::func_954(iParam0, iParam1);
	if (!__LIB_0__::func_121(iParam0) || !__LIB_0__::func_121(iParam1))
	{
		if (iVar2 != -1)
		{
			__LIB_13__::func_439(&(Local_47[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!__LIB_14__::func_736(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = __LIB_37__::func_953();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_47[iVar2 /*4*/].f_1 = iParam0;
		Local_47[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = __LIB_37__::func_955(&(Local_47[iVar2 /*4*/]), Var1, iParam1, &(Local_47[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_47[iVar2 /*4*/].f_3) < iParam4);
}

void func_290(bool bParam0, int iParam1, int iParam2)//Position - 0x3B8F9
{
	bool bVar0;
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			__LIB_37__::func_962(iParam1, iParam2, 1, 1);
		}
	}
}

void func_291(bool bParam0)//Position - 0x4C447
{
	int iVar0;
	__LIB_16__::func_6();
	if (!__LIB_0__::func_134())
	{
		iVar0 = __LIB_0__::func_775();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_112473[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_112473[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_112473[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_94616 == Global_100478)
		{
			Global_113386.f_18574[iVar0 /*6*/].f_4++;
		}
		Global_94616 = Global_100478;
		if (bParam0)
		{
			__LIB_14__::func_837(iVar0, 1, 0);
			__LIB_14__::func_849(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_112473[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
			}
			__LIB_37__::func_199(iVar0, 1, 1, 0);
		}
		Global_112473[iVar0 /*10*/].f_6 = 1;
	}
}

void func_292(int iParam0, int iParam1, int iParam2)//Position - 0xE6F
{
	__LIB_37__::func_962(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		__LIB_0__::func_84(500, 0);
	}
}

int func_293(int iParam0, bool bParam1)//Position - 0x2EF3D
{
	int iVar0;
	if (bParam1)
	{
		if (!__LIB_0__::func_121(iParam0))
		{
			iVar0 = 6;
			return iVar0;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = 5;
	}
	else if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		iVar0 = 1;
	}
	else if (PED::IS_PED_IN_COVER(iParam0, false))
	{
		iVar0 = 0;
	}
	else if (TASK::IS_PED_WALKING(iParam0))
	{
		iVar0 = 4;
	}
	else if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 2;
	}
	else if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 6;
	}
	return iVar0;
}

int func_294(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x22CE8
{
	struct<3> Var0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (__LIB_14__::func_858(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return __LIB_14__::func_855(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (__LIB_32__::func_113(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

void func_295(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0xA4D
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (bParam3)
		{
			Param1.f_2 = -200f;
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		if (bParam4)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		}
	}
}

int func_296(char* sParam0, bool bParam1)//Position - 0xFAB
{
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return 0;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return 1;
	}
	return 0;
}

int func_297()//Position - 0x40658
{
	return joaat("U_M_M_Aldinapoli");
}

char* func_298()//Position - 0x40EF0
{
	return "Al_DiNapoli";
}

void func_299(char* sParam0)//Position - 0x142D
{
	__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}

void func_300(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBE8
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	HUD::CLEAR_HELP(true);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_46 != 0 && iLocal_46 != joaat("OBJECT")) && iLocal_46 != joaat("GADGET_PARACHUTE"))
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_46, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_46, false);
				}
			}
		}
	}
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
}

int func_301()//Position - 0x3AC6E
{
	int iVar0;
	char cVar1[24];
	char* sVar2;
	if (Global_21605 == 4)
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar0 = (iVar0 + Global_22615);
		if (iVar0 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar0 /*6*/])))
			{
				cVar1 = { Global_21224 };
				StringConCat(&cVar1, "SL", 24);
				sVar2 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar1), iVar0 * 3, iVar0 * 3 + 1);
				return __LIB_13__::func_103(sVar2);
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -2;
		}
	}
	return -3;
}

void func_302(var uParam0, var uParam1)//Position - 0x774D
{
	*uParam0 = uParam1;
	uParam0->f_1 = 1;
}

int func_303(bool bParam0, int iParam1)//Position - 0x1A48F
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 0:
				return joaat("A_F_Y_ClubCust_01");
			case 1:
				return joaat("A_F_Y_ClubCust_03");
			case 2:
				return joaat("A_F_Y_ClubCust_02");
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return joaat("A_M_Y_ClubCust_01");
			case 1:
				return joaat("A_M_Y_ClubCust_03");
			case 2:
				return joaat("A_M_Y_ClubCust_02");
			}
		default:
	}
	if (bParam0)
	{
		return joaat("A_F_Y_ClubCust_01");
	}
	return joaat("A_M_Y_ClubCust_01");
}

void func_304(var uParam0)//Position - 0x1A532
{
	int iVar0;
	*uParam0 = joaat("IG_DJBlamRyanH");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_305(var uParam0)//Position - 0x1A574
{
	int iVar0;
	*uParam0 = joaat("IG_DJSolFotios");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[1 /*2*/] = 0;
}

void func_306(var uParam0)//Position - 0x1A5BE
{
	int iVar0;
	*uParam0 = joaat("IG_DJBlamRyanS");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_307(var uParam0)//Position - 0x1A600
{
	int iVar0;
	*uParam0 = joaat("IG_DJTalIgnazio");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_308(var uParam0)//Position - 0x1A642
{
	int iVar0;
	*uParam0 = joaat("IG_DJSolJakob");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_309(var uParam0)//Position - 0x1A684
{
	int iVar0;
	*uParam0 = joaat("IG_DJBlamRupert");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_310(var uParam0)//Position - 0x1A6C6
{
	int iVar0;
	*uParam0 = joaat("IG_DJTalAurelia");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_311(var uParam0)//Position - 0x1A708
{
	int iVar0;
	*uParam0 = joaat("IG_DJDixManager");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_312(var uParam0)//Position - 0x1A74A
{
	int iVar0;
	*uParam0 = joaat("IG_DJSolManager");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_313(var uParam0)//Position - 0x1A78C
{
	int iVar0;
	*uParam0 = joaat("IG_DJBlaMadon");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[1 /*2*/] = 0;
	uParam0->f_38[1 /*2*/].f_1 = 0;
	uParam0->f_38[0 /*2*/] = 0;
	uParam0->f_38[0 /*2*/].f_1 = 0;
}

void func_314(var uParam0, int iParam1)//Position - 0x1A7F2
{
	int iVar0;
	if (iParam1 == 0)
	{
		*uParam0 = joaat("IG_TalCC");
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_1[iVar0 /*3*/] = 0;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			uParam0->f_1[iVar0 /*3*/].f_2 = 0;
			iVar0++;
		}
		uParam0->f_38[0 /*2*/] = 0;
		uParam0->f_38[0 /*2*/].f_1 = 0;
	}
	else
	{
		*uParam0 = joaat("IG_TalMM");
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_1[iVar0 /*3*/] = 0;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			uParam0->f_1[iVar0 /*3*/].f_2 = 0;
			iVar0++;
		}
		uParam0->f_38[0 /*2*/] = 0;
		uParam0->f_38[0 /*2*/].f_1 = 0;
	}
}

void func_315(var uParam0)//Position - 0x1A89B
{
	int iVar0;
	*uParam0 = joaat("IG_Dix");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_316(var uParam0)//Position - 0x1A8DD
{
	int iVar0;
	*uParam0 = joaat("IG_Sol");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

bool func_317()//Position - 0x1AA41
{
	return BitTest(Global_1946250.f_3, 6);
}

int func_318(var uParam0, bool bParam1)//Position - 0x1BFE3
{
	int iVar0;
	iVar0 = 0;
	if (BitTest(*uParam0, bParam1))
	{
		iVar0++;
	}
	if (BitTest(*uParam0, bParam1 + 1))
	{
		iVar0 += 2;
	}
	if (BitTest(*uParam0, bParam1 + 2))
	{
		iVar0 += 4;
	}
	return iVar0;
}

void func_319(var uParam0)//Position - 0x2867A
{
	int iVar0;
	*uParam0 = joaat("U_M_Y_Guido_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_320(var uParam0)//Position - 0x286BC
{
	int iVar0;
	*uParam0 = joaat("IG_Lacey_Jones_02");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_321(var uParam0)//Position - 0x287AE
{
	int iVar0;
	*uParam0 = joaat("IG_TylerDix_02");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_322(var uParam0)//Position - 0x287F0
{
	int iVar0;
	*uParam0 = joaat("U_F_Y_Mistress");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_323(var uParam0)//Position - 0x28832
{
	int iVar0;
	*uParam0 = joaat("U_F_M_Miranda_02");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_324(var uParam0)//Position - 0x28874
{
	int iVar0;
	*uParam0 = joaat("IG_KerryMcIntosh_02");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_325(var uParam0)//Position - 0x288B6
{
	int iVar0;
	*uParam0 = joaat("IG_JimmyBoston_02");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_326(var uParam0)//Position - 0x288F8
{
	int iVar0;
	*uParam0 = joaat("U_F_Y_PoppyMich_02");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[4 /*3*/] = 1;
}

void func_327(var uParam0)//Position - 0x28AEC
{
	int iVar0;
	*uParam0 = joaat("IG_DJSolRobT");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_328(var uParam0)//Position - 0x28B2E
{
	int iVar0;
	*uParam0 = joaat("IG_DJSolMike");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_329(var uParam0)//Position - 0x28B70
{
	int iVar0;
	*uParam0 = joaat("S_M_Y_ClubBar_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 2;
	uParam0->f_1[2 /*3*/] = 2;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[4 /*3*/] = 2;
}

void func_330(var uParam0)//Position - 0x28BD2
{
	int iVar0;
	*uParam0 = joaat("S_M_Y_WareTech_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 5;
	uParam0->f_1[0 /*3*/].f_1 = 0;
	uParam0->f_1[3 /*3*/] = 5;
	uParam0->f_1[3 /*3*/].f_1 = 0;
	uParam0->f_1[4 /*3*/] = 5;
	uParam0->f_1[4 /*3*/].f_1 = 0;
	uParam0->f_1[8 /*3*/] = 4;
	uParam0->f_1[8 /*3*/].f_1 = 0;
}

void func_331(var uParam0)//Position - 0x28C5E
{
	int iVar0;
	*uParam0 = joaat("U_F_Y_DanceBurl_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6 /*3*/] = 1;
	uParam0->f_1[6 /*3*/].f_1 = 0;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[2 /*3*/].f_1 = 0;
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 0;
	uParam0->f_1[4 /*3*/] = 1;
	uParam0->f_1[4 /*3*/].f_1 = 0;
	uParam0->f_1[3 /*3*/] = 0;
	uParam0->f_1[3 /*3*/].f_1 = 1;
}

void func_332(var uParam0)//Position - 0x28CFA
{
	int iVar0;
	*uParam0 = joaat("U_F_Y_DanceBurl_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_333(var uParam0)//Position - 0x28D3C
{
	int iVar0;
	*uParam0 = joaat("U_F_Y_DanceLthr_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6 /*3*/] = 1;
	uParam0->f_1[6 /*3*/].f_1 = 0;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[2 /*3*/].f_1 = 0;
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 0;
	uParam0->f_1[11 /*3*/] = 1;
	uParam0->f_1[11 /*3*/].f_1 = 0;
	uParam0->f_1[4 /*3*/] = 1;
	uParam0->f_1[4 /*3*/].f_1 = 0;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[3 /*3*/].f_1 = 0;
	uParam0->f_38[6 /*2*/] = 1;
	uParam0->f_38[6 /*2*/].f_1 = 0;
}

void func_334(var uParam0)//Position - 0x28DFE
{
	int iVar0;
	*uParam0 = joaat("U_F_Y_DanceLthr_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[6 /*2*/] = 0;
	uParam0->f_38[6 /*2*/].f_1 = 0;
}

void func_335(var uParam0)//Position - 0x28E52
{
	int iVar0;
	*uParam0 = joaat("U_F_Y_DanceRave_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6 /*3*/] = 1;
	uParam0->f_1[6 /*3*/].f_1 = 0;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[2 /*3*/].f_1 = 0;
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 0;
	uParam0->f_1[11 /*3*/] = 1;
	uParam0->f_1[11 /*3*/].f_1 = 0;
	uParam0->f_1[4 /*3*/] = 1;
	uParam0->f_1[4 /*3*/].f_1 = 2;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[3 /*3*/].f_1 = 0;
}

void func_336(var uParam0)//Position - 0x28F02
{
	int iVar0;
	*uParam0 = joaat("U_F_Y_DanceRave_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_337(var uParam0)//Position - 0x28F44
{
	int iVar0;
	*uParam0 = joaat("U_M_Y_DanceBurl_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[1 /*3*/] = 1;
	uParam0->f_1[1 /*3*/].f_1 = 0;
	uParam0->f_1[6 /*3*/] = 0;
	uParam0->f_1[6 /*3*/].f_1 = 1;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[2 /*3*/].f_1 = 0;
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 0;
	uParam0->f_1[4 /*3*/] = 0;
	uParam0->f_1[4 /*3*/].f_1 = 2;
	uParam0->f_1[3 /*3*/] = 0;
	uParam0->f_1[3 /*3*/].f_1 = 1;
}

void func_338(var uParam0)//Position - 0x28FF2
{
	int iVar0;
	*uParam0 = joaat("U_M_Y_DanceBurl_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_339(var uParam0)//Position - 0x29034
{
	int iVar0;
	*uParam0 = joaat("U_M_Y_DanceLthr_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6 /*3*/] = 1;
	uParam0->f_1[6 /*3*/].f_1 = 0;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[2 /*3*/].f_1 = 0;
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 0;
	uParam0->f_1[11 /*3*/] = 1;
	uParam0->f_1[11 /*3*/].f_1 = 0;
	uParam0->f_1[4 /*3*/] = 1;
	uParam0->f_1[4 /*3*/].f_1 = 0;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[3 /*3*/].f_1 = 0;
	uParam0->f_38[6 /*2*/] = 1;
	uParam0->f_38[6 /*2*/].f_1 = 0;
	uParam0->f_38[2 /*2*/] = 0;
	uParam0->f_38[2 /*2*/].f_1 = 0;
	uParam0->f_38[0 /*2*/] = 0;
	uParam0->f_38[0 /*2*/].f_1 = 0;
}

void func_340(var uParam0)//Position - 0x2911A
{
	int iVar0;
	*uParam0 = joaat("U_M_Y_DanceLthr_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[6 /*2*/] = 0;
	uParam0->f_38[6 /*2*/].f_1 = 0;
	uParam0->f_38[2 /*2*/] = -1;
	uParam0->f_38[2 /*2*/].f_1 = -1;
	uParam0->f_38[0 /*2*/] = -1;
	uParam0->f_38[0 /*2*/].f_1 = -1;
}

void func_341(var uParam0)//Position - 0x29192
{
	int iVar0;
	*uParam0 = joaat("U_M_Y_DanceRave_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[6 /*3*/] = 1;
	uParam0->f_1[6 /*3*/].f_1 = 0;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[2 /*3*/].f_1 = 0;
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 0;
	uParam0->f_1[11 /*3*/] = 1;
	uParam0->f_1[11 /*3*/].f_1 = 0;
	uParam0->f_1[4 /*3*/] = 0;
	uParam0->f_1[4 /*3*/].f_1 = 1;
	uParam0->f_38[0 /*2*/] = 0;
	uParam0->f_38[0 /*2*/].f_1 = 0;
}

void func_342(var uParam0)//Position - 0x29242
{
	int iVar0;
	*uParam0 = joaat("U_M_Y_DanceRave_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[7 /*3*/] = 1;
	uParam0->f_1[7 /*3*/].f_1 = 0;
	uParam0->f_38[0 /*2*/] = -1;
	uParam0->f_38[0 /*2*/].f_1 = -1;
}

void func_343(var uParam0)//Position - 0x292A8
{
	int iVar0;
	*uParam0 = joaat("S_M_M_Bouncer_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 1;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[3 /*3*/].f_1 = 4;
}

void func_344(var uParam0)//Position - 0x2930E
{
	int iVar0;
	*uParam0 = joaat("S_M_M_Bouncer_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_345(var uParam0)//Position - 0x29350
{
	int iVar0;
	*uParam0 = joaat("S_M_M_Bouncer_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 0;
	uParam0->f_1[0 /*3*/].f_1 = 2;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[3 /*3*/].f_1 = 2;
}

void func_346(var uParam0)//Position - 0x293B6
{
	int iVar0;
	*uParam0 = joaat("S_M_M_Bouncer_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 0;
	uParam0->f_1[3 /*3*/].f_1 = 5;
	uParam0->f_1[11 /*3*/] = 1;
	uParam0->f_1[11 /*3*/].f_1 = 1;
}

void func_347(var uParam0)//Position - 0x29428
{
	int iVar0;
	*uParam0 = joaat("S_M_Y_ClubBar_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_348(var uParam0)//Position - 0x2946A
{
	*uParam0 = joaat("prop_ped_gib_01");
}

void func_349(var uParam0)//Position - 0x2947A
{
	int iVar0;
	*uParam0 = joaat("U_M_Y_Justin");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[4 /*3*/] = 1;
}

void func_350(var uParam0)//Position - 0x294C4
{
	int iVar0;
	*uParam0 = joaat("IG_TonyPrince");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[1 /*2*/] = 0;
	uParam0->f_38[1 /*2*/].f_1 = 0;
}

void func_351(var uParam0)//Position - 0x29518
{
	int iVar0;
	*uParam0 = joaat("CSB_JackHowitzer");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[3 /*3*/] = 1;
}

void func_352(var uParam0)//Position - 0x29562
{
	int iVar0;
	*uParam0 = joaat("IG_TracyDiSanto");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 0;
	uParam0->f_1[0 /*3*/].f_1 = 1;
	uParam0->f_1[2 /*3*/] = 3;
	uParam0->f_1[2 /*3*/].f_1 = 0;
	uParam0->f_1[3 /*3*/] = 5;
	uParam0->f_1[3 /*3*/].f_1 = 0;
	uParam0->f_1[4 /*3*/] = 1;
	uParam0->f_1[4 /*3*/].f_1 = 0;
	uParam0->f_1[6 /*3*/] = 1;
	uParam0->f_1[6 /*3*/].f_1 = 0;
	uParam0->f_1[8 /*3*/] = 3;
}

void func_353(var uParam0)//Position - 0x29607
{
	int iVar0;
	*uParam0 = joaat("IG_Lazlow_2");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[0 /*2*/] = -1;
	uParam0->f_38[1 /*2*/] = -1;
}

void func_354(var uParam0)//Position - 0x29659
{
	int iVar0;
	*uParam0 = joaat("S_M_M_Gaffer_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[0 /*3*/].f_1 = 2;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[3 /*3*/].f_1 = 1;
	uParam0->f_1[4 /*3*/] = 0;
	uParam0->f_1[4 /*3*/].f_1 = 2;
	uParam0->f_1[8 /*3*/] = 0;
	uParam0->f_1[8 /*3*/].f_1 = 0;
	uParam0->f_38[0 /*2*/] = 0;
	uParam0->f_38[0 /*2*/].f_1 = 0;
}

void func_355(var uParam0)//Position - 0x296F7
{
	int iVar0;
	*uParam0 = joaat("S_F_Y_ClubBar_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 2;
	uParam0->f_1[2 /*3*/] = 2;
	uParam0->f_1[3 /*3*/] = 2;
	uParam0->f_1[4 /*3*/].f_1 = 2;
	uParam0->f_1[8 /*3*/].f_1 = 1;
	uParam0->f_38[0 /*2*/] = -1;
	uParam0->f_38[1 /*2*/] = -1;
}

void func_356(var uParam0)//Position - 0x29776
{
	int iVar0;
	*uParam0 = joaat("S_M_Y_ClubBar_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[3 /*3*/].f_1 = 1;
	uParam0->f_1[4 /*3*/] = 1;
	uParam0->f_38[0 /*2*/] = -1;
	uParam0->f_38[1 /*2*/] = -1;
}

void func_357(var uParam0)//Position - 0x297EA
{
	int iVar0;
	*uParam0 = joaat("S_F_Y_ClubBar_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_358(var uParam0)//Position - 0x2982C
{
	int iVar0;
	*uParam0 = joaat("S_M_Y_ClubBar_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_38[0 /*2*/] = -1;
	uParam0->f_38[1 /*2*/] = -1;
}

void func_359(var uParam0)//Position - 0x2987E
{
	int iVar0;
	*uParam0 = joaat("S_F_Y_ClubBar_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/] = 1;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[4 /*3*/].f_1 = 1;
	uParam0->f_1[8 /*3*/] = 1;
	uParam0->f_38[0 /*2*/] = -1;
	uParam0->f_38[1 /*2*/] = -1;
}

void func_360(var uParam0)//Position - 0x298FB
{
	int iVar0;
	*uParam0 = joaat("S_M_M_Bouncer_01");
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0 /*3*/] = 0;
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		uParam0->f_1[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	uParam0->f_1[0 /*3*/].f_1 = 2;
	uParam0->f_1[2 /*3*/] = 1;
	uParam0->f_1[3 /*3*/] = 1;
	uParam0->f_1[3 /*3*/].f_1 = 1;
}

int func_361(int iParam0)//Position - 0x2F52D
{
	switch (iParam0)
	{
		case 11:
		case 12:
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
		case 15:
		case 16:
		case 19:
			return 1;
		default:
	}
	return 0;
}

void func_362(int iParam0)//Position - 0x310F7
{
	Global_1578939 = iParam0;
}

int func_363(int iParam0)//Position - 0x32013
{
	if (iParam0 == __LIB_0__::func_162() || !__LIB_7__::func_920(iParam0))
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_336.f_7;
}

int func_364(int iParam0)//Position - 0x320CD
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 16);
}

void func_365(int iParam0)//Position - 0x32501
{
	if (iParam0 <= 20)
	{
		Global_1578970 = 2;
	}
	else if (iParam0 <= 40)
	{
		Global_1578970 = 3;
	}
	else if (iParam0 <= 60)
	{
		Global_1578970 = 4;
	}
	else if (iParam0 <= 80)
	{
		Global_1578970 = 0;
	}
	else
	{
		Global_1578970 = 1;
	}
}

void func_366()//Position - 0x332E6
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Bogs", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Hall", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_Entry_Stairs", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area_2", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_garage", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_main_area", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_office", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_ba_dlc_int_01_rear_L_corridor", false);
}

int func_367()//Position - 0x1B9B6
{
	if (__LIB_7__::func_889(__LIB_4__::func_369()))
	{
		return joaat("ba_prop_int_stool_low");
	}
	if (__LIB_6__::func_182(__LIB_4__::func_369()))
	{
		return joaat("ba_prop_int_edgy_stool");
	}
	return joaat("ba_prop_int_glam_stool");
}

int func_368(int iParam0)//Position - 0x305E0
{
	int iVar0;
	iVar0 = -1;
	__LIB_31__::func_670(&iParam0);
	switch (Global_1578972)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 12;
				case 2:
					return 11;
				case 3:
					return 12;
				case 4:
					return 12;
				case 5:
					return 12;
				case 6:
					return 12;
				case 8:
					return 12;
				case 10:
					return 12;
				case 11:
					return 12;
				case 12:
					return 12;
				case 13:
					return 12;
				case 14:
					return 12;
				case 15:
					return 11;
				case 16:
					return 12;
				case 17:
					return 12;
				case 20:
					return 11;
				case 22:
					return 12;
				case 25:
					return 11;
				case 26:
					return 11;
				case 27:
					return 11;
				case 28:
					return 11;
				case 29:
					return 12;
				case 30:
					return 11;
				case 32:
					return 12;
				case 33:
					return 11;
				case 36:
					return 11;
				case 37:
					return 11;
				case 38:
					return 11;
				case 43:
					return 17;
				case 44:
					return 14;
				case 47:
					return 2;
				case 50:
					return 11;
				case 51:
					return 11;
				case 52:
					return 11;
				case 53:
					return 11;
				case 54:
					return 11;
				case 55:
					return 12;
				case 56:
					return 12;
				case 57:
					return 11;
				case 58:
					return 11;
				case 59:
					return 12;
				case 60:
					return 12;
				case 61:
					return 11;
				case 62:
					return 12;
				case 63:
					return 12;
				case 64:
					return 11;
				case 65:
					return 11;
				case 66:
					return 12;
				case 67:
					return 12;
				case 68:
					return 12;
				case 69:
					return 11;
				case 70:
					return 11;
				case 71:
					return 12;
				case 72:
					return 12;
				case 73:
					return 12;
				case 74:
					return 12;
				case 75:
					return 11;
				case 76:
					return 11;
				case 77:
					return 11;
				case 78:
					return 12;
				case 79:
					return 12;
				case 80:
					return 12;
				case 81:
					return 11;
				case 82:
					return 12;
				case 83:
					return 11;
				case 84:
					return 12;
				case 85:
					return 12;
				case 86:
					return 11;
				case 87:
					return 12;
				case 88:
					return 11;
				case 89:
					return 11;
				case 90:
					return 12;
				case 91:
					return 12;
				case 92:
					return 11;
				case 93:
					return 12;
				case 94:
					return 12;
				case 95:
					return 11;
				case 96:
					return 11;
				case 97:
					return 12;
				case 98:
					return 11;
				case 99:
					return 12;
				case 101:
					return 12;
				case 102:
					return 11;
				case 103:
					return 12;
				case 104:
					return 12;
				case 105:
					return 11;
				case 106:
					return 11;
				case 107:
					return 11;
				case 108:
					return 12;
				case 109:
					return 11;
				case 110:
					return 12;
				case 111:
					return 12;
				case 112:
					return 11;
				case 113:
					return 11;
				case 114:
					return 12;
				case 115:
					return 11;
				case 116:
					return 12;
				case 117:
					return 12;
				case 118:
					return 11;
				case 121:
					return 11;
				case 122:
					return 11;
				case 123:
					return 11;
				case 124:
					return 12;
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					iVar0 = 11;
					break;
				case 2:
					iVar0 = 11;
					break;
				case 3:
					iVar0 = 12;
					break;
				case 4:
					iVar0 = 12;
					break;
				case 5:
					iVar0 = 12;
					break;
				case 6:
					iVar0 = 12;
					break;
				case 8:
					iVar0 = 12;
					break;
				case 10:
					iVar0 = 12;
					break;
				case 11:
					iVar0 = 12;
					break;
				case 12:
					iVar0 = 12;
					break;
				case 13:
					iVar0 = 11;
					break;
				case 14:
					iVar0 = 12;
					break;
				case 15:
					iVar0 = 11;
					break;
				case 16:
					iVar0 = 12;
					break;
				case 17:
					iVar0 = 11;
					break;
				case 20:
					iVar0 = 11;
					break;
				case 22:
					iVar0 = 12;
					break;
				case 25:
					iVar0 = 11;
					break;
				case 26:
					iVar0 = 12;
					break;
				case 27:
					iVar0 = 11;
					break;
				case 28:
					iVar0 = 11;
					break;
				case 29:
					iVar0 = 11;
					break;
				case 30:
					iVar0 = 11;
					break;
				case 32:
					iVar0 = 12;
					break;
				case 33:
					iVar0 = 11;
					break;
				case 36:
					iVar0 = 11;
					break;
				case 37:
					iVar0 = 11;
					break;
				case 38:
					iVar0 = 11;
					break;
				case 43:
					iVar0 = 17;
					break;
				case 44:
					iVar0 = 14;
					break;
				case 47:
					iVar0 = 2;
					break;
				case 50:
					iVar0 = 11;
					break;
				case 51:
					iVar0 = 11;
					break;
				case 52:
					iVar0 = 11;
					break;
				case 53:
					iVar0 = 12;
					break;
				case 54:
					iVar0 = 11;
					break;
				case 55:
					iVar0 = 12;
					break;
				case 56:
					iVar0 = 12;
					break;
				case 57:
					iVar0 = 12;
					break;
				case 58:
					iVar0 = 12;
					break;
				case 59:
					iVar0 = 12;
					break;
				case 60:
					iVar0 = 12;
					break;
				case 61:
					iVar0 = 11;
					break;
				case 62:
					iVar0 = 12;
					break;
				case 63:
					iVar0 = 12;
					break;
				case 64:
					iVar0 = 11;
					break;
				case 65:
					iVar0 = 11;
					break;
				case 66:
					iVar0 = 12;
					break;
				case 67:
					iVar0 = 12;
					break;
				case 68:
					iVar0 = 12;
					break;
				case 69:
					iVar0 = 11;
					break;
				case 70:
					iVar0 = 11;
					break;
				case 71:
					iVar0 = 12;
					break;
				case 72:
					iVar0 = 12;
					break;
				case 73:
					iVar0 = 12;
					break;
				case 74:
					iVar0 = 12;
					break;
				case 75:
					iVar0 = 11;
					break;
				case 76:
					iVar0 = 12;
					break;
				case 77:
					iVar0 = 12;
					break;
				case 78:
					iVar0 = 11;
					break;
				case 79:
					iVar0 = 12;
					break;
				case 80:
					iVar0 = 12;
					break;
				case 81:
					iVar0 = 11;
					break;
				case 82:
					iVar0 = 11;
					break;
				case 83:
					iVar0 = 11;
					break;
				case 84:
					iVar0 = 12;
					break;
				case 85:
					iVar0 = 11;
					break;
				case 86:
					iVar0 = 12;
					break;
				case 87:
					iVar0 = 11;
					break;
				case 88:
					iVar0 = 11;
					break;
				case 89:
					iVar0 = 11;
					break;
				case 90:
					iVar0 = 12;
					break;
				case 91:
					iVar0 = 11;
					break;
				case 92:
					iVar0 = 12;
					break;
				case 93:
					iVar0 = 11;
					break;
				case 94:
					iVar0 = 12;
					break;
				case 95:
					iVar0 = 11;
					break;
				case 96:
					iVar0 = 11;
					break;
				case 97:
					iVar0 = 12;
					break;
				case 98:
					iVar0 = 11;
					break;
				case 99:
					iVar0 = 12;
					break;
				case 101:
					iVar0 = 12;
					break;
				case 102:
					iVar0 = 11;
					break;
				case 103:
					iVar0 = 12;
					break;
				case 104:
					iVar0 = 12;
					break;
				case 105:
					iVar0 = 11;
					break;
				case 106:
					iVar0 = 11;
					break;
				case 107:
					iVar0 = 11;
					break;
				case 108:
					iVar0 = 12;
					break;
				case 109:
					iVar0 = 11;
					break;
				case 110:
					iVar0 = 11;
					break;
				case 111:
					iVar0 = 12;
					break;
				case 112:
					iVar0 = 11;
					break;
				case 113:
					iVar0 = 11;
					break;
				case 114:
					iVar0 = 12;
					break;
				case 115:
					iVar0 = 11;
					break;
				case 116:
					iVar0 = 12;
					break;
				case 117:
					iVar0 = 12;
					break;
				case 118:
					iVar0 = 12;
					break;
				case 121:
					iVar0 = 11;
					break;
				case 122:
					iVar0 = 11;
					break;
				case 123:
					iVar0 = 11;
					break;
				case 124:
					iVar0 = 12;
					break;
			}
			break;
	}
	return iVar0;
}

void func_369(int iParam0)//Position - 0x331F7
{
	if (__LIB_12__::func_113(PLAYER::PLAYER_ID()))
	{
		__LIB_0__::func_794(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_10));
	}
	__LIB_0__::func_795(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_10), 0, 0);
	if (iParam0 > 0)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_10 = NETWORK::GET_TIME_OFFSET(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336.f_10, -iParam0);
	}
}

Vector3 func_370(var uParam0)//Position - 0x169E
{
	return (uParam0[uParam0->f_141.f_2 /*14*/])->f_8;
}

bool func_371(var uParam0)//Position - 0x1E02
{
	Stack.Push(!__LIB_0__::func_624(&(uParam0->f_141), 5));
	Stack.Push(uParam0[uParam0->f_141.f_2 /*14*/]);
	Stack.Push(uParam0->f_141.f_2);
	Call_Loc(uParam0->f_141.f_13);
	return (StackVal || StackVal);
}

int func_372(var uParam0)//Position - 0x209E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_13__::func_598(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_141.f_2 /*14*/]) && __LIB_15__::func_801(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_141.f_2 /*14*/])->f_8.f_3, (*uParam0)[uParam0->f_141.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_141.f_2 = (uParam0->f_141.f_2 + 1 % 10);
		}
		iVar0++;
	}
	return 0;
}

void func_373(var uParam0, int iParam1)//Position - 0x210D
{
	uParam0->f_141.f_4 = iParam1;
}

int func_374()//Position - 0x2394
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1607.0521f, -3011.8904f, -80.00597f, -1574.7677f, -3011.67f, -77.99634f, 9.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_375(var uParam0)//Position - 0x11BE
{
	return __LIB_0__::func_624(&(uParam0->f_141), 9);
}

Vector3 func_376(var uParam0)//Position - 0x1660
{
	struct<3> Var0;
	Var0 = { (uParam0[uParam0->f_141.f_2 /*14*/])->f_8.f_3 };
	if (__LIB_1__::func_394() && uParam0->f_141.f_8 == 0)
	{
		Var0.f_2 = (Var0.f_2 - 4f);
	}
	return Var0;
}

void func_377(var uParam0, char* sParam1)//Position - 0x16B4
{
	if (uParam0->f_141.f_8 == 1)
	{
		if (__LIB_1__::func_394())
		{
			switch (uParam0->f_141.f_8.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				case 7:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				case 10:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				case 12:
					StringCopy(sParam1, "B_TO_A", 16);
					break;
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				case 14:
					StringCopy(sParam1, "D_TO_B", 16);
					break;
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
		}
		else
		{
			switch (uParam0->f_141.f_8.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				case 9:
					StringCopy(sParam1, "A_TO_D", 16);
					break;
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
				}
		}
	}
	else
	{
		switch (uParam0->f_141.f_8.f_2)
		{
			case 0:
				StringCopy(sParam1, "IDLE_A", 16);
				break;
			case 1:
				StringCopy(sParam1, "IDLE_B", 16);
				break;
			case 2:
				StringCopy(sParam1, "IDLE_C", 16);
				break;
			case 3:
				StringCopy(sParam1, "ENTER", 16);
				break;
			case 5:
				StringCopy(sParam1, "BASE", 16);
				break;
			case 4:
				StringCopy(sParam1, "EXIT", 16);
				break;
			case 7:
				StringCopy(sParam1, "A_TO_B", 16);
				break;
			case 8:
				StringCopy(sParam1, "B_TO_C", 16);
				break;
			case 9:
				StringCopy(sParam1, "C_TO_D", 16);
				break;
			case 10:
				StringCopy(sParam1, "D_TO_E", 16);
				break;
			case 12:
				StringCopy(sParam1, "B_TO_E", 16);
				break;
			case 13:
				StringCopy(sParam1, "C_TO_A", 16);
				break;
			case 14:
				StringCopy(sParam1, "D_TO_A", 16);
				break;
			case 15:
				StringCopy(sParam1, "E_TO_A", 16);
				break;
			default:
				StringCopy(sParam1, "invalid_clip", 16);
				break;
			}
	}
}

void func_378(var uParam0, char* sParam1)//Position - 0x19D6
{
	switch (uParam0->f_141.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (__LIB_1__::func_394())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_141.f_8)
	{
		case 1:
			if (__LIB_1__::func_394())
			{
				switch (uParam0->f_141.f_8.f_1)
				{
					case 0:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					case 1:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					case 2:
						StringConCat(sParam1, "@VAR_C@BASE@", 64);
						break;
					case 3:
						StringConCat(sParam1, "@VAR_D@BASE@", 64);
						break;
					case 4:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
				}
			}
			else
			{
				switch (uParam0->f_141.f_8.f_1)
				{
					case 0:
						StringConCat(sParam1, "@VAR_A@BASE@", 64);
						break;
					case 1:
						StringConCat(sParam1, "@VAR_B@BASE@", 64);
						break;
					case 2:
						StringConCat(sParam1, "@VAR_C@BASE@", 64);
						break;
					case 3:
						StringConCat(sParam1, "@VAR_D@BASE@", 64);
						break;
					case 4:
						StringConCat(sParam1, "@VAR_E@BASE@", 64);
						break;
					}
			}
			break;
		case 0:
			switch (uParam0->f_141.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		case 2:
			switch (uParam0->f_141.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

int func_379(var uParam0)//Position - 0x1C2A
{
	int iVar0;
	switch (uParam0->f_141.f_8)
	{
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		default:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_13__::func_740(uParam0->f_141.f_8));
	}
	if (uParam0->f_141.f_8 == 1)
	{
		if (__LIB_1__::func_394())
		{
			if (iVar0 == 0 || iVar0 == 4)
			{
				iVar0 = 1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 2)
		{
			iVar0 = 3;
		}
	}
	return iVar0;
}

int func_380(var uParam0)//Position - 0x1EBA
{
	var uVar0[10];
	int iVar1;
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar1]) && !PED::IS_PED_INJURED(uVar0[iVar1])) && ENTITY::IS_ENTITY_VISIBLE(uVar0[iVar1])) && (__LIB_13__::func_598(uVar0[iVar1], uParam0[uParam0->f_141.f_2 /*14*/]) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar0[iVar1], false), (uParam0[uParam0->f_141.f_2 /*14*/])->f_1 + (uParam0[uParam0->f_141.f_2 /*14*/])->f_1.f_3 / Vector(2f, 2f, 2f)) < 1f))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_381(var uParam0)//Position - 0x1FEB
{
	if (__LIB_4__::func_358(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return uParam0->f_141 & 31 > 0;
}

void func_382(var uParam0)//Position - 0x212D
{
	if (uParam0->f_141.f_4 == 6)
	{
	}
	else if (uParam0->f_141.f_4 > 4)
	{
		CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), __LIB_13__::func_599());
		uParam0->f_141.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_141.f_7) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), __LIB_13__::func_599());
	}
}

void func_383(var uParam0)//Position - 0x2195
{
	__LIB_13__::func_555(&(uParam0->f_141), 4, __LIB_0__::func_877());
	__LIB_13__::func_555(&(uParam0->f_141), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
	__LIB_13__::func_555(&(uParam0->f_141), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
	__LIB_13__::func_555(&(uParam0->f_141), 0, __LIB_0__::func_77(0));
	__LIB_13__::func_555(&(uParam0->f_141), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_384(var uParam0, int iParam1)//Position - 0x12D
{
	if (((((((((((((((__LIB_0__::func_1("MPOF_AC_PC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */) || __LIB_0__::func_1("MPOF_AC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_SEAT_PC" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_SEAT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_PSEAT_PC" /* GXT: Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_PSEAT" /* GXT: Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_SEAT_PC_BM" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_SEAT_BM" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_PSEAT_PC_BM" /* GXT: Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_PSEAT_BM" /* GXT: Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_SEAT_PC_TOU" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_SEAT_TOU" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_PSEAT_PC_TOU" /* GXT: Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("DJ_PSEAT_TOU" /* GXT: Press ~INPUT_FRONTEND_X~ to watch DJ live stream.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam1 && uParam0->f_141.f_5 != -1)
	{
		__LIB_3__::func_122(&(uParam0->f_141.f_5));
		uParam0->f_141.f_5 = -1;
	}
}

int func_385(var uParam0)//Position - 0x899
{
	int iVar0;
	if (uParam0->f_141.f_8 == 2)
	{
		return uParam0->f_141.f_8.f_1;
	}
	iVar0 = (uParam0->f_141.f_8.f_1 + 1 % __LIB_13__::func_740(uParam0->f_141.f_8));
	if (__LIB_1__::func_394())
	{
		if (uParam0->f_141.f_8 == 1)
		{
			if (iVar0 == 0 || iVar0 == 4)
			{
				iVar0 = 1;
			}
		}
	}
	else if (uParam0->f_141.f_8 == 1)
	{
		if (iVar0 == 1 || iVar0 == 2)
		{
			iVar0 = 3;
		}
	}
	return iVar0;
}

void func_386(var uParam0)//Position - 0x13B8
{
	int iVar0;
	switch (uParam0->f_141.f_4)
	{
		case 4:
		case 8:
			__LIB_1__::func_33(1);
		case 6:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
			__LIB_0__::func_187();
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			__LIB_3__::func_570(1);
			__LIB_0__::func_189();
			break;
	}
}

int func_387()//Position - 0x2394
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1602.509f, -3001.3896f, -76.80506f, -1592.3932f, -3001.3274f, -74.80509f, 9.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_388(var uParam0)//Position - 0x63B
{
	return uParam0->f_32;
}

bool func_389(var uParam0)//Position - 0x67A
{
	return uParam0->f_12;
}

void func_390(var uParam0, int iParam1)//Position - 0x29FC
{
	uParam0->f_27 = iParam1;
}

int func_391()//Position - 0x3306
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
	}
	return 0;
}

var func_392(var uParam0)//Position - 0x8317
{
	return uParam0->f_27;
}

void func_393(char* sParam0)//Position - 0x2F2
{
	__LIB_0__::func_756(sParam0);
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3E6F
{
	struct<6> Var0;
	Var0.f_0 = 386271652;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

void func_395(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x69E4C
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
			__LIB_3__::func_210(iParam0, 40, &Var0, -1, 0);
			*uParam1 = { Var0 };
			if (iParam0 == 1)
			{
				uParam1->f_2 = 200.4294f;
			}
			else if (iParam0 == 2)
			{
				uParam1->f_2 = 169.6122f;
			}
			else if (iParam0 == 3)
			{
				uParam1->f_2 = 216.0662f;
			}
			else if (iParam0 == 4)
			{
				uParam1->f_2 = 152.8101f;
			}
			else if (iParam0 == 5)
			{
				uParam1->f_2 = 70.0399f;
			}
			else if (iParam0 == 6)
			{
				uParam1->f_2 = 85.3194f;
			}
			else if (iParam0 == 7)
			{
				uParam1->f_2 = 62.3652f;
			}
			else if (iParam0 == 34)
			{
				uParam1->f_2 = 49.7375f;
			}
			else if (iParam0 == 35)
			{
				uParam1->f_2 = 119.343f;
			}
			else if (iParam0 == 36)
			{
				uParam1->f_2 = 114.4156f;
			}
			else if (iParam0 == 37)
			{
				uParam1->f_2 = 88.2696f;
			}
			else if (iParam0 == 38)
			{
				uParam1->f_2 = 82.9234f;
			}
			else if (iParam0 == 39)
			{
				uParam1->f_2 = 93.0414f;
			}
			else if (iParam0 == 40)
			{
				uParam1->f_2 = 78.289f;
			}
			else if (iParam0 == 41)
			{
				uParam1->f_2 = 102.2488f;
			}
			else if (iParam0 == 42)
			{
				uParam1->f_2 = 100.8356f;
			}
			else if (iParam0 == 43)
			{
				uParam1->f_2 = 86.4347f;
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			*uParam1 = { 350.7414f, -993.6222f, -100.202f };
			*uParam2 = 179.6123f;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			*uParam1 = { 259.8177f, -1003.794f, -100.0086f };
			*uParam2 = 307.1585f;
			break;
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			__LIB_3__::func_210(iParam0, 40, &Var0, 61, 0);
			*uParam1 = { Var0 };
			if (iParam0 == 61)
			{
			}
			else if (iParam0 == 62)
			{
			}
			else if (iParam0 == 63)
			{
			}
			else if (iParam0 == 64)
			{
			}
			else if (iParam0 == 65)
			{
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		case 73:
		case 74:
		case 75:
		case 76:
			__LIB_3__::func_210(iParam0, 40, &Var0, 73, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			__LIB_3__::func_210(iParam0, 40, &Var0, 77, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		case 83:
		case 84:
		case 85:
			__LIB_3__::func_210(iParam0, 40, &Var0, 83, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		case 86:
			__LIB_3__::func_181(iParam3, 40, &Var0, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		case 87:
		case 88:
		case 89:
		case 90:
			__LIB_3__::func_210(iParam0, 40, &Var0, 88, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			__LIB_3__::func_210(iParam0, 40, &Var0, 91, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			__LIB_3__::func_210(iParam0, 40, &Var0, 97, 0);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
	}
}

int func_396(int iParam0)//Position - 0x2EED
{
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 && CAM::DOES_CAM_EXIST(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_397()//Position - 0x3034
{
	char* sVar0;
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "bong_lighter";
			}
			else
			{
				sVar0 = "lighter_short";
			}
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				sVar0 = "enter_bottle";
			}
			else
			{
				sVar0 = "enter_bot";
			}
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
				sVar0 = "enter_cap";
			}
			else
			{
				sVar0 = "enter_cap";
			}
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "drinking_wine_bottle";
			break;
	}
	return sVar0;
}

char* func_398(int iParam0)//Position - 0x326A
{
	char* sVar0;
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "bong_FRA";
			}
			else
			{
				sVar0 = "michael_short";
			}
			break;
		case joaat("prop_cigar_03"):
			sVar0 = "cigar_enter_michael";
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "enter";
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
			if (bLocal_35)
			{
				sVar0 = "enter_trevor";
			}
			else
			{
				sVar0 = "enter";
			}
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "ig_8_huff_gas_player";
			break;
		case joaat("prop_mr_raspberry_01"):
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno";
					break;
				case 1:
					sVar0 = "ig_7_ifuwanttodothat";
					break;
				case 2:
					sVar0 = "ig_7_lookatu";
					break;
				case 3:
					sVar0 = "ig_7_smelllikeasea";
					break;
			}
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
				sVar0 = "enter";
			}
			else
			{
				sVar0 = "enter_michael";
			}
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "ig_2_wheatgrassdrink_michael";
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "drinking_wine";
			break;
	}
	return sVar0;
}

char* func_399()//Position - 0x392F
{
	char* sVar0;
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "SA_BONG2" /* GXT: Press ~INPUT_CONTEXT~ to take a hit from the bong. */;
			}
			else
			{
				sVar0 = "SA_BONG" /* GXT: Press ~INPUT_CONTEXT~ to take a hit from Jimmy's bong. */;
			}
			break;
		case joaat("prop_cigar_03"):
			sVar0 = "SA_CIGAR" /* GXT: Press ~INPUT_CONTEXT~ to smoke a cigar. */;
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
			break;
		case joaat("p_cs_joint_01"):
			sVar0 = "SA_SPLFF" /* GXT: Press ~INPUT_CONTEXT~ to smoke a joint. */;
			break;
		case joaat("p_tumbler_02_s1"):
			sVar0 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			break;
		case joaat("p_tumbler_cs2_s"):
			sVar0 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			break;
		case joaat("p_tumbler_cs2_s_trev"):
			sVar0 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "SA_GAS" /* GXT: Press ~INPUT_CONTEXT~ to huff gas. */;
			break;
		case joaat("prop_mr_raspberry_01"):
			sVar0 = "SA_MRJAM" /* GXT: Press ~INPUT_CONTEXT~ to play with Mr. Raspberry Jam. */;
			break;
		case joaat("prop_radio_01"):
			sVar0 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "SA_WHEAT" /* GXT: Press ~INPUT_CONTEXT~ to drink green juice. */;
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "SA_WINE" /* GXT: Press ~INPUT_CONTEXT~ to drink some wine. */;
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

void func_400()//Position - 0x3A08
{
	switch (iLocal_40)
	{
		case joaat("prop_cigar_03"):
			break;
		case joaat("prop_bong_01"):
			break;
		case joaat("prop_cs_beer_bot_01"):
			break;
		case joaat("p_tumbler_02_s1"):
			break;
		case joaat("p_tumbler_cs2_s"):
			break;
		case joaat("p_tumbler_cs2_s_trev"):
			break;
		case joaat("prop_rolled_sock_02"):
			break;
		case joaat("prop_mr_raspberry_01"):
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
			}
			break;
		case joaat("p_w_grass_gls_s"):
			break;
		case joaat("p_wine_glass_s"):
			break;
	}
}

int func_401()//Position - 0x473C
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!PED::IS_PED_INJURED(uVar2[iVar1]))
		{
			if (bLocal_35)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == joaat("Player_Zero"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_35 && !bLocal_34)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == joaat("Player_One"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

char* func_402()//Position - 0x4800
{
	char* sVar0;
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "safe@franklin@ig_10";
			}
			else
			{
				sVar0 = "safe@michael@ig_4";
			}
			break;
		case joaat("prop_cigar_03"):
			sVar0 = "safe@michael@ig_3";
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "safe@franklin@ig_9";
			break;
		case joaat("p_cs_joint_01"):
			sVar0 = "safe@franklin@ig_13";
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (!Global_78319)
			{
				if (bLocal_35)
				{
					sVar0 = "safe@trevor@ig_6";
				}
				else
				{
					sVar0 = "safe@michael@ig_1";
				}
			}
			else
			{
				sVar0 = "MP_SAFEHOUSEWHISKEY@";
			}
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "safe@trevor@ig_8";
			break;
		case joaat("prop_mr_raspberry_01"):
			sVar0 = "safe@trevor@ig_7";
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
				sVar0 = "safe@trevor@ig_5";
			}
			else
			{
				sVar0 = "safe@michael@ig_5";
			}
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "safe@michael@ig_2";
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "safe@franklin@ig_11";
			break;
	}
	return sVar0;
}

char* func_403(int iParam0)//Position - 0x48ED
{
	char* sVar0;
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "bong_bong";
			}
			else
			{
				sVar0 = "bong_short";
			}
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "enter_bottle";
			break;
		case joaat("prop_mr_raspberry_01"):
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_raspjam";
					break;
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_raspjam";
					break;
				case 2:
					sVar0 = "ig_7_lookatu_raspjam";
					break;
				case 3:
					sVar0 = "ig_7_smelllikeasea_raspjam";
					break;
			}
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				sVar0 = "enter_shotglass";
			}
			else
			{
				sVar0 = "enter_glass";
			}
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "ig_8_huff_gas_rag";
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
				sVar0 = "enter_beer";
			}
			else
			{
				sVar0 = "enter_bottle";
			}
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "ig_2_wheatgrassdrink_glass";
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "drinking_wine_glass";
			break;
	}
	return sVar0;
}

Vector3 func_404()//Position - 0x49E8
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (!bLocal_34)
			{
				Var0 = { 0f, 0f, -68.75494f };
			}
			else
			{
				Var0 = { 0f, 0f, -179.90875f };
			}
			break;
		case joaat("prop_cigar_03"):
			Var0 = { 0f, 0f, 21.1994f };
			break;
		case joaat("prop_cs_beer_bot_01"):
			Var0 = { 0f, 0f, -128.34f };
			break;
		case joaat("p_cs_joint_01"):
			Var0 = { 0f, 0f, 0.5729f };
			break;
		case joaat("prop_rolled_sock_02"):
			Var0 = { 0f, 0f, 2.8647f };
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				Var0 = { 0f, 0f, 34.9504f };
			}
			else
			{
				Var0 = { 0f, 0f, 21.1994f };
			}
			break;
		case joaat("prop_mr_raspberry_01"):
			Var0 = { 0f, 0f, 72.76564f };
			break;
		case joaat("prop_radio_01"):
			Var0 = { 0f, 0f, -9.1673f };
			break;
		case joaat("p_w_grass_gls_s"):
			Var0 = { 0f, 0f, 21.1994f };
			break;
		case joaat("p_wine_glass_s"):
			Var0 = { 0f, 0f, -29.793f };
			break;
	}
	return Var0;
}

Vector3 func_405()//Position - 0x4AFD
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (!bLocal_34)
			{
				Var0 = { -806.82f, 170.03f, 75.74f };
			}
			else
			{
				Var0 = { 10.22f, 527.73f, 174.11f };
			}
			break;
		case joaat("prop_cigar_03"):
			Var0 = { -805.17f, 173.99f, 72.69f };
			break;
		case joaat("prop_cs_beer_bot_01"):
			Var0 = { -9.66f, -1429.48f, 31.21f };
			break;
		case joaat("p_cs_joint_01"):
			Var0 = { -10.07f, -1440.64f, 30.36f };
			break;
		case joaat("prop_rolled_sock_02"):
			Var0 = { 1972.852f, 3812.42f, 33.28f };
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				Var0 = { -1153.829f, -1523.314f, 10.56f };
			}
			else
			{
				Var0 = { -800.68f, 184.18f, 72.55f };
			}
			break;
		case joaat("prop_mr_raspberry_01"):
			Var0 = { -1146.284f, -1514.1305f, 10.8468f };
			break;
		case joaat("prop_radio_01"):
			Var0 = { 1976.75f, 3822.76f, 33.28f };
			break;
		case joaat("p_w_grass_gls_s"):
			Var0 = { -804.87f, 185.69f, 72.75f };
			break;
		case joaat("p_wine_glass_s"):
			Var0 = { -9.1f, 516.83f, 173.62f };
			break;
	}
	return Var0;
}

Vector3 func_406()//Position - 0x4C72
{
	struct<3> Var0;
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				Var0 = { 9.95f, 528.9f, 173.6282f };
			}
			else
			{
				Var0 = { -807.5781f, 171.357f, 75.7407f };
			}
			break;
		case joaat("prop_cigar_03"):
			Var0 = { -805.881f, 173.8548f, 71.8347f };
			break;
		case joaat("prop_cs_beer_bot_01"):
			Var0 = { -9.66f, -1429.48f, 31.21f };
			break;
		case joaat("p_cs_joint_01"):
			Var0 = { -10.6378f, -1441.3145f, 30.1015f };
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				Var0 = { -1154.343f, -1522.5997f, 9.6327f };
			}
			else
			{
				Var0 = { -800.4056f, 183.4856f, 71.6055f };
			}
			break;
		case joaat("prop_rolled_sock_02"):
			Var0 = { 1972.1417f, 3813.243f, 32.4271f };
			break;
		case joaat("prop_mr_raspberry_01"):
			Var0 = { -1145.91f, -1514.9445f, 9.6327f };
			break;
		case joaat("prop_radio_01"):
			Var0 = { 1976.94f, 3821.2417f, 33.3266f };
			break;
		case joaat("p_w_grass_gls_s"):
			Var0 = { -804.2254f, 184.3325f, 72.6042f };
			break;
		case joaat("p_wine_glass_s"):
			Var0 = { -8.8011f, 515.7225f, 173.6282f };
			break;
	}
	return Var0;
}

char* func_407()//Position - 0x12D0
{
	char* sVar0;
	int iVar1;
	iVar1 = __LIB_35__::func_242(PLAYER::PLAYER_PED_ID());
	switch (iLocal_40)
	{
		case joaat("prop_cs_beer_bot_01"):
			switch (iVar1)
			{
				case -1:
					sVar0 = "exit_1_bottle";
					break;
				case 2:
					sVar0 = "exit_2_bottle";
					break;
				case 1:
					sVar0 = "exit_3_bottle";
					break;
				case 0:
					sVar0 = "exit_4_bottle";
					break;
			}
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "exit_2_beer";
						break;
					case 2:
						sVar0 = "exit_2_beer";
						break;
					case 1:
						sVar0 = "exit_1_beer";
						break;
					case 0:
						sVar0 = "exit_1_beer";
						break;
				}
			}
			else
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "exit_2_bottle";
						break;
					case 2:
						sVar0 = "exit_2_bottle";
						break;
					case 1:
						sVar0 = "exit_1_bottle";
						break;
					case 0:
						sVar0 = "exit_1_bottle";
						break;
					}
			}
			break;
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "exit_fra";
			}
			else
			{
				sVar0 = "bong_exit";
			}
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				sVar0 = "exit_shotglass";
			}
			else
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "exit_sober_glass";
						break;
					case 2:
						sVar0 = "exit_sober_glass";
						break;
					case 1:
						sVar0 = "exit_drunk_glass";
						break;
					case 0:
						sVar0 = "exit_drunk_glass";
						break;
					}
			}
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "exit_glass";
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "drinking_wine_exit_glass";
			break;
	}
	return sVar0;
}

char* func_408()//Position - 0x146F
{
	char* sVar0;
	int iVar1;
	iVar1 = __LIB_35__::func_242(PLAYER::PLAYER_PED_ID());
	switch (iLocal_40)
	{
		case joaat("prop_cs_beer_bot_01"):
			switch (iVar1)
			{
				case -1:
					sVar0 = "exit_1";
					break;
				case 2:
					sVar0 = "exit_2";
					break;
				case 1:
					sVar0 = "exit_3";
					break;
				case 0:
					sVar0 = "exit_4";
					break;
			}
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "exit_sober";
						break;
					case 2:
						sVar0 = "exit_moderately_drunk";
						break;
					case 1:
						sVar0 = "exit_slightly_drunk";
						break;
					case 0:
						sVar0 = "exit_very_drunk";
						break;
				}
			}
			else
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "exit_1_michael";
						break;
					case 2:
						sVar0 = "exit_2_michael";
						break;
					case 1:
						sVar0 = "exit_3_michael";
						break;
					case 0:
						sVar0 = "exit_4_michael";
						break;
					}
			}
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "EXIT_SOBER_TREVOR";
						break;
					case 2:
						sVar0 = "EXIT_MODERATELY_DRUNK_TREVOR";
						break;
					case 1:
						sVar0 = "EXIT_SLIGHTLY_DRUNK_TREVOR";
						break;
					case 0:
						sVar0 = "EXIT_VERY_DRUNK_TREVOR";
						break;
				}
			}
			else
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "exit_sober";
						break;
					case 2:
						sVar0 = "exit_moderately_drunk";
						break;
					case 1:
						sVar0 = "exit_slightly_drunk";
						break;
					case 0:
						sVar0 = "exit_drunk";
						break;
					}
			}
			break;
		case joaat("p_wine_glass_s"):
			switch (iVar1)
			{
				case -1:
					sVar0 = "drinking_wine_exit";
					break;
				case 2:
					sVar0 = "drinking_wine_exit_moderately_drunk";
					break;
				case 1:
					sVar0 = "drinking_wine_exit_slightly_drunk";
					break;
				case 0:
					sVar0 = "drinking_wine_exit_drunk";
					break;
			}
			break;
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "exit_fra";
			}
			else
			{
				sVar0 = "michael_exit";
			}
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "exit_michael";
			break;
	}
	return sVar0;
}

char* func_409()//Position - 0xFF6
{
	char* sVar0;
	int iVar1;
	iVar1 = __LIB_35__::func_242(PLAYER::PLAYER_PED_ID());
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			sVar0 = "lighter_exit";
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				sVar0 = "exit_bottle";
			}
			else
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "exit_sober_bot";
						break;
					case 2:
						sVar0 = "exit_moderately_drunk_bot";
						break;
					case 1:
						sVar0 = "exit_slightly_drunk_bot";
						break;
					case 0:
						sVar0 = "exit_drunk_bot";
						break;
					}
			}
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "drinking_wine_exit_bottle";
			break;
		case joaat("prop_radio_01"):
			sVar0 = "enter_cap";
			break;
	}
	return sVar0;
}

int func_410(var uParam0)//Position - 0x67F03
{
	if (__LIB_5__::func_611())
	{
		return 1;
	}
	return 0;
}

void func_411(var uParam0, int iParam1)//Position - 0x6C81F
{
	struct<3> Var0;
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
			__LIB_3__::func_210(iParam1, 4, &Var0, -1, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, -1, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 19f;
			__LIB_3__::func_210(iParam1, 276, &Var0, -1, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 277, &Var0, -1, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 14.5f;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			*(uParam0[0 /*8*/]) = { 355.07663f, -998.96765f, -96.51934f };
			(uParam0[0 /*8*/])->f_3 = { 336.4037f, -998.40845f, -100.92386f };
			(uParam0[0 /*8*/])->f_6 = 15.75f;
			*(uParam0[1 /*8*/]) = { 347.14322f, -1013.49646f, -100.446175f };
			(uParam0[1 /*8*/])->f_3 = { 347.16263f, -1003.1885f, -96.91225f };
			(uParam0[1 /*8*/])->f_6 = 8.25f;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			*(uParam0[0 /*8*/]) = { 270.2482f, -1000.7757f, -95.95466f };
			(uParam0[0 /*8*/])->f_3 = { 251.78305f, -1001.0637f, -102.24785f };
			(uParam0[0 /*8*/])->f_6 = 15f;
			(uParam0[1 /*8*/])->f_6 = 0f;
			break;
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			__LIB_3__::func_210(iParam1, 4, &Var0, 61, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, 61, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 21f;
			__LIB_3__::func_210(iParam1, 276, &Var0, 61, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 277, &Var0, 61, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 14.5f;
			break;
		case 73:
		case 74:
		case 75:
		case 76:
			__LIB_3__::func_210(iParam1, 4, &Var0, 73, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, 73, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 9.75f;
			__LIB_3__::func_210(iParam1, 276, &Var0, 73, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 277, &Var0, 73, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 10.25f;
			__LIB_3__::func_210(iParam1, 483, &Var0, 73, 0);
			*(uParam0[2 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 484, &Var0, 73, 0);
			(uParam0[2 /*8*/])->f_3 = { Var0 };
			(uParam0[2 /*8*/])->f_6 = 6.75f;
			break;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			__LIB_3__::func_210(iParam1, 4, &Var0, 77, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, 77, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 9.75f;
			__LIB_3__::func_210(iParam1, 276, &Var0, 77, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 277, &Var0, 77, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 5f;
			__LIB_3__::func_210(iParam1, 483, &Var0, 77, 0);
			*(uParam0[2 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 484, &Var0, 77, 0);
			(uParam0[2 /*8*/])->f_3 = { Var0 };
			(uParam0[2 /*8*/])->f_6 = 9.5f;
			break;
		case 83:
		case 84:
		case 85:
			__LIB_3__::func_210(iParam1, 4, &Var0, 83, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, 83, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 26.75f;
			__LIB_3__::func_210(iParam1, 276, &Var0, 83, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 277, &Var0, 83, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 18.25f;
			break;
		case 86:
			__LIB_3__::func_210(iParam1, 4, &Var0, 86, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, 86, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 14.75f;
			__LIB_3__::func_210(iParam1, 276, &Var0, 86, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 277, &Var0, 86, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 11.75f;
			break;
		case 87:
		case 88:
		case 89:
		case 90:
			__LIB_3__::func_210(iParam1, 4, &Var0, 88, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, 88, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 27.25f;
			__LIB_3__::func_210(iParam1, 276, &Var0, 88, 0);
			*(uParam0[1 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 277, &Var0, 88, 0);
			(uParam0[1 /*8*/])->f_3 = { Var0 };
			(uParam0[1 /*8*/])->f_6 = 7.5f;
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			__LIB_3__::func_210(iParam1, 4, &Var0, 91, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, 91, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 29.75f;
			break;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			__LIB_3__::func_210(iParam1, 4, &Var0, 97, 0);
			*(uParam0[0 /*8*/]) = { Var0 };
			__LIB_3__::func_210(iParam1, 5, &Var0, 97, 0);
			(uParam0[0 /*8*/])->f_3 = { Var0 };
			(uParam0[0 /*8*/])->f_6 = 22f;
			break;
	}
}

void func_412()//Position - 0x6FC77
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && __LIB_0__::func_494(1, 0, 1)) && iLocal_36)
		{
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
}

char* func_413()//Position - 0xE68
{
	char* sVar0;
	sVar0 = "ScriptEvent";
	return sVar0;
}

float func_414(float fParam0, float fParam1, float fParam2)//Position - 0x1993
{
	float fVar0;
	float fVar1;
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((fParam0 - fParam1) / fVar0)));
	return (fParam0 - (fVar1 * fVar0));
}

int func_415()//Position - 0x2439
{
	switch (iLocal_40)
	{
		case joaat("prop_cigar_03"):
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.17f, 173.98f, 72.69f, 0.1f, joaat("prop_cigar_03"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.17f, 173.98f, 72.69f, 0.1f, joaat("prop_cigar_03"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.13f, 173.86f, 72.68f, 0.1f, joaat("p_cs_lighter_01"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.13f, 173.86f, 72.68f, 0.1f, joaat("p_cs_lighter_01"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.09f, 173.83f, 72.68f, 0.1f, joaat("prop_ashtray_01"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.13f, 173.86f, 72.68f, 0.1f, joaat("prop_ashtray_01"), false, false, true), true);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-804.45f, 172.78f, 72.33f, 0.1f, joaat("prop_cs_remote_01"), false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-804.45f, 172.78f, 72.33f, 0.1f, joaat("prop_cs_remote_01"), false, false, true), true);
							return 1;
						}
					}
				}
			}
			break;
		case joaat("prop_cs_beer_bot_01"):
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				return 1;
			}
			break;
		case joaat("p_wine_glass_s"):
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-8.9f, 517.01f, 174f, 1f, joaat("prop_wine_bot_01"), false))
			{
				return 1;
			}
			break;
		case joaat("p_cs_joint_01"):
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("p_cs_joint_01"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("p_cs_joint_01"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("p_cs_lighter_01"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("p_cs_lighter_01"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("prop_ashtray_01"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("prop_ashtray_01"), false, false, true), true);
						return 1;
					}
				}
			}
			break;
		case joaat("p_tumbler_02_s1"):
			if (bLocal_35)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_02_s1"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_02_s1"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.57f, 0.5f, joaat("p_tumbler_02_s1"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.57f, 0.5f, joaat("p_tumbler_02_s1"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
					return 1;
				}
			}
			break;
		case joaat("p_tumbler_cs2_s"):
			if (bLocal_35)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_cs2_s"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_cs2_s"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_tumbler_cs2_s"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_tumbler_cs2_s"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
					return 1;
				}
			}
			break;
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_cs2_s_trev"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_cs2_s_trev"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_tumbler_cs2_s"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_tumbler_cs2_s"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
					return 1;
				}
			}
			break;
		case joaat("prop_radio_01"):
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(1976.92f, 3821.21f, 33.32f, 0.5f, joaat("prop_cs_beer_bot_01"), false))
			{
				return 1;
			}
			break;
		case joaat("p_w_grass_gls_s"):
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, true);
				return 1;
			}
			break;
	}
	return 0;
}

float func_416()//Position - 0x2A76
{
	float fVar0;
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				fVar0 = -100f;
			}
			else
			{
				fVar0 = 192.2462f;
			}
			break;
		case joaat("prop_cigar_03"):
			fVar0 = 299.353f;
			break;
		case joaat("prop_cs_beer_bot_01"):
			fVar0 = 273.2771f;
			break;
		case joaat("p_cs_joint_01"):
			fVar0 = 256.8294f;
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				fVar0 = 213.5805f;
			}
			else
			{
				fVar0 = 15.7529f;
			}
			break;
		case joaat("prop_rolled_sock_02"):
			fVar0 = 206.0063f;
			break;
		case joaat("prop_mr_raspberry_01"):
			fVar0 = 355.0925f;
			break;
		case joaat("prop_radio_01"):
			fVar0 = 332.7139f;
			break;
		case joaat("p_w_grass_gls_s"):
			fVar0 = 118.65f;
			break;
		case joaat("p_wine_glass_s"):
			fVar0 = 331.4005f;
			break;
	}
	return fVar0;
}

char* func_417()//Position - 0x65F4F
{
	char* sVar0;
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "SAFEHOUSE_FRANKLIN_USE_BONG";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_USE_BONG";
			}
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_BEER";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_BEER";
			}
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "SAFEHOUSE_TREVOR_GAS";
			break;
		case joaat("prop_mr_raspberry_01"):
			sVar0 = "SAFEHOUSE_TREVOR_RASBERRY";
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_WINE";
			break;
		case joaat("prop_cigar_03"):
			sVar0 = "SAFEHOUSE_MICHAEL_SIT_SOFA";
			break;
		case joaat("p_cs_joint_01"):
			sVar0 = "SAFEHOUSE_FRANKLIN_SOFA";
			break;
	}
	return sVar0;
}

int func_418()//Position - 0x1AE6
{
	int iVar0;
	switch (iLocal_40)
	{
		case joaat("prop_cigar_03"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 5f, joaat("prop_cigar_03"), false, false, true);
			break;
		case joaat("prop_cs_beer_bot_01"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 2.5f, joaat("prop_cs_beer_bot_01"), false, false, true);
			break;
		case joaat("p_tumbler_02_s1"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 5f, joaat("p_tumbler_02_s1"), false, false, true);
			break;
		case joaat("p_tumbler_cs2_s"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 5f, joaat("p_tumbler_cs2_s"), false, false, true);
			break;
		case joaat("p_tumbler_cs2_s_trev"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 5f, joaat("p_tumbler_cs2_s_trev"), false, false, true);
			break;
		case joaat("p_cs_joint_01"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 5f, joaat("p_cs_joint_01"), false, false, true);
			break;
		case joaat("prop_radio_01"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 3f, joaat("prop_cs_beer_bot_01"), false, false, true);
			break;
		case joaat("p_w_grass_gls_s"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 5f, joaat("p_w_grass_gls_s"), false, false, true);
			break;
		case joaat("p_wine_glass_s"):
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(__LIB_38__::func_406(), 5f, joaat("p_wine_glass_s"), false, false, true);
			break;
	}
	return iVar0;
}

int func_419(struct<3> Param0, float fParam1, var uParam2, var uParam3)//Position - 0x2B51
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, Param0, 2f))
			{
				if ((((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !__LIB_0__::func_77(0)) && !__LIB_38__::func_401())
				{
					if ((Global_97369 && Global_97370) || __LIB_13__::func_94())
					{
						return 0;
					}
					if (__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0, fParam1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x66060
{
	if (Global_78319)
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (iLocal_40 == joaat("prop_rolled_sock_02"))
		{
			if (__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(iLocal_41, false), __LIB_38__::func_406(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == joaat("p_w_grass_gls_s"))
		{
			if (__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(iLocal_41, false), __LIB_38__::func_406(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == joaat("prop_mr_raspberry_01"))
		{
			if (__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(iLocal_41, false), __LIB_38__::func_406(), 5f, 0))
			{
				return 1;
			}
		}
		else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_421()//Position - 0x3298
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1853184;
	if (iVar0 > -1 && iVar0 != __LIB_0__::func_162())
	{
		iVar1 = 0;
		while (iVar1 < 29)
		{
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 == Global_1853348[iVar0 /*834*/].f_267[iVar1])
			{
				if (__LIB_27__::func_407(iVar1) != -1)
				{
					if (iVar0 == PLAYER::PLAYER_ID())
					{
						__LIB_29__::func_353(iVar1, 1);
						return;
					}
					else if (__LIB_0__::func_156(iVar0, 0, 1))
					{
						__LIB_38__::func_394(__LIB_0__::func_950(iVar0), 0, 1, 0, iVar1);
						return;
					}
				}
			}
			iVar1++;
		}
	}
}

int func_422(int iParam0)//Position - 0x65C89
{
	if ((((((BitTest(Global_1835485, iParam0) || Global_1835486 != -1) || __LIB_4__::func_849()) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) || __LIB_0__::func_201()) || __LIB_38__::func_410(iParam0))
	{
		return 0;
	}
	if (__LIB_13__::func_551(PLAYER::PLAYER_ID()) == 4)
	{
		return 0;
	}
	if (__LIB_19__::func_361(PLAYER::PLAYER_ID()) == 1)
	{
		return 0;
	}
	return 1;
}

void func_423(var uParam0, int iParam1)//Position - 0x66AF0
{
	struct<3> Var0;
	int iVar1;
	iVar1 = -1;
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
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
			iVar1 = __LIB_2__::func_681(iParam1);
			__LIB_3__::func_210(iParam1, 278, &Var0, iVar1, 0);
			uParam0->f_121[0 /*12*/] = { Var0 };
			__LIB_3__::func_210(iParam1, 279, &Var0, iVar1, 0);
			uParam0->f_121[0 /*12*/].f_3 = { Var0 };
			__LIB_3__::func_210(iParam1, 282, &Var0, iVar1, 0);
			uParam0->f_121[0 /*12*/].f_7 = { Var0 };
			__LIB_3__::func_210(iParam1, 280, &Var0, iVar1, 0);
			uParam0->f_121[1 /*12*/] = { Var0 };
			__LIB_3__::func_210(iParam1, 281, &Var0, iVar1, 0);
			uParam0->f_121[1 /*12*/].f_3 = { Var0 };
			__LIB_3__::func_210(iParam1, 282, &Var0, iVar1, 0);
			uParam0->f_121[0 /*12*/].f_7 = { Var0 };
			uParam0->f_121[0 /*12*/].f_10 = Var0.f_3;
			uParam0->f_121[0 /*12*/].f_11 = Var0.f_3.f_1;
			__LIB_3__::func_210(iParam1, 283, &Var0, iVar1, 0);
			uParam0->f_121[1 /*12*/].f_7 = { Var0 };
			uParam0->f_121[1 /*12*/].f_10 = Var0.f_3;
			uParam0->f_121[1 /*12*/].f_11 = Var0.f_3.f_1;
			__LIB_3__::func_210(iParam1, 6, &Var0, iVar1, 0);
			uParam0->f_38[0 /*27*/].f_8 = { Var0 };
			uParam0->f_38[0 /*27*/].f_11 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 1, &Var0, iVar1, 0);
			uParam0->f_146[0 /*12*/] = { Var0 };
			__LIB_3__::func_210(iParam1, 2, &Var0, iVar1, 0);
			uParam0->f_146[0 /*12*/].f_3 = { Var0 };
			if (__LIB_7__::func_687(iParam1) || __LIB_7__::func_686(iParam1, -1))
			{
				uParam0->f_146[0 /*12*/].f_6 = 1f;
			}
			else if (__LIB_0__::func_845(iParam1, 91))
			{
				uParam0->f_146[0 /*12*/].f_6 = 2f;
			}
			else if (__LIB_0__::func_845(iParam1, 97))
			{
				uParam0->f_146[0 /*12*/].f_6 = 2.25f;
			}
			else
			{
				uParam0->f_146[0 /*12*/].f_6 = 3.5f;
			}
			uParam0->f_146[0 /*12*/].f_7 = Var0.f_3.f_2;
			if (__LIB_1__::func_597(iParam1))
			{
				__LIB_3__::func_210(iParam1, 672, &Var0, iVar1, 0);
				uParam0->f_146[1 /*12*/] = { Var0 };
				__LIB_3__::func_210(iParam1, 673, &Var0, iVar1, 0);
				uParam0->f_146[1 /*12*/].f_3 = { Var0 };
				uParam0->f_146[1 /*12*/].f_6 = 3.5f;
				uParam0->f_146[1 /*12*/].f_7 = Var0.f_3.f_2;
			}
			__LIB_3__::func_210(iParam1, 7, &Var0, iVar1, 0);
			uParam0->f_146.f_37 = { Var0 };
			__LIB_3__::func_210(iParam1, 8, &Var0, iVar1, 0);
			uParam0->f_146.f_40 = { Var0 };
			uParam0->f_146.f_43 = { Var0.f_3 };
			uParam0->f_146.f_46 = 62.8385f;
			__LIB_3__::func_210(iParam1, 3, &Var0, iVar1, 0);
			uParam0->f_146.f_47 = { Var0 };
			__LIB_38__::func_411(&(uParam0->f_146.f_57), iParam1);
			if (__LIB_2__::func_681(iParam1) == 86)
			{
				__LIB_3__::func_210(iParam1, 341, &Var0, 86, 0);
				uParam0->f_146.f_1595 = Var0.f_3.f_2;
				uParam0->f_146.f_1592 = { Var0 };
			}
			__LIB_3__::func_210(iParam1, 15, &Var0, iVar1, 0);
			uParam0->f_146.f_50 = { Var0 };
			__LIB_38__::func_395(iParam1, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), -1);
			__LIB_3__::func_210(iParam1, 46, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/] = { Var0 };
			uParam0->f_146.f_82[1 /*102*/].f_3 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 48, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[1 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 49, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[1 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 47, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[1 /*102*/].f_10 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 50, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_16 = { Var0 };
			__LIB_3__::func_210(iParam1, 51, &Var0, iVar1, 0);
			uParam0->f_146.f_82[1 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 41, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/] = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_3 = Var0.f_3.f_2;
			uParam0->f_146.f_82[0 /*102*/].f_85 = 1;
			__LIB_3__::func_210(iParam1, 42, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_10 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 43, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 44, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_29 = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_32 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 45, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[0 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 126, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_16 = { Var0 };
			__LIB_3__::func_210(iParam1, 127, &Var0, iVar1, 0);
			uParam0->f_146.f_82[0 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 56, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/] = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_3 = Var0.f_3.f_2;
			uParam0->f_146.f_82[4 /*102*/].f_4 = { 1f, 1f, 1f };
			__LIB_3__::func_210(iParam1, 57, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_10 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 58, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 59, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_35 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_38 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 60, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_41 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_44 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 61, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_47 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_50 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 62, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_53 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_56 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 63, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 64, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_65 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_68 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 65, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_71 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_74 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 66, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_16 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_86 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 67, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 110, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_77 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_80 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 68, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_93 = { Var0 };
			__LIB_3__::func_210(iParam1, 109, &Var0, iVar1, 0);
			uParam0->f_146.f_82[4 /*102*/].f_87 = { Var0 };
			uParam0->f_146.f_82[4 /*102*/].f_90 = { Var0.f_3 };
			uParam0->f_146.f_82[12 /*102*/].f_4 = { 1f, 1f, 1f };
			__LIB_3__::func_210(iParam1, 364, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 365, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_35 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_38 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 366, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_41 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_44 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 367, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_47 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_50 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 368, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 362, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_65 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_68 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 363, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_71 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_74 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 360, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_16 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_86 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 361, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 369, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_77 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_80 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 68, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_93 = { Var0 };
			__LIB_3__::func_210(iParam1, 109, &Var0, iVar1, 0);
			uParam0->f_146.f_82[12 /*102*/].f_87 = { Var0 };
			uParam0->f_146.f_82[12 /*102*/].f_90 = { Var0.f_3 };
			uParam0->f_146.f_82[13 /*102*/].f_4 = { 1f, 1f, 1f };
			__LIB_3__::func_210(iParam1, 374, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 375, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_35 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_38 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 376, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_41 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_44 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 377, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_47 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_50 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 378, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 372, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_65 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_68 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 373, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_71 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_74 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 370, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_16 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_86 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 371, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 379, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_77 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_80 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 68, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_93 = { Var0 };
			__LIB_3__::func_210(iParam1, 109, &Var0, iVar1, 0);
			uParam0->f_146.f_82[13 /*102*/].f_87 = { Var0 };
			uParam0->f_146.f_82[13 /*102*/].f_90 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 69, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/] = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_3 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 70, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_10 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 71, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_65 = { Var0 };
			__LIB_3__::func_210(iParam1, 72, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_71 = { Var0 };
			__LIB_3__::func_210(iParam1, 73, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_87 = { Var0 };
			__LIB_3__::func_210(iParam1, 74, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_16 = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_19 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 75, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_35 = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_38 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 76, &Var0, iVar1, 0);
			uParam0->f_146.f_82[5 /*102*/].f_41 = { Var0 };
			uParam0->f_146.f_82[5 /*102*/].f_44 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 77, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/] = { Var0 };
			uParam0->f_146.f_82[6 /*102*/].f_3 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 79, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[6 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 80, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[6 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 78, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 81, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_16 = { Var0 };
			__LIB_3__::func_210(iParam1, 82, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 128, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/] = { Var0 };
			uParam0->f_146.f_82[9 /*102*/].f_3 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 298, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_81 = { Var0 };
			__LIB_3__::func_210(iParam1, 298, &Var0, iVar1, 0);
			uParam0->f_146.f_82[6 /*102*/].f_81 = { Var0 };
			__LIB_3__::func_210(iParam1, 299, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_81 = { Var0 };
			__LIB_3__::func_210(iParam1, 131, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[9 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 132, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[9 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 130, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[9 /*102*/].f_10 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 133, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_16 = { Var0 };
			__LIB_3__::func_210(iParam1, 134, &Var0, iVar1, 0);
			uParam0->f_146.f_82[9 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 89, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/] = { Var0 };
			uParam0->f_146.f_82[8 /*102*/].f_3 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 91, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[8 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 92, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[8 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 90, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[8 /*102*/].f_10 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 135, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_16 = { Var0 };
			__LIB_3__::func_210(iParam1, 136, &Var0, iVar1, 0);
			uParam0->f_146.f_82[8 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 83, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/] = { Var0 };
			uParam0->f_146.f_82[7 /*102*/].f_3 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 85, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_22 = { Var0 };
			uParam0->f_146.f_82[7 /*102*/].f_25 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 88, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_59 = { Var0 };
			uParam0->f_146.f_82[7 /*102*/].f_62 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 84, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_7 = { Var0 };
			uParam0->f_146.f_82[7 /*102*/].f_10 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 86, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_16 = { Var0 };
			__LIB_3__::func_210(iParam1, 87, &Var0, iVar1, 0);
			uParam0->f_146.f_82[7 /*102*/].f_19 = { Var0 };
			__LIB_3__::func_210(iParam1, 94, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_8 = { Var0 };
			uParam0->f_146.f_1517.f_11 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 95, &Var0, iVar1, 0);
			uParam0->f_146.f_1517 = { Var0 };
			uParam0->f_146.f_1517.f_3 = Var0.f_3.f_2;
			if (iParam1 == 65)
			{
			}
			__LIB_3__::func_210(iParam1, 96, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_4 = { Var0 };
			uParam0->f_146.f_1517.f_7 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 97, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_14 = { Var0 };
			uParam0->f_146.f_1517.f_17 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 98, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_18 = { Var0 };
			uParam0->f_146.f_1517.f_21 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 99, &Var0, iVar1, 0);
			uParam0->f_146.f_1543.f_4 = { Var0 };
			uParam0->f_146.f_1543.f_7 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 100, &Var0, iVar1, 0);
			uParam0->f_146.f_1543 = { Var0 };
			uParam0->f_146.f_1543.f_3 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 108, &Var0, iVar1, 0);
			uParam0->f_146.f_1553 = { Var0 };
			uParam0->f_146.f_1556 = { Var0.f_3 };
			__LIB_3__::func_210(iParam1, 119, &Var0, iVar1, 0);
			uParam0->f_146.f_1517.f_22 = { Var0 };
			uParam0->f_146.f_1517.f_25 = Var0.f_3.f_2;
			__LIB_3__::func_210(iParam1, 137, &Var0, iVar1, 0);
			uParam0->f_146.f_1559 = { Var0 };
			__LIB_3__::func_210(iParam1, 142, &Var0, iVar1, 0);
			uParam0->f_146.f_1562 = { Var0 };
			__LIB_3__::func_210(iParam1, 143, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_6 = { Var0 };
			__LIB_3__::func_210(iParam1, 146, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_18 = { Var0 };
			__LIB_3__::func_210(iParam1, 147, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_21 = { Var0 };
			__LIB_3__::func_210(iParam1, 158, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_15 = { Var0 };
			__LIB_3__::func_210(iParam1, 145, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_15 = { Var0 };
			__LIB_3__::func_210(iParam1, 144, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_12 = { Var0 };
			__LIB_3__::func_210(iParam1, 148, &Var0, iVar1, 0);
			uParam0->f_146.f_1562.f_24 = { Var0 };
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			uParam0->f_38[0 /*27*/].f_8 = { 347.3975f, -1001.4458f, -100.1982f };
			uParam0->f_38[0 /*27*/].f_11 = 4.881f;
			uParam0->f_146[0 /*12*/] = { 347.08966f, -1002.55396f, -96.94618f };
			uParam0->f_146[0 /*12*/].f_3 = { 347.0861f, -1003.80035f, -100.88605f };
			uParam0->f_146[0 /*12*/].f_6 = 2.5f;
			uParam0->f_146[0 /*12*/].f_7 = 176.3655f;
			uParam0->f_146.f_37 = { 338.7102f, -1002.2359f, -100.2119f };
			uParam0->f_146.f_40 = { 342.9461f, -999.73f, -98.0236f };
			uParam0->f_146.f_43 = { 0f, 0f, 37.7289f };
			uParam0->f_146.f_46 = 50f;
			uParam0->f_146.f_47 = { 348.132f, -997.2031f, -100.1741f };
			__LIB_38__::func_411(&(uParam0->f_146.f_57), iParam1);
			uParam0->f_146.f_50 = { 346.4337f, -1002.8267f, -97.7941f };
			__LIB_38__::func_395(iParam1, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), -1);
			uParam0->f_146.f_82[1 /*102*/] = { 349.9853f, -997.8344f, -99.1952f };
			uParam0->f_146.f_82[1 /*102*/].f_3 = 285.4278f;
			uParam0->f_146.f_82[2 /*102*/] = { 343.8862f, -1002.2512f, -100.1962f };
			uParam0->f_146.f_82[2 /*102*/].f_3 = 277.1949f;
			uParam0->f_146.f_82[2 /*102*/].f_22 = { 344.6448f, -1003.7554f, -98.7875f };
			uParam0->f_146.f_82[2 /*102*/].f_25 = { -2.7747f, -1.6005f, 17.2117f };
			uParam0->f_146.f_82[2 /*102*/].f_29 = { 344.6427f, -1003.9994f, -98.7826f };
			uParam0->f_146.f_82[2 /*102*/].f_32 = { -0.1925f, -1.5516f, 18.2611f };
			uParam0->f_146.f_82[2 /*102*/].f_59 = { 342.347f, -1003.1187f, -97.9876f };
			uParam0->f_146.f_82[2 /*102*/].f_62 = { -27.0125f, -1.6193f, -66.8063f };
			uParam0->f_146.f_82[2 /*102*/].f_7 = { Vector(-99.095f, -1002.38f, 344.482f) + Vector(0.0058f, 0.066f, 0.0651f) };
			uParam0->f_146.f_82[2 /*102*/].f_10 = { 0f, 0f, -129.96f };
			uParam0->f_146.f_82[2 /*102*/].f_16 = { 344.6f, -1002.3f, -100.1962f };
			uParam0->f_146.f_82[2 /*102*/].f_19 = { 343.5f, -1002.3f, -98.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_81 = { 341.9066f, -1001.6698f, -99.233f };
			uParam0->f_146.f_82[0 /*102*/] = { 339.6112f, -996.2951f, -99.1962f };
			uParam0->f_146.f_82[0 /*102*/].f_3 = 10.8f;
			uParam0->f_146.f_82[0 /*102*/].f_7 = { 339.435f, -995.849f, -100.196f };
			uParam0->f_146.f_82[0 /*102*/].f_10 = { 0f, 0f, -169.2f };
			uParam0->f_146.f_82[0 /*102*/].f_22 = { 348.8181f, -993.7432f, -99.2265f };
			uParam0->f_146.f_82[0 /*102*/].f_25 = { -9.5524f, 0f, -143.8996f };
			uParam0->f_146.f_82[0 /*102*/].f_16 = { 339.38806f, -996.7233f, -100.19622f };
			uParam0->f_146.f_82[0 /*102*/].f_19 = { 340.25854f, -996.26385f, -98.19622f };
			uParam0->f_146.f_82[0 /*102*/].f_85 = 0;
			uParam0->f_146.f_82[4 /*102*/] = { 347.2369f, -995.4249f, -99.1069f };
			uParam0->f_146.f_82[4 /*102*/].f_3 = 91.0909f;
			uParam0->f_146.f_82[4 /*102*/].f_4 = { 0.6f, 0.6f, 0.6f };
			uParam0->f_146.f_82[4 /*102*/].f_7 = { 347.3f, -994.85f, -99.966f };
			uParam0->f_146.f_82[4 /*102*/].f_10 = { 0f, 0f, -90f };
			uParam0->f_146.f_82[4 /*102*/].f_22 = { 348.0795f, -995.1061f, -98.537f };
			uParam0->f_146.f_82[4 /*102*/].f_25 = { -3.7658f, 0.0129f, 117.3778f };
			uParam0->f_146.f_82[4 /*102*/].f_35 = { 347.3852f, -995.6655f, -98.3721f };
			uParam0->f_146.f_82[4 /*102*/].f_38 = { 28.8622f, 0.0506f, 37.7639f };
			uParam0->f_146.f_82[4 /*102*/].f_41 = { 348.0655f, -995.4604f, -98.5769f };
			uParam0->f_146.f_82[4 /*102*/].f_44 = { -3.3764f, 0.0015f, 90.1577f };
			uParam0->f_146.f_82[4 /*102*/].f_47 = { 347.4615f, -995.39f, -97.7124f };
			uParam0->f_146.f_82[4 /*102*/].f_50 = { -42.5076f, 0.0833f, 89.414f };
			uParam0->f_146.f_82[4 /*102*/].f_53 = { 347.4615f, -995.39f, -97.7124f };
			uParam0->f_146.f_82[4 /*102*/].f_56 = { -42.5076f, 0.0833f, 89.414f };
			uParam0->f_146.f_82[4 /*102*/].f_59 = { 346.4644f, -992.7673f, -98.5189f };
			uParam0->f_146.f_82[4 /*102*/].f_62 = { -19.2697f, -0.0001f, -146.3524f };
			uParam0->f_146.f_82[4 /*102*/].f_65 = { 346.9f, -995.1795f, -97.85f };
			uParam0->f_146.f_82[4 /*102*/].f_68 = { -45f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_71 = { 346.9f, -995.1795f, -97.85f };
			uParam0->f_146.f_82[4 /*102*/].f_74 = { -45f, 0f, 90f };
			uParam0->f_146.f_82[4 /*102*/].f_16 = { 346.25f, -994.4f, -100.2f };
			uParam0->f_146.f_82[4 /*102*/].f_19 = { 348.25f, -994.4f, -97.5f };
			uParam0->f_146.f_82[4 /*102*/].f_86 = 5.5f;
			uParam0->f_146.f_82[4 /*102*/].f_87 = { 348.2157f, -993.1122f, -99.043f };
			uParam0->f_146.f_82[4 /*102*/].f_90 = { 0f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_77 = { 347.7391f, -994.5944f, -100.1962f };
			uParam0->f_146.f_82[4 /*102*/].f_80 = 9.7212f;
			uParam0->f_146.f_82[4 /*102*/].f_93 = { 348.16153f, -993.47345f, -100.69622f };
			uParam0->f_146.f_82[6 /*102*/] = { 342.6041f, -1001.5839f, -100.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_3 = 88.0775f;
			uParam0->f_146.f_82[6 /*102*/].f_7 = { Vector(-99.25f, -1001.646f, 341.9f) + Vector(-0.0027f, -0.0238f, 0.0066f) };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { 0f, 0f, 90f };
			uParam0->f_146.f_82[6 /*102*/].f_22 = { 341.3749f, -1002.8832f, -98.9319f };
			uParam0->f_146.f_82[6 /*102*/].f_25 = { -2.0018f, -0.0676f, -25.1089f };
			uParam0->f_146.f_82[6 /*102*/].f_59 = { 341.3749f, -1002.8832f, -98.9319f };
			uParam0->f_146.f_82[6 /*102*/].f_62 = { -2.0018f, -0.0676f, -25.1089f };
			uParam0->f_146.f_82[6 /*102*/].f_16 = { 342f, -1001.5486f, -100.1962f };
			uParam0->f_146.f_82[6 /*102*/].f_19 = { 343f, -1001.5486f, -98.1962f };
			uParam0->f_146.f_1517.f_8 = { 346.7972f, -1004.4448f, -100.1919f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, 180f };
			uParam0->f_146.f_1517 = { 346.796f, -1002.2325f, -99.19f };
			uParam0->f_146.f_1517.f_3 = 178.66f;
			uParam0->f_146.f_1517.f_4 = { 346.55f, -1006.2598f, -100.1962f };
			uParam0->f_146.f_1517.f_7 = 359.8999f;
			uParam0->f_146.f_1517.f_14 = { 346.2292f, -1000.9788f, -99.19f };
			uParam0->f_146.f_1517.f_17 = -132.94f;
			uParam0->f_146.f_1517.f_18 = { 347.2401f, -1001.8555f, -99.19f };
			uParam0->f_146.f_1517.f_21 = 51.24f;
			uParam0->f_146.f_1553 = { 346.48f, -1004.03f, -98.81f };
			uParam0->f_146.f_1556 = { 90f, 0f, 0f };
			uParam0->f_146.f_1559 = { 340.6887f, -998.2258f, -100.1962f };
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			uParam0->f_38[0 /*27*/].f_8 = { 264.5677f, -1000.6248f, -100.0086f };
			uParam0->f_38[0 /*27*/].f_11 = 38.4697f;
			uParam0->f_146[0 /*12*/] = { 265.08197f, -1000.7009f, -100.00862f };
			uParam0->f_146[0 /*12*/].f_3 = { 265.06662f, -1002.6346f, -97.25862f };
			uParam0->f_146[0 /*12*/].f_6 = 1.75f;
			uParam0->f_146[0 /*12*/].f_7 = 182.9622f;
			uParam0->f_146.f_37 = { 264.4842f, -997.0889f, -100.0086f };
			uParam0->f_146.f_40 = { 262.9771f, -999.9382f, -97.7223f };
			uParam0->f_146.f_43 = { 0f, 0f, 46.9484f };
			uParam0->f_146.f_46 = 50f;
			uParam0->f_146.f_47 = { 262.6717f, -1000.425f, -100.0087f };
			__LIB_38__::func_411(&(uParam0->f_146.f_57), iParam1);
			uParam0->f_146.f_50 = { 265.9362f, -1001.3053f, -97.6834f };
			__LIB_38__::func_395(iParam1, &(uParam0->f_146.f_53), &(uParam0->f_146.f_56), -1);
			uParam0->f_146.f_82[1 /*102*/] = { 261.2055f, -1003.9203f, -100.0086f };
			uParam0->f_146.f_82[1 /*102*/].f_3 = 280.6086f;
			uParam0->f_146.f_82[2 /*102*/] = { 265.6066f, -996.4553f, -99.0039f };
			uParam0->f_146.f_82[2 /*102*/].f_3 = 264.6031f;
			uParam0->f_146.f_82[2 /*102*/].f_7 = { Vector(-98.9f, -996.94f, 266.2f) - Vector(0.0016f, -0.2399f, -0.0237f) };
			uParam0->f_146.f_82[2 /*102*/].f_10 = { 0f, 0f, -146.16f };
			uParam0->f_146.f_82[2 /*102*/].f_22 = { 266.522f, -995.2286f, -98.7813f };
			uParam0->f_146.f_82[2 /*102*/].f_25 = { 1.4963f, 0.0565f, 169.5309f };
			uParam0->f_146.f_82[2 /*102*/].f_29 = { 266.522f, -995.2286f, -98.7813f };
			uParam0->f_146.f_82[2 /*102*/].f_32 = { 1.4963f, 0.0565f, 169.5309f };
			uParam0->f_146.f_82[2 /*102*/].f_59 = { 265.3f, -996.2f, -98.2f };
			uParam0->f_146.f_82[2 /*102*/].f_62 = { -26.5f, 0f, -126.9383f };
			uParam0->f_146.f_82[2 /*102*/].f_16 = { 266.4885f, -996.7f, -98.5f };
			uParam0->f_146.f_82[2 /*102*/].f_19 = { 265f, -996.7f, -100.0086f };
			uParam0->f_146.f_82[0 /*102*/] = { 259.4345f, -996.0923f, -100.0086f };
			uParam0->f_146.f_82[0 /*102*/].f_3 = 74f;
			uParam0->f_146.f_82[0 /*102*/].f_7 = { 259.221f, -994.878f, -99.536f };
			uParam0->f_146.f_82[0 /*102*/].f_10 = { 0f, 0f, 0f };
			uParam0->f_146.f_82[0 /*102*/].f_22 = { 259.5696f, -997.0326f, -99.3819f };
			uParam0->f_146.f_82[0 /*102*/].f_25 = { 3.6829f, -0.0466f, 50.1658f };
			uParam0->f_146.f_82[0 /*102*/].f_29 = { 259.1824f, -996.4972f, -99.2152f };
			uParam0->f_146.f_82[0 /*102*/].f_32 = { 13.6201f, -0.0466f, 1.422f };
			uParam0->f_146.f_82[0 /*102*/].f_59 = { 257.0249f, -995.7932f, -98.5627f };
			uParam0->f_146.f_82[0 /*102*/].f_62 = { -8.5766f, -0.0466f, -102.1123f };
			uParam0->f_146.f_82[0 /*102*/].f_16 = { 258.65027f, -995.92993f, -100.00862f };
			uParam0->f_146.f_82[0 /*102*/].f_19 = { 259.761f, -996.1004f, -98.00862f };
			uParam0->f_146.f_82[0 /*102*/].f_85 = 1;
			uParam0->f_146.f_82[3 /*102*/] = { 262.4687f, -999.5469f, -100.0086f };
			uParam0->f_146.f_82[3 /*102*/].f_3 = 187.4952f;
			uParam0->f_146.f_82[4 /*102*/] = { 254.3181f, -1000.8063f, -98.9226f };
			uParam0->f_146.f_82[4 /*102*/].f_3 = 357.3586f;
			uParam0->f_146.f_82[4 /*102*/].f_4 = { 0.6f, 0.6f, 0.6f };
			uParam0->f_146.f_82[4 /*102*/].f_7 = { 254.847f, -1000.64f, -99.768f };
			uParam0->f_146.f_82[4 /*102*/].f_10 = { 0f, 0f, -180f };
			uParam0->f_146.f_82[4 /*102*/].f_22 = { 254.5649f, -1001.6345f, -98.2143f };
			uParam0->f_146.f_82[4 /*102*/].f_25 = { -13.1864f, 0f, 14.3302f };
			uParam0->f_146.f_82[4 /*102*/].f_35 = { 254.0852f, -1001.0563f, -97.9779f };
			uParam0->f_146.f_82[4 /*102*/].f_38 = { 8.8526f, -0.0221f, -37.4062f };
			uParam0->f_146.f_82[4 /*102*/].f_41 = { 254.2074f, -1001.6578f, -98.3661f };
			uParam0->f_146.f_82[4 /*102*/].f_44 = { -2.5954f, -0.0719f, -0.3961f };
			uParam0->f_146.f_82[4 /*102*/].f_47 = { 254.2738f, -1001.0099f, -97.76f };
			uParam0->f_146.f_82[4 /*102*/].f_50 = { -32.3906f, -0.0172f, 0.3708f };
			uParam0->f_146.f_82[4 /*102*/].f_53 = { 254.2738f, -1001.0099f, -97.76f };
			uParam0->f_146.f_82[4 /*102*/].f_56 = { -32.3906f, -0.0172f, 0.3708f };
			uParam0->f_146.f_82[4 /*102*/].f_59 = { 256.8365f, -1001.0202f, -98.767f };
			uParam0->f_146.f_82[4 /*102*/].f_62 = { -3.3968f, -0.0144f, 88.4273f };
			uParam0->f_146.f_82[4 /*102*/].f_65 = { 254.5308f, -1000.29114f, -97.67236f };
			uParam0->f_146.f_82[4 /*102*/].f_68 = { -45f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_71 = { 254.5308f, -1000.29114f, -97.67236f };
			uParam0->f_146.f_82[4 /*102*/].f_74 = { -45f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_16 = { 253.84328f, -1000.75507f, -100f };
			uParam0->f_146.f_82[4 /*102*/].f_19 = { 257.27393f, -1000.76526f, -97f };
			uParam0->f_146.f_82[4 /*102*/].f_86 = 2f;
			uParam0->f_146.f_82[4 /*102*/].f_87 = { 257.2896f, -1001.2546f, -98.8587f };
			uParam0->f_146.f_82[4 /*102*/].f_90 = { 0f, 0f, 0f };
			uParam0->f_146.f_82[4 /*102*/].f_77 = { 255.2676f, -1000.9778f, -100.0099f };
			uParam0->f_146.f_82[4 /*102*/].f_80 = 274.0441f;
			uParam0->f_146.f_82[4 /*102*/].f_93 = { 257.23615f, -1000.592f, -99.50992f };
			uParam0->f_146.f_82[6 /*102*/] = { 263.6821f, -996.9714f, -100.0087f };
			uParam0->f_146.f_82[6 /*102*/].f_3 = 90.1681f;
			uParam0->f_146.f_82[6 /*102*/].f_7 = { 264.2415f, -994.803f, -99.071f };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { 0f, 0f, -2.52f };
			uParam0->f_146.f_82[6 /*102*/].f_22 = { 265.4949f, -994.6922f, -98.7894f };
			uParam0->f_146.f_82[6 /*102*/].f_25 = { 2.6773f, 0f, 115.8733f };
			uParam0->f_146.f_82[6 /*102*/].f_7 = { 264.2415f, -994.803f, -99.071f };
			uParam0->f_146.f_82[6 /*102*/].f_10 = { 0f, 0f, -2.52f };
			uParam0->f_146.f_1517.f_8 = { 265.4131f, -1002.989f, -99.9457f };
			uParam0->f_146.f_1517.f_11 = { 0f, 0f, 180f };
			uParam0->f_146.f_1517 = { 265.425f, -1000.7535f, -100.0086f };
			uParam0->f_146.f_1517.f_3 = 178.66f;
			uParam0->f_146.f_1517.f_4 = { 265.1576f, -1002.9908f, -100.0086f };
			uParam0->f_146.f_1517.f_7 = 0.8739f;
			uParam0->f_146.f_1517.f_14 = { 264.8582f, -999.4998f, -100.0086f };
			uParam0->f_146.f_1517.f_17 = -132.94f;
			uParam0->f_146.f_1517.f_18 = { 265.8691f, -1000.3765f, -100.0086f };
			uParam0->f_146.f_1517.f_21 = 51.24f;
			uParam0->f_146.f_1553 = { 265.13f, -1002.489f, -98.816f };
			uParam0->f_146.f_1556 = { 90f, 0f, 0f };
			uParam0->f_146.f_1559 = { 260.9818f, -999.0168f, -100.0086f };
			break;
	}
}

int func_424(int iParam0)//Position - 0x9FC
{
	int iVar0;
	int iVar1;
	iVar0 = 64;
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_425()//Position - 0x1666
{
	Local_273[0 /*3*/] = { -10.1749f, 517.8317f, 175.192f };
	Local_273[1 /*3*/] = { -7.694f, 516.4619f, 175.2034f };
	Local_273[2 /*3*/] = { -8.0344f, 518.4184f, 175.1866f };
	Local_273[3 /*3*/] = { -9.7451f, 515.6803f, 175.1711f };
}

char* func_426()//Position - 0x16CA
{
	char* sVar0;
	int iVar1;
	iVar1 = __LIB_35__::func_242(PLAYER::PLAYER_PED_ID());
	switch (iLocal_40)
	{
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_35)
			{
				if (bLocal_37)
				{
					switch (iLocal_39)
					{
						case 0:
							sVar0 = "drink_2_bottle";
							break;
						case 1:
							sVar0 = "drink_2_bottle";
							break;
						case 2:
							sVar0 = "drink_3_bottle";
							break;
						case 3:
							sVar0 = "drink_4_bottle";
							break;
						case 4:
							sVar0 = "drink_5_bottle";
							break;
						case 5:
							sVar0 = "drink_4_bottle";
							break;
					}
				}
				else
				{
					switch (iVar1)
					{
						case -1:
							sVar0 = "drink_2_bottle";
							break;
						case 2:
							sVar0 = "drink_3_bottle";
							break;
						case 1:
							sVar0 = "drink_4_bottle";
							break;
						case 0:
							sVar0 = "drink_5_bottle";
							break;
						}
				}
			}
			else if (bLocal_37)
			{
				switch (iLocal_39)
				{
					case 0:
						sVar0 = "first_shot_bot";
						break;
					case 1:
						sVar0 = "first_shot_bot";
						break;
					case 2:
						sVar0 = "second_shot_bot";
						break;
					case 3:
						sVar0 = "third_shot_bot";
						break;
					case 4:
						sVar0 = "fourth_shot_bot";
						break;
					case 5:
						sVar0 = "fifth_shot_bot";
						break;
				}
			}
			else
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "first_shot_bot";
						break;
					case 2:
						sVar0 = "third_shot_bot";
						break;
					case 1:
						sVar0 = "fourth_shot_bot";
						break;
					case 0:
						sVar0 = "fifth_shot_bot";
						break;
					}
			}
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "drinking_wine_bottle";
			break;
		case joaat("prop_radio_01"):
			if (bLocal_35)
			{
				if (bLocal_37)
				{
					switch (iLocal_39)
					{
						case 0:
							sVar0 = "drink_1_cap";
							break;
						case 1:
							sVar0 = "drink_1_cap";
							break;
						case 2:
							sVar0 = "drink_2_cap";
							break;
						case 3:
							sVar0 = "drink_3_cap";
							break;
						case 4:
							sVar0 = "drink_4_cap";
							break;
						case 5:
							sVar0 = "drink_5_cap";
							break;
					}
				}
				else
				{
					switch (iVar1)
					{
						case -1:
							sVar0 = "drink_1_cap";
							break;
						case 2:
							sVar0 = "drink_3_cap";
							break;
						case 1:
							sVar0 = "drink_4_cap";
							break;
						case 0:
							sVar0 = "drink_5_cap";
							break;
						}
				}
			}
			else if (bLocal_37)
			{
				switch (iLocal_39)
				{
					case 0:
						sVar0 = "drink_1_cap";
						break;
					case 1:
						sVar0 = "drink_1_cap";
						break;
					case 2:
						sVar0 = "drink_2_cap";
						break;
					case 3:
						sVar0 = "drink_3_cap";
						break;
					case 4:
						sVar0 = "drink_4_cap";
						break;
					case 5:
						sVar0 = "drink_3_cap";
						break;
				}
			}
			else
			{
				switch (iVar1)
				{
					case -1:
						sVar0 = "drink_1_cap";
						break;
					case 2:
						sVar0 = "drink_2_cap";
						break;
					case 1:
						sVar0 = "drink_3_cap";
						break;
					case 0:
						sVar0 = "drink_4_cap";
						break;
					}
			}
			break;
	}
	return sVar0;
}

int func_427()//Position - 0x6719A
{
	if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK(__LIB_38__::func_417(), false, -1))
	{
		return 1;
	}
	return 0;
}

int func_428()//Position - 0x67363
{
	switch (iLocal_40)
	{
		case joaat("prop_cigar_03"):
			if (__LIB_0__::func_683() == 0)
			{
				return 1;
			}
			break;
		case joaat("prop_bong_01"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 1;
			}
			if (__LIB_0__::func_683() == 1)
			{
				bLocal_34 = true;
				return 1;
			}
			if (__LIB_0__::func_683() == 0)
			{
				if (!iLocal_33)
				{
					iLocal_33 = 1;
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family5")) > 0)
				{
					return 0;
				}
				if (__LIB_0__::func_201())
				{
					return 0;
				}
				if (((((Global_95447[0] == 5 || Global_95447[0] == 21) || Global_95447[0] == 20) || Global_95447[0] == 16) || Global_95447[0] == 18) || Global_95447[0] == 9)
				{
					return 0;
				}
				if (((((Global_95447[0] == 6 || Global_95447[0] == 7) || Global_95447[0] == 11) || Global_95447[0] == 17) || Global_95447[0] == 140) || Global_95447[0] == 141)
				{
					return 1;
				}
				return 1;
			}
			break;
		case joaat("prop_cs_beer_bot_01"):
			if (Global_78319)
			{
				return 1;
			}
			if (__LIB_0__::func_683() == 1)
			{
				if (!iLocal_32)
				{
					iLocal_32 = 1;
				}
				return 1;
			}
			break;
		case joaat("p_cs_joint_01"):
			if (__LIB_0__::func_683() == 1)
			{
				return 1;
			}
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (Global_78319)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (__LIB_0__::func_683() == 0)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (__LIB_0__::func_683() == 2 && __LIB_0__::func_178(20))
			{
				if (!iLocal_30)
				{
					iLocal_30 = 1;
				}
				iLocal_31 = 1;
				bLocal_35 = true;
				return 1;
			}
			break;
		case joaat("prop_rolled_sock_02"):
			if (__LIB_0__::func_683() == 2 || Global_78319)
			{
				return 1;
			}
			break;
		case joaat("prop_mr_raspberry_01"):
			if (Global_113386.f_7261.f_227[145] == 1)
			{
				if (__LIB_0__::func_683() == 2)
				{
					if (((((Global_95447[13] != 127 && Global_95447[13] != 135) && Global_95463 != 127) && Global_95463 != 135) && !__LIB_0__::func_217()) && !__LIB_0__::func_201())
					{
						return 1;
					}
				}
			}
			break;
		case joaat("prop_radio_01"):
			iLocal_31 = 1;
			if ((Global_39990[78] != 1 && Global_95447[9] != 117) && Global_95447[11] != 117)
			{
				if (__LIB_0__::func_683() == 2)
				{
					bLocal_35 = true;
					return 1;
				}
				if ((__LIB_0__::func_683() == 0 && __LIB_0__::func_425(130)) && !__LIB_0__::func_425(131))
				{
					return 1;
				}
			}
			break;
		case joaat("p_w_grass_gls_s"):
			if (Global_78319)
			{
				return 1;
			}
			if (__LIB_0__::func_683() == 0)
			{
				if (Global_95447[0] != 17 && Global_95447[2] != 73)
				{
					return 1;
				}
			}
			break;
		case joaat("p_wine_glass_s"):
			if (Global_78319)
			{
				return 1;
			}
			if (__LIB_0__::func_683() == 1)
			{
				bLocal_34 = true;
				iLocal_32 = 1;
				if (!iLocal_31)
				{
					iLocal_31 = 1;
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_429()//Position - 0x30E8
{
	int iVar0;
	if (__LIB_0__::func_683() == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		__LIB_0__::func_222(&uLocal_108, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		{
			AUDIO::START_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD1", 4, 0, 0, 0);
				break;
			case 1:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD2", 4, 0, 0, 0);
				break;
			case 2:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD3", 4, 0, 0, 0);
				break;
			case 3:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD4", 4, 0, 0, 0);
				break;
			case 4:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD5", 4, 0, 0, 0);
				break;
			case 5:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD6", 4, 0, 0, 0);
				break;
			case 6:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD7", 4, 0, 0, 0);
				break;
			case 7:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD8", 4, 0, 0, 0);
				break;
			case 8:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD9", 4, 0, 0, 0);
				break;
			case 9:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "M_WD10", 4, 0, 0, 0);
				break;
		}
	}
	else if (__LIB_0__::func_683() == 1)
	{
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		__LIB_0__::func_222(&uLocal_108, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD1", 3, 0, 0, 0);
				break;
			case 1:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD2", 3, 0, 0, 0);
				break;
			case 2:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD3", 3, 0, 0, 0);
				break;
			case 3:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD4", 3, 0, 0, 0);
				break;
			case 4:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD5", 3, 0, 0, 0);
				break;
			case 5:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD6", 3, 0, 0, 0);
				break;
			case 6:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD7", 3, 0, 0, 0);
				break;
			case 7:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD8", 3, 0, 0, 0);
				break;
			case 8:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD9", 3, 0, 0, 0);
				break;
			case 9:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD10", 3, 0, 0, 0);
				break;
			case 10:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "F_WD11", 3, 0, 0, 0);
				break;
		}
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		__LIB_0__::func_222(&uLocal_108, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "T_WD1", 4, 0, 0, 0);
				break;
			case 1:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "T_WD3", 4, 0, 0, 0);
				break;
			case 2:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "T_WD4", 4, 0, 0, 0);
				break;
			case 3:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "T_WD5", 4, 0, 0, 0);
				break;
			case 4:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "T_WD6", 4, 0, 0, 0);
				break;
			case 5:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "T_WD8", 4, 0, 0, 0);
				break;
			case 6:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "T_WD9", 4, 0, 0, 0);
				break;
			case 7:
				__LIB_0__::func_787(&uLocal_108, "WEEDAUD", "T_WD10", 4, 0, 0, 0);
				break;
			}
	}
}

char* func_430()//Position - 0x19C8
{
	char* sVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	__LIB_38__::func_425();
	sVar0 = "";
	Var1 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_273[0 /*3*/], true);
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_273[1 /*3*/], true);
	if (fVar2 < fVar3)
	{
		sVar0 = "drinking_wine_cam2";
		Local_274 = { -8.9f, 515.6f, 175.4f };
		Local_275 = { -17.1f, 0.5f, 6.5f };
	}
	else
	{
		sVar0 = "drinking_wine_cam3";
		Local_274 = { -10.1f, 516f, 175.3f };
		Local_275 = { -13.5f, 0.5f, -56f };
	}
	return sVar0;
}

char* func_431(int iParam0)//Position - 0x7C05
{
	switch (iParam0)
	{
		case 0:
			return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
		case 1:
			return "HIDDEN_RADIO_BIKER_MODERN_ROCK";
		case 2:
			return "HIDDEN_RADIO_BIKER_HIP_HOP";
		case 3:
			return "HIDDEN_RADIO_BIKER_PUNK";
		case 4:
			return "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */;
		default:
	}
	return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
}

void func_432(int iParam0, bool bParam1)//Position - 0x94BA
{
	if (__LIB_2__::func_681(iParam0) == 97)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_02_REC", bParam1);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_02_GRG", bParam1);
		return;
	}
	else if (__LIB_2__::func_681(iParam0) == 91)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_01_BAR", bParam1);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_01_GRG", bParam1);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_bkr_biker_dlc_int_01_REC", bParam1);
		return;
	}
}

void func_433()//Position - 0x835E
{
	__LIB_3__::func_570(1);
	__LIB_0__::func_366(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

bool func_434(int iParam0)//Position - 0x962D
{
	return (__LIB_3__::func_593(iParam0) && __LIB_12__::func_383(iParam0));
}

char* func_435(bool bParam0)//Position - 0x165A
{
	char* sVar0;
	sVar0 = "f_getout_l_bighouse";
	if (bParam0 == 0)
	{
		sVar0 = "f_getout_l_bighouse";
	}
	else
	{
		sVar0 = "f_getout_r_bighouse";
	}
	return sVar0;
}

char* func_436(int iParam0)//Position - 0x55F05
{
	switch (iParam0)
	{
		case 1:
			return "anim@mp_bedmid@left_var_01";
			break;
		case 2:
			return "anim@mp_bedmid@left_var_02";
			break;
		case 3:
			return "anim@mp_bedmid@left_var_03";
			break;
		case 4:
			return "anim@mp_bedmid@left_var_04";
			break;
	}
	return "anim@mp_bedmid@left_var_01";
}

int func_437(int iParam0)//Position - 0x562E0
{
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 == 86)
	{
		return 1;
	}
	return 0;
}

char* func_438(bool bParam0)//Position - 0x5663A
{
	char* sVar0;
	sVar0 = "f_sleep_l_loop_bighouse";
	if (bParam0 == 0)
	{
		sVar0 = "f_sleep_l_loop_bighouse";
	}
	else
	{
		sVar0 = "f_sleep_r_loop_bighouse";
	}
	return sVar0;
}

char* func_439(int iParam0)//Position - 0x56746
{
	switch (iParam0)
	{
		case 1:
			return "anim@mp_bedmid@right_var_01";
			break;
		case 2:
			return "anim@mp_bedmid@right_var_02";
			break;
		case 3:
			return "anim@mp_bedmid@right_var_03";
			break;
		case 4:
			return "anim@mp_bedmid@right_var_04";
			break;
	}
	return "anim@mp_bedmid@right_var_01";
}

void func_440(int iParam0)//Position - 0x15DC
{
	if (iParam0 == __LIB_1__::func_670())
	{
		Global_2671449.f_19 = 1;
	}
}

int func_441()//Position - 0x56CB4
{
	int iVar0;
	iVar0 = __LIB_3__::func_648();
	if (iVar0 > -1 && iVar0 < 159)
	{
		if (__LIB_0__::func_172(iVar0) == 4)
		{
			return 1;
		}
	}
	if (__LIB_1__::func_786(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_442()//Position - 0x56799
{
	int iVar0;
	iVar0 = __LIB_3__::func_648();
	if (iVar0 > -1 && iVar0 < 159)
	{
		if (__LIB_0__::func_172(iVar0) == 11)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_362(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_443()//Position - 0x2046
{
	char* sVar0;
	sVar0 = __LIB_38__::func_402();
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

char* func_444(int iParam0)//Position - 0xFA5
{
	char* sVar0;
	sVar0 = "";
	switch (iLocal_40)
	{
		case joaat("prop_bong_01"):
			if (bLocal_34)
			{
				sVar0 = "bong_cam";
			}
			else
			{
				sVar0 = "short_cam";
			}
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "enter_cam";
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "ig_8_huff_gas_cam";
			break;
		case joaat("prop_mr_raspberry_01"):
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_cam";
					break;
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_cam";
					break;
				case 2:
					sVar0 = "ig_7_lookatu_cam";
					break;
				case 3:
					sVar0 = "ig_7_smelllikeasea_cam";
					break;
			}
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "ig_2_wheatgrassdrink_cam";
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = __LIB_38__::func_430();
			break;
	}
	return sVar0;
}

void func_445(bool bParam0, bool bParam1)//Position - 0x32C0
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 64;
	if (bParam0)
	{
		if (__LIB_38__::func_424(0))
		{
			if (!iLocal_36)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_36 = 1;
			}
		}
		else if (iLocal_36)
		{
			iLocal_36 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) - 127);
		if (!iLocal_37)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_38 = MISC::GET_GAME_TIMER();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_38 = MISC::GET_GAME_TIMER();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_39 = 1;
			}
			else if (iLocal_39)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_39 = 0;
				}
			}
		}
		if (iLocal_37)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_38 + 24)
			{
				iLocal_37 = 0;
			}
		}
	}
}

int func_446()//Position - 0x4887
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!PED::IS_PED_INJURED(uVar2[iVar1]))
		{
			if (bLocal_50)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == joaat("Player_Zero"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_50 && !bLocal_49)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == joaat("Player_One"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], true), true) < 3f)
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

char* func_447()//Position - 0x5093
{
	char* sVar0;
	switch (iLocal_55)
	{
		case joaat("prop_bong_01"):
			if (bLocal_49)
			{
				sVar0 = "SA_BONG2" /* GXT: Press ~INPUT_CONTEXT~ to take a hit from the bong. */;
			}
			else
			{
				sVar0 = "SA_BONG" /* GXT: Press ~INPUT_CONTEXT~ to take a hit from Jimmy's bong. */;
			}
			break;
		case joaat("prop_cigar_03"):
			sVar0 = "SA_CIGAR" /* GXT: Press ~INPUT_CONTEXT~ to smoke a cigar. */;
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
			break;
		case joaat("p_cs_joint_01"):
			sVar0 = "SA_SPLFF" /* GXT: Press ~INPUT_CONTEXT~ to smoke a joint. */;
			break;
		case joaat("p_tumbler_02_s1"):
			sVar0 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			break;
		case joaat("p_tumbler_cs2_s"):
			sVar0 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			break;
		case joaat("p_tumbler_cs2_s_trev"):
			sVar0 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "SA_GAS" /* GXT: Press ~INPUT_CONTEXT~ to huff gas. */;
			break;
		case joaat("prop_mr_raspberry_01"):
			sVar0 = "SA_MRJAM" /* GXT: Press ~INPUT_CONTEXT~ to play with Mr. Raspberry Jam. */;
			break;
		case joaat("prop_radio_01"):
			sVar0 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "SA_WHEAT" /* GXT: Press ~INPUT_CONTEXT~ to drink green juice. */;
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "SA_WINE" /* GXT: Press ~INPUT_CONTEXT~ to drink some wine. */;
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

void func_448(int iParam0, struct<3> Param1)//Position - 0x3759
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		Var0 = { CAM::GET_CAM_ROT(iParam0, 2) };
		Var1 = { Param1 };
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			fVar3 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
			fVar4 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
			fVar5 = ((fVar3 - 0.5f) * (-6.5f * 2f));
			fVar6 = ((fVar4 - 0.5f) * (-12.5f * 2f));
			Var1.f_0 = (Var1.f_0 + fVar5);
			Var1.f_2 = (Var1.f_2 + fVar6);
			while (Var1.f_2 < -180f)
			{
				Var1.f_2 = (Var1.f_2 + 360f);
			}
			while (Var1.f_2 > 180f)
			{
				Var1.f_2 = (Var1.f_2 - 360f);
			}
			while (Var1.f_0 < -180f)
			{
				Var1.f_0 = (Var1.f_0 + 360f);
			}
			while (Var1.f_0 > 180f)
			{
				Var1.f_0 = (Var1.f_0 - 360f);
			}
			fVar7 = (Var1.f_2 - Var0.f_2);
			fVar8 = __LIB_38__::func_414(fVar7, -180f, 180f);
			Var2 = { Var0 + Var1 - Var0 * Vector(0.25f, 0.25f, 0.25f) };
			Var2.f_2 = (Var0.f_2 + (fVar8 * 0.25f));
		}
		else
		{
			__LIB_0__::func_603(&uVar9, &uVar10, &iVar11, &iVar12, 0);
			if ((iVar11 < 32 && iVar11 > -32) && (iVar12 < 32 && iVar12 > -32))
			{
				if (iVar11 < 32 && iVar11 > -32)
				{
					iVar11 = 0;
				}
				else if (iVar11 < 0)
				{
					iVar11 = (iVar11 - 32);
				}
				else
				{
					iVar11 += 32;
				}
				if (iVar12 < 32 && iVar12 > -32)
				{
					iVar12 = 0;
				}
				else if (iVar12 < 0)
				{
					iVar12 = (iVar12 - 32);
				}
				else
				{
					iVar12 += 32;
				}
			}
			iVar11 = (iVar11 * -1);
			iVar12 = (iVar12 * -1);
			if (PAD::IS_LOOK_INVERTED())
			{
				iVar12 = (iVar12 * -1);
			}
			Var1.f_0 = (Var1.f_0 + (IntToFloat(iVar12) * 0.05f));
			Var1.f_2 = (Var1.f_2 + (IntToFloat(iVar11) * 0.1f));
			while (Var1.f_2 < -180f)
			{
				Var1.f_2 = (Var1.f_2 + 360f);
			}
			while (Var1.f_2 > 180f)
			{
				Var1.f_2 = (Var1.f_2 - 360f);
			}
			while (Var0.f_2 < -180f)
			{
				Var0.f_2 = (Var0.f_2 + 360f);
			}
			while (Var0.f_2 > 180f)
			{
				Var0.f_2 = (Var0.f_2 - 360f);
			}
			fVar13 = (Var1.f_2 - Var0.f_2);
			fVar14 = __LIB_38__::func_414(fVar13, -180f, 180f);
			Var2 = { Var0 + Var1 - Var0 * Vector(0.25f, 0.25f, 0.25f) };
			Var2.f_2 = (Var0.f_2 + (fVar14 * 0.25f));
		}
		while (Var2.f_2 < -180f)
		{
			Var2.f_2 = (Var2.f_2 + 360f);
		}
		while (Var2.f_2 > 180f)
		{
			Var2.f_2 = (Var2.f_2 - 360f);
		}
		CAM::SET_CAM_ROT(iParam0, Var2, 2);
	}
}

void func_449()//Position - 0x5010
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && __LIB_0__::func_494(1, 0, 1)) && iLocal_51)
		{
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
}

char* func_450()//Position - 0x1359
{
	char* sVar0;
	switch (iLocal_55)
	{
		case joaat("prop_bong_01"):
			if (bLocal_49)
			{
				sVar0 = "safe@franklin@ig_10";
			}
			else
			{
				sVar0 = "safe@michael@ig_4";
			}
			break;
		case joaat("prop_cigar_03"):
			sVar0 = "safe@michael@ig_3";
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "safe@franklin@ig_9";
			break;
		case joaat("p_cs_joint_01"):
			sVar0 = "safe@franklin@ig_13";
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (!Global_78319)
			{
				if (bLocal_50)
				{
					sVar0 = "safe@trevor@ig_6";
				}
				else
				{
					sVar0 = "safe@michael@ig_1";
				}
			}
			else
			{
				sVar0 = "MP_SAFEHOUSEWHISKEY@";
			}
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "safe@trevor@ig_8";
			break;
		case joaat("prop_mr_raspberry_01"):
			sVar0 = "safe@trevor@ig_7";
			break;
		case joaat("prop_radio_01"):
			if (bLocal_50)
			{
				sVar0 = "safe@trevor@ig_5";
			}
			else
			{
				sVar0 = "safe@michael@ig_5";
			}
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "safe@michael@ig_2";
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "safe@franklin@ig_11";
			break;
	}
	return sVar0;
}

Vector3 func_451()//Position - 0x1953
{
	struct<3> Var0;
	switch (iLocal_55)
	{
		case joaat("prop_bong_01"):
			if (bLocal_49)
			{
				Var0 = { 9.95f, 528.9f, 173.6282f };
			}
			else
			{
				Var0 = { -807.5781f, 171.357f, 75.7407f };
			}
			break;
		case joaat("prop_cigar_03"):
			Var0 = { -805.881f, 173.8548f, 71.8347f };
			break;
		case joaat("prop_cs_beer_bot_01"):
			Var0 = { -9.66f, -1429.48f, 31.21f };
			break;
		case joaat("p_cs_joint_01"):
			Var0 = { -10.6378f, -1441.3145f, 30.1015f };
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_50)
			{
				Var0 = { -1154.343f, -1522.5997f, 9.6327f };
			}
			else
			{
				Var0 = { -800.4056f, 183.4856f, 71.6055f };
			}
			break;
		case joaat("prop_rolled_sock_02"):
			Var0 = { 1972.1417f, 3813.243f, 32.4271f };
			break;
		case joaat("prop_mr_raspberry_01"):
			Var0 = { -1145.91f, -1514.9445f, 9.6327f };
			break;
		case joaat("prop_radio_01"):
			Var0 = { 1976.94f, 3821.2417f, 33.3266f };
			break;
		case joaat("p_w_grass_gls_s"):
			Var0 = { -804.2254f, 184.3325f, 72.6042f };
			break;
		case joaat("p_wine_glass_s"):
			Var0 = { -8.8011f, 515.7225f, 173.6282f };
			break;
	}
	return Var0;
}

Vector3 func_452()//Position - 0x2148
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case joaat("prop_bong_01"):
			if (!bLocal_49)
			{
				Var0 = { 0f, 0f, -68.75494f };
			}
			else
			{
				Var0 = { 0f, 0f, -179.90875f };
			}
			break;
		case joaat("prop_cigar_03"):
			Var0 = { 0f, 0f, 21.1994f };
			break;
		case joaat("prop_cs_beer_bot_01"):
			Var0 = { 0f, 0f, -128.34f };
			break;
		case joaat("p_cs_joint_01"):
			Var0 = { 0f, 0f, 0.5729f };
			break;
		case joaat("prop_rolled_sock_02"):
			Var0 = { 0f, 0f, 2.8647f };
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_50)
			{
				Var0 = { 0f, 0f, 34.9504f };
			}
			else
			{
				Var0 = { 0f, 0f, 21.1994f };
			}
			break;
		case joaat("prop_mr_raspberry_01"):
			Var0 = { 0f, 0f, 72.76564f };
			break;
		case joaat("prop_radio_01"):
			Var0 = { 0f, 0f, -9.1673f };
			break;
		case joaat("p_w_grass_gls_s"):
			Var0 = { 0f, 0f, 21.1994f };
			break;
		case joaat("p_wine_glass_s"):
			Var0 = { 0f, 0f, -29.793f };
			break;
	}
	return Var0;
}

Vector3 func_453()//Position - 0x225D
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case joaat("prop_bong_01"):
			if (!bLocal_49)
			{
				Var0 = { -806.82f, 170.03f, 75.74f };
			}
			else
			{
				Var0 = { 10.22f, 527.73f, 174.11f };
			}
			break;
		case joaat("prop_cigar_03"):
			Var0 = { -805.17f, 173.99f, 72.69f };
			break;
		case joaat("prop_cs_beer_bot_01"):
			Var0 = { -9.66f, -1429.48f, 31.21f };
			break;
		case joaat("p_cs_joint_01"):
			Var0 = { -10.07f, -1440.64f, 30.36f };
			break;
		case joaat("prop_rolled_sock_02"):
			Var0 = { 1972.852f, 3812.42f, 33.28f };
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_50)
			{
				Var0 = { -1153.829f, -1523.314f, 10.56f };
			}
			else
			{
				Var0 = { -800.68f, 184.18f, 72.55f };
			}
			break;
		case joaat("prop_mr_raspberry_01"):
			Var0 = { -1146.284f, -1514.1305f, 10.8468f };
			break;
		case joaat("prop_radio_01"):
			Var0 = { 1976.75f, 3822.76f, 33.28f };
			break;
		case joaat("p_w_grass_gls_s"):
			Var0 = { -804.87f, 185.69f, 72.75f };
			break;
		case joaat("p_wine_glass_s"):
			Var0 = { -9.1f, 516.83f, 173.62f };
			break;
	}
	return Var0;
}

int func_454()//Position - 0x27D9
{
	switch (iLocal_55)
	{
		case joaat("prop_cigar_03"):
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.17f, 173.98f, 72.69f, 0.1f, joaat("prop_cigar_03"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.17f, 173.98f, 72.69f, 0.1f, joaat("prop_cigar_03"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.13f, 173.86f, 72.68f, 0.1f, joaat("p_cs_lighter_01"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.13f, 173.86f, 72.68f, 0.1f, joaat("p_cs_lighter_01"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.09f, 173.83f, 72.68f, 0.1f, joaat("prop_ashtray_01"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.13f, 173.86f, 72.68f, 0.1f, joaat("prop_ashtray_01"), false, false, true), true);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-804.45f, 172.78f, 72.33f, 0.1f, joaat("prop_cs_remote_01"), false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-804.45f, 172.78f, 72.33f, 0.1f, joaat("prop_cs_remote_01"), false, false, true), true);
							return 1;
						}
					}
				}
			}
			break;
		case joaat("prop_cs_beer_bot_01"):
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				return 1;
			}
			break;
		case joaat("p_wine_glass_s"):
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-8.9f, 517.01f, 174f, 1f, joaat("prop_wine_bot_01"), false))
			{
				return 1;
			}
			break;
		case joaat("p_cs_joint_01"):
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("p_cs_joint_01"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("p_cs_joint_01"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("p_cs_lighter_01"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("p_cs_lighter_01"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("prop_ashtray_01"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, joaat("prop_ashtray_01"), false, false, true), true);
						return 1;
					}
				}
			}
			break;
		case joaat("p_tumbler_02_s1"):
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_02_s1"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_02_s1"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.57f, 0.5f, joaat("p_tumbler_02_s1"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.57f, 0.5f, joaat("p_tumbler_02_s1"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
					return 1;
				}
			}
			break;
		case joaat("p_tumbler_cs2_s"):
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_cs2_s"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_cs2_s"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_tumbler_cs2_s"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_tumbler_cs2_s"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
					return 1;
				}
			}
			break;
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_cs2_s_trev"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_tumbler_cs2_s_trev"), false, false, true), true);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_tumbler_cs2_s"), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_tumbler_cs2_s"), false, false, true), true);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, joaat("p_whiskey_bottle_s"), false, false, true), true);
					return 1;
				}
			}
			break;
		case joaat("prop_radio_01"):
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(1976.92f, 3821.21f, 33.32f, 0.5f, joaat("prop_cs_beer_bot_01"), false))
			{
				return 1;
			}
			break;
		case joaat("p_w_grass_gls_s"):
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_56, true);
				return 1;
			}
			break;
	}
	return 0;
}

char* func_455()//Position - 0x36EE
{
	char* sVar0;
	switch (iLocal_55)
	{
		case joaat("prop_bong_01"):
			if (bLocal_49)
			{
				sVar0 = "SAFEHOUSE_FRANKLIN_USE_BONG";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_USE_BONG";
			}
			break;
		case joaat("p_tumbler_02_s1"):
		case joaat("p_tumbler_cs2_s"):
		case joaat("p_tumbler_cs2_s_trev"):
			if (bLocal_50)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		case joaat("prop_radio_01"):
			if (bLocal_50)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_BEER";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_BEER";
			}
			break;
		case joaat("prop_cs_beer_bot_01"):
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			break;
		case joaat("prop_rolled_sock_02"):
			sVar0 = "SAFEHOUSE_TREVOR_GAS";
			break;
		case joaat("prop_mr_raspberry_01"):
			sVar0 = "SAFEHOUSE_TREVOR_RASBERRY";
			break;
		case joaat("p_w_grass_gls_s"):
			sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
			break;
		case joaat("p_wine_glass_s"):
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_WINE";
			break;
		case joaat("prop_cigar_03"):
			sVar0 = "SAFEHOUSE_MICHAEL_SIT_SOFA";
			break;
		case joaat("p_cs_joint_01"):
			sVar0 = "SAFEHOUSE_FRANKLIN_SOFA";
			break;
	}
	return sVar0;
}

int func_456(struct<3> Param0, float fParam1, var uParam2, var uParam3)//Position - 0x2E16
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, Param0, 2f))
			{
				if ((((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !__LIB_0__::func_77(0)) && !__LIB_38__::func_446())
				{
					if ((Global_97369 && Global_97370) || __LIB_13__::func_94())
					{
						return 0;
					}
					if (__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0, fParam1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_457(int iParam0)//Position - 0x344
{
	iLocal_49 = iParam0;
}

void func_458()//Position - 0x350
{
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
	iLocal_62++;
}

void func_459(int iParam0)//Position - 0x36F
{
	switch (iParam0)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
	}
}

int func_460()//Position - 0x4F9C2
{
	switch (iLocal_48)
	{
		case 1:
			return -39155154;
			break;
		case 2:
			return 495696637;
			break;
		case 3:
			return -1759425697;
			break;
		case 4:
			return -170794633;
			break;
		case 5:
			return -1057477663;
			break;
		case 6:
			return 1679847771;
			break;
		case 7:
			return 1896232088;
			break;
		case 8:
			return 1232090783;
			break;
	}
	return joaat("soda");
}

int func_461()//Position - 0x4FA5E
{
	switch (iLocal_48)
	{
		case 1:
			return 1579372914;
			break;
		case 2:
			return -501748261;
			break;
		case 3:
			return -1759425697;
			break;
		case 4:
			return -170794633;
			break;
		case 5:
			return -1057477663;
			break;
		case 6:
			return 1679847771;
			break;
		case 7:
			return 1896232088;
			break;
		case 8:
			return 1232090783;
			break;
	}
	return joaat("soda");
}

int func_462(int iParam0)//Position - 0x516B7
{
	if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0) == MISC::GET_HASH_KEY("V_7_RecAreaRm") || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0) == MISC::GET_HASH_KEY("V_7_GunSHopRm"))
	{
		if (OBJECT::IS_OBJECT_NEAR_POINT(joaat("v_ret_gc_chair02"), Local_64, 1f))
		{
			return 1;
		}
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x517E1
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_123 /* Tunable: VENDING_MACHINE_ECOLA_CAN_COST */;
			break;
		case 2:
			return Global_262145.f_122 /* Tunable: VENDING_MACHINE_SPRUNK_CAN_COST */;
			break;
		case 8:
			return 1;
			break;
	}
	return 1;
}

int func_464()//Position - 0x51822
{
	if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMOKEGRENADE"), 0))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		return 1;
	}
	return 0;
}

int func_465(int iParam0)//Position - 0x51872
{
	switch (iParam0)
	{
		case 1:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_50, "NULL"))
			{
				sLocal_50 = "MINI@SPRUNK@FIRST_PERSON";
			}
			break;
		case 2:
			if (MISC::ARE_STRINGS_EQUAL(sLocal_50, "NULL"))
			{
				sLocal_50 = "MINI@SPRUNK@FIRST_PERSON";
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
	sLocal_50 = "MINI@SPRUNK@FIRST_PERSON";
	STREAMING::REQUEST_ANIM_DICT(sLocal_50);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_50))
	{
		AUDIO::HINT_AMBIENT_AUDIO_BANK("VENDING_MACHINE", 0, -1);
		return 1;
	}
	return 0;
}

void func_466()//Position - 0x4C99D
{
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 322, true);
	}
	__LIB_0__::func_189();
}

int func_467()//Position - 0x4E96E
{
	if (__LIB_3__::func_559())
	{
		switch (__LIB_3__::func_648())
		{
			case 0:
				return 1724876706;
			case 1:
				return 1982735967;
			case 2:
				return -1000127800;
			case 3:
				return -1314120358;
			case 4:
				return -1088178103;
			case 5:
				return -1434448122;
			case 6:
				return -1191597063;
			case 7:
				return 104089197;
			case 8:
				return 343466742;
			case 9:
				return -769698924;
			case 10:
				return -966902766;
			case 11:
				return -40752519;
			case 12:
				return -473172243;
			case 13:
				return 2032542159;
			case 14:
				return -1906095031;
			case 15:
				return 1437555426;
			case 16:
				return 1799194110;
			case 17:
				return 926948868;
			case 18:
				return 1167833787;
			case 19:
				return -705800814;
			case 20:
				return -1012354809;
			case 21:
				return -1184260983;
			case 22:
				return 1667011453;
			case 23:
				return -1336367741;
			case 24:
				return 461690478;
			case 25:
				return 633602170;
			case 26:
				return 382299359;
			case 27:
				return 514984485;
			case 28:
				return 2026616426;
			case 29:
				return 1937966701;
			case 30:
				return 1483138495;
			case 31:
				return 581469341;
			case 32:
				return 1367863248;
			case 33:
				return -955854113;
			case 34:
				return 1645306762;
			case 35:
				return 1245301093;
			case 36:
				return 1021557011;
			case 37:
				return -82296078;
			case 38:
				return 1025163021;
			case 39:
				return 1356841255;
			case 40:
				return -290713001;
			case 41:
				return 1327259012;
			case 42:
				return -581129697;
			case 43:
				return 282957256;
			case 44:
				return 1829228597;
			case 45:
				return -873601614;
			case 46:
				return -1409539033;
			case 47:
				return 1107449663;
			case 48:
				return -578575258;
			case 49:
				return -1615949921;
			case 50:
				return 1438364678;
			case 51:
				return 1894496992;
			case 52:
				return 1779427560;
			case 53:
				return -1039460533;
			case 54:
				return -195724321;
			case 55:
				return 500911854;
			case 56:
				return 811797203;
			case 57:
				return -1666058893;
			case 58:
				return -1254748295;
			case 59:
				return -74418006;
			case 60:
				return -1288625515;
			case 61:
				return -563447545;
			case 62:
				return -857909779;
			case 63:
				return -100978648;
			case 64:
				return -399963004;
			case 65:
				return 393210641;
			case 66:
				return 95995811;
			case 67:
				return 280616361;
			case 68:
				return 1095548622;
			case 69:
				return 1346361163;
			case 70:
				return -993934258;
			case 71:
				return 210686951;
			case 72:
				return -1438314667;
			case 73:
				return -324692967;
			case 74:
				return -10241643;
			case 75:
				return -1170821316;
			case 76:
				return 450916494;
			case 77:
				return 936323691;
			case 78:
				return 2057381171;
			case 79:
				return 1759936958;
			case 80:
				return -1640240024;
			case 81:
				return -1511801648;
			case 82:
				return -655658513;
			case 83:
				return 795256712;
			case 84:
				return 480641543;
			case 85:
				return -1946001214;
			case 86:
				return -2128262392;
			case 87:
				return -1871844971;
			case 88:
				return 836640245;
			case 89:
				return -486180020;
			case 90:
				return -715989017;
			case 91:
				return 2125083299;
			case 92:
				return 1887344204;
			case 93:
				return 900341924;
			case 94:
				return 855448394;
			case 95:
				return 1700200445;
			case 96:
				return 1415601680;
			case 97:
				return -1514610710;
			case 98:
				return -865660159;
			case 99:
				return -710818203;
			case 100:
				return -324709170;
			case 101:
				return 1949842877;
			case 102:
				return 111057774;
			case 103:
				return 1198579449;
			case 104:
				return 74679616;
			case 105:
				return -1559756325;
			case 106:
				return -1872962088;
			case 107:
				return 847468838;
			case 108:
				return 1336326193;
			case 109:
				return 2113184722;
			case 110:
				return -1608416417;
			case 111:
				return -1509790000;
			case 112:
				return -1838126805;
			case 113:
				return -326940911;
			case 114:
				return -1495094806;
			case 115:
				return -1310879307;
			case 116:
				return -1775580872;
			case 117:
				return 2142816302;
			case 118:
				return 407841190;
			case 119:
				return -1174108047;
			case 120:
				return -56828153;
			case 121:
				return 1049670410;
			case 122:
				return -1567932215;
			case 123:
				return -84733279;
			case 124:
				return -2078011960;
			case 125:
				return 587814291;
			case 126:
				return -1707895473;
			case 127:
				return 1044377337;
			case 128:
				return -10997558;
			case 129:
				return -1738076238;
			case 130:
				return 1384669232;
			case 131:
				return -272691340;
			case 132:
				return 1669090008;
			case 133:
				return 1070552029;
			case 134:
				return -479073127;
			case 135:
				return 625933566;
			case 136:
				return -1566014872;
			case 137:
				return -1529906855;
			case 138:
				return -12273405;
			case 139:
				return 676388544;
			case 140:
				return -107904702;
			case 141:
				return -1390811056;
			case 142:
				return -1621078819;
			case 143:
				return -911367813;
			case 144:
				return -1326444720;
			case 145:
				return -129753564;
			case 146:
				return -765042571;
			case 147:
				return 94523690;
			case 148:
				return 1588517932;
			case 149:
				return -1541257485;
			case 150:
				return -1094638582;
			case 151:
				return -1302161538;
			case 152:
				return 1908505157;
			case 153:
				return 1162271008;
			case 154:
				return -379629017;
			case 155:
				return -1829134495;
			case 156:
				return 1514855350;
			case 157:
				return 546654847;
			case 158:
				return -962539115;
			default:
		}
	}
	else if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 != -1)
	{
		switch (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)
		{
			case 1:
				return -235585621;
			case 2:
				return -1778874445;
			case 3:
				return -1012767994;
			case 4:
				return -110375272;
			case 5:
				return -1490179555;
			case 6:
				return -1866662656;
			case 7:
				return 1596922341;
			case 8:
				return -1098591595;
			case 9:
				return 1941191921;
			case 10:
				return 1660590974;
			case 11:
				return 135194024;
			case 12:
				return -177455005;
			case 13:
				return -1500699994;
			case 14:
				return -1714550488;
			case 15:
				return 443386481;
			case 16:
				return 1359607721;
			case 17:
				return -949403353;
			case 18:
				return 1372902908;
			case 19:
				return -2140097737;
			case 20:
				return 1971494235;
			case 21:
				return -1546946068;
			case 22:
				return 172443362;
			case 23:
				return 963061025;
			case 24:
				return -1608705160;
			case 25:
				return -846039458;
			case 26:
				return -1689742901;
			case 27:
				return -111718937;
			case 28:
				return 115927306;
			case 29:
				return -726563684;
			case 30:
				return -495181775;
			case 31:
				return 871973682;
			case 32:
				return -851707021;
			case 33:
				return -628812283;
			case 34:
				return 743552043;
			case 35:
				return 2055983262;
			case 36:
				return 885174719;
			case 37:
				return 553880129;
			case 38:
				return 1449522437;
			case 39:
				return 1152340376;
			case 40:
				return -68304926;
			case 41:
				return -375121073;
			case 42:
				return -1598092922;
			case 43:
				return 242607346;
			case 44:
				return -409294202;
			case 45:
				return -1002871868;
			case 46:
				return -1182052760;
			case 47:
				return -1800239945;
			case 48:
				return 1629756831;
			case 49:
				return -1903036294;
			case 50:
				return -1129229128;
			case 51:
				return 1785933885;
			case 52:
				return -528148392;
			case 53:
				return -35073249;
			case 54:
				return -199311477;
			case 55:
				return -1417171374;
			case 56:
				return -1705636881;
			case 57:
				return -291325929;
			case 58:
				return 881935347;
			case 59:
				return 1150739454;
			case 60:
				return 367920813;
			case 61:
				return 938372595;
			case 62:
				return 692342943;
			case 63:
				return 875751040;
			case 64:
				return 598230379;
			case 65:
				return 1893982177;
			case 66:
				return 195842304;
			case 67:
				return 493089903;
			case 68:
				return -1488451543;
			case 69:
				return -1183798150;
			case 70:
				return -1751870726;
			case 71:
				return -979046630;
			case 72:
				return -1292154425;
			case 73:
				return 1159477686;
			case 74:
				return -399886503;
			case 75:
				return 1142797323;
			case 76:
				return -1211359061;
			case 77:
				return -1698418196;
			case 78:
				return 2029324957;
			case 79:
				return 762181335;
			case 80:
				return -109600161;
			case 81:
				return -641739259;
			case 82:
				return 193299361;
			case 83:
				return 1189549138;
			case 84:
				return -622755979;
			case 85:
				return 1688113905;
			case 86:
				return 567380244;
			case 87:
				return -1873528241;
			case 88:
				return -847028011;
			case 89:
				return -743685890;
			case 90:
				return 305643048;
			case 91:
				return 2039477689;
			case 92:
				return 500613685;
			case 93:
				return 2005249255;
			case 94:
				return -311478995;
			case 95:
				return -1236177155;
			case 96:
				return 1991604288;
			case 97:
				return 1959457521;
			case 98:
				return -944248713;
			case 99:
				return -1633459647;
			case 100:
				return -399620041;
			case 101:
				return 1515968078;
			case 102:
				return -1151418522;
			case 103:
				return 130162378;
			case 104:
				return 1757667548;
			case 105:
				return 1595723150;
			case 106:
				return -1342409411;
			case 107:
				return 1824059063;
			case 108:
				return 981142076;
			case 109:
				return -509536475;
			case 110:
				return 266728366;
			case 111:
				return -1787887930;
			case 112:
				return -194403481;
			case 113:
				return -427030612;
			case 114:
				return 1472916008;
			case 115:
				return 1234140451;
			case 116:
				return 900097272;
			case 117:
				return 1154801857;
			case 118:
				return 259148385;
			case 119:
				return -1279583612;
			case 120:
				return -441254285;
			case 121:
				return -948452867;
			case 122:
				return 1860667748;
			case 123:
				return 941398991;
			case 124:
				return -1972027265;
			case 125:
				return -211967101;
			case 126:
				return 562246438;
			case 127:
				return -1231279487;
			case 128:
				return -1522990056;
			}
		default:
	}
	if (__LIB_3__::func_533(PLAYER::PLAYER_ID()))
	{
		return -1839503988;
	}
	return joaat("freemode");
}

void func_468()//Position - 0x5216A
{
	if (BitTest(uLocal_74, 0))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
		MISC::CLEAR_BIT(&uLocal_74, 0);
	}
	if (iLocal_51)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (!MISC::ARE_STRINGS_EQUAL(sLocal_50, "NULL"))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_50);
		if (iLocal_72 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72);
		}
		AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
		__LIB_3__::func_422(&iLocal_63);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_55))
	{
		ENTITY::DETACH_ENTITY(iLocal_55, true, true);
		OBJECT::DELETE_OBJECT(&iLocal_55);
	}
	if (Global_78319)
	{
		if (Global_32214)
		{
			__LIB_1__::func_91();
		}
	}
	Global_32214 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8)//Position - 0x4E6DE
{
	bool bVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = false;
	if (Global_1888831)
	{
		if (Global_1888831.f_3.f_6 != iParam1)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3 != iParam0)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_3 != iParam4)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_5 != iParam2)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_1 != iParam5)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_4 != iParam7)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_9 != iParam6)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_2 != __LIB_3__::func_680())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		__LIB_0__::func_467(&(Global_1888831.f_3));
		STATS::PLAYSTATS_INVENTORY(&(Global_1888831.f_3));
		__LIB_4__::func_852();
	}
	Global_1888831 = 1;
	Global_1888831.f_3 = iParam0;
	if (__LIB_1__::func_526())
	{
		Global_1888831.f_3.f_2 = __LIB_3__::func_680();
	}
	Global_1888831.f_3.f_6 = iParam1;
	Global_1888831.f_3.f_5 = iParam2;
	Global_1888831.f_3.f_7 = (Global_1888831.f_3.f_7 + iParam3);
	Global_1888831.f_3.f_3 = iParam4;
	Global_1888831.f_3.f_8 = uParam8;
	Global_1888831.f_3.f_1 = iParam5;
	Global_1888831.f_3.f_4 = iParam7;
	Global_1888831.f_3.f_9 = iParam6;
	__LIB_0__::func_794(&(Global_1888831.f_1));
	__LIB_0__::func_795(&(Global_1888831.f_1), 0, 0);
}

void func_470()//Position - 0x51A23
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bLocal_75 = true;
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		__LIB_0__::func_895(0, -1, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
}

void func_471(int iParam0)//Position - 0x51B6C
{
	iLocal_72 = joaat("prop_ld_can_01b");
	Local_67 = { 0.6f, 0.6f, 1f };
	Local_68 = { 0f, -0.97f, 0.05f };
	Local_65 = { 0f, -0.97f, 0.05f };
	iLocal_71 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (__LIB_13__::func_170(PLAYER::PLAYER_ID()))
	{
		Local_67 = { 0.6f, 0.3f, 1f };
		Local_68 = { 0f, -0.65f, 0.05f };
	}
	switch (iLocal_71)
	{
		case joaat("prop_vend_soda_01"):
			iLocal_48 = 1;
			if (Global_262145.f_32732 /* Tunable: 904946003 */)
			{
				iLocal_72 = joaat("prop_ecola_can");
			}
			break;
		case joaat("prop_vend_soda_02"):
			iLocal_48 = 2;
			break;
		case joaat("prop_vend_coffe_01"):
			iLocal_48 = 3;
			break;
		case joaat("prop_vend_condom_01"):
			iLocal_48 = 4;
			break;
		case joaat("prop_vend_fags_01"):
			iLocal_48 = 5;
			break;
		case joaat("prop_vend_snak_01"):
			iLocal_48 = 6;
			break;
		case joaat("prop_vend_water_01"):
			iLocal_48 = 7;
			break;
		case joaat("sf_prop_sf_vend_drink_01a"):
			iLocal_48 = 8;
			iLocal_72 = joaat("sf_prop_sf_can_01a");
			Local_65 = { 0f, -0.97f, 1f };
			Local_68 = { 0f, -0.65f, 0.9f };
			break;
	}
	Local_66 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_68) };
	Local_64 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_65) };
}

int func_472()//Position - 0x514F8
{
	if (Global_78319)
	{
		if (__LIB_1__::func_833(1) > 0)
		{
			return 1;
		}
	}
	else if (__LIB_12__::func_295(__LIB_0__::func_683()) > 0)
	{
		return 1;
	}
	return 0;
}

int func_473(struct<3> Param0, int iParam1, int iParam2)//Position - 0x68D2
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	fVar0 = 100f;
	iVar1 = 50;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

void func_474(var uParam0, int iParam1, int iParam2)//Position - 0x5584
{
	if (__LIB_1__::func_13(&(uParam0->f_1)))
	{
		__LIB_1__::func_12(&(uParam0->f_1));
	}
	if (__LIB_1__::func_13(&(uParam0->f_4)))
	{
		__LIB_1__::func_12(&(uParam0->f_4));
	}
	__LIB_2__::func_540(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_475(int iParam0, int iParam1)//Position - 0x9057A
{
	__LIB_2__::func_271(iParam0, iParam1);
}

void func_476(var uParam0)//Position - 0x93805
{
	__LIB_16__::func_745(*uParam0);
}

void func_477(int iParam0, bool bParam1, int iParam2)//Position - 0xD800
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
	__LIB_0__::func_366(0);
	__LIB_37__::func_289(1, 1, iParam2, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	__LIB_12__::func_849(23, 1);
}

void func_478(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x97DC
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_0__::func_345(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	__LIB_17__::func_116(uParam0, Param1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_479(int iParam0)//Position - 0x12A6
{
	iLocal_40 = iParam0;
	iLocal_41 = 0;
}

int func_480(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x309B5
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Param0.f_0, Param0.f_1, Param2.f_0, Param2.f_1))
	{
		return 1;
	}
	return 0;
}

void func_481(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x30A50
{
	struct<3> Var0;
	struct<3> Var1;
	if (Param2.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param2.f_0;
		Var1.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var1.f_0 = Param2.f_0;
	}
	if (Param2.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param2.f_1;
		Var1.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var1.f_1 = Param2.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	Var1 = { Var1 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	if (!__LIB_0__::func_490(Var0, *uParam4, 1056964608, 0) || !__LIB_0__::func_490(Var0, *uParam4, 1056964608, 0))
	{
		*uParam4 = { Var0 };
		*uParam5 = { Var1 };
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(*uParam4, uParam4->f_1, *uParam5, uParam5->f_1);
}

void func_482(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x3D29D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, Var0) };
	fVar3 = SYSTEM::VDIST(Var0, Var1);
	fVar4 = 0f;
	fVar5 = (fParam11 - 1f);
	fVar6 = (1f - fParam9);
	if (Var2.f_1 < 1f)
	{
		if (fVar3 > fParam5)
		{
			iVar7 = 0;
			if (fVar3 > fParam6)
			{
				if (fVar3 > (fParam6 * 2f))
				{
					iVar7 = 1;
				}
				fVar3 = fParam6;
			}
			fVar4 = ((fVar3 - fParam5) / (fParam6 - fParam5));
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2) || iVar7)
			{
				*uParam0 = (fParam9 - ((fParam9 - fParam10) * fVar4));
			}
			else
			{
				*uParam0 = fParam9;
			}
		}
		else if (fVar3 > fParam4)
		{
			fVar4 = ((fVar3 - fParam4) / (fParam5 - fParam4));
			*uParam0 = (1f - (fVar6 * fVar4));
		}
		else
		{
			if (fVar3 < fParam3)
			{
				fVar3 = fParam3;
			}
			fVar4 = ((fParam4 - fVar3) / (fParam4 - fParam3));
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
			{
				*uParam0 = (1f + ((fVar4 * fVar5) * 2f));
			}
			else
			{
				*uParam0 = (1f + (fVar4 * fVar5));
			}
		}
	}
	else
	{
		if (fVar3 > fParam7)
		{
			fVar3 = fParam7;
		}
		fVar4 = (fVar3 / fParam7);
		fVar8 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(*iParam1));
		if (fVar8 > 0f)
		{
			fVar4 = (fVar4 * 0.5f);
		}
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
		{
			*uParam0 = (2f + fVar4);
		}
		else if (ENTITY::GET_ENTITY_SPEED(*iParam1) < 5f && fVar8 > 0f)
		{
			*uParam0 = (0.6f + fVar4);
		}
		else
		{
			*uParam0 = (1f + fVar4);
		}
	}
	*uParam0 = (*uParam0 * fParam8);
	if (bParam12)
	{
		fVar9 = fParam13;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*uParam0 > 1f)
		{
			fVar9 = (fParam13 + ((fParam14 - fParam13) * (*uParam0 - 1f)));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*iParam1, -fVar9);
	}
}

void func_483(int iParam0)//Position - 0x44DF
{
	struct<3> Var0;
	float fVar1;
	Var0 = { 0f, 0f, 0f };
	fVar1 = 0f;
	if (__LIB_0__::func_121(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			while (!PATHFIND::GET_SAFE_COORD_FOR_PED(Var0, false, &Var0, 0))
			{
				SYSTEM::WAIT(0);
				Var0.f_0 = (Var0.f_0 + 2f);
			}
			fVar1 = ENTITY::GET_ENTITY_HEADING(iParam0);
			__LIB_38__::func_295(iParam0, Var0, fVar1, 1, 1);
		}
	}
}

void func_484(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2EA58
{
	bool bVar0;
	if (__LIB_0__::func_692(*iParam0))
	{
		bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(*iParam0);
		if (bVar0)
		{
			AUDIO::STOP_PED_SPEAKING(*iParam0, false);
		}
		__LIB_0__::func_709(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			AUDIO::STOP_PED_SPEAKING(*iParam0, true);
		}
	}
}

void func_485(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x487DA
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	if (Global_78573 != 6)
	{
		if (Global_78575 == -1)
		{
			if (__LIB_14__::func_848(1, Param0))
			{
				if (Global_78576 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_33 > fVar0)
				{
					Global_78575 = MISC::GET_GAME_TIMER();
					Local_34 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_33 = 0f;
				}
				else
				{
					fLocal_33 = (fLocal_33 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_33 = 0f;
			}
		}
		else
		{
			if (!__LIB_14__::func_848(0, Param0))
			{
				Global_78575 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_78575);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_78573)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = __LIB_0__::func_683();
				if (Global_78576 == 1 && Global_78574 == 62)
				{
					iVar11 = Global_113386.f_2363.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { __LIB_14__::func_835(Global_78574, Global_78576, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_36 = 0.14f;
				}
				else
				{
					fLocal_36 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (__LIB_0__::func_95(&Var4) > fLocal_36)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_34.f_0, (Local_34.f_1 + fLocal_35));
							Global_78578 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_78577 == 1)
				{
					__LIB_0__::func_55();
					fLocal_33 = 0f;
				}
			}
			else
			{
				__LIB_0__::func_55();
				fLocal_33 = 0f;
			}
		}
	}
}

int func_486(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x48082
{
	if (iParam5 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (__LIB_14__::func_535(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_487()//Position - 0x4AFB7
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-74.8392f, 300.5241f, 104f, -62.467f, 318.6961f, 109f, false, true, true, true);
}

void func_488(int iParam0)//Position - 0x284B1
{
	iLocal_41 = iParam0;
	iLocal_42 = 0;
}

void func_489(int iParam0)//Position - 0x3CC18
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8138, 4);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8138, 4);
	}
}

void func_490(var uParam0, int iParam1)//Position - 0x29E85
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, uParam0->f_1, uParam0->f_4, true, true, false);
	}
	if (iParam1 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
	}
}

int func_491(var uParam0)//Position - 0x43446
{
	uParam0->f_16 = 3;
	uParam0->f_17[0 /*3*/] = { 1040.96f, -534.42f, 60.17f };
	uParam0->f_15 = 90f;
	uParam0->f_27 = 1;
	return 1;
}

int func_492(int iParam0)//Position - 0x283B3
{
	int iVar0;
	iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 5f, 0f), 1.5f, 0, 4);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!iVar0 == iParam0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_493(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28650
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	iVar2 = __LIB_37__::func_959(iParam0, iParam1);
	if (!__LIB_0__::func_121(iParam0) || !__LIB_0__::func_121(iParam1))
	{
		if (iVar2 != -1)
		{
			__LIB_13__::func_439(&(Local_50[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!__LIB_14__::func_736(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = __LIB_37__::func_958();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_50[iVar2 /*4*/].f_1 = iParam0;
		Local_50[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = __LIB_37__::func_961(&(Local_50[iVar2 /*4*/]), Var1, iParam1, &(Local_50[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_50[iVar2 /*4*/].f_3) < iParam4);
}

void func_494(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2BD48
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	__LIB_0__::func_532(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	HUD::CLEAR_HELP(true);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_49 != 0 && iLocal_49 != joaat("OBJECT")) && iLocal_49 != joaat("GADGET_PARACHUTE"))
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_49, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_49, false);
				}
			}
		}
	}
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
}

void func_495(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DAB8
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	if (Global_78573 != 6)
	{
		if (Global_78575 == -1)
		{
			if (__LIB_14__::func_848(1, Param0))
			{
				if (Global_78576 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_24 > fVar0)
				{
					Global_78575 = MISC::GET_GAME_TIMER();
					Local_25 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_24 = 0f;
				}
				else
				{
					fLocal_24 = (fLocal_24 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_24 = 0f;
			}
		}
		else
		{
			if (!__LIB_14__::func_848(0, Param0))
			{
				Global_78575 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_78575);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_78573)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = __LIB_0__::func_683();
				if (Global_78576 == 1 && Global_78574 == 62)
				{
					iVar11 = Global_113386.f_2363.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { __LIB_14__::func_835(Global_78574, Global_78576, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_27 = 0.14f;
				}
				else
				{
					fLocal_27 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (__LIB_0__::func_95(&Var4) > fLocal_27)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_25.f_0, (Local_25.f_1 + fLocal_26));
							Global_78578 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_78577 == 1)
				{
					__LIB_0__::func_55();
					fLocal_24 = 0f;
				}
			}
			else
			{
				__LIB_0__::func_55();
				fLocal_24 = 0f;
			}
		}
	}
}

int func_496()//Position - 0x190A
{
	int iVar0;
	int iVar1;
	if (Global_262145.f_26775 /* Tunable: RCTIMETRIALVARIATION */ > -1 && Global_262145.f_26775 /* Tunable: RCTIMETRIALVARIATION */ < 10)
	{
		return Global_262145.f_26775 /* Tunable: RCTIMETRIALVARIATION */;
	}
	iVar0 = Global_2815059.f_5026;
	if (iVar0 == -1)
	{
		iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_262145.f_26776 /* Tunable: RC_TIME_TRIAL_START_TIME */);
		if (iVar1 < 0)
		{
			iVar1 = MISC::ABSI(iVar1);
		}
		iVar1 = (iVar1 / 604800);
		iVar0 = (iVar1 % 10);
	}
	if (iVar0 >= 10)
	{
		iVar0 = 0;
	}
	Global_2815059.f_5026 = iVar0;
	return iVar0;
}

int func_497(int iParam0)//Position - 0x1B79
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
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
		case 27:
			return 27;
		case 28:
			return 28;
		case 29:
			return 29;
		case 30:
			return 30;
		case 31:
			return 31;
		default:
	}
	return -1;
}

void func_498()//Position - 0x2293
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 15);
}

void func_499(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)//Position - 0x8809
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		if (iParam6 == 0)
		{
			__LIB_0__::func_610(sParam5);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam5);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_500(int iParam0)//Position - 0x8D14
{
	switch (iParam0)
	{
		case 0:
			return "DLCC_HEIST_CT" /* GXT: Lester Crest */;
		case 1:
			return "DLCC_LOWRI_CT" /* GXT: Lamar Davis */;
		case 2:
			return "DLCC_FAIFA_CT" /* GXT: SecuroServ */;
		case 3:
			return "DLCC_BIKER_CT" /* GXT: Malc */;
		case 4:
			return "DLCC_GUNRU_CT" /* GXT: Agent 14 */;
		case 5:
			return "DLCC_SMUGG_CT" /* GXT: Ron Jakowski */;
		case 6:
			return "DLCC_DOOMS_CT" /* GXT: Lester Crest */;
		case 7:
			return "DLCC_AFTER_CT" /* GXT: Tony Prince */;
		case 8:
			return "DLCC_ARENA_CT" /* GXT: Bryony */;
		case 9:
			return "DLCC_CASIN_CT" /* GXT: Tom Connors */;
		case 10:
			return "DLCC_CASHT_CT" /* GXT: Lester Crest */;
		case 11:
			return "DLCC_ISLAN_CT" /* GXT: Miguel Madrazo */;
		case 12:
			return "DLCC_MADRA_CT" /* GXT: Martin Madrazo */;
		case 13:
			return "DLCC_SIMEO_CT" /* GXT: Simeon Yetarian */;
		case 14:
			return "DLCC_GERAL_CT" /* GXT: Gerald */;
		case 15:
			return "DLCC_BOUNT_CT" /* GXT: Maude Eccles */;
		case 16:
			return "DLCC_ACTIO_CT" /* GXT: Hardcore Comic Store */;
		case 17:
			return "DLCC_MOVIE_CT" /* GXT: Richards Majestic */;
		case 18:
			return "DLCC_TUNER_CT" /* GXT: Mimi */;
		case 19:
			return "DLCC_CONTR_CT" /* GXT: Lamar Davis */;
		case 20:
			return "DLCC_PREMI_CT" /* GXT: Simeon Yetarian */;
		default:
	}
	return "";
}

Vector3 func_501(int iParam0)//Position - 0x9613
{
	switch (iParam0)
	{
		case 0:
			return -486.1165f, -916.59f, 22.964f;
		case 1:
			return 854.8221f, -2189.789f, 29.679604f;
		case 2:
			return -1730.7411f, -188.57533f, 57.337273f;
		case 3:
			return 1409.3899f, 1084.5609f, 113.33391f;
		case 4:
			return -901.63f, -779.377f, 14.859f;
		case 5:
			return 2562.03f, 2707.7473f, 41.071f;
		case 6:
			return -1194.2417f, -1456.5526f, 3.379667f;
		case 7:
			return -216.2158f, -1109.7155f, 21.9008f;
		case 8:
			return -889.356f, -1071.848f, 1.163f;
		case 9:
			return 2699.602f, 1653.246f, 23.571f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_502(int iParam0, bool bParam1)//Position - 0xA28D
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_COLUMN"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			MISC::CLEAR_BIT(&Global_1574941, iParam0);
		}
		else
		{
			MISC::SET_BIT(&Global_1574941, iParam0);
		}
	}
}

Vector3 func_503(int iParam0)//Position - 0xA7DD
{
	switch (iParam0)
	{
		case 0:
			return -504.186f, -954.723f, 22.872f;
		case 1:
			return 942.2534f, -2178.6565f, 29.5516f;
		case 2:
			return -1730.1588f, -186.0999f, 57.414f;
		case 3:
			return 1408.939f, 1084.816f, 113.334f;
		case 4:
			return -966.495f, -726.174f, 18.871f;
		case 5:
			return 2585.354f, 2727.626f, 41.66f;
		case 6:
			return -1217.59f, -1451.022f, 3.365f;
		case 7:
			return -222.877f, -1115.368f, 21.959f;
		case 8:
			return -892.467f, -1070.075f, 1.15f;
		case 9:
			return 2704.717f, 1653.11f, 23.552f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_504(int iParam0)//Position - 0xA8DF
{
	if (Global_262145.f_26777 /* Tunable: RC_TIME_TRIAL_OVERRIDE_TIME */ > 0)
	{
		return Global_262145.f_26777 /* Tunable: RC_TIME_TRIAL_OVERRIDE_TIME */;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 110000;
			case 1:
				return 90000;
			case 2:
				return 80000;
			case 3:
				return 87000;
			case 4:
				return 70000;
			case 5:
				return 92000;
			case 6:
				return 125000;
			case 7:
				return 72000;
			case 8:
				return 113000;
			case 9:
				return 105000;
			}
		default:
	}
	return 0;
}

int func_505(int iParam0)//Position - 0xA9E0
{
	if (Global_262145.f_11102 /* Tunable: TIME_TRIAL_OVERRIDE_TIME */ > 0)
	{
		return Global_262145.f_11102 /* Tunable: TIME_TRIAL_OVERRIDE_TIME */;
	}
	else
	{
		switch (iParam0)
		{
			case 7:
				return 70100;
			case 21:
				return 54200;
			case 3:
				return 46300;
			case 2:
				return 124900;
			case 1:
				return 124400;
			case 13:
				return 149400;
			case 4:
				return 249500;
			case 8:
				return 135000;
			case 5:
				return 104000;
			case 0:
				return 103200;
			case 6:
				return 38500;
			case 9:
				return 127200;
			case 19:
				return 86600;
			case 14:
				return 60000;
			case 10:
				return 101300;
			case 20:
				return 76600;
			case 17:
				return 84200;
			case 15:
				return 79000;
			case 12:
				return 58800;
			case 16:
				return 103400;
			case 18:
				return 178800;
			case 11:
				return 77800;
			case 22:
				return 100000;
			case 23:
				return 125000;
			case 24:
				return 120000;
			case 25:
				return 155000;
			case 26:
				return 80000;
			case 27:
				return 144000;
			case 28:
				return 136000;
			case 29:
				return 110000;
			case 30:
				return 86000;
			case 31:
				return 130000;
			}
		default:
	}
	return 0;
}

int func_506(int iParam0)//Position - 0xD01F
{
	switch (Global_262145.f_4845[iParam0])
	{
		case 4:
			return 516;
		case 8:
			return 517;
		case 10:
			return 518;
		case 12:
			return 519;
		case 16:
			return 520;
		default:
	}
	return 491;
}

Vector3 func_507(int iParam0)//Position - 0x9206
{
	switch (iParam0)
	{
		case 0:
			return 758.9717f, -981.2413f, 24.4527f;
		case 1:
			return -64.4085f, -1453.4479f, 31.1237f;
		case 2:
			return -46.4397f, -792.618f, 43.2251f;
		case 3:
			return 315.5376f, -1162.8514f, 28.2919f;
		case 4:
			return 2053.7522f, 2948.1938f, 46.7247f;
		case 5:
			return 1926.9655f, 3800.8352f, 31.024f;
		case 6:
			return 1280.1431f, -1731.7445f, 51.6016f;
		case 7:
			return -1395.9985f, -586.9497f, 29.2866f;
		case 8:
			return -234.8298f, -2043.627f, 26.7554f;
		case 9:
			return 927.6243f, 44.8511f, 79.8999f;
		case 10:
			return 1120.01f, -225.07f, 68.08f;
		case 11:
			return -1806.3065f, 457.4485f, 127.2781f;
		case 12:
			return 1310.7424f, 1188.6497f, 105.9349f;
		case 13:
			return __LIB_28__::func_626();
		case 14:
			return -85.8f, -1527.35f, 32.59f;
		case 15:
			return 2723.551f, 4143.2695f, 43.0452f;
		case 16:
			return -143.6735f, 231.9062f, 93.9595f;
		case 17:
			return -1012.8768f, -480.9299f, 38.7536f;
		case 18:
			return 779.5378f, -1867.5258f, 28.2964f;
		case 19:
			return -183.53f, -1699.39f, 31.73f;
		case 20:
			return __LIB_4__::func_747();
		default:
	}
	return __LIB_3__::func_554();
}

int func_508(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x97F1
{
	switch (iParam0)
	{
		case 7:
			*uParam1 = { -552.626f, 5042.7026f, 127.9448f };
			*uParam2 = 243.7129f;
			*uParam3 = { 500.2789f, 5597.2485f, 794.726f };
			*uParam4 = 350.6013f;
			*uParam5 = { -539.9766f, 5037.266f, uParam1->f_2 };
			break;
		case 21:
			*uParam1 = { 526.397f, 5624.461f, 779.3564f };
			*uParam2 = 311.183f;
			*uParam3 = { 2278.7446f, 5788.454f, 154.0056f };
			*uParam4 = 292.2128f;
			*uParam5 = { 532.6158f, 5637.7495f, uParam1->f_2 };
			break;
		case 3:
			*uParam1 = { 2702.0369f, 5145.717f, 42.8568f };
			*uParam2 = 345.7831f;
			*uParam3 = { 2848.1838f, 5945.502f, 355.2424f };
			*uParam4 = 40.507f;
			*uParam5 = { 2703.4487f, 5152.725f, uParam1->f_2 };
			break;
		case 2:
			*uParam1 = { -1253.2399f, -380.457f, 58.2873f };
			*uParam2 = 72.3034f;
			*uParam3 = { -2223.1555f, 4254.68f, 45.4055f };
			*uParam4 = 248.7762f;
			*uParam5 = { -1262.9346f, -377.1622f, uParam1->f_2 };
			break;
		case 1:
			*uParam1 = { -377.166f, 1250.8182f, 326.4899f };
			*uParam2 = 306.2901f;
			*uParam3 = { 2168.5886f, 4777.3057f, 40.2251f };
			*uParam4 = 341.866f;
			*uParam5 = { -370.2543f, 1255.8573f, uParam1->f_2 };
			break;
		case 13:
			*uParam1 = { -1502.0471f, 4940.611f, 63.8034f };
			*uParam2 = 143.5247f;
			*uParam3 = { 3782.3245f, 4464.408f, 5.0935f };
			*uParam4 = 269.4335f;
			*uParam5 = { -1504.6981f, 4936.6445f, uParam1->f_2 };
			break;
		case 4:
			*uParam1 = { 1261.3533f, -3278.38f, 4.8335f };
			*uParam2 = 356.8981f;
			*uParam3 = { 95.0126f, 6793.054f, 19.1916f };
			*uParam4 = 84.173f;
			*uParam5 = { 1261.5498f, -3273.2153f, uParam1->f_2 };
			break;
		case 8:
			*uParam1 = { -579.1157f, 5324.664f, 69.2662f };
			*uParam2 = 159.3018f;
			*uParam3 = { 2763.4895f, 2756.7056f, 42.2599f };
			*uParam4 = 114.3906f;
			*uParam5 = { -580.1998f, 5321.927f, uParam1->f_2 };
			break;
		case 5:
			*uParam1 = { -1554.3121f, 2755.0088f, 16.8004f };
			*uParam2 = 228.5935f;
			*uParam3 = { 807.0756f, 1277.6714f, 359.4458f };
			*uParam4 = 84.6859f;
			*uParam5 = { -1552.1925f, 2753.279f, uParam1->f_2 };
			break;
		case 0:
			*uParam1 = { -1811.675f, -1199.5421f, 12.0174f };
			*uParam2 = 319.1759f;
			*uParam3 = { 1665.5677f, -13.891f, 172.7744f };
			*uParam4 = 14.7216f;
			*uParam5 = { -1809.0801f, -1196.4022f, uParam1->f_2 };
			break;
		case 6:
			*uParam1 = { 637.1439f, -1845.8552f, 8.2676f };
			*uParam2 = 355.1936f;
			*uParam3 = { 1049.1497f, -264.0645f, 50.4311f };
			*uParam4 = 326.7219f;
			*uParam5 = { 637.3676f, -1842.2245f, uParam1->f_2 };
			break;
		case 9:
			*uParam1 = { 1067.343f, -2448.2366f, 28.0683f };
			*uParam2 = 84.3956f;
			*uParam3 = { 2072.5647f, 2342.5327f, 93.5678f };
			*uParam4 = 262.5002f;
			*uParam5 = { 1064.983f, -2448.0498f, uParam1->f_2 };
			break;
		case 19:
			*uParam1 = { 2820.6514f, 1642.2759f, 23.668f };
			*uParam2 = 88.7852f;
			*uParam3 = { 1365.9885f, -578.5997f, 73.3803f };
			*uParam4 = 247.2179f;
			*uParam5 = { 2811.7136f, 1642.4181f, uParam1->f_2 };
			break;
		case 14:
			*uParam1 = { 947.562f, 142.6773f, 79.8307f };
			*uParam2 = 309.5725f;
			*uParam3 = { -102.2509f, 854.2916f, 234.7128f };
			*uParam4 = 89.0971f;
			*uParam5 = { 915.5455f, 49.949f, uParam1->f_2 };
			break;
		case 10:
			*uParam1 = { 1577.189f, 6439.966f, 23.6996f };
			*uParam2 = 96.32f;
			*uParam3 = { -2422.9395f, 4229.4185f, 8.1163f };
			*uParam4 = 110.6616f;
			*uParam5 = { 1573.7222f, 6439.562f, uParam1->f_2 };
			break;
		case 20:
			*uParam1 = { -2257.7986f, 4315.927f, 44.5551f };
			*uParam2 = 1.1533f;
			*uParam3 = { -243.3874f, 4084.5967f, 36.0077f };
			*uParam4 = 336.269f;
			*uParam5 = { -2258.079f, 4319.81f, uParam1->f_2 };
			break;
		case 17:
			*uParam1 = { 231.9767f, 3301.4888f, 39.5627f };
			*uParam2 = 339.4784f;
			*uParam3 = { 995.3146f, 4459.696f, 49.8577f };
			*uParam4 = 261.1064f;
			*uParam5 = { 232.8029f, 3303.3013f, uParam1->f_2 };
			break;
		case 15:
			*uParam1 = { 1246.2249f, 2685.1099f, 36.5944f };
			*uParam2 = 84.3841f;
			*uParam3 = { -2566.3264f, 2330.0984f, 32.06f };
			*uParam4 = 98.5212f;
			*uParam5 = { 1242.8779f, 2685.2307f, uParam1->f_2 };
			break;
		case 12:
			*uParam1 = { -1504.541f, 1482.4895f, 116.053f };
			*uParam2 = 187.7171f;
			*uParam3 = { -631.941f, -371.4568f, 33.8127f };
			*uParam4 = 43.9815f;
			*uParam5 = { -1503.9414f, 1478.5476f, uParam1->f_2 };
			break;
		case 16:
			*uParam1 = { -1021.1459f, -2580.291f, 33.6353f };
			*uParam2 = 332.0736f;
			*uParam3 = { -1505.461f, 1485.9398f, 115.6857f };
			*uParam4 = 326.8418f;
			*uParam5 = { -1007.3947f, -2556.8115f, uParam1->f_2 };
			break;
		case 18:
			*uParam1 = { 860.353f, 536.8055f, 124.7803f };
			*uParam2 = 239.7346f;
			*uParam3 = { -1578.3798f, 5170.146f, 18.5865f };
			*uParam4 = 345.1913f;
			*uParam5 = { 861.8033f, 535.9179f, uParam1->f_2 };
			break;
		case 11:
			*uParam1 = { -199.7486f, -1973.3108f, 26.6204f };
			*uParam2 = 179.0515f;
			*uParam3 = { 228.1437f, 1196.7448f, 224.4599f };
			*uParam4 = 194.4888f;
			*uParam5 = { -199.3188f, -1976.937f, uParam1->f_2 };
			break;
		case 22:
			*uParam1 = { 175.2847f, -3042.0754f, 4.7734f };
			*uParam2 = 0f;
			*uParam3 = { 2782.9714f, -711.3731f, 4.0575f };
			*uParam4 = 289.9463f;
			*uParam5 = { 175.2847f, -3038.0754f, uParam1->f_2 };
			break;
		case 23:
			*uParam1 = { 813.3556f, 1274.9536f, 359.511f };
			*uParam2 = 269.1693f;
			*uParam3 = { -2306.769f, 439.64f, 173.4667f };
			*uParam4 = 172.0443f;
			*uParam5 = { 817.3556f, 1274.9536f, uParam1->f_2 };
			break;
		case 24:
			*uParam1 = { 77.5248f, 3629.9146f, 38.6907f };
			*uParam2 = 188.0191f;
			*uParam3 = { -537.2578f, 281.2907f, 82.0704f };
			*uParam4 = 176.1337f;
			*uParam5 = { 78.5248f, 3626.9146f, uParam1->f_2 };
			break;
		case 25:
			*uParam1 = { 1004.6567f, 898.837f, 209.0257f };
			*uParam2 = 26.0546f;
			*uParam3 = { -3140.7295f, 1180.8759f, 19.309f };
			*uParam4 = 89.9546f;
			*uParam5 = { 1003.6567f, 902.837f, uParam1->f_2 };
			break;
		case 26:
			*uParam1 = { 104.8058f, -1938.9818f, 19.8037f };
			*uParam2 = 50.4887f;
			*uParam3 = { -931.7014f, 174.1591f, 65.2086f };
			*uParam4 = 292.6181f;
			*uParam5 = { 102.2058f, -1936.9818f, uParam1->f_2 };
			break;
		case 27:
			*uParam1 = { -985.2776f, -2698.696f, 12.8307f };
			*uParam2 = 60.7633f;
			*uParam3 = { -408.1892f, 1184.9517f, 324.5297f };
			*uParam4 = 262.1661f;
			*uParam5 = { -988.2776f, -2696.696f, uParam1->f_2 };
			break;
		case 28:
			*uParam1 = { 230.6618f, -1399.0258f, 29.4856f };
			*uParam2 = 139.1333f;
			*uParam3 = { -319.9582f, 2729.5784f, 67.8719f };
			*uParam4 = 320.5662f;
			*uParam5 = { 228.6618f, -1401.0258f, uParam1->f_2 };
			break;
		case 29:
			*uParam1 = { -546.6672f, -2857.9282f, 5.0004f };
			*uParam2 = 290.9365f;
			*uParam3 = { -1605.27f, -953.8167f, 12.0174f };
			*uParam4 = 138.9763f;
			*uParam5 = { -542.6672f, -2855.9282f, uParam1->f_2 };
			break;
		case 30:
			*uParam1 = { -172.8944f, 1034.8262f, 231.2332f };
			*uParam2 = 67.2348f;
			*uParam3 = { -1580.6731f, 3060.9778f, 31.1954f };
			*uParam4 = 0f;
			*uParam5 = { -176.8944f, 1036.8262f, uParam1->f_2 };
			break;
		case 31:
			*uParam1 = { 1691.4703f, -1458.6351f, 111.7033f };
			*uParam2 = 320.382f;
			*uParam3 = { -408.4781f, 1184.1001f, 324.5365f };
			*uParam4 = 81.5969f;
			*uParam5 = { 1695.4703f, -1455.6351f, uParam1->f_2 };
			break;
	}
	if (__LIB_0__::func_78(*uParam1, 0f, 0f, 0f, 0) || *uParam2 < 0f)
	{
		return 0;
	}
	return 1;
}

char* func_509(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xAC04
{
	if (__LIB_18__::func_251(iParam0, iParam1, iParam5))
	{
		return "PM_ARENA" /* GXT: Arena War */;
	}
	else if (iParam0 == 1)
	{
		if (iParam1 == 1)
		{
			return "FMMC_RSTAR_TDM" /* GXT: Team Deathmatch */;
		}
		else if (iParam1 == 2)
		{
			return "FMMC_RSTAR_VDM" /* GXT: Vehicle Deathmatch */;
		}
		else if (iParam1 == 3)
		{
			return "FMMC_RSTAR_KOT" /* GXT: King of the Hill */;
		}
		else if (iParam1 == 4)
		{
			return "FMMC_RSTAR_KOTT" /* GXT: Team King of the Hill */;
		}
		else
		{
			return "FMMC_RSTAR_DM" /* GXT: Deathmatch */;
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return "FMMC_RSTAR_LR" /* GXT: Land Race */;
		}
		else if (iParam1 == 10 || iParam1 == 11)
		{
			return "FMMC_RSTAR_OFR" /* GXT: On Foot Race */;
		}
		else if (iParam1 == 6 || iParam1 == 7)
		{
			return "FMMC_RSTAR_STR" /* GXT: Stunt Race */;
		}
		else if (iParam1 == 18 || iParam1 == 19)
		{
			return "FMMC_RSTAR_TAR" /* GXT: Target Assault Race */;
		}
		else if (iParam1 == 12 || iParam1 == 13)
		{
			return "FMMC_RSTAR_BR" /* GXT: Bike Race */;
		}
		else if (iParam1 == 2 || iParam1 == 3)
		{
			return "FMMC_RSTAR_WR" /* GXT: Sea Race */;
		}
		else if (iParam1 == 4 || iParam1 == 5)
		{
			return "FMMC_RSTAR_AR" /* GXT: Air Race */;
		}
		else if (iParam1 == 24 || iParam1 == 25)
		{
			return "FMMC_RSTAR_OW" /* GXT: Open Wheel Race */;
		}
		else if (iParam1 == 26)
		{
			return "FMMC_RSTAR_PR" /* GXT: Pursuit Race */;
		}
		else if (iParam1 == 27)
		{
			return "FMMC_RSTAR_STRTR" /* GXT: Street Race */;
		}
		return "FMMC_RSTAR_RA" /* GXT: Race */;
	}
	else if (iParam0 == 0 || iParam0 == 9)
	{
		if (iParam1 == 5)
		{
			return "FMMC_RSTAR_MLTS" /* GXT: Last Team Standing */;
		}
		else if (iParam1 == 9)
		{
			return "FMMC_RSTAR_MCP";
		}
		else if (iParam1 == 6)
		{
			if (BitTest(iParam2, 20))
			{
				return "FMMC_RSTAR_CTNT" /* GXT: Capture - Contend */;
			}
			else if (BitTest(iParam2, 21))
			{
				return "FMMC_RSTAR_GTA" /* GXT: Capture - GTA */;
			}
			else if (BitTest(iParam2, 22))
			{
				return "FMMC_RSTAR_HOLD" /* GXT: Capture - Hold */;
			}
			else if (BitTest(iParam2, 23))
			{
				return "FMMC_RSTAR_RAID" /* GXT: Capture - Raid */;
			}
			else
			{
				return "FMMC_RSTAR_MCTF" /* GXT: Capture */;
			}
		}
		else if (iParam1 == 4)
		{
			if ((((((iParam5 > 0 || iParam3 != 0) || BitTest(iParam2, 15)) || BitTest(iParam2, 18)) || BitTest(iParam2, 19)) || BitTest(iParam2, 29)) || BitTest(iParam2, 28))
			{
				return "FMMC_RSTAR_MAM" /* GXT: Adversary Mode */;
			}
			else
			{
				return "FMMC_RSTAR_MVS" /* GXT: Versus Mission */;
			}
		}
		else if (iParam1 == 1)
		{
			if (bParam4)
			{
				return "FMMC_RSTAR_HFS" /* GXT: Heists */;
			}
			else
			{
				return "FMMC_RSTAR_HF" /* GXT: Heist */;
			}
		}
		else if (iParam1 == 7)
		{
			if (bParam4)
			{
				return "FMMC_RSTAR_HPS" /* GXT: Setups */;
			}
			else
			{
				return "FMMC_RSTAR_HP" /* GXT: Setup */;
			}
		}
	}
	else if (iParam0 == 6)
	{
		return "FMMC_RSTAR_GA" /* GXT: Gang Attack */;
	}
	else if (iParam0 == 3)
	{
		return "FMMC_RSTAR_HM" /* GXT: Survival */;
	}
	else if (iParam0 == 8)
	{
		return "FMMC_RSTAR_BJ" /* GXT: Parachuting */;
	}
	else if (iParam0 == 7)
	{
		return "FMMC_RSTAR_MLTS" /* GXT: Last Team Standing */;
	}
	else if (iParam0 == 165)
	{
		return "FMMC_RSTAR_MCP";
	}
	else if (iParam0 == 134)
	{
		return "AMTT_BLIP" /* GXT: Time Trial */;
	}
	else if (iParam0 == 254)
	{
		return "RC_AMTT_BLIP" /* GXT: RC Bandito Time Trial */;
	}
	if (bParam4)
	{
		return "FMMC_RSTAR_OM" /* GXT: Other Missions */;
	}
	return "FMMC_RSTAR_MS" /* GXT: Mission */;
}

int func_510(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)//Position - 0xF3F
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_12__::func_668(iParam3, iParam4))
			{
				return 25;
			}
			else if (iParam1 == 0)
			{
				return 15;
			}
			else if (iParam1 == 5)
			{
				return 19;
			}
			else if (iParam1 == 6)
			{
				return 18;
			}
			else if (iParam1 == 4)
			{
				return 22;
			}
			else if (iParam1 == 9)
			{
				return 23;
			}
			else if (iParam1 == 3)
			{
				return 21;
			}
			else if (iParam1 == 2 || iParam1 == 8)
			{
				return 20;
			}
			else if (iParam1 == 1 || iParam1 == 7)
			{
				return 26;
			}
			break;
		case 7:
			return 19;
		case 4:
			return 18;
		case 10:
			return 22;
		case 9:
			return 20;
		case 1:
			return 7;
		case 8:
			return 17;
		case 129:
			return 25;
		case 2:
			switch (iParam1)
			{
				case 4:
				case 5:
					return 12;
				case 2:
				case 3:
					return 13;
				case 6:
				case 7:
				case 18:
				case 19:
					return 14;
				case 8:
				case 9:
					return 17;
				case 12:
				case 13:
					if (bParam2)
					{
						return 11;
					}
					else
					{
						return 10;
					}
					break;
			}
			return 9;
		case 3:
			return 16;
		case 6:
			return 24;
	}
	return 0;
}

int func_511(int iParam0, int iParam1, int iParam2)//Position - 0x6819
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	if (iParam1 == 0)
	{
	}
	iVar2 = __LIB_0__::getGlobal_1574918();
	if (__LIB_27__::func_322(iVar2) == 0)
	{
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar0 = iVar1;
			if (__LIB_27__::func_322(iVar0) && __LIB_37__::func_538(__LIB_0__::func_195(iVar0, 0)))
			{
				iVar1 = 2;
			}
			else if (iVar0 == 1)
			{
				if (iParam2 == 0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = -1;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar0 = iVar2;
	}
	if (__LIB_37__::func_526(iVar0))
	{
		iVar0 = -1;
	}
	if (iVar0 == -1 && iParam2 == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_512(int iParam0)//Position - 0x35B6
{
	Global_2726795 = iParam0;
}

void func_513()//Position - 0x69CA
{
	MISC::SET_BIT(&(Global_1048576.f_10), 0);
}

void func_514()//Position - 0x6A38
{
	MISC::SET_BIT(&(Global_1048576.f_10), 1);
}

void func_515()//Position - 0x6A4B
{
	MISC::SET_BIT(&(Global_1048576.f_10), 2);
}

void func_516()//Position - 0x6A69
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 2);
}

void func_517()//Position - 0x6A85
{
	MISC::SET_BIT(&(Global_1048576.f_10), 3);
}

void func_518()//Position - 0x6B16
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 2);
}

void func_519()//Position - 0x6B4E
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 1);
}

void func_520()//Position - 0x6B6A
{
	MISC::CLEAR_BIT(&(Global_1048576.f_10), 6);
}

void func_521()//Position - 0x6B7D
{
	MISC::CLEAR_BIT(&(Global_1048576.f_10), 4);
}

void func_522()//Position - 0x731C
{
	MISC::SET_BIT(&(Global_2714762.f_2), 14);
}

void func_523(int iParam0)//Position - 0x8021
{
	Global_2725413 = iParam0;
}

void func_524(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x81EC
{
	if (iParam1 == -1)
	{
		return;
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_525()//Position - 0x884D
{
	Global_2714762.f_707 = 1;
}

void func_526()//Position - 0x887D
{
	Global_2714762.f_10 = -2;
}

int func_527()//Position - 0xD806
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, -1381.5243f, -477.9127f, 71.0821f, true) < 10f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, -1572.0225f, -573.55f, 107.5629f, true) < 10f) || MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, -139.216f, -632.184f, 167.8604f, true) < 10f) || MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, -72.7126f, -816.2345f, 242.4259f, true) < 10f)
		{
			return 1;
		}
	}
	return 0;
}

void func_528(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6)//Position - 0x21AAC
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		__LIB_0__::func_610(sParam4);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_529(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6)//Position - 0x21EB6
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		__LIB_0__::func_610(sParam4);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam6, 2567);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_530(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x222BC
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		__LIB_0__::func_610(sParam4);
		__LIB_0__::func_610(sParam5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_531(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x22642
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		__LIB_0__::func_610(sParam4);
		if (iParam5 != iParam6)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_PLAYERS_V" /* GXT: ~1~ - ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_532(int iParam0, int iParam1)//Position - 0x23930
{
	if (*iParam1 != iParam0)
	{
		if (*iParam1 != 0)
		{
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(*iParam1);
		}
		iParam1->f_2 = 0;
		*iParam1 = iParam0;
		iParam1->f_1 = 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (iParam1->f_2)
	{
		return 1;
	}
	else
	{
		if (iParam0 == -1)
		{
			iParam1->f_2 = 1;
			return 1;
		}
		if (!NETWORK::UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(iParam0) && iParam1->f_1 == 0)
		{
			iParam1->f_1 = NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
		}
		else if (NETWORK::UGC_HAS_DESCRIPTION_REQUEST_FINISHED(iParam0))
		{
			if (NETWORK::UGC_DID_DESCRIPTION_REQUEST_SUCCEED(iParam0))
			{
				iParam1->f_2 = 1;
				return 1;
			}
			else
			{
				iParam1->f_2 = 0;
				return 1;
			}
		}
	}
	return 0;
}

int func_533()//Position - 0x78CC1
{
	return __LIB_0__::func_991(joaat("MPPLY_BETTING_ODDS_SETTING"));
}

void func_534(int iParam0)//Position - 0x79AB3
{
	Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1333 = iParam0;
}

int func_535(int iParam0, bool bParam1)//Position - 0x79EA7
{
	if (iParam0 <= 4)
	{
		if (!bParam1)
		{
			return iParam0;
		}
		else
		{
			return (10 + iParam0);
		}
	}
	else if (iParam0 == 5)
	{
		if (!bParam1)
		{
			return 21;
		}
	}
	else if (iParam0 == 6)
	{
		if (!bParam1)
		{
			return 22;
		}
	}
	else if (iParam0 == 7)
	{
		if (!bParam1)
		{
			return 5;
		}
		else
		{
			return 15;
		}
	}
	else if (iParam0 == 23)
	{
		if (!bParam1)
		{
			return 6;
		}
		else
		{
			return 16;
		}
	}
	else if (iParam0 == 24)
	{
		if (!bParam1)
		{
			return 7;
		}
		else
		{
			return 17;
		}
	}
	else if (iParam0 == 27)
	{
		if (!bParam1)
		{
			return 8;
		}
		else
		{
			return 18;
		}
	}
	else if (iParam0 == 28)
	{
		if (!bParam1)
		{
			return 9;
		}
		else
		{
			return 19;
		}
	}
	else if (iParam0 == 11)
	{
		if (!bParam1)
		{
			return 23;
		}
	}
	return -1;
}

int func_536(int iParam0)//Position - 0x7B048
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iParam0 /*599*/].f_1, 6);
	}
	return 0;
}

void func_537(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, char* sParam11, int iParam12, bool bParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, char* sParam18, char* sParam19, int iParam20, bool bParam21)//Position - 0x7F848
{
	char* sVar0;
	sVar0 = "SET_DATA_SLOT";
	if (bParam8)
	{
		sVar0 = "UPDATE_SLOT";
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(sVar0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_0__::func_138(bParam6, 0, 1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam12);
		if (bParam7)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		if ((MISC::IS_STRING_NULL_OR_EMPTY(sParam18) && MISC::IS_STRING_NULL_OR_EMPTY(sParam19)) && iParam20 == -1)
		{
			__LIB_0__::func_610(sParam4);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam18))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam18);
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam19))
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam19);
			}
			else if (iParam20 != -1)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam20);
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			if (iParam9 != -1)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
			}
			else if (iParam10 != -1)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam11);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
			{
				if (bParam21)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam11);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
			}
			if (iParam9 != -1)
			{
				if (bParam17)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam9, 7);
				}
				else if (bParam14)
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam9, true);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam9);
				}
			}
			if (iParam10 != -1)
			{
				if (bParam17)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam10, 7);
				}
				else if (bParam14)
				{
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
				}
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam13);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam16);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam15);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_538(int iParam0)//Position - 0x8136A
{
	__LIB_1__::func_354(1300, iParam0, -1, 1, 0);
	Global_4456524 = iParam0;
}

int func_539(int iParam0)//Position - 0x83057
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 1);
	}
	return 0;
}

void func_540(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x8992E
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		}
		__LIB_0__::func_610(sParam5);
		if (bParam6)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		if (bParam8)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(21);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam8);
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_541(int iParam0)//Position - 0x89E84
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_542()//Position - 0xAE6F5
{
	return iLocal_131;
}

int func_543()//Position - 0x5EBD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (__LIB_0__::func_156(iVar0, 0, 1))
		{
			if (__LIB_9__::func_130(iVar0))
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return iVar1;
}

void func_544(int iParam0)//Position - 0x8198
{
	__LIB_38__::func_502(iParam0, 1);
}

void func_545(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1F76F
{
	struct<52> Var0;
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	bParam0->f_7 = 0;
	bParam0->f_8 = 0;
	bParam0->f_9 = 0;
	bParam0->f_12 = 0;
	bParam0->f_32 = 0;
	bParam0->f_13 = 0;
	bParam0->f_14 = 0;
	bParam0->f_15 = 0;
	bParam0->f_17 = 1;
	bParam0->f_17 = 1;
	bParam0->f_18 = 0;
	bParam0->f_19 = 0;
	bParam0->f_20 = 0;
	bParam0->f_21 = -1;
	bParam0->f_3 = 0;
	bParam0->f_28 = 0;
	bParam0->f_29 = 0;
	bParam0->f_30 = 0;
	Global_1835448[0] = 0;
	Global_1835448[1] = 0;
	bParam0->f_41 = 0;
	if (bParam2)
	{
		bParam0->f_42 = { Var0 };
	}
	if (bParam1)
	{
		__LIB_38__::func_271(bParam0, 0);
	}
}

void func_546(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x21D8A
{
	bool bVar0;
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		if (bParam4)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else if (bParam9)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		__LIB_0__::func_610(sParam5);
		if (bParam8)
		{
			__LIB_0__::func_700(sParam6);
		}
		else if (bParam4)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			__LIB_0__::func_610(sParam6);
		}
		if (bParam9)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam6, __LIB_16__::func_651()))
			{
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam6, __LIB_18__::func_189()))
			{
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam6, "Verified"))
			{
			}
			if (MISC::COMPARE_STRINGS(sParam6, __LIB_18__::func_189(), false, 10) == 0)
			{
			}
			if (__LIB_1__::func_76(sParam6))
			{
			}
		}
		if (!bVar0)
		{
			__LIB_0__::func_610("");
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam10);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_547()//Position - 0x220D5
{
	int iVar0;
	int iVar1;
	if (Global_262145.f_10731 /* Tunable: TIMETRIALVARIATION */ >= 0 && Global_262145.f_10731 /* Tunable: TIMETRIALVARIATION */ < 32)
	{
		return Global_262145.f_10731 /* Tunable: TIMETRIALVARIATION */;
	}
	iVar0 = Global_2815059.f_5024;
	if (iVar0 == -1)
	{
		iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_262145.f_10730 /* Tunable: TIME_TRIAL_START_TIME */);
		if (iVar1 < 0)
		{
			iVar1 = (iVar1 * -1);
		}
		iVar1 = (iVar1 / 604800);
		iVar0 = __LIB_38__::func_497((iVar1 % 32));
	}
	if (iVar0 >= 32)
	{
		iVar0 = 0;
	}
	Global_2815059.f_5024 = iVar0;
	return iVar0;
}

int func_548(int iParam0)//Position - 0x782D2
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_6__::func_196())
		{
			return 1;
		}
		if ((__LIB_1__::func_319(Global_4718592.f_168757) || __LIB_13__::func_435(Global_4718592.f_168757)) || __LIB_10__::func_232(Global_4718592.f_168757))
		{
			return 0;
		}
		if (__LIB_12__::func_668(Global_4718592.f_116524, Global_4718592.f_168757))
		{
			return 0;
		}
	}
	return 1;
}

int func_549()//Position - 0x79FB2
{
	return __LIB_1__::func_360(1300, -1, 0);
}

int func_550(int iParam0)//Position - 0x7B3EB
{
	if (__LIB_11__::func_619(__LIB_0__::func_492(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_551()//Position - 0x7DB43
{
	return BitTest(__LIB_1__::func_360(8977, -1, 0), 2);
}

int func_552()//Position - 0x5D5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (__LIB_0__::func_156(iVar0, 0, 1) && iVar0 != PLAYER::PLAYER_ID())
		{
			if (__LIB_10__::func_722(PLAYER::PLAYER_ID(), iVar0, 1) && !__LIB_1__::func_510(iVar0))
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_553(int iParam0)//Position - 0x7A8EE
{
	int iVar0;
	int iVar1;
	if (iParam0 != __LIB_0__::func_162())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (__LIB_34__::func_347(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_554()//Position - 0x7FBCB
{
	__LIB_2__::func_474(Global_262145.f_18219 /* Tunable: BIKER_MC_POINTS_COMMIT_SUICIDE */);
	__LIB_2__::func_578(Global_262145.f_18219 /* Tunable: BIKER_MC_POINTS_COMMIT_SUICIDE */);
}

void func_555(int iParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, bool bParam6, int iParam7, int iParam8, int iParam9, char* sParam10, bool bParam11, int iParam12, int iParam13)//Position - 0x1052
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		__LIB_0__::func_610(sParam1);
		if (bParam6)
		{
			__LIB_0__::func_700(sParam2);
		}
		else
		{
			__LIB_0__::func_610(sParam2);
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam4);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		bVar6 = true;
		bVar7 = true;
		bVar8 = true;
		if ((iParam8 > -1 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) && !Global_262145.f_8572 /* Tunable: DISABLE_MODIFIER_BADGES */)
		{
			if (iParam8 == 0 && (iParam9 == 1 || iParam9 == 7))
			{
				if (Global_262145.f_8573 /* Tunable: HEIST_BADGE_XP_MULTIPLIER */ >= 1f)
				{
					fVar1 = Global_262145.f_8573 /* Tunable: HEIST_BADGE_XP_MULTIPLIER */;
				}
				if (Global_262145.f_8574 /* Tunable: HEIST_BADGE_CASH_MULTIPLIER */ >= 1f)
				{
					fVar2 = Global_262145.f_8574 /* Tunable: HEIST_BADGE_CASH_MULTIPLIER */;
				}
			}
			else if (__LIB_1__::func_78(iParam12))
			{
				if (Global_262145.f_23406 /* Tunable: H2_BADGE_XP_MULTIPLIER */ >= 1f)
				{
					fVar1 = Global_262145.f_23406 /* Tunable: H2_BADGE_XP_MULTIPLIER */;
				}
				if (Global_262145.f_23407 /* Tunable: H2_BADGE_CASH_MULTIPLIER */ >= 1f)
				{
					fVar2 = Global_262145.f_23407 /* Tunable: H2_BADGE_CASH_MULTIPLIER */;
				}
			}
			else
			{
				iVar0 = MISC::GET_HASH_KEY(sParam10);
				iVar9 = __LIB_38__::func_510(iParam8, iParam9, bParam11, iParam12, iParam13);
				iVar10 = __LIB_13__::func_519(iVar0);
				if (iVar10 == 27)
				{
					if (__LIB_0__::func_936(PLAYER::PLAYER_ID()) && __LIB_0__::func_983())
					{
						iVar0 = MISC::GET_HASH_KEY(&(Global_1048576.f_44));
						iVar10 = __LIB_13__::func_519(iVar0);
					}
				}
				__LIB_18__::func_467(iVar9, iVar10, joaat("XP_MULTIPLIER"), &fVar1, 1);
				__LIB_18__::func_467(iVar9, iVar10, joaat("FAKE_XP_MULTIPLIER"), &fVar4, 1);
				__LIB_18__::func_467(iVar9, iVar10, joaat("CASH_MULTIPLIER"), &fVar2, 1);
				__LIB_18__::func_467(iVar9, iVar10, -1245438974, &fVar5, 1);
				if (__LIB_7__::func_165(iParam12))
				{
					__LIB_18__::func_467(iVar9, iVar10, joaat("AP_MULTIPLIER"), &fVar3, 1);
				}
				else
				{
					fVar3 = 1f;
				}
			}
			if (__LIB_27__::func_426() && __LIB_0__::func_983())
			{
				if (Global_262145.f_6955 /* Tunable: -278879208 */ > 1f)
				{
					fVar1 = Global_262145.f_6955 /* Tunable: -278879208 */;
				}
			}
			if (fVar1 < 1f)
			{
				fVar1 = 1f;
			}
			if (fVar2 < 1f)
			{
				fVar2 = 1f;
			}
			if (fVar4 > 0f)
			{
				fVar1 = fVar4;
			}
			if (fVar5 > 0f)
			{
				fVar2 = fVar5;
			}
			if (fVar3 < 1f)
			{
				fVar3 = 1f;
			}
			if (fVar1 == 1f)
			{
				bVar6 = false;
			}
			if (fVar2 == 1f)
			{
				bVar7 = false;
			}
			if (fVar3 == 1f)
			{
				bVar8 = false;
			}
			if (bVar6)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_MULTI" /* GXT: ~1~ x */);
				HUD::ADD_TEXT_COMPONENT_FLOAT(fVar1, 0);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			}
			if (bVar7)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_MULTI" /* GXT: ~1~ x */);
				HUD::ADD_TEXT_COMPONENT_FLOAT(fVar2, 0);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			}
			if (bVar8)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_MULTI" /* GXT: ~1~ x */);
				HUD::ADD_TEXT_COMPONENT_FLOAT(fVar3, 0);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			}
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_556()//Position - 0x5F19
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !__LIB_1__::func_606(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1))
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if (__LIB_0__::func_525(PLAYER::PLAYER_ID()) == 3)
	{
		return 1;
	}
	if (__LIB_9__::func_453())
	{
		return 1;
	}
	if (__LIB_1__::func_306())
	{
		return 1;
	}
	if (__LIB_9__::func_36(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_381())
	{
		return 1;
	}
	if (__LIB_2__::func_77())
	{
		return 1;
	}
	if (__LIB_1__::func_192() != -1)
	{
		return 1;
	}
	return 0;
}

int func_557(int iParam0)//Position - 0x77D45
{
	if (Global_4521801.f_973)
	{
		return 0;
	}
	if (__LIB_16__::func_806())
	{
		return 1;
	}
	if (__LIB_16__::func_805())
	{
		return 1;
	}
	if ((((((((!MISC::IS_MINIGAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !Global_2703735.f_3428) && (iParam0 || !HUD::IS_HUD_COMPONENT_ACTIVE(19))) && !__LIB_16__::func_804()) && __LIB_18__::func_457()) && !__LIB_22__::func_390()) && !__LIB_6__::func_518()) && !__LIB_0__::func_457(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_558(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xAB5D2
{
	var* uVar0;
	var* uVar1;
	int iVar2;
	struct<88> Var3;
	int iVar4;
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(uVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(uVar1, "gen");
	Var3.f_65 = -1;
	Var3.f_66 = -1;
	Var3.f_67 = 2;
	uParam0->f_604[uParam1->f_9 /*88*/] = { Var3 };
	if (!__LIB_11__::func_730())
	{
		uParam0->f_604[uParam1->f_9 /*88*/].f_67 = __LIB_16__::func_643(uParam1->f_7);
		uParam0->f_604[uParam1->f_9 /*88*/].f_66 = NETWORK::UGC_GET_CONTENT_FILE_VERSION(uParam1->f_7, uParam0->f_604[uParam1->f_9 /*88*/].f_67);
		uParam0->f_9405[uParam1->f_9 /*13*/].f_6 = NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam1->f_7);
	}
	uParam0->f_604[uParam1->f_9 /*88*/].f_56 = { __LIB_17__::func_939(iVar2) };
	uParam0->f_604[uParam1->f_9 /*88*/].f_59 = { __LIB_16__::func_646(iVar2, "cam") };
	uParam0->f_604[uParam1->f_9 /*88*/].f_62 = { __LIB_16__::func_645(iVar2) };
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "optbs") == 2)
	{
		uParam0->f_604[uParam1->f_9 /*88*/].f_76 = DATAFILE::DATADICT_GET_INT(iVar2, "optbs");
	}
	if (!__LIB_11__::func_730())
	{
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(NETWORK::UGC_GET_CONTENT_LANGUAGE(uParam1->f_7)))
		{
			uParam0->f_604[uParam1->f_9 /*88*/].f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(uParam1->f_7);
		}
		else
		{
			uParam0->f_604[uParam1->f_9 /*88*/].f_54 = -1;
		}
	}
	uParam0->f_604[uParam1->f_9 /*88*/].f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	uParam0->f_604[uParam1->f_9 /*88*/].f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	if (uParam0->f_604[uParam1->f_9 /*88*/].f_71 == -1)
	{
		uParam0->f_604[uParam1->f_9 /*88*/].f_71 = __LIB_2__::func_10();
	}
	StringCopy(&(uParam0->f_604[uParam1->f_9 /*88*/].f_22), NETWORK::UGC_GET_CONTENT_NAME(uParam1->f_7), 64);
	uParam0->f_604[uParam1->f_9 /*88*/].f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	uParam0->f_604[uParam1->f_9 /*88*/].f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	StringCopy(&(uParam0->f_604[uParam1->f_9 /*88*/].f_6), NETWORK::UGC_GET_CONTENT_USER_ID(uParam1->f_7), 64);
	StringCopy(&(uParam0->f_3[uParam1->f_9 /*6*/]), NETWORK::UGC_GET_CONTENT_USER_NAME(uParam1->f_7), 24);
	uParam0->f_604[uParam1->f_9 /*88*/].f_81 = iParam3;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[uParam1->f_9 /*6*/])))
	{
		if (uParam0->f_604[uParam1->f_9 /*88*/].f_81 == 3 || uParam0->f_604[uParam1->f_9 /*88*/].f_81 == 4)
		{
			StringCopy(&(uParam0->f_3[uParam1->f_9 /*6*/]), __LIB_18__::func_189(), 24);
		}
		else
		{
			StringCopy(&(uParam0->f_3[uParam1->f_9 /*6*/]), __LIB_16__::func_651(), 24);
		}
	}
	uParam0->f_604[uParam1->f_9 /*88*/].f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	uParam0->f_9405[uParam1->f_9 /*13*/] = DATAFILE::DATADICT_GET_INT(iVar2, "tnum");
	if (!__LIB_11__::func_730())
	{
		uParam0->f_604[uParam1->f_9 /*88*/].f_73 = __LIB_16__::func_644(NETWORK::UGC_GET_CONTENT_RATING(uParam1->f_7, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam1->f_7, 0));
		uParam0->f_9405[uParam1->f_9 /*13*/].f_4 = NETWORK::UGC_GET_CONTENT_RATING_COUNT(uParam1->f_7, 0);
	}
	StringCopy(&(uParam0->f_604[uParam1->f_9 /*88*/]), NETWORK::UGC_GET_CONTENT_ID(uParam1->f_7), 24);
	iVar4 = MISC::GET_HASH_KEY(&(uParam0->f_604[uParam1->f_9 /*88*/]));
	uParam0->f_9405[uParam1->f_9 /*13*/].f_3 = iVar4;
	uParam0->f_1 = (uParam0->f_1 + iVar4);
	uParam0->f_604[uParam1->f_9 /*88*/].f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	uParam0->f_604[uParam1->f_9 /*88*/].f_78 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	__LIB_16__::func_642(uParam0->f_604[uParam1->f_9 /*88*/].f_65, &(uParam0->f_604[uParam1->f_9 /*88*/].f_71), &(uParam0->f_604[uParam1->f_9 /*88*/].f_69));
	MISC::SET_BIT(&(uParam0->f_604[uParam1->f_9 /*88*/].f_76), 13);
	uParam0->f_10808[uParam0->f_604[uParam1->f_9 /*88*/].f_65]++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
	if (!__LIB_11__::func_730())
	{
		if (NETWORK::UGC_GET_CONTENT_HAS_PLAYER_RECORD(uParam1->f_7))
		{
			MISC::SET_BIT(&(uParam0->f_604[uParam1->f_9 /*88*/].f_76), 14);
			uParam0->f_9405[uParam1->f_9 /*13*/].f_7 = NETWORK::UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(uParam1->f_7);
		}
		uParam0->f_10707[uParam1->f_9] = NETWORK::UGC_GET_CONTENT_IS_USING_SC_NICKNAME(uParam1->f_7);
		uParam0->f_9405[uParam1->f_9 /*13*/].f_1 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(uParam1->f_7));
		MISC::SET_CONTENT_ID_INDEX(uParam0->f_9405[uParam1->f_9 /*13*/].f_1, uParam1->f_9 + 2018);
	}
	if (__LIB_0__::func_3() != 2)
	{
		if (uParam0->f_604[uParam1->f_9 /*88*/].f_71 > Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			uParam0->f_604[uParam1->f_9 /*88*/].f_71 = Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
		if (uParam0->f_604[uParam1->f_9 /*88*/].f_69 > Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			uParam0->f_604[uParam1->f_9 /*88*/].f_69 = Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
	}
	if (!bParam2)
	{
		__LIB_19__::func_46(uParam0->f_604[uParam1->f_9 /*88*/].f_65, uParam0->f_604[uParam1->f_9 /*88*/].f_68, BitTest(uParam0->f_604[uParam1->f_9 /*88*/].f_76, 14), uParam0->f_604[uParam1->f_9 /*88*/].f_70, 1);
		__LIB_19__::func_45(uParam0->f_604[uParam1->f_9 /*88*/].f_65, uParam0->f_604[uParam1->f_9 /*88*/].f_68, uParam0->f_604[uParam1->f_9 /*88*/].f_70, 1);
	}
	uParam1->f_9++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

bool func_559()//Position - 0xD940
{
	return MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_12__::func_845(20), false, true, false, -1, 0);
}

int func_560(var uParam0, int iParam1)//Position - 0xD97E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!NETWORK::NETWORK_IS_SIGNED_IN())
	{
		return 12;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 12;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (!MONEY::NETWORK_CAN_SPEND_MONEY((__LIB_13__::func_474(iParam1, iVar0, 0, -1) + __LIB_12__::func_845(20)), false, false, true, -1, 0))
				{
					return 1;
				}
			}
		}
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				return 6;
			}
		}
		else
		{
			return 6;
		}
		if (!__LIB_2__::func_104(2, 0, 0))
		{
			return 4;
		}
		if (__LIB_3__::func_364())
		{
			return 6;
		}
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_13__::func_474(iParam1, iVar0, 0, -1), false, false, true, -1, 0))
			{
				return 3;
			}
		}
		if (__LIB_0__::func_719())
		{
			return 7;
		}
		if (__LIB_9__::func_636())
		{
			return 7;
		}
		if (BitTest(Global_2815059.f_836, 2))
		{
			return 8;
		}
		if (((((((((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 14 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 15) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 13) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 6) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 5) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 32) || __LIB_13__::func_416()) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 6)) || __LIB_10__::func_731(PLAYER::PLAYER_PED_ID(), joaat("MP_GAR_SIMEON"), 0, uParam0, 0, 500, 1, 0)) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 0)) || __LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0)) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
		{
			return 9;
		}
		if (BitTest(Global_2621446, 7))
		{
			return 10;
		}
		if (Global_75485 == 1)
		{
			return 11;
		}
		if ((Global_1836829 && HUD::IS_HOVERING_OVER_MISSION_CREATOR_BLIP()) && HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if ((Global_1836751.f_30 == -2 || Global_1836751.f_30 == -3) || Global_1836751.f_30 == 0)
			{
				return 60;
			}
			if (!Global_262145.f_6958 /* Tunable: 506270292 */)
			{
				return 61;
			}
			if (!__LIB_18__::func_937())
			{
				return 62;
			}
			if (Global_1836751.f_30 == -4)
			{
				return 63;
			}
			if (__LIB_32__::func_176())
			{
				return 64;
			}
		}
		else
		{
			Global_1836829 = 0;
		}
	}
	else if (__LIB_0__::func_438())
	{
		iVar1 = __LIB_38__::func_511(0, 0, 1);
		if (iVar1 == -1)
		{
			return 5;
		}
		else
		{
			if (!__LIB_1__::func_682(iVar1))
			{
				return 4;
			}
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (!MONEY::NETWORK_CAN_SPEND_MONEY(__LIB_13__::func_474(iParam1, iVar0, 0, -1), false, false, true, -1, 0))
				{
					return 3;
				}
			}
			if (__LIB_0__::func_719())
			{
				return 7;
			}
			if (__LIB_9__::func_636())
			{
				return 7;
			}
		}
	}
	else if (!__LIB_2__::func_866(1, 0) && !__LIB_2__::func_866(1, 1))
	{
		return 5;
	}
	else if (__LIB_2__::func_866(1, 0) && !__LIB_2__::func_866(1, 1))
	{
	}
	else if (!__LIB_2__::func_866(1, 0) && __LIB_2__::func_866(1, 1))
	{
	}
	return 0;
}

void func_561(int iParam0)//Position - 0x55C14
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<45> Var3;
	struct<2> Var4;
	iVar1 = DATAFILE::DATADICT_GET_DICT(*iParam0, "DMD");
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = DATAFILE::DATADICT_GET_DICT(iVar1, "DMinvty");
	__LIB_18__::func_414("spst", &(Global_4718592.f_176716), &iVar1, 0, -2340845);
	Var3.f_15 = 4;
	Var3.f_20 = 9;
	Var3.f_33 = 9;
	Var3.f_44.f_5 = 15;
	Var3.f_44.f_21 = 15;
	Var3.f_44.f_37 = 15;
	Var3.f_44.f_53 = 15;
	Var3.f_44.f_69 = 15;
	Var3.f_44.f_85 = 15;
	Var3.f_44.f_85.f_1 = 6;
	Var3.f_44.f_85.f_1.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	Var3.f_44.f_85.f_1.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7.f_7 = 6;
	__LIB_18__::func_414("DMobs", &(Global_4718592.f_180134.f_2818), &iVar1, 0, -2340845);
	__LIB_18__::func_414("DMwbt", &(Global_4718592.f_180134.f_2830), &iVar1, -1, -2340845);
	__LIB_18__::func_414("DMFlvs", &(Global_4718592.f_180134.f_2819), &iVar1, 1, -2340845);
	bVar0 = false;
	while (bVar0 <= (Global_4718592.f_593 - 1))
	{
		__LIB_18__::func_404("DMTlvs", &(Global_4718592.f_180134.f_2820[bVar0]), &iVar1, &Var4, bVar0, 1, -2340845);
		__LIB_18__::func_404("DMTscr", &(Global_4718592.f_180134.f_2825[bVar0]), &iVar1, &(Var4.f_1), bVar0, 0, -2340845);
		bVar0++;
	}
	__LIB_18__::func_414("cgsCNT", &(Global_4718592.f_180134.f_2817), &iVar1, 1, -2340845);
	bVar0 = false;
	while (bVar0 <= (Global_4718592.f_180134.f_2817 - 1))
	{
		__LIB_38__::func_273(&Var3, &iVar1, &iVar2, &(Global_4718592.f_180134[bVar0 /*256*/]), bVar0);
		bVar0++;
	}
	__LIB_18__::func_414("dmRND", &(Global_4718592.f_142644), &iVar1, 2, -2340845);
}

void func_562(int iParam0)//Position - 0x35C4
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_628();
	if (Global_1575058)
	{
		sVar1 = __LIB_7__::func_702(iParam0);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		iVar3 = __LIB_1__::func_724(&Global_2727815, 1, 0);
		__LIB_0__::func_627(&Global_2727813, 1, 0);
		NETWORK::NETWORK_TRANSITION_ADD_STAGE(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		__LIB_15__::func_984();
	}
	Global_1574991 = iParam0;
}

int func_563(int iParam0)//Position - 0x186A
{
	int iVar0;
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		case 2:
			iVar0 = 108;
			break;
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

char* func_564(int iParam0)//Position - 0x319D
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		case 9:
			return "MISHSTA_1";
		case 10:
			return "MISHSTA_2";
		case 21:
			return "MISHSTA_1";
		case 22:
			return "MISHSTA_3";
		case 338:
			return "MISHSTA_0";
		case 339:
			return "MISHSTA_4";
		case 196:
			return "MISHSTA_5";
		case 197:
			return "MISHSTA_0";
		case 205:
			return "MISHSTA_6";
		case 206:
			return "MISHSTA_7";
		case 207:
			return "MISHSTA_8";
		case 218:
			return "MISHSTA_1";
		case 217:
			return "MISHSTA_0";
		case 384:
			return "MISHSTA_1";
		case 385:
			return "MISHSTA_9";
		case 372:
			return "MISHSTA_10";
		case 373:
			return "MISHSTA_11";
		case 375:
			return "MISHSTA_1";
		case 374:
			return "MISHSTA_12";
		case 486:
			return "MISHSTA_13";
		case 487:
			return "MISHSTA_11";
		case 488:
			return "MISHSTA_1";
		case 489:
			return "MISHSTA_14";
		case 490:
			return "MISHSTA_15";
		case 499:
			return "MISHSTA_11";
		case 500:
			return "MISHSTA_1";
		case 501:
			return "MISHSTA_16";
		case 502:
			return "MISHSTA_17";
		case 515:
			return "MISHSTA_11";
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		case 517:
			return "MISHSTA_12";
		case 518:
			return "MISHSTA_19";
		case 137:
			return "MISHSTA_12";
		case 136:
			return "MISHSTA_20";
		case 148:
			return "MISHSTA_11";
		case 149:
			return "MISHSTA_12";
		case 150:
			return "MISHSTA_21";
		case 229:
			return "MISHSTA_6";
		case 230:
			return "MISHSTA_22";
		case 273:
			return "MISHSTA_10";
		case 274:
			return "MISHSTA_11";
		case 275:
			return "MISHSTA_1";
		case 276:
			return "MISHSTA_23";
		case 277:
			return "MISHSTA_12";
		case 283:
			return "MISHSTA_1";
		case 284:
			return "MISHSTA_10";
		case 285:
			return "MISHSTA_11";
		case 346:
			return "MISHSTA_1";
		case 239:
			return "MISHSTA_1";
		case 240:
			return "MISHSTA_24";
		case 241:
			return "MISHSTA_25";
		case 242:
			return "MISHSTA_26";
		case 294:
			return "MISHSTA_27";
		case 295:
			return "MISHSTA_28";
		case 296:
			return "MISHSTA_29";
		case 297:
			return "MISHSTA_30";
		case 298:
			return "MISHSTA_31";
		case 308:
			return "MISHSTA_32";
		case 102:
			return "MISHSTA_0";
		case 115:
			return "MISHSTA_33";
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		case 111:
			return "MISHSTA_34";
		case 112:
			return "MISHSTA_35";
		case 113:
			return "MISHSTA_36";
		case 396:
			return "MISHSTA_1";
		case 393:
			return "MISHSTA_37";
		case 394:
			return "MISHSTA_38";
		case 395:
			return "MISHSTA_39";
		case 120:
			return "MISHSTA_0";
		case 121:
			return "MISHSTA_6";
		case 122:
			return "MISHSTA_40";
		case 123:
			return "MISHSTA_41";
		case 124:
			return "MISHSTA_42";
		case 161:
			return "MISHSTA_43";
		case 172:
			return "MISHSTA_43";
		case 173:
			return "MISHSTA_1";
		case 174:
			return "MISHSTA_11";
		case 175:
			return "MISHSTA_44";
		case 185:
			return "MISHSTA_1";
		case 186:
			return "MISHSTA_6";
		case 187:
			return "MISHSTA_45";
		case 326:
			return "MISHSTA_46";
		case 129:
			return "MISHSTA_1";
		case 130:
			return "MISHSTA_0";
		case 466:
			return "MISHSTA_1";
		case 400:
			return "MISHSTA_1";
		case 401:
			return "MISHSTA_47";
		case 413:
			return "MISHSTA_48";
		case 414:
			return "MISHSTA_10";
		case 415:
			return "MISHSTA_11";
		case 416:
			return "MISHSTA_49";
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		case 249:
			return "MISHSTA_1";
		case 474:
			return "MISHSTA_1";
		case 257:
			return "MISHSTA_1";
		case 527:
			return "MISHSTA_51";
		case 528:
			return "MISHSTA_52";
		case 529:
			return "MISHSTA_53";
		case 534:
			return "MISHSTA_54";
		case 709:
			return "MISHSTA_55";
		case 576:
			return "MISHSTA_1";
		case 577:
			return "MISHSTA_56";
		case 578:
			return "MISHSTA_57";
		case 579:
			return "MISHSTA_58";
		case 742:
			return "MISHSTA_59";
		case 741:
			return "MISHSTA_60";
		case 743:
			return "MISHSTA_61";
		case 745:
			return "MISHSTA_62";
		case 748:
			return "MISHSTA_62";
		case 747:
			return "MISHSTA_63";
		case 749:
			return "MISHSTA_64";
		case 750:
			return "MISHSTA_65";
		case 751:
			return "MISHSTA_66";
		case 754:
			return "MISHSTA_67";
		case 753:
			return "MISHSTA_68";
		case 757:
			return "MISHSTA_69";
		case 756:
			return "MISHSTA_70";
		case 755:
			return "MISHSTA_71";
		case 759:
			return "MISHSTA_72";
		case 758:
			return "MISHSTA_73";
		case 761:
			return "MISHSTA_74";
		case 760:
			return "MISHSTA_75";
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		case 763:
			return "MISHSTA_77";
		case 766:
			return "MISHSTA_78";
		case 769:
			return "MISHSTA_79";
		case 768:
			return "MISHSTA_80";
		case 767:
			return "MISHSTA_81";
		case 771:
			return "MISHSTA_82";
		case 770:
			return "MISHSTA_83";
		case 773:
			return "MISHSTA_84";
		case 772:
			return "MISHSTA_85";
		case 775:
			return "MISHSTA_86";
		case 774:
			return "MISHSTA_87";
		case 777:
			return "MISHSTA_88";
		case 776:
			return "MISHSTA_89";
		case 779:
			return "MISHSTA_90";
		case 778:
			return "MISHSTA_91";
		case 782:
			return "MISHSTA_92";
		case 780:
			return "MISHSTA_93";
		case 781:
			return "MISHSTA_94";
		case 784:
			return "MISHSTA_95";
		case 783:
			return "MISHSTA_96";
		case 786:
			return "MISHSTA_97";
		case 785:
			return "MISHSTA_98";
		case 788:
			return "MISHSTA_99";
		case 787:
			return "MISHSTA_100";
		case 789:
			return "MISHSTA_101";
		case 792:
			return "MISHSTA_102";
		case 791:
			return "MISHSTA_103";
		case 790:
			return "MISHSTA_104";
		case 793:
			return "MISHSTA_105";
		case 794:
			return "MISHSTA_106";
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		case 796:
			return "MISHSTA_107";
		case 797:
			return "MISHSTA_108";
		case 798:
			return "MISHSTA_109";
		case 799:
			return "MISHSTA_110";
		case 800:
			return "MISHSTA_111";
		case 801:
			return "MISHSTA_112";
		case 802:
			return "MISHSTA_113";
		case 803:
			return "MISHSTA_114";
		case 804:
			return "MISHSTA_115";
		case 805:
			return "MISHSTA_116";
		case 806:
			return "MISHSTA_117";
		case 807:
			return "MISHSTA_118";
		case 808:
			return "MISHSTA_119";
		case 809:
			return "MISHSTA_120";
		case 429:
			return "MISHSTA_1";
		case 441:
			return "MISHSTA_1";
		case 4:
			return "MISHSTA_121";
		case 13:
			return "MISHSTA_11";
		case 341:
			return "MISHSTA_122";
		case 5:
			return "MISHSTA_123";
		case 6:
			return "MISHSTA_124";
		case 20:
			return "MISHSTA_10";
		case 169:
			return "MISHSTA_125";
		case 731:
			return "MISHSTA_126";
		case 737:
			return "MISHSTA_10";
		case 145:
			return "MISHSTA_127";
		case 159:
			return "MISHSTA_10";
		case 353:
			return "MISHSTA_10";
		case 357:
			return "MISHSTA_11";
		case 605:
			return "MISHSTA_11";
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		case 613:
			return "MISHSTA_128";
		case 616:
			return "MISHSTA_129";
		case 628:
			return "MISHSTA_130";
		case 309:
			return "MISHSTA_11";
		case 310:
			return "MISHSTA_10";
		case 313:
			return "MISHSTA_131";
		case 477:
			return "MISHSTA_37";
		case 482:
			return "MISHSTA_132";
		case 484:
			return "MISHSTA_133";
		case 715:
			return "MISHSTA_123";
		case 570:
			return "MISHSTA_10";
		case 566:
			return "MISHSTA_11";
		case 565:
			return "MISHSTA_134";
		case 572:
			return "MISHSTA_135";
		case 574:
			return "MISHSTA_136";
		case 431:
			return "MISHSTA_11";
		case 443:
			return "MISHSTA_137";
		case 446:
			return "MISHSTA_138";
		case 452:
			return "MISHSTA_139";
		case 364:
			return "MISHSTA_11";
		case 365:
			return "MISHSTA_10";
		case 369:
			return "MISHSTA_140";
		case 668:
			return "MISHSTA_11";
		case 670:
			return "MISHSTA_141";
		case 678:
			return "MISHSTA_11";
		case 265:
			return "MISHSTA_11";
		case 266:
			return "MISHSTA_10";
		case 270:
			return "MISHSTA_142";
		case 271:
			return "MISHSTA_143";
		case 272:
			return "MISHSTA_144";
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		case 764:
			return "MISHSTA_146";
		case 330:
			return "MISHSTA_11";
		case 331:
			return "MISHSTA_10";
		case 643:
			return "MISHSTA_147";
		case 644:
			return "MISHSTA_148";
		case 645:
			return "MISHSTA_149";
		case 646:
			return "MISHSTA_150";
		case 404:
			return "MISHSTA_10";
		case 721:
			return "MISHSTA_151";
		case 752:
			return "MISHSTA_152";
		case 147:
			return "MISHSTA_1";
		case 336:
			return "MISHSTA_1";
		case 371:
			return "MISHSTA_1";
		case 557:
			return "MISHSTA_1";
		case 575:
			return "MISHSTA_1";
		case 629:
			return "MISHSTA_1";
		case 647:
			return "MISHSTA_1";
		case 685:
			return "MISHSTA_1";
		case 693:
			return "MISHSTA_1";
		case 738:
			return "MISHSTA_1";
		case 650:
			return "MISHSTA_0";
		case 649:
			return "MISHSTA_153";
		case 825:
			return "MISHSTA_154";
		case 824:
			return "MISHSTA_155";
		case 821:
			return "MISHSTA_156";
		case 820:
			return "MISHSTA_157";
		case 319:
			return "MISHSTA_158";
		case 318:
			return "MISHSTA_159";
		case 317:
			return "MISHSTA_1";
		case 322:
			return "MISHSTA_1";
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		case 324:
			return "MISHSTA_160";
		case 816:
			return "MISHSTA_161";
		case 815:
			return "MISHSTA_162";
		case 814:
			return "MISHSTA_163";
		case 746:
			return "MISHSTA_164";
		case 514:
			return "MISHSTA_165";
		case 744:
			return "MISHSTA_166";
		case 841:
			return "MISHSTA_167";
		case 840:
			return "MISHSTA_1";
		case 838:
			return "MISHSTA_167";
		case 828:
			return "MISHSTA_1";
		case 829:
			return "MISHSTA_167";
		case 831:
			return "MISHSTA_1";
		case 832:
			return "MISHSTA_167";
		case 834:
			return "MISHSTA_1";
		case 835:
			return "MISHSTA_167";
		case 837:
			return "MISHSTA_1";
		case 739:
			return "MISHSTA_168";
		case 619:
			return "MISHSTA_169";
		case 560:
			return "MISHSTA_170";
		case 559:
			return "MISHSTA_171";
		case 558:
			return "MISHSTA_172";
		case 673:
			return "MISHSTA_10";
		case 688:
			return "MISHSTA_10";
		case 687:
			return "MISHSTA_173";
		case 844:
			return "MISHSTA_174";
		case 845:
			return "MISHSTA_175";
		case 843:
			return "MISHSTA_176";
		case 236:
			return "MISHSTA_177";
		case 29:
			return "MISHSTA_178";
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		case 108:
			return "MISHSTA_180";
		case 135:
			return "MISHSTA_181";
		case 227:
			return "MISHSTA_182";
		case 852:
			return "MISHSTA_183";
		case 846:
			return "MISHSTA_184";
		case 440:
			return "MISHSTA_185";
		case 864:
			return "MISHSTA_186";
		case 863:
			return "MISHSTA_187";
		case 861:
			return "MISHSTA_1";
		case 862:
			return "MISHSTA_188";
		case 870:
			return "MISHSTA_1";
		case 544:
			return "MISHSTA_0";
		case 543:
			return "MISHSTA_189";
		case 593:
			return "MISHSTA_190";
		case 592:
			return "MISHSTA_1";
		case 603:
			return "MISHSTA_1";
		case 899:
			return "MISHSTA_1";
		case 900:
			return "MISHSTA_191";
		case 883:
			return "MISHSTA_192";
		case 891:
			return "MISHSTA_192";
		case 657:
			return "MISHSTA_193";
		case 875:
			return "MISHSTA_192";
		case 906:
			return "MISHSTA_194";
		case 706:
			return "MISHSTA_195";
		case 699:
			return "MISHSTA_196";
		case 726:
			return "MISHSTA_197";
		case 237:
			return "MISHSTA_198";
		case 658:
			return "MISHSTA_1";
		case 877:
			return "MISHSTA_0";
		case 885:
			return "MISHSTA_0";
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		case 694:
			return "MISHSTA_110";
		case 881:
			return "MISHSTA_199";
		case 889:
			return "MISHSTA_199";
		case 897:
			return "MISHSTA_199";
		case 633:
			return "MISHSTA_200";
		case 632:
			return "MISHSTA_201";
		case 38:
			return "MISHSTA_202";
		case 41:
			return "MISHSTA_203";
		case 39:
			return "MISHSTA_204";
		case 40:
			return "MISHSTA_205";
		case 42:
			return "MISHSTA_206";
		case 56:
			return "MISHSTA_205";
		case 52:
			return "MISHSTA_202";
		case 53:
			return "MISHSTA_207";
		case 54:
			return "MISHSTA_203";
		case 55:
			return "MISHSTA_206";
		case 70:
			return "MISHSTA_206";
		case 69:
			return "MISHSTA_203";
		case 67:
			return "MISHSTA_132";
		case 68:
			return "MISHSTA_205";
		case 66:
			return "MISHSTA_202";
		case 81:
			return "MISHSTA_202";
		case 82:
			return "MISHSTA_208";
		case 84:
			return "MISHSTA_203";
		case 83:
			return "MISHSTA_205";
		case 85:
			return "MISHSTA_206";
		case 97:
			return "MISHSTA_202";
		case 98:
			return "MISHSTA_209";
		case 100:
			return "MISHSTA_203";
		case 99:
			return "MISHSTA_205";
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

int func_565(int iParam0, int iParam1)//Position - 0x4660
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				case 1:
					return 742;
				default:
			}
			return -1;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				case 1:
					return 744;
				default:
			}
			return -1;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				case 1:
					return 746;
				default:
			}
			return -1;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				case 1:
					return 748;
				default:
			}
			return -1;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				default:
			}
			return -1;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				default:
			}
			return -1;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				case 1:
					return 752;
				default:
			}
			return -1;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				case 1:
					return 754;
				default:
			}
			return -1;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				case 1:
					return 756;
				case 2:
					return 757;
				default:
			}
			return -1;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				case 1:
					return 759;
				default:
			}
			return -1;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				case 1:
					return 761;
				default:
			}
			return -1;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				default:
			}
			return -1;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				default:
			}
			return -1;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				case 1:
					return 765;
				default:
			}
			return -1;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				default:
			}
			return -1;
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				case 1:
					return 768;
				case 2:
					return 769;
				default:
			}
			return -1;
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				case 1:
					return 771;
				default:
			}
			return -1;
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				case 1:
					return 773;
				default:
			}
			return -1;
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				case 1:
					return 775;
				default:
			}
			return -1;
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				case 1:
					return 777;
				default:
			}
			return -1;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				case 1:
					return 779;
				default:
			}
			return -1;
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				case 1:
					return 781;
				case 2:
					return 782;
				default:
			}
			return -1;
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				case 1:
					return 784;
				default:
			}
			return -1;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				case 1:
					return 786;
				default:
			}
			return -1;
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				case 1:
					return 788;
				default:
			}
			return -1;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				default:
			}
			return -1;
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				case 1:
					return 791;
				case 2:
					return 792;
				default:
			}
			return -1;
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				case 1:
					return 794;
				case 2:
					return 795;
				default:
			}
			return -1;
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				case 1:
					return 797;
				default:
			}
			return -1;
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				case 1:
					return 799;
				default:
			}
			return -1;
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				case 1:
					return 801;
				default:
			}
			return -1;
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				case 1:
					return 803;
				default:
			}
			return -1;
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				case 1:
					return 805;
				default:
			}
			return -1;
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				default:
			}
			return -1;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				case 1:
					return 808;
				case 2:
					return 809;
				default:
			}
			return -1;
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				case 1:
					return 829;
				case 2:
					return 830;
				default:
			}
			return -1;
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				case 1:
					return 832;
				case 2:
					return 833;
				default:
			}
			return -1;
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				case 1:
					return 835;
				case 2:
					return 836;
				default:
			}
			return -1;
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				case 1:
					return 838;
				case 2:
					return 839;
				default:
			}
			return -1;
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				case 1:
					return 841;
				case 2:
					return 842;
				default:
			}
			return -1;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				case 1:
					return 844;
				case 2:
					return 845;
				default:
			}
			return -1;
		default:
	}
	return -1;
}

int func_566(int iParam0)//Position - 0x4D7F
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		case 8:
			return 1;
		case 12:
			return 1;
		case 14:
			return 2;
		case 16:
			return 2;
		case 17:
			return 3;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 2;
		case 23:
			return 1;
		case 25:
			return 3;
		case 26:
			return 2;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 2;
		case 32:
			return 2;
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		case 34:
			return 2;
		case 38:
			return 2;
		case 39:
			return 2;
		case 40:
			return 1;
		case 41:
			return 3;
		case 42:
			return 3;
		case 43:
			return 2;
		case 46:
			return 2;
		case 47:
			return 2;
		case 49:
			return 2;
		case 50:
			return 2;
		case 51:
			return 1;
		case 57:
			return 3;
		case 58:
			return 3;
		case 59:
			return 3;
		case 60:
			return 3;
		case 61:
			return 3;
		case 62:
			return 3;
		case 24:
			return 3;
		default:
	}
	return 0;
}

int func_567(int iParam0, int iParam1)//Position - 0x1513
{
	switch (iParam1)
	{
		case 1:
			if (__LIB_37__::func_991(iParam0))
			{
				return __LIB_38__::func_16();
			}
			else
			{
				return Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iParam0 /*6*/];
			}
			break;
		case 7:
			return BitTest(Global_113386.f_18574[iParam0 /*6*/], 3);
			break;
		default:
			break;
	}
	return 0;
}

char* func_568(int iParam0)//Position - 0x1606
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		case 15:
			sVar0 = "sex_loop_male";
			break;
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_569(int iParam0)//Position - 0x17C4
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

bool func_570(bool bParam0, bool bParam1)//Position - 0x1A8B
{
	bool bVar0;
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4;
		}
	}
	return bVar0;
}

char* func_571()//Position - 0x1B6D
{
	return "mini@prostitutes@sexnorm_veh";
}

void func_572(char* sParam0)//Position - 0x2E4D
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
}

int func_573(int iParam0, bool bParam1)//Position - 0x16ABF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_156(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
				if (__LIB_0__::func_156(iVar2, 1, 1))
				{
					if (PLAYER::GET_PLAYER_PED(iVar2) != iVar0)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), iVar3, bParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_574(int iParam0, int iParam1)//Position - 0x14CFD
{
	__LIB_0__::func_964(iParam0, iParam1);
}

bool func_575(var uParam0)//Position - 0x1511B
{
	return __LIB_31__::func_751(uParam0);
}

void func_576(var uParam0, bool bParam1)//Position - 0x145B5
{
	int iVar0;
	if (!bParam1)
	{
		__LIB_31__::func_750(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_14__::func_579(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_577(int iParam0, struct<3> Param1, float fParam2)//Position - 0x1A919
{
	*iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
	if (*iParam0 == 0)
	{
	}
	else
	{
		GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, Param1, fParam2);
	}
}

int func_578()//Position - 0x1AFB8
{
	if (Global_43052 == 9 || Global_43052 == 10)
	{
		return Global_112036;
	}
	Global_112036 = 0;
	return 0;
}

Vector3 func_579(int iParam0, bool bParam1)//Position - 0x10DA
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		case 1:
			return -1595.7422f, 2799.3706f, 16.0205f;
			break;
		case 2:
			if (bParam1 == 1)
			{
				return -197.14859f, 1482.6846f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.6971f, 289.4303f;
			}
			break;
		case 3:
			return 256.77f, 2841.0466f, 42.6599f;
			break;
		case 4:
			return -1360.2231f, 4435.7515f, 27.7754f;
			break;
		case 5:
			return 64.63f, 7051.2534f, 15.8272f;
			break;
		case 6:
			return -456.2838f, 1593.7988f, 358.0119f;
			break;
		case 7:
			if (bParam1 == 1)
			{
				return -3114.617f, 749.84454f, 11.59352f;
			}
			else
			{
				return -3111.6143f, 749.2816f, 12.6285f;
			}
			break;
		case 8:
			return 713.6797f, 4095.9688f, 33.765f;
			break;
		case 9:
			return 255.2671f, 2586.2815f, 43.9619f;
			break;
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		case 11:
			return 3111.531f, 2214.8481f, -8.6457f;
			break;
		case 12:
			if (bParam1 == 1)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		case 13:
			return -2360f, 3245f, 91.9f;
			break;
		case 14:
			return 1691.1517f, 2640.859f, 54.0693f;
			break;
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		case 16:
			return -2979f, 1588f, 23.3f;
			break;
		case 17:
			return 963.5308f, -1824.0399f, 30.0708f;
			break;
		case 18:
			return -295.41867f, 6188.7856f, 30.48932f;
			break;
		case 19:
			return -1778f, 124f, 67.9f;
			break;
		case 20:
			if (bParam1 == 1)
			{
				return 157.57587f, 3133.9941f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.8538f, 42.5892f;
			}
			break;
		case 21:
			return -888f, 5406f, 30.5f;
			break;
		case 22:
			return -1840f, 793f, 138.7f;
			break;
		case 23:
			if (bParam1 == 1)
			{
				return -495.80392f, -1750.2067f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				return -1764.695f, -265.58093f, 47.6187f;
			}
			else
			{
				return -1763.3588f, -263.2062f, 47.1481f;
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				return 548.0715f, -1642.4506f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		case 27:
			if (bParam1 == 1)
			{
				return 701.0009f, -1179.7015f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.6705f, 33.2608f;
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.5347f, -442.8484f, 113.0888f;
			}
			break;
		case 30:
			return -553.1764f, -2239.8767f, 121.3704f;
			break;
		case 31:
			if (bParam1 == 1)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		case 32:
			return -1048f, -836f, 10.5f;
			break;
		case 33:
			return 312.6026f, 6606.8965f, 27.8835f;
			break;
		case 34:
			return -37.21f, 2871.26f, 58.61f;
			break;
		case 35:
			if (bParam1 == 1)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		case 37:
			return 57.8219f, -1932.1208f, 20.4939f;
			break;
		case 38:
			return 378.26f, -334.3f, 45.63f;
			break;
		case 39:
			if (bParam1 == 1)
			{
				return 2673.6624f, 2793.7021f, 31.8124f;
			}
			else
			{
				return 2676.0454f, 2793.2493f, 39.5934f;
			}
			break;
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		case 41:
			if (bParam1 == 1)
			{
				return -1641.139f, -1032.8152f, 4.63165f;
			}
			else
			{
				return -1640.5464f, -1034.1287f, 4.6074f;
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		case 43:
			return -1276.9862f, -2451.8862f, 72.0481f;
			break;
		case 44:
			if (bParam1 == 1)
			{
				return -403.58267f, 1056.2117f, 322.84143f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		case 45:
			return 2728.9866f, 1576.3821f, 65.5818f;
			break;
		case 46:
			if (bParam1 == 1)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		case 47:
			return 2092.2253f, 2492.3015f, 89.4046f;
			break;
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		case 49:
			if (bParam1 == 1)
			{
				return -405.5299f, 323.40634f, 107.72269f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		case 50:
			return -1087.31f, -2429.3f, 13f;
			break;
		case 51:
			return -1042.6445f, 879.7763f, 160.2144f;
			break;
		case 52:
			if (bParam1 == 1)
			{
				return -1081.2289f, 678.94543f, 141.80563f;
			}
			else
			{
				return -1078.3499f, 682.2944f, 144.904f;
			}
			break;
		case 53:
			return -402.0679f, 1355.0619f, 329.8384f;
			break;
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		case 55:
			return 186.9f, 243.0269f, 140.55f;
			break;
		case 56:
			if (bParam1 == 1)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		case 57:
			if (bParam1 == 1)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		case 59:
			return -1755.0115f, 184.3929f, 63.3711f;
			break;
		case 60:
			if (bParam1 == 1)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.9507f, 52.0981f;
			}
			break;
		case 61:
			return 1707.2278f, 4920.156f, 41.0637f;
			break;
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		case 63:
			return -2188f, 4251f, 48f;
			break;
		case 64:
			if (bParam1 == 1)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		case 65:
			return 581f, -2805f, 5.5f;
			break;
		case 66:
			if (bParam1 == 1)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.0398f, 7.5968f;
			}
			break;
		case 67:
			return 1442.9049f, -1479.7588f, 62.2245f;
			break;
		case 68:
			if (bParam1 == 1)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		case 70:
			return 2833f, 2807f, 56.3785f;
			break;
		case 71:
			if (bParam1 == 1)
			{
				return 92.14449f, 6360.1816f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		case 72:
			return -2231.5142f, 3477.7915f, 29.3291f;
			break;
		case 73:
			return 377f, 3582f, 32.5f;
			break;
		case 74:
			if (bParam1 == 1)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		case 75:
			if (bParam1 == 1)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		case 76:
			if (bParam1 == 1)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.8832f, -2051.0264f, 13.2268f;
			}
			break;
		case 77:
			if (bParam1 == 1)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		case 79:
			return 226.7f, -1761f, 28.5f;
			break;
		case 80:
			if (bParam1 == 1)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		case 81:
			if (bParam1 == 1)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.8291f, 3798.2166f, 33.4563f;
			}
			break;
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		case 83:
			return -2319f, 4124f, 26f;
			break;
		case 84:
			return -3185f, 1053f, 20.2f;
			break;
		case 85:
			return 818.9215f, -3188.1667f, 4.9007f;
			break;
		case 86:
			if (bParam1 == 1)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		case 87:
			if (bParam1 == 1)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		case 89:
			if (bParam1 == 1)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		case 90:
			if (bParam1 == 1)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.5537f, 3463.5254f, 54.7144f;
			}
			break;
		case 91:
			return 1898.8965f, 4921.9746f, 47.8088f;
			break;
		case 92:
			if (bParam1 == 1)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.3853f, 31.4906f;
			}
			break;
		case 93:
			return -1171f, 4927f, 224f;
			break;
		case 94:
			return -281.1712f, 2528.0125f, 73.6376f;
			break;
		case 95:
			if (bParam1 == 1)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.9668f, 38.7395f;
			}
			break;
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		case 97:
			if (bParam1 == 1)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.2826f, 4940.2856f, 221.3038f;
			}
			break;
		case 98:
			return 441.64f, 5570.38f, 780.45f;
			break;
		case 99:
			if (bParam1)
			{
				return 1353.1516f, 4377.2227f, 43.3416f;
			}
			else
			{
				return 1357.2092f, 4388.445f, 43.872f;
			}
			break;
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		case 101:
			return 2492.6902f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_580(int iParam0, bool bParam1)//Position - 0x259C
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
			break;
		case 1:
			if (bParam1 == 1)
			{
				return -1048.5695f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.2772f, 4918.7393f, 211.5379f;
			}
			break;
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		case 3:
			if (bParam1 == 1)
			{
				return -247.62189f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				return -2924.6968f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		case 7:
			if (bParam1 == 1)
			{
				return 124.00925f, -673.00964f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				return 1195.7374f, -1481.6945f, 33.8595f;
			}
			else
			{
				return 1194.7092f, -1482.4723f, 33.9594f;
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				return -35.88743f, 1945.7378f, 189.18681f;
			}
			else
			{
				return -35.5254f, 1947.2894f, 189.186f;
			}
			break;
		case 10:
			if (bParam1)
			{
				return 753.4579f, 4174.9956f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				return 1791.2565f, 4592.3833f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		case 12:
			return 341.311f, 2618.9182f, 43.5124f;
			break;
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		case 14:
			if (bParam1 == 1)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				return 1659.4376f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.3992f, 4865.8394f, 41f;
			}
			break;
		case 17:
			return -1144.5892f, -2004.4523f, 12.3803f;
			break;
		case 18:
			if (bParam1 == 1)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				return -1576.0459f, -587.82574f, 33.97909f;
			}
			else
			{
				return -1576.8167f, -586.3887f, 34.8528f;
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				return 1134.2009f, -665.94135f, 56.08261f;
			}
			else
			{
				return 1135.4014f, -663.7875f, 56.088f;
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				return -2196.1975f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.0288f, 250.4256f, 173.6017f;
			}
			break;
		case 23:
			return 29.2f, 3635.4f, 39.8f;
			break;
		case 24:
			if (bParam1 == 1)
			{
				return 1724.4291f, 3299.0234f, 40.2235f;
			}
			else
			{
				return 1721.9596f, 3300.4644f, 40.3835f;
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				return 2617.3206f, 3659.452f, 100.38673f;
			}
			else
			{
				return 2612.7124f, 3662.5642f, 101.1074f;
			}
			break;
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		case 27:
			if (bParam1 == 1)
			{
				return 2432.6072f, 4994.3335f, 45.25828f;
			}
			else
			{
				return 2430.9065f, 4995.561f, 45.2685f;
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				return 3722.4556f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		case 31:
			if (bParam1 == 1)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		case 32:
			return -445.26f, -442.49f, 32.26f;
			break;
		case 33:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		case 34:
			return 2822.2f, -741.4f, 1.8f;
			break;
		case 35:
			if (bParam1 == 1)
			{
				return -3166.9783f, 1102.6224f, 19.80827f;
			}
			else
			{
				return -3165.6125f, 1102.2405f, 19.8928f;
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				return 1842.8818f, 3670.4568f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				return 1828.7944f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				return 1439.0122f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				return -782.5126f, -1352.2454f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				return 962.88055f, -1826.4192f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				return -1246.155f, -1531.6471f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				return -765.5466f, 698.8101f, 143.36932f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		case 44:
			if (bParam1 == 1)
			{
				return -512.10944f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		case 45:
			if (bParam1 == 1)
			{
				return 781.38385f, 1292.073f, 359.29965f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		case 46:
			return 208.69f, 337.76f, 104.64f;
			break;
		case 47:
			if (bParam1 == 1)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		case 48:
			return 153.6156f, -3073.9983f, 4.8962f;
			break;
		case 49:
			if (bParam1)
			{
				return -306.2449f, -1180.5382f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		case 50:
			return -2006.9866f, -556.4998f, 11.8813f;
			break;
		case 51:
			if (bParam1 == 1)
			{
				return -590.20795f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		case 52:
			return -1795.8262f, -855.7111f, 8.2048f;
			break;
		case 53:
			return -1557.108f, -1155.2465f, 2.9158f;
			break;
		case 54:
			if (bParam1 == 1)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.4833f, -1387.5068f, 3.1432f;
			}
			break;
		case 55:
			return -684.8126f, -180.648f, 48.02f;
			break;
		case 56:
			if (bParam1 == 1)
			{
				return -1311.4127f, 640.11536f, 136.92444f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		case 57:
			return 2493.6855f, 4963.541f, 43.7358f;
			break;
		case 58:
			if (bParam1 == 1)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.6086f, 3605.7986f, 34.9939f;
			}
			break;
		case 59:
			if (bParam1 == 1)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		case 60:
			if (bParam1 == 1)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.4043f, 75.253f;
			}
			break;
		case 61:
			if (bParam1 == 1)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.9047f, 24.3295f;
			}
			break;
		case 62:
			if (bParam1 == 1)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		case 63:
			return 155.384f, -741.179f, 258.6519f;
			break;
		case 64:
			if (bParam1 == 1)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		case 65:
			return 27.449f, -625.31f, 15.462f;
			break;
		case 66:
			if (bParam1 == 1)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		case 67:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		case 68:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		case 69:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		case 70:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		case 71:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		case 72:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		case 73:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		case 74:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_581(int iParam0, bool bParam1)//Position - 0x39F7
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.1838f, 4.7209f;
			break;
		case 1:
			if (bParam1 == 1)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				return 1173.8392f, -1499.7808f, 33.84875f;
			}
			else
			{
				return 1173.5656f, -1495.7628f, 34.1121f;
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				return -461.71393f, -1699.2019f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		case 4:
			return -1384.6276f, -521.0416f, 30.084f;
			break;
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		case 8:
			if (bParam1 == 1)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.0792f, 40.93f;
			}
			break;
		case 9:
			return -1268.0712f, -1917.4076f, 4.8583f;
			break;
		case 10:
			return -1221.908f, -2771.7622f, 13.0545f;
			break;
		case 11:
			return -3088.6682f, 652.9629f, 0.989f;
			break;
		case 12:
			if (bParam1 == 1)
			{
				return -629.3048f, 2036.0667f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				return -2071.9026f, 3411.5042f, 30.36414f;
			}
			else
			{
				return -2048.4832f, 3406.1624f, 31.1504f;
			}
			break;
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		case 16:
			if (bParam1 == 1)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				return 1663.9004f, -25.91945f, 172.77475f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				return 2614.4507f, 1695.1271f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.4167f, 30.8743f;
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.6766f, 321.2431f;
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				return 859.5025f, 2426.0396f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.5361f, 60.8942f;
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				return -1822.0751f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.9667f, 803.8147f, 138.2005f;
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				return -1852.9221f, 2054.4197f, 139.98405f;
			}
			else
			{
				return -1851.6283f, 2053.836f, 139.9841f;
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				return -1075.5149f, 4898.4966f, 213.27675f;
			}
			else
			{
				return -1070.6506f, 4898.9336f, 213.2752f;
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				return 1840.5687f, 3693.7703f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		case 27:
			return 533.1f, -23.8f, 70.6f;
			break;
		case 28:
			if (bParam1 == 1)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		case 29:
			return -1119.4977f, -847.3371f, 18.6886f;
			break;
		case 30:
			return 391.2f, -1603.9f, 28.38f;
			break;
		case 31:
			return -890.8f, -2386.2f, 13.4f;
			break;
		case 32:
			if (bParam1 == 1)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		case 33:
			return -2003.1145f, 544.7549f, 114.5077f;
			break;
		case 34:
			if (bParam1 == 1)
			{
				return -397.57858f, 1127.3531f, 321.72913f;
			}
			else
			{
				return -386.8739f, 1142.4197f, 321.5892f;
			}
			break;
		case 35:
			return -1521.8113f, 1560.201f, 106.9392f;
			break;
		case 36:
			return 1391.9453f, 3616.6548f, 37.9259f;
			break;
		case 37:
			if (bParam1 == 1)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.6055f, 38.7487f;
			}
			break;
		case 39:
			return 119.45f, -755.29f, 258.15f;
			break;
		case 40:
			if (bParam1 == 1)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		case 42:
			if (bParam1 == 1)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		case 43:
			if (bParam1)
			{
				return 1333.0566f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.3549f, 4392.887f, 44.012f;
			}
			break;
		case 44:
			if (bParam1 == 1)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.3918f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_582(char* sParam0, int* iParam1, bool bParam2)//Position - 0x6B327
{
	if (!BitTest(*iParam1, bParam2))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
			{
				MISC::SET_BIT(iParam1, bParam2);
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

int func_583(char* sParam0, int* iParam1, bool bParam2)//Position - 0x6B365
{
	if (!BitTest(*iParam1, bParam2))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			MISC::SET_BIT(iParam1, bParam2);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_584(int iParam0, int iParam1, int iParam2)//Position - 0x6CEF8
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_41, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_41, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_41, 2);
	}
}

void func_585(int iParam0)//Position - 0x6D8F8
{
	int iVar0;
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(iLocal_41, 3))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&iLocal_41, 3);
			}
		}
		else if (BitTest(iLocal_41, 3))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&iLocal_41, 3);
		}
	}
}

char* func_586(int iParam0)//Position - 0x6DDAF
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

int func_587()//Position - 0x6E4DE
{
	return CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", CAM::GET_GAMEPLAY_CAM_COORD(), CAM::GET_GAMEPLAY_CAM_ROT(2), CAM::GET_GAMEPLAY_CAM_FOV(), false, 2);
}

bool func_588()//Position - 0x700C0
{
	return PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/);
}

void func_589(int* iParam0, float fParam1)//Position - 0x71AC3
{
	if (__LIB_1__::func_13(iParam0))
	{
		__LIB_0__::func_706(iParam0, (__LIB_2__::func_572(iParam0) + fParam1));
	}
}

void func_590(var uParam0, int iParam1)//Position - 0x72920
{
	*uParam0 = 0;
	uParam0->f_1 = 0.6f;
	uParam0->f_2 = 0.6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 24;
}

float func_591(float fParam0, int iParam1)//Position - 0x72988
{
	var uVar0;
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_592(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x733A8
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

float func_593(float fParam0, int iParam1, bool bParam2)//Position - 0x734EC
{
	var uVar0;
	float fVar1;
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_594(var uParam0, int iParam1)//Position - 0x7360A
{
	*uParam0 = 4;
	uParam0->f_1 = 0.45f;
	uParam0->f_2 = 0.45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 29;
}

void func_595(var uParam0, int iParam1)//Position - 0x73653
{
	*uParam0 = 0;
	uParam0->f_1 = 0.275f;
	uParam0->f_2 = 0.275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 28;
}

void func_596(var uParam0, int iParam1)//Position - 0x7369C
{
	*uParam0 = 0;
	uParam0->f_1 = 0.3375f;
	uParam0->f_2 = 0.3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 27;
}

void func_597(var uParam0, int iParam1)//Position - 0x736E5
{
	*uParam0 = 0;
	uParam0->f_1 = 0.35f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 26;
}

void func_598(var uParam0, int iParam1)//Position - 0x7372E
{
	*uParam0 = 0;
	uParam0->f_1 = 0.325f;
	uParam0->f_2 = 0.325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 25;
}

void func_599(var uParam0, int iParam1)//Position - 0x73777
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_600(var uParam0, int iParam1)//Position - 0x737C9
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 13;
}

void func_601(var uParam0, int iParam1)//Position - 0x7381B
{
	*uParam0 = 5;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.628f - 0.18f) - 0.058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 12;
}

void func_602(var uParam0, int iParam1, int iParam2)//Position - 0x73873
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.889f - 0.01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10;
}

void func_603(var uParam0, int iParam1, int iParam2)//Position - 0x738C6
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_604(var uParam0, int iParam1)//Position - 0x73983
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 2;
}

void func_605(var uParam0, int iParam1)//Position - 0x739CE
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 22;
}

void func_606(var uParam0, int iParam1)//Position - 0x73AB0
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 3;
}

void func_607(var uParam0, int iParam1)//Position - 0x73AFB
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 8;
}

void func_608(var uParam0, int iParam1)//Position - 0x73B47
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

void func_609(var uParam0, int iParam1)//Position - 0x73B92
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 1;
}

void func_610(var uParam0, int iParam1)//Position - 0x73BDD
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
}

void func_611(int* iParam0, bool bParam1)//Position - 0x8EFF1
{
	if (bParam1)
	{
		__LIB_0__::func_989(&(iParam0->f_1), 1024);
	}
	else
	{
		__LIB_0__::func_988(&(iParam0->f_1), 1024);
	}
}

bool func_612(int* iParam0)//Position - 0x90820
{
	return (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false, -1));
}

void func_613(int* iParam0)//Position - 0x90891
{
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false, -1);
}

void func_614(int* iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6694A
{
	if (*iParam0 == 0)
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
	if (bParam1)
	{
		__LIB_0__::func_989(&(iParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		__LIB_0__::func_989(&(iParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*iParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			__LIB_0__::func_989(&(iParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		__LIB_0__::func_989(&(iParam0->f_1), 8192);
	}
}

void func_615(var uParam0, int iParam1)//Position - 0x6F17D
{
	__LIB_0__::func_345(uParam0, iParam1, 0);
}

void func_616(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4, int iParam5)//Position - 0x80F7C
{
	if (!__LIB_1__::func_76(sParam2))
	{
		if (__LIB_1__::func_755())
		{
			__LIB_1__::func_111(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
			__LIB_3__::func_41(__LIB_1__::func_110(*uParam0), __LIB_1__::func_109(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}
}

int func_617(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x81827
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	iVar7 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return -1;
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	if (bParam8)
	{
		if (!GRAPHICS::GET_IS_WIDESCREEN())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fParam0, fParam1, &fParam0, &fParam1);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	fVar3 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = SYSTEM::FLOOR((fVar4 / fParam3));
		if (bParam7)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
			__LIB_3__::func_48(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			__LIB_3__::func_48(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_618(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x80CA8
{
	char* sVar0;
	sVar0 = sParam2;
	if (!__LIB_1__::func_76(sVar0))
	{
		if (__LIB_1__::func_755())
		{
			__LIB_1__::func_111(uParam1, 0);
			HUD::SET_TEXT_JUSTIFICATION(iParam4);
			__LIB_3__::func_42(__LIB_1__::func_110(*uParam0), __LIB_1__::func_109(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

void func_619(var uParam0, struct<3> Param1)//Position - 0x6F18E
{
	__LIB_38__::func_478(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_620(int iParam0)//Position - 0x7146A
{
	if (Global_43052 == 9 || Global_43052 == 10)
	{
		Global_112036 = iParam0;
	}
	else
	{
		Global_112036 = 0;
	}
}

int func_621()//Position - 0x7254F
{
	return Global_2667225.f_2675;
}

int func_622(int iParam0)//Position - 0x7719D
{
	switch (iParam0)
	{
		case 0:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_0");
		case 1:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_1");
		case 2:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_2");
		case 3:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_3");
		case 4:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_4");
		case 5:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_5");
		case 6:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_6");
		case 7:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_7");
		case 8:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_8");
		case 9:
			return joaat("MPPLY_PILOT_SCHOOL_MEDAL_9");
		default:
	}
	return joaat("MPPLY_PILOT_SCHOOL_MEDAL_0");
}

void func_623(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x796E7
{
	struct<3> Var0;
	bool bVar1;
	float fVar2;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0) < fParam1)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, fParam1);
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	bVar1 = false;
	if (bParam2)
	{
		fVar2 = (MISC::GET_FRAME_TIME() * 45f);
		if (Var0.f_0 < -fVar2)
		{
			bVar1 = true;
			Var0.f_0 = (Var0.f_0 + fVar2);
		}
		else if (Var0.f_0 < fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		else if (Var0.f_0 > fVar2)
		{
			bVar1 = true;
			Var0.f_0 = (Var0.f_0 - fVar2);
		}
		else if (Var0.f_0 > fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		if (Var0.f_1 < -fVar2)
		{
			bVar1 = true;
			Var0.f_1 = (Var0.f_1 + fVar2);
		}
		else if (Var0.f_1 < fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
		else if (Var0.f_1 > fVar2)
		{
			bVar1 = true;
			Var0.f_1 = (Var0.f_1 - fVar2);
		}
		else if (Var0.f_1 > fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
	}
	else
	{
		if (Var0.f_0 != fParam3)
		{
			bVar1 = true;
			Var0.f_0 = fParam3;
		}
		if (Var0.f_1 != fParam4)
		{
			bVar1 = true;
			Var0.f_1 = fParam4;
		}
	}
	if (bVar1)
	{
		ENTITY::SET_ENTITY_ROTATION(iParam0, Var0, 2, true);
	}
}

int func_624(int iParam0)//Position - 0x7A7C7
{
	struct<3> Var0;
	float fVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		fVar1 = 0f;
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			if (Var0.f_2 > (fVar1 + 1.5f))
			{
				return 1;
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_625(struct<3> Param0)//Position - 0x7CB1C
{
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, __LIB_38__::func_473(Param0, 25, 200), false, false, 2, false, 0, 0, false);
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, __LIB_38__::func_473(Param0, 25, 200), false, false, 2, false, 0, 0, false);
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, __LIB_38__::func_473(Param0, 25, 200), false, false, 2, false, 0, 0, false);
}

void func_626()//Position - 0x80F90
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
}

void func_627(int iParam0, int iParam1)//Position - 0x81021
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "TRANSITION_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_628(struct<3> Param0, struct<3> Param1)//Position - 0x82CF0
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	iVar0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0 + Param1, 0.125f, 1, 0, 4);
	iVar1 = 0;
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar0, &iVar1, &uVar2, &uVar2, &uVar3);
	if (iVar4 == 0)
	{
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	else if (iVar4 == 2)
	{
		if (iVar1 == 1)
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

int func_629(struct<3> Param0)//Position - 0x84ACB
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, __LIB_0__::func_85(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

void func_630(int iParam0)//Position - 0x84BF6
{
	Global_2727066 = iParam0;
}

void func_631(int iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x850C9
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(5, iVar0);
		Global_1649593.f_3705[iVar0] = iParam0;
		Global_1649593.f_3705.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_3705.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3705.f_194[iVar0] = uParam3;
		Global_1649593.f_3705.f_183[iVar0] = iParam4;
		Global_1649593.f_3705.f_216[iVar0] = iParam5;
		Global_1649593.f_3705.f_227[iVar0] = iParam6;
		Global_1649593.f_3705.f_270[iVar0] = iParam7;
		Global_1649593.f_3705.f_281[iVar0] = iParam8;
		Global_1649593.f_3705.f_292[iVar0] = iParam9;
		Global_1649593.f_3705.f_303[iVar0] = iParam10;
		Global_1649593.f_3705.f_314[iVar0] = iParam11;
		Global_1649593.f_3705.f_325[iVar0] = iParam12;
	}
}

void func_632(struct<3> Param0, var uParam1, var uParam2)//Position - 0x85F6B
{
	Param0 = { Param0 };
	uParam1 = uParam1;
	uParam2 = uParam2;
}

void func_633(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, char* sParam12)//Position - 0x87B05
{
	__LIB_1__::func_111(&uParam1, 0);
	HUD::SET_TEXT_RIGHT_JUSTIFY(false);
	HUD::SET_TEXT_CENTRE(false);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam12);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(Param0.f_0, Param0.f_1, 0);
}

void func_634(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x920FE
{
	*uParam0 = __LIB_38__::func_591(fParam1, 1280);
	uParam0->f_1 = __LIB_18__::func_752(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_635(var uParam0, float fParam1, float fParam2)//Position - 0x92140
{
	uParam0->f_2 = __LIB_38__::func_591(fParam1, 1280);
	uParam0->f_3 = __LIB_18__::func_752(fParam2, 720);
}

void func_636(var uParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x92236
{
	*uParam0 = __LIB_38__::func_591(fParam1, 1280);
	uParam0->f_1 = __LIB_18__::func_752(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_637(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x99CF2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (iParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
			fVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
			fVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
			fVar3 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
		}
		else
		{
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
			fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
		}
	}
	else if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar1 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
		fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar1 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		fVar2 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
		fVar3 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_638()//Position - 0x9BA06
{
	CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.07f);
}

float func_639(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)//Position - 0xA4952
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_111(uParam3, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(sParam1);
	iVar0 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!GRAPHICS::GET_IS_WIDESCREEN())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = __LIB_18__::func_752(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = __LIB_18__::func_752(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_640(var uParam0)//Position - 0xA49C9
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_641(float fParam0, var uParam1)//Position - 0xA4A16
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_642(float fParam0, bool bParam1)//Position - 0xA4A6A
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_643(var uParam0)//Position - 0xA4B1B
{
	__LIB_18__::func_777(uParam0, 108);
}

void func_644(var uParam0)//Position - 0xA4B2B
{
	__LIB_18__::func_777(uParam0, 109);
}

float func_645(float fParam0)//Position - 0xA4C98
{
	if (fParam0 < 0f)
	{
		return 0f;
	}
	return fParam0;
}

void func_646(var uParam0)//Position - 0xA4D08
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_647(var uParam0, var uParam1, float fParam2, float fParam3)//Position - 0xA4D78
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_648()//Position - 0xA572C
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", true);
}

bool func_649(int iParam0, var uParam1)//Position - 0xA5744
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/);
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/);
	if (MISC::ABSI(iVar1) < 28 && MISC::ABSI(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		case 1:
			bVar0 = iVar2 > 156;
			break;
		case 2:
			bVar0 = iVar1 < 100;
			break;
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = MISC::GET_GAME_TIMER();
		*uParam1 = 0;
	}
	return bVar0;
}

void func_650()//Position - 0xA5A93
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}

void func_651()//Position - 0xB2E1E
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}

float func_652(float fParam0, int iParam1, bool bParam2)//Position - 0xB459C
{
	var uVar0;
	float fVar1;
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_653(var uParam0, int iParam1)//Position - 0xB4BB3
{
	MISC::SET_BIT(&(uParam0->f_29), iParam1);
}

Vector3 func_654(struct<3> Param0)//Position - 0xB4D77
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = (-SYSTEM::SIN(Param0.f_2) * SYSTEM::COS(Param0.f_0));
	fVar1 = (SYSTEM::COS(Param0.f_2) * SYSTEM::COS(Param0.f_0));
	fVar2 = SYSTEM::SIN(Param0.f_0);
	return fVar0, fVar1, fVar2;
}

int func_655()//Position - 0xB4EC3
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("mission_quit");
}

void func_656(var uParam0)//Position - 0xB568F
{
	uParam0->f_3 = 0;
}

void func_657(bool bParam0, bool bParam1)//Position - 0xB601C
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	if (bParam1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	if (bParam0)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	}
}

void func_658(int iParam0)//Position - 0xBE53C
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 6);
	}
}

bool func_659()//Position - 0x7AA1B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	Var0 = { -1367.2f, -3107.144f, 0f };
	Var1 = { -1383.2f, -3134.856f, 15f };
	Var2 = { -1356.894f, -2245.594f, 0f };
	Var3 = { -1648.882f, -2753.091f, 15f };
	fVar4 = 600f;
	fVar5 = 35f;
	Var6 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
	Var0.f_2 = Var6.f_2;
	Var1.f_2 = Var6.f_2;
	return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar4, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, fVar5, false, true, 0));
}

void func_660(var uParam0)//Position - 0x9225D
{
	__LIB_38__::func_610(uParam0, 0);
	__LIB_38__::func_609(&(uParam0->f_11), 0);
	__LIB_38__::func_608(&(uParam0->f_66), 0);
	__LIB_38__::func_607(&(uParam0->f_77), 0);
	__LIB_38__::func_606(&(uParam0->f_33), 0);
	__LIB_18__::func_804(&(uParam0->f_44), 0);
	__LIB_18__::func_776(&(uParam0->f_55), 0);
	__LIB_38__::func_605(&(uParam0->f_143), 0);
	__LIB_38__::func_604(&(uParam0->f_22), 0);
	__LIB_18__::func_779(&(uParam0->f_154), 0);
	__LIB_38__::func_603(&(uParam0->f_88), 0, 0);
	__LIB_38__::func_602(&(uParam0->f_99), 0, 5);
	__LIB_38__::func_601(&(uParam0->f_110), 0);
	__LIB_38__::func_600(&(uParam0->f_121), 0);
	__LIB_38__::func_599(&(uParam0->f_132), 0);
	__LIB_38__::func_590(&(uParam0->f_165), 0);
	__LIB_38__::func_598(&(uParam0->f_176), 0);
	__LIB_38__::func_597(&(uParam0->f_187), 0);
	__LIB_38__::func_596(&(uParam0->f_198), 0);
	__LIB_38__::func_595(&(uParam0->f_209), 0);
	__LIB_38__::func_594(&(uParam0->f_220), 0);
}

void func_661(var uParam0)//Position - 0xA49E6
{
	__LIB_18__::func_778(uParam0, 107);
}

void func_662(var uParam0)//Position - 0xA49F6
{
	__LIB_18__::func_778(uParam0, 108);
}

void func_663(var uParam0)//Position - 0xA4A06
{
	__LIB_18__::func_778(uParam0, 109);
}

void func_664(var uParam0)//Position - 0xA4AE3
{
	__LIB_18__::func_777(uParam0, 107);
}

void func_665(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)//Position - 0xA4CAD
{
	char* sVar0;
	if (__LIB_1__::func_755())
	{
		__LIB_1__::func_111(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(bParam6);
		HUD::SET_TEXT_CENTRE(bParam5);
		if (__LIB_1__::func_76(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(__LIB_1__::func_110(*uParam0), __LIB_1__::func_109(uParam0->f_1), 0);
	}
}

void func_666(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)//Position - 0xA4D1A
{
	char* sVar0;
	sVar0 = sParam2;
	if (!__LIB_1__::func_76(sVar0))
	{
		if (__LIB_1__::func_755())
		{
			__LIB_1__::func_111(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(bParam4);
			HUD::SET_TEXT_CENTRE(bParam3);
			__LIB_13__::func_84(__LIB_1__::func_110(*uParam0), __LIB_1__::func_109(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_667(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0xA4F3E
{
	struct<9> Var0;
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			__LIB_2__::func_502(&Var0);
			break;
		case 1:
			__LIB_2__::func_501(&Var0);
			break;
		case 5:
			__LIB_2__::func_500(&Var0);
			break;
		case 6:
			__LIB_2__::func_499(&Var0);
			break;
		case 7:
			__LIB_2__::func_498(&Var0);
			break;
		case 8:
			__LIB_2__::func_497(&Var0);
			break;
		case 9:
			__LIB_2__::func_496(&Var0);
			break;
	}
	if (__LIB_1__::func_755())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, __LIB_1__::func_110(Var0.f_0), __LIB_1__::func_109(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, __LIB_1__::func_110(Var0.f_0), __LIB_1__::func_109(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, bParam6, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

int func_668(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x782FC
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	if (bParam7)
	{
		__LIB_1__::func_266(&(uParam0->f_2), 1);
	}
	if (!__LIB_1__::func_13(&(uParam0->f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_2));
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (__LIB_1__::func_13(&(uParam0->f_2)))
		{
			if (__LIB_2__::func_213(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (__LIB_0__::func_616(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					__LIB_1__::func_12(&(uParam0->f_2));
					if (__LIB_0__::func_703(uParam0->f_1, 1))
					{
						__LIB_1__::func_330(&(uParam0->f_1), 8);
						HUD::GET_HUD_COLOUR(18, &iVar5, &iVar6, &iVar7, &uVar8);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
						__LIB_0__::func_610("CNTDWN_GO" /* GXT: Go! */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						return 1;
					}
					__LIB_1__::func_31(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(__LIB_2__::func_572(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!__LIB_0__::func_703(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !__LIB_0__::func_703(uParam0->f_1, 1))
		{
			__LIB_1__::func_330(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !__LIB_0__::func_703(uParam0->f_1, 2))
		{
			__LIB_1__::func_330(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !__LIB_0__::func_703(uParam0->f_1, 4))
		{
			__LIB_1__::func_330(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !__LIB_0__::func_703(uParam0->f_1, 16))
		{
			if (MISC::ABSF((__LIB_2__::func_572(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					__LIB_1__::func_330(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, true);
				}
			}
		}
		else if (iVar9 >= 0 && !__LIB_0__::func_703(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, true);
			}
			__LIB_1__::func_330(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &iVar11, &iVar12, &iVar13, &uVar14);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			__LIB_0__::func_610("CNTDWN_GO" /* GXT: Go! */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && __LIB_1__::func_254()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			__LIB_1__::func_12(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_669()//Position - 0xBE4E7
{
	int iVar0;
	int iVar1;
	iVar1 = NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
	if (iVar1 != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if ((__LIB_1__::func_201(iVar0) || __LIB_0__::func_361(iVar0, 0)) || __LIB_0__::func_457(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_670(int iParam0, int iParam1)//Position - 0x7E0A5
{
	char* sVar0;
	switch (__LIB_0__::func_683())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(iLocal_41, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, false);
			MISC::SET_BIT(&iLocal_41, 0);
			__LIB_38__::func_584(1, 1, 0);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
		}
	}
	else
	{
		if (BitTest(iLocal_41, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			__LIB_38__::func_584(0, 1, 1);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&iLocal_41, 0);
	}
}

void func_671()//Position - 0x7E7A8
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_671(1);
}

void func_672(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x846C3
{
	uParam0->f_6 = 0;
	__LIB_14__::func_533(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

int func_673(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x997BD
{
	var uVar0;
	var uVar1;
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam9, iParam10, 0);
	if (iParam8 > 7)
	{
		if (iParam8 < 12)
		{
			iParam8 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_16__::func_906(3, &uVar0, &uVar1, uParam2, uParam3, uParam4, uParam5, iParam6, iParam7, 0, 0, 0, 0, 0, 0, 0, 0);
	return __LIB_16__::func_610(&uVar0, &uVar1, iParam8, 0);
}

int func_674(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8)//Position - 0x97908
{
	var uVar0;
	var uVar1;
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_16__::func_906(2, &uVar0, &uVar1, uParam2, uParam3, uParam4, uParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return __LIB_16__::func_610(&uVar0, &uVar1, iParam6, 0);
}

void func_675(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0xBF056
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_2__::func_407();
	__LIB_2__::func_406();
	Global_1931427 = 0;
	__LIB_2__::func_405();
	__LIB_2__::func_404(2);
	Global_1057165 = 0;
	if (__LIB_0__::func_626() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		__LIB_1__::func_25();
	}
	__LIB_2__::func_366();
	__LIB_2__::func_364();
	Global_1922915.f_4 = 0;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam3, false, uParam0->f_16);
	if ((!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_80()) && !__LIB_2__::func_447())
	{
		iVar0 = __LIB_2__::func_403();
		if (iVar0 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0)))
			{
				__LIB_1__::func_36(1, PLAYER::GET_PLAYER_PED(iVar0), 1);
			}
		}
	}
	__LIB_18__::func_994();
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(true);
	if (__LIB_2__::func_256())
	{
		__LIB_2__::func_255();
	}
	iVar1 = __LIB_2__::func_403();
	if (iVar1 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
	}
	__LIB_2__::func_402();
	__LIB_2__::func_401();
	__LIB_2__::func_400();
	__LIB_2__::func_399();
	__LIB_2__::func_398();
	__LIB_2__::func_397();
	bVar2 = false;
	if (__LIB_1__::func_202())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
		}
	}
	__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(false);
	}
	__LIB_2__::func_329(0);
	Global_1888183 = 0;
	if (__LIB_2__::func_446(8))
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 28);
	}
	if (__LIB_1__::func_345())
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 27);
	}
	__LIB_2__::func_396();
	__LIB_2__::func_395();
	if ((__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || __LIB_0__::func_80()) || __LIB_2__::func_447())
	{
		__LIB_2__::func_822(8, 0, 1);
	}
	else
	{
		__LIB_2__::func_822(2, 0, 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((Global_4718592 != 5 && Global_4718592 != 6) && Global_4718592 != 32) && Global_4718592 != 148)
		{
			__LIB_2__::func_394();
		}
		if (Global_4718592 != 5 || *uParam1 != 40)
		{
			if (bParam5)
			{
				if (Global_4980736.f_78574 > 0 || Global_4980736.f_202536 > 0)
				{
					iVar3 = Global_4980736.f_78574;
					iVar3 = (iVar3 + Global_4980736.f_202536);
					if (__LIB_1__::func_202())
					{
						iVar3++;
					}
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar3);
				}
			}
			if (bParam4)
			{
				if (Global_4980736.f_94384 > 0 || Global_4980736.f_202537 > 0)
				{
					if (Global_4718592 == 1)
					{
					}
					else
					{
						iVar4 = Global_4980736.f_94384;
						if (Global_4718592.f_116990 != 0)
						{
							iVar4++;
						}
						iVar4 = (iVar4 + Global_4980736.f_202537);
						if (iVar4 > 50)
						{
							iVar4 = 50;
						}
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar4);
					}
				}
			}
			if ((((Global_4980736.f_5739 > 0 || Global_4980736.f_63310 > 0) || Global_4980736.f_36354 > 0) || BitTest(Global_4718592.f_13, 24)) || Global_4980736.f_202535 > 0)
			{
				iVar5 = Global_4980736.f_5739;
				iVar5 = (iVar5 + __LIB_2__::func_393(iParam7) * 3);
				if (BitTest(Global_4718592.f_13, 24))
				{
					iVar5 += 16;
				}
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((((iVar5 + Global_4980736.f_63310) + Global_4980736.f_36354) + Global_4980736.f_202535));
			}
		}
		if (!bVar2)
		{
			if (__LIB_1__::func_202() && __LIB_13__::func_466())
			{
				NETWORK::NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(1, uParam0->f_16);
			}
		}
	}
	__LIB_0__::func_895(0, -1, 0);
	if (!__LIB_2__::func_392())
	{
		__LIB_2__::func_391();
	}
	if (!__LIB_2__::func_390())
	{
		__LIB_2__::func_389();
	}
	if (__LIB_2__::func_444())
	{
		__LIB_2__::func_388();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (uParam0->f_16 != -1)
		{
			*uParam1 = uParam0->f_2;
			*uParam2 = uParam0->f_1;
		}
		else
		{
			*uParam1 = PLAYER::PLAYER_ID();
			*uParam2 = 0;
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	__LIB_1__::func_371(uParam0->f_2, uParam0->f_1, uParam0->f_16);
	if (bParam6)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	}
	if (Global_4718592 == 0)
	{
		if (!__LIB_0__::func_80() && !__LIB_1__::func_623())
		{
			if (!__LIB_1__::func_202())
			{
				MISC::CLEAR_AREA(0f, 0f, 0f, 16000f, true, false, false, false);
			}
		}
	}
	else if (Global_4718592 == 6)
	{
		__LIB_1__::func_315(17);
	}
	if (__LIB_0__::func_80())
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
		if ((((Global_4718592 != 2 && Global_4718592 != 8) && Global_4718592 != 0) && Global_4718592 != 1) && Global_4718592 != 3)
		{
			__LIB_2__::func_387();
			__LIB_2__::func_386();
			__LIB_2__::func_385();
		}
	}
	if (((((((((Global_4718592 == 10 || Global_4718592 == 15) || Global_4718592 == 14) || Global_4718592 == 11) || Global_4718592 == 92) || Global_4718592 == 35) || Global_4718592 == 33) || Global_4718592 == 34) || Global_4718592 == 13) || Global_4718592 == 12)
	{
		if (__LIB_19__::func_78(0) > 0)
		{
			__LIB_2__::func_384(4, -1);
		}
	}
	if (!__LIB_1__::func_202())
	{
		__LIB_2__::func_383(Global_4718592, uParam0->f_1);
	}
	Global_1922955 = 0;
	Global_1922955.f_23 = { 0f, 0f, 0f };
	Global_2703735.f_61.f_69 = NETWORK::GET_CLOUD_TIME_AS_INT();
	__LIB_2__::func_382();
}

int func_676()//Position - 0x11E0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[iVar0] != 0)
		{
			iVar1 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[iVar0];
			iVar2 = __LIB_31__::func_962(245, 0);
			if (iVar0 == (iVar2 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar2 % 32));
			}
			iVar3 = __LIB_31__::func_962(323, 0);
			if (iVar0 == (iVar3 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar3 % 32));
			}
			iVar4 = __LIB_31__::func_962(324, 0);
			if (iVar0 == (iVar4 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar4 % 32));
			}
			iVar5 = __LIB_31__::func_962(357, 0);
			if (iVar0 == (iVar5 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar5 % 32));
			}
			iVar6 = __LIB_31__::func_962(402, 0);
			if (iVar0 == (iVar6 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar6 % 32));
			}
			iVar7 = __LIB_31__::func_962(518, 0);
			if (iVar0 == (iVar7 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar7 % 32));
			}
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_677(int iParam0)//Position - 0x9586
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_112())
	{
		if (iParam0 == __LIB_31__::func_962(245, 0) && __LIB_1__::func_360(3171, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == __LIB_31__::func_962(323, 0) && __LIB_1__::func_360(5396, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == __LIB_31__::func_962(324, 0) && __LIB_0__::func_137(9461, -1))
		{
			return 1;
		}
		if (iParam0 == __LIB_31__::func_962(357, 0) && __LIB_1__::func_360(6159, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == __LIB_31__::func_962(402, 0) && __LIB_1__::func_360(7210, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == __LIB_31__::func_962(518, 0) && __LIB_1__::func_360(9517, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				case 1:
					iVar1 = 451;
					break;
				case 2:
					iVar1 = 452;
					break;
				case 3:
					iVar1 = 453;
					break;
				case 4:
					iVar1 = 454;
					break;
				case 5:
					iVar1 = 455;
					break;
				case 6:
					iVar1 = 456;
					break;
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == __LIB_31__::func_962(iVar1, 0) && __LIB_1__::func_886(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (BitTest(Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_678(int iParam0)//Position - 0x66A29
{
	switch (iParam0)
	{
		case 0:
			return 2558.324f, 350.988f, 107.5975f;
		case 1:
			return -301.6573f, -829.5886f, 31.41977f;
		case 2:
			return -303.2257f, -829.3121f, 31.41977f;
		case 3:
			return -204.0193f, -861.0091f, 29.27133f;
		case 4:
			return 118.6416f, -883.5695f, 30.13945f;
		case 5:
			return 24.5933f, -945.543f, 28.33305f;
		case 6:
			return 5.686035f, -919.9551f, 28.48088f;
		case 7:
			return 296.1756f, -896.2318f, 28.29015f;
		case 8:
			return 296.8775f, -894.3196f, 28.26148f;
		case 9:
			return 147.4731f, -1036.218f, 28.38707f;
		case 10:
			return 145.8392f, -1035.625f, 28.38707f;
		case 11:
			return -256.6386f, -715.8899f, 32.7883f;
		case 12:
			return 112.4762f, -819.8081f, 30.33955f;
		case 13:
			return -259.2767f, -723.2651f, 32.70155f;
		case 14:
			return -254.5219f, -692.8869f, 32.57825f;
		case 15:
			return -27.89034f, -724.1089f, 43.22287f;
		case 16:
			return -30.09956f, -723.2863f, 43.22287f;
		case 17:
			return 111.3886f, -774.8402f, 30.43766f;
		case 18:
			return 114.5474f, -775.972f, 30.41737f;
		case 19:
			return 289.53f, -1256.788f, 28.44057f;
		case 20:
			return 289.2679f, -1282.32f, 28.65519f;
		case 21:
			return 158.7965f, 234.7452f, 105.6433f;
		case 22:
			return 228.0324f, 337.8501f, 104.5013f;
		case 23:
			return 527.7776f, -160.6609f, 56.13671f;
		case 24:
			return -57.17029f, -92.37918f, 56.75069f;
		case 25:
			return 285.3485f, 142.9751f, 103.1623f;
		case 26:
			return 357.1284f, 174.0836f, 102.0597f;
		case 27:
			return 89.81339f, 2.880329f, 67.35216f;
		case 28:
			return 1077.779f, -776.9664f, 57.25652f;
		case 29:
			return 1137.811f, -468.8625f, 65.69865f;
		case 30:
			return 1167.06f, -455.6541f, 65.81857f;
		case 31:
			return -165.5844f, 234.7659f, 93.92897f;
		case 32:
			return -165.5844f, 232.6955f, 93.92897f;
		case 33:
			return -1205.378f, -326.5286f, 36.85104f;
		case 34:
			return -1206.142f, -325.0316f, 36.85104f;
		case 35:
			return -846.6537f, -341.509f, 37.6685f;
		case 36:
			return -847.204f, -340.4291f, 37.6793f;
		case 37:
			return -720.6288f, -415.5243f, 33.97996f;
		case 38:
			return -867.013f, -187.9928f, 36.88218f;
		case 39:
			return -867.9745f, -186.3419f, 36.88218f;
		case 40:
			return -1415.48f, -212.3324f, 45.49542f;
		case 41:
			return -1430.663f, -211.3587f, 45.47162f;
		case 42:
			return -1410.736f, -98.92789f, 51.39701f;
		case 43:
			return -1410.183f, -100.6454f, 51.39652f;
		case 44:
			return -1282.098f, -210.5599f, 41.43031f;
		case 45:
			return -1286.704f, -213.7827f, 41.43031f;
		case 46:
			return -1289.742f, -227.165f, 41.43031f;
		case 47:
			return -1285.136f, -223.9422f, 41.43031f;
		case 48:
			return -1569.84f, -547.0309f, 33.93216f;
		case 49:
			return -1570.765f, -547.7035f, 33.93216f;
		case 50:
			return -1315.416f, -834.431f, 15.95233f;
		case 51:
			return -1314.466f, -835.6913f, 15.95233f;
		case 52:
			return -2071.928f, -317.2862f, 12.31808f;
		case 53:
			return -821.8936f, -1081.555f, 10.13664f;
		case 54:
			return -1110.228f, -1691.154f, 3.378483f;
		case 55:
			return -712.9357f, -818.4827f, 22.74066f;
		case 56:
			return -710.0828f, -818.4756f, 22.73634f;
		case 57:
			return -617.8035f, -708.8591f, 29.04321f;
		case 58:
			return -617.8035f, -706.8521f, 29.04321f;
		case 59:
			return 2564f, 2584.553f, 37.06807f;
		case 60:
			return -3241.455f, 997.9085f, 11.66582f;
		case 61:
			return -614.5187f, -705.5981f, 30.224f;
		case 62:
			return -611.8581f, -705.5981f, 30.224f;
		case 63:
			return -660.6763f, -854.4882f, 23.45663f;
		case 64:
			return -537.8052f, -854.9357f, 28.27543f;
		case 65:
			return -594.6144f, -1160.852f, 21.33351f;
		case 66:
			return -596.1251f, -1160.85f, 21.3336f;
		case 67:
			return -526.7791f, -1223.374f, 17.45272f;
		case 68:
			return 156.1886f, 6643.2f, 30.59372f;
		case 69:
			return 173.8246f, 6638.217f, 30.59372f;
		case 70:
			return -386.4596f, 6046.411f, 30.47399f;
		case 71:
			return -282.7141f, 6226.43f, 30.49648f;
		case 72:
			return -132.6663f, 6366.876f, 30.47258f;
		case 73:
			return -95.87029f, 6457.462f, 30.47394f;
		case 74:
			return -97.63721f, 6455.732f, 30.46793f;
		case 75:
			return 1687.395f, 4815.9f, 41.00647f;
		case 76:
			return 1700.694f, 6426.762f, 31.63297f;
		case 77:
			return 1822.971f, 3682.577f, 33.26745f;
		case 78:
			return 1171.523f, 2703.139f, 37.1477f;
		case 79:
			return 1172.457f, 2703.139f, 37.1477f;
		case 80:
			return -2956.848f, 487.2158f, 14.478f;
		case 81:
			return -2958.977f, 487.3071f, 14.478f;
		case 82:
			return -2974.586f, 380.1269f, 14.32212f;
		case 83:
			return -1091.887f, 2709.053f, 17.91941f;
		case 84:
			return -2295.853f, 357.9348f, 173.6014f;
		case 85:
			return -2295.069f, 356.2556f, 173.6014f;
		case 86:
			return -2294.3f, 354.6056f, 173.6014f;
		case 87:
			return -3043.835f, 594.1639f, 6.732796f;
		case 88:
			return -3144.887f, 1127.811f, 19.83804f;
		default:
	}
	return 158.7965f, 234.7452f, 105.6433f;
}

int func_679()//Position - 0x67515
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if ((!PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
	{
		return 1;
	}
	return 0;
}

int func_680()//Position - 0x67B00
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
	}
	return 0;
}

int func_681(int iParam0)//Position - 0x72DC0
{
	switch (iParam0)
	{
		case 66:
		case 67:
		case 69:
		case 70:
		case 68:
			return 0;
			break;
		case 0:
		case 1:
		case 2:
			return 1;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 2;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			return 3;
			break;
		case 12:
		case 13:
			return 4;
			break;
		case 71:
		case 72:
		case 74:
		case 75:
			return 5;
			break;
		case 73:
			return 6;
			break;
		case 14:
		case 15:
		case 16:
			return 7;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 8;
			break;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 38:
		case 39:
			return 9;
			break;
		case 34:
			return 10;
			break;
		case 35:
			return 11;
			break;
		case 36:
			return 12;
			break;
		case 37:
			return 13;
			break;
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
			return 14;
			break;
		case 76:
		case 77:
		case 78:
		case 79:
		case 84:
		case 85:
			return 15;
			break;
		case 80:
		case 83:
			return 16;
			break;
		case 81:
			return 17;
			break;
		case 82:
			return 18;
			break;
		case 40:
		case 41:
		case 42:
			return 19;
			break;
		case 86:
		case 87:
		case 89:
		case 90:
			return 20;
			break;
		case 88:
			return 21;
			break;
		case 43:
			return 22;
			break;
		case 44:
			return 23;
			break;
		case 45:
			return 24;
			break;
		case 46:
		case 47:
		case 48:
		case 49:
			return 25;
			break;
		case 50:
		case 51:
		case 52:
			return 26;
			break;
		case 53:
			return 27;
			break;
		case 91:
		case 92:
		case 93:
			return 28;
			break;
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 29;
			break;
		case 59:
		case 60:
		case 61:
			return 30;
			break;
		case 62:
		case 63:
		case 64:
		case 65:
			return 31;
			break;
	}
	return -1;
}

int func_682(int iParam0)//Position - 0xF1A
{
	if (!__LIB_0__::func_43(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_683(bool bParam0, int iParam1)//Position - 0x67C07
{
	float fVar0;
	float fVar1;
	if (bParam0)
	{
		__LIB_3__::func_52(1, -1, 1);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			if (Global_4539955 < 1f)
			{
				return 1;
			}
		}
	}
	else
	{
		__LIB_3__::func_52(0, -1, 1);
		if (*iParam1)
		{
			if (((Global_4539955 > (1f - 0.05f) || Global_4539955 < 0.05f) || Global_4539956 > (1f - 0.03f)) || Global_4539956 < 0.03f)
			{
				return 0;
			}
			else
			{
				*iParam1 = 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 0;
			}
		}
		if (Global_4539961 == -1 || Global_4539961 == -4)
		{
			if (Global_4539955 > (1f - (0.05f * 0.75f)))
			{
				HUD::SET_MOUSE_CURSOR_STYLE(7);
				fVar0 = (0.05f - (1f - Global_4539955));
				if (fVar0 > 0.05f)
				{
					fVar0 = 0.05f;
				}
				fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				fVar1 = (fVar1 - (70f * fVar0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar1);
			}
			else if (Global_4539955 < (0.05f * 0.75f))
			{
				HUD::SET_MOUSE_CURSOR_STYLE(6);
				fVar0 = (0.05f - Global_4539955);
				if (fVar0 > 0.05f)
				{
					fVar0 = 0.05f;
				}
				fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				fVar1 = (fVar1 + (70f * fVar0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar1);
			}
			else if (Global_4539956 > (1f - (0.03f * 0.75f)))
			{
			}
			else if (Global_4539956 < (0.03f * 0.75f))
			{
			}
		}
	}
	return 0;
}

bool func_684()//Position - 0x2247F
{
	return Global_113386.f_2363.f_539.f_2352;
}

int func_685()//Position - 0x23031
{
	if (DLC::IS_DLC_PRESENT(-65181770))
	{
		return 1;
	}
	return 0;
}

struct<16> func_686(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x2D641
{
	struct<16> Var0;
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

int func_687(int iParam0)//Position - 0x2FA97
{
	switch (iParam0)
	{
		case 12:
			return joaat("A_C_Rabbit_01");
		case 109:
			return joaat("A_C_Boar");
		case 43:
			return joaat("A_C_Deer");
		case 35:
			return joaat("emperor2");
		case 17:
			return joaat("scorcher");
		case 28:
			return joaat("A_C_MtLion");
		case 49:
			return joaat("CS_Hunter");
		case 25:
			return joaat("A_M_Y_Hiker_01");
		case 14:
			return joaat("A_F_Y_Hippie_01");
		case 86:
			return joaat("A_M_M_Hillbilly_01");
		default:
	}
	return 0;
}

int func_688()//Position - 0x2FE00
{
	return joaat("IG_Orleans");
}

bool func_689()//Position - 0x30604
{
	return Global_110133 & 511 == 511;
}

void func_690(int iParam0)//Position - 0x894AC
{
	Global_113386.f_2363[iParam0 /*164*/][0] = 0;
	Global_113386.f_2363[iParam0 /*164*/][1] = 0;
	Global_113386.f_2363[iParam0 /*164*/][2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_4[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_4[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_4[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_8[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_8[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_8[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_12[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_12[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_12[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_16[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_16[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_16[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_20[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_20[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_20[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_24[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_24[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_24[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_28[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_28[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_28[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_32[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_32[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_32[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_36[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_36[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_36[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_40[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_40[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_40[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_44[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_44[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_44[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_48[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_48[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_48[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_52[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_52[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_52[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_56[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_56[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_56[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_60[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_60[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_60[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_64[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_64[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_64[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_68[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_68[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_68[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_72[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_72[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_72[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_76[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_76[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_76[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_80[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_80[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_80[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_84[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_84[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_84[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_88[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_88[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_88[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_92[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_92[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_92[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_96[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_96[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_96[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_100[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_100[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_100[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_104[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_104[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_104[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_108[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_108[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_108[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_112[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_112[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_112[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_116[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_116[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_116[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_120[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_120[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_120[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_124[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_124[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_124[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_128[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_128[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_128[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_132[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_132[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_132[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_136[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_136[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_136[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_140[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_140[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_140[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_144[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_144[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_144[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_148[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_148[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_148[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_152[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_152[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_152[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_156[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_156[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_156[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_160[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_160[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_160[2] = 0;
}

void func_691(int iParam0, struct<98> Param1)//Position - 0x84358
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (Param1.f_9)
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, Param1.f_4);
	}
	else
	{
		VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Param1.f_7, Param1.f_8);
	}
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Param1.f_2);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, false))
		{
			VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, true);
		}
	}
	if (__LIB_17__::func_246(&uVar2, &iVar1) && Param1.f_97)
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar2);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar1);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param1.f_27)))
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Param1.f_26);
		}
	}
	VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Param1.f_88);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Param1.f_87);
	VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Param1.f_92, 28));
	VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Param1.f_92, 29));
	VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Param1.f_92, 30));
	VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Param1.f_92, 31));
	if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Param1.f_89 >= 0)
	{
		VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
			{
				if (Param1.f_90 == 6)
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Param1.f_90);
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Param1.f_90);
			}
		}
	}
	__LIB_0__::func_372(iParam0, &(Param1.f_31), &(Param1.f_81));
	VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Param1.f_96);
}

int func_692(int iParam0)//Position - 0x3592B
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || __LIB_17__::func_909(iParam0, 0, 0)) || __LIB_17__::func_909(iParam0, 1, 0)) || __LIB_17__::func_909(iParam0, 2, 0)) || __LIB_0__::func_119(iParam0) != 145) || __LIB_0__::func_118(iParam0)) || __LIB_0__::func_117(iParam0)) || __LIB_0__::func_108(iParam0)) || __LIB_0__::func_458(iParam0)) || !__LIB_0__::func_465(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (__LIB_0__::func_117(iParam0))
		{
		}
		if (__LIB_0__::func_117(iParam0))
		{
		}
		if (__LIB_17__::func_909(iParam0, 0, 0))
		{
		}
		if (__LIB_17__::func_909(iParam0, 1, 0))
		{
		}
		if (__LIB_17__::func_909(iParam0, 2, 0))
		{
		}
		if (__LIB_0__::func_119(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_693(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x33C53
{
	int iVar0;
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		case 1:
			sParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 3;
	if (__LIB_30__::func_999(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { __LIB_0__::func_167(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

void func_694(bool bParam0)//Position - 0x89CD9
{
	__LIB_0__::loadSpTotalCashFromStats();
	if (!Global_113386.f_20564.f_232 && __LIB_0__::isMissionCompleted(53))
	{
		Global_60328_SPN_TOTAL_CASH[0] = 4000;
		Global_113386.f_20564.f_233[0 /*69*/] = 0;
		Global_113386.f_20564.f_233[0 /*69*/].f_1 = 0;
		Global_60328_SPN_TOTAL_CASH[1] = 4000;
		Global_113386.f_20564.f_233[1 /*69*/] = 0;
		Global_113386.f_20564.f_233[1 /*69*/].f_1 = 0;
		Global_60328_SPN_TOTAL_CASH[2] = 4000;
		Global_113386.f_20564.f_233[2 /*69*/] = 0;
		Global_113386.f_20564.f_233[2 /*69*/].f_1 = 0;
		__LIB_0__::saveTotalCashToStatsByCharacterIndex(2);
		__LIB_0__::saveTotalCashToStatsByCharacterIndex(0);
		__LIB_0__::saveTotalCashToStatsByCharacterIndex(1);
		__LIB_14__::func_571(2, 1, 36, 22300, 0);
		__LIB_14__::func_571(2, 0, 13, 678, 0);
		__LIB_14__::func_571(2, 1, 36, 45200, 0);
		__LIB_14__::func_571(2, 0, 6, 200, 0);
		__LIB_14__::func_571(2, 0, 4, 12, 0);
		__LIB_14__::func_571(2, 0, 4, 14, 0);
		__LIB_14__::func_571(2, 0, 8, 280, 0);
		__LIB_14__::func_571(2, 1, 36, 30200, 0);
		__LIB_14__::func_571(2, 0, 13, 185, 0);
		__LIB_14__::func_571(1, 0, 5, 45, 0);
		__LIB_14__::func_571(1, 0, 10, 400, 0);
		__LIB_14__::func_571(1, 0, 11, 19, 0);
		__LIB_14__::func_571(1, 0, 7, 149, 0);
		__LIB_14__::func_571(1, 0, 4, 19, 0);
		__LIB_14__::func_571(0, 0, 4, 19, 0);
		__LIB_14__::func_571(0, 0, 7, 2313, 0);
		__LIB_14__::func_571(0, 0, 5, 20, 0);
		__LIB_14__::func_571(0, 0, 9, 5633, 0);
		__LIB_14__::func_571(0, 0, 12, 700, 0);
		STATS::STAT_SET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), 0, true);
		STATS::STAT_SET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), 0, true);
		STATS::STAT_SET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), 0, true);
		Global_60328_SPN_TOTAL_CASH[2] = 10666;
		Global_60328_SPN_TOTAL_CASH[0] = 3085;
		Global_60328_SPN_TOTAL_CASH[1] = 1178;
		Global_113386.f_20564.f_232 = 1;
	}
	if (bParam0)
	{
		Global_60328_SPN_TOTAL_CASH[2] = 108654;
		Global_60328_SPN_TOTAL_CASH[0] = 7860;
		Global_60328_SPN_TOTAL_CASH[1] = 78;
	}
	__LIB_0__::saveTotalCashToStatsByCharacterIndex(2);
	__LIB_0__::saveTotalCashToStatsByCharacterIndex(0);
	__LIB_0__::saveTotalCashToStatsByCharacterIndex(1);
}

int func_695(float fParam0, float fParam1)//Position - 0x1AC17
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_63 == -1)
	{
		iLocal_63 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_63);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}

int func_696(var uParam0, float fParam1)//Position - 0x1B6B1
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	Var0 = { Local_61 };
	Var1 = { Local_62 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13, false))
	{
		Local_61 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, true) };
		Var0 = { Local_61 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12, false))
	{
		Local_62 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, true) };
		Var1 = { Local_62 };
	}
	Var2 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, false);
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var2, false);
	*fParam1 = (fVar4 / fVar3);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

int func_697(int iParam0)//Position - 0x936F5
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return BitTest(Global_32338[iVar0 /*23*/].f_11, 19);
}

var func_698(int iParam0)//Position - 0x94728
{
	return Global_113386.f_7688.f_765[iParam0 /*10*/].f_7;
}

var func_699(int iParam0)//Position - 0x94740
{
	return Global_113386.f_7688.f_651[iParam0 /*14*/].f_7;
}

var func_700(int iParam0)//Position - 0x947C3
{
	return Global_113386.f_7688[iParam0 /*15*/].f_7;
}

int func_701(int iParam0)//Position - 0x98842
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("SLOT_UNARMED"):
			iVar0 = 0;
			break;
		case joaat("SLOT_KNIFE"):
			iVar0 = 1;
			break;
		case joaat("SLOT_NIGHTSTICK"):
			iVar0 = 2;
			break;
		case joaat("SLOT_HAMMER"):
			iVar0 = 3;
			break;
		case joaat("SLOT_BAT"):
			iVar0 = 4;
			break;
		case joaat("SLOT_CROWBAR"):
			iVar0 = 5;
			break;
		case joaat("SLOT_GOLFCLUB"):
			iVar0 = 6;
			break;
		case joaat("SLOT_STUNGUN"):
			iVar0 = 7;
			break;
		case joaat("SLOT_PISTOL"):
			iVar0 = 8;
			break;
		case joaat("SLOT_COMBATPISTOL"):
			iVar0 = 9;
			break;
		case joaat("SLOT_APPISTOL"):
			iVar0 = 10;
			break;
		case joaat("SLOT_MICROSMG"):
			iVar0 = 11;
			break;
		case joaat("SLOT_SMG"):
			iVar0 = 12;
			break;
		case joaat("SLOT_ASSAULTRIFLE"):
			iVar0 = 13;
			break;
		case joaat("SLOT_CARBINERIFLE"):
			iVar0 = 14;
			break;
		case joaat("SLOT_ADVANCEDRIFLE"):
			iVar0 = 15;
			break;
		case joaat("SLOT_MG"):
			iVar0 = 16;
			break;
		case joaat("SLOT_COMBATMG"):
			iVar0 = 17;
			break;
		case joaat("SLOT_PUMPSHOTGUN"):
			iVar0 = 18;
			break;
		case joaat("SLOT_SAWNOFFSHOTGUN"):
			iVar0 = 19;
			break;
		case joaat("SLOT_ASSAULTSHOTGUN"):
			iVar0 = 20;
			break;
		case joaat("SLOT_SNIPERRIFLE"):
			iVar0 = 21;
			break;
		case joaat("SLOT_HEAVYSNIPER"):
			iVar0 = 22;
			break;
		case joaat("SLOT_GRENADELAUNCHER"):
			iVar0 = 23;
			break;
		case joaat("SLOT_RPG"):
			iVar0 = 24;
			break;
		case joaat("SLOT_MINIGUN"):
			iVar0 = 25;
			break;
		case joaat("SLOT_GRENADE"):
			iVar0 = 26;
			break;
		case joaat("SLOT_STICKYBOMB"):
			iVar0 = 27;
			break;
		case joaat("SLOT_SMOKEGRENADE"):
			iVar0 = 28;
			break;
		case joaat("SLOT_MOLOTOV"):
			iVar0 = 29;
			break;
		case joaat("SLOT_FIREEXTINGUISHER"):
			iVar0 = 30;
			break;
		case joaat("SLOT_PETROLCAN"):
			iVar0 = 31;
			break;
		case joaat("SLOT_PARACHUTE"):
			iVar0 = 33;
			break;
		case joaat("SLOT_DIGISCANNER"):
			iVar0 = 34;
			break;
		case joaat("SLOT_OBJECT"):
			iVar0 = 35;
			break;
		case joaat("SLOT_ASSAULTSMG"):
			iVar0 = 36;
			break;
		case joaat("SLOT_BULLPUPSHOTGUN"):
			iVar0 = 37;
			break;
		case joaat("SLOT_PISTOL50"):
			iVar0 = 38;
			break;
	}
	return iVar0;
}

void func_702(int iParam0)//Position - 0xBC4B
{
	bool bVar0;
	bVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_113386.f_2363.f_539.f_2328[bVar0], false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
}

void func_703(bool bParam0)//Position - 0xA41
{
	if (__LIB_0__::func_374(bParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_512(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
}

void func_704(int iParam0)//Position - 0x83CF
{
	int iVar0;
	iVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_0__::func_374(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[iVar0] = __LIB_34__::func_681();
	}
}

void func_705(int iParam0)//Position - 0x224D2
{
	bool bVar0;
	bVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		__LIB_17__::func_688(iParam0, bVar0);
		__LIB_37__::func_866(iParam0, bVar0);
	}
}

void func_706(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x81269
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 0;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = __LIB_17__::func_107(iParam0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar2], false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_100144[iVar2], -1, false))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
						Var4 = { ENTITY::GET_ENTITY_COORDS(Global_100144[iVar2], true) };
						if (ENTITY::GET_ENTITY_MODEL(Global_100144[iVar2]) == joaat("luxor2"))
						{
							if (SYSTEM::VDIST(Var3, Var4) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_100144[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	__LIB_37__::func_867(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

int func_707(int iParam0, int iParam1)//Position - 0x94CC3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_0__::func_684();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!__LIB_0__::func_540(6))
	{
		iVar1 = __LIB_14__::func_791(iParam0);
		iVar2 = __LIB_14__::func_791(iParam1);
		if (iVar1 != 7 && iVar2 != 7)
		{
			iVar3 = __LIB_13__::func_95(iVar1, iVar2);
			if (iVar3 != 10)
			{
				iVar4 = __LIB_17__::func_225(iVar3);
				if (iVar4 == 3 || iVar4 == 4)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_708(int iParam0)//Position - 0x9A6C4
{
	return __LIB_0__::func_431(iParam0, 4, 0);
}

int func_709(var uParam0, var uParam1, var uParam2)//Position - 0x8AA58
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	var uVar6;
	if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
	{
		iVar0 = __LIB_0__::func_484(uParam0->f_61);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[uParam0->f_61]))
		{
		}
		else
		{
			Var1 = { Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] };
			iVar2 = Global_113386.f_2363.f_539.f_2296[iVar0];
			if (__LIB_17__::func_692(Var1, &Var3, &uVar4, &uVar5))
			{
				*uParam1 = { Var3 };
				*uParam2 = uVar4;
				return 1;
			}
			if (__LIB_3__::func_423(iVar2))
			{
				switch (__LIB_38__::func_229(iVar0, iVar2, &uVar6))
				{
					case 0:
						return 0;
						break;
					case 1:
						if (Global_100140[iVar0] == 0 || Global_100140[iVar0] == 1)
						{
							if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_17, 0f, 0f, 0f, 1.5f, 0))
							{
								*uParam1 = { Global_97831[iVar0 /*29*/].f_17 };
								*uParam2 = Global_97831[iVar0 /*29*/].f_26;
								return 1;
							}
						}
						else if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/], 0f, 0f, 0f, 1.5f, 0))
						{
							*uParam1 = { Global_97831[iVar0 /*29*/] };
							*uParam2 = Global_97831[iVar0 /*29*/].f_9;
							return 1;
						}
						break;
					case 2:
						if (Global_100140[iVar0] == 0 || Global_100140[iVar0] == 1)
						{
							if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_20, 0f, 0f, 0f, 1.5f, 0))
							{
								*uParam1 = { Global_97831[iVar0 /*29*/].f_20 };
								*uParam2 = Global_97831[iVar0 /*29*/].f_27;
								return 1;
							}
						}
						else if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_3, 0f, 0f, 0f, 1.5f, 0))
						{
							*uParam1 = { Global_97831[iVar0 /*29*/].f_3 };
							*uParam2 = Global_97831[iVar0 /*29*/].f_10;
							return 1;
						}
						break;
					case 3:
						if (Global_100140[iVar0] == 0 || Global_100140[iVar0] == 1)
						{
							if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_23, 0f, 0f, 0f, 1.5f, 0))
							{
								*uParam1 = { Global_97831[iVar0 /*29*/].f_23 };
								*uParam2 = Global_97831[iVar0 /*29*/].f_28;
								return 1;
							}
						}
						else if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_6, 0f, 0f, 0f, 1.5f, 0))
						{
							*uParam1 = { Global_97831[iVar0 /*29*/].f_6 };
							*uParam2 = Global_97831[iVar0 /*29*/].f_11;
							return 1;
						}
						break;
					default:
						break;
				}
				return 0;
			}
		}
	}
	return 0;
}

int func_710(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x1B7A3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_97360 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, false);
						__LIB_15__::func_892(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, true);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, true);
				}
				uParam0->f_21 = __LIB_1__::func_861();
				__LIB_0__::func_671(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					iVar0 |= 2;
				}
				if (__LIB_0__::func_629())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, iParam2);
					if (bParam11)
					{
						STREAMING::SET_PLAYER_SHORT_SWITCH_STYLE(iParam12);
					}
					switch (__LIB_17__::func_107(uParam0->f_13))
					{
						case 0:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDMichaelOut");
							break;
						case 1:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDMichaelOut");
							break;
						case 2:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDOut");
				}
				else if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					STREAMING::SWITCH_TO_MULTI_SECONDPART(uParam0->f_12);
					__LIB_0__::func_986(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, true), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
				}
				if (!Global_23011.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, false, 0, true);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, true), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", false, 0, true);
					}
					if (Global_23011.f_109 == -1)
					{
						Global_23011.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_23011.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_23011.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, false, 0, true);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_23011.f_109 != -1 && Global_23011.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_23011.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_23011.f_109);
					Global_23011.f_109 = -1;
					Global_23011.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				__LIB_7__::func_703(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(true, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_16__::func_512(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_12(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_16__::func_512(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_12(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_16__::func_512(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_12(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_23011.f_111)
			{
			}
			if (__LIB_0__::func_703(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_100164 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				switch (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE())
				{
					case 0:
						break;
					case 1:
						break;
					}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						__LIB_13__::func_788();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						__LIB_24__::func_414(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						__LIB_13__::func_788();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar4 = 20f;
						fVar5 = SYSTEM::VDIST2(Var2, Var3);
						if (fVar5 < (fVar4 * fVar4))
						{
							__LIB_13__::func_788();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_24__::func_414(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				__LIB_13__::func_788();
			}
			if (!uParam0->f_22)
			{
				__LIB_24__::func_414(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar6 = __LIB_15__::func_933();
		if (((iVar6 != 8 && iVar6 != 9) && iVar6 != 10) && iVar6 != 55)
		{
			__LIB_0__::func_671(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_23011.f_109 != -1 && Global_23011.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_109);
			Global_23011.f_109 = -1;
			Global_23011.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_23011.f_107 != -1 && Global_23011.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_107);
			Global_23011.f_107 = -1;
			Global_23011.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
		}
		if (!Global_44203)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, true, false);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, true, false);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar7 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, false);
					__LIB_15__::func_892(iVar7, 1);
				}
			}
		}
		__LIB_0__::func_986(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, false);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, false);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			__LIB_15__::func_890();
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(__LIB_16__::func_12(__LIB_17__::func_341()));
		}
		__LIB_7__::func_703(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(false, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}

int func_711(int iParam0, int iParam1)//Position - 0xE07
{
	struct<3> Var0;
	float fVar1;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (__LIB_0__::func_39(14))
		{
			return 0;
		}
		if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
		{
			return 0;
		}
		if (!__LIB_36__::func_722(iParam0, __LIB_14__::func_792()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0);
			if (fVar1 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(Var0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == __LIB_1__::func_601(Global_100162) && iParam1 != 0)
		{
			Global_100162 = 0;
		}
	}
	return 1;
}

int func_712(int iParam0)//Position - 0x4F9C
{
	if (iParam0 == 0)
	{
		return joaat("TEXT_FRIEND_GRIEF_MICHAEL");
	}
	else if (iParam0 == 1)
	{
		return joaat("TEXT_FRIEND_GRIEF_FRANKLIN");
	}
	else if (iParam0 == 2)
	{
		return joaat("TEXT_FRIEND_GRIEF_TREVOR");
	}
	else if (iParam0 == 3)
	{
		return joaat("TEXT_FRIEND_GRIEF_LAMAR");
	}
	else if (iParam0 == 4)
	{
		return joaat("TEXT_FRIEND_GRIEF_JIMMY");
	}
	else if (iParam0 == 5)
	{
		return joaat("TEXT_FRIEND_GRIEF_AMANDA");
	}
	return -1;
}

void func_713(var uParam0, int iParam1)//Position - 0x5EC0
{
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 20, true);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 16);
	if (iParam1 != joaat("NO_RELATIONSHIP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam1);
	}
}

int func_714(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1BD4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar0 = 3;
	iVar1 = __LIB_14__::func_791(bParam1);
	iVar2 = __LIB_17__::func_262(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (__LIB_34__::func_691(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return 0;
			}
			iVar6 = 0;
			if (((((iParam5 == joaat("TEXT_FRIEND_GRIEF_MICHAEL") || iParam5 == joaat("TEXT_FRIEND_GRIEF_FRANKLIN")) || iParam5 == joaat("TEXT_FRIEND_GRIEF_TREVOR")) || iParam5 == joaat("TEXT_FRIEND_GRIEF_LAMAR")) || iParam5 == joaat("TEXT_FRIEND_GRIEF_JIMMY")) || iParam5 == joaat("TEXT_FRIEND_GRIEF_AMANDA"))
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == joaat("TEXT_FRIEND_GRIEF_MICHAEL"))
			{
				iVar7 = 24;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_FRANKLIN"))
			{
				iVar7 = 25;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_TREVOR"))
			{
				iVar7 = 26;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_LAMAR"))
			{
				iVar7 = 27;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_JIMMY"))
			{
				iVar7 = 28;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_AMANDA"))
			{
				iVar7 = 29;
			}
			if (__LIB_17__::func_271(iParam5, iVar4, iVar5, iVar0, iVar2, bParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (__LIB_30__::func_387(iVar1, iParam2, -1, &sVar8))
	{
		if (__LIB_30__::func_395(bParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						__LIB_30__::func_399();
						break;
					case 203:
						__LIB_30__::func_398();
						break;
					case 204:
						__LIB_30__::func_397();
						break;
					case 205:
						__LIB_30__::func_396();
						break;
					case 206:
						__LIB_30__::func_400();
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_715(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xFB4
{
	StringCopy(sParam0, sParam3, 64);
	StringCopy(sParam1, sParam4, 64);
	StringCopy(sParam2, sParam5, 64);
}

int func_716()//Position - 0x303
{
	if (!__LIB_17__::func_680())
	{
		return 1;
	}
	return 0;
}

void func_717()//Position - 0x10D
{
	iLocal_67 = 0;
}

void func_718(int* iParam0, float fParam1)//Position - 0x1B2
{
	iParam0->f_1 = (__LIB_0__::func_616(BitTest(*iParam0, 4)) + fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_719(int iParam0, int iParam1)//Position - 0x7563E
{
	if (__LIB_0__::func_43(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_721(iParam0, iParam1));
	}
	else if (iParam0 != 145)
	{
	}
}

int func_720(int iParam0)//Position - 0x6FE6A
{
	if (__LIB_0__::func_43(iParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_154(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_721(int iParam0)//Position - 0x6FE93
{
	if (__LIB_0__::func_43(iParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_0__::func_154(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

void func_722(int iParam0)//Position - 0x75665
{
	if (__LIB_0__::func_43(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_154(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

void func_723()//Position - 0x132
{
	iLocal_232 = 0;
}

int func_724(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0x25049
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 4);
			return 1;
			break;
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 79:
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 2);
			return 1;
			break;
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 4);
			return 1;
			break;
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 2);
			return 1;
			break;
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
	}
	return 0;
}

void func_725()//Position - 0x10E
{
	iLocal_257 = 0;
}

Vector3 func_726(struct<3> Param0, float fParam1, float fParam2)//Position - 0x872
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = (fParam1 * fParam1);
	iVar3 = 0;
	while (iVar3 < 10)
	{
		Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), 0f };
		if (((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= fVar1)
		{
			fVar2 = (fParam2 / 2f);
			Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar2, fVar2);
			return Param0 + Var0;
		}
		iVar3++;
	}
	return __LIB_14__::func_834(Param0, fParam1, fParam2);
}

int func_727(int iParam0, int iParam1)//Position - 0x531F
{
	struct<10> Var0;
	bool bVar1;
	Var0 = { __LIB_37__::func_406(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_43(__LIB_0__::func_683()))
	{
		return 6;
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_0__::func_683()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_0__::func_683()])
		{
			return 5;
		}
	}
	if (Var0.f_6 != 144)
	{
		if (Global_43604[Var0.f_6] > iParam1)
		{
			return 3;
		}
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_728(int iParam0, int iParam1)//Position - 0x541C
{
	struct<14> Var0;
	bool bVar1;
	Var0 = { __LIB_37__::func_407(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_43(__LIB_0__::func_683()))
	{
		return 6;
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_0__::func_683()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_0__::func_683()])
		{
			return 5;
		}
	}
	if (Global_43604[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_729(int iParam0, int iParam1)//Position - 0x54F7
{
	struct<15> Var0;
	bool bVar1;
	Var0 = { __LIB_37__::func_408(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_43(__LIB_0__::func_683()))
	{
		return 1;
	}
	if (Global_43599 != -1)
	{
		if (Global_113386.f_7688[Global_43599 /*15*/] == iParam0)
		{
			return 0;
		}
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_0__::func_683()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_0__::func_683()])
		{
			return 5;
		}
	}
	if (Global_43604[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_730(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, char* sParam5)//Position - 0x1105
{
	char* sVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (__LIB_17__::func_321(sParam0, 7))
	{
		sVar0 = "";
		switch (__LIB_0__::func_683())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			case 1:
				sVar0 = "FRANKLIN";
				break;
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			__LIB_0__::func_222(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (__LIB_0__::func_787(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = (*uParam4 - 1);
				while (iVar1 > 0)
				{
					*(uParam4[iVar1 /*4*/]) = { *(uParam4[(iVar1 - 1) /*4*/]) };
					iVar1 = (iVar1 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_222(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (__LIB_0__::func_787(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				__LIB_0__::func_620(1);
				iVar2 = (*uParam4 - 1);
				while (iVar2 > 0)
				{
					*(uParam4[iVar2 /*4*/]) = { *(uParam4[(iVar2 - 1) /*4*/]) };
					iVar2 = (iVar2 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
	}
	return 0;
}

int func_731()//Position - 0x1DC7
{
	int iVar0;
	if (Global_3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
					{
						return 0;
					}
				}
			}
		}
	}
	if ((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2))
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !__LIB_0__::func_217())
		{
			return 1;
		}
	}
	if (__LIB_0__::func_194(8, -1))
	{
		return 1;
	}
	if (Global_2703735.f_60)
	{
		return 1;
	}
	if (Global_97919.f_44 == 1)
	{
		if (Global_97919.f_46 == 0)
		{
			return 1;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_732(int iParam0, char* sParam1, char* sParam2, var uParam3)//Position - 0x2B2E
{
	*uParam3 = 0;
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 192:
			StringCopy(sParam1, "002110_04_MAGD_3_WEED_EXCHANGE_WEEDBOTTLE", 64);
			return 1;
			break;
		case 156:
			StringCopy(sParam1, "AROUND_THE_TABLE_SELFISH_Lap_Top", 64);
			return 1;
			break;
		case 189:
			StringCopy(sParam1, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_CHAIR", 64);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "exit_table", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		case 150:
			StringCopy(sParam1, "RONEX_IG5_P2_CHAIR_01", 64);
			StringCopy(sParam2, "RONEX_IG5_P2_CHAIR_02", 64);
			return 1;
			break;
		case 151:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_EXIT_CHAIR", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		case 171:
			StringCopy(sParam1, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_$", 64);
			return 1;
			break;
		case 172:
			StringCopy(sParam1, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_CASH", 64);
			return 1;
			break;
		case 249:
			StringCopy(sParam1, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_GUITAR", 64);
			return 1;
			break;
		case 296:
			StringCopy(sParam1, "BEAR_IN_FLOYDS_FACE_EXIT_rasp", 64);
			return 1;
			break;
		case 297:
			StringCopy(sParam1, "BEAR_FLOYDS_FACE_SMELL_EXIT_doll", 64);
			return 1;
			break;
		case 298:
			StringCopy(sParam1, "Pineapple_EXIT_PINEAPPLE", 64);
			return 1;
			break;
		case 311:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT_Foot", 64);
			return 1;
			break;
		case 103:
			StringCopy(sParam1, "pier_lean_smoke_outro_CIG", 64);
			return 1;
			break;
		case 244:
			StringCopy(sParam1, "EXIT_Taco", 64);
			return 1;
			break;
		case 198:
			StringCopy(sParam1, "Garbage_Toss_BAG", 64);
			*uParam3 = 1;
			return 1;
			break;
		case 200:
			StringCopy(sParam1, "THROW_CUP_EXIT_CUP", 64);
			return 1;
			break;
		case 201:
			StringCopy(sParam1, "HIT_CUP_HAND_EXIT_CUP", 64);
			return 1;
			break;
		case 236:
			StringCopy(sParam1, "EXIT_Beer", 64);
			return 1;
			break;
		case 164:
			StringCopy(sParam1, "001404_01_MICS3_16_READS_SCRIPT_EXIT_PROP", 64);
			return 1;
			break;
		case 80:
			StringCopy(sParam1, "EXIT_FORWARD_CHAIR", 64);
			return 1;
			break;
	}
	return 0;
}

int func_733(int iParam0, int iParam1, int iParam2)//Position - 0x7A71
{
	if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[137])
	{
		if (iParam0 == joaat("Player_Zero"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 169 || (iParam2 >= 171 && iParam2 <= 173))
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if (((iParam2 >= 47 && iParam2 <= 54) || (iParam2 >= 72 && iParam2 <= 79)) || (iParam2 >= 89 && iParam2 <= 91))
				{
					return 1;
				}
			}
			else if (iParam1 == 11)
			{
				if (iParam2 == 44)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("Player_One"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 260)
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if ((iParam2 >= 14 && iParam2 <= 21) || (iParam2 >= 72 && iParam2 <= 77))
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("Player_Two"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 96 || (iParam2 >= 71 && iParam2 <= 75))
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if ((((iParam2 >= 18 && iParam2 <= 29) || (iParam2 >= 81 && iParam2 <= 90)) || (iParam2 >= 94 && iParam2 <= 103)) || iParam2 == 33)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_734(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA503
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam2 == 10 || iParam2 == 16)
			{
				if (iParam1 != -99)
				{
					if (((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 38 && iParam1 <= 43)) || (iParam1 >= 113 && iParam1 <= 128)) || (iParam1 >= 129 && iParam1 <= 134)) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 151 && iParam1 <= 160)) || (iParam1 >= 161 && iParam1 <= 168)) || (iParam1 >= 175 && iParam1 <= 176)) || (iParam1 >= 177 && iParam1 <= 180))
					{
						return 0;
					}
				}
			}
			break;
		case joaat("Player_One"):
			if (iParam2 == 0)
			{
				if (iParam1 != -99)
				{
					if ((((((((((((((((iParam1 >= 57 && iParam1 <= 72) || (iParam1 >= 73 && iParam1 <= 88)) || (iParam1 >= 91 && iParam1 <= 106)) || (iParam1 >= 107 && iParam1 <= 122)) || (iParam1 >= 123 && iParam1 <= 138)) || (iParam1 >= 139 && iParam1 <= 146)) || iParam1 == 159) || (iParam1 >= 160 && iParam1 <= 175)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 209 && iParam1 <= 222)) || (iParam1 >= 223 && iParam1 <= 226)) || (iParam1 >= 227 && iParam1 <= 242)) || (iParam1 >= 243 && iParam1 <= 258)) || (iParam1 >= 261 && iParam1 <= 266)) || (iParam1 >= 267 && iParam1 <= 282)) || (iParam1 >= 296 && iParam1 <= 308))
					{
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 != 0)
					{
						return 0;
					}
				}
			}
			break;
		case joaat("Player_Two"):
			if (iParam2 == 0 || iParam2 == 1)
			{
				if (iParam1 != -99)
				{
					if ((((((((((((iParam1 >= 27 && iParam1 <= 42) || (iParam1 >= 79 && iParam1 <= 94)) || (iParam1 >= 98 && iParam1 <= 103)) || (iParam1 == 136 && iParam1 <= 143)) || (iParam1 >= 144 && iParam1 <= 154)) || (iParam1 >= 156 && iParam1 <= 161)) || (iParam1 >= 178 && iParam1 <= 189)) || (iParam1 >= 190 && iParam1 <= 199)) || (iParam1 >= 200 && iParam1 <= 206)) || (iParam1 >= 207 && iParam1 <= 222)) || (iParam1 >= 223 && iParam1 <= 232)) || (iParam1 >= 233 && iParam1 <= 240))
					{
						return 0;
					}
				}
			}
			break;
	}
	return 1;
}

int func_735(int iParam0, int iParam1, int iParam2)//Position - 0xAC4C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				iVar0 = 1;
			}
			if (iParam2 >= 0 && iParam2 <= 15)
			{
				iVar1 = 1;
			}
			if (iVar0 != iVar1)
			{
				if (iVar1 == 1)
				{
					if (((iParam1 >= 85 && iParam1 <= 90) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 92 && iParam1 <= 96))
					{
						return 1;
					}
				}
				return 0;
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 >= 190 && iParam1 <= 199)
			{
				iVar0 = 1;
			}
			if (iParam2 >= 71 && iParam2 <= 80)
			{
				iVar1 = 1;
			}
			if (iVar0 != iVar1)
			{
				return 0;
			}
			if (iParam1 >= 71 && iParam1 <= 75)
			{
				if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 92)
			{
				if (iParam1 == 241 || (iParam1 >= 200 && iParam1 <= 206))
				{
				}
				else
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_736(int iParam0, int iParam1, int iParam2)//Position - 0xAD8D
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				if (((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 77 && iParam1 <= 84)) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 161 && iParam1 <= 168)) || (iParam1 >= 175 && iParam1 <= 176))
				{
					return 0;
				}
			}
			break;
		case joaat("Player_One"):
			if (iParam1 >= 192 && iParam1 <= 207)
			{
				if (((((iParam2 >= 40 && iParam2 <= 51) || iParam2 == 52) || (iParam2 >= 72 && iParam2 <= 77)) || (iParam2 >= 88 && iParam2 <= 96)) || (iParam2 >= 97 && iParam2 <= 110))
				{
					return 0;
				}
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 == 96)
			{
				if ((iParam2 >= 62 && iParam2 <= 70) || iParam2 == 92)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

void func_737(float fParam0)//Position - 0x3202C
{
	if (!Global_44203)
	{
		return;
	}
	Global_44209 = fParam0;
}

void func_738(float fParam0)//Position - 0x32043
{
	if (!Global_44203)
	{
		return;
	}
	if (fParam0 < 0f || fParam0 > 5f)
	{
		return;
	}
	Global_44207 = fParam0;
}

void func_739(int iParam0)//Position - 0x3F33E
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_22616 = iParam0;
		Global_22617 = 1;
	}
}

int func_740()//Position - 0x3F356
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (Global_22616 == 1)
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

void func_741(bool bParam0)//Position - 0x9BA70
{
	if (bParam0)
	{
		if (Global_20266.f_1 == 9)
		{
			Global_20464 = 1;
		}
	}
	else
	{
		Global_20464 = 0;
	}
}

void func_742()//Position - 0xAC730
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_96903[iVar0] = Global_96903[iVar0 + 1];
		}
		else
		{
			Global_96903[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

int func_743(bool bParam0)//Position - 0x38926
{
	if (bParam0 == 145)
	{
		return 7;
	}
	if (bParam0 < __LIB_0__::func_684())
	{
		return __LIB_13__::func_96(bParam0);
	}
	if (bParam0 == 144)
	{
		return 7;
	}
	if (bParam0 == __LIB_0__::func_684())
	{
		return 6;
	}
	if (bParam0 == 188)
	{
		return 6;
	}
	return 6;
}

void func_744(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5)//Position - 0x31D4B
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (__LIB_4__::func_961(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = __LIB_0__::func_760();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = uParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

void func_745(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x528BA
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_25__::func_663(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_32__::func_96(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_32__::func_95(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (__LIB_0__::func_374(bVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__::func_351(161, iParam3))
			{
				uParam1->f_59 = __LIB_0__::func_369(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_0__::func_369(753, iParam3, 0);
			}
			uParam1->f_60 = __LIB_0__::func_369(754, iParam3, 0);
			uParam1->f_61 = __LIB_0__::func_369(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_0__::func_351(161, iParam3))
			{
				uParam1->f_59 = __LIB_0__::func_369(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_0__::func_369(753, iParam3, 0);
			}
		}
	}
}

bool func_746(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3F37B
{
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return __LIB_37__::func_361(sParam2, iParam3, 0);
}

bool func_747(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x3EC07
{
	__LIB_0__::func_487(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return __LIB_37__::func_361(sParam3, iParam4, bParam8);
}

Vector3 func_748(int iParam0)//Position - 0x226
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
			break;
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
			break;
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
			break;
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
			break;
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
			break;
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
			break;
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
			break;
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
			break;
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
			break;
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
			break;
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
			break;
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
			break;
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
			break;
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_749(int iParam0, int iParam1)//Position - 0x1CC9
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

float func_750(int iParam0, int iParam1)//Position - 0x536D
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
					break;
				case 1:
					return 177.9306f;
					break;
				case 2:
					return 49.6978f;
					break;
				case 3:
					return 336.9449f;
					break;
				case 4:
					return 80.1639f;
					break;
				case 5:
					return 287.983f;
					break;
				case 6:
					return 46.7895f;
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
					break;
				case 8:
					return 256.7899f;
					break;
				case 9:
					return 180.9647f;
					break;
				case 10:
					return 126.4385f;
					break;
				case 11:
					return 123.4767f;
					break;
				case 12:
					return 226.219f;
					break;
				case 13:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

int func_751()//Position - 0x5811
{
	return Global_112096.f_20;
}

int func_752(int iParam0, int iParam1)//Position - 0x5837
{
	switch (iParam0)
	{
		case 10:
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
					return 5;
					break;
				case 6:
					return 6;
					break;
			}
			break;
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				case 1:
					return 10;
					break;
				case 2:
					return 11;
					break;
				case 3:
					return 12;
					break;
				case 4:
					return 13;
					break;
			}
			break;
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_753(int iParam0)//Position - 0x9E56
{
	Global_112096.f_22 = iParam0;
}

void func_754(var uParam0, int iParam1, int iParam2)//Position - 0x2833
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 2:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 3:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 4:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 5:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_SAWNOFFSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 2:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 3:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 4:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 5:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325.1079f, 6263.8325f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_SAWNOFFSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -312.9843f, 6250.1147f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 2:
					*uParam0 = { -326.1756f, 6268.3384f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 3:
					*uParam0 = { -323.9344f, 6259.6587f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.3945f, 42.7414f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				case 4:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 5:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215.3203f, 4275.0464f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.3765f, 48.4082f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				case 2:
					*uParam0 = { -2200.848f, 4268.1904f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.5752f, 4275.1294f, 49.0669f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 3:
					*uParam0 = { -2202.8179f, 4294.1494f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.7834f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 4:
					*uParam0 = { -2196.2708f, 4265.0645f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.1833f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 5:
					*uParam0 = { -2204.4917f, 4290.0586f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.0168f, 4292.6694f, 54.873f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

void func_755(int iParam0, struct<3> Param1)//Position - 0x164A
{
	int iVar0;
	int iVar1;
	int iVar2;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (!__LIB_0__::func_86(Param1))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true);
		if (iVar0 == joaat("WEAPON_MOLOTOV"))
		{
			if (iVar1 != joaat("WEAPON_MOLOTOV"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_MOLOTOV"), true);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_475(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_475(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_475(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_475(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_475(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_475(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_475(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_475(Param1, 1f), 0, false);
				TASK::SET_SEQUENCE_TO_REPEAT(iVar2, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_COORD")) != 0)
		{
			TASK::TASK_SHOOT_AT_COORD(iParam0, Param1, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_STAND_STILL")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_STAND_STILL")) != 0)
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}

int func_756(int iParam0, int iParam1)//Position - 0xFDE
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

int func_757(int iParam0, struct<3> Param1)//Position - 0x37F2
{
	switch (iParam0)
	{
		case 5:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 174.58f, 335.5574f)), __LIB_0__::func_79(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 6:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, -711.023f, 393.0992f)), __LIB_0__::func_79(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 7:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, -215.2002f, -1423.2535f)), __LIB_0__::func_79(Vector(0f, -215.1443f, -1420.7098f) - Vector(0f, -215.2002f, -1423.2535f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 11:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 274.9096f, -564.5655f)), __LIB_0__::func_79(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 12:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 338.8084f, 225.5057f)), __LIB_0__::func_79(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 13:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 6256.4995f, -299.9329f)), __LIB_0__::func_79(Vector(0f, 6255.1787f, -301.1977f) - Vector(0f, 6256.4995f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 14:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 4287.951f, -2200.2039f)), __LIB_0__::func_79(Vector(0f, 4289.739f, -2199.2598f) - Vector(0f, 4287.951f, -2200.2039f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 0;
}

struct<4> func_758(char* sParam0)//Position - 0x1930
{
	struct<4> Var0;
	StringCopy(&Var0, sParam0, 16);
	switch (__LIB_0__::func_683())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_759(int iParam0)//Position - 0xE15
{
	if (((!__LIB_0__::func_683() == iParam0 || __LIB_13__::func_94()) || __LIB_0__::func_690()) || Global_78316 != -1)
	{
		if (!__LIB_0__::func_683() == 1)
		{
		}
		if (__LIB_13__::func_94())
		{
		}
		if (__LIB_0__::func_690())
		{
		}
		if (Global_78316 != -1)
		{
		}
	}
	return 0;
}

void func_760()//Position - 0x6FD44
{
	iLocal_56 = 1;
}

void func_761(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x7090A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
		if (iParam4 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
	}
}

void func_762(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, float fParam5)//Position - 0x70D70
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
		if (iParam4 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam4, iParam4);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, fParam5);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
	}
}

void func_763(int iParam0)//Position - 0x7B8B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				}
			}
			iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1, false))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_764(char* sParam0)//Position - 0x933EC
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_HASH_KEY(sParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::GET_HASH_KEY(&(Global_41585[iVar0 /*8*/])) == iVar1)
		{
			StringCopy(&(Global_41585[iVar0 /*8*/]), "", 32);
		}
		iVar0++;
	}
}

void func_765(int* iParam0, int iParam1, bool bParam2)//Position - 0x7B176
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				*iParam0 = __LIB_0__::func_666(*iParam1, bParam2, 145);
				if (bParam2 == 0)
				{
					HUD::SET_BLIP_PRIORITY(*iParam0, 7);
				}
			}
		}
	}
}

int func_766(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x8225C
{
	return __LIB_16__::func_900(uParam0, 0, 3, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

void func_767()//Position - 0x98387
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<11> Var3;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97754[iVar0] = 0;
		Global_97762[iVar0] = 0;
		Global_97766[iVar0] = 0;
		Global_97820[iVar0 /*3*/][0] = -1;
		Global_97820[iVar0 /*3*/][1] = -1;
		Global_113386.f_2363.f_539.f_3588[0 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_3588[1 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2387[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2391[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/] = 0;
			Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/].f_1 = 0;
			StringCopy(&(Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/].f_27), "", 16);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_113386.f_2363.f_539.f_2247[iVar1 /*4*/][iVar0] = 0;
			iVar1++;
		}
		Global_113386.f_2363.f_539.f_290[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_294[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2348[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2352 = 0;
		Global_113386.f_2363.f_539.f_2354 = 0;
		Global_113386.f_2363.f_539.f_4315 = 0;
		Global_113386.f_2363.f_539.f_4316 = 0;
		Global_113386.f_2363.f_539.f_4321 = 145;
		Global_113386.f_2363.f_539.f_4322 = 145;
		Global_113386.f_2363.f_539.f_4323 = 0;
		Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2310[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2314[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2328[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2332[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2383[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2355[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2359[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2363[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2367[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2371[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2375[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2379[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2336[iVar0] = -15;
		Global_113386.f_2363.f_539.f_2340[iVar0] = -1;
		Global_113386.f_2363.f_539.f_2344[iVar0] = -1;
		Global_113386.f_2363.f_539.f_2395[iVar0] = -99;
		Global_113386.f_2363.f_539.f_2399[iVar0] = 14;
		Global_113386.f_2363.f_539.f_2403[iVar0] = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = 0;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = 0;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
		iVar1 = 0;
		while (iVar1 < 44)
		{
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_1 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_2 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_3 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_4 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/] = 0;
			if (__LIB_0__::func_292(iVar1) == joaat("SLOT_UNARMED"))
			{
				Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/] = joaat("WEAPON_UNARMED");
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 51)
		{
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_1 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_2 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_3 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_4 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_113386.f_2363.f_493[iVar0 /*15*/][iVar1] = 0;
			Global_113386.f_2363.f_493[iVar0 /*15*/].f_5[iVar1] = 0;
			Global_113386.f_2363.f_493[iVar0 /*15*/].f_10[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_2363.f_539.f_2241)
	{
		Global_113386.f_2363.f_539.f_2241[iVar0] = 0;
		iVar0++;
	}
	Global_113386.f_2363.f_539.f_196[0] = 77;
	Global_113386.f_2363.f_539.f_196[1] = 41;
	Global_113386.f_2363.f_539.f_196[2] = 54;
	Global_113386.f_2363.f_539.f_200[0] = 47;
	Global_113386.f_2363.f_539.f_200[1] = 14;
	Global_113386.f_2363.f_539.f_200[2] = 18;
	Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/] = 0;
	Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/].f_1 = 0;
	StringCopy(&(Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/].f_27), "", 16);
	Global_113386.f_2363.f_4863 = -1;
	Global_113386.f_2363.f_4864 = 145;
	__LIB_38__::func_694(0);
	Global_97747 = 1;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (__LIB_0__::func_445(&Var3, iVar0, 0, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[0 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[0 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		if (__LIB_0__::func_445(&Var3, iVar0, 1, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[1 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[1 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (__LIB_0__::func_445(&Var3, iVar0, 2, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/].f_10[(1 / 32)]), (1 % 32));
	Global_113386.f_2363.f_539.f_2348[0] = 1;
	Global_113386.f_2363.f_539.f_290[0] = 100f;
	iVar2 = __LIB_0__::func_42(0);
	__LIB_38__::func_690(0);
	__LIB_13__::func_802(0);
	__LIB_15__::func_952(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2348[2] = 1;
	Global_113386.f_2363.f_539.f_290[2] = 100f;
	iVar2 = __LIB_0__::func_42(2);
	__LIB_38__::func_690(2);
	__LIB_13__::func_802(2);
	__LIB_15__::func_952(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2348[1] = 1;
	Global_113386.f_2363.f_539.f_290[1] = 100f;
	iVar2 = __LIB_0__::func_42(1);
	__LIB_38__::func_690(1);
	__LIB_13__::func_802(1);
	__LIB_15__::func_952(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2352 = 1;
	Global_113386.f_2363.f_539.f_2353 = 0;
}

void func_768(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x70DE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		__LIB_31__::func_970(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

int func_769()//Position - 0x60747
{
	return Local_630.f_31;
}

int func_770()//Position - 0x62318
{
	switch (Local_630.f_31)
	{
		case 2:
		case 3:
		case 4:
			return 13;
			break;
		case 6:
			return 26;
			break;
		case 12:
			return 26;
			break;
		case 5:
			return 261;
			break;
		case 7:
			return 159;
			break;
		case 8:
		case 9:
		case 10:
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_2 == 0)
			{
				return 369;
			}
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_2 == 1)
			{
				return 368;
			}
			break;
		case 11:
			return 488;
			break;
	}
	return 4;
}

int func_771()//Position - 0x623D6
{
	switch (Local_630.f_31)
	{
		case 2:
		case 3:
		case 4:
			return 14;
			break;
		case 6:
			return 27;
			break;
		case 12:
			return 27;
			break;
		case 5:
			return 263;
			break;
		case 8:
		case 9:
		case 10:
			return 371;
			break;
		case 7:
			return 160;
			break;
		case 11:
			return 489;
			break;
	}
	return 4;
}

int func_772()//Position - 0x64C56
{
	switch (Local_630.f_31)
	{
		case 2:
		case 3:
		case 4:
			return 15;
			break;
		case 6:
			return 28;
			break;
		case 12:
			return 28;
			break;
		case 5:
			return 264;
			break;
		case 8:
		case 9:
		case 10:
			return 370;
			break;
		case 7:
			return 161;
			break;
		case 11:
			return 490;
			break;
	}
	return 4;
}

void func_773(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)//Position - 0x64CE6
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = -105579290;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = iParam5;
	iVar1 = __LIB_1__::func_705(iParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

int func_774()//Position - 0x64EAE
{
	int iVar0;
	if (Local_630.f_36 != -1)
	{
		return Local_630.f_36;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_630[iVar0 /*3*/].f_2)
		{
			Local_630.f_36 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

bool func_775(int iParam0)//Position - 0x6B4A6
{
	int iVar0;
	var uVar1;
	iVar0 = iParam0;
	uVar1 = Global_2815059.f_6759;
	if (iVar0 > 31)
	{
		if (iVar0 <= 63)
		{
			uVar1 = Global_2815059.f_6760;
			iVar0 = (iVar0 - 32);
		}
		else if (iVar0 <= 95)
		{
			uVar1 = Global_2815059.f_6761;
			iVar0 = (iVar0 - 64);
		}
	}
	return BitTest(uVar1, iVar0);
}

void func_776()//Position - 0x6DB43
{
	Local_629.f_0 = 0;
}

bool func_777(char* sParam0)//Position - 0x6F715
{
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1);
}

int func_778(char* sParam0)//Position - 0x2ED6
{
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__::func_162())
	{
		return 1;
	}
	if (!__LIB_4__::func_991(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) || __LIB_4__::func_990(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) != 1)
	{
		StringCopy(sParam0, "ARC_START_M_D5" /* GXT: Unavailable: Vault laser required. */, 64);
		return 1;
	}
	return 0;
}

int func_779(char* sParam0)//Position - 0x2FEA
{
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__::func_162())
	{
		return 1;
	}
	if (!__LIB_4__::func_992(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) || __LIB_4__::func_990(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) != 2)
	{
		StringCopy(sParam0, "ARC_START_M_D4" /* GXT: Unavailable: Vault drill required. */, 64);
		return 1;
	}
	return 0;
}

void func_780(var uParam0)//Position - 0x59406
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[0]))
	{
		iVar0 = NETWORK::NET_TO_OBJ((*uParam0)[0]);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((*uParam0)[0]))
		{
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			__LIB_1__::func_387(uParam0[0]);
		}
		if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) - 1));
		}
		else
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) - 1));
		}
	}
}

int func_781(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, struct<3> Param5, struct<3> Param6)//Position - 0x5B506
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[3]))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_hei_drill_hole")))
	{
		return 0;
	}
	if (!BitTest(*iParam0, 11))
	{
		if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
		}
		else
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
		}
		MISC::SET_BIT(iParam0, 11);
	}
	if (BitTest(*iParam0, 11))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			if (__LIB_1__::func_671(uParam1[3], joaat("hei_prop_hei_drill_hole"), Param5, bParam4, 1, 0, 1, 0, 0, 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ((*uParam1)[3]), Param5, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ((*uParam1)[3]), Param6, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ((*uParam1)[3]), true);
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ((*uParam1)[3]), false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ((*uParam1)[3]), true);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE((*uParam1)[3], false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hei_prop_hei_drill_hole"));
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[3]), false, false);
				iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam3);
				iVar1 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam3);
				if (iVar0 != 0 && iVar1 != 0)
				{
					if (INTERIOR::IS_INTERIOR_READY(iVar0))
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(NETWORK::NET_TO_OBJ((*uParam1)[3]), iVar0, iVar1);
					}
				}
				MISC::CLEAR_BIT(iParam0, 11);
				return 1;
			}
		}
	}
	return 0;
}

int func_782(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x5B6FE
{
	if (!bParam5)
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[1]))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam6);
	if (STREAMING::HAS_MODEL_LOADED(iParam6))
	{
		if (!BitTest(*iParam0, 10))
		{
			if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
			}
			else
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
			}
			MISC::SET_BIT(iParam0, 10);
		}
		if (BitTest(*iParam0, 10))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (__LIB_1__::func_671(uParam1[1], iParam6, ENTITY::GET_ENTITY_COORDS(iParam2, true), bParam3, 1, 0, 1, 0, 0, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ((*uParam1)[1]), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ((*uParam1)[1]), true, false);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ((*uParam1)[1]), true);
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE((*uParam1)[1], false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam6);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[1]), !bParam4, false);
					MISC::CLEAR_BIT(iParam0, 10);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_783(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5B82D
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[0]))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_heist_drill"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_ch_heist_drill")))
	{
		if (!BitTest(*iParam0, 9))
		{
			if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
			}
			else
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
			}
			MISC::SET_BIT(iParam0, 9);
		}
		if (BitTest(*iParam0, 9))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (__LIB_1__::func_671(uParam1[0], joaat("ch_prop_ch_heist_drill"), ENTITY::GET_ENTITY_COORDS(iParam2, true), bParam3, 1, 0, 1, 0, 0, 0))
				{
					__LIB_5__::func_88(iParam0, uParam1, iParam2, bParam4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_784(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5B958
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[0]))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("ch_prop_laserdrill_01a"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_laserdrill_01a")))
	{
		if (!BitTest(*iParam0, 9))
		{
			if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
			}
			else
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
			}
			MISC::SET_BIT(iParam0, 9);
		}
		if (BitTest(*iParam0, 9))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (__LIB_1__::func_671(uParam1[0], joaat("ch_prop_laserdrill_01a"), ENTITY::GET_ENTITY_COORDS(iParam2, true), bParam3, 1, 0, 1, 0, 0, 0))
				{
					__LIB_5__::func_88(iParam0, uParam1, iParam2, bParam4);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_785(var uParam0, int iParam1)//Position - 0x60337
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = -1887020194;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428, 1))
		{
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!__LIB_0__::func_864(&(uParam0->f_1)))
	{
		__LIB_0__::func_795(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (__LIB_0__::func_864(&(uParam0->f_1)) && !__LIB_0__::func_937(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			__LIB_0__::func_794(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		__LIB_0__::func_794(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = __LIB_1__::func_705(PLAYER::PLAYER_ID());
		if (iVar3 != -1)
		{
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

void func_786()//Position - 0x61EC1
{
	Local_629.f_5 = -1;
	if (Local_629.f_6 != -2147483647)
	{
		Local_629.f_6 = -2147483647;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_629.f_7))
	{
		Local_629.f_7 = __LIB_0__::func_591();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_787(int iParam0)//Position - 0x62466
{
	if (Local_134.f_19[iParam0] == -1)
	{
		Local_134.f_19[iParam0] = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_134.f_19[iParam0], __LIB_36__::func_375(iParam0), __LIB_36__::func_374(iParam0), false);
}

void func_788(int iParam0, int iParam1)//Position - 0x6502F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < (iParam1 - 1))
	{
		if ((iParam0[iVar0 /*3*/])->f_1 < (iParam0[(iParam1 - 1) /*3*/])->f_1)
		{
			__LIB_36__::func_376(iParam0, iVar0, (iParam1 - 1));
			if (Local_630.f_36 == -1)
			{
				Local_630.f_36 = iVar0;
			}
		}
		iVar0++;
	}
}

void func_789(var uParam0)//Position - 0x48E8
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[1]))
	{
		iVar0 = NETWORK::NET_TO_OBJ((*uParam0)[1]);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((*uParam0)[1]))
		{
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			__LIB_1__::func_387(uParam0[1]);
		}
		if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) - 1));
		}
		else
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) - 1));
		}
	}
}

void func_790(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5B120
{
	int iVar0;
	iVar0 = __LIB_5__::func_172(iParam3);
	if (__LIB_2__::func_213(uParam0))
	{
		if (!BitTest(Global_1966339[iVar0], 2))
		{
			__LIB_25__::func_472(iVar0, uParam2, iParam1, 0, 0);
		}
	}
	else if (uParam0->f_12 > 0f)
	{
		if (!BitTest(Global_1966339[iVar0], 0) && !BitTest(Global_1966339[iVar0], 1))
		{
			__LIB_25__::func_472(iVar0, uParam2, iParam1, 1, 0);
		}
	}
	else if (!BitTest(Global_1966339[iVar0], 2))
	{
		__LIB_25__::func_472(iVar0, uParam2, iParam1, 0, 0);
	}
}

void func_791(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5B1A6
{
	int iVar0;
	iVar0 = __LIB_5__::func_172(iParam3);
	if (__LIB_2__::func_213(uParam0))
	{
		if (!BitTest(Global_1966339[iVar0], 2))
		{
			__LIB_25__::func_472(iVar0, uParam2, iParam1, 0, 1);
		}
	}
	else if (uParam0->f_12 > 0f)
	{
		if (!BitTest(Global_1966339[iVar0], 0) && !BitTest(Global_1966339[iVar0], 1))
		{
			__LIB_25__::func_472(iVar0, uParam2, iParam1, 1, 1);
		}
	}
	else if (!BitTest(Global_1966339[iVar0], 2))
	{
		__LIB_25__::func_472(iVar0, uParam2, iParam1, 0, 1);
	}
}

void func_792(int iParam0)//Position - 0x5BDF9
{
	struct<3> Var0;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_0 = -525890435;
	Var0.f_2 = iParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_5__::func_410(1, 1));
}

void func_793(int iParam0)//Position - 0x61654
{
	Local_629.f_0 = 1;
	Local_629.f_6 = -2147483647;
	Local_629.f_5 = MISC::GET_HASH_KEY(__LIB_15__::func_819(iParam0));
	__LIB_5__::func_401(__LIB_15__::func_819(iParam0));
}

void func_794(int iParam0, var uParam1, bool bParam2)//Position - 0xACE
{
	int iVar0;
	WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iParam0, uParam1->f_6, uParam1->f_7);
	PED::SET_PED_SHOOT_RATE(iParam0, MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_16, uParam1->f_17));
	PED::SET_PED_FIRING_PATTERN(iParam0, *uParam1);
	PED::SET_COMBAT_FLOAT(iParam0, 3, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_12, uParam1->f_13));
	PED::SET_COMBAT_FLOAT(iParam0, 4, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_10, uParam1->f_11));
	PED::SET_COMBAT_FLOAT(iParam0, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_14, uParam1->f_15));
	if (bParam2)
	{
		PED::SET_COMBAT_FLOAT(iParam0, 6, uParam1->f_5);
	}
	else
	{
		PED::SET_COMBAT_FLOAT(iParam0, 6, uParam1->f_4);
	}
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_1);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_2);
	PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_20);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 42, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_8);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 11, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_9);
	if (uParam1->f_19 != -1)
	{
		iVar0 = uParam1->f_19;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	switch (iVar0)
	{
		case 0:
			PED::SET_PED_COMBAT_RANGE(iParam0, 0);
			break;
		case 1:
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			break;
		case 2:
			PED::SET_PED_COMBAT_RANGE(iParam0, 2);
			break;
		default:
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			break;
	}
	if (uParam1->f_18 != -1)
	{
		iVar0 = uParam1->f_18;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	switch (iVar0)
	{
		case 0:
			PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
			break;
		case 1:
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			break;
		case 2:
			PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
			break;
		default:
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			break;
	}
}

int func_795(int iParam0, int iParam1)//Position - 0x9F42
{
	int iVar0;
	int iVar1;
	iVar1 = 28422;
	if (!__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (iParam0 == 0 || iParam0 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		iVar1 = 60309;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(iParam0), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f), true, true, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iVar1), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	return iVar0;
}

void func_796(var uParam0, var uParam1)//Position - 0xEB36
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
		}
		switch (*uParam0)
		{
			case 52:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			case 53:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			case 54:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 8, 1, 0, 0);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			case 55:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 10, 0, 1, 0);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			case 56:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

int func_797(int iParam0, int iParam1)//Position - 0x3B68A
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	WEAPON::REQUEST_WEAPON_ASSET(iParam0, 31, 0);
	if (WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_798(var uParam0)//Position - 0x95E
{
	if (*uParam0 >= iLocal_412)
	{
		*uParam0 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_412[*uParam0]))
	{
		*uParam0 = 0;
		return 0;
	}
	return 1;
}

int func_799(var uParam0)//Position - 0x98B
{
	if (*uParam0 >= iLocal_411)
	{
		*uParam0 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_411[*uParam0]))
	{
		*uParam0 = 0;
		return 0;
	}
	return 1;
}

void func_800(var uParam0)//Position - 0xDD1
{
	__LIB_0__::func_714(&(uParam0->f_1));
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	if (uParam0->f_7 != -1)
	{
		Local_348[uParam0->f_7 /*44*/].f_36 = (Local_348[uParam0->f_7 /*44*/].f_36 - 1);
		if (Local_348[uParam0->f_7 /*44*/].f_36 < 0)
		{
			Local_348[uParam0->f_7 /*44*/].f_36 = 0;
		}
		uParam0->f_7 = -1;
	}
}

int func_801()//Position - 0xE4E
{
	if (Local_280.f_37 == 0)
	{
		return 0;
	}
	return Local_280.f_27[MISC::GET_RANDOM_INT_IN_RANGE(0, Local_280.f_37)];
}

int func_802(int iParam0, int iParam1)//Position - 0xE8F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*13*/]))
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_803(var uParam0)//Position - 0xEC3
{
	if (bLocal_594)
	{
		return MISC::GET_GAME_TIMER() > iLocal_591;
	}
	return MISC::GET_GAME_TIMER() > *uParam0;
}

Vector3 func_804(struct<16> Param0, var uParam1)//Position - 0x1373
{
	struct<3> Var0;
	Var0 = { Param0.f_1[0 /*3*/] + Param0.f_9 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, Param0.f_15)) };
	Var0 = { Var0 + Param0.f_12 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) * Vector(Param0.f_8, Param0.f_8, Param0.f_8) };
	Var0.f_2 = (Param0.f_1[0 /*3*/].f_2 + ((Param0.f_1[1 /*3*/].f_2 - Param0.f_1[0 /*3*/].f_2) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1.5f)));
	if (Var0.f_2 > Param0.f_1[1 /*3*/].f_2)
	{
		Var0.f_2 = Param0.f_1[1 /*3*/].f_2;
	}
	return Var0;
}

int func_805(var uParam0)//Position - 0x213A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_333)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_333[iVar0]))
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_806(int iParam0, int iParam1)//Position - 0x216F
{
	float fVar0;
	float fVar1;
	int iVar2;
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f);
	PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f), true);
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fLocal_318 && __LIB_0__::func_121(iParam1))
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true), MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 25f), false, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 37, true);
	}
	else
	{
		PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0, fVar1, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 80f), false);
	}
	if (Local_280.f_0 != 81 && (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
	{
		if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= fLocal_320)
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_RPG"), 60, false, true);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar2);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	TASK::CLOSE_SEQUENCE_TASK(iVar2);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar2);
	TASK::CLEAR_SEQUENCE_TASK(&iVar2);
}

int func_807(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x2455
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	*uParam2 = (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iParam0, false, true));
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (iParam4 && !VEHICLE::IS_VEHICLE_STOPPED(iParam0))
		{
			return 0;
		}
		if (iParam3 && VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			*uParam1 = -1;
			iVar0 = 1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1, false))
				{
					*uParam1 = iVar1;
					return 1;
				}
				iVar1++;
			}
		}
	}
	return iVar0;
}

bool func_808(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x24DC
{
	return MISC::IS_POSITION_OCCUPIED(Param0, fParam1, bParam2, bParam3, bParam4, bParam5, bParam6, iParam7, bParam8);
}

int func_809(int iParam0)//Position - 0x24FC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_324.f_0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_324[iVar0 /*20*/]))
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_810()//Position - 0x2534
{
	if (Local_280.f_38 == 0)
	{
		return 0;
	}
	return Local_280.f_32[MISC::GET_RANDOM_INT_IN_RANGE(0, Local_280.f_38)];
}

int func_811()//Position - 0x255A
{
	if (iLocal_590 == 0)
	{
		return 1;
	}
	iLocal_586 = (iLocal_338 / 2);
	switch (iLocal_585)
	{
		case 0:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (iLocal_336 >= iLocal_338)
			{
				iLocal_585 = 1;
				return 0;
			}
			break;
		case 1:
			if (iLocal_336 < iLocal_586)
			{
				iLocal_585 = 2;
				iLocal_589 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_587, iLocal_588));
			}
			return 0;
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_589 || iLocal_336 < 4)
			{
				iLocal_585 = 0;
				return 1;
			}
			return 0;
			break;
	}
	return 1;
}

int func_812()//Position - 0x25F3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_324.f_0)
	{
		if (__LIB_0__::func_121(Local_324[iVar0 /*20*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_813()//Position - 0x2A38
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, false, false, 0);
}

int func_814()//Position - 0x2A6E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1599.593f, 2818.15f, -17.645f, -1612.423f, 2806.997f, 17.645f, 51f, true, false, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2301.089f, 3385.031f, -31.086f, -2305.302f, 3379.441f, 31.086f, 16f, true, false, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2287.138f, 3385.616f, 31.124f, -2292.554f, 3378.428f, 31.124f, 19.8f, true, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_815(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x3B50
{
	uParam0->f_2 = { Param1 };
	uParam0->f_5 = fParam2;
	uParam0->f_1 = iParam3;
}

int func_816(var uParam0, var uParam1)//Position - 0x3C06
{
	if (iLocal_336 >= iLocal_338)
	{
		return 0;
	}
	if ((uParam0->f_1 % 4) != 0)
	{
		return 0;
	}
	*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_214);
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_15[*uParam1 /*6*/].f_2) > 3600f)
	{
		return 0;
	}
	if (bLocal_315)
	{
		if (__LIB_14__::func_819(uParam0->f_15[*uParam1 /*6*/].f_2, 1f, 0, 1))
		{
			return 0;
		}
	}
	else if (PED::IS_ANY_PED_NEAR_POINT(uParam0->f_15[*uParam1 /*6*/].f_2, 1f))
	{
		return 0;
	}
	return 1;
}

int func_817(int iParam0)//Position - 0x3F82
{
	int iVar0;
	int iVar1;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (Local_280.f_38 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_280.f_32)
	{
		if (Local_280.f_32[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_818(int* iParam0)//Position - 0x42E6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	var uVar8;
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (__LIB_0__::func_715(iParam0->f_2))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_2, true) };
	}
	Var3 = { Var1 - Var2 };
	fLocal_347 = MISC::ATAN2(Var3.f_1, Var3.f_0);
	fLocal_345 = (fLocal_347 + fLocal_342);
	fLocal_346 = ((fLocal_347 - fLocal_342) + 360f);
	fVar6 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_345, fLocal_346);
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_343, fLocal_344);
	Var4.f_0 = SYSTEM::COS(fVar6);
	Var4.f_1 = SYSTEM::SIN(fVar6);
	Var4.f_2 = 0f;
	Var5 = { Vector(fVar7, fVar7, fVar7) * Var4 };
	Var0 = { Var1 + Var5 };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar8, false, false))
	{
		Var0.f_2 = uVar8;
	}
	return Var0;
}

void func_819(int* iParam0, bool bParam1)//Position - 0x4CA2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		return;
	}
	__LIB_0__::func_714(&(iParam0->f_1));
	if (!__LIB_0__::func_121(iParam0->f_2))
	{
		__LIB_0__::func_124(iParam0, 1, 0, 1);
	}
	else
	{
		if (__LIB_0__::func_121(*iParam0))
		{
			if (bParam1)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_2, true) + __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iParam0->f_2, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) * Vector(500f, 500f, 500f) };
				if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var1, 0, &Var2, 1, 3f, 0f))
				{
					Var2 = { Var1 };
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iParam0->f_2, Var2, 4, 60f, 786436, -1f, -1f, true);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iParam0->f_2, 60f, 786469);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 8, 60f, 786436, -1f, -1f, true);
			}
		}
		__LIB_0__::func_124(iParam0, 1, 0, 1);
	}
	__LIB_0__::func_106(&(iParam0->f_2));
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	iParam0->f_7 = { 0f, 0f, 0f };
}

void func_820(int iParam0)//Position - 0x54C5
{
	__LIB_0__::func_121(iParam0);
	Local_277.f_7++;
}

void func_821()//Position - 0x6095
{
	int iVar0;
	if (!Local_280.f_52)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Local_308[iVar0 /*8*/].f_7)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_308[iVar0 /*8*/]))
			{
				Local_308[iVar0 /*8*/] = OBJECT::CREATE_OBJECT(Local_280.f_36, Local_308[iVar0 /*8*/].f_1, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(Local_308[iVar0 /*8*/], Local_308[iVar0 /*8*/].f_4, 2, true);
				Local_308[iVar0 /*8*/].f_7 = 1;
			}
		}
		iVar0++;
	}
}

int func_822(int iParam0)//Position - 0x63D5
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = -1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false) || PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::GET_PED_LAST_DAMAGE_BONE(iParam0, &iVar0))
		{
			return 0;
		}
		return (((iVar0 == 63931 || iVar0 == 36864) || iVar0 == 51826) || iVar0 == 58271);
	}
	return 0;
}

int func_823(int iParam0)//Position - 0x64ED
{
	int iVar0;
	int iVar1;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = 0;
	while (iVar0 < Local_280.f_27)
	{
		if (Local_280.f_27[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_824()//Position - 0x937F
{
	iLocal_379 = 1;
}

void func_825()//Position - 0x9541
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("Rampage"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("Rampage");
		GRAPHICS::ANIMPOSTFX_PLAY("RampageOut", 0, false);
	}
}

void func_826(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9951
{
	uParam0->f_549 = uParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

int func_827(var uParam0)//Position - 0x9AE2
{
	switch (*uParam0)
	{
		case 1:
			return Local_277.f_0 >= uParam0->f_1;
		case 2:
			return Local_277.f_1 >= uParam0->f_1;
		case 3:
			return Local_277.f_17 >= uParam0->f_1;
		case 4:
			return Local_277.f_6 >= uParam0->f_1;
		case 5:
			return Local_277.f_8 >= uParam0->f_1;
		case 6:
			return Local_277.f_9 >= uParam0->f_1;
		case 7:
			return Local_277.f_4 >= uParam0->f_1;
		case 8:
			return Local_277.f_5 >= uParam0->f_1;
		case 9:
			return Local_277.f_10 >= uParam0->f_1;
		default:
	}
	return 0;
}

int func_828(bool bParam0)//Position - 0x9E60
{
	if (BitTest(Global_32209, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_829(var uParam0)//Position - 0x9ED5
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*3*/] != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_830(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x9F06
{
	iParam0 = MISC::ABSI(iParam0);
	*uParam1 = ((iParam0 - (iParam0 % 60000)) / 60000);
	*uParam2 = ((iParam0 % 60000) / 1000);
	*uParam3 = ((iParam0 % 1000) / 100);
}

int func_831(int iParam0)//Position - 0xA420
{
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		return 1;
	}
	if (PED::IS_PED_IN_GROUP(iParam0))
	{
		if (PED::GET_PED_GROUP_INDEX(iParam0) == PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_832()//Position - 0xA454
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
}

void func_833()//Position - 0xA4CC
{
	int iVar0;
	iVar0 = 0;
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), 15, false, false);
	iVar0 = 0;
	while (iVar0 < Local_280.f_17)
	{
		if (Local_280.f_17[iVar0] != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[iVar0], -1, true, true);
			WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[iVar0], -1);
			WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), true, Local_280.f_17[iVar0]);
		}
		iVar0++;
	}
	if (Local_280.f_17[0] != 0 && Local_280.f_17[0] != joaat("WEAPON_UNARMED"))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < Local_280.f_24)
		{
			if (Local_280.f_24[iVar0] != 0)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[0], Local_280.f_24[iVar0]);
			}
			iVar0++;
		}
	}
	if (Local_280.f_17[0] != 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), Local_280.f_17[0], true);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		WEAPON::REFILL_AMMO_INSTANTLY(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, "TREVOR_ACTION");
}

void func_834()//Position - 0xA5EB
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("Rampage"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("Rampage", 0, true);
	}
}

void func_835()//Position - 0xA609
{
	switch (Local_280.f_0)
	{
		case 77:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_1_OS");
			break;
		case 81:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_2_OS");
			break;
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_3_OS");
			break;
		case 79:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_4_OS");
			break;
		case 80:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_5_OS");
			break;
	}
}

void func_836()//Position - 0xA673
{
	if (iLocal_596 == 1)
	{
		return;
	}
	switch (Local_280.f_0)
	{
		case 77:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_1_START");
			break;
		case 81:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_2_START");
			break;
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_3_START");
			break;
		case 79:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_4_START");
			break;
		case 80:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_5_START");
			break;
	}
	iLocal_596 = 1;
}

void func_837()//Position - 0xA75A
{
	__LIB_0__::func_222(&uLocal_420, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_415 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 40000));
}

void func_838(var uParam0)//Position - 0xAC36
{
	int iVar0;
	if (!__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, false);
	if (!__LIB_0__::func_121(iVar0))
	{
		return;
	}
	VEHICLE::SET_CAN_ADJUST_GROUND_CLEARANCE(*uParam0, true);
}

void func_839(int iParam0, struct<3> Param1, bool bParam2)//Position - 0xBB6C
{
	int iVar0;
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bLocal_419);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam2)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 2f, -1, 0.25f, 1, 40000f);
	}
	else
	{
		TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Param1, 2f, 0, false, 786603, -1f);
	}
	TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 600f, -1, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MotionState_Run"), false, 0, false);
}

void func_840()//Position - 0xC74D
{
	int iVar0;
	switch (Local_280.f_0)
	{
		case 77:
			iVar0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 907.5499f, 3641.5085f, 33.1808f, -11.3754f, 0.0004f, -105.7755f, 50f, true, 2);
			break;
		default:
			iVar0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_597, Local_598, 50f, true, 2);
			break;
	}
	if (CAM::DOES_CAM_EXIST(iVar0))
	{
		CAM::SET_CAM_ACTIVE(iVar0, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		SYSTEM::WAIT(0);
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
}

int func_841()//Position - 0xC80A
{
	int iVar0;
	int iVar1;
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 0;
	}
	iVar1 = Local_280.f_27;
	if (Local_280.f_37 < iVar1)
	{
		iVar1 = Local_280.f_37;
	}
	if (iVar1 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_280.f_27[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	iVar1 = Local_280.f_32;
	if (Local_280.f_38 < iVar1)
	{
		iVar1 = Local_280.f_38;
	}
	if (iVar1 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_280.f_32[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	if (Local_280.f_52)
	{
		if (Local_280.f_36 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_280.f_36))
			{
				return 0;
			}
		}
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\RAMPAGE_01", false, -1))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\RAMPAGE_02", false, -1))
	{
		return 0;
	}
	if (!AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0))
	{
		return 0;
	}
	return 1;
}

void func_842(var uParam0)//Position - 0xC909
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6))
	{
		return;
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_6))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_6);
	}
}

void func_843()//Position - 0xE3BB
{
	int iVar0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_408 = "Trevor";
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_408, 0, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3);
	}
	switch (Local_280.f_0)
	{
		case 77:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "TriggerHappy_WhiteTrash";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, 0, 0);
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Nervous_WhiteTrash";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[1], sLocal_410[1], 0, 0, 0);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_ASSAULTRIFLE"));
			if (__LIB_0__::func_121(Local_276.f_41[3]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[3], false);
			}
			if (__LIB_0__::func_121(Local_276.f_41[4]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[4], false);
			}
			break;
		case 81:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Rampage_Hipster";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[0]), 0);
			}
			if (__LIB_0__::func_121(Local_276.f_41[1]))
			{
				__LIB_0__::func_123(&(Local_276.f_41[1]));
			}
			if (__LIB_0__::func_121(Local_276.f_41[2]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[2], false);
			}
			if (__LIB_0__::func_121(Local_276.f_41[3]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[3], false);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_SAWNOFFSHOTGUN"));
			break;
		case 78:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Armed_Mexican_Goon";
				PED::SET_PED_COMPONENT_VARIATION(Local_276.f_28[0], 9, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[0]), 0);
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Mexican_Goon";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[1], sLocal_410[1], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[1]), 0);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_MICROSMG"));
			break;
		case 79:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Thug";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[0]), 0);
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Armed_Thug";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[1], sLocal_410[1], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[1]), 11);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_ASSAULTRIFLE"));
			if (__LIB_0__::func_121(Local_276.f_41[0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_276.f_41[0]));
			}
			if (!__LIB_0__::func_121(Local_276.f_41[0]))
			{
				Local_276.f_41[0] = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_ASSAULTRIFLE"), 100, ENTITY::GET_ENTITY_COORDS(Local_276.f_28[0], true), true, 1f, 0, 0, 1);
				if (__LIB_0__::func_121(Local_276.f_41[0]))
				{
				}
			}
			break;
		case 80:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Army_Guy_Right";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, 0, 0);
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Army_Guy_Left";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[1], sLocal_410[1], 0, 0, 0);
			}
			if (__LIB_0__::func_121(Local_276.f_35[0]))
			{
				sLocal_410[2] = "Army_Truck";
				VEHICLE::SET_VEHICLE_EXTRA(Local_276.f_35[0], 1, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_35[0], sLocal_410[2], 0, 0, 0);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_GRENADELAUNCHER"));
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_409))
	{
		if (__LIB_0__::func_121(Local_276.f_41[0]))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_41[0], sLocal_409, 0, 0, 0);
		}
		else
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_409, 2, iVar0, 0);
		}
	}
}

void func_844(int iParam0)//Position - 0x3B311
{
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	iParam0->f_7 = 0;
	iParam0->f_8 = 0;
	iParam0->f_11 = 0;
	iParam0->f_12 = 0;
	iParam0->f_16 = 0;
	iParam0->f_17 = 0;
	STATS::STAT_GET_INT(joaat("SP2_SHOTS"), &(iParam0->f_19), -1);
	STATS::STAT_GET_INT(joaat("SP2_HITS"), &(iParam0->f_18), -1);
}

int func_845(int iParam0, bool bParam1)//Position - 0x3B625
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (iParam0 == 0)
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	if (bParam1 == 0)
	{
		return 1;
	}
	while (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_846(char* sParam0, bool bParam1)//Position - 0x3B6E8
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return 1;
	}
	if (bParam1 == 0)
	{
		return 1;
	}
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_847(char* sParam0, int iParam1)//Position - 0x3B743
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
		{
			return 0;
		}
	}
	return 1;
}

int func_848(char* sParam0, int iParam1, int iParam2)//Position - 0x3B79E
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (*iParam1 == 0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sParam0);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			return 0;
		}
	}
	return 1;
}

void func_849()//Position - 0x3B86B
{
	switch (Local_280.f_0)
	{
		case 77:
			Local_280.f_3 = "RAMP1AU";
			Local_280.f_4 = "RAMP1_FIGHT";
			break;
		case 81:
			Local_280.f_3 = "RAMP2AU";
			Local_280.f_4 = "RAMP2_FIGHT";
			break;
		case 78:
			Local_280.f_3 = "RAMP3AU";
			Local_280.f_4 = "RAMP3_FIGHT";
			break;
		case 79:
			Local_280.f_3 = "RAMP4AU";
			Local_280.f_4 = "RAMP4_FIGHT";
			break;
		case 80:
			Local_280.f_3 = "RAMP5AU";
			Local_280.f_4 = "RAMP5_FIGHT";
			break;
		default:
			return;
	}
	__LIB_17__::func_136(Local_280.f_3, 6, 0, 0);
}

Vector3 func_850()//Position - 0x3BA42
{
	int iVar0;
	iVar0 = Local_280.f_0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

bool func_851()//Position - 0x3BADB
{
	return iLocal_379 != 0;
}

void func_852()//Position - 0x3BB0A
{
	int iVar0;
	switch (Local_280.f_0)
	{
		case 78:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(500.957f, -1805.29f, 27.5551f, 4f, joaat("prop_fnclink_02gate4"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(511.2028f, -1798.3715f, 27.4122f, 4f, joaat("prop_fncres_06gater"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(469.1499f, -1805.6255f, 28.4358f, 4f, joaat("prop_fnclink_06gate2"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			break;
		case 79:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-155.46f, -1665.8f, 32.17f, 4f, joaat("prop_fncsec_03c"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-133.76f, -1617.43f, 32f, 4f, joaat("prop_fncsec_03c"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			break;
	}
}

void func_853()//Position - 0x3D210
{
	int iVar0;
	iVar0 = 0;
	if (Local_280.f_36 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_280.f_36);
	}
	iVar0 = 0;
	while (iVar0 < Local_280.f_27)
	{
		if (Local_280.f_27[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_280.f_27[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_32)
	{
		if (Local_280.f_32[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_280.f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_854()//Position - 0x441F8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_308[iVar0 /*8*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_308[iVar0 /*8*/]));
			Local_308[iVar0 /*8*/].f_7 = 0;
		}
		iVar0++;
	}
}

void func_855()//Position - 0x44236
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_333)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_333[iVar0]))
		{
			if (__LIB_0__::func_121(iLocal_333[iVar0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_333[iVar0], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_333[iVar0], false);
			}
			__LIB_0__::func_106(&(iLocal_333[iVar0]));
			iLocal_333[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_856()//Position - 0x468B2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_17)
	{
		if (Local_280.f_17[iVar0] != 0)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), Local_280.f_17[iVar0], false))
			{
				WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), false, Local_280.f_17[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_857()//Position - 0x46907
{
	int iVar0;
	__LIB_0__::func_714(&iLocal_366);
	iLocal_366 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_323.f_0)
	{
		__LIB_0__::func_714(&(Local_323[iVar0 /*13*/].f_1));
		Local_323[iVar0 /*13*/].f_1 = 0;
		iVar0++;
	}
}

void func_858(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0x470CC
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
}

void func_859(var uParam0, int iParam1, int iParam2)//Position - 0x471E6
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	switch (*uParam0)
	{
		case 1:
			uParam0->f_2 = "CH_000";
			break;
		case 2:
			uParam0->f_2 = "CH_001";
			break;
		case 3:
			uParam0->f_2 = "CH_002";
			break;
		case 4:
			uParam0->f_2 = "CH_003";
			break;
		case 5:
			uParam0->f_2 = "CH_004";
			break;
		case 6:
			uParam0->f_2 = "CH_005";
			break;
		case 7:
			uParam0->f_2 = "CH_006";
			break;
		case 8:
			uParam0->f_2 = "CH_007";
			break;
		case 9:
			uParam0->f_2 = "CH_008";
			break;
	}
}

void func_860(var uParam0)//Position - 0x472A3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[iVar0 /*3*/])->f_2 = "";
		iVar0++;
	}
}

void func_861(var uParam0)//Position - 0x4744E
{
	*uParam0 = joaat("FIRING_PATTERN_DELAY_FIRE_BY_ONE_SEC");
	uParam0->f_4 = 0.0325f;
	uParam0->f_5 = 0.0325f;
	uParam0->f_6 = 0.36f;
	uParam0->f_7 = 0.6f;
	uParam0->f_8 = 0.2f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10f;
	uParam0->f_11 = 11f;
	uParam0->f_12 = 1.25f;
	uParam0->f_13 = 2.25f;
	uParam0->f_14 = 2f;
	uParam0->f_15 = 2.5f;
	uParam0->f_16 = 20;
	uParam0->f_17 = 50;
	uParam0->f_18 = 0;
	uParam0->f_19 = -1;
	uParam0->f_1 = 1f;
	uParam0->f_2 = 1f;
	uParam0->f_3 = 1f;
	uParam0->f_20 = 0.5f;
}

void func_862(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x48438
{
	if (fParam1 > 0f)
	{
		uParam0->f_38 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(Local_280.f_53 * 2) * fParam1));
	}
	else
	{
		uParam0->f_38 = 99;
	}
	if (iParam3 > iLocal_338)
	{
		iParam3 = iLocal_338;
	}
	if (iParam3 > 10)
	{
		iParam3 = 10;
	}
	uParam0->f_41 = iParam3;
	uParam0->f_40 = iParam2;
}

float func_863(struct<3> Param0, struct<3> Param1)//Position - 0x485B4
{
	struct<3> Var0;
	Var0 = { Param1 - Param0 };
	return SYSTEM::SQRT((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)));
}

void func_864()//Position - 0x490DA
{
	switch (Local_280.f_0)
	{
		case 77:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_1_OS");
			break;
		case 81:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_2_OS");
			break;
		case 78:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_3_OS");
			break;
		case 79:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_4_OS");
			break;
		case 80:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_5_OS");
			break;
	}
}

void func_865(var uParam0)//Position - 0xA16
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("WEAPON_PISTOL"), -1, false, true);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, true, joaat("WEAPON_PISTOL"));
	}
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fLocal_319 && Local_280.f_21[1] != 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, Local_280.f_21[1], -1, false, true);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, true, Local_280.f_21[1]);
		__LIB_38__::func_794(*uParam0, &Local_285, 1);
	}
	else if (Local_280.f_21[0] != 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, Local_280.f_21[0], -1, false, true);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, true, Local_280.f_21[0]);
		__LIB_38__::func_794(*uParam0, &Local_285, 0);
	}
}

void func_866(var uParam0, int iParam1, float fParam2)//Position - 0x193B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_323[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam2;
	uParam0->f_18 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f);
	if (__LIB_0__::func_692(iVar2))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 2, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar2, true, 0f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bLocal_419);
		if (Local_280.f_0 == 80)
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786468, uParam0->f_18, 15f, true);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786436, uParam0->f_18, 15f, true);
		}
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0, false);
		if (__LIB_0__::func_692(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	if (iParam1 == 1)
	{
		uParam0->f_11 = 3;
	}
	else
	{
		uParam0->f_11 = 2;
	}
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("rhino"))
	{
		uParam0->f_11 = 5;
	}
}

void func_867(var uParam0, float fParam1)//Position - 0x1A8D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_323[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam1;
	TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 1, uParam0->f_17, 786436, -1f, -1f, true);
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0, false);
		if (__LIB_0__::func_692(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		else if (__LIB_0__::func_692(iVar1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 1;
}

void func_868(var uParam0, float fParam1)//Position - 0x1B6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_323[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam1;
	TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 6, uParam0->f_17, 786436, -1f, -1f, true);
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0, false);
		if (__LIB_0__::func_692(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 0;
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("rhino"))
	{
		uParam0->f_11 = 5;
	}
}

int func_869(int iParam0)//Position - 0x262B
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (__LIB_0__::func_692((*iParam0)[iVar0 /*13*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_870(var uParam0)//Position - 0x5AAE
{
	if (iLocal_418 > 8)
	{
		iLocal_418 = 0;
	}
	switch (iLocal_418)
	{
		case 0:
			uParam0->f_11 = "RAMP2_HIP9";
			uParam0->f_10 = "RAMPAGEHIPSTER9";
			break;
		case 1:
			uParam0->f_11 = "RAMP2_HIP1";
			uParam0->f_10 = "RAMPAGEHIPSTER";
			break;
		case 2:
			uParam0->f_11 = "RAMP2_HIP2";
			uParam0->f_10 = "RAMPAGEHIPSTER2";
			break;
		case 3:
			uParam0->f_11 = "RAMP2_HIP3";
			uParam0->f_10 = "RAMPAGEHIPSTER3";
			break;
		case 4:
			uParam0->f_11 = "RAMP2_HIP4";
			uParam0->f_10 = "RAMPAGEHIPSTER4";
			break;
		case 5:
			uParam0->f_11 = "RAMP2_HIP5";
			uParam0->f_10 = "RAMPAGEHIPSTER5";
			break;
		case 6:
			uParam0->f_11 = "RAMP2_HIP6";
			uParam0->f_10 = "RAMPAGEHIPSTER6";
			break;
		case 7:
			uParam0->f_11 = "RAMP2_HIP7";
			uParam0->f_10 = "RAMPAGEHIPSTER7";
			break;
		case 8:
			uParam0->f_11 = "RAMP2_HIP8";
			uParam0->f_10 = "RAMPAGEHIPSTER8";
			break;
	}
	__LIB_0__::func_222(&uLocal_420, iLocal_418, *uParam0, uParam0->f_10, 0, 1);
	iLocal_418++;
	if (iLocal_418 == 2)
	{
		iLocal_418++;
	}
}

void func_871(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x5D8E
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_76(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(3, iVar0);
		Global_1649593.f_2839[iVar0] = uParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = uParam3;
		Global_1649593.f_2839.f_172[iVar0] = uParam2;
		Global_1649593.f_2839.f_205[iVar0] = iParam4;
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

void func_872(float fParam0)//Position - 0x9996
{
	float fVar0;
	fVar0 = __LIB_38__::func_51(iLocal_275);
	if (fVar0 < 100f)
	{
		if (fParam0 >= 100f)
		{
			Global_113386.f_10016.f_22++;
		}
	}
	if (fParam0 >= fVar0)
	{
		__LIB_38__::func_50(iLocal_275, fParam0, 0);
	}
}

void func_873(int iParam0)//Position - 0xA6EB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (__LIB_0__::func_692((*iParam0)[iVar0 /*13*/]))
		{
			if (!(iParam0[iVar0 /*13*/])->f_3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0 /*13*/], false) && (iParam0[iVar0 /*13*/])->f_3 == 0)
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_MONEY((*iParam0)[iVar0 /*13*/], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_874(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xAC6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_323[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { Param1 };
	uParam0->f_17 = fParam2;
	uParam0->f_18 = iParam3;
	if (__LIB_0__::func_692(iVar2))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 2, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bLocal_419);
		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar2, *uParam0, uParam0->f_14, 4, uParam0->f_17, 786436, uParam0->f_18, 15f, true);
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0, false);
		if (__LIB_0__::func_692(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 3;
}

void func_875(int iParam0)//Position - 0x3B3CA
{
	__LIB_0__::func_136(&(iParam0->f_28));
	__LIB_0__::func_136(&(iParam0->f_35));
	__LIB_0__::func_136(&(iParam0->f_41));
}

bool func_876()//Position - 0x3B912
{
	return (__LIB_0__::func_323() || __LIB_0__::func_425(108));
}

void func_877(var uParam0)//Position - 0x3C6DE
{
	int iVar0;
	iLocal_380[0] = 6;
	iLocal_380[1] = 107;
	iLocal_380[2] = 108;
	iLocal_380[3] = 109;
	Global_31962 = 1;
	Global_95696 = 1;
	Local_276 = { *uParam0 };
	__LIB_12__::func_849(23, 1);
	uLocal_284 = Global_32209;
	Global_32209 = 0;
	PED::ADD_RELATIONSHIP_GROUP("RamageGrp", &iLocal_304);
	PED::ADD_RELATIONSHIP_GROUP("PassiveGrp", &iLocal_305);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_304);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_304, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_305);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_305, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_305, iLocal_304);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_304, iLocal_305);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_FAMILY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("AMBIENT_GANG_MEXICAN"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), false);
	__LIB_0__::func_671(1);
	__LIB_14__::func_826(0);
	OBJECT::SUPPRESS_PICKUP_REWARD_TYPE(2047, true);
	PED::STOP_ANY_PED_MODEL_BEING_SUPPRESSED();
	__LIB_14__::func_804(1);
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), fLocal_317);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_323.f_0)
	{
		Local_323[iVar0 /*13*/].f_9 = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_324.f_0)
	{
		Local_324[iVar0 /*20*/].f_13 = iVar0;
		iVar0++;
	}
}

void func_878()//Position - 0x649C
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_415)
	{
		return;
	}
	if (iLocal_378 != 4)
	{
		return;
	}
	iLocal_415 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000));
	__LIB_0__::func_787(&uLocal_420, Local_280.f_3, Local_280.f_4, 7, 0, 0, 0);
}

void func_879()//Position - 0x2D8BB
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	iVar0 = __LIB_14__::func_794();
	switch (Local_280.f_0)
	{
		case 77:
			__LIB_14__::func_827(&Local_371, 896.1204f, 3640.058f, 36.08886f, 922.2221f, 3639.5684f, 31.159431f, 13.5f);
			if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
			{
				Var1 = { 899.9673f, 3653.049f, 31.7576f };
				fVar2 = 268.2063f;
			}
			else
			{
				Var1 = { 891.0971f, 3653.328f, 31.8184f };
				fVar2 = 268.1944f;
			}
			break;
		case 81:
			__LIB_14__::func_827(&Local_371, 1179.1853f, -421.631f, 74.338844f, 1185.7046f, -388.5753f, 66.90026f, 21.5f);
			if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
			{
				Var1 = { 1231.5063f, -442.6294f, 66.5811f };
				fVar2 = 191.4606f;
			}
			else
			{
				Var1 = { 1226.6814f, -436.0827f, 66.5804f };
				fVar2 = 76.5787f;
			}
			break;
		case 78:
			__LIB_14__::func_827(&Local_371, 449.73056f, -1858.2241f, 28.84542f, 472.45517f, -1843.8956f, 25.801113f, 37.25f);
			if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
			{
				Var1 = { 506.3633f, -1842.3701f, 26.644f };
				fVar2 = 308.821f;
			}
			else
			{
				Var1 = { 505.1393f, -1845.2905f, 26.3862f };
				fVar2 = 308.6425f;
			}
			break;
		case 79:
			__LIB_14__::func_827(&Local_371, -143.97147f, -1646.401f, 39.63461f, -172.5223f, -1680.7948f, 31.561562f, 18.75f);
			if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
			{
				Var1 = { -163.3928f, -1698.3533f, 30.6384f };
				fVar2 = 63.0698f;
			}
			else
			{
				Var1 = { -225.3203f, -1699.5354f, 33.0015f };
				fVar2 = 107.6143f;
			}
			break;
		case 80:
			__LIB_14__::func_827(&Local_371, -1303.8075f, 2499.506f, 29.048244f, -1228.8273f, 2569.8462f, 14.73124f, 29.5f);
			Var1 = { -1323.6338f, 2474.4177f, 23.6185f };
			fVar2 = 318.5112f;
			break;
	}
	if (__LIB_0__::func_323())
	{
		__LIB_14__::func_865(&iVar0, Var1, fVar2, 0, 0, 1, 1, 0, joaat("asterope"), 0, 145, 1);
	}
	__LIB_14__::func_614(Local_371[0 /*3*/], Local_371[1 /*3*/], Local_371.f_7, Var1, fVar2, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	__LIB_14__::func_775(iVar0, 0f, 0f, 0f, 0f, 24, 0);
}

int func_880(var uParam0)//Position - 0x9EA1
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_38__::func_827(uParam0[iVar0 /*3*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_881()//Position - 0xC20D
{
	int iVar0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_408, 0))
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, "TREVOR_ACTION");
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_ActionMode_Idle"), false, 1, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_11, 4f, -4f, -1, 0, 0f, false, false, false);
			__LIB_38__::func_834();
			bLocal_413 = true;
		}
	}
	switch (Local_280.f_0)
	{
		case 77:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "TriggerHappy_WhiteTrash";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					__LIB_38__::func_839(Local_276.f_28[0], 930.2522f, 3681.339f, 30.6506f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Run"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 3f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Nervous_WhiteTrash";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[1], 0))
				{
					__LIB_38__::func_839(Local_276.f_28[1], 920.2722f, 3546.1018f, 32.9231f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[1], joaat("MotionState_Run"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[1], 2f);
				}
			}
			break;
		case 81:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Rampage_Hipster";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					__LIB_38__::func_839(Local_276.f_28[0], 1212.5776f, -421.3977f, 66.5951f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 3f);
				}
			}
			break;
		case 78:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Armed_Mexican_Goon";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_276.f_28[0], 8, 0, 0, 0);
					__LIB_38__::func_839(Local_276.f_28[0], 335.7316f, -1887.2788f, 24.8253f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 3f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Mexican_Goon";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[1], 0))
				{
					__LIB_38__::func_839(Local_276.f_28[1], 408.9685f, -1923.8516f, 24.0339f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[1], joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[1], 3f);
				}
			}
			break;
		case 79:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Thug";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					__LIB_38__::func_839(Local_276.f_28[0], -110.74f, -1601.2f, 31.7f, 0);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Run"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 3f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Armed_Thug";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[1], 0))
				{
					__LIB_38__::func_839(Local_276.f_28[1], -142.6f, -1713.4f, 30.1f, 1);
				}
			}
			break;
		case 80:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Army_Guy_Left";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					__LIB_38__::func_839(Local_276.f_28[0], -1209.9448f, 2598.6895f, 14.3906f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Run"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 2f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Army_Guy_Right";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[1], 0))
				{
					__LIB_38__::func_839(Local_276.f_28[1], -1222.5686f, 2587.6506f, 15.1474f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[1], joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[1], 3f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_35[0]))
			{
				if (CUTSCENE::CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(sLocal_410[2], 0))
				{
					VEHICLE::SET_VEHICLE_EXTRA(Local_276.f_35[0], 1, false);
				}
			}
			break;
	}
	if (!__LIB_0__::func_121(Local_276.f_41[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_409, 0)))
		{
			Local_276.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_409, 0));
			if (__LIB_0__::func_121(Local_276.f_41[0]))
			{
			}
		}
	}
	else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_409, 0))
	{
		if (Local_276.f_0 == 55)
		{
			__LIB_0__::func_123(&(Local_276.f_41[0]));
			__LIB_38__::func_833();
		}
		else
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_276.f_41[0], PLAYER::PLAYER_PED_ID());
		}
	}
	if (Local_276.f_0 == 54)
	{
		if (CUTSCENE::GET_CUTSCENE_TIME() >= 23000)
		{
			if (!iLocal_374)
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[0], -1, true, true);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_280.f_24)
				{
					if (Local_280.f_24[iVar0] != 0)
					{
						WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[0], Local_280.f_24[iVar0]);
					}
					iVar0++;
				}
				iLocal_374 = 1;
			}
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		}
	}
}

void func_882()//Position - 0x49144
{
	int iVar0;
	__LIB_38__::func_861(&Local_285);
	Local_280.f_53 = 30;
	Local_280.f_16 = 180000;
	Local_280.f_43 = { 0f, 0f, 0f };
	Local_280.f_46 = 0f;
	Local_280.f_39 = { 0f, 0f, 0f };
	Local_280.f_42 = 0f;
	Local_280.f_50 = 0;
	Local_280.f_48 = 0f;
	Local_280.f_47 = 0f;
	Local_280.f_54 = 0;
	Local_280.f_52 = 0;
	Local_280.f_49 = 0f;
	Local_280.f_6 = "";
	Local_280.f_7 = { 0f, 0f, 0f };
	Local_280.f_10 = 0f;
	Local_280.f_36 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_27)
	{
		Local_280.f_27[iVar0] = 0;
		iVar0++;
	}
	Local_280.f_37 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_32)
	{
		Local_280.f_32[iVar0] = 0;
		iVar0++;
	}
	Local_280.f_38 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_17)
	{
		Local_280.f_17[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_24)
	{
		Local_280.f_24[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_21)
	{
		Local_280.f_21[iVar0] = 0;
		iVar0++;
	}
	sLocal_407 = "";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_411)
	{
		iLocal_411[iVar0] = "";
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_412)
	{
		iLocal_412[iVar0] = "";
		iVar0++;
	}
}

void func_883(int* iParam0)//Position - 0x8D6
{
	if (PED::IS_PED_MALE(*iParam0))
	{
		if (__LIB_38__::func_799(&iLocal_416))
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(*iParam0, iLocal_411[iLocal_416]);
			iLocal_416++;
		}
		else
		{
			iLocal_416 = 0;
		}
	}
	else if (__LIB_38__::func_798(&iLocal_417))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(*iParam0, iLocal_412[iLocal_417]);
		iLocal_417++;
	}
	else
	{
		iLocal_417 = 0;
	}
	if (!Local_280.f_0 == 81)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_407))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(*iParam0, sLocal_407, "SPEECH_PARAMS_FORCE", 1);
		}
	}
}

void func_884(int* iParam0)//Position - 0xD6A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	__LIB_38__::func_800(iParam0);
	__LIB_0__::func_0(iParam0);
	*iParam0 = 0;
}

int func_885(int iParam0)//Position - 0x20BC
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_121(iParam0))
	{
		return 0;
	}
	if (!__LIB_38__::func_805(&iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_333)
	{
		if (__LIB_0__::func_121(iLocal_333[iVar1]) && iLocal_333[iVar1] == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	iLocal_333[iVar0] = iParam0;
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_333[iVar0], true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_333[iVar0], 1);
	return 1;
}

void func_886(int* iParam0, bool bParam1)//Position - 0x22A1
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (__LIB_0__::func_121(*iParam0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, true);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, true);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, false, 0f);
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	PED::SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(*iParam0, false);
	__LIB_38__::func_800(iParam0);
	__LIB_0__::func_124(iParam0, bParam1, 0, 1);
	*iParam0 = 0;
}

int func_887(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x23E2
{
	var uVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_38__::func_807(iParam1, &iVar2, &uVar0, 1, 1))
	{
		return 0;
	}
	iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, iParam5, iParam0, iVar2, true, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (iParam2 != 0 && iParam2 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iVar1, iParam2, -1, true, true);
	}
	if (bParam3)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, joaat("HATES_PLAYER"));
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, bParam4);
	return iVar1;
}

void func_888(int iParam0, int iParam1)//Position - 0x3F2A
{
	__LIB_0__::func_121(iParam0);
	if (__LIB_38__::func_817(iParam0))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RampageCarExploded"))
		{
			if (DECORATOR::DECOR_SET_BOOL(iParam0, "RampageCarExploded", true))
			{
				if (bLocal_361)
				{
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("NOT_VDED");
					HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
				Local_277.f_6++;
				if (iParam1 == 1)
				{
				}
			}
		}
	}
}

void func_889(var uParam0)//Position - 0x9A2D
{
	int iVar0;
	if (uParam0->f_1 == 0)
	{
		return;
	}
	iVar0 = 1;
	if (__LIB_38__::func_827(uParam0))
	{
		iVar0 = 2;
		iLocal_282++;
	}
	__LIB_16__::func_620(&Local_286, 17, uParam0->f_2, "", uParam0->f_1, 0, iVar0, 0);
}

void func_890(int iParam0, float fParam1, bool bParam2, float fParam3)//Position - 0xA298
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	var uVar7[32];
	bool bVar8;
	iVar0 = PED::GET_PED_NEARBY_VEHICLES(iParam0, &uVar7);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_715(uVar7[iVar1]))
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(uVar7[iVar1])))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar7[iVar1], true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) <= (fParam1 * fParam1))
				{
					bVar8 = true;
					if (bParam2)
					{
						Var4 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iParam0, true) - ENTITY::GET_ENTITY_COORDS(uVar7[iVar1], true)) };
						bVar8 = __LIB_0__::func_158(Var4, ENTITY::GET_ENTITY_FORWARD_VECTOR(uVar7[iVar1])) < SYSTEM::COS(fParam3);
					}
					if (bVar8)
					{
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar7[iVar1], -1, false);
						if (__LIB_0__::func_715(iVar5))
						{
							if (!__LIB_38__::func_831(iVar5))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
								TASK::OPEN_SEQUENCE_TASK(&iVar6);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_SMART_FLEE_PED(0, iParam0, 300f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar6);
								TASK::TASK_PERFORM_SEQUENCE(iVar5, iVar6);
								TASK::CLEAR_SEQUENCE_TASK(&iVar6);
							}
						}
						iVar2 = 0;
						iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uVar7[iVar1]);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar7[iVar1], iVar2, false);
							if (__LIB_0__::func_715(iVar5))
							{
								if (!__LIB_38__::func_831(iVar5))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
									TASK::OPEN_SEQUENCE_TASK(&iVar6);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_SMART_FLEE_PED(0, iParam0, 300f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iVar6);
									TASK::TASK_PERFORM_SEQUENCE(iVar5, iVar6);
									TASK::CLEAR_SEQUENCE_TASK(&iVar6);
								}
							}
							iVar2++;
						}
					}
				}
			}
		}
		iVar1++;
	}
}

void func_891(bool bParam0)//Position - 0x3B4B9
{
	int iVar0;
	bool bVar1;
	__LIB_38__::func_849();
	__LIB_17__::func_136("TRVRAMP", 0, bParam0, 0);
	__LIB_38__::func_848("MP_BIG_MESSAGE_FREEMODE", &iLocal_375, bParam0);
	__LIB_38__::func_847("SCRIPT\RAMPAGE_01", bParam0);
	__LIB_38__::func_847("SCRIPT\RAMPAGE_02", bParam0);
	bVar1 = false;
	if (bParam0)
	{
		while (!bVar1)
		{
			if (AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0))
			{
				bVar1 = true;
			}
			else if (iLocal_369 > 50)
			{
				bVar1 = true;
			}
			else
			{
				iLocal_369++;
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0);
	}
	__LIB_38__::func_846("missrampageintrooutro", bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_17)
	{
		if (Local_280.f_17[iVar0] != 0 && Local_280.f_17[iVar0] != joaat("WEAPON_UNARMED"))
		{
			__LIB_38__::func_797(Local_280.f_17[iVar0], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_27)
	{
		if (Local_280.f_27[iVar0] != 0)
		{
			__LIB_38__::func_845(Local_280.f_27[iVar0], bParam0);
			PED::SET_PED_MODEL_IS_SUPPRESSED(Local_280.f_27[iVar0], true);
		}
		iVar0++;
	}
	if (Local_280.f_36 != 0)
	{
		__LIB_38__::func_845(Local_280.f_36, bParam0);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_32)
	{
		if (Local_280.f_32[iVar0] != 0)
		{
			__LIB_38__::func_845(Local_280.f_32[iVar0], bParam0);
		}
		iVar0++;
	}
}

void func_892(int iParam0)//Position - 0x46F9A
{
	switch (iParam0)
	{
		case 77:
			__LIB_38__::func_858(&(Local_308[0 /*8*/]), 917.5861f, 3593.5764f, 32.1551f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[1 /*8*/]), 899.7161f, 3607.4707f, 31.8142f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[2 /*8*/]), 889.1971f, 3618.664f, 31.8218f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[3 /*8*/]), 901.7499f, 3586.1833f, 32.4256f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[4 /*8*/]), 915.1172f, 3569.61f, 32.7876f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[5 /*8*/]), 979.5751f, 3584.9543f, 32.493f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[6 /*8*/]), 999.9662f, 3583.392f, 32.6675f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[7 /*8*/]), 956.1263f, 3620.4758f, 31.6291f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[8 /*8*/]), 864.4873f, 3671.1313f, 31.8982f, 0f, 0f, 0f);
			__LIB_38__::func_858(&(Local_308[9 /*8*/]), 921.76f, 3644.44f, 31.5245f, 0f, 0f, 0f);
			break;
	}
}

void func_893(int iParam0)//Position - 0x470E8
{
	__LIB_38__::func_860(&Local_281);
	switch (iParam0)
	{
		case 77:
			__LIB_38__::func_859(&(Local_281[0 /*3*/]), 1, 45);
			__LIB_38__::func_859(&(Local_281[1 /*3*/]), 2, 3);
			__LIB_38__::func_859(&(Local_281[2 /*3*/]), 4, 2);
			break;
		case 81:
			__LIB_38__::func_859(&(Local_281[0 /*3*/]), 1, 30);
			__LIB_38__::func_859(&(Local_281[1 /*3*/]), 2, 10);
			__LIB_38__::func_859(&(Local_281[2 /*3*/]), 4, 2);
			break;
		case 78:
			__LIB_38__::func_859(&(Local_281[0 /*3*/]), 1, 45);
			__LIB_38__::func_859(&(Local_281[1 /*3*/]), 2, 6);
			__LIB_38__::func_859(&(Local_281[2 /*3*/]), 4, 2);
			break;
		case 79:
			__LIB_38__::func_859(&(Local_281[0 /*3*/]), 1, 50);
			__LIB_38__::func_859(&(Local_281[1 /*3*/]), 2, 6);
			__LIB_38__::func_859(&(Local_281[2 /*3*/]), 4, 2);
			break;
		case 80:
			__LIB_38__::func_859(&(Local_281[0 /*3*/]), 1, 45);
			__LIB_38__::func_859(&(Local_281[1 /*3*/]), 2, 6);
			__LIB_38__::func_859(&(Local_281[2 /*3*/]), 9, 2);
			break;
	}
}

void func_894(int iParam0)//Position - 0x472DA
{
	__LIB_38__::func_861(&Local_285);
	switch (iParam0)
	{
		case 77:
			Local_285.f_4 = 0.12f;
			Local_285.f_5 = 0.12f;
			Local_285.f_6 = 0.1f;
			Local_285.f_7 = 0.5f;
			Local_285.f_16 = 30;
			Local_285.f_17 = 55;
			Local_285.f_2 = 0.25f;
			Local_285.f_20 = 1f;
			Local_285.f_8 = 0.5f;
			break;
		case 81:
			Local_285.f_4 = 0.032f;
			Local_285.f_5 = 0.015f;
			Local_285.f_6 = 0.4f;
			Local_285.f_7 = 0.6f;
			Local_285.f_16 = 20;
			Local_285.f_17 = 40;
			Local_285.f_2 = 0.25f;
			Local_285.f_20 = 1f;
			Local_285.f_8 = 0.5f;
			break;
		case 80:
			Local_285.f_4 = 0.12f;
			Local_285.f_5 = 0.09f;
			Local_285.f_6 = 0.2f;
			Local_285.f_7 = 0.6f;
			Local_285.f_16 = 20;
			Local_285.f_17 = 50;
			Local_285.f_2 = 0.11f;
			Local_285.f_20 = 1f;
			Local_285.f_8 = 0.5f;
			break;
		default:
			Local_285.f_4 = 0.032f;
			Local_285.f_5 = 0.015f;
			Local_285.f_6 = 0.4f;
			Local_285.f_7 = 0.6f;
			Local_285.f_16 = 20;
			Local_285.f_17 = 40;
			Local_285.f_2 = 0.2f;
			Local_285.f_20 = 1f;
			Local_285.f_8 = 0.5f;
			break;
	}
}

void func_895(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x4853A
{
	*uParam0 = 1;
	uParam0->f_1[0 /*3*/] = { Param1 };
	uParam0->f_1[1 /*3*/] = { Param2 };
	uParam0->f_8 = fParam3;
	uParam0->f_16 = (Param2.f_2 - Param1.f_2);
	Param2.f_2 = Param1.f_2;
	uParam0->f_9 = { __LIB_0__::func_79(Param2 - Param1) };
	uParam0->f_15 = __LIB_38__::func_863(Param1, Param2);
	uParam0->f_12 = { uParam0->f_9.f_1, uParam0->f_9, uParam0->f_9.f_2 };
}

int func_896(var uParam0, var* uParam1)//Position - 0x114A
{
	struct<3> Var0;
	bool bVar1;
	var uVar2;
	int iVar3;
	Var0 = { __LIB_38__::func_804(uParam0->f_1) };
	bVar1 = false;
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Var0, bVar1, uParam1, 12))
	{
		return 0;
	}
	if (uParam0->f_35 > 0f)
	{
		if (uParam1->f_2 > uParam0->f_35 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) > uParam0->f_39)
		{
			return 0;
		}
	}
	uParam1->f_2 = (uParam1->f_2 + 0.25f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar2, false, false))
	{
		uParam1->f_2 = uVar2;
	}
	if (SYSTEM::VDIST2(*uParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < (Local_357.f_1 * Local_357.f_1))
	{
		if (bLocal_314)
		{
			Var0 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - CAM::GET_GAMEPLAY_CAM_COORD()) };
			if (__LIB_16__::func_48(Var0, CAM::GET_GAMEPLAY_CAM_COORD(), *uParam1) <= 0)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam1, uParam0->f_18.f_1[0 /*3*/], uParam0->f_18.f_1[1 /*3*/], uParam0->f_18.f_8, false, true))
	{
		return 0;
	}
	if (PED::IS_ANY_PED_NEAR_POINT(*uParam1, 1.5f))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iLocal_322)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam1, Local_321[iVar3 /*17*/].f_1[0 /*3*/], Local_321[iVar3 /*17*/].f_1[1 /*3*/], Local_321[iVar3 /*17*/].f_8, false, true))
		{
			return 0;
		}
		iVar3++;
	}
	if (CAM::IS_SPHERE_VISIBLE(*uParam1, 0.25f))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_280.f_27[0], *uParam1, true))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_897(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, var uParam7)//Position - 0x5D27
{
	int iVar0;
	if (__LIB_1__::func_76(sParam3))
	{
		sParam3 = "TIMER_TIME" /* GXT: TIME */;
	}
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	__LIB_1__::func_350(iParam2, sParam3, iParam4, iVar0, iParam6, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	if (__LIB_1__::func_76(sParam1))
	{
		sParam1 = "TIMER_KILL" /* GXT: KILLED */;
	}
	__LIB_38__::func_871(iParam0, sParam1, iParam6, uParam7, 4, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
}

void func_898(int* iParam0)//Position - 0x5A2C
{
	if (!Local_280.f_0 == 81)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_11) || MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_10))
	{
		__LIB_38__::func_870(iParam0);
	}
	if (iParam0->f_12 == 0)
	{
		iParam0->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 15000));
	}
	if (MISC::GET_GAME_TIMER() > iParam0->f_12)
	{
		__LIB_0__::func_787(&uLocal_420, Local_280.f_3, iParam0->f_11, 6, 1, 0, 0);
		iParam0->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000));
	}
}

void func_899(int* iParam0)//Position - 0x3FD6
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_2, false))
	{
		Local_277.f_10++;
		VEHICLE::EXPLODE_VEHICLE(iParam0->f_2, true, false);
		__LIB_38__::func_819(iParam0, 1);
		return;
	}
	iParam0->f_3 = __LIB_0__::func_76(iParam0->f_2, PLAYER::PLAYER_PED_ID(), 1);
	if (iParam0->f_3 > (iParam0->f_4 + 100f))
	{
		__LIB_38__::func_819(iParam0, 1);
		return;
	}
	if (!__LIB_0__::func_121(*iParam0))
	{
		__LIB_38__::func_819(iParam0, 1);
		return;
	}
	VEHICLE::SET_VEHICLE_TURRET_SPEED_THIS_FRAME(iParam0->f_2, 0.7f);
	switch (iParam0->f_6)
	{
		case 0:
			PED::SET_PED_ACCURACY(*iParam0, 100);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 40f, 786436, -1f, -1f, true);
			iParam0->f_6 = 1;
			break;
		case 1:
			if (iParam0->f_3 < 35f)
			{
				TASK::CLEAR_PED_TASKS(*iParam0);
				TASK::TASK_VEHICLE_TEMP_ACTION(*iParam0, iParam0->f_2, 24, 100);
				iParam0->f_6 = 2;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 50f, 786436, 30f, -1f, true);
			}
			break;
		case 2:
			if (!iLocal_372)
			{
				if (__LIB_0__::func_787(&uLocal_420, Local_280.f_3, "RAMP5_TANK", 7, 0, 0, 0))
				{
					iLocal_372 = 1;
				}
			}
			TASK::CLEAR_PED_TASKS(*iParam0);
			iParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var0 = { __LIB_38__::func_818(iParam0) };
			TASK::TASK_VEHICLE_SHOOT_AT_COORD(*iParam0, Var0, 20f);
			iParam0->f_5 = MISC::GET_GAME_TIMER() + 6000;
			iParam0->f_6 = 3;
			break;
		case 3:
			if (FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 60f) || MISC::GET_GAME_TIMER() >= iParam0->f_5)
			{
				iParam0->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
				iParam0->f_6 = 4;
			}
			break;
		case 4:
			if (MISC::GET_GAME_TIMER() >= iParam0->f_5)
			{
				TASK::CLEAR_PED_TASKS(*iParam0);
				iParam0->f_6 = 6;
			}
			else if (iParam0->f_3 < 10f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 8, 30f, 786436, -1f, -1f, true);
				}
			}
			else if (iParam0->f_3 < 35f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
				{
					TASK::TASK_VEHICLE_TEMP_ACTION(*iParam0, iParam0->f_2, 24, 100);
					TASK::CLEAR_PED_TASKS(*iParam0);
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_AIM_AT_COORD")) > 1)
				{
					TASK::CLEAR_PED_TASKS(*iParam0);
					TASK::TASK_VEHICLE_AIM_AT_COORD(*iParam0, iParam0->f_7);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 50f, 786436, 30f, -1f, true);
			}
			break;
		case 6:
			TASK::CLEAR_PED_TASKS(*iParam0);
			TASK::TASK_VEHICLE_SHOOT_AT_COORD(*iParam0, iParam0->f_7, 20f);
			iParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iParam0->f_5 = MISC::GET_GAME_TIMER() + 6000;
			iParam0->f_6 = 3;
			break;
	}
}

void func_900(int iParam0)//Position - 0x6294
{
	float fVar0;
	__LIB_0__::func_121(iParam0);
	if (!__LIB_38__::func_823(iParam0))
	{
		Local_277.f_2++;
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	__LIB_38__::func_878();
	Local_277.f_0++;
	if (__LIB_23__::func_580(iParam0))
	{
		Local_277.f_1++;
		if (bLocal_361)
		{
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("NOT_HEAD");
			HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		if ((Local_277.f_0 % 5) == 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_ROAR_MASTER", 0, true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_KILLED_HEAD_SHOT_MASTER", 0, true);
		}
	}
	else if ((Local_277.f_0 % 5) == 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_ROAR_MASTER", 0, true);
	}
	else if ((MISC::GET_GAME_TIMER() - Local_277.f_11) > 64)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_KILLED_COUNTER_MASTER", 0, true);
	}
	Local_277.f_11 = MISC::GET_GAME_TIMER();
	Local_277.f_16++;
	fVar0 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0, 1);
	if (fVar0 <= 2f)
	{
		Local_277.f_4++;
	}
	if (fVar0 >= 50f)
	{
		Local_277.f_5++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		Local_277.f_8++;
	}
	if (__LIB_38__::func_822(iParam0))
	{
		Local_277.f_3++;
	}
}

int func_901(int* iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x15ED
{
	bool bVar0;
	int iVar1;
	iVar1 = __LIB_38__::func_801();
	*iParam0 = PED::CREATE_PED(26, iVar1, Param1, fParam2, true, true);
	if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
	{
		__LIB_38__::func_884(iParam0);
		return 0;
	}
	__LIB_0__::func_714(&(iParam0->f_1));
	iParam0->f_1 = __LIB_14__::func_661(*iParam0, 1, 0, 5);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_304);
	if (iParam3 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*iParam0, 0);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true);
	__LIB_14__::func_808(*iParam0, Param1);
	PED::SET_PED_MONEY(*iParam0, 0);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, 120, 0);
	PED::SET_PED_MAX_HEALTH(*iParam0, 120);
	PED::SET_PED_CAN_BE_TARGETED_WHEN_INJURED(*iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam0, true, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
	PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 16, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	bVar0 = true;
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 11, bVar0);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, bVar0);
	TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 600f, -1, false, false);
	Local_277.f_12++;
	iLocal_336++;
	__LIB_38__::func_883(iParam0);
	PED::SET_PED_ACCURACY(*iParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(*iParam0, 0);
	iParam0->f_3 = 1;
	return 1;
}

int func_902(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2900
{
	int iVar0;
	uParam0->f_2 = VEHICLE::CREATE_VEHICLE(joaat("rhino"), Param1, fParam2, true, true, false);
	if (!__LIB_0__::func_121(uParam0->f_2))
	{
		return 0;
	}
	*uParam0 = __LIB_38__::func_887(Local_280.f_27[0], uParam0->f_2, joaat("VEHICLE_WEAPON_TANK"), 1, 1, 26);
	uParam0->f_1 = __LIB_14__::func_866(uParam0->f_2, 0, 5);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(*uParam0, false);
	ENTITY::SET_ENTITY_PROOFS(uParam0->f_2, true, true, false, false, true, false, false, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_2, 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_2, false);
	iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_2) * 2;
	ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_2, iVar0);
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_2, iVar0, 0);
	uParam0->f_3 = __LIB_0__::func_76(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 1);
	uParam0->f_4 = uParam0->f_3;
	PED::SET_PED_SEEING_RANGE(*uParam0, 100f);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 27, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, true);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { 0f, 0f, 0f };
	return 1;
}

void func_903(int iParam0)//Position - 0x617C
{
	int iVar0;
	int iVar1;
	var uVar2[20];
	if (__LIB_0__::func_121(iParam0))
	{
		iVar1 = PED::GET_PED_NEARBY_VEHICLES(iParam0, &uVar2);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar2[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					__LIB_38__::func_888(uVar2[iVar0], 0);
				}
			}
			iVar0++;
		}
	}
}

float func_904(var uParam0)//Position - 0x9E76
{
	int iVar0;
	iVar0 = __LIB_38__::func_829(uParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return (SYSTEM::TO_FLOAT(__LIB_38__::func_880(uParam0)) / SYSTEM::TO_FLOAT(iVar0));
}

void func_905(int* iParam0)//Position - 0xA05E
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (__LIB_0__::func_692(*iParam0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, true);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, true);
		TASK::CLEAR_PED_TASKS(*iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bLocal_419);
		TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 400f, -1, false, false);
		PED::SET_PED_MONEY(*iParam0, 0);
	}
	__LIB_38__::func_886(iParam0, 1);
}

int func_906(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x4887D
{
	if (iLocal_322 >= Local_321.f_0)
	{
		return 0;
	}
	__LIB_38__::func_895(&(Local_321[iLocal_322 /*17*/]), Param0, Param1, fParam2);
	iLocal_322++;
	return 1;
}

void func_907(int iParam0)//Position - 0x488B1
{
	struct<3> Var0;
	struct<3> Var1;
	__LIB_38__::func_882();
	Local_280.f_0 = iParam0;
	Local_364 = { __LIB_38__::func_850() };
	switch (iParam0)
	{
		case 77:
			iLocal_275 = 52;
			Local_280.f_1 = 0;
			Local_280.f_16 = SYSTEM::CEIL((2f * 60000f));
			Local_280.f_11 = "trvram_6_2h_intro";
			Local_280.f_12 = "trvram_6_2h_outro";
			Local_280.f_13 = "trvram_6_2h_run_outro";
			Local_280.f_14 = 0.15f;
			Local_280.f_15 = 0.37f;
			Local_280.f_17[0] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_24[0] = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
			Local_280.f_24[1] = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_27[0] = joaat("A_M_M_Hillbilly_01");
			Local_280.f_27[1] = joaat("A_M_Y_Salton_01");
			Local_280.f_27[2] = joaat("IG_Ramp_Hic");
			Local_280.f_37 = 2;
			Local_280.f_32[0] = joaat("bfinjection");
			Local_280.f_32[1] = joaat("bison");
			Local_280.f_38 = 2;
			Local_280.f_2 = "TR_RTGT1";
			Local_280.f_5 = "TR_RAMP1";
			Local_280.f_49 = 0.33f;
			Local_280.f_52 = 1;
			Local_280.f_36 = joaat("prop_gascyl_01a");
			Local_280.f_6 = "Rampage1";
			Local_280.f_43 = { 908.7723f, 3641.4531f, 31.4889f };
			Local_280.f_46 = 270.3831f;
			Local_280.f_39 = { 899.2652f, 3649.5786f, 31.7623f };
			Local_280.f_42 = 269.0209f;
			Local_280.f_53 = 25;
			iLocal_411[0] = "A_M_M_SALTON_02_WHITE_FULL_01";
			iLocal_411[1] = "A_M_O_SALTON_01_WHITE_FULL_01 ";
			iLocal_411[2] = "A_M_M_HILLBILLY_01_WHITE_MINI_01";
			iLocal_411[3] = "A_M_M_HILLBILLY_02_WHITE_MINI_01";
			iLocal_411[4] = "A_M_Y_SALTON_01_WHITE_MINI_01";
			sLocal_407 = "GENERIC_INSULT_HIGH";
			iLocal_370 = "RAMPAGE_REDNECKS_SCENE";
			iLocal_595 = 28000;
			break;
		case 81:
			iLocal_275 = 53;
			Local_280.f_1 = 1;
			Local_280.f_17[0] = joaat("WEAPON_SAWNOFFSHOTGUN");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_21[1] = joaat("WEAPON_BAT");
			Local_280.f_16 = 120000;
			Local_280.f_11 = "trvram_6_2h_intro";
			Local_280.f_12 = "trvram_6_2h_outro";
			Local_280.f_13 = "trvram_6_2h_run_outro";
			Local_280.f_14 = 0.15f;
			Local_280.f_15 = 0.37f;
			Local_280.f_27[0] = joaat("A_M_Y_Hipster_03");
			Local_280.f_27[1] = joaat("A_M_Y_Hipster_02");
			Local_280.f_27[2] = joaat("A_M_Y_Hipster_01");
			Local_280.f_27[3] = joaat("IG_Ramp_Hipster");
			Local_280.f_37 = 3;
			Local_280.f_32[0] = joaat("faggio2");
			Local_280.f_32[1] = joaat("fixter");
			Local_280.f_32[2] = joaat("issi2");
			Local_280.f_38 = 3;
			Local_280.f_43 = { 1181.1375f, -400.7188f, 66.913f };
			Local_280.f_46 = 218.467f;
			Local_280.f_39 = { 1193.6074f, -392.7852f, 67.0623f };
			Local_280.f_42 = 164.6903f;
			Local_280.f_2 = "TR_RTGT2";
			Local_280.f_5 = "TR_RAMP5";
			Local_280.f_48 = 1f;
			Local_280.f_47 = 0.2f;
			iLocal_411[0] = "A_M_Y_Hipster_03_White_Mini_01";
			iLocal_411[1] = "A_M_Y_Vinewood_02_White_Mini_01";
			iLocal_411[2] = "A_M_Y_Vinewood_03_White_Mini_01";
			iLocal_411[3] = "A_M_Y_Vinewood_04_White_Mini_01";
			iLocal_412[0] = "A_F_Y_Hipster_01_White_Mini_01";
			iLocal_412[1] = "A_F_Y_Vinewood_01_White_Mini_01";
			iLocal_412[2] = "A_F_Y_Vinewood_02_White_Mini_01";
			iLocal_412[3] = "A_F_Y_Vinewood_03_Chinese_Mini_01";
			iLocal_412[4] = "A_F_Y_Vinewood_04_White_Mini_01";
			sLocal_407 = "RAMPAGEHIPSTER";
			iLocal_370 = "RAMPAGE_HIPSTERS_SCENE";
			Local_280.f_53 = 20;
			fLocal_319 = 0f;
			fLocal_320 = 0f;
			iLocal_595 = 17000;
			fLocal_365 = 600f;
			iLocal_378 = 0;
			break;
		case 78:
			iLocal_275 = 54;
			Local_280.f_1 = 2;
			Local_280.f_16 = 120000;
			Local_280.f_11 = "trvram_6_1h_intro";
			Local_280.f_12 = "trvram_6_1h_outro";
			Local_280.f_13 = "trvram_6_1h_run_outro";
			Local_280.f_14 = 0.19f;
			Local_280.f_15 = 0.24f;
			Local_280.f_17[0] = joaat("WEAPON_MICROSMG");
			Local_280.f_24[0] = joaat("COMPONENT_AT_SCOPE_MACRO");
			Local_280.f_24[1] = joaat("COMPONENT_MICROSMG_CLIP_02");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_21[1] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_27[0] = joaat("A_M_M_MexLabor_01");
			Local_280.f_27[1] = joaat("G_M_Y_MexGoon_03");
			Local_280.f_27[2] = joaat("A_M_Y_MexThug_01");
			Local_280.f_27[3] = joaat("IG_Ramp_Mex");
			Local_280.f_37 = 3;
			Local_280.f_32[0] = joaat("cavalcade2");
			Local_280.f_32[1] = joaat("vigero");
			Local_280.f_38 = 2;
			Local_280.f_43 = { 463.9719f, -1848.9276f, 26.864f };
			Local_280.f_46 = 135.7623f;
			Local_280.f_39 = { 444.072f, -1861.689f, 26.5592f };
			Local_280.f_42 = 131.0001f;
			Local_280.f_2 = "TR_RTGT3";
			Local_280.f_5 = "TR_RAMP2";
			Local_280.f_53 = 30;
			iLocal_595 = 15500;
			sLocal_407 = "GENERIC_INSULT_HIGH";
			iLocal_370 = "RAMPAGE_VAGOS_SCENE";
			break;
		case 79:
			iLocal_275 = 55;
			Local_280.f_1 = 3;
			Local_280.f_16 = 120000;
			Local_280.f_17[0] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_27[0] = joaat("G_M_Y_BallaEast_01");
			Local_280.f_27[1] = joaat("G_M_Y_BallaOrig_01");
			Local_280.f_27[2] = joaat("G_M_Y_BallaSout_01");
			Local_280.f_27[3] = joaat("IG_Ramp_Gang");
			Local_280.f_37 = 3;
			Local_280.f_11 = "trvram_6_2h_intro";
			Local_280.f_12 = "trvram_6_2h_outro";
			Local_280.f_13 = "trvram_6_2h_run_outro";
			Local_280.f_14 = 0.15f;
			Local_280.f_15 = 0.37f;
			Local_280.f_32[0] = joaat("oracle");
			Local_280.f_32[1] = joaat("felon");
			Local_280.f_38 = 2;
			Local_280.f_43 = { -162.3577f, -1668.2686f, 32.1239f };
			Local_280.f_46 = 327.584f;
			Local_280.f_39 = { -168.0764f, -1633.8662f, 32.6486f };
			Local_280.f_42 = 262.9751f;
			Local_280.f_2 = "TR_RTGT4";
			Local_280.f_5 = "TR_RAMP3";
			Local_280.f_53 = 30;
			Local_364 = { -129f, -1622.7f, 32.1f };
			iLocal_595 = 14100;
			iLocal_370 = "RAMPAGE_BALLAS_SCENE";
			break;
		case 80:
			iLocal_275 = 56;
			Local_280.f_1 = 4;
			Local_280.f_11 = "trvram_6_2h_intro";
			Local_280.f_12 = "trvram_6_2h_outro";
			Local_280.f_13 = "trvram_6_2h_run_outro";
			Local_280.f_14 = 0.15f;
			Local_280.f_15 = 0.37f;
			Local_280.f_17[0] = joaat("WEAPON_GRENADELAUNCHER");
			Local_280.f_17[1] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_21[1] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_27[0] = joaat("S_M_Y_Marine_01");
			Local_280.f_27[1] = joaat("S_M_Y_Marine_03");
			Local_280.f_37 = 2;
			Local_280.f_32[0] = joaat("crusader");
			Local_280.f_32[1] = joaat("barracks");
			Local_280.f_32[2] = joaat("rhino");
			Local_280.f_38 = 2;
			Local_280.f_43 = { -1295.7534f, 2507.1167f, 20.2824f };
			Local_280.f_46 = 336.2132f;
			Local_280.f_39 = { -1317.2107f, 2482.0774f, 22.8051f };
			Local_280.f_42 = 311.7142f;
			Local_280.f_2 = "TR_RTGT5";
			Local_280.f_5 = "TR_RAMP4";
			Local_280.f_53 = 35;
			Local_280.f_54 = 19780921;
			fLocal_320 = 0.8f;
			iLocal_595 = 16000;
			iLocal_370 = "RAMPAGE_MILITARY_SCENE";
			break;
		default:
			break;
	}
	__LIB_38__::func_864();
	if (!__LIB_0__::func_86(Local_280.f_7) && Local_280.f_10 > 0f)
	{
		__LIB_14__::func_822(Local_280.f_7, Local_280.f_10, &Var0, &Var1);
		iLocal_306 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_280.f_6))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(Local_280.f_6, false);
	}
	__LIB_14__::func_822(Local_364, fLocal_365, &Var0, &Var1);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Var0, Var1, false);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var0, Var1, 0);
}

void func_908(int* iParam0, bool bParam1)//Position - 0x7D8
{
	if (!__LIB_0__::func_692(*iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_38__::func_865(iParam0);
	}
	iParam0->f_6 = __LIB_0__::func_76(*iParam0, PLAYER::PLAYER_PED_ID(), 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_304);
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, true);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, 120, 0);
	PED::SET_PED_MAX_HEALTH(*iParam0, 120);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam0, true, joaat("PLAYER"));
	TASK::SET_PED_PATH_AVOID_FIRE(*iParam0, true);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, true);
	PED::SET_PED_CAN_BE_TARGETED_WHEN_INJURED(*iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(*iParam0, false);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(*iParam0, true);
	PED::SET_PED_MONEY(*iParam0, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 23, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 47, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
	__LIB_38__::func_883(iParam0);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(*iParam0, 200f);
	PED::SET_PED_MONEY(*iParam0, 0);
}

void func_909(int* iParam0)//Position - 0x1EDD
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (iLocal_378 == 4)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_2)
		{
			if (iParam0->f_2[iVar0] != -1)
			{
				if (__LIB_0__::func_121(Local_323[iParam0->f_2[iVar0] /*13*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_323[iParam0->f_2[iVar0] /*13*/], 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_323[iParam0->f_2[iVar0] /*13*/], 1, false);
					if (Local_323[iParam0->f_2[iVar0] /*13*/].f_5 > 120f)
					{
						__LIB_38__::func_886(&(Local_323[iParam0->f_2[iVar0] /*13*/]), 0);
						iParam0->f_2[iVar0] = -1;
					}
					else
					{
						__LIB_38__::func_806(Local_323[iParam0->f_2[iVar0] /*13*/], *iParam0);
						iParam0->f_2[iVar0] = -1;
					}
				}
				else if (iVar0 == 0)
				{
					iParam0->f_2[iVar0] = -1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iParam0->f_2)
		{
			iParam0->f_2[iVar0] = -1;
			iVar0++;
		}
		if (__LIB_0__::func_121(*iParam0))
		{
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, false);
			if (iParam0->f_1 == 1)
			{
				if (__LIB_38__::func_885(*iParam0))
				{
					*iParam0 = 0;
					return;
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_2)
		{
			if (iParam0->f_2[iVar0] != -1)
			{
				if (__LIB_0__::func_121(Local_323[iParam0->f_2[iVar0] /*13*/]))
				{
					TASK::TASK_SMART_FLEE_COORD(Local_323[iParam0->f_2[iVar0] /*13*/], ENTITY::GET_ENTITY_COORDS(*iParam0, true), 200f, -1, false, false);
					__LIB_38__::func_886(&(Local_323[iParam0->f_2[iVar0] /*13*/]), 1);
				}
				iParam0->f_2[iVar0] = -1;
			}
			iVar0++;
		}
	}
	__LIB_0__::func_106(iParam0);
	*iParam0 = 0;
}

void func_910()//Position - 0x3EB9
{
	int iVar0;
	iVar0 = 0;
	iLocal_334 = 0;
	__LIB_12__::func_768(iLocal_334);
	iVar0 = 0;
	while (iVar0 < iLocal_333)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_333[iVar0]))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_333[iVar0], false))
			{
				__LIB_38__::func_888(iLocal_333[iVar0], 0);
				__LIB_0__::func_106(&(iLocal_333[iVar0]));
				iLocal_333[iVar0] = 0;
			}
			else
			{
				iLocal_334++;
			}
		}
		iVar0++;
	}
}

void func_911(int iParam0)//Position - 0x9FDA
{
	int iVar0;
	int iVar1;
	iVar0 = (Local_280.f_16 - (Local_277.f_14 - Local_277.f_13));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() < iVar1)
	{
		__LIB_38__::func_832();
		__LIB_38__::func_897(Local_277.f_0, "TR_HKILL", iVar0, "TR_HTIME", 0, 0, -1, iLocal_380[iLocal_303]);
		SYSTEM::WAIT(0);
	}
}

struct<17> func_912(struct<9> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)//Position - 0x484C6
{
	struct<17> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	Var0.f_1 = 2;
	Var1 = { __LIB_0__::func_79(Param0.f_1[1 /*3*/] - Param0.f_1[0 /*3*/]) * Vector(fParam9, fParam9, fParam9) };
	Var2 = { Param0.f_1[0 /*3*/] - Var1 };
	Var3 = { Param0.f_1[1 /*3*/] + Var1 };
	fVar4 = (Param0.f_8 + (fParam9 * 2f));
	__LIB_38__::func_895(&Var0, Var2, Var3, fVar4);
	return Var0;
}

void func_913()//Position - 0x5C62
{
	int iVar0;
	int iVar1;
	iVar0 = Local_277.f_0;
	iVar1 = (Local_280.f_16 - (MISC::GET_GAME_TIMER() - Local_277.f_13));
	if (iLocal_316 == 0)
	{
		if (iVar1 <= 0)
		{
			iVar1 = 0;
			iLocal_378 = 5;
			if (iVar0 >= Local_280.f_53)
			{
				Local_280.f_50 = 1;
			}
		}
	}
	if (!iLocal_311)
	{
		iLocal_311 = 1;
		if (Local_280.f_0 == 80)
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_310, "RAMPAGE_TIMER_COUNTDOWN_LOOP_3_MIN_MASTER", 0, true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_310, "RAMPAGE_TIMER_COUNTDOWN_LOOP_MASTER", 0, true);
		}
	}
	if (iVar1 <= 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
	}
	else if (iVar1 < iLocal_373)
	{
		iLocal_373 = (iLocal_373 - 1000);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
	}
	__LIB_38__::func_897(iVar0, "TR_HKILL", iVar1, "TR_HTIME", 0, 0, -1, iLocal_380[iLocal_303]);
}

void func_914(int* iParam0)//Position - 0x56F9
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		__LIB_38__::func_886(iParam0, 0);
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
	if (Var0.f_2 < -10f)
	{
		__LIB_38__::func_886(iParam0, 0);
		return;
	}
	__LIB_38__::func_898(iParam0);
	if (Local_280.f_0 == 80 && __LIB_0__::func_121(Local_325.f_2))
	{
		if (PED::GET_COMBAT_FLOAT(*iParam0, 6) != 0.05f)
		{
			PED::SET_COMBAT_FLOAT(*iParam0, 6, 0.05f);
		}
	}
	else if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_COMBAT_FLOAT(*iParam0, 6) != 0.01f)
		{
			PED::SET_COMBAT_FLOAT(*iParam0, 6, 0.01f);
		}
	}
	else if (PED::GET_COMBAT_FLOAT(*iParam0, 6) == 0.01f)
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar2, true))
		{
			if (iVar2 == Local_280.f_21[1])
			{
				PED::SET_COMBAT_FLOAT(*iParam0, 6, Local_285.f_5);
			}
			else
			{
				PED::SET_COMBAT_FLOAT(*iParam0, 6, Local_285.f_4);
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
	{
		iParam0->f_5 = __LIB_0__::func_76(PED::GET_VEHICLE_PED_IS_IN(*iParam0, false), PLAYER::PLAYER_PED_ID(), 0);
	}
	else
	{
		iParam0->f_5 = __LIB_0__::func_76(*iParam0, PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iParam0->f_4)
	{
		if (iParam0->f_5 < 25f && ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("WEAPON_MOLOTOV"), 4, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(*iParam0, sLocal_407, "SPEECH_PARAMS_FORCE", 1);
			TASK::CLEAR_PED_TASKS(*iParam0);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_THROW_PROJECTILE(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, false);
			TASK::TASK_SWAP_WEAPON(0, true);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			iParam0->f_4 = 0;
		}
	}
	if (iParam0->f_2 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			__LIB_0__::func_714(&(iParam0->f_1));
			if (__LIB_1__::func_606(*iParam0, PED::GET_VEHICLE_PED_IS_IN(*iParam0, false), -1))
			{
				iParam0->f_1 = __LIB_14__::func_866(PED::GET_VEHICLE_PED_IS_IN(*iParam0, false), 0, 5);
			}
			iParam0->f_2 = 1;
			return;
		}
	}
	if (iParam0->f_2 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			__LIB_0__::func_714(&(iParam0->f_1));
			iParam0->f_1 = __LIB_14__::func_661(*iParam0, 1, 0, 5);
			iParam0->f_2 = 0;
			iParam0->f_6 = iParam0->f_5;
			TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
			return;
		}
	}
	if (iParam0->f_3)
	{
		bVar1 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
		if ((!bVar1 && iParam0->f_5 > (iParam0->f_6 + 40f)) || (bVar1 && iParam0->f_5 > (100f * 2f)))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
			{
				__LIB_38__::func_884(iParam0);
			}
			else
			{
				__LIB_38__::func_886(iParam0, 1);
			}
		}
	}
	else if (iParam0->f_2 == 0 && iParam0->f_5 > (iParam0->f_6 + 100f))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
		{
			__LIB_38__::func_884(iParam0);
		}
	}
}

void func_915()//Position - 0x61DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		switch (iVar0)
		{
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::IS_ENTITY_DEAD(iVar3, false))
						{
							__LIB_38__::func_900(iVar3);
						}
						else if (PED::IS_PED_INJURED(iVar3))
						{
							ENTITY::SET_ENTITY_HEALTH(iVar3, 0, 0);
							__LIB_38__::func_900(iVar3);
						}
					}
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::IS_ENTITY_DEAD(iVar4, false))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4, PLAYER::PLAYER_PED_ID(), true))
							{
								__LIB_38__::func_888(iVar4, 1);
							}
						}
					}
				}
				break;
		}
		iVar2++;
	}
}

int func_916(var uParam0, int iParam1)//Position - 0x235F
{
	int iVar0;
	iVar0 = __LIB_38__::func_801();
	*uParam0 = __LIB_38__::func_887(iVar0, iParam1, joaat("WEAPON_PISTOL"), 1, bLocal_419, 26);
	if (!__LIB_0__::func_121(*uParam0))
	{
		return 0;
	}
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	__LIB_38__::func_908(uParam0, !PED::IS_PED_IN_ANY_HELI(*uParam0));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bLocal_419);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(*uParam0, 200f);
	PED::SET_PED_MONEY(*uParam0, 0);
	Local_277.f_12++;
	iLocal_336++;
	uParam0->f_2 = 0;
	return 1;
}

void func_917(int* iParam0)//Position - 0x4EEF
{
	int iVar0;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	switch (iParam0->f_12)
	{
		case 0:
			if (!__LIB_0__::func_121(iVar0))
			{
				__LIB_38__::func_909(iParam0);
				iParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 7)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("VEHICLE_WEAPON_TANK"), -1, true, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
				iParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
			{
				if (__LIB_0__::func_86(iParam0->f_14))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *iParam0, iParam0->f_14, 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_76(*iParam0, PLAYER::PLAYER_PED_ID(), 1) > 5f)
			{
				TASK::TASK_VEHICLE_SHOOT_AT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 20f);
				iParam0->f_12 = 2;
			}
			break;
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_SHOOT_AT_ENTITY")) == 7)
			{
				iParam0->f_19 = MISC::GET_GAME_TIMER() + 9000;
				iParam0->f_12 = 3;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_SHOOT_AT_ENTITY")) != 1)
			{
				iParam0->f_12 = 1;
			}
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() > iParam0->f_19)
			{
				iParam0->f_12 = 1;
			}
			break;
	}
}

void func_918(int* iParam0, int iParam1)//Position - 0x5091
{
	int iVar0;
	int iVar1;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar1 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	switch (iParam0->f_12)
	{
		case 0:
			if (!__LIB_0__::func_121(iVar1))
			{
				__LIB_38__::func_909(iParam0);
				iParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 7)
			{
				if (__LIB_0__::func_86(iParam0->f_14))
				{
					if (iParam0->f_9 > (iParam0->f_18 + 20f))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
						return;
					}
				}
				else if (__LIB_0__::func_724(*iParam0, iParam0->f_14, 1) > (iParam0->f_18 + 20f))
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, *iParam0, iParam0->f_14, 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
					return;
				}
				iParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
			{
				if (__LIB_0__::func_86(iParam0->f_14))
				{
					if (Local_280.f_0 == 80)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786468, iParam0->f_18, 15f, true);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
					}
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, *iParam0, iParam0->f_14, 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
				}
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iParam0->f_2)
				{
					if (iParam0->f_2[iVar0] != -1)
					{
						if (__LIB_0__::func_692(Local_323[iParam0->f_2[iVar0] /*13*/]))
						{
							__LIB_38__::func_806(Local_323[iParam0->f_2[iVar0] /*13*/], *iParam0);
						}
					}
					iParam0->f_2[iVar0] = -1;
					iVar0++;
				}
				iParam0->f_12 = 3;
				__LIB_38__::func_909(iParam0);
			}
			else
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iParam0->f_2)
				{
					if (iParam0->f_2[iVar0] != -1)
					{
						if (Local_323[iParam0->f_2[iVar0] /*13*/] != iVar1)
						{
							if (__LIB_0__::func_692(Local_323[iParam0->f_2[iVar0] /*13*/]))
							{
								__LIB_38__::func_806(Local_323[iParam0->f_2[iVar0] /*13*/], *iParam0);
							}
							iParam0->f_2[iVar0] = -1;
						}
					}
					iVar0++;
				}
				iParam0->f_12 = 2;
			}
			break;
		case 2:
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*iParam0, false, true) == 0 && iParam1)
			{
				if (__LIB_0__::func_692(iVar1))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *iParam0, PLAYER::PLAYER_PED_ID(), 8, 80f, 786436, 500f, -1f, true);
					iParam0->f_12 = 3;
				}
				else
				{
					return;
				}
			}
			break;
	}
}

void func_919(int* iParam0)//Position - 0x5345
{
	int iVar0;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_121(iVar0))
	{
		__LIB_38__::func_909(iParam0);
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
	{
		if (__LIB_0__::func_86(iParam0->f_14))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *iParam0, PLAYER::PLAYER_PED_ID(), 1, iParam0->f_17, 786436, -1f, -1f, true);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *iParam0, iParam0->f_14, 1, iParam0->f_17, 786436, -1f, -1f, true);
		}
	}
}

void func_920(int* iParam0)//Position - 0x53DD
{
	int iVar0;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_121(iVar0))
		{
			TASK::CLEAR_PED_TASKS(iVar0);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
			iParam0->f_11 = 3;
		}
	}
	if (!__LIB_0__::func_121(iVar0))
	{
		__LIB_38__::func_909(iParam0);
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
	{
		if (__LIB_0__::func_86(iParam0->f_14))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *iParam0, PLAYER::PLAYER_PED_ID(), 6, iParam0->f_17, 786436, -1f, -1f, true);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *iParam0, iParam0->f_14, 6, iParam0->f_17, 786436, -1f, -1f, true);
		}
	}
}

void func_921()//Position - 0x6118
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	__LIB_38__::func_903(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_0__::func_121(Local_323[iLocal_283 /*13*/]))
		{
			__LIB_38__::func_903(Local_323[iLocal_283 /*13*/]);
			iVar1++;
		}
		iLocal_283++;
		if (iLocal_283 >= 10)
		{
			iLocal_283 = 0;
		}
		if (iVar1 >= 2)
		{
			return;
		}
		iVar0++;
	}
}

int func_922()//Position - 0x9C10
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	float fVar7;
	iVar6 = (Local_280.f_16 - (Local_277.f_14 - Local_277.f_13));
	__LIB_38__::func_830(iVar6, &uVar3, &uVar4, &uVar5);
	iVar2 = Local_277.f_6 * 500;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_277.f_17 * 10000;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_277.f_1 * 5000;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_277.f_0 * 1000;
	iVar1 = (iVar1 + iVar2);
	fVar7 = (__LIB_38__::func_904(&Local_281) * 50f);
	iVar0 = 0;
	while (iVar0 < Local_281.f_0)
	{
		if (__LIB_38__::func_827(&(Local_281[iVar0 /*3*/])))
		{
		}
		iVar0++;
	}
	if (Local_277.f_0 >= Local_280.f_53)
	{
		fVar7 = (fVar7 + 50f);
	}
	if ((((((((__LIB_38__::func_828(0) || __LIB_38__::func_828(1)) || __LIB_38__::func_828(2)) || __LIB_38__::func_828(3)) || __LIB_38__::func_828(4)) || __LIB_38__::func_828(6)) || __LIB_38__::func_828(7)) || __LIB_38__::func_828(20)) || __LIB_38__::func_828(10))
	{
		iLocal_303 = 1;
	}
	else if (fVar7 >= 100f)
	{
		iLocal_303 = 3;
	}
	else if (fVar7 >= 75f)
	{
		iLocal_303 = 2;
	}
	else if (fVar7 >= 50f)
	{
		iLocal_303 = 1;
	}
	else
	{
		iLocal_303 = 0;
	}
	if (__LIB_0__::func_2(0))
	{
		if (iLocal_303 > Global_113386.f_2352[Local_280.f_1 /*2*/] || iVar1 > Global_113386.f_2352[Local_280.f_1 /*2*/].f_1)
		{
			MISC::CLEAR_REPLAY_STATS();
			MISC::BEGIN_REPLAY_STATS(13, 37);
			MISC::ADD_REPLAY_STAT_VALUE(Local_280.f_1);
			if (iLocal_303 > Global_113386.f_2352[Local_280.f_1 /*2*/])
			{
				MISC::ADD_REPLAY_STAT_VALUE(iLocal_303);
			}
			else
			{
				MISC::ADD_REPLAY_STAT_VALUE(Global_113386.f_2352[Local_280.f_1 /*2*/]);
			}
			if (iVar1 > Global_113386.f_2352[Local_280.f_1 /*2*/].f_1)
			{
				MISC::ADD_REPLAY_STAT_VALUE(iVar1);
			}
			else
			{
				MISC::ADD_REPLAY_STAT_VALUE(Global_113386.f_2352[Local_280.f_1 /*2*/].f_1);
			}
			MISC::END_REPLAY_STATS();
		}
	}
	if (iLocal_303 > Global_113386.f_2352[Local_280.f_1 /*2*/])
	{
		Global_113386.f_2352[Local_280.f_1 /*2*/] = iLocal_303;
	}
	if (iVar1 > Global_113386.f_2352[Local_280.f_1 /*2*/].f_1)
	{
		Global_113386.f_2352[Local_280.f_1 /*2*/].f_1 = iVar1;
	}
	return iVar1;
}

void func_923(int iParam0)//Position - 0xA038
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_38__::func_905(iParam0[iVar0 /*13*/]);
		iVar0++;
	}
}

void func_924(int* iParam0, bool bParam1)//Position - 0xA0F0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar1 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	if (__LIB_0__::func_121(iVar1) && !PED::IS_PED_INJURED(iVar1))
	{
		if (bParam1)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) + __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(*iParam0, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) * Vector(500f, 500f, 500f) };
			if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var2, 0, &Var3, 1, 3f, 0f))
			{
				Var3 = { Var2 };
			}
			if (PED::IS_PED_IN_VEHICLE(iVar1, *iParam0, false))
			{
				if (__LIB_0__::func_336(iVar1, 0) == -1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, Var3, 4, 60f, 786436, iParam0->f_18, 15f, true);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, *iParam0, 60f, 786469);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iVar1, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
			}
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(iVar1, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		}
	}
	__LIB_38__::func_886(&(Local_323[iParam0->f_2[0] /*13*/]), 1);
	__LIB_38__::func_909(iParam0);
}

int func_925(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xBC03
{
	if (ENTITY::IS_ENTITY_IN_WATER(*iParam1))
	{
		return 0;
	}
	*uParam0 = *iParam1;
	__LIB_0__::func_714(&(uParam0->f_1));
	uParam0->f_1 = __LIB_14__::func_661(*uParam0, 1, 0, 5);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_304);
	if (iParam3 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	}
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, true);
	__LIB_38__::func_908(uParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	if (iParam4 == 1)
	{
		if (iParam2 == 0)
		{
			TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		else
		{
			uParam0->f_3 = 1;
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, true);
			TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 600f, -1, false, false);
		}
	}
	else if (iParam2 == 1)
	{
		uParam0->f_3 = 1;
	}
	Local_277.f_12++;
	iLocal_336++;
	uParam0->f_3 = iParam2;
	return 1;
}

void func_926(var uParam0)//Position - 0x44299
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_38__::func_909(uParam0[iVar0 /*20*/]);
		iVar0++;
	}
}

void func_927(int iParam0)//Position - 0x485E6
{
	iLocal_322 = 0;
	switch (iParam0)
	{
		case 77:
			__LIB_38__::func_906(899.08f, 3616.2893f, 30.824312f, 889.8982f, 3616.47f, 33.862087f, 6.3f);
			__LIB_38__::func_906(900.75366f, 3579.7073f, 30.141163f, 916.0252f, 3579.704f, 37.61824f, 13f);
			__LIB_38__::func_906(908.9027f, 3571.474f, 30.782627f, 908.86725f, 3554.104f, 37.818115f, 12f);
			__LIB_38__::func_906(985.62177f, 3578.335f, 30.448856f, 997.5567f, 3569.8901f, 41.186794f, 9.75f);
			__LIB_38__::func_906(954.7393f, 3617.5725f, 30.717031f, 960.03467f, 3617.539f, 34.758904f, 8f);
			break;
		case 81:
			__LIB_38__::func_906(1145.496f, -368.67682f, 66.048904f, 1133.0378f, -417.90536f, 77.88786f, 16.5f);
			__LIB_38__::func_906(1186.174f, -386.63562f, 66.453995f, 1156.4647f, -379.28146f, 72.744225f, 8.75f);
			break;
		case 78:
			__LIB_38__::func_906(413.36664f, -1746.9587f, 27.106783f, 405.91623f, -1742.0536f, 33.078545f, 7.5f);
			__LIB_38__::func_906(444.24518f, -1745.2334f, 26.727312f, 435.74442f, -1741.4211f, 32.967648f, 8.75f);
			__LIB_38__::func_906(468.18805f, -1802.8021f, 26.34261f, 449.5238f, -1787.4714f, 33.342533f, 13f);
			__LIB_38__::func_906(531.59326f, -1806.0286f, 26.562597f, 521.0415f, -1806.0931f, 31.505949f, 10f);
			__LIB_38__::func_906(419.3922f, -1845.8894f, 25.887005f, 425.955f, -1850.8474f, 28.781279f, 7f);
			__LIB_38__::func_906(481.7917f, -1735.0114f, 30.85977f, 488.15057f, -1737.2976f, 26.943594f, 11.2f);
			break;
		case 79:
			__LIB_38__::func_906(-139.40996f, -1648.2852f, 31.54327f, -133.89108f, -1653.2937f, 34.950226f, 3.5f);
			break;
		case 80:
			__LIB_38__::func_906(-1277.2125f, 2569.2905f, 22.069016f, -1284.0968f, 2548.2217f, 28.853512f, 19.25f);
			break;
		default:
			break;
	}
}

int func_928(int* iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x699
{
	int iVar0;
	iVar0 = __LIB_38__::func_801();
	*iParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam2, true, true);
	if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
	{
		__LIB_38__::func_884(iParam0);
		return 0;
	}
	__LIB_0__::func_714(&(iParam0->f_1));
	iParam0->f_1 = __LIB_14__::func_661(*iParam0, 1, 0, 5);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_304);
	if (iParam3 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*iParam0, 0);
	}
	__LIB_14__::func_808(*iParam0, Param1);
	__LIB_38__::func_908(iParam0, 1);
	if (fParam2 == 0f)
	{
		__LIB_14__::func_831(*iParam0);
	}
	TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
	Local_277.f_12++;
	iLocal_336++;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	return 1;
}

void func_929(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5)//Position - 0x4848A
{
	*uParam0 = iParam4;
	__LIB_38__::func_895(&(uParam0->f_1), Param1, Param2, fParam3);
	uParam0->f_18 = { __LIB_38__::func_912(uParam0->f_1, 2.5f) };
	uParam0->f_43 = iParam5;
}

void func_930(int iParam0)//Position - 0x56BF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_38__::func_914(iParam0[iLocal_335 /*13*/]);
		iLocal_335++;
		if (iLocal_335 >= *iParam0)
		{
			iLocal_335 = 0;
		}
		iVar0++;
	}
}

void func_931(int iParam0)//Position - 0xBF6
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (BitTest(Global_32338[iVar0 /*23*/].f_11, 8) || BitTest(Global_32338[iVar0 /*23*/].f_11, 10))
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
	}
	MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 8);
	MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 10);
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_932(int iParam0, int iParam1)//Position - 0x468F
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (Global_32338[iVar0 /*23*/].f_16 == iParam1)
	{
		return;
	}
	Global_32338[iVar0 /*23*/].f_16 = iParam1;
	switch (iParam1)
	{
		case 1:
			Global_32338[iVar0 /*23*/].f_12[0] = 40;
			break;
		case 3:
			Global_32338[iVar0 /*23*/].f_12[0] = 60;
			break;
	}
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
}

void func_933(int iParam0, int iParam1)//Position - 0x4D4C
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (Global_32338[iVar0 /*23*/].f_12[0] == iParam1)
	{
		return;
	}
	Global_32338[iVar0 /*23*/].f_12[0] = iParam1;
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_934(int iParam0, int iParam1)//Position - 0x9724
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 16);
	Global_32338[iVar0 /*23*/].f_22 = iParam1;
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

int func_935(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x3735
{
	struct<14> Var0;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = __LIB_0__::func_713(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_113386.f_7688.f_651[Global_113386.f_7688.f_764 /*14*/] = { Var0 };
		Global_113386.f_7688.f_764++;
		__LIB_17__::func_247(0);
		__LIB_17__::func_247(1);
		__LIB_17__::func_247(2);
		return 1;
	}
	return 0;
}

void func_936(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x47B3
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1)
	{
		if (!bParam3)
		{
			Global_32338[iVar0 /*23*/].f_17 = iParam2;
			if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 8))
			{
				MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
			}
			MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 8);
		}
		else
		{
			Global_32338[iVar0 /*23*/].f_18 = iParam2;
			if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 10))
			{
				MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
			}
			MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 10);
		}
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
	}
	else
	{
		__LIB_38__::func_931(iParam0);
	}
}

int func_937(var uParam0, int iParam1, int iParam2)//Position - 0x7AAC1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = iParam2;
	iVar1 = 0;
	while (iVar1 < uParam0->f_123)
	{
		bVar2 = false;
		while (bVar2 < uParam0->f_2[iVar1 /*15*/].f_14)
		{
			if (!BitTest(uParam0->f_2[iVar1 /*15*/].f_12, bVar2))
			{
				if (uParam0->f_2[iVar1 /*15*/].f_3[bVar2 /*2*/] == iParam1 && uParam0->f_2[iVar1 /*15*/].f_3[bVar2 /*2*/].f_1 == iVar0)
				{
					return 1;
				}
			}
			bVar2++;
		}
		iVar1++;
	}
	return 0;
}

int func_938(bool bParam0, var uParam1, int iParam2)//Position - 0x7FAF8
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_939(int* iParam0, float fParam1)//Position - 0x7204C
{
	if (!__LIB_0__::func_702(iParam0))
	{
		__LIB_0__::func_706(iParam0, fParam1);
	}
}

char* func_940(int iParam0)//Position - 0x7C601
{
	struct<24> Var0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return "WTT_PIST" /* GXT: the Pistol */;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return "WTT_PIST_CBT" /* GXT: the Combat Pistol */;
			break;
		case joaat("WEAPON_APPISTOL"):
			return "WTT_PIST_AP" /* GXT: the AP Pistol */;
			break;
		case joaat("WEAPON_SMG"):
			return "WTT_SMG" /* GXT: the SMG */;
			break;
		case joaat("WEAPON_MICROSMG"):
			return "WTT_SMG_MCR" /* GXT: the Micro SMG */;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "WTT_RIFLE_ASL" /* GXT: the Assault Rifle */;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return "WTT_RIFLE_CBN" /* GXT: the Carbine Rifle */;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "WTT_RIFLE_ADV" /* GXT: the Advanced Rifle */;
			break;
		case joaat("WEAPON_MG"):
			return "WTT_MG" /* GXT: the MG */;
			break;
		case joaat("WEAPON_COMBATMG"):
			return "WTT_MG_CBT" /* GXT: the Combat MG */;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "WTT_SG_PMP" /* GXT: the Pump Shotgun */;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "WTT_SG_SOF" /* GXT: the Sawed-Off Shotgun */;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "WTT_SG_ASL" /* GXT: the Assault Shotgun */;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return "WTT_SNIP_HVY" /* GXT: the Heavy Sniper */;
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			return "WTT_SNIP_RMT" /* GXT: the Remote Sniper */;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return "WTT_SNIP_RIF" /* GXT: the Sniper Rifle */;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "WTT_GL" /* GXT: the Grenade Launcher */;
			break;
		case joaat("WEAPON_RPG"):
			return "WTT_RPG" /* GXT: the RPG */;
			break;
		case joaat("WEAPON_MINIGUN"):
			return "WTT_MINIGUN" /* GXT: the Minigun */;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			return "WTT_SMG_ASL" /* GXT: the Assault SMG */;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return "WTT_SG_BLP" /* GXT: the Bullpup Shotgun */;
			break;
		case joaat("WEAPON_PISTOL50"):
			return "WTT_PIST_50" /* GXT: the Pistol .50 */;
			break;
		case joaat("WEAPON_BOTTLE"):
			return "WTT_BOTTLE" /* GXT: the Bottle */;
			break;
		case joaat("WEAPON_GUSENBERG"):
			return "WTT_GUSENBERG" /* GXT: the Gusenberg Sweeper */;
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return "WTT_SNSPISTOL" /* GXT: the SNS Pistol */;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return "WTT_VPISTOL" /* GXT: the Vintage Pistol */;
			break;
		case joaat("WEAPON_DAGGER"):
			return "WTT_DAGGER" /* GXT: the Antique Cavalry Dagger */;
			break;
		case joaat("WEAPON_FLAREGUN"):
			return "WTT_FLAREGUN" /* GXT: the Flare Gun */;
			break;
		case joaat("WEAPON_RAILGUN"):
			return "WTT_RAILGUN" /* GXT: the Railgun */;
			break;
		case joaat("WEAPON_MUSKET"):
			return "WTT_MUSKET" /* GXT: the Musket */;
			break;
		case joaat("WEAPON_FIREWORK"):
			return "WTT_FWRKLNCHR" /* GXT: the Firework Launcher */;
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return "WTT_HMKRIFLE" /* GXT: the Marksman Rifle */;
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return "WTT_HVYSHOT" /* GXT: the Heavy Shotgun */;
			break;
		case joaat("WEAPON_PROXMINE"):
			return "WTT_PRXMINE" /* GXT: the Proximity Mine */;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return "WTT_HOMLNCH" /* GXT: the Homing Launcher */;
			break;
		case joaat("WEAPON_COMBATPDW"):
			return "WTT_COMBATPDW" /* GXT: the Combat PDW */;
			break;
		case joaat("WEAPON_KNUCKLE"):
			return "WTT_KNUCKLE" /* GXT: the Knuckle Duster */;
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return "WTT_MKPISTOL" /* GXT: the Marksman Pistol */;
			break;
		case joaat("WEAPON_MACHETE"):
			return "WTT_MACHETE" /* GXT: the Machete */;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return "WTT_MCHPIST" /* GXT: the Machine Pistol */;
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			return "WTT_FLASHLIGHT" /* GXT: the Flashlight */;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return "WTT_DBSHGN" /* GXT: the Double Barrel Shotgun */;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return "WTT_CMPRIFLE" /* GXT: the Compact Rifle */;
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return "WTT_SWBLADE" /* GXT: the Switchblade */;
			break;
		case joaat("WEAPON_REVOLVER"):
			return "WTT_REVOLVER" /* GXT: the Heavy Revolver */;
			break;
		default:
			if (__LIB_0__::func_289(iParam0, &Var0) != -1)
			{
				return __LIB_1__::func_601(&(Var0.f_23));
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

void func_941(float fParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x7FEF3
{
	if (bParam3)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	__LIB_38__::func_666(fParam0, uParam1, sParam2, 0, 0);
}

void func_942(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x67E8B
{
	__LIB_38__::func_635(uParam0, fParam3, fParam4);
	__LIB_38__::func_634(uParam0, fParam1, fParam2, bParam5);
}

float func_943(float fParam0)//Position - 0x769B3
{
	return (fParam0 + fLocal_14);
}

void func_944(var uParam0, int iParam1)//Position - 0x795D1
{
	uParam0->f_228 = iParam1;
}

int func_945(var uParam0)//Position - 0x795DF
{
	return uParam0->f_228;
}

void func_946(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)//Position - 0x84ED8
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(1, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(1, iVar0);
		Global_1649593.f_1775[iVar0] = uParam0;
		Global_1649593.f_1775.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_1775.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1775.f_194[iVar0] = uParam3;
		Global_1649593.f_1775.f_269[iVar0] = uParam12;
		Global_1649593.f_1775.f_205[iVar0] = uParam4;
		Global_1649593.f_1775.f_183[iVar0] = iParam5;
		Global_1649593.f_1775.f_216[iVar0] = iParam6;
		Global_1649593.f_1775.f_227[iVar0 /*3*/] = iParam7;
		Global_1649593.f_1775.f_227[iVar0 /*3*/].f_1 = iParam8;
		Global_1649593.f_1775.f_258[iVar0] = iParam9;
		Global_2824945[iVar0] = iParam13;
		Global_2824956[iVar0] = iParam14;
		Global_2824967[iVar0] = iParam15;
		Global_2824978[iVar0] = iParam16;
		Global_2824989[iVar0] = iParam17;
		Global_2825000[iVar0] = iParam18;
		Global_2825011[iVar0] = iParam19;
		Global_2825022[iVar0] = iParam20;
		Global_1649593.f_1775.f_312[iVar0] = iParam10;
		Global_1649593.f_1775.f_323[iVar0] = iParam11;
		Global_1649593.f_1775.f_334[iVar0] = iParam21;
		Global_1649593.f_1172 = 1;
	}
}

void func_947(var uParam0)//Position - 0x868E6
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	iVar0 = 1;
	while (iVar0 < 4)
	{
		Var2 = { *(uParam0[iVar0 /*7*/]) };
		iVar1 = iVar0;
		while (iVar1 > 0 && Var2.f_2 < (uParam0[(iVar1 - 1) /*7*/])->f_2)
		{
			*(uParam0[iVar1 /*7*/]) = { *(uParam0[(iVar1 - 1) /*7*/]) };
			iVar1 = (iVar1 - 1);
		}
		*(uParam0[iVar1 /*7*/]) = { Var2 };
		iVar0++;
	}
}

var func_948(var uParam0)//Position - 0x86CAA
{
	return uParam0->f_79;
}

var func_949(var uParam0)//Position - 0x86CB6
{
	return uParam0->f_78;
}

int func_950(int iParam0, int iParam1, int iParam2)//Position - 0x897C9
{
	if (iParam0 > -1 && iParam0 < iParam1)
	{
		return iParam0;
	}
	if (iParam0 > (iParam1 + iParam2))
	{
		return (iParam0 - iParam2);
	}
	if (iParam0 == iParam1)
	{
		return -2;
	}
	return -1;
}

void func_951(var uParam0)//Position - 0x8BE90
{
	*uParam0 = (*uParam0 - 0.01f);
}

void func_952(var uParam0)//Position - 0x8CF74
{
	*uParam0 = (*uParam0 + 0.01f);
}

char* func_953(int iParam0, bool bParam1)//Position - 0x8CFAE
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTT_PIST" /* GXT: the Pistol */;
			}
			else
			{
				return "SHR_CAT_HG";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "WTT_SMG_MCR" /* GXT: the Micro SMG */;
			}
			else
			{
				return "SHR_CAT_SMG";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "WTT_RIFLE_ASL" /* GXT: the Assault Rifle */;
			}
			else
			{
				return "SHR_CAT_AR";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "WTT_SG_PMP" /* GXT: the Pump Shotgun */;
			}
			else
			{
				return "SHR_CAT_SG";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "WTT_MG" /* GXT: the MG */;
			}
			else
			{
				return "SHR_CAT_LMG";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "WTT_MINIGUN" /* GXT: the Minigun */;
			}
			else
			{
				return "SHR_CAT_HVY";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "WTT_RAILGUN" /* GXT: the Railgun */;
			}
			else
			{
				return "SHR_CAT_RAILGUN";
			}
			break;
	}
	return "";
}

void func_954()//Position - 0x93D67
{
	Global_1649593.f_1165 = 1;
}

void func_955(var uParam0, int iParam1)//Position - 0x961DC
{
	uParam0->f_14 = iParam1;
}

void func_956(int iParam0)//Position - 0xB1718
{
	Global_112471 = (Global_112471 || iParam0);
}

void func_957(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x84AAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = uParam3;
		Global_1649593.f_4041.f_172[iVar0] = iParam2;
		Global_1649593.f_4041.f_260[iVar0] = iParam4;
		Global_1649593.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_4041.f_443[iVar0] = iParam7;
		Global_1649593.f_4041.f_454[iVar0] = iParam8;
		Global_1649593.f_4041.f_497[iVar0] = iParam9;
		Global_1649593.f_4041.f_508[iVar0] = iParam10;
		Global_1649593.f_4041.f_205[iVar0] = iParam11;
		Global_1649593.f_4041.f_216[iVar0] = iParam12;
		Global_1649593.f_4041.f_227[iVar0] = iParam13;
		Global_1649593.f_4041.f_238[iVar0] = iParam14;
		Global_1649593.f_4041.f_249[iVar0] = iParam15;
		Global_1649593.f_4041.f_519[iVar0] = iParam16;
		Global_1649593.f_4041.f_530[iVar0] = iParam17;
		Global_1649593.f_4041.f_541[iVar0] = iParam18;
		Global_1649593.f_4041.f_552[iVar0] = iParam19;
		Global_1649593.f_4041.f_563[iVar0] = iParam20;
		Global_1649593.f_4041.f_574[iVar0] = iParam21;
		Global_1649593.f_4041.f_585[iVar0] = iParam22;
		Global_1649593.f_4041.f_596[iVar0] = iParam23;
		Global_1649593.f_4041.f_607[iVar0] = iParam24;
		Global_1649593.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && __LIB_1__::func_710())
		{
			Global_1649593.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1649593.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1649593.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1649593.f_1172 = 1;
			}
			if (__LIB_1__::func_709())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

void func_958(var uParam0, bool bParam1)//Position - 0x76FC8
{
	if (__LIB_1__::func_209())
	{
		return;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		bParam1 = false;
	}
	if (!Global_1574971)
	{
		if (bParam1)
		{
			if (!__LIB_1__::func_208(Global_4718592.f_168757))
			{
				if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
				{
					__LIB_1__::func_207(1);
					__LIB_2__::func_467(1, 2);
				}
				__LIB_1__::func_347(&(uParam0->f_1203), &(uParam0->f_1200));
			}
		}
		Global_1574971 = 1;
	}
}

var func_959(int iParam0)//Position - 0xA6223
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	Global_1837285 = 0;
	Global_1837286 = 0;
	if (__LIB_30__::func_930(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_2__::func_211())
		{
			if (__LIB_0__::func_855(PLAYER::PLAYER_ID()))
			{
				iVar1 = Global_2688483[iParam0 /*10*/].f_9;
				iVar0 = __LIB_36__::func_719(iVar1);
			}
		}
		Global_1837285 = (iVar0 - Global_2703735.f_3307.f_72);
		if (Global_1837285 != 0)
		{
			__LIB_2__::func_427(Global_1837285);
		}
		__LIB_23__::func_548();
	}
	return Global_1837285;
}

void func_960(int iParam0)//Position - 0x2975
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 23))
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			MISC::SET_BIT(&(Global_100441.f_20), 23);
		}
	}
	else if (BitTest(Global_100441.f_20, 23))
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 23);
	}
}

void func_961(int iParam0)//Position - 0x2BF0
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 18))
		{
			GRAPHICS::TOGGLE_PLAYER_DAMAGE_OVERLAY(false);
			MISC::SET_BIT(&(Global_100441.f_20), 18);
		}
	}
	else if (BitTest(Global_100441.f_20, 18))
	{
		GRAPHICS::TOGGLE_PLAYER_DAMAGE_OVERLAY(true);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 18);
	}
}

void func_962(int iParam0, int iParam1)//Position - 0x2C3C
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_100441.f_20), 16);
		if (iParam1 == 1)
		{
			MISC::SET_TIME_SCALE(0.2f);
		}
		else
		{
			MISC::SET_TIME_SCALE(0.075f);
		}
	}
	else
	{
		if (BitTest(Global_100441.f_20, 16))
		{
			MISC::SET_TIME_SCALE(1f);
		}
		MISC::CLEAR_BIT(&(Global_100441.f_20), 16);
	}
}

void func_963()//Position - 0x2F2B
{
	if (Global_100441.f_18 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Global_100441.f_18))
		{
			AUDIO::STOP_SOUND(Global_100441.f_18);
		}
		Global_100441.f_18 = -1;
	}
	if (Global_100441.f_19 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Global_100441.f_19))
		{
			AUDIO::STOP_SOUND(Global_100441.f_19);
		}
		Global_100441.f_19 = -1;
	}
	if (BitTest(Global_100441.f_20, 6))
	{
		MISC::CLEAR_BIT(&(Global_100441.f_20), 6);
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("replay_controller"))
	{
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
}

void func_964(int iParam0)//Position - 0x3005
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 11))
		{
			AUDIO::BLOCK_DEATH_JINGLE(true);
			MISC::SET_BIT(&(Global_100441.f_20), 11);
		}
	}
	else if (BitTest(Global_100441.f_20, 11))
	{
		AUDIO::BLOCK_DEATH_JINGLE(false);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 11);
	}
}

void func_965(int iParam0)//Position - 0x30DC
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 12))
		{
			AUDIO::START_AUDIO_SCENE("REPLAY_SCREEN_SCENE");
			MISC::SET_BIT(&(Global_100441.f_20), 12);
		}
	}
	else if (BitTest(Global_100441.f_20, 12))
	{
		AUDIO::STOP_AUDIO_SCENE("REPLAY_SCREEN_SCENE");
		MISC::CLEAR_BIT(&(Global_100441.f_20), 12);
	}
}

void func_966(int iParam0)//Position - 0x3143
{
	if (iParam0 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		MISC::SET_BIT(&(Global_100441.f_20), 10);
	}
	else if (BitTest(Global_100441.f_20, 10))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 10);
	}
}

int func_967(bool bParam0, int iParam1)//Position - 0x2DD69
{
	var uVar0;
	int iVar1;
	var uVar2;
	if (__LIB_0__::func_374(bParam0))
	{
		if (__LIB_36__::func_768(iParam1))
		{
			return 1;
		}
		uVar0 = __LIB_36__::func_774(bParam0, iParam1);
		iVar1 = __LIB_3__::func_371(iParam1);
		uVar2 = __LIB_0__::func_160(iVar1);
		return BitTest(uVar0, uVar2);
	}
	return 0;
}

void func_968(bool bParam0, char* sParam1)//Position - 0x3602F
{
	if (!__LIB_0__::func_374(bParam0))
	{
		return;
	}
	if (!Global_113386.f_32749.f_5596[bParam0])
	{
		switch (bParam0)
		{
			case 0:
				__LIB_38__::func_65("IMPOUND_HELPM" /* GXT: Michael's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			case 1:
				__LIB_38__::func_65("IMPOUND_HELPF" /* GXT: Franklin's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			case 2:
				__LIB_38__::func_65("IMPOUND_HELPT" /* GXT: Trevor's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_113386.f_32749.f_5596[bParam0] = 1;
	}
}

int func_969()//Position - 0x20F
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL("airfield");
	return 1;
}

int func_970()//Position - 0x576
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TORTURE_ZOOM"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_3_TORTURE_ZOOM");
	}
	AUDIO::STOP_STREAM();
	return 1;
}

int func_971()//Position - 0x596
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL("smboat");
	return 1;
}

int func_972()//Position - 0x5B2
{
	int iVar0;
	int iVar1;
	iVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(7.25f, -656.98f, 17.14f, 50f, "des_finale_tunnel");
	iVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(7.25f, -656.98f, 17.14f, 50f, "des_finale_vault");
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar0))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0, 11);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar1))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar1, 11);
	}
	return 1;
}

void func_973(int iParam0, int iParam1, int iParam2)//Position - 0x7A76
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, true);
	*iParam2++;
}

void func_974(int iParam0, var uParam1)//Position - 0x8876
{
	if (__LIB_0__::func_703(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 0))
	{
	}
}

int func_975(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x8A88
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		__LIB_37__::func_375(0);
		MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(Param0, 5000f, true, false, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Param0, 5000f);
		__LIB_37__::func_990();
		__LIB_17__::func_10();
		SYSTEM::SETTIMERA(0);
		__LIB_37__::func_375(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(false);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(false);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				if (iParam3 == 1)
				{
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() && !__LIB_17__::func_9()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2), false, false);
			MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		__LIB_37__::func_375(0);
		return 1;
	}
	__LIB_37__::func_375(0);
	return 0;
}

void func_976(int iParam0, bool bParam1)//Position - 0xB254
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			__LIB_13__::func_814(iParam0, &(Global_113386.f_2363.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][bVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (bVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (bVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (bVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
		}
	}
}

void func_977()//Position - 0x70716
{
	int iVar0;
	int iVar1;
	if (!Global_113386.f_7229.f_26)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			Global_113386.f_7229.f_11[iVar0] = 0;
			iVar0++;
		}
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[0]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[2]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[1]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[3]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[4]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[0]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[2]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[1]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[3]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[4]), 1);
		Global_113386.f_7229.f_26 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= (5 - 1))
	{
		__LIB_37__::func_432(iVar1, BitTest(Global_113386.f_7229.f_11[iVar1], 0));
		iVar1++;
	}
	__LIB_38__::func_1();
}

void func_978(int iParam0)//Position - 0x4E0D
{
	char* sVar0;
	switch (__LIB_14__::func_466())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 0))
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, false);
			MISC::SET_BIT(&(Global_100441.f_20), 0);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
			__LIB_38__::func_962(1, 1);
		}
	}
	else
	{
		if (BitTest(Global_100441.f_20, 0))
		{
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
			{
				GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			}
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&(Global_100441.f_20), 0);
	}
}

void func_979(int iParam0, bool bParam1, bool bParam2)//Position - 0x9202
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		__LIB_0__::func_672(iParam0, &(Global_113386.f_2363.f_539.f_298[bVar0 /*477*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_113386.f_2363.f_539.f_1763 || (Global_113386.f_2363.f_539.f_1763 == -1 && iVar1 == 4))
				{
					if (Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0] != 0 && Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0] != joaat("WEAPON_MOLOTOV"))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0], false))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0], true);
						}
					}
				}
			}
			iVar1++;
		}
		if (bVar0 == 0)
		{
			STATS::STAT_GET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		else if (bVar0 == 1)
		{
			STATS::STAT_GET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		else if (bVar0 == 2)
		{
			STATS::STAT_GET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), iVar2);
	}
}

int func_980(bool bParam0)//Position - 0x1088
{
	if (BitTest(Global_32118, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_981(int iParam0)//Position - 0x1579
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_982(int iParam0)//Position - 0x1B20
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 10;
			break;
		case 11:
			iVar0 = 4;
			break;
		case 13:
			iVar0 = 4;
			break;
		case 15:
			iVar0 = 2;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 22:
			iVar0 = 2;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 3;
			break;
		case 26:
			iVar0 = 2;
			break;
		case 27:
			iVar0 = 2;
			break;
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_983(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1BEE
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		case joaat("re_accident"):
			return 0;
			break;
		case joaat("re_arrests"):
			return 15;
			break;
		case joaat("re_atmrobbery"):
			return 1;
			break;
		case joaat("re_bikethief"):
			return 26;
			break;
		case joaat("re_border"):
			return 29;
			break;
		case joaat("re_burials"):
			return 24;
			break;
		case joaat("re_bus_tours"):
			return 2;
			break;
		case joaat("re_cartheft"):
			return 17;
			break;
		case joaat("re_chasethieves"):
			return 11;
			break;
		case joaat("re_crashrescue"):
			return 16;
			break;
		case joaat("re_cultshootout"):
			return 18;
			break;
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		case joaat("re_domestic"):
			return 3;
			break;
		case joaat("re_drunkdriver"):
			return 27;
			break;
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		case joaat("re_gangfight"):
			return 19;
			break;
		case joaat("re_getaway_driver"):
			return 4;
			break;
		case joaat("re_hitch_lift"):
			return 13;
			break;
		case joaat("re_homeland_security"):
			return 28;
			break;
		case joaat("re_lured"):
			return 7;
			break;
		case joaat("re_muggings"):
			return 25;
			break;
		case joaat("re_paparazzi"):
			return 10;
			break;
		case joaat("re_prisonerlift"):
			return 22;
			break;
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		case joaat("re_securityvan"):
			return 9;
			break;
		case joaat("re_shoprobbery"):
			return 5;
			break;
		case joaat("re_snatched"):
			return 6;
			break;
		case joaat("re_stag_do"):
			return 14;
			break;
		case joaat("re_yetarian"):
			return 30;
			break;
		case joaat("re_duel"):
			return 31;
			break;
		case joaat("re_seaplane"):
			return 32;
			break;
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

char* func_984(int iParam0)//Position - 0x21C7E
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}
	return sVar0;
}

void func_985(int iParam0)//Position - 0x24749
{
	Global_113375 = iParam0;
}

char* func_986(int iParam0, bool bParam1)//Position - 0x24794
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		case 1:
			return "RE_ATMROBBERY";
			break;
		case 2:
			return "RE_BUSTOUR";
			break;
		case 3:
			return "RE_DOMESTIC";
			break;
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		case 5:
			return "RE_SHOPROBBERY";
			break;
		case 6:
			return "RE_SNATCHED";
			break;
		case 7:
			return "RE_LURED";
			break;
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		case 9:
			return "RE_SECURITYVAN";
			break;
		case 10:
			return "RE_PAPARAZZI";
			break;
		case 11:
			return "RE_CHASETHIEVES";
			break;
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		case 13:
			return "RE_HITCHLIFT";
			break;
		case 14:
			return "RE_STAG";
			break;
		case 15:
			return "RE_ARREST";
			break;
		case 16:
			return "RE_CRASHRESCUE";
			break;
		case 17:
			return "RE_CARTHEFT";
			break;
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		case 19:
			return "RE_GANGFIGHT";
			break;
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		case 22:
			return "RE_PRISONERLIFT";
			break;
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		case 24:
			return "RE_BURIAL";
			break;
		case 25:
			return "RE_MUGGING";
			break;
		case 26:
			return "RE_BIKETHIEF";
			break;
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		case 29:
			return "RE_BORDERPATROL";
			break;
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		case 31:
			return "RE_DUEL";
			break;
		case 32:
			return "RE_SEAPLANE";
			break;
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

int func_987(int iParam0)//Position - 0x2500A
{
	int iVar0;
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		case 0:
			iVar0 = 30;
			break;
		case 15:
			iVar0 = 30;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 26:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 30;
			break;
		case 29:
			iVar0 = 30;
			break;
		case 24:
			iVar0 = 30;
			break;
		case 2:
			iVar0 = 0;
			break;
		case 17:
			iVar0 = 30;
			break;
		case 11:
			iVar0 = 30;
			break;
		case 16:
			iVar0 = 30;
			break;
		case 18:
			iVar0 = 30;
			break;
		case 12:
			iVar0 = 120;
			break;
		case 3:
			iVar0 = 60;
			break;
		case 27:
			iVar0 = 60;
			break;
		case 19:
			iVar0 = 30;
			break;
		case 20:
			iVar0 = 30;
			break;
		case 4:
			iVar0 = 60;
			break;
		case 28:
			iVar0 = 30;
			break;
		case 13:
			iVar0 = 35;
			break;
		case 7:
			iVar0 = 30;
			break;
		case 25:
			iVar0 = 40;
			break;
		case 10:
			iVar0 = 30;
			break;
		case 22:
			iVar0 = 30;
			break;
		case 21:
			iVar0 = 30;
			break;
		case 5:
			iVar0 = 30;
			break;
		case 30:
			iVar0 = 60;
			break;
		case 9:
			iVar0 = 60;
			break;
		case 6:
			iVar0 = 40;
			break;
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_988()//Position - 0x296AF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

int func_989(int iParam0, bool bParam1)//Position - 0x29F99
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_990()//Position - 0x21CC2
{
	switch (__LIB_0__::func_782(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_991()//Position - 0x2A795
{
	__LIB_0__::func_698();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_992(struct<3> Param0, bool bParam1)//Position - 0x958
{
	if (iLocal_62 == 0)
	{
		bParam1 = false;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_60[iLocal_65 /*5*/]);
	if (Local_60[iLocal_65 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_60[iLocal_65 /*5*/].f_1, 0.4f, 1f);
	}
	Local_60[iLocal_65 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_60[iLocal_65 /*5*/].f_1 = { Param0 };
	Local_60[iLocal_65 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, iLocal_53, bParam1);
	iLocal_65++;
	if (iLocal_65 >= 31)
	{
		iLocal_65 = 0;
	}
}

void func_993()//Position - 0xDB7
{
	if (!iLocal_47)
	{
		iLocal_47 = 1;
	}
}

void func_994(int iParam0)//Position - 0x29DD
{
	Global_113372 = iParam0;
}

int func_995(int iParam0, int iParam1)//Position - 0x3009
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		case 1:
			return 226;
			break;
		case 2:
			return 243;
			break;
		case 3:
			return 256;
			break;
		case 4:
			return 259;
			break;
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		case 6:
			return 265;
			break;
		case 7:
			return 218;
			break;
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		case 10:
			return 219;
			break;
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		case 12:
			return 254;
			break;
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		case 14:
			return 283;
			break;
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		case 16:
			return 252;
			break;
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		case 18:
			return 253;
			break;
		case 19:
			return 215;
			break;
		case 20:
			return 216;
			break;
		case 21:
			return 251;
			break;
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		case 24:
			return 242;
			break;
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		case 8:
			return 255;
			break;
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		case 28:
			return 217;
			break;
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		case 30:
			return 285;
			break;
		case 31:
			return 318;
			break;
		case 32:
			return 319;
			break;
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_996(int iParam0, int iParam1)//Position - 0x377F
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

bool func_997()//Position - 0x743D
{
	return Global_113104 > 0;
}

void func_998(int iParam0, var uParam1)//Position - 0x926D
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

int func_999()//Position - 0x384B
{
	struct<16> Var0;
	var uVar1;
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = __LIB_38__::func_983(Var0);
	return uVar1;
}
