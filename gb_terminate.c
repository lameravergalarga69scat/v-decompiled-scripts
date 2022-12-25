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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<11> Local_93 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_94[32];
	struct<21> Local_95 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_733(ScriptParam_95))
		{
			func_672();
		}
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_672();
		}
		switch (func_665(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_36__::func_258() == 1)
				{
					if (__LIB_0__::func_109())
					{
						func_662(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (__LIB_36__::func_258() == 1)
				{
					if (!func_660())
					{
						func_105();
					}
					if (func_53(1))
					{
						func_662(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
					}
				}
				else if (__LIB_36__::func_258() == 3)
				{
					func_662(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_672();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (__LIB_15__::func_374())
			{
				__LIB_36__::func_256(3);
			}
			switch (__LIB_36__::func_258())
			{
				case 0:
					if (func_43())
					{
						__LIB_36__::func_256(1);
					}
					break;
				case 1:
					if (func_42() == 3)
					{
						__LIB_36__::func_256(3);
					}
					else
					{
						func_1();
					}
					break;
				case 3:
					func_672();
					break;
				}
		}
	}
}

void func_1()//Position - 0x18A
{
	switch (Local_93.f_8)
	{
		case 0:
			if (__LIB_0__::func_109())
			{
				func_40(1);
			}
			func_38();
			break;
		case 1:
			func_38();
			func_2();
			break;
		case 2:
			if (BitTest(Local_93.f_1, 5))
			{
				func_40(3);
			}
			func_38();
			break;
		case 3:
			break;
	}
}

void func_2()//Position - 0x1E9
{
	if (!func_13(func_37()))
	{
		func_12(1);
		func_40(2);
		MISC::SET_BIT(&(Local_93.f_1), 2);
	}
	if (__LIB_0__::func_797() == __LIB_0__::func_162() || !__LIB_1__::func_693(__LIB_0__::func_797(), 0, 1))
	{
		func_12(3);
		func_40(2);
		MISC::SET_BIT(&(Local_93.f_1), 3);
	}
	if (BitTest(Local_93.f_1, 0))
	{
		if (__LIB_0__::func_937(&(Local_93.f_4), func_5(), 0))
		{
			MISC::SET_BIT(&(Local_93.f_1), 4);
		}
	}
	if (BitTest(Local_93.f_1, 4))
	{
		func_12(2);
		func_40(2);
	}
	if (BitTest(Local_93.f_1, 1) || BitTest(Local_93.f_1, 7))
	{
		func_12(0);
		func_40(2);
	}
}

int func_5()//Position - 0x337
{
	if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
	{
		return 120000;
	}
	return 300000;
}

void func_12(int iParam0)//Position - 0x493
{
	Local_93.f_9 = iParam0;
}

int func_13(bool bParam0)//Position - 0x4A1
{
	if (__LIB_36__::func_264(bParam0) && ((__LIB_30__::func_495(bParam0) == 142 || __LIB_30__::func_495(bParam0) == 164) || __LIB_30__::func_495(bParam0) == 148))
	{
		return 0;
	}
	if (bParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	if (!__LIB_1__::func_693(bParam0, 0, 1))
	{
		return 0;
	}
	if (__LIB_10__::func_774(bParam0, 1, 0))
	{
		return 0;
	}
	if (__LIB_10__::func_225(bParam0))
	{
		return 0;
	}
	if (__LIB_2__::func_72(bParam0, 1) && __LIB_2__::func_39(bParam0) == __LIB_0__::func_797())
	{
		return 0;
	}
	if (__LIB_26__::func_50(bParam0))
	{
		return 0;
	}
	if (__LIB_10__::func_167(bParam0, 7))
	{
		return 0;
	}
	if (__LIB_2__::func_154(bParam0))
	{
		return 0;
	}
	if (__LIB_36__::func_259(bParam0, 6))
	{
		return 0;
	}
	return 1;
}

bool func_37()//Position - 0x8D9
{
	return Local_93.f_2;
}

void func_38()//Position - 0x8E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_42() < 2)
		{
			if (BitTest(Local_94[iVar2 /*4*/].f_1, 1))
			{
				func_39(PLAYER::INT_TO_PLAYERINDEX(iVar2));
				MISC::SET_BIT(&(Local_93.f_1), 1);
			}
			if (BitTest(Local_94[iVar2 /*4*/].f_1, 4))
			{
				func_39(__LIB_0__::func_797());
				MISC::SET_BIT(&(Local_93.f_1), 7);
			}
			if (BitTest(Local_94[iVar2 /*4*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_93.f_1), 0);
			}
			if (BitTest(Local_94[iVar2 /*4*/].f_1, 2))
			{
				MISC::SET_BIT(&(Local_93.f_1), 4);
			}
		}
		else if (func_42() == 2)
		{
			if (BitTest(Local_94[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_42() == 2)
	{
		if (iVar0 == NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
		{
			MISC::SET_BIT(&(Local_93.f_1), 5);
		}
		else if (__LIB_0__::func_937(&(Local_93.f_6), 10000, 0))
		{
			MISC::SET_BIT(&(Local_93.f_1), 5);
		}
	}
}

void func_39(bool bParam0)//Position - 0x9CB
{
	Local_93.f_3 = bParam0;
}

void func_40(int iParam0)//Position - 0x9D9
{
	Local_93.f_8 = iParam0;
}

int func_42()//Position - 0x9F0
{
	return Local_93.f_8;
}

int func_43()//Position - 0x9FC
{
	if (func_44())
	{
		return 1;
	}
	return 0;
}

int func_44()//Position - 0xA10
{
	if (BitTest(Local_93.f_1, 6))
	{
		return 1;
	}
	func_50(__LIB_0__::func_162());
	if (Global_2815059.f_5195.f_4 != __LIB_0__::func_162())
	{
	}
	else
	{
		__LIB_36__::func_256(3);
	}
	if (__LIB_1__::func_693(Global_2815059.f_5195.f_4, 0, 1))
	{
		if (!__LIB_2__::func_61(Global_2815059.f_5195.f_4, PLAYER::PLAYER_ID(), 1))
		{
			func_50(Global_2815059.f_5195.f_4);
		}
	}
	if (func_37() != __LIB_0__::func_162())
	{
		if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
		{
			if (__LIB_3__::func_728(func_37(), 4))
			{
				Local_93.f_10 = 1;
			}
		}
		__LIB_36__::func_255(__LIB_1__::func_705(func_37()), 1);
		Global_2815059.f_5195.f_4 = __LIB_0__::func_162();
		MISC::SET_BIT(&(Local_93.f_1), 6);
		return 1;
	}
	else if (func_37() == __LIB_0__::func_162())
	{
	}
	return 0;
}

void func_50(bool bParam0)//Position - 0xBCF
{
	Local_93.f_2 = bParam0;
	if (bParam0 == __LIB_0__::func_162())
	{
	}
}

int func_53(bool bParam0)//Position - 0xC18
{
	if (!__LIB_1__::func_836(PLAYER::PLAYER_ID(), 3) && func_64(1))
	{
		return 1;
	}
	if (Global_2815059.f_5195.f_43)
	{
		Global_2815059.f_5195.f_43 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (__LIB_1__::func_730() == __LIB_0__::func_162() || !__LIB_1__::func_693(__LIB_1__::func_730(), 0, 1))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_836(PLAYER::PLAYER_ID(), 1) && !__LIB_9__::func_704(PLAYER::PLAYER_ID()))
	{
		if (__LIB_34__::func_710())
		{
			return 1;
		}
	}
	return 0;
}

int func_64(bool bParam0)//Position - 0x1252
{
	bool bVar0;
	if (!__LIB_2__::func_159(1) && __LIB_1__::func_730() != PLAYER::PLAYER_ID())
	{
		bVar0 = false;
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__::func_162())
		{
			if (__LIB_1__::func_693(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, 0, 1))
			{
				if ((Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 4 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 8) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (__LIB_1__::func_726(__LIB_30__::func_495(PLAYER::PLAYER_ID())) == 0 || __LIB_1__::func_726(__LIB_30__::func_495(PLAYER::PLAYER_ID())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				__LIB_1__::func_928(31);
				if (__LIB_29__::func_860(__LIB_30__::func_495(PLAYER::PLAYER_ID())))
				{
					__LIB_1__::func_928(81);
				}
				if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
				{
					Global_1888322 = __LIB_32__::func_173(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, -2, 0, 0, 0);
					if (!__LIB_2__::func_121(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
					{
						__LIB_1__::func_928(88);
					}
				}
				else
				{
					Global_1888322 = 1;
				}
				Global_1888306 = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

void func_105()//Position - 0x25AA
{
	switch (func_659())
	{
		case 0:
			func_644(151, 1, -1, 0);
			func_643(1);
			if (func_42() > 0)
			{
				func_642(1);
			}
			break;
		case 1:
			if (!BitTest(uLocal_91, 2))
			{
				func_639();
			}
			if (Global_1952154 == __LIB_0__::func_162())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_37()))
				{
					Global_1952154 = func_37();
				}
			}
			func_633();
			func_623();
			func_601();
			func_599();
			func_554();
			func_418(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
			if (func_42() > 1)
			{
				func_642(2);
			}
			break;
		case 2:
			if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
			{
				func_416(0, __LIB_0__::func_162());
				func_372();
				func_106();
			}
			if (func_42() > 2)
			{
				func_642(3);
			}
			break;
		case 3:
			break;
	}
}

void func_106()//Position - 0x2693
{
	struct<20> Var0;
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
	{
		if ((BitTest(Local_93.f_1, 2) || BitTest(Local_93.f_1, 4)) || BitTest(Local_93.f_1, 4))
		{
			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (__LIB_0__::func_114())
		{
			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_365())
		{
			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (BitTest(Local_93.f_1, 7))
		{
			func_107(151, 1, &Var0, 0);
		}
		else
		{
			func_107(151, BitTest(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 1), &Var0, 0);
		}
		MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
	}
}

void func_107(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x2779
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	__LIB_36__::func_261(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_362(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + __LIB_15__::func_393(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (__LIB_34__::func_903(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_15__::func_392(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_15__::func_547();
				}
			}
			else if (__LIB_15__::func_392(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_15__::func_546();
			}
			else
			{
				__LIB_15__::func_547();
			}
		}
		else
		{
			__LIB_12__::func_585();
		}
	}
	func_339(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_336(iParam0, uParam2, &iVar0, &iVar5);
	func_315(iParam0, uParam2, &iVar0, &iVar5);
	func_312(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_305(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__::func_730();
	if (iVar8 != __LIB_0__::func_162() && iParam0 != 148)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_2__::func_61(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_295(&iVar0, 1);
			}
		}
	}
	__LIB_34__::func_714(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__::func_925();
		func_241(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		func_211(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		__LIB_36__::func_260(iParam0, iVar0);
		if (__LIB_15__::func_381(iParam0))
		{
			if (__LIB_15__::func_380(iParam0) > -1)
			{
				__LIB_1__::func_926(__LIB_15__::func_380(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__::func_627(&Global_2725869, 0, 0);
	}
	if (__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
	{
		__LIB_36__::func_265(iParam0);
	}
	if ((__LIB_29__::func_860(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_12__::func_499(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_4__::func_740(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__::func_612(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_1__::func_77(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_4__::func_78(iParam0))
	{
		if (__LIB_15__::func_326(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((func_184(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_12__::func_747(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_4__::func_184(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_11__::func_619(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_3__::func_691(iParam0) || __LIB_15__::func_310(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	__LIB_24__::func_406(bParam1, iParam0);
}

int func_184(int iParam0)//Position - 0x28D0A
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && __LIB_4__::func_373(func_186(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_186(bool bParam0)//Position - 0x28DCB
{
	if (__LIB_30__::func_495(bParam0) == 237 || __LIB_30__::func_495(bParam0) == 250)
	{
		return func_187(bParam0);
	}
	return -1;
}

int func_187(bool bParam0)//Position - 0x28DF8
{
	if (__LIB_0__::func_321(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2A17D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	struct<2> Var9;
	char* sVar10;
	bVar6 = __LIB_0__::func_797();
	if (bVar6 != __LIB_0__::func_162())
	{
		__LIB_30__::func_542(bVar6, &iVar0, &iVar1);
	}
	bVar7 = !__LIB_2__::func_159(1);
	bVar8 = __LIB_2__::func_159(0);
	Var9.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!__LIB_0__::func_112())
			{
				MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			if (bVar8)
			{
				bVar5 = true;
			}
			break;
		case 190:
			if (__LIB_15__::func_361())
			{
				if (!__LIB_0__::func_112())
				{
					Var9 = { __LIB_15__::func_382() };
					MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(__LIB_12__::func_642(Var9.f_0)), __LIB_1__::func_794(Var9.f_0), iParam4);
				}
			}
			else if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_BOSS_AGENCY"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			if (bVar8)
			{
				bVar5 = true;
			}
			break;
		case 226:
			if (__LIB_2__::func_50())
			{
				if (!__LIB_0__::func_112())
				{
					MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(__LIB_12__::func_642(__LIB_1__::func_721(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_BOSS_AGENCY"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			if (bVar8)
			{
				bVar5 = true;
			}
			break;
		case 230:
			if (__LIB_2__::func_50())
			{
				if (!__LIB_0__::func_112())
				{
					iVar2 = __LIB_15__::func_642(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::NETWORK_EARN_FROM_SMUGGLER_WORK(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else
			{
				if (__LIB_0__::func_112())
				{
					__LIB_9__::func_982(joaat("SERVICE_EARN_SMUGGLER_AGENCY"), iParam1, &iVar4, 0, 1, 0);
					Global_4534105[iVar4 /*85*/].f_6 = iVar0;
					Global_4534105[iVar4 /*85*/].f_7 = iVar1;
					Global_4534105[iVar4 /*85*/].f_8 = bVar7;
				}
				else
				{
					MONEY::NETWORK_EARN_SMUGGLER_AGENCY(iVar0, iVar1, iParam1, bVar7);
				}
				if (bVar8)
				{
					bVar5 = true;
				}
			}
			break;
		case 233:
			if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(iParam1);
			}
			break;
		case 237:
			if (__LIB_2__::func_50())
			{
				if (!__LIB_0__::func_112())
				{
					MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(iParam1, uParam5->f_20, iParam4);
				}
			}
			else
			{
				if (__LIB_0__::func_112())
				{
					__LIB_9__::func_982(joaat("SERVICE_EARN_BOSS_AGENCY"), iParam1, &iVar4, 0, 1, 0);
					Global_4534105[iVar4 /*85*/].f_6 = iVar0;
					Global_4534105[iVar4 /*85*/].f_7 = iVar1;
					Global_4534105[iVar4 /*85*/].f_8 = bVar7;
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
				}
				if (bVar8)
				{
					bVar5 = true;
				}
			}
			break;
		case 250:
			if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
				Global_4534105[iVar4 /*85*/] = 1781827765;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(iParam1, 1781827765);
			}
			break;
		case 249:
			if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(iParam1);
			}
			break;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(iParam1);
			}
			break;
		case 243:
			if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_CASINO_MISSION_REWARD"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		case 158:
			if (uParam5->f_22)
			{
				if (__LIB_0__::func_112())
				{
					__LIB_9__::func_982(joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"), iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"), iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		default:
			if (__LIB_0__::func_112())
			{
				__LIB_9__::func_982(joaat("SERVICE_EARN_BOSS_AGENCY"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_AGENCY(iVar0, iVar1, iParam1, bVar7);
			}
			break;
	}
	if (bVar5)
	{
		sVar10 = "GBMR_SELLTICK0" /* GXT: You earned $~1~ for helping your VIP to complete a Sell mission. */;
		if (__LIB_3__::func_195(1))
		{
			sVar10 = "GBMR_SELLTICK2" /* GXT: You earned $~1~ for helping your MC President to complete a Sell mission. */;
		}
		else if (__LIB_3__::func_673(bVar6))
		{
			sVar10 = "GBMR_SELLTICK1" /* GXT: You earned $~1~ for helping your CEO to complete a Sell mission. */;
		}
		__LIB_11__::func_817(sVar10, iParam1, 0);
	}
}

int func_241(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x2BC37
{
	return func_242(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_242(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x2BC59
{
	int iVar0;
	int iVar1;
	iVar0 = func_252(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				__LIB_2__::func_93(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		__LIB_2__::func_775(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

var func_252(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x2BFFE
{
	var uVar0;
	uVar0 = func_253(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_253(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x2C023
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = func_283();
	if (__LIB_1__::func_76(sParam2))
	{
	}
	if (__LIB_0__::func_109())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = __LIB_1__::func_747(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = __LIB_1__::func_704(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					__LIB_34__::func_711(0, &iVar1);
					break;
				case 3:
					__LIB_34__::func_711(1, &iVar1);
					break;
				case 1:
					__LIB_2__::func_127(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			__LIB_1__::func_746(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				__LIB_1__::func_759((__LIB_1__::func_335(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					__LIB_1__::func_746(1166, iVar1, -1);
				}
				__LIB_2__::func_47(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				__LIB_1__::func_745((__LIB_2__::func_46(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				__LIB_1__::func_745((__LIB_2__::func_46(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

int func_283()//Position - 0x2CC29
{
	int iVar0;
	if (__LIB_0__::func_971(PLAYER::PLAYER_ID()) || __LIB_0__::func_970(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10101 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (__LIB_1__::func_749() || func_284(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23310 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7094 /* Tunable: JOB_RP_CAP */ > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_284(bool bParam0)//Position - 0x2CCC1
{
	return __LIB_1__::func_77(__LIB_30__::func_495(bParam0));
}

void func_295(int iParam0, int iParam1)//Position - 0x2D946
{
	int iVar0;
	if (*iParam0 > 0)
	{
		if (!__LIB_2__::func_50())
		{
			if (__LIB_2__::func_159(0))
			{
				if (!__LIB_3__::func_195(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_0__::func_797()))
					{
						if (__LIB_1__::func_930() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * __LIB_1__::func_930());
							*iParam0 = (*iParam0 - iVar0);
						}
						__LIB_2__::func_98(&iVar0, 0);
						if (iParam1 == 1)
						{
							__LIB_36__::func_22("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, __LIB_0__::func_797(), iVar0, 0, 0, 1);
						}
						__LIB_1__::func_928(20);
						__LIB_2__::func_128(__LIB_0__::func_797(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_305(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x2DB97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	bVar18 = __LIB_3__::func_195(1);
	bVar19 = false;
	if (iParam0 == 237 && !uParam1->f_22)
	{
		if (__LIB_2__::func_50())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = __LIB_0__::func_797();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1853348[iVar11 /*834*/].f_811.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1853348[iVar11 /*834*/].f_811.f_2;
			}
			else
			{
				iVar2 = __LIB_15__::func_384(Global_1853348[iVar11 /*834*/].f_811.f_4, Global_1853348[iVar11 /*834*/].f_811.f_1, *uParam3, Global_1853348[iVar11 /*834*/].f_811.f_2, Global_1853348[iVar11 /*834*/].f_811.f_3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = __LIB_15__::func_383(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					__LIB_11__::func_817("TICK_TCUT" /* GXT: Tony's laundering cut: $~1~. */, iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1944249.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					__LIB_15__::func_443(iVar2);
				}
				if (*uParam3 > 0)
				{
					__LIB_15__::func_474(*uParam3);
				}
				iVar6 = __LIB_35__::func_774(&uVar5);
				iVar7 = Global_262145.f_24523 /* Tunable: 249027540 */;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_24522 /* Tunable: -540578960 */));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (Global_262145.f_32969 /* Tunable: 2010545334 */)
				{
					if (!__LIB_0__::func_137(32356, -1))
					{
						*iParam2 = (*iParam2 * Global_262145.f_32977 /* Tunable: -492941246 */);
						__LIB_0__::func_186(32356, 1, -1);
					}
				}
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						__LIB_1__::func_928(140);
					}
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else
			{
				fVar16 = Global_262145.f_24489 /* Tunable: -1073212210 */;
				if (!bVar18)
				{
					fVar16 = Global_262145.f_24490 /* Tunable: -787828473 */;
				}
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24491 /* Tunable: 390735097 */;
				if (!bVar18)
				{
					iVar4 = Global_262145.f_24492 /* Tunable: -1911840744 */;
				}
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
			}
		}
	}
	else if (uParam1->f_22)
	{
	}
}

void func_312(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x2DF6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	*uParam4 = 0;
	bVar16 = __LIB_3__::func_195(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (__LIB_2__::func_50())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = __LIB_0__::func_797();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = __LIB_15__::func_442(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = __LIB_15__::func_642(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (__LIB_15__::func_385(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					__LIB_11__::func_817("SMTICK_RONCUT" /* GXT: Ron's Cut: $~1~. */, __LIB_15__::func_385(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - __LIB_15__::func_385(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				__LIB_15__::func_444(iVar2, iVar9);
				iVar6 = __LIB_35__::func_774(&uVar5);
				iVar7 = Global_262145.f_22854 /* Tunable: 1245415334 */;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22853 /* Tunable: -2011721386 */));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						__LIB_1__::func_928(44);
					}
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else
			{
				fVar14 = Global_262145.f_22785 /* Tunable: 1359115930 */;
				if (!bVar16)
				{
					fVar14 = Global_262145.f_22786 /* Tunable: 304396062 */;
				}
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22787 /* Tunable: -1817764260 */;
				if (!bVar16)
				{
					iVar4 = Global_262145.f_22788 /* Tunable: -1446893415 */;
				}
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
			}
		}
	}
}

void func_315(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x2E1AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bVar17 = __LIB_3__::func_195(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (__LIB_2__::func_50())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = __LIB_0__::func_797();
		}
		if (iVar15 != -1)
		{
			iVar16 = __LIB_1__::func_721(iVar15);
			iVar0 = (__LIB_6__::func_580(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = __LIB_13__::func_8(iVar15, iVar16, iVar1, 0);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21554 /* Tunable: 1021567941 */));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21553 /* Tunable: 1865029244 */));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				__LIB_15__::func_608(iVar16, iVar2);
				if (__LIB_15__::func_607(iVar16) >= Global_262145.f_21100 /* Tunable: -376544159 */ || iVar2 >= Global_262145.f_21100 /* Tunable: -376544159 */)
				{
					__LIB_22__::func_436(5);
				}
				iVar6 = __LIB_35__::func_774(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21556 /* Tunable: -556480345 */);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21555 /* Tunable: 1413334331 */));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (Global_262145.f_32970 /* Tunable: 1598011694 */)
				{
					if (!__LIB_0__::func_137(32357, -1))
					{
						*iParam2 = (*iParam2 * Global_262145.f_32978 /* Tunable: -278088930 */);
						__LIB_0__::func_186(32357, 1, -1);
					}
				}
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						__LIB_1__::func_928(108);
					}
					else
					{
						__LIB_1__::func_928(110);
					}
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else
			{
				fVar14 = Global_262145.f_21557 /* Tunable: 426264033 */;
				if (!bVar17)
				{
					fVar14 = Global_262145.f_21558 /* Tunable: -1471492989 */;
				}
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21559 /* Tunable: -165611423 */;
				if (!bVar17)
				{
					iVar4 = Global_262145.f_21560 /* Tunable: 301168766 */;
				}
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_336(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x2F97D
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (__LIB_15__::func_361())
			{
				Var0 = { __LIB_15__::func_382() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = __LIB_13__::func_8(PLAYER::PLAYER_ID(), Var0.f_0, *uParam3, 0);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_19112 /* Tunable: 1763638426 */);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_19111 /* Tunable: -823848572 */);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = __LIB_35__::func_774(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_262145.f_19102 /* Tunable: -444616278 */);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_262145.f_19101 /* Tunable: -309450581 */));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				switch (__LIB_12__::func_501(Var0.f_0))
				{
					case 1:
						if (Global_262145.f_32964 /* Tunable: 648076385 */)
						{
							if (!__LIB_0__::func_137(32351, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32972 /* Tunable: -793049781 */);
								__LIB_0__::func_186(32351, 1, -1);
							}
						}
						break;
					case 3:
						if (Global_262145.f_32965 /* Tunable: 1057315128 */)
						{
							if (!__LIB_0__::func_137(32352, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32973 /* Tunable: -1035386051 */);
								__LIB_0__::func_186(32352, 1, -1);
							}
						}
						break;
					case 4:
						if (Global_262145.f_32966 /* Tunable: 2074826178 */)
						{
							if (!__LIB_0__::func_137(32353, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32974 /* Tunable: 1011759977 */);
								__LIB_0__::func_186(32353, 1, -1);
							}
						}
						break;
					case 0:
						if (Global_262145.f_32967 /* Tunable: 98893693 */)
						{
							if (!__LIB_0__::func_137(32354, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32975 /* Tunable: -1980822412 */);
								__LIB_0__::func_186(32354, 1, -1);
							}
						}
						break;
					case 2:
						if (Global_262145.f_32968 /* Tunable: 328208647 */)
						{
							if (!__LIB_0__::func_137(32355, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32976 /* Tunable: 667598560 */);
								__LIB_0__::func_186(32355, 1, -1);
							}
						}
						break;
				}
				if (iVar10 > 0)
				{
					__LIB_1__::func_928(86);
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else if (__LIB_3__::func_195(0))
			{
				Var14 = { __LIB_7__::func_928(__LIB_0__::func_797()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = __LIB_13__::func_8(__LIB_0__::func_797(), Var14.f_0, *uParam3, 0);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_19112 /* Tunable: 1763638426 */));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_19111 /* Tunable: -823848572 */));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_19151 /* Tunable: -1680154074 */;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_19152 /* Tunable: 997747887 */;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

void func_339(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x2FE82
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	bVar0 = __LIB_1__::func_744(PLAYER::PLAYER_ID());
	if (iParam0 == 167)
	{
		if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				__LIB_15__::func_391();
			}
			__LIB_15__::func_390();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (uParam2->f_5)
			{
				*iParam3 = (*iParam3 + __LIB_15__::func_644(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_183));
			}
			else
			{
				*uParam4 = uParam2->f_7;
				if (uParam2->f_8 > 0)
				{
					*uParam4 = (*uParam4 + uParam2->f_8);
				}
				iVar1 = __LIB_13__::func_509(*uParam4);
				iVar2 = (iVar1 * *uParam4);
				*iParam3 = (*iParam3 + iVar2);
				if (bVar0)
				{
					iVar4 = __LIB_35__::func_774(&uVar3);
					iVar5 = Global_262145.f_16656 /* Tunable: EXEC_CONTRABAND_HIGH_DEMAND_BONUS_CAP */;
					if (iVar4 > iVar5)
					{
						iVar4 = iVar5;
					}
					iVar6 = SYSTEM::CEIL((IntToFloat(iVar4) * Global_262145.f_15864 /* Tunable: EXEC_CONTRABAND_HIGH_DEMAND_BONUS_PERCENTAGE */));
					iVar7 = ((*iParam3 / 100) * iVar6);
					*iParam3 = (*iParam3 + iVar7);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar4 > 0 && uParam2->f_9 != 4)
					{
						__LIB_1__::func_928(44);
					}
				}
			}
			if (bVar0)
			{
				if (Global_262145.f_32963 /* Tunable: -1292749091 */)
				{
					if (!__LIB_0__::func_137(32350, -1))
					{
						*iParam3 = (*iParam3 * Global_262145.f_32971 /* Tunable: -364133001 */);
						__LIB_0__::func_186(32350, 1, -1);
					}
				}
				__LIB_15__::func_610(*iParam3);
				__LIB_15__::func_388();
				Global_2815059.f_5195.f_386 = *iParam3;
			}
			else
			{
				fVar8 = Global_262145.f_24493 /* Tunable: -623310017 */;
				iVar9 = SYSTEM::CEIL((IntToFloat(*iParam3) * fVar8));
				*iParam3 = iVar9;
				iVar10 = Global_262145.f_24494 /* Tunable: -223487172 */;
				if (*iParam3 > iVar10)
				{
					*iParam3 = iVar10;
				}
			}
		}
		if (bVar0)
		{
			__LIB_15__::func_387();
		}
	}
}

int func_362(int iParam0, bool bParam1, bool bParam2)//Position - 0x30E4C
{
	int iVar0;
	if (bParam2)
	{
		return Global_262145.f_18799 /* Tunable: BIKER_DEATHMATCH_RP_REWARD */;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12979 /* Tunable: GB_SIGHTSEER_DEFAULT_RP_REWARD */) * Global_262145.f_12984 /* Tunable: GB_SIGHTSEER_EVENT_MULTIPLIER_RP */));
		case 157:
			return 0;
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12929 /* Tunable: GB_ASSAULT_DEFAULT_RP_REWARD */) * Global_262145.f_12934 /* Tunable: GB_ASSAULT_EVENT_MULTIPLIER_RP */));
		case 151:
			return 0;
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12956 /* Tunable: GB_BOSSVSBOSSDM_DEFAULT_RP_REWARD */) * Global_262145.f_12960 /* Tunable: GB_BOSSVSBOSSDM_EVENT_MULTIPLIER_RP */));
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12969 /* Tunable: GB_HUNTBOSS_DEFAULT_RP_REWARD */) * Global_262145.f_12973 /* Tunable: GB_HUNTBOSS_EVENT_MULTIPLIER_RP */));
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12991 /* Tunable: GB_YACHTATTACK_DEFAULT_RP_REWARD */) * Global_262145.f_12996 /* Tunable: GB_YACHTATTACK_EVENT_MULTIPLIER_RP */));
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13028 /* Tunable: GB_MOSTWANTED_RP_REWARD_WINNER */) * Global_262145.f_13031 /* Tunable: GB_MOSTWANTED_EVENT_MULTIPLIER_RP */));
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13074 /* Tunable: GB_SMASHANDGRAB_RP_REWARD_WINNER */) * Global_262145.f_13077 /* Tunable: GB_SMASHANDGRAB_EVENT_MULTIPLIER_RP */));
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13064 /* Tunable: GB_PROTECTIONRACKET_RP_REWARD_WINNER */) * Global_262145.f_13067 /* Tunable: GB_PROTECTIONRACKET_EVENT_MULTIPLIER_RP */));
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13019 /* Tunable: GB_FINDERS_KEEPERS_RP_REWARD_WINNER */) * Global_262145.f_13022 /* Tunable: GB_FINDERS_KEEPERS_EVENT_MULTIPLIER_RP */));
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13039 /* Tunable: GB_POINTTOPOINT_RP_REWARD_WINNER */) * Global_262145.f_13044 /* Tunable: GB_POINTTOPOINT_EVENT_MULTIPLIER_RP */));
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_13004 /* Tunable: GB_CARJACKING_RP_REWARD_WINNER */) * Global_262145.f_13007 /* Tunable: GB_CARJACKING_EVENT_MULTIPLIER_RP */));
		case 170:
			return Global_262145.f_15507 /* Tunable: EXEC_AIRFREIGHT_RP_REWARD */;
		case 171:
			return Global_262145.f_15566 /* Tunable: EXEC_CASHING_RP_REWARD */;
		case 172:
			return Global_262145.f_15582 /* Tunable: EXEC_SALVAGE_RP_REWARD */;
		case 173:
			return Global_262145.f_15525 /* Tunable: EXEC_FGOODS_RP_REWARD */;
		case 166:
			return 0;
		case 167:
			return Global_262145.f_17605 /* Tunable: 1726921260 */;
		case 168:
			iVar0 = Global_262145.f_17604 /* Tunable: -183629958 */;
			if ((__LIB_2__::func_50() && Global_262145.f_32963 /* Tunable: -1292749091 */) && !__LIB_0__::func_137(32350, -1))
			{
				iVar0 = (iVar0 * Global_262145.f_32979 /* Tunable: -631336731 */);
			}
			return iVar0;
		case 179:
			return Global_262145.f_18807 /* Tunable: BIKER_JOUST_RP_REWARD */;
		case 180:
			return Global_262145.f_18682 /* Tunable: BIKER_GUNRUNNING_RP_REWARD */;
		case 182:
			return 0;
		case 183:
			return Global_262145.f_18690 /* Tunable: BIKER_POW_RP_REWARD */;
		case 185:
			return Global_262145.f_18699 /* Tunable: BIKER_GUNS_FOR_HIRE_RP_REWARD */;
		case 186:
			return 0;
		case 189:
			return Global_262145.f_18895 /* Tunable: BIKER_RACE_RP_REWARD */;
		case 190:
			return 0;
		case 191:
			return 0;
		case 192:
			return 0;
		case 193:
			return Global_262145.f_18912 /* Tunable: BIKER_HIT_AND_RIDE_RP_REWARD */;
		case 194:
			return 0;
		case 195:
			return 0;
		case 197:
			return Global_262145.f_18759 /* Tunable: BIKER_JAILBREAK_RP_REWARD */;
		case 198:
			return 0;
		case 199:
			return Global_262145.f_18943 /* Tunable: BIKER_SEARCH_AND_DESTROY_RP_REWARD */;
		case 200:
			return 0;
		case 201:
			return Global_262145.f_18821 /* Tunable: BIKER_STAND_YOUR_GROUND_RP_REWARD */;
		case 205:
			return Global_262145.f_18930 /* Tunable: BIKER_MISCHIEF_RP_REWARD */;
		case 207:
			return 0;
		case 208:
			return Global_262145.f_18788 /* Tunable: BIKER_TORCHED_RP_REWARD */;
		case 209:
			return 0;
		case 210:
			return Global_262145.f_18925 /* Tunable: BIKER_WHEELIE_RIDER_RP_REWARD */;
		case 211:
			return Global_262145.f_18889 /* Tunable: BIKER_ON_THE_RUN_RP_REWARD */;
		case 214:
			return Global_262145.f_19483 /* Tunable: IMPEXP_PLOWED_RP_REWARD */;
		case 215:
			return Global_262145.f_19493 /* Tunable: IMPEXP_FULLY_LOADED_RP_REWARD */;
		case 216:
			return Global_262145.f_19503 /* Tunable: IMPEXP_AMPHIBIOUS_ASSAULT_RP_REWARD */;
		case 217:
			return Global_262145.f_19512 /* Tunable: IMPEXP_TRANSPORTER_RP_REWARD */;
		case 218:
			return Global_262145.f_19521 /* Tunable: IMPEXP_FORTIFIED_RP_REWARD */;
		case 219:
			return Global_262145.f_19537 /* Tunable: IMPEXP_VELOCITY_RP_REWARD */;
		case 178:
			if (__LIB_2__::func_50())
			{
				return Global_262145.f_19360 /* Tunable: IMPEXP_STEAL_CEO_RP */;
			}
			else if (bParam1)
			{
				return Global_262145.f_19361 /* Tunable: IMPEXP_STEAL_ASSOCIATE_RP */;
			}
			break;
		case 188:
			if (__LIB_2__::func_50())
			{
				return Global_262145.f_19444 /* Tunable: IMPEXP_SELL_CEO_RP */;
			}
			else if (bParam1)
			{
				return Global_262145.f_19445 /* Tunable: IMPEXP_SELL_ASSOCIATE_RP */;
			}
			break;
		case 225:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21569 /* Tunable: GR_RESUPPLY_RP_EARNED_CEO */;
				}
				else
				{
					return Global_262145.f_21570 /* Tunable: GR_RESUPPLY_RP_EARNED_VIP */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return Global_262145.f_21571 /* Tunable: GR_RESUPPLY_RP_EARNED_MC_LEADER */;
			}
			break;
		case 226:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					iVar0 = Global_262145.f_21547 /* Tunable: GR_SELL_RP_EARNED_CEO */;
				}
				else
				{
					iVar0 = Global_262145.f_21548 /* Tunable: GR_SELL_RP_EARNED_VIP */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				iVar0 = Global_262145.f_21549 /* Tunable: GR_SELL_RP_EARNED_MC_LEADER */;
			}
			if ((__LIB_2__::func_50() && Global_262145.f_32970 /* Tunable: 1598011694 */) && !__LIB_0__::func_137(32357, -1))
			{
				iVar0 = (iVar0 * Global_262145.f_32986 /* Tunable: -1052635986 */);
			}
			return iVar0;
			break;
		case 227:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21561 /* Tunable: GR_DEFEND_RP_EARNED_CEO */;
				}
				else
				{
					return Global_262145.f_21562 /* Tunable: GR_DEFEND_RP_EARNED_VIP */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return Global_262145.f_21563 /* Tunable: GR_DEFEND_RP_EARNED_MC_LEADER */;
			}
			break;
		case 229:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22734 /* Tunable: 1458037811 */;
				}
				else
				{
					return Global_262145.f_22735 /* Tunable: 603306374 */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return Global_262145.f_22736 /* Tunable: -1639668705 */;
			}
			break;
		case 230:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22832 /* Tunable: SMUG_SELL_RP_EARNED_CEO */;
				}
				else
				{
					return Global_262145.f_22833 /* Tunable: SMUG_SELL_RP_EARNED_VIP */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return Global_262145.f_22834 /* Tunable: SMUG_SELL_RP_EARNED_MC_LEADER */;
			}
			break;
		case 233:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23312 /* Tunable: -4626313 */;
				}
				else
				{
					return Global_262145.f_23313 /* Tunable: 942419845 */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return Global_262145.f_23311 /* Tunable: -1014903589 */;
			}
			break;
		case 241:
			return Global_262145.f_24647 /* Tunable: -203340822 */;
		case 242:
			return Global_262145.f_24643 /* Tunable: 1230342870 */;
		case 244:
			return Global_262145.f_24644 /* Tunable: 968100900 */;
		case 248:
			return Global_262145.f_24646 /* Tunable: -423913502 */;
		case 239:
			return Global_262145.f_24648 /* Tunable: -935764824 */;
		case 240:
			return Global_262145.f_24649 /* Tunable: -54427531 */;
		case 237:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					iVar0 = Global_262145.f_24482 /* Tunable: 1085938514 */;
				}
				else
				{
					iVar0 = Global_262145.f_24483 /* Tunable: 263628155 */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				iVar0 = Global_262145.f_24484 /* Tunable: 1312243956 */;
			}
			if ((__LIB_2__::func_50() && Global_262145.f_32969 /* Tunable: 2010545334 */) && !__LIB_0__::func_137(32356, -1))
			{
				iVar0 = (iVar0 * Global_262145.f_32985 /* Tunable: -1372236592 */);
			}
			return iVar0;
			break;
		case 238:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24600 /* Tunable: 1782673288 */;
				}
				else
				{
					return Global_262145.f_24601 /* Tunable: 1766328749 */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return Global_262145.f_24602 /* Tunable: 1471086652 */;
			}
			break;
		case 249:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24616 /* Tunable: -1955364748 */;
				}
				else
				{
					return Global_262145.f_24617 /* Tunable: -880863222 */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return Global_262145.f_24618 /* Tunable: 1576676738 */;
			}
			break;
		case 243:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_27081 /* Tunable: VC_WORK_RP_REWARD_CEO */;
				}
				else
				{
					return Global_262145.f_27082 /* Tunable: VC_WORK_RP_REWARD_VIP */;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return Global_262145.f_27081 /* Tunable: VC_WORK_RP_REWARD_CEO */;
			}
			break;
		case 158:
			if (__LIB_2__::func_50() && !__LIB_15__::func_361())
			{
				if (__LIB_3__::func_673(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (__LIB_15__::func_361())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

int func_365()//Position - 0x3192A
{
	if ((__LIB_0__::func_165(PLAYER::PLAYER_ID(), 21) || __LIB_0__::func_165(PLAYER::PLAYER_ID(), 22)) || __LIB_2__::func_58())
	{
		return 1;
	}
	if (func_367())
	{
		__LIB_1__::func_966(22);
		return 1;
	}
	return 0;
}

int func_367()//Position - 0x3198C
{
	if (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0))
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

void func_372()//Position - 0x31A23
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	if (func_415())
	{
		return;
	}
	if (__LIB_29__::func_103())
	{
		__LIB_3__::func_0();
	}
	if (__LIB_1__::func_515())
	{
		__LIB_1__::func_751();
	}
	sVar0 = "GB_WORK_OVER" /* GXT: VIP WORK OVER */;
	sVar1 = "GB_WORK_OVER" /* GXT: VIP WORK OVER */;
	if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "BK_RUN_OVER" /* GXT: CLUB WORK OVER */;
	}
	if ((!BitTest(Local_93.f_1, 2) && !BitTest(Local_93.f_1, 4)) && !BitTest(Local_93.f_1, 3))
	{
		if (BitTest(Local_93.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH" /* GXT: The Hit Squad sent <C>~a~</C>~s~ to their death */;
			if (Local_93.f_10)
			{
				sVar1 = "GBTER_B_SSH_A" /* GXT: The Hit Squad sent <C>~a~</C>~s~ to their death for abandoning ~a~~s~ */;
			}
			if (Local_93.f_10)
			{
				func_396(101, sVar0, sVar1, func_398(), __LIB_20__::func_746(PLAYER::PLAYER_ID()), func_37(), __LIB_0__::func_162(), __LIB_0__::func_162(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_395(87, func_37(), -1, sVar1, sVar0, 1, -1, 2, 0);
			}
		}
		else if (func_394() != PLAYER::PLAYER_ID())
		{
			sVar1 = "GBTER_BIG_COMS" /* GXT: <C>~a~</C>~s~ terminated <C>~a~</C>~s~ */;
			if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSO" /* GXT: <C>~a~</C>~s~ sent <C>~a~</C>~s~ to their death */;
				if (Local_93.f_10)
				{
					sVar1 = "GBTER_B_SSO_A" /* GXT: <C>~a~</C>~s~ sent <C>~a~</C>~s~ to their death for abandoning ~a~~s~ */;
				}
			}
			if (Local_93.f_10)
			{
				func_396(101, sVar0, sVar1, func_398(), __LIB_20__::func_746(PLAYER::PLAYER_ID()), func_394(), func_37(), __LIB_0__::func_162(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_393(91, func_394(), func_37(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS" /* GXT: You terminated <C>~a~</C>~s~ */;
			if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSW" /* GXT: You sent <C>~a~</C>~s~ to their death */;
				if (Local_93.f_10)
				{
					sVar1 = "GBTER_B_SSW_A" /* GXT: You sent <C>~a~</C>~s~ to their death for abandoning ~a~~s~ */;
				}
			}
			if (Local_93.f_10)
			{
				func_396(101, "GB_WINNER" /* GXT: WINNER */, sVar1, func_398(), __LIB_20__::func_746(PLAYER::PLAYER_ID()), func_37(), __LIB_0__::func_162(), __LIB_0__::func_162(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_395(87, func_37(), -1, sVar1, "GB_WINNER" /* GXT: WINNER */, 1, -1, 2, 0);
			}
		}
	}
	else if (BitTest(Local_93.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE" /* GXT: The target survived */;
		if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
		{
			sVar1 = "GBTER_B_BFLEE" /* GXT: The target survived being marked for death */;
		}
		__LIB_36__::func_268(88, sVar0, sVar1, 1, -1, 2, 1, 0);
		if (BitTest(Local_93.f_1, 4) || __LIB_10__::func_774(func_37(), 1, 0))
		{
			if (PLAYER::PLAYER_ID() == __LIB_1__::func_730())
			{
				Var2.f_10 = __LIB_1__::func_730();
				Var2.f_2 = 224702245;
				__LIB_1__::func_634(Var2, __LIB_1__::func_705(func_37()));
			}
		}
	}
}

int func_393(int iParam0, bool bParam1, bool bParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x32454
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = bParam1;
	Var0.f_18 = bParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return __LIB_36__::func_23(&Var0);
}

bool func_394()//Position - 0x324E3
{
	return Local_93.f_3;
}

int func_395(int iParam0, bool bParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x324EF
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = bParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam8);
	}
	return __LIB_36__::func_23(&Var0);
}

int func_396(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x32570
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = bParam5;
	Var0.f_18 = bParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	__LIB_1__::func_330(&(Var0.f_69), 4);
	return __LIB_36__::func_23(&Var0);
}

char* func_398()//Position - 0x32644
{
	bool bVar0;
	char* sVar1;
	bVar0 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	if (bVar0 != __LIB_0__::func_162())
	{
		if (bVar0 != PLAYER::PLAYER_ID())
		{
			if (((__LIB_0__::func_165(bVar0, 28) || __LIB_0__::func_165(PLAYER::PLAYER_ID(), 28)) || __LIB_2__::func_110(bVar0)) && !__LIB_2__::func_109(bVar0))
			{
				return __LIB_3__::func_217(bVar0, 0);
			}
			if (!__LIB_0__::func_53() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return __LIB_3__::func_217(bVar0, 0);
			}
		}
		sVar1 = __LIB_1__::func_601(&(Global_1892703[bVar0 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return __LIB_3__::func_217(bVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_415()//Position - 0x32C08
{
	if (!Global_2703735.f_4.f_10 || func_660())
	{
		return 1;
	}
	return 0;
}

void func_416(int iParam0, int iParam1)//Position - 0x32C2B
{
	int iVar0;
	if (iParam1 != __LIB_0__::func_162())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (__LIB_36__::func_257(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2815059.f_5195.f_388 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

void func_418(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x32CDE
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<2> Var23;
	if (func_550(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_19__::func_378() || iParam2 == 28)
	{
		if (__LIB_36__::func_267(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_12__::func_553(), sParam7))
		{
			__LIB_1__::func_995(1);
			if ((!__LIB_1__::func_994() && !__LIB_1__::func_993()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_992())
				{
					__LIB_2__::func_63();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_991(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_990(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_2__::func_40(bVar4, 0))
									{
										if (__LIB_34__::func_697(bVar4) || __LIB_30__::func_541(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_1__::func_744(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_482(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_2__::func_155(PLAYER::PLAYER_ID(), 0) && __LIB_30__::func_495(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_36__::func_262())
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_162();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_12__::func_533(bVar4) && func_473(bVar4, iParam2, bVar3)) && __LIB_1__::func_693(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_2__::func_164(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
								iVar6 = __LIB_3__::func_227(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((uParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[iVar18 /*42*/])->f_22;
								}
								if ((uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[iVar18 /*42*/])->f_31;
								}
								if ((uParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (uParam0[iVar18 /*42*/])->f_9;
								if (((uParam0[iVar18 /*42*/])->f_9 != -1 || (uParam0[iVar18 /*42*/])->f_22 != -1f) || (uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!__LIB_36__::func_262())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_2__::func_773(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_983(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = __LIB_36__::func_115(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_2__::func_72(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__::func_982(iParam5))
								{
									__LIB_43__::func_442(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_43__::func_442(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (__LIB_1__::func_693(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_162();
							}
							if (__LIB_12__::func_533(bVar4))
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_2__::func_164(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
									iVar6 = __LIB_3__::func_227(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_36__::func_115(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_2__::func_72(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									__LIB_43__::func_272(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_2__::func_142(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_794(&(uParam3->f_21));
						__LIB_1__::func_975();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_974(uParam3, iParam1);
							__LIB_1__::func_824(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_974(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_2__::func_141(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_2__::func_140(uParam3);
						if (Global_1836580 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836580 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			__LIB_1__::func_975();
			__LIB_1__::func_991(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

int func_473(bool bParam0, int iParam1, bool bParam2)//Position - 0x3449A
{
	if (iParam1 == 27)
	{
		if ((__LIB_3__::func_438(bParam0) || __LIB_12__::func_484(bParam0)) || __LIB_3__::func_491(bParam0))
		{
			return 0;
		}
	}
	if (!__LIB_1__::func_796(bParam0))
	{
		return 0;
	}
	if (!__LIB_34__::func_697(bParam0) && !__LIB_30__::func_541(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

void func_482(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x347BB
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_2__::func_40(bVar1, 0))
			{
				if (__LIB_34__::func_697(bVar1) || __LIB_30__::func_541(bVar1, bParam4))
				{
					if (__LIB_2__::func_61(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_550(int iParam0)//Position - 0x3632B
{
	if (iParam0 == 28)
	{
		if ((__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !__LIB_0__::func_428(PLAYER::PLAYER_ID())) && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_551(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_551(int iParam0)//Position - 0x3639A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	iVar0 = 2;
	bVar1 = ((__LIB_1__::func_15(iParam0) && !__LIB_3__::func_438(iParam0)) && !BitTest(Global_1892703[iParam0 /*599*/].f_1, 8));
	bVar2 = __LIB_0__::func_428(iParam0);
	uVar3 = __LIB_0__::func_945();
	bVar4 = func_365();
	if ((bVar1 && (__LIB_3__::func_131(iParam0) || __LIB_1__::func_17(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !__LIB_0__::func_315(iParam0)) && !__LIB_12__::func_482(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2815059.f_5195.f_220 != iVar0)
	{
		Global_2815059.f_5195.f_220 = iVar0;
	}
	return iVar0;
}

void func_554()//Position - 0x36488
{
	if (__LIB_1__::func_693(func_37(), 1, 1) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(func_37()), false))
	{
		func_555(151, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(func_37()), true), &uLocal_92, 1140457472, 1144750080, 0);
	}
}

void func_555(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0x364D0
{
	float fVar0;
	float fVar1;
	if ((((__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !__LIB_3__::func_438(PLAYER::PLAYER_ID())) && !BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 8)) && (__LIB_3__::func_131(PLAYER::PLAYER_ID()) || __LIB_1__::func_17(PLAYER::PLAYER_ID()))) || __LIB_0__::func_86(Param1))
	{
		return;
	}
	Global_1943920 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	__LIB_30__::func_499(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_36__::func_264(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(__LIB_10__::func_167(PLAYER::PLAYER_ID(), 21) || __LIB_10__::func_167(PLAYER::PLAYER_ID(), 25)))
		{
			__LIB_1__::func_959(Param1, 1, 0);
		}
		if (!*uParam2 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			if (__LIB_15__::func_411(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(__LIB_3__::func_102(iParam0));
				if (__LIB_15__::func_410(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, true);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
					}
					MISC::SET_BIT(&(Global_1943920.f_3), 0);
				}
			}
			if (__LIB_15__::func_413(iParam0))
			{
				fVar1 = __LIB_15__::func_412(iParam0);
				if (fVar1 != 1f)
				{
					__LIB_2__::func_74(fVar1);
					MISC::SET_BIT(&(Global_1943920.f_3), 1);
				}
			}
			if (!Global_2653189)
			{
				if (__LIB_30__::func_408(iParam0) && __LIB_0__::func_315(PLAYER::PLAYER_ID()))
				{
					__LIB_2__::func_135(1);
					__LIB_11__::func_670(2);
				}
			}
			__LIB_1__::func_966(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (__LIB_0__::func_165(PLAYER::PLAYER_ID(), 19))
			{
				__LIB_1__::func_967(19);
			}
		}
		if (*uParam2 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 0;
			if (__LIB_15__::func_411(iParam0))
			{
				if (BitTest(Global_1943920.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1943920.f_3), 0);
				}
			}
			if (__LIB_15__::func_413(iParam0))
			{
				__LIB_2__::func_16();
				MISC::CLEAR_BIT(&(Global_1943920.f_3), 1);
			}
			if (iParam5 && !__LIB_1__::func_15(PLAYER::PLAYER_ID()))
			{
				if (__LIB_30__::func_495(PLAYER::PLAYER_ID()) != 152)
				{
					__LIB_44__::func_197();
				}
			}
			if (__LIB_1__::func_731(2))
			{
				__LIB_2__::func_135(0);
				__LIB_11__::func_662(2);
			}
		}
	}
}

void func_599()//Position - 0x375F8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_600(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_600(int iParam0)//Position - 0x37635
{
	struct<6> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && ENTITY::IS_ENTITY_A_PED(Var0.f_0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == PLAYER::GET_PLAYER_PED(func_37()))
		{
			if (Var0.f_5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
					{
						MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 1);
					}
				}
			}
		}
	}
}

void func_601()//Position - 0x376B3
{
	if (!BitTest(uLocal_91, 3))
	{
		if (__LIB_1__::func_693(func_37(), 1, 1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_37()))
		{
			__LIB_30__::func_783(func_37(), __LIB_1__::func_389(6), 1, 0);
			__LIB_12__::func_535(func_37(), 432, 1, 0);
			__LIB_15__::func_359(func_37(), 1, 1, 0);
			__LIB_19__::func_350(func_37(), Global_262145.f_12827 /* Tunable: GANGBOSS_JOB_BLIP_SCALE */, 1, 0);
			__LIB_19__::func_369(func_37(), 1, 0);
			if (func_42() <= 1)
			{
				func_602(func_37(), 1, 7000);
			}
			MISC::SET_BIT(&uLocal_91, 3);
		}
	}
}

void func_602(bool bParam0, bool bParam1, int iParam2)//Position - 0x3773A
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2703735)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2678393[iVar0], 250);
			func_603(bParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2678393.f_370), iVar0);
		MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			func_603(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], false);
		}
	}
}

void func_603(bool bParam0)//Position - 0x3786F
{
	int iVar0;
	iVar0 = bParam0;
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			Global_2678393.f_1504[iVar0] = func_604(bParam0);
			HUD::SET_BLIP_PRIORITY(Global_2678393[iVar0], Global_2678393.f_1504[iVar0]);
		}
	}
}

int func_604(bool bParam0)//Position - 0x378BD
{
	int iVar0;
	int iVar1;
	iVar0 = bParam0;
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2678393[iVar0]);
			if (BitTest(Global_2678393.f_386, iVar0) || BitTest(Global_2678393.f_385, iVar0))
			{
				return 1;
			}
			else if ((BitTest(Global_2678393.f_371, iVar0) || BitTest(Global_2678393.f_370, iVar0)) || BitTest(Global_2678393.f_388, iVar0))
			{
				return __LIB_19__::func_41(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return __LIB_19__::func_41(7);
						break;
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return __LIB_19__::func_41(11);
						break;
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(Global_2703735))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(Global_2703735))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 163:
					case 164:
						if (__LIB_1__::func_905(Global_2703735, bParam0, -2, 0))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 303:
					case 418:
						return __LIB_19__::func_41(10);
						break;
					case 364:
						if (func_608(Global_2703735, bParam0, 1))
						{
							return __LIB_19__::func_41(10);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 478:
					case 501:
					case 523:
					case 556:
						return __LIB_19__::func_41(10);
						break;
					case 417:
						if ((__LIB_2__::func_748(bParam0) || __LIB_2__::func_746(bParam0)) || __LIB_2__::func_747(bParam0))
						{
							if (func_608(Global_2703735, bParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_608(Global_2703735, bParam0, 1))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 256:
					case 268:
					default:
						if (func_608(Global_2703735, bParam0, 1))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_608(int iParam0, bool bParam1, bool bParam2)//Position - 0x37BFD
{
	if (__LIB_32__::func_173(iParam0, -2, 0, 0, 0) == __LIB_32__::func_173(bParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (__LIB_12__::func_586(__LIB_32__::func_173(iParam0, -2, 0, 0, 0)) && __LIB_12__::func_586(__LIB_32__::func_173(bParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_623()//Position - 0x382BA
{
	char* sVar0;
	if (func_415())
	{
		if (__LIB_29__::func_103())
		{
			__LIB_3__::func_0();
		}
		return;
	}
	sVar0 = "GBTER_KILL" /* GXT: ~HUD_COLOUR_RED~<C>~a~</C>~s~ is the target. Take them out. */;
	if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "GBTER_B_KILL" /* GXT: ~HUD_COLOUR_RED~<C>~a~</C>~s~ has been marked for death. Take them out. */;
		if (Local_93.f_10)
		{
			sVar0 = "GBTER_AB_KILL" /* GXT: ~HUD_COLOUR_RED~<C>~a~</C>~s~ has abandoned the Motorcycle Club. Take them out. */;
		}
	}
	if (!__LIB_3__::func_417(sVar0))
	{
		__LIB_30__::func_502(sVar0, func_37(), 1, 0);
	}
}

void func_633()//Position - 0x38571
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (func_415())
	{
		return;
	}
	if (BitTest(Local_93.f_1, 0))
	{
		if (__LIB_0__::func_864(&(Local_93.f_4)))
		{
			iVar1 = (func_5() - __LIB_1__::func_724(&(Local_93.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = __LIB_1__::func_723(iVar1, 0);
			sVar2 = "GB_WORK_END" /* GXT: VIP WORK END */;
			if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
			{
				sVar2 = "BK_TIME" /* GXT: TIME REMAINING */;
			}
			if (iVar1 > 0)
			{
				__LIB_1__::func_350(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				__LIB_1__::func_350(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_639()//Position - 0x387FD
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	if (func_415())
	{
		return;
	}
	if (PLAYER::PLAYER_ID() != __LIB_1__::func_730())
	{
		if (BitTest(uLocal_91, 0))
		{
			if (!__LIB_1__::func_515())
			{
				sVar0 = "GBTER_START" /* GXT: Your VIP has requested the termination of a Bodyguard. Kill the target. */;
				if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
				{
					sVar0 = "GBTER_BSTART" /* GXT: Your President has marked a Member for death. Kill the target. */;
					if (Local_93.f_10)
					{
						sVar0 = "GBTER_AB_START" /* GXT: A Member has abandoned the Motorcycle Club and been marked for death. Kill the target. */;
					}
				}
				__LIB_3__::func_441(sVar0, PLAYER::GET_PLAYER_NAME(func_37()), 0, -1);
				__LIB_30__::func_565(1);
				MISC::SET_BIT(&uLocal_91, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG" /* GXT: TERMINATION */;
			sVar2 = "GBTER_BIG_GS" /* GXT: <C>~a~</C>~s~ has been marked for termination. Take them out. */;
			if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_BIG" /* GXT: MARKED FOR DEATH */;
				sVar2 = "GBTER_B_SS" /* GXT: <C>~a~</C>~s~ has been marked for death. Take them out. */;
				if (Local_93.f_10)
				{
					sVar1 = "GBTER_B_BIG" /* GXT: MARKED FOR DEATH */;
					sVar2 = "GBTER_AB_SS" /* GXT: <C>~a~</C>~s~ has abandoned the Motorcycle Club. Take them out. */;
				}
			}
			__LIB_1__::func_751();
			func_395(86, func_37(), -1, sVar2, sVar1, 1, -1, 2, 0);
			MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
		}
	}
	else if (BitTest(uLocal_91, 0))
	{
		if (!__LIB_1__::func_515())
		{
			sVar3 = "GBTER_BOSS" /* GXT: You have marked a Bodyguard for termination. Kill the target. */;
			if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
			{
				sVar3 = "GBTER_BBOSS" /* GXT: You have marked a Member for death. Kill the target. */;
				if (Local_93.f_10)
				{
					sVar3 = "GBTER_AB_BOSS" /* GXT: A Member has abandoned your Motorcycle Club and been marked for death. Kill the target. */;
				}
			}
			__LIB_3__::func_441(sVar3, PLAYER::GET_PLAYER_NAME(func_37()), 0, -1);
			MISC::SET_BIT(&uLocal_91, 2);
			__LIB_30__::func_565(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG" /* GXT: TERMINATION */;
		sVar5 = "GBTER_BIG_GS" /* GXT: <C>~a~</C>~s~ has been marked for termination. Take them out. */;
		if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1))
		{
			sVar4 = "GBTER_B_BIG" /* GXT: MARKED FOR DEATH */;
			sVar5 = "GBTER_B_BSS" /* GXT: You have marked <C>~a~</C>~s~ for death */;
			if (Local_93.f_10)
			{
				sVar4 = "GBTER_B_BIG" /* GXT: MARKED FOR DEATH */;
				sVar5 = "GBTER_AB_SS" /* GXT: <C>~a~</C>~s~ has abandoned the Motorcycle Club. Take them out. */;
			}
		}
		__LIB_1__::func_751();
		func_395(86, func_37(), -1, sVar5, sVar4, 1, -1, 2, 0);
		MISC::SET_BIT(&(Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	}
	MISC::SET_BIT(&uLocal_91, 0);
}

void func_642(int iParam0)//Position - 0x389E8
{
	Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = iParam0;
}

void func_643(bool bParam0)//Position - 0x389FC
{
	if (bParam0)
	{
		if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 9))
		{
			if (func_551(PLAYER::PLAYER_ID()) != 0)
			{
				__LIB_1__::func_966(9);
			}
		}
	}
	else if (__LIB_0__::func_165(PLAYER::PLAYER_ID(), 9))
	{
		__LIB_1__::func_967(9);
	}
}

void func_644(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x38A42
{
	float fVar0;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != iParam0)
	{
		__LIB_7__::func_945(-1);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = iParam0;
		if (__LIB_7__::func_944() != -1)
		{
			__LIB_7__::func_946(-1);
		}
		if (__LIB_7__::func_943() != -1)
		{
			__LIB_9__::func_357(-1);
		}
		__LIB_15__::func_414(iParam2);
		__LIB_15__::func_620(iParam0);
		if (!__LIB_15__::func_413(iParam0))
		{
			fVar0 = __LIB_15__::func_412(iParam0);
			if (fVar0 != 1f)
			{
				__LIB_2__::func_74(fVar0);
				MISC::SET_BIT(&(Global_1943920.f_3), 1);
			}
		}
		if (!__LIB_15__::func_411(iParam0) || iParam3)
		{
			if (__LIB_15__::func_410(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1943920.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (__LIB_0__::func_945())
		{
			__LIB_1__::func_966(27);
		}
		if (bParam1)
		{
			if (!func_365())
			{
				__LIB_2__::func_135(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((BitTest(Global_2815059.f_4624, 1) || BitTest(Global_2815059.f_4624, 4)) || BitTest(Global_2815059.f_4624, 0))
			{
				__LIB_1__::func_928(6);
			}
			__LIB_15__::func_302();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (__LIB_1__::func_15(PLAYER::PLAYER_ID()) && __LIB_0__::func_315(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
		}
		func_646();
		if (__LIB_15__::func_396(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1943920.f_3), 6);
		}
		Global_2815059.f_6745 = 0;
	}
}

void func_646()//Position - 0x38CA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar3 = __LIB_15__::func_454();
	iVar2 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (__LIB_2__::func_61(iVar1, iVar2, 1) || __LIB_20__::func_754(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_659()//Position - 0x38FD3
{
	return Local_94[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2;
}

int func_660()//Position - 0x38FE5
{
	if (func_661(151) || func_365())
	{
		return 1;
	}
	return 0;
}

int func_661(int iParam0)//Position - 0x39005
{
	if (!__LIB_2__::func_50() && !__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
	{
		if (!__LIB_0__::func_315(PLAYER::PLAYER_ID()))
		{
			if (func_365())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		case 151:
			break;
		case 152:
			break;
	}
	return 0;
}

void func_662(int iParam0, int iParam1)//Position - 0x3905E
{
	Local_94[iParam0 /*4*/] = iParam1;
}

int func_665(int iParam0)//Position - 0x39081
{
	return Local_94[iParam0 /*4*/];
}

void func_672()//Position - 0x39161
{
	__LIB_3__::func_0();
	if (__LIB_1__::func_693(func_37(), 0, 1))
	{
		__LIB_19__::func_350(func_37(), 1f, 1, 0);
		__LIB_36__::func_255(__LIB_1__::func_705(func_37()), 0);
	}
	Global_1952154 = __LIB_0__::func_162();
	func_673(1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_673(bool bParam0, int iParam1)//Position - 0x391A4
{
	int iVar0;
	int iVar1;
	if (Global_1637407.f_1.f_108 != 0)
	{
		Global_1637407.f_1.f_108 = 0;
	}
	Global_1637407.f_1.f_109 = -1;
	Global_1637407.f_1.f_110 = -1;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 167 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 168)
	{
		__LIB_15__::func_423();
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 4);
	}
	if ((__LIB_15__::func_361() && iParam1 != 0) && Global_262145.f_17496 /* Tunable: 35628303 */)
	{
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 190 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 192)
		{
			__LIB_20__::func_33(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 164 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 208) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 250) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = -1;
		if (!BitTest(Global_1836844.f_1, 14) && !__LIB_1__::func_15(PLAYER::PLAYER_ID()))
		{
			__LIB_2__::func_135(0);
		}
	}
	else if (__LIB_4__::func_921(PLAYER::PLAYER_ID()) != -1)
	{
		__LIB_7__::func_945(-1);
	}
	__LIB_15__::func_587(__LIB_0__::func_162());
	if (__LIB_1__::func_731(16))
	{
		__LIB_11__::func_662(16);
	}
	__LIB_15__::func_624(0);
	__LIB_15__::func_414(-1);
	__LIB_15__::func_421();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_15__::func_455(iVar0);
		iVar0++;
	}
	if (BitTest(Global_1943920.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 0);
	}
	if (BitTest(Global_1943920.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 5);
	}
	iVar1 = __LIB_12__::func_520();
	if ((__LIB_1__::func_877(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		__LIB_19__::func_484(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || __LIB_3__::func_709(iVar1))
	{
		__LIB_19__::func_483(-1, 1);
	}
	else if (((((__LIB_1__::func_378(iVar1) || __LIB_15__::func_419(iVar1)) || __LIB_4__::func_825(iVar1)) || __LIB_4__::func_740(iVar1)) || __LIB_1__::func_612(iVar1)) || __LIB_1__::func_77(iVar1))
	{
	}
	else
	{
		__LIB_19__::func_483(-1, 1);
	}
	__LIB_1__::func_967(19);
	__LIB_1__::func_967(20);
	__LIB_1__::func_967(21);
	__LIB_1__::func_967(22);
	__LIB_1__::func_967(27);
	__LIB_11__::func_662(3);
	__LIB_11__::func_662(4);
	__LIB_11__::func_662(7);
	__LIB_19__::func_454();
	if (__LIB_0__::func_315(PLAYER::PLAYER_ID()))
	{
		func_643(0);
	}
	__LIB_1__::func_967(29);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = __LIB_0__::func_162();
	if (Global_2815059.f_5195.f_43 != 0)
	{
		Global_2815059.f_5195.f_43 = 0;
	}
	if (bParam0)
	{
		__LIB_44__::func_197();
	}
	if (!__LIB_1__::func_15(PLAYER::PLAYER_ID()))
	{
		__LIB_2__::func_16();
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 1);
	}
	if (BitTest(Global_1943920.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 6);
	}
	if (BitTest(Global_1943920.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 7);
	}
	if (BitTest(Global_1943920.f_3, 8))
	{
		__LIB_12__::func_518("IMPEXP_SELFDES" /* GXT: The SecuroServ modified vehicle will now self-destruct. Please stand clear. */, 0);
		__LIB_12__::func_565("IMPEXP_SELFDES" /* GXT: The SecuroServ modified vehicle will now self-destruct. Please stand clear. */);
		MISC::CLEAR_BIT(&(Global_1943920.f_3), 8);
	}
	__LIB_15__::func_621(iVar1, 0);
}

int func_733(struct<21> Param0)//Position - 0x3BB63
{
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_93, 11, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_94, 129, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_734(0, 0, 0);
	return 1;
}

void func_734(int iParam0, int iParam1, bool bParam2)//Position - 0x3BBA6
{
	__LIB_15__::func_436();
	if (__LIB_9__::func_704(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_512(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && __LIB_35__::func_487(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1943915, 0);
				break;
			}
	}
	if (!__LIB_2__::func_50() && !__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_2__::func_58())
		{
			__LIB_11__::func_670(3);
		}
	}
	__LIB_11__::func_670(4);
	if (__LIB_2__::func_159(0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = __LIB_0__::func_797();
	}
	if ((__LIB_29__::func_860(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		__LIB_15__::func_333();
		Global_1943947.f_18 = __LIB_5__::func_491(__LIB_1__::func_730());
	}
	else if (__LIB_12__::func_499(__LIB_4__::func_921(PLAYER::PLAYER_ID())))
	{
		__LIB_15__::func_332();
		Global_1944003.f_18 = __LIB_5__::func_491(__LIB_1__::func_730());
	}
	if (bParam2)
	{
		if (!func_365())
		{
			__LIB_2__::func_135(1);
		}
	}
	__LIB_15__::func_425();
}

