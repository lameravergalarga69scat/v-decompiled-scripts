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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			if (Global_78581 != -1)
			{
				Global_78582 = Global_78581;
				Global_2883584 = Global_78581;
				func_1103(Global_78581);
			}
			func_1100();
		}
		func_1098();
	}
	iLocal_55 = 0;
	Global_78588.f_1 = 0;
	Global_78588.f_2 = 1;
	while (true)
	{
		if (Global_78588.f_2)
		{
			iVar0 = 0;
			while (Global_78588.f_2 && iVar0 < 32)
			{
				if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/], 1))
				{
					Global_78588.f_2 = 0;
				}
				else
				{
					iVar0++;
				}
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_1_flowCompleted)
			{
				if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
				{
					if (!Global_78588)
					{
						if (!MISC::IS_AUTO_SAVE_IN_PROGRESS())
						{
							func_1();
						}
					}
				}
			}
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (Global_4535605 == -1)
				{
					iVar1 = 0;
					while (iVar1 < 63)
					{
						if (Global_112473[iVar1 /*10*/].f_4)
						{
							Global_4535605 = iVar1;
						}
						iVar1++;
					}
				}
				else if (!Global_112473[Global_4535605 /*10*/].f_4)
				{
					Global_4535605 = -1;
				}
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_1()//Position - 0x18C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	func_1067();
	iVar1 = 0;
	if (Global_78588.f_9 != -1)
	{
		iVar2 = 1;
		iLocal_54 = 0;
		iLocal_53 = Global_78588.f_9;
	}
	else if (Global_78588.f_7)
	{
		iLocal_53 = 0;
		iLocal_54 = 0;
		iVar2 = 32;
		Global_78588.f_7 = 0;
	}
	else
	{
		iVar2 = 2;
	}
	while (iVar1 < iVar2)
	{
		if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iLocal_53 /*3*/], 2))
		{
			if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iLocal_53 /*3*/], 1))
			{
				iVar0 = iLocal_53;
				func_2(iVar0, 0);
				if (Global_78588.f_6)
				{
					func_2(iVar0, 1);
					Global_78588.f_6 = 0;
				}
				iVar1++;
			}
		}
		else
		{
			iLocal_54++;
			if (iLocal_54 == 32)
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_1_flowCompleted = 1;
				Global_78588.f_1 = 0;
				return;
			}
		}
		iLocal_53++;
		if (iLocal_53 == 32)
		{
			if (!iLocal_55)
			{
				Global_78588.f_1 = 0;
			}
			iLocal_54++;
			iLocal_55 = 0;
			iLocal_54 = 0;
			iLocal_53 = 0;
		}
	}
}

void func_2(int iParam0, bool bParam1)//Position - 0x27D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
	iVar1 = iVar0;
	iVar2 = Global_78588.f_12526[iParam0 /*2*/];
	iVar3 = Global_78588.f_12526[iParam0 /*2*/].f_1;
	if (iVar0 < iVar2)
	{
		return;
	}
	if (iVar0 > iVar3)
	{
		return;
	}
	if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/], 1))
	{
		return;
	}
	if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/], 2))
	{
		iLocal_54++;
		return;
	}
	func_3(iParam0, iVar0);
	iVar0 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
	if (Global_78588.f_6825[iVar0 /*3*/] == 531432813)
	{
		func_3(iParam0, iVar0);
	}
	if (bParam1)
	{
		while (iVar1 != Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1)
		{
			iVar1 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
			func_3(iParam0, Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1);
		}
	}
}

void func_3(int iParam0, int iParam1)//Position - 0x371
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = Global_78588.f_6825[iParam1 /*3*/];
	iVar2 = Global_78588.f_6825[iParam1 /*3*/].f_2;
	switch (iVar1)
	{
		case 485486536:
			iVar0 = -2;
			break;
		case 1677774865:
			iVar0 = func_1066(iVar2);
			break;
		case -1750917831:
			iVar0 = -2;
			break;
		case 2058194871:
			iVar0 = func_1065(iVar2);
			break;
		case 1909997983:
			MISC::SET_BIT(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/]), 2);
			iVar0 = -1;
			break;
		case -1878191811:
			iVar0 = func_1064(iVar2);
			break;
		case -217347738:
			iVar0 = func_1063(iVar2);
			break;
		case 531432813:
			iVar0 = -2;
			break;
		case 1144707570:
			iVar0 = func_1062(iVar2);
			break;
		case 1984622930:
			iVar0 = func_1061(iVar2);
			break;
		case -661286798:
			iVar0 = func_1060(iVar2);
			break;
		case -1532130030:
			iVar0 = func_1059(iVar2);
			break;
		case 1174602905:
			iVar0 = func_1058(iVar2);
			break;
		case 1111033820:
			iVar0 = func_1057(iVar2);
			break;
		case 1986927063:
			iVar0 = func_1056(iVar2);
			break;
		case -1982716178:
			iVar0 = func_1055(iVar2);
			break;
		case -964850613:
			iVar0 = func_1054(iVar2);
			break;
		case -1913176419:
			iVar0 = func_1053(iVar2);
			break;
		case 1210875743:
			iVar0 = func_1052(iParam0, iVar2);
			break;
		case 427205337:
			iVar0 = func_1051(iParam0, iVar2);
			break;
		case 712880499:
			iVar0 = func_1050(iParam0, iVar2);
			break;
		case -1664179412:
			iVar0 = func_1046(iParam0, iVar2);
			break;
		case 770100737:
			iVar0 = func_1045(iVar2);
			break;
		case 939785963:
			iVar0 = func_1042(iVar2);
			break;
		case -284134628:
			iVar0 = func_1041(iVar2);
			break;
		case -2146402779:
			iVar0 = func_1040(iVar2);
			break;
		case 2110689209:
			iVar0 = func_1035(iVar2);
			break;
		case -2093459088:
			iVar0 = func_1024(iParam0, iVar2);
			break;
		case -868169264:
			iVar0 = func_1021(iVar2, iParam0);
			break;
		case 566451265:
			iVar0 = func_1020(iVar2);
			break;
		case -115271859:
			iVar0 = func_1019(iVar2);
			break;
		case 2021594245:
			iVar0 = func_1018(iVar2);
			break;
		case -806419157:
			iVar0 = func_1017(iVar2);
			break;
		case -1110793538:
			iVar0 = func_1011(iVar2);
			break;
		case 2088328892:
			iVar0 = func_1003(iVar2);
			break;
		case -1535636242:
			iVar0 = func_1002(iVar2);
			break;
		default:
			if (!func_5(iVar1, iVar2, iParam0, &iVar0))
			{
				iVar0 = -2;
			}
			break;
	}
	if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/], 2))
	{
		if (iVar0 != -1)
		{
			Global_78588.f_1 = 1;
			iLocal_55 = 1;
		}
		func_4(iParam0, iVar0);
	}
}

void func_4(int iParam0, int iParam1)//Position - 0x656
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	switch (iParam0)
	{
		case -1:
		case 32:
			return;
		default:
	}
	if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/], 1))
	{
		return;
	}
	if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/], 2))
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 == -2)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1++;
		return;
	}
	iVar0 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
	iVar1 = Global_78588.f_12526[iParam0 /*2*/];
	iVar2 = Global_78588.f_12526[iParam0 /*2*/].f_1;
	if (iVar0 < iVar1)
	{
		return;
	}
	if (iVar0 > iVar2)
	{
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2)
	{
		if (Global_78588.f_6825[iVar3 /*3*/] == 531432813)
		{
			iVar4 = Global_78588.f_6825[iVar3 /*3*/].f_2;
			iVar5 = Global_78588.f_109[iVar4 /*4*/];
			if (iVar5 == iParam1)
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x774
{
	switch (iParam0)
	{
		case 744218195:
			*iParam3 = func_996(iParam1);
			break;
		case 749713072:
			*iParam3 = func_995(iParam1);
			break;
		case 139009950:
			*iParam3 = func_986(iParam1);
			break;
		case 1389104680:
			*iParam3 = func_985(iParam1);
			break;
		case 1641341968:
			*iParam3 = func_982(iParam1);
			break;
		case -1575504933:
			*iParam3 = func_981(iParam1);
			break;
		case 1370985682:
			*iParam3 = func_979(iParam1);
			break;
		case -1034402456:
			*iParam3 = func_977(iParam1);
			break;
		case 246500489:
			*iParam3 = func_975(iParam1);
			break;
		case 1289835772:
			*iParam3 = func_973(iParam1);
			break;
		case -1453576086:
			*iParam3 = func_971(iParam1);
			break;
		case 842516771:
			*iParam3 = func_969(iParam1);
			break;
		case -546916353:
			*iParam3 = func_961(iParam1);
			break;
		case 322211806:
			*iParam3 = func_958(iParam1);
			break;
		case -656046692:
			*iParam3 = func_947(iParam1);
			break;
		case -885022960:
			*iParam3 = func_931(iParam1);
			break;
		case 798013335:
			*iParam3 = func_931(iParam1);
			break;
		case -1030591046:
			*iParam3 = func_929(iParam1);
			break;
		case 569565703:
			*iParam3 = func_920(iParam1);
			break;
		case -635831521:
			*iParam3 = func_913(iParam1);
			break;
		case -1785731347:
			*iParam3 = func_912(iParam1);
			break;
		case -1421664484:
			*iParam3 = func_911(iParam1);
			break;
		case -644339536:
			*iParam3 = func_910(iParam1);
			break;
		case -159886710:
			*iParam3 = func_908();
			break;
		case 1822409727:
			*iParam3 = func_907(iParam1);
			break;
		case -436729813:
			*iParam3 = func_906(iParam1);
			break;
		case 213552929:
			*iParam3 = func_905(iParam1);
			break;
		case 215526917:
			*iParam3 = func_904(iParam1);
			break;
		case -1597354430:
			*iParam3 = func_902(iParam1);
			break;
		case -49496173:
			*iParam3 = func_844(iParam1);
			break;
		case -1334818538:
			*iParam3 = func_823(iParam1);
			break;
		case -69665631:
			*iParam3 = func_819(iParam1);
			break;
		case -251919538:
			*iParam3 = func_811(iParam1);
			break;
		case -319289499:
			*iParam3 = func_810(iParam1);
			break;
		case 424223666:
			*iParam3 = func_809(iParam1);
			break;
		case 952363713:
			*iParam3 = func_808(iParam1);
			break;
		case 1572323470:
			*iParam3 = func_807(iParam1);
			break;
		case 828625388:
			*iParam3 = func_804(iParam1);
			break;
		case 1542529269:
			*iParam3 = func_803(iParam1);
			break;
		case -1283556585:
			*iParam3 = func_776(iParam1);
			break;
		case 553813353:
			*iParam3 = func_767(iParam1);
			break;
		case 889972124:
			*iParam3 = func_319(iParam2, iParam1);
			break;
		case -2093560018:
			*iParam3 = func_317(iParam1);
			break;
		case -26112892:
			*iParam3 = func_299(iParam1);
			break;
		case 2014563601:
			Global_78588.f_6 = 1;
			*iParam3 = -2;
			break;
		case -1309218325:
			*iParam3 = func_254(iParam1);
			break;
		case -1730578455:
			*iParam3 = func_114(iParam1);
			break;
		case 1845155857:
			*iParam3 = func_30(iParam1);
			break;
		case 1883604486:
			*iParam3 = func_20(iParam1);
			break;
		case 2048332261:
			*iParam3 = func_8(iParam1, iParam2);
			break;
		case 918415331:
			*iParam3 = func_6(iParam2);
			break;
		default:
			return 0;
			break;
	}
	return 1;
}

int func_6(int iParam0)//Position - 0xB27
{
	func_7(iParam0);
	return -2;
}

void func_7(int iParam0)//Position - 0xB38
{
	int iVar0;
	int iVar1;
	if (iParam0 != -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_113386.f_10016.f_20)
		{
			if (Global_113386.f_10016[iVar0] == iParam0)
			{
				if (Global_113386.f_10016.f_20 > 1)
				{
					iVar1 = iVar0;
					while (iVar1 <= (Global_113386.f_10016.f_20 - 2))
					{
						Global_113386.f_10016[iVar1] = Global_113386.f_10016[iVar1 + 1];
						Global_113386.f_10016.f_4[iVar1] = Global_113386.f_10016.f_4[iVar1 + 1];
						Global_113386.f_10016.f_8[iVar1] = Global_113386.f_10016.f_8[iVar1 + 1];
						Global_113386.f_10016.f_16[iVar1] = Global_113386.f_10016.f_16[iVar1 + 1];
						Global_113386.f_10016.f_12[iVar1] = Global_113386.f_10016.f_12[iVar1 + 1];
						iVar1++;
					}
				}
				if (Global_113386.f_10016.f_20 > 0)
				{
					Global_113386.f_10016[(Global_113386.f_10016.f_20 - 1)] = -1;
					Global_113386.f_10016.f_4[(Global_113386.f_10016.f_20 - 1)] = -1;
					Global_113386.f_10016.f_8[(Global_113386.f_10016.f_20 - 1)] = 0;
					Global_113386.f_10016.f_16[(Global_113386.f_10016.f_20 - 1)] = 0;
					Global_113386.f_10016.f_12[(Global_113386.f_10016.f_20 - 1)] = -1;
					Global_113386.f_10016.f_20 = (Global_113386.f_10016.f_20 - 1);
				}
				iVar0 = (iVar0 - 1);
			}
			iVar0++;
		}
	}
}

int func_8(int iParam0, int iParam1)//Position - 0xCBD
{
	var uVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_78588.f_3590[iParam0 /*2*/];
	iVar1 = 0;
	if (Global_78588.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		iVar1 = 1;
	}
	func_9(iParam1, uVar0, iVar1);
	return -2;
}

void func_9(int iParam0, var uParam1, int iParam2)//Position - 0xD02
{
	int iVar0;
	if (Global_113386.f_10016.f_20 < 3)
	{
		if (iParam0 != -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_113386.f_10016.f_20)
			{
				if (Global_113386.f_10016[iVar0] == iParam0)
				{
					Global_113386.f_10016.f_4[iVar0] = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
					Global_113386.f_10016.f_8[iVar0] = __LIB_31__::func_774(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1);
					Global_113386.f_10016.f_12[iVar0] = uParam1;
					Global_113386.f_10016.f_16[iVar0] = iParam2;
					return;
				}
				iVar0++;
			}
			Global_113386.f_10016[Global_113386.f_10016.f_20] = iParam0;
			Global_113386.f_10016.f_4[Global_113386.f_10016.f_20] = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1;
			Global_113386.f_10016.f_8[Global_113386.f_10016.f_20] = __LIB_31__::func_774(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iParam0 /*3*/].f_1);
			Global_113386.f_10016.f_12[Global_113386.f_10016.f_20] = uParam1;
			Global_113386.f_10016.f_16[Global_113386.f_10016.f_20] = iParam2;
			Global_113386.f_10016.f_20++;
		}
	}
}

int func_20(int iParam0)//Position - 0x14A7
{
	bool bVar0;
	if (Global_78579)
	{
		return -1;
	}
	bVar0 = iParam0;
	if (func_24(bVar0))
	{
		return -2;
	}
	Global_113386.f_2363.f_4864 = bVar0;
	func_21(bVar0, 1);
	return -2;
}

int func_21(bool bParam0, bool bParam1)//Position - 0x14E4
{
	if (!__LIB_0__::func_201() && __LIB_0__::func_374(bParam0))
	{
		if (!func_24(bParam0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_97919.f_45 = bParam0;
			Global_97919.f_46 = 0;
			Global_97919.f_44 = 1;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool func_24(bool bParam0)//Position - 0x157F
{
	__LIB_17__::func_256();
	return bParam0 == Global_113386.f_2363.f_539.f_4321;
}

int func_30(int iParam0)//Position - 0x1717
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	bVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (!__LIB_0__::func_374(bVar0))
	{
		return -2;
	}
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	iVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	__LIB_16__::func_846(__LIB_16__::func_512(bVar0), iVar2, iVar1, 1);
	func_31(__LIB_16__::func_512(bVar0), iVar2, iVar1, 1, 1);
	return -2;
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1787
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_31(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_16__::func_846(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_31(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_16__::func_846(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_31(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_31(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x1B6D8
{
	int iVar0;
	bool bVar1;
	struct<60> Var2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	bVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	if (Global_78588.f_109[iParam0 /*4*/].f_2 == 1)
	{
		Var2.f_9 = 49;
		Var2.f_59 = 2;
		func_115(iVar0, bVar1, &Var2, -1);
	}
	return -2;
}

void func_115(int iParam0, bool bParam1, var uParam2, int iParam3)//Position - 0x1B734
{
	int iVar0;
	struct<78> Var1;
	if (iParam3 != -1)
	{
		__LIB_0__::func_716(293, 0, 0);
	}
	iVar0 = bParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return;
	}
	MISC::SET_BIT(&(Global_113386.f_25182[iParam0]), iVar0);
	if (bParam1 == 0)
	{
		Global_113386.f_25182.f_313[iParam0] = Global_77051;
	}
	else if (bParam1 == 1)
	{
		Global_113386.f_25182.f_626[iParam0] = Global_77051;
	}
	else
	{
		bParam1 = 2;
		Global_113386.f_25182.f_939[iParam0] = Global_77051;
	}
	__LIB_32__::func_131(iParam0);
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	Var1.f_78 = -1;
	Var1.f_79 = -1;
	Var1.f_96 = -1;
	Var1.f_97 = 1;
	Var1.f_99 = 132;
	Var1.f_100 = -1;
	Var1 = { *uParam2 };
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
		case 128:
		case 89:
		case 103:
		case 122:
		case 123:
		case 124:
		case 132:
		case 133:
		case 134:
		case 135:
		case 125:
		case 138:
		case 139:
		case 105:
		case 155:
		case 106:
		case 108:
		case 127:
		case 93:
		case 99:
		case 143:
		case 145:
		case 100:
		case 147:
		case 101:
		case 149:
		case 146:
		case 144:
		case 167:
		case 168:
		case 169:
		case 170:
		case 161:
		case 202:
		case 204:
		case 205:
		case 203:
		case 206:
		case 207:
		case 208:
		case 209:
		case 148:
		case 97:
		case 98:
		case 112:
		case 115:
		case 165:
		case 166:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 225:
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_CROUCHED"), 10, 0);
			switch (bParam1)
			{
				case 0:
					func_117(bParam1, func_244(21), iParam3, iParam0, &Var1);
					break;
				case 1:
					func_117(bParam1, func_244(22), iParam3, iParam0, &Var1);
					break;
				case 2:
					func_117(bParam1, func_244(23), iParam3, iParam0, &Var1);
					break;
			}
			break;
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 199:
		case 113:
		case 162:
		case 163:
		case 215:
		case 257:
		case 253:
			switch (bParam1)
			{
				case 0:
					func_117(bParam1, 12, iParam3, iParam0, &Var1);
					break;
				case 1:
					func_117(bParam1, 13, iParam3, iParam0, &Var1);
					break;
				case 2:
					func_117(bParam1, 14, iParam3, iParam0, &Var1);
					break;
			}
			break;
		case 20:
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_CROUCHED"), 30, 0);
		case 15:
		case 16:
		case 19:
		case 164:
		case 217:
		case 254:
			switch (bParam1)
			{
				case 0:
					func_117(bParam1, 18, iParam3, iParam0, &Var1);
					break;
				case 1:
					func_117(bParam1, 19, iParam3, iParam0, &Var1);
					break;
				case 2:
					func_117(bParam1, 20, iParam3, iParam0, &Var1);
					break;
			}
			break;
		case 17:
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_CROUCHED"), 20, 0);
		case 18:
		case 22:
		case 21:
		case 200:
			switch (bParam1)
			{
				case 0:
					func_117(bParam1, 12, iParam3, iParam0, &Var1);
					break;
				case 1:
					func_117(bParam1, 13, iParam3, iParam0, &Var1);
					break;
				case 2:
					func_117(bParam1, 14, iParam3, iParam0, &Var1);
					break;
			}
			break;
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
		case 201:
		case 102:
		case 173:
		case 224:
		case 245:
		case 258:
		case 533:
		case 525:
			switch (bParam1)
			{
				case 0:
					func_117(bParam1, 15, iParam3, iParam0, &Var1);
					break;
				case 1:
					func_117(bParam1, 16, iParam3, iParam0, &Var1);
					break;
				case 2:
					func_117(bParam1, 17, iParam3, iParam0, &Var1);
					break;
			}
			break;
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			switch (bParam1)
			{
				case 0:
					func_117(bParam1, func_244(21), iParam3, iParam0, &Var1);
					break;
				case 1:
					func_117(bParam1, func_244(22), iParam3, iParam0, &Var1);
					break;
				case 2:
					func_117(bParam1, func_244(23), iParam3, iParam0, &Var1);
					break;
			}
			break;
		default:
			switch (__LIB_17__::func_872(iParam0))
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							func_117(bParam1, func_244(21), iParam3, iParam0, &Var1);
							break;
						case 1:
							func_117(bParam1, func_244(22), iParam3, iParam0, &Var1);
							break;
						case 2:
							func_117(bParam1, func_244(23), iParam3, iParam0, &Var1);
							break;
					}
					break;
				case 1:
					switch (bParam1)
					{
						case 0:
							func_117(bParam1, 12, iParam3, iParam0, &Var1);
							break;
						case 1:
							func_117(bParam1, 13, iParam3, iParam0, &Var1);
							break;
						case 2:
							func_117(bParam1, 14, iParam3, iParam0, &Var1);
							break;
					}
					break;
				case 2:
					switch (bParam1)
					{
						case 0:
							func_117(bParam1, 15, iParam3, iParam0, &Var1);
							break;
						case 1:
							func_117(bParam1, 16, iParam3, iParam0, &Var1);
							break;
						case 2:
							func_117(bParam1, 17, iParam3, iParam0, &Var1);
							break;
					}
					break;
				case 3:
					switch (bParam1)
					{
						case 0:
							func_117(bParam1, 18, iParam3, iParam0, &Var1);
							break;
						case 1:
							func_117(bParam1, 19, iParam3, iParam0, &Var1);
							break;
						case 2:
							func_117(bParam1, 20, iParam3, iParam0, &Var1);
							break;
					}
					break;
			}
			break;
	}
}

void func_117(bool bParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x1C12F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_374(bParam0))
	{
		Global_113386.f_32749.f_1982[bParam0 /*939*/][iParam3] = iParam2;
		Global_113386.f_32749.f_1982[bParam0 /*939*/].f_313[iParam3] = iParam1;
		if (iParam2 == -1)
		{
			bVar0 = true;
			if (__LIB_17__::func_167(iParam1))
			{
				if (__LIB_16__::func_31(&(Global_77137.f_555[0 /*21*/]), iParam1) && Global_77137.f_555[0 /*21*/].f_4 != 0)
				{
					bVar0 = false;
				}
			}
			if (bVar0)
			{
				__LIB_0__::func_14(uParam4);
				func_141(iParam3, uParam4, 0, bParam0, -1, -1);
				MISC::SET_BIT(&(uParam4->f_77), 14);
				__LIB_17__::func_92(iParam1, uParam4, 0f, 0f, 0f, -1f, 145);
			}
		}
		else
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
			iVar3 = __LIB_39__::func_706();
			if (((((((((((iParam1 == 21 || iParam1 == 22) || iParam1 == 23) || iParam1 == 26) || iParam1 == 29) || iParam1 == 32) || iParam1 == 27) || iParam1 == 30) || iParam1 == 33) || iParam1 == 28) || iParam1 == 31) || iParam1 == 34)
			{
				__LIB_0__::func_14(uParam4);
				func_141(iParam3, uParam4, 0, bParam0, -1, -1);
				MISC::SET_BIT(&(uParam4->f_77), 14);
				__LIB_17__::func_92(iParam1, uParam4, 0f, 0f, 0f, -1f, 145);
				MISC::CLEAR_BIT(&(Global_113386.f_25182[iParam3]), bParam0);
			}
			else
			{
				__LIB_42__::func_683(&iVar3, iVar1, iVar2, 5, 0, 0, 0);
			}
			Global_113386.f_32749.f_1982[bParam0 /*939*/].f_626[iParam3] = iVar3;
		}
	}
}

void func_141(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x1CABE
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	uParam1->f_66 = __LIB_1__::func_344(iParam0, iParam4);
	if (uParam1->f_66 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (bParam3 == 2 && uParam1->f_66 == joaat("frogger"))
	{
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	__LIB_7__::func_144(iParam0, &(uParam1->f_77));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (__LIB_1__::func_185(iParam0))
	{
		if (Global_77052)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	if (iParam0 == 447)
	{
		if (iParam4 == -1)
		{
			uParam1->f_9[48] = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_9[48] = 11;
		}
	}
	else if (__LIB_1__::func_771(uParam1->f_66))
	{
		uParam1->f_9[48] = 1;
	}
	uParam1->f_99 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_99 = 4;
	}
	uParam1->f_9[42] = 0;
	switch (uParam1->f_66)
	{
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			uParam1->f_9[42] = 4;
			break;
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
			uParam1->f_9[42] = 4;
			break;
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
			uParam1->f_9[42] = 1;
			break;
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
			uParam1->f_9[42] = 1;
			break;
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			uParam1->f_9[42] = 4;
			break;
		default:
			if (__LIB_2__::func_628(uParam1->f_66))
			{
				uParam1->f_97 = 3;
				uParam1->f_99 = 111;
			}
			break;
	}
	uParam1->f_9[41] = 0;
	if (iParam0 == 449)
	{
		uParam1->f_9[41] = 1;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263)
	{
		if (Global_77052)
		{
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (__LIB_0__::func_810(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
	{
		uParam1->f_80 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_77051;
	}
	else if (bParam3 == 0)
	{
		iVar1 = Global_113386.f_25182.f_313[iParam0];
	}
	else if (bParam3 == 1)
	{
		iVar1 = Global_113386.f_25182.f_626[iParam0];
	}
	else if (bParam3 == 2)
	{
		iVar1 = Global_113386.f_25182.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 2:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 3:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 4:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 5:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 6:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 7:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 8:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 9:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 10:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 11:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 12:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 13:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 14:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 15:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 16:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 17:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 18:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 19:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 20:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 21:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 22:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 23:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 24:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			case 25:
				__LIB_8__::func_394(__LIB_31__::func_962(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
				break;
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 1;
				break;
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 2;
				break;
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 3;
				break;
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 8;
				break;
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 4;
				break;
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 5;
				break;
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 7;
				break;
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = 6;
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (__LIB_8__::func_392(iParam0))
				{
					if (iParam0 != 164)
					{
						if (__LIB_9__::func_100(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (__LIB_32__::func_138(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_67 = 0;
						}
					}
					else
					{
						uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
					}
				}
				else if (__LIB_1__::func_185(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_97 = 93;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_9__::func_99(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 89;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else if (__LIB_9__::func_98(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_67 = -1;
				}
				break;
			case 2:
				if (__LIB_8__::func_392(iParam0))
				{
					if (iParam0 != 164)
					{
						if (__LIB_9__::func_100(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (__LIB_32__::func_138(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_97 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_99 = 134;
							}
							else
							{
								uParam1->f_99 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_67 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_67 = __LIB_9__::func_484(__LIB_31__::func_962(iParam0, iVar1));
					}
				}
				else if (__LIB_1__::func_185(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_97 = 106;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_97 = 108;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_9__::func_99(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 67;
					uParam1->f_67 = -1;
				}
				else if (__LIB_9__::func_98(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_67 = -1;
				}
				break;
			case 3:
				if (__LIB_8__::func_392(iParam0))
				{
					if (__LIB_9__::func_100(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (__LIB_32__::func_138(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_67 = 2;
					}
				}
				else if (__LIB_1__::func_185(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_97 = 22;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_9__::func_99(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 28;
					uParam1->f_67 = -1;
				}
				else if (__LIB_9__::func_98(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_67 = -1;
				}
				break;
			case 4:
				if (__LIB_8__::func_392(iParam0))
				{
					if (__LIB_9__::func_100(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (__LIB_32__::func_138(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_97 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_99 = 134;
						}
						else
						{
							uParam1->f_99 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_67 = 3;
					}
				}
				else if (__LIB_1__::func_185(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_97 = 101;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_97 = 48;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_9__::func_99(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else if (__LIB_9__::func_98(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (__LIB_0__::func_293(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar15, "ORANGE" /* GXT: Orange */) && iVar16 == 1)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_67 = -1;
				}
				break;
			case 5:
				if (__LIB_1__::func_185(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_97 = 98;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_97 = 99;
						uParam1->f_67 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (__LIB_9__::func_99(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 41;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_67 = -1;
				}
				else if (__LIB_9__::func_98(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (__LIB_0__::func_293(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (MISC::ARE_STRINGS_EQUAL(&sVar20, "LIME_GREEN" /* GXT: Lime Green */) && iVar21 == 1)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = -99;
						}
						iVar19++;
					}
					uParam1->f_67 = -1;
				}
				break;
			case 6:
				if (__LIB_1__::func_185(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_97 = 5;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_97 = 24;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_9__::func_99(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else if (__LIB_9__::func_98(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_67 = -1;
				}
				break;
			case 7:
				if (uParam1->f_66 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else if (__LIB_1__::func_185(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_97 = 1;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_97 = 0;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_9__::func_99(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 81;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_97 = 0;
					uParam1->f_67 = -1;
				}
				else if (__LIB_9__::func_98(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_67 = -1;
				}
				break;
			case 8:
				if (__LIB_1__::func_185(iParam0))
				{
					if (!Global_77052)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_97 = 7;
						uParam1->f_67 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_97 = 78;
						uParam1->f_67 = -1;
					}
				}
				else if (__LIB_9__::func_99(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_97 = 8;
					uParam1->f_99 = 27;
					uParam1->f_67 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else if (__LIB_9__::func_98(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_67 = -1;
				}
				break;
			default:
				break;
			}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_67 = -1;
				break;
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_67 = -1;
				break;
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_67 = -1;
				break;
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_67 = -1;
				break;
			case 210:
				if (iParam5 != 29)
				{
					uParam1->f_5 = 28;
					uParam1->f_6 = 0;
					uParam1->f_7 = 14;
					uParam1->f_8 = 156;
					uParam1->f_67 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 66;
					uParam1->f_7 = 63;
					uParam1->f_8 = 156;
					uParam1->f_97 = 1;
					uParam1->f_99 = 132;
				}
				break;
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_67 = -1;
				break;
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_67 = -1;
				break;
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
				break;
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_97 = 0;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
				break;
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_97 = 111;
				uParam1->f_99 = 0;
				uParam1->f_67 = -1;
				break;
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_67 = -1;
				break;
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				uParam1->f_67 = -1;
				break;
			case 425:
				uParam1->f_5 = 153;
				uParam1->f_6 = 159;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 428:
				uParam1->f_5 = 12;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 431:
				uParam1->f_5 = 153;
				uParam1->f_6 = 154;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 434:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 437:
				uParam1->f_5 = 13;
				uParam1->f_6 = 131;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 426:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 429:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 432:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 435:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 438:
				uParam1->f_5 = 107;
				uParam1->f_6 = 159;
				uParam1->f_7 = 107;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 427:
				uParam1->f_5 = 131;
				uParam1->f_6 = 135;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 430:
				uParam1->f_5 = 131;
				uParam1->f_6 = 39;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 433:
				uParam1->f_5 = 87;
				uParam1->f_6 = 138;
				uParam1->f_7 = 7;
				uParam1->f_8 = 135;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 436:
				uParam1->f_5 = 12;
				uParam1->f_6 = 55;
				uParam1->f_8 = 160;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 439:
				uParam1->f_5 = 131;
				uParam1->f_6 = 55;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 211:
				uParam1->f_5 = 30;
				uParam1->f_6 = 30;
				uParam1->f_7 = 30;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 145:
				uParam1->f_5 = 68;
				uParam1->f_6 = 2;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 122:
				uParam1->f_5 = 111;
				uParam1->f_6 = 64;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 440:
				uParam1->f_5 = 6;
				uParam1->f_6 = 120;
				uParam1->f_7 = 7;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			case 389:
				uParam1->f_5 = 29;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 5;
				uParam1->f_97 = 1;
				uParam1->f_99 = 132;
				break;
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_97 = 0;
		uParam1->f_99 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_66 = joaat("phantom3");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_66 = joaat("hauler2");
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 0;
			uParam1->f_99 = 0;
			uParam1->f_67 = -1;
		}
	}
	if (__LIB_1__::func_587(uParam1->f_66))
	{
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_66 = __LIB_4__::func_546();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_66 = __LIB_1__::func_839();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_69 = 6;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 1;
		uParam1->f_63 = 1;
		uParam1->f_64 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
	}
	if (iParam0 == 487)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 144;
		uParam1->f_7 = 105;
		uParam1->f_8 = 144;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 485)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	if (iParam0 == 486)
	{
		uParam1->f_5 = 102;
		uParam1->f_6 = 102;
		uParam1->f_7 = 105;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
	}
	switch (iParam0)
	{
		case 518:
			uParam1->f_66 = __LIB_0__::func_981();
			uParam1->f_5 = 0;
			uParam1->f_6 = 15;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			break;
		case 529:
			uParam1->f_5 = 27;
			uParam1->f_6 = 27;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 532:
			uParam1->f_5 = 155;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 155;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 531:
			uParam1->f_5 = 155;
			uParam1->f_6 = 13;
			uParam1->f_7 = 6;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 528:
			uParam1->f_5 = 154;
			uParam1->f_6 = 154;
			uParam1->f_7 = 0;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 526:
			uParam1->f_5 = 151;
			uParam1->f_6 = 154;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 530:
			uParam1->f_5 = 154;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 527:
			uParam1->f_5 = 152;
			uParam1->f_6 = 46;
			uParam1->f_7 = 52;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 525:
			uParam1->f_5 = 152;
			uParam1->f_6 = 46;
			uParam1->f_7 = 52;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			MISC::SET_BIT(&(uParam1->f_77), 3);
			break;
		case 523:
			uParam1->f_5 = 131;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_9[9] = 4;
			break;
		case 524:
			uParam1->f_5 = 12;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			break;
		case 520:
			uParam1->f_9[24] = 3;
			break;
	}
	if (uParam1->f_67 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_67 = 1;
	}
}

int func_244(int iParam0)//Position - 0x2A32A
{
	__LIB_16__::func_31(&(Global_77137.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!__LIB_17__::func_167(26))
			{
				return 26;
			}
			if (!__LIB_17__::func_167(29))
			{
				return 29;
			}
			if (!__LIB_17__::func_167(32))
			{
				return 32;
			}
			break;
		case 22:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!__LIB_17__::func_167(27))
			{
				return 27;
			}
			if (!__LIB_17__::func_167(30))
			{
				return 30;
			}
			if (!__LIB_17__::func_167(33))
			{
				return 33;
			}
			break;
		case 23:
			if (Global_77137.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!__LIB_17__::func_167(28))
			{
				return 28;
			}
			if (!__LIB_17__::func_167(31))
			{
				return 31;
			}
			if (!__LIB_17__::func_167(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

int func_254(int iParam0)//Position - 0x2ACFF
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	uVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	func_255(iVar0, &uVar3);
	Call_Loc(uVar3);
	if (StackVal)
	{
		return uVar1;
	}
	return uVar2;
}

void func_255(int iParam0, var uParam1)//Position - 0x2AD50
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 178649/*__LIB_0__::func_109*/;
			break;
		case 1:
			*uParam1 = 178446/*func_296*/;
			break;
		case 2:
			*uParam1 = 178397/*func_295*/;
			break;
		case 3:
			*uParam1 = 178363/*func_294*/;
			break;
		case 4:
			*uParam1 = 178213/*func_292*/;
			break;
		case 5:
			*uParam1 = 178190/*__LIB_17__::func_896*/;
			break;
		case 6:
			*uParam1 = 178166/*__LIB_17__::func_895*/;
			break;
		case 7:
			*uParam1 = 177928/*__LIB_17__::func_894*/;
			break;
		case 8:
			*uParam1 = 177820/*__LIB_17__::func_893*/;
			break;
		case 9:
			*uParam1 = 177796/*__LIB_17__::func_892*/;
			break;
		case 10:
			*uParam1 = 177773/*__LIB_17__::func_891*/;
			break;
		case 11:
			*uParam1 = 177749/*__LIB_17__::func_890*/;
			break;
		case 12:
			*uParam1 = 177607/*__LIB_17__::func_908*/;
			break;
		case 13:
			*uParam1 = 177584/*__LIB_17__::func_889*/;
			break;
		case 14:
			*uParam1 = 177560/*__LIB_17__::func_888*/;
			break;
		case 16:
			*uParam1 = 177528/*__LIB_17__::func_887*/;
			break;
		case 17:
			*uParam1 = 177506/*__LIB_17__::func_886*/;
			break;
		case 18:
			*uParam1 = 177340/*__LIB_17__::func_907*/;
			break;
		case 19:
			*uParam1 = 177282/*__LIB_17__::func_906*/;
			break;
		case 20:
			*uParam1 = 177261/*__LIB_17__::func_885*/;
			break;
		case 21:
			*uParam1 = 177203/*__LIB_17__::func_884*/;
			break;
		case 22:
			*uParam1 = 177143/*__LIB_17__::func_883*/;
			break;
		case 23:
			*uParam1 = 176157/*func_262*/;
			break;
		case 24:
			*uParam1 = 176130/*__LIB_17__::func_882*/;
			break;
		case 25:
			*uParam1 = 176103/*__LIB_17__::func_881*/;
			break;
		case 26:
			*uParam1 = 176076/*__LIB_17__::func_880*/;
			break;
		case 27:
			*uParam1 = 176027/*__LIB_17__::func_879*/;
			break;
		case 28:
			*uParam1 = 175978/*__LIB_17__::func_878*/;
			break;
		case 29:
			*uParam1 = 175929/*__LIB_17__::func_877*/;
			break;
		default:
			*uParam1 = 178649/*__LIB_0__::func_109*/;
			break;
	}
}

int func_262()//Position - 0x2B01D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_113386.f_18103.f_395))
	{
		return 0;
	}
	iVar0 = (4 - 3);
	if (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96275[iVar0]))
		{
			return 0;
		}
	}
	iVar1 = 14;
	iVar2 = 5;
	iVar3 = CLOCK::GET_CLOCK_HOURS();
	if (iVar1 < iVar2)
	{
		if (iVar3 < iVar1 || iVar3 >= iVar2)
		{
			return 0;
		}
	}
	else if (iVar3 < iVar1 && iVar3 >= iVar2)
	{
		return 0;
	}
	iVar4 = __LIB_13__::func_95(__LIB_38__::func_743(__LIB_17__::func_341()), 4);
	if (iVar4 >= 9)
	{
		return 0;
	}
	else
	{
		if (Global_96297[iVar4 /*2*/] != 0)
		{
			return 0;
		}
		if (Global_113386.f_18103.f_175[iVar4 /*19*/].f_2 != 0)
		{
			return 0;
		}
		if (__LIB_0__::func_702(&(Global_113386.f_18103.f_175[iVar4 /*19*/].f_5)) && __LIB_3__::func_108(&(Global_113386.f_18103.f_175[iVar4 /*19*/].f_5)) < (5f * 60f))
		{
			return 0;
		}
	}
	return 1;
}

int func_292()//Position - 0x2B825
{
	if (func_293(0))
	{
		return 0;
	}
	return 1;
}

int func_293(bool bParam0)//Position - 0x2B83A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam0 >= __LIB_0__::func_684())
	{
		return 0;
	}
	iVar0 = __LIB_38__::func_743(bParam0);
	if (iVar0 != 7)
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_113386.f_18103.f_175[iVar1 /*19*/] == iVar0 || Global_113386.f_18103.f_175[iVar1 /*19*/].f_1 == iVar0)
			{
				iVar2 = Global_96297[iVar1 /*2*/];
				if (iVar2 == 3 || iVar2 == 4)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_294()//Position - 0x2B8BB
{
	if (func_293(0))
	{
		return 0;
	}
	if (__LIB_11__::func_283(49))
	{
		return 0;
	}
	return 1;
}

int func_295()//Position - 0x2B8DD
{
	int iVar0;
	if (func_293(0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 < 6 || iVar0 > 14)
	{
		return 0;
	}
	return 1;
}

int func_296()//Position - 0x2B90E
{
	if (Global_95443 == -1)
	{
		Global_95443 = MISC::GET_GAME_TIMER();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_297(PLAYER::PLAYER_PED_ID(), 11, 0))
		{
			Global_95443 = -1;
			return 1;
		}
		if ((MISC::GET_GAME_TIMER() - Global_95443) > 240000)
		{
			if (!func_297(PLAYER::PLAYER_PED_ID(), 10, 0))
			{
				Global_95443 = -1;
				return 1;
			}
		}
	}
	return 0;
}

int func_297(int iParam0, int iParam1, float fParam2)//Position - 0x2B973
{
	struct<5> Var0;
	float fVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { Global_43053[iParam1 /*5*/] };
		fVar1 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar1 = fParam2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var0, true) < fVar1)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_297(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

int func_299(int iParam0)//Position - 0x2B9E2
{
	var uVar0;
	if (iParam0 == 0)
	{
		__LIB_13__::func_782(7, 0, 0);
	}
	else if (iParam0 == 1)
	{
		if (__LIB_17__::func_341() == 1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Global_113386.f_2363.f_4863 = func_301(PLAYER::PLAYER_PED_ID());
		}
		else
		{
			uVar0 = { __LIB_0__::func_459(joaat("Player_One"), 0) };
			Global_113386.f_2363.f_4863 = func_300(uVar0[3], uVar0[4]);
		}
		__LIB_13__::func_782(7, 0, 1);
	}
	return -2;
}

int func_300(int iParam0, int iParam1)//Position - 0x2BA60
{
	return (iParam0 + iParam1 * 100);
}

int func_301(int iParam0)//Position - 0x2BA6F
{
	int iVar0;
	int iVar1;
	iVar0 = func_302(iParam0, 3, -1);
	iVar1 = func_302(iParam0, 4, -1);
	return (iVar0 + iVar1 * 100);
}

int func_302(int iParam0, int iParam1, int iParam2)//Position - 0x2BA92
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
				if (func_309(iParam0, iParam1, iVar0))
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
				if (func_309(iParam0, iParam1, iVar1))
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

int func_309(int iParam0, int iParam1, int iParam2)//Position - 0x2BEF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_309(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_309(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_309(iParam0, 14, iVar4))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = __LIB_0__::func_350(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_309(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_317(int iParam0)//Position - 0x2D31A
{
	bool bVar0;
	if (iParam0 == 0)
	{
		bVar0 = false;
	}
	else if (iParam0 == 1)
	{
		bVar0 = true;
	}
	__LIB_37__::func_993(bVar0);
	return -2;
}

int func_319(int iParam0, int iParam1)//Position - 0x2D382
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = __LIB_17__::func_900(iParam1);
	iVar1 = Global_78588.f_109[iParam1 /*4*/];
	iVar2 = Global_91229[iVar1 /*34*/].f_6;
	if (__LIB_0__::func_134())
	{
		return -1;
	}
	else if (Global_100441.f_1 == iParam1)
	{
		if (Global_100441 == 11)
		{
			func_1103(iVar1);
			func_744(iParam1, iVar0, 1);
			return Global_78588.f_109[iParam1 /*4*/].f_2;
		}
	}
	if (iVar0 == -1)
	{
		if (!Global_78564)
		{
			bVar3 = false;
			while (bVar3 < 3)
			{
				if (BitTest(Global_91229[iVar1 /*34*/].f_11, bVar3))
				{
					if (__LIB_17__::func_341() == bVar3)
					{
						return -1;
					}
					iVar4 = __LIB_0__::func_482(bVar3);
					if (!PED::IS_PED_INJURED(Global_97919[iVar4]))
					{
						return -1;
					}
				}
				bVar3++;
			}
		}
		iVar0 = __LIB_38__::func_22(iParam1);
		if (iVar0 == -1)
		{
			return -1;
		}
	}
	iVar5 = Global_91193[iVar0 /*5*/].f_2;
	if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 3))
	{
		if (iVar5 == -1)
		{
			if (Global_94426[iVar1 /*2*/])
			{
				return -1;
			}
			if (__LIB_43__::func_520(iVar1))
			{
				return -1;
			}
			func_737(&iVar5, iVar1, iParam0, 0, Global_91229[iVar1 /*34*/].f_11);
			if (iVar5 == -1)
			{
				return -1;
			}
			func_729(iVar1);
			Global_91193[iVar0 /*5*/].f_2 = iVar5;
		}
	}
	if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
	{
		if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 1))
		{
			if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 3))
			{
				if (!func_728(iVar5))
				{
					if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/])
					{
						MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 2);
						MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 4);
					}
					return -1;
				}
			}
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 4))
			{
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
			}
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
			MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 1);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (ENTITY::GET_ENTITY_HEALTH(iVar6) < 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iVar6, 1, 0);
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar6) < 1f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar6, 1f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar6) < 1f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar6, 1f);
						}
						__LIB_0__::func_213(iVar6, 2.5f, 2, 0.5f, 1, 1, 0);
					}
				}
			}
			return -1;
		}
		if (iVar1 != 28)
		{
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 4))
			{
				if (!Global_63154)
				{
					if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 7))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
						{
							__LIB_17__::func_913();
							return -1;
						}
						else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_stat_watcher")))
						{
							SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"), 1828);
							SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
							MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 7);
						}
						else
						{
							return -1;
						}
					}
				}
			}
		}
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
		if (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar2))
		{
			return -1;
		}
		Global_91193[iVar0 /*5*/].f_4 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iVar2, 51000);
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar2);
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 2);
		if (!__LIB_38__::func_60(iVar1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 64);
				}
			}
		}
		func_455(iParam1, iVar0, iVar1, iParam0, 1);
		return -1;
	}
	bVar7 = BitTest(Global_91193[iVar0 /*5*/].f_1, 5);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_91193[iVar0 /*5*/].f_4))
	{
		if (bVar7)
		{
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1) && Global_100477 == 0)
			{
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	bVar8 = BitTest(Global_91193[iVar0 /*5*/].f_1, 4);
	if (bVar8 && bVar7)
	{
		bVar7 = false;
	}
	if (!(bVar8 || bVar7))
	{
		bVar7 = true;
	}
	if (bVar8)
	{
		return func_368(iParam1, iVar0, iVar1, 1, 0);
	}
	return func_320(iParam1, iVar0, iVar1, 1);
}

int func_320(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2D77C
{
	if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 1) && Global_100477 == 0)
	{
		__LIB_25__::func_739(0);
		__LIB_7__::func_703(0);
		__LIB_17__::func_897(0);
		__LIB_0__::func_54(1, 1);
		__LIB_37__::func_978();
		Global_100166[0 /*65*/] = { Global_113386.f_2363.f_539[0 /*65*/] };
		Global_100166[1 /*65*/] = { Global_113386.f_2363.f_539[1 /*65*/] };
		Global_100166[2 /*65*/] = { Global_113386.f_2363.f_539[2 /*65*/] };
		Global_91193[iParam1 /*5*/].f_1 = 0;
		__LIB_38__::func_44(iParam0);
		return -1;
	}
	func_1103(iParam2);
	Global_100477 = 0;
	func_744(iParam0, iParam1, bParam3);
	__LIB_38__::func_19(0, iParam2);
	return Global_78588.f_109[iParam0 /*4*/].f_2;
}

var func_368(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x302DD
{
	int iVar0;
	char* sVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	__LIB_42__::func_445(iParam2);
	if (!bParam4)
	{
		iVar0 = __LIB_0__::func_510(iParam2);
		sVar1 = { Global_91229[iParam2 /*34*/].f_8 };
		if (iParam2 == 90)
		{
			switch (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[7])
			{
				case 1:
					StringConCat(&sVar1, "A", 8);
					break;
				case 2:
					StringConCat(&sVar1, "B", 8);
					break;
				}
		}
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&sVar1, iVar0, Global_100478, 0);
		__LIB_0__::func_47(&sVar1, iVar0, Global_100478, 0, 0);
		Global_78583 = iParam2;
		Global_78584 = MISC::GET_GAME_TIMER();
		if (iParam2 == 28)
		{
			__LIB_0__::func_44(&Global_63169, Global_91229[iParam2 /*34*/].f_12);
		}
		else
		{
			Var2 = { __LIB_0__::func_103(iParam2) };
			__LIB_0__::func_44(&Var2, Global_91229[iParam2 /*34*/].f_12);
		}
		func_1103(iParam2);
		__LIB_37__::func_463(iParam2, 0);
		if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 4))
		{
			__LIB_0__::func_46(0, 0);
			Global_23011.f_17 = 1;
			Global_23011.f_18 = MISC::GET_GAME_TIMER();
		}
		if (!__LIB_0__::func_2(0))
		{
			if (__LIB_0__::func_52())
			{
				if (iParam2 == 53)
				{
					__LIB_37__::func_984();
				}
				else if (iParam2 == 44)
				{
					__LIB_37__::func_983();
				}
				else if (iParam2 == 42)
				{
					__LIB_37__::func_982();
				}
				else
				{
					func_429(__LIB_17__::func_341());
				}
			}
		}
	}
	__LIB_38__::func_19(1, iParam2);
	func_744(iParam0, iParam1, bParam3);
	__LIB_39__::func_430(iParam2, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	Global_94619 = 0;
	func_421(&(Global_113386.f_2363.f_539), iParam2);
	func_406(&(Global_113386.f_2363.f_539), iParam2);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar3 = __LIB_17__::func_341();
		if (__LIB_0__::func_374(iVar3))
		{
			__LIB_42__::func_444(PLAYER::PLAYER_PED_ID(), &(Global_99845[iVar3 /*98*/]), &(Global_100148[iVar3 /*3*/]), &(Global_100158[iVar3]), &(Global_100140[iVar3]), &(Global_4541522[iVar3]));
		}
	}
	__LIB_38__::func_21(iParam2);
	func_374();
	iVar4 = __LIB_37__::func_980(iParam2);
	if (iVar4 != 0)
	{
		if (!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar4))
		{
			AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar4);
		}
	}
	if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 0) && !Global_63154)
	{
		__LIB_0__::func_210();
	}
	if (!__LIB_0__::func_2(0))
	{
		if (iParam2 == 90)
		{
			__LIB_38__::func_20(0);
		}
		else if (iParam2 == 84 || iParam2 == 85)
		{
			__LIB_38__::func_20(4);
		}
	}
	Global_78588.f_7 = 1;
	Global_78588.f_6 = 1;
	__LIB_0__::func_379(iParam2, 0);
	return Global_78588.f_109[iParam0 /*4*/].f_1;
}

void func_374()//Position - 0x30A61
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_17__::func_107(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_309(iVar1, 14, iVar2))
				{
					func_375(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_375(int iParam0, int iParam1, int iParam2)//Position - 0x30B22
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_309(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_375(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_375(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { __LIB_0__::func_459(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_396(iParam0, iVar0, &iVar7, 0))
	{
		func_378(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_376(iParam0, iVar0, &iVar7))
	{
		func_378(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_376(int iParam0, int iParam1, int iParam2)//Position - 0x30CDE
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_309(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x30DA5
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
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_78128++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_3__::func_367(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_0__::func_350(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_0__::func_350(iParam0, 9);
			if (iVar10 == joaat("Player_Zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_One"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_Two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = __LIB_0__::func_453(iParam0, 1);
			if (!__LIB_0__::func_234(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_0__::func_453(iParam0, 0);
			if (!__LIB_0__::func_233(iVar10, 14, iVar8, -1) && !__LIB_0__::func_232(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_0__::func_453(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_78173 };
		}
		else
		{
			uVar11 = { __LIB_0__::func_459(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, uVar11[iVar0], -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_78190 };
						}
						else
						{
							uVar12 = { __LIB_0__::func_466(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_3__::func_367(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_378(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("Player_One") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							__LIB_0__::func_230(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_3__::func_367(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_16__::func_225(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_378(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, func_302(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_396(iParam0, iVar10, &iVar4, 1))
							{
								func_378(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_378(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_12__::func_14(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_378(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_378(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_378(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_378(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_378(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_0__::func_466(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_3__::func_367(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_378(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_3__::func_367(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_378(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_378(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_13__::func_589(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_396(iParam0, iVar10, &iVar4, 0))
		{
			func_378(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_376(iParam0, iVar10, &iVar4))
		{
			func_378(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_396(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33559
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_309(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_406(var uParam0, int iParam1)//Position - 0x3407B
{
	switch (iParam1)
	{
		case 17:
			func_407(uParam0, 0, 12);
			break;
		case 19:
			func_407(uParam0, 1, 13);
			break;
		case 29:
			func_407(uParam0, 1, 14);
			break;
		case 30:
			func_407(uParam0, 2, 15);
			func_407(uParam0, 1, 29);
			break;
		case 32:
			func_407(uParam0, 1, 16);
			func_407(uParam0, 0, 17);
			break;
		case 39:
			func_407(uParam0, 0, 21);
			func_407(uParam0, 1, 20);
			break;
		case 31:
			func_407(uParam0, 0, 18);
			break;
		case 20:
			func_407(uParam0, 2, 22);
			break;
		case 66:
			func_407(uParam0, 1, 23);
			break;
		case 68:
			func_407(uParam0, 1, 24);
			break;
		case 70:
			func_407(uParam0, 1, 67);
			break;
		case 8:
			func_407(uParam0, 1, 25);
			func_407(uParam0, 2, 26);
			break;
		case 67:
			func_407(uParam0, 1, 27);
			break;
		case 9:
			func_407(uParam0, 2, 28);
			break;
		case 38:
			func_407(uParam0, 2, 30);
			func_407(uParam0, 1, 19);
			break;
		case 83:
			func_407(uParam0, 2, 33);
			break;
		case 45:
			func_407(uParam0, 1, 35);
			break;
		case 64:
			func_407(uParam0, 0, 36);
			func_407(uParam0, 1, 37);
			break;
		case 91:
			func_407(uParam0, 0, 41);
			break;
		case 42:
			func_407(uParam0, 0, 58);
			Global_99845[0 /*98*/] = 0;
			func_407(uParam0, 2, 59);
			Global_99845[2 /*98*/] = 0;
			break;
		case 41:
			func_407(uParam0, 1, 42);
			func_407(uParam0, 2, 42);
			break;
		case 15:
			func_407(uParam0, 0, 46);
			func_407(uParam0, 1, 47);
			break;
		case 16:
			func_407(uParam0, 0, 48);
			break;
		case 48:
			func_407(uParam0, 1, 50);
			func_407(uParam0, 2, 51);
			break;
		case 74:
			func_407(uParam0, 0, 52);
			func_407(uParam0, 1, 66);
			break;
		case 76:
			func_407(uParam0, 1, 53);
			func_407(uParam0, 2, 54);
			func_407(uParam0, 0, 62);
			break;
		case 75:
			func_407(uParam0, 0, 61);
			func_407(uParam0, 1, 31);
			break;
		case 69:
			func_407(uParam0, 1, 63);
			break;
		case 84:
			func_407(uParam0, 0, 68);
			func_407(uParam0, 2, 69);
			break;
		case 85:
			func_407(uParam0, 0, 64);
			func_407(uParam0, 2, 65);
			break;
		case 93:
			func_407(uParam0, 1, 38);
			func_407(uParam0, 2, 39);
			break;
		case 11:
			func_407(uParam0, 2, 55);
			break;
		case 77:
			func_407(uParam0, 1, 56);
			func_407(uParam0, 2, 57);
			break;
		default:
			break;
	}
}

int func_407(var uParam0, int iParam1, int iParam2)//Position - 0x343C4
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
	{
		iVar0 = Global_113386.f_18533[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_113386.f_18533[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = __LIB_39__::func_706();
	if (!func_420(iParam2, &(uParam0->f_2300[iParam1 /*3*/]), &(uParam0->f_2310[iParam1])))
	{
		return 0;
	}
	if (!__LIB_0__::func_78(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!__LIB_0__::func_78(Global_98880[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_408(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_99845[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

int func_408(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x344E1
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_100148[iParam0 /*3*/], -829.7478f, 192.11703f, 76.73248f, -827.13837f, 153.85951f, 59.961723f, 33.25f, false, true))
				{
					if (Global_100140[iParam0] == 1)
					{
						*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 6:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 7:
			*uParam2 = { Global_99845[iParam0 /*98*/] };
			if (Global_100140[iParam0] != 2)
			{
				*uParam3 = { Global_100148[iParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = (Global_100158[iParam0] - Global_113386.f_2363.f_539.f_2310[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 11:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.1947f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		case 9:
			return func_408(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 10:
			return func_408(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 13:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 14:
			__LIB_32__::func_132(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		case 56:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.5203f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 16:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 17:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 18:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 19:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 20:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 23:
			return func_408(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 24:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 67:
			__LIB_32__::func_132(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		case 58:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 59:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 60:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		case 74:
			__LIB_32__::func_132(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 38:
			__LIB_32__::func_132(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 41:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.6798f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.7855f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		case 40:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 234:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		case 75:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 76:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.4788f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.8425f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.0852f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 49:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		case 48:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		case 50:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.7203f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		case 52:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		case 66:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		case 61:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 62:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 63:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		case 64:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		case 112:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 113:
			if (func_408(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 119:
			if (func_408(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		case 120:
			if (func_408(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 114:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		case 105:
			__LIB_32__::func_132(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		case 106:
			return func_408(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 107:
			return func_408(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 98:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 99:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		case 100:
			return func_408(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 101:
			return func_408(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 102:
			return func_408(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 123:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		case 125:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 89:
		case 90:
		case 127:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 91:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		case 93:
			if (func_408(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		case 121:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		case 115:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		case 116:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		case 117:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		case 94:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		case 96:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		case 108:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		case 109:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		case 135:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 136:
			if (func_408(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 137:
			if (func_408(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 138:
			if (func_408(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 139:
			if (func_408(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		case 140:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 141:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		case 142:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 143:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 144:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 145:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 146:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 147:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		case 148:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 149:
			if (func_408(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 151:
			if (func_408(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		case 162:
			if (func_408(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		case 158:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		case 166:
			return func_408(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 170:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 171:
			return func_408(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 172:
			return func_408(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 208:
			__LIB_32__::func_132(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		case 209:
			return func_408(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 210:
			return func_408(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 211:
			__LIB_0__::func_120(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		case 212:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		case 213:
			if (func_408(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		case 214:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.9152f, -17.4132f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.4609f, -147.0307f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		case 221:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		case 216:
			if (func_408(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		case 217:
			if (func_408(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		case 232:
		case 233:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.1096f, -70.4456f) - Vector(27.5447f, -1019.2347f, -78.4023f) };
			*uParam4 = (162.09804f - 109.0206f);
			return 1;
			break;
		case 192:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		case 193:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		case 194:
			if (func_408(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		case 195:
			if (func_408(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		case 200:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.5681f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.2864f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		case 201:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.7875f, 3.6009f) - Vector(29.2903f, -1607.2864f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		case 202:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		case 222:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		case 223:
			if (func_408(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		case 224:
			return func_408(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 226:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		case 227:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		case 228:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		case 229:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		case 230:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		case 238:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		case 250:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		case 251:
			if (func_408(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		case 252:
			if (func_408(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		case 253:
			if (func_408(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		case 281:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		case 282:
			if (func_408(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		case 283:
			if (func_408(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		case 284:
			if (func_408(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		case 275:
			__LIB_0__::func_120(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		case 276:
			return func_408(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 277:
			return func_408(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.4209f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		case 309:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		case 305:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.0466f, 1399.6621f) - Vector(37.9419f, 3602.284f, 1394.2081f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		case 310:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		case 256:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.2047f, -1243.6498f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		case 257:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.5349f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		case 258:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.1196f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		case 111:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.7816f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		case 153:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		case 154:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		case 165:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.8779f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		case 159:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		case 160:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		case 167:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.1743f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		case 152:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.7998f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		case 157:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		case 225:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.7335f, 185.4888f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		case 218:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.1594f, -17.556f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		case 219:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.1511f, -219.3172f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		case 220:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.6935f, -22.6138f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		case 206:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		case 207:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		case 274:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.4458f, -1883.836f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		case 312:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.5566f, -200.684f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		case 271:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.7513f, -1278.0234f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		case 248:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		case 242:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.2205f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		case 254:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		case 287:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		case 286:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.7039f, -1264.2178f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		case 239:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		case 243:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		case 244:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		case 249:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		case 273:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		case 92:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		case 103:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		case 109:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.5045f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		case 81:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.4424f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		case 95:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		case 97:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.1559f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		case 134:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.9182f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		case 88:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.8212f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		case 306:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.7256f, -569.3535f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		case 307:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.5929f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		case 308:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		case 278:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.7451f, 631.8275f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		case 279:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		case 240:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.3232f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		case 241:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.6665f, -179.4242f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		case 264:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.5446f, 486.7419f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		case 266:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.8945f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		case 267:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.3752f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		case 269:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		case 246:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.5072f, -1195.2559f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		case 263:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.2125f, -573.3765f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		case 259:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.5391f, -724.429f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		case 260:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.1135f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		case 261:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		case 270:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 289:
			__LIB_32__::func_132(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

int func_420(int iParam0, var uParam1, float fParam2)//Position - 0x3B38A
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_420(8, uParam1, fParam2);
			break;
		case 10:
			return func_420(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_421(var uParam0, int iParam1)//Position - 0x3BCF9
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_420(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_429(int iParam0)//Position - 0x3C7F1
{
	int iVar0;
	iVar0 = __LIB_0__::func_993(61);
	Global_2676732[iVar0 /*83*/] = 61;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Global_2676732[iVar0 /*83*/].f_1), "AF_MICHAEL", 64);
			break;
		case 1:
			StringCopy(&(Global_2676732[iVar0 /*83*/].f_1), "AF_FRANKLIN", 64);
			break;
		case 2:
			StringCopy(&(Global_2676732[iVar0 /*83*/].f_1), "AF_TREVOR", 64);
			break;
		default:
			break;
	}
}

void func_455(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3D560
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	struct<2> Var4;
	if (iParam3 != -1)
	{
		Global_78588.f_9 = iParam3;
	}
	if (Global_97361)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	Global_96661.f_8 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 21) && !BitTest(Global_91229[iParam2 /*34*/].f_15, 15))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
			if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			}
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
		}
		if (Global_78324 == iParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	SCRIPT::REQUEST_SCRIPT("buddyDeathResponse");
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
		if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 21) && !BitTest(Global_91229[iParam2 /*34*/].f_15, 15))
		{
			__LIB_17__::func_11();
		}
	}
	func_709(__LIB_17__::func_341());
	if (!__LIB_0__::func_323())
	{
		func_540(PLAYER::PLAYER_PED_ID(), 1);
	}
	__LIB_37__::func_978();
	iVar0 = __LIB_17__::func_341();
	if (__LIB_0__::func_374(iVar0))
	{
		__LIB_42__::func_444(PLAYER::PLAYER_PED_ID(), &(Global_99845[iVar0 /*98*/]), &(Global_100148[iVar0 /*3*/]), &(Global_100158[iVar0]), &(Global_100140[iVar0]), &(Global_4541522[iVar0]));
	}
	__LIB_0__::func_764();
	Global_8812[0] = 0;
	Global_8812[2] = 0;
	Global_8812[1] = 0;
	if (__LIB_0__::func_75())
	{
		__LIB_0__::func_325();
	}
	Global_113386.f_2363.f_4864 = __LIB_37__::func_989(iParam2);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	if (iParam4 && !BitTest(Global_91229[iParam2 /*34*/].f_15, 15))
	{
		__LIB_0__::func_366(0);
	}
	Global_78564 = 0;
	__LIB_38__::func_35();
	func_529();
	if (!__LIB_0__::func_2(0))
	{
		if (Global_78324 == iParam2)
		{
			if (!MISC::ARE_STRINGS_EQUAL("NONE" /* GXT: None */, &Global_78325))
			{
				CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(Global_91193[iParam1 /*5*/].f_4);
			}
			Global_78324 = -1;
			Global_78323 = 0;
			Global_78337 = 0;
			Global_78331[0] = -1;
			Global_78331[1] = -1;
			Global_78331[2] = -1;
			iVar1 = 0;
			while (iVar1 < Global_78381)
			{
				Global_78382[iVar1 /*4*/] = -1;
				Global_78382[iVar1 /*4*/].f_1 = 0;
				Global_78382[iVar1 /*4*/].f_2 = 0;
				Global_78382[iVar1 /*4*/].f_3 = 0;
				iVar1++;
			}
			Global_78381 = 0;
			iVar1 = 0;
			while (iVar1 < Global_78503)
			{
				Global_78504[iVar1 /*3*/] = -1;
				Global_78504[iVar1 /*3*/].f_1 = 0;
				Global_78504[iVar1 /*3*/].f_2 = -99;
				iVar1++;
			}
			Global_78503 = 0;
			iVar1 = 0;
			while (iVar1 < Global_78517)
			{
				Global_78518[iVar1 /*2*/] = -1;
				Global_78518[iVar1 /*2*/].f_1 = 0;
				iVar1++;
			}
			Global_78517 = 0;
			iVar1 = 0;
			while (iVar1 < Global_78529)
			{
				Global_78530[iVar1 /*4*/] = -1;
				Global_78530[iVar1 /*4*/].f_1 = 0;
				Global_78530[iVar1 /*4*/].f_2 = 0;
				Global_78530[iVar1 /*4*/].f_3 = 0;
				iVar1++;
			}
			Global_78529 = 0;
			__LIB_37__::func_988();
			iVar1 = 0;
			while (iVar1 < 3)
			{
				Global_78339[iVar1] = 0;
				iVar1++;
			}
			Global_78322 = 0;
			Global_78338 = 0;
			if (Global_78335 != -1)
			{
				__LIB_42__::func_449(&Global_78335);
			}
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
			Global_78336 = 1;
		}
	}
	__LIB_37__::func_987(iParam2);
	iVar2 = __LIB_0__::func_510(iParam2);
	sVar3 = { Global_91229[iParam2 /*34*/].f_8 };
	if (iParam2 == 90)
	{
		switch (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[7])
		{
			case 1:
				StringConCat(&sVar3, "A", 8);
				break;
			case 2:
				StringConCat(&sVar3, "B", 8);
				break;
			}
	}
	__LIB_0__::func_772(&sVar3, iVar2, 0);
	Var4 = { __LIB_0__::func_103(iParam2) };
	HUD::SET_MISSION_NAME(true, &Var4);
	if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 3))
	{
		if (!__LIB_0__::func_323())
		{
			__LIB_37__::func_986(iParam2);
		}
	}
	if (!BitTest(Global_91229[iParam2 /*34*/].f_15, 1) && !BitTest(Global_91193[iParam1 /*5*/].f_1, 3))
	{
		func_471(iParam0);
	}
	__LIB_42__::func_447(iParam2);
	__LIB_42__::func_446(iParam2);
	CAM::STOP_GAMEPLAY_HINT(false);
	Global_78581 = iParam2;
}

void func_471(int iParam0)//Position - 0x3F7D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	MISC::CLEAR_BIT(&(Global_100441.f_20), 17);
	func_473(&(Global_91229[iVar0 /*34*/]), 1, 0);
	if ((Global_91229[iVar0 /*34*/].f_13 != -1 && Global_91229[iVar0 /*34*/].f_14 != -1) && !BitTest(Global_91229[iVar0 /*34*/].f_15, 30))
	{
		iVar1 = __LIB_0__::func_199(Global_103950.f_1);
		iVar2 = Global_91229[iVar0 /*34*/].f_13;
		iVar3 = Global_91229[iVar0 /*34*/].f_14;
		if (!__LIB_3__::func_114(iVar1, iVar2, iVar3))
		{
			__LIB_17__::func_873(&(Global_103950.f_1), iVar2);
			__LIB_17__::func_873(&(Global_106934.f_1), iVar2);
		}
	}
	if (iVar0 == 62)
	{
		Global_103950 = 2;
		Global_106934 = 2;
	}
	if (iVar0 == 20)
	{
		if (Global_103950 == 1)
		{
			Global_103950 = 0;
			Global_106934 = 0;
		}
	}
}

void func_473(char[4] cParam0, int iParam1, int iParam2)//Position - 0x3F954
{
	if (Global_100441 != 10 && Global_100441 != 9)
	{
		StringCopy(&Global_103942, cParam0, 32);
		func_475(&Global_103950, cParam0, 0, "Start", iParam1, iParam2);
		__LIB_0__::func_757();
		Global_94619 = 0;
	}
}

void func_475(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x40630
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_17__::func_341();
	uParam0->f_1 = __LIB_39__::func_706();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_499(&(uParam0->f_2884), 0);
		__LIB_17__::func_442(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_452(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_17__::func_341())
		{
			func_488(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328_SPN_TOTAL_CASH[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		__LIB_42__::func_448(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

void func_488(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x41C8A
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_107(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_17__::func_255(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_17__::func_254(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (__LIB_0__::func_374(iVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__::func_342(161, iParam3))
			{
				uParam1->f_59 = __LIB_1__::func_360(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_1__::func_360(753, iParam3, 0);
			}
			uParam1->f_60 = __LIB_1__::func_360(754, iParam3, 0);
			uParam1->f_61 = __LIB_1__::func_360(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_1__::func_342(161, iParam3))
			{
				uParam1->f_59 = __LIB_1__::func_360(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_1__::func_360(753, iParam3, 0);
			}
		}
	}
}

void func_499(var uParam0, int iParam1)//Position - 0x43A1D
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (__LIB_17__::func_923(&iVar0))
		{
			if (__LIB_0__::func_388(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = __LIB_17__::func_341();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (__LIB_0__::func_387(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

void func_529()//Position - 0x466C1
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar3 = Global_113386.f_18533[iVar2];
		if (func_420(iVar3, &uVar0, &uVar1))
		{
			if (((iVar3 != 8 && iVar3 != 11) && iVar3 != 9) && iVar3 != 10)
			{
				Global_113386.f_18533[iVar2] = 318;
			}
		}
		iVar2++;
	}
}

void func_540(int iParam0, int iParam1)//Position - 0x46A60
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_107(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_302(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(iVar0);
					func_547(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_488(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				func_542();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_542()//Position - 0x46CDB
{
	struct<50> Var0;
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__::func_374(__LIB_17__::func_341())) || !__LIB_0__::func_438())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_488(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	__LIB_1__::func_379(1306, Var0[0], -1);
	__LIB_1__::func_379(1307, Var0[1], -1);
	__LIB_1__::func_379(1308, Var0[2], -1);
	__LIB_1__::func_379(1309, Var0[3], -1);
	__LIB_1__::func_379(1310, Var0[4], -1);
	__LIB_1__::func_379(1311, Var0[5], -1);
	__LIB_1__::func_379(1312, Var0[6], -1);
	__LIB_1__::func_379(1313, Var0[7], -1);
	__LIB_1__::func_379(1314, Var0[8], -1);
	__LIB_1__::func_379(1315, Var0[9], -1);
	__LIB_1__::func_379(1316, Var0[10], -1);
	__LIB_1__::func_379(1317, Var0[11], -1);
	__LIB_1__::func_379(1318, Var0.f_13[0], -1);
	__LIB_1__::func_379(1319, Var0.f_13[1], -1);
	__LIB_1__::func_379(1320, Var0.f_13[2], -1);
	__LIB_1__::func_379(1321, Var0.f_13[3], -1);
	__LIB_1__::func_379(1322, Var0.f_13[4], -1);
	__LIB_1__::func_379(1323, Var0.f_13[5], -1);
	__LIB_1__::func_379(1324, Var0.f_13[6], -1);
	__LIB_1__::func_379(1325, Var0.f_13[7], -1);
	__LIB_1__::func_379(1326, Var0.f_13[8], -1);
	__LIB_1__::func_379(1327, Var0.f_13[9], -1);
	__LIB_1__::func_379(1328, Var0.f_13[10], -1);
	__LIB_1__::func_379(1329, Var0.f_13[11], -1);
	__LIB_1__::func_379(1330, Var0.f_26[0], -1);
	__LIB_1__::func_379(1331, Var0.f_26[1], -1);
	__LIB_1__::func_379(1332, Var0.f_26[2], -1);
	__LIB_1__::func_379(1333, Var0.f_26[3], -1);
	__LIB_1__::func_379(1334, Var0.f_26[4], -1);
	__LIB_1__::func_379(1335, Var0.f_26[5], -1);
	__LIB_1__::func_379(1336, Var0.f_26[6], -1);
	__LIB_1__::func_379(1337, Var0.f_26[7], -1);
	__LIB_1__::func_379(1338, Var0.f_26[8], -1);
	__LIB_1__::func_379(1339, Var0.f_26[9], -1);
	__LIB_1__::func_379(1340, Var0.f_26[10], -1);
	__LIB_1__::func_379(1341, Var0.f_26[11], -1);
	__LIB_1__::func_379(1342, Var0.f_39[0], -1);
	__LIB_1__::func_379(1343, Var0.f_39[1], -1);
	__LIB_1__::func_379(1344, Var0.f_39[2], -1);
	__LIB_1__::func_379(1345, Var0.f_39[3], -1);
	__LIB_1__::func_379(1346, Var0.f_39[4], -1);
	__LIB_1__::func_379(1347, Var0.f_39[5], -1);
	__LIB_1__::func_379(1348, Var0.f_39[6], -1);
	__LIB_1__::func_379(1349, Var0.f_39[7], -1);
	__LIB_1__::func_379(1350, Var0.f_39[8], -1);
	__LIB_1__::func_379(1351, Var0.f_49[0], -1);
	__LIB_1__::func_379(1352, Var0.f_49[1], -1);
	__LIB_1__::func_379(1353, Var0.f_49[2], -1);
	__LIB_1__::func_379(1354, Var0.f_49[3], -1);
	__LIB_1__::func_379(1355, Var0.f_49[4], -1);
	__LIB_1__::func_379(1356, Var0.f_49[5], -1);
	__LIB_1__::func_379(1357, Var0.f_49[6], -1);
	__LIB_1__::func_379(1358, Var0.f_49[7], -1);
	__LIB_1__::func_379(1359, Var0.f_49[8], -1);
	__LIB_1__::func_379(1360, __LIB_17__::func_341(), -1);
	STATS::STAT_SET_BOOL(joaat("CLO_STORED_INITIAL"), true, true);
	Global_113386.f_2363.f_539.f_4315 = 1;
}

void func_547(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x470E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_17__::func_107(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_396(iParam0, iVar1, &iVar2, 0))
			{
				func_378(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_376(iParam0, iVar1, &iVar2))
			{
				func_378(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_704(iParam0);
			__LIB_1__::func_354(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_354(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_463(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_462(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_550(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_550(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_550(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_463(iVar9);
			}
			else
			{
				iVar9 = __LIB_0__::func_462(iVar9);
			}
			__LIB_1__::func_354(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_354(2053, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_348(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_550(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x475C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_665(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_0__::func_459(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_665(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_0__::func_466(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_665(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_550(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_665(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_664(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_550(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_658(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_665(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_9__::func_528(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_550(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_665(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_550(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_650(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_550(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_550(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_0__::func_350(iParam0, 11);
				iVar24 = __LIB_0__::func_350(iParam0, 8);
				iVar25 = __LIB_0__::func_350(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_0__::func_350(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_649(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__::func_282(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_0__::func_350(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_550(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_0__::func_280(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_0__::func_280(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_7__::func_884(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_550(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_550(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_0__::func_452(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_550(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_7__::func_884(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_0__::func_357(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_278(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_550(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_550(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_550(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_6__::func_37(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_658(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_649(iVar5, func_664(iParam0, 8, -1), iParam2, func_664(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_463(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_462(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_592(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_649(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_658(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_649(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_0__::func_350(iParam0, 7);
				if (!__LIB_0__::func_547(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_2__::func_996(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_0__::func_350(iParam0, 11);
			iVar58 = __LIB_0__::func_350(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_550(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_550(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_649(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_649(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__::func_282(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_550(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_649(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_550(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_248(iParam0))
				{
					iVar63 = __LIB_0__::func_442(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_570(iParam0, 9, iVar63))
						{
							func_550(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_550(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_550(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_550(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_664(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_664(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_550(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_550(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_0__::func_350(iParam0, 4);
				iVar75 = __LIB_0__::func_350(iParam0, 6);
				if (__LIB_0__::func_238(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_550(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_550(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_550(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_550(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_238(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_550(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_550(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_550(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_550(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_650(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_550(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_550(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_551(iParam0, &uVar4))
		{
			func_550(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_550(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_550(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_550(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_664(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_550(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_551(int iParam0, var uParam1)//Position - 0x49470
{
	int iVar0;
	int iVar1;
	*uParam1 = func_664(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_570(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_570(int iParam0, int iParam1, int iParam2)//Position - 0x4D72D
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
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar0, iParam1, iParam2, -1) };
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
				if (!func_570(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_570(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_570(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_570(iParam0, 14, uVar11[iVar10]))
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
						return func_570(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_570(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_592(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5442D
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_593(iParam0, bParam3, 0, -1);
}

void func_593(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x5447A
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_629(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_620(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_5__::func_179(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_260(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_620(int iParam0, int iParam1)//Position - 0x63478
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_664(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_664(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_629(int iParam0, bool bParam1)//Position - 0x638D6
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_664(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
						{
						}
						else if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_664(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_664(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_664(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_664(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_664(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_664(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_664(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_649(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6C77A
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_278(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_649(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_278(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_649(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_0__::func_280(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_0__::func_204(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_650(int iParam0)//Position - 0x6DAB5
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_655(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_286(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_285(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_286(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_285(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_283(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_655(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_655(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6E47F
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_664(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x70D9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_704(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_0__::func_280(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_0__::func_350(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_0__::func_350(iParam0, 11);
				if (!__LIB_0__::func_280(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_5__::func_175(iVar0, iParam2, 13) && !__LIB_5__::func_175(iVar0, iParam2, 14)) && !__LIB_5__::func_175(iVar0, iParam2, 15)) && !__LIB_5__::func_175(iVar0, iParam2, 16)) && !__LIB_5__::func_175(iVar0, iParam2, 71)) && !__LIB_5__::func_175(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_5__::func_29(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_664(int iParam0, int iParam1, int iParam2)//Position - 0x7104A
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
				if (func_570(iParam0, iParam1, iVar0))
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
				if (func_570(iParam0, iParam1, iVar1))
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

void func_665(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x710EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_665(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_665(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_665(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_665(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_665(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_665(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_665(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_665(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_704(int iParam0)//Position - 0x89D91
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_664(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_664(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_709(int iParam0)//Position - 0x8A351
{
	if (iParam0 == 2)
	{
		if (!__LIB_0__::func_540(0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
		}
	}
	else
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
	}
}

int func_728(int iParam0)//Position - 0x8AB7B
{
	if (iParam0 < 0 || iParam0 > 7)
	{
		return 0;
	}
	if (Global_97374[iParam0 /*17*/].f_1)
	{
		Global_97374[iParam0 /*17*/].f_1 = 0;
		return 1;
	}
	return 0;
}

void func_729(int iParam0)//Position - 0x8ABB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_42__::func_450(iParam0, iVar0))
		{
			if (__LIB_34__::func_680(iVar0, &iVar1, &iVar2))
			{
				if (__LIB_17__::func_225(iVar0) != -1)
				{
					func_730(iVar1, iVar2, 0, iParam0);
				}
			}
		}
		iVar0++;
	}
}

int func_730(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x8AC01
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_38__::func_743(iParam0);
	iVar1 = __LIB_38__::func_743(iParam1);
	iVar2 = __LIB_13__::func_95(iVar0, iVar1);
	iVar3 = 0;
	if (bParam2 != 0 && iParam3 != -1)
	{
		return 0;
	}
	if (bParam2 == 0 && iParam3 == 94)
	{
		return 0;
	}
	if (bParam2 == 0 && iParam3 == -1)
	{
		return 0;
	}
	if (iVar2 != 10)
	{
		if (!BitTest(Global_113386.f_18103.f_175[iVar2 /*19*/].f_2, bParam2))
		{
			MISC::SET_BIT(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_2), bParam2);
			iVar3 = 1;
		}
		if (bParam2 == 0)
		{
			Global_113386.f_18103.f_175[iVar2 /*19*/].f_3 = iParam3;
		}
	}
	return iVar3;
}

void func_737(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)//Position - 0x8AE2E
{
	func_738(iParam0, iParam1, uParam2, iParam3, uParam4);
	Global_97374[*iParam0 /*17*/].f_3 = 1;
}

void func_738(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x8AE50
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_97373)
	{
		if (Global_97374[iVar1 /*17*/] == 0)
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		iVar0 = Global_97373;
		Global_97373++;
		if (Global_97373 > 8)
		{
		}
	}
	Global_97374[iVar0 /*17*/] = 1;
	Global_97374[iVar0 /*17*/].f_1 = 0;
	Global_97374[iVar0 /*17*/].f_6 = uParam2;
	Global_97374[iVar0 /*17*/].f_4 = uParam3;
	Global_97374[iVar0 /*17*/].f_7 = -1;
	Global_97374[iVar0 /*17*/].f_5 = iParam1;
	Global_97374[iVar0 /*17*/].f_8 = uParam4;
	if (!BitTest(Global_91229[iParam1 /*34*/].f_15, 27))
	{
		__LIB_0__::func_379(iParam1, 1);
	}
	*uParam0 = iVar0;
}

void func_744(int iParam0, int iParam1, bool bParam2)//Position - 0x8B069
{
	if (bParam2)
	{
		if (__LIB_0__::func_540(0))
		{
			__LIB_38__::func_37(Global_91193[iParam1 /*5*/].f_2);
		}
		else
		{
			__LIB_38__::func_36(Global_91193[iParam1 /*5*/].f_2);
		}
	}
	else
	{
		__LIB_0__::func_56(&(Global_91193[iParam1 /*5*/].f_3));
	}
	__LIB_14__::func_860();
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_91229[Global_78588.f_109[iParam0 /*4*/] /*34*/].f_6);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
	__LIB_32__::func_133(iParam0);
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
}

int func_767(int iParam0)//Position - 0x8BDBB
{
	int iVar0;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (iParam0 % 1000000);
	if (func_769(iVar0))
	{
		return -2;
	}
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[func_768(iVar0) /*6*/])
	{
		return -2;
	}
	return -1;
}

int func_768(int iParam0)//Position - 0x8BE03
{
	switch (iParam0)
	{
		case 0:
			return 54;
			break;
		case 1:
			return 55;
			break;
		case 2:
			return 56;
			break;
		case 3:
			return 57;
			break;
		case 4:
			return 58;
			break;
	}
	return -1;
}

bool func_769(int iParam0)//Position - 0x8BE59
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 4)
	{
		iVar0 = __LIB_16__::func_973(iParam0, 0);
		return iVar0 != 1;
	}
	Var1 = { __LIB_17__::func_915(iParam0, &iVar4, &uVar5, 0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
	{
		return 0;
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	iVar2 = func_771(&Var1, iVar4);
	if (iVar2 <= 0)
	{
		return 0;
	}
	iVar3 = func_770(&(Global_113386.f_19961));
	return iVar2 > iVar3;
}

int func_770(var uParam0)//Position - 0x8BED8
{
	return *uParam0 & 31;
}

int func_771(char* sParam0, int iParam1)//Position - 0x8BEE6
{
	int iVar0;
	iVar0 = -1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return iVar0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_SOL1"))
	{
		iVar0 = 6;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_EXILE"))
	{
		if (iParam1 > 0)
		{
			iVar0 = 8;
		}
		else
		{
			iVar0 = 7;
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_SOL2"))
	{
		iVar0 = 9;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "DRF_MIC2"))
	{
		iVar0 = 10;
	}
	return iVar0;
}

int func_776(int iParam0)//Position - 0x8C2F1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam0 == -1)
	{
		return -2;
	}
	bVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (!__LIB_0__::func_374(bVar0))
	{
		return -2;
	}
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	iVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	iVar3 = Global_78588.f_109[iParam0 /*4*/].f_3;
	if (iVar3 <= 0)
	{
		return -2;
	}
	if (iVar1 == 1)
	{
		func_802(bVar0, iVar2, iVar3, 1, 0);
	}
	else
	{
		__LIB_14__::func_512(func_801(bVar0), iVar1, iVar2, iVar3, 1);
	}
	return -2;
}

int func_801(bool bParam0)//Position - 0x8D514
{
	return Global_1998[bParam0 /*29*/].f_17;
}

void func_802(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8D525
{
	int iVar0;
	int iVar1;
	if (func_801(bParam0) == 3)
	{
		return;
	}
	if (func_801(bParam0) == 4)
	{
		return;
	}
	__LIB_14__::func_512(func_801(bParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (bParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				default:
					return;
			}
		}
		else
		{
			switch (bParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_803(int iParam0)//Position - 0x8D5F7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	iVar1 = Global_78588.f_3590[iParam0 /*2*/].f_1;
	bVar2 = func_297(PLAYER::PLAYER_PED_ID(), iVar0, 0);
	if (iVar1 == 1)
	{
		bVar2 = !bVar2;
	}
	if (bVar2)
	{
		return -2;
	}
	return -1;
}

int func_804(int iParam0)//Position - 0x8D64B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	if (Global_21605 == 4)
	{
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return -1;
		}
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return -2;
	}
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	if (iVar1 != -1)
	{
		if (!__LIB_0__::func_425(iVar1))
		{
			__LIB_0__::func_681(iVar1, 1);
		}
	}
	iVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	if (BitTest(iVar2, 2))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return -1;
		}
	}
	__LIB_13__::func_782(1, iVar0, BitTest(iVar2, 0));
	__LIB_13__::func_782(2, iVar0, 1);
	Global_78588.f_7 = 1;
	return -2;
}

int func_807(int iParam0)//Position - 0x8D769
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 == -1 || iVar0 == 94)
	{
		return -2;
	}
	__LIB_39__::func_430(iVar0, 0);
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/] = 0;
	return -2;
}

int func_808(int iParam0)//Position - 0x8D7A6
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 == -1 || iVar0 == 94)
	{
		return -2;
	}
	__LIB_39__::func_430(iVar0, 1);
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/] = 1;
	return -2;
}

int func_809(int iParam0)//Position - 0x8D7E3
{
	bool bVar0;
	if (iParam0 == -1)
	{
		return -2;
	}
	bVar0 = Global_78588.f_3590[iParam0 /*2*/];
	if (Global_78588.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_16__::func_512(bVar0), 0);
		Global_113386.f_2363.f_539.f_2383[bVar0] = 1;
	}
	else
	{
		PLAYER::SPECIAL_ABILITY_LOCK(__LIB_16__::func_512(bVar0), 0);
		Global_113386.f_2363.f_539.f_2383[bVar0] = 0;
	}
	return -2;
}

int func_810(int iParam0)//Position - 0x8D855
{
	int iVar0;
	bool bVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	bVar1 = false;
	if (Global_78588.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	__LIB_0__::func_364(iVar0, bVar1);
	return -2;
}

int func_811(int iParam0)//Position - 0x8D898
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	bVar2 = false;
	if (Global_78588.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	__LIB_32__::func_135(0, iVar0, iVar1, !bVar2);
	__LIB_32__::func_135(2, iVar0, iVar1, !bVar2);
	__LIB_32__::func_135(1, iVar0, iVar1, !bVar2);
	return -2;
}

int func_819(int iParam0)//Position - 0x90153
{
	int iVar0;
	bool bVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	bVar1 = false;
	if (Global_78588.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	__LIB_12__::func_761(iVar0, bVar1, 0);
	__LIB_1__::func_714(iVar0);
	return -2;
}

int func_823(int iParam0)//Position - 0x9029D
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	uVar1 = Global_78588.f_3590[iParam0 /*2*/].f_1;
	bVar2 = BitTest(uVar1, 0);
	bVar3 = BitTest(uVar1, 1);
	func_825(iVar0, bVar2);
	__LIB_17__::func_901(iVar0, bVar3);
	return -2;
}

void func_825(int iParam0, bool bParam1)//Position - 0x90352
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_95479[iParam0 /*10*/].f_8, bParam1, true);
	func_841(iParam0);
	__LIB_15__::func_220(iParam0, 0);
	__LIB_14__::func_624(iParam0);
	func_826(iParam0);
}

void func_826(int iParam0)//Position - 0x903B6
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_38412[(38 / 32)]), (38 % 32));
			func_827(38, 0);
			MISC::SET_BIT(&(Global_38412[(41 / 32)]), (41 % 32));
			func_827(41, 0);
			MISC::SET_BIT(&(Global_38412[(43 / 32)]), (43 % 32));
			func_827(43, 0);
			MISC::SET_BIT(&(Global_38412[(42 / 32)]), (42 % 32));
			func_827(42, 0);
			MISC::SET_BIT(&(Global_38412[(44 / 32)]), (44 % 32));
			func_827(44, 0);
			break;
		case 1:
			MISC::SET_BIT(&(Global_38412[(51 / 32)]), (51 % 32));
			func_827(51, 0);
			break;
		case 2:
			MISC::SET_BIT(&(Global_38412[(51 / 32)]), (51 % 32));
			func_827(51, 0);
			break;
		case 3:
			MISC::SET_BIT(&(Global_38412[(53 / 32)]), (53 % 32));
			func_827(53, 0);
			break;
		case 4:
			MISC::SET_BIT(&(Global_38412[(81 / 32)]), (81 % 32));
			func_827(81, 0);
			MISC::SET_BIT(&(Global_38412[(82 / 32)]), (82 % 32));
			func_827(82, 0);
			break;
		case 5:
			MISC::SET_BIT(&(Global_38412[(47 / 32)]), (47 % 32));
			func_827(47, 0);
			MISC::SET_BIT(&(Global_38412[(50 / 32)]), (50 % 32));
			func_827(50, 0);
			break;
		case 6:
			MISC::SET_BIT(&(Global_38412[(50 / 32)]), (50 % 32));
			func_827(50, 0);
			break;
	}
}

void func_827(int iParam0, int iParam1)//Position - 0x90546
{
	int iVar0;
	if (iParam0 != 226)
	{
		if (Global_78319)
		{
			iVar0 = Global_42586[iParam0];
		}
		else
		{
			iVar0 = Global_113386.f_7261[iParam0];
		}
		if (iVar0 != iParam1 || BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
				Global_38884[iParam0] = iParam1;
			}
			else if (Global_78319)
			{
				Global_42586[iParam0] = iParam1;
			}
			else
			{
				Global_113386.f_7261[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
			func_829(iParam0);
			if (BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
			{
				__LIB_0__::func_401(iParam0);
			}
		}
	}
}

void func_829(int iParam0)//Position - 0x9067E
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_0__::func_346())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { __LIB_0__::func_403(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		func_834(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
		Global_38430[iParam0] = 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38657[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100493.f_373 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_100493.f_373 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_100493.f_373;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
					Global_38884[iParam0] = 3;
					MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_38657[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_38884[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
		{
			iVar3 = __LIB_17__::func_376(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (__LIB_0__::func_39(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (__LIB_17__::func_375())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113386.f_7261[iParam0];
	}
	if (Global_39111[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) || (Global_38430[iParam0] == 0 && Global_38884[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_38411)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
						bVar2 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar2 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
			Global_39111[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
		__LIB_0__::func_401(iParam0);
		if (Global_38430[iParam0] < 2)
		{
			Global_38430[iParam0]++;
		}
	}
}

void func_834(int iParam0, var uParam1)//Position - 0x90E60
{
	int iVar0;
	int iVar1;
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = __LIB_39__::func_706();
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

void func_841(int iParam0)//Position - 0x946D3
{
	bool bVar0;
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_95479[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113386.f_7229[iParam0], 0))
	{
		if (Global_95479[iParam0 /*10*/].f_9 != __LIB_17__::func_341())
		{
			bVar0 = true;
		}
		else if (!func_842(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (__LIB_0__::func_426(6))
		{
			bVar0 = false;
		}
	}
	if (__LIB_0__::func_540(14))
	{
		bVar0 = false;
	}
	__LIB_14__::func_622(Global_95479[iParam0 /*10*/].f_7, bVar0, 0);
}

int func_842(int iParam0)//Position - 0x9475D
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_842(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_844(int iParam0)//Position - 0x948D0
{
	bool bVar0;
	bVar0 = iParam0;
	if (!__LIB_0__::func_374(bVar0))
	{
		return -2;
	}
	if (func_845(__LIB_0__::func_482(bVar0), 1))
	{
		return -2;
	}
	return -1;
}

int func_845(int iParam0, bool bParam1)//Position - 0x94904
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	bVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_16__::func_512(bVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_900(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_871(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_848(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_848(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x94AC2
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		bVar1 = __LIB_17__::func_341();
		if (!uParam0->f_23)
		{
			func_865(iVar0, 0);
		}
		__LIB_13__::func_813(bVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		bVar2 = __LIB_0__::func_484(uParam0->f_7);
		func_865((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_17__::func_107(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (__LIB_0__::func_374(__LIB_17__::func_341()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		uParam0->f_5 = __LIB_0__::func_482(bVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_482(bVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_37__::func_451(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				__LIB_37__::func_451(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_501();
		__LIB_0__::func_480(bVar2);
		func_542();
		__LIB_37__::func_465(bVar2);
		func_826(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_774(bVar2, &iVar7);
		if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__::func_477())
		{
			__LIB_37__::func_464();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_865(int iParam0, bool bParam1)//Position - 0x95B17
{
	func_870(iParam0);
	__LIB_17__::func_452(iParam0, bParam1);
	__LIB_17__::func_335(iParam0);
	__LIB_17__::func_442(iParam0);
	__LIB_17__::func_333(iParam0);
	__LIB_17__::func_332(iParam0);
	__LIB_17__::func_331(iParam0);
}

void func_870(int iParam0)//Position - 0x95DBA
{
	bool bVar0;
	bVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[bVar0] = __LIB_39__::func_706();
	}
}

int func_871(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x95DF4
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_16__::func_512(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			func_899(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_894(*iParam0);
			__LIB_17__::func_347(*iParam0, 1, 0);
			__LIB_17__::func_337(*iParam0);
			__LIB_17__::func_336(*iParam0);
			func_873(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_873(int iParam0, bool bParam1)//Position - 0x95F0C
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_540(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_540(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_309(iParam0, 3, 169))
					{
						func_378(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_309(iParam0, 12, 6))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 12, 17))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 20))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 21))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 22))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 11))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 12, 10))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 12, 50))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 14, 59))
			{
				func_378(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_309(iParam0, 8, 22))
			{
				func_378(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_309(iParam0, 12, 14))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_309(iParam0, 12, 13))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 14))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 15))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 4))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 12, 3))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 14, 82))
			{
				func_378(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_309(iParam0, 8, 76))
			{
				func_378(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_309(iParam0, 12, 1))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_309(iParam0, 12, 12))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 12, 15))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_309(iParam0, 3, 71))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 17))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 18))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 19))
			{
				if (!__LIB_16__::func_848(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_309(iParam0, 12, 7))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 12, 6))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_309(iParam0, 14, 88))
			{
				func_378(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_309(iParam0, 8, 17))
			{
				func_378(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_309(iParam0, 12, 11))
			{
				func_378(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_894(int iParam0)//Position - 0x976FB
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_0__::func_374(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__::func_414(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_547(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_302(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_895(__LIB_16__::func_512(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_302(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_302(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_895(__LIB_16__::func_512(0), 3, 70, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 3, 71, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 3, 72, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 3, 73, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 3, 74, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 3, 75, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 4, 41, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 4, 42, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 4, 43, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 4, 44, 1, 0, 0, 0);
					func_895(__LIB_16__::func_512(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_302(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(bVar0);
				func_547(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_895(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x97958
{
	__LIB_16__::func_846(iParam0, iParam1, iParam2, bParam3);
	func_31(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_17__::func_924(iParam0, iParam1, iParam2, 0);
	}
}

int func_899(int iParam0, bool bParam1, bool bParam2)//Position - 0x97B29
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 4;
	if (bParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (bParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (bParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (bParam1 == 145)
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
	Global_113386.f_2363.f_539.f_2296[bParam1] = __LIB_39__::func_706();
	Global_113386.f_2363.f_539.f_2300[bParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Global_113386.f_2363.f_539.f_2310[bParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_97919.f_47), iVar0);
	}
	return 1;
}

int func_900(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x97C80
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_16__::func_512(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				func_899(*iParam0, bParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_894(*iParam0);
				__LIB_17__::func_347(*iParam0, 1, 0);
				__LIB_17__::func_337(*iParam0);
				__LIB_17__::func_336(*iParam0);
				func_873(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_902(int iParam0)//Position - 0x97D60
{
	bool bVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	bVar0 = Global_78588.f_3590[iParam0 /*2*/];
	iVar1 = 0;
	if ((Global_78588.f_3590[iParam0 /*2*/].f_1 % 1000000) == 1)
	{
		iVar1 = 1;
	}
	if (bVar0 == 144)
	{
		return -2;
	}
	__LIB_37__::func_992(bVar0, iVar1);
	return -2;
}

int func_904(int iParam0)//Position - 0x97DD9
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_78588.f_3590[iParam0 /*2*/];
	iVar1 = Global_78588.f_3590[iParam0 /*2*/].f_1;
	iVar2 = Global_113386.f_18533[iVar1];
	if (iVar2 != 318)
	{
		if (!(((iVar2 == 11 || iVar2 == 8) || iVar2 == 9) || iVar2 == 10))
		{
			if (func_420(iVar2, &uVar3, &fVar4))
			{
				return -2;
			}
		}
	}
	Global_113386.f_18533[iVar1] = uVar0;
	Global_113386.f_2363.f_539.f_2300[iVar1 /*3*/] = { 0f, 0f, 0f };
	return -2;
}

int func_905(int iParam0)//Position - 0x97E81
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_113386.f_18533.f_24[iVar0 /*5*/][iVar1] = 1;
		iVar1++;
	}
	return -2;
}

int func_906(int iParam0)//Position - 0x97EB4
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	if ((Global_78588.f_3590[iParam0 /*2*/].f_1 % 1000000) == 1)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	func_827(iVar0, iVar1);
	return -2;
}

int func_907(int iParam0)//Position - 0x97EFF
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return -2;
	}
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 12)
	{
		return -2;
	}
	uVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	if (BitTest(uVar2, 3))
	{
		MISC::SET_BIT(&(Global_113386.f_1.f_120[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[iVar0]), iVar1);
	}
	MISC::SET_BIT(&Global_96449, iVar0);
	return -2;
}

int func_908()//Position - 0x97FA5
{
	if (__LIB_0__::func_718())
	{
		return -1;
	}
	return -2;
}

int func_910(int iParam0)//Position - 0x97FC9
{
	int iVar0;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (!__LIB_0__::func_374(iVar0))
	{
		return -2;
	}
	if (__LIB_0__::func_201())
	{
		if (Global_97919.f_45 == iVar0)
		{
			return Global_78588.f_109[iParam0 /*4*/].f_1;
		}
		else
		{
			return Global_78588.f_109[iParam0 /*4*/].f_2;
		}
	}
	return Global_78588.f_109[iParam0 /*4*/].f_2;
}

int func_911(int iParam0)//Position - 0x9803E
{
	int iVar0;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (!__LIB_0__::func_374(iVar0))
	{
		return -2;
	}
	if (func_24(iVar0))
	{
		return Global_78588.f_109[iParam0 /*4*/].f_1;
	}
	return Global_78588.f_109[iParam0 /*4*/].f_2;
}

int func_912(int iParam0)//Position - 0x98095
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 94)
	{
		return -2;
	}
	uVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar0 /*6*/])
	{
		return uVar1;
	}
	return uVar2;
}

int func_913(int iParam0)//Position - 0x98104
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	if (iParam0 == -1)
	{
		return -2;
	}
	if (__LIB_0__::func_425(0))
	{
		__LIB_0__::func_681(0, 0);
		return Global_78588.f_4824[iParam0 /*11*/].f_4;
	}
	iVar0 = Global_78588.f_4824[iParam0 /*11*/];
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return -2;
	}
	iVar1 = Global_78588.f_4824[iParam0 /*11*/].f_1;
	if (iVar1 == 3 || iVar1 == 4)
	{
		return -2;
	}
	iVar2 = Global_78588.f_4824[iParam0 /*11*/].f_2;
	if (iVar2 == 12)
	{
		return -2;
	}
	iVar3 = __LIB_36__::func_928(iVar0);
	iVar4 = __LIB_0__::func_566(iVar3);
	if (iVar4 < 0 || iVar4 >= 5)
	{
		return -2;
	}
	iVar5 = iVar4;
	uVar6 = Global_78588.f_4824[iParam0 /*11*/].f_5;
	bVar7 = BitTest(uVar6, 0);
	bVar8 = BitTest(uVar6, 1);
	switch (iVar1)
	{
		case 0:
			if (iVar5 != 1)
			{
				__LIB_17__::func_784(iVar3, 1);
				__LIB_13__::func_782(3, iVar0, 0);
				__LIB_13__::func_782(1, iVar0, bVar7);
			}
			else if (__LIB_0__::func_786(3, iVar0))
			{
				if (bVar8)
				{
					__LIB_17__::func_784(iVar3, 0);
				}
				__LIB_13__::func_782(3, iVar0, 0);
				if (iVar2 != 13)
				{
					MISC::SET_BIT(&(Global_113386.f_1.f_120[iVar0]), iVar2);
					MISC::SET_BIT(&Global_96449, iVar0);
				}
				return Global_78588.f_4824[iParam0 /*11*/].f_3;
			}
			break;
		case 1:
			if (iVar5 != 2)
			{
				__LIB_17__::func_784(iVar3, 2);
				if (iVar2 != 13)
				{
					MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[iVar0]), iVar2);
					MISC::SET_BIT(&Global_96449, iVar0);
				}
				__LIB_13__::func_782(4, iVar0, 0);
				__LIB_13__::func_782(1, iVar0, bVar7);
			}
			else if (__LIB_0__::func_786(4, iVar0))
			{
				if (bVar8)
				{
					__LIB_17__::func_784(iVar3, 0);
				}
				__LIB_13__::func_782(4, iVar0, 0);
				if (iVar2 != 13)
				{
					MISC::SET_BIT(&(Global_113386.f_1.f_120[iVar0]), iVar2);
					MISC::SET_BIT(&Global_96449, iVar0);
				}
				switch (iVar0)
				{
					case 0:
						iVar9 = 7;
						break;
					case 1:
						iVar9 = 8;
						break;
					case 2:
						iVar9 = 9;
						break;
					case 3:
						iVar9 = 10;
						break;
					case 4:
						iVar9 = 11;
						break;
				}
				iVar10 = __LIB_0__::func_566(iVar9);
				iVar11 = 0;
				while (iVar11 < Global_96470[iVar10 /*19*/])
				{
					iVar12 = func_915(iVar0, iVar11);
					if (iVar12 != joaat("CITIES_PASSED"))
					{
						STATS::STAT_SET_INT(iVar12, Global_113386.f_1.f_12[iVar10 /*6*/][iVar11], true);
					}
					iVar11++;
				}
				return Global_78588.f_4824[iParam0 /*11*/].f_3;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar13 = 7;
					break;
				case 1:
					iVar13 = 8;
					break;
				case 2:
					iVar13 = 9;
					break;
				case 3:
					iVar13 = 10;
					break;
				case 4:
					iVar13 = 11;
					break;
			}
			if (iVar5 != 3)
			{
				__LIB_17__::func_784(iVar3, 3);
				__LIB_17__::func_784(iVar13, 0);
				__LIB_13__::func_782(5, iVar0, 0);
				if (iVar2 != 13)
				{
					MISC::CLEAR_BIT(&(Global_113386.f_1.f_120[iVar0]), iVar2);
					MISC::SET_BIT(&Global_96449, iVar0);
				}
				__LIB_13__::func_782(1, iVar0, bVar7);
			}
			else if (__LIB_0__::func_566(iVar13) != 0 && __LIB_0__::func_786(5, iVar0))
			{
				if (bVar8)
				{
					__LIB_17__::func_784(iVar3, 0);
				}
				__LIB_13__::func_782(5, iVar0, 0);
				if (iVar2 != 13)
				{
					MISC::SET_BIT(&(Global_113386.f_1.f_120[iVar0]), iVar2);
					MISC::SET_BIT(&Global_96449, iVar0);
				}
				iVar14 = __LIB_0__::func_566(iVar13);
				iVar15 = func_914(iVar0);
				if (iVar15 != joaat("CITIES_PASSED"))
				{
					STATS::STAT_SET_INT(iVar15, iVar14, true);
				}
				return Global_78588.f_4824[iParam0 /*11*/].f_3;
			}
			break;
	}
	return -1;
}

int func_914(int iParam0)//Position - 0x984B4
{
	switch (iParam0)
	{
		case 0:
			return joaat("HCS_JEWEL_GAMEPLAY_CHOICE");
			break;
		case 1:
			return joaat("HCS_PORT_GAMEPLAY_CHOICE");
			break;
		case 3:
			return joaat("HCS_BUREAU_GAMEPLAY_CHOICE");
			break;
		case 4:
			return joaat("HCS_BIGS_GAMEPLAY_CHOICE");
			break;
	}
	return joaat("CITIES_PASSED");
}

int func_915(int iParam0, int iParam1)//Position - 0x9850C
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("HCS_JEWEL_CREW1_CHOICE");
					break;
				case 1:
					return joaat("HCS_JEWEL_CREW2_CHOICE");
					break;
				case 2:
					return joaat("HCS_JEWEL_CREW3_CHOICE");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("HCS_PALETO_CREW1_CHOICE");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("HCS_BUREAU_CREW1_CHOICE");
					break;
				case 1:
					return joaat("HCS_BUREAU_CREW2_CHOICE");
					break;
				case 2:
					return joaat("HCS_BUREAU_CREW3_CHOICE");
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("HCS_BIGS_CREW1_CHOICE");
					break;
				case 1:
					return joaat("HCS_BIGS_CREW2_CHOICE");
					break;
				case 2:
					return joaat("HCS_BIGS_CREW3_CHOICE");
					break;
				case 3:
					return joaat("HCS_BIGS_CREW4_CHOICE");
					break;
				case 4:
					return joaat("HCS_BIGS_CREW5_CHOICE");
					break;
			}
			break;
	}
	return joaat("CITIES_PASSED");
}

int func_920(int iParam0)//Position - 0x98739
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_78588.f_109[iParam0 /*4*/];
	uVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	iVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	if (Global_78588.f_109[iParam0 /*4*/].f_3 == 1)
	{
		iVar4 = iVar3;
		iVar4++;
		__LIB_16__::func_336(iVar4, 0, 6);
		iVar3 = iVar4;
	}
	func_921(uVar0, uVar1, iVar3, iVar2);
	return -2;
}

void func_921(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x987B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_42__::func_976();
	iVar0 = iParam2;
	iVar1 = uParam1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam3)
	{
		if (iVar1 > 23)
		{
			iVar1 = 0;
			iVar0++;
		}
		if (iVar0 > 6)
		{
			iVar0 = 0;
		}
		Global_97533[iVar0 /*25*/][iVar1] = uParam0;
		Global_97530++;
		iVar1++;
		iVar2++;
	}
}

int func_929(int iParam0)//Position - 0x98CD6
{
	var uVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_78588.f_109[iParam0 /*4*/];
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	bVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	uVar3 = Global_78588.f_109[iParam0 /*4*/].f_3;
	func_930(uVar0, iVar1, bVar2, 3, 3600000, uVar3, 4);
	return -2;
}

int func_930(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, int iParam6)//Position - 0x98D36
{
	struct<15> Var0;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (bParam2 < 3)
	{
		if (BitTest(iParam1, bParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_650 < 30)
	{
		Var0.f_0 = uParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = bParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_9 = uParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 6);
		Global_113386.f_7688.f_199[Global_113386.f_7688.f_650 /*15*/] = { Var0 };
		Global_113386.f_7688.f_650++;
		return 1;
	}
	return 0;
}

int func_931(int iParam0)//Position - 0x98E39
{
	__LIB_17__::func_379(iParam0);
	return -2;
}

int func_947(int iParam0)//Position - 0x9959E
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_4824[iParam0 /*11*/];
	if (func_957() == iVar0)
	{
		return -2;
	}
	uVar1 = Global_78588.f_4824[iParam0 /*11*/].f_6;
	if (!__LIB_16__::func_982(iVar0))
	{
		iVar2 = Global_78588.f_4824[iParam0 /*11*/].f_1;
		bVar3 = Global_78588.f_4824[iParam0 /*11*/].f_2;
		iVar4 = Global_78588.f_4824[iParam0 /*11*/].f_3;
		iVar5 = Global_78588.f_4824[iParam0 /*11*/].f_4;
		iVar6 = Global_78588.f_4824[iParam0 /*11*/].f_5;
		iVar7 = 0;
		if (BitTest(uVar1, 13))
		{
			MISC::SET_BIT(&iVar7, 4);
		}
		if (BitTest(uVar1, 3))
		{
			MISC::SET_BIT(&iVar7, 2);
		}
		else if (BitTest(uVar1, 4))
		{
			MISC::SET_BIT(&iVar7, 3);
		}
		func_948(iVar0, iVar4, iVar2, bVar3, iVar5, iVar6, Global_78588.f_4824[iParam0 /*11*/].f_8, Global_78588.f_4824[iParam0 /*11*/].f_9, Global_78588.f_4824[iParam0 /*11*/].f_10, iVar7);
	}
	if (BitTest(uVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_948(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9)//Position - 0x996AB
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
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
	if (Global_113386.f_7688.f_866 < 10)
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
		Var0.f_9 = uParam8;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_113386.f_7688.f_765[Global_113386.f_7688.f_866 /*10*/] = { Var0 };
		Global_113386.f_7688.f_866++;
		return 1;
	}
	else
	{
		Var1 = { __LIB_16__::func_592(iParam0, iParam1, iParam2, bParam3, iParam4, iParam5, iParam6, iParam7, uParam8, iParam9) };
		iVar2 = 0;
		__LIB_17__::func_23(&iVar2);
		iVar3 = __LIB_16__::func_579(Var1, Global_113386.f_7688.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			__LIB_17__::func_24(Global_113386.f_7688.f_765[iVar2 /*10*/]);
			Global_113386.f_7688.f_765[iVar2 /*10*/] = { Var1 };
			__LIB_16__::func_578(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (__LIB_16__::func_577(Var1))
			{
				__LIB_17__::func_24(Global_113386.f_7688.f_765[iVar2 /*10*/]);
				Global_113386.f_7688.f_765[iVar2 /*10*/] = { Var1 };
				__LIB_16__::func_578(&Var1);
				return 1;
			}
			else
			{
				if (!__LIB_16__::func_577(Global_113386.f_7688.f_765[iVar2 /*10*/]))
				{
					Global_113386.f_7688.f_765[iVar2 /*10*/] = { Var1 };
					__LIB_16__::func_578(&Var1);
					return 1;
				}
				__LIB_16__::func_578(&Var1);
				return 1;
			}
		}
		else
		{
			__LIB_17__::func_24(Var1);
			__LIB_16__::func_578(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_957()//Position - 0x99A99
{
	return Global_113386.f_7688.f_918;
}

int func_958(int iParam0)//Position - 0x99AAB
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_4824[iParam0 /*11*/];
	if (func_960() == iVar0)
	{
		return -2;
	}
	uVar1 = Global_78588.f_4824[iParam0 /*11*/].f_6;
	if (!__LIB_16__::func_982(iVar0))
	{
		iVar2 = Global_78588.f_4824[iParam0 /*11*/].f_1;
		bVar3 = Global_78588.f_4824[iParam0 /*11*/].f_2;
		iVar4 = Global_78588.f_4824[iParam0 /*11*/].f_3;
		iVar5 = Global_78588.f_4824[iParam0 /*11*/].f_4;
		iVar6 = Global_78588.f_4824[iParam0 /*11*/].f_5;
		iVar7 = 0;
		if (BitTest(uVar1, 13))
		{
			MISC::SET_BIT(&iVar7, 4);
		}
		if (BitTest(uVar1, 12))
		{
			MISC::SET_BIT(&iVar7, 1);
		}
		if (BitTest(uVar1, 3))
		{
			MISC::SET_BIT(&iVar7, 2);
		}
		else if (BitTest(uVar1, 4))
		{
			MISC::SET_BIT(&iVar7, 3);
		}
		if (BitTest(uVar1, 9))
		{
			MISC::SET_BIT(&iVar7, 16);
		}
		if (BitTest(uVar1, 8))
		{
			MISC::SET_BIT(&iVar7, 17);
		}
		if (BitTest(uVar1, 10))
		{
			MISC::SET_BIT(&iVar7, 18);
		}
		if (BitTest(uVar1, 11))
		{
			MISC::SET_BIT(&iVar7, 19);
		}
		if (BitTest(uVar1, 18))
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = 1;
		}
		func_959(iVar0, iVar4, iVar2, bVar3, iVar5, iVar6, Global_78588.f_4824[iParam0 /*11*/].f_8, Global_78588.f_4824[iParam0 /*11*/].f_9, Global_78588.f_4824[iParam0 /*11*/].f_10, iVar7, iVar8);
	}
	if (BitTest(uVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_959(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x99C1A
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
		Var0.f_9 = uParam8;
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

int func_960()//Position - 0x99D32
{
	return Global_113386.f_7688.f_915;
}

int func_961(int iParam0)//Position - 0x99D44
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_6684[iParam0 /*14*/];
	uVar1 = Global_78588.f_6684[iParam0 /*14*/].f_8;
	uVar2 = func_968(uVar1);
	if (BitTest(uVar1, 5))
	{
		if (__LIB_17__::func_672() == iVar0)
		{
			iVar3 = 0;
			if (func_966())
			{
				if (func_965())
				{
					if (func_964())
					{
						func_963();
						return Global_78588.f_6684[iParam0 /*14*/].f_9;
					}
					else
					{
						func_963();
						return Global_78588.f_6684[iParam0 /*14*/].f_10;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			else
			{
				iVar3 = 1;
			}
			if (iVar3 && !BitTest(uVar2, 10))
			{
				func_963();
				return Global_78588.f_6684[iParam0 /*14*/].f_10;
			}
		}
	}
	if (!__LIB_16__::func_982(iVar0))
	{
		uVar4 = Global_78588.f_6684[iParam0 /*14*/].f_1;
		uVar5 = Global_78588.f_6684[iParam0 /*14*/].f_2;
		iVar6 = Global_78588.f_6684[iParam0 /*14*/].f_3;
		bVar7 = Global_78588.f_6684[iParam0 /*14*/].f_4;
		iVar8 = Global_78588.f_6684[iParam0 /*14*/].f_5;
		iVar9 = Global_78588.f_6684[iParam0 /*14*/].f_6;
		iVar10 = Global_78588.f_6684[iParam0 /*14*/].f_7;
		func_962(iVar0, uVar4, uVar5, iVar8, iVar6, bVar7, 3, iVar9, iVar10, -1, Global_78588.f_6684[iParam0 /*14*/].f_11, Global_78588.f_6684[iParam0 /*14*/].f_12, Global_78588.f_6684[iParam0 /*14*/].f_13, uVar2);
	}
	return -1;
}

int func_962(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12, var uParam13)//Position - 0x99EB3
{
	struct<15> Var0;
	bool bVar1;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (bParam5 < 3)
	{
		if (BitTest(iParam4, bParam5))
		{
			return 0;
		}
	}
	if (iParam6 < 3)
	{
		if (iParam6 != bParam5)
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__::func_713(iParam3);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam7);
		Var0.f_5 = iParam8;
		Var0.f_1 = uParam13;
		Var0.f_2 = iParam4;
		Var0.f_6 = bParam5;
		Var0.f_14 = iParam6;
		Var0.f_10 = iParam9;
		Var0.f_12 = uParam1;
		Var0.f_13 = uParam2;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		Var0.f_9 = uParam12;
		MISC::SET_BIT(&(Var0.f_1), 1);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam9 != -1)
		{
			MISC::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam3 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (BitTest(iParam4, bVar1))
			{
				__LIB_17__::func_247(bVar1);
			}
			bVar1++;
		}
		return 1;
	}
	return 0;
}

void func_963()//Position - 0x9A034
{
	Global_113386.f_7688.f_911 = -1;
	Global_113386.f_7688.f_913 = 0;
	Global_113386.f_7688.f_914 = 0;
}

bool func_964()//Position - 0x9A05D
{
	return Global_113386.f_7688.f_914;
}

bool func_965()//Position - 0x9A06F
{
	return Global_113386.f_7688.f_913;
}

bool func_966()//Position - 0x9A081
{
	return Global_113386.f_7688.f_912;
}

int func_968(var uParam0)//Position - 0x9A0A5
{
	int iVar0;
	iVar0 = 0;
	if (BitTest(uParam0, 0))
	{
		MISC::SET_BIT(&iVar0, 7);
	}
	if (BitTest(uParam0, 1))
	{
		MISC::SET_BIT(&iVar0, 9);
	}
	if (BitTest(uParam0, 2))
	{
		MISC::SET_BIT(&iVar0, 8);
	}
	if (BitTest(uParam0, 13))
	{
		MISC::SET_BIT(&iVar0, 4);
	}
	if (BitTest(uParam0, 14))
	{
		MISC::SET_BIT(&iVar0, 12);
	}
	if (BitTest(uParam0, 3))
	{
		MISC::SET_BIT(&iVar0, 2);
	}
	else if (BitTest(uParam0, 4))
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	if (BitTest(uParam0, 6))
	{
		MISC::SET_BIT(&iVar0, 10);
	}
	else if (BitTest(uParam0, 7))
	{
		MISC::SET_BIT(&iVar0, 11);
	}
	if (BitTest(uParam0, 19))
	{
		MISC::SET_BIT(&iVar0, 21);
	}
	return iVar0;
}

int func_969(int iParam0)//Position - 0x9A14D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_6684[iParam0 /*14*/];
	if (__LIB_17__::func_672() == iVar0)
	{
		if (func_964())
		{
			func_963();
			return Global_78588.f_6684[iParam0 /*14*/].f_9;
		}
		else
		{
			func_963();
			return Global_78588.f_6684[iParam0 /*14*/].f_10;
		}
	}
	if (!__LIB_16__::func_982(iVar0))
	{
		iVar1 = Global_78588.f_6684[iParam0 /*14*/].f_1;
		bVar2 = Global_78588.f_6684[iParam0 /*14*/].f_2;
		iVar3 = Global_78588.f_6684[iParam0 /*14*/].f_3;
		iVar4 = Global_78588.f_6684[iParam0 /*14*/].f_4;
		iVar5 = Global_78588.f_6684[iParam0 /*14*/].f_5;
		uVar6 = Global_78588.f_6684[iParam0 /*14*/].f_6;
		uVar7 = func_968(uVar6);
		func_970(iVar0, iVar3, iVar1, bVar2, 3, iVar4, iVar5, -1, Global_78588.f_6684[iParam0 /*14*/].f_11, Global_78588.f_6684[iParam0 /*14*/].f_12, Global_78588.f_6684[iParam0 /*14*/].f_13, uVar7);
	}
	return -1;
}

int func_970(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, var uParam11)//Position - 0x9A252
{
	struct<15> Var0;
	bool bVar1;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
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
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__::func_713(iParam1);
		Var0.f_1 = uParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = uParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			MISC::SET_BIT(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (BitTest(iParam2, bVar1))
			{
				__LIB_17__::func_247(bVar1);
			}
			bVar1++;
		}
		return 1;
	}
	return 0;
}

int func_971(int iParam0)//Position - 0x9A3CC
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_6684[iParam0 /*14*/];
	uVar1 = Global_78588.f_6684[iParam0 /*14*/].f_8;
	uVar2 = func_968(uVar1);
	if (BitTest(uVar1, 5))
	{
		if (__LIB_17__::func_672() == iVar0)
		{
			func_963();
			return -2;
		}
	}
	if (!__LIB_16__::func_982(iVar0))
	{
		uVar3 = Global_78588.f_6684[iParam0 /*14*/].f_1;
		uVar4 = Global_78588.f_6684[iParam0 /*14*/].f_2;
		uVar5 = Global_78588.f_6684[iParam0 /*14*/].f_13;
		iVar6 = Global_78588.f_6684[iParam0 /*14*/].f_3;
		bVar7 = Global_78588.f_6684[iParam0 /*14*/].f_4;
		iVar8 = Global_78588.f_6684[iParam0 /*14*/].f_5;
		iVar9 = Global_78588.f_6684[iParam0 /*14*/].f_6;
		iVar10 = Global_78588.f_6684[iParam0 /*14*/].f_7;
		func_972(iVar0, uVar3, uVar4, uVar5, iVar8, iVar6, bVar7, 3, iVar9, iVar10, Global_78588.f_6684[iParam0 /*14*/].f_11, Global_78588.f_6684[iParam0 /*14*/].f_12, uVar2);
	}
	if (BitTest(uVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_972(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12)//Position - 0x9A4E2
{
	struct<15> Var0;
	bool bVar1;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (bParam6 < 3)
	{
		if (BitTest(iParam5, bParam6))
		{
			return 0;
		}
	}
	if (iParam7 < 3)
	{
		if (iParam7 != bParam6)
		{
			return 0;
		}
	}
	if (iParam5 < 1 || iParam5 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		Var0.f_10 = uParam1;
		Var0.f_11 = uParam2;
		Var0.f_9 = uParam3;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__::func_713(iParam4);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_5 = iParam9;
		Var0.f_1 = uParam12;
		Var0.f_2 = iParam5;
		Var0.f_6 = bParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (BitTest(iParam5, bVar1))
			{
				__LIB_17__::func_247(bVar1);
			}
			bVar1++;
		}
		return 1;
	}
	return 0;
}

int func_973(int iParam0)//Position - 0x9A64B
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_4824[iParam0 /*11*/];
	iVar1 = Global_78588.f_4824[iParam0 /*11*/].f_1;
	uVar2 = Global_78588.f_4824[iParam0 /*11*/].f_7;
	uVar3 = func_968(uVar2);
	if (BitTest(uVar2, 5))
	{
		if (BitTest(uVar3, 11))
		{
			if (__LIB_16__::func_982(iVar1))
			{
				return -1;
			}
			else if (func_960() == iVar1)
			{
				func_974();
				if (__LIB_17__::func_672() == iVar0)
				{
					func_963();
				}
				return -2;
			}
		}
		if (__LIB_17__::func_672() == iVar0)
		{
			func_963();
			return -2;
		}
	}
	if (!__LIB_16__::func_982(iVar0))
	{
		iVar4 = Global_78588.f_4824[iParam0 /*11*/].f_2;
		bVar5 = Global_78588.f_4824[iParam0 /*11*/].f_3;
		iVar6 = Global_78588.f_4824[iParam0 /*11*/].f_4;
		iVar7 = Global_78588.f_4824[iParam0 /*11*/].f_5;
		iVar8 = Global_78588.f_4824[iParam0 /*11*/].f_6;
		func_970(iVar0, iVar6, iVar4, bVar5, 3, iVar7, iVar8, iVar1, Global_78588.f_4824[iParam0 /*11*/].f_8, Global_78588.f_4824[iParam0 /*11*/].f_9, Global_78588.f_4824[iParam0 /*11*/].f_10, uVar3);
	}
	if (BitTest(uVar2, 5))
	{
		return -1;
	}
	return -2;
}

void func_974()//Position - 0x9A784
{
	Global_113386.f_7688.f_915 = -1;
	Global_113386.f_7688.f_916 = 0;
	Global_113386.f_7688.f_917 = 0;
}

int func_975(int iParam0)//Position - 0x9A7AD
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_6684[iParam0 /*14*/];
	uVar1 = Global_78588.f_6684[iParam0 /*14*/].f_8;
	if (BitTest(uVar1, 5))
	{
		if (__LIB_17__::func_672() == iVar0)
		{
			func_963();
			return -2;
		}
	}
	if (!__LIB_16__::func_982(iVar0))
	{
		uVar2 = Global_78588.f_6684[iParam0 /*14*/].f_1;
		uVar3 = Global_78588.f_6684[iParam0 /*14*/].f_2;
		uVar4 = Global_78588.f_6684[iParam0 /*14*/].f_13;
		iVar5 = Global_78588.f_6684[iParam0 /*14*/].f_3;
		bVar6 = Global_78588.f_6684[iParam0 /*14*/].f_4;
		iVar7 = Global_78588.f_6684[iParam0 /*14*/].f_5;
		iVar8 = Global_78588.f_6684[iParam0 /*14*/].f_6;
		iVar9 = Global_78588.f_6684[iParam0 /*14*/].f_7;
		uVar10 = func_968(uVar1);
		func_976(iVar0, uVar2, uVar3, uVar4, iVar7, bVar6, iVar5, 3, iVar8, iVar9, Global_78588.f_6684[iParam0 /*14*/].f_11, Global_78588.f_6684[iParam0 /*14*/].f_12, uVar10);
	}
	if (BitTest(uVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_976(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12)//Position - 0x9A8C3
{
	struct<15> Var0;
	int iVar1;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == bParam5)
	{
		return 0;
	}
	if (((bParam5 != 144 && bParam5 != 0) && bParam5 != 1) && bParam5 != 2)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		Var0.f_10 = uParam1;
		Var0.f_11 = uParam2;
		Var0.f_9 = uParam3;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__::func_713(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = uParam12;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, bParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		__LIB_17__::func_247(bParam5);
		return 1;
	}
	return 0;
}

int func_977(int iParam0)//Position - 0x9AA20
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_4824[iParam0 /*11*/];
	uVar1 = Global_78588.f_4824[iParam0 /*11*/].f_6;
	if (BitTest(uVar1, 5))
	{
		if (__LIB_17__::func_672() == iVar0)
		{
			func_963();
			return -2;
		}
	}
	if (!__LIB_16__::func_982(iVar0))
	{
		iVar2 = Global_78588.f_4824[iParam0 /*11*/].f_1;
		bVar3 = Global_78588.f_4824[iParam0 /*11*/].f_2;
		iVar4 = Global_78588.f_4824[iParam0 /*11*/].f_3;
		iVar5 = Global_78588.f_4824[iParam0 /*11*/].f_4;
		iVar6 = Global_78588.f_4824[iParam0 /*11*/].f_5;
		uVar7 = func_968(uVar1);
		func_978(iVar0, iVar4, bVar3, iVar2, 3, iVar5, iVar6, Global_78588.f_4824[iParam0 /*11*/].f_8, Global_78588.f_4824[iParam0 /*11*/].f_9, Global_78588.f_4824[iParam0 /*11*/].f_10, uVar7);
	}
	if (BitTest(uVar1, 5))
	{
		return -1;
	}
	return -2;
}

int func_978(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)//Position - 0x9AB10
{
	struct<15> Var0;
	int iVar1;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = __LIB_0__::func_713(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = uParam10;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, bParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = uParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		__LIB_17__::func_247(bParam2);
		return 1;
	}
	return 0;
}

int func_979(int iParam0)//Position - 0x9AC61
{
	var uVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_78588.f_4824[iParam0 /*11*/];
	if (__LIB_0__::func_374(__LIB_17__::func_341()))
	{
		if (BitTest(uVar0, __LIB_17__::func_341()))
		{
			iVar1 = Global_78588.f_4824[iParam0 /*11*/].f_1;
			if (iVar1 == __LIB_17__::func_341())
			{
				return -2;
			}
			if (__LIB_0__::func_769(iVar1))
			{
				return Global_78588.f_4824[iParam0 /*11*/].f_2;
			}
		}
	}
	return Global_78588.f_4824[iParam0 /*11*/].f_3;
}

int func_981(int iParam0)//Position - 0x9AD3F
{
	if (iParam0 == -1)
	{
		return -2;
	}
	func_730(Global_78588.f_109[iParam0 /*4*/], Global_78588.f_109[iParam0 /*4*/].f_1, 0, Global_78588.f_109[iParam0 /*4*/].f_2);
	return -2;
}

int func_982(int iParam0)//Position - 0x9AD7E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	bVar2 = false;
	if (Global_78588.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_984(iVar0, iVar1, 2))
		{
			return -2;
		}
		func_730(iVar0, iVar1, 2, -1);
	}
	else
	{
		if (!func_984(iVar0, iVar1, 2))
		{
			return -2;
		}
		func_983(iVar0, iVar1, 2);
	}
	return -2;
}

int func_983(int iParam0, int iParam1, bool bParam2)//Position - 0x9AE07
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_38__::func_743(iParam0);
	iVar1 = __LIB_38__::func_743(iParam1);
	iVar2 = __LIB_13__::func_95(iVar0, iVar1);
	iVar3 = 0;
	if (iVar2 != 10)
	{
		if (BitTest(Global_113386.f_18103.f_175[iVar2 /*19*/].f_2, bParam2))
		{
			MISC::CLEAR_BIT(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_2), bParam2);
			iVar3 = 1;
		}
		if (!BitTest(Global_113386.f_18103.f_175[iVar2 /*19*/].f_2, 0))
		{
			Global_113386.f_18103.f_175[iVar2 /*19*/].f_3 = -1;
		}
	}
	return iVar3;
}

int func_984(int iParam0, int iParam1, int iParam2)//Position - 0x9AE87
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_38__::func_743(iParam0);
	iVar1 = __LIB_38__::func_743(iParam1);
	iVar2 = __LIB_13__::func_95(iVar0, iVar1);
	if (iVar2 == 10)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18103.f_175[iVar2 /*19*/].f_2, iParam2);
}

int func_985(int iParam0)//Position - 0x9AEC6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	bVar2 = false;
	if (Global_78588.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_984(iVar0, iVar1, 1))
		{
			return -2;
		}
		func_730(iVar0, iVar1, 1, -1);
	}
	else
	{
		if (!func_984(iVar0, iVar1, 1))
		{
			return -2;
		}
		func_983(iVar0, iVar1, 1);
	}
	return -2;
}

int func_986(int iParam0)//Position - 0x9AF4F
{
	if (iParam0 == -1)
	{
		return -2;
	}
	func_987(Global_78588.f_3590[iParam0 /*2*/], Global_78588.f_3590[iParam0 /*2*/].f_1, 0);
	return -2;
}

void func_987(int iParam0, int iParam1, bool bParam2)//Position - 0x9AF83
{
	int iVar0;
	if (func_994(iParam1, iParam0, &iVar0))
	{
		func_992(iParam1, iParam0, 1);
		func_991(iParam1, iParam0, 50);
		if (bParam2)
		{
			func_989(iParam0, iParam1, (5f * 60f));
		}
		__LIB_17__::func_904(iVar0, 0);
		MISC::SET_BIT(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_18), 1);
		Global_96176++;
	}
}

void func_989(int iParam0, int iParam1, float fParam2)//Position - 0x9B014
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar0 = __LIB_38__::func_743(iParam0);
	iVar1 = __LIB_38__::func_743(iParam1);
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

void func_991(int iParam0, int iParam1, int iParam2)//Position - 0x9B0B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_38__::func_743(iParam0);
	iVar1 = __LIB_38__::func_743(iParam1);
	iVar2 = __LIB_13__::func_95(iVar0, iVar1);
	Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = iParam2;
	if (Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 < 0)
	{
		Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = 0;
	}
	if (Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 > 100)
	{
		Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 = 100;
	}
}

void func_992(int iParam0, int iParam1, int iParam2)//Position - 0x9B12C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_38__::func_743(iParam0);
	iVar1 = __LIB_38__::func_743(iParam1);
	iVar2 = __LIB_13__::func_95(iVar0, iVar1);
	if (iVar2 != 10)
	{
		__LIB_1__::func_31(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5));
		Global_113386.f_18103.f_175[iVar2 /*19*/].f_8 = iParam2;
	}
}

int func_994(int iParam0, int iParam1, var uParam2)//Position - 0x9B188
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_38__::func_743(iParam0);
	iVar1 = __LIB_38__::func_743(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = __LIB_13__::func_95(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

int func_995(int iParam0)//Position - 0x9B1CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	iVar1 = Global_78588.f_3590[iParam0 /*2*/].f_1;
	switch (iVar0)
	{
		case 0:
			iVar2 = 0;
			break;
		case 1:
			iVar2 = 1;
			break;
		case 2:
			iVar2 = 2;
			break;
		default:
			break;
	}
	__LIB_0__::func_506(iVar1, iVar2);
	return -2;
}

int func_996(int iParam0)//Position - 0x9B236
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	bVar2 = false;
	if (Global_78588.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	switch (iVar0)
	{
		case 0:
			iVar3 = 0;
			break;
		case 1:
			iVar3 = 1;
			break;
		case 2:
			iVar3 = 2;
			break;
		default:
			break;
	}
	__LIB_37__::func_473(iVar1, iVar3, bVar2);
	return -2;
}

int func_1002(int iParam0)//Position - 0x9B58B
{
	int iVar0;
	bool bVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	if (iVar0 == 263)
	{
		return -2;
	}
	bVar1 = false;
	if (Global_78588.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	__LIB_14__::func_622(iVar0, bVar1, 0);
	return -2;
}

int func_1003(int iParam0)//Position - 0x9B5DD
{
	int iVar0;
	bool bVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = __LIB_6__::func_155(Global_78588.f_3590[iParam0 /*2*/], 0);
	bVar1 = false;
	if (Global_78588.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	func_1004(0, iVar0, bVar1, 1);
	func_1004(2, iVar0, bVar1, 1);
	func_1004(1, iVar0, bVar1, 1);
	return -2;
}

void func_1004(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x9B63B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_374(iParam0))
	{
		iVar0 = __LIB_17__::func_917(iParam0, iParam1);
		iVar1 = __LIB_3__::func_371(iParam1);
		iVar2 = __LIB_0__::func_160(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		__LIB_17__::func_920(iParam0, iParam1, iVar0);
		if (bParam3)
		{
			func_1005(iParam0, iParam1);
		}
	}
}

void func_1005(int iParam0, int iParam1)//Position - 0x9B695
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = __LIB_0__::func_430(iParam1, iVar0);
	while (iVar1 != 0)
	{
		__LIB_32__::func_135(iParam0, iParam1, iVar1, 1);
		iVar0++;
		iVar1 = __LIB_0__::func_430(iParam1, iVar0);
	}
}

int func_1011(int iParam0)//Position - 0x9C5C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	iVar2 = 0;
	if (Global_78588.f_109[iParam0 /*4*/].f_2 == 1)
	{
		iVar2 = 1;
	}
	__LIB_0__::func_544(iVar0, iVar1, iVar2, 1, 0);
	return -2;
}

int func_1017(int iParam0)//Position - 0xA0A78
{
	int iVar0;
	bool bVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	if (iVar0 == 263)
	{
		return -2;
	}
	bVar1 = false;
	if (Global_78588.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	__LIB_16__::func_587(iVar0, 0, bVar1);
	return -2;
}

int func_1018(int iParam0)//Position - 0xA0ACA
{
	int iVar0;
	bool bVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	if (iVar0 == 263)
	{
		return -2;
	}
	bVar1 = false;
	if (Global_78588.f_3590[iParam0 /*2*/].f_1 == 1)
	{
		bVar1 = true;
	}
	__LIB_16__::func_587(iVar0, 1, bVar1);
	return -2;
}

int func_1019(int iParam0)//Position - 0xA0B1C
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	if (iVar0 == 0 || iVar0 == 235)
	{
		return -2;
	}
	iVar1 = Global_78588.f_3590[iParam0 /*2*/].f_1;
	if (iVar1 < 0)
	{
		return -2;
	}
	__LIB_0__::func_71(iVar0, iVar1);
	return -2;
}

int func_1020(int iParam0)//Position - 0xA0B7B
{
	struct<8> Var0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	Var0 = { Global_78588.f_4160[iParam0 /*12*/] };
	iVar1 = Global_78588.f_4160[iParam0 /*12*/].f_8;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&Var0)) > 0)
	{
		return -2;
	}
	SCRIPT::REQUEST_SCRIPT(&Var0);
	if (!SCRIPT::HAS_SCRIPT_LOADED(&Var0))
	{
		return -1;
	}
	SYSTEM::START_NEW_SCRIPT(&Var0, iVar1);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var0);
	return -2;
}

int func_1021(int iParam0, int iParam1)//Position - 0xA0BEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = __LIB_17__::func_900(iParam0);
	iVar1 = Global_78588.f_109[iParam0 /*4*/];
	iVar2 = Global_91229[iVar1 /*34*/].f_6;
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 4))
	{
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
	}
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
	if (__LIB_0__::func_134())
	{
		return -1;
	}
	else if (Global_100441.f_1 == iParam0)
	{
		if (Global_100441 == 11)
		{
			func_1103(iVar1);
			func_744(iParam0, iVar0, 0);
			return Global_78588.f_109[iParam0 /*4*/].f_2;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iVar0 == -1 || !BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return -1;
		}
	}
	if (!__LIB_0__::func_374(__LIB_17__::func_341()))
	{
		return -1;
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_38__::func_22(iParam0);
		if (iVar0 == -1)
		{
			return -1;
		}
	}
	uVar3 = Global_91193[iVar0 /*5*/].f_3;
	if (__LIB_43__::func_520(iVar1))
	{
		return -1;
	}
	if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
	{
		if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 1))
		{
			if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 3))
			{
				if (__LIB_0__::func_2(0) || BitTest(Global_91229[iVar1 /*34*/].f_15, 19))
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 5;
				}
				if (iVar4 == 5)
				{
					if (Global_43600 != -1)
					{
						uVar3 = Global_43600;
						Global_43600 = -1;
						iVar5 = 1;
					}
					else
					{
						iVar5 = __LIB_0__::func_782(&uVar3, iVar4, 0, 0, 0);
					}
				}
				else
				{
					iVar5 = __LIB_0__::func_782(&uVar3, iVar4, 0, 0, 0);
				}
				Global_91193[iVar0 /*5*/].f_3 = uVar3;
				if (iVar5 == 2)
				{
					return -1;
				}
				else if (iVar5 == 0)
				{
					return Global_78588.f_109[iParam0 /*4*/].f_2;
				}
			}
			MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 1);
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/])
			{
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 2);
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 4);
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			}
		}
		if (!Global_151970)
		{
			return -1;
		}
		if (iVar1 != 28)
		{
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 4))
			{
				if (!Global_63154 && (iVar1 != 27 || !Global_63159))
				{
					if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 7))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
						{
							__LIB_17__::func_913();
							return -1;
						}
						else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_stat_watcher")))
						{
							SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"), 1828);
							SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
							MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 7);
						}
						else
						{
							return -1;
						}
					}
				}
				else if (iVar1 == 27)
				{
					MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 7);
				}
			}
		}
		if (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar2))
		{
			return -1;
		}
		Global_91193[iVar0 /*5*/].f_4 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iVar2, 51000);
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar2);
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 2);
		iVar6 = 0;
		if (BitTest(Global_91229[iVar1 /*34*/].f_15, 18))
		{
			iVar6 = 1;
		}
		func_455(iParam0, iVar0, iVar1, iParam1, iVar6);
		return -1;
	}
	bVar7 = BitTest(Global_91193[iVar0 /*5*/].f_1, 5);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_91193[iVar0 /*5*/].f_4))
	{
		if (bVar7)
		{
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1) && Global_100477 == 0)
			{
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	bVar8 = BitTest(Global_91193[iVar0 /*5*/].f_1, 4);
	if (bVar8 && bVar7)
	{
		bVar7 = false;
	}
	if (!bVar8 && !bVar7)
	{
		bVar7 = true;
	}
	if (bVar8)
	{
		return func_368(iParam0, iVar0, iVar1, 0, 0);
	}
	return func_320(iParam0, iVar0, iVar1, 0);
}

int func_1024(int iParam0, int iParam1)//Position - 0xA112C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = __LIB_17__::func_900(iParam1);
	iVar1 = Global_78588.f_109[iParam1 /*4*/];
	iVar2 = Global_91229[iVar1 /*34*/].f_6;
	if (Global_97361)
	{
		if (Global_97363 == iVar1)
		{
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 4))
			{
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
			}
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
		}
	}
	if (__LIB_0__::func_134())
	{
		return -1;
	}
	else if (Global_100441.f_1 == iParam1)
	{
		if (Global_100441 == 11)
		{
			func_1103(iVar1);
			func_744(iParam1, iVar0, 1);
			Global_63156 = 0;
			Global_63175 = 0;
			return Global_78588.f_109[iParam1 /*4*/].f_2;
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_38__::func_22(iParam1);
		if (iVar0 == -1)
		{
			return -1;
		}
	}
	iVar3 = Global_91193[iVar0 /*5*/].f_2;
	if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 3))
	{
		if (iVar3 == -1)
		{
			if (Global_94426[iVar1 /*2*/])
			{
				return -1;
			}
			uVar4 = Global_91229[iVar1 /*34*/].f_11;
			iVar5 = Global_91229[iVar1 /*34*/].f_10;
			if (iVar5 == 263)
			{
				Global_91229[iVar1 /*34*/].f_10 = 162;
				iVar5 = 162;
			}
			if (__LIB_43__::func_520(iVar1))
			{
				return -1;
			}
			func_1030(&iVar3, iVar5, iVar1, iParam0, 6, uVar4);
			if (iVar3 == -1)
			{
				return -1;
			}
			func_729(iVar1);
			Global_91193[iVar0 /*5*/].f_2 = iVar3;
		}
	}
	if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
	{
		if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 1))
		{
			if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 3))
			{
				if (!func_728(iVar3))
				{
					if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/])
					{
						MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 2);
						MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 4);
						MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 6);
						if (Global_97363 == iVar1)
						{
							__LIB_0__::func_468(iVar1);
						}
					}
					else if (func_1028(iVar1))
					{
						if (!func_769(func_1027(iVar1)))
						{
							__LIB_38__::func_36(iVar3);
							__LIB_38__::func_42(iVar1);
							__LIB_32__::func_133(iParam1);
							return Global_78588.f_109[iParam1 /*4*/].f_2;
						}
					}
					return -1;
				}
			}
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 4))
			{
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
			}
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
			MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 1);
			if (!Global_151970)
			{
				return -1;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (ENTITY::GET_ENTITY_HEALTH(iVar6) < 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iVar6, 1, 0);
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar6) < 1f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar6, 1f);
						}
						if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar6) < 1f)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar6, 1f);
						}
						if ((!BitTest(Global_91229[iVar1 /*34*/].f_15, 13) && !BitTest(Global_91229[iVar1 /*34*/].f_15, 25)) || (iVar1 == 15 && __LIB_17__::func_341() == 1))
						{
							if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar6))
							{
								__LIB_0__::func_213(iVar6, 2.5f, 2, 0.5f, 1, 1, 0);
							}
						}
					}
				}
			}
			return -1;
		}
		if (iVar1 != 28 && iVar1 != 28)
		{
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 4))
			{
				if (!BitTest(Global_91193[iVar0 /*5*/].f_1, 7))
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
					{
						__LIB_17__::func_913();
						return -1;
					}
					else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_stat_watcher")))
					{
						SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"), 1828);
						SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
						MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 7);
					}
					else
					{
						return -1;
					}
				}
			}
		}
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
		if (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar2))
		{
			return -1;
		}
		if ((iVar1 != 15 && iVar1 != 67) && iVar1 != 20)
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				iVar7 = STREAMING::GET_PLAYER_SWITCH_TYPE();
				if (iVar7 != 3)
				{
					iVar8 = STREAMING::GET_PLAYER_SWITCH_STATE();
					if (iVar8 < 8)
					{
						return -1;
					}
				}
			}
		}
		if (Global_78322 && !Global_78337)
		{
			return -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 13))
				{
					if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 24))
					{
						if (!(iVar1 == 15 && __LIB_17__::func_341() == 1))
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
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							return -1;
						}
					}
				}
			}
			if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
			{
				if (Global_78563 == -1)
				{
					Global_78563 = MISC::GET_GAME_TIMER();
					return -1;
				}
				else if ((MISC::GET_GAME_TIMER() - Global_78563) < 400)
				{
					return -1;
				}
			}
		}
		if (Global_78338)
		{
			func_1025();
			if (!Global_78323)
			{
				return -1;
			}
			return -1;
		}
		Global_91193[iVar0 /*5*/].f_4 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iVar2, 51000);
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar2);
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 2);
		func_455(iParam1, iVar0, iVar1, iParam0, 1);
		Global_78563 = -1;
		return -1;
	}
	bVar9 = BitTest(Global_91193[iVar0 /*5*/].f_1, 5);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_91193[iVar0 /*5*/].f_4))
	{
		if (bVar9)
		{
			if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1) && Global_100477 == 0)
			{
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	bVar10 = BitTest(Global_91193[iVar0 /*5*/].f_1, 4);
	if (bVar10 && bVar9)
	{
		bVar9 = false;
	}
	if (!(bVar10 || bVar9))
	{
		bVar9 = true;
	}
	if (bVar10)
	{
		return func_368(iParam1, iVar0, iVar1, 1, BitTest(Global_91193[iVar0 /*5*/].f_1, 6));
	}
	return func_320(iParam1, iVar0, iVar1, 1);
}

void func_1025()//Position - 0xA1703
{
	if (!Global_78318)
	{
		Global_78318 = 1;
	}
}

int func_1027(int iParam0)//Position - 0xA17A2
{
	switch (iParam0)
	{
		case 54:
			return 0;
			break;
		case 55:
			return 1;
			break;
		case 56:
			return 2;
			break;
		case 57:
			return 3;
			break;
		case 58:
			return 4;
			break;
	}
	return 5;
}

int func_1028(int iParam0)//Position - 0xA17F3
{
	switch (iParam0)
	{
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 1;
			break;
	}
	return 0;
}

void func_1030(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5)//Position - 0xA184C
{
	bool bVar0;
	bool bVar1;
	func_738(iParam0, iParam2, uParam3, iParam4, uParam5);
	Global_97374[*iParam0 /*17*/].f_3 = 0;
	Global_97374[*iParam0 /*17*/].f_9 = iParam1;
	__LIB_38__::func_931(iParam1);
	if (Global_97374[*iParam0 /*17*/].f_8 != 7)
	{
		bVar0 = false;
		bVar1 = false;
		if (BitTest(Global_97374[*iParam0 /*17*/].f_8, 0))
		{
			__LIB_38__::func_936(iParam1, 1, 0, bVar0);
			bVar0 = true;
		}
		if (BitTest(Global_97374[*iParam0 /*17*/].f_8, 1))
		{
			__LIB_38__::func_936(iParam1, 1, 1, bVar0);
			if (bVar0 == 1)
			{
				bVar1 = true;
			}
			bVar0 = true;
		}
		if (BitTest(Global_97374[*iParam0 /*17*/].f_8, 2) && !bVar1)
		{
			__LIB_38__::func_936(iParam1, 1, 2, bVar0);
		}
	}
	else
	{
		__LIB_38__::func_936(iParam1, 0, 0, 0);
	}
	if (__LIB_38__::func_57(iParam2))
	{
		__LIB_38__::func_934(iParam1, 3);
	}
	else
	{
		__LIB_38__::func_934(iParam1, 0);
	}
}

int func_1035(int iParam0)//Position - 0xA1C4D
{
	if (iParam0 == -1)
	{
		return -2;
	}
	__LIB_13__::func_311(&(Global_78588.f_4160[iParam0 /*12*/]), 1);
	return -2;
}

int func_1040(int iParam0)//Position - 0xA1EE0
{
	if (iParam0 == -1)
	{
		return -2;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_78588.f_4160[iParam0 /*12*/]), ""))
	{
		__LIB_0__::func_697(&(Global_78588.f_4160[iParam0 /*12*/]), (Global_78588.f_4160[iParam0 /*12*/].f_8 % 1000000), 0, -1, Global_78588.f_4160[iParam0 /*12*/].f_9, Global_78588.f_4160[iParam0 /*12*/].f_10, Global_78588.f_4160[iParam0 /*12*/].f_11, 0, 0);
	}
	else
	{
		return -2;
	}
	return -2;
}

int func_1041(int iParam0)//Position - 0xA1F63
{
	int iVar0;
	iVar0 = iParam0;
	MISC::CLEAR_BIT(&(Global_113386.f_18574[iVar0 /*6*/]), 1);
	return -2;
}

int func_1042(int iParam0)//Position - 0xA1F82
{
	int iVar0;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	MISC::SET_BIT(&(Global_113386.f_18574[iVar0 /*6*/]), 1);
	if (Global_78588.f_109[iParam0 /*4*/].f_1 == 1)
	{
		__LIB_14__::func_864(iVar0);
	}
	return -2;
}

int func_1045(int iParam0)//Position - 0xA2033
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 24)
	{
		return -2;
	}
	uVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	if (CLOCK::GET_CLOCK_HOURS() >= iVar0)
	{
		return uVar1;
	}
	return uVar2;
}

int func_1046(int iParam0, int iParam1)//Position - 0xA209A
{
	var uVar0;
	if (!Global_78588.f_10[iParam0])
	{
		uVar0 = iParam1;
		Global_78588.f_76[iParam0] = uVar0;
		Global_78588.f_10[iParam0] = 1;
	}
	else if (__LIB_42__::func_685(Global_78588.f_76[iParam0]))
	{
		Global_78588.f_10[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_1050(int iParam0, int iParam1)//Position - 0xA22EB
{
	int iVar0;
	int iVar1;
	if (!Global_78588.f_10[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = __LIB_39__::func_706();
		if (__LIB_0__::func_199(iVar1) > iVar0)
		{
			__LIB_42__::func_683(&iVar1, 0, 0, 0, 1, 0, 0);
		}
		if (__LIB_0__::func_199(iVar1) != iVar0)
		{
			__LIB_17__::func_875(&iVar1, 0);
			__LIB_17__::func_874(&iVar1, 0);
			__LIB_17__::func_873(&iVar1, iVar0);
		}
		Global_78588.f_76[iParam0] = iVar1;
		Global_78588.f_10[iParam0] = 1;
	}
	else if (__LIB_42__::func_685(Global_78588.f_76[iParam0]))
	{
		Global_78588.f_10[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_1051(int iParam0, int iParam1)//Position - 0xA2398
{
	if (!Global_78588.f_10[iParam0])
	{
		if (iParam1 < 0)
		{
			return -2;
		}
		Global_78588.f_43[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
		Global_78588.f_10[iParam0] = 1;
	}
	else if (MISC::GET_GAME_TIMER() > Global_78588.f_43[iParam0])
	{
		Global_78588.f_10[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_1052(int iParam0, int iParam1)//Position - 0xA23FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == -1)
	{
		return -2;
	}
	if (!Global_78588.f_10[iParam0])
	{
		Global_78588.f_76[iParam0] = __LIB_39__::func_706();
		iVar0 = Global_78588.f_109[iParam1 /*4*/].f_2;
		iVar1 = Global_78588.f_109[iParam1 /*4*/].f_1;
		iVar2 = Global_78588.f_109[iParam1 /*4*/];
		__LIB_42__::func_683(&(Global_78588.f_76[iParam0]), iVar0, iVar1, iVar2, 0, 0, 0);
		Global_78588.f_10[iParam0] = 1;
	}
	else if (__LIB_11__::func_761(__LIB_39__::func_706(), Global_78588.f_76[iParam0]))
	{
		Global_78588.f_10[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_1053(int iParam0)//Position - 0xA24A0
{
	var uVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	uVar0 = Global_78588.f_109[iParam0 /*4*/].f_1;
	iVar1 = Global_78588.f_109[iParam0 /*4*/];
	if (BitTest(uVar0, 0))
	{
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(iVar1), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
	}
	if (BitTest(uVar0, 1))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), __LIB_0__::func_198(iVar1), CLOCK::GET_CLOCK_SECONDS());
	}
	if (BitTest(uVar0, 2))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), __LIB_0__::func_615(iVar1));
	}
	if (BitTest(uVar0, 3))
	{
		CLOCK::SET_CLOCK_DATE(__LIB_0__::func_614(iVar1), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
	}
	if (BitTest(uVar0, 4))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), __LIB_0__::func_553(iVar1), CLOCK::GET_CLOCK_YEAR());
	}
	if (BitTest(uVar0, 5))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), __LIB_0__::func_214(iVar1));
	}
	return -2;
}

int func_1054(int iParam0)//Position - 0xA2567
{
	int iVar0;
	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 57)
	{
		return -2;
	}
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT[iVar0] = 1;
	return -2;
}

int func_1055(int iParam0)//Position - 0xA25A1
{
	int iVar0;
	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 57)
	{
		return -2;
	}
	if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT[iVar0])
	{
		return -1;
	}
	return -2;
}

int func_1056(int iParam0)//Position - 0xA25E2
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 32)
	{
		return -2;
	}
	uVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/], 2))
	{
		return uVar1;
	}
	return uVar2;
}

int func_1057(int iParam0)//Position - 0xA264F
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 11)
	{
		return -2;
	}
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	uVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	uVar3 = Global_78588.f_109[iParam0 /*4*/].f_3;
	if (__LIB_0__::func_786(iVar0, iVar1))
	{
		return uVar2;
	}
	return uVar3;
}

int func_1058(int iParam0)//Position - 0xA26DB
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 13)
	{
		return -2;
	}
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	uVar3 = Global_78588.f_109[iParam0 /*4*/].f_3;
	if (__LIB_0__::func_566(iVar0) == iVar1)
	{
		return uVar2;
	}
	return uVar3;
}

int func_1059(int iParam0)//Position - 0xA274F
{
	int iVar0;
	var uVar1;
	var uVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (Global_78588.f_109[iParam0 /*4*/] % 1000000);
	if (iVar0 == -1 || iVar0 == 146)
	{
		return -2;
	}
	uVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_78588.f_109[iParam0 /*4*/].f_2;
	if (__LIB_0__::func_425(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_1060(int iParam0)//Position - 0xA27B8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 11)
	{
		return -2;
	}
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	bVar2 = false;
	if (Global_78588.f_109[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	__LIB_13__::func_782(iVar0, iVar1, bVar2);
	return -2;
}

int func_1061(int iParam0)//Position - 0xA2839
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 13)
	{
		return -2;
	}
	iVar1 = Global_78588.f_109[iParam0 /*4*/].f_1;
	__LIB_17__::func_784(iVar0, iVar1);
	return -2;
}

int func_1062(int iParam0)//Position - 0xA288A
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_109[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 146)
	{
		return -2;
	}
	iVar1 = 0;
	if (Global_78588.f_109[iParam0 /*4*/].f_1 == 1)
	{
		iVar1 = 1;
	}
	__LIB_0__::func_681(iVar0, iVar1);
	return -2;
}

int func_1063(int iParam0)//Position - 0xA28E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_78588.f_3590[iParam0 /*2*/];
	if (iVar0 == -1 || iVar0 == 32)
	{
		return -2;
	}
	if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/], 1))
	{
		return -2;
	}
	if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/], 2))
	{
		return -2;
	}
	iVar1 = Global_78588.f_3590[iParam0 /*2*/].f_1;
	iVar2 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/].f_1;
	iVar3 = Global_78588.f_12526[iVar0 /*2*/];
	iVar4 = Global_78588.f_12526[iVar0 /*2*/].f_1;
	if (iVar2 < iVar3)
	{
		return -2;
	}
	if (iVar2 > iVar4)
	{
		return -2;
	}
	iVar5 = iVar3;
	iVar6 = -1;
	while (iVar5 <= iVar4)
	{
		if (Global_78588.f_6825[iVar5 /*3*/] == 531432813)
		{
			iVar6 = Global_78588.f_6825[iVar5 /*3*/].f_2;
			iVar7 = Global_78588.f_109[iVar6 /*4*/];
			if (iVar7 == iVar1)
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/].f_1 = iVar5;
				return -2;
			}
		}
		iVar5++;
	}
	return -2;
}

int func_1064(int iParam0)//Position - 0xA2A09
{
	int iVar0;
	iVar0 = (iParam0 % 1000000);
	if (iVar0 < -2 || iVar0 > 256)
	{
		return -2;
	}
	return iVar0;
}

int func_1065(int iParam0)//Position - 0xA2A37
{
	int iVar0;
	if (iParam0 < -1 || iParam0 > 32)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/], 2))
	{
		return -2;
	}
	MISC::SET_BIT(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/]), 2);
	if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/], 1))
	{
		MISC::SET_BIT(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/]), 1);
	}
	return -2;
}

int func_1066(int iParam0)//Position - 0xA2AB9
{
	int iVar0;
	if (iParam0 < -1 || iParam0 > 32)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/], 1))
	{
		return -2;
	}
	MISC::SET_BIT(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[iVar0 /*3*/]), 1);
	return -2;
}

void func_1067()//Position - 0xA2B16
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_46++;
	if (iLocal_46 >= 94)
	{
		iLocal_46 = 0;
	}
	func_1097();
	func_1096();
	func_1090();
	if (Global_78574 > -1)
	{
		if (Global_78576 == 1)
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = Global_78574;
			if (((iVar2 == 76 || iVar2 == 4) || iVar2 == 84) || iVar2 == 50)
			{
				iVar0 = 1;
			}
			func_1078(Global_78325, 0, 0, iVar0, iVar1, 0);
		}
	}
	func_1068();
}

void func_1068()//Position - 0xA2B96
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
	if (!iLocal_52)
	{
		STATS::STAT_GET_INT(joaat("SP0_KILLS_INNOCENTS"), &iVar0, -1);
		STATS::STAT_GET_INT(joaat("SP0_KILLS_COP"), &iVar1, -1);
		STATS::STAT_GET_INT(joaat("SP0_KILLS_SWAT"), &iVar2, -1);
		STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_CARS"), &iVar4, -1);
		STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BIKES"), &iVar5, -1);
		STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_QUADBIKES"), &iVar6, -1);
		STATS::STAT_GET_INT(joaat("SP0_LARGE_ACCIDENTS"), &iVar7, -1);
		iLocal_48 = iVar0;
		iLocal_49 = (((iVar0 + iVar1) + iVar2) + iVar3);
		iLocal_50 = ((iVar4 + iVar5) + iVar6);
		iLocal_51 = iVar7;
		iLocal_52 = 1;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_47)
	{
		func_1077();
		func_1076();
		func_1075();
		func_1073();
		STATS::STAT_GET_INT(joaat("SP0_KILLS_INNOCENTS"), &iVar0, -1);
		STATS::STAT_GET_INT(joaat("SP0_KILLS_COP"), &iVar1, -1);
		STATS::STAT_GET_INT(joaat("SP0_KILLS_SWAT"), &iVar2, -1);
		STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_CARS"), &iVar4, -1);
		STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BIKES"), &iVar5, -1);
		STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_QUADBIKES"), &iVar6, -1);
		STATS::STAT_GET_INT(joaat("SP0_LARGE_ACCIDENTS"), &iVar7, -1);
		if (iLocal_48 < iVar0)
		{
			iVar8 = 0;
			while (iVar8 < (iVar0 - iLocal_48))
			{
				__LIB_39__::func_474(1);
				iVar8++;
			}
			iLocal_48 = iVar0;
		}
		if (iLocal_49 < (((iVar0 + iVar1) + iVar2) + iVar3))
		{
			iVar8 = 0;
			while (iVar8 < ((((iVar0 + iVar1) + iVar2) + iVar3) - iLocal_49))
			{
				__LIB_39__::func_474(4);
				iVar8++;
			}
			iLocal_49 = (((iVar0 + iVar1) + iVar2) + iVar3);
		}
		if (iLocal_50 < ((iVar4 + iVar5) + iVar6))
		{
			iVar8 = 0;
			while (iVar8 < (((iVar4 + iVar5) + iVar6) - iLocal_50))
			{
				__LIB_39__::func_474(7);
				iVar8++;
			}
			iLocal_50 = ((iVar4 + iVar5) + iVar6);
		}
		if (iLocal_51 < iVar7)
		{
			iVar8 = 0;
			while (iVar8 < (iVar7 - iLocal_51))
			{
				__LIB_39__::func_474(9);
				iVar8++;
			}
			iLocal_51 = iVar7;
		}
		if (__LIB_17__::func_341() == 0 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 4)
			{
				__LIB_39__::func_474(0);
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2 && (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("ShopRobberies")) <= 0 || __LIB_16__::func_985(5) <= 0))
			{
				__LIB_39__::func_474(2);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 1)
			{
				__LIB_39__::func_474(8);
			}
		}
		iLocal_47 += 2000;
	}
}

void func_1073()//Position - 0xA2FF0
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = iVar1;
		switch (iVar0)
		{
			case 0:
				func_1074(&Global_96909, 1, 5760000);
				break;
			case 1:
				func_1074(&Global_96911, 3, 5760000);
				break;
			case 2:
				func_1074(&Global_96915, 1, 5760000);
				break;
			case 3:
				func_1074(&Global_96917, 1, 300000);
				break;
			case 4:
				func_1074(&Global_96919, 1, 5760000);
				break;
			case 5:
				func_1074(&Global_96921, 1, 5760000);
				break;
			case 6:
				func_1074(&Global_96923, 1, 5760000);
				break;
			case 7:
				func_1074(&Global_96925, 2, 5760000);
				break;
			case 8:
				func_1074(&Global_96928, 1, 5760000);
				break;
			case 9:
				func_1074(&Global_96930, 1, 5760000);
				break;
		}
		iVar1++;
	}
}

void func_1074(var uParam0, int iParam1, int iParam2)//Position - 0xA30F2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if ((*uParam0)[iVar0] > 0)
		{
			if ((MISC::GET_GAME_TIMER() - (*uParam0)[iVar0]) > iParam2)
			{
				(*uParam0)[iVar0] = 0;
			}
			else
			{
				iVar0 = iParam1;
			}
		}
		iVar0++;
	}
}

void func_1075()//Position - 0xA3135
{
	if (Global_96908 > 0 && (MISC::GET_GAME_TIMER() - Global_96908) > 5760000)
	{
		Global_96908 = 0;
	}
}

void func_1076()//Position - 0xA315E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_96906[iVar0] > 0)
		{
			if ((MISC::GET_GAME_TIMER() - Global_96906[iVar0]) > 5760000)
			{
				Global_96906[iVar0] = 0;
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar0++;
	}
}

void func_1077()//Position - 0xA31A7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_96903[iVar0] > 0)
		{
			if ((MISC::GET_GAME_TIMER() - Global_96903[iVar0]) > 5760000)
			{
				Global_96903[iVar0] = 0;
			}
			else
			{
				iVar0 = 2;
			}
		}
		iVar0++;
	}
}

void func_1078(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA31F0
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
				if (fLocal_21 > fVar0)
				{
					Global_78575 = MISC::GET_GAME_TIMER();
					Local_22 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_21 = 0f;
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
				iVar11 = __LIB_17__::func_341();
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
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (__LIB_0__::func_95(&Var4) > fLocal_24)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_22.f_0, (Local_22.f_1 + fLocal_23));
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
					fLocal_21 = 0f;
				}
			}
			else
			{
				__LIB_0__::func_55();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_1090()//Position - 0xA39B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (Global_78322)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&Global_78325, "NONE" /* GXT: None */))
		{
			if (Global_78335 == -1)
			{
				func_1095(&Global_78335, 2);
			}
			else
			{
				switch (__LIB_37__::func_231(Global_78335))
				{
					case 1:
						if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							iVar0 = __LIB_17__::func_341();
							if (__LIB_0__::func_374(iVar0))
							{
								if (Global_78331[iVar0] != -1)
								{
									SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(Global_91229[Global_78324 /*34*/].f_6);
									if (Global_78331[iVar0] == 0)
									{
										CUTSCENE::REQUEST_CUTSCENE(&Global_78325, 8);
									}
									else
									{
										iVar1 = Global_78331[iVar0];
										CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(&Global_78325, iVar1, 8);
									}
									if (Global_78324 != -1)
									{
										if (BitTest(Global_2883591[Global_78324], 2))
										{
											STREAMING::SET_SRL_FORCE_PRESTREAM(1);
										}
										else if (BitTest(Global_91229[Global_78324 /*34*/].f_15, 29))
										{
											STREAMING::SET_SRL_FORCE_PRESTREAM(3);
										}
										else
										{
											STREAMING::SET_SRL_FORCE_PRESTREAM(2);
										}
									}
									else
									{
										STREAMING::SET_SRL_FORCE_PRESTREAM(2);
									}
									Global_78338 = 1;
									Global_78337 = 1;
									__LIB_36__::func_981(Global_78335, 1);
								}
							}
						}
						break;
					case 2:
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::SET_SRL_FORCE_PRESTREAM(0);
						Global_78338 = 0;
						Global_78337 = 0;
						__LIB_36__::func_981(Global_78335, 0);
						break;
					}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!CUTSCENE::IS_CUTSCENE_PLAYBACK_FLAG_SET(1))
				{
					while (Global_78517 > 0)
					{
						iVar2 = (Global_78517 - 1);
						if (!PED::IS_PED_INJURED(Global_78518[iVar2 /*2*/].f_1))
						{
							func_1092(&(Global_78344[Global_78518[iVar2 /*2*/] /*6*/]), Global_78518[iVar2 /*2*/].f_1, 0, 2);
						}
						Global_78518[iVar2 /*2*/] = -1;
						Global_78518[iVar2 /*2*/].f_1 = 0;
						Global_78517 = (Global_78517 - 1);
					}
					while (Global_78503 > 0)
					{
						iVar3 = (Global_78503 - 1);
						if (Global_78504[iVar3 /*3*/].f_2 != -99)
						{
							func_1091(&(Global_78344[Global_78504[iVar3 /*3*/] /*6*/]), Global_78504[iVar3 /*3*/].f_1, Global_78504[iVar3 /*3*/].f_2);
						}
						Global_78504[iVar3 /*3*/] = -1;
						Global_78504[iVar3 /*3*/].f_1 = 0;
						Global_78504[iVar3 /*3*/].f_2 = -99;
						Global_78503 = (Global_78503 - 1);
					}
					while (Global_78381 > 0)
					{
						iVar4 = (Global_78381 - 1);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(&(Global_78344[Global_78382[iVar4 /*4*/] /*6*/]), Global_78382[iVar4 /*4*/].f_1, Global_78382[iVar4 /*4*/].f_2, Global_78382[iVar4 /*4*/].f_3, 0);
						Global_78382[iVar4 /*4*/] = -1;
						Global_78382[iVar4 /*4*/].f_1 = 0;
						Global_78382[iVar4 /*4*/].f_2 = 0;
						Global_78382[iVar4 /*4*/].f_3 = 0;
						Global_78381 = (Global_78381 - 1);
					}
					while (Global_78529 > 0)
					{
						iVar5 = (Global_78529 - 1);
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(&(Global_78344[Global_78530[iVar5 /*4*/] /*6*/]), Global_78530[iVar5 /*4*/].f_1, Global_78530[iVar5 /*4*/].f_2, Global_78530[iVar5 /*4*/].f_3, 0);
						Global_78530[iVar5 /*4*/] = -1;
						Global_78530[iVar5 /*4*/].f_1 = 0;
						Global_78530[iVar5 /*4*/].f_2 = 0;
						Global_78530[iVar5 /*4*/].f_3 = 0;
						Global_78529 = (Global_78529 - 1);
					}
				}
				Global_78323 = 1;
				__LIB_37__::func_988();
			}
		}
	}
	if (Global_78336)
	{
		if (Global_78324 != -1)
		{
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_91229[Global_78324 /*34*/].f_6);
		}
		Global_78324 = -1;
		Global_78331[0] = -1;
		Global_78331[1] = -1;
		Global_78331[2] = -1;
		Global_78322 = 0;
		Global_78323 = 0;
		Global_78338 = 0;
		Global_78337 = 0;
		if (Global_78335 != -1)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			STREAMING::SET_SRL_FORCE_PRESTREAM(0);
			__LIB_42__::func_449(&Global_78335);
		}
		iVar6 = 0;
		while (iVar6 < Global_78381)
		{
			Global_78382[iVar6 /*4*/] = -1;
			Global_78382[iVar6 /*4*/].f_1 = 0;
			Global_78382[iVar6 /*4*/].f_2 = 0;
			Global_78382[iVar6 /*4*/].f_3 = 0;
			iVar6++;
		}
		Global_78381 = 0;
		iVar6 = 0;
		while (iVar6 < Global_78503)
		{
			Global_78504[iVar6 /*3*/] = -1;
			Global_78504[iVar6 /*3*/].f_1 = 0;
			Global_78504[iVar6 /*3*/].f_2 = -99;
			iVar6++;
		}
		Global_78503 = 0;
		iVar6 = 0;
		while (iVar6 < Global_78517)
		{
			Global_78518[iVar6 /*2*/] = -1;
			Global_78518[iVar6 /*2*/].f_1 = 0;
			iVar6++;
		}
		Global_78517 = 0;
		iVar6 = 0;
		while (iVar6 < Global_78529)
		{
			Global_78530[iVar6 /*4*/] = -1;
			Global_78530[iVar6 /*4*/].f_1 = 0;
			Global_78530[iVar6 /*4*/].f_2 = 0;
			Global_78530[iVar6 /*4*/].f_3 = 0;
			iVar6++;
		}
		Global_78529 = 0;
		__LIB_37__::func_988();
		iVar6 = 0;
		while (iVar6 < 3)
		{
			Global_78339[iVar6] = 0;
			iVar6++;
		}
		Global_78336 = 0;
	}
	if (Global_78338)
	{
		if (Global_78324 != -1)
		{
			if (BitTest(Global_2883591[Global_78324], 2))
			{
				STREAMING::SET_SRL_FORCE_PRESTREAM(1);
			}
			else if (BitTest(Global_91229[Global_78324 /*34*/].f_15, 29))
			{
				STREAMING::SET_SRL_FORCE_PRESTREAM(3);
			}
			else
			{
				STREAMING::SET_SRL_FORCE_PRESTREAM(2);
			}
		}
		else
		{
			STREAMING::SET_SRL_FORCE_PRESTREAM(2);
		}
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(&Global_78325))
		{
			Global_78338 = 0;
			Global_78322 = 0;
		}
	}
}

void func_1091(char* sParam0, int iParam1, int iParam2)//Position - 0xA3EA6
{
	int iVar0;
	struct<14> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	uVar2 = 9;
	uVar8 = { __LIB_0__::func_459(iParam1, iParam2) };
	iVar9 = 0;
	if (uVar8[2] == -99 && uVar8[0] == -99)
	{
		iVar9 = 1;
	}
	iVar6 = 0;
	while (iVar6 <= 14)
	{
		iVar0 = iVar6;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar2 = { __LIB_0__::func_466(iParam1, uVar8[iVar6]) };
				iVar7 = 0;
				while (iVar7 <= 8)
				{
					iVar3 = iVar7;
					iVar4 = __LIB_0__::func_40(iVar3);
					iVar5 = __LIB_0__::func_29(iVar4);
					if (uVar2[iVar7] != iVar5)
					{
						Var1 = { __LIB_12__::func_14(iParam1, 14, uVar2[iVar7], -1) };
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar7++;
				}
			}
			else
			{
				Var1 = { __LIB_12__::func_14(iParam1, iVar0, uVar8[iVar6], -1) };
				if (((iVar6 == 2 || iVar6 == 0) && iVar9) || uVar8[iVar6] == -99)
				{
					Var1.f_3 = Global_113386.f_2363.f_539[Var1.f_5 /*65*/].f_13[iVar6];
					Var1.f_4 = Global_113386.f_2363.f_539[Var1.f_5 /*65*/][iVar6];
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, __LIB_0__::func_33(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar6++;
	}
}

void func_1092(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA4006
{
	struct<50> Var0;
	int iVar1;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_1093(iParam1, &Var0, iParam3);
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

void func_1093(int iParam0, var uParam1, int iParam2)//Position - 0xA40C1
{
	int iVar0;
	var uVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_488(iParam0, &Var2, 0, -1);
	func_488(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (__LIB_0__::func_230(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_206(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &uVar1))
			{
				Var3 = { __LIB_12__::func_14(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_231(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_206(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &uVar1))
			{
				Var3 = { __LIB_12__::func_14(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (__LIB_0__::func_230(iVar4, 14, __LIB_0__::func_349(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { __LIB_12__::func_14(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_231(iVar4, 14, __LIB_0__::func_349(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { __LIB_12__::func_14(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = __LIB_0__::func_24(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { __LIB_12__::func_14(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

void func_1095(var uParam0, int iParam1)//Position - 0xA436F
{
	bool bVar0;
	int iVar1;
	if (Global_78312 < 5)
	{
		Global_78301[Global_78312 /*2*/] = 0;
		Global_78301[Global_78312 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_78312)
			{
				if (Global_78301[iVar1 /*2*/] == Global_78301[Global_78312 /*2*/])
				{
					Global_78301[Global_78312 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*uParam0 = Global_78301[Global_78312 /*2*/];
		Global_78312++;
		Global_78313 = 1;
	}
	else
	{
		*uParam0 = -1;
	}
}

void func_1096()//Position - 0xA440D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_91193[iVar0 /*5*/] != -1)
		{
			iVar1 = Global_78588.f_109[Global_91193[iVar0 /*5*/] /*4*/];
			if (iVar1 != -1)
			{
				if (Global_94426[iVar1 /*2*/])
				{
					if (Global_91229[iVar1 /*34*/].f_10 != 263)
					{
						if (Global_91229[iVar1 /*34*/].f_7 != Global_100441.f_1 || !__LIB_0__::func_134())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (__LIB_17__::func_341() <= 2)
								{
									iVar2 = Global_91229[iVar1 /*34*/].f_10;
									if (BitTest(Global_32338[iVar2 /*23*/].f_11, 19))
									{
										Var3 = { Global_32338[iVar2 /*23*/][__LIB_17__::func_341() /*3*/] };
									}
									else
									{
										Var3 = { Global_32338[iVar2 /*23*/][0 /*3*/] };
									}
									fVar4 = Global_94426[iVar1 /*2*/].f_1;
									fVar5 = (fVar4 * fVar4);
									fVar6 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var3);
									if (fVar6 > fVar5 || BitTest(Global_2883591[iVar1], 1))
									{
										Global_94426[iVar1 /*2*/] = 0;
										Global_4541526 = 0;
										if (BitTest(Global_2883591[iVar1], 1))
										{
											MISC::CLEAR_BIT(&(Global_2883591[iVar1]), 1);
										}
									}
								}
							}
						}
					}
					else
					{
						Global_94426[iVar1 /*2*/] = 0;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1097()//Position - 0xA454C
{
	if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1))
	{
		MISC::SET_BIT(&(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/]), 1);
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
	}
}

void func_1098()//Position - 0xA4590
{
	func_1099();
	__LIB_0__::func_55();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1099()//Position - 0xA45A4
{
	Global_78336 = 1;
	func_1090();
}

void func_1100()//Position - 0xA45B5
{
	Global_100476 = 0;
	Global_1574630 = MISC::GET_GAME_TIMER();
	__LIB_42__::func_627(1);
}

void func_1103(int iParam0)//Position - 0xA4A0C
{
	var uVar0;
	HUD::SET_MISSION_NAME(false, 0);
	if (Global_97363 == iParam0)
	{
		if (iParam0 != 77)
		{
			Global_97367 = 1;
		}
	}
	__LIB_13__::func_311("TRIG_FT" /* GXT: Return as Franklin or Trevor to start this mission. */, 1);
	__LIB_13__::func_311("TRIG_F" /* GXT: Return as Franklin to start this mission. */, 1);
	__LIB_13__::func_311("TRIG_T" /* GXT: Return as Trevor to start this mission. */, 1);
	__LIB_13__::func_311("TRIG_MT" /* GXT: Return as Michael or Trevor to start this mission. */, 1);
	__LIB_13__::func_311("TRIG_M" /* GXT: Return as Michael to start this mission. */, 1);
	__LIB_13__::func_311("TRIG_T" /* GXT: Return as Trevor to start this mission. */, 1);
	__LIB_37__::func_979();
	__LIB_16__::func_616();
	Global_113377 = (MISC::GET_GAME_TIMER() - 120000);
	__LIB_38__::func_42(iParam0);
	func_709(__LIB_17__::func_341());
	if (Global_96469)
	{
		Global_96469 = 0;
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_1__::func_674(1);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_BRIEF();
	__LIB_0__::func_55();
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_50(30000);
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 4);
	Global_32007 = MISC::GET_GAME_TIMER();
	Global_113386.f_2363.f_4864 = 145;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	}
	uVar0 = Global_91229[iParam0 /*34*/].f_12;
	if (__LIB_0__::func_703(uVar0, 1))
	{
		__LIB_30__::func_362(0);
		__LIB_30__::func_362(4);
		__LIB_30__::func_362(8);
		__LIB_30__::func_362(9);
		__LIB_30__::func_362(10);
	}
	if (__LIB_0__::func_703(uVar0, 2))
	{
		__LIB_30__::func_362(1);
		__LIB_30__::func_362(4);
		__LIB_30__::func_362(8);
		__LIB_30__::func_362(5);
	}
	if (__LIB_0__::func_703(uVar0, 4))
	{
		__LIB_30__::func_362(2);
		__LIB_30__::func_362(4);
		__LIB_30__::func_362(5);
		__LIB_30__::func_362(9);
		__LIB_30__::func_362(11);
	}
	if (__LIB_0__::func_703(uVar0, 8))
	{
		__LIB_30__::func_362(19);
	}
	if (__LIB_0__::func_703(uVar0, 16))
	{
		__LIB_30__::func_362(14);
	}
	if (__LIB_0__::func_703(uVar0, 32))
	{
		__LIB_30__::func_362(17);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("buddyDeathResponse");
	Global_97359 = -15;
	__LIB_25__::func_739(0);
	__LIB_7__::func_703(0);
	__LIB_17__::func_897(0);
	__LIB_0__::func_54(1, 1);
	__LIB_37__::func_978();
	Global_100166[0 /*65*/] = { Global_113386.f_2363.f_539[0 /*65*/] };
	Global_100166[1 /*65*/] = { Global_113386.f_2363.f_539[1 /*65*/] };
	Global_100166[2 /*65*/] = { Global_113386.f_2363.f_539[2 /*65*/] };
	AUDIO::TRIGGER_MUSIC_EVENT("GLOBAL_KILL_MUSIC");
	__LIB_14__::func_798();
	Global_32337 = 0;
	Global_78588.f_9 = -1;
	Global_78581 = -1;
}

