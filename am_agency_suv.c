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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<26> Local_101 = { 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	struct<6> Local_105[8];
	struct<1297> Local_106 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	var uLocal_107 = 10;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 4;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<21> Local_124 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_669(ScriptParam_124))
			{
				func_662();
			}
		}
		else
		{
			func_662();
		}
	}
	else
	{
		func_662();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_662();
		}
		if (func_653(0))
		{
			func_662();
		}
		func_649();
		func_643();
		switch (func_642(NETWORK::PARTICIPANT_ID()))
		{
			case 0:
				if (__LIB_1__::func_517() == 1 && func_640())
				{
					func_639(1);
				}
				break;
			case 1:
				switch (__LIB_1__::func_517())
				{
					case 1:
						func_308();
						break;
					case 2:
						func_639(2);
						break;
				}
				break;
			case 2:
				func_662();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_1__::func_517())
			{
				case 0:
					if (func_60())
					{
						__LIB_1__::func_476(1);
					}
					break;
				case 1:
					func_1();
					break;
				case 2:
					func_662();
					break;
				}
		}
	}
}

void func_1()//Position - 0x188
{
	if (__LIB_1__::func_475() > 0)
	{
		func_43();
		func_40();
		func_18();
		func_4();
	}
	switch (__LIB_1__::func_475())
	{
		case 0:
			__LIB_1__::func_467(1);
			break;
		case 1:
			if (__LIB_1__::func_466() == 0)
			{
			}
			else
			{
				__LIB_1__::func_467(5);
			}
			break;
		case 5:
			__LIB_1__::func_476(2);
			break;
	}
}

void func_4()//Position - 0x20B
{
	if (__LIB_1__::func_466() != 0)
	{
		return;
	}
	if (func_16(2))
	{
		__LIB_1__::func_469(1);
		return;
	}
	if (func_16(1))
	{
		__LIB_1__::func_469(5);
		return;
	}
	if (!func_12())
	{
		__LIB_1__::func_469(4);
		return;
	}
	if (func_11() == 7)
	{
		__LIB_1__::func_469(2);
		return;
	}
	if (!func_6(func_9()))
	{
		if (func_5() == 1 && !func_16(7))
		{
			return;
		}
		__LIB_1__::func_469(3);
		return;
	}
}

int func_5()//Position - 0x289
{
	return Local_101.f_19;
}

bool func_6(int iParam0)//Position - 0x295
{
	return PED::IS_PED_SITTING_IN_VEHICLE(iParam0, func_7());
}

int func_7()//Position - 0x2A7
{
	return NETWORK::NET_TO_VEH(__LIB_1__::func_468());
}

int func_9()//Position - 0x2C3
{
	return NETWORK::NET_TO_PED(func_10());
}

int func_10()//Position - 0x2D3
{
	return Local_101.f_10;
}

int func_11()//Position - 0x2DF
{
	return Local_101.f_10.f_1;
}

bool func_12()//Position - 0x2ED
{
	return __LIB_0__::func_939(__LIB_1__::func_468());
}

bool func_16(int iParam0)//Position - 0x36F
{
	return __LIB_0__::func_316(&(Local_101.f_2), iParam0);
}

void func_18()//Position - 0x3A4
{
	if (!func_39())
	{
		return;
	}
	switch (func_38())
	{
		case 0:
			if (func_23())
			{
				func_22(1);
			}
			break;
		case 1:
			if (func_16(5) && __LIB_0__::func_937(&(Local_101.f_21), 500, 0))
			{
				func_22(2);
			}
			break;
		case 2:
			if (func_16(6))
			{
				func_22(3);
			}
			break;
		case 3:
			if (func_16(7))
			{
				func_22(4);
			}
			break;
		case 4:
			if (__LIB_0__::func_937(&(Local_101.f_23), 8000, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_101.f_23));
				func_22(5);
			}
			break;
	}
}

void func_22(int iParam0)//Position - 0x4FD
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_20 = iParam0;
}

int func_23()//Position - 0x516
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_520(1))
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = __LIB_1__::func_519(__LIB_0__::func_797(), iVar0);
			if (((iVar1 != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_156(iVar1, 0, 1)) && func_30(iVar1)) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar1, __LIB_5__::func_23(142), __LIB_1__::func_470()))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

bool func_30(int iParam0)//Position - 0x1078
{
	return __LIB_1__::func_472(iParam0, 18);
}

int func_38()//Position - 0x116C
{
	return Local_101.f_20;
}

int func_39()//Position - 0x1178
{
	if (func_5() != 1)
	{
		return 0;
	}
	if (func_38() == 5)
	{
		return 0;
	}
	return 1;
}

void func_40()//Position - 0x1199
{
	if (func_42() > 0)
	{
		if (func_42() != 2)
		{
			if (!func_12())
			{
				func_41(2);
			}
		}
	}
	switch (func_42())
	{
		case 0:
			func_41(1);
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_41(int iParam0)//Position - 0x11E7
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_17.f_1 = iParam0;
}

int func_42()//Position - 0x1202
{
	return Local_101.f_17.f_1;
}

void func_43()//Position - 0x1210
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	iVar0 = func_10();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		iVar1 = func_9();
		bVar2 = true;
		bVar3 = !PED::IS_PED_INJURED(iVar1);
	}
	if (func_11() > 0)
	{
		if (func_11() != 7)
		{
			if (!bVar3)
			{
				func_57(7);
			}
		}
		if (func_53())
		{
			func_57(6);
		}
	}
	switch (func_11())
	{
		case 0:
			if (bVar2)
			{
				switch (func_5())
				{
					case 0:
						func_57(1);
						break;
					case 1:
						func_57(3);
						break;
					}
			}
			break;
		case 1:
			if ((((!__LIB_0__::func_86(func_52()) && func_12()) && ENTITY::DOES_ENTITY_EXIST(__LIB_30__::func_905())) && func_6(__LIB_30__::func_905())) && func_16(4))
			{
				func_57(2);
			}
			break;
		case 2:
			if (func_12() && !func_16(4))
			{
				func_57(4);
			}
			else if (func_49(0))
			{
				__LIB_1__::func_473(__LIB_1__::func_521(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				func_57(3);
			}
			break;
		case 4:
			if (func_49(1))
			{
				func_57(1);
			}
			break;
		case 3:
			switch (func_5())
			{
				case 0:
					if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), false, true) == 0)
					{
						func_45(2);
					}
					break;
				case 1:
					if (func_16(7) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), false, true) == 0)
					{
						func_57(5);
					}
					break;
			}
			break;
		case 5:
			switch (func_5())
			{
				case 1:
					if (__LIB_0__::func_798(iVar1, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER"), 1))
					{
						func_45(2);
					}
					break;
			}
			break;
		case 7:
			break;
	}
}

void func_45(int iParam0)//Position - 0x1411
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (__LIB_1__::func_458(&(Local_101.f_2), iParam0))
	{
	}
}

bool func_49(int iParam0)//Position - 0x1555
{
	return __LIB_0__::func_316(&(Local_101.f_4), iParam0);
}

Vector3 func_52()//Position - 0x15A1
{
	return Local_101.f_10.f_2;
}

int func_53()//Position - 0x15B1
{
	if (!func_56())
	{
		return 0;
	}
	if (!func_12())
	{
		return 1;
	}
	if (func_54())
	{
		return 1;
	}
	if (!func_6(func_9()))
	{
		return 1;
	}
	return 0;
}

bool func_54()//Position - 0x15ED
{
	return __LIB_1__::func_474(func_7());
}

int func_56()//Position - 0x1648
{
	if (func_11() == 6)
	{
		return 0;
	}
	if (func_5() == 1 && !func_16(7))
	{
		return 0;
	}
	return 1;
}

void func_57(int iParam0)//Position - 0x1675
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_10.f_1 = iParam0;
}

int func_60()//Position - 0x16A8
{
	int iVar0;
	if (!func_16(0))
	{
		if (__LIB_1__::func_30(PLAYER::PLAYER_ID(), 0))
		{
			iVar0 = __LIB_0__::func_797();
		}
		else
		{
			iVar0 = PLAYER::PLAYER_ID();
		}
		__LIB_1__::func_481(iVar0);
		func_306();
		if (func_30(iVar0))
		{
			func_305(1);
		}
		else
		{
			func_305(0);
		}
		func_303();
		func_45(0);
	}
	if (func_302())
	{
		return 0;
	}
	if (!func_66())
	{
		return 0;
	}
	if (!func_61())
	{
		return 0;
	}
	return 1;
}

int func_61()//Position - 0x1721
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 1;
	}
	if (__LIB_0__::func_799(func_65()) && __LIB_0__::func_930(&(Local_101.f_10), __LIB_1__::func_468(), 26, func_65(), -1, 1, 1, 1))
	{
		func_62();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_65());
		return 1;
	}
	return 0;
}

void func_62()//Position - 0x176F
{
	int iVar0;
	iVar0 = func_9();
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837194);
	PED::SET_PED_KEEP_TASK(iVar0, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 251, true);
	PED::SET_DRIVER_ABILITY(iVar0, 1f);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 11, 0, 0, 0);
	PED::SET_PED_PROP_INDEX(iVar0, 1, 0, 0, false);
	if (func_5() == 1)
	{
		ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
	}
}

int func_65()//Position - 0x18CA
{
	return joaat("S_M_M_HighSec_05");
}

int func_66()//Position - 0x18D7
{
	int iVar0;
	struct<103> Var1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(__LIB_1__::func_468()))
	{
		return 1;
	}
	if (__LIB_0__::func_799(func_301()) && func_152())
	{
		MISC::CLEAR_AREA(Local_101.f_25, 5f, true, false, false, false);
		if (__LIB_0__::func_957(&(Local_101.f_17), func_301(), Local_101.f_25, Local_101.f_25.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = func_7();
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
			__LIB_1__::func_477(iVar0);
			ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iVar0, true);
			Var1 = { func_146() };
			__LIB_30__::func_911(iVar0, &Var1, 0, 1, 1);
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				MISC::SET_BIT(&iVar2, 11);
				DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar2);
			}
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
			{
				DECORATOR::DECOR_SET_INT(iVar0, "Not_Allow_As_Saved_Veh", 1);
			}
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Company_SUV" /* GXT: Company SUV */, 3) && !DECORATOR::DECOR_EXIST_ON(iVar0, "Company_SUV" /* GXT: Company SUV */))
			{
				DECORATOR::DECOR_SET_INT(iVar0, "Company_SUV" /* GXT: Company SUV */, NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
			}
			switch (func_5())
			{
				case 0:
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iVar0, true);
					VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iVar0, 1, 3);
					break;
				case 1:
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
					ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
					ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
					break;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_301());
			return 1;
		}
	}
	return 0;
}

struct<103> func_146()//Position - 0xA92E
{
	struct<103> Var0;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var0.f_66 = func_301();
	StringCopy(&(Var0.f_1), "FCP1", 16);
	Var0.f_5 = 4;
	Var0.f_6 = 0;
	Var0.f_7 = 5;
	Var0.f_8 = 0;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_98 = 0;
	Var0.f_65 = 1;
	Var0.f_69 = 3;
	Var0.f_62 = 255;
	Var0.f_63 = 255;
	Var0.f_64 = 255;
	Var0.f_74 = 255;
	Var0.f_76 = 255;
	MISC::SET_BIT(&(Var0.f_77), 9);
	Var0.f_9[1] = 14;
	Var0.f_9[2] = 8;
	Var0.f_9[3] = 6;
	Var0.f_9[4] = 6;
	Var0.f_9[7] = 6;
	Var0.f_9[11] = 2;
	Var0.f_9[12] = 1;
	Var0.f_9[13] = 1;
	Var0.f_9[15] = 2;
	Var0.f_9[22] = 1;
	if (__LIB_10__::func_576(PLAYER::PLAYER_ID()))
	{
		Var0.f_9[5] = 1;
	}
	return Var0;
}

int func_152()//Position - 0xAD01
{
	if (func_16(9))
	{
		return 1;
	}
	switch (func_5())
	{
		case 0:
			if (func_156(func_299(), &(Local_101.f_25), &(Local_101.f_25.f_3)))
			{
				func_45(9);
				return 1;
			}
			break;
		case 1:
			Local_101.f_25 = { func_153() };
			Local_101.f_25 = { Local_101.f_25 + Vector(-30f, 0f, 0f) };
			func_45(9);
			return 1;
	}
	return 0;
}

Vector3 func_153()//Position - 0xAD76
{
	switch (func_154())
	{
		case 1:
			return 372.1165f, -82.8836f, 66.3691f;
		case 2:
			return -1062.248f, -415.1499f, 34.9021f;
		case 3:
			return -617.4594f, -732.0776f, 26.8563f;
		case 4:
			return -988.64136f, -789.05133f, 15.30545f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_154()//Position - 0xADEA
{
	var uVar0;
	uVar0 = __LIB_0__::func_813(__LIB_1__::func_470());
	return uVar0;
}

int func_156(struct<3> Param0, var uParam1, float fParam2)//Position - 0xAE22
{
	struct<31> Var0;
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
	Var0.f_0 = func_298();
	Var0.f_4 = 1000f;
	Var0.f_27 = 1;
	if (func_5() == 1)
	{
		Var0.f_25 = 0;
		Var0.f_26 = 0;
		if (!func_653(6))
		{
			func_295();
			func_294(6);
		}
	}
	if (func_158(Param0, 0f, 0f, 0f, func_301(), 1, uParam1, fParam2, &Var0))
	{
		if (func_653(6))
		{
			__LIB_0__::func_814();
		}
		return 1;
	}
	return 0;
}

int func_158(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0xAF22
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_282(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_2__::func_971(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_23__::func_523(Param0, iParam2);
		}
		if (__LIB_12__::func_389(Param0))
		{
			__LIB_23__::func_523(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_1__::func_408(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_2__::func_991(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_185(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_1__::func_571(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_180(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_821(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_2__::func_987(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_2__::func_986(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_180(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_180(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_185(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_180(struct<3> Param0, int iParam1)//Position - 0xC34B
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_180(Var0, iParam1 + 1);
	}
}

void func_185(var uParam0, var uParam1, var uParam2)//Position - 0xC55F
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_234(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_186(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_186(var uParam0, var uParam1, var uParam2)//Position - 0xC5CE
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_230(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_1__::func_572(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_2__::func_990(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_10__::func_743(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_230(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_1__::func_408(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_1__::func_408(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_2__::func_986(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_1__::func_575(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_194(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_1__::func_546(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_192(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_230(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_11__::func_280(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_192(int iParam0, var uParam1)//Position - 0xD32D
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_192(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_192(iParam0 + 1, uParam1);
	}
}

void func_194(struct<3> Param0, float fParam1, int iParam2)//Position - 0xD3D3
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_194(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_230(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0xED98
{
	int iVar0;
	bool bVar1;
	if (func_282(Param0))
	{
		if (func_233(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_233(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xEFE2
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_233(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_234(var uParam0, var uParam1, var uParam2)//Position - 0xF0BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_230(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_10__::func_743(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_230(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_1__::func_408(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_1__::func_408(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_2__::func_986(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_1__::func_575(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_194(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_192(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_282(struct<3> Param0)//Position - 0x185E4
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_233(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_233(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_233(&Var1, 0, 0, 0, 1))
					{
						if (!func_233(&Param0, 0, 0, 0, 1))
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

void func_294(int iParam0)//Position - 0x18952
{
	if (__LIB_1__::func_458(&(Local_106.f_133), iParam0))
	{
	}
}

int func_295()//Position - 0x18967
{
	__LIB_0__::func_814();
	switch (func_297())
	{
		case 0:
			__LIB_0__::func_849(func_296(), 148.7996f);
			__LIB_0__::func_849(-1053.594f, -2541.3635f, 19.0804f, 149.9996f);
			__LIB_0__::func_849(-1067.8008f, -2565.9033f, 19.0786f, 149.7995f);
			break;
		case 1:
			__LIB_0__::func_849(func_296(), 319.5993f);
			__LIB_0__::func_849(-1633.6018f, -982.0679f, 12.0174f, 140.1986f);
			__LIB_0__::func_849(-1621.2946f, -967.3729f, 12.0176f, 140.1985f);
			break;
		case 2:
			__LIB_0__::func_849(func_296(), 254.1978f);
			__LIB_0__::func_849(-398.3749f, 1174.289f, 324.6416f, 279.9978f);
			__LIB_0__::func_849(-422.421f, 1181.459f, 324.6416f, 224.7975f);
			break;
		case 3:
			__LIB_0__::func_849(func_296(), 179.7976f);
			__LIB_0__::func_849(827.0105f, -2963.5293f, 4.9008f, 179.7976f);
			__LIB_0__::func_849(827.0532f, -2992.452f, 4.903f, 179.1978f);
			break;
		case 4:
			__LIB_0__::func_849(func_296(), 249.3976f);
			__LIB_0__::func_849(220.4448f, -852.2534f, 29.1105f, 249.9977f);
			__LIB_0__::func_849(238.0792f, -959.2108f, 28.2027f, 160.1973f);
			break;
		case 5:
			__LIB_0__::func_849(func_296(), 186.5969f);
			__LIB_0__::func_849(-3200.642f, 910.3599f, 13.3531f, 246.597f);
			__LIB_0__::func_849(-3224.6724f, 1084.2233f, 9.7721f, 165.9965f);
			break;
		case 6:
			__LIB_0__::func_849(func_296(), 228.996f);
			__LIB_0__::func_849(-1885.713f, 2019.1978f, 139.8078f, 165.3959f);
			__LIB_0__::func_849(-1902.7965f, 2041.4781f, 139.7425f, 160.9958f);
			break;
		case 7:
			__LIB_0__::func_849(func_296(), 120.1956f);
			__LIB_0__::func_849(1833.9629f, 3656.3696f, 33.2724f, 120.1956f);
			__LIB_0__::func_849(1847.3832f, 3751.398f, 32.1719f, 29.9954f);
			break;
		case 8:
			__LIB_0__::func_849(func_296(), 5.7954f);
			__LIB_0__::func_849(1696.2357f, 4729.6963f, 41.2005f, 20.1947f);
			__LIB_0__::func_849(1661.1301f, 4872.8027f, 41.043f, 187.7946f);
			break;
		case 9:
			__LIB_0__::func_849(func_296(), 134.9944f);
			__LIB_0__::func_849(-139.9687f, 6440.6377f, 30.3298f, 225.5942f);
			__LIB_0__::func_849(-229.6591f, 6312.9663f, 30.2937f, 135.3941f);
			break;
	}
	return 0;
}

Vector3 func_296()//Position - 0x18C39
{
	switch (func_297())
	{
		case 0:
			return -1026.9246f, -2495.2595f, 19.0826f;
		case 1:
			return -1612.7935f, -974.2093f, 12.0174f;
		case 2:
			return -411.0467f, 1174.9912f, 324.6416f;
		case 3:
			return 826.9172f, -2978.489f, 4.9068f;
		case 4:
			return 242.5445f, -860.3193f, 28.5547f;
		case 5:
			return -3232.715f, 967.5353f, 12.0342f;
		case 6:
			return -1914.5135f, 2067.4412f, 139.3692f;
		case 7:
			return 1931.2938f, 3713.5544f, 31.3825f;
		case 8:
			return 1678.4316f, 4824.1562f, 41.0081f;
		case 9:
			return -318.2824f, 6068.81f, 30.1976f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_297()//Position - 0x18D3D
{
	return Global_1892703[__LIB_1__::func_470() /*599*/].f_10.f_309;
}

float func_298()//Position - 0x18D55
{
	switch (func_5())
	{
		case 1:
			return 0f;
		default:
	}
	return 10f;
}

Vector3 func_299()//Position - 0x18D75
{
	switch (func_5())
	{
		case 1:
			return func_296();
		default:
	}
	return func_300();
}

Vector3 func_300()//Position - 0x18D97
{
	struct<3> Var0;
	if (__LIB_0__::func_156(__LIB_1__::func_470(), 0, 1))
	{
		Var0 = { __LIB_0__::func_85(__LIB_1__::func_470()) };
	}
	return Var0;
}

int func_301()//Position - 0x18DBC
{
	return joaat("jubilee");
}

int func_302()//Position - 0x18DC9
{
	if (func_5() == 0)
	{
		if (!__LIB_0__::func_937(&(Local_101.f_8), 10000, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_303()//Position - 0x18DEE
{
	__LIB_1__::func_480(17);
}

void func_305(int iParam0)//Position - 0x18E19
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_19 = iParam0;
}

void func_306()//Position - 0x18E32
{
	struct<3> Var0;
	if (__LIB_0__::func_156(__LIB_1__::func_470(), 0, 1))
	{
		Var0 = { __LIB_0__::func_85(__LIB_1__::func_470()) };
	}
	Local_106.f_143 = { Var0 };
}

void func_308()//Position - 0x18E76
{
	if (__LIB_1__::func_475() > 0)
	{
		func_630();
		func_620();
		func_608();
		func_590();
		func_586();
		func_583();
		func_582();
		func_575();
		func_552();
		func_546();
		func_544();
		func_539();
		func_527();
		func_324();
		func_314();
	}
	if (func_313(NETWORK::PARTICIPANT_ID()) != 5 && __LIB_1__::func_475() == 5)
	{
		func_312(5);
	}
	switch (func_313(NETWORK::PARTICIPANT_ID()))
	{
		case 0:
			if (__LIB_1__::func_475() > 0)
			{
				switch (func_5())
				{
					case 0:
						if (func_310())
						{
							func_309(0);
						}
						func_312(2);
						break;
					case 1:
						if (func_30(PLAYER::PLAYER_ID()))
						{
							func_312(4);
						}
						else
						{
							func_312(2);
						}
						break;
					}
			}
			break;
		case 2:
			if ((func_310() && func_12()) && func_6(PLAYER::PLAYER_PED_ID()))
			{
				func_312(3);
			}
			break;
		case 3:
			if ((func_310() && func_12()) && !func_6(PLAYER::PLAYER_PED_ID()))
			{
				func_312(2);
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

void func_309(int iParam0)//Position - 0x18FAA
{
	if (__LIB_1__::func_458(&(Local_106.f_135), iParam0))
	{
	}
}

bool func_310()//Position - 0x18FBF
{
	return __LIB_1__::func_795(PLAYER::PLAYER_ID());
}

void func_312(int iParam0)//Position - 0x18FDF
{
	Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1 = iParam0;
}

int func_313(int iParam0)//Position - 0x18FF3
{
	return Local_105[iParam0 /*6*/].f_1;
}

void func_314()//Position - 0x19003
{
	struct<3> Var0;
	float fVar1;
	if (!func_323())
	{
		return;
	}
	if ((!func_322(NETWORK::PARTICIPANT_ID(), 3) && !func_16(7)) && __LIB_1__::func_561(__LIB_1__::func_468()))
	{
		Var0 = { func_296() };
		fVar1 = 0f;
		if (func_156(Var0, &Var0, &fVar1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(func_7(), false);
			ENTITY::SET_ENTITY_VISIBLE(func_7(), true, false);
			ENTITY::SET_ENTITY_COLLISION(func_7(), true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(func_7(), false);
			ENTITY::SET_ENTITY_COORDS(func_7(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_7(), fVar1);
			__LIB_0__::func_940(Var0, fVar1, func_301(), func_7());
			func_316();
			func_315(3);
		}
	}
}

void func_315(int iParam0)//Position - 0x190B0
{
	if (__LIB_1__::func_458(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2), iParam0))
	{
	}
}

void func_316()//Position - 0x190CB
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	if (!func_310())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = -1;
	switch (func_5())
	{
		case 0:
			Var0 = { func_319() };
			break;
		case 1:
			Var0 = { func_153() };
			iVar2 = func_318(func_154());
			iVar3 = func_317(func_297());
			break;
	}
	if (func_12())
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(func_7(), false) };
	}
	STATS::PLAYSTATS_FAST_TRVL(iVar2, Var0.f_0, Var0.f_1, Var0.f_2, iVar3, Var1.f_0, Var1.f_1, Var1.f_2, 2);
}

int func_317(int iParam0)//Position - 0x19154
{
	switch (iParam0)
	{
		case 0:
			return -1128277155;
		case 1:
			return -1115834150;
		case 2:
			return -135620656;
		case 3:
			return -112056340;
		case 4:
			return -1063956049;
		case 5:
			return -829605638;
		case 6:
			return 252240118;
		case 7:
			return 327903191;
		case 8:
			return 1768450980;
		case 9:
			return 1978986468;
		default:
	}
	return -1;
}

int func_318(int iParam0)//Position - 0x191F0
{
	switch (iParam0)
	{
		case 1:
			return 288198753;
		case 2:
			return 1220378990;
		case 3:
			return 896667476;
		case 4:
			return 1434879160;
		default:
	}
	return -1;
}

Vector3 func_319()//Position - 0x19238
{
	return Local_106.f_143;
}

bool func_322(int iParam0, int iParam1)//Position - 0x1929D
{
	return __LIB_0__::func_316(&(Local_105[iParam0 /*6*/].f_2), iParam1);
}

int func_323()//Position - 0x192B3
{
	if (func_5() != 1)
	{
		return 0;
	}
	if (func_38() != 3)
	{
		return 0;
	}
	return 1;
}

void func_324()//Position - 0x192D4
{
	if (!func_526())
	{
		return;
	}
	switch (func_38())
	{
		case 0:
			break;
		case 1:
			if (!func_322(NETWORK::PARTICIPANT_ID(), 1))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), func_7(), 20000, __LIB_30__::func_909(), 2f, 16, 0);
				func_315(1);
			}
			break;
		case 2:
			func_342();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(0f, 0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			else if (CAM::IS_SCREEN_FADED_IN())
			{
				if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), func_7()) && !__LIB_0__::func_798(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				else
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_327(0);
					func_325();
				}
			}
			break;
	}
}

void func_325()//Position - 0x193C6
{
	__LIB_1__::func_482(18);
}

void func_327(bool bParam0)//Position - 0x193F1
{
	if (bParam0)
	{
		if (!func_653(8))
		{
			Global_2815059.f_6753 = 1;
			func_294(8);
		}
	}
	else if (func_653(8))
	{
		Global_2815059.f_6753 = 0;
		func_328(8);
	}
}

void func_328(int iParam0)//Position - 0x19430
{
	if (__LIB_16__::func_758(&(Local_106.f_133), iParam0))
	{
	}
}

void func_342()//Position - 0x19BAF
{
	__LIB_1__::func_498();
	if (!func_322(NETWORK::PARTICIPANT_ID(), 2))
	{
		__LIB_1__::func_497();
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
		}
		if (func_343())
		{
			func_315(2);
		}
	}
}

int func_343()//Position - 0x19BF3
{
	if (!func_653(7))
	{
		if (func_404())
		{
			func_389(&(Local_106.f_861), __LIB_1__::func_493(), func_402(), func_401(), func_400(), func_399(), func_398(), func_397(), func_399(), __LIB_7__::func_239(), __LIB_1__::func_492(), __LIB_1__::func_492(), 0, 0, 0);
			func_387(&(Local_106.f_861), __LIB_1__::func_491());
			MISC::CLEAR_AREA_OF_PROJECTILES(func_153(), 25f, 0);
			func_384(1);
			func_294(7);
		}
	}
	else
	{
		if (Local_106.f_861.f_386)
		{
			__LIB_40__::func_714(&(Local_106.f_861), 0, 1);
		}
		if (!Local_106.f_861.f_386)
		{
			__LIB_1__::func_484(&(Local_106.f_1296));
			func_384(0);
			return 1;
		}
	}
	return 0;
}

void func_384(bool bParam0)//Position - 0x1AD43
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_386(iVar0, &Var1, &iVar2, &iVar3);
			if (!__LIB_0__::func_86(Var1) && iVar2 != 0)
			{
				Local_106.f_1309[iVar0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 1f, iVar2, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(Local_106.f_1309[iVar0]))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Local_106.f_1309[iVar0], func_385(iVar3));
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_106.f_1309[iVar0]))
			{
				ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Local_106.f_1309[iVar0], func_385(3));
				Local_106.f_1309[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_385(int iParam0)//Position - 0x1ADFE
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 0;
		case 0:
			return 1;
		default:
	}
	return 3;
}

void func_386(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1AE2C
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0;
	*uParam3 = 3;
	switch (func_154())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1078.832f, -400.099f, 35.6866f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 0;
					break;
				case 1:
					*uParam1 = { -1112.3516f, -389.5655f, 35.5553f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 0;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -620.2317f, -639.3665f, 30.7662f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 2;
					break;
				case 1:
					*uParam1 = { -649.6973f, -678.2882f, 30.4513f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 2;
					break;
				case 2:
					*uParam1 = { -657.0476f, -646.7035f, 30.6344f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 0;
					break;
				case 3:
					*uParam1 = { -617.908f, -670.8911f, 30.6263f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 0;
					break;
			}
			break;
	}
}

void func_387(var uParam0, var uParam1)//Position - 0x1AF5C
{
	if (uParam0->f_372 > 0)
	{
		if (!uParam0->f_386 && !BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533, 0))
		{
			__LIB_1__::func_485(uParam0);
			uParam0->f_1 = uParam1;
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533), 0);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533.f_1 = MISC::GET_HASH_KEY(&(uParam0->f_2));
			uParam0->f_386 = 1;
		}
	}
	else
	{
		__LIB_1__::func_485(uParam0);
	}
}

void func_389(int* iParam0, int iParam1, char* sParam2, struct<3> Param3, struct<3> Param4, var uParam5, struct<3> Param6, struct<3> Param7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1AFDC
{
	if (iParam0->f_372 == iParam0->f_18)
	{
		return;
	}
	iParam0->f_18[iParam0->f_372 /*36*/] = iParam1;
	StringCopy(&(iParam0->f_18[iParam0->f_372 /*36*/].f_16), sParam2, 32);
	iParam0->f_18[iParam0->f_372 /*36*/].f_1 = { Param3 };
	iParam0->f_18[iParam0->f_372 /*36*/].f_7 = { Param4 };
	iParam0->f_18[iParam0->f_372 /*36*/].f_13 = uParam5;
	iParam0->f_18[iParam0->f_372 /*36*/].f_4 = { Param6 };
	iParam0->f_18[iParam0->f_372 /*36*/].f_10 = { Param7 };
	iParam0->f_18[iParam0->f_372 /*36*/].f_14 = uParam8;
	iParam0->f_18[iParam0->f_372 /*36*/].f_15 = uParam9;
	iParam0->f_18[iParam0->f_372 /*36*/].f_24 = uParam10;
	iParam0->f_18[iParam0->f_372 /*36*/].f_25 = uParam11;
	iParam0->f_18[iParam0->f_372 /*36*/].f_27 = iParam12;
	iParam0->f_18[iParam0->f_372 /*36*/].f_28 = iParam13;
	iParam0->f_18[iParam0->f_372 /*36*/].f_26 = iParam14;
	iParam0->f_394 = -1;
	iParam0->f_372++;
	iParam0->f_378 = (iParam0->f_378 + iParam1);
	MISC::CLEAR_BIT(iParam0, 0);
	MISC::CLEAR_BIT(iParam0, 1);
	__LIB_5__::func_704(iParam0, (iParam0->f_372 - 1));
}

Vector3 func_397()//Position - 0x1B23F
{
	switch (func_154())
	{
		case 1:
			return -0.3468f, 0f, 123.3084f;
		case 2:
			return -2.4184f, 0f, 3.5321f;
		case 3:
			return 2.9576f, 0f, 16.5467f;
		case 4:
			return 2.7453f, 0f, 83.1987f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_398()//Position - 0x1B2A3
{
	switch (func_154())
	{
		case 1:
			return 387.9253f, -92.0965f, 69.6932f;
		case 2:
			return -1072.0194f, -439.7911f, 42.7951f;
		case 3:
			return -623.5024f, -747.2415f, 30.2106f;
		case 4:
			return -979.7598f, -802.8293f, 20.6507f;
		default:
	}
	return 0f, 0f, 0f;
}

float func_399()//Position - 0x1B317
{
	switch (func_154())
	{
		case 1:
			return 50f;
		case 2:
			return 43.7377f;
		case 3:
			return 35.3051f;
		case 4:
			return 37.769f;
		default:
	}
	return 50f;
}

Vector3 func_400()//Position - 0x1B365
{
	switch (func_154())
	{
		case 1:
			return 2.791f, 0f, 133.6721f;
		case 2:
			return -2.4184f, 0f, 8.8612f;
		case 3:
			return 1.675f, 0f, 18.1662f;
		case 4:
			return -1.1798f, 0f, 91.2695f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_401()//Position - 0x1B3C9
{
	switch (func_154())
	{
		case 1:
			return 391.8478f, -87.0746f, 69.3953f;
		case 2:
			return -1067.8943f, -447.6443f, 41.52f;
		case 3:
			return -620.9467f, -757.3182f, 28.5867f;
		case 4:
			return -970.7542f, -802.6863f, 20.8027f;
		default:
	}
	return 0f, 0f, 0f;
}

char* func_402()//Position - 0x1B43D
{
	return "Agency SUV (warp)";
}

int func_404()//Position - 0x1B454
{
	int iVar0;
	iVar0 = func_7();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (func_410(&iVar0, &(Local_106.f_1296), __LIB_0__::func_109()) && ENTITY::DOES_ENTITY_EXIST(Local_106.f_1296.f_1[0]))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_106.f_1296, true, false);
			ENTITY::SET_ENTITY_DYNAMIC(Local_106.f_1296, false);
			ENTITY::SET_ENTITY_VISIBLE(Local_106.f_1296, true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_106.f_1296, true);
			ENTITY::SET_ENTITY_COORDS(Local_106.f_1296, func_153(), true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_106.f_1296, func_409());
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_106.f_1296, false, false, false);
			ENTITY::SET_ENTITY_PROOFS(Local_106.f_1296, true, true, true, true, true, false, false, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_106.f_1296, 5f);
			ENTITY::FREEZE_ENTITY_POSITION(Local_106.f_1296, false);
			func_405();
			return 1;
		}
	}
	return 0;
}

void func_405()//Position - 0x1B524
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_106.f_1296.f_1[0]) && !PED::IS_PED_INJURED(Local_106.f_1296.f_1[0]))
	{
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_106.f_1296.f_1[0], Local_106.f_1296, func_408(), func_407(), 0, ENTITY::GET_ENTITY_MODEL(Local_106.f_1296), func_406(), -1f, -1f);
	}
}

int func_406()//Position - 0x1B57C
{
	return 1076369440;
}

float func_407()//Position - 0x1B589
{
	return 7.5f;
}

Vector3 func_408()//Position - 0x1B596
{
	switch (func_154())
	{
		case 1:
			return 299.37842f, -83.9257f, 69.12186f;
		case 2:
			return -976.7491f, -420.70706f, 36.79263f;
		case 3:
			return -624.53754f, -570.27246f, 33.98444f;
		case 4:
			return -1053.5691f, -753.4311f, 18.12809f;
		default:
	}
	return 0f, 0f, 0f;
}

float func_409()//Position - 0x1B60A
{
	switch (func_154())
	{
		case 1:
			return 188.5496f;
		case 2:
			return 119.1112f;
		case 3:
			return 89.7715f;
		case 4:
			return 161.2939f;
		default:
	}
	return 0f;
}

int func_410(int iParam0, var uParam1, var uParam2)//Position - 0x1B654
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_703(uParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_703(uParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_703(uParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_40__::func_715(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_10__::func_735(*iParam0, &Var0);
			__LIB_30__::func_911(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_495(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_867(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_703(uParam2, 32))
			{
				func_412(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(uParam2, 16), __LIB_0__::func_703(uParam2, 128), __LIB_0__::func_703(uParam2, 64), !__LIB_0__::func_703(uParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(uParam2, 4))
			{
				__LIB_42__::func_829(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_703(uParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_703(uParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

int func_412(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1B9BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_413(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_413(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1BB1F
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_494(*uParam0);
		if (func_428(iParam1) || __LIB_1__::func_554(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x1C9A6
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_430(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_430(int iParam0, int iParam1, int iParam2)//Position - 0x1CAA7
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_431(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_431(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_0__::func_453(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_0__::func_350(iParam0, iParam1);
		}
	}
	return -99;
}

int func_431(int iParam0, int iParam1, int iParam2)//Position - 0x1CB48
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_431(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_0__::func_466(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_431(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_431(iParam0, 14, iVar6))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_0__::func_350(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_0__::func_369(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_431(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_0__::func_240(iVar0, 11, __LIB_0__::func_350(iParam0, 11), -1))
				{
					if (__LIB_0__::func_353(iVar0, 4, iParam2, &uVar18))
					{
						return func_431(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_431(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_526()//Position - 0x3CC15
{
	if (!func_30(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_313(NETWORK::PARTICIPANT_ID()) != 4)
	{
		return 0;
	}
	return 1;
}

void func_527()//Position - 0x3CC3E
{
	struct<3> Var0;
	float fVar1;
	if (!func_538())
	{
		return;
	}
	if (func_535())
	{
		if (!__LIB_30__::func_913(PLAYER::PLAYER_ID()))
		{
			func_533();
		}
	}
	else if (__LIB_30__::func_913(PLAYER::PLAYER_ID()))
	{
		func_532();
	}
	switch (func_531())
	{
		case 0:
			if (func_530(PLAYER::PLAYER_ID()))
			{
				func_529(1);
			}
			break;
		case 1:
			__LIB_1__::func_473(__LIB_1__::func_521(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
			func_529(2);
			break;
		case 2:
			if ((__LIB_1__::func_561(__LIB_1__::func_468()) && __LIB_1__::func_561(func_10())) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), false, true) == 0)
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(func_7(), false, true);
				NETWORK::NETWORK_FADE_OUT_ENTITY(func_9(), false, true);
				ENTITY::FREEZE_ENTITY_POSITION(func_7(), true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_7(), false, false);
				func_529(3);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_VISIBLE(func_7()) && !ENTITY::IS_ENTITY_VISIBLE(func_9()))
			{
				func_529(4);
			}
			break;
		case 4:
			if (__LIB_0__::func_937(&(Local_106.f_141), 10000, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_106.f_141));
				func_529(5);
			}
			break;
		case 5:
			if (__LIB_1__::func_561(__LIB_1__::func_468()) && func_156(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, &fVar1))
			{
				ENTITY::SET_ENTITY_COORDS(func_7(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_7(), fVar1);
				NETWORK::NETWORK_FADE_IN_ENTITY(func_7(), true, 0);
				NETWORK::NETWORK_FADE_IN_ENTITY(func_9(), false, 1);
				ENTITY::FREEZE_ENTITY_POSITION(func_7(), false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_7(), true, false);
				func_529(6);
			}
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_ENTITY_FADING(func_7()) && !NETWORK::NETWORK_IS_ENTITY_FADING(func_9()))
			{
				func_528();
				func_306();
				func_529(0);
			}
			break;
	}
}

void func_528()//Position - 0x3CE0A
{
	__LIB_1__::func_482(20);
}

void func_529(int iParam0)//Position - 0x3CE18
{
	Local_106.f_140 = iParam0;
}

bool func_530(int iParam0)//Position - 0x3CE26
{
	return __LIB_1__::func_472(iParam0, 20);
}

int func_531()//Position - 0x3CE36
{
	return Local_106.f_140;
}

void func_532()//Position - 0x3CE42
{
	__LIB_1__::func_482(19);
}

void func_533()//Position - 0x3CE50
{
	__LIB_1__::func_480(19);
}

int func_535()//Position - 0x3CE6E
{
	if (func_530(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	if (func_537() != 0)
	{
		func_536(0);
	}
	if (func_322(NETWORK::PARTICIPANT_ID(), 5))
	{
		if (func_537() == 0)
		{
			func_536(1);
		}
		return 0;
	}
	if (func_16(8))
	{
		return 0;
	}
	return 1;
}

void func_536(int iParam0)//Position - 0x3CEC9
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_310 = iParam0;
}

int func_537()//Position - 0x3CEE3
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_310;
}

int func_538()//Position - 0x3CEFB
{
	if (func_5() != 0)
	{
		return 0;
	}
	if (!func_310())
	{
		return 0;
	}
	return 1;
}

void func_539()//Position - 0x3CF1C
{
	if (!func_543())
	{
		return;
	}
	switch (func_11())
	{
		case 1:
			if (func_542(NETWORK::PARTICIPANT_ID(), 2))
			{
				func_541(2);
			}
			break;
		case 2:
			if (func_12())
			{
				if (!func_542(NETWORK::PARTICIPANT_ID(), 0))
				{
					if (func_653(5))
					{
						func_540(0);
					}
				}
				else if (!func_542(NETWORK::PARTICIPANT_ID(), 1))
				{
					if (VEHICLE::IS_VEHICLE_STOPPED(func_7()) && func_653(5))
					{
						func_316();
						func_540(1);
					}
				}
			}
			break;
		case 4:
			if (!func_542(NETWORK::PARTICIPANT_ID(), 2))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(func_7()))
				{
					func_540(2);
				}
			}
			break;
	}
}

void func_540(int iParam0)//Position - 0x3CFD0
{
	if (__LIB_1__::func_458(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4), iParam0))
	{
	}
}

void func_541(int iParam0)//Position - 0x3CFEB
{
	if (__LIB_16__::func_758(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4), iParam0))
	{
	}
}

bool func_542(int iParam0, int iParam1)//Position - 0x3D006
{
	return __LIB_0__::func_316(&(Local_105[iParam0 /*6*/].f_4), iParam1);
}

int func_543()//Position - 0x3D01C
{
	if (func_310())
	{
		return 1;
	}
	return 0;
}

void func_544()//Position - 0x3D030
{
	if (!func_545())
	{
		return;
	}
	if (!func_653(2))
	{
		if (__LIB_0__::func_953(func_10()) && __LIB_0__::func_953(__LIB_1__::func_468()))
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_10(), false);
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(__LIB_1__::func_468(), false);
			func_294(2);
		}
	}
}

int func_545()//Position - 0x3D07B
{
	if (func_5() != 0)
	{
		return 0;
	}
	if (!func_310())
	{
		return 0;
	}
	return 1;
}

void func_546()//Position - 0x3D09C
{
	if (((!__LIB_0__::func_86(func_52()) && func_313(NETWORK::PARTICIPANT_ID()) == 3) && func_12()) && func_548(func_52()))
	{
		func_294(5);
		if (func_11() == 1 && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			func_309(1);
		}
	}
	else
	{
		func_328(5);
		func_547(1);
	}
}

void func_547(int iParam0)//Position - 0x3D0FF
{
	if (__LIB_16__::func_758(&(Local_106.f_135), iParam0))
	{
	}
}

int func_548(struct<3> Param0)//Position - 0x3D114
{
	if (!__LIB_0__::func_86(Param0) && ENTITY::IS_ENTITY_AT_COORD(func_7(), Param0, func_550(), func_550(), __LIB_1__::func_502(), false, true, 0))
	{
		return 1;
	}
	return 0;
}

float func_550()//Position - 0x3D15A
{
	switch (func_551())
	{
		case 1:
			return 35f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 10f;
		default:
	}
	return 45f;
}

int func_551()//Position - 0x3D1B6
{
	return Local_101.f_10.f_6;
}

void func_552()//Position - 0x3D1C4
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	if (!func_572())
	{
		return;
	}
	Var0 = { func_570() };
	if (!__LIB_0__::func_78(Local_106.f_147, Var0, 1))
	{
		if (func_557(Var0, &Var1, &uVar2))
		{
			Local_106.f_147 = { Var0 };
			uVar3 = func_556(Local_106.f_147);
			func_553(Var1, uVar2, uVar3);
		}
	}
}

void func_553(struct<3> Param0, var uParam1, var uParam2)//Position - 0x3D223
{
	func_554(Param0, uParam1, uParam2);
}

void func_554(struct<3> Param0, var uParam1, var uParam2)//Position - 0x3D237
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = 2020117340;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = MISC::GET_FRAME_COUNT();
	Var0.f_3 = { Param0 };
	Var0.f_6 = uParam1;
	Var0.f_7 = uParam2;
	iVar1 = __LIB_1__::func_26(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

int func_556(struct<3> Param0)//Position - 0x3D2E4
{
	struct<3> Var0;
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 79.8987f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 939.30426f, 88.76195f, 77.97077f, 890.79376f, 6.552929f, 82.880005f, 12.5f, false, true))
	{
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 66.6327f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 356.63205f, -80.94928f, 63.782463f, 402.5039f, -97.71112f, 70.912476f, 25f, false, true))
	{
		return 2;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 36.5367f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1021.3438f, -373.51898f, 35.695076f, -1070.5497f, -399.11984f, 40.070366f, 10f, false, true))
	{
		return 3;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 29.8949f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -629.36707f, -671.434f, 34.670628f, -629.45703f, -714.61456f, 27.22458f, 17.5f, false, true))
	{
		return 4;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 18.0513f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1027.292f, -731.5537f, 22.791037f, -1057.7551f, -757.6599f, 17.220333f, 15f, false, true))
	{
		return 5;
	}
	return 0;
}

int func_557(struct<3> Param0, var uParam1, var uParam2)//Position - 0x3D473
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	struct<3> Var9;
	int iVar10;
	int iVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 1000f), (Param0.f_1 - 1000f), (Param0.f_0 + 1000f), (Param0.f_1 + 1000f));
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 1000f), (Param0.f_1 - 1000f), (Param0.f_0 + 1000f), (Param0.f_1 + 1000f)))
	{
		iVar3 = 1;
		if (!__LIB_1__::func_509(Param0))
		{
			__LIB_1__::func_489(&iVar3, 8);
		}
		fVar4 = 3f;
		if (Param0.f_2 == 1f)
		{
			fVar4 = 0f;
		}
		while (!bVar0 && iVar5 < 2)
		{
			iVar5++;
			Local_106.f_150++;
			iVar6 = 0;
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, Local_106.f_150, &Var1, &fVar2, &iVar6, iVar3, fVar4, 2.5f))
			{
				iVar7 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Var1, 1, iVar3, 3f, 0f);
				if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar7))
				{
					Var8 = { 0f, 0f, 0f };
					Var9 = { 0f, 0f, 0f };
					iVar10 = 0;
					iVar11 = 0;
					fVar12 = 0f;
					if (PATHFIND::GET_CLOSEST_ROAD(Var1, 1f, 1, &Var9, &Var8, &iVar11, &iVar10, &fVar12, true))
					{
						if (fVar2 < 90f || fVar2 >= 270f)
						{
							bVar13 = true;
						}
						else
						{
							bVar13 = false;
						}
						if (bVar13)
						{
							if (iVar6 == iVar11)
							{
								bVar14 = true;
							}
						}
						else if (iVar6 == iVar10)
						{
							bVar14 = true;
						}
						if (fVar12 < 0f)
						{
							fVar15 = 0f;
						}
						else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar7) || !PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar7))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar13)
							{
								if (bVar14)
								{
									fVar15 = ((4.5f * IntToFloat(iVar11)) * 0.5f);
								}
								else
								{
									fVar15 = (4.5f * IntToFloat(iVar11));
								}
								if (bVar14)
								{
									if (iVar11 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar11 - 2)) * 1f));
									}
								}
								else if (iVar11 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar11 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar14)
								{
									fVar15 = ((4.5f * SYSTEM::TO_FLOAT(iVar10)) * 0.5f);
								}
								else
								{
									fVar15 = (4.5f * SYSTEM::TO_FLOAT(iVar10));
								}
								if (bVar14)
								{
									if (iVar10 > 2)
									{
										fVar15 = (fVar15 + IntToFloat((iVar10 - 2)));
									}
								}
								else if (iVar10 > 1)
								{
									fVar15 = (fVar15 + IntToFloat((iVar10 - 1)));
								}
							}
							iVar16 = 0;
							iVar17 = 0;
							if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &iVar16, &iVar17))
							{
								if (__LIB_1__::func_490(iVar17, 64))
								{
									fVar15 = (fVar15 + (0.9f * fVar12));
								}
								if (__LIB_1__::func_490(iVar17, 4))
								{
									fVar15 = (fVar15 + -0.7f);
								}
							}
						}
						if (__LIB_1__::func_508(Param0, Var1) || MISC::ABSF((Param0.f_2 - Var1.f_2)) < 0.5f)
						{
							Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, fVar2, fVar15, 0f, 0f) };
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Var1, 3f, 3f, 3f, func_7()))
							{
								if (__LIB_40__::func_716(Var1, &Var1, &fVar2))
								{
								}
								bVar0 = true;
							}
						}
					}
				}
			}
			if (Local_106.f_150 == 50)
			{
				Var1 = { Param0 };
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		*uParam1 = { Var1 };
		*uParam2 = fVar2;
		Local_106.f_150 = 0;
		return 1;
	}
	return 0;
}

Vector3 func_570()//Position - 0x40B37
{
	struct<3> Var0;
	int iVar1;
	iVar1 = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
	if (HUD::DOES_BLIP_EXIST(iVar1))
	{
		Var0 = { HUD::GET_BLIP_COORDS(iVar1) };
	}
	else
	{
		Var0 = { func_571() };
	}
	return Var0;
}

Vector3 func_571()//Position - 0x40B6B
{
	switch (func_154())
	{
		case 1:
			return 400.07663f, -93.09241f, 66.30355f;
		case 2:
			return -1045.4993f, -388.21716f, 36.64295f;
		case 3:
			return -627.717f, -688.1001f, 29.8949f;
		case 4:
			return -1045.3098f, -748.3319f, 18.0513f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_572()//Position - 0x40BDF
{
	if (func_542(NETWORK::PARTICIPANT_ID(), 0))
	{
		return 0;
	}
	if (!func_574())
	{
		return 0;
	}
	if (!func_573())
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	return 1;
}

int func_573()//Position - 0x40C1C
{
	switch (func_11())
	{
		case 1:
		case 2:
			return 1;
		default:
	}
	return 0;
}

int func_574()//Position - 0x40C3E
{
	switch (func_313(NETWORK::PARTICIPANT_ID()))
	{
		case 3:
			return 1;
		default:
	}
	return 0;
}

void func_575()//Position - 0x40C5E
{
	if (!func_581())
	{
		return;
	}
	if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), func_7(), 120f, 1))
	{
		if (!func_322(NETWORK::PARTICIPANT_ID(), 5))
		{
			func_315(5);
		}
	}
	else if (func_322(NETWORK::PARTICIPANT_ID(), 5))
	{
		func_579(5);
	}
	if (!func_322(NETWORK::PARTICIPANT_ID(), 4) && func_576())
	{
		func_315(4);
	}
}

int func_576()//Position - 0x40CC7
{
	if (func_310())
	{
		if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), func_7(), 1000f, 1))
		{
			return 1;
		}
		if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (__LIB_0__::func_890(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(__LIB_1__::func_470()))
	{
		return 1;
	}
	return 0;
}

void func_579(int iParam0)//Position - 0x40DD0
{
	if (__LIB_16__::func_758(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2), iParam0))
	{
	}
}

int func_581()//Position - 0x40E0D
{
	if (func_5() == 0 && func_12())
	{
		return 1;
	}
	return 0;
}

void func_582()//Position - 0x40E2C
{
	if (func_12())
	{
		if (func_653(1))
		{
			if (!func_6(PLAYER::PLAYER_PED_ID()))
			{
				func_328(1);
			}
		}
		else if (func_6(PLAYER::PLAYER_PED_ID()))
		{
			func_294(1);
		}
	}
	if (func_653(1))
	{
		if (func_653(2))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 376, true);
		}
	}
	else if (func_322(NETWORK::PARTICIPANT_ID(), 0))
	{
		func_579(0);
	}
}

void func_583()//Position - 0x40E97
{
	int iVar0;
	if (__LIB_1__::func_501())
	{
		iVar0 = 1;
	}
	else if (__LIB_1__::func_520(0))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 != func_585())
	{
		switch (func_585())
		{
			case 2:
				if (!func_653(0) && iVar0 == 0)
				{
					func_294(0);
				}
				break;
			case 0:
				if ((func_310() && !func_322(NETWORK::PARTICIPANT_ID(), 4)) && iVar0 == 2)
				{
					func_315(4);
				}
				break;
		}
		func_584(iVar0);
	}
}

void func_584(int iParam0)//Position - 0x40F22
{
	Local_106.f_139 = iParam0;
}

int func_585()//Position - 0x40F30
{
	return Local_106.f_139;
}

void func_586()//Position - 0x40F3C
{
	if (!func_588())
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
	{
		if (func_322(NETWORK::PARTICIPANT_ID(), 0))
		{
			func_579(0);
		}
		else
		{
			func_315(0);
		}
		func_587();
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
	{
		if (!func_542(NETWORK::PARTICIPANT_ID(), 3))
		{
			func_540(3);
			func_587();
		}
	}
}

void func_587()//Position - 0x40FA6
{
	if (!func_653(4))
	{
		func_294(4);
	}
}

int func_588()//Position - 0x40FBC
{
	if (!func_310())
	{
		return 0;
	}
	if (!func_574())
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	if (func_542(NETWORK::PARTICIPANT_ID(), 0))
	{
		return 0;
	}
	if (func_653(5))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	return 1;
}

void func_590()//Position - 0x41042
{
	if (!func_607())
	{
		return;
	}
	if (func_606())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_106.f_151))
		{
			func_309(2);
			if (func_605())
			{
				func_604();
				Local_106.f_852 = { __LIB_1__::func_404() };
				__LIB_1__::func_539(&(Local_106.f_152));
				if (func_322(NETWORK::PARTICIPANT_ID(), 0))
				{
					__LIB_1__::func_513(0, 177, "AMASUV_IB_STOP" /* GXT: Stop */, &(Local_106.f_152), 0, 363);
					if (!func_542(NETWORK::PARTICIPANT_ID(), 3) && !func_49(2))
					{
						__LIB_1__::func_513(0, 176, "AMASUV_IB_HRRY" /* GXT: Hurry */, &(Local_106.f_152), 0, 363);
					}
				}
				else
				{
					__LIB_1__::func_513(0, 177, "AMASUV_IB_STRT" /* GXT: Start */, &(Local_106.f_152), 0, 363);
				}
			}
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			__LIB_0__::func_876(1);
			__LIB_1__::func_10(1);
			__LIB_5__::func_693(&(Local_106.f_151), &(Local_106.f_852), &(Local_106.f_152), __LIB_1__::func_402(&(Local_106.f_152)));
		}
		else
		{
			Local_106.f_151 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
			func_587();
		}
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_106.f_151))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_106.f_151));
	}
}

void func_604()//Position - 0x41734
{
	if (func_653(4))
	{
		func_328(4);
	}
}

bool func_605()//Position - 0x41749
{
	return func_653(4);
}

int func_606()//Position - 0x41756
{
	if (!func_588())
	{
		return 0;
	}
	return 1;
}

int func_607()//Position - 0x4176B
{
	if (!func_310())
	{
		return 0;
	}
	if (func_5() != 0)
	{
		return 0;
	}
	return 1;
}

void func_608()//Position - 0x4178C
{
	int iVar0;
	int iVar1;
	if (!__LIB_30__::func_907())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_614(iVar1))
		{
			func_612(iVar1);
			if (__LIB_0__::func_114(iVar1))
			{
				func_547(iVar1);
			}
			if (__LIB_1__::func_514(iVar1))
			{
				func_609(iVar1);
			}
		}
		else
		{
			iVar0++;
		}
	}
}

void func_609(int iParam0)//Position - 0x417E5
{
	if (__LIB_1__::func_458(&(Local_106.f_137), iParam0))
	{
	}
}

void func_612(int iParam0)//Position - 0x4181D
{
	__LIB_0__::func_151(func_613(iParam0), -1);
}

char* func_613(int iParam0)//Position - 0x41830
{
	switch (iParam0)
	{
		case 0:
			return "AMASUV_HT_INTR" /* GXT: The Company SUV ~HUD_COLOUR_BLUE~~BLIP_SUV_SERVICE~~s~ will take you to your Agency. Place a waypoint on the Pause Map to be taken to another location. */;
		case 1:
			return "AMASUV_HT_CLSE" /* GXT: Your current destination is too close. Select another to continue. */;
		case 2:
			return "AMASUV_HT_CTRL" /* GXT: Press ~INPUT_CELLPHONE_CANCEL~ to start or stop the SUV. */;
		default:
	}
	return "";
}

int func_614(int iParam0)//Position - 0x4186A
{
	if (func_615(iParam0))
	{
		return 0;
	}
	return __LIB_0__::func_316(&(Local_106.f_135), iParam0);
}

bool func_615(var uParam0)//Position - 0x41889
{
	return __LIB_0__::func_316(&(Local_106.f_137), uParam0);
}

void func_620()//Position - 0x41946
{
	if (func_42() > 0)
	{
		func_623();
	}
	switch (func_42())
	{
		case 0:
			break;
		case 1:
			func_621();
			break;
		case 2:
			break;
	}
}

void func_621()//Position - 0x41982
{
	if (!func_622())
	{
		return;
	}
	if (func_653(2))
	{
		switch (VEHICLE::GET_VEHICLE_INDIVIDUAL_DOOR_LOCK_STATUS(func_7(), 1))
		{
			case 3:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), false, true) > 1)
				{
					VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_7(), 1, 1);
				}
				break;
			case 1:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), false, true) < 2)
				{
					VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_7(), 1, 3);
				}
				break;
			}
	}
}

int func_622()//Position - 0x419ED
{
	if (func_5() != 0)
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	return 1;
}

void func_623()//Position - 0x41A0E
{
	if (func_629())
	{
		if (!HUD::DOES_BLIP_EXIST(Local_106.f_146))
		{
			Local_106.f_146 = HUD::ADD_BLIP_FOR_ENTITY(func_7());
			HUD::SET_BLIP_SPRITE(Local_106.f_146, func_628());
			__LIB_2__::func_53(&(Local_106.f_146), __LIB_1__::func_516());
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_106.f_146, func_624());
			HUD::SET_BLIP_FLASHES(Local_106.f_146, true);
			HUD::SET_BLIP_FLASH_INTERVAL(Local_106.f_146, 250);
			HUD::SET_BLIP_FLASH_TIMER(Local_106.f_146, 7000);
		}
		if (HUD::DOES_BLIP_EXIST(Local_106.f_146))
		{
			HUD::SET_BLIP_ROTATION_WITH_FLOAT(Local_106.f_146, ENTITY::GET_ENTITY_HEADING(func_7()));
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_106.f_146))
	{
		HUD::REMOVE_BLIP(&(Local_106.f_146));
	}
}

char* func_624()//Position - 0x41AA8
{
	return "AMASUV_BLP_SUV" /* GXT: Agency SUV */;
}

int func_628()//Position - 0x41D4C
{
	return 812;
}

int func_629()//Position - 0x41D57
{
	if (func_5() != 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(__LIB_1__::func_468()))
	{
		return 0;
	}
	if (func_42() != 1)
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), func_7(), false))
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	if (func_530(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_630()//Position - 0x41DB7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	iVar0 = func_10();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		iVar1 = func_9();
		bVar2 = true;
		bVar3 = !PED::IS_PED_INJURED(iVar1);
	}
	if (bVar2)
	{
		func_637();
	}
	if ((func_653(2) && func_16(3)) && func_653(3))
	{
		TASK::CLEAR_PED_TASKS(iVar1);
		func_328(3);
		func_635(0);
	}
	switch (func_11())
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (bVar2 && bVar3)
			{
				if ((func_653(2) && !__LIB_0__::func_798(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1)) && func_12())
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, func_7(), func_52(), func_634(), func_633(), func_550());
					TASK::TASK_VEHICLE_PARK(0, func_7(), func_52(), func_632(), func_631(), 60f, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(func_9(), iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
				}
			}
			break;
		case 4:
			if (bVar2 && bVar3)
			{
				if ((func_653(2) && !__LIB_0__::func_798(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1)) && func_12())
				{
					TASK::TASK_VEHICLE_MISSION(iVar1, func_7(), func_7(), 22, func_634(), func_633(), -1f, -1f, true);
				}
			}
			break;
		case 3:
			break;
		case 6:
			if (bVar2 && bVar3)
			{
				if (func_653(2) && !__LIB_0__::func_798(iVar1, -251125078, 1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 17, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 1024, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 32768, false);
					Var5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
					TASK::TASK_SMART_FLEE_COORD(iVar1, Var5, 10000f, -1, false, false);
				}
			}
			break;
		case 5:
			if (bVar2 && bVar3)
			{
				if ((__LIB_1__::func_561(iVar0) && !__LIB_0__::func_798(iVar1, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER"), 1)) && func_12())
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iVar1, func_7(), func_634(), func_633());
				}
			}
			break;
		case 7:
			break;
	}
}

int func_631()//Position - 0x41FE9
{
	switch (func_551())
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		default:
	}
	return 3;
}

var func_632()//Position - 0x4201D
{
	return Local_101.f_10.f_5;
}

int func_633()//Position - 0x4202B
{
	if (func_49(2))
	{
		return 1076631588;
	}
	return 1076369579;
}

float func_634()//Position - 0x42048
{
	if (func_49(2))
	{
		return 50f;
	}
	return 15f;
}

void func_635(int iParam0)//Position - 0x42065
{
	func_636(iParam0);
}

void func_636(var uParam0)//Position - 0x42073
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -949440800;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = MISC::GET_FRAME_COUNT();
	Var0.f_3 = uParam0;
	iVar1 = __LIB_1__::func_26(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_637()//Position - 0x420B2
{
	int iVar0;
	bool bVar1;
	if (!func_542(NETWORK::PARTICIPANT_ID(), 3))
	{
		if (func_638())
		{
			iVar0 = func_9();
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 125))
			{
				bVar1 = true;
			}
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 126))
			{
				bVar1 = true;
			}
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 84))
			{
				bVar1 = true;
			}
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 97))
			{
				bVar1 = true;
			}
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 116))
			{
				bVar1 = true;
			}
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 94))
			{
				bVar1 = true;
			}
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 124))
			{
				bVar1 = true;
			}
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 29))
			{
				bVar1 = true;
			}
			if (PED::HAS_PED_RECEIVED_EVENT(iVar0, 23))
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_587();
				func_540(3);
			}
		}
	}
	else if (func_11() == 1)
	{
		func_587();
		func_541(3);
	}
}

int func_638()//Position - 0x42174
{
	if (func_313(NETWORK::PARTICIPANT_ID()) != 3)
	{
		return 0;
	}
	if (func_11() != 2)
	{
		return 0;
	}
	return 1;
}

void func_639(int iParam0)//Position - 0x42199
{
	Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = iParam0;
}

int func_640()//Position - 0x421AB
{
	func_303();
	if (func_5() == 1)
	{
		func_327(1);
	}
	return 1;
}

int func_642(int iParam0)//Position - 0x421CF
{
	return Local_105[iParam0 /*6*/];
}

void func_643()//Position - 0x421DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar2);
		switch (iVar0)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar2, &iVar1, 2);
				switch (iVar1)
				{
					case 2020117340:
						func_646(iVar2);
						break;
					case -949440800:
						func_644(iVar2);
						break;
				}
				break;
			case 186:
				break;
		}
		iVar2++;
	}
}

void func_644(int iParam0)//Position - 0x4224D
{
	struct<4> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_3)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!func_16(3))
				{
					func_45(3);
				}
			}
			if (!func_653(3))
			{
				func_294(3);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_16(3))
				{
					func_645(3);
				}
			}
			if (func_653(3))
			{
				func_328(3);
			}
		}
	}
}

void func_645(int iParam0)//Position - 0x422B0
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (__LIB_16__::func_758(&(Local_101.f_2), iParam0))
	{
	}
}

void func_646(int iParam0)//Position - 0x422D0
{
	struct<8> Var0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		func_648(Var0.f_3, Var0.f_6);
		func_647(Var0.f_7);
		if (func_11() != 1)
		{
			func_635(1);
		}
	}
}

void func_647(var uParam0)//Position - 0x42312
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_10.f_6 = uParam0;
}

void func_648(struct<3> Param0, var uParam1)//Position - 0x4232D
{
	Local_101.f_10.f_2 = { Param0 };
	Local_101.f_10.f_5 = uParam1;
}

void func_649()//Position - 0x42349
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Local_106.f_33[iVar1 /*3*/] = __LIB_0__::getMinusOneOrNull();
		Local_106.f_33[iVar1 /*3*/].f_1 = -1;
		Local_106.f_33[iVar1 /*3*/].f_2 = 0;
		MISC::CLEAR_BIT(&(Local_106.f_130), iVar1);
		MISC::CLEAR_BIT(&(Local_106.f_132), iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_106[iVar0 /*4*/] = __LIB_0__::getMinusOneOrNull();
		Local_106[iVar0 /*4*/].f_1 = -1;
		Local_106[iVar0 /*4*/].f_2 = 0;
		Local_106[iVar0 /*4*/].f_3 = 0;
		MISC::CLEAR_BIT(&(Local_106.f_131), iVar0);
		iVar0++;
	}
	bVar7 = true;
	bVar8 = true;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_106[iVar0 /*4*/] = iVar0;
			MISC::SET_BIT(&(Local_106.f_131), iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_106[iVar0 /*4*/]);
			iVar1 = iVar2;
			if (__LIB_0__::func_156(iVar2, 0, 1))
			{
				Local_106[iVar0 /*4*/].f_1 = iVar1;
				Local_106.f_33[iVar1 /*3*/] = iVar2;
				Local_106.f_33[iVar1 /*3*/].f_1 = iVar0;
				Local_106.f_33[iVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				MISC::SET_BIT(&(Local_106.f_130), iVar1);
				if (ENTITY::IS_ENTITY_DEAD(Local_106.f_33[iVar1 /*3*/].f_2, false))
				{
					MISC::SET_BIT(&(Local_106.f_132), iVar1);
				}
				if (__LIB_0__::func_796(Local_106.f_33[iVar1 /*3*/]))
				{
					Local_106[iVar0 /*4*/].f_2 = 1;
				}
				else if (__LIB_1__::func_30(Local_106.f_33[iVar1 /*3*/], 0))
				{
					Local_106[iVar0 /*4*/].f_3 = 1;
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!bVar3)
					{
						if (func_322(Local_106[iVar0 /*4*/], 0))
						{
							bVar3 = true;
						}
					}
					if (!bVar4)
					{
						if (func_322(Local_106[iVar0 /*4*/], 5))
						{
							bVar4 = true;
						}
					}
					if (!func_49(0))
					{
						if (func_542(Local_106[iVar0 /*4*/], 1))
						{
							func_651(0);
						}
					}
					if (!bVar5)
					{
						if (func_542(Local_106[iVar0 /*4*/], 2))
						{
							bVar5 = true;
						}
					}
					if (!bVar6)
					{
						if (func_542(Local_106[iVar0 /*4*/], 3))
						{
							bVar6 = true;
						}
					}
					switch (func_38())
					{
						case 1:
							if (bVar7)
							{
								if (func_30(Local_106.f_33[iVar1 /*3*/]) && !func_322(Local_106[iVar0 /*4*/], 1))
								{
									bVar7 = false;
								}
							}
							break;
						case 2:
							if (bVar8)
							{
								if (func_30(Local_106.f_33[iVar1 /*3*/]) && !func_322(Local_106[iVar0 /*4*/], 2))
								{
									bVar8 = false;
								}
							}
							break;
					}
					if (!func_16(1))
					{
						if (func_322(Local_106[iVar0 /*4*/], 4))
						{
							func_45(1);
						}
					}
					if (!func_16(7))
					{
						if (func_322(Local_106[iVar0 /*4*/], 3))
						{
							func_45(7);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar3)
		{
			if (!func_16(4))
			{
				func_45(4);
				func_635(1);
			}
		}
		else if (func_16(4))
		{
			func_645(4);
			func_635(1);
		}
		if (bVar4)
		{
			if (!func_16(8))
			{
				func_45(8);
			}
		}
		else if (func_16(8))
		{
			func_645(8);
		}
		if (bVar5)
		{
			if (!func_49(1))
			{
				func_651(1);
			}
		}
		else if (func_49(1))
		{
			func_650(1);
		}
		if (bVar6)
		{
			if (!func_49(2))
			{
				func_651(2);
				func_635(1);
			}
		}
		else if (func_49(2))
		{
			func_650(2);
			func_635(1);
		}
		if (func_5() == 1)
		{
			switch (func_38())
			{
				case 1:
					if (!func_16(5) && bVar7)
					{
						func_45(5);
					}
					break;
				case 2:
					if (!func_16(6) && bVar8)
					{
						func_45(6);
					}
					break;
				}
			}
	}
}

void func_650(int iParam0)//Position - 0x426D3
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (__LIB_16__::func_758(&(Local_101.f_4), iParam0))
	{
	}
}

void func_651(int iParam0)//Position - 0x426F3
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (__LIB_1__::func_458(&(Local_101.f_4), iParam0))
	{
	}
}

bool func_653(int iParam0)//Position - 0x4271C
{
	return __LIB_0__::func_316(&(Local_106.f_133), iParam0);
}

void func_662()//Position - 0x42857
{
	if (func_310())
	{
		func_668();
	}
	if (__LIB_30__::func_912(PLAYER::PLAYER_ID()))
	{
		func_666();
	}
	if (__LIB_30__::func_913(PLAYER::PLAYER_ID()))
	{
		func_532();
	}
	if (func_530(PLAYER::PLAYER_ID()))
	{
		func_528();
	}
	if (func_537() != 0)
	{
		func_536(0);
	}
	if (func_30(PLAYER::PLAYER_ID()))
	{
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_325();
	}
	if (func_5() == 1)
	{
		if (func_653(6))
		{
			__LIB_0__::func_814();
			func_328(6);
		}
		if (func_653(8))
		{
			func_327(0);
		}
		func_384(0);
	}
	if (func_653(2))
	{
		if (func_12())
		{
			if (VEHICLE::GET_VEHICLE_INDIVIDUAL_DOOR_LOCK_STATUS(func_7(), 1) != 1)
			{
				VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_7(), 1, 1);
			}
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(__LIB_1__::func_468(), true);
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_10(), true);
		}
		func_328(2);
	}
	if ((((__LIB_1__::func_466() == 1 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())) && !PED::IS_PED_INJURED(func_9())) && func_12()) && __LIB_1__::func_561(func_10()))
	{
		__LIB_1__::func_473(__LIB_1__::func_521(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
	}
	if (__LIB_1__::func_466() != 0)
	{
		func_665();
		func_663();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_663()//Position - 0x42999
{
	int iVar0;
	int iVar1;
	iVar0 = func_10();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar0))
		{
			iVar1 = func_9();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
			}
		}
		__LIB_1__::func_518(&iVar0);
	}
}

void func_665()//Position - 0x429FB
{
	int iVar0;
	iVar0 = __LIB_1__::func_468();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		__LIB_1__::func_518(&iVar0);
	}
}

void func_666()//Position - 0x42A18
{
	__LIB_1__::func_482(17);
}

void func_668()//Position - 0x42A36
{
	__LIB_1__::func_482(16);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_309 = -1;
}

int func_669(struct<21> Param0)//Position - 0x42A55
{
	__LIB_0__::func_935(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_101, 29, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_105, 49, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

