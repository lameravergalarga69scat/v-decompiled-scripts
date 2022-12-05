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
		if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 0, 1))
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
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
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
				if (__LIB_1__.func_161() == 1 && func_640())
				{
					func_639(1);
				}
				break;
			case 1:
				switch (__LIB_1__.func_161())
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
			switch (__LIB_1__.func_161())
			{
				case 0:
					if (__LIB_6__.func_903())
					{
						__LIB_1__.func_117(1);
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
	if (__LIB_1__.func_116() > 0)
	{
		func_43();
		func_40();
		func_18();
		func_4();
	}
	switch (__LIB_1__.func_116())
	{
		case 0:
			__LIB_1__.func_107(1);
			break;
		case 1:
			if (__LIB_1__.func_106() == 0)
			{
			}
			else
			{
				__LIB_1__.func_107(5);
			}
			break;
		case 5:
			__LIB_1__.func_117(2);
			break;
	}
}

void func_4()//Position - 0x20B
{
	if (__LIB_1__.func_106() != 0)
	{
		return;
	}
	if (__LIB_11__.func_631(2))
	{
		__LIB_1__.func_109(1);
		return;
	}
	if (__LIB_11__.func_631(1))
	{
		__LIB_1__.func_109(5);
		return;
	}
	if (!func_12())
	{
		__LIB_1__.func_109(4);
		return;
	}
	if (func_11() == 7)
	{
		__LIB_1__.func_109(2);
		return;
	}
	if (!func_6(func_9()))
	{
		if (__LIB_1__.func_108() == 1 && !__LIB_11__.func_631(7))
		{
			return;
		}
		__LIB_1__.func_109(3);
		return;
	}
}

bool func_6(int iParam0)//Position - 0x295
{
	return PED::IS_PED_SITTING_IN_VEHICLE(iParam0, func_7());
}

int func_7()//Position - 0x2A7
{
	return NETWORK::NET_TO_VEH(__LIB_1__.func_108());
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
	return __LIB_2__.func_63(__LIB_1__.func_108());
}

void func_18()//Position - 0x3A4
{
	if (!__LIB_6__.func_902())
	{
		return;
	}
	switch (func_38())
	{
		case 0:
			if (__LIB_1__.func_110())
			{
				func_22(1);
			}
			break;
		case 1:
			if (__LIB_11__.func_631(5) && __LIB_2__.func_47(&(Local_101.f_21), 500, 0))
			{
				func_22(2);
			}
			break;
		case 2:
			if (__LIB_11__.func_631(6))
			{
				func_22(3);
			}
			break;
		case 3:
			if (__LIB_11__.func_631(7))
			{
				func_22(4);
			}
			break;
		case 4:
			if (__LIB_2__.func_47(&(Local_101.f_23), 8000, 0))
			{
				__LIB_0__.func_579(&(Local_101.f_23));
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

int func_38()//Position - 0x116C
{
	return Local_101.f_20;
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
				__LIB_1__.func_101(7);
			}
		}
		if (__LIB_1__.func_115())
		{
			__LIB_1__.func_101(6);
		}
	}
	switch (func_11())
	{
		case 0:
			if (bVar2)
			{
				switch (__LIB_1__.func_108())
				{
					case 0:
						__LIB_1__.func_101(1);
						break;
					case 1:
						__LIB_1__.func_101(3);
						break;
					}
			}
			break;
		case 1:
			if ((((!__LIB_0__.func_86(__LIB_18__.func_242()) && func_12()) && ENTITY::DOES_ENTITY_EXIST(__LIB_6__.func_908())) && func_6(__LIB_6__.func_908())) && __LIB_11__.func_631(4))
			{
				__LIB_1__.func_101(2);
			}
			break;
		case 2:
			if (func_12() && !__LIB_11__.func_631(4))
			{
				__LIB_1__.func_101(4);
			}
			else if (func_49(0))
			{
				__LIB_1__.func_114(__LIB_6__.func_908(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				__LIB_1__.func_101(3);
			}
			break;
		case 4:
			if (func_49(1))
			{
				__LIB_1__.func_101(1);
			}
			break;
		case 3:
			switch (__LIB_1__.func_108())
			{
				case 0:
					if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), false, true) == 0)
					{
						__LIB_1__.func_114(2);
					}
					break;
				case 1:
					if (__LIB_11__.func_631(7) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), false, true) == 0)
					{
						__LIB_1__.func_101(5);
					}
					break;
			}
			break;
		case 5:
			switch (__LIB_1__.func_108())
			{
				case 1:
					if (__LIB_0__.func_583(iVar1, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER"), 1))
					{
						__LIB_1__.func_114(2);
					}
					break;
			}
			break;
		case 7:
			break;
	}
}

bool func_49(int iParam0)//Position - 0x1555
{
	return __LIB_0__.func_287(&(Local_101.f_4), iParam0);
}

int func_61()//Position - 0x1721
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 1;
	}
	if (__LIB_0__.func_584(func_65()) && __LIB_0__.func_668(&(Local_101.f_10), __LIB_1__.func_108(), 26, func_65(), -1, 1, 1, 1))
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
	if (__LIB_1__.func_108() == 1)
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
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(__LIB_1__.func_108()))
	{
		return 1;
	}
	if (__LIB_0__.func_584(func_301()) && func_152())
	{
		MISC::CLEAR_AREA(Local_101.f_25, 5f, true, false, false, false);
		if (__LIB_18__.func_220(&(Local_101.f_17), func_301(), Local_101.f_25, Local_101.f_25.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = func_7();
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
			__LIB_1__.func_119(iVar0);
			ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iVar0, true);
			Var1 = { func_146() };
			__LIB_0__.func_668(iVar0, &Var1, 0, 1, 1);
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
			switch (__LIB_1__.func_108())
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

int func_77(int iParam0)//Position - 0x2210
{
	int iVar0;
	if (__LIB_0__.func_527())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (__LIB_0__.func_299(iVar0) == iParam0)
			{
				if (__LIB_1__.func_55(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
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
	if (__LIB_1__.func_119(PLAYER::PLAYER_ID()))
	{
		Var0.f_9[5] = 1;
	}
	return Var0;
}

int func_152()//Position - 0xAD01
{
	if (__LIB_11__.func_631(9))
	{
		return 1;
	}
	switch (__LIB_1__.func_108())
	{
		case 0:
			if (__LIB_6__.func_912(func_299(), &(Local_101.f_25), &(Local_101.f_25.f_3)))
			{
				__LIB_1__.func_114(9);
				return 1;
			}
			break;
		case 1:
			Local_101.f_25 = { func_153() };
			Local_101.f_25 = { Local_101.f_25 + Vector(-30f, 0f, 0f) };
			__LIB_1__.func_114(9);
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
	uVar0 = __LIB_0__.func_598(__LIB_1__.func_110());
	return uVar0;
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
	if (!__LIB_2__.func_61())
	{
		return 0;
	}
	if (__LIB_1__.func_122() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__.func_639();
			__LIB_0__.func_599();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__.func_638(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__.func_638(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_282(Param0))
		{
			if (__LIB_2__.func_60(&Param0, 1))
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
		__LIB_0__.func_636();
		__LIB_0__.func_639();
		if (!uParam6->f_27 || (((((((__LIB_19__.func_556(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_6__.func_913(Param0, iParam2);
		}
		if (func_246(Param0))
		{
			__LIB_6__.func_913(Param0, iParam2);
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
				if (((uParam6->f_3 && func_241(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_239(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
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
				__LIB_19__.func_458(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
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
							if (__LIB_18__.func_420(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
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
						__LIB_0__.func_606(-1);
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
				__LIB_0__.func_606(-1);
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
								if (__LIB_25__.func_728(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || func_160(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_180(Global_2667225.f_683, 0);
									__LIB_0__.func_606(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_180(Global_2667225.f_683, 0);
								__LIB_0__.func_606(-1);
							}
						}
					}
					else
					{
						__LIB_0__.func_606(-1);
					}
				}
				else
				{
					__LIB_0__.func_606(1);
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
		__LIB_6__.func_912(1);
		return 1;
	}
	return 0;
}

int func_160(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xB821
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (__LIB_0__.func_154(iVar1, bParam3, bParam4))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && __LIB_0__.func_605(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && __LIB_8__.func_883(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (__LIB_6__.func_904(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (__LIB_25__.func_26(__LIB_0__.func_85(iVar1), Param0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_180(struct<3> Param0, int iParam1)//Position - 0xC34B
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__.func_607(Param0, 0.01f))
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
		if (__LIB_18__.func_371(uParam0, 1))
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
	if (__LIB_6__.func_902(uParam2->f_34) != 0)
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
					if (!func_218(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_2__.func_38(Var1))
									{
										Var1 = { __LIB_24__.func_992(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_25__.func_373(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_7__.func_119(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_18__.func_371(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_204(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																					if (!func_203(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_241(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_241(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_160(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_31__.func_884(Var1, uParam2->f_54, &fVar23);
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
																									if (__LIB_7__.func_119(Var1, uParam2))
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
						__LIB_31__.func_894(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_230(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__.func_371(&Var27, bVar29))
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
				__LIB_37__.func_806(&Global_1574205, uParam0, uParam1, *uParam0);
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
	if (!__LIB_7__.func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__.func_609(iParam0);
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

int func_203(struct<3> Param0, float fParam1, int iParam2)//Position - 0xD7A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (__LIB_6__.func_904(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (__LIB_6__.func_904(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_204(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD8B0
{
	if (__LIB_25__.func_728(Param0, fParam1, iParam2, iParam3, iParam4) || func_239(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_218(var uParam0, bool bParam1)//Position - 0xE41C
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	if (__LIB_0__.func_619(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			__LIB_1__.func_120(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 0, fVar2);
			if (func_219(Var1, &uVar0) || __LIB_0__.func_619(Var1))
			{
				Var1 = { *uParam0 };
				__LIB_1__.func_120(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_219(struct<3> Param0, var uParam1)//Position - 0xE4B4
{
	int iVar0;
	int iVar1;
	if (__LIB_0__.func_618())
	{
		return 0;
	}
	iVar1 = __LIB_0__.func_617();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (__LIB_1__.func_120(Param0, &(Global_2667225.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
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
	if (func_231(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__.func_607(*uParam1, 1056964608))
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
				__LIB_1__.func_120(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_231(var uParam0, bool bParam1, bool bParam2)//Position - 0xEE54
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	if (func_219(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			__LIB_7__.func_254(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_219(Var2, &uVar1) || __LIB_0__.func_619(Var2))
			{
				Var2 = { *uParam0 };
				__LIB_7__.func_254(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
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
				if (__LIB_1__.func_120(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							__LIB_7__.func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_233(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_7__.func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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
			if (__LIB_18__.func_371(uParam0, 1))
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
			__LIB_6__.func_904(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__.func_623();
		}
		else
		{
			__LIB_0__.func_622();
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
							if ((uParam2->f_12 && !func_204(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
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
										if (!func_203(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_241(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_241(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_160(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_31__.func_884(Var3, uParam2->f_54, &fVar12);
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

int func_239(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0xF8B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (__LIB_18__.func_309(Param0, iParam2, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (__LIB_6__.func_904(Param0, fParam1, iParam2, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (__LIB_0__.func_154(iVar2, 0, 1) && __LIB_0__.func_154(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_241(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0xF9D1
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (__LIB_18__.func_245(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (__LIB_18__.func_245(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_246(struct<3> Param0)//Position - 0xFE00
{
	var uVar0;
	if (Global_2815059.f_924 && func_247(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_247(struct<3> Param0, var uParam1)//Position - 0xFE26
{
	int iVar0;
	int iVar1;
	int iVar2;
	*uParam1 = -1;
	iVar2 = func_259(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (__LIB_19__.func_459(iVar1))
			{
				if (func_259(Global_1946250.f_533[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_259(struct<3> Param0, int iParam1)//Position - 0x102EC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (__LIB_1__.func_120(Param0, &(Global_2672169[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_261(int iParam0, int iParam1)//Position - 0x11138
{
	switch (iParam0)
	{
		case 23:
			__LIB_0__.func_634(434.1898f, 6535.8237f, 27.0084f, 66.9998f);
			__LIB_0__.func_634(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			__LIB_0__.func_634(435.1928f, 6543.2983f, 26.889f, 66.9998f);
			__LIB_0__.func_634(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			__LIB_0__.func_634(429.8463f, 6511.1104f, 27.0717f, 60.9997f);
			__LIB_0__.func_634(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			__LIB_0__.func_634(443.1016f, 6580.7173f, 26.0739f, 85.1993f);
			__LIB_0__.func_634(451.9748f, 6579.9365f, 26.0319f, 85.1993f);
			break;
		case 26:
			__LIB_0__.func_634(-148.9694f, 6325.5522f, 30.4564f, 224.1983f);
			__LIB_0__.func_634(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			__LIB_0__.func_634(-136.8806f, 6347.6216f, 30.4906f, 43.9982f);
			__LIB_0__.func_634(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			__LIB_0__.func_634(-136.6504f, 6357.0615f, 30.4907f, 43.9982f);
			__LIB_0__.func_634(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			__LIB_0__.func_634(-141.4154f, 6365.8306f, 30.4907f, 43.3979f);
			__LIB_0__.func_634(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		case 24:
			__LIB_0__.func_634(60.7522f, 6465.8066f, 30.3941f, 213.3973f);
			__LIB_0__.func_634(57.4131f, 6462.5503f, 30.3663f, 213.3973f);
			__LIB_0__.func_634(48.0438f, 6452.6685f, 30.3245f, 213.3973f);
			__LIB_0__.func_634(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			__LIB_0__.func_634(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			__LIB_0__.func_634(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			__LIB_0__.func_634(32.1837f, 6437.2104f, 30.2991f, 213.3973f);
			__LIB_0__.func_634(29.4732f, 6434.5264f, 30.3702f, 213.3973f);
			break;
		case 25:
			__LIB_0__.func_634(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			__LIB_0__.func_634(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			__LIB_0__.func_634(-395.8286f, 6123.6353f, 30.2987f, 46.3965f);
			__LIB_0__.func_634(-389.1636f, 6117.2407f, 30.3641f, 46.3965f);
			__LIB_0__.func_634(-370.6174f, 6129.7793f, 30.4414f, 45.7965f);
			__LIB_0__.func_634(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			__LIB_0__.func_634(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			__LIB_0__.func_634(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		case 22:
			__LIB_0__.func_634(45.2181f, 6341.1074f, 30.2296f, 14.3964f);
			__LIB_0__.func_634(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			__LIB_0__.func_634(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			__LIB_0__.func_634(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			__LIB_0__.func_634(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			__LIB_0__.func_634(65.6465f, 6380.6265f, 30.2398f, 212.9964f);
			__LIB_0__.func_634(24.8587f, 6366.3604f, 30.2286f, 32.7965f);
			__LIB_0__.func_634(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		case 28:
			__LIB_0__.func_634(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			__LIB_0__.func_634(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			__LIB_0__.func_634(68.365f, 148.2105f, 103.5812f, 339.9951f);
			__LIB_0__.func_634(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			__LIB_0__.func_634(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			__LIB_0__.func_634(62.59f, 189.0833f, 103.9981f, 69.7949f);
			__LIB_0__.func_634(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			__LIB_0__.func_634(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		case 31:
			__LIB_0__.func_634(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			__LIB_0__.func_634(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			__LIB_0__.func_634(324.565f, -684.3934f, 28.3133f, 247.194f);
			__LIB_0__.func_634(326.4054f, -679.9403f, 28.3192f, 247.194f);
			__LIB_0__.func_634(297.1177f, -804.3891f, 28.4859f, 160.594f);
			__LIB_0__.func_634(288.5461f, -814.6994f, 28.1563f, 163.194f);
			__LIB_0__.func_634(286.0127f, -821.7357f, 28.3093f, 163.194f);
			__LIB_0__.func_634(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		case 29:
			__LIB_0__.func_634(-1448.5511f, -355.0512f, 43.3715f, 313.3925f);
			__LIB_0__.func_634(-1454.8193f, -359.998f, 42.7885f, 311.3925f);
			__LIB_0__.func_634(-1462.6747f, -360.1352f, 42.9255f, 223.392f);
			__LIB_0__.func_634(-1447.9648f, -368.3028f, 42.5412f, 5.9918f);
			__LIB_0__.func_634(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			__LIB_0__.func_634(-1473.2195f, -346.7773f, 43.5318f, 213.9913f);
			__LIB_0__.func_634(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			__LIB_0__.func_634(-1496.0033f, -395.7657f, 38.1394f, 45.7909f);
			break;
		case 30:
			__LIB_0__.func_634(-1174.4911f, -1381.0103f, 3.9253f, 116.5903f);
			__LIB_0__.func_634(-1183.1477f, -1392.5593f, 3.6319f, 304.9901f);
			__LIB_0__.func_634(-1160.9639f, -1417.7592f, 3.7043f, 65.7899f);
			__LIB_0__.func_634(-1151.6115f, -1411.3774f, 3.9411f, 63.5895f);
			__LIB_0__.func_634(-1167.1865f, -1424.0696f, 3.4884f, 123.5897f);
			__LIB_0__.func_634(-1148.2198f, -1409.1637f, 4.0217f, 63.5895f);
			__LIB_0__.func_634(-1137.1096f, -1372.8176f, 3.8993f, 27.5895f);
			__LIB_0__.func_634(-1140.6079f, -1365.7474f, 4.0573f, 27.5895f);
			break;
		case 27:
			__LIB_0__.func_634(1414.237f, -1656.3444f, 60.2449f, 332.7893f);
			__LIB_0__.func_634(1416.6677f, -1659.9332f, 60.6982f, 332.7893f);
			__LIB_0__.func_634(1419.3271f, -1663.9718f, 61.2382f, 332.7893f);
			__LIB_0__.func_634(1421.5574f, -1667.3671f, 61.7479f, 332.7893f);
			__LIB_0__.func_634(1423.7439f, -1670.8531f, 62.3125f, 332.7893f);
			__LIB_0__.func_634(1412.1573f, -1652.7456f, 59.9105f, 332.7893f);
			__LIB_0__.func_634(1426.2009f, -1673.5977f, 62.7133f, 330.1893f);
			__LIB_0__.func_634(1435.8038f, -1694.7296f, 65.0743f, 352.5892f);
			break;
		case 33:
			__LIB_0__.func_634(2810.7869f, 4435.9204f, 47.5295f, 20.7996f);
			__LIB_0__.func_634(2808.4128f, 4443.922f, 47.3732f, 14.7995f);
			__LIB_0__.func_634(2806.298f, 4451.7856f, 47.1865f, 15.3995f);
			__LIB_0__.func_634(2803.9253f, 4459.858f, 46.9823f, 15.3995f);
			__LIB_0__.func_634(2801.7563f, 4467.7554f, 46.8147f, 15.3995f);
			__LIB_0__.func_634(2893.563f, 4430.258f, 47.338f, 105.9994f);
			__LIB_0__.func_634(2903.7246f, 4425.8535f, 47.3523f, 23.1992f);
			__LIB_0__.func_634(2907.0764f, 4418.0586f, 47.6301f, 23.1992f);
			break;
		case 36:
			__LIB_0__.func_634(1680.4476f, 4821.131f, 41.0599f, 186.399f);
			__LIB_0__.func_634(1679.7604f, 4829.447f, 40.9167f, 186.399f);
			__LIB_0__.func_634(1678.6683f, 4838.03f, 41.0221f, 187.7989f);
			__LIB_0__.func_634(1677.6119f, 4846.028f, 41.0452f, 187.7989f);
			__LIB_0__.func_634(1675.8512f, 4860.4336f, 41.0901f, 187.7989f);
			__LIB_0__.func_634(1674.8434f, 4868.3433f, 41.0684f, 187.7989f);
			__LIB_0__.func_634(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			__LIB_0__.func_634(1672.5254f, 4884.972f, 41.0478f, 186.7986f);
			break;
		case 34:
			__LIB_0__.func_634(422.863f, 3583.9014f, 32.2386f, 313.5986f);
			__LIB_0__.func_634(426.6211f, 3583.2083f, 32.2386f, 313.5986f);
			__LIB_0__.func_634(430.466f, 3582.042f, 32.2386f, 313.5986f);
			__LIB_0__.func_634(434.2751f, 3580.8806f, 32.2386f, 313.5986f);
			__LIB_0__.func_634(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			__LIB_0__.func_634(442.0173f, 3578.9482f, 32.2386f, 313.5986f);
			__LIB_0__.func_634(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			__LIB_0__.func_634(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		case 35:
			__LIB_0__.func_634(627.005f, 2726.019f, 40.7692f, 4.3984f);
			__LIB_0__.func_634(620.9771f, 2725.7585f, 40.7897f, 4.3984f);
			__LIB_0__.func_634(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			__LIB_0__.func_634(611.1158f, 2737.3875f, 40.9734f, 185.3984f);
			__LIB_0__.func_634(598.9713f, 2736.2607f, 41.0602f, 186.5986f);
			__LIB_0__.func_634(592.6151f, 2735.8865f, 41.0602f, 186.5986f);
			__LIB_0__.func_634(586.0421f, 2735.9004f, 41.0535f, 186.5986f);
			__LIB_0__.func_634(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		case 32:
			__LIB_0__.func_634(214.3318f, 2492.2598f, 53.9736f, 312.7978f);
			__LIB_0__.func_634(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			__LIB_0__.func_634(213.7524f, 2501.2512f, 53.5958f, 312.7978f);
			__LIB_0__.func_634(213.6645f, 2505.9084f, 53.3477f, 312.7978f);
			__LIB_0__.func_634(213.4478f, 2510.7341f, 53.1055f, 312.7978f);
			__LIB_0__.func_634(212.9148f, 2515.2676f, 52.9376f, 312.7978f);
			__LIB_0__.func_634(211.5983f, 2519.2163f, 52.6753f, 312.7978f);
			__LIB_0__.func_634(210.1288f, 2523.1873f, 52.3493f, 312.7978f);
			break;
		case 38:
			__LIB_0__.func_634(153.6785f, -2476.1921f, 4.9877f, 178.4004f);
			__LIB_0__.func_634(150.9209f, -2516.9785f, 4.9909f, 179.9999f);
			__LIB_0__.func_634(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			__LIB_0__.func_634(153.866f, -2467.2422f, 4.9877f, 178.4004f);
			__LIB_0__.func_634(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			__LIB_0__.func_634(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			__LIB_0__.func_634(142.7427f, -2536.147f, 5f, 205.0002f);
			__LIB_0__.func_634(138.8267f, -2535.8647f, 5f, 205.0002f);
			break;
		case 41:
			__LIB_0__.func_634(-341.4255f, -2734.4514f, 5.0413f, 314.8f);
			__LIB_0__.func_634(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			__LIB_0__.func_634(-329.7832f, -2745.6042f, 5.0196f, 314.8f);
			__LIB_0__.func_634(-336.4781f, -2716.1392f, 5.0028f, 134.1994f);
			__LIB_0__.func_634(-334.2752f, -2718.8884f, 5.0048f, 135.1992f);
			__LIB_0__.func_634(-327.6603f, -2725.6445f, 5.0103f, 135.1992f);
			__LIB_0__.func_634(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			__LIB_0__.func_634(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		case 39:
			__LIB_0__.func_634(1143.7303f, -3105.0913f, 4.8989f, 146.1979f);
			__LIB_0__.func_634(1140.0088f, -3104.954f, 4.8985f, 146.1979f);
			__LIB_0__.func_634(1136.2671f, -3104.69f, 4.8969f, 146.1979f);
			__LIB_0__.func_634(1132.7316f, -3104.2769f, 4.8944f, 146.1979f);
			__LIB_0__.func_634(1128.7235f, -3104.5398f, 4.896f, 146.1979f);
			__LIB_0__.func_634(1125.1063f, -3104.0566f, 4.8942f, 146.1979f);
			__LIB_0__.func_634(1117.7996f, -3103.6743f, 4.8922f, 146.1979f);
			__LIB_0__.func_634(1114.0154f, -3103.448f, 4.8931f, 146.1979f);
			break;
		case 40:
			__LIB_0__.func_634(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			__LIB_0__.func_634(656.1305f, -2707.2454f, 5.214f, 24.7971f);
			__LIB_0__.func_634(659.3307f, -2714.3784f, 5.2188f, 22.7968f);
			__LIB_0__.func_634(662.2627f, -2722.2275f, 5.2188f, 19.1968f);
			__LIB_0__.func_634(649.2115f, -2728.3586f, 5.1124f, 20.5967f);
			__LIB_0__.func_634(646.2606f, -2720.8333f, 5.1103f, 21.3967f);
			__LIB_0__.func_634(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			__LIB_0__.func_634(640.3513f, -2706.5708f, 5.108f, 21.3967f);
			break;
		case 37:
			__LIB_0__.func_634(-260.5913f, -2615.2546f, 5.0502f, 274.5953f);
			__LIB_0__.func_634(-253.2161f, -2614.8955f, 5.0502f, 271.5953f);
			__LIB_0__.func_634(-245.6569f, -2614.8618f, 5.0502f, 271.5953f);
			__LIB_0__.func_634(-238.214f, -2614.8472f, 5.0502f, 271.5953f);
			__LIB_0__.func_634(-238.013f, -2630.9614f, 5.0331f, 271.3949f);
			__LIB_0__.func_634(-260.9724f, -2631.4185f, 5.0355f, 276.9951f);
			__LIB_0__.func_634(-253.401f, -2631.1082f, 5.0319f, 272.195f);
			__LIB_0__.func_634(-245.5563f, -2631.0598f, 5.0323f, 272.195f);
			break;
		case 83:
			__LIB_0__.func_634(-1190.795f, -3371.393f, 12.945f, 348.399f);
			__LIB_0__.func_634(-1185.634f, -3373.893f, 12.945f, 348.399f);
			__LIB_0__.func_634(-1114.818f, -3414.185f, 12.945f, 314.199f);
			__LIB_0__.func_634(-1110.976f, -3416.37f, 12.945f, 314.199f);
			__LIB_0__.func_634(-1098.6207f, -3460.7915f, 12.9453f, 329.799f);
			__LIB_0__.func_634(-1093.3098f, -3463.4644f, 12.9453f, 329.799f);
			__LIB_0__.func_634(-1089.4333f, -3443.2336f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1084.2706f, -3446.3103f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1093.8082f, -3452.4072f, 12.9451f, 329.799f);
			__LIB_0__.func_634(-1088.3829f, -3455.466f, 12.9451f, 329.799f);
			__LIB_0__.func_634(-1118.4736f, -3411.3848f, 12.9451f, 313.199f);
			__LIB_0__.func_634(-1181.003f, -3375.6584f, 12.945f, 346.799f);
			__LIB_0__.func_634(-1212.0713f, -3382.2832f, 12.9451f, 328.999f);
			__LIB_0__.func_634(-1217.7085f, -3378.6228f, 12.9451f, 328.999f);
			__LIB_0__.func_634(-1216.9865f, -3390.3958f, 12.9452f, 328.999f);
			__LIB_0__.func_634(-1222.5657f, -3386.7068f, 12.9452f, 328.999f);
			__LIB_0__.func_634(-1222.06f, -3398.8823f, 12.9452f, 328.999f);
			__LIB_0__.func_634(-1227.6981f, -3394.9456f, 12.9451f, 328.999f);
			__LIB_0__.func_634(-1097.5173f, -3472.0862f, 12.9453f, 328.999f);
			__LIB_0__.func_634(-1102.951f, -3468.6187f, 12.9452f, 328.999f);
			__LIB_0__.func_634(-1227.2528f, -3407.38f, 12.9452f, 328.999f);
			__LIB_0__.func_634(-1232.8358f, -3403.5723f, 12.9452f, 328.999f);
			break;
		case 84:
			__LIB_0__.func_634(-1364.879f, -3285.201f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1359.229f, -3288.52f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1369.636f, -3293.617f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1363.881f, -3296.796f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1432.898f, -3247.702f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1437.282f, -3255.429f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1441.623f, -3262.969f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1443.954f, -3251.006f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1374.159f, -3301.61f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1368.508f, -3304.924f, 12.945f, 330.2f);
			__LIB_0__.func_634(-1359.905f, -3276.1177f, 12.9448f, 330.4f);
			__LIB_0__.func_634(-1354.2279f, -3279.6296f, 12.9448f, 330.4f);
			__LIB_0__.func_634(-1406.4932f, -3246.2234f, 12.9449f, 344.5997f);
			__LIB_0__.func_634(-1411.0581f, -3243.6204f, 12.9449f, 344.5997f);
			__LIB_0__.func_634(-1415.326f, -3241.0137f, 12.9449f, 344.5997f);
			__LIB_0__.func_634(-1419.899f, -3238.1157f, 12.9449f, 344.5997f);
			__LIB_0__.func_634(-1370.9857f, -3268.9453f, 12.9449f, 322.3996f);
			__LIB_0__.func_634(-1365.7346f, -3272.3633f, 12.9449f, 322.3996f);
			__LIB_0__.func_634(-1373.3412f, -3313.2056f, 12.9448f, 329.5996f);
			__LIB_0__.func_634(-1379.0914f, -3310.0037f, 12.9448f, 330.7996f);
			__LIB_0__.func_634(-1436.9889f, -3228.515f, 12.9449f, 343.9996f);
			__LIB_0__.func_634(-1444.064f, -3273.7512f, 12.945f, 330.7996f);
			break;
		case 85:
			__LIB_0__.func_634(-2060.105f, 3186.159f, 31.81f, 329.599f);
			__LIB_0__.func_634(-2065.521f, 3189.007f, 31.81f, 150.199f);
			__LIB_0__.func_634(-2055.006f, 3194.989f, 31.81f, 329.599f);
			__LIB_0__.func_634(-2060.471f, 3197.816f, 31.81f, 150.199f);
			__LIB_0__.func_634(-2049.611f, 3204.032f, 31.81f, 329.599f);
			__LIB_0__.func_634(-2055.048f, 3206.958f, 31.81f, 150.199f);
			__LIB_0__.func_634(-2049.627f, 3216.253f, 31.81f, 150.199f);
			__LIB_0__.func_634(-2039.024f, 3222.121f, 31.81f, 329.599f);
			__LIB_0__.func_634(-2044.17f, 3213.208f, 31.81f, 329.599f);
			__LIB_0__.func_634(-2044.672f, 3224.638f, 31.81f, 150.199f);
			__LIB_0__.func_634(-2060.4863f, 3165.9277f, 31.8103f, 133.9988f);
			__LIB_0__.func_634(-2055.7065f, 3163.0535f, 31.8103f, 133.9988f);
			__LIB_0__.func_634(-2050.911f, 3160.0918f, 31.8103f, 133.9988f);
			__LIB_0__.func_634(-1974.6353f, 3137.8467f, 31.8103f, 149.5986f);
			__LIB_0__.func_634(-1970.3544f, 3145.22f, 31.8103f, 149.5986f);
			__LIB_0__.func_634(-1965.7089f, 3153.2214f, 31.8103f, 149.5986f);
			__LIB_0__.func_634(-1960.9915f, 3161.346f, 31.8103f, 149.5986f);
			__LIB_0__.func_634(-1983.1697f, 3131.3298f, 31.8103f, 149.5986f);
			__LIB_0__.func_634(-1976.614f, 3127.6274f, 31.8103f, 149.5986f);
			__LIB_0__.func_634(-1991.5824f, 3127.264f, 31.8103f, 167.7985f);
			__LIB_0__.func_634(-1995.584f, 3129.3687f, 31.8103f, 167.7985f);
			__LIB_0__.func_634(-1999.335f, 3131.1824f, 31.8103f, 167.7985f);
			break;
		case 86:
			__LIB_0__.func_634(-1843.828f, 3085.094f, 31.81f, 165.8f);
			__LIB_0__.func_634(-1828.571f, 3084.114f, 31.841f, 329.2f);
			__LIB_0__.func_634(-1823.414f, 3092.762f, 31.843f, 330f);
			__LIB_0__.func_634(-1819.045f, 3100.435f, 31.845f, 330f);
			__LIB_0__.func_634(-1833.313f, 3075.722f, 31.838f, 330f);
			__LIB_0__.func_634(-1847.648f, 3076.8f, 31.835f, 165.8f);
			__LIB_0__.func_634(-1838.479f, 3078.576f, 31.863f, 150.599f);
			__LIB_0__.func_634(-1833.605f, 3086.784f, 31.863f, 150.599f);
			__LIB_0__.func_634(-1828.424f, 3095.617f, 31.863f, 150.599f);
			__LIB_0__.func_634(-1823.95f, 3102.821f, 31.862f, 150.599f);
			__LIB_0__.func_634(-1819.2842f, 3110.6704f, 31.8615f, 150.2f);
			__LIB_0__.func_634(-1814.545f, 3108.2295f, 31.8476f, 330.6f);
			__LIB_0__.func_634(-1853.9388f, 3076.2705f, 31.8105f, 176.7996f);
			__LIB_0__.func_634(-1857.7258f, 3078.6685f, 31.8105f, 176.7996f);
			__LIB_0__.func_634(-1861.6259f, 3080.7766f, 31.8105f, 176.7996f);
			__LIB_0__.func_634(-1865.5841f, 3083.1365f, 31.8103f, 176.7996f);
			__LIB_0__.func_634(-1869.2551f, 3085.565f, 31.8103f, 176.7996f);
			__LIB_0__.func_634(-1913.263f, 3125.3416f, 31.8103f, 150.7988f);
			__LIB_0__.func_634(-1917.5464f, 3127.6785f, 31.8103f, 150.7988f);
			__LIB_0__.func_634(-1922.7402f, 3130.5552f, 31.8103f, 150.7988f);
			__LIB_0__.func_634(-1927.6763f, 3133.413f, 31.8103f, 150.7988f);
			__LIB_0__.func_634(-1932.4185f, 3136.273f, 31.8103f, 150.7988f);
			break;
		case 87:
			__LIB_0__.func_634(-2538.561f, 3303.172f, 31.814f, 296.999f);
			__LIB_0__.func_634(-2530.309f, 3307.445f, 31.816f, 296.999f);
			__LIB_0__.func_634(-2521.733f, 3311.833f, 31.817f, 296.999f);
			__LIB_0__.func_634(-2512.881f, 3316.428f, 31.819f, 296.999f);
			__LIB_0__.func_634(-2502.952f, 3321.518f, 31.821f, 296.999f);
			__LIB_0__.func_634(-2542.613f, 3310.728f, 31.814f, 296.999f);
			__LIB_0__.func_634(-2534.195f, 3314.753f, 31.815f, 296.999f);
			__LIB_0__.func_634(-2525.635f, 3318.97f, 31.817f, 296.999f);
			__LIB_0__.func_634(-2516.674f, 3323.545f, 31.819f, 296.999f);
			__LIB_0__.func_634(-2507.153f, 3328.454f, 31.82f, 296.999f);
			__LIB_0__.func_634(-2547.689f, 3298.791f, 31.812f, 296.999f);
			__LIB_0__.func_634(-2551.2612f, 3306.3042f, 31.8123f, 296.999f);
			__LIB_0__.func_634(-2497.446f, 3333.2957f, 31.821f, 296.999f);
			__LIB_0__.func_634(-2494.089f, 3326.0647f, 31.8218f, 296.999f);
			__LIB_0__.func_634(-2453.4045f, 3255.3882f, 31.8276f, 167.1986f);
			__LIB_0__.func_634(-2449.37f, 3253.4165f, 31.8276f, 167.1986f);
			__LIB_0__.func_634(-2445.4902f, 3251.1384f, 31.8276f, 167.1986f);
			__LIB_0__.func_634(-2441.5747f, 3248.888f, 31.8276f, 167.1986f);
			__LIB_0__.func_634(-2437.3193f, 3246.5542f, 31.8277f, 167.1986f);
			__LIB_0__.func_634(-2432.7227f, 3244.232f, 31.8277f, 167.1986f);
			__LIB_0__.func_634(-2485.2732f, 3330.8906f, 31.8239f, 298.1979f);
			__LIB_0__.func_634(-2488.82f, 3338.3647f, 31.8226f, 298.1979f);
			break;
		case 89:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(1284.4156f, 2890.2993f, 45.0276f, 336.3999f);
				__LIB_0__.func_634(1273.2477f, 2901.4277f, 45.0426f, 338.3999f);
				__LIB_0__.func_634(1262.9448f, 2911.5352f, 43.2959f, 341.9999f);
				__LIB_0__.func_634(1272.0938f, 2873.3875f, 45.3443f, 328.5991f);
				__LIB_0__.func_634(1259.7849f, 2892.2168f, 45.1126f, 339.9999f);
				__LIB_0__.func_634(1231.2787f, 2910.881f, 43.3085f, 12f);
				__LIB_0__.func_634(1306.5148f, 2839.4749f, 46.8947f, 132.3996f);
				__LIB_0__.func_634(1307.4529f, 2825.2756f, 45.1566f, 127.1998f);
				__LIB_0__.func_634(1257.0292f, 2872.1567f, 45.9766f, 338.5992f);
				__LIB_0__.func_634(1225.7644f, 2930.0952f, 41.6173f, 14.7999f);
			}
			else
			{
				__LIB_0__.func_634(1265.1229f, 2836.949f, 47.1021f, 119.9996f);
				__LIB_0__.func_634(1258.1451f, 2831.6428f, 46.4503f, 135.7993f);
				__LIB_0__.func_634(1240.8466f, 2828.7207f, 46.4388f, 39.5992f);
				__LIB_0__.func_634(1236.8774f, 2835.4902f, 46.3491f, 22.9991f);
				__LIB_0__.func_634(1235.6973f, 2843.4026f, 46.0231f, 2.7991f);
				__LIB_0__.func_634(1237.6862f, 2850.6072f, 45.5261f, 335.5991f);
				__LIB_0__.func_634(1241.1256f, 2858.816f, 45.0176f, 339.7991f);
				__LIB_0__.func_634(1249.7152f, 2810.5876f, 47.2648f, 255.1992f);
				__LIB_0__.func_634(1257.6963f, 2808.6086f, 47.014f, 266.1992f);
				__LIB_0__.func_634(1265.5765f, 2808.3528f, 46.7598f, 277.199f);
				__LIB_0__.func_634(1273.8081f, 2808.484f, 46.3872f, 263.999f);
				__LIB_0__.func_634(1282.5354f, 2807.1335f, 45.9705f, 250.7989f);
				__LIB_0__.func_634(1290.1676f, 2803.7449f, 45.8005f, 238.7988f);
				__LIB_0__.func_634(1296.4451f, 2798.7769f, 46.0903f, 228.9988f);
				__LIB_0__.func_634(1302.041f, 2792.3296f, 45.957f, 221.7987f);
				__LIB_0__.func_634(1251.3888f, 2825.818f, 45.9856f, 119.1982f);
				__LIB_0__.func_634(1285.4801f, 2819.238f, 45.044f, 228.3993f);
				__LIB_0__.func_634(1293.0233f, 2814.1636f, 44.8859f, 233.399f);
				__LIB_0__.func_634(1242.1803f, 2814.153f, 47.7108f, 227.3991f);
				__LIB_0__.func_634(1236.3619f, 2819.6228f, 47.6845f, 224.399f);
				__LIB_0__.func_634(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				__LIB_0__.func_634(1228.1774f, 2833.4233f, 47.3171f, 197.5993f);
				__LIB_0__.func_634(1243.0946f, 2866.7493f, 44.6219f, 353.7992f);
				__LIB_0__.func_634(1307.3458f, 2785.7866f, 46.1136f, 219.9997f);
				__LIB_0__.func_634(1300.7516f, 2808.2244f, 44.5688f, 228.9997f);
				__LIB_0__.func_634(1306.571f, 2802.4675f, 44.6275f, 224.1992f);
				__LIB_0__.func_634(1244.4646f, 2875.6968f, 44.5839f, 353.7992f);
				__LIB_0__.func_634(1312.4409f, 2795.4268f, 45.2701f, 218.5991f);
			}
			break;
		case 90:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(14.4916f, 2660.7263f, 79.0178f, 310.1999f);
				__LIB_0__.func_634(3.855f, 2672.388f, 78.437f, 319.2f);
				__LIB_0__.func_634(-7.057f, 2682.247f, 77.472f, 319.2f);
				__LIB_0__.func_634(-14.041f, 2663.43f, 77.4221f, 319.2f);
				__LIB_0__.func_634(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				__LIB_0__.func_634(60.2273f, 2609.7449f, 79.5672f, 305.9998f);
				__LIB_0__.func_634(34.0188f, 2659.7227f, 78.9894f, 314.2f);
				__LIB_0__.func_634(29.4879f, 2675.3398f, 76.0202f, 314.2f);
				__LIB_0__.func_634(19.0088f, 2686.1597f, 75.6897f, 314.2f);
				__LIB_0__.func_634(7.6101f, 2697.1125f, 76.2923f, 314.2f);
			}
			else
			{
				__LIB_0__.func_634(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				__LIB_0__.func_634(46.2894f, 2639.9512f, 79.9122f, 305.1998f);
				__LIB_0__.func_634(55.3668f, 2627.7727f, 79.6363f, 305.1998f);
				__LIB_0__.func_634(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				__LIB_0__.func_634(42.1486f, 2646.0728f, 80.108f, 305.1998f);
				__LIB_0__.func_634(68.1481f, 2630.0696f, 77.0725f, 305.1998f);
				__LIB_0__.func_634(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				__LIB_0__.func_634(57.3543f, 2643.5598f, 75.5301f, 305.1998f);
				__LIB_0__.func_634(52.611f, 2649.698f, 76.1354f, 305.1998f);
				__LIB_0__.func_634(74.5845f, 2640.4746f, 72.602f, 305.1998f);
				__LIB_0__.func_634(68.5462f, 2646.7837f, 71.6298f, 305.1998f);
				__LIB_0__.func_634(62.426f, 2652.977f, 71.7029f, 305.1998f);
				__LIB_0__.func_634(79.5597f, 2650.8347f, 68.668f, 305.1998f);
				__LIB_0__.func_634(72.6035f, 2656.8574f, 67.3294f, 305.1998f);
				__LIB_0__.func_634(83.4156f, 2660.2366f, 64.3198f, 305.1998f);
				__LIB_0__.func_634(102.851f, 2688.009f, 51.732f, 224f);
				__LIB_0__.func_634(109.815f, 2681.012f, 51.112f, 224f);
				__LIB_0__.func_634(116.355f, 2674.26f, 50.529f, 224f);
				__LIB_0__.func_634(125.138f, 2665.98f, 49.8f, 224f);
				__LIB_0__.func_634(132.228f, 2659.865f, 49.26f, 228.4f);
				__LIB_0__.func_634(139.354f, 2653.536f, 48.737f, 228.4f);
				__LIB_0__.func_634(88.512f, 2702.995f, 53.042f, 224.199f);
				__LIB_0__.func_634(81.565f, 2710.357f, 53.67f, 224.199f);
				__LIB_0__.func_634(75.156f, 2716.981f, 54.223f, 224.199f);
				__LIB_0__.func_634(68.442f, 2723.806f, 54.775f, 226.199f);
				__LIB_0__.func_634(61.449f, 2730.606f, 55.308f, 226.199f);
				__LIB_0__.func_634(53.702f, 2738.167f, 55.855f, 226.199f);
				__LIB_0__.func_634(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		case 91:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(2772.011f, 3889.062f, 42.94f, 145.4f);
				__LIB_0__.func_634(2785.592f, 3880.409f, 43.695f, 146.199f);
				__LIB_0__.func_634(2788.387f, 3898.107f, 45.364f, 140.999f);
				__LIB_0__.func_634(2801.558f, 3912.485f, 44.931f, 131.999f);
				__LIB_0__.func_634(2805.531f, 3892.253f, 47.01f, 106.399f);
				__LIB_0__.func_634(2824.791f, 3894.7869f, 47.4293f, 105.3989f);
				__LIB_0__.func_634(2761.7385f, 3945.948f, 44.59f, 135.398f);
				__LIB_0__.func_634(2814.5886f, 3930.404f, 44.816f, 134.9978f);
				__LIB_0__.func_634(2747.6267f, 3930.92f, 43.8497f, 138.3978f);
				__LIB_0__.func_634(2796.3115f, 3928.3164f, 42.6106f, 134.5979f);
			}
			else
			{
				__LIB_0__.func_634(2730.174f, 3890.294f, 42.435f, 54.6f);
				__LIB_0__.func_634(2714.633f, 3918.283f, 42.938f, 16f);
				__LIB_0__.func_634(2716.533f, 3910.15f, 42.699f, 19.6f);
				__LIB_0__.func_634(2757.499f, 3874.045f, 42.724f, 64.8f);
				__LIB_0__.func_634(2747.99f, 3878.676f, 42.561f, 62.8f);
				__LIB_0__.func_634(2738.337f, 3884.314f, 42.614f, 57.2f);
				__LIB_0__.func_634(2711.836f, 3926.255f, 42.931f, 21.6f);
				__LIB_0__.func_634(2707.586f, 3934.558f, 42.984f, 27.6f);
				__LIB_0__.func_634(2702.361f, 3943.039f, 42.951f, 30.6f);
				__LIB_0__.func_634(2696.696f, 3951.317f, 43.012f, 34.8f);
				__LIB_0__.func_634(2766.778f, 3868.911f, 42.822f, 59.8f);
				__LIB_0__.func_634(2775.397f, 3863.697f, 43.204f, 54.2f);
				__LIB_0__.func_634(2738.841f, 3869.927f, 42.492f, 242.799f);
				__LIB_0__.func_634(2746.49f, 3865.861f, 42.808f, 239.599f);
				__LIB_0__.func_634(2754.829f, 3861.039f, 42.906f, 240.799f);
				__LIB_0__.func_634(2762.616f, 3856.316f, 42.895f, 240.799f);
				__LIB_0__.func_634(2770.463f, 3851.383f, 43.216f, 233.199f);
				__LIB_0__.func_634(2778.129f, 3844.914f, 43.26f, 229.199f);
				__LIB_0__.func_634(2785.341f, 3837.918f, 43.141f, 224.999f);
				__LIB_0__.func_634(2730.65f, 3875.186f, 42.437f, 231.999f);
				__LIB_0__.func_634(2724.14f, 3880.885f, 42.469f, 224.599f);
				__LIB_0__.func_634(2718.541f, 3887.508f, 42.614f, 217.399f);
				__LIB_0__.func_634(2783.246f, 3857.409f, 43.175f, 45.199f);
				__LIB_0__.func_634(2790.716f, 3850.631f, 43.125f, 45.199f);
				__LIB_0__.func_634(2690.655f, 3959.246f, 43.255f, 40.199f);
				__LIB_0__.func_634(2797.912f, 3842.523f, 43.166f, 40.199f);
				__LIB_0__.func_634(2791.836f, 3830.845f, 43.14f, 221.999f);
				__LIB_0__.func_634(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		case 92:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(3374.661f, 5559.7095f, 12.3726f, 138.7999f);
				__LIB_0__.func_634(3366.3652f, 5569.4487f, 13.9704f, 112.8f);
				__LIB_0__.func_634(3358.4927f, 5581.4634f, 16.1783f, 112.8f);
				__LIB_0__.func_634(3356.7053f, 5595.3633f, 15.4029f, 112.8f);
				__LIB_0__.func_634(3336.662f, 5552.357f, 19.491f, 249.6f);
				__LIB_0__.func_634(3336.791f, 5567.825f, 20.432f, 249.6f);
				__LIB_0__.func_634(3335.2588f, 5599.0464f, 22.4606f, 249.6f);
				__LIB_0__.func_634(3336.8108f, 5613.029f, 22.2159f, 249.6f);
				__LIB_0__.func_634(3354.6956f, 5609.6987f, 15.9453f, 111.3999f);
				__LIB_0__.func_634(3354.0056f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				__LIB_0__.func_634(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				__LIB_0__.func_634(3374.923f, 5520.1772f, 20.3207f, 86f);
				__LIB_0__.func_634(3350.6433f, 5490.432f, 18.8423f, 139.9997f);
				__LIB_0__.func_634(3364.1887f, 5502.9805f, 19.648f, 125.7999f);
				__LIB_0__.func_634(3354.101f, 5484.773f, 19.619f, 116.399f);
				__LIB_0__.func_634(3365.919f, 5519.9487f, 18.8008f, 102.9988f);
				__LIB_0__.func_634(3341.889f, 5506.809f, 19.584f, 161.199f);
				__LIB_0__.func_634(3338.581f, 5497.709f, 19.376f, 161.199f);
				__LIB_0__.func_634(3335.674f, 5489.348f, 19.542f, 161.199f);
				__LIB_0__.func_634(3332.019f, 5479.563f, 19.738f, 150.998f);
				__LIB_0__.func_634(3327.404f, 5470.857f, 19.302f, 159.398f);
				__LIB_0__.func_634(3323.903f, 5461.49f, 18.492f, 156.398f);
				__LIB_0__.func_634(3320.016f, 5452.957f, 17.834f, 153.198f);
				__LIB_0__.func_634(3315.782f, 5444.61f, 17.115f, 150.798f);
				__LIB_0__.func_634(3335.4514f, 5455.7227f, 18.2323f, 162.1979f);
				__LIB_0__.func_634(3338.7878f, 5464.8027f, 18.8631f, 163.7977f);
				__LIB_0__.func_634(3362.4763f, 5488.2114f, 20.4432f, 108.5979f);
				__LIB_0__.func_634(3371.2593f, 5491.2744f, 21.5286f, 104.9989f);
				__LIB_0__.func_634(3342.201f, 5517.014f, 19.642f, 170.199f);
				__LIB_0__.func_634(3343.267f, 5526.085f, 18.902f, 175.598f);
				__LIB_0__.func_634(3343.531f, 5536.075f, 18.217f, 178.598f);
				__LIB_0__.func_634(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				__LIB_0__.func_634(3342.3464f, 5473.345f, 19.1235f, 159.3987f);
				__LIB_0__.func_634(3347.2363f, 5480.447f, 19.4672f, 131.199f);
				__LIB_0__.func_634(3357.623f, 5516.9004f, 16.9016f, 118.7991f);
				__LIB_0__.func_634(3361.366f, 5545.8857f, 15.5532f, 118.7991f);
				__LIB_0__.func_634(3352.6123f, 5541.0127f, 16.3238f, 131.999f);
				__LIB_0__.func_634(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		case 93:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(43.848f, 6845.657f, 13.379f, 247.2f);
				__LIB_0__.func_634(50.379f, 6861.146f, 15.105f, 247.2f);
				__LIB_0__.func_634(32.501f, 6871.7773f, 13.3283f, 247.2f);
				__LIB_0__.func_634(38.437f, 6885.796f, 13.3627f, 247.2f);
				__LIB_0__.func_634(55.806f, 6875.081f, 14.824f, 247.2f);
				__LIB_0__.func_634(11.616f, 6877.079f, 11.466f, 247.2f);
				__LIB_0__.func_634(18.954f, 6891.633f, 11.37f, 247.2f);
				__LIB_0__.func_634(26.68f, 6907.587f, 11.869f, 247.2f);
				__LIB_0__.func_634(7.479f, 6907.895f, 12.024f, 247.2f);
				__LIB_0__.func_634(44.9981f, 6901.3516f, 11.9426f, 247.2f);
			}
			else
			{
				__LIB_0__.func_634(35.591f, 6836.608f, 13.288f, 274.4f);
				__LIB_0__.func_634(36.028f, 6830.135f, 13.801f, 270.8f);
				__LIB_0__.func_634(35.114f, 6823.884f, 14.527f, 260.8f);
				__LIB_0__.func_634(48.779f, 6838.693f, 14.337f, 273.6f);
				__LIB_0__.func_634(56.738f, 6821.8f, 15.244f, 244.8f);
				__LIB_0__.func_634(48.377f, 6825.895f, 14.656f, 249.8f);
				__LIB_0__.func_634(49.11f, 6831.439f, 13.991f, 274.8f);
				__LIB_0__.func_634(53.544f, 6818.275f, 16.342f, 243f);
				__LIB_0__.func_634(46.162f, 6821.945f, 15.483f, 249.8f);
				__LIB_0__.func_634(60.129f, 6836.8f, 15.605f, 269.6f);
				__LIB_0__.func_634(40.88f, 6802.952f, 20.113f, 242.6f);
				__LIB_0__.func_634(48.203f, 6799.134f, 20.897f, 244.4f);
				__LIB_0__.func_634(70.449f, 6809.271f, 16.846f, 243f);
				__LIB_0__.func_634(61.436f, 6814.266f, 16.71f, 244.2f);
				__LIB_0__.func_634(56.142f, 6793.458f, 19.806f, 242.6f);
				__LIB_0__.func_634(65.759f, 6791.12f, 18.433f, 276.4f);
				__LIB_0__.func_634(77.305f, 6805.391f, 18.558f, 245.6f);
				__LIB_0__.func_634(85.893f, 6800.243f, 18.535f, 249.8f);
				__LIB_0__.func_634(56.85f, 6780.582f, 18.822f, 297.999f);
				__LIB_0__.func_634(65.636f, 6784.669f, 18.789f, 293.799f);
				__LIB_0__.func_634(74.121f, 6788.498f, 18.739f, 293.799f);
				__LIB_0__.func_634(97.779f, 6796.32f, 19.02f, 276.799f);
				__LIB_0__.func_634(106.76f, 6796.983f, 18.914f, 272.599f);
				__LIB_0__.func_634(112.387f, 6802.858f, 18.994f, 210.599f);
				__LIB_0__.func_634(117.58f, 6802.644f, 18.663f, 209.399f);
				__LIB_0__.func_634(122.481f, 6802.693f, 18.468f, 209.399f);
				__LIB_0__.func_634(127.182f, 6802.686f, 18.218f, 209.399f);
				__LIB_0__.func_634(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		case 94:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(-2213.5515f, 2283.7258f, 31.7464f, 293.7993f);
				__LIB_0__.func_634(-2196.7097f, 2290.824f, 32.0819f, 293.7993f);
				__LIB_0__.func_634(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				__LIB_0__.func_634(-2180.471f, 2296.2056f, 32.9612f, 287.5992f);
				__LIB_0__.func_634(-2180.8704f, 2419.6492f, 0.2324f, 147.7987f);
				__LIB_0__.func_634(-2180.1663f, 2436.9097f, 0.2325f, 144.5987f);
				__LIB_0__.func_634(-2185.2708f, 2457.022f, 0.2062f, 160.1985f);
				__LIB_0__.func_634(-2329.4646f, 2393.6028f, 2.5699f, 289.7982f);
				__LIB_0__.func_634(-2328.9775f, 2380.4062f, 2.7911f, 289.7982f);
				__LIB_0__.func_634(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				__LIB_0__.func_634(-2239.671f, 2390.2925f, 10.756f, 189.2002f);
				__LIB_0__.func_634(-2217.4128f, 2392.4712f, 12.2202f, 189.2002f);
				__LIB_0__.func_634(-2238.863f, 2381.5598f, 13.1388f, 185.2003f);
				__LIB_0__.func_634(-2215.6948f, 2383.0352f, 14.9809f, 189.4004f);
				__LIB_0__.func_634(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				__LIB_0__.func_634(-2215.9604f, 2374.2507f, 17.0939f, 187.4004f);
				__LIB_0__.func_634(-2237.494f, 2364.4673f, 15.3155f, 186.2004f);
				__LIB_0__.func_634(-2216.8572f, 2365.651f, 18.9029f, 173.0005f);
				__LIB_0__.func_634(-2218.5264f, 2357.0654f, 20.7893f, 179.0004f);
				__LIB_0__.func_634(-2237.6248f, 2348.108f, 20.9097f, 179.0004f);
				__LIB_0__.func_634(-2218.4473f, 2348.7327f, 22.9621f, 179.0004f);
				__LIB_0__.func_634(-2238.1797f, 2339.141f, 22.5602f, 174.8003f);
				__LIB_0__.func_634(-2218.7705f, 2340.1313f, 25.5237f, 177.2002f);
				__LIB_0__.func_634(-2238.9978f, 2330.9585f, 25.7263f, 175.8005f);
				__LIB_0__.func_634(-2219.2214f, 2331.9338f, 28.5604f, 177.8006f);
				__LIB_0__.func_634(-2219.0774f, 2324.0657f, 30.9043f, 198.8006f);
				__LIB_0__.func_634(-2239.4126f, 2322.913f, 28.0647f, 177.8008f);
				__LIB_0__.func_634(-2240.014f, 2313.9507f, 29.5314f, 170.6008f);
				__LIB_0__.func_634(-2241.5435f, 2305.8186f, 30.7136f, 163.4006f);
				__LIB_0__.func_634(-2244.9043f, 2298.3877f, 31.4166f, 148.2005f);
				__LIB_0__.func_634(-2249.3103f, 2290.8918f, 31.5742f, 139.2004f);
				__LIB_0__.func_634(-2211.8962f, 2319.5813f, 31.7538f, 259.4002f);
				__LIB_0__.func_634(-2203.961f, 2320.0159f, 31.9895f, 271.4001f);
				__LIB_0__.func_634(-2255.1057f, 2285.4148f, 31.617f, 130.3999f);
				__LIB_0__.func_634(-2196.1704f, 2320.341f, 32.2704f, 270.6003f);
				__LIB_0__.func_634(-2261.3352f, 2280.2034f, 31.6562f, 130.0002f);
				__LIB_0__.func_634(-2268.4468f, 2275.5276f, 31.7095f, 124.4001f);
				__LIB_0__.func_634(-2188.258f, 2319.9846f, 32.5649f, 267.3998f);
			}
			break;
		case 95:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				__LIB_0__.func_634(38.819f, 3321.2f, 37.0283f, 203.999f);
				__LIB_0__.func_634(26.877f, 3309.062f, 37.93f, 191.9991f);
				__LIB_0__.func_634(15.6727f, 3297.8457f, 39.0535f, 191.9991f);
				__LIB_0__.func_634(-24.2865f, 3367.5269f, 41.4783f, 264.399f);
				__LIB_0__.func_634(-23.1279f, 3352.254f, 40.52f, 280.399f);
				__LIB_0__.func_634(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				__LIB_0__.func_634(97.4844f, 3335.3853f, 34.6164f, 7.9981f);
				__LIB_0__.func_634(20.409f, 3370.8386f, 38.8393f, 235.799f);
				__LIB_0__.func_634(48.457f, 3336.5862f, 35.8912f, 270.3979f);
			}
			else
			{
				__LIB_0__.func_634(25.9869f, 3349.7063f, 36.0366f, 273.9994f);
				__LIB_0__.func_634(25.0176f, 3356.9146f, 36.4258f, 276.9998f);
				__LIB_0__.func_634(36.2443f, 3351.3584f, 36.2386f, 272.5997f);
				__LIB_0__.func_634(35.9352f, 3358.8157f, 37.0033f, 276.7998f);
				__LIB_0__.func_634(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				__LIB_0__.func_634(30.027f, 3292.351f, 38.604f, 140.199f);
				__LIB_0__.func_634(49.1614f, 3358.5894f, 35.9759f, 263.5988f);
				__LIB_0__.func_634(48.288f, 3352.494f, 35.5841f, 261.1988f);
				__LIB_0__.func_634(23.897f, 3283.152f, 39.381f, 145.399f);
				__LIB_0__.func_634(60.9182f, 3356.2102f, 35.8814f, 255.3988f);
				__LIB_0__.func_634(18.723f, 3274.025f, 40.054f, 155.799f);
				__LIB_0__.func_634(59.0177f, 3350.0044f, 35.3204f, 255.7989f);
				__LIB_0__.func_634(36.958f, 3298.847f, 38.001f, 127.799f);
				__LIB_0__.func_634(54.165f, 3311.582f, 36.517f, 303.799f);
				__LIB_0__.func_634(61.607f, 3317.105f, 35.916f, 306.999f);
				__LIB_0__.func_634(68.994f, 3323.129f, 35.364f, 308.199f);
				__LIB_0__.func_634(76.266f, 3329.467f, 34.805f, 311.399f);
				__LIB_0__.func_634(82.757f, 3335.915f, 34.344f, 316.598f);
				__LIB_0__.func_634(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				__LIB_0__.func_634(14.664f, 3263.688f, 40.931f, 160.398f);
				__LIB_0__.func_634(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				__LIB_0__.func_634(11.7852f, 3256.1008f, 41.7031f, 159.198f);
				__LIB_0__.func_634(89.575f, 3343.311f, 33.932f, 318.398f);
				__LIB_0__.func_634(58.4154f, 3329.4229f, 35.6197f, 305.5979f);
				__LIB_0__.func_634(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				__LIB_0__.func_634(72.1063f, 3339.7927f, 34.8449f, 308.5977f);
				__LIB_0__.func_634(95.6614f, 3349.9172f, 33.696f, 316.1977f);
				__LIB_0__.func_634(85.4387f, 3353.1833f, 33.8047f, 317.9978f);
			}
			break;
		case 96:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(2135.708f, 1757.503f, 102.073f, 40.999f);
				__LIB_0__.func_634(2148.674f, 1764.557f, 102.75f, 40.999f);
				__LIB_0__.func_634(2160.511f, 1771.173f, 104.149f, 40.999f);
				__LIB_0__.func_634(2172.842f, 1777.391f, 105.369f, 40.999f);
				__LIB_0__.func_634(2127.938f, 1736.353f, 100.835f, 222.199f);
				__LIB_0__.func_634(2141.682f, 1739.865f, 99.833f, 222.199f);
				__LIB_0__.func_634(2152.786f, 1747.776f, 99.785f, 222.199f);
				__LIB_0__.func_634(2166.356f, 1754.682f, 100.07f, 220.399f);
				__LIB_0__.func_634(2090.66f, 1701.805f, 101.681f, 243.199f);
				__LIB_0__.func_634(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				__LIB_0__.func_634(2073.0442f, 1725.9348f, 102.5096f, 225.2f);
				__LIB_0__.func_634(2077.2405f, 1730.2992f, 102.5247f, 225.2f);
				__LIB_0__.func_634(2081.68f, 1734.7421f, 102.5588f, 225.2f);
				__LIB_0__.func_634(2086.0515f, 1739.0446f, 102.6618f, 225.2f);
				__LIB_0__.func_634(2090.55f, 1743.53f, 102.6058f, 225.2f);
				__LIB_0__.func_634(2095.2947f, 1748.2742f, 102.3022f, 225.2f);
				__LIB_0__.func_634(2101.779f, 1721.807f, 101.927f, 225.2f);
				__LIB_0__.func_634(2107.08f, 1727.001f, 101.932f, 225.2f);
				__LIB_0__.func_634(2095.867f, 1716.475f, 101.925f, 225.2f);
				__LIB_0__.func_634(2112.387f, 1732.492f, 101.849f, 225.2f);
				__LIB_0__.func_634(2089.718f, 1710.779f, 101.978f, 225.2f);
				__LIB_0__.func_634(2111.639f, 1717.132f, 100.855f, 225.2f);
				__LIB_0__.func_634(2117.297f, 1722.655f, 100.704f, 225.2f);
				__LIB_0__.func_634(2105.821f, 1711.672f, 101.065f, 225.2f);
				__LIB_0__.func_634(2098.759f, 1704.866f, 101.209f, 225.2f);
				__LIB_0__.func_634(2121.208f, 1713.145f, 99.65f, 225.2f);
				__LIB_0__.func_634(2115.34f, 1707.542f, 99.829f, 225.2f);
				__LIB_0__.func_634(2109.211f, 1702.247f, 100.079f, 225.2f);
				__LIB_0__.func_634(2124.167f, 1704.036f, 98.584f, 225.2f);
				__LIB_0__.func_634(2118.181f, 1698.253f, 98.645f, 225.2f);
				__LIB_0__.func_634(2127.253f, 1694.878f, 97.078f, 225.2f);
				__LIB_0__.func_634(2117.786f, 1738.219f, 101.839f, 225.2f);
				__LIB_0__.func_634(2122.34f, 1728.011f, 100.627f, 225.2f);
				__LIB_0__.func_634(2126.288f, 1718.542f, 99.501f, 225.2f);
				__LIB_0__.func_634(2129.762f, 1709.847f, 98.352f, 225.2f);
				__LIB_0__.func_634(2132.765f, 1700.777f, 96.999f, 225.2f);
				__LIB_0__.func_634(2120.399f, 1689.165f, 97.388f, 225.2f);
				__LIB_0__.func_634(2098.9944f, 1747.9292f, 102.2403f, 225.2f);
			}
			break;
		case 97:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				__LIB_0__.func_634(1871.6914f, 358.5369f, 162.1067f, 153.1979f);
				__LIB_0__.func_634(1858.9664f, 351.2935f, 161.7614f, 166.598f);
				__LIB_0__.func_634(1873.6115f, 342.6637f, 161.6936f, 142.998f);
				__LIB_0__.func_634(1887.6447f, 343.1557f, 162.1659f, 138.5979f);
				__LIB_0__.func_634(1888.6436f, 328.0839f, 161.7489f, 139.398f);
				__LIB_0__.func_634(1898.5963f, 315.2232f, 161.4418f, 173.7979f);
				__LIB_0__.func_634(1896.7292f, 266.5388f, 161.1619f, 113.5978f);
				__LIB_0__.func_634(1900.1672f, 281.3884f, 161.7807f, 115.197f);
				__LIB_0__.func_634(1856.2855f, 294.624f, 161.442f, 167.9966f);
				__LIB_0__.func_634(1868.6218f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				__LIB_0__.func_634(1856.3777f, 255.9146f, 162.7158f, 147.6202f);
				__LIB_0__.func_634(1837.2792f, 227.3696f, 165.2592f, 164.3995f);
				__LIB_0__.func_634(1835.1923f, 219.3931f, 167.5468f, 169.9994f);
				__LIB_0__.func_634(1833.5565f, 211.859f, 169.864f, 169.9994f);
				__LIB_0__.func_634(1839.5338f, 194.4053f, 171.3841f, 172.9989f);
				__LIB_0__.func_634(1838.2894f, 185.8157f, 171.2585f, 174.1989f);
				__LIB_0__.func_634(1837.4781f, 177.0607f, 170.7063f, 174.1989f);
				__LIB_0__.func_634(1840.4631f, 202.6959f, 170.8702f, 174.1989f);
				__LIB_0__.func_634(1836.2964f, 168.7307f, 170.5786f, 174.1989f);
				__LIB_0__.func_634(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				__LIB_0__.func_634(1826.9104f, 214.9648f, 172.2502f, 18.7986f);
				__LIB_0__.func_634(1823.8047f, 223.0288f, 172.0794f, 21.7986f);
				__LIB_0__.func_634(1820.599f, 231.144f, 172.2987f, 21.7986f);
				__LIB_0__.func_634(1817.2448f, 239.1232f, 172.0878f, 21.7986f);
				__LIB_0__.func_634(1814.0886f, 247.0423f, 171.7386f, 24.9986f);
				__LIB_0__.func_634(1810.8789f, 255.6553f, 171.7517f, 19.3986f);
				__LIB_0__.func_634(1807.7288f, 265.4899f, 172.2307f, 15.1986f);
				__LIB_0__.func_634(1823.1471f, 197.3122f, 172.235f, 192.3984f);
				__LIB_0__.func_634(1824.6414f, 184.4241f, 171.5948f, 183.3985f);
				__LIB_0__.func_634(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				__LIB_0__.func_634(1824.7476f, 162.8998f, 170.4961f, 173.1985f);
				__LIB_0__.func_634(1817.3447f, 214.6964f, 172.5223f, 203.9982f);
				__LIB_0__.func_634(1813.4656f, 222.3717f, 172.3316f, 200.9982f);
				__LIB_0__.func_634(1809.1141f, 230.8225f, 172.346f, 205.1983f);
				__LIB_0__.func_634(1805.5945f, 239.3896f, 172.0033f, 197.9984f);
				__LIB_0__.func_634(1802.5154f, 247.4269f, 171.8964f, 197.9984f);
				__LIB_0__.func_634(1833.982f, 150.4025f, 170.411f, 163.7985f);
				__LIB_0__.func_634(1823.0791f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		case 123:
		case 124:
		case 125:
			__LIB_6__.func_914(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			__LIB_6__.func_914(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			__LIB_6__.func_914(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			__LIB_6__.func_914(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			__LIB_6__.func_914(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			__LIB_6__.func_914(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		default:
			break;
	}
}

int func_282(struct<3> Param0)//Position - 0x185E4
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!func_286(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_285(Param0, 1008981770))
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
				iVar0 = func_284(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__.func_637(&(Global_2667225.f_45[iVar0 /*12*/])) };
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

int func_284(struct<3> Param0, float fParam1)//Position - 0x186ED
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (__LIB_1__.func_120(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_285(struct<3> Param0, float fParam1)//Position - 0x18735
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (__LIB_1__.func_120(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_286(int iParam0, bool bParam1)//Position - 0x1877C
{
	if (__LIB_0__.func_3() != 0)
	{
		return __LIB_1__.func_122(iParam0) != 0;
	}
	return __LIB_7__.func_268(iParam0, bParam1, 0);
}

int func_295()//Position - 0x18967
{
	__LIB_0__.func_599();
	switch (__LIB_1__.func_123())
	{
		case 0:
			__LIB_0__.func_634(func_296(), 148.7996f);
			__LIB_0__.func_634(-1053.594f, -2541.3635f, 19.0804f, 149.9996f);
			__LIB_0__.func_634(-1067.8008f, -2565.9033f, 19.0786f, 149.7995f);
			break;
		case 1:
			__LIB_0__.func_634(func_296(), 319.5993f);
			__LIB_0__.func_634(-1633.6018f, -982.0679f, 12.0174f, 140.1986f);
			__LIB_0__.func_634(-1621.2946f, -967.3729f, 12.0176f, 140.1985f);
			break;
		case 2:
			__LIB_0__.func_634(func_296(), 254.1978f);
			__LIB_0__.func_634(-398.3749f, 1174.289f, 324.6416f, 279.9978f);
			__LIB_0__.func_634(-422.421f, 1181.459f, 324.6416f, 224.7975f);
			break;
		case 3:
			__LIB_0__.func_634(func_296(), 179.7976f);
			__LIB_0__.func_634(827.0105f, -2963.5293f, 4.9008f, 179.7976f);
			__LIB_0__.func_634(827.0532f, -2992.452f, 4.903f, 179.1978f);
			break;
		case 4:
			__LIB_0__.func_634(func_296(), 249.3976f);
			__LIB_0__.func_634(220.4448f, -852.2534f, 29.1105f, 249.9977f);
			__LIB_0__.func_634(238.0792f, -959.2108f, 28.2027f, 160.1973f);
			break;
		case 5:
			__LIB_0__.func_634(func_296(), 186.5969f);
			__LIB_0__.func_634(-3200.642f, 910.3599f, 13.3531f, 246.597f);
			__LIB_0__.func_634(-3224.6724f, 1084.2233f, 9.7721f, 165.9965f);
			break;
		case 6:
			__LIB_0__.func_634(func_296(), 228.996f);
			__LIB_0__.func_634(-1885.713f, 2019.1978f, 139.8078f, 165.3959f);
			__LIB_0__.func_634(-1902.7965f, 2041.4781f, 139.7425f, 160.9958f);
			break;
		case 7:
			__LIB_0__.func_634(func_296(), 120.1956f);
			__LIB_0__.func_634(1833.9629f, 3656.3696f, 33.2724f, 120.1956f);
			__LIB_0__.func_634(1847.3832f, 3751.398f, 32.1719f, 29.9954f);
			break;
		case 8:
			__LIB_0__.func_634(func_296(), 5.7954f);
			__LIB_0__.func_634(1696.2357f, 4729.6963f, 41.2005f, 20.1947f);
			__LIB_0__.func_634(1661.1301f, 4872.8027f, 41.043f, 187.7946f);
			break;
		case 9:
			__LIB_0__.func_634(func_296(), 134.9944f);
			__LIB_0__.func_634(-139.9687f, 6440.6377f, 30.3298f, 225.5942f);
			__LIB_0__.func_634(-229.6591f, 6312.9663f, 30.2937f, 135.3941f);
			break;
	}
	return 0;
}

Vector3 func_296()//Position - 0x18C39
{
	switch (__LIB_1__.func_123())
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

Vector3 func_299()//Position - 0x18D75
{
	switch (__LIB_1__.func_108())
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
	if (__LIB_0__.func_154(__LIB_1__.func_110(), 0, 1))
	{
		Var0 = { __LIB_0__.func_85(__LIB_1__.func_110()) };
	}
	return Var0;
}

int func_301()//Position - 0x18DBC
{
	return joaat("jubilee");
}

void func_303()//Position - 0x18DEE
{
	__LIB_1__.func_123(17);
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
	if (__LIB_0__.func_154(__LIB_1__.func_110(), 0, 1))
	{
		Var0 = { __LIB_0__.func_85(__LIB_1__.func_110()) };
	}
	Local_106.f_143 = { Var0 };
}

void func_308()//Position - 0x18E76
{
	if (__LIB_1__.func_116() > 0)
	{
		func_630();
		func_620();
		func_608();
		func_590();
		func_586();
		func_583();
		func_582();
		func_575();
		__LIB_1__.func_149();
		func_546();
		func_544();
		func_539();
		func_527();
		func_324();
		func_314();
	}
	if (func_313(NETWORK::PARTICIPANT_ID()) != 5 && __LIB_1__.func_116() == 5)
	{
		func_312(5);
	}
	switch (func_313(NETWORK::PARTICIPANT_ID()))
	{
		case 0:
			if (__LIB_1__.func_116() > 0)
			{
				switch (__LIB_1__.func_108())
				{
					case 0:
						if (func_310())
						{
							func_309(0);
						}
						func_312(2);
						break;
					case 1:
						if (__LIB_1__.func_112(PLAYER::PLAYER_ID()))
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
	if (__LIB_1__.func_101(&(Local_106.f_135), iParam0))
	{
	}
}

bool func_310()//Position - 0x18FBF
{
	return __LIB_6__.func_938(PLAYER::PLAYER_ID());
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
	if ((!func_322(NETWORK::PARTICIPANT_ID(), 3) && !__LIB_11__.func_631(7)) && func_320(__LIB_1__.func_108()))
	{
		Var0 = { func_296() };
		fVar1 = 0f;
		if (__LIB_6__.func_912(Var0, &Var0, &fVar1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(func_7(), false);
			ENTITY::SET_ENTITY_VISIBLE(func_7(), true, false);
			ENTITY::SET_ENTITY_COLLISION(func_7(), true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(func_7(), false);
			ENTITY::SET_ENTITY_COORDS(func_7(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_7(), fVar1);
			__LIB_6__.func_870(Var0, fVar1, func_301(), func_7());
			func_316();
			func_315(3);
		}
	}
}

void func_315(int iParam0)//Position - 0x190B0
{
	if (__LIB_1__.func_101(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2), iParam0))
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
	switch (__LIB_1__.func_108())
	{
		case 0:
			Var0 = { func_319() };
			break;
		case 1:
			Var0 = { func_153() };
			iVar2 = func_318(func_154());
			iVar3 = func_317(__LIB_1__.func_123());
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

int func_320(int iParam0)//Position - 0x19246
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (__LIB_1__.func_125(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_322(int iParam0, int iParam1)//Position - 0x1929D
{
	return __LIB_0__.func_287(&(Local_105[iParam0 /*6*/].f_2), iParam1);
}

int func_323()//Position - 0x192B3
{
	if (__LIB_1__.func_108() != 1)
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
				TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), func_7(), 20000, func_520(), 2f, 16, 0);
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
				if (__LIB_1__.func_126(PLAYER::PLAYER_PED_ID(), func_7()) && !__LIB_0__.func_583(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				else
				{
					func_330(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_327(0);
					func_325();
				}
			}
			break;
	}
}

void func_325()//Position - 0x193C6
{
	__LIB_1__.func_125(18);
}

void func_327(bool bParam0)//Position - 0x193F1
{
	if (bParam0)
	{
		if (!func_653(8))
		{
			Global_2815059.f_6753 = 1;
			__LIB_6__.func_915(8);
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
	if (__LIB_11__.func_631(&(Local_106.f_133), iParam0))
	{
	}
}

void func_330(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1947C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (__LIB_0__.func_647())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!__LIB_1__.func_127())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0) && !__LIB_0__.func_81()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					__LIB_1__.func_126(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!__LIB_0__.func_644(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					__LIB_0__.func_643();
					__LIB_0__.func_642();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!__LIB_0__.func_644(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (__LIB_0__.func_641(Global_4718592.f_168757))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

void func_342()//Position - 0x19BAF
{
	__LIB_1__.func_142();
	if (!func_322(NETWORK::PARTICIPANT_ID(), 2))
	{
		__LIB_1__.func_141();
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
		}
		if (__LIB_1__.func_128())
		{
			func_315(2);
		}
	}
}

void func_345(int* iParam0, bool bParam1, bool bParam2)//Position - 0x19CFB
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
		if (__LIB_2__.func_59(iParam0->f_1, 32))
		{
			NETWORK::NETWORK_HIDE_PROJECTILE_IN_CUTSCENE();
		}
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, __LIB_2__.func_59(iParam0->f_1, 4));
		if (!Global_2703735.f_3428)
		{
			__LIB_1__.func_134(1, 1, __LIB_2__.func_59(iParam0->f_1, 128));
		}
		iVar0 = 0;
		if (__LIB_2__.func_59(iParam0->f_1, 8))
		{
			__LIB_1__.func_132(&iVar0, 524288);
		}
		if (__LIB_2__.func_59(iParam0->f_1, 16))
		{
			__LIB_1__.func_132(&iVar0, 1048576);
		}
		if (__LIB_1__.func_127())
		{
			func_330(PLAYER::PLAYER_ID(), 0, iVar0, 0);
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
				if ((!__LIB_0__.func_86(iParam0->f_18[iParam0->f_382 /*36*/].f_4) && !__LIB_0__.func_86(iParam0->f_18[iParam0->f_382 /*36*/].f_10)) && iParam0->f_18[iParam0->f_382 /*36*/].f_14 != 0f)
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
			func_347(iParam0, __LIB_2__.func_59(iParam0->f_1, 2), bParam1, bParam2, __LIB_2__.func_59(iParam0->f_1, 64), 1);
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
					__LIB_0__.func_151(&(iParam0->f_307[iParam0->f_383 /*8*/].f_2), iParam0->f_307[iParam0->f_383 /*8*/]);
					if (iParam0->f_383 + 1 < iParam0->f_373)
					{
						iParam0->f_383++;
					}
				}
			}
		}
	}
}

void func_347(int* iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1A274
{
	bool bVar0;
	if (!iParam0->f_386)
	{
		return;
	}
	if (!bParam2)
	{
		__LIB_1__.func_133(iParam0);
	}
	if (bParam3)
	{
		func_349(1, 0, bParam4, bParam5);
	}
	bVar0 = SCRIPT::GET_NO_LOADING_SCREEN();
	if (!bParam1)
	{
		func_330(PLAYER::PLAYER_ID(), 1, 524288, 0);
	}
	if (SCRIPT::GET_NO_LOADING_SCREEN() != bVar0)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(bVar0);
	}
	__LIB_1__.func_128(iParam0);
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533), 0);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533.f_1 = 0;
}

void func_349(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1A345
{
	__LIB_6__.func_916();
	if (bParam0)
	{
		__LIB_1__.func_132(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	__LIB_21__.func_361();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	__LIB_7__.func_279(0, 1, 1, 0, 0, bParam2, 0);
	__LIB_1__.func_32();
	__LIB_0__.func_730(12, 0, -1);
	__LIB_0__.func_731(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_0__.func_131();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam3)
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
		}
	}
	__LIB_0__.func_83(0);
	if (((((__LIB_0__.func_497() == 0 && __LIB_1__.func_129() == 0) && iParam1) && !__LIB_6__.func_948(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && __LIB_1__.func_127())
	{
		func_330(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2703735.f_3428 = 0;
	__LIB_1__.func_129();
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
			if (!__LIB_0__.func_86(Var1) && iVar2 != 0)
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
			__LIB_1__.func_128(uParam0);
			uParam0->f_1 = uParam1;
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533), 0);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533.f_1 = MISC::GET_HASH_KEY(&(uParam0->f_2));
			uParam0->f_386 = 1;
		}
	}
	else
	{
		__LIB_1__.func_128(uParam0);
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
	__LIB_1__.func_136(iParam0, (iParam0->f_372 - 1));
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
		if (func_410(&iVar0, &(Local_106.f_1296), __LIB_0__.func_109()) && ENTITY::DOES_ENTITY_EXIST(Local_106.f_1296.f_1[0]))
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
		if (__LIB_0__.func_517(uParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__.func_517(uParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__.func_517(uParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (func_514(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			func_498(*iParam0, &Var0);
			__LIB_0__.func_668(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__.func_138(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__.func_652(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
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
			if (!__LIB_0__.func_517(uParam2, 32))
			{
				func_412(iParam0, uParam1, &(uParam1->f_1), __LIB_0__.func_517(uParam2, 16), __LIB_0__.func_517(uParam2, 128), __LIB_0__.func_517(uParam2, 64), !__LIB_0__.func_517(uParam2, 256), 0, 1);
			}
			if (__LIB_0__.func_517(uParam2, 4))
			{
				func_411(iParam0, &(uParam1->f_12));
				if (__LIB_0__.func_517(uParam2, 8))
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
			if (__LIB_0__.func_517(uParam2, 8))
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

int func_411(var uParam0, var uParam1)//Position - 0x1B905
{
	int iVar0;
	struct<101> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam0, &iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (func_514(uParam1, iVar0, 10f, 10f, 15f, ENTITY::GET_ENTITY_HEADING(iVar0), 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					Var1.f_9 = 49;
					Var1.f_59 = 2;
					Var1.f_78 = -1;
					Var1.f_79 = -1;
					Var1.f_96 = -1;
					Var1.f_97 = 1;
					Var1.f_99 = 132;
					Var1.f_100 = -1;
					func_498(iVar0, &Var1);
					__LIB_0__.func_668(*uParam1, &Var1, 1, 1, 0);
					return 1;
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
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__.func_121(iVar4) || bParam5))
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
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__.func_121((*uParam2)[iVar1]) || bParam5))
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
							if (__LIB_0__.func_121(*uParam1))
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
	if (__LIB_0__.func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__.func_137(*uParam0);
		if (func_428(iParam1) || func_414(iParam1))
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

int func_414(int iParam0)//Position - 0x1BBEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		iVar2 = iVar1;
		iVar4 = func_422(iParam0, iVar2);
		if (__LIB_6__.func_827(iVar5, 14, iVar4, -1))
		{
			return 1;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = __LIB_6__.func_795(iParam0, iVar3);
			if (__LIB_6__.func_827(iVar5, iVar3, iVar4, -1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_422(int iParam0, int iParam1)//Position - 0x1C586
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return __LIB_0__.func_29(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return __LIB_6__.func_937(iParam0, iVar0, iVar1, iParam1);
}

int func_428(int iParam0)//Position - 0x1C9A6
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__.func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_430(iParam0, 14, 0), -1))
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
				return func_422(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
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
	Global_78130[1 /*14*/] = { func_446(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
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
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_431(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { func_446(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_431(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { func_446(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_431(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_431(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

struct<14> func_446(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20B0F
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		func_477(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		__LIB_31__.func_897(iParam1, iParam2, iParam3);
	}
	return Global_78130[0 /*14*/];
}

void func_477(int iParam0, int iParam1, int iParam2)//Position - 0x300C1
{
	switch (iParam0)
	{
		case 2:
			__LIB_18__.func_362(iParam1, iParam2);
			break;
		case 11:
			__LIB_18__.func_430(iParam1, iParam2);
			break;
		case 8:
			__LIB_18__.func_429(iParam1, iParam2);
			break;
		case 9:
			__LIB_18__.func_361(iParam1, iParam2);
			break;
		case 3:
			__LIB_18__.func_360(iParam1, iParam2);
			break;
		case 4:
			__LIB_1__.func_139(iParam1, iParam2);
			break;
		case 6:
			__LIB_18__.func_358(iParam1, iParam2);
			break;
		case 1:
			__LIB_1__.func_138(iParam1, iParam2);
			break;
		case 7:
			__LIB_18__.func_356(iParam1, iParam2);
			break;
		case 10:
			__LIB_18__.func_355(iParam1, iParam2);
			break;
		case 14:
			__LIB_1__.func_137(iParam1, iParam2);
			break;
		case 12:
			__LIB_18__.func_353(iParam1, iParam2);
			break;
		case 5:
			__LIB_18__.func_352(iParam1, iParam2);
			break;
		case 0:
			__LIB_18__.func_351(iParam1, iParam2);
			break;
		case 13:
			__LIB_18__.func_336(iParam1);
			break;
	}
}

void func_498(int iParam0, var uParam1)//Position - 0x3BDD5
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		__LIB_6__.func_760(iParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
		if (BitTest(uParam1->f_77, 11))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (__LIB_6__.func_910(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (__LIB_1__.func_48(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !VEHICLE::GET_DRIFT_TYRES_SET(iParam0))
		{
			uParam1->f_102 = 2;
		}
		else if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			uParam1->f_102 = 1;
		}
		else if (VEHICLE::GET_DRIFT_TYRES_SET(iParam0))
		{
			uParam1->f_102 = 3;
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
		uParam1->f_79 = AUDIO::GET_VEHICLE_HORN_SOUND_INDEX(iParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
		VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam0, &(uParam1->f_97));
		VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::GET_VEHICLE_LIVERY2(iParam0);
		iVar0 = func_501(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
		if (!iVar0 == __LIB_0__.func_160())
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (__LIB_0__.func_653(iParam0))
				{
					MISC::SET_BIT(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deathbike2")))
		{
			uParam1->f_99 = __LIB_1__.func_139(__LIB_6__.func_911(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

int func_501(int iParam0, var uParam1, var uParam2)//Position - 0x3BF9A
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (__LIB_0__.func_657(iParam0, 1))
		{
			*uParam1 = 1;
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot"))
				{
					*uParam2 = DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
				}
			}
			return func_509(iParam0);
		}
		else if (__LIB_0__.func_656(iParam0, 1))
		{
			return __LIB_1__.func_142(iParam0, 1, 0);
		}
		else if (__LIB_0__.func_655(iParam0, 1))
		{
			return func_505(iParam0, 1, 0);
		}
		else if (__LIB_0__.func_654(iParam0, 1))
		{
			*uParam1 = 2;
			return func_502(iParam0);
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					*uParam1 = 3;
					return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

int func_502(int iParam0)//Position - 0x3C080
{
	int iVar0;
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return __LIB_1__.func_140(iVar0, 0, 1, 0);
}

int func_505(int iParam0, bool bParam1, int iParam2)//Position - 0x3C167
{
	int iVar0;
	if (!__LIB_0__.func_655(iParam0, 1))
	{
		return __LIB_0__.func_160();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
		return __LIB_1__.func_140(iVar0, 0, bParam1, iParam2);
	}
	return __LIB_0__.func_160();
}

int func_509(int iParam0)//Position - 0x3C267
{
	int iVar0;
	if (!__LIB_0__.func_657(iParam0, 1))
	{
		return __LIB_0__.func_160();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return __LIB_1__.func_140(iVar0, 0, 1, 0);
}

int func_514(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5)//Position - 0x3C824
{
	int iVar0;
	int iVar1;
	__LIB_1__.func_140(&Global_1966234);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		func_498(iParam1, &Global_1966234);
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iVar0, Param2, fParam3, bParam4, bParam5, false);
		__LIB_0__.func_668(*uParam0, &Global_1966234, 1, 1, 0);
		if (((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) && iVar0 != joaat("kosatka")) && iVar0 != joaat("avisa"))
		{
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, iVar1))
				{
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(*uParam0, iVar1, true);
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam1, iVar1))
				{
					VEHICLE::REMOVE_VEHICLE_WINDOW(*uParam0, iVar1);
				}
				iVar1++;
			}
		}
		if ((!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && iVar0 != joaat("kosatka")) && iVar0 != joaat("avisa"))
		{
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, iVar1, true))
				{
					VEHICLE::SET_VEHICLE_TYRE_BURST(*uParam0, iVar1, true, 1000f);
				}
				else if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam1, iVar1, false))
				{
					VEHICLE::SET_VEHICLE_TYRE_BURST(*uParam0, iVar1, false, 1000f);
				}
				iVar1++;
			}
		}
		VEHICLE::COPY_VEHICLE_DAMAGES(iParam1, *uParam0);
		if ((iVar0 == joaat("dominator4") || iVar0 == joaat("dominator5")) || iVar0 == joaat("dominator6"))
		{
			if (!VEHICLE::GET_DOES_VEHICLE_HAVE_TOMBSTONE(iParam1))
			{
				VEHICLE::HIDE_TOMBSTONE(*uParam0, true);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		return 1;
	}
	return 0;
}

int func_520()//Position - 0x3CA88
{
	int iVar0;
	if (__LIB_1__.func_145() || !__LIB_1__.func_113(0))
	{
		return 2;
	}
	iVar0 = __LIB_21__.func_187(__LIB_0__.func_582(), PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 4;
		default:
	}
	return -2;
}

int func_526()//Position - 0x3CC15
{
	if (!__LIB_1__.func_112(PLAYER::PLAYER_ID()))
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
		if (!__LIB_6__.func_939(PLAYER::PLAYER_ID()))
		{
			func_533();
		}
	}
	else if (__LIB_6__.func_939(PLAYER::PLAYER_ID()))
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
			__LIB_1__.func_114(__LIB_6__.func_908(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
			func_529(2);
			break;
		case 2:
			if ((func_320(__LIB_1__.func_108()) && func_320(func_10())) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7(), false, true) == 0)
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
			if (__LIB_2__.func_47(&(Local_106.f_141), 10000, 0))
			{
				__LIB_0__.func_579(&(Local_106.f_141));
				func_529(5);
			}
			break;
		case 5:
			if (func_320(__LIB_1__.func_108()) && __LIB_6__.func_912(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, &fVar1))
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
	__LIB_1__.func_125(20);
}

void func_529(int iParam0)//Position - 0x3CE18
{
	Local_106.f_140 = iParam0;
}

bool func_530(int iParam0)//Position - 0x3CE26
{
	return __LIB_1__.func_112(iParam0, 20);
}

int func_531()//Position - 0x3CE36
{
	return Local_106.f_140;
}

void func_532()//Position - 0x3CE42
{
	__LIB_1__.func_125(19);
}

void func_533()//Position - 0x3CE50
{
	__LIB_1__.func_123(19);
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
	if (__LIB_1__.func_146() != 0)
	{
		func_536(0);
	}
	if (func_322(NETWORK::PARTICIPANT_ID(), 5))
	{
		if (__LIB_1__.func_146() == 0)
		{
			func_536(1);
		}
		return 0;
	}
	if (__LIB_11__.func_631(8))
	{
		return 0;
	}
	return 1;
}

void func_536(int iParam0)//Position - 0x3CEC9
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_310 = iParam0;
}

int func_538()//Position - 0x3CEFB
{
	if (__LIB_1__.func_108() != 0)
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
	if (__LIB_1__.func_101(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4), iParam0))
	{
	}
}

void func_541(int iParam0)//Position - 0x3CFEB
{
	if (__LIB_11__.func_631(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4), iParam0))
	{
	}
}

bool func_542(int iParam0, int iParam1)//Position - 0x3D006
{
	return __LIB_0__.func_287(&(Local_105[iParam0 /*6*/].f_4), iParam1);
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
		if (__LIB_1__.func_125(func_10()) && __LIB_1__.func_125(__LIB_1__.func_108()))
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_10(), false);
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(__LIB_1__.func_108(), false);
			__LIB_6__.func_915(2);
		}
	}
}

int func_545()//Position - 0x3D07B
{
	if (__LIB_1__.func_108() != 0)
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
	if (((!__LIB_0__.func_86(__LIB_18__.func_242()) && func_313(NETWORK::PARTICIPANT_ID()) == 3) && func_12()) && __LIB_1__.func_148(__LIB_18__.func_242()))
	{
		__LIB_6__.func_915(5);
		if (func_11() == 1 && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			func_309(1);
		}
	}
	else
	{
		func_328(5);
		__LIB_1__.func_147(1);
	}
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
	iVar1 = __LIB_1__.func_151(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

int func_558(struct<3> Param0, var uParam1, float fParam2)//Position - 0x3D782
{
	struct<3> Var0;
	struct<3> Var1[6];
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	if (__LIB_1__.func_155(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261.5804f, -3332.6846f, 5.4191f };
		*fParam2 = 163.87f;
		return 1;
	}
	if (__LIB_1__.func_155(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577.1599f, 5166.5103f, 19.1864f };
		*fParam2 = 0f;
		return 1;
	}
	if (__LIB_1__.func_155(Param0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*uParam1 = { -856.6151f, 163.7361f, 65.093f };
		*fParam2 = 355.3355f;
		return 1;
	}
	if (__LIB_1__.func_155(Param0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*uParam1 = { -15.5181f, -1456.3999f, 29.4244f };
		*fParam2 = 94.6893f;
		return 1;
	}
	if (__LIB_1__.func_155(Param0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
	{
		*uParam1 = { 1996.3718f, 3818.8308f, 31.1612f };
		*fParam2 = 170.0221f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.218704f, -1086.951f, -100f, -10.545177f, -1106.8953f, 100f, 43.5f, false, true))
	{
		*uParam1 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam2 = 324.1257f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -209.33719f, -2011.0995f, 26.620369f, -257.22247f, -2076.9631f, 36.620373f, 30f, false, true))
	{
		*uParam1 = { -211.8546f, -2030.7715f, 26.6204f };
		*fParam2 = 154.4302f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		*uParam1 = { -623.3622f, 3996f, 120.7669f };
		*fParam2 = 37.8784f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -2203.1675f, 183.35495f, 167.40219f, -2311.5874f, 434.3828f, 195.46692f, 138.5f, false, true))
	{
		*uParam1 = { -2294.9446f, 376.2506f, 173.4669f };
		*fParam2 = 296.6963f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -2041.478f, -553.21594f, -0.089962f, -1787.0801f, -768.08856f, 37.999176f, 220f, false, true))
	{
		*uParam1 = { -1897.0765f, -557.3334f, 10.7279f };
		*fParam2 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1882.8832f, -541.7442f, 4.675224f, -1929.6265f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return 1;
		}
		else
		{
			Var1[0 /*3*/] = { -1962.4679f, -503.4229f, 10.8349f };
			Var1[1 /*3*/] = { -1924.4722f, -534.7357f, 10.8181f };
			Var1[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var1[3 /*3*/] = { -1850.6611f, -595.8367f, 10.4649f };
			Var1[4 /*3*/] = { -1808.9995f, -632.1207f, 10.0016f };
			Var1[5 /*3*/] = { -1745.0428f, -694.4053f, 9.1245f };
			iVar2 = 0;
			fVar3 = SYSTEM::VDIST2(Var1[0 /*3*/], Var0);
			iVar4 = 1;
			while (iVar4 <= 5)
			{
				fVar5 = SYSTEM::VDIST2(Var1[iVar4 /*3*/], Var0);
				if (fVar5 < fVar3)
				{
					fVar3 = fVar5;
					iVar2 = iVar4;
				}
				iVar4++;
			}
			*uParam1 = { Var1[iVar2 /*3*/] };
			switch (iVar2)
			{
				case 0:
					*fParam2 = 234.3999f;
					break;
				case 1:
					*fParam2 = 232.2255f;
					break;
				case 2:
					*fParam2 = 228.2855f;
					break;
				case 3:
					*fParam2 = 231.4914f;
					break;
				case 4:
					*fParam2 = 230.6703f;
					break;
				case 5:
					*fParam2 = 228.7709f;
					break;
			}
			return 1;
		}
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -446.12f, 1057.4515f, 318.61685f, -405.83362f, 1194.4865f, 337.09656f, 106.25f, false, true))
	{
		*uParam1 = { -411.3629f, 1174.5865f, 324.6421f };
		*fParam2 = 255.2881f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1362.0906f, -29.26777f, -100f, -1377.9531f, 152.23888f, 100f, 50f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { -1380.1006f, 95.1566f, 53.5054f };
				*fParam2 = 4.555f;
				break;
			case 1:
				*uParam1 = { -1379.1394f, 84.2472f, 53.0592f };
				*fParam2 = 6.9278f;
				break;
			case 2:
				*uParam1 = { -1378.4266f, 74.5077f, 52.6622f };
				*fParam2 = 2.6813f;
				break;
			case 3:
				*uParam1 = { -1384.1774f, 73.9207f, 52.7438f };
				*fParam2 = 5.542f;
				break;
			case 4:
				*uParam1 = { -1381.1179f, 35.7838f, 52.659f };
				*fParam2 = 7.6687f;
				break;
			case 5:
				*uParam1 = { -1383.7413f, 64.1491f, 52.6647f };
				*fParam2 = 2.5572f;
				break;
			case 6:
				*uParam1 = { -1382.6162f, 49.6876f, 52.6585f };
				*fParam2 = 3.0185f;
				break;
			case 7:
				*uParam1 = { -1383.2987f, 54.4598f, 52.6562f };
				*fParam2 = 6.2155f;
				break;
		}
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.6694f, 28.030502f, -12.123452f, -1112.0841f, 36.08567f, 60f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { 50.9889f, -1092.5254f, 28.2152f };
				*fParam2 = 150.8833f;
				break;
			case 1:
				*uParam1 = { 46.7725f, -1099.7506f, 28.1639f };
				*fParam2 = 149.4322f;
				break;
			case 2:
				*uParam1 = { 41.6146f, -1107.742f, 28.1318f };
				*fParam2 = 154.1378f;
				break;
			case 3:
				*uParam1 = { 38.1922f, -1113.3936f, 28.1507f };
				*fParam2 = 146.3778f;
				break;
			case 4:
				*uParam1 = { 13.0436f, -1124.7668f, 27.7359f };
				*fParam2 = 91.163f;
				break;
			case 5:
				*uParam1 = { 1.4336f, -1125.0425f, 27.1705f };
				*fParam2 = 91.0578f;
				break;
			case 6:
				*uParam1 = { -11.1811f, -1125.8105f, 26.3688f };
				*fParam2 = 91.866f;
				break;
			case 7:
				*uParam1 = { 21.9431f, -1124.5731f, 27.9417f };
				*fParam2 = 91.6961f;
				break;
		}
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { -1023.9825f, -2489.8818f, 19.0755f };
				*fParam2 = 148.7004f;
				break;
			case 1:
				*uParam1 = { -1029.9678f, -2500.4377f, 19.0803f };
				*fParam2 = 148.7144f;
				break;
			case 2:
				*uParam1 = { -1070.5457f, -2570.8594f, 19.0836f };
				*fParam2 = 150.0955f;
				break;
			case 3:
				*uParam1 = { -1056.0647f, -2545.6619f, 19.0809f };
				*fParam2 = 149.5649f;
				break;
			case 4:
				*uParam1 = { -1050.578f, -2536.2185f, 19.0824f };
				*fParam2 = 150.7363f;
				break;
			case 5:
				*uParam1 = { -1036.0316f, -2510.902f, 19.0794f };
				*fParam2 = 147.2113f;
				break;
			case 6:
				*uParam1 = { -1044.4872f, -2525.5342f, 19.079f };
				*fParam2 = 150.7597f;
				break;
			case 7:
				*uParam1 = { -1064.5002f, -2560.6528f, 19.0905f };
				*fParam2 = 150.7081f;
				break;
		}
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { -1044.7413f, -2528.786f, 12.7568f };
				*fParam2 = 150.9439f;
				break;
			case 1:
				*uParam1 = { -1050.7631f, -2539.4978f, 12.7566f };
				*fParam2 = 150.851f;
				break;
			case 2:
				*uParam1 = { -1054.9523f, -2546.8596f, 12.7566f };
				*fParam2 = 149.9285f;
				break;
			case 3:
				*uParam1 = { -1060.3972f, -2556.898f, 12.6066f };
				*fParam2 = 150.8244f;
				break;
			case 4:
				*uParam1 = { -1020.7437f, -2490.0842f, 12.6396f };
				*fParam2 = 148.6134f;
				break;
			case 5:
				*uParam1 = { -1076.9043f, -2589.1794f, 12.6858f };
				*fParam2 = 149.0112f;
				break;
			case 6:
				*uParam1 = { -1026.3866f, -2501.9521f, 12.6923f };
				*fParam2 = 149.7553f;
				break;
			case 7:
				*uParam1 = { -1070.5065f, -2578.3892f, 12.6932f };
				*fParam2 = 148.5232f;
				break;
		}
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { -1067.8463f, -2708.9397f, 19.0588f };
				*fParam2 = 230.9025f;
				break;
			case 1:
				*uParam1 = { -1058.2238f, -2716.2166f, 19.06f };
				*fParam2 = 237.1285f;
				break;
			case 2:
				*uParam1 = { -1004.5667f, -2744.797f, 19.0811f };
				*fParam2 = 255.6885f;
				break;
			case 3:
				*uParam1 = { -1049.5092f, -2721.58f, 19.0546f };
				*fParam2 = 242.3581f;
				break;
			case 4:
				*uParam1 = { -1017.1544f, -2740.1174f, 19.0525f };
				*fParam2 = 243.5798f;
				break;
			case 5:
				*uParam1 = { -1042.0872f, -2726.0767f, 19.0452f };
				*fParam2 = 240.2381f;
				break;
			case 6:
				*uParam1 = { -1027.353f, -2734.4617f, 19.0509f };
				*fParam2 = 239.8703f;
				break;
			case 7:
				*uParam1 = { -1033.7404f, -2730.7458f, 19.0521f };
				*fParam2 = 239.9237f;
				break;
		}
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { -971.9154f, -2749.122f, 12.6069f };
				*fParam2 = 265.8022f;
				break;
			case 1:
				*uParam1 = { -980.6166f, -2748.535f, 12.757f };
				*fParam2 = 263.5472f;
				break;
			case 2:
				*uParam1 = { -987.6072f, -2747.2734f, 12.6069f };
				*fParam2 = 257.2886f;
				break;
			case 3:
				*uParam1 = { -1006.8151f, -2739.345f, 12.6334f };
				*fParam2 = 242.1315f;
				break;
			case 4:
				*uParam1 = { -1051.8304f, -2713.5527f, 12.6333f };
				*fParam2 = 239.9312f;
				break;
			case 5:
				*uParam1 = { -1041.0035f, -2719.6467f, 12.6402f };
				*fParam2 = 240.1081f;
				break;
			case 6:
				*uParam1 = { -1023.8323f, -2729.4646f, 12.6445f };
				*fParam2 = 239.6737f;
				break;
			case 7:
				*uParam1 = { -1012.8478f, -2735.1724f, 12.6656f };
				*fParam2 = 237.6545f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 845.7216f, -990.7473f, 37.469604f, 846.3397f, -1066.8805f, 16.966232f, 90f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam2 = 93.132f;
				break;
			case 1:
				*uParam1 = { 859.283f, -996.4102f, 28.7865f };
				*fParam2 = 92.2581f;
				break;
			case 2:
				*uParam1 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam2 = 92.714f;
				break;
			case 3:
				*uParam1 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam2 = 92.8628f;
				break;
			case 4:
				*uParam1 = { 831.2605f, -1009.556f, 25.599f };
				*fParam2 = 268.6186f;
				break;
			case 5:
				*uParam1 = { 844.6506f, -1010.0903f, 26.9894f };
				*fParam2 = 270.076f;
				break;
			case 6:
				*uParam1 = { 852.2498f, -1010.1324f, 27.8091f };
				*fParam2 = 269.722f;
				break;
			case 7:
				*uParam1 = { 861.4028f, -1010.0249f, 28.808f };
				*fParam2 = 270.7686f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 767.3736f, -1077.4288f, -10.786545f, 682.82837f, -1080.6858f, 79.673035f, 60f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { 703.2726f, -1067.6997f, 21.4765f };
				*fParam2 = 181.3629f;
				break;
			case 1:
				*uParam1 = { 715.2089f, -1070.3993f, 21.2708f };
				*fParam2 = 175.43623f;
				break;
			case 2:
				*uParam1 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam2 = 181.0347f;
				break;
			case 3:
				*uParam1 = { 709.6841f, -1086.78f, 21.419f };
				*fParam2 = 233.169f;
				break;
			case 4:
				*uParam1 = { 703.807f, -1057.8665f, 21.4152f };
				*fParam2 = 170.1609f;
				break;
			case 5:
				*uParam1 = { 708.1994f, -1048.1937f, 21.216f };
				*fParam2 = 134.2729f;
				break;
			case 6:
				*uParam1 = { 711.1124f, -1069.4229f, 21.3129f };
				*fParam2 = 177.9198f;
				break;
			case 7:
				*uParam1 = { 703.545f, -1078.7177f, 21.3987f };
				*fParam2 = 180.5686f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 31f;
	}
	if (func_563(3, Var0) && __LIB_0__.func_659(Var0, 3, 0, 0))
	{
		*uParam1 = { -1520.1213f, 2731.511f, 16.6437f };
		*fParam2 = 48.1572f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1535.9866f, -2041.497f, 68.21275f, 1529.3566f, -2204.4634f, 96.111946f, 105f, false, true))
	{
		*uParam1 = { 1540.75f, -2051.49f, 76.85f };
		*fParam2 = 255.41f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1185.8104f, -1768.3672f, 28.311447f, 1369.068f, -1701.4515f, 66.25389f, 70f, true, true))
	{
		if (__LIB_0__.func_658(Var0, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*uParam1 = { 1283.3257f, -1731.5222f, 51.78555f };
			*fParam2 = 275.4274f;
			return 1;
		}
		if (__LIB_0__.func_658(Var0, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*uParam1 = { 1334.3861f, -1709.7625f, 55.70131f };
			*fParam2 = 275.4411f;
			return 1;
		}
		if (__LIB_0__.func_658(Var0, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*uParam1 = { 1246.1661f, -1750.6246f, 45.35691f };
			*fParam2 = 301.2981f;
			return 1;
		}
		if (__LIB_0__.func_658(Var0, 1196.2716f, -1753.0505f, 37.63976f, 32f))
		{
			*uParam1 = { 1196.2716f, -1753.0505f, 37.63976f };
			*fParam2 = 209.4354f;
			return 1;
		}
		*uParam1 = { 1283.3257f, -1731.5222f, 51.78555f };
		*fParam2 = 275.4274f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 25f;
	}
	if (__LIB_0__.func_658(Var0, -1693.3018f, -1109.1305f, 17.8977f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			*uParam1 = { -1624.4452f, -976.9755f, 12.0175f };
			*fParam2 = 141.167f;
			return 1;
		}
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		*uParam1 = { -1095.63f, -1577.24f, 3.82f };
		*fParam2 = 216.12f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				*uParam1 = { 1369.246f, 1147.6527f, 112.7592f };
				*fParam2 = 182.0998f;
				break;
			case 1:
				*uParam1 = { 1360.8483f, 1139.121f, 112.7592f };
				*fParam2 = 83.3356f;
				break;
			case 2:
				*uParam1 = { 1364.7513f, 1154.3668f, 112.7592f };
				*fParam2 = 223.2795f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1737.3901f, 3287.7954f, 35.13897f, 1724.3452f, 3337.854f, 57.200382f, 40f, false, true))
	{
		*uParam1 = { 1782.1903f, 3300.076f, 40.4593f };
		*fParam2 = 142.426f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -695.7981f, -1379.6785f, 24.481243f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*uParam1 = { -658.2056f, -1388.7886f, 9.499f };
		*fParam2 = 174.6945f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 325f;
	}
	if (__LIB_1__.func_148(Var0, -75.59782f, -818.60815f, 325.1745f, 58f))
	{
		*uParam1 = { -142.367f, -895.0251f, 28.191f };
		*fParam2 = 71.6555f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 36.1141f;
	}
	if (func_563(7, Var0) && __LIB_0__.func_659(Var0, 7, 0, 0))
	{
		*uParam1 = { -1012.3105f, -465.1634f, 36.1141f };
		*fParam2 = 112.1485f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 12.7091f;
	}
	if (func_563(2, Var0) && __LIB_0__.func_659(Var0, 2, 0, 0))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				*uParam1 = { -1023.9825f, -2489.8818f, 19.0755f };
				*fParam2 = 148.7004f;
				break;
			case 1:
				*uParam1 = { -1029.9678f, -2500.4377f, 19.0803f };
				*fParam2 = 148.7144f;
				break;
			case 2:
				*uParam1 = { -1070.5457f, -2570.8594f, 19.0836f };
				*fParam2 = 150.0955f;
				break;
			case 3:
				*uParam1 = { -1056.0647f, -2545.6619f, 19.0809f };
				*fParam2 = 149.5649f;
				break;
			case 4:
				*uParam1 = { -1050.578f, -2536.2185f, 19.0824f };
				*fParam2 = 150.7363f;
				break;
			case 5:
				*uParam1 = { -1036.0316f, -2510.902f, 19.0794f };
				*fParam2 = 147.2113f;
				break;
			case 6:
				*uParam1 = { -1044.4872f, -2525.5342f, 19.079f };
				*fParam2 = 150.7597f;
				break;
			case 7:
				*uParam1 = { -1064.5002f, -2560.6528f, 19.0905f };
				*fParam2 = 150.7081f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	bVar6 = false;
	Var7 = { -509.5746f, 4938.9185f, 146.3271f };
	fVar8 = 232.0109f;
	fVar9 = __LIB_1__.func_147(Param0, Var7);
	Var10 = { 2450.6035f, 5129.2236f, 45.9722f };
	fVar11 = 241.1957f;
	fVar12 = __LIB_1__.func_147(Param0, Var10);
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true))
	{
		bVar6 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		bVar6 = true;
	}
	if (bVar6)
	{
		*uParam1 = { Var7 };
		*fParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { Var10 };
			*fParam2 = fVar11;
		}
		return 1;
	}
	bVar6 = false;
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true))
	{
		bVar6 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true))
	{
		bVar6 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true))
	{
		bVar6 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		bVar6 = true;
	}
	if (bVar6)
	{
		*uParam1 = { Var10 };
		*fParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { Var7 };
			*fParam2 = fVar8;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 6f;
	}
	if (__LIB_1__.func_148(Var0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					*uParam1 = { 29.5582f, -2553.587f, 5.0004f };
					*fParam2 = 253.9545f;
					break;
				case 1:
					*uParam1 = { -189.6824f, -2531.6492f, 5.0031f };
					*fParam2 = 0.0408f;
					break;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 412.27902f, 6481.8677f, 25.808207f, 468.9353f, 6442.7524f, 45.607273f, 24f, false, true))
	{
		*uParam1 = { 445.231f, 6476.948f, 28.4862f };
		*fParam2 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true))
	{
		*uParam1 = { 498.185f, -1288.5354f, 28.1923f };
		*fParam2 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
	{
		*uParam1 = { 504.1738f, -1421.2511f, 28.2065f };
		*fParam2 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 951.1704f, -147.00467f, 71.54326f, 1005.24493f, -98.44745f, 95.626785f, 70f, false, true))
	{
		*uParam1 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam2 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
	{
		*uParam1 = { 1118.7509f, 262.0209f, 79.8555f };
		*fParam2 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1137.0221f, 89.068535f, 71.89022f, 1010.04596f, -91.566986f, 103.45676f, 180f, false, true))
	{
		*uParam1 = { 1134.0535f, 53.1835f, 79.7553f };
		*fParam2 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 191.87312f, -723.55304f, 40.235764f, 79.586555f, -687.6684f, 29.547338f, 85f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				*uParam1 = { 182.6361f, -753.5836f, 31.8051f };
				*fParam2 = 162.0019f;
				break;
			case 1:
				*uParam1 = { 81.5318f, -675.4875f, 30.5695f };
				*fParam2 = 341.8541f;
				break;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*uParam1 = { -88.4f, -660.9f, 35f };
		*fParam2 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*uParam1 = { 61.4f, -653.2f, 32f };
		*fParam2 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.2583f, 5.7109f, 10f, false, true))
	{
		*uParam1 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam2 = 140.7302f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 400.9871f, -1659.756f, 26.916147f, 437.65662f, -1617.4789f, 48.341854f, 45f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				*uParam1 = { 413.7399f, -1608.9109f, 28.161f };
				*fParam2 = 238.2568f;
				break;
			case 1:
				*uParam1 = { 416.8107f, -1666.5142f, 28.1758f };
				*fParam2 = 144.8478f;
				break;
		}
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -1112.5862f, -2674.7668f, 12.568037f, -1215.4681f, -2854.5886f, 19.445877f, 41.25f, false, true))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				*uParam1 = { -1094.4923f, -2662.2698f, 12.6066f };
				*fParam2 = 196.0365f;
				break;
			case 1:
				*uParam1 = { -1076.7362f, -2684.0393f, 12.807f };
				*fParam2 = 211.7278f;
				break;
		}
		return 1;
	}
	return 0;
}

bool func_563(int iParam0, struct<3> Param1)//Position - 0x405E8
{
	return SYSTEM::VDIST2(Param1, __LIB_1__.func_154(iParam0)) < __LIB_1__.func_149(iParam0);
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
	if (!__LIB_6__.func_917())
	{
		return;
	}
	if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), func_7(), 120f, 1))
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
		if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), func_7(), 1000f, 1))
		{
			return 1;
		}
		if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (__LIB_1__.func_156(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (__LIB_1__.func_352(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(__LIB_1__.func_110()))
	{
		return 1;
	}
	return 0;
}

void func_579(int iParam0)//Position - 0x40DD0
{
	if (__LIB_11__.func_631(&(Local_105[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2), iParam0))
	{
	}
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
			__LIB_6__.func_915(1);
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
	if (__LIB_1__.func_145())
	{
		iVar0 = 1;
	}
	else if (__LIB_1__.func_113(0))
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
					__LIB_6__.func_915(0);
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
	if (!__LIB_1__.func_157())
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
		__LIB_6__.func_915(4);
	}
}

void func_590()//Position - 0x41042
{
	if (!__LIB_1__.func_159())
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
				__LIB_18__.func_249();
				Local_106.f_852 = { __LIB_1__.func_59() };
				__LIB_6__.func_498(&(Local_106.f_152));
				if (func_322(NETWORK::PARTICIPANT_ID(), 0))
				{
					__LIB_1__.func_157(0, 177, "AMASUV_IB_STOP" /* GXT: Stop */, &(Local_106.f_152), 0, 363);
					if (!func_542(NETWORK::PARTICIPANT_ID(), 3) && !func_49(2))
					{
						__LIB_1__.func_157(0, 176, "AMASUV_IB_HRRY" /* GXT: Hurry */, &(Local_106.f_152), 0, 363);
					}
				}
				else
				{
					__LIB_1__.func_157(0, 177, "AMASUV_IB_STRT" /* GXT: Start */, &(Local_106.f_152), 0, 363);
				}
			}
			HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			__LIB_0__.func_660(1);
			__LIB_1__.func_158(1);
			func_591(&(Local_106.f_151), &(Local_106.f_852), &(Local_106.f_152), __LIB_1__.func_57(&(Local_106.f_152)));
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

void func_591(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x41144
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		__LIB_1__.func_56(uParam2);
	}
	if (Global_1577896 < 2)
	{
		__LIB_1__.func_158(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						__LIB_0__.func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 363)
						{
							__LIB_0__.func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						__LIB_0__.func_514(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						__LIB_0__.func_478(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					__LIB_0__.func_514(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						__LIB_0__.func_514(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						__LIB_0__.func_478(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		__LIB_1__.func_55(*uParam0, uParam1);
	}
	__LIB_0__.func_707();
}

bool func_605()//Position - 0x41749
{
	return func_653(4);
}

int func_606()//Position - 0x41756
{
	if (!__LIB_1__.func_157())
	{
		return 0;
	}
	return 1;
}

void func_608()//Position - 0x4178C
{
	int iVar0;
	int iVar1;
	if (!__LIB_18__.func_249())
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
			if (__LIB_0__.func_114(iVar1))
			{
				__LIB_1__.func_147(iVar1);
			}
			if (__LIB_1__.func_158(iVar1))
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
	if (__LIB_1__.func_101(&(Local_106.f_137), iParam0))
	{
	}
}

void func_612(int iParam0)//Position - 0x4181D
{
	__LIB_0__.func_151(func_613(iParam0), -1);
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
	if (__LIB_1__.func_160(iParam0))
	{
		return 0;
	}
	return __LIB_0__.func_287(&(Local_106.f_135), iParam0);
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
	if (__LIB_1__.func_108() != 0)
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
			HUD::SET_BLIP_SPRITE(Local_106.f_146, __LIB_1__.func_161());
			__LIB_6__.func_958(&(Local_106.f_146), __LIB_1__.func_160());
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

int func_629()//Position - 0x41D57
{
	if (__LIB_1__.func_108() != 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(__LIB_1__.func_108()))
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
	if ((func_653(2) && __LIB_11__.func_631(3)) && func_653(3))
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
				if ((func_653(2) && !__LIB_0__.func_583(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1)) && func_12())
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, func_7(), __LIB_18__.func_242(), func_634(), func_633(), func_550());
					TASK::TASK_VEHICLE_PARK(0, func_7(), __LIB_18__.func_242(), func_632(), func_631(), 60f, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(func_9(), iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
				}
			}
			break;
		case 4:
			if (bVar2 && bVar3)
			{
				if ((func_653(2) && !__LIB_0__.func_583(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1)) && func_12())
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
				if (func_653(2) && !__LIB_0__.func_583(iVar1, -251125078, 1))
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
				if ((func_320(iVar0) && !__LIB_0__.func_583(iVar1, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER"), 1)) && func_12())
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
	iVar1 = __LIB_1__.func_151(1);
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
	if (__LIB_1__.func_108() == 1)
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
				if (!__LIB_11__.func_631(3))
				{
					__LIB_1__.func_114(3);
				}
			}
			if (!func_653(3))
			{
				__LIB_6__.func_915(3);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (__LIB_11__.func_631(3))
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
	if (__LIB_11__.func_631(&(Local_101.f_2), iParam0))
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
		Local_106.f_33[iVar1 /*3*/] = __LIB_0__.func_160();
		Local_106.f_33[iVar1 /*3*/].f_1 = -1;
		Local_106.f_33[iVar1 /*3*/].f_2 = 0;
		MISC::CLEAR_BIT(&(Local_106.f_130), iVar1);
		MISC::CLEAR_BIT(&(Local_106.f_132), iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_106[iVar0 /*4*/] = __LIB_0__.func_160();
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
			if (__LIB_0__.func_154(iVar2, 0, 1))
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
				if (__LIB_0__.func_581(Local_106.f_33[iVar1 /*3*/]))
				{
					Local_106[iVar0 /*4*/].f_2 = 1;
				}
				else if (__LIB_1__.func_113(Local_106.f_33[iVar1 /*3*/], 0))
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
							__LIB_1__.func_162(0);
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
								if (__LIB_1__.func_112(Local_106.f_33[iVar1 /*3*/]) && !func_322(Local_106[iVar0 /*4*/], 1))
								{
									bVar7 = false;
								}
							}
							break;
						case 2:
							if (bVar8)
							{
								if (__LIB_1__.func_112(Local_106.f_33[iVar1 /*3*/]) && !func_322(Local_106[iVar0 /*4*/], 2))
								{
									bVar8 = false;
								}
							}
							break;
					}
					if (!__LIB_11__.func_631(1))
					{
						if (func_322(Local_106[iVar0 /*4*/], 4))
						{
							__LIB_1__.func_114(1);
						}
					}
					if (!__LIB_11__.func_631(7))
					{
						if (func_322(Local_106[iVar0 /*4*/], 3))
						{
							__LIB_1__.func_114(7);
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
			if (!__LIB_11__.func_631(4))
			{
				__LIB_1__.func_114(4);
				func_635(1);
			}
		}
		else if (__LIB_11__.func_631(4))
		{
			func_645(4);
			func_635(1);
		}
		if (bVar4)
		{
			if (!__LIB_11__.func_631(8))
			{
				__LIB_1__.func_114(8);
			}
		}
		else if (__LIB_11__.func_631(8))
		{
			func_645(8);
		}
		if (bVar5)
		{
			if (!func_49(1))
			{
				__LIB_1__.func_162(1);
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
				__LIB_1__.func_162(2);
				func_635(1);
			}
		}
		else if (func_49(2))
		{
			func_650(2);
			func_635(1);
		}
		if (__LIB_1__.func_108() == 1)
		{
			switch (func_38())
			{
				case 1:
					if (!__LIB_11__.func_631(5) && bVar7)
					{
						__LIB_1__.func_114(5);
					}
					break;
				case 2:
					if (!__LIB_11__.func_631(6) && bVar8)
					{
						__LIB_1__.func_114(6);
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
	if (__LIB_11__.func_631(&(Local_101.f_4), iParam0))
	{
	}
}

bool func_653(int iParam0)//Position - 0x4271C
{
	return __LIB_0__.func_287(&(Local_106.f_133), iParam0);
}

void func_662()//Position - 0x42857
{
	if (func_310())
	{
		func_668();
	}
	if (__LIB_6__.func_937(PLAYER::PLAYER_ID()))
	{
		func_666();
	}
	if (__LIB_6__.func_939(PLAYER::PLAYER_ID()))
	{
		func_532();
	}
	if (func_530(PLAYER::PLAYER_ID()))
	{
		func_528();
	}
	if (__LIB_1__.func_146() != 0)
	{
		func_536(0);
	}
	if (__LIB_1__.func_112(PLAYER::PLAYER_ID()))
	{
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_325();
	}
	if (__LIB_1__.func_108() == 1)
	{
		if (func_653(6))
		{
			__LIB_0__.func_599();
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
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(__LIB_1__.func_108(), true);
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(func_10(), true);
		}
		func_328(2);
	}
	if ((((__LIB_1__.func_106() == 1 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10())) && !PED::IS_PED_INJURED(func_9())) && func_12()) && func_320(func_10()))
	{
		__LIB_1__.func_114(__LIB_6__.func_908(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
	}
	if (__LIB_1__.func_106() != 0)
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
		__LIB_1__.func_162(&iVar0);
	}
}

void func_665()//Position - 0x429FB
{
	int iVar0;
	iVar0 = __LIB_1__.func_108();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		__LIB_1__.func_162(&iVar0);
	}
}

void func_666()//Position - 0x42A18
{
	__LIB_1__.func_125(17);
}

void func_668()//Position - 0x42A36
{
	__LIB_1__.func_125(16);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_309 = -1;
}

int func_669(struct<21> Param0)//Position - 0x42A55
{
	__LIB_0__.func_673(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_101, 29, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_105, 49, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

