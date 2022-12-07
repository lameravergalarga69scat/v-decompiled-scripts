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
	int iLocal_26 = 0;
	struct<3> Local_27 = { 0, 0, 0 } ;
	struct<3> Local_28 = { 0, 0, 0 } ;
	int iLocal_29 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
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
	iLocal_20 = -15;
	iLocal_21 = -15;
	iLocal_22 = -1;
	iLocal_26 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		__LIB_0__::func_199();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stock_controller")) > 1)
	{
		__LIB_0__::func_199();
	}
	Global_63138 = 1;
	iLocal_22 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) / 16f));
	func_98();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_58896[iVar0 /*7*/])
		{
			if (Global_58896[iVar0 /*7*/].f_2)
			{
				if (!Global_58896[iVar0 /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_58896[iVar0 /*7*/].f_3, &(Global_58896[iVar0 /*7*/].f_5), -1);
				}
				else
				{
					fVar1 = 0f;
					STATS::STAT_GET_FLOAT(Global_58896[iVar0 /*7*/].f_3, &fVar1, -1);
					Global_58896[iVar0 /*7*/].f_5 = SYSTEM::FLOOR(fVar1);
				}
			}
		}
		iVar0++;
	}
	func_97();
	func_95();
	func_94();
	func_91();
	Global_63138 = 0;
	__LIB_0__::func_177(1);
	func_87();
	func_84();
	while (true)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (!Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 < 11)
			{
				Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
			}
			iVar2++;
		}
		func_80();
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_0__::func_39(14))
		{
			func_68();
			iVar3 = 16;
			while (func_67() && iVar3 >= 0)
			{
				iVar3 = (iVar3 - 1);
				func_47();
				Global_60332 = 1;
				func_41();
				Global_63140 = 1;
				func_39();
				func_38();
			}
			if (func_30())
			{
				func_28(0);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
			while (Global_60325 > 0)
			{
				func_11(&iLocal_20, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_21, 0, 480, 0, 0, 0, 0);
				Global_60325 = (Global_60325 - 1);
			}
		}
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x201
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return;
	}
	iVar1 = __LIB_0__::func_346(iVar0);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
	{
		__LIB_0__::func_181(89, 1);
		if (ENTITY::GET_ENTITY_SPEED(iVar1) > 5f)
		{
			__LIB_0__::func_181(90, 1);
		}
	}
}

void func_4()//Position - 0x2B1
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_60326)
		{
			Global_60326 = 0;
			Global_60327 = MISC::GET_GAME_TIMER();
			Global_63139 = 1;
		}
		return;
	}
	if (Global_60326)
	{
		if (!STATS::STAT_COMMUNITY_SYNCH_IS_PENDING())
		{
			iVar0 = func_5();
			Global_60326 = 0;
			if (iVar0 < 5)
			{
				Global_63139 = 0;
			}
		}
	}
}

int func_5()//Position - 0x2FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_55453[iVar0 /*36*/].f_8)
		{
			if (Global_55453[iVar0 /*36*/].f_35 > -1)
			{
				iVar2 = Global_58334[Global_55453[iVar0 /*36*/].f_35 /*7*/];
				STATS::STAT_GET_FLOAT(iVar2, &(Global_55453[iVar0 /*36*/].f_9), -1);
				if (Global_55453[iVar0 /*36*/].f_9 > 0f)
				{
					fVar3 = 0f;
					STATS::STAT_COMMUNITY_GET_HISTORY(iVar2, 0, &(Global_55453[iVar0 /*36*/].f_33));
					Global_55453[iVar0 /*36*/].f_31 = Global_55453[iVar0 /*36*/].f_9;
					Global_55453[iVar0 /*36*/].f_32 = Global_55453[iVar0 /*36*/].f_9;
					fVar3 = (fVar3 + Global_55453[iVar0 /*36*/].f_33);
					iVar4 = 0;
					while (iVar4 < 4)
					{
						fVar5 = 0f;
						STATS::STAT_COMMUNITY_GET_HISTORY(iVar2, iVar4 + 1, &fVar5);
						if (fVar5 > Global_55453[iVar0 /*36*/].f_31)
						{
							Global_55453[iVar0 /*36*/].f_31 = fVar5;
						}
						if (fVar5 < Global_55453[iVar0 /*36*/].f_32)
						{
							Global_55453[iVar0 /*36*/].f_32 = fVar5;
						}
						fVar3 = (fVar3 + fVar5);
						iVar4++;
					}
					fVar3 = (fVar3 / 5f);
					fVar6 = __LIB_38__::func_112(iVar0);
					if (fVar6 > Global_55453[iVar0 /*36*/].f_31)
					{
						Global_55453[iVar0 /*36*/].f_31 = fVar6;
					}
					if (fVar6 < Global_55453[iVar0 /*36*/].f_32)
					{
						Global_55453[iVar0 /*36*/].f_32 = fVar6;
					}
					Global_55453[iVar0 /*36*/].f_33 = (fVar6 - fVar3);
					Global_55453[iVar0 /*36*/].f_34 = ((Global_55453[iVar0 /*36*/].f_33 / fVar3) * 100f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAAB
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
	int iVar9;
	iVar0 = __LIB_1__::func_26(*iParam0);
	iVar1 = __LIB_0__::func_411(*iParam0);
	iVar2 = __LIB_0__::func_482(*iParam0);
	iVar3 = __LIB_0__::func_196(*iParam0);
	iVar4 = __LIB_0__::func_195(*iParam0);
	iVar5 = __LIB_0__::func_483(*iParam0);
	if (((iParam4 == 0 && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		iVar7 = iVar0;
		if (iVar6 < 0)
		{
			iVar6 = 11;
			iVar7 = (iVar7 - 1);
		}
		iVar8 = iVar6;
		iVar9 = __LIB_0__::func_139(iVar8, iVar7);
		iVar2 = (iVar2 + iVar9);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	__LIB_36__::func_793(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_27()//Position - 0xF26
{
	int iVar0;
	if (Global_113386.f_20564.f_442 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest(Global_113386.f_20564.f_461[iVar0], 1))
		{
			if (Global_113386.f_20564.f_452[iVar0] > 0)
			{
				Global_113386.f_20564.f_452[iVar0] = (Global_113386.f_20564.f_452[iVar0] - 1);
				if (Global_113386.f_20564.f_452[iVar0] < 1)
				{
					Global_113386.f_20564.f_452[iVar0] = 0;
					Global_113386.f_20564.f_442 = (Global_113386.f_20564.f_442 - 1);
				}
			}
		}
		iVar0++;
	}
}

void func_28(bool bParam0)//Position - 0xFCD
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		__LIB_39__::func_598(iVar0, bParam0);
		SYSTEM::WAIT(0);
		if (!bParam0)
		{
			func_68();
		}
		iVar0++;
	}
}

int func_30()//Position - 0x110E
{
	int iVar0;
	if (iLocal_20 == -15)
	{
		iLocal_20 = __LIB_37__::func_609();
		iVar0 = __LIB_0__::func_196(iLocal_20);
		if (iVar0 == 24)
		{
			iVar0 = 0;
		}
		if (__LIB_2__::func_188(iVar0, 0, 8))
		{
			__LIB_12__::func_263(&iLocal_20, 8);
		}
		else if (__LIB_2__::func_188(iVar0, 8, 16))
		{
			__LIB_12__::func_263(&iLocal_20, 16);
		}
		else if (__LIB_2__::func_188(iVar0, 16, 24))
		{
			__LIB_12__::func_263(&iLocal_20, 0);
			__LIB_39__::func_430(&iLocal_20, 0, 0, 0, 1, 0, 0);
		}
		__LIB_12__::func_264(&iLocal_20, 0);
		__LIB_12__::func_265(&iLocal_20, 0);
		iLocal_21 = iLocal_20;
		return 0;
	}
	if (func_34(iLocal_20))
	{
		if (func_31(&iLocal_20, 1, 8))
		{
			return 0;
		}
		__LIB_39__::func_430(&iLocal_20, 0, 480, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1, int iParam2)//Position - 0x11C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_9__::func_51(Global_1574629))
	{
		if (bParam1)
		{
			iVar0 = __LIB_37__::func_609();
			iVar1 = __LIB_0__::func_196(Global_1574629);
			iVar2 = __LIB_0__::func_195(Global_1574629);
			__LIB_12__::func_263(&iVar0, iVar1);
			__LIB_12__::func_264(&iVar0, iVar2);
			__LIB_12__::func_265(&iVar0, 0);
			if (__LIB_20__::func_682(__LIB_37__::func_609(), iVar0))
			{
				__LIB_39__::func_430(&iVar0, 0, 0, 0, 1, 0, 0);
			}
			iVar3 = 0;
			while (__LIB_20__::func_682(iVar0, *iParam0) && iVar3 < 24)
			{
				__LIB_39__::func_430(iParam0, 0, 0, iParam2, 0, 0, 0);
				iVar3 = (iVar3 + iParam2);
			}
		}
		return 1;
	}
	return 0;
}

bool func_34(int iParam0)//Position - 0x1447
{
	return __LIB_20__::func_682(__LIB_37__::func_609(), iParam0);
}

void func_38()//Position - 0x16CA
{
	SYSTEM::WAIT(0);
	func_68();
}

void func_39()//Position - 0x16DB
{
	int iVar0;
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	if (iLocal_26 != iVar0)
	{
		if (iLocal_25 > 48)
		{
			switch (__LIB_31__::func_154(iLocal_26))
			{
				case 1:
					__LIB_0__::func_181(85, 1);
					break;
				case 2:
					__LIB_0__::func_181(84, 1);
					break;
				case 3:
					__LIB_0__::func_181(86, 1);
					break;
				case 4:
					__LIB_0__::func_181(87, 1);
					break;
				}
		}
		iLocal_25 = 0;
		iLocal_26 = iVar0;
	}
	switch (__LIB_31__::func_154(iVar0))
	{
		case 1:
			__LIB_0__::func_181(77, 1);
			break;
		case 2:
			__LIB_0__::func_181(76, 1);
			break;
		case 3:
			__LIB_0__::func_181(79, 1);
			break;
		case 4:
			__LIB_0__::func_181(80, 1);
			break;
		case 0:
			break;
	}
	__LIB_0__::func_181(78, 1);
	iLocal_25++;
}

void func_41()//Position - 0x1836
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	func_68();
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_58896[iVar0 /*7*/])
		{
			if (Global_58896[iVar0 /*7*/].f_2)
			{
				iVar1 = 0;
				if (!Global_58896[iVar0 /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_58896[iVar0 /*7*/].f_3, &iVar1, -1);
				}
				else
				{
					fVar2 = 0f;
					STATS::STAT_GET_FLOAT(Global_58896[iVar0 /*7*/].f_3, &fVar2, -1);
					iVar3 = SYSTEM::FLOOR(fVar2);
					if (Global_58896[iVar0 /*7*/].f_5 < iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = Global_58896[iVar0 /*7*/].f_5;
					}
				}
				Global_58896[iVar0 /*7*/].f_6 = (iVar1 - Global_58896[iVar0 /*7*/].f_5);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_55453[iVar0 /*36*/].f_8)
		{
			if (!Global_55453[iVar0 /*36*/].f_10 == 0f)
			{
				Global_55453[iVar0 /*36*/].f_11 = Global_55453[iVar0 /*36*/].f_10;
			}
		}
		if ((iVar0 % 40) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!Global_55453[iVar0 /*36*/].f_8)
		{
			fVar5 = 0f;
			if (Global_55453[iVar0 /*36*/].f_10 != 0f)
			{
				fVar5 = (fVar5 + (((0.02f * Global_55453[iVar0 /*36*/].f_9) * Global_55453[iVar0 /*36*/].f_10) - Global_55453[iVar0 /*36*/].f_9));
			}
			fVar5 = (fVar5 + ((MISC::GET_RANDOM_FLOAT_IN_RANGE(-Global_58608[iVar4 /*7*/].f_6, Global_58608[iVar4 /*7*/].f_6) * 0.1f) * Global_55453[iVar0 /*36*/].f_9));
			Global_58608[iVar4 /*7*/] = (Global_58608[iVar4 /*7*/] * 0.995f);
			if (fVar5 < 0f)
			{
				fVar5 = (fVar5 * Global_58608[iVar4 /*7*/].f_2);
			}
			else if (fVar5 > 0f)
			{
				fVar5 = (fVar5 * Global_58608[iVar4 /*7*/].f_1);
			}
			fVar5 = __LIB_0__::func_301(fVar5, -Global_58608[iVar4 /*7*/].f_5, Global_58608[iVar4 /*7*/].f_5);
			iVar6 = 61;
			if (((iVar0 == iVar6 && __LIB_0__::func_176(44)) && !__LIB_0__::func_176(64)) && fVar5 > 0f)
			{
				Global_55453[iVar0 /*36*/].f_9 = (Global_55453[iVar0 /*36*/].f_9 - fVar5);
			}
			else
			{
				if (fVar5 > 0f)
				{
					fVar7 = func_43(iVar0);
					fVar5 = (fVar5 * fVar7);
				}
				Global_55453[iVar0 /*36*/].f_9 = (Global_55453[iVar0 /*36*/].f_9 + fVar5);
			}
			if (Global_55453[iVar0 /*36*/].f_9 > Global_58608[iVar4 /*7*/].f_3)
			{
				fVar8 = (Global_55453[iVar0 /*36*/].f_9 - Global_58608[iVar4 /*7*/].f_3);
				fVar8 = (fVar8 * 0.5f);
				Global_55453[iVar0 /*36*/].f_9 = (Global_55453[iVar0 /*36*/].f_9 - fVar8);
			}
			else if (Global_55453[iVar0 /*36*/].f_9 < Global_58608[iVar4 /*7*/].f_4)
			{
				fVar9 = (Global_58608[iVar4 /*7*/].f_4 - Global_55453[iVar0 /*36*/].f_9);
				fVar9 = (fVar9 * 0.5f);
				Global_55453[iVar0 /*36*/].f_9 = (Global_55453[iVar0 /*36*/].f_9 + fVar9);
			}
			Global_58608[iVar4 /*7*/] = (Global_58608[iVar4 /*7*/] - (((fVar5 * 0.66f) + (Global_58608[iVar4 /*7*/] * 0.33f)) * 0.02f));
			if (!Global_55453[iVar0 /*36*/].f_9 > 0f)
			{
				Global_55453[iVar0 /*36*/].f_9 = (-1f * Global_55453[iVar0 /*36*/].f_9);
				Global_55453[iVar0 /*36*/].f_9 = (Global_55453[iVar0 /*36*/].f_9 + 0.02f);
			}
		}
		if ((iVar0 % 20) == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
		iVar0++;
	}
	func_42();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		if (!Global_58896[iVar0 /*7*/])
		{
			if (Global_58896[iVar0 /*7*/].f_2)
			{
				Global_58896[iVar0 /*7*/].f_5 = (Global_58896[iVar0 /*7*/].f_5 + Global_58896[iVar0 /*7*/].f_6);
			}
		}
		iVar0++;
	}
}

void func_42()//Position - 0x1BF5
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (!Global_55453[iVar1 /*36*/].f_8)
		{
			if (iVar0 < 42)
			{
				Global_113386.f_20564.f_103[iVar0] = Global_55453[iVar1 /*36*/].f_9;
				if (Global_55453[iVar1 /*36*/].f_31 > Global_113386.f_20564.f_146[iVar0])
				{
					Global_113386.f_20564.f_146[iVar0] = Global_55453[iVar1 /*36*/].f_31;
				}
				if (Global_113386.f_20564.f_189[iVar0] == 0f)
				{
					Global_113386.f_20564.f_189[iVar0] = Global_55453[iVar1 /*36*/].f_32;
				}
				else if (Global_55453[iVar1 /*36*/].f_32 < Global_113386.f_20564.f_189[iVar0])
				{
					Global_113386.f_20564.f_189[iVar0] = Global_55453[iVar1 /*36*/].f_32;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

float func_43(int iParam0)//Position - 0x1CD1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	if (Global_55453[iParam0 /*36*/].f_8)
	{
		return 1f;
	}
	iVar0 = __LIB_11__::func_495(0, iParam0);
	iVar1 = __LIB_11__::func_495(1, iParam0);
	iVar2 = __LIB_11__::func_495(2, iParam0);
	if (((iVar0 + iVar1) + iVar2) < 1)
	{
		return 1f;
	}
	iVar3 = 1000000000;
	iVar4 = ((Global_60328[0] + Global_60328[1]) + Global_60328[2]);
	if (Global_60328[0] > iVar3)
	{
		return 0f;
	}
	if (Global_60328[1] > iVar3)
	{
		return 0f;
	}
	if (Global_60328[2] > iVar3)
	{
		return 0f;
	}
	fVar5 = 0f;
	iVar6 = 0;
	while (iVar6 < 10)
	{
		iVar7 = __LIB_11__::func_495(0, iVar6);
		if (iVar7 > 0)
		{
			fVar5 = (fVar5 + (__LIB_38__::func_112(__LIB_11__::func_496(0, iVar6)) * IntToFloat(iVar7)));
		}
		if (__LIB_11__::func_495(1, iVar6) > 0)
		{
			fVar5 = (fVar5 + (__LIB_38__::func_112(__LIB_11__::func_496(1, iVar6)) * IntToFloat(iVar7)));
		}
		if (__LIB_11__::func_495(2, iVar6) > 0)
		{
			fVar5 = (fVar5 + (__LIB_38__::func_112(__LIB_11__::func_496(2, iVar6)) * IntToFloat(iVar7)));
		}
		iVar6++;
	}
	iVar8 = (SYSTEM::FLOOR(fVar5) + iVar4);
	iVar9 = 700000000;
	if (iVar8 > iVar3)
	{
		return 0f;
	}
	if (iVar8 < iVar9)
	{
		return 1f;
	}
	fVar10 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
	fVar11 = SYSTEM::TO_FLOAT((iVar3 - iVar9));
	if (!fVar11 > 0f)
	{
		return 1f;
	}
	return (1f - (fVar10 / fVar11));
}

void func_47()//Position - 0x1EE1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		if (iVar0 == 0)
		{
			__LIB_0__::func_181(75, 1);
		}
		iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
			if (iVar2 != 0)
			{
				if (func_58(iVar2))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
					func_56(iVar3);
				}
			}
		}
		SYSTEM::WAIT(0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar4 = WEAPON::GET_SELECTED_PED_WEAPON(iVar1);
			func_54(iVar4);
			switch (iVar4)
			{
				case joaat("WEAPON_MOLOTOV"):
				case joaat("WEAPON_PETROLCAN"):
					switch (__LIB_18__::func_173())
					{
						case 0:
							__LIB_0__::func_181(147, 1);
							break;
						case 1:
							__LIB_0__::func_181(148, 1);
							break;
						case 2:
							__LIB_0__::func_181(149, 1);
							break;
					}
					break;
				}
			}
	}
}

void func_54(int iParam0)//Position - 0x2146
{
	int iVar0;
	iVar0 = __LIB_31__::func_155(iParam0);
	switch (iVar0)
	{
		case 0:
			__LIB_0__::func_181(51, 1);
			break;
		case 1:
			__LIB_0__::func_181(52, 1);
			break;
		case 2:
			__LIB_0__::func_181(53, 1);
			break;
	}
}

void func_56(int iParam0)//Position - 0x2249
{
	switch (__LIB_12__::func_266(iParam0))
	{
		case 0:
			__LIB_0__::func_181(39, 1);
			break;
		case 1:
			__LIB_0__::func_181(35, 1);
			break;
		case 2:
			__LIB_0__::func_181(32, 1);
			break;
		case 3:
			__LIB_0__::func_181(38, 1);
			break;
		case 4:
			__LIB_0__::func_181(31, 1);
			break;
		case 5:
			__LIB_0__::func_181(33, 1);
			break;
		case 6:
			__LIB_0__::func_181(36, 1);
			break;
		case 7:
			__LIB_0__::func_181(37, 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			__LIB_0__::func_181(34, 1);
			break;
	}
}

int func_58(int iParam0)//Position - 0x246D
{
	var uVar0;
	if (Global_78319)
	{
		return VEHICLE::IS_VEHICLE_STOLEN(iParam0);
	}
	if (func_61(iParam0, &uVar0))
	{
		return 0;
	}
	if (__LIB_0__::func_117(iParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_108(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0, var uParam1)//Position - 0x2566
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (Global_77137.f_484[iVar0] == iParam0)
		{
			if (__LIB_12__::func_98(&(Global_77137.f_555[0 /*21*/]), iVar0))
			{
				if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10) && Global_77137.f_555[0 /*21*/].f_4 == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					*uParam1 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_67()//Position - 0x405E
{
	if (iLocal_21 == -15)
	{
		return 0;
	}
	if (func_34(iLocal_21))
	{
		if (func_31(&iLocal_21, 1, 8))
		{
			return 0;
		}
		__LIB_39__::func_430(&iLocal_21, 0, iLocal_22, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_68()//Position - 0x409D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (Global_60333)
	{
		Global_60333 = 0;
		switch (__LIB_12__::func_266(Global_60334))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				__LIB_0__::func_181(29, 1);
				break;
			case 4:
			case 5:
			case 6:
			case 7:
				__LIB_0__::func_181(30, 1);
				break;
			}
	}
	iVar0 = 0;
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar2 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar2)
		{
			case 142:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				func_78(iVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							func_74(iVar1);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							if (func_73(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1)))
							{
								__LIB_0__::func_181(3, 1);
							}
							func_72(ENTITY::GET_ENTITY_MODEL(iVar1));
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							switch (ENTITY::GET_ENTITY_MODEL(iVar1))
							{
								case joaat("prop_news_disp_01a"):
								case joaat("prop_news_disp_02a"):
								case joaat("prop_news_disp_02a_s"):
								case joaat("prop_news_disp_02b"):
								case joaat("prop_news_disp_02c"):
								case joaat("prop_news_disp_02d"):
								case joaat("prop_news_disp_02e"):
								case joaat("prop_news_disp_03a"):
								case joaat("prop_news_disp_03c"):
								case joaat("prop_news_disp_05a"):
								case -1389481633:
								case 1301918910:
								case joaat("prop_news_disp_06a"):
								case -1406224059:
									__LIB_0__::func_181(68, 1);
									break;
								case -959573699:
								case joaat("prop_postbox_01a"):
								case 1147034058:
								case 1444740423:
								case joaat("prop_postbox_ss_01a"):
									__LIB_0__::func_181(128, 1);
									break;
								}
							}
						}
				}
				break;
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				func_78(iVar1);
				bVar4 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							bVar4 = false;
						}
					}
					else
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (__LIB_18__::func_173() == 0 && iVar3 != PLAYER::PLAYER_PED_ID())
							{
								if (ENTITY::IS_ENTITY_DEAD(iVar1, false) || IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) < (0.5f * IntToFloat(PED::GET_PED_MAX_HEALTH(iVar3))))
								{
									if (ENTITY::IS_ENTITY_A_PED(iVar1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											__LIB_35__::func_267(3);
										}
									}
								}
							}
							__LIB_0__::func_181(111, 1);
							__LIB_0__::func_181(124, 1);
							if (FIRE::IS_ENTITY_ON_FIRE(iVar1))
							{
								__LIB_0__::func_181(130, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_69(ENTITY::GET_ENTITY_MODEL(iVar1));
							__LIB_0__::func_181(111, 1);
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
						{
							__LIB_0__::func_181(111, 1);
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_69(int iParam0)//Position - 0x435E
{
	switch (__LIB_12__::func_266(iParam0))
	{
		case 0:
			__LIB_0__::func_181(47, 1);
			break;
		case 1:
			__LIB_0__::func_181(43, 1);
			break;
		case 2:
			__LIB_0__::func_181(41, 1);
			break;
		case 3:
			__LIB_0__::func_181(46, 1);
			break;
		case 4:
			__LIB_0__::func_181(40, 1);
			break;
		case 5:
			__LIB_0__::func_181(42, 1);
			break;
		case 6:
			__LIB_0__::func_181(44, 1);
			break;
		case 7:
			__LIB_0__::func_181(45, 1);
			break;
	}
}

void func_72(int iParam0)//Position - 0x44F3
{
	switch (__LIB_12__::func_266(iParam0))
	{
		case 0:
			__LIB_0__::func_181(11, 1);
			break;
		case 1:
			__LIB_0__::func_181(6, 1);
			break;
		case 2:
			__LIB_0__::func_181(1, 1);
			break;
		case 3:
			__LIB_0__::func_181(10, 1);
			break;
		case 4:
			__LIB_0__::func_181(0, 1);
			break;
		case 5:
			__LIB_0__::func_181(2, 1);
			break;
		case 6:
			__LIB_0__::func_181(8, 1);
			break;
		case 7:
			__LIB_0__::func_181(9, 1);
			break;
	}
	if (iParam0 == joaat("taxi"))
	{
		__LIB_0__::func_181(100, 1);
	}
	__LIB_0__::func_181(111, 1);
}

int func_73(int iParam0)//Position - 0x459A
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 3) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 4) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 11) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 12) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 13) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 14) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 15) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 16) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 23) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 24) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 2) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 8) != -1)
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) != -1)
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 18))
		{
			return 1;
		}
		if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 22))
		{
			return 1;
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_74(int iParam0)//Position - 0x4701
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
	{
		iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			func_77(iVar2, PED::GET_PED_TYPE(iVar0));
		}
		else
		{
			iVar3 = PED::GET_PED_CAUSE_OF_DEATH(iVar0);
			iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
			func_76(iVar3, PED::GET_PED_TYPE(iVar0), iVar4);
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		__LIB_0__::func_181(129, 1);
	}
	if (!func_75(iParam0))
	{
		return;
	}
	__LIB_0__::func_181(111, 1);
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = (iVar5 - iLocal_23);
	iLocal_23 = iVar5;
	if (iVar6 > 2000)
	{
		iLocal_24 = 0;
	}
	else
	{
		iLocal_24++;
		if (iLocal_24 == 3)
		{
			__LIB_0__::func_181(127, 1);
		}
	}
}

int func_75(int iParam0)//Position - 0x47B6
{
	int iVar0;
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	if (__LIB_0__::func_346(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) == iVar0)
	{
		return 1;
	}
	return 0;
}

void func_76(int iParam0, int iParam1, int iParam2)//Position - 0x47EE
{
	int iVar0;
	iVar0 = __LIB_31__::func_155(iParam0);
	if (iVar0 == 0)
	{
		__LIB_0__::func_181(108, 1);
	}
	switch (iParam1)
	{
		case 4:
		case 5:
			switch (iVar0)
			{
				case 0:
					__LIB_0__::func_181(63, 1);
					break;
				case 1:
					__LIB_0__::func_181(64, 1);
					break;
				case 2:
					__LIB_0__::func_181(65, 1);
					break;
			}
			break;
		case 22:
			switch (iVar0)
			{
				case 0:
					__LIB_0__::func_181(57, 1);
					break;
				case 1:
					__LIB_0__::func_181(58, 1);
					break;
				case 2:
					__LIB_0__::func_181(59, 1);
					break;
			}
			break;
		case 27:
		case 6:
			switch (iVar0)
			{
				case 0:
					__LIB_0__::func_181(54, 1);
					break;
				case 1:
					__LIB_0__::func_181(55, 1);
					break;
				case 2:
					__LIB_0__::func_181(56, 1);
					break;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("S_F_Y_Hooker_01"):
			__LIB_0__::func_181(121, 1);
			break;
		case joaat("A_F_M_BodyBuild_01"):
		case joaat("A_M_M_Beach_02"):
		case joaat("A_M_Y_MusclBeac_02"):
		case joaat("A_M_Y_Runner_01"):
		case joaat("A_M_Y_RoadCyc_01"):
		case joaat("A_M_Y_Skater_01"):
		case joaat("A_M_Y_Skater_02"):
		case joaat("A_M_Y_Sunbathe_01"):
		case joaat("A_M_Y_Surfer_01"):
		case joaat("A_M_Y_Yoga_01"):
		case joaat("S_M_Y_BayWatch_01"):
		case joaat("S_M_Y_Marine_02"):
			__LIB_0__::func_181(69, 1);
			break;
		case joaat("S_M_Y_Dealer_01"):
			__LIB_0__::func_181(125, 1);
			break;
	}
}

void func_77(int iParam0, int iParam1)//Position - 0x4957
{
	__LIB_0__::func_181(48, 1);
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			__LIB_0__::func_181(4, 1);
			break;
		case joaat("tanker"):
			__LIB_0__::func_181(5, 1);
			__LIB_0__::func_181(7, 1);
			__LIB_0__::func_181(91, 1);
			break;
		case joaat("packer"):
			__LIB_0__::func_181(7, 1);
			break;
		case joaat("phantom"):
			__LIB_0__::func_181(5, 1);
			break;
	}
	switch (__LIB_12__::func_266(iParam0))
	{
		case 0:
			__LIB_0__::func_181(109, 1);
			break;
		case 1:
			__LIB_0__::func_181(104, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					__LIB_0__::func_181(60, 1);
					break;
			}
			break;
		case 2:
			__LIB_0__::func_181(102, 1);
			break;
		case 3:
			__LIB_0__::func_181(107, 1);
			break;
		case 4:
			__LIB_0__::func_181(101, 1);
			break;
		case 5:
			__LIB_0__::func_181(103, 1);
			break;
		case 6:
			__LIB_0__::func_181(105, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					__LIB_0__::func_181(61, 1);
					break;
			}
			break;
		case 7:
			__LIB_0__::func_181(106, 1);
			switch (iParam1)
			{
				case 4:
				case 5:
					__LIB_0__::func_181(62, 1);
					break;
			}
			break;
	}
}

void func_78(int iParam0)//Position - 0x4A9E
{
	ENTITY::DOES_ENTITY_EXIST(iParam0);
	ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_80()//Position - 0x4AC3
{
	int iVar0;
	int iVar1;
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		iLocal_29 = 0;
		return;
	}
	if (__LIB_0__::func_293(PLAYER::GET_PLAYER_INDEX(), -1))
	{
		iLocal_29 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false);
		if (iLocal_29 != iVar0)
		{
			Local_27 = { Local_28 };
			iLocal_29 = iVar0;
		}
		if (iVar0 == 0)
		{
			return;
		}
		Local_27 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		if (iLocal_29 == 0)
		{
			Local_28 = { Local_27 };
			iLocal_29 = iVar0;
			return;
		}
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_81(iVar1, MISC::GET_DISTANCE_BETWEEN_COORDS(Local_27, Local_28, false)))
		{
			Local_28 = { Local_27 };
		}
	}
}

int func_81(int iParam0, float fParam1)//Position - 0x4B70
{
	if (fParam1 < 10f)
	{
		return 0;
	}
	switch (__LIB_12__::func_266(iParam0))
	{
		case 0:
			__LIB_0__::func_181(28, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 1:
			__LIB_0__::func_181(24, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 2:
			__LIB_0__::func_181(21, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 3:
			__LIB_0__::func_181(27, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 4:
			__LIB_0__::func_181(20, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 5:
			__LIB_0__::func_181(22, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 6:
			__LIB_0__::func_181(25, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case 7:
			__LIB_0__::func_181(26, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
	}
	switch (iParam0)
	{
		case joaat("coach"):
		case joaat("taxi"):
			__LIB_0__::func_181(23, SYSTEM::FLOOR((fParam1 / 10f)));
			break;
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike2"):
		case joaat("fixter"):
		case joaat("tribike"):
		case joaat("cruiser"):
			switch (__LIB_18__::func_173())
			{
				case 0:
					__LIB_0__::func_181(141, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				case 1:
					__LIB_0__::func_181(142, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
				case 2:
					__LIB_0__::func_181(143, SYSTEM::FLOOR((fParam1 / 10f)));
					break;
			}
			break;
	}
	return 1;
}

void func_84()//Position - 0x4DC1
{
	__LIB_37__::func_610(0);
	__LIB_37__::func_610(1);
	__LIB_37__::func_610(2);
}

void func_87()//Position - 0x4F15
{
	int iVar0;
	int iVar1;
	iVar1 = Global_60615;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_60618[iVar0 /*14*/].f_13 > 0)
		{
			Global_60618[iVar0 /*14*/].f_13 = (Global_60618[iVar0 /*14*/].f_13 - 1);
		}
		else if (func_89(iVar0))
		{
			func_88(&(Global_60618[iVar0 /*14*/]), -1);
			Global_60618[iVar0 /*14*/].f_13 = 60000;
		}
		SYSTEM::WAIT(0);
		func_68();
		iVar0++;
	}
}

int func_88(var uParam0, int iParam1)//Position - 0x4F85
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	iVar0 = *uParam0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_63000[iVar0 /*34*/][iVar1 /*11*/].f_9 == uParam0->f_9)
		{
			uParam0->f_10 = (uParam0->f_10 + 0.05f);
			return 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	fVar2 = 0f;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_63000[iVar0 /*34*/][iVar1 /*11*/].f_10 > fVar2)
		{
			iVar3 = iVar1;
			fVar2 = Global_63000[iVar0 /*34*/][iVar1 /*11*/].f_10;
		}
		iVar1++;
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	if (uParam0->f_10 <= Global_63000[iVar0 /*34*/][iVar3 /*11*/].f_10)
	{
		uParam0->f_10 = (uParam0->f_10 + 1f);
		Global_63000[iVar0 /*34*/][iVar3 /*11*/].f_10 = uParam0->f_10;
		Global_63000[iVar0 /*34*/][iVar3 /*11*/].f_1 = { uParam0->f_1 };
		Global_63000[iVar0 /*34*/][iVar3 /*11*/].f_5 = { uParam0->f_5 };
		Global_63000[iVar0 /*34*/][iVar3 /*11*/].f_9 = uParam0->f_9;
		Global_63000[iVar0 /*34*/][iVar3 /*11*/] = *uParam0;
		return 1;
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x50A0
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	iVar0 = Global_60618[iParam0 /*14*/].f_12;
	fVar1 = Global_55453[iVar0 /*36*/].f_9;
	iVar2 = Global_55453[iVar0 /*36*/].f_13;
	while (iVar2 > 15)
	{
		iVar2 = (iVar2 - 16);
	}
	iVar3 = (iVar2 - 10);
	while (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	fVar4 = Global_55453[iVar0 /*36*/].f_14[iVar3];
	Global_55453[iVar0 /*36*/].f_14[Global_55453[iVar0 /*36*/].f_13] = __LIB_38__::func_112(iVar0);
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = iVar3 + 1;
	if (iVar8 == 16)
	{
		iVar8 = 0;
	}
	iVar9 = 0;
	iVar10 = iVar8;
	iVar11 = 0;
	iVar12 = 0;
	iVar9 = 0;
	while (iVar9 < 8)
	{
		iVar11 = iVar10 + 1;
		if (iVar11 == 16)
		{
			iVar11 = 0;
		}
		iVar12 = iVar11 + 1;
		if (iVar12 == 16)
		{
			iVar12 = 0;
		}
		if (Global_55453[iVar0 /*36*/].f_14[iVar10] < Global_55453[iVar0 /*36*/].f_14[iVar11])
		{
			iVar6++;
			fVar13 = (fVar13 + (Global_55453[iVar0 /*36*/].f_14[iVar11] - Global_55453[iVar0 /*36*/].f_14[iVar10]));
		}
		else
		{
			iVar7++;
			fVar14 = (fVar14 + (Global_55453[iVar0 /*36*/].f_14[iVar10] - Global_55453[iVar0 /*36*/].f_14[iVar11]));
		}
		if (Global_55453[iVar0 /*36*/].f_14[iVar10] < Global_55453[iVar0 /*36*/].f_14[iVar11] && Global_55453[iVar0 /*36*/].f_14[iVar12] < Global_55453[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		if (Global_55453[iVar0 /*36*/].f_14[iVar10] > Global_55453[iVar0 /*36*/].f_14[iVar11] && Global_55453[iVar0 /*36*/].f_14[iVar12] > Global_55453[iVar0 /*36*/].f_14[iVar11])
		{
			iVar5++;
		}
		iVar10++;
		if (iVar10 == 16)
		{
			iVar10 = 0;
		}
		iVar9++;
	}
	if (iVar6 < 0)
	{
		fVar13 = (fVar13 / IntToFloat(iVar6));
	}
	if (iVar7 > 0)
	{
		fVar14 = (fVar14 / IntToFloat(iVar7));
	}
	fVar15 = (fVar1 - fVar4);
	if (fVar15 < 0f)
	{
		fVar15 = (fVar15 * -1f);
	}
	switch (Global_60618[iParam0 /*14*/].f_11)
	{
		case 0:
			if (iVar6 < 6)
			{
				return 0;
			}
			if (fVar13 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		case 1:
			if (iVar7 < 6)
			{
				return 0;
			}
			if (fVar14 < (fVar4 * 0.04f))
			{
				return 0;
			}
			return 1;
			break;
		case 2:
			if (iVar5 < 7)
			{
				return 0;
			}
			if (fVar15 > (fVar4 * 0.01f))
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

void func_91()//Position - 0x55B4
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
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
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 80)
	{
		if (iVar0 < 42)
		{
			if (!Global_55453[iVar1 /*36*/].f_8)
			{
				if (Global_113386.f_20564.f_103[iVar0] > 0f)
				{
					Global_55453[iVar1 /*36*/].f_9 = Global_113386.f_20564.f_103[iVar0];
				}
				if (Global_113386.f_20564.f_146[iVar0] > 0f)
				{
					Global_55453[iVar1 /*36*/].f_31 = Global_113386.f_20564.f_146[iVar0];
				}
				if (Global_113386.f_20564.f_189[iVar0] > 0f)
				{
					Global_55453[iVar1 /*36*/].f_32 = Global_113386.f_20564.f_189[iVar0];
				}
				iVar0++;
			}
			if ((Global_55453[iVar1 /*36*/].f_32 > 0f && Global_55453[iVar1 /*36*/].f_31 > 0f) && Global_55453[iVar1 /*36*/].f_9 > 0f)
			{
				fVar2 = Global_55453[iVar1 /*36*/].f_9;
				if (fVar2 > Global_55453[iVar1 /*36*/].f_31)
				{
					Global_55453[iVar1 /*36*/].f_31 = fVar2;
				}
				if (fVar2 < Global_55453[iVar1 /*36*/].f_32)
				{
					Global_55453[iVar1 /*36*/].f_32 = fVar2;
				}
				iVar3 = 0;
				fVar4 = (Global_55453[iVar1 /*36*/].f_31 - Global_55453[iVar1 /*36*/].f_32);
				fVar5 = 0f;
				fVar10 = 2.1474836E+09f;
				fVar11 = -2.1474836E+09f;
				iVar3 = 15;
				while (iVar3 >= 0)
				{
					fVar6 = ((fVar4 * MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f)) * 0.01f);
					fVar8 = 1f;
					fVar9 = 1f;
					if (iVar3 == 15)
					{
						fVar12 = ((Global_55453[iVar1 /*36*/].f_31 - Global_55453[iVar1 /*36*/].f_9) / fVar4);
						if (fVar12 < 0.2f)
						{
							fVar8 = (fVar12 / 0.2f);
						}
						fVar13 = ((Global_55453[iVar1 /*36*/].f_9 - Global_55453[iVar1 /*36*/].f_32) / fVar4);
						if (fVar13 < 0.2f)
						{
							fVar9 = (fVar13 / 0.2f);
						}
						fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_55453[iVar1 /*36*/].f_14[iVar3] = Global_55453[iVar1 /*36*/].f_9;
					}
					else
					{
						fVar14 = ((Global_55453[iVar1 /*36*/].f_31 - Global_55453[iVar1 /*36*/].f_14[iVar3 + 1]) / fVar4);
						if (fVar14 < 0.2f)
						{
							fVar8 = (fVar14 / 0.2f);
						}
						fVar15 = ((Global_55453[iVar1 /*36*/].f_14[iVar3 + 1] - Global_55453[iVar1 /*36*/].f_32) / fVar4);
						if (fVar15 < 0.2f)
						{
							fVar9 = (fVar15 / 0.2f);
						}
						fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE((-fVar6 * fVar9), (fVar6 * fVar8));
						Global_55453[iVar1 /*36*/].f_14[iVar3] = (Global_55453[iVar1 /*36*/].f_14[iVar3 + 1] + fVar7);
					}
					fVar10 = __LIB_1__::func_283(fVar10, Global_55453[iVar1 /*36*/].f_14[iVar3]);
					fVar11 = __LIB_2__::func_320(fVar11, Global_55453[iVar1 /*36*/].f_14[iVar3]);
					fVar5 = (fVar5 + Global_55453[iVar1 /*36*/].f_14[iVar3]);
					iVar3 = (iVar3 + -1);
				}
				Global_55453[iVar1 /*36*/].f_32 = fVar10;
				Global_55453[iVar1 /*36*/].f_31 = fVar11;
				fVar5 = (fVar5 / 16f);
				Global_55453[iVar1 /*36*/].f_33 = (Global_55453[iVar1 /*36*/].f_9 - fVar5);
				Global_55453[iVar1 /*36*/].f_34 = ((Global_55453[iVar1 /*36*/].f_33 / fVar5) * 100f);
				fVar16 = __LIB_32__::func_720(iVar1);
				if (fVar16 != 1f)
				{
					fVar5 = 0f;
					fVar17 = (fVar16 - 1f);
					iVar3 = 0;
					while (iVar3 <= 15)
					{
						fVar18 = (SYSTEM::TO_FLOAT(iVar3) / 16f);
						Global_55453[iVar1 /*36*/].f_14[iVar3] = (Global_55453[iVar1 /*36*/].f_14[iVar3] * (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.95f, 1.05f) + (fVar18 * fVar17)));
						if (iVar3 == 15)
						{
							Global_55453[iVar1 /*36*/].f_14[iVar3] = (Global_55453[iVar1 /*36*/].f_9 * fVar16);
						}
						fVar5 = (fVar5 + Global_55453[iVar1 /*36*/].f_14[iVar3]);
						Global_55453[iVar1 /*36*/].f_32 = __LIB_1__::func_283(Global_55453[iVar1 /*36*/].f_32, Global_55453[iVar1 /*36*/].f_14[iVar3]);
						Global_55453[iVar1 /*36*/].f_31 = __LIB_2__::func_320(Global_55453[iVar1 /*36*/].f_31, Global_55453[iVar1 /*36*/].f_14[iVar3]);
						iVar3++;
					}
					fVar5 = (fVar5 / 16f);
					Global_55453[iVar1 /*36*/].f_33 = (Global_55453[iVar1 /*36*/].f_9 - fVar5);
					Global_55453[iVar1 /*36*/].f_34 = ((Global_55453[iVar1 /*36*/].f_33 / fVar5) * 100f);
				}
			}
		}
		iVar1++;
	}
}

void func_94()//Position - 0x5A1F
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (!Global_113386.f_20564.f_101)
	{
		iVar0 = 0;
		while (iVar0 < 80)
		{
			if (!Global_55453[iVar0 /*36*/].f_8)
			{
				Global_55453[iVar0 /*36*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 290f);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			func_28(1);
			iVar0 = 0;
			while (iVar0 < 80)
			{
				fVar2 = 0.85f;
				fVar3 = 1.15f;
				if (Global_55453[iVar0 /*36*/].f_9 < 5f)
				{
					fVar2 = 1.1f;
				}
				else if (Global_55453[iVar0 /*36*/].f_9 < 10f)
				{
					fVar2 = 0.95f;
				}
				else if (Global_55453[iVar0 /*36*/].f_9 > 285f)
				{
					fVar3 = 0.97f;
				}
				else if (Global_55453[iVar0 /*36*/].f_9 > 270f)
				{
					fVar3 = 1.05f;
				}
				Global_55453[iVar0 /*36*/].f_9 = (Global_55453[iVar0 /*36*/].f_9 * MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar2, fVar3));
				Global_55453[iVar0 /*36*/].f_9 = __LIB_1__::func_283(__LIB_2__::func_320(MISC::ABSF(Global_55453[iVar0 /*36*/].f_9), 3.5f), 290f);
				iVar0++;
			}
			iVar1++;
		}
		func_42();
		Global_113386.f_20564.f_101 = 1;
	}
}

void func_95()//Position - 0x5B64
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_60615 = 0;
	Global_60617 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			StringCopy(&(Global_63000[iVar0 /*34*/][iVar1 /*11*/].f_1), "BSNEWS_DEFAULT" /* GXT: BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME */, 16);
			StringCopy(&(Global_63000[iVar0 /*34*/][iVar1 /*11*/].f_5), "BSNEWS_DEFAULT" /* GXT: BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME */, 16);
			iVar1++;
		}
		iVar0++;
	}
	func_96(55, "ECL_P_SR_H" /* GXT: World gulping eCola in record volume, stocks up. */, "ECL_P_SR_C", 0, 0);
	func_96(55, "ECL_P_SF_H" /* GXT: Ecola 'sugar water' losing favour among investors. */, "ECL_P_SF_C", 1, 0);
	func_96(55, "ECL_P_RF_H" /* GXT: eCola stocks all over the place, sticky */, "ECL_P_RF_C", 2, 0);
	func_96(51, "BGR_P_SR_H" /* GXT: Burgershot stocks shoot up like cholesterol. */, "BGR_P_SR_C", 0, 0);
	func_96(51, "BGR_P_SF_H" /* GXT: Burgershot junk food stocks down. */, "BGR_P_SF_C", 1, 0);
	func_96(52, "CLK_P_SR_H" /* GXT: Cluckin' Bell stocks up on "Free Range is for Fairies" campaign. */, "CLK_P_SR_C", 0, 0);
	func_96(52, "CLK_P_SF_H" /* GXT: Cluckin' Bell chicken cruelty video brings stocks down. */, "CLK_P_SF_C", 1, 0);
	func_96(52, "CLK_P_RF_H" /* GXT: Investors don't know what to do with Cluckin' Bell fast food stocks. */, "CLK_P_RF_C", 2, 0);
	func_96(48, "BEN_P_SR_H" /* GXT: Bean Machine uses tax loopholes to win big.  Stocks rise. */, "BEN_P_SR_C", 0, 0);
	func_96(48, "BEN_P_SF_H" /* GXT: Fair trade coffee killing Bean Machine profits.  Stocks down. */, "BEN_P_SF_C", 1, 0);
	func_96(48, "BEN_P_RF_H" /* GXT: Coffee giant Bean Machine sees stocks moody, edgy. */, "BEN_P_RF_C", 2, 0);
	func_96(13, "FLC_P_SR_H" /* GXT: Credit card fees rack up huge profits says Fleeca. */, "FLC_P_SR_C", 0, 0);
	func_96(13, "FLC_P_SF_H" /* GXT: Cash is king - under the table deals killing Fleeca stock. */, "FLC_P_SF_C", 1, 0);
	func_96(13, "FLC_P_RF_H" /* GXT: Fleeca stock unsteady as market flails aimlessly. */, "FLC_P_RF_C", 2, 0);
	func_96(64, "PRO_P_SR_H" /* GXT: Prolaps shares up despite Bangladesh factory fire. */, "PRO_P_SR_C", 0, 0);
	func_96(64, "PRO_P_SF_H" /* GXT: Prolaps shares down as America goes more hipster. */, "PRO_P_SF_C", 1, 0);
	func_96(64, "PRO_P_RF_H" /* GXT: Prolaps unsteady after football player rampage. */, "PRO_P_RF_C", 2, 0);
	func_96(70, "UNI_P_SR_H" /* GXT: Vanilla Unicorn Strip Clubs are packed, stocks are up. */, "UNI_P_SR_C", 0, 0);
	func_96(70, "UNI_P_SF_H" /* GXT: Vanilla Unicorn strippers cry as stocks drop. */, "UNI_P_SF_C", 1, 0);
	func_96(70, "UNI_P_RF_H" /* GXT: Vanilla Unicorn Strip club stocks and clientele unpredictable. */, "UNI_P_RF_C", 2, 0);
	func_96(60, "KRP_P_SR_H" /* GXT: Krapea CEO announces new tax avoidance plan.  Stocks up. */, "KRP_P_SR_C", 0, 0);
	func_96(60, "KRP_P_SF_H" /* GXT: Krapea particle board furniture falling out of favour. */, "KRP_P_SF_C", 1, 0);
	func_96(60, "KRP_P_RF_H" /* GXT: Directions confusing for Krapea. */, "KRP_P_RF_C", 2, 0);
	func_96(56, "FUS_P_SR_H" /* GXT: No Strike! FlyUS stocks surge. */, "FUS_P_SR_C", 0, 0);
	func_96(56, "FUS_P_SF_H" /* GXT: Food poisoning on 154 FlyUS flights brings stock down. */, "FUS_P_SF_C", 1, 0);
	func_96(56, "FUS_P_RF_H" /* GXT: FlyUS stock hitting turbulence, bad headline. */, "FUS_P_RF_C", 2, 0);
	func_96(58, "GOP_P_SR_H" /* GXT: 60% of shipments contain drugs says Go Postal CEO - stocks rise. */, "GOP_P_SR_C", 0, 0);
	func_96(58, "GOP_P_SF_H" /* GXT: Go Postal going profitless. */, "GOP_P_SF_C", 1, 0);
	func_96(58, "GOP_P_RF_H" /* GXT: Go Postal stocks unsteady as America ships less. */, "GOP_P_RF_C", 2, 0);
	func_96(53, "BAN_P_SR_H" /* GXT: Snotty coffee house Cool Beans stocks surge. */, "BAN_P_SR_C", 0, 0);
	func_96(53, "BAN_P_SF_H" /* GXT: Prices cool off for Cool Beans. */, "BAN_P_SF_C", 1, 0);
	func_96(53, "BAN_P_RF_H" /* GXT: Cool Beans stocks up, then down, then up. */, "BAN_P_RF_C", 2, 0);
	func_96(62, "MAX_P_SR_H" /* GXT: Female insecurity sends Max Renda stocks up. */, "MAX_P_SR_C", 0, 0);
	func_96(62, "MAX_P_SF_H" /* GXT: Max Renda stocks runny. */, "MAX_P_SF_C", 1, 0);
	func_96(62, "MAX_P_RF_H" /* GXT: Max Renda stocks bipolar. */, "MAX_P_RF_C", 2, 0);
	func_96(57, "GAS_P_SR_H" /* GXT: Surgery soars price of Gastro Band stock. */, "GAS_P_SR_C", 0, 0);
	func_96(57, "GAS_P_SF_H" /* GXT: Another Gastro Band stock brings price down. */, "GAS_P_SF_C", 1, 0);
	func_96(57, "GAS_P_RF_H" /* GXT: Gastro Band stock - feast then famine. */, "GAS_P_RF_C", 2, 0);
	func_96(59, "GRU_P_SR_H" /* GXT: GruppeSechs not all it's cracked up to be. */, "GRU_P_SR_C", 0, 0);
	func_96(59, "GRU_P_SF_H" /* GXT: GruppeSechs down after heist. */, "GRU_P_SF_C", 1, 0);
	func_96(59, "GRU_P_RF_H" /* GXT: GruppeSechs unsteady if investors decide whether to join in. */, "GRU_P_RF_C", 2, 0);
	func_96(44, "PMP_P_SR_H" /* GXT: Pump and Run franchise sees stock rise as abs harden. */, "PMP_P_SR_C", 0, 0);
	func_96(44, "PMP_P_SF_H" /* GXT: Americans not going to gym. Prefer binge eating. Pump and Run shares drop. */, "PMP_P_SF_C", 1, 0);
	func_96(44, "PMP_P_RF_H" /* GXT: PMP shares volatile as gym attendance murky. */, "PMP_P_RF_C", 2, 0);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_60615 - 1));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Global_63000[iVar0 /*34*/][iVar1 /*11*/].f_10 = 5000f;
			while (!func_88(&(Global_60618[iVar2 /*14*/]), iVar0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_60615 - 1));
				SYSTEM::WAIT(2000);
			}
			Global_60618[iVar2 /*14*/].f_10 = 0f;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Global_60615 - 1));
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x5EDE
{
	if (Global_60615 == 150)
	{
		return;
	}
	Global_60618[Global_60615 /*14*/].f_11 = iParam3;
	Global_60618[Global_60615 /*14*/] = iParam4;
	StringCopy(&(Global_60618[Global_60615 /*14*/].f_1), sParam1, 16);
	StringCopy(&(Global_60618[Global_60615 /*14*/].f_5), sParam2, 16);
	Global_60618[Global_60615 /*14*/].f_9 = Global_60617;
	Global_60618[Global_60615 /*14*/].f_12 = iParam0;
	Global_60615++;
	Global_60617++;
}

void func_97()//Position - 0x5F4C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
}

void func_98()//Position - 0x5F5F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		Global_55453[iVar0 /*36*/].f_33 = 0f;
		Global_55453[iVar0 /*36*/].f_13 = 0;
		Global_55453[iVar0 /*36*/].f_12 = 0;
		Global_55453[iVar0 /*36*/].f_31 = 0f;
		Global_55453[iVar0 /*36*/].f_32 = 3.402823E+38f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_55453[iVar0 /*36*/].f_14[iVar1] = 0f;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 204)
	{
		Global_58896[iVar0 /*7*/].f_2 = 0;
		iVar0++;
	}
	StringCopy(&(Global_55453[0 /*36*/]), "BSS_BSTR_0" /* GXT: Ammu-Nation */, 16);
	StringCopy(&(Global_55453[0 /*36*/].f_4), "BSS_BSTR_1" /* GXT: AMU */, 16);
	Global_55453[0 /*36*/].f_8 = 1;
	Global_55453[0 /*36*/].f_35 = 0;
	StringCopy(&(Global_55453[1 /*36*/]), "BSS_BSTR_2" /* GXT: Badger */, 16);
	StringCopy(&(Global_55453[1 /*36*/].f_4), "BSS_BSTR_3" /* GXT: BDG */, 16);
	Global_55453[1 /*36*/].f_8 = 1;
	Global_55453[1 /*36*/].f_35 = 1;
	StringCopy(&(Global_55453[2 /*36*/]), "BSS_BSTR_4" /* GXT: BankOfLiberty */, 16);
	StringCopy(&(Global_55453[2 /*36*/].f_4), "BSS_BSTR_5" /* GXT: BOL */, 16);
	Global_55453[2 /*36*/].f_8 = 0;
	Global_55453[2 /*36*/].f_35 = 0;
	StringCopy(&(Global_55453[3 /*36*/]), "BSS_BSTR_6" /* GXT: BF */, 16);
	StringCopy(&(Global_55453[3 /*36*/].f_4), "BSS_BSTR_7" /* GXT: BFA */, 16);
	Global_55453[3 /*36*/].f_8 = 1;
	Global_55453[3 /*36*/].f_35 = 2;
	StringCopy(&(Global_55453[4 /*36*/]), "BSS_BSTR_8" /* GXT: Binco */, 16);
	StringCopy(&(Global_55453[4 /*36*/].f_4), "BSS_BSTR_9" /* GXT: BIN */, 16);
	Global_55453[4 /*36*/].f_8 = 1;
	Global_55453[4 /*36*/].f_35 = 3;
	StringCopy(&(Global_55453[5 /*36*/]), "BSS_BSTR_10" /* GXT: BitterSweet */, 16);
	StringCopy(&(Global_55453[5 /*36*/].f_4), "BSS_BSTR_11" /* GXT: BTR */, 16);
	Global_55453[5 /*36*/].f_8 = 1;
	Global_55453[5 /*36*/].f_35 = 4;
	StringCopy(&(Global_55453[6 /*36*/]), "BSS_BSTR_12" /* GXT: Bleeter */, 16);
	StringCopy(&(Global_55453[6 /*36*/].f_4), "BSS_BSTR_13" /* GXT: BLE */, 16);
	Global_55453[6 /*36*/].f_8 = 1;
	Global_55453[6 /*36*/].f_35 = 5;
	StringCopy(&(Global_55453[7 /*36*/]), "BSS_BSTR_14" /* GXT: Brute */, 16);
	StringCopy(&(Global_55453[7 /*36*/].f_4), "BSS_BSTR_15" /* GXT: BRU */, 16);
	Global_55453[7 /*36*/].f_8 = 1;
	Global_55453[7 /*36*/].f_35 = 6;
	StringCopy(&(Global_55453[8 /*36*/]), "BSS_BSTR_16" /* GXT: CNT */, 16);
	StringCopy(&(Global_55453[8 /*36*/].f_4), "BSS_BSTR_16" /* GXT: CNT */, 16);
	Global_55453[8 /*36*/].f_8 = 1;
	Global_55453[8 /*36*/].f_35 = 7;
	StringCopy(&(Global_55453[9 /*36*/]), "BSS_BSTR_17" /* GXT: Crevis */, 16);
	StringCopy(&(Global_55453[9 /*36*/].f_4), "BSS_BSTR_18" /* GXT: CRE */, 16);
	Global_55453[9 /*36*/].f_8 = 1;
	Global_55453[9 /*36*/].f_35 = 8;
	StringCopy(&(Global_55453[10 /*36*/]), "BSS_BSTR_19" /* GXT: DailyGlobe */, 16);
	StringCopy(&(Global_55453[10 /*36*/].f_4), "BSS_BSTR_20" /* GXT: DGP */, 16);
	Global_55453[10 /*36*/].f_8 = 1;
	Global_55453[10 /*36*/].f_35 = 9;
	StringCopy(&(Global_55453[11 /*36*/]), "BSS_BSTR_21" /* GXT: Dept.WaterandPower */, 16);
	StringCopy(&(Global_55453[11 /*36*/].f_4), "BSS_BSTR_22" /* GXT: WAP */, 16);
	Global_55453[11 /*36*/].f_8 = 1;
	Global_55453[11 /*36*/].f_35 = 10;
	StringCopy(&(Global_55453[12 /*36*/]), "BSS_BSTR_23" /* GXT: Facade */, 16);
	StringCopy(&(Global_55453[12 /*36*/].f_4), "BSS_BSTR_24" /* GXT: FAC */, 16);
	Global_55453[12 /*36*/].f_8 = 1;
	Global_55453[12 /*36*/].f_35 = 11;
	StringCopy(&(Global_55453[13 /*36*/]), "BSS_BSTR_25" /* GXT: Fleeca */, 16);
	StringCopy(&(Global_55453[13 /*36*/].f_4), "BSS_BSTR_26" /* GXT: FLC */, 16);
	Global_55453[13 /*36*/].f_8 = 0;
	Global_55453[13 /*36*/].f_35 = 1;
	StringCopy(&(Global_55453[14 /*36*/]), "BSS_BSTR_27" /* GXT: Hijak */, 16);
	StringCopy(&(Global_55453[14 /*36*/].f_4), "BSS_BSTR_28" /* GXT: HJK */, 16);
	Global_55453[14 /*36*/].f_8 = 0;
	Global_55453[14 /*36*/].f_35 = 2;
	StringCopy(&(Global_55453[15 /*36*/]), "BSS_BSTR_29" /* GXT: Fruit */, 16);
	StringCopy(&(Global_55453[15 /*36*/].f_4), "BSS_BSTR_30" /* GXT: FRT */, 16);
	Global_55453[15 /*36*/].f_8 = 1;
	Global_55453[15 /*36*/].f_35 = 12;
	StringCopy(&(Global_55453[16 /*36*/]), "BSS_BSTR_31" /* GXT: AuguryInsurance */, 16);
	StringCopy(&(Global_55453[16 /*36*/].f_4), "BSS_BSTR_32" /* GXT: AUG */, 16);
	Global_55453[16 /*36*/].f_8 = 0;
	Global_55453[16 /*36*/].f_35 = 3;
	StringCopy(&(Global_55453[17 /*36*/]), "BSS_BSTR_33" /* GXT: Bullhead */, 16);
	StringCopy(&(Global_55453[17 /*36*/].f_4), "BSS_BSTR_34" /* GXT: BUL */, 16);
	Global_55453[17 /*36*/].f_8 = 0;
	Global_55453[17 /*36*/].f_35 = 4;
	StringCopy(&(Global_55453[18 /*36*/]), "BSS_BSTR_35" /* GXT: Hammerstein&Faust */, 16);
	StringCopy(&(Global_55453[18 /*36*/].f_4), "BSS_BSTR_36" /* GXT: HAF */, 16);
	Global_55453[18 /*36*/].f_8 = 0;
	Global_55453[18 /*36*/].f_35 = 5;
	StringCopy(&(Global_55453[19 /*36*/]), "BSS_BSTR_37" /* GXT: Slaughter,Slaughter&Slaughter */, 16);
	StringCopy(&(Global_55453[19 /*36*/].f_4), "BSS_BSTR_38" /* GXT: SSS */, 16);
	Global_55453[19 /*36*/].f_8 = 0;
	Global_55453[19 /*36*/].f_35 = 6;
	StringCopy(&(Global_55453[20 /*36*/]), "BSS_BSTR_39" /* GXT: LosSantosCustoms */, 16);
	StringCopy(&(Global_55453[20 /*36*/].f_4), "BSS_BSTR_40" /* GXT: LSC */, 16);
	Global_55453[20 /*36*/].f_8 = 1;
	Global_55453[20 /*36*/].f_35 = 13;
	StringCopy(&(Global_55453[21 /*36*/]), "BSS_BSTR_41" /* GXT: LSTransport */, 16);
	StringCopy(&(Global_55453[21 /*36*/].f_4), "BSS_BSTR_42" /* GXT: LST */, 16);
	Global_55453[21 /*36*/].f_8 = 1;
	Global_55453[21 /*36*/].f_35 = 14;
	StringCopy(&(Global_55453[22 /*36*/]), "BSS_BSTR_43" /* GXT: LTDOil */, 16);
	StringCopy(&(Global_55453[22 /*36*/].f_4), "BSS_BSTR_44" /* GXT: LTD */, 16);
	Global_55453[22 /*36*/].f_8 = 1;
	Global_55453[22 /*36*/].f_35 = 15;
	StringCopy(&(Global_55453[23 /*36*/]), "BSS_BSTR_45" /* GXT: Maibatsu */, 16);
	StringCopy(&(Global_55453[23 /*36*/].f_4), "BSS_BSTR_46" /* GXT: MAI */, 16);
	Global_55453[23 /*36*/].f_8 = 1;
	Global_55453[23 /*36*/].f_35 = 16;
	StringCopy(&(Global_55453[24 /*36*/]), "BSS_BSTR_47" /* GXT: MazeBank */, 16);
	StringCopy(&(Global_55453[24 /*36*/].f_4), "BSS_BSTR_48" /* GXT: MAZ */, 16);
	Global_55453[24 /*36*/].f_8 = 0;
	Global_55453[24 /*36*/].f_35 = 7;
	StringCopy(&(Global_55453[25 /*36*/]), "BSS_BSTR_49" /* GXT: Suburban */, 16);
	StringCopy(&(Global_55453[25 /*36*/].f_4), "BSS_BSTR_50" /* GXT: SUB */, 16);
	Global_55453[25 /*36*/].f_8 = 1;
	Global_55453[25 /*36*/].f_35 = 17;
	StringCopy(&(Global_55453[26 /*36*/]), "BSS_BSTR_51" /* GXT: AnimalArk */, 16);
	StringCopy(&(Global_55453[26 /*36*/].f_4), "BSS_BSTR_52" /* GXT: ARK */, 16);
	Global_55453[26 /*36*/].f_8 = 0;
	Global_55453[26 /*36*/].f_35 = 8;
	StringCopy(&(Global_55453[27 /*36*/]), "BSS_BSTR_53" /* GXT: Pisswasser */, 16);
	StringCopy(&(Global_55453[27 /*36*/].f_4), "BSS_BSTR_54" /* GXT: PIS */, 16);
	Global_55453[27 /*36*/].f_8 = 1;
	Global_55453[27 /*36*/].f_35 = 18;
	StringCopy(&(Global_55453[28 /*36*/]), "BSS_BSTR_55" /* GXT: Ponsonbys */, 16);
	StringCopy(&(Global_55453[28 /*36*/].f_4), "BSS_BSTR_56" /* GXT: PON */, 16);
	Global_55453[28 /*36*/].f_8 = 1;
	Global_55453[28 /*36*/].f_35 = 19;
	StringCopy(&(Global_55453[29 /*36*/]), "BSS_BSTR_57" /* GXT: Raine */, 16);
	StringCopy(&(Global_55453[29 /*36*/].f_4), "BSS_BSTR_58" /* GXT: RAI */, 16);
	Global_55453[29 /*36*/].f_8 = 0;
	Global_55453[29 /*36*/].f_35 = 9;
	StringCopy(&(Global_55453[30 /*36*/]), "BSS_BSTR_59" /* GXT: RonOil */, 16);
	StringCopy(&(Global_55453[30 /*36*/].f_4), "BSS_BSTR_60" /* GXT: RON */, 16);
	Global_55453[30 /*36*/].f_8 = 1;
	Global_55453[30 /*36*/].f_35 = 20;
	StringCopy(&(Global_55453[31 /*36*/]), "BSS_BSTR_61" /* GXT: Schyster */, 16);
	StringCopy(&(Global_55453[31 /*36*/].f_4), "BSS_BSTR_62" /* GXT: SHT */, 16);
	Global_55453[31 /*36*/].f_8 = 1;
	Global_55453[31 /*36*/].f_35 = 21;
	StringCopy(&(Global_55453[32 /*36*/]), "BSS_BSTR_63" /* GXT: Sprunk */, 16);
	StringCopy(&(Global_55453[32 /*36*/].f_4), "BSS_BSTR_64" /* GXT: SPU */, 16);
	Global_55453[32 /*36*/].f_8 = 1;
	Global_55453[32 /*36*/].f_35 = 22;
	StringCopy(&(Global_55453[33 /*36*/]), "BSS_BSTR_65" /* GXT: Tinkle */, 16);
	StringCopy(&(Global_55453[33 /*36*/].f_4), "BSS_BSTR_66" /* GXT: TNK */, 16);
	Global_55453[33 /*36*/].f_8 = 1;
	Global_55453[33 /*36*/].f_35 = 23;
	StringCopy(&(Global_55453[34 /*36*/]), "BSS_BSTR_67" /* GXT: WIWANG */, 16);
	StringCopy(&(Global_55453[34 /*36*/].f_4), "BSS_BSTR_68" /* GXT: WIW */, 16);
	Global_55453[34 /*36*/].f_8 = 1;
	Global_55453[34 /*36*/].f_35 = 24;
	StringCopy(&(Global_55453[35 /*36*/]), "BSS_BSTR_69" /* GXT: Ubermacht */, 16);
	StringCopy(&(Global_55453[35 /*36*/].f_4), "BSS_BSTR_70" /* GXT: UMA */, 16);
	Global_55453[35 /*36*/].f_8 = 1;
	Global_55453[35 /*36*/].f_35 = 25;
	StringCopy(&(Global_55453[36 /*36*/]), "BSS_BSTR_71" /* GXT: Vapid */, 16);
	StringCopy(&(Global_55453[36 /*36*/].f_4), "BSS_BSTR_72" /* GXT: VAP */, 16);
	Global_55453[36 /*36*/].f_8 = 1;
	Global_55453[36 /*36*/].f_35 = 26;
	StringCopy(&(Global_55453[37 /*36*/]), "BSS_BSTR_73" /* GXT: VomFeuer */, 16);
	StringCopy(&(Global_55453[37 /*36*/].f_4), "BSS_BSTR_74" /* GXT: VOM */, 16);
	Global_55453[37 /*36*/].f_8 = 1;
	Global_55453[37 /*36*/].f_35 = 27;
	StringCopy(&(Global_55453[38 /*36*/]), "BSS_BSTR_75" /* GXT: Weazel */, 16);
	StringCopy(&(Global_55453[38 /*36*/].f_4), "BSS_BSTR_76" /* GXT: WZL */, 16);
	Global_55453[38 /*36*/].f_8 = 1;
	Global_55453[38 /*36*/].f_35 = 28;
	StringCopy(&(Global_55453[39 /*36*/]), "BSS_BSTR_77" /* GXT: Whiz */, 16);
	StringCopy(&(Global_55453[39 /*36*/].f_4), "BSS_BSTR_78" /* GXT: WIZ */, 16);
	Global_55453[39 /*36*/].f_8 = 1;
	Global_55453[39 /*36*/].f_35 = 29;
	StringCopy(&(Global_55453[40 /*36*/]), "BSS_BSTR_79" /* GXT: Debonaire */, 16);
	StringCopy(&(Global_55453[40 /*36*/].f_4), "BSS_BSTR_80" /* GXT: DEB */, 16);
	Global_55453[40 /*36*/].f_8 = 0;
	Global_55453[40 /*36*/].f_35 = 10;
	StringCopy(&(Global_55453[41 /*36*/]), "BSS_BSTR_81" /* GXT: Zit */, 16);
	StringCopy(&(Global_55453[41 /*36*/].f_4), "BSS_BSTR_82" /* GXT: ZIT */, 16);
	Global_55453[41 /*36*/].f_8 = 1;
	Global_55453[41 /*36*/].f_35 = 30;
	StringCopy(&(Global_55453[42 /*36*/]), "BSS_BSTR_83" /* GXT: Shark */, 16);
	StringCopy(&(Global_55453[42 /*36*/].f_4), "BSS_BSTR_84" /* GXT: SHK */, 16);
	Global_55453[42 /*36*/].f_8 = 1;
	Global_55453[42 /*36*/].f_35 = 31;
	StringCopy(&(Global_55453[43 /*36*/]), "BSS_BSTR_85" /* GXT: BettaPharmaceuticals */, 16);
	StringCopy(&(Global_55453[43 /*36*/].f_4), "BSS_BSTR_86" /* GXT: BET */, 16);
	Global_55453[43 /*36*/].f_8 = 1;
	Global_55453[43 /*36*/].f_35 = 32;
	StringCopy(&(Global_55453[44 /*36*/]), "BSS_BSTR_87" /* GXT: PumpnRun */, 16);
	StringCopy(&(Global_55453[44 /*36*/].f_4), "BSS_BSTR_88" /* GXT: PMP */, 16);
	Global_55453[44 /*36*/].f_8 = 1;
	Global_55453[44 /*36*/].f_35 = 33;
	StringCopy(&(Global_55453[45 /*36*/]), "BSS_BSTR_89" /* GXT: GrainOfTruth */, 16);
	StringCopy(&(Global_55453[45 /*36*/].f_4), "BSS_BSTR_90" /* GXT: GOT */, 16);
	Global_55453[45 /*36*/].f_8 = 1;
	Global_55453[45 /*36*/].f_35 = 34;
	StringCopy(&(Global_55453[46 /*36*/]), "BSS_BSTR_91" /* GXT: Eyefind */, 16);
	StringCopy(&(Global_55453[46 /*36*/].f_4), "BSS_BSTR_92" /* GXT: EYE */, 16);
	Global_55453[46 /*36*/].f_8 = 1;
	Global_55453[46 /*36*/].f_35 = 35;
	StringCopy(&(Global_55453[47 /*36*/]), "BSS_BSTR_93" /* GXT: AirEmu */, 16);
	StringCopy(&(Global_55453[47 /*36*/].f_4), "BSS_BSTR_94" /* GXT: EMU */, 16);
	Global_55453[47 /*36*/].f_8 = 0;
	Global_55453[47 /*36*/].f_35 = 11;
	StringCopy(&(Global_55453[48 /*36*/]), "BSS_BSTR_95" /* GXT: BeanMachine */, 16);
	StringCopy(&(Global_55453[48 /*36*/].f_4), "BSS_BSTR_96" /* GXT: BEN */, 16);
	Global_55453[48 /*36*/].f_8 = 0;
	Global_55453[48 /*36*/].f_35 = 12;
	StringCopy(&(Global_55453[49 /*36*/]), "BSS_BSTR_97" /* GXT: GoldCoast */, 16);
	StringCopy(&(Global_55453[49 /*36*/].f_4), "BSS_BSTR_98" /* GXT: GCD */, 16);
	Global_55453[49 /*36*/].f_8 = 0;
	Global_55453[49 /*36*/].f_35 = 13;
	StringCopy(&(Global_55453[50 /*36*/]), "BSS_BSTR_99" /* GXT: BobMulét */, 16);
	StringCopy(&(Global_55453[50 /*36*/].f_4), "BSS_BSTR_100" /* GXT: BOM */, 16);
	Global_55453[50 /*36*/].f_8 = 0;
	Global_55453[50 /*36*/].f_35 = 14;
	StringCopy(&(Global_55453[51 /*36*/]), "BSS_BSTR_101" /* GXT: BurgerShot */, 16);
	StringCopy(&(Global_55453[51 /*36*/].f_4), "BSS_BSTR_102" /* GXT: BGR */, 16);
	Global_55453[51 /*36*/].f_8 = 0;
	Global_55453[51 /*36*/].f_35 = 15;
	StringCopy(&(Global_55453[52 /*36*/]), "BSS_BSTR_103" /* GXT: CluckinBell */, 16);
	StringCopy(&(Global_55453[52 /*36*/].f_4), "BSS_BSTR_104" /* GXT: CLK */, 16);
	Global_55453[52 /*36*/].f_8 = 0;
	Global_55453[52 /*36*/].f_35 = 16;
	StringCopy(&(Global_55453[53 /*36*/]), "BSS_BSTR_105" /* GXT: CoolBeans */, 16);
	StringCopy(&(Global_55453[53 /*36*/].f_4), "BSS_BSTR_106" /* GXT: BAN */, 16);
	Global_55453[53 /*36*/].f_8 = 0;
	Global_55453[53 /*36*/].f_35 = 17;
	StringCopy(&(Global_55453[54 /*36*/]), "BSS_BSTR_107" /* GXT: DollarPills */, 16);
	StringCopy(&(Global_55453[54 /*36*/].f_4), "BSS_BSTR_108" /* GXT: DOP */, 16);
	Global_55453[54 /*36*/].f_8 = 0;
	Global_55453[54 /*36*/].f_35 = 18;
	StringCopy(&(Global_55453[55 /*36*/]), "BSS_BSTR_109" /* GXT: eCola */, 16);
	StringCopy(&(Global_55453[55 /*36*/].f_4), "BSS_BSTR_110" /* GXT: ECL */, 16);
	Global_55453[55 /*36*/].f_8 = 0;
	Global_55453[55 /*36*/].f_35 = 19;
	StringCopy(&(Global_55453[56 /*36*/]), "BSS_BSTR_111" /* GXT: FlyUS */, 16);
	StringCopy(&(Global_55453[56 /*36*/].f_4), "BSS_BSTR_112" /* GXT: FUS */, 16);
	Global_55453[56 /*36*/].f_8 = 0;
	Global_55453[56 /*36*/].f_35 = 20;
	StringCopy(&(Global_55453[57 /*36*/]), "BSS_BSTR_113" /* GXT: GastroBand */, 16);
	StringCopy(&(Global_55453[57 /*36*/].f_4), "BSS_BSTR_114" /* GXT: GAS */, 16);
	Global_55453[57 /*36*/].f_8 = 0;
	Global_55453[57 /*36*/].f_35 = 21;
	StringCopy(&(Global_55453[58 /*36*/]), "BSS_BSTR_115" /* GXT: GoPostal */, 16);
	StringCopy(&(Global_55453[58 /*36*/].f_4), "BSS_BSTR_116" /* GXT: GOP */, 16);
	Global_55453[58 /*36*/].f_8 = 0;
	Global_55453[58 /*36*/].f_35 = 22;
	StringCopy(&(Global_55453[59 /*36*/]), "BSS_BSTR_117" /* GXT: GruppeSechs */, 16);
	StringCopy(&(Global_55453[59 /*36*/].f_4), "BSS_BSTR_118" /* GXT: GRU */, 16);
	Global_55453[59 /*36*/].f_8 = 0;
	Global_55453[59 /*36*/].f_35 = 23;
	StringCopy(&(Global_55453[60 /*36*/]), "BSS_BSTR_119" /* GXT: Krapea */, 16);
	StringCopy(&(Global_55453[60 /*36*/].f_4), "BSS_BSTR_120" /* GXT: KRP */, 16);
	Global_55453[60 /*36*/].f_8 = 0;
	Global_55453[60 /*36*/].f_35 = 24;
	StringCopy(&(Global_55453[61 /*36*/]), "BSS_BSTR_121" /* GXT: Lifeinvader */, 16);
	StringCopy(&(Global_55453[61 /*36*/].f_4), "BSS_BSTR_122" /* GXT: LFI */, 16);
	Global_55453[61 /*36*/].f_8 = 0;
	Global_55453[61 /*36*/].f_35 = 25;
	StringCopy(&(Global_55453[62 /*36*/]), "BSS_BSTR_123" /* GXT: MaxRenda */, 16);
	StringCopy(&(Global_55453[62 /*36*/].f_4), "BSS_BSTR_124" /* GXT: MAX */, 16);
	Global_55453[62 /*36*/].f_8 = 0;
	Global_55453[62 /*36*/].f_35 = 26;
	StringCopy(&(Global_55453[63 /*36*/]), "BSS_BSTR_125" /* GXT: PostOP */, 16);
	StringCopy(&(Global_55453[63 /*36*/].f_4), "BSS_BSTR_126" /* GXT: POP */, 16);
	Global_55453[63 /*36*/].f_8 = 0;
	Global_55453[63 /*36*/].f_35 = 27;
	StringCopy(&(Global_55453[64 /*36*/]), "BSS_BSTR_127" /* GXT: ProLaps */, 16);
	StringCopy(&(Global_55453[64 /*36*/].f_4), "BSS_BSTR_128" /* GXT: PRO */, 16);
	Global_55453[64 /*36*/].f_8 = 0;
	Global_55453[64 /*36*/].f_35 = 28;
	StringCopy(&(Global_55453[65 /*36*/]), "BSS_BSTR_129" /* GXT: Redwood */, 16);
	StringCopy(&(Global_55453[65 /*36*/].f_4), "BSS_BSTR_130" /* GXT: RWC */, 16);
	Global_55453[65 /*36*/].f_8 = 0;
	Global_55453[65 /*36*/].f_35 = 29;
	StringCopy(&(Global_55453[66 /*36*/]), "BSS_BSTR_131" /* GXT: RichardsMajestic */, 16);
	StringCopy(&(Global_55453[66 /*36*/].f_4), "BSS_BSTR_132" /* GXT: RIM */, 16);
	Global_55453[66 /*36*/].f_8 = 0;
	Global_55453[66 /*36*/].f_35 = 30;
	StringCopy(&(Global_55453[67 /*36*/]), "BSS_BSTR_133" /* GXT: TacoBomb */, 16);
	StringCopy(&(Global_55453[67 /*36*/].f_4), "BSS_BSTR_134" /* GXT: TBO */, 16);
	Global_55453[67 /*36*/].f_8 = 0;
	Global_55453[67 /*36*/].f_35 = 31;
	StringCopy(&(Global_55453[68 /*36*/]), "BSS_BSTR_135" /* GXT: Up-n-Atom */, 16);
	StringCopy(&(Global_55453[68 /*36*/].f_4), "BSS_BSTR_136" /* GXT: UPA */, 16);
	Global_55453[68 /*36*/].f_8 = 0;
	Global_55453[68 /*36*/].f_35 = 32;
	StringCopy(&(Global_55453[69 /*36*/]), "BSS_BSTR_137" /* GXT: Vangelico */, 16);
	StringCopy(&(Global_55453[69 /*36*/].f_4), "BSS_BSTR_138" /* GXT: VAG */, 16);
	Global_55453[69 /*36*/].f_8 = 0;
	Global_55453[69 /*36*/].f_35 = 33;
	StringCopy(&(Global_55453[70 /*36*/]), "BSS_BSTR_139" /* GXT: VanillaUnicorn */, 16);
	StringCopy(&(Global_55453[70 /*36*/].f_4), "BSS_BSTR_140" /* GXT: UNI */, 16);
	Global_55453[70 /*36*/].f_8 = 0;
	Global_55453[70 /*36*/].f_35 = 34;
	StringCopy(&(Global_55453[71 /*36*/]), "BSS_BSTR_141" /* GXT: HVYIndustries */, 16);
	StringCopy(&(Global_55453[71 /*36*/].f_4), "BSS_BSTR_142" /* GXT: HVY */, 16);
	Global_55453[71 /*36*/].f_8 = 1;
	Global_55453[71 /*36*/].f_35 = 36;
	StringCopy(&(Global_55453[72 /*36*/]), "BSS_BSTR_143" /* GXT: Logger */, 16);
	StringCopy(&(Global_55453[72 /*36*/].f_4), "BSS_BSTR_144" /* GXT: LOG */, 16);
	Global_55453[72 /*36*/].f_8 = 0;
	Global_55453[72 /*36*/].f_35 = 35;
	StringCopy(&(Global_55453[73 /*36*/]), "BSS_BSTR_145" /* GXT: Merryweather */, 16);
	StringCopy(&(Global_55453[73 /*36*/].f_4), "BSS_BSTR_146" /* GXT: MER */, 16);
	Global_55453[73 /*36*/].f_8 = 0;
	Global_55453[73 /*36*/].f_35 = 36;
	StringCopy(&(Global_55453[74 /*36*/]), "BSS_BSTR_147" /* GXT: WorldwideFM */, 16);
	StringCopy(&(Global_55453[74 /*36*/].f_4), "BSS_BSTR_148" /* GXT: WFM */, 16);
	Global_55453[74 /*36*/].f_8 = 0;
	Global_55453[74 /*36*/].f_35 = 37;
	StringCopy(&(Global_55453[75 /*36*/]), "BSS_BSTR_149" /* GXT: RadioLosSantos */, 16);
	StringCopy(&(Global_55453[75 /*36*/].f_4), "BSS_BSTR_150" /* GXT: RLS */, 16);
	Global_55453[75 /*36*/].f_8 = 0;
	Global_55453[75 /*36*/].f_35 = 38;
	StringCopy(&(Global_55453[76 /*36*/]), "BSS_BSTR_151" /* GXT: Shrewsbury */, 16);
	StringCopy(&(Global_55453[76 /*36*/].f_4), "BSS_BSTR_152" /* GXT: SHR */, 16);
	Global_55453[76 /*36*/].f_8 = 1;
	Global_55453[76 /*36*/].f_35 = 37;
	StringCopy(&(Global_55453[77 /*36*/]), "BSS_BSTR_153" /* GXT: HawkAndLittle */, 16);
	StringCopy(&(Global_55453[77 /*36*/].f_4), "BSS_BSTR_154" /* GXT: HAL */, 16);
	Global_55453[77 /*36*/].f_8 = 1;
	Global_55453[77 /*36*/].f_35 = 38;
	StringCopy(&(Global_55453[78 /*36*/]), "BSS_BSTR_155" /* GXT: MorsMutualInsurance */, 16);
	StringCopy(&(Global_55453[78 /*36*/].f_4), "BSS_BSTR_156" /* GXT: MOR */, 16);
	Global_55453[78 /*36*/].f_8 = 0;
	Global_55453[78 /*36*/].f_35 = 39;
	StringCopy(&(Global_55453[79 /*36*/]), "BSS_BSTR_157" /* GXT: Bilkinton */, 16);
	StringCopy(&(Global_55453[79 /*36*/].f_4), "BSS_BSTR_158" /* GXT: BIL */, 16);
	Global_55453[79 /*36*/].f_8 = 0;
	Global_55453[79 /*36*/].f_35 = 40;
	Global_58608[0 /*7*/].f_2 = 1f;
	Global_58608[0 /*7*/].f_1 = 1f;
	Global_58608[0 /*7*/].f_3 = 1000f;
	Global_58608[0 /*7*/].f_4 = 3.5f;
	Global_58608[0 /*7*/].f_5 = 3.5f;
	Global_58608[0 /*7*/].f_6 = 0.1f;
	Global_58608[1 /*7*/].f_2 = 1f;
	Global_58608[1 /*7*/].f_1 = 1f;
	Global_58608[1 /*7*/].f_3 = 1000f;
	Global_58608[1 /*7*/].f_4 = 3.5f;
	Global_58608[1 /*7*/].f_5 = 3.5f;
	Global_58608[1 /*7*/].f_6 = 0.1f;
	Global_58608[2 /*7*/].f_2 = 1f;
	Global_58608[2 /*7*/].f_1 = 1f;
	Global_58608[2 /*7*/].f_3 = 1000f;
	Global_58608[2 /*7*/].f_4 = 3.5f;
	Global_58608[2 /*7*/].f_5 = 3.5f;
	Global_58608[2 /*7*/].f_6 = 0.1f;
	Global_58608[3 /*7*/].f_2 = 1f;
	Global_58608[3 /*7*/].f_1 = 1f;
	Global_58608[3 /*7*/].f_3 = 1000f;
	Global_58608[3 /*7*/].f_4 = 3.5f;
	Global_58608[3 /*7*/].f_5 = 3.5f;
	Global_58608[3 /*7*/].f_6 = 0.1f;
	Global_58608[4 /*7*/].f_2 = 1f;
	Global_58608[4 /*7*/].f_1 = 1f;
	Global_58608[4 /*7*/].f_3 = 1000f;
	Global_58608[4 /*7*/].f_4 = 3.5f;
	Global_58608[4 /*7*/].f_5 = 3.5f;
	Global_58608[4 /*7*/].f_6 = 0.1f;
	Global_58608[5 /*7*/].f_2 = 1f;
	Global_58608[5 /*7*/].f_1 = 1f;
	Global_58608[5 /*7*/].f_3 = 1000f;
	Global_58608[5 /*7*/].f_4 = 3.5f;
	Global_58608[5 /*7*/].f_5 = 3.5f;
	Global_58608[5 /*7*/].f_6 = 0.1f;
	Global_58608[6 /*7*/].f_2 = 1f;
	Global_58608[6 /*7*/].f_1 = 1f;
	Global_58608[6 /*7*/].f_3 = 1000f;
	Global_58608[6 /*7*/].f_4 = 3.5f;
	Global_58608[6 /*7*/].f_5 = 3.5f;
	Global_58608[6 /*7*/].f_6 = 0.1f;
	Global_58608[7 /*7*/].f_2 = 1f;
	Global_58608[7 /*7*/].f_1 = 1f;
	Global_58608[7 /*7*/].f_3 = 1000f;
	Global_58608[7 /*7*/].f_4 = 3.5f;
	Global_58608[7 /*7*/].f_5 = 3.5f;
	Global_58608[7 /*7*/].f_6 = 0.1f;
	Global_58608[8 /*7*/].f_2 = 1f;
	Global_58608[8 /*7*/].f_1 = 1f;
	Global_58608[8 /*7*/].f_3 = 1000f;
	Global_58608[8 /*7*/].f_4 = 3.5f;
	Global_58608[8 /*7*/].f_5 = 3.5f;
	Global_58608[8 /*7*/].f_6 = 0.1f;
	Global_58608[9 /*7*/].f_2 = 1f;
	Global_58608[9 /*7*/].f_1 = 1f;
	Global_58608[9 /*7*/].f_3 = 1000f;
	Global_58608[9 /*7*/].f_4 = 3.5f;
	Global_58608[9 /*7*/].f_5 = 3.5f;
	Global_58608[9 /*7*/].f_6 = 0.1f;
	Global_58608[10 /*7*/].f_2 = 1f;
	Global_58608[10 /*7*/].f_1 = 1f;
	Global_58608[10 /*7*/].f_3 = 1000f;
	Global_58608[10 /*7*/].f_4 = 3.5f;
	Global_58608[10 /*7*/].f_5 = 3.5f;
	Global_58608[10 /*7*/].f_6 = 0.1f;
	Global_58608[11 /*7*/].f_2 = 1f;
	Global_58608[11 /*7*/].f_1 = 1f;
	Global_58608[11 /*7*/].f_3 = 1000f;
	Global_58608[11 /*7*/].f_4 = 3.5f;
	Global_58608[11 /*7*/].f_5 = 3.5f;
	Global_58608[11 /*7*/].f_6 = 0.1f;
	Global_58608[12 /*7*/].f_2 = 1f;
	Global_58608[12 /*7*/].f_1 = 1f;
	Global_58608[12 /*7*/].f_3 = 1000f;
	Global_58608[12 /*7*/].f_4 = 3.5f;
	Global_58608[12 /*7*/].f_5 = 3.5f;
	Global_58608[12 /*7*/].f_6 = 0.1f;
	Global_58608[13 /*7*/].f_2 = 1f;
	Global_58608[13 /*7*/].f_1 = 1f;
	Global_58608[13 /*7*/].f_3 = 1000f;
	Global_58608[13 /*7*/].f_4 = 3.5f;
	Global_58608[13 /*7*/].f_5 = 3.5f;
	Global_58608[13 /*7*/].f_6 = 0.1f;
	Global_58608[14 /*7*/].f_2 = 1f;
	Global_58608[14 /*7*/].f_1 = 1f;
	Global_58608[14 /*7*/].f_3 = 1000f;
	Global_58608[14 /*7*/].f_4 = 3.5f;
	Global_58608[14 /*7*/].f_5 = 3.5f;
	Global_58608[14 /*7*/].f_6 = 0.1f;
	Global_58608[15 /*7*/].f_2 = 1f;
	Global_58608[15 /*7*/].f_1 = 1f;
	Global_58608[15 /*7*/].f_3 = 1000f;
	Global_58608[15 /*7*/].f_4 = 3.5f;
	Global_58608[15 /*7*/].f_5 = 3.5f;
	Global_58608[15 /*7*/].f_6 = 0.1f;
	Global_58608[16 /*7*/].f_2 = 1f;
	Global_58608[16 /*7*/].f_1 = 1f;
	Global_58608[16 /*7*/].f_3 = 1000f;
	Global_58608[16 /*7*/].f_4 = 3.5f;
	Global_58608[16 /*7*/].f_5 = 3.5f;
	Global_58608[16 /*7*/].f_6 = 0.1f;
	Global_58608[17 /*7*/].f_2 = 1f;
	Global_58608[17 /*7*/].f_1 = 1f;
	Global_58608[17 /*7*/].f_3 = 1000f;
	Global_58608[17 /*7*/].f_4 = 3.5f;
	Global_58608[17 /*7*/].f_5 = 3.5f;
	Global_58608[17 /*7*/].f_6 = 0.1f;
	Global_58608[18 /*7*/].f_2 = 1f;
	Global_58608[18 /*7*/].f_1 = 1f;
	Global_58608[18 /*7*/].f_3 = 1000f;
	Global_58608[18 /*7*/].f_4 = 3.5f;
	Global_58608[18 /*7*/].f_5 = 3.5f;
	Global_58608[18 /*7*/].f_6 = 0.1f;
	Global_58608[19 /*7*/].f_2 = 1f;
	Global_58608[19 /*7*/].f_1 = 1f;
	Global_58608[19 /*7*/].f_3 = 1000f;
	Global_58608[19 /*7*/].f_4 = 3.5f;
	Global_58608[19 /*7*/].f_5 = 3.5f;
	Global_58608[19 /*7*/].f_6 = 0.1f;
	Global_58608[20 /*7*/].f_2 = 1f;
	Global_58608[20 /*7*/].f_1 = 1f;
	Global_58608[20 /*7*/].f_3 = 1000f;
	Global_58608[20 /*7*/].f_4 = 3.5f;
	Global_58608[20 /*7*/].f_5 = 3.5f;
	Global_58608[20 /*7*/].f_6 = 0.1f;
	Global_58608[21 /*7*/].f_2 = 1f;
	Global_58608[21 /*7*/].f_1 = 1f;
	Global_58608[21 /*7*/].f_3 = 1000f;
	Global_58608[21 /*7*/].f_4 = 3.5f;
	Global_58608[21 /*7*/].f_5 = 3.5f;
	Global_58608[21 /*7*/].f_6 = 0.1f;
	Global_58608[22 /*7*/].f_2 = 1f;
	Global_58608[22 /*7*/].f_1 = 1f;
	Global_58608[22 /*7*/].f_3 = 1000f;
	Global_58608[22 /*7*/].f_4 = 3.5f;
	Global_58608[22 /*7*/].f_5 = 3.5f;
	Global_58608[22 /*7*/].f_6 = 0.1f;
	Global_58608[23 /*7*/].f_2 = 1f;
	Global_58608[23 /*7*/].f_1 = 1f;
	Global_58608[23 /*7*/].f_3 = 1000f;
	Global_58608[23 /*7*/].f_4 = 3.5f;
	Global_58608[23 /*7*/].f_5 = 3.5f;
	Global_58608[23 /*7*/].f_6 = 0.1f;
	Global_58608[24 /*7*/].f_2 = 1f;
	Global_58608[24 /*7*/].f_1 = 1f;
	Global_58608[24 /*7*/].f_3 = 1000f;
	Global_58608[24 /*7*/].f_4 = 3.5f;
	Global_58608[24 /*7*/].f_5 = 3.5f;
	Global_58608[24 /*7*/].f_6 = 0.1f;
	Global_58608[25 /*7*/].f_2 = 1f;
	Global_58608[25 /*7*/].f_1 = 1f;
	Global_58608[25 /*7*/].f_3 = 1000f;
	Global_58608[25 /*7*/].f_4 = 3.5f;
	Global_58608[25 /*7*/].f_5 = 3.5f;
	Global_58608[25 /*7*/].f_6 = 0.1f;
	Global_58608[26 /*7*/].f_2 = 1f;
	Global_58608[26 /*7*/].f_1 = 1f;
	Global_58608[26 /*7*/].f_3 = 1000f;
	Global_58608[26 /*7*/].f_4 = 3.5f;
	Global_58608[26 /*7*/].f_5 = 3.5f;
	Global_58608[26 /*7*/].f_6 = 0.1f;
	Global_58608[27 /*7*/].f_2 = 1f;
	Global_58608[27 /*7*/].f_1 = 1f;
	Global_58608[27 /*7*/].f_3 = 1000f;
	Global_58608[27 /*7*/].f_4 = 3.5f;
	Global_58608[27 /*7*/].f_5 = 3.5f;
	Global_58608[27 /*7*/].f_6 = 0.1f;
	Global_58608[28 /*7*/].f_2 = 1f;
	Global_58608[28 /*7*/].f_1 = 1f;
	Global_58608[28 /*7*/].f_3 = 1000f;
	Global_58608[28 /*7*/].f_4 = 3.5f;
	Global_58608[28 /*7*/].f_5 = 3.5f;
	Global_58608[28 /*7*/].f_6 = 0.1f;
	Global_58608[29 /*7*/].f_2 = 1f;
	Global_58608[29 /*7*/].f_1 = 1f;
	Global_58608[29 /*7*/].f_3 = 1000f;
	Global_58608[29 /*7*/].f_4 = 3.5f;
	Global_58608[29 /*7*/].f_5 = 3.5f;
	Global_58608[29 /*7*/].f_6 = 0.1f;
	Global_58608[30 /*7*/].f_2 = 1f;
	Global_58608[30 /*7*/].f_1 = 1f;
	Global_58608[30 /*7*/].f_3 = 1000f;
	Global_58608[30 /*7*/].f_4 = 3.5f;
	Global_58608[30 /*7*/].f_5 = 3.5f;
	Global_58608[30 /*7*/].f_6 = 0.1f;
	Global_58608[31 /*7*/].f_2 = 1f;
	Global_58608[31 /*7*/].f_1 = 1f;
	Global_58608[31 /*7*/].f_3 = 1000f;
	Global_58608[31 /*7*/].f_4 = 3.5f;
	Global_58608[31 /*7*/].f_5 = 3.5f;
	Global_58608[31 /*7*/].f_6 = 0.1f;
	Global_58608[32 /*7*/].f_2 = 1f;
	Global_58608[32 /*7*/].f_1 = 1f;
	Global_58608[32 /*7*/].f_3 = 1000f;
	Global_58608[32 /*7*/].f_4 = 3.5f;
	Global_58608[32 /*7*/].f_5 = 3.5f;
	Global_58608[32 /*7*/].f_6 = 0.1f;
	Global_58608[33 /*7*/].f_2 = 1f;
	Global_58608[33 /*7*/].f_1 = 1f;
	Global_58608[33 /*7*/].f_3 = 1000f;
	Global_58608[33 /*7*/].f_4 = 3.5f;
	Global_58608[33 /*7*/].f_5 = 3.5f;
	Global_58608[33 /*7*/].f_6 = 0.1f;
	Global_58608[34 /*7*/].f_2 = 1f;
	Global_58608[34 /*7*/].f_1 = 1f;
	Global_58608[34 /*7*/].f_3 = 1000f;
	Global_58608[34 /*7*/].f_4 = 3.5f;
	Global_58608[34 /*7*/].f_5 = 3.5f;
	Global_58608[34 /*7*/].f_6 = 0.1f;
	Global_58608[35 /*7*/].f_2 = 1f;
	Global_58608[35 /*7*/].f_1 = 1f;
	Global_58608[35 /*7*/].f_3 = 1000f;
	Global_58608[35 /*7*/].f_4 = 3.5f;
	Global_58608[35 /*7*/].f_5 = 3.5f;
	Global_58608[35 /*7*/].f_6 = 0.1f;
	Global_58608[36 /*7*/].f_2 = 1f;
	Global_58608[36 /*7*/].f_1 = 1f;
	Global_58608[36 /*7*/].f_3 = 1000f;
	Global_58608[36 /*7*/].f_4 = 3.5f;
	Global_58608[36 /*7*/].f_5 = 3.5f;
	Global_58608[36 /*7*/].f_6 = 0.1f;
	Global_58608[37 /*7*/].f_2 = 1f;
	Global_58608[37 /*7*/].f_1 = 1f;
	Global_58608[37 /*7*/].f_3 = 1000f;
	Global_58608[37 /*7*/].f_4 = 3.5f;
	Global_58608[37 /*7*/].f_5 = 3.5f;
	Global_58608[37 /*7*/].f_6 = 0.1f;
	Global_58608[38 /*7*/].f_2 = 1f;
	Global_58608[38 /*7*/].f_1 = 1f;
	Global_58608[38 /*7*/].f_3 = 1000f;
	Global_58608[38 /*7*/].f_4 = 3.5f;
	Global_58608[38 /*7*/].f_5 = 3.5f;
	Global_58608[38 /*7*/].f_6 = 0.1f;
	Global_58608[39 /*7*/].f_2 = 1f;
	Global_58608[39 /*7*/].f_1 = 1f;
	Global_58608[39 /*7*/].f_3 = 1000f;
	Global_58608[39 /*7*/].f_4 = 3.5f;
	Global_58608[39 /*7*/].f_5 = 3.5f;
	Global_58608[39 /*7*/].f_6 = 0.1f;
	Global_58608[40 /*7*/].f_2 = 1f;
	Global_58608[40 /*7*/].f_1 = 1f;
	Global_58608[40 /*7*/].f_3 = 1000f;
	Global_58608[40 /*7*/].f_4 = 3.5f;
	Global_58608[40 /*7*/].f_5 = 3.5f;
	Global_58608[40 /*7*/].f_6 = 0.1f;
	Global_58896[0 /*7*/].f_1 = joaat("SM_BRVECDESBFA");
	Global_58896[0 /*7*/] = 1;
	Global_58896[1 /*7*/].f_1 = joaat("SM_BRVECDESBRU");
	Global_58896[1 /*7*/] = 1;
	Global_58896[3 /*7*/].f_1 = joaat("SM_BRVECDESLSC");
	Global_58896[3 /*7*/] = 1;
	Global_58896[4 /*7*/].f_1 = joaat("SM_BRVECDESLST");
	Global_58896[4 /*7*/] = 1;
	Global_58896[5 /*7*/].f_1 = joaat("SM_BRVECDESLTD");
	Global_58896[5 /*7*/] = 1;
	Global_58896[6 /*7*/].f_1 = joaat("SM_BRVECDESMAI");
	Global_58896[6 /*7*/] = 1;
	Global_58896[7 /*7*/].f_1 = joaat("SM_BRVECDESRON");
	Global_58896[7 /*7*/] = 1;
	Global_58896[8 /*7*/].f_1 = joaat("SM_BRVECDESSHT");
	Global_58896[8 /*7*/] = 1;
	Global_58896[9 /*7*/].f_1 = joaat("SM_BRVECDESUMA");
	Global_58896[9 /*7*/] = 1;
	Global_58896[10 /*7*/].f_1 = joaat("SM_BRVECDESVAP");
	Global_58896[10 /*7*/] = 1;
	Global_58896[11 /*7*/].f_1 = joaat("SM_BRVECDESHVY");
	Global_58896[11 /*7*/] = 1;
	Global_58896[12 /*7*/].f_1 = joaat("SM_VECBUYBFA");
	Global_58896[12 /*7*/] = 1;
	Global_58896[13 /*7*/].f_1 = joaat("SM_VECBUYBRU");
	Global_58896[13 /*7*/] = 1;
	Global_58896[15 /*7*/].f_1 = joaat("SM_VECBUYMAI");
	Global_58896[15 /*7*/] = 1;
	Global_58896[16 /*7*/].f_1 = joaat("SM_VECBUYSHT");
	Global_58896[16 /*7*/] = 1;
	Global_58896[17 /*7*/].f_1 = joaat("SM_VECBUYUMA");
	Global_58896[17 /*7*/] = 1;
	Global_58896[18 /*7*/].f_1 = joaat("SM_VECBUYVAP");
	Global_58896[18 /*7*/] = 1;
	Global_58896[19 /*7*/].f_1 = joaat("SM_VECBUYHVY");
	Global_58896[19 /*7*/] = 1;
	Global_58896[20 /*7*/].f_1 = joaat("SM_DISDRIVBFA");
	Global_58896[20 /*7*/] = 1;
	Global_58896[21 /*7*/].f_1 = joaat("SM_DISDRIVBRU");
	Global_58896[21 /*7*/] = 1;
	Global_58896[23 /*7*/].f_1 = joaat("SM_DISDRIVLST");
	Global_58896[23 /*7*/] = 1;
	Global_58896[24 /*7*/].f_1 = joaat("SM_DISDRIVMAI");
	Global_58896[24 /*7*/] = 1;
	Global_58896[25 /*7*/].f_1 = joaat("SM_DISDRIVSHT");
	Global_58896[25 /*7*/] = 1;
	Global_58896[26 /*7*/].f_1 = joaat("SM_DISDRIVUMA");
	Global_58896[26 /*7*/] = 1;
	Global_58896[27 /*7*/].f_1 = joaat("SM_DISDRIVVAP");
	Global_58896[27 /*7*/] = 1;
	Global_58896[28 /*7*/].f_1 = joaat("SM_DISDRIVHVY");
	Global_58896[28 /*7*/] = 1;
	Global_58896[30 /*7*/].f_1 = joaat("SM_VECMODLSC");
	Global_58896[30 /*7*/] = 1;
	Global_58896[31 /*7*/].f_1 = joaat("SM_VECSTOLBFA");
	Global_58896[31 /*7*/] = 1;
	Global_58896[32 /*7*/].f_1 = joaat("SM_VECSTOLBRU");
	Global_58896[32 /*7*/] = 1;
	Global_58896[34 /*7*/].f_1 = joaat("SM_VECSTOLLST");
	Global_58896[34 /*7*/] = 1;
	Global_58896[35 /*7*/].f_1 = joaat("SM_VECSTOLMAI");
	Global_58896[35 /*7*/] = 1;
	Global_58896[36 /*7*/].f_1 = joaat("SM_VECSTOLSHT");
	Global_58896[36 /*7*/] = 1;
	Global_58896[37 /*7*/].f_1 = joaat("SM_VECSTOLUMA");
	Global_58896[37 /*7*/] = 1;
	Global_58896[38 /*7*/].f_1 = joaat("SM_VECSTOLVAP");
	Global_58896[38 /*7*/] = 1;
	Global_58896[39 /*7*/].f_1 = joaat("SM_VECSTOLHVY");
	Global_58896[39 /*7*/] = 1;
	Global_58896[40 /*7*/].f_1 = joaat("SM_VECDMGBFA");
	Global_58896[40 /*7*/] = 1;
	Global_58896[41 /*7*/].f_1 = joaat("SM_VECDMGBRU");
	Global_58896[41 /*7*/] = 1;
	Global_58896[43 /*7*/].f_1 = joaat("SM_VECDMGMAI");
	Global_58896[43 /*7*/] = 1;
	Global_58896[44 /*7*/].f_1 = joaat("SM_VECDMGSHT");
	Global_58896[44 /*7*/] = 1;
	Global_58896[45 /*7*/].f_1 = joaat("SM_VECDMGUMA");
	Global_58896[45 /*7*/] = 1;
	Global_58896[46 /*7*/].f_1 = joaat("SM_VECDMGVAP");
	Global_58896[46 /*7*/] = 1;
	Global_58896[47 /*7*/].f_1 = joaat("SM_VECDMGHVY");
	Global_58896[47 /*7*/] = 1;
	Global_58896[48 /*7*/].f_1 = joaat("SM_VECPEDKIL");
	Global_58896[48 /*7*/] = 1;
	Global_58896[49 /*7*/].f_1 = joaat("SM_WEPBUYSHR");
	Global_58896[49 /*7*/] = 1;
	Global_58896[50 /*7*/].f_1 = joaat("SM_WEPBUYHAL");
	Global_58896[50 /*7*/] = 1;
	Global_58896[51 /*7*/].f_1 = joaat("SM_WEPTAKEVOM");
	Global_58896[51 /*7*/] = 1;
	Global_58896[52 /*7*/].f_1 = joaat("SM_WEPTAKESHR");
	Global_58896[52 /*7*/] = 1;
	Global_58896[53 /*7*/].f_1 = joaat("SM_WEPTAKEHAL");
	Global_58896[53 /*7*/] = 1;
	Global_58896[54 /*7*/].f_1 = joaat("SM_KILCOPVOM");
	Global_58896[54 /*7*/] = 1;
	Global_58896[55 /*7*/].f_1 = joaat("SM_KILCOPSHR");
	Global_58896[55 /*7*/] = 1;
	Global_58896[56 /*7*/].f_1 = joaat("SM_KILCOPHAL");
	Global_58896[56 /*7*/] = 1;
	Global_58896[57 /*7*/].f_1 = joaat("SM_KILCRIMVOM");
	Global_58896[57 /*7*/] = 1;
	Global_58896[58 /*7*/].f_1 = joaat("SM_KILCRIMSHR");
	Global_58896[58 /*7*/] = 1;
	Global_58896[59 /*7*/].f_1 = joaat("SM_KILCRIMHAL");
	Global_58896[59 /*7*/] = 1;
	Global_58896[60 /*7*/].f_1 = joaat("SM_KILCIVMAI");
	Global_58896[60 /*7*/] = 1;
	Global_58896[61 /*7*/].f_1 = joaat("SM_KILCIVSHT");
	Global_58896[61 /*7*/] = 1;
	Global_58896[62 /*7*/].f_1 = joaat("SM_KILCIVUMA");
	Global_58896[62 /*7*/] = 1;
	Global_58896[63 /*7*/].f_1 = joaat("SM_KILCIVVOM");
	Global_58896[63 /*7*/] = 1;
	Global_58896[64 /*7*/].f_1 = joaat("SM_KILCIVSHR");
	Global_58896[64 /*7*/] = 1;
	Global_58896[65 /*7*/].f_1 = joaat("SM_KILCIVHAL");
	Global_58896[65 /*7*/] = 1;
	Global_58896[67 /*7*/].f_1 = joaat("SM_VENUSESPU");
	Global_58896[67 /*7*/] = 1;
	Global_58896[68 /*7*/].f_1 = joaat("SM_NEWDAM");
	Global_58896[68 /*7*/] = 1;
	Global_58896[69 /*7*/].f_1 = joaat("SM_HPKIL");
	Global_58896[69 /*7*/] = 1;
	Global_58896[70 /*7*/].f_1 = joaat("SM_PUBCLUB");
	Global_58896[70 /*7*/] = 1;
	Global_58896[71 /*7*/].f_1 = joaat("SM_TDRNK");
	Global_58896[71 /*7*/] = 1;
	Global_58896[72 /*7*/].f_1 = joaat("SM_FRNPUB");
	Global_58896[72 /*7*/] = 1;
	Global_58896[73 /*7*/].f_1 = joaat("SM_DRNKCRM");
	Global_58896[73 /*7*/] = 1;
	Global_58896[74 /*7*/].f_1 = joaat("SM_RAMCOM");
	Global_58896[74 /*7*/] = 1;
	Global_58896[76 /*7*/].f_1 = joaat("SM_RADCNT");
	Global_58896[76 /*7*/] = 1;
	Global_58896[77 /*7*/].f_1 = joaat("SM_RADWZL");
	Global_58896[77 /*7*/] = 1;
	Global_58896[78 /*7*/].f_1 = joaat("SM_RADZIT");
	Global_58896[78 /*7*/] = 1;
	Global_58896[81 /*7*/].f_1 = joaat("SM_ZITITCNT");
	Global_58896[81 /*7*/] = 1;
	Global_58896[82 /*7*/].f_1 = joaat("SM_ZITITWZL");
	Global_58896[82 /*7*/] = 1;
	Global_58896[83 /*7*/].f_1 = joaat("SM_ZITITZIT");
	Global_58896[83 /*7*/] = 1;
	Global_58896[84 /*7*/].f_1 = joaat("SM_RADCHACNT");
	Global_58896[84 /*7*/] = 1;
	Global_58896[85 /*7*/].f_1 = joaat("SM_RADCHAWZL");
	Global_58896[85 /*7*/] = 1;
	Global_58896[88 /*7*/].f_1 = joaat("SM_PARA");
	Global_58896[88 /*7*/] = 1;
	Global_58896[89 /*7*/].f_1 = joaat("SM_TKFIRE");
	Global_58896[89 /*7*/] = 1;
	Global_58896[90 /*7*/].f_1 = joaat("SM_FIBAI");
	Global_58896[90 /*7*/] = 1;
	Global_58896[91 /*7*/].f_1 = joaat("SM_TANDES");
	Global_58896[91 /*7*/] = 1;
	Global_58896[92 /*7*/].f_1 = joaat("SM_GAREP");
	Global_58896[92 /*7*/] = 1;
	Global_58896[93 /*7*/].f_1 = joaat("SM_GAMONSP");
	Global_58896[93 /*7*/] = 1;
	Global_58896[94 /*7*/].f_1 = joaat("SM_MONB");
	Global_58896[94 /*7*/] = 1;
	Global_58896[98 /*7*/].f_1 = joaat("SM_MONUPSHK");
	Global_58896[98 /*7*/] = 1;
	Global_58896[100 /*7*/].f_1 = joaat("SM_TAXDEST");
	Global_58896[100 /*7*/] = 1;
	Global_58896[101 /*7*/].f_1 = joaat("SM_KILWBFA");
	Global_58896[101 /*7*/] = 1;
	Global_58896[102 /*7*/].f_1 = joaat("SM_KILWBRU");
	Global_58896[102 /*7*/] = 1;
	Global_58896[104 /*7*/].f_1 = joaat("SM_KILWMAI");
	Global_58896[104 /*7*/] = 1;
	Global_58896[105 /*7*/].f_1 = joaat("SM_KILWSHT");
	Global_58896[105 /*7*/] = 1;
	Global_58896[106 /*7*/].f_1 = joaat("SM_KILWUMA");
	Global_58896[106 /*7*/] = 1;
	Global_58896[107 /*7*/].f_1 = joaat("SM_KILWVAP");
	Global_58896[107 /*7*/] = 1;
	Global_58896[108 /*7*/].f_1 = joaat("SM_KILWVOM");
	Global_58896[108 /*7*/] = 1;
	Global_58896[109 /*7*/].f_1 = joaat("SM_KILWHVY");
	Global_58896[109 /*7*/] = 1;
	Global_58896[112 /*7*/].f_1 = joaat("SM_CLOBOFBIN");
	Global_58896[112 /*7*/] = 1;
	Global_58896[113 /*7*/].f_1 = joaat("SM_CLOBOFPKW");
	Global_58896[113 /*7*/] = 1;
	Global_58896[114 /*7*/].f_1 = joaat("SM_CLOBOFPON");
	Global_58896[114 /*7*/] = 1;
	Global_58896[117 /*7*/].f_1 = joaat("SM_YOGA");
	Global_58896[117 /*7*/] = 1;
	Global_58896[118 /*7*/].f_1 = joaat("SM_TRI");
	Global_58896[118 /*7*/] = 1;
	Global_58896[119 /*7*/].f_1 = joaat("SM_GYM");
	Global_58896[119 /*7*/] = 1;
	Global_58896[120 /*7*/].f_1 = joaat("SM_STRIP");
	Global_58896[120 /*7*/] = 1;
	Global_58896[121 /*7*/].f_1 = joaat("SM_UGHOK");
	Global_58896[121 /*7*/] = 1;
	Global_58896[122 /*7*/].f_1 = joaat("SM_STRTRO");
	Global_58896[122 /*7*/] = 1;
	Global_58896[123 /*7*/].f_1 = joaat("SM_PISCO");
	Global_58896[123 /*7*/] = 1;
	Global_58896[124 /*7*/].f_1 = joaat("SM_TOTINJ");
	Global_58896[124 /*7*/] = 1;
	Global_58896[125 /*7*/].f_1 = joaat("SM_DRUGKIL");
	Global_58896[125 /*7*/] = 1;
	Global_58896[126 /*7*/].f_1 = joaat("SM_HANGOVR");
	Global_58896[126 /*7*/] = 1;
	Global_58896[127 /*7*/].f_1 = joaat("SM_KILLSPR");
	Global_58896[127 /*7*/] = 1;
	Global_58896[129 /*7*/].f_1 = joaat("SM_PEDFIREKILL");
	Global_58896[129 /*7*/] = 1;
	Global_58896[130 /*7*/].f_1 = joaat("SM_PEDFIRETICK");
	Global_58896[130 /*7*/] = 1;
	Global_58896[131 /*7*/].f_1 = joaat("SM_TVTICKWAP");
	Global_58896[131 /*7*/] = 1;
	Global_58896[132 /*7*/].f_1 = joaat("SM_TVTICKWIW");
	Global_58896[132 /*7*/] = 1;
	Global_58896[134 /*7*/].f_1 = joaat("SM_ZITPOPZIT");
	Global_58896[134 /*7*/] = 1;
	Global_58896[135 /*7*/].f_1 = joaat("SM_CARAPP");
	Global_58896[135 /*7*/] = 1;
	Global_58896[137 /*7*/].f_1 = joaat("SM_STOROB");
	Global_58896[137 /*7*/] = 1;
	Global_58896[162 /*7*/].f_1 = joaat("SM_PHONCALBDG");
	Global_58896[162 /*7*/] = 1;
	Global_58896[163 /*7*/].f_1 = joaat("SM_PHONCALTNK");
	Global_58896[163 /*7*/] = 1;
	Global_58896[164 /*7*/].f_1 = joaat("SM_PHONCALWIZ");
	Global_58896[164 /*7*/] = 1;
	Global_58896[165 /*7*/].f_1 = joaat("SM_PHONTXTBDG");
	Global_58896[165 /*7*/] = 1;
	Global_58896[166 /*7*/].f_1 = joaat("SM_PHONTXTTNK");
	Global_58896[166 /*7*/] = 1;
	Global_58896[167 /*7*/].f_1 = joaat("SM_PHONTXTWIZ");
	Global_58896[167 /*7*/] = 1;
	Global_58896[168 /*7*/].f_1 = joaat("SM_CHTICKBDG");
	Global_58896[168 /*7*/] = 1;
	Global_58896[169 /*7*/].f_1 = joaat("SM_CHTICKTNK");
	Global_58896[169 /*7*/] = 1;
	Global_58896[170 /*7*/].f_1 = joaat("SM_CHTICKWIZ");
	Global_58896[170 /*7*/] = 1;
	Global_58896[171 /*7*/].f_1 = joaat("SM_CALCANBDG");
	Global_58896[171 /*7*/] = 1;
	Global_58896[172 /*7*/].f_1 = joaat("SM_CALCANTNK");
	Global_58896[172 /*7*/] = 1;
	Global_58896[173 /*7*/].f_1 = joaat("SM_CALCANWIZ");
	Global_58896[173 /*7*/] = 1;
	Global_58896[138 /*7*/].f_2 = 1;
	Global_58896[138 /*7*/].f_3 = joaat("SP0_DIST_WALKING");
	Global_58896[138 /*7*/].f_4 = 1;
	Global_58896[139 /*7*/].f_2 = 1;
	Global_58896[139 /*7*/].f_3 = joaat("SP1_DIST_WALKING");
	Global_58896[139 /*7*/].f_4 = 1;
	Global_58896[140 /*7*/].f_2 = 1;
	Global_58896[140 /*7*/].f_3 = joaat("SP2_DIST_WALKING");
	Global_58896[140 /*7*/].f_4 = 1;
	Global_58896[141 /*7*/].f_2 = 1;
	Global_58896[141 /*7*/].f_3 = joaat("SP0_DIST_DRIVING_BICYCLE");
	Global_58896[141 /*7*/].f_4 = 1;
	Global_58896[142 /*7*/].f_2 = 1;
	Global_58896[142 /*7*/].f_3 = joaat("SP1_DIST_DRIVING_BICYCLE");
	Global_58896[142 /*7*/].f_4 = 1;
	Global_58896[143 /*7*/].f_2 = 1;
	Global_58896[143 /*7*/].f_3 = joaat("SP2_DIST_DRIVING_BICYCLE");
	Global_58896[143 /*7*/].f_4 = 1;
	Global_58896[144 /*7*/].f_2 = 1;
	Global_58896[144 /*7*/].f_3 = joaat("SP0_BAILED_FROM_VEHICLE");
	Global_58896[144 /*7*/].f_4 = 0;
	Global_58896[145 /*7*/].f_2 = 1;
	Global_58896[145 /*7*/].f_3 = joaat("SP1_BAILED_FROM_VEHICLE");
	Global_58896[145 /*7*/].f_4 = 0;
	Global_58896[146 /*7*/].f_2 = 1;
	Global_58896[146 /*7*/].f_3 = joaat("SP2_BAILED_FROM_VEHICLE");
	Global_58896[146 /*7*/].f_4 = 0;
	Global_58896[150 /*7*/].f_2 = 1;
	Global_58896[150 /*7*/].f_3 = joaat("SP0_LARGE_ACCIDENTS");
	Global_58896[150 /*7*/].f_4 = 0;
	Global_58896[151 /*7*/].f_2 = 1;
	Global_58896[151 /*7*/].f_3 = joaat("SP1_LARGE_ACCIDENTS");
	Global_58896[151 /*7*/].f_4 = 0;
	Global_58896[152 /*7*/].f_2 = 1;
	Global_58896[152 /*7*/].f_3 = joaat("SP2_LARGE_ACCIDENTS");
	Global_58896[152 /*7*/].f_4 = 0;
	Global_58896[153 /*7*/].f_2 = 1;
	Global_58896[153 /*7*/].f_3 = joaat("SP0_TOTAL_LEGITIMATE_KILLS");
	Global_58896[153 /*7*/].f_4 = 0;
	Global_58896[154 /*7*/].f_2 = 1;
	Global_58896[154 /*7*/].f_3 = joaat("SP1_TOTAL_LEGITIMATE_KILLS");
	Global_58896[154 /*7*/].f_4 = 0;
	Global_58896[155 /*7*/].f_2 = 1;
	Global_58896[155 /*7*/].f_3 = joaat("SP2_TOTAL_LEGITIMATE_KILLS");
	Global_58896[155 /*7*/].f_4 = 0;
	Global_58896[156 /*7*/].f_2 = 1;
	Global_58896[156 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_TAXIS");
	Global_58896[156 /*7*/].f_4 = 0;
	Global_58896[157 /*7*/].f_2 = 1;
	Global_58896[157 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_TAXIS");
	Global_58896[157 /*7*/].f_4 = 0;
	Global_58896[158 /*7*/].f_2 = 1;
	Global_58896[158 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_TAXIS");
	Global_58896[158 /*7*/].f_4 = 0;
	Global_58896[159 /*7*/].f_2 = 1;
	Global_58896[159 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_HEALTHCARE");
	Global_58896[159 /*7*/].f_4 = 0;
	Global_58896[160 /*7*/].f_2 = 1;
	Global_58896[160 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_HEALTHCARE");
	Global_58896[160 /*7*/].f_4 = 0;
	Global_58896[161 /*7*/].f_2 = 1;
	Global_58896[161 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_HEALTHCARE");
	Global_58896[161 /*7*/].f_4 = 0;
	Global_58896[174 /*7*/].f_2 = 1;
	Global_58896[174 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_IN_COP_BRIBES");
	Global_58896[174 /*7*/].f_4 = 0;
	Global_58896[175 /*7*/].f_2 = 1;
	Global_58896[175 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_IN_COP_BRIBES");
	Global_58896[175 /*7*/].f_4 = 0;
	Global_58896[176 /*7*/].f_2 = 1;
	Global_58896[176 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_IN_COP_BRIBES");
	Global_58896[176 /*7*/].f_4 = 0;
	Global_58896[177 /*7*/].f_2 = 1;
	Global_58896[177 /*7*/].f_3 = joaat("SP0_BUSTED");
	Global_58896[177 /*7*/].f_4 = 0;
	Global_58896[178 /*7*/].f_2 = 1;
	Global_58896[178 /*7*/].f_3 = joaat("SP1_BUSTED");
	Global_58896[178 /*7*/].f_4 = 0;
	Global_58896[179 /*7*/].f_2 = 1;
	Global_58896[179 /*7*/].f_3 = joaat("SP2_BUSTED");
	Global_58896[179 /*7*/].f_4 = 0;
	Global_58896[180 /*7*/].f_2 = 1;
	Global_58896[180 /*7*/].f_3 = joaat("SP0_DIED_IN_FALL");
	Global_58896[180 /*7*/].f_4 = 0;
	Global_58896[181 /*7*/].f_2 = 1;
	Global_58896[181 /*7*/].f_3 = joaat("SP1_DIED_IN_FALL");
	Global_58896[181 /*7*/].f_4 = 0;
	Global_58896[182 /*7*/].f_2 = 1;
	Global_58896[182 /*7*/].f_3 = joaat("SP2_DIED_IN_FALL");
	Global_58896[182 /*7*/].f_4 = 0;
	Global_58896[183 /*7*/].f_2 = 1;
	Global_58896[183 /*7*/].f_3 = joaat("SP0_STARS_ATTAINED");
	Global_58896[183 /*7*/].f_4 = 0;
	Global_58896[184 /*7*/].f_2 = 1;
	Global_58896[184 /*7*/].f_3 = joaat("SP1_STARS_ATTAINED");
	Global_58896[184 /*7*/].f_4 = 0;
	Global_58896[185 /*7*/].f_2 = 1;
	Global_58896[185 /*7*/].f_3 = joaat("SP2_STARS_ATTAINED");
	Global_58896[185 /*7*/].f_4 = 0;
	Global_58896[186 /*7*/].f_2 = 1;
	Global_58896[186 /*7*/].f_3 = joaat("SP0_STARS_EVADED");
	Global_58896[186 /*7*/].f_4 = 0;
	Global_58896[187 /*7*/].f_2 = 1;
	Global_58896[187 /*7*/].f_3 = joaat("SP1_STARS_EVADED");
	Global_58896[187 /*7*/].f_4 = 0;
	Global_58896[188 /*7*/].f_2 = 1;
	Global_58896[188 /*7*/].f_3 = joaat("SP2_STARS_EVADED");
	Global_58896[188 /*7*/].f_4 = 0;
	Global_58896[189 /*7*/].f_2 = 1;
	Global_58896[189 /*7*/].f_3 = joaat("SP0_MANUAL_SAVED");
	Global_58896[189 /*7*/].f_4 = 0;
	Global_58896[190 /*7*/].f_2 = 1;
	Global_58896[190 /*7*/].f_3 = joaat("SP1_MANUAL_SAVED");
	Global_58896[190 /*7*/].f_4 = 0;
	Global_58896[191 /*7*/].f_2 = 1;
	Global_58896[191 /*7*/].f_3 = joaat("SP2_MANUAL_SAVED");
	Global_58896[191 /*7*/].f_4 = 0;
	Global_58896[192 /*7*/].f_2 = 1;
	Global_58896[192 /*7*/].f_3 = joaat("SP0_KILLS_COP");
	Global_58896[192 /*7*/].f_4 = 0;
	Global_58896[193 /*7*/].f_2 = 1;
	Global_58896[193 /*7*/].f_3 = joaat("SP1_KILLS_COP");
	Global_58896[193 /*7*/].f_4 = 0;
	Global_58896[194 /*7*/].f_2 = 1;
	Global_58896[194 /*7*/].f_3 = joaat("SP2_KILLS_COP");
	Global_58896[194 /*7*/].f_4 = 0;
	Global_58896[195 /*7*/].f_2 = 1;
	Global_58896[195 /*7*/].f_3 = joaat("SP0_KILLS_SWAT");
	Global_58896[195 /*7*/].f_4 = 0;
	Global_58896[196 /*7*/].f_2 = 1;
	Global_58896[196 /*7*/].f_3 = joaat("SP1_KILLS_SWAT");
	Global_58896[196 /*7*/].f_4 = 0;
	Global_58896[197 /*7*/].f_2 = 1;
	Global_58896[197 /*7*/].f_3 = joaat("SP2_KILLS_SWAT");
	Global_58896[197 /*7*/].f_4 = 0;
	Global_58896[198 /*7*/].f_2 = 1;
	Global_58896[198 /*7*/].f_3 = joaat("SP0_TIME_IN_COVER");
	Global_58896[198 /*7*/].f_4 = 0;
	Global_58896[199 /*7*/].f_2 = 1;
	Global_58896[199 /*7*/].f_3 = joaat("SP1_TIME_IN_COVER");
	Global_58896[199 /*7*/].f_4 = 0;
	Global_58896[200 /*7*/].f_2 = 1;
	Global_58896[200 /*7*/].f_3 = joaat("SP2_TIME_IN_COVER");
	Global_58896[200 /*7*/].f_4 = 0;
	Global_58334[0 /*7*/] = joaat("SM_PRICE_AMU");
	Global_58334[0 /*7*/].f_3[0] = joaat("AMU_OW0");
	Global_58334[0 /*7*/].f_3[1] = joaat("AMU_OW1");
	Global_58334[0 /*7*/].f_3[2] = joaat("AMU_OW2");
	Global_58334[1 /*7*/] = joaat("SM_PRICE_BDG");
	Global_58334[1 /*7*/].f_3[0] = joaat("BDG_OW0");
	Global_58334[1 /*7*/].f_3[1] = joaat("BDG_OW1");
	Global_58334[1 /*7*/].f_3[2] = joaat("BDG_OW2");
	Global_58334[2 /*7*/] = joaat("SM_PRICE_BFA");
	Global_58334[2 /*7*/].f_3[0] = joaat("BFA_OW0");
	Global_58334[2 /*7*/].f_3[1] = joaat("BFA_OW1");
	Global_58334[2 /*7*/].f_3[2] = joaat("BFA_OW2");
	Global_58334[3 /*7*/] = joaat("SM_PRICE_BIN");
	Global_58334[3 /*7*/].f_3[0] = joaat("BIN_OW0");
	Global_58334[3 /*7*/].f_3[1] = joaat("BIN_OW1");
	Global_58334[3 /*7*/].f_3[2] = joaat("BIN_OW2");
	Global_58334[4 /*7*/] = joaat("SM_PRICE_BTR");
	Global_58334[4 /*7*/].f_3[0] = joaat("BTR_OW0");
	Global_58334[4 /*7*/].f_3[1] = joaat("BTR_OW1");
	Global_58334[4 /*7*/].f_3[2] = joaat("BTR_OW2");
	Global_58334[5 /*7*/] = joaat("SM_PRICE_BLE");
	Global_58334[5 /*7*/].f_3[0] = joaat("BLE_OW0");
	Global_58334[5 /*7*/].f_3[1] = joaat("BLE_OW1");
	Global_58334[5 /*7*/].f_3[2] = joaat("BLE_OW2");
	Global_58334[6 /*7*/] = joaat("SM_PRICE_BRU");
	Global_58334[6 /*7*/].f_3[0] = joaat("BRU_OW0");
	Global_58334[6 /*7*/].f_3[1] = joaat("BRU_OW1");
	Global_58334[6 /*7*/].f_3[2] = joaat("BRU_OW2");
	Global_58334[7 /*7*/] = joaat("SM_PRICE_CNT");
	Global_58334[7 /*7*/].f_3[0] = joaat("CNT_OW0");
	Global_58334[7 /*7*/].f_3[1] = joaat("CNT_OW1");
	Global_58334[7 /*7*/].f_3[2] = joaat("CNT_OW2");
	Global_58334[8 /*7*/] = joaat("SM_PRICE_CRE");
	Global_58334[8 /*7*/].f_3[0] = joaat("CRE_OW0");
	Global_58334[8 /*7*/].f_3[1] = joaat("CRE_OW1");
	Global_58334[8 /*7*/].f_3[2] = joaat("CRE_OW2");
	Global_58334[9 /*7*/] = joaat("SM_PRICE_DGP");
	Global_58334[9 /*7*/].f_3[0] = joaat("DGP_OW0");
	Global_58334[9 /*7*/].f_3[1] = joaat("DGP_OW1");
	Global_58334[9 /*7*/].f_3[2] = joaat("DGP_OW2");
	Global_58334[10 /*7*/] = joaat("SM_PRICE_WAP");
	Global_58334[10 /*7*/].f_3[0] = joaat("WAP_OW0");
	Global_58334[10 /*7*/].f_3[1] = joaat("WAP_OW1");
	Global_58334[10 /*7*/].f_3[2] = joaat("WAP_OW2");
	Global_58334[11 /*7*/] = joaat("SM_PRICE_FAC");
	Global_58334[11 /*7*/].f_3[0] = joaat("FAC_OW0");
	Global_58334[11 /*7*/].f_3[1] = joaat("FAC_OW1");
	Global_58334[11 /*7*/].f_3[2] = joaat("FAC_OW2");
	Global_58334[12 /*7*/] = joaat("SM_PRICE_FRT");
	Global_58334[12 /*7*/].f_3[0] = joaat("FRT_OW0");
	Global_58334[12 /*7*/].f_3[1] = joaat("FRT_OW1");
	Global_58334[12 /*7*/].f_3[2] = joaat("FRT_OW2");
	Global_58334[13 /*7*/] = joaat("SM_PRICE_LSC");
	Global_58334[13 /*7*/].f_3[0] = joaat("LSC_OW0");
	Global_58334[13 /*7*/].f_3[1] = joaat("LSC_OW1");
	Global_58334[13 /*7*/].f_3[2] = joaat("LSC_OW2");
	Global_58334[14 /*7*/] = joaat("SM_PRICE_LST");
	Global_58334[14 /*7*/].f_3[0] = joaat("LST_OW0");
	Global_58334[14 /*7*/].f_3[1] = joaat("LST_OW1");
	Global_58334[14 /*7*/].f_3[2] = joaat("LST_OW2");
	Global_58334[15 /*7*/] = joaat("SM_PRICE_LTD");
	Global_58334[15 /*7*/].f_3[0] = joaat("LTD_OW0");
	Global_58334[15 /*7*/].f_3[1] = joaat("LTD_OW1");
	Global_58334[15 /*7*/].f_3[2] = joaat("LTD_OW2");
	Global_58334[16 /*7*/] = joaat("SM_PRICE_MAI");
	Global_58334[16 /*7*/].f_3[0] = joaat("MAI_OW0");
	Global_58334[16 /*7*/].f_3[1] = joaat("MAI_OW1");
	Global_58334[16 /*7*/].f_3[2] = joaat("MAI_OW2");
	Global_58334[17 /*7*/] = joaat("SM_PRICE_PKW");
	Global_58334[17 /*7*/].f_3[0] = joaat("PKW_OW0");
	Global_58334[17 /*7*/].f_3[1] = joaat("PKW_OW1");
	Global_58334[17 /*7*/].f_3[2] = joaat("PKW_OW2");
	Global_58334[18 /*7*/] = joaat("SM_PRICE_PIS");
	Global_58334[18 /*7*/].f_3[0] = joaat("PIS_OW0");
	Global_58334[18 /*7*/].f_3[1] = joaat("PIS_OW1");
	Global_58334[18 /*7*/].f_3[2] = joaat("PIS_OW2");
	Global_58334[19 /*7*/] = joaat("SM_PRICE_PON");
	Global_58334[19 /*7*/].f_3[0] = joaat("PON_OW0");
	Global_58334[19 /*7*/].f_3[1] = joaat("PON_OW1");
	Global_58334[19 /*7*/].f_3[2] = joaat("PON_OW2");
	Global_58334[20 /*7*/] = joaat("SM_PRICE_RON");
	Global_58334[20 /*7*/].f_3[0] = joaat("RON_OW0");
	Global_58334[20 /*7*/].f_3[1] = joaat("RON_OW1");
	Global_58334[20 /*7*/].f_3[2] = joaat("RON_OW2");
	Global_58334[21 /*7*/] = joaat("SM_PRICE_SHT");
	Global_58334[21 /*7*/].f_3[0] = joaat("SHT_OW0");
	Global_58334[21 /*7*/].f_3[1] = joaat("SHT_OW1");
	Global_58334[21 /*7*/].f_3[2] = joaat("SHT_OW2");
	Global_58334[22 /*7*/] = joaat("SM_PRICE_SPU");
	Global_58334[22 /*7*/].f_3[0] = joaat("SPU_OW0");
	Global_58334[22 /*7*/].f_3[1] = joaat("SPU_OW1");
	Global_58334[22 /*7*/].f_3[2] = joaat("SPU_OW2");
	Global_58334[23 /*7*/] = joaat("SM_PRICE_TNK");
	Global_58334[23 /*7*/].f_3[0] = joaat("TNK_OW0");
	Global_58334[23 /*7*/].f_3[1] = joaat("TNK_OW1");
	Global_58334[23 /*7*/].f_3[2] = joaat("TNK_OW2");
	Global_58334[24 /*7*/] = joaat("SM_PRICE_WIW");
	Global_58334[24 /*7*/].f_3[0] = joaat("WIW_OW0");
	Global_58334[24 /*7*/].f_3[1] = joaat("WIW_OW1");
	Global_58334[24 /*7*/].f_3[2] = joaat("WIW_OW2");
	Global_58334[25 /*7*/] = joaat("SM_PRICE_UMA");
	Global_58334[25 /*7*/].f_3[0] = joaat("UMA_OW0");
	Global_58334[25 /*7*/].f_3[1] = joaat("UMA_OW1");
	Global_58334[25 /*7*/].f_3[2] = joaat("UMA_OW2");
	Global_58334[26 /*7*/] = joaat("SM_PRICE_VAP");
	Global_58334[26 /*7*/].f_3[0] = joaat("VAP_OW0");
	Global_58334[26 /*7*/].f_3[1] = joaat("VAP_OW1");
	Global_58334[26 /*7*/].f_3[2] = joaat("VAP_OW2");
	Global_58334[27 /*7*/] = joaat("SM_PRICE_VOM");
	Global_58334[27 /*7*/].f_3[0] = joaat("VOM_OW0");
	Global_58334[27 /*7*/].f_3[1] = joaat("VOM_OW1");
	Global_58334[27 /*7*/].f_3[2] = joaat("VOM_OW2");
	Global_58334[28 /*7*/] = joaat("SM_PRICE_WZL");
	Global_58334[28 /*7*/].f_3[0] = joaat("WZL_OW0");
	Global_58334[28 /*7*/].f_3[1] = joaat("WZL_OW1");
	Global_58334[28 /*7*/].f_3[2] = joaat("WZL_OW2");
	Global_58334[29 /*7*/] = joaat("SM_PRICE_WIZ");
	Global_58334[29 /*7*/].f_3[0] = joaat("WIZ_OW0");
	Global_58334[29 /*7*/].f_3[1] = joaat("WIZ_OW1");
	Global_58334[29 /*7*/].f_3[2] = joaat("WIZ_OW2");
	Global_58334[30 /*7*/] = joaat("SM_PRICE_ZIT");
	Global_58334[30 /*7*/].f_3[0] = joaat("ZIT_OW0");
	Global_58334[30 /*7*/].f_3[1] = joaat("ZIT_OW1");
	Global_58334[30 /*7*/].f_3[2] = joaat("ZIT_OW2");
	Global_58334[31 /*7*/] = joaat("SM_PRICE_SHK");
	Global_58334[31 /*7*/].f_3[0] = joaat("SHK_OW0");
	Global_58334[31 /*7*/].f_3[1] = joaat("SHK_OW1");
	Global_58334[31 /*7*/].f_3[2] = joaat("SHK_OW2");
	Global_58334[32 /*7*/] = joaat("SM_PRICE_MOL");
	Global_58334[32 /*7*/].f_3[0] = joaat("MOL_OW0");
	Global_58334[32 /*7*/].f_3[1] = joaat("MOL_OW1");
	Global_58334[32 /*7*/].f_3[2] = joaat("MOL_OW2");
	Global_58334[33 /*7*/] = joaat("SM_PRICE_PMP");
	Global_58334[33 /*7*/].f_3[0] = joaat("PMP_OW0");
	Global_58334[33 /*7*/].f_3[1] = joaat("PMP_OW1");
	Global_58334[33 /*7*/].f_3[2] = joaat("PMP_OW2");
	Global_58334[34 /*7*/] = joaat("SM_PRICE_GOT");
	Global_58334[34 /*7*/].f_3[0] = joaat("GOT_OW0");
	Global_58334[34 /*7*/].f_3[1] = joaat("GOT_OW1");
	Global_58334[34 /*7*/].f_3[2] = joaat("GOT_OW2");
	Global_58334[35 /*7*/] = joaat("SM_PRICE_EYE");
	Global_58334[35 /*7*/].f_3[0] = joaat("EYE_OW0");
	Global_58334[35 /*7*/].f_3[1] = joaat("EYE_OW1");
	Global_58334[35 /*7*/].f_3[2] = joaat("EYE_OW2");
	Global_58334[36 /*7*/] = joaat("SM_PRICE_HVY");
	Global_58334[36 /*7*/].f_3[0] = joaat("HVY_OW0");
	Global_58334[36 /*7*/].f_3[1] = joaat("HVY_OW1");
	Global_58334[36 /*7*/].f_3[2] = joaat("HVY_OW2");
	Global_58334[37 /*7*/] = joaat("SM_PRICE_SHR");
	Global_58334[37 /*7*/].f_3[0] = joaat("SHR_OW0");
	Global_58334[37 /*7*/].f_3[1] = joaat("SHR_OW1");
	Global_58334[37 /*7*/].f_3[2] = joaat("SHR_OW2");
	Global_58334[38 /*7*/] = joaat("SM_PRICE_HAL");
	Global_58334[38 /*7*/].f_3[0] = joaat("HAL_OW0");
	Global_58334[38 /*7*/].f_3[1] = joaat("HAL_OW1");
	Global_58334[38 /*7*/].f_3[2] = joaat("HAL_OW2");
}

