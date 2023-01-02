int func_0(int iParam0)//Position - 0xBA0A6
{
	if (Local_214.f_352.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_16);
		return StackVal;
	}
	return 0;
}

int func_1()//Position - 0xBB081
{
	if (Local_214.f_92.f_1 != 0)
	{
		Call_Loc(Local_214.f_92.f_1);
		return StackVal;
	}
	return 1;
}

int func_2(int iParam0)//Position - 0xBB0A0
{
	if (Local_214.f_92 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_92);
		return StackVal;
	}
	return 1;
}

char* func_3(var uParam0, var uParam1)//Position - 0xBB53A
{
	if (Local_214.f_47.f_2.f_2 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_214.f_47.f_2.f_2);
		return StackVal;
	}
	return "";
}

char* func_4(var uParam0, var uParam1)//Position - 0xBB562
{
	if (Local_214.f_47.f_2.f_1 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_214.f_47.f_2.f_1);
		return StackVal;
	}
	return "";
}

int func_5()//Position - 0xBBACC
{
	if (Local_214.f_114.f_41 != 0)
	{
		Call_Loc(Local_214.f_114.f_41);
		return StackVal;
	}
	return 1;
}

float func_6(int iParam0)//Position - 0xBC93F
{
	if (Local_214.f_114.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_8);
		return StackVal;
	}
	return 1.1f;
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBD88F
{
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_10 = iParam2;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_11 = iParam3;
}

Vector3 func_8(int iParam0, int iParam1)//Position - 0xBD956
{
	if (Local_214.f_156.f_2.f_52 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_52);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, true);
}

int func_9(int iParam0)//Position - 0xBDABD
{
	if (Local_214.f_156.f_2.f_125.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_125.f_4);
		return StackVal;
	}
	return 0;
}

int func_10(int iParam0)//Position - 0xBDAE6
{
	if (Local_214.f_156.f_2.f_125.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_125.f_3);
		return StackVal;
	}
	return 1;
}

int func_11(int iParam0)//Position - 0xBDB0F
{
	if (Local_214.f_156.f_2.f_125.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_125.f_2);
		return StackVal;
	}
	return 0;
}

float func_12(int iParam0)//Position - 0xBDBB8
{
	if (Local_214.f_156.f_2.f_125.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_125.f_1);
		return StackVal;
	}
	return -1f;
}

float func_13(int iParam0, int iParam1)//Position - 0xBDC8A
{
	if (Local_214.f_156.f_2.f_123.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_123.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_14(int iParam0, int iParam1)//Position - 0xBDCB5
{
	if (Local_214.f_156.f_2.f_123 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_123);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, false);
}

float func_15(int iParam0, int iParam1)//Position - 0xBE016
{
	if (Local_214.f_156.f_2.f_106.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_106.f_4);
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

int func_16(int iParam0, int iParam1)//Position - 0xBE060
{
	if (Local_214.f_156.f_2.f_106.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_106.f_3);
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

int func_17(int iParam0, int iParam1)//Position - 0xBE0AF
{
	if (Local_214.f_156.f_2.f_106.f_7 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_106.f_7);
		return StackVal;
	}
	return 100;
}

float func_18(int iParam0, int iParam1)//Position - 0xBE0DB
{
	if (Local_214.f_156.f_2.f_106.f_5 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_106.f_5);
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

float func_19(int iParam0, int iParam1)//Position - 0xBE129
{
	if (Local_214.f_156.f_2.f_106.f_6 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_106.f_6);
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

int func_20(int iParam0)//Position - 0xBE262
{
	if (Local_214.f_156.f_2.f_102.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_102.f_2);
		return StackVal;
	}
	return 0;
}

float func_21(int iParam0)//Position - 0xBE28B
{
	if (Local_214.f_156.f_2.f_102.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_102.f_1);
		return StackVal;
	}
	return -1f;
}

float func_22(int iParam0)//Position - 0xBE2B4
{
	if (Local_214.f_156.f_2.f_102.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_102.f_3);
		return StackVal;
	}
	return 7.5f;
}

Vector3 func_23(int iParam0, int iParam1)//Position - 0xBE2E1
{
	struct<3> Var0;
	float fVar1;
	if (Local_214.f_156.f_2.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_102);
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

Vector3 func_24(int iParam0)//Position - 0xBE631
{
	struct<3> Var0;
	Var0 = { Local_197.f_67.f_1[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
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

int func_25(int iParam0)//Position - 0xBE748
{
	if (Local_214.f_156.f_2.f_91.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_1);
		return StackVal;
	}
	return 0;
}

float func_26(int iParam0)//Position - 0xBE7A5
{
	if (Local_214.f_156.f_2.f_91.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_2);
		return StackVal;
	}
	return 10f;
}

int func_27(int iParam0, var uParam1)//Position - 0xBE7D2
{
	if (Local_214.f_156.f_2.f_91.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_214.f_156.f_2.f_91.f_10);
		return StackVal;
	}
	return 0;
}

float func_28(int iParam0)//Position - 0xBE981
{
	if (Local_214.f_156.f_2.f_91.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_9);
		return StackVal;
	}
	return 20f;
}

int func_29(int iParam0)//Position - 0xBE9AE
{
	if (Local_214.f_156.f_2.f_91.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_8);
		return StackVal;
	}
	return 25;
}

float func_30(int iParam0)//Position - 0xBE9D8
{
	if (Local_214.f_156.f_2.f_91.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_7);
		return StackVal;
	}
	return 0f;
}

int func_31(int iParam0)//Position - 0xBEA01
{
	if (Local_214.f_156.f_2.f_91.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_6);
		return StackVal;
	}
	return 1076642364;
}

float func_32(int iParam0)//Position - 0xBEABC
{
	if (Local_214.f_156.f_2.f_91.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_4);
		return StackVal;
	}
	return 2f;
}

float func_33(var uParam0)//Position - 0xBED18
{
	if (Local_214.f_156.f_2.f_85.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_156.f_2.f_85.f_2);
		return StackVal;
	}
	return 7.5f;
}

int func_34(int iParam0)//Position - 0xBEEBB
{
	if (Local_214.f_156.f_2.f_79.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_79.f_5);
		return StackVal;
	}
	return 786468;
}

int func_35(int iParam0)//Position - 0xBEEE7
{
	if (Local_214.f_156.f_2.f_79.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_79.f_4);
		return StackVal;
	}
	return 80;
}

float func_36(int iParam0)//Position - 0xBEF11
{
	if (Local_214.f_156.f_2.f_79.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_79.f_3);
		return StackVal;
	}
	return 80f;
}

float func_37(int iParam0, bool bParam1)//Position - 0xBEF3E
{
	if (Local_214.f_156.f_2.f_79.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_79.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

int func_38(int iParam0)//Position - 0xBF00B
{
	if (Local_214.f_156.f_2.f_76.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_76.f_2);
		return StackVal;
	}
	return 22713;
}

float func_39(int iParam0)//Position - 0xBF036
{
	if (Local_214.f_156.f_2.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_76.f_1);
		return StackVal;
	}
	return 10f;
}

int func_40(int iParam0)//Position - 0xBF125
{
	if (Local_214.f_156.f_2.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_72.f_2);
		return StackVal;
	}
	return -1;
}

float func_41(int iParam0)//Position - 0xBF14E
{
	if (Local_214.f_156.f_2.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_72.f_1);
		return StackVal;
	}
	return 10000f;
}

void func_42(int iParam0, int iParam1)//Position - 0xBF1B1
{
	if (Local_214.f_156.f_2.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_72.f_3);
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
}

int func_43(int iParam0)//Position - 0xBF260
{
	if (Local_214.f_156.f_2.f_67.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_67.f_3);
		return StackVal;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0xBF289
{
	if (Local_214.f_156.f_2.f_67.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_67.f_2);
		return StackVal;
	}
	return -1;
}

int func_45(int iParam0)//Position - 0xBF2B2
{
	if (Local_214.f_156.f_2.f_67.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_67.f_1);
		return StackVal;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0xBF2DB
{
	if (Local_214.f_156.f_2.f_67 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_67);
		return StackVal;
	}
	return -1;
}

int func_47(int iParam0, var uParam1)//Position - 0xBF578
{
	if (Local_214.f_156.f_2.f_62.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_214.f_156.f_2.f_62.f_4);
		return StackVal;
	}
	return 1;
}

int func_48(int iParam0)//Position - 0xBF5A3
{
	if (Local_214.f_156.f_2.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_62.f_2);
		return StackVal;
	}
	return 1;
}

int func_49(int iParam0)//Position - 0xBF5CC
{
	if (Local_214.f_156.f_2.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_62.f_1);
		return StackVal;
	}
	return 0;
}

int func_50(int iParam0)//Position - 0xBF622
{
	if (Local_214.f_156.f_2.f_62.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_62.f_3);
		return StackVal;
	}
	return 0;
}

var func_51(int iParam0)//Position - 0xBF6B4
{
	if (Local_214.f_156.f_2.f_61 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_61);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_178);
	return StackVal;
}

float func_52(int iParam0)//Position - 0xBF7D8
{
	if (Local_214.f_156.f_2.f_56.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_56.f_4);
		return StackVal;
	}
	return 0f;
}

int func_53()//Position - 0xBF801
{
	if (Local_214.f_156.f_2.f_56.f_3 != 0)
	{
		Call_Loc(Local_214.f_156.f_2.f_56.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_54(int iParam0)//Position - 0xBF82A
{
	if (Local_214.f_156.f_2.f_56.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_56.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

float func_55(int iParam0)//Position - 0xBF85C
{
	if (Local_214.f_156.f_2.f_56.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_56.f_2);
		return StackVal;
	}
	return 1f;
}

int func_56(int iParam0)//Position - 0xBF931
{
	if (Local_214.f_156.f_2.f_56 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_56);
		return StackVal;
	}
	return 0;
}

int func_57(var uParam0, var uParam1)//Position - 0xBFB03
{
	if (Local_214.f_156.f_2.f_54 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_156.f_2.f_54);
		*uParam1 = StackVal;
		return 1;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0xBFCBE
{
	if (Local_214.f_156.f_2.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25);
		return StackVal;
	}
	return 0;
}

float func_59(int iParam0)//Position - 0xBFD3C
{
	if (Local_214.f_156.f_2.f_25.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_4);
		return StackVal;
	}
	return 10f;
}

int func_60(int iParam0, var uParam1)//Position - 0xBFD69
{
	if (Local_214.f_156.f_2.f_25.f_25 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_214.f_156.f_2.f_25.f_25);
		return StackVal;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0xC030B
{
	if (Local_214.f_156.f_2.f_25.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_20);
		return StackVal;
	}
	return 0;
}

float func_62(int iParam0)//Position - 0xC0334
{
	if (Local_214.f_156.f_2.f_25.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_15);
		return StackVal;
	}
	return -1f;
}

int func_63(int iParam0)//Position - 0xC035D
{
	if (Local_214.f_156.f_2.f_25.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_7);
		return StackVal;
	}
	return 0;
}

int func_64(int iParam0)//Position - 0xC0386
{
	if (Local_214.f_156.f_2.f_25.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_11);
		return StackVal;
	}
	return 24;
}

int func_65(int iParam0)//Position - 0xC03B0
{
	if (Local_214.f_156.f_2.f_25.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_66(int iParam0)//Position - 0xC03DC
{
	if (Local_214.f_156.f_2.f_25.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_10);
		return StackVal;
	}
	return 0f;
}

int func_67(int iParam0)//Position - 0xC0405
{
	if (Local_214.f_156.f_2.f_25.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_6);
		return StackVal;
	}
	return 0;
}

float func_68(int iParam0)//Position - 0xC0470
{
	if (Local_214.f_156.f_2.f_25.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_9);
		return StackVal;
	}
	return 0f;
}

int func_69(int iParam0)//Position - 0xC04B7
{
	if (Local_214.f_156.f_2.f_25.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_12);
		return StackVal;
	}
	return 7;
}

float func_70(int iParam0)//Position - 0xC04E0
{
	if (Local_214.f_156.f_2.f_25.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_3);
		return StackVal;
	}
	return 35f;
}

float func_71(int iParam0)//Position - 0xC050D
{
	if (Local_214.f_156.f_2.f_25.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_5);
		return StackVal;
	}
	return 5f;
}

int func_72()//Position - 0xC0536
{
	if (Local_214.f_156.f_2.f_25.f_18 != 0)
	{
		Call_Loc(Local_214.f_156.f_2.f_25.f_18);
		return StackVal;
	}
	return 80;
}

float func_73()//Position - 0xC055E
{
	if (Local_214.f_156.f_2.f_25.f_17 != 0)
	{
		Call_Loc(Local_214.f_156.f_2.f_25.f_17);
		return StackVal;
	}
	return 80f;
}

float func_74(int iParam0)//Position - 0xC0589
{
	if (Local_214.f_156.f_2.f_25.f_19 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_19);
		return StackVal;
	}
	return -1f;
}

float func_75(int iParam0)//Position - 0xC05B2
{
	if (Local_214.f_156.f_2.f_25.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_16);
		return StackVal;
	}
	return 30f;
}

int func_76()//Position - 0xC05DF
{
	if (Local_214.f_156.f_2.f_25.f_14 != 0)
	{
		Call_Loc(Local_214.f_156.f_2.f_25.f_14);
		return StackVal;
	}
	return 0;
}

int func_77(var uParam0)//Position - 0xC0655
{
	if (Local_214.f_156.f_2.f_25.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_13);
		return StackVal;
	}
	return 0;
}

int func_78(int iParam0)//Position - 0xC0959
{
	if (Local_214.f_156.f_2.f_13.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_13.f_1);
		return StackVal;
	}
	return 0;
}

int func_79(int iParam0)//Position - 0xC0982
{
	if (Local_214.f_156.f_2.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_13);
		return StackVal;
	}
	return 0;
}

int func_80(int iParam0)//Position - 0xC0CF9
{
	if (Local_214.f_156.f_2.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_3);
		return StackVal;
	}
	return 0;
}

bool func_81(var uParam0, char* sParam1)//Position - 0xC0D1E
{
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2.f_4);
	return ((((((StackVal || MISC::ARE_STRINGS_EQUAL(sParam1, "PROP_HUMAN_SEAT_SUNLOUNGER")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_STEPS")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

void func_82(int iParam0, int iParam1)//Position - 0xC0F27
{
	Local_219[iParam0 /*21*/].f_17 = iParam1;
}

void func_83(int iParam0, int iParam1)//Position - 0xC0F9A
{
	Local_219[iParam0 /*21*/].f_18 = iParam1;
}

void func_84(int iParam0, int iParam1)//Position - 0xC1559
{
	Local_218[iParam0 /*20*/].f_17 = iParam1;
}

void func_85(int iParam0, int iParam1)//Position - 0xC161E
{
	Local_218[iParam0 /*20*/].f_18 = iParam1;
}

void func_86(var uParam0, int iParam1)//Position - 0xC2127
{
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2);
	Stack.Push(MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2);
	if (StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
}

var func_87(var uParam0)//Position - 0xC22CF
{
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_178);
	return StackVal;
}

Vector3 func_88(var uParam0)//Position - 0xC22E1
{
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

void func_89(int iParam0, int iParam1)//Position - 0xC23E1
{
	Local_220[iParam0 /*19*/].f_10[Local_220[iParam0 /*19*/].f_16] = iParam1;
	Local_220[iParam0 /*19*/].f_16++;
}

void func_90(int iParam0, int iParam1, int iParam2)//Position - 0xC24FE
{
	int iVar0;
	var uVar1;
	iVar0 = Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12++;
}

void func_91(int iParam0, int iParam1, int iParam2)//Position - 0xC2558
{
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/] = iParam2;
	Local_220.f_23[iParam0 /*67*/]++;
}

void func_92(int iParam0, var uParam1, int iParam2)//Position - 0xC288C
{
	int iVar0;
	var uVar1;
	iVar0 = Local_219[iParam0 /*21*/].f_19;
	uVar1 = uParam1;
	Local_219[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_219[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_219[iParam0 /*21*/].f_19++;
}

void func_93(int iParam0, int iParam1)//Position - 0xC28EC
{
	int iVar0;
	var uVar1;
	iVar0 = Local_219[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_219[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_219[iParam0 /*21*/].f_19++;
}

void func_94(int iParam0, int iParam1, int iParam2)//Position - 0xC2994
{
	int iVar0;
	var uVar1;
	iVar0 = Local_218[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_218[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_218[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_218[iParam0 /*20*/].f_19++;
}

bool func_95()//Position - 0xC77B1
{
	return __LIB_20__::func_35() > 0;
}

var func_96(int iParam0)//Position - 0x2B7E4
{
	if (Local_214.f_114.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_13);
		return StackVal;
	}
	return __LIB_19__::func_401();
}

var func_97(int iParam0)//Position - 0x2BC77
{
	if (Local_214.f_114.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_6);
		return StackVal;
	}
	return __LIB_20__::func_40();
}

int func_98(int iParam0)//Position - 0x2BCCB
{
	if (Local_214.f_114.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_4);
		return StackVal;
	}
	if (Local_197.f_19.f_1 != -1)
	{
		return Local_197.f_19.f_1;
	}
	return __LIB_19__::func_963();
}

int func_99()//Position - 0x2C7C3
{
	if (Local_214.f_114.f_39.f_1 != 0)
	{
		Call_Loc(Local_214.f_114.f_39.f_1);
		return StackVal;
	}
	return __LIB_19__::func_404();
}

float func_100(int iParam0)//Position - 0xB2F87
{
	if (Local_214.f_456.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_456.f_7);
		return StackVal;
	}
	return __LIB_19__::func_299();
}

int func_101(int iParam0)//Position - 0xB2FBA
{
	if (Local_214.f_456.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_456.f_6);
		return StackVal;
	}
	return __LIB_1__::func_516();
}

Vector3 func_102(int iParam0, var uParam1)//Position - 0xBDBE1
{
	if (Local_214.f_156.f_2.f_125 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_214.f_156.f_2.f_125);
		return StackVal, StackVal, StackVal;
	}
	return __LIB_3__::func_554();
}

int func_103(int iParam0, int iParam1)//Position - 0xB9844
{
	Stack.Push(Local_214.f_352.f_32 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_352.f_32);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (__LIB_19__::func_474(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_104()//Position - 0xC2B4D
{
	struct<3> Var0;
	if (Local_214.f_102.f_3 == 0)
	{
		return;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Stack.Push(&Var0);
	Call_Loc(Local_214.f_102.f_3);
	if (!StackVal)
	{
		return;
	}
	switch (Var0.f_0)
	{
		case 181:
			break;
		case 256:
			if (__LIB_1__::func_501())
			{
				__LIB_19__::func_881(Var0.f_1);
			}
			break;
		default:
			__LIB_19__::func_572(Var0.f_0, Var0.f_1, Var0.f_2);
			break;
	}
}

int func_105()//Position - 0xA3A
{
	return Local_199.f_19;
}

int func_106()//Position - 0x21A6F
{
	return Local_199.f_19.f_5[0 /*13*/].f_11;
}

int func_107(int iParam0)//Position - 0x23443
{
	if (Local_199.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_199.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_199.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_199.f_38.f_1[iParam0 /*21*/].f_16);
}

void func_108(int iParam0)//Position - 0x23851
{
	if (__LIB_1__::func_458(&(Local_199.f_16), iParam0))
	{
	}
}

int func_109()//Position - 0x23FD2
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_199.f_38)
	{
		if (Local_199.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_199.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

char* func_110(int iParam0, int iParam1)//Position - 0x269C3
{
	switch (iParam1)
	{
		case 0:
			return "Fixer_Hit_Taxi_1";
		case 1:
			return "Fixer_Hit_Taxi_2";
		case 2:
			return "Fixer_Hit_Taxi_3";
		case 3:
			return "Fixer_Hit_Golfing_1";
		case 4:
			return "Fixer_Hit_Golfing_2";
		case 5:
			return "Fixer_Hit_Golfing_3";
		case 6:
			return "Fixer_Hit_Motel_1";
		case 7:
			return "Fixer_Hit_Motel_2";
		case 8:
			return "Fixer_Hit_Motel_3";
		case 9:
			return "Fixer_Hit_List_1";
		case 10:
			return "Fixer_Hit_List_2";
		case 11:
			return "Fixer_Hit_List_3";
		case 12:
			return "Fixer_Hit_Attack_1";
		case 13:
			return "Fixer_Hit_Attack_2";
		case 14:
			return "Fixer_Hit_Attack_3";
		case 15:
			return "Fixer_Hit_Construction_1";
		case 16:
			return "Fixer_Hit_Construction_2";
		case 17:
			return "Fixer_Hit_Construction_3";
		case 18:
			return "Fixer_Hit_Joyrider_1";
		case 19:
			return "Fixer_Hit_Joyrider_2";
		case 20:
			return "Fixer_Hit_Joyrider_3";
		case 21:
			return "Fixer_Hit_Vehicles_1";
		case 22:
			return "Fixer_Hit_Vehicles_2";
		case 23:
			return "Fixer_Hit_Vehicles_3";
		default:
	}
	return "";
}

void func_111(int iParam0)//Position - 0x2782E
{
	if (__LIB_1__::func_458(&(Global_2789194.f_1), iParam0))
	{
	}
}

void func_112(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x2E85C
{
	Global_23150.f_8783 = iParam4;
	Global_23150.f_8779 = uParam0;
	Global_23150.f_8780 = uParam1;
	Global_23150.f_8781 = uParam2;
	Global_23150.f_8782 = uParam3;
}

float func_113()//Position - 0x2F6BF
{
	return 800f;
}

float func_114(var uParam0)//Position - 0x2FA1F
{
	return 12f;
}

int func_115(int iParam0)//Position - 0x331E3
{
	int iVar0;
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return __LIB_0__::getMinusOneOrNull();
	}
	return NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
}

char* func_116(var uParam0)//Position - 0x3644A
{
	return "grab_low";
}

int func_117(int iParam0)//Position - 0x3686E
{
	return 676;
}

int func_118(var uParam0)//Position - 0x38967
{
	return 4000;
}

char* func_119(var uParam0)//Position - 0x38C13
{
	return "anim@GangOps@Facility@Servers@BodySearch@";
}

char* func_120(var uParam0)//Position - 0x38C1F
{
	return "Player_Search";
}

int func_121(var uParam0, int iParam1)//Position - 0x390CC
{
	switch (iParam1)
	{
		case 1:
			return 11;
		case 2:
			return 17;
		default:
	}
	return 45;
}

int func_122(var uParam0)//Position - 0x3CCB2
{
	return 120000;
}

char* func_123()//Position - 0xB0237
{
	return "DLC_SECURITY/DLC_Sec_Payphone_Hit_Taxi";
}

int func_124(int iParam0)//Position - 0xB1F85
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 28);
	}
	return 0;
}

var func_125()//Position - 0xB90F1
{
	return Local_199.f_19.f_1.f_2;
}

int func_126(int iParam0)//Position - 0xF8BE5
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_14;
}

bool func_127(int iParam0, var uParam1)//Position - 0x104A26
{
	return (Local_199.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_199.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

var func_128(int iParam0)//Position - 0x10A571
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_129(int iParam0)//Position - 0x10A58E
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_130(int iParam0)//Position - 0x10A651
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_131(int iParam0)//Position - 0x10A665
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_132(int iParam0)//Position - 0x10A684
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_133(int iParam0)//Position - 0x10A714
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_2;
}

void func_134(struct<3> Param0, int iParam1, float fParam2)//Position - 0x3BC7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &uVar3);
	__LIB_19__::func_917(Param0, iVar0, iVar1, iVar2, fParam2);
}

void func_135(int iParam0)//Position - 0x3ECAD
{
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		__LIB_20__::func_128(iParam0, 1);
	}
}

void func_136(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x241D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (Local_199.f_38.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, -5f, 0f) };
				Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var1, 25, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, Var0, 25, true, joaat("WEAPON_ASSAULTSHOTGUN"), 0, true, true, -1f);
			}
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		else
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
			__LIB_19__::func_455(Var2, &Var3, &Var4, 0);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var4, 300, true, joaat("WEAPON_HEAVYSNIPER"), 0, false, false, 80f);
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			__LIB_19__::func_342(iParam0, -1, 0);
		}
	}
}

void func_137(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xE3F4C
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		__LIB_0__::func_83(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!__LIB_0__::func_73())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		__LIB_0__::func_82(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		__LIB_0__::func_83(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		__LIB_0__::func_82(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_3__::func_467(PLAYER::PLAYER_ID())) && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__::func_80()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_3__::func_467(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAD750
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
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = __LIB_0__::func_350(iParam0, 1);
				iVar0 = __LIB_0__::func_24(iParam1, iParam3, iVar1);
				break;
			case 1:
				iVar2 = __LIB_0__::func_350(iParam0, 2);
				iVar0 = __LIB_0__::func_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		__LIB_0__::func_230(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		__LIB_0__::func_231(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (__LIB_0__::func_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!__LIB_0__::func_455(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!__LIB_0__::func_455(iParam0, 3, 135, 150))
									{
										iVar0 = __LIB_18__::func_676(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!__LIB_0__::func_455(iParam0, 3, 209, 222))
									{
										iVar0 = __LIB_18__::func_676(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!__LIB_0__::func_455(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = __LIB_18__::func_676(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = __LIB_18__::func_676(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = __LIB_18__::func_676(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = __LIB_18__::func_676(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!__LIB_0__::func_455(iParam0, 3, 176, 191) && !__LIB_0__::func_455(iParam0, 3, 227, 242))
									{
										iVar0 = __LIB_18__::func_676(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = __LIB_0__::func_350(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = __LIB_0__::func_350(iParam0, 11);
								iVar5 = __LIB_20__::func_878(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = __LIB_0__::func_350(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!__LIB_0__::func_22(joaat("Player_One"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = __LIB_0__::func_350(iParam0, 8);
								iVar8 = __LIB_0__::func_350(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = __LIB_20__::func_878(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = __LIB_20__::func_878(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = __LIB_0__::func_350(iParam0, 11);
								iVar0 = __LIB_20__::func_878(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_139()//Position - 0x650
{
	if (Local_197.f_102 != -1)
	{
		return Local_197.f_102 * 60 * 1000;
	}
	return Local_197.f_102;
}

int func_140(int iParam0)//Position - 0x144A
{
	if (__LIB_20__::func_907(iParam0, 18))
	{
		return 1;
	}
	Stack.Push(Local_214.f_156.f_195 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_195);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

struct<9> func_141(int iParam0)//Position - 0x2623
{
	struct<9> Var0;
	Var0 = 1;
	if (Local_214.f_453.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_453.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_197.f_111.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_197.f_111.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_197.f_111.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_197.f_111.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

struct<9> func_142(int iParam0)//Position - 0x26B9
{
	return Local_197.f_111.f_1[iParam0 /*9*/];
}

int func_143(int iParam0)//Position - 0x26CE
{
	if (__LIB_20__::func_911(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_144(int iParam0)//Position - 0x2A5E
{
	if (__LIB_20__::func_911(22))
	{
		return 1;
	}
	return 0;
}

bool func_145(int iParam0, int iParam1)//Position - 0x32B0
{
	return __LIB_0__::func_316(&(Local_197.f_85.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_146(int iParam0)//Position - 0x32C8
{
	struct<3> Var0;
	if (Local_214.f_407.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_38);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__::func_86(Var0))
	{
		Var0 = { Local_197.f_85.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_147(int iParam0)//Position - 0x330C
{
	struct<3> Var0;
	if (Local_214.f_407.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__::func_86(Var0))
	{
		Var0 = { Local_197.f_85.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

bool func_148(int iParam0, int iParam1)//Position - 0x40E9
{
	return __LIB_20__::func_918(iParam0, iParam1) != 1f;
}

bool func_149(int iParam0, int iParam1)//Position - 0x20047
{
	return __LIB_0__::func_316(&(Local_374[iParam0 /*35*/].f_1), iParam1);
}

bool func_150()//Position - 0x20420
{
	return __LIB_20__::func_911(0);
}

void func_151()//Position - 0x21824
{
	int iVar0;
	int iVar1;
	if (Local_197.f_134 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_134)
		{
			iVar0++;
		}
	}
	if (Local_197.f_19 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_19)
		{
			if (-1 != Local_197.f_19.f_5[iVar0 /*13*/].f_10)
			{
			}
			iVar0++;
		}
	}
	if (Local_197.f_122 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_122)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (Local_197.f_38 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_38)
		{
			if (-1 != Local_197.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			if (-1 != Local_197.f_38.f_1[iVar0 /*21*/].f_8)
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
			if (Local_197.f_38.f_23[iVar0 /*5*/].f_1[iVar1] != 1)
			{
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_86(Local_197.f_141[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	if (Local_197.f_85 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_85)
		{
			iVar0++;
		}
	}
	if (Local_197.f_111 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_111)
		{
			iVar0++;
		}
	}
	if (Local_197.f_67 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_197.f_67)
		{
			iVar0++;
		}
	}
}

int func_152()//Position - 0x21A3E
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__::func_86(Local_197.f_141[iVar1 /*8*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_153(var uParam0, int iParam1)//Position - 0x232BE
{
	switch (iParam1)
	{
		case 0:
			return "RE_Phantom_Car_1";
		default:
	}
	return "";
}

int func_154(int iParam0)//Position - 0x234B4
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 1;
		default:
	}
	return 0;
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23926
{
	int iVar0;
	var uVar1;
	iVar0 = Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/].f_1 = iParam3;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12++;
}

void func_156(int iParam0, int iParam1, int iParam2)//Position - 0x239C6
{
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_8 = iParam2;
}

void func_157(int iParam0, int iParam1)//Position - 0x23FBA
{
	if (__LIB_1__::func_458(&(Local_197.f_38.f_1[iParam0 /*21*/]), iParam1))
	{
	}
}

void func_158(int iParam0, int iParam1)//Position - 0x23FD5
{
	if (__LIB_16__::func_758(&(Local_197.f_67.f_1[iParam0 /*15*/]), iParam1))
	{
	}
}

void func_159(int iParam0, int iParam1)//Position - 0x23FF0
{
	if (__LIB_1__::func_458(&(Local_197.f_67.f_1[iParam0 /*15*/]), iParam1))
	{
	}
}

void func_160(int iParam0, int iParam1, int iParam2)//Position - 0x24148
{
	int iVar0;
	var uVar1;
	var uVar2;
	iVar0 = Local_219[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_219[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_219[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_219[iParam0 /*21*/].f_19++;
}

int func_161(int iParam0)//Position - 0x2438E
{
	int iVar0;
	if (PED::IS_PED_INJURED(iParam0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, false));
	if ((((iVar0 == joaat("blazer5") || iVar0 == joaat("technical2")) || iVar0 == joaat("apc")) || VEHICLE::IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(iVar0)) || VEHICLE::IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_162(int iParam0, int iParam1, int iParam2)//Position - 0x2AE6B
{
	return __LIB_0__::func_316(&(Local_374[iParam1 /*35*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_163(int iParam0)//Position - 0x2B397
{
	if (HUD::DOES_BLIP_EXIST(Local_291[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_291[iParam0 /*7*/]));
	}
}

bool func_164(int iParam0)//Position - 0x2DA66
{
	return __LIB_20__::func_192(iParam0, 1);
}

bool func_165(int iParam0)//Position - 0xA2E62
{
	return Local_197.f_141[iParam0 /*8*/].f_5 != -1;
}

var func_166(int iParam0)//Position - 0xA3126
{
	var uVar0;
	if (Local_214.f_474.f_13 != 0)
	{
		Stack.Push(Local_197.f_141[iParam0 /*8*/].f_4);
		Stack.Push(&uVar0);
		Call_Loc(Local_214.f_474.f_13);
		if (StackVal)
		{
			return uVar0;
		}
	}
	return Local_197.f_141[Local_197.f_141[iParam0 /*8*/].f_4 /*8*/].f_3;
}

Vector3 func_167(int iParam0)//Position - 0xA31FF
{
	struct<3> Var0;
	if (Local_214.f_474.f_12 != 0)
	{
		Stack.Push(Local_197.f_141[iParam0 /*8*/].f_4);
		Call_Loc(Local_214.f_474.f_12);
		Var0 = { StackVal, StackVal, StackVal };
		if (!__LIB_0__::func_86(Var0))
		{
			return Var0;
		}
	}
	return Local_197.f_141[Local_197.f_141[iParam0 /*8*/].f_4 /*8*/];
}

bool func_168(int iParam0, int iParam1)//Position - 0xA3260
{
	return __LIB_0__::func_316(&(Local_197.f_141[iParam0 /*8*/].f_6), iParam1);
}

int func_169(int iParam0)//Position - 0xA3316
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_20__::func_35())
	{
		if (Local_291[iVar0 /*7*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_170(int iParam0)//Position - 0xA3863
{
	if ((!__LIB_0__::func_86(Local_197.f_141[iParam0 /*8*/]) && Local_197.f_141[iParam0 /*8*/].f_4 != -1) && !__LIB_0__::func_86(Local_197.f_141[Local_197.f_141[iParam0 /*8*/].f_4 /*8*/]))
	{
		return 1;
	}
	return 0;
}

Vector3 func_171(int iParam0)//Position - 0xB42B3
{
	if (Local_214.f_456.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_456.f_9);
		if (!__LIB_0__::func_86(StackVal, StackVal, StackVal))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_456.f_9);
			return StackVal, StackVal, StackVal;
		}
	}
	return Local_197.f_134.f_1[iParam0 /*5*/];
}

void func_172(int iParam0)//Position - 0xB4D0E
{
	if (Local_214.f_94.f_3.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_94.f_3.f_1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_94.f_3.f_1);
			AUDIO::TRIGGER_MUSIC_EVENT(StackVal);
		}
	}
}

bool func_173(int iParam0)//Position - 0xB4E5A
{
	return __LIB_3__::func_479(&Local_315, iParam0);
}

int func_174(int iParam0)//Position - 0xB666A
{
	if (__LIB_20__::func_911(16))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_47.f_2);
	if (!StackVal)
	{
		if (Local_291.f_11 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_175()//Position - 0xB7161
{
	if (__LIB_20__::func_911(24) || __LIB_20__::func_911(25))
	{
		return 0;
	}
	Stack.Push(Local_214.f_47.f_6 != 0);
	Call_Loc(Local_214.f_47.f_6);
	if (StackVal && StackVal)
	{
		return 0;
	}
	return 1;
}

void func_176()//Position - 0xB76C1
{
	Local_305.f_0 = 0;
	Local_305.f_2 = 0;
	Local_305.f_1 = 0;
	__LIB_0__::clearF_1Prop(&(Local_305.f_3));
}

void func_177(int iParam0)//Position - 0xB7DD7
{
	if (HUD::DOES_BLIP_EXIST(Local_312.f_1[iParam0 /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_312.f_1[iParam0 /*4*/].f_1));
	}
}

bool func_178(int iParam0, int iParam1, int iParam2)//Position - 0xB8643
{
	return __LIB_0__::func_316(&(Local_374[iParam1 /*35*/].f_7[iParam0 /*2*/]), iParam2);
}

bool func_179(int iParam0)//Position - 0xB8706
{
	return __LIB_20__::func_165(iParam0, 15);
}

bool func_180(int iParam0)//Position - 0xB878D
{
	return (__LIB_20__::func_165(iParam0, 16) && !__LIB_20__::func_165(iParam0, 0));
}

int func_181(int iParam0)//Position - 0xB8B7F
{
	if (((((__LIB_20__::func_165(iParam0, 1) || __LIB_20__::func_165(iParam0, 0)) || __LIB_20__::func_165(iParam0, 14)) || __LIB_20__::func_165(iParam0, 12)) || __LIB_20__::func_165(iParam0, 11)) || __LIB_20__::func_165(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

void func_182()//Position - 0xB8FE6
{
	Local_302.f_0++;
}

int func_183(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB92F2
{
	if (Local_214.f_156.f_140.f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(uParam3);
		Call_Loc(Local_214.f_156.f_140.f_17);
		return StackVal;
	}
	if (!__LIB_20__::func_907(iParam0, 15))
	{
		return 0;
	}
	*uParam1 = 100;
	*uParam2 = 5000f;
	*uParam3 = 400f;
	return 1;
}

float func_184(int iParam0)//Position - 0xB99A3
{
	if (__LIB_20__::func_165(iParam0, 19))
	{
		return 300f;
	}
	return -1f;
}

bool func_185(int iParam0, int iParam1, int iParam2)//Position - 0xB9E09
{
	return __LIB_0__::func_316(&(Local_374[iParam1 /*35*/].f_10[iParam0 /*2*/]), iParam2);
}

bool func_186(int iParam0)//Position - 0xBB641
{
	return Local_291[iParam0 /*7*/].f_4 != __LIB_0__::getMinusOneOrNull();
}

bool func_187(int iParam0, int iParam1, int iParam2)//Position - 0xBB660
{
	return __LIB_0__::func_316(&(Local_374[iParam1 /*35*/].f_19[iParam0 /*2*/]), iParam2);
}

void func_188()//Position - 0xBCF7E
{
	if (Local_302.f_0 > Local_302.f_1)
	{
		Local_302.f_1 = Local_302.f_0;
	}
	Local_302.f_0 = 0;
}

void func_189(int iParam0, var uParam1)//Position - 0xBD4B8
{
	if (__LIB_16__::func_758(&(Local_367.f_22[iParam0 /*24*/].f_3), uParam1))
	{
	}
}

bool func_190(int iParam0, int iParam1)//Position - 0xBD58A
{
	return __LIB_3__::func_479(&(Local_374[iParam0 /*35*/].f_24), iParam1);
}

void func_191(int iParam0, int iParam1, var uParam2)//Position - 0xBD5E6
{
	if (!__LIB_20__::func_179(iParam1, iParam0))
	{
		__LIB_20__::func_178(iParam1, iParam0);
	}
}

void func_192(int iParam0, int iParam1, var uParam2)//Position - 0xBD712
{
	if (!__LIB_20__::func_165(iParam1, iParam0))
	{
		__LIB_20__::func_164(iParam1, iParam0);
	}
}

void func_193(int iParam0, int iParam1, var uParam2)//Position - 0xBD81A
{
	if (!__LIB_20__::func_183(iParam1, iParam0))
	{
		__LIB_20__::func_182(iParam1, iParam0);
	}
}

void func_194(int iParam0, int iParam1, var uParam2)//Position - 0xBDA23
{
	if (!__LIB_20__::func_192(iParam1, iParam0))
	{
		__LIB_20__::func_196(iParam1, iParam0);
	}
}

var func_195(int iParam0)//Position - 0xBDBF0
{
	return Local_374[iParam0 /*35*/];
}

char* func_196(int iParam0, int iParam1)//Position - 0xBE876
{
	int iVar0;
	iVar0 = Local_197.f_122.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/];
	if (iVar0 != -1)
	{
	}
	return "";
}

bool func_197(int iParam0, var uParam1)//Position - 0xBEA12
{
	return __LIB_20__::func_165(iParam0, 5);
}

bool func_198(int iParam0, var uParam1)//Position - 0xBEA4E
{
	return __LIB_20__::func_165(iParam0, 21);
}

Vector3 func_199(int iParam0, int iParam1)//Position - 0xC087E
{
	return Local_197.f_122.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/].f_1;
}

struct<4> func_200(int iParam0)//Position - 0xC09F2
{
	if (Local_214.f_156.f_2.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_62);
		return StackVal, StackVal, StackVal, StackVal;
	}
	return Local_314[iParam0 /*4*/];
}

int func_201(int iParam0)//Position - 0xC0A48
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_197.f_122)
	{
		if (Local_197.f_122.f_1[iVar0 /*10*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_202(int iParam0)//Position - 0xC1896
{
	if (__LIB_21__::func_67(iParam0))
	{
		return joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED");
	}
	return joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
}

var func_203()//Position - 0xC218F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < Local_197.f_38)
	{
		iVar2 = __LIB_20__::func_909(iVar1);
		if (iVar2 < 1 && iVar2 > iVar0)
		{
			iVar0 = iVar2;
		}
		iVar1++;
	}
	return iVar0 + 1;
}

void func_204()//Position - 0xC297B
{
	__LIB_20__::func_237(1);
}

void func_205()//Position - 0xC2A5F
{
	__LIB_20__::func_258();
}

void func_206()//Position - 0xC2A6B
{
	__LIB_20__::func_237(4);
}

bool func_207()//Position - 0xC2B9A
{
	return (Local_302.f_0 == 0 && Local_302.f_1 > 0);
}

int func_208(int iParam0)//Position - 0xC3655
{
	if (__LIB_20__::func_165(iParam0, 19))
	{
		return 9;
	}
	return 1;
}

int func_209(int iParam0)//Position - 0xC372D
{
	if (__LIB_20__::func_165(iParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0)//Position - 0xC3745
{
	if (__LIB_20__::func_165(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)//Position - 0xC375D
{
	if (__LIB_20__::func_165(iParam0, 12))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)//Position - 0xC37F5
{
	__LIB_20__::func_164(iParam0, 16);
	if (__LIB_20__::func_165(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0xC384E
{
	__LIB_20__::func_164(iParam0, 15);
	if (__LIB_20__::func_165(iParam0, 14))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)//Position - 0xC386E
{
	__LIB_20__::func_164(iParam0, 18);
	if (__LIB_20__::func_165(iParam0, 11))
	{
		return 1;
	}
	return 0;
}

var func_215()//Position - 0xC3AD1
{
	return Local_197.f_99;
}

void func_216()//Position - 0xC44E6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_197.f_111)
	{
		__LIB_10__::func_399(&(uLocal_313[iVar0]));
		iVar0++;
	}
}

void func_217()//Position - 0xC4552
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_197.f_122)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_314[iVar0 /*4*/])))
		{
			TASK::DELETE_PATROL_ROUTE(&(Local_314[iVar0 /*4*/]));
		}
		iVar0++;
	}
}

bool func_218()//Position - 0x349
{
	return __LIB_20__::func_268(21);
}

int func_219()//Position - 0x1324
{
	int iVar0;
	iVar0 = __LIB_20__::func_910();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_220(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x2CFE
{
	*iParam4 = __LIB_20__::func_177(iParam0);
	*bParam1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_367.f_22[iParam0 /*24*/]);
	if (*bParam1)
	{
		*iParam3 = NETWORK::NET_TO_PED(Local_367.f_22[iParam0 /*24*/]);
		*bParam2 = PED::IS_PED_INJURED(*iParam3);
	}
}

bool func_221(int iParam0, int iParam1)//Position - 0x33F7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	return __LIB_20__::func_179(iParam0, 8);
}

void func_222(int iParam0, int iParam1)//Position - 0x3E1D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (VEHICLE::GET_IS_DOOR_VALID(iParam1, iVar0))
		{
			iVar1 = __LIB_20__::func_917(iParam0, iVar0);
			if (iVar1 != -1)
			{
				switch (iVar1)
				{
					case 0:
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 5, 0f);
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, true, true, true);
						break;
					case 1:
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, false, false, true);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 5, 1f);
						break;
					case 2:
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, false, false, true);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 1, 0.3f);
						break;
					case 3:
						VEHICLE::SET_VEHICLE_DOOR_BROKEN(iParam1, iVar0, true);
						break;
					}
				}
		}
		iVar0++;
	}
}

int func_223(int iParam0)//Position - 0x211E0
{
	if (__LIB_20__::func_921(iParam0, 8))
	{
		return 1;
	}
	if (__LIB_20__::func_911(22))
	{
		return 1;
	}
	return 0;
}

var func_224()//Position - 0x27EF4
{
	if (Local_214.f_94.f_3.f_3 != 0)
	{
		Call_Loc(Local_214.f_94.f_3.f_3);
		return StackVal;
	}
	return __LIB_3__::func_860();
}

var func_225()//Position - 0x27F26
{
	if (Local_214.f_94.f_3.f_2 != 0)
	{
		Call_Loc(Local_214.f_94.f_3.f_2);
		return StackVal;
	}
	return __LIB_3__::func_860();
}

void func_226()//Position - 0x28087
{
	if (__LIB_0__::func_937(&(Local_291.f_12), 5000, 0) && Local_291.f_14)
	{
		__LIB_0__::clearF_1Prop(&(Local_291.f_12));
		Local_291.f_14 = 0;
	}
}

int func_227(int iParam0)//Position - 0x2B2FE
{
	if ((((__LIB_20__::func_192(iParam0, 19) || (__LIB_20__::func_192(iParam0, 3) && __LIB_0__::func_937(&(Local_367.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || __LIB_20__::func_192(iParam0, 4)) || __LIB_20__::func_192(iParam0, 25)) || __LIB_20__::func_192(iParam0, 33))
	{
		return (__LIB_20__::func_192(iParam0, 4) || __LIB_20__::func_192(iParam0, 3));
	}
	return 0;
}

void func_228(int iParam0, int iParam1)//Position - 0x2DAA0
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		fVar0 = __LIB_20__::func_932(iParam1);
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			fVar1 = 0.5f;
			fVar0 = 1f;
		}
		HUD::GET_HUD_COLOUR(18, &iVar2, &iVar3, &iVar4, &uVar5);
		__LIB_15__::func_403(iParam0, iVar2, iVar3, iVar4, fVar0, fVar1, 0, 1, 0, 0);
	}
}

int func_229(int iParam0)//Position - 0xB4232
{
	if (Local_214.f_456.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_456.f_5);
		return StackVal;
	}
	return __LIB_20__::func_413();
}

void func_230()//Position - 0xB641B
{
	__LIB_20__::func_220();
}

int func_231(var uParam0)//Position - 0xB78BE
{
	Stack.Push(Local_214.f_64.f_13 != 0);
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_64.f_13);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (Local_305.f_2 == 0 || __LIB_0__::func_937(&(Local_305.f_3), Local_305.f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_232(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0xB8CDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	HUD::GET_HUD_COLOUR(iParam3, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = __LIB_20__::func_973(iParam0, iParam1);
	fVar5 = __LIB_20__::func_972(iParam0, iParam1);
	switch (iParam0)
	{
		case 0:
		case 1:
			__LIB_15__::func_403(iParam2, iVar0, iVar1, iVar2, fParam4, fVar4, 0, 1, 0, fVar5);
			break;
		case 2:
			__LIB_15__::func_403(iParam2, iVar0, iVar1, iVar2, fParam4, fVar4, (Local_197.f_85.f_1[iParam1 /*12*/].f_8.f_1 > 170f && Local_197.f_85.f_1[iParam1 /*12*/].f_8.f_1 < 190f), 1, 0, fVar5);
			break;
	}
}

void func_233()//Position - 0xBCF18
{
	Local_308.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	__LIB_0__::func_467();
	__LIB_0__::func_467();
}

void func_234(int iParam0, var uParam1)//Position - 0xBD909
{
	if (!__LIB_20__::func_268(iParam0))
	{
		__LIB_20__::func_269(iParam0);
	}
}

float func_235(int iParam0)//Position - 0xBFB6D
{
	if (Local_214.f_156.f_2.f_91.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_3);
		return StackVal;
	}
	return (__LIB_21__::func_26(iParam0) + 2.5f);
}

bool func_236()//Position - 0xC2B32
{
	return __LIB_20__::func_268(4);
}

void func_237(int iParam0)//Position - 0xC388E
{
	__LIB_21__::func_91(iParam0, 0, 0);
	__LIB_21__::func_90(iParam0, 0, 3);
	__LIB_21__::func_90(iParam0, 0, 2);
	__LIB_21__::func_90(iParam0, 0, 1);
	__LIB_21__::func_91(iParam0, 1, 8);
	__LIB_21__::func_90(iParam0, 1, 3);
	__LIB_21__::func_91(iParam0, 2, 21);
	__LIB_21__::func_90(iParam0, 2, 3);
	__LIB_21__::func_91(iParam0, 3, 7);
}

int func_238(int iParam0, int iParam1)//Position - 0x23AE
{
	if (__LIB_20__::func_907(iParam0, 9))
	{
		return 1;
	}
	if (__LIB_16__::func_833(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_239(var uParam0, var uParam1)//Position - 0x21BD8
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	var* uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var* uVar8[1];
	int iVar9[1];
	var* uVar10;
	bool bVar11;
	var* uVar12;
	bool bVar13;
	var* uVar14;
	bool bVar15;
	var* uVar16;
	bool bVar17;
	var* uVar18;
	bool bVar19;
	var* uVar20;
	bool bVar21;
	var* uVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	var* uVar26[1];
	int iVar27[1];
	var* uVar28;
	bool bVar29;
	var* uVar30;
	bool bVar31;
	var* uVar32;
	bool bVar33;
	var* uVar34;
	bool bVar35;
	var* uVar36;
	bool bVar37;
	var* uVar38;
	bool bVar39;
	var* uVar40;
	bool bVar41;
	var* uVar42;
	bool bVar43;
	var* uVar44;
	bool bVar45;
	var* uVar46;
	bool bVar47;
	var* uVar48;
	bool bVar49;
	var* uVar50;
	bool bVar51;
	var* uVar52;
	bool bVar53;
	var* uVar54;
	bool bVar55;
	var* uVar56;
	bool bVar57;
	var* uVar58;
	bool bVar59;
	var* uVar60;
	bool bVar61;
	int iVar62;
	var uVar63;
	int iVar64;
	var* uVar65[1];
	int iVar66[1];
	var* uVar67;
	bool bVar68;
	var* uVar69;
	bool bVar70;
	int iVar71;
	int iVar72;
	var* uVar73[2];
	int iVar74[2];
	var* uVar75;
	bool bVar76;
	var* uVar77;
	bool bVar78;
	var* uVar79;
	bool bVar80;
	var* uVar81;
	bool bVar82;
	var* uVar83;
	bool bVar84;
	var* uVar85;
	bool bVar86;
	int iVar87;
	var* uVar88;
	bool bVar89;
	var* uVar90;
	bool bVar91;
	var* uVar92;
	bool bVar93;
	var* uVar94;
	bool bVar95;
	int iVar96;
	int iVar97;
	var* uVar98[2];
	int iVar99[2];
	var* uVar100;
	bool bVar101;
	var* uVar102;
	bool bVar103;
	var* uVar104;
	bool bVar105;
	var* uVar106;
	bool bVar107;
	var* uVar108;
	bool bVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	var* uVar114[1];
	int iVar115[1];
	var* uVar116;
	bool bVar117;
	var* uVar118;
	bool bVar119;
	var* uVar120;
	bool bVar121;
	int iVar122;
	int iVar123;
	var* uVar124;
	bool bVar125;
	int iVar126;
	var* uVar127[1];
	int iVar128[1];
	var* uVar129[1];
	int iVar130[1];
	var* uVar131[1];
	int iVar132[1];
	var* uVar133[1];
	int iVar134[1];
	int iVar135;
	var* uVar136;
	bool bVar137;
	var* uVar138;
	bool bVar139;
	var* uVar140;
	bool bVar141;
	var* uVar142[1];
	int iVar143[1];
	__LIB_8__::func_470(&iVar5, *uParam0, "me");
	__LIB_8__::func_470(&iVar6, iVar5, "blp");
	__LIB_8__::func_470(&iVar7, iVar5, "ents");
	__LIB_8__::func_470(&iVar24, *uParam0, "pd");
	__LIB_8__::func_470(&iVar25, iVar24, "pds");
	__LIB_8__::func_470(&iVar62, iVar24, "grp");
	__LIB_8__::func_470(&uVar63, iVar62, "rel");
	__LIB_8__::func_470(&iVar64, iVar62, "trg");
	__LIB_8__::func_470(&iVar71, *uParam0, "vh");
	__LIB_8__::func_470(&iVar72, iVar71, "veh");
	__LIB_8__::func_470(&iVar87, iVar72, "blp");
	__LIB_8__::func_470(&iVar96, *uParam0, "pp");
	__LIB_8__::func_470(&iVar97, iVar96, "prps");
	__LIB_8__::func_470(&iVar110, *uParam0, "want");
	__LIB_8__::func_470(&iVar111, *uParam0, "modt");
	__LIB_8__::func_470(&iVar112, *uParam0, "ta");
	__LIB_8__::func_470(&iVar113, iVar112, "ars");
	__LIB_8__::func_470(&iVar122, *uParam0, "ptrl");
	__LIB_8__::func_470(&iVar123, iVar122, "pat");
	__LIB_8__::func_470(&iVar126, iVar123, "nd");
	__LIB_8__::func_470(&iVar135, *uParam0, "port");
	if (__LIB_19__::func_523(*uParam0, "fmbs") == 7)
	{
		bVar4 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar7, &Var0) == 7)
		{
			iVar9[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_19__::func_523(iVar7, "mn") == 7)
	{
		bVar11 = true;
	}
	if (__LIB_19__::func_523(iVar7, "pos") == 7)
	{
		bVar13 = true;
	}
	if (__LIB_19__::func_523(iVar7, "head") == 7)
	{
		bVar15 = true;
	}
	if (__LIB_19__::func_523(iVar7, "rot") == 7)
	{
		bVar17 = true;
	}
	if (__LIB_19__::func_523(iVar7, "cv") == 7)
	{
		bVar19 = true;
	}
	if (__LIB_19__::func_523(iVar7, "crt") == 7)
	{
		bVar21 = true;
	}
	if (__LIB_19__::func_523(iVar7, "int") == 7)
	{
		bVar23 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar25, &Var0) == 7)
		{
			iVar27[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_19__::func_523(iVar25, "mn") == 7)
	{
		bVar29 = true;
	}
	if (__LIB_19__::func_523(iVar25, "pos") == 7)
	{
		bVar31 = true;
	}
	if (__LIB_19__::func_523(iVar25, "head") == 7)
	{
		bVar33 = true;
	}
	if (__LIB_19__::func_523(iVar25, "wpn") == 7)
	{
		bVar35 = true;
	}
	if (__LIB_19__::func_523(iVar25, "veh") == 7)
	{
		bVar37 = true;
	}
	if (__LIB_19__::func_523(iVar25, "st") == 7)
	{
		bVar39 = true;
	}
	if (__LIB_19__::func_523(iVar25, "scen") == 7)
	{
		bVar41 = true;
	}
	if (__LIB_19__::func_523(iVar25, "anim") == 7)
	{
		bVar43 = true;
	}
	if (__LIB_19__::func_523(iVar25, "int") == 7)
	{
		bVar45 = true;
	}
	if (__LIB_19__::func_523(iVar25, "asi") == 7)
	{
		bVar47 = true;
	}
	if (__LIB_19__::func_523(iVar25, "grp") == 7)
	{
		bVar49 = true;
	}
	if (__LIB_19__::func_523(iVar25, "mvmt") == 7)
	{
		bVar51 = true;
	}
	if (__LIB_19__::func_523(iVar25, "mrd") == 7)
	{
		bVar53 = true;
	}
	if (__LIB_19__::func_523(iVar25, "sr") == 7)
	{
		bVar55 = true;
	}
	if (__LIB_19__::func_523(iVar25, "sa") == 7)
	{
		bVar57 = true;
	}
	if (__LIB_19__::func_523(iVar25, "hr") == 7)
	{
		bVar59 = true;
	}
	if (__LIB_19__::func_523(iVar25, "dr") == 7)
	{
		bVar61 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar64, &Var0) == 7)
		{
			iVar66[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_19__::func_523(iVar62, "ed") == 7)
	{
		bVar68 = true;
	}
	if (__LIB_19__::func_523(iVar62, "gt") == 7)
	{
		bVar70 = true;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar72, &Var0) == 7)
		{
			iVar74[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_19__::func_523(iVar72, "mn") == 7)
	{
		bVar76 = true;
	}
	if (__LIB_19__::func_523(iVar72, "pos") == 7)
	{
		bVar78 = true;
	}
	if (__LIB_19__::func_523(iVar72, "head") == 7)
	{
		bVar80 = true;
	}
	if (__LIB_19__::func_523(iVar72, "col") == 7)
	{
		bVar82 = true;
	}
	if (__LIB_19__::func_523(iVar72, "int") == 7)
	{
		bVar84 = true;
	}
	if (__LIB_19__::func_523(iVar72, "vds") == 7)
	{
		bVar86 = true;
	}
	if (__LIB_19__::func_523(iVar87, "sprt") == 7)
	{
		bVar89 = true;
	}
	if (__LIB_19__::func_523(iVar87, "hclr") == 7)
	{
		bVar91 = true;
	}
	if (__LIB_19__::func_523(iVar87, "scl") == 7)
	{
		bVar93 = true;
	}
	if (__LIB_19__::func_523(iVar87, "sh") == 7)
	{
		bVar95 = true;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar97, &Var0) == 7)
		{
			iVar99[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_19__::func_523(iVar97, "mn") == 7)
	{
		bVar101 = true;
	}
	if (__LIB_19__::func_523(iVar97, "pos") == 7)
	{
		bVar103 = true;
	}
	if (__LIB_19__::func_523(iVar97, "head") == 7)
	{
		bVar105 = true;
	}
	if (__LIB_19__::func_523(iVar97, "rot") == 7)
	{
		bVar107 = true;
	}
	if (__LIB_19__::func_523(iVar97, "int") == 7)
	{
		bVar109 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar113, &Var0) == 7)
		{
			iVar115[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_19__::func_523(iVar113, "vmn") == 7)
	{
		bVar117 = true;
	}
	if (__LIB_19__::func_523(iVar113, "vmx") == 7)
	{
		bVar119 = true;
	}
	if (__LIB_19__::func_523(iVar113, "fwd") == 7)
	{
		bVar121 = true;
	}
	if (__LIB_19__::func_523(iVar123, "pedi") == 7)
	{
		bVar125 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar126, &Var0) == 7)
		{
			iVar128[iVar2] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar126, &Var0) == 7)
		{
			iVar130[iVar2] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar126, &Var0) == 7)
		{
			iVar132[iVar2] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar126, &Var0) == 7)
		{
			iVar134[iVar2] = 1;
		}
		iVar2++;
	}
	if (__LIB_19__::func_523(iVar135, "pos") == 7)
	{
		bVar137 = true;
	}
	if (__LIB_19__::func_523(iVar135, "head") == 7)
	{
		bVar139 = true;
	}
	if (__LIB_19__::func_523(iVar135, "plnkp") == 7)
	{
		bVar141 = true;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar2, 16);
		if (__LIB_19__::func_523(iVar135, &Var0) == 7)
		{
			iVar143[iVar2] = 1;
		}
		iVar2++;
	}
	if (bVar4)
	{
		uVar3 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "fmbs");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar9[iVar2])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar8[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar7, &Var0);
		}
		iVar2++;
	}
	if (bVar11)
	{
		uVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "mn");
	}
	if (bVar13)
	{
		uVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "pos");
	}
	if (bVar15)
	{
		uVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "head");
	}
	if (bVar17)
	{
		uVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "rot");
	}
	if (bVar19)
	{
		uVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "cv");
	}
	if (bVar21)
	{
		uVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "crt");
	}
	if (bVar23)
	{
		uVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar7, "int");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar27[iVar2])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar26[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar25, &Var0);
		}
		iVar2++;
	}
	if (bVar29)
	{
		uVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "mn");
	}
	if (bVar31)
	{
		uVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "pos");
	}
	if (bVar33)
	{
		uVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "head");
	}
	if (bVar35)
	{
		uVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "wpn");
	}
	if (bVar37)
	{
		uVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "veh");
	}
	if (bVar39)
	{
		uVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "st");
	}
	if (bVar41)
	{
		uVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "scen");
	}
	if (bVar43)
	{
		uVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "anim");
	}
	if (bVar45)
	{
		uVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "int");
	}
	if (bVar47)
	{
		uVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "asi");
	}
	if (bVar49)
	{
		uVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "grp");
	}
	if (bVar51)
	{
		uVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "mvmt");
	}
	if (bVar53)
	{
		uVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "mrd");
	}
	if (bVar55)
	{
		uVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "sr");
	}
	if (bVar57)
	{
		uVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "sa");
	}
	if (bVar59)
	{
		uVar58 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "hr");
	}
	if (bVar61)
	{
		uVar60 = DATAFILE::DATADICT_GET_ARRAY(iVar25, "dr");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar66[iVar2])
		{
			StringCopy(&Var0, "ar", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar65[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar64, &Var0);
		}
		iVar2++;
	}
	if (bVar68)
	{
		uVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar62, "ed");
	}
	if (bVar70)
	{
		uVar69 = DATAFILE::DATADICT_GET_ARRAY(iVar62, "gt");
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (iVar74[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar73[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar72, &Var0);
		}
		iVar2++;
	}
	if (bVar76)
	{
		uVar75 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "mn");
	}
	if (bVar78)
	{
		uVar77 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "pos");
	}
	if (bVar80)
	{
		uVar79 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "head");
	}
	if (bVar82)
	{
		uVar81 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "col");
	}
	if (bVar84)
	{
		uVar83 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "int");
	}
	if (bVar86)
	{
		uVar85 = DATAFILE::DATADICT_GET_ARRAY(iVar72, "vds");
	}
	if (bVar89)
	{
		uVar88 = DATAFILE::DATADICT_GET_ARRAY(iVar87, "sprt");
	}
	if (bVar91)
	{
		uVar90 = DATAFILE::DATADICT_GET_ARRAY(iVar87, "hclr");
	}
	if (bVar93)
	{
		uVar92 = DATAFILE::DATADICT_GET_ARRAY(iVar87, "scl");
	}
	if (bVar95)
	{
		uVar94 = DATAFILE::DATADICT_GET_ARRAY(iVar87, "sh");
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (iVar99[iVar2])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar98[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar97, &Var0);
		}
		iVar2++;
	}
	if (bVar101)
	{
		uVar100 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "mn");
	}
	if (bVar103)
	{
		uVar102 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "pos");
	}
	if (bVar105)
	{
		uVar104 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "head");
	}
	if (bVar107)
	{
		uVar106 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "rot");
	}
	if (bVar109)
	{
		uVar108 = DATAFILE::DATADICT_GET_ARRAY(iVar97, "int");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar115[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar114[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar113, &Var0);
		}
		iVar2++;
	}
	if (bVar117)
	{
		uVar116 = DATAFILE::DATADICT_GET_ARRAY(iVar113, "vmn");
	}
	if (bVar119)
	{
		uVar118 = DATAFILE::DATADICT_GET_ARRAY(iVar113, "vmx");
	}
	if (bVar121)
	{
		uVar120 = DATAFILE::DATADICT_GET_ARRAY(iVar113, "fwd");
	}
	if (bVar125)
	{
		uVar124 = DATAFILE::DATADICT_GET_ARRAY(iVar123, "pedi");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar128[iVar2])
		{
			StringCopy(&Var0, "scro", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar127[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar126, &Var0);
		}
		if (iVar130[iVar2])
		{
			StringCopy(&Var0, "pos", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar129[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar126, &Var0);
		}
		if (iVar132[iVar2])
		{
			StringCopy(&Var0, "look", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar131[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar126, &Var0);
		}
		if (iVar134[iVar2])
		{
			StringCopy(&Var0, "dur", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar133[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar126, &Var0);
		}
		iVar2++;
	}
	if (bVar137)
	{
		uVar136 = DATAFILE::DATADICT_GET_ARRAY(iVar135, "pos");
	}
	if (bVar139)
	{
		uVar138 = DATAFILE::DATADICT_GET_ARRAY(iVar135, "head");
	}
	if (bVar141)
	{
		uVar140 = DATAFILE::DATADICT_GET_ARRAY(iVar135, "plnkp");
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (iVar143[iVar2])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar2, 16);
			uVar142[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar135, &Var0);
		}
		iVar2++;
	}
	*uParam1 = { __LIB_19__::func_522(*uParam0, "fmnm", "") };
	iVar1 = 0;
	while (iVar1 < 2)
	{
		uParam1->f_16[iVar1] = __LIB_19__::func_280(uVar3, iVar1, 0, bVar4);
		iVar1++;
	}
	uParam1->f_19 = __LIB_11__::func_73(iVar5, "num", 0);
	uParam1->f_19.f_1 = __LIB_11__::func_73(iVar6, "sprt", -1);
	uParam1->f_19.f_1.f_1 = __LIB_11__::func_73(iVar6, "hclr", 12);
	uParam1->f_19.f_1.f_2 = __LIB_19__::func_521(iVar6, "scl", 1f);
	uParam1->f_19.f_1.f_3 = __LIB_19__::func_542(iVar6, "sh", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_19.f_5[iVar1 /*13*/][iVar2] = __LIB_19__::func_280(uVar8[iVar2], iVar1, 0, iVar9[iVar2]);
			iVar2++;
		}
		uParam1->f_19.f_5[iVar1 /*13*/].f_2 = __LIB_19__::func_280(uVar10, iVar1, 0, bVar11);
		uParam1->f_19.f_5[iVar1 /*13*/].f_3 = { __LIB_19__::func_279(uVar12, iVar1, 0f, 0f, 0f, bVar13) };
		uParam1->f_19.f_5[iVar1 /*13*/].f_6 = __LIB_19__::func_278(uVar14, iVar1, 0f, bVar15);
		uParam1->f_19.f_5[iVar1 /*13*/].f_7 = { __LIB_19__::func_279(uVar16, iVar1, 0f, 0f, 0f, bVar17) };
		uParam1->f_19.f_5[iVar1 /*13*/].f_10 = __LIB_19__::func_280(uVar18, iVar1, -1, bVar19);
		uParam1->f_19.f_5[iVar1 /*13*/].f_11 = __LIB_19__::func_280(uVar20, iVar1, 2, bVar21);
		uParam1->f_19.f_5[iVar1 /*13*/].f_12 = __LIB_19__::func_280(uVar22, iVar1, -1, bVar23);
		iVar1++;
	}
	uParam1->f_38 = __LIB_11__::func_73(iVar24, "num", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_38.f_1[iVar1 /*21*/][iVar2] = __LIB_19__::func_280(uVar26[iVar2], iVar1, 0, iVar27[iVar2]);
			iVar2++;
		}
		uParam1->f_38.f_1[iVar1 /*21*/].f_2 = __LIB_19__::func_280(uVar28, iVar1, 0, bVar29);
		uParam1->f_38.f_1[iVar1 /*21*/].f_3 = { __LIB_19__::func_279(uVar30, iVar1, 0f, 0f, 0f, bVar31) };
		uParam1->f_38.f_1[iVar1 /*21*/].f_6 = __LIB_19__::func_278(uVar32, iVar1, 0f, bVar33);
		uParam1->f_38.f_1[iVar1 /*21*/].f_7 = __LIB_19__::func_280(uVar34, iVar1, 0, bVar35);
		uParam1->f_38.f_1[iVar1 /*21*/].f_8 = __LIB_19__::func_280(uVar36, iVar1, -1, bVar37);
		uParam1->f_38.f_1[iVar1 /*21*/].f_9 = __LIB_19__::func_280(uVar38, iVar1, 0, bVar39);
		uParam1->f_38.f_1[iVar1 /*21*/].f_10 = __LIB_19__::func_280(uVar40, iVar1, -1, bVar41);
		uParam1->f_38.f_1[iVar1 /*21*/].f_11 = __LIB_19__::func_280(uVar42, iVar1, -1, bVar43);
		uParam1->f_38.f_1[iVar1 /*21*/].f_12 = __LIB_19__::func_280(uVar44, iVar1, -1, bVar45);
		uParam1->f_38.f_1[iVar1 /*21*/].f_13 = __LIB_19__::func_280(uVar46, iVar1, -1, bVar47);
		uParam1->f_38.f_1[iVar1 /*21*/].f_14 = __LIB_19__::func_280(uVar48, iVar1, 0, bVar49);
		uParam1->f_38.f_1[iVar1 /*21*/].f_15 = __LIB_19__::func_280(uVar50, iVar1, 2, bVar51);
		uParam1->f_38.f_1[iVar1 /*21*/].f_16 = __LIB_19__::func_280(uVar52, iVar1, -1, bVar53);
		uParam1->f_38.f_1[iVar1 /*21*/].f_17 = __LIB_19__::func_278(uVar54, iVar1, 60f, bVar55);
		uParam1->f_38.f_1[iVar1 /*21*/].f_18 = __LIB_19__::func_278(uVar56, iVar1, 60f, bVar57);
		uParam1->f_38.f_1[iVar1 /*21*/].f_19 = __LIB_19__::func_278(uVar58, iVar1, 60f, bVar59);
		uParam1->f_38.f_1[iVar1 /*21*/].f_20 = __LIB_19__::func_278(uVar60, iVar1, -1f, bVar61);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_38.f_23[iVar1 /*5*/].f_1[iVar2] = __LIB_19__::func_280(uVar65[iVar2], iVar1, -1, iVar66[iVar2]);
			iVar2++;
		}
		uParam1->f_38.f_23[iVar1 /*5*/].f_3 = __LIB_19__::func_280(uVar67, iVar1, 0, bVar68);
		uParam1->f_38.f_23[iVar1 /*5*/].f_4 = __LIB_19__::func_280(uVar69, iVar1, -1, bVar70);
		iVar1++;
	}
	uParam1->f_67 = __LIB_11__::func_73(iVar71, "num", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			uParam1->f_67.f_1[iVar1 /*15*/][iVar2] = __LIB_19__::func_280(uVar73[iVar2], iVar1, 0, iVar74[iVar2]);
			iVar2++;
		}
		uParam1->f_67.f_1[iVar1 /*15*/].f_3 = __LIB_19__::func_280(uVar75, iVar1, 0, bVar76);
		uParam1->f_67.f_1[iVar1 /*15*/].f_4 = { __LIB_19__::func_279(uVar77, iVar1, 0f, 0f, 0f, bVar78) };
		uParam1->f_67.f_1[iVar1 /*15*/].f_7 = __LIB_19__::func_278(uVar79, iVar1, 0f, bVar80);
		uParam1->f_67.f_1[iVar1 /*15*/].f_8 = __LIB_19__::func_280(uVar81, iVar1, -1, bVar82);
		uParam1->f_67.f_1[iVar1 /*15*/].f_9 = __LIB_19__::func_280(uVar83, iVar1, -1, bVar84);
		uParam1->f_67.f_1[iVar1 /*15*/].f_10 = __LIB_19__::func_280(uVar85, iVar1, 0, bVar86);
		uParam1->f_67.f_1[iVar1 /*15*/].f_11 = __LIB_19__::func_280(uVar88, iVar1, -1, bVar89);
		uParam1->f_67.f_1[iVar1 /*15*/].f_11.f_1 = __LIB_19__::func_280(uVar90, iVar1, 12, bVar91);
		uParam1->f_67.f_1[iVar1 /*15*/].f_11.f_2 = __LIB_19__::func_278(uVar92, iVar1, 1f, bVar93);
		uParam1->f_67.f_1[iVar1 /*15*/].f_11.f_3 = __LIB_19__::func_277(uVar94, iVar1, 0, bVar95);
		iVar1++;
	}
	uParam1->f_67.f_17 = __LIB_11__::func_73(iVar71, "trv", -1);
	uParam1->f_85 = __LIB_11__::func_73(iVar96, "num", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			uParam1->f_85.f_1[iVar1 /*12*/][iVar2] = __LIB_19__::func_280(uVar98[iVar2], iVar1, 0, iVar99[iVar2]);
			iVar2++;
		}
		uParam1->f_85.f_1[iVar1 /*12*/].f_3 = __LIB_19__::func_280(uVar100, iVar1, 0, bVar101);
		uParam1->f_85.f_1[iVar1 /*12*/].f_4 = { __LIB_19__::func_279(uVar102, iVar1, 0f, 0f, 0f, bVar103) };
		uParam1->f_85.f_1[iVar1 /*12*/].f_7 = __LIB_19__::func_278(uVar104, iVar1, 0f, bVar105);
		uParam1->f_85.f_1[iVar1 /*12*/].f_8 = { __LIB_19__::func_279(uVar106, iVar1, 0f, 0f, 0f, bVar107) };
		uParam1->f_85.f_1[iVar1 /*12*/].f_11 = __LIB_19__::func_280(uVar108, iVar1, -1, bVar109);
		iVar1++;
	}
	uParam1->f_99 = __LIB_11__::func_73(iVar110, "wnum", 0);
	uParam1->f_99.f_1 = __LIB_11__::func_73(iVar110, "wfak", -1);
	uParam1->f_99.f_2 = __LIB_19__::func_521(iVar110, "wblk", 250f);
	uParam1->f_102 = __LIB_11__::func_73(iVar111, "time", -1);
	uParam1->f_102.f_1 = __LIB_11__::func_73(iVar111, "disp", 0);
	uParam1->f_111 = __LIB_11__::func_73(iVar112, "num", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_111.f_1[iVar1 /*9*/][iVar2] = __LIB_19__::func_280(uVar114[iVar2], iVar1, 0, iVar115[iVar2]);
			iVar2++;
		}
		uParam1->f_111.f_1[iVar1 /*9*/].f_2 = { __LIB_19__::func_279(uVar116, iVar1, 0f, 0f, 0f, bVar117) };
		uParam1->f_111.f_1[iVar1 /*9*/].f_5 = { __LIB_19__::func_279(uVar118, iVar1, 0f, 0f, 0f, bVar119) };
		uParam1->f_111.f_1[iVar1 /*9*/].f_8 = __LIB_19__::func_278(uVar120, iVar1, 0f, bVar121);
		iVar1++;
	}
	uParam1->f_122 = __LIB_11__::func_73(iVar122, "num", 0);
	iVar1 = 0;
	while (iVar1 < 1)
	{
		uParam1->f_122.f_1[iVar1 /*10*/] = __LIB_19__::func_280(uVar124, iVar1, -1, bVar125);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_122.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/] = __LIB_19__::func_280(uVar127[iVar2], iVar1, -1, iVar128[iVar2]);
			uParam1->f_122.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_1 = { __LIB_19__::func_279(uVar129[iVar2], iVar1, 0f, 0f, 0f, iVar130[iVar2]) };
			uParam1->f_122.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_4 = { __LIB_19__::func_279(uVar131[iVar2], iVar1, 0f, 0f, 0f, iVar132[iVar2]) };
			uParam1->f_122.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_7 = __LIB_19__::func_280(uVar133[iVar2], iVar1, 2000, iVar134[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		uParam1->f_141[iVar1 /*8*/] = { __LIB_19__::func_279(uVar136, iVar1, 0f, 0f, 0f, bVar137) };
		uParam1->f_141[iVar1 /*8*/].f_3 = __LIB_19__::func_278(uVar138, iVar1, 0f, bVar139);
		uParam1->f_141[iVar1 /*8*/].f_4 = __LIB_19__::func_280(uVar140, iVar1, -1, bVar141);
		iVar2 = 0;
		while (iVar2 < 1)
		{
			uParam1->f_141[iVar1 /*8*/].f_6[iVar2] = __LIB_19__::func_280(uVar142[iVar2], iVar1, 0, iVar143[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
}

int func_240(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x127D6
{
	if (Local_214.f_352.f_42 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_214.f_352.f_42);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!__LIB_20__::func_328(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_241(var uParam0, int iParam1)//Position - 0x4165
{
	struct<101> Var0;
	if (Local_214.f_352.f_44 != 0)
	{
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		Var0.f_78 = -1;
		Var0.f_79 = -1;
		Var0.f_96 = -1;
		Var0.f_97 = 1;
		Var0.f_99 = 132;
		Var0.f_100 = -1;
		Stack.Push(uParam0);
		Stack.Push(&Var0);
		Call_Loc(Local_214.f_352.f_44);
		if (StackVal)
		{
			__LIB_20__::func_493(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

bool func_242(int iParam0)//Position - 0x90B
{
	return __LIB_13__::func_445(&(Local_197.f_16), iParam0);
}

bool func_243(int iParam0, int iParam1)//Position - 0x23A8A
{
	return __LIB_13__::func_445(&(Local_197.f_19.f_5[iParam0 /*13*/]), iParam1);
}

char* func_244(int iParam0, int iParam1)//Position - 0x275B2
{
	switch (iParam1)
	{
		case 0:
			return "Fixer_Contract_Recovery_Package_1";
		case 1:
			return "Fixer_Contract_Recovery_Package_2";
		case 2:
			return "Fixer_Contract_Recovery_Vehicle_1";
		case 3:
			return "Fixer_Contract_Recovery_Vehicle_2";
		case 4:
			return "Fixer_Contract_Recovery_Vehicle_3";
		case 5:
			return "Fixer_Contract_Assault_1";
		case 6:
			return "Fixer_Contract_Assault_2";
		case 7:
			return "Fixer_Contract_Assault_3";
		case 8:
			return "Fixer_Contract_Assault_4";
		case 9:
			return "Fixer_Contract_Assault_5";
		case 10:
			return "Fixer_Contract_Rescue_1";
		case 11:
			return "Fixer_Contract_Rescue_2";
		case 12:
			return "Fixer_Contract_Rescue_3";
		case 13:
			return "Fixer_Contract_Rescue_4";
		case 14:
			return "Fixer_Contract_Rescue_5";
		case 15:
			return "Fixer_Contract_Protect_1";
		case 16:
			return "Fixer_Contract_Protect_2";
		case 17:
			return "Fixer_Contract_Protect_3";
		case 18:
			return "Fixer_Contract_Protect_4";
		case 19:
			return "Fixer_Contract_Protect_5";
		case 20:
			return "Fixer_Contract_Tail_1";
		case 21:
			return "Fixer_Contract_Tail_2";
		case 22:
			return "Fixer_Contract_Tail_3";
		case 23:
			return "Fixer_Contract_Tail_4";
		case 24:
			return "Fixer_Contract_Tail_5";
		default:
	}
	return "";
}

char* func_245()//Position - 0x7CB02
{
	return "FIXER_FAIL";
}

char* func_246()//Position - 0x7CB0E
{
	return "FIXER_MUSIC_STOP";
}

char* func_247(var uParam0)//Position - 0x7D2CB
{
	return "FXFRAUD";
}

int func_248(var uParam0)//Position - 0x7D2D7
{
	return 175;
}

char* func_249(var uParam0, var uParam1)//Position - 0x7D2E1
{
	return "FIX_FRANKLIN";
}

int func_250(var uParam0)//Position - 0x7E0F7
{
	return 822;
}

int func_251(var uParam0, bool bParam1)//Position - 0x7EB23
{
	if (bParam1)
	{
		return 0;
	}
	return 4000;
}

int func_252(bool bParam0, bool bParam1)//Position - 0x7F0F3
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam0)
	{
		if (!bParam1)
		{
			return NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			return NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	return MISC::GET_GAME_TIMER();
}

float func_253(var uParam0)//Position - 0x84915
{
	return 0.8f;
}

float func_254(var uParam0)//Position - 0x88B0D
{
	return 80f;
}

char* func_255()//Position - 0x90D20
{
	return "DLC_TUNER/DLC_Tuner_Generic";
}

float func_256()//Position - 0x917EB
{
	return 300f;
}

int func_257(var uParam0)//Position - 0x92685
{
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INCAR");
}

bool func_258(int iParam0, var uParam1)//Position - 0x92892
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_10 != -1;
}

char* func_259(int iParam0)//Position - 0x9410A
{
	switch (iParam0)
	{
		case 0:
			return "set_tint_shell";
		case 1:
			return "set_lighting_tint_props";
		case 2:
			return "set_crane_tint";
		case 3:
			return "set_bedroom_tint";
		case 4:
			return "set_bedroom_traditional";
		case 5:
			return "set_bedroom_modern";
		case 6:
			return "set_bedroom_clutter";
		case 7:
			return "set_bedroom_blinds_open";
		case 8:
			return "set_bedroom_blinds_closed";
		case 9:
			return "set_modarea";
		case 10:
			return "set_office_basic";
		case 11:
			return "set_office_traditional";
		case 12:
			return "set_office_modern";
		case 13:
			return "set_floor_1";
		case 14:
			return "set_floor_2";
		case 15:
			return "set_floor_decal_1";
		case 16:
			return "set_floor_decal_2";
		case 17:
			return "set_floor_decal_3";
		case 18:
			return "set_floor_decal_4";
		case 19:
			return "set_floor_decal_5";
		case 20:
			return "set_floor_decal_6";
		case 21:
			return "set_floor_decal_7";
		case 22:
			return "set_floor_decal_8";
		case 23:
			return "set_floor_decal_9";
		case 24:
			return "set_lighting_hangar_a";
		case 25:
			return "set_lighting_hangar_b";
		case 26:
			return "set_lighting_hangar_c";
		case 27:
			return "set_lighting_wall_neutral";
		case 28:
			return "set_lighting_wall_tint01";
		case 29:
			return "set_lighting_wall_tint02";
		case 30:
			return "set_lighting_wall_tint03";
		case 31:
			return "set_lighting_wall_tint04";
		case 32:
			return "set_lighting_wall_tint05";
		case 33:
			return "set_lighting_wall_tint06";
		case 34:
			return "set_lighting_wall_tint07";
		case 35:
			return "set_lighting_wall_tint08";
		case 36:
			return "set_lighting_wall_tint09";
		default:
	}
	return "";
}

int func_260(int iParam0)//Position - 0x942FE
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 1:
			return 0;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 2;
			break;
		case 9:
			return 3;
			break;
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		case 13:
		case 14:
			return 5;
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return 6;
			break;
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
			return 7;
			break;
	}
	return -1;
}

char* func_261(var uParam0)//Position - 0x9441D
{
	return "sm_smugdlc_int_01";
}

Vector3 func_262(var uParam0)//Position - 0x94429
{
	return -1266.802f, -3014.8364f, -49.4895f;
}

void func_263(int iParam0, bool bParam1)//Position - 0x95E42
{
	int iVar0;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		iVar0 = 0;
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (!BitTest(iVar0, bParam1))
		{
			MISC::SET_BIT(&iVar0, bParam1);
			DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
		}
	}
}

int func_264(var uParam0, var uParam1)//Position - 0xEA387
{
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, *uParam1);
}

void func_265(int iParam0, int iParam1)//Position - 0x10F63C
{
	int iVar0;
	iVar0 = __LIB_1__::func_677(iParam0, __LIB_1__::func_27(iParam1));
	iVar0++;
	__LIB_3__::func_119(iParam0, iVar0, iParam1);
}

void func_266(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xFAA97
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
			if (!__LIB_12__::func_495())
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
		__LIB_20__::func_516();
		if (__LIB_15__::func_396(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1943920.f_3), 6);
		}
		Global_2815059.f_6745 = 0;
	}
}

void func_267(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xE5D2A
{
	__LIB_20__::func_876(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_268(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x9FEB1
{
	HUD::SET_BLIP_ALPHA(iParam0, __LIB_20__::func_518(iParam0, iParam1, fParam2, fParam3));
}

void func_269(bool bParam0)//Position - 0xA5185
{
	float fVar0;
	if (Global_1836584 || Global_2667225.f_45.f_303)
	{
		if (Global_2667225.f_45.f_302)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (Global_1836588)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_2667225.f_45.f_299) < fVar0 || __LIB_1__::func_603(PLAYER::PLAYER_ID())) || __LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0)))
				{
					if ((__LIB_2__::func_619() || __LIB_2__::func_618()) || __LIB_2__::func_617())
					{
						if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/))
						{
							Global_2667225.f_45.f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							__LIB_3__::func_274(1000, 0, 1);
						}
						else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2667225.f_45.f_318, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 2000)
						{
							__LIB_3__::func_274(2500, 0, bParam0);
							Global_2667225.f_45.f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						}
					}
					else
					{
						Global_2667225.f_45.f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						__LIB_3__::func_274(1000, 0, bParam0);
					}
				}
				else
				{
					Global_2667225.f_45.f_299 = { 0f, 0f, 0f };
					Global_2667225.f_45.f_302 = 0;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_174))
		{
			__LIB_20__::func_519(&(Global_2667225.f_45.f_174));
		}
	}
}

Vector3 func_270()//Position - 0xC0707
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3[32];
	int iVar4;
	iVar4 = 0;
	if (Global_1836588)
	{
		iVar0 = 0;
		iVar2 = 0;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
		iVar2 = iVar0;
	}
	while (iVar1 < 32)
	{
		if (SYSTEM::VMAG(Global_2667225.f_45.f_202[iVar2 /*3*/]) > 0f)
		{
			Var3[iVar4 /*3*/] = { Global_2667225.f_45.f_202[iVar2 /*3*/] };
			iVar4++;
			if (__LIB_20__::func_521(Global_2667225.f_45.f_202[iVar2 /*3*/]))
			{
				return Global_2667225.f_45.f_202[iVar2 /*3*/];
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	if (iVar4 > 0)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
		return Var3[iVar2 /*3*/];
	}
	return Global_2676213;
}

void func_271(var uParam0, var uParam1, var uParam2, float fParam3)//Position - 0xC9E84
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = (iVar0 + iVar2);
		if (!iVar1 < *uParam0)
		{
			iVar1 = (iVar1 - *uParam0);
		}
		if (__LIB_20__::func_530(*(uParam0[iVar1 /*4*/]), (uParam0[iVar1 /*4*/])->f_3, 0, 1, 0, 0, fParam3, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			*uParam1 = { *(uParam0[iVar1 /*4*/]) };
			*uParam2 = (uParam0[iVar1 /*4*/])->f_3;
			return;
		}
		iVar0++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	*uParam1 = { *(uParam0[iVar0 /*4*/]) };
	*uParam2 = (uParam0[iVar0 /*4*/])->f_3;
}

int func_272(bool bParam0)//Position - 0x100236
{
	if (!__LIB_1__::func_836(PLAYER::PLAYER_ID(), 3) && __LIB_20__::func_525(1))
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
		if (__LIB_1__::func_730() == __LIB_0__::getMinusOneOrNull() || !__LIB_0__::func_156(__LIB_1__::func_730(), 0, 1))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_836(PLAYER::PLAYER_ID(), 1) && !__LIB_16__::func_231(PLAYER::PLAYER_ID()))
	{
		if (__LIB_20__::func_90())
		{
			return 1;
		}
	}
	return 0;
}

int func_273(var uParam0)//Position - 0x99B89
{
	int iVar0;
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	__LIB_20__::func_517(uParam0, uParam0->f_17);
	__LIB_1__::func_742(uParam0);
	if (__LIB_0__::func_177())
	{
		__LIB_1__::func_742(uParam0);
	}
	if (__LIB_1__::func_258(uParam0->f_1))
	{
		__LIB_2__::func_168();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (__LIB_0__::func_703(uParam0->f_69, 8192))
			{
				Global_1931432 = 1;
			}
			return 1;
		}
		if (((Global_2703735.f_2400[0 /*80*/].f_1 == 13 || Global_2703735.f_2400[0 /*80*/].f_1 == 53) || Global_2703735.f_2400[0 /*80*/].f_1 == 54) || Global_2703735.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703735.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703735.f_2400[iVar0 + 1 /*80*/] = { Global_2703735.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703735.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				__LIB_2__::func_168();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				__LIB_1__::func_330(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !__LIB_0__::func_703(uParam0->f_69, 128))
			{
				if (__LIB_1__::func_256(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					__LIB_1__::func_330(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_274(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xE06B2
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
	if (__LIB_19__::func_559(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_20__::func_116() || iParam2 == 28)
	{
		if (__LIB_20__::func_30(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_20__::func_28(), sParam7))
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
								if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_0__::func_361(bVar4, 0))
									{
										if (__LIB_19__::func_931(bVar4) || __LIB_12__::func_485(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__::func_796(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_20__::func_23(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_2__::func_155(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_492(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_12__::func_490())
							{
								if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::getMinusOneOrNull();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__::func_935(bVar4) && __LIB_20__::func_22(bVar4, iParam2, bVar3)) && __LIB_0__::func_156(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_20__::func_21(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
								iVar6 = __LIB_19__::func_941(bVar4);
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
									if (!__LIB_12__::func_490())
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
								iVar17 = __LIB_20__::func_88(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_12__::func_486(bVar4, 1) && iVar1[bVar10] != -1)
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
									__LIB_20__::func_523(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_20__::func_523(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
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
							if (__LIB_0__::func_156(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::getMinusOneOrNull();
							}
							if (__LIB_19__::func_935(bVar4))
							{
								if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_20__::func_21(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
									iVar6 = __LIB_19__::func_941(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_20__::func_88(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_12__::func_486(bVar4, 1))
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
									__LIB_20__::func_531(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_19__::func_929(uParam3, iParam1, iParam2);
						}
						__LIB_0__::clearF_1Prop(&(uParam3->f_21));
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
						if (__LIB_19__::func_928(uParam3))
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

struct<6> func_275(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x25931
{
	struct<6> Var0;
	StringCopy(&Var0, sParam1, 24);
	StringConCat(&Var0, sParam0, 24);
	StringConCat(&Var0, sParam3, 24);
	StringConCat(&Var0, sParam2, 24);
	return Var0;
}

void func_276(var uParam0)//Position - 0x25B1B
{
	*uParam0 = (32 - *uParam0);
}

void func_277()//Position - 0xB696C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_291.f_0)
	{
		__LIB_21__::func_163(iVar0);
		iVar0++;
	}
}

void func_278()//Position - 0xB9F0E
{
	MISC::CLEAR_BIT(&Global_8136, 16);
}

int func_279()//Position - 0xB9FAB
{
	if (BitTest(Global_8136, 29))
	{
		return 1;
	}
	return 0;
}

void func_280(var uParam0)//Position - 0xBA035
{
	Global_22636 = uParam0;
	MISC::SET_BIT(&Global_8136, 16);
}

int func_281(struct<3> Param0, float fParam1, float fParam2)//Position - 0xBA29B
{
	float fVar0;
	float fVar1;
	if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &fVar0, &fVar1))
	{
		if (fVar0 >= fParam1 && fVar0 <= fParam2)
		{
			if (fVar1 >= fParam1 && fVar1 <= fParam2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282()//Position - 0xC151D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_197.f_67)
	{
		if (__LIB_21__::func_144(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_283()//Position - 0xC154B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_197.f_38)
	{
		if (__LIB_21__::func_144(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_284(int iParam0)//Position - 0xC7396
{
	if (__LIB_21__::func_140(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_285(int iParam0, int iParam1)//Position - 0x26B2
{
	struct<9> Var0;
	Var0 = { __LIB_21__::func_142(iParam0) };
	return __LIB_0__::func_316(&Var0, iParam1);
}

int func_286(int iParam0)//Position - 0x31A7
{
	if (__LIB_21__::func_145(iParam0, 12))
	{
		return 1;
	}
	if (__LIB_20__::func_911(22))
	{
		return 1;
	}
	return 0;
}

void func_287(bool bParam0)//Position - 0x2714B
{
	if (bParam0)
	{
		if (!__LIB_18__::func_759())
		{
			MISC::SET_BIT(&Global_1958711, 20);
		}
	}
	else if (__LIB_18__::func_759())
	{
		MISC::CLEAR_BIT(&Global_1958711, 20);
	}
}

int func_288(int iParam0)//Position - 0xB9F6B
{
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (__LIB_20__::func_831(iParam0) == 1)
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

void func_289(int iParam0, int iParam1)//Position - 0xBC992
{
	if (__LIB_20__::func_986(iParam0))
	{
		__LIB_21__::func_232(2, iParam0, iParam1, __LIB_20__::func_985(iParam0), __LIB_20__::func_984(iParam0));
	}
}

void func_290(int iParam0, int iParam1, int iParam2)//Position - 0xBCA50
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_20__::func_911(8))
			{
				__LIB_21__::func_232(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
		case 1:
			if (__LIB_20__::func_911(10))
			{
				__LIB_21__::func_232(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
		case 2:
			if (__LIB_20__::func_911(9))
			{
				__LIB_21__::func_232(iParam0, iParam1, iParam2, 6, 1056964608);
			}
			break;
	}
}

bool func_291()//Position - 0xC5A5C
{
	return __LIB_21__::func_207();
}

char* func_292(var uParam0, int iParam1)//Position - 0x23ACC
{
	switch (iParam1)
	{
		case 0:
			return "GR_Skydiving_1";
		case 1:
			return "GR_Skydiving_2";
		case 2:
			return "GR_Skydiving_3";
		case 3:
			return "GR_Skydiving_4";
		case 4:
			return "GR_Skydiving_5";
		case 5:
			return "GR_Skydiving_6";
		case 6:
			return "GR_Skydiving_7";
		case 7:
			return "GR_Skydiving_8";
		case 8:
			return "GR_Skydiving_9";
		case 9:
			return "GR_Skydiving_10";
		case 10:
			return "GR_Skydiving_11";
		case 11:
			return "GR_Skydiving_12";
		case 12:
			return "GR_Skydiving_13";
		case 13:
			return "GR_Skydiving_14";
		case 14:
			return "GR_Skydiving_15";
		case 15:
			return "GR_Skydiving_16";
		case 16:
			return "GR_Skydiving_17";
		case 17:
			return "GR_Skydiving_18";
		case 18:
			return "GR_Skydiving_19";
		case 19:
			return "GR_Skydiving_20";
		case 20:
			return "GR_Skydiving_21";
		case 21:
			return "GR_Skydiving_22";
		case 22:
			return "GR_Skydiving_23";
		case 23:
			return "GR_Skydiving_24";
		case 24:
			return "GR_Skydiving_25";
		default:
	}
	return "";
}

char* func_293()//Position - 0x24283
{
	return "anim@scripted@player@freemode@tun_prep_ig1_grab_low@male@";
}

int func_294()//Position - 0x2BDCD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((__LIB_0__::func_253((34837 + iVar0 * 4), -1) != 255 || __LIB_0__::func_253((34839 + iVar0 * 4), -1) != 255) || __LIB_0__::func_253((34838 + iVar0 * 4), -1) != 255)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_295()//Position - 0xD1604
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (__LIB_20__::func_172(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_296()//Position - 0x23EE8
{
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	return 0;
}

void func_297(int iParam0, bool bParam1)//Position - 0x2814A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == -1)
		{
			iParam0 = __LIB_0__::func_253(455, -1);
		}
		else if (bParam1)
		{
			__LIB_1__::func_379(455, iParam0, -1);
		}
	}
	PLAYER::SET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID());
	__LIB_18__::func_947(PLAYER::PLAYER_ID(), iParam0, 0);
}

int func_298(int iParam0)//Position - 0xCDDD
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (__LIB_0__::func_896(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (__LIB_0__::func_320(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_299(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA9EE2
{
	__LIB_0__::func_866();
	__LIB_1__::func_674(1);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	__LIB_21__::func_137(1, 1, 1, 0, 0, 0, bParam2);
	__LIB_1__::func_359();
	__LIB_1__::func_7(12, 1, -1);
	__LIB_1__::func_8(0);
	CAM::SET_WIDESCREEN_BORDERS(true, -1);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	__LIB_1__::func_674(1);
	__LIB_0__::func_83(1);
	Global_2703735.f_3428 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);
		}
	}
}

void func_300(bool bParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xA8F9F
{
	__LIB_1__::func_534();
	if (bParam0)
	{
		__LIB_1__::func_674(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	__LIB_1__::func_553();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	__LIB_21__::func_137(0, 1, 1, 0, 0, bParam2, 0);
	__LIB_1__::func_320();
	__LIB_1__::func_7(12, 0, -1);
	__LIB_1__::func_8(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_0__::func_131();
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
	__LIB_0__::func_83(0);
	if (((((__LIB_0__::func_629() == 0 && __LIB_1__::func_486() == 0) && uParam1) && !__LIB_3__::func_467(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && __LIB_0__::func_893())
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2703735.f_3428 = 0;
	__LIB_11__::func_561();
}

int func_301(int iParam0)//Position - 0x2258C
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1911933[iParam0 /*260*/].f_50, 0);
	}
	return 0;
}

int func_302(bool bParam0)//Position - 0x22876
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_5, 25);
	}
	return 0;
}

int func_303(int iParam0)//Position - 0x234D5
{
	if (((((PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0)) || PED::IS_PED_IN_ANY_BOAT(iParam0)) || __LIB_1__::func_80(iParam0)) || __LIB_21__::func_161(iParam0)) || PED::IS_PED_IN_ANY_SUB(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
		{
			case joaat("oppressor"):
			case joaat("oppressor2"):
			case joaat("deluxo"):
				return 1;
			}
		default:
	}
	return 0;
}

bool func_304(int iParam0, int iParam1)//Position - 0xD7E
{
	return __LIB_0__::func_316(&(Local_199.f_38.f_1[iParam0 /*21*/]), iParam1);
}

bool func_305(int iParam0)//Position - 0x138E
{
	return __LIB_0__::func_316(&(Local_199.f_16), iParam0);
}

var func_306(int iParam0)//Position - 0x29EF
{
	return Local_199.f_38.f_65[Local_199.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

bool func_307(int iParam0, int iParam1)//Position - 0x32B9
{
	return __LIB_0__::func_316(&(Local_199.f_127.f_1[iParam0 /*12*/]), iParam1);
}

bool func_308(int iParam0, int iParam1)//Position - 0x37A4
{
	return __LIB_0__::func_316(&(Local_199.f_109.f_1[iParam0 /*15*/]), iParam1);
}

int func_309(int iParam0, int iParam1)//Position - 0x3ED2
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
		if (BitTest(Local_199.f_109.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_310(int iParam0, int iParam1)//Position - 0x4118
{
	if (Local_199.f_109.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_199.f_109.f_1[iParam0 /*15*/].f_8, Local_199.f_109.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_199.f_109.f_1[iParam0 /*15*/].f_8, Local_199.f_109.f_1[iParam0 /*15*/].f_8);
	}
}

bool func_311(int iParam0, int iParam1)//Position - 0x21263
{
	return __LIB_0__::func_316(&(Local_199.f_19.f_5[iParam0 /*13*/]), iParam1);
}

char* func_312(var uParam0, int iParam1)//Position - 0x237DD
{
	switch (iParam1)
	{
		case 0:
			return "RE_Smuggler_Plane_1";
		case 1:
			return "RE_Smuggler_Plane_2";
		case 2:
			return "RE_Smuggler_Plane_3";
		case 3:
			return "RE_Smuggler_Plane_4";
		case 4:
			return "RE_Smuggler_Plane_5";
		default:
	}
	return "";
}

bool func_313(int iParam0)//Position - 0x23ADB
{
	return __LIB_0__::func_316(&uLocal_346, iParam0);
}

char* func_314()//Position - 0x23E06
{
	return "TAIL_PLANE_SCENE";
}

void func_315(int iParam0)//Position - 0x23E12
{
	if (__LIB_16__::func_758(&uLocal_346, iParam0))
	{
	}
}

void func_316(int iParam0)//Position - 0x24FB7
{
	if (__LIB_1__::func_458(&uLocal_346, iParam0))
	{
	}
}

char* func_317()//Position - 0x24FCB
{
	return "TAIL_PLANE_MIXGROUP";
}

int func_318()//Position - 0x28F35
{
	int iVar0;
	iVar0 = (iVar0 + __LIB_21__::func_105());
	return iVar0;
}

void func_319(int iParam0)//Position - 0x2F3A0
{
	int iVar0;
	switch (__LIB_21__::func_106())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iVar0, true);
			break;
	}
}

int func_320(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)//Position - 0x2F3C9
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (__LIB_21__::func_106())
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

Vector3 func_321(int iParam0, int iParam1)//Position - 0x2F432
{
	switch (__LIB_21__::func_106())
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

void func_322()//Position - 0xB8C67
{
	if (HUD::DOES_BLIP_EXIST(iLocal_362))
	{
		HUD::REMOVE_BLIP(&iLocal_362);
	}
}

int func_323(int iParam0)//Position - 0xBB5C0
{
	return Local_199.f_38.f_65[Local_199.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

Vector3 func_324(int iParam0)//Position - 0xC26E5
{
	struct<3> Var0;
	Var0 = { Local_199.f_109.f_1[Local_199.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
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

bool func_325()//Position - 0xCB87F
{
	return __LIB_21__::func_105() > 0;
}

void func_326(int iParam0)//Position - 0x2E59C
{
	if (iLocal_354[iParam0] != __LIB_0__::getMinusOneOrNull())
	{
		if (uLocal_355[iParam0] != iLocal_354[iParam0])
		{
			uLocal_355[iParam0] = iLocal_354[iParam0];
		}
	}
}

int func_327(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xB64E7
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (__LIB_20__::func_753(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (__LIB_20__::func_752(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (__LIB_20__::func_752(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (__LIB_20__::func_753(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (__LIB_0__::func_332(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!__LIB_20__::func_753(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!__LIB_20__::func_752(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!__LIB_20__::func_752(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!__LIB_20__::func_753(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!__LIB_20__::func_753(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!__LIB_20__::func_752(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!__LIB_20__::func_752(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!__LIB_20__::func_753(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (__LIB_20__::func_751(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (__LIB_20__::func_750(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || __LIB_20__::func_750(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (__LIB_20__::func_751(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_332(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!__LIB_20__::func_373(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		__LIB_0__::func_187();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_328(int iParam0)//Position - 0x1372
{
	return Local_575.f_22[iParam0 /*24*/].f_2;
}

void func_329(int iParam0, int iParam1)//Position - 0x1835
{
	if (__LIB_1__::func_458(&(Local_575.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_330(int iParam0, int iParam1)//Position - 0x1851
{
	return __LIB_13__::func_445(&(Local_575.f_22[iParam0 /*24*/].f_3), iParam1);
}

int func_331(int iParam0)//Position - 0x2F7A
{
	return Local_575.f_119[iParam0 /*8*/].f_1;
}

bool func_332(int iParam0, int iParam1)//Position - 0x33AF
{
	return __LIB_13__::func_445(&(Local_575.f_119[iParam0 /*8*/].f_2), iParam1);
}

bool func_333(int iParam0, int iParam1)//Position - 0x3737
{
	return __LIB_13__::func_445(&(Local_575.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_334(int iParam0)//Position - 0x3B2C
{
	return Local_575.f_22[iParam0 /*24*/].f_1;
}

void func_335(int iParam0, int iParam1)//Position - 0x4561
{
	if (__LIB_16__::func_758(&(Local_575.f_119[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_336(int iParam0, int iParam1)//Position - 0x457D
{
	if (__LIB_1__::func_458(&(Local_575.f_119[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_337(int iParam0)//Position - 0x539E
{
	return Local_575.f_2.f_13[iParam0];
}

void func_338(int iParam0, int iParam1)//Position - 0x213EF
{
	Local_575.f_119[iParam0 /*8*/].f_1 = iParam1;
}

int func_339(int iParam0)//Position - 0x2143F
{
	return Local_575.f_2.f_9[iParam0];
}

void func_340(int iParam0, int iParam1)//Position - 0x2179C
{
	if (__LIB_16__::func_758(&(Local_575.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_341(int iParam0)//Position - 0x21808
{
	return Local_575.f_2.f_9[iParam0] != -1;
}

void func_342(int iParam0, int iParam1)//Position - 0x2187B
{
	if (__LIB_1__::func_458(&(Local_575.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_343(int iParam0, bool bParam1, bool bParam2)//Position - 0x224E0
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), bParam1, bParam2);
}

char* func_344(var uParam0, int iParam1)//Position - 0x24A16
{
	switch (iParam1)
	{
		case 0:
			return "RE_Smuggler_Trail_1a";
		case 1:
			return "RE_Smuggler_Trail_1b";
		case 2:
			return "RE_Smuggler_Trail_1c";
		case 3:
			return "RE_Smuggler_Trail_2a";
		case 4:
			return "RE_Smuggler_Trail_2b";
		case 5:
			return "RE_Smuggler_Trail_2c";
		case 6:
			return "RE_Smuggler_Trail_3a";
		case 7:
			return "RE_Smuggler_Trail_3b";
		case 8:
			return "RE_Smuggler_Trail_3c";
		case 9:
			return "RE_Smuggler_Trail_4a";
		case 10:
			return "RE_Smuggler_Trail_4b";
		case 11:
			return "RE_Smuggler_Trail_4c";
		case 12:
			return "RE_Smuggler_Trail_5a";
		case 13:
			return "RE_Smuggler_Trail_5b";
		case 14:
			return "RE_Smuggler_Trail_5c";
		default:
	}
	return "";
}

int func_345(int iParam0)//Position - 0x26150
{
	int iVar0;
	if (iParam0 > -1)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			return PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0));
		}
	}
	return 0;
}

void func_346(int iParam0)//Position - 0x2D970
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2.f_15[iParam0]) && __LIB_1__::func_561(Local_575.f_2.f_15[iParam0]))
	{
		__LIB_6__::func_843(&(Local_575.f_2.f_15[iParam0]));
		__LIB_1__::func_518(&(Local_575.f_2.f_15[iParam0]));
	}
}

void func_347(int iParam0, int iParam1)//Position - 0xC3152
{
	if (__LIB_16__::func_758(&(Local_575.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

void func_348(int iParam0, int iParam1)//Position - 0xC8462
{
	if (__LIB_1__::func_561(Local_575.f_22[iParam0 /*24*/]))
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_COWER"), 1))
		{
			TASK::TASK_COWER(iParam1, -1);
		}
	}
}

void func_349(int iParam0, int iParam1)//Position - 0xC8491
{
	if (!__LIB_0__::func_798(iParam1, -251125078, 1))
	{
		if (__LIB_1__::func_561(Local_575.f_22[iParam0 /*24*/]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), 10000f, 999999, false, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 65536, true);
		}
	}
}

Vector3 func_350(int iParam0)//Position - 0xCA2A4
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_22[iParam0 /*24*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_575.f_22[iParam0 /*24*/]), false))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_575.f_22[iParam0 /*24*/]), true);
		}
	}
	return 0f, 0f, 0f;
}

int func_351()//Position - 0xD491
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (__LIB_19__::func_268(7))
	{
		if (__LIB_0__::func_315(Global_2703735.f_4.f_16) || __LIB_0__::func_314(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

void func_352(var uParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xB7C29
{
	int iVar0;
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (__LIB_0__::func_1(iVar0))
	{
		__LIB_0__::func_187();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (__LIB_21__::func_327(uParam0, bParam4, bParam6, 0))
		{
			__LIB_13__::func_800(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (__LIB_20__::func_756(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam5)
					{
						if (!__LIB_0__::func_1(iVar0))
						{
							__LIB_0__::func_151(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								__LIB_0__::func_333(1);
							}
						}
					}
				}
			}
		}
		else if (__LIB_20__::func_756(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam5)
				{
					if (!__LIB_0__::func_1(iVar0))
					{
						__LIB_0__::func_151(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
						{
							__LIB_0__::func_333(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (__LIB_0__::func_1(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				__LIB_0__::func_345(uParam0, iVar0, 1);
			}
		}
		if (!__LIB_21__::func_327(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !__LIB_0__::func_332(uParam0))
			{
				__LIB_0__::func_644(uParam0);
			}
		}
	}
}

void func_353(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0xB6D1C
{
	int iVar0;
	int iVar1;
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (__LIB_0__::func_1(iVar0))
	{
		__LIB_0__::func_187();
	}
	if (__LIB_0__::func_339(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (__LIB_21__::func_327(uParam0, bParam5, bParam7, 0))
			{
				__LIB_13__::func_795(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (__LIB_20__::func_756(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!__LIB_0__::func_1(iVar0))
							{
								__LIB_0__::func_151(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									__LIB_0__::func_333(1);
								}
							}
						}
					}
				}
			}
			else if (__LIB_20__::func_756(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!__LIB_0__::func_1(iVar0))
						{
							__LIB_0__::func_151(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								__LIB_0__::func_333(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (__LIB_0__::func_1(sParam3))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						__LIB_0__::func_345(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						__LIB_0__::func_345(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						__LIB_0__::func_345(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						__LIB_0__::func_345(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						__LIB_0__::func_345(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					__LIB_0__::func_345(uParam0, iVar0, 1);
				}
			}
			if (!__LIB_21__::func_327(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !__LIB_0__::func_332(uParam0))
				{
					__LIB_0__::func_644(uParam0);
				}
			}
		}
	}
	else
	{
		__LIB_0__::func_345(uParam0, iVar0, 0);
	}
}

void func_354(int iParam0, int iParam1, struct<3> Param2)//Position - 0x2AE75
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = __LIB_3__::func_309(Param2, 6, -1, 0, 1, -1);
	Var1 = { __LIB_0__::func_785(iVar0, 0) };
	iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, __LIB_3__::func_285(iVar0));
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
	if (iVar2 != 0 && iVar2 == iVar3)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam1))
		{
			return;
		}
		if (!__LIB_1__::func_561(Local_575.f_2[iParam0]))
		{
			return;
		}
		if (__LIB_0__::func_388(iVar0, &Var1, &fVar4))
		{
			Var1 = { Var1.f_0, Var1.f_1, (Var1.f_2 + 5f) };
			ENTITY::SET_ENTITY_COORDS(iParam1, Var1, true, false, false, true);
			if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			}
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar4);
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam1);
		}
	}
}

bool func_355(int iParam0)//Position - 0x1409
{
	return __LIB_0__::func_316(&(Local_195.f_16), iParam0);
}

bool func_356(int iParam0, int iParam1)//Position - 0x219B4
{
	return __LIB_0__::func_316(&(Local_195.f_19.f_5[iParam0 /*13*/]), iParam1);
}

char* func_357(int iParam0, int iParam1)//Position - 0x24BF0
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Juggernaut_1";
		case 1:
			return "Sum2_Juggernaut_2";
		case 2:
			return "Sum2_Juggernaut_3";
		case 3:
			return "Sum2_Juggernaut_4";
		case 4:
			return "Sum2_Juggernaut_5";
		default:
	}
	return "";
}

int func_358(int iParam0)//Position - 0x260B9
{
	switch (iParam0)
	{
		case 0:
			return 5000;
		default:
	}
	return 0;
}

int func_359(var uParam0)//Position - 0x2610B
{
	return 67108864;
}

char* func_360(var uParam0)//Position - 0x288DB
{
	return "grab_low_facial";
}

void func_361(int iParam0)//Position - 0x293F0
{
	if (__LIB_1__::func_458(&uLocal_518, iParam0))
	{
	}
}

void func_362(int iParam0)//Position - 0x2A1C7
{
	if (__LIB_1__::func_458(&(Local_195.f_16), iParam0))
	{
	}
}

int func_363(int iParam0)//Position - 0xD6469
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 30:
			return 0;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 0;
		case 43:
			return 0;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 0;
		case 47:
			return 0;
		case 48:
			return 0;
		case 49:
			return 0;
		case 50:
			return 0;
		default:
	}
	return 1;
}

bool func_364()//Position - 0xD69F3
{
	return __LIB_0__::func_253(9359, -1) == 51;
}

float func_365(int iParam0)//Position - 0xD6CBA
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_21799 /* Tunable: GR_RESEARCH_WEIGHT_APC_SAM_BATTERY */;
		case 1:
			return Global_262145.f_21800 /* Tunable: GR_RESEARCH_WEIGHT_BALLISTIC_EQUIPMENT */;
		case 2:
			return Global_262145.f_21801 /* Tunable: GR_RESEARCH_WEIGHT_HALF_TRACK_20MM_QUAD_CANNONS */;
		case 3:
			return Global_262145.f_21802 /* Tunable: GR_RESEARCH_WEIGHT_WEAPONIZED_TAMPA_DUAL_REMOTE_MINIGUN */;
		case 4:
			return Global_262145.f_21803 /* Tunable: GR_RESEARCH_WEIGHT_WEAPONIZED_TAMPA_REAR_FIRING_MORTAR */;
		case 5:
			return Global_262145.f_21804 /* Tunable: GR_RESEARCH_WEIGHT_WEAPONIZED_TAMPA_FRONT_MISSILE_LAUNCHERS */;
		case 6:
			return Global_262145.f_21805 /* Tunable: GR_RESEARCH_WEIGHT_WEAPONIZED_TAMPA_HEAVY_CHASSIS_ARMOR */;
		case 7:
			return Global_262145.f_21806 /* Tunable: GR_RESEARCH_WEIGHT_DUNE_FAV_40MM_GRENADE_LAUNCHER */;
		case 8:
			return Global_262145.f_21807 /* Tunable: GR_RESEARCH_WEIGHT_DUNE_FAV_762MM_MINIGUN */;
		case 9:
			return Global_262145.f_21808 /* Tunable: GR_RESEARCH_WEIGHT_INSURGENT_PICK_UP_CUSTOM_50_CAL_MINIGUN */;
		case 10:
			return Global_262145.f_21809 /* Tunable: GR_RESEARCH_WEIGHT_INSURGENT_PICK_UP_CUSTOM_HEAVY_ARMOR_PLATING */;
		case 11:
			return Global_262145.f_21810 /* Tunable: GR_RESEARCH_WEIGHT_TECHNICAL_CUSTOM_762MM_MINIGUN */;
		case 12:
			return Global_262145.f_21811 /* Tunable: GR_RESEARCH_WEIGHT_TECHNICAL_CUSTOM_RAM_BAR */;
		case 13:
			return Global_262145.f_21812 /* Tunable: GR_RESEARCH_WEIGHT_TECHNICAL_CUSTOM_BRUTE_BAR */;
		case 14:
			return Global_262145.f_21813 /* Tunable: GR_RESEARCH_WEIGHT_TECHNICAL_CUSTOM_HEAVY_CHASSIS_ARMOR */;
		case 15:
			return Global_262145.f_21814 /* Tunable: GR_RESEARCH_WEIGHT_OPPRESSOR_ROCKETS */;
		case 16:
			return Global_262145.f_21815 /* Tunable: GR_RESEARCH_WEIGHT_FRACTAL_LIVERY_SET */;
		case 17:
			return Global_262145.f_21816 /* Tunable: GR_RESEARCH_WEIGHT_DIGITAL_LIVERY_SET */;
		case 18:
			return Global_262145.f_21817 /* Tunable: GR_RESEARCH_WEIGHT_GEOMETRIC_LIVERY_SET */;
		case 19:
			return Global_262145.f_21818 /* Tunable: GR_RESEARCH_WEIGHT_NATURE_RESERVE_LIVERY */;
		case 20:
			return Global_262145.f_21819 /* Tunable: GR_RESEARCH_WEIGHT_NAVAL_BATTLE_LIVERY */;
		case 21:
			return Global_262145.f_21820 /* Tunable: GR_RESEARCH_WEIGHT_ANTI_AIRCRAFT_TRAILER_DUAL_20MM_FLAK_CANNON */;
		case 22:
			return Global_262145.f_21821 /* Tunable: GR_RESEARCH_WEIGHT_ANTI_AIRCRAFT_TRAILER_HOMING_MISSILE_BATTERY */;
		case 23:
			return Global_262145.f_21822 /* Tunable: GR_RESEARCH_WEIGHT_MOBILE_OPERATIONS_CENTER_REAR_TURRETS */;
		case 24:
			return Global_262145.f_21823 /* Tunable: GR_RESEARCH_WEIGHT_INCENDIARY_ROUNDS */;
		case 25:
			return Global_262145.f_21824 /* Tunable: GR_RESEARCH_WEIGHT_HOLLOW_POINT_ROUNDS */;
		case 26:
			return Global_262145.f_21825 /* Tunable: GR_RESEARCH_WEIGHT_ARMOR_PIERCING_ROUNDS */;
		case 27:
			return Global_262145.f_21826 /* Tunable: GR_RESEARCH_WEIGHT_FULL_METAL_JACKET_ROUNDS */;
		case 28:
			return Global_262145.f_21827 /* Tunable: GR_RESEARCH_WEIGHT_EXPLOSIVE_ROUNDS */;
		case 29:
			return Global_262145.f_21828 /* Tunable: GR_RESEARCH_WEIGHT_PISTOL_MK_II_RAIL_MOUNT */;
		case 30:
			return Global_262145.f_21829 /* Tunable: GR_RESEARCH_WEIGHT_PISTOL_MK_II_COMPENSATOR */;
		case 31:
			return Global_262145.f_21830 /* Tunable: GR_RESEARCH_WEIGHT_SMG_MK_II_HOLOGRAPHIC_SIGHT */;
		case 32:
			return Global_262145.f_21831 /* Tunable: GR_RESEARCH_WEIGHT_SMG_MK_II_HEAVY_BARREL */;
		case 33:
			return Global_262145.f_21832 /* Tunable: GR_RESEARCH_WEIGHT_HEAVY_SNIPER_MK_II_NIGHT_VISION_SCOPE */;
		case 34:
			return Global_262145.f_21833 /* Tunable: GR_RESEARCH_WEIGHT_HEAVY_SNIPER_MK_II_THERMAL_SCOPE */;
		case 35:
			return Global_262145.f_21834 /* Tunable: GR_RESEARCH_WEIGHT_HEAVY_SNIPER_MK_II_HEAVY_BARREL */;
		case 36:
			return Global_262145.f_21835 /* Tunable: GR_RESEARCH_WEIGHT_COMBAT_MG_MK_II_HOLOGRAPHIC_SIGHT */;
		case 37:
			return Global_262145.f_21836 /* Tunable: GR_RESEARCH_WEIGHT_COMBAT_MG_MK_II_HEAVY_BARREL */;
		case 38:
			return Global_262145.f_21837 /* Tunable: GR_RESEARCH_WEIGHT_ASSAULT_RIFLE_MK_II_HOLOGRAPHIC_SIGHT */;
		case 39:
			return Global_262145.f_21838 /* Tunable: GR_RESEARCH_WEIGHT_ASSAULT_RIFLE_MK_II_HEAVY_BARREL */;
		case 40:
			return Global_262145.f_21839 /* Tunable: GR_RESEARCH_WEIGHT_CARBINE_RIFLE_MK_II_HOLOGRAPHIC_SIGHT */;
		case 41:
			return Global_262145.f_21840 /* Tunable: GR_RESEARCH_WEIGHT_CARBINE_RIFLE_MK_II_HEAVY_BARREL */;
		case 42:
			return Global_262145.f_21841 /* Tunable: GR_RESEARCH_WEIGHT_PROXIMITY_MINES */;
		case 43:
			return Global_262145.f_21842 /* Tunable: GR_RESEARCH_WEIGHT_TIGER_STRIPE */;
		case 44:
			return Global_262145.f_21843 /* Tunable: GR_RESEARCH_WEIGHT_SKULL */;
		case 45:
			return Global_262145.f_21844 /* Tunable: GR_RESEARCH_WEIGHT_SESSANTA_NOVE */;
		case 46:
			return Global_262145.f_21845 /* Tunable: GR_RESEARCH_WEIGHT_PERSEUS */;
		case 47:
			return Global_262145.f_21846 /* Tunable: GR_RESEARCH_WEIGHT_LEOPARD_PRINT */;
		case 48:
			return Global_262145.f_21847 /* Tunable: GR_RESEARCH_WEIGHT_ZEBRA_STRIPE */;
		case 49:
			return Global_262145.f_21848 /* Tunable: GR_RESEARCH_WEIGHT_GEOMETRY */;
		case 50:
			return Global_262145.f_21849 /* Tunable: -1164778018 */;
		default:
	}
	return 0f;
}

int func_366(int iParam0)//Position - 0xD6FFA
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 1;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 30:
			return 0;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 1;
		case 43:
			return 0;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 0;
		case 47:
			return 0;
		case 48:
			return 0;
		case 49:
			return 0;
		case 50:
			return 0;
		default:
	}
	return 0;
}

int func_367()//Position - 0xD7255
{
	return __LIB_0__::func_253(9359, -1);
}

int func_368(int iParam0)//Position - 0xD72C5
{
	switch (iParam0)
	{
		case 5:
			return 34739;
			break;
	}
	return 0;
}

int func_369(int iParam0)//Position - 0xD72E5
{
	switch (iParam0)
	{
		case 1:
			return 34716;
			break;
		case 3:
			return 34719;
			break;
		case 4:
			return 34717;
			break;
		case 0:
			return 34718;
			break;
		case 2:
			return 34720;
			break;
		case 5:
			return 34721;
			break;
	}
	return 0;
}

void func_370(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xD737E
{
	Global_103304 = 1;
	StringCopy(&Global_103305, sParam0, 16);
	Global_103303 = iParam1;
	Global_103311 = iParam2;
	Global_103309 = iParam3;
	Global_103310 = iParam4;
	StringCopy(&Global_103312, "GR_RSRCH_", 16);
	if (iParam1 == 0)
	{
		StringConCat(&Global_103312, "WEP_", 16);
	}
	else if (iParam1 == 1)
	{
		StringConCat(&Global_103312, "VEH_", 16);
	}
	else if (iParam1 == 2)
	{
		StringConCat(&Global_103312, "GEN_", 16);
	}
	else
	{
		StringConCat(&Global_103312, "GEN_", 16);
	}
	StringIntConCat(&Global_103312, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 16);
}

int func_371(int iParam0)//Position - 0xD7404
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 1;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 30:
			return 0;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 1;
		case 43:
			return 0;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 0;
		case 47:
			return 0;
		case 48:
			return 0;
		case 49:
			return 0;
		case 50:
			return 0;
		default:
	}
	return -1;
}

char* func_372(int iParam0)//Position - 0xD7612
{
	switch (iParam0)
	{
		case 0:
			return "WT_APC_SAM" /* GXT: APC SAM Battery */;
		case 1:
			return "WT_BALLISTIC" /* GXT: Ballistic Equipment */;
		case 2:
			return "WT_HT_QUAD_CAN" /* GXT: Half-track Quad 20mm Autocannon */;
		case 3:
			return "WT_T_DUAL_MINI" /* GXT: Tampa Dual Remote 7.62mm Minigun */;
		case 4:
			return "WT_T_REAR_MORT" /* GXT: Tampa Rear-Firing Mortar */;
		case 5:
			return "WT_T_FNT_MISSL" /* GXT: Tampa Front Missile Launcher */;
		case 6:
			return "WT_T_HVY_CHSS" /* GXT: Tampa Heavy Chassis Armor */;
		case 7:
			return "WT_D_GRND_LNCH" /* GXT: Dune FAV 40mm Grenade Launcher */;
		case 8:
			return "WT_D_MINI" /* GXT: Dune FAV 7.62mm Minigun */;
		case 9:
			return "WT_I_CAL_GUN" /* GXT: Insurgent Pick-Up .50 Cal Minigun */;
		case 10:
			return "WT_I_LVL3_ARMOR" /* GXT: Insurgent Pick-Up Heavy Armor Plating */;
		case 11:
			return "WT_TEC_MINI" /* GXT: Technical 7.62mm Minigun */;
		case 12:
			return "WT_TEC_RAM_BAR" /* GXT: Technical Ram-bar mod */;
		case 13:
			return "WT_TEC_BRT_BAR" /* GXT: Technical Brute-bar mod */;
		case 14:
			return "WT_TEC_HVY_CHSS" /* GXT: Technical Heavy Chassis Armor */;
		case 15:
			return "WT_OPP_RKETS" /* GXT: Oppressor Missiles */;
		case 16:
			return "WT_LIV_FRAC" /* GXT: Fractal Livery Set */;
		case 17:
			return "WT_LIV_DIG" /* GXT: Digital Livery Set */;
		case 18:
			return "WT_LIV_GEO" /* GXT: Geometric Livery Set */;
		case 19:
			return "WT_LIV_NAT" /* GXT: Nature Reserve Livery */;
		case 20:
			return "WT_LIV_NAV" /* GXT: Naval Battle Livery */;
		case 21:
			return "WT_AA_FLAK" /* GXT: Anti-Aircraft Trailer Dual 20mm Flak */;
		case 22:
			return "WT_AA_MISSL" /* GXT: Anti-Aircraft Trailer Homing Missile Battery */;
		case 23:
			return "WT_MOC_TURR" /* GXT: Mobile Operations Center Rear Turrets */;
		case 24:
			return "WT_AMMO_INC" /* GXT: Incendiary Rounds */;
		case 25:
			return "WT_AMMO_HP" /* GXT: Hollow Point Rounds */;
		case 26:
			return "WT_AMMO_AP" /* GXT: Armor Piercing Rounds */;
		case 27:
			return "WT_AMMO_FMJ" /* GXT: Full Metal Jacket Rounds */;
		case 28:
			return "WT_AMMO_EX" /* GXT: Explosive Rounds */;
		case 29:
			return "WT_PI_RAIL" /* GXT: Pistol Mk II Mounted Scope */;
		case 30:
			return "WT_PI_COMP" /* GXT: Pistol Mk II Compensator */;
		case 31:
			return "WT_SMG_HOLO" /* GXT: SMG Mk II Holographic Sight */;
		case 32:
			return "WT_SMG_BARREL" /* GXT: SMG Mk II Heavy Barrel */;
		case 33:
			return "WT_HS_NV" /* GXT: Heavy Sniper Mk II Night Vision Scope */;
		case 34:
			return "WT_HS_THERMAL" /* GXT: Heavy Sniper Mk II Thermal Scope */;
		case 35:
			return "WT_HS_BARREL" /* GXT: Heavy Sniper Mk II Heavy Barrel */;
		case 36:
			return "WT_CMG_HOLO" /* GXT: Combat MG Mk II Holographic Sight */;
		case 37:
			return "WT_CMG_BARREL" /* GXT: Combat MG Mk II Heavy Barrel */;
		case 38:
			return "WT_AR_HOLO" /* GXT: Assault Rifle Mk II Holographic Sight */;
		case 39:
			return "WT_AR_BARREL" /* GXT: Assault Rifle Mk II Heavy Barrel */;
		case 40:
			return "WT_CR_HOLO" /* GXT: Carbine Rifle Mk II Holographic Sight */;
		case 41:
			return "WT_CR_BARREL" /* GXT: Carbine Rifle Mk II Heavy Barrel */;
		case 42:
			return "WT_PROX_M" /* GXT: Proximity Mines */;
		case 43:
			return "WT_WLIV_TIG" /* GXT: Brushstroke Camo Mk II Weapon Livery */;
		case 44:
			return "WT_WLIV_SKU" /* GXT: Skull Mk II Weapon Livery */;
		case 45:
			return "WT_WLIV_SSN" /* GXT: Sessanta Nove Mk II Weapon Livery */;
		case 46:
			return "WT_WLIV_PRS" /* GXT: Perseus Mk II Weapon Livery */;
		case 47:
			return "WT_WLIV_LEO" /* GXT: Leopard Mk II Weapon Livery */;
		case 48:
			return "WT_WLIV_ZEB" /* GXT: Zebra Mk II Weapon Livery */;
		case 49:
			return "WT_WLIV_GEO" /* GXT: Geometric Mk II Weapon Livery */;
		case 50:
			return "WT_WLIV_KBM" /* GXT: Boom! Mk II Weapon Livery */;
		default:
	}
	return "";
}

int func_373(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2B570
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
	__LIB_1__::func_264(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam7);
	}
	return __LIB_20__::func_342(&Var0);
}

int func_374(int iParam0)//Position - 0x2BC8
{
	if (__LIB_21__::func_242(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

bool func_375()//Position - 0x22950
{
	return __LIB_21__::func_242(0);
}

char* func_376(int iParam0, int iParam1)//Position - 0x27503
{
	switch (iParam1)
	{
		case 0:
			return "Tuner_Setup_1";
		case 1:
			return "Tuner_Setup_2";
		case 2:
			return "Tuner_Setup_3";
		case 3:
			return "Tuner_Setup_4";
		case 4:
			return "Tuner_Prep_Elevator_Pass_1";
		case 5:
			return "Tuner_Prep_Elevator_Pass_2";
		case 6:
			return "Tuner_Prep_Key_Codes_1";
		case 7:
			return "Tuner_Prep_Key_Codes_2";
		case 8:
			return "Tuner_Prep_Scope_Transporter_1";
		case 9:
			return "Tuner_Prep_Scope_Transporter_2";
		case 10:
			return "Tuner_Prep_Virus_1";
		case 11:
			return "Tuner_Prep_Virus_2";
		case 12:
			return "Tuner_Prep_Thermal_Charges_1";
		case 13:
			return "Tuner_Prep_Thermal_Charges_2";
		case 14:
			return "Tuner_Prep_Signal_Jammers_1";
		case 15:
			return "Tuner_Prep_Signal_Jammers_2";
		case 16:
			return "Tuner_Prep_Container_Manifest_1";
		case 17:
			return "Tuner_Prep_Container_Manifest_2";
		case 18:
			return "Tuner_Prep_Train_Schedule_1";
		case 19:
			return "Tuner_Prep_Train_Schedule_2";
		case 20:
			return "Tuner_Prep_Inside_Man_1";
		case 21:
			return "Tuner_Prep_Inside_Man_2";
		case 22:
			return "Tuner_Prep_Stunt_Ramp_1";
		case 23:
			return "Tuner_Prep_Stunt_Ramp_2";
		case 24:
			return "Tuner_Prep_IAA_Pass_1";
		case 25:
			return "Tuner_Prep_IAA_Pass_2";
		case 26:
			return "Tuner_Prep_Sewer_Schematics_1";
		case 27:
			return "Tuner_Prep_Sewer_Schematics_2";
		case 28:
			return "Tuner_Prep_Meth_Labs_1";
		case 29:
			return "Tuner_Prep_Meth_Labs_2";
		case 30:
			return "Tuner_Prep_Meth_Tanker_1";
		case 31:
			return "Tuner_Prep_Meth_Tanker_2";
		case 32:
			return "Tuner_Prep_Locate_Bunker_1";
		case 33:
			return "Tuner_Prep_Locate_Bunker_2";
		case 34:
			return "Tuner_Prep_Locate_Bunker_3";
		case 35:
			return "Tuner_Prep_Locate_Bunker_4";
		case 36:
			return "Tuner_Prep_Warehouse_Defences_1";
		case 37:
			return "Tuner_Prep_Warehouse_Defences_2";
		default:
	}
	return "";
}

void func_377(var uParam0, int iParam1)//Position - 0x2975D
{
	TASK::CLEAR_PED_TASKS(iParam1);
}

void func_378(var uParam0)//Position - 0x2A187
{
	if (uParam0->f_1 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_1);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

char* func_379()//Position - 0x2A1E2
{
	return "DLC_IE_Steal_EITS_Sounds";
}

void func_380(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)//Position - 0x2A644
{
	float fVar0;
	fVar0 = 0.3f;
	if (iParam4 == 1)
	{
		if (fParam3 < 0.6f)
		{
			fParam3 = 0.6f;
		}
		if (fParam3 > 1f)
		{
			fParam3 = 1f;
		}
	}
	HUD::SET_TEXT_SCALE((fVar0 * fParam3), (fVar0 * fParam3));
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, 200);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_WRAP(-2f, 2f);
	HUD::SET_TEXT_FONT(0);
}

float func_381(int iParam0)//Position - 0x2A798
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var2, true);
	fVar0 = (1000f / (CAM::GET_GAMEPLAY_CAM_FOV() * fVar3));
	if (fVar0 < 3f)
	{
		fVar0 = 3f;
	}
	if (fVar0 > 3.2f)
	{
		fVar0 = 3.2f;
	}
	return fVar0;
}

int func_382(var uParam0)//Position - 0x2A86E
{
	if (!__LIB_0__::func_864(&(uParam0->f_35)))
	{
		__LIB_0__::func_795(&(uParam0->f_35), 0, 0);
	}
	else if (__LIB_1__::func_724(&(uParam0->f_35), 0, 0) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_383(float fParam0, float fParam1, float fParam2)//Position - 0x2A9BE
{
	if (fParam0 <= fParam2 && fParam1 <= fParam2)
	{
		return 1;
	}
	return 0;
}

float func_384(float fParam0, float fParam1, var uParam2, var uParam3)//Position - 0x2A9DD
{
	float fVar0;
	float fVar1;
	if (fParam0 <= 0.5f)
	{
		fVar0 = (0.5f - fParam0);
	}
	else
	{
		fVar0 = (fParam0 - 0.5f);
	}
	if (fParam1 <= 0.5f)
	{
		fVar1 = (0.5f - fParam1);
	}
	else
	{
		fVar1 = (fParam1 - 0.5f);
	}
	*uParam2 = fVar0;
	*uParam3 = fVar1;
	return (fVar0 + fVar1);
}

void func_385(int iParam0)//Position - 0x2C245
{
	if (__LIB_1__::func_458(&(Local_197.f_16), iParam0))
	{
	}
}

void func_386(var uParam0)//Position - 0x87FE9
{
	Global_1944685.f_30 = uParam0;
}

int func_387()//Position - 0x8AAB8
{
	return 60000;
}

int func_388(int iParam0)//Position - 0x8C76E
{
	switch (iParam0)
	{
		case 3:
			return 0;
		default:
	}
	return 1;
}

char* func_389(var uParam0)//Position - 0x8E5BD
{
	return "DLC_H4_Island_Security_Cameras_Sounds";
}

int func_390(var uParam0)//Position - 0x99E2F
{
	return 3000;
}

char* func_391(int iParam0)//Position - 0x99ECD
{
	switch (iParam0)
	{
		case 1:
			return "DOOR_OPEN_SUCCEED_STAND_SAFE";
		default:
	}
	return "";
}

char* func_392(int iParam0)//Position - 0x9A139
{
	switch (iParam0)
	{
		case 0:
			return "tun_prep_grab_midd_ig3";
		case 1:
			return "DOOR_OPEN_SUCCEED_STAND";
		case 2:
			return "tun_prep_grab_midd_ig3";
		default:
	}
	return "";
}

char* func_393(var uParam0)//Position - 0x9B827
{
	return "GB_P2P_DEST" /* GXT: Destination */;
}

int func_394(int iParam0)//Position - 0x9D6D6
{
	switch (iParam0)
	{
		case 0:
			return 2;
		default:
	}
	return 1;
}

int func_395(int iParam0)//Position - 0x9D803
{
	switch (iParam0)
	{
		case 4:
			return 0;
		default:
	}
	return 1;
}

float func_396()//Position - 0x9D9BA
{
	return 400f;
}

int func_397()//Position - 0xC2DF5
{
	return __LIB_20__::func_35();
}

int func_398(var uParam0)//Position - 0x104F7A
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	switch (SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar1, &uVar2, &iVar3))
	{
		case 0:
			return 0;
			break;
		case 1:
			break;
		case 2:
			if (iVar0 != 0)
			{
				SHAPETEST::RELEASE_SCRIPT_GUID_FROM_ENTITY(iVar3);
				return 2;
			}
			else
			{
				return 3;
			}
			break;
	}
	return 1;
}

int func_399()//Position - 0x924
{
	if (__LIB_21__::func_242(13))
	{
		return 0;
	}
	return 1;
}

void func_400(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2A6A7
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	if (iParam0 <= 6000)
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(6000)) - (SYSTEM::TO_FLOAT(iVar0) * 0.04f));
			if (fVar1 > 0f)
			{
				fVar2 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(6000)) - (IntToFloat(iVar0 + 1) * 0.04f));
				if (fVar2 < 0f)
				{
					fVar2 = 0f;
				}
				iVar3 = (200 - (20 * iVar0));
				__LIB_3__::func_48((fParam2 - (fParam1 * 0.65f)), ((fParam3 + ((fParam1 * 0.9f) / 2f)) - ((fParam1 * 0.9f) * fVar1)), ((fParam1 * 0.85f) * 1.5f), ((fVar1 - fVar2) * (fParam1 * 0.9f)), iParam4, iParam5, iParam6, iVar3);
			}
			iVar0++;
		}
	}
}

void func_401(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x900BE
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = NETWORK::GET_TIME_OFFSET(__LIB_21__::func_252(bParam2, bParam3), __LIB_3__::func_778(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_402(var uParam0)//Position - 0x99D8D
{
	return __LIB_0__::func_109();
}

void func_403(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA6616
{
	__LIB_0__::func_866();
	__LIB_1__::func_674(1);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	__LIB_1__::func_373(1, 1, 1, 0, 0, 0, bParam2);
	__LIB_1__::func_359();
	__LIB_1__::func_7(12, 1, -1);
	__LIB_1__::func_8(0);
	CAM::SET_WIDESCREEN_BORDERS(true, -1);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	__LIB_1__::func_674(1);
	__LIB_0__::func_83(1);
	Global_2703735.f_3428 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);
		}
	}
}

void func_404(bool bParam0)//Position - 0x128C10
{
	struct<4> Var0;
	int iVar1;
	if (bParam0)
	{
		iVar1 = __LIB_0__::func_943(1, 1);
	}
	else
	{
		iVar1 = __LIB_20__::func_16(1);
	}
	if (iVar1 != 0)
	{
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_0 = 1115266513;
		if ((__LIB_1__::func_749() || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 233) || __LIB_4__::func_921(PLAYER::PLAYER_ID()) == 233)
		{
			Var0.f_2 = __LIB_1__::func_360(6529, -1, 0);
			Var0.f_3 = __LIB_1__::func_360(6530, -1, 0);
		}
		else if ((__LIB_2__::func_306() || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 158) || __LIB_4__::func_921(PLAYER::PLAYER_ID()) == 158)
		{
			Var0.f_2 = __LIB_1__::func_360(8915, -1, 0);
			Var0.f_3 = __LIB_1__::func_360(8916, -1, 0);
		}
		else if ((__LIB_12__::func_224() || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 256) || __LIB_4__::func_921(PLAYER::PLAYER_ID()) == 256)
		{
			Var0.f_2 = __LIB_1__::func_360(9571, -1, 0);
			Var0.f_3 = __LIB_1__::func_360(9572, -1, 0);
		}
		else if ((__LIB_0__::func_447() || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 271) || __LIB_4__::func_921(PLAYER::PLAYER_ID()) == 271)
		{
			Var0.f_2 = __LIB_1__::func_360(9870, -1, 0);
			Var0.f_3 = __LIB_1__::func_360(9871, -1, 0);
		}
		else if ((__LIB_1__::func_263() || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 264) || __LIB_4__::func_921(PLAYER::PLAYER_ID()) == 264)
		{
			Var0.f_2 = __LIB_1__::func_360(10345, -1, 0);
			Var0.f_3 = __LIB_1__::func_360(10346, -1, 0);
		}
		else
		{
			Var0.f_2 = __LIB_1__::func_360(11085, -1, 0);
			Var0.f_3 = __LIB_1__::func_360(11086, -1, 0);
		}
		Global_786547 = Var0.f_2;
		Global_786547.f_1 = Var0.f_3;
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_405(var uParam0, var uParam1, float fParam2)//Position - 0xF045A
{
	var uVar0;
	uVar0 = 11;
	__LIB_2__::func_696(&uVar0);
	__LIB_21__::func_271(&uVar0, uParam0, uParam1, fParam2);
}

void func_406(var uParam0, var uParam1, float fParam2)//Position - 0xF05FE
{
	struct<4> Var0[15];
	Var0[0 /*4*/] = { -1690.928f, -1052.085f, 12.5375f };
	Var0[0 /*4*/].f_3 = 46.44f;
	Var0[1 /*4*/] = { -1212.403f, -952.1625f, 1.6625f };
	Var0[1 /*4*/].f_3 = 117.6f;
	Var0[2 /*4*/] = { -1772.089f, -1141.589f, 12.5375f };
	Var0[2 /*4*/].f_3 = 46.44f;
	Var0[3 /*4*/] = { -116.325f, -441.075f, 35.4125f };
	Var0[3 /*4*/].f_3 = -132.84f;
	Var0[4 /*4*/] = { -1157.281f, 927.675f, 197.5375f };
	Var0[4 /*4*/].f_3 = -143.64f;
	Var0[5 /*4*/] = { -82.85f, -880.5125f, 40.0875f };
	Var0[5 /*4*/].f_3 = -66.24f;
	Var0[6 /*4*/] = { 195.7f, -962.1625f, 29.6f };
	Var0[6 /*4*/].f_3 = 115.28f;
	Var0[7 /*4*/] = { -885.4375f, -787.9f, 15.4375f };
	Var0[7 /*4*/].f_3 = 122.34f;
	Var0[8 /*4*/] = { -829.5f, -922.1375f, 16.0125f };
	Var0[8 /*4*/].f_3 = -125.28f;
	Var0[9 /*4*/] = { -1221.905f, -1571.869f, 3.675f };
	Var0[9 /*4*/].f_3 = -106.92f;
	Var0[10 /*4*/] = { -609.65f, -622.3375f, 34.1875f };
	Var0[10 /*4*/].f_3 = -90f;
	Var0[11 /*4*/] = { -894f, -1322.775f, 4.5125f };
	Var0[11 /*4*/].f_3 = -166.32f;
	Var0[12 /*4*/] = { 386.2375f, -1514.243f, 28.7875f };
	Var0[12 /*4*/].f_3 = 119.16f;
	Var0[13 /*4*/] = { -310.9625f, -1627.762f, 31.325f };
	Var0[13 /*4*/].f_3 = -117.72f;
	Var0[14 /*4*/] = { 171.775f, -677.0125f, 42.6375f };
	Var0[14 /*4*/].f_3 = -54.37f;
	__LIB_21__::func_271(&Var0, uParam0, uParam1, fParam2);
}

int func_407(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xC2C4F
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
	__LIB_13__::func_693(iParam0, &Var0, uParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam8);
	}
	return __LIB_21__::func_273(&Var0);
}

int func_408(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10)//Position - 0xC2CDF
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
	__LIB_13__::func_693(iParam0, &Var0, uParam6, sParam2, sParam1);
	StringCopy(&(Var0.f_57), sParam3, 16);
	StringCopy(&(Var0.f_61), sParam4, 16);
	Var0.f_6 = iParam5;
	Var0.f_4 = uParam7;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam10);
	}
	return __LIB_21__::func_273(&Var0);
}

void func_409(struct<3> Param0)//Position - 0xCC2E2
{
	Global_2667225.f_45.f_302 = 1;
	Global_2667225.f_45.f_299 = { Param0 };
	Global_2667225.f_45.f_318 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME_ACCURATE(), -9999);
	__LIB_21__::func_269(1);
}

int func_410()//Position - 0x120FE3
{
	if (__LIB_21__::func_272(0))
	{
		return 1;
	}
	if (Global_2815059.f_4636)
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0xC175A
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
	__LIB_13__::func_693(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam10);
	}
	return __LIB_21__::func_273(&Var0);
}

void func_412(int iParam0)//Position - 0x3CF
{
	if (!bLocal_319)
	{
		return;
	}
	Local_360.f_82 = iParam0;
}

void func_413(int iParam0)//Position - 0x740
{
	if (!bLocal_319)
	{
		return;
	}
	Local_360.f_85 = iParam0;
}

int func_414()//Position - 0x759
{
	return Local_360.f_85;
}

void func_415(int iParam0, int iParam1)//Position - 0xFAD
{
	if (!bLocal_319)
	{
		return;
	}
	Local_360.f_22[iParam0 /*24*/].f_2 = iParam1;
}

int func_416(int iParam0)//Position - 0xFCC
{
	return Local_360.f_22[iParam0 /*24*/].f_2;
}

bool func_417(var uParam0)//Position - 0x139C
{
	return BitTest(Local_360.f_62, uParam0);
}

void func_418(int iParam0, int iParam1)//Position - 0x1489
{
	if (__LIB_1__::func_458(&(Local_360.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_419(int iParam0, int iParam1)//Position - 0x14A5
{
	return __LIB_0__::func_316(&(Local_360.f_22[iParam0 /*24*/].f_3), iParam1);
}

void func_420()//Position - 0x1C00
{
	if (Local_360.f_99 != -1)
	{
		Local_360.f_112 = { 0f, 0f, 0f };
		Local_360.f_121 = 0f;
		iLocal_341 = 0;
		Local_360.f_84 = -1;
		Local_360.f_99 = -1;
	}
}

int func_421()//Position - 0x2627
{
	switch (Local_360.f_83)
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

int func_422()//Position - 0x265E
{
	switch (Local_360.f_83)
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

int func_423(int iParam0)//Position - 0x2693
{
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_179);
	Stack.Push(StackVal == joaat("WEAPON_RPG"));
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_179);
	if (StackVal || StackVal == joaat("WEAPON_RAILGUN"))
	{
		return 2;
	}
	switch (Local_360.f_83)
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

int func_424()//Position - 0x26F5
{
	switch (Local_360.f_83)
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

void func_425(int iParam0, var uParam1)//Position - 0x2A7A
{
	if (Local_360.f_99 == -1)
	{
		Local_360.f_84 = iParam0;
		Local_360.f_99 = uParam1;
	}
}

int func_426(int iParam0)//Position - 0x2B07
{
	return Local_360.f_47[iParam0 /*8*/].f_1;
}

int func_427(int iParam0, int iParam1)//Position - 0x2B1A
{
	if (Local_360.f_84 == -1)
	{
		return 1;
	}
	if (Local_360.f_84 == iParam0)
	{
		if (Local_360.f_99 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_428(int iParam0, int iParam1)//Position - 0x2C1D
{
	if (!bLocal_319)
	{
		return;
	}
	Local_360.f_22[iParam0 /*24*/].f_1 = iParam1;
}

int func_429(int iParam0)//Position - 0x2C7D
{
	return Local_360.f_22[iParam0 /*24*/].f_1;
}

int func_430(int iParam0)//Position - 0x328E
{
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_321))
	{
		return 0;
	}
	return 1;
}

void func_431(int iParam0, int iParam1)//Position - 0x3319
{
	if (__LIB_1__::func_458(&(Local_360.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_432(int iParam0, int iParam1)//Position - 0x334E
{
	return __LIB_0__::func_316(&(Local_360.f_56[iParam0 /*5*/].f_2), iParam1);
}

void func_433(int iParam0, int iParam1)//Position - 0x338A
{
	Local_360.f_56[iParam0 /*5*/].f_1 = iParam1;
}

int func_434(int iParam0)//Position - 0x339F
{
	return Local_360.f_56[iParam0 /*5*/].f_1;
}

void func_435(int iParam0, int iParam1)//Position - 0x361D
{
	if (__LIB_1__::func_458(&(Local_360.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

bool func_436(int iParam0, int iParam1)//Position - 0x3682
{
	return __LIB_0__::func_316(&(Local_360.f_47[iParam0 /*8*/].f_2), iParam1);
}

void func_437(int iParam0, int iParam1)//Position - 0x36F1
{
	struct<3> Var0;
	float fVar1;
	if (iParam0 != Local_197.f_67.f_17)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar1 = 500f;
	if (__LIB_0__::func_86(Local_360.f_118))
	{
		Local_360.f_118 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_360.f_118) > (550f * 550f))
	{
		if (Local_360.f_103 != -1)
		{
			MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_360.f_103, false);
		}
		Local_360.f_118 = { Var0 };
		Local_360.f_103 = MISC::ADD_POP_MULTIPLIER_SPHERE(Local_360.f_118, fVar1, 1f, 0.02f, false, true);
	}
}

int func_438(int iParam0, int iParam1)//Position - 0x378F
{
	Stack.Push(Local_214.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_214.f_352.f_52);
	if (StackVal && StackVal)
	{
		__LIB_1__::func_518(&(Local_360.f_47[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_439(int iParam0)//Position - 0x3EF5
{
	return Local_360.f_2.f_13[iParam0];
}

int func_440(int iParam0)//Position - 0x3F08
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_20__::func_35())
	{
		if (Local_360.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_441(var uParam0)//Position - 0x1285F
{
	if (iLocal_341 < 5)
	{
		switch (iLocal_341)
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
		iLocal_341 = 0;
	}
	iLocal_341++;
}

bool func_442(int iParam0, int iParam1)//Position - 0x1FF7F
{
	return __LIB_0__::func_316(&(Local_367[iParam0 /*35*/].f_1), iParam1);
}

void func_443(int iParam0, int iParam1)//Position - 0x1FFFB
{
	Local_360.f_47[iParam0 /*8*/].f_1 = iParam1;
}

int func_444(int iParam0)//Position - 0x20050
{
	return Local_360.f_2.f_9[iParam0];
}

bool func_445(int iParam0, int iParam1)//Position - 0x20317
{
	return __LIB_0__::func_316(&(Local_360.f_2.f_5[iParam0 /*3*/]), iParam1);
}

void func_446(int iParam0, int iParam1)//Position - 0x203C6
{
	if (__LIB_16__::func_758(&(Local_360.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_447(int iParam0)//Position - 0x20432
{
	return Local_360.f_2.f_9[iParam0] != -1;
}

void func_448(int iParam0, int iParam1)//Position - 0x204A5
{
	if (__LIB_1__::func_458(&(Local_360.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_449(int iParam0)//Position - 0x20EB2
{
	return iLocal_321;
}

void func_450(int iParam0, bool bParam1, bool bParam2)//Position - 0x21100
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_360.f_2[iParam0]), bParam1, bParam2);
}

int func_451(int iParam0)//Position - 0x2116A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_197.f_19)
	{
		if (Local_360.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_452()//Position - 0x213A3
{
	return Local_360.f_82;
}

void func_453(int iParam0)//Position - 0x213B0
{
	Local_360.f_81 = iParam0;
}

void func_454()//Position - 0x2148B
{
	if (Local_360.f_98 == -1)
	{
		Local_360.f_98 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_455()//Position - 0x21529
{
	Local_360.f_83 = 2;
}

void func_456(int iParam0)//Position - 0x21745
{
	if (__LIB_1__::func_458(&uLocal_334, iParam0))
	{
	}
}

char* func_457(var uParam0)//Position - 0x21AA6
{
	return "CBV_BLP_VEH" /* GXT: Exotic Exports Vehicle */;
}

void func_458(int iParam0)//Position - 0x21ED1
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("VehicleList", 2))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "VehicleList", true);
	}
}

int func_459(int iParam0, var uParam1)//Position - 0x21F0B
{
	switch (iParam0)
	{
		case joaat("adder"):
			uParam1->f_66 = joaat("adder");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 24);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[15] = 3;
			uParam1->f_9[23] = 39;
			break;
		case joaat("autarch"):
			uParam1->f_66 = joaat("autarch");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 8;
			uParam1->f_9[1] = 11;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 7;
			uParam1->f_9[7] = 6;
			uParam1->f_9[9] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			break;
		case joaat("baller4"):
			uParam1->f_66 = joaat("baller4");
			uParam1->f_65 = 1;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 26);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[18] = 1;
			uParam1->f_9[23] = 15;
			break;
		case joaat("banshee2"):
			uParam1->f_66 = joaat("banshee2");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 3;
			uParam1->f_75 = 83;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 28);
			MISC::SET_BIT(&(uParam1->f_77), 29);
			MISC::SET_BIT(&(uParam1->f_77), 30);
			MISC::SET_BIT(&(uParam1->f_77), 31);
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 4;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 4;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 2;
			uParam1->f_9[18] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 16;
			uParam1->f_9[28] = 10;
			break;
		case joaat("bestiagts"):
			uParam1->f_66 = joaat("bestiagts");
			uParam1->f_65 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[18] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 38;
			break;
		case joaat("novak"):
			uParam1->f_66 = joaat("novak");
			uParam1->f_65 = 2;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 5;
			uParam1->f_9[1] = 5;
			uParam1->f_9[2] = 4;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 4;
			uParam1->f_9[7] = 5;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 26;
			uParam1->f_9[48] = 3;
			uParam1->f_59[0] = 1;
			break;
		case joaat("cheetah2"):
			uParam1->f_66 = joaat("cheetah2");
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 14;
			uParam1->f_9[1] = 7;
			uParam1->f_9[3] = 4;
			uParam1->f_9[8] = 1;
			uParam1->f_9[9] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 4;
			uParam1->f_9[15] = 3;
			uParam1->f_9[18] = 1;
			uParam1->f_9[22] = 1;
			break;
		case joaat("comet5"):
			uParam1->f_66 = joaat("comet5");
			uParam1->f_65 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[18] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 21;
			break;
		case joaat("coquette"):
			uParam1->f_66 = joaat("coquette");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 4;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 3;
			uParam1->f_9[7] = 5;
			uParam1->f_9[8] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[18] = 1;
			uParam1->f_9[23] = 10;
			break;
		case joaat("emerus"):
			uParam1->f_66 = joaat("emerus");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 6;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 5;
			uParam1->f_9[6] = 3;
			uParam1->f_9[8] = 2;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[48] = 9;
			break;
		case joaat("furia"):
			uParam1->f_66 = joaat("furia");
			uParam1->f_65 = 3;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 8;
			uParam1->f_9[3] = 6;
			uParam1->f_9[4] = 14;
			uParam1->f_9[6] = 9;
			uParam1->f_9[7] = 8;
			uParam1->f_9[9] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[48] = 3;
			break;
		case joaat("huntley"):
			uParam1->f_66 = joaat("huntley");
			uParam1->f_65 = 1;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 24);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[4] = 4;
			uParam1->f_9[7] = 2;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 1;
			break;
		case joaat("infernus2"):
			uParam1->f_66 = joaat("infernus2");
			uParam1->f_65 = 3;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 4;
			uParam1->f_9[6] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			break;
		case joaat("italigto"):
			uParam1->f_66 = joaat("italigto");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[3] = 6;
			uParam1->f_9[4] = 3;
			uParam1->f_9[6] = 1;
			uParam1->f_9[8] = 3;
			uParam1->f_9[10] = 1;
			uParam1->f_9[48] = 4;
			break;
		case joaat("krieger"):
			uParam1->f_66 = joaat("krieger");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 3;
			break;
		case joaat("locust"):
			uParam1->f_66 = joaat("locust");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 6;
			uParam1->f_9[1] = 5;
			uParam1->f_9[3] = 6;
			uParam1->f_9[4] = 5;
			uParam1->f_9[7] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[23] = 22;
			break;
		case joaat("mamba"):
			uParam1->f_66 = joaat("mamba");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 1);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 49;
			uParam1->f_9[48] = 7;
			break;
		case joaat("monroe"):
			uParam1->f_66 = joaat("monroe");
			uParam1->f_65 = 3;
			uParam1->f_69 = 11;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 2;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 11;
			break;
		case joaat("neo"):
			uParam1->f_66 = joaat("neo");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 3;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 5;
			uParam1->f_9[6] = 6;
			uParam1->f_9[7] = 9;
			uParam1->f_9[10] = 6;
			uParam1->f_9[23] = 34;
			break;
		case joaat("neon"):
			uParam1->f_66 = joaat("neon");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 4;
			uParam1->f_9[7] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			break;
		case joaat("nero"):
			uParam1->f_66 = joaat("nero");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[22] = 1;
			break;
		case joaat("paragon"):
			uParam1->f_66 = joaat("paragon");
			uParam1->f_65 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 5;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 3;
			uParam1->f_9[10] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			break;
		case joaat("penetrator"):
			uParam1->f_66 = joaat("penetrator");
			uParam1->f_65 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[22] = 1;
			break;
		case joaat("pfister811"):
			uParam1->f_66 = joaat("pfister811");
			uParam1->f_65 = 3;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 4;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 19;
			break;
		case joaat("reaper"):
			uParam1->f_66 = joaat("reaper");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 35;
			uParam1->f_59[0] = 1;
			break;
		case joaat("ruston"):
			uParam1->f_66 = joaat("ruston");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 5;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 3;
			uParam1->f_9[3] = 5;
			uParam1->f_9[4] = 4;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("s80"):
			uParam1->f_66 = joaat("s80");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 4;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[48] = 2;
			break;
		case joaat("sc1"):
			uParam1->f_66 = joaat("sc1");
			uParam1->f_65 = 3;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[2] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[7] = 2;
			uParam1->f_9[10] = 5;
			uParam1->f_9[11] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("schwarzer"):
			uParam1->f_66 = joaat("schwarzer");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 26);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 4;
			uParam1->f_9[6] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 31;
			break;
		case joaat("seven70"):
			uParam1->f_66 = joaat("seven70");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("stafford"):
			uParam1->f_66 = joaat("stafford");
			uParam1->f_65 = 1;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("stingergt"):
			uParam1->f_66 = joaat("stingergt");
			uParam1->f_65 = 3;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 2;
			uParam1->f_9[22] = 1;
			break;
		case joaat("surano"):
			uParam1->f_66 = joaat("surano");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("swinger"):
			uParam1->f_66 = joaat("swinger");
			uParam1->f_65 = 3;
			uParam1->f_69 = 11;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 6;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 4;
			uParam1->f_9[10] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[23] = 200;
			break;
		case joaat("t20"):
			uParam1->f_66 = joaat("t20");
			uParam1->f_65 = 1;
			uParam1->f_69 = 11;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 3;
			uParam1->f_9[7] = 2;
			uParam1->f_9[10] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 1;
			break;
		case joaat("taipan"):
			uParam1->f_66 = joaat("taipan");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 4;
			uParam1->f_9[7] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 4;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			break;
		case joaat("tempesta"):
			uParam1->f_66 = joaat("tempesta");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("tigon"):
			uParam1->f_66 = joaat("tigon");
			uParam1->f_69 = 11;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 4;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 19;
			break;
		case joaat("torero"):
			uParam1->f_66 = joaat("torero");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 3;
			uParam1->f_9[4] = 3;
			uParam1->f_9[6] = 4;
			uParam1->f_9[9] = 4;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			break;
		case joaat("turismor"):
			uParam1->f_66 = joaat("turismor");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 3;
			uParam1->f_9[10] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 20;
			uParam1->f_59[0] = 1;
			break;
		case joaat("tyrant"):
			uParam1->f_66 = joaat("tyrant");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[22] = 1;
			break;
		case joaat("verlierer2"):
			uParam1->f_66 = joaat("verlierer2");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[7] = 4;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 45;
			uParam1->f_59[0] = 1;
			break;
		case joaat("viseris"):
			uParam1->f_66 = joaat("viseris");
			uParam1->f_65 = 1;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 4;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 4;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 7;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 22;
			break;
		case joaat("visione"):
			uParam1->f_66 = joaat("visione");
			uParam1->f_65 = -1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 5;
			uParam1->f_9[2] = 4;
			uParam1->f_9[4] = 4;
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 5;
			uParam1->f_9[22] = 1;
			break;
		case joaat("windsor"):
			uParam1->f_66 = joaat("windsor");
			uParam1->f_67 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 35;
			break;
		case joaat("ztype"):
			uParam1->f_66 = joaat("ztype");
			uParam1->f_65 = 1;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[3] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 2;
			break;
		case joaat("xa21"):
			uParam1->f_66 = joaat("xa21");
			uParam1->f_65 = 3;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 9;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 8;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 4;
			uParam1->f_9[8] = 2;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("entityxf"):
			uParam1->f_66 = joaat("entityxf");
			uParam1->f_65 = 3;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 5;
			uParam1->f_59[0] = 1;
			break;
		case joaat("carbonizzare"):
			uParam1->f_66 = joaat("carbonizzare");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 26);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 36;
			break;
		case joaat("exemplar"):
			uParam1->f_66 = joaat("exemplar");
			uParam1->f_65 = 1;
			uParam1->f_69 = 11;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 24);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 112;
			break;
		case joaat("comet2"):
			uParam1->f_66 = joaat("comet2");
			uParam1->f_65 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 45;
			uParam1->f_59[0] = 1;
			break;
		case joaat("bullet"):
			uParam1->f_66 = joaat("bullet");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("superd"):
			uParam1->f_66 = joaat("superd");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 26);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 12;
			break;
		case joaat("infernus"):
			uParam1->f_66 = joaat("infernus");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("deveste"):
			uParam1->f_66 = joaat("deveste");
			uParam1->f_65 = 2;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 7;
			uParam1->f_9[5] = 5;
			uParam1->f_9[22] = 1;
			uParam1->f_9[48] = 1;
			break;
		case joaat("massacro"):
			uParam1->f_66 = joaat("massacro");
			uParam1->f_65 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 24);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 30;
			break;
		case joaat("specter"):
			uParam1->f_66 = joaat("specter");
			uParam1->f_65 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 34;
			break;
		case joaat("f620"):
			uParam1->f_66 = joaat("f620");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 24);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 49;
			break;
		case joaat("coquette3"):
			uParam1->f_66 = joaat("coquette3");
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[18] = 1;
			break;
		case joaat("dubsta2"):
			uParam1->f_66 = joaat("dubsta2");
			uParam1->f_65 = 1;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 25);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[7] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			break;
		case joaat("asbo"):
			uParam1->f_66 = joaat("asbo");
			uParam1->f_65 = 3;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 15;
			uParam1->f_9[1] = 5;
			uParam1->f_9[3] = 10;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 4;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 8;
			uParam1->f_9[8] = 3;
			uParam1->f_9[10] = 6;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 1;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 2;
			uParam1->f_9[18] = 1;
			uParam1->f_9[23] = 34;
			break;
		case joaat("brioso"):
			uParam1->f_66 = joaat("brioso");
			uParam1->f_65 = 1;
			uParam1->f_69 = 11;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[10] = 3;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[18] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 25;
			uParam1->f_9[48] = 2;
			break;
		case joaat("buccaneer2"):
			uParam1->f_66 = joaat("buccaneer2");
			uParam1->f_69 = 1;
			uParam1->f_62 = 132;
			uParam1->f_63 = 102;
			uParam1->f_64 = 226;
			uParam1->f_74 = 35;
			uParam1->f_75 = 1;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 28);
			MISC::SET_BIT(&(uParam1->f_77), 29);
			MISC::SET_BIT(&(uParam1->f_77), 30);
			MISC::SET_BIT(&(uParam1->f_77), 31);
			MISC::SET_BIT(&(uParam1->f_77), 2);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 4;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[18] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[24] = 1;
			break;
		case joaat("dominator3"):
			uParam1->f_66 = joaat("dominator3");
			uParam1->f_65 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 9;
			uParam1->f_9[4] = 7;
			uParam1->f_9[5] = 5;
			uParam1->f_9[6] = 7;
			uParam1->f_9[7] = 9;
			uParam1->f_9[8] = 1;
			uParam1->f_9[9] = 1;
			uParam1->f_9[10] = 6;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[18] = 1;
			uParam1->f_9[23] = 2;
			break;
		case joaat("elegy"):
			uParam1->f_66 = joaat("elegy");
			uParam1->f_65 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 2;
			uParam1->f_75 = 21;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 28);
			MISC::SET_BIT(&(uParam1->f_77), 29);
			MISC::SET_BIT(&(uParam1->f_77), 30);
			MISC::SET_BIT(&(uParam1->f_77), 31);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 10;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 3;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 9;
			uParam1->f_9[5] = 4;
			uParam1->f_9[7] = 4;
			uParam1->f_9[8] = 4;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[18] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 11;
			break;
		case joaat("brawler"):
			uParam1->f_66 = joaat("brawler");
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[18] = 1;
			uParam1->f_9[22] = 1;
			break;
		case joaat("flashgt"):
			uParam1->f_66 = joaat("flashgt");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 5;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 2;
			uParam1->f_9[7] = 4;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 5;
			uParam1->f_9[23] = 17;
			uParam1->f_9[48] = 3;
			break;
		case joaat("gauntlet4"):
			uParam1->f_66 = joaat("gauntlet4");
			uParam1->f_65 = 3;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 15;
			uParam1->f_75 = 3;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 28);
			MISC::SET_BIT(&(uParam1->f_77), 29);
			MISC::SET_BIT(&(uParam1->f_77), 30);
			MISC::SET_BIT(&(uParam1->f_77), 31);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 4;
			uParam1->f_9[1] = 1;
			uParam1->f_9[4] = 4;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 6;
			uParam1->f_9[7] = 5;
			uParam1->f_9[8] = 1;
			uParam1->f_9[9] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 31;
			uParam1->f_9[48] = 4;
			break;
		case joaat("issi3"):
			uParam1->f_66 = joaat("issi3");
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 6;
			uParam1->f_9[1] = 6;
			uParam1->f_9[2] = 3;
			uParam1->f_9[3] = 5;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 12;
			uParam1->f_9[8] = 1;
			uParam1->f_9[9] = 6;
			uParam1->f_9[10] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 25;
			uParam1->f_9[48] = 1;
			uParam1->f_59[0] = 1;
			break;
		case joaat("jugular"):
			uParam1->f_66 = joaat("jugular");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 5;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 2;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 4;
			uParam1->f_9[13] = 4;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 6;
			uParam1->f_9[48] = 1;
			break;
		case joaat("kamacho"):
			uParam1->f_66 = joaat("kamacho");
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 7;
			uParam1->f_9[1] = 5;
			uParam1->f_9[2] = 7;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 4;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 8;
			uParam1->f_9[8] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 6;
			uParam1->f_9[48] = 6;
			uParam1->f_59[0] = 1;
			break;
		case joaat("komoda"):
			uParam1->f_66 = joaat("komoda");
			uParam1->f_65 = 3;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 9;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 9;
			uParam1->f_9[4] = 4;
			uParam1->f_9[7] = 12;
			uParam1->f_9[8] = 3;
			uParam1->f_9[9] = 2;
			uParam1->f_9[10] = 7;
			uParam1->f_9[23] = 20;
			uParam1->f_9[48] = 3;
			break;
		case joaat("nightshade"):
			uParam1->f_66 = joaat("nightshade");
			uParam1->f_65 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 94;
			uParam1->f_75 = 255;
			uParam1->f_76 = 1;
			MISC::SET_BIT(&(uParam1->f_77), 28);
			MISC::SET_BIT(&(uParam1->f_77), 29);
			MISC::SET_BIT(&(uParam1->f_77), 30);
			MISC::SET_BIT(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 3;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 4;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 13;
			break;
		case joaat("peyote3"):
			uParam1->f_66 = joaat("peyote3");
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[4] = 4;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[24] = 4;
			uParam1->f_9[28] = 1;
			uParam1->f_9[48] = 4;
			break;
		case joaat("phoenix"):
			uParam1->f_66 = joaat("phoenix");
			uParam1->f_65 = 3;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 25);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 3;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 28;
			uParam1->f_59[0] = 1;
			break;
		case joaat("raiden"):
			uParam1->f_66 = joaat("raiden");
			uParam1->f_65 = 3;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[8] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 3;
			break;
		case joaat("retinue"):
			uParam1->f_66 = joaat("retinue");
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[48] = 3;
			break;
		case joaat("rocoto"):
			uParam1->f_66 = joaat("rocoto");
			uParam1->f_65 = 1;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 34;
			break;
		case joaat("ruiner"):
			uParam1->f_66 = joaat("ruiner");
			uParam1->f_65 = 3;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 25);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 14;
			break;
		case joaat("sabregt2"):
			uParam1->f_66 = joaat("sabregt2");
			uParam1->f_65 = 1;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 3;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[24] = 4;
			break;
		case joaat("savestra"):
			uParam1->f_66 = joaat("savestra");
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 5;
			uParam1->f_9[2] = 3;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 5;
			uParam1->f_9[5] = 6;
			uParam1->f_9[6] = 5;
			uParam1->f_9[7] = 4;
			uParam1->f_9[8] = 4;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			break;
		case joaat("chino2"):
			uParam1->f_66 = joaat("chino2");
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[9] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[24] = 4;
			break;
		case joaat("cheburek"):
			uParam1->f_66 = joaat("cheburek");
			uParam1->f_65 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 6;
			uParam1->f_9[1] = 8;
			uParam1->f_9[2] = 4;
			uParam1->f_9[3] = 2;
			uParam1->f_9[7] = 7;
			uParam1->f_9[8] = 2;
			uParam1->f_9[10] = 5;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 5;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 5;
			uParam1->f_9[48] = 4;
			uParam1->f_59[0] = 1;
			break;
		case joaat("cavalcade"):
			uParam1->f_66 = joaat("cavalcade");
			uParam1->f_65 = 1;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 24);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 21;
			uParam1->f_59[0] = 1;
			break;
		case joaat("buffalo2"):
			uParam1->f_66 = joaat("buffalo2");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 4;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 4;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 4;
			uParam1->f_9[7] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 15;
			uParam1->f_59[0] = 1;
			break;
		case joaat("alpha"):
			uParam1->f_66 = joaat("alpha");
			uParam1->f_65 = 2;
			uParam1->f_69 = 11;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 26);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 166;
			break;
		case joaat("kanjo"):
			uParam1->f_66 = joaat("kanjo");
			uParam1->f_69 = 11;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 7;
			uParam1->f_9[2] = 8;
			uParam1->f_9[3] = 4;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 6;
			uParam1->f_9[7] = 9;
			uParam1->f_9[8] = 8;
			uParam1->f_9[9] = 1;
			uParam1->f_9[10] = 3;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 118;
			uParam1->f_9[46] = 1;
			uParam1->f_9[48] = 2;
			break;
		case joaat("kuruma"):
			uParam1->f_66 = joaat("kuruma");
			uParam1->f_65 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[3] = 6;
			uParam1->f_9[5] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[23] = 43;
			uParam1->f_59[0] = 1;
			break;
		case joaat("sentinel3"):
			uParam1->f_66 = joaat("sentinel3");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 7;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 11;
			uParam1->f_9[10] = 13;
			uParam1->f_9[11] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 27;
			uParam1->f_59[0] = 1;
			break;
		case joaat("sultan2"):
			uParam1->f_66 = joaat("sultan2");
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 5;
			uParam1->f_9[2] = 4;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 9;
			uParam1->f_9[5] = 7;
			uParam1->f_9[6] = 4;
			uParam1->f_9[7] = 15;
			uParam1->f_9[8] = 2;
			uParam1->f_9[10] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 22;
			uParam1->f_59[0] = 1;
			break;
		case joaat("yosemite2"):
			uParam1->f_66 = joaat("yosemite2");
			uParam1->f_65 = 1;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 9;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 5;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 3;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[48] = 3;
			break;
		case joaat("z190"):
			uParam1->f_66 = joaat("z190");
			uParam1->f_65 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 7;
			uParam1->f_9[2] = 5;
			uParam1->f_9[3] = 16;
			uParam1->f_9[5] = 5;
			uParam1->f_9[6] = 7;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 1;
			uParam1->f_9[9] = 4;
			uParam1->f_9[10] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 36;
			break;
		case joaat("jackal"):
			uParam1->f_66 = joaat("jackal");
			uParam1->f_65 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 46;
			uParam1->f_59[0] = 1;
			break;
		case joaat("vstr"):
			uParam1->f_66 = joaat("vstr");
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 6;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 11;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 8;
			uParam1->f_9[8] = 1;
			uParam1->f_9[9] = 2;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[15] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[48] = 2;
			break;
		case joaat("vagrant"):
			uParam1->f_66 = joaat("vagrant");
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[4] = 6;
			uParam1->f_9[5] = 1;
			uParam1->f_9[8] = 3;
			uParam1->f_9[9] = 3;
			uParam1->f_9[10] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 30;
			uParam1->f_59[0] = 1;
			break;
		case joaat("vamos"):
			uParam1->f_66 = joaat("vamos");
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 6;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 4;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 4;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 12;
			uParam1->f_9[48] = 3;
			uParam1->f_59[0] = 1;
			break;
		case joaat("tampa2"):
			uParam1->f_66 = joaat("tampa2");
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[48] = 1;
			break;
		case joaat("tornado5"):
			uParam1->f_66 = joaat("tornado5");
			uParam1->f_67 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 26);
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[9] = 1;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 4;
			uParam1->f_9[24] = 1;
			uParam1->f_59[0] = 1;
			break;
		case joaat("tropos"):
			uParam1->f_66 = joaat("tropos");
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[6] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[48] = 1;
			break;
		case joaat("tulip"):
			uParam1->f_66 = joaat("tulip");
			uParam1->f_65 = 2;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 9);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 8;
			uParam1->f_9[11] = 4;
			uParam1->f_9[12] = 3;
			uParam1->f_9[13] = 4;
			uParam1->f_9[18] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 3;
			uParam1->f_9[48] = 1;
			break;
	}
	if (uParam1->f_66 != 0)
	{
		return 1;
	}
	return 0;
}

int func_460(int iParam0)//Position - 0x26943
{
	switch (iParam0)
	{
		case joaat("asbo"):
		case joaat("brioso"):
		case joaat("buccaneer2"):
		case joaat("dominator3"):
		case joaat("elegy"):
		case joaat("brawler"):
		case joaat("flashgt"):
		case joaat("gauntlet4"):
		case joaat("issi3"):
		case joaat("jugular"):
		case joaat("kamacho"):
		case joaat("komoda"):
		case joaat("nightshade"):
		case joaat("peyote3"):
		case joaat("phoenix"):
		case joaat("raiden"):
		case joaat("retinue"):
		case joaat("rocoto"):
		case joaat("ruiner"):
		case joaat("sabregt2"):
		case joaat("savestra"):
		case joaat("chino2"):
		case joaat("cheburek"):
		case joaat("cavalcade"):
		case joaat("buffalo2"):
		case joaat("alpha"):
		case joaat("kanjo"):
		case joaat("kuruma"):
		case joaat("sentinel3"):
		case joaat("sultan2"):
		case joaat("yosemite2"):
		case joaat("z190"):
		case joaat("jackal"):
		case joaat("vstr"):
		case joaat("vagrant"):
		case joaat("vamos"):
		case joaat("tampa2"):
		case joaat("tornado5"):
		case joaat("tropos"):
		case joaat("tulip"):
			return 0;
		default:
	}
	return 1;
}

void func_461(int iParam0, int iParam1)//Position - 0x26B2A
{
	Local_218[iParam0 /*20*/] = iParam1;
	iLocal_332++;
}

void func_462(int iParam0, int iParam1, int iParam2)//Position - 0x26BB7
{
	Local_219[iParam0 /*21*/] = iParam1;
	Local_219[iParam0 /*21*/].f_20 = iParam2;
	iLocal_333++;
}

bool func_463(int iParam0)//Position - 0x26C4C
{
	return __LIB_0__::func_316(&uLocal_334, iParam0);
}

void func_464(int iParam0)//Position - 0x26E41
{
	if (__LIB_1__::func_458(&(Local_367[iLocal_324 /*35*/].f_1), iParam0))
	{
	}
}

int func_465()//Position - 0x2D2BC
{
	if (Local_214.f_466.f_4.f_1 != 0)
	{
		Call_Loc(Local_214.f_466.f_4.f_1);
		return StackVal;
	}
	if (iLocal_324 != -1)
	{
		return Local_312.f_1[Local_367[iLocal_324 /*35*/].f_14 /*4*/];
	}
	return 0;
}

void func_466(int iParam0)//Position - 0x2D379
{
	if (__LIB_16__::func_758(&uLocal_334, iParam0))
	{
	}
}

int func_467()//Position - 0x2D468
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_20__::func_35())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_2[iVar0]))
		{
			if (iLocal_350[iVar0] != iLocal_325)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_360.f_2[iVar0])))
				{
					if (Local_291[iVar0 /*7*/].f_1 < 2f)
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

bool func_468(int iParam0, int iParam1, int iParam2)//Position - 0x2D537
{
	return __LIB_0__::func_316(&(Local_367[iParam1 /*35*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_469(int iParam0)//Position - 0x2D6CE
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_2.f_15[iParam0]) && __LIB_1__::func_561(Local_360.f_2.f_15[iParam0]))
	{
		__LIB_6__::func_843(&(Local_360.f_2.f_15[iParam0]));
		__LIB_1__::func_518(&(Local_360.f_2.f_15[iParam0]));
	}
}

void func_470(int iParam0, int iParam1)//Position - 0x2F0B0
{
	if (__LIB_1__::func_458(&(Local_367[iLocal_324 /*35*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_471()//Position - 0x2F33E
{
	return Local_367[iLocal_324 /*35*/];
}

void func_472(int iParam0, int iParam1)//Position - 0x2FD2E
{
	if (__LIB_16__::func_758(&(Local_367[iLocal_324 /*35*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_473()//Position - 0x30D20
{
	return Local_315.f_0 != -1;
}

void func_474(int iParam0)//Position - 0xA5999
{
	if (__LIB_16__::func_758(&(Local_315.f_7), iParam0))
	{
	}
}

int func_475()//Position - 0xA59D4
{
	return Local_315.f_1;
}

void func_476(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA5A31
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693(iParam0, 1, 1))
	{
		__LIB_19__::func_385(Local_331.f_0, __LIB_0__::func_950(iParam0), iParam1, iParam2, iParam3);
	}
}

void func_477(int iParam0)//Position - 0xA5A63
{
	if (__LIB_1__::func_458(&(Local_315.f_7), iParam0))
	{
	}
}

int func_478(struct<3> Param0)//Position - 0xA5AF9
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
		iVar0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var7, Var8, fVar9, 2, iLocal_323, 4);
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

bool func_479()//Position - 0xA5BDF
{
	return AUDIO::HAS_SOUND_FINISHED(Local_315.f_2);
}

bool func_480(int iParam0)//Position - 0xA5CEB
{
	return __LIB_0__::func_316(&(Local_315.f_7), iParam0);
}

void func_481(int iParam0)//Position - 0xA5DCD
{
	if (__LIB_16__::func_758(&(Local_367[iLocal_324 /*35*/].f_1), iParam0))
	{
	}
}

int func_482()//Position - 0xA5E57
{
	return Local_315.f_0;
}

char* func_483(int iParam0)//Position - 0xA60EE
{
	if (Local_214.f_474.f_18.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_18.f_13);
		return StackVal;
	}
	if (__LIB_21__::func_168(iParam0, 0))
	{
		return "ILH_BLP_EXIT" /* GXT: Exit */;
	}
	return "ILH_BLP_ENTR" /* GXT: Entrance */;
}

void func_484(int iParam0)//Position - 0xA66D6
{
	Local_367[iLocal_324 /*35*/] = iParam0;
}

void func_485()//Position - 0xA67B1
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
	if (iLocal_328 != 0)
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

void func_486()//Position - 0xA69A8
{
	int iVar0;
	if (bLocal_318)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iLocal_323, &iVar0, true);
		if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_323, joaat("WEAPON_UNARMED"), true);
		}
	}
}

float func_487()//Position - 0xB0853
{
	if (Local_214.f_15.f_6.f_3 != 0)
	{
		Call_Loc(Local_214.f_15.f_6.f_3);
		return StackVal;
	}
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_323) > 1f)
	{
		return 1.85f;
	}
	return -1f;
}

bool func_488(float fParam0)//Position - 0xB2EA2
{
	struct<3> Var0;
	Call_Loc(Local_214.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__::func_86(Var0))
	{
		return 0;
	}
	return SYSTEM::VDIST2(Local_326, Var0) <= (fParam0 * fParam0);
}

int func_489(bool bParam0)//Position - 0xB2EE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_323, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_323, false);
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = __LIB_0__::func_220(iVar0, (iVar2 - 1), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_A_PLAYER(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
				if (__LIB_0__::func_114(iVar4))
				{
					if (!bParam0)
					{
						if (iVar3 != iLocal_323)
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
			iVar2++;
		}
	}
	return 0;
}

int func_490()//Position - 0xB7273
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	iVar1 = -1;
	fVar4 = 999999.9f;
	Var2 = { Local_326 };
	iVar0 = 0;
	while (iVar0 < Local_197.f_38)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_22[iVar0 /*24*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_360.f_22[iVar0 /*24*/]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_19__::func_411(iVar0)))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(Local_360.f_22[iVar0 /*24*/]), true))
					{
						fVar3 = SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_360.f_22[iVar0 /*24*/]), false));
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

int func_491()//Position - 0xB738F
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iLocal_323);
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

void func_492()//Position - 0xB8C08
{
	if (HUD::DOES_BLIP_EXIST(iLocal_358))
	{
		HUD::REMOVE_BLIP(&iLocal_358);
	}
}

int func_493()//Position - 0xB95D3
{
	if (bLocal_318 && !PED::IS_PED_IN_ANY_PLANE(iLocal_323))
	{
		if (Local_214.f_521 != 0)
		{
			Call_Loc(Local_214.f_521);
			return StackVal;
		}
	}
	return 0;
}

float func_494()//Position - 0xBA327
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_323, false))
	{
		return 1.5f;
	}
	return 0.5f;
}

int func_495()//Position - 0xBA430
{
	return Local_367[iLocal_324 /*35*/].f_14;
}

void func_496(int iParam0, int iParam1)//Position - 0xBAB5A
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam1) && !NETWORK::NETWORK_IS_ENTITY_FADING(iParam1)) && __LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
	{
		if (__LIB_20__::func_907(iParam0, 13))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1);
			PED::SET_PED_KEEP_TASK(iParam1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, true, true);
	}
}

void func_497(int iParam0, int iParam1)//Position - 0xBAD22
{
	if (__LIB_16__::func_758(&(Local_367[iLocal_325 /*35*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_498(int iParam0, int iParam1)//Position - 0xBAD41
{
	if (__LIB_1__::func_458(&(Local_367[iLocal_325 /*35*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_499(int iParam0, float fParam1, bool bParam2)//Position - 0xBAD89
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_326) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			if (bLocal_318)
			{
				return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_323, iParam0, 287);
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_500(int iParam0, int iParam1, int iParam2)//Position - 0xBAE22
{
	return __LIB_0__::func_316(&(Local_367[iParam1 /*35*/].f_7[iParam0 /*2*/]), iParam2);
}

int func_501(int iParam0, float fParam1)//Position - 0xBAF26
{
	struct<3> Var0;
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iLocal_321, iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iLocal_321, iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (SYSTEM::VDIST2(Local_326, Var0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_502()//Position - 0xBB070
{
	int iVar0;
	return ((WEAPON::GET_CURRENT_PED_WEAPON(iLocal_323, &iVar0, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT"));
}

bool func_503()//Position - 0xBC2B4
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() > Local_360.f_98 + 2;
}

void func_504(int iParam0, int iParam1)//Position - 0xBC57D
{
	if (__LIB_1__::func_458(&(Local_367[iLocal_325 /*35*/].f_10[iParam0 /*2*/]), iParam1))
	{
	}
}

bool func_505(int iParam0, int iParam1, int iParam2)//Position - 0xBC5D8
{
	return __LIB_0__::func_316(&(Local_367[iParam1 /*35*/].f_10[iParam0 /*2*/]), iParam2);
}

void func_506(int iParam0, int iParam1)//Position - 0xBC6A5
{
	if (__LIB_16__::func_758(&(Local_367[iLocal_325 /*35*/].f_10[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_507(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0xBC6C4
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_326) > (fParam1 * fParam1))
	{
		return 0;
	}
	if (iParam2 && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_323, iParam0, 287))
	{
		return 0;
	}
	if (iParam3 && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_508(int iParam0, int iParam1)//Position - 0xBD288
{
	if (__LIB_20__::func_916(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 1);
	}
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam1, iLocal_321, false);
	if (!__LIB_0__::func_114())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	if (!__LIB_20__::func_916(iParam0, 6))
	{
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, false);
	}
}

void func_509(int iParam0, int iParam1)//Position - 0xBD4A1
{
	float fVar0;
	Stack.Push(Local_214.f_352.f_30 == 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_352.f_30);
	if (StackVal || !StackVal)
	{
		return;
	}
	fVar0 = SYSTEM::VDIST(Local_326, ENTITY::GET_ENTITY_COORDS(iParam1, false));
	if (fVar0 < fLocal_346)
	{
		fLocal_346 = fVar0;
		iLocal_339 = iLocal_339;
		iLocal_339 = iParam0;
	}
}

void func_510(int iParam0, int iParam1)//Position - 0xBD95D
{
	if (__LIB_16__::func_758(&(Local_367[iLocal_325 /*35*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

bool func_511(int iParam0, int iParam1, int iParam2)//Position - 0xBDE2F
{
	return __LIB_0__::func_316(&(Local_367[iParam1 /*35*/].f_19[iParam0 /*2*/]), iParam2);
}

void func_512(int iParam0, int iParam1)//Position - 0xBDE4A
{
	if (__LIB_1__::func_458(&(Local_367[iLocal_325 /*35*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_513(int iParam0)//Position - 0xBE1A1
{
	return __LIB_20__::func_418(iParam0, Local_331.f_1);
}

int func_514(int iParam0)//Position - 0xBE9A9
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_360.f_47[iParam0 /*8*/]), -1, false))
	{
		return -1;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_360.f_47[iParam0 /*8*/]), -1, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Local_197.f_38.f_1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_22[iVar1 /*24*/]) && iVar0 == NETWORK::NET_TO_PED(Local_360.f_22[iVar1 /*24*/]))
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	return -1;
}

void func_515(struct<13> Param0, int iParam1, int iParam2)//Position - 0xBEBB7
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_A_PLAYER(iParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1) && ENTITY::IS_ENTITY_A_PED(Param0.f_1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (Local_214.f_15 != 0)
					{
						Stack.Push(iVar0);
						Stack.Push(Param0);
						Stack.Push(iParam2);
						Call_Loc(Local_214.f_15);
					}
					if (iParam2 == iLocal_321)
					{
						if (__LIB_20__::func_911(15))
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
							{
								if (__LIB_0__::func_114(iVar0))
								{
									__LIB_0__::func_467();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_516(int iParam0)//Position - 0xBF154
{
	struct<7> Var0;
	if (!bLocal_319)
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_5 != Local_331.f_0 || Var0.f_6 != NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT())
		{
			return;
		}
		Local_360.f_22[Var0.f_3 /*24*/].f_6 = Var0.f_2;
	}
}

void func_517(int iParam0, var uParam1)//Position - 0xBFC66
{
	if (__LIB_16__::func_758(&(Local_360.f_22[iParam0 /*24*/].f_3), uParam1))
	{
	}
}

bool func_518(int iParam0, int iParam1)//Position - 0xBFD38
{
	return __LIB_3__::func_479(&(Local_367[iParam0 /*35*/].f_24), iParam1);
}

var func_519(int iParam0)//Position - 0xC03B3
{
	return Local_367[iParam0 /*35*/];
}

int func_520(int iParam0, bool bParam1, bool bParam2)//Position - 0xC0581
{
	if (!bParam1)
	{
		return 0;
	}
	if (iParam0 == iLocal_321)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

void func_521(int iParam0)//Position - 0xC0638
{
	if (__LIB_16__::func_758(&(Local_360.f_88), iParam0))
	{
	}
}

void func_522(int iParam0)//Position - 0xC064E
{
	Local_367[iLocal_324 /*35*/].f_22 = iParam0;
}

void func_523()//Position - 0xC06CF
{
	Global_1943929.f_2 = Local_360.f_90;
	Global_1943929.f_3 = Local_360.f_91;
}

void func_524()//Position - 0xC06ED
{
	int iVar0;
	int iVar1;
	var uVar2;
	uVar2 = uVar2;
	__LIB_19__::func_393(iLocal_332, 5, "iNumModeStates", "MAX_NUM_STATES");
	__LIB_19__::func_393(iLocal_333, 7, "iNumClientModeStates", "MAX_NUM_CLIENT_STATES");
	iVar0 = 0;
	while (iVar0 < iLocal_332)
	{
		__LIB_19__::func_393(Local_218[iVar0 /*20*/].f_19, 5, "sModeStates[iLoop].iNumTransitions", "MAX_NUM_TRANSITIONS");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_333)
	{
		__LIB_19__::func_393(Local_219[iVar0 /*21*/].f_19, 5, "sClientModeStates[iLoop].iNumTransitions", "MAX_NUM_TRANSITIONS");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_19__::func_393(Local_220.f_23[iVar0 /*67*/], 5, "sPedLocal.sBehaviour[iLoop].iNumTasks", "MAX_NUM_PED_TASKS");
		iVar1 = 0;
		while (iVar1 < Local_220.f_23[iVar0 /*67*/])
		{
			__LIB_19__::func_393(Local_220.f_23[iVar0 /*67*/].f_1[iVar1 /*13*/].f_12, 3, "sPedLocal.sBehaviour[iLoop].Task[iLoop2].iNumTransitions", "MAX_NUM_PED_TASK_TRANSITIONS");
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_197.f_38)
	{
		__LIB_19__::func_393(Local_220[iVar0 /*19*/].f_16, 5, "sPedLocal.sPed[iLoop].iNumTriggers", "MAX_NUM_PED_TRIGGERS");
		iVar0++;
	}
}

void func_525(bool bParam0)//Position - 0xC0924
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_20__::func_35())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_2[iVar0]))
		{
			if (bParam0)
			{
				if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_360.f_2[iVar0]))
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_360.f_2[iVar0], true);
				}
			}
			else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_360.f_2[iVar0]))
			{
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_360.f_2[iVar0], false);
			}
		}
		iVar0++;
	}
}

int func_526(int iParam0, int iParam1)//Position - 0xC1540
{
	int iVar0;
	if (Local_197.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
		return NETWORK::VEH_TO_NET(iVar0);
	}
	return 0;
}

void func_527(int iParam0, int iParam1, bool bParam2)//Position - 0xC1F06
{
	int iVar0;
	if (!((__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_STANDARD"), 1) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_IN_AREA"), 1)) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_WANDER_SPECIFIC"), 1)))
	{
		if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
		{
			if (bParam2)
			{
				iVar0 = joaat("SCRIPT_TASK_WANDER_SPECIFIC");
			}
			else
			{
				Stack.Push(iParam0);
				Call_Loc(Local_214.f_156.f_2.f_114);
				iVar0 = StackVal;
			}
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_WANDER_STANDARD"):
					Stack.Push(iParam1);
					Stack.Push(iParam0);
					Call_Loc(Local_214.f_156.f_2.f_114.f_1);
					Stack.Push(iParam0);
					Call_Loc(Local_214.f_156.f_2.f_114.f_2);
					TASK::TASK_WANDER_STANDARD(StackVal, StackVal, StackVal);
					break;
				case joaat("SCRIPT_TASK_WANDER_IN_AREA"):
					Stack.Push((Local_214.f_156.f_2.f_114.f_3 != 0 && Local_214.f_156.f_2.f_114.f_4 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_214.f_156.f_2.f_114.f_3);
					Stack.Push((StackVal && !__LIB_0__::func_86(StackVal, StackVal, StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_214.f_156.f_2.f_114.f_4);
					if (StackVal && StackVal > 0f)
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_114.f_3);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_114.f_4);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_114.f_5);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_114.f_6);
						TASK::TASK_WANDER_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal);
					}
					break;
				case joaat("SCRIPT_TASK_WANDER_SPECIFIC"):
					Stack.Push((Local_214.f_156.f_2.f_114.f_7 != 0 && Local_214.f_156.f_2.f_114.f_8 != 0));
					Stack.Push(iParam0);
					Call_Loc(Local_214.f_156.f_2.f_114.f_7);
					Stack.Push((StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal)));
					Stack.Push(iParam0);
					Call_Loc(Local_214.f_156.f_2.f_114.f_8);
					if (StackVal && !MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
					{
						Stack.Push(iParam1);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_114.f_7);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_114.f_8);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_114.f_1);
						TASK::TASK_WANDER_SPECIFIC(StackVal, StackVal, StackVal, StackVal);
					}
					break;
				}
			}
	}
}

Vector3 func_528(int iParam0, int iParam1)//Position - 0xC23BC
{
	int iVar0;
	if (Local_214.f_156.f_2.f_91 != 0)
	{
		iVar0 = Local_360.f_22[iParam0 /*24*/].f_5;
		if (iParam1 != -1)
		{
			iVar0 = iParam1;
		}
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_214.f_156.f_2.f_91);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

void func_529(var uParam0, int iParam1)//Position - 0xC24ED
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = 177099551;
	Var0.f_1 = iLocal_321;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = MISC::GET_FRAME_COUNT();
	Var0.f_5 = Local_331.f_0;
	Var0.f_6 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	iVar1 = __LIB_4__::func_970(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

int func_530(int iParam0)//Position - 0xC25ED
{
	if (Local_214.f_156.f_2.f_91.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_5);
		return StackVal;
	}
	if (Local_197.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]), false))
		{
			return NETWORK::NET_TO_VEH(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		}
	}
	return 0;
}

int func_531(int iParam0, var uParam1)//Position - 0xC2C22
{
	int iVar0;
	if (Local_214.f_156.f_2.f_76 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_76);
		iVar0 = StackVal;
	}
	if (Local_197.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		iVar0 = Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(NETWORK::NET_TO_ENT(iVar0)))
	{
		*uParam1 = NETWORK::NET_TO_VEH(iVar0);
		return 1;
	}
	return 0;
}

Vector3 func_532(int iParam0)//Position - 0xC2D3A
{
	if (Local_214.f_156.f_2.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_72);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_360.f_22[iParam0 /*24*/]), false);
}

Vector3 func_533(int iParam0, int iParam1)//Position - 0xC3953
{
	int iVar0;
	struct<3> Var1;
	iVar0 = Local_360.f_22[iParam0 /*24*/].f_5;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (Local_214.f_156.f_2.f_25.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_1);
		Var1 = { StackVal, StackVal, StackVal };
	}
	return Var1;
}

int func_534(int iParam0)//Position - 0xC41C6
{
	if (Local_214.f_156.f_2.f_25.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_2);
		return StackVal;
	}
	if (Local_197.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		return Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/];
	}
	return 0;
}

void func_535(int iParam0, int iParam1)//Position - 0xC423E
{
	int iVar0;
	if (Local_214.f_156.f_2.f_23 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_214.f_156.f_2.f_23);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
				{
					Stack.Push(iParam1);
					Stack.Push(NETWORK::NET_TO_ENT(iVar0));
					Stack.Push(-1);
					Call_Loc(Local_214.f_156.f_2.f_23.f_1);
					TASK::TASK_SHOOT_AT_ENTITY(StackVal, StackVal, StackVal, StackVal);
				}
			}
		}
	}
}

void func_536(int iParam0, int iParam1)//Position - 0xC42B6
{
	int iVar0;
	if (Local_214.f_156.f_2.f_22 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_156.f_2.f_22);
			iVar0 = StackVal;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam1, iVar0, -1, false);
				}
			}
		}
	}
}

void func_537(int iParam0, int iParam1)//Position - 0xC4322
{
	if (Local_214.f_156.f_2.f_21 != 0)
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD"), 1))
		{
			if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_214.f_156.f_2.f_21);
				TASK::TASK_AIM_GUN_AT_COORD(StackVal, StackVal, StackVal, StackVal, -1, false, false);
			}
		}
	}
}

void func_538(int iParam0, int iParam1)//Position - 0xC43D6
{
	char* sVar0;
	char* sVar1;
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_2.f_15);
	sVar0 = StackVal;
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_2.f_15.f_1);
	sVar1 = StackVal;
	if ((!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_PLAY_ANIM"), 1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar0)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, sVar0, sVar1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(sVar0);
				Stack.Push(sVar1);
				Stack.Push(1090519040);
				Stack.Push(-1056964608);
				Stack.Push(-1);
				Stack.Push(iParam0);
				Call_Loc(Local_214.f_156.f_2.f_15.f_2);
				TASK::TASK_PLAY_ANIM(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0f, false, false, false);
			}
		}
	}
}

void func_539(int iParam0, int iParam1)//Position - 0xC447C
{
	if (__LIB_20__::func_975(iParam0, 0))
	{
		if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_PARK"), 1))
			{
				TASK::TASK_VEHICLE_PARK(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 1, 10f, false);
			}
		}
	}
}

void func_540(int iParam0, int iParam1)//Position - 0xC471D
{
	if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
	{
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_COWER"), 1))
		{
			TASK::TASK_COWER(iParam1, -1);
		}
	}
}

void func_541(int iParam0, int iParam1)//Position - 0xC474C
{
	if (!__LIB_0__::func_798(iParam1, -251125078, 1))
	{
		if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), 10000f, 999999, false, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 65536, true);
		}
	}
}

void func_542()//Position - 0xC51F5
{
	if (Local_360.f_101 + 1 < 1)
	{
		Local_360.f_101++;
	}
}

void func_543()//Position - 0xC5214
{
	Local_360.f_68.f_2++;
	__LIB_0__::clearF_1Prop(&(Local_360.f_68));
}

int func_544()//Position - 0xC53F0
{
	return Local_360.f_81;
}

int func_545()//Position - 0xC53FD
{
	return Local_367[iLocal_324 /*35*/].f_22;
}

int func_546()//Position - 0xC59B8
{
	if (iLocal_328 == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iLocal_328))
	{
		return 0;
	}
	return 1;
}

bool func_547(var uParam0, struct<3> Param1)//Position - 0xC5B7E
{
	return ENTITY::IS_ENTITY_AT_COORD(iLocal_323, Param1, 1f, 1f, 2f, false, true, 0);
}

Vector3 func_548(int iParam0)//Position - 0xC5DB6
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_22[iParam0 /*24*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_360.f_22[iParam0 /*24*/]), false))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_360.f_22[iParam0 /*24*/]), true);
		}
	}
	return 0f, 0f, 0f;
}

void func_549()//Position - 0xC6C26
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_20__::func_35())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_360.f_2[iVar0]))
			{
				__LIB_6__::func_843(&(Local_360.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_2.f_15[iVar0]))
		{
			if (__LIB_1__::func_561(Local_360.f_2.f_15[iVar0]))
			{
				__LIB_6__::func_843(&(Local_360.f_2.f_15[iVar0]));
			}
			__LIB_1__::func_518(&(Local_360.f_2.f_15[iVar0]));
		}
		iVar0++;
	}
}

void func_550()//Position - 0xC6D55
{
	Stack.Push(iLocal_323);
	Call_Loc(Local_214.f_15.f_18.f_2);
	WEAPON::REMOVE_WEAPON_FROM_PED(StackVal, StackVal);
}

void func_551(int iParam0, int iParam1)//Position - 0xCB456
{
	Local_331.f_0 = iParam0;
	Local_331.f_1 = iParam1;
}

void func_552()//Position - 0xCC393
{
	int iVar0;
	iLocal_327 = iVar0;
	iLocal_328 = 0;
}

bool func_553(int iParam0)//Position - 0x313
{
	return __LIB_0__::func_316(&(Local_360.f_88), iParam0);
}

void func_554(int iParam0)//Position - 0x5C5
{
	if (__LIB_1__::func_458(&(Local_360.f_88), iParam0))
	{
	}
}

int func_555(int iParam0)//Position - 0x2B9D
{
	int iVar0;
	if (Local_214.f_156.f_169.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_169.f_4);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!__LIB_0__::func_937(&(Local_360.f_22[iParam0 /*24*/].f_22), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__::clearF_1Prop(&(Local_360.f_22[iParam0 /*24*/].f_22));
			}
		}
	}
	return 1;
}

void func_556(int iParam0, int iParam1)//Position - 0x30F6
{
	if (__LIB_16__::func_758(&(Local_360.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_557(int iParam0)//Position - 0x1FE72
{
	int iVar0;
	if (Local_214.f_352.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_34);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!__LIB_0__::func_937(&(Local_360.f_47[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				__LIB_0__::clearF_1Prop(&(Local_360.f_47[iParam0 /*8*/].f_6));
			}
		}
	}
	return 1;
}

void func_558()//Position - 0x214A5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_197.f_38)
	{
		Local_360.f_22[iVar0 /*24*/].f_15 = __LIB_20__::func_37(iVar0);
		iVar0++;
	}
}

void func_559()//Position - 0x218D2
{
	var uVar0;
	var uVar1;
	uVar0 = uVar0;
	uVar1 = uVar1;
	__LIB_19__::func_393(Local_197.f_134, 1, "data.MovingDoor.MovingDoors", "MAX_NUM_EVENT_LOCATION_BLIPS");
	__LIB_19__::func_393(Local_197.f_19, 1, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	__LIB_19__::func_393(Local_197.f_38, 1, "data.Ped.iCount", "MAX_NUM_PEDS");
	__LIB_19__::func_393(__LIB_20__::func_38(), 1, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
	__LIB_19__::func_393(Local_197.f_122, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	__LIB_19__::func_393(Local_197.f_85, 1, "data.Prop.iCount", "MAX_NUM_PROPS");
	__LIB_19__::func_393(__LIB_21__::func_152(), 2, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
	__LIB_19__::func_393(Local_197.f_111, 1, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	__LIB_19__::func_393(Local_197.f_67, 1, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

void func_560(int iParam0)//Position - 0x2FC2F
{
	if (iLocal_350[iParam0] != __LIB_0__::getMinusOneOrNull())
	{
		if (uLocal_351[iParam0] != iLocal_350[iParam0])
		{
			uLocal_351[iParam0] = iLocal_350[iParam0];
		}
	}
}

char* func_561(int iParam0)//Position - 0xA581C
{
	if (Local_214.f_474.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_16);
		return StackVal;
	}
	if (__LIB_21__::func_168(iParam0, 0))
	{
		return "ILH_H_PORT2" /* GXT: Press ~INPUT_CONTEXT~ to exit. */;
	}
	return "ILH_H_PORT1" /* GXT: Press ~INPUT_CONTEXT~ to enter. */;
}

int func_562(int iParam0)//Position - 0xA5949
{
	if (Local_214.f_474.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_5);
		return StackVal;
	}
	if (__LIB_21__::func_168(iParam0, 3))
	{
		return 0;
	}
	return 1;
}

int func_563()//Position - 0xB048C
{
	if (Local_214.f_15.f_13.f_3 != 0)
	{
		Stack.Push(&uLocal_354);
		Call_Loc(Local_214.f_15.f_13.f_3);
		return __LIB_0__::func_937(StackVal, StackVal, 0);
	}
	return 1;
}

void func_564()//Position - 0xB2F6A
{
	if (__LIB_0__::func_114(iLocal_321))
	{
		if (!__LIB_19__::func_409())
		{
			__LIB_3__::func_157(1);
		}
	}
}

bool func_565(int iParam0)//Position - 0xB6FF7
{
	return __LIB_3__::func_479(&(Local_360.f_72), iParam0);
}

void func_566(int iParam0, bool bParam1)//Position - 0xB74B2
{
	if (!__LIB_0__::func_109(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_3__::func_479(&(Local_367[iLocal_324 /*35*/].f_24), iParam0))
		{
			__LIB_7__::func_698(&(Local_367[iLocal_324 /*35*/].f_24), iParam0);
		}
	}
	else if (__LIB_3__::func_479(&(Local_367[iLocal_324 /*35*/].f_24), iParam0))
	{
		__LIB_7__::func_696(&(Local_367[iLocal_324 /*35*/].f_24), iParam0);
	}
}

int func_567()//Position - 0xB98E2
{
	if ((((bLocal_318 && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_193()) && bLocal_329) && __LIB_19__::func_416())
	{
		return 1;
	}
	return 0;
}

int func_568(int iParam0, int iParam1)//Position - 0xBB09C
{
	if (bLocal_318)
	{
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(iLocal_323))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iLocal_323, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iLocal_323, __LIB_20__::func_970(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_569(int iParam0, int iParam1)//Position - 0xBD7E7
{
	if (bLocal_318 && Local_312.f_10 <= 10f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_323, false))
		{
			if (iParam1 == PED::GET_VEHICLE_PED_IS_IN(iLocal_323, false) && iLocal_338 != iParam0)
			{
				iLocal_338 = iParam0;
			}
		}
	}
	else if ((iLocal_338 != -1 && !Global_1952191.f_5314) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iLocal_338 = -1;
	}
	if (iParam0 == iLocal_338)
	{
		if (Global_1952191.f_5314 && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			__LIB_19__::func_421(iParam0, 0, Local_360.f_98);
			iLocal_338 = -1;
		}
	}
}

bool func_570(int iParam0)//Position - 0xBF2BD
{
	return ((iParam0 == iLocal_321 && !__LIB_12__::func_548(1)) || __LIB_2__::func_39(iParam0) == iLocal_321);
}

void func_571(var uParam0, int iParam1)//Position - 0xBF4E6
{
	if (Local_214.f_114.f_31 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(iParam1 == iLocal_321);
		Call_Loc(Local_214.f_114.f_31);
	}
	__LIB_0__::func_467(uParam0, iParam1 == iLocal_321);
}

void func_572(bool bParam0)//Position - 0xC09E5
{
	Global_31967 = bParam0;
	if (bParam0)
	{
		__LIB_0__::func_483(7, iLocal_323, 0);
		__LIB_0__::func_483(8, iLocal_323, 0);
		__LIB_0__::func_483(20, iLocal_323, 0);
		__LIB_0__::func_483(21, iLocal_323, 0);
	}
}

int func_573()//Position - 0xC0DF9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_197.f_85)
	{
		if (__LIB_21__::func_286(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_574(int iParam0, int iParam1)//Position - 0xC17D5
{
	struct<3> Var0;
	float fVar1;
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_STAY_IN_COVER"), 1) && !PED::IS_PED_IN_COVER(iParam1, false))
	{
		if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, 0, 0);
			}
			else
			{
				Var0 = { __LIB_21__::func_14(iParam0, iParam1) };
				fVar1 = __LIB_21__::func_13(iParam0, iParam1);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Var0, fVar1, false, false);
				TASK::TASK_STAY_IN_COVER(iParam1);
			}
		}
	}
}

void func_575(int iParam0, int iParam1)//Position - 0xC18A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	if (Local_214.f_156.f_2.f_106 == 0)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_106);
		iVar1 = StackVal;
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iVar1)
		{
			if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
			{
				iVar2 = 0;
				iVar3 = 0;
				if (Local_214.f_156.f_2.f_106.f_1 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_214.f_156.f_2.f_106.f_1);
					iVar5 = StackVal;
					if (ENTITY::IS_ENTITY_A_PED(iVar5))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
						Var4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false) };
					}
					else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar5))
					{
						iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar5);
						Var4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
					}
				}
				if (iVar2 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						TASK::TASK_PLANE_MISSION(iParam1, iVar0, 0, iVar2, Var4, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), -1f, __LIB_21__::func_17(iParam0, iVar1), __LIB_21__::func_17(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, Var4, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), -1f, __LIB_21__::func_17(iParam0, iVar1), __LIB_21__::func_17(iParam0, iVar1), -1f, 128);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_16(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), __LIB_21__::func_15(iParam0, iVar1), true);
					}
				}
				else if (iVar3 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						TASK::TASK_PLANE_MISSION(iParam1, iVar0, iVar3, 0, Var4, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), -1f, __LIB_21__::func_17(iParam0, iVar1), __LIB_21__::func_17(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						TASK::TASK_HELI_MISSION(iParam1, iVar0, iVar3, 0, Var4, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), -1f, __LIB_21__::func_17(iParam0, iVar1), __LIB_21__::func_17(iParam0, iVar1), -1f, 128);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iVar0, iVar3, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_16(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), __LIB_21__::func_15(iParam0, iVar1), true);
					}
				}
				else if (Local_214.f_156.f_2.f_106.f_2 != 0)
				{
					if (PED::IS_PED_IN_ANY_PLANE(iParam1))
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_106.f_2);
						TASK::TASK_PLANE_MISSION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), -1f, __LIB_21__::func_17(iParam0, iVar1), __LIB_21__::func_17(iParam0, iVar1), true);
					}
					else if (PED::IS_PED_IN_ANY_HELI(iParam1))
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_106.f_2);
						TASK::TASK_HELI_MISSION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), -1f, __LIB_21__::func_17(iParam0, iVar1), __LIB_21__::func_17(iParam0, iVar1), -1f, 128);
					}
					else
					{
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Stack.Push(iParam0);
						Call_Loc(Local_214.f_156.f_2.f_106.f_2);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, __LIB_21__::func_19(iParam0, iVar1), __LIB_21__::func_16(iParam0, iVar1), __LIB_21__::func_18(iParam0, iVar1), __LIB_21__::func_15(iParam0, iVar1), true);
					}
				}
				else
				{
					return;
				}
			}
		}
	}
}

void func_576(int iParam0, int iParam1)//Position - 0xC1D3A
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 19)
		{
			if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
			{
				Var1 = { __LIB_21__::func_23(iParam0, iVar0) };
				fVar2 = __LIB_21__::func_22(iParam0);
				TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, 0, Var1, 19, 30f, fVar2, __LIB_21__::func_21(iParam0), 10, 10, -1f, 8225);
			}
		}
		else if (__LIB_21__::func_20(iParam0) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) == 19)
		{
			if (__LIB_1__::func_561(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				VEHICLE::SET_SHORT_SLOWDOWN_FOR_LANDING(iVar0);
				VEHICLE::SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(iVar0, true);
			}
		}
	}
}

void func_577(int iParam0, int iParam1)//Position - 0xC20D9
{
	int iVar0;
	struct<3> Var1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
		if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 4)
		{
			if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
			{
				Var1 = { __LIB_21__::func_24(iParam0) };
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(Local_197.f_67.f_1[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
				{
					TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, 0, Var1, 4, 20f, 786469, 10f, 268);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_197.f_67.f_1[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
				{
					TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, 0, Var1, 4, 20f, 1f, -1f, SYSTEM::CEIL(Var1.f_2), 10, -1f, 128);
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam1, iVar0, Var1, 4, 20f, 786469, 10f, 1f, false);
				}
			}
		}
	}
}

int func_578(var uParam0, int iParam1)//Position - 0xC2880
{
	var uVar0;
	int iVar1;
	if (!bLocal_318)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_214.f_156.f_2.f_85);
	if (!StackVal)
	{
		return 0;
	}
	PED::GET_GROUP_SIZE(iLocal_307, &uVar0, &iVar1);
	if (iVar1 > 0)
	{
		return 0;
	}
	if (__LIB_0__::func_76(iLocal_323, iParam1, 1) > __LIB_21__::func_33(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_579(int iParam0, int iParam1)//Position - 0xC2904
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
	{
		if (Local_214.f_156.f_2.f_79 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_156.f_2.f_79);
			iVar0 = StackVal;
			iVar1 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam1);
			iVar1 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam1, iVar0, false))
				{
					if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != 8)
					{
						iVar2 = iLocal_323;
						if (Local_214.f_156.f_2.f_79.f_1 != 0)
						{
							Stack.Push(iParam0);
							Call_Loc(Local_214.f_156.f_2.f_79.f_1);
							iVar2 = StackVal;
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							TASK::TASK_HELI_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, __LIB_21__::func_37(iParam0, 0), 10f, -1f, SYSTEM::ROUND(__LIB_21__::func_36(iParam0)), __LIB_21__::func_35(iParam0), -1f, 0);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							VEHICLE::SET_BOAT_ANCHOR(iVar0, false);
							TASK::TASK_BOAT_MISSION(iParam1, iVar0, 0, iVar2, 0f, 0f, 0f, 8, __LIB_21__::func_37(iParam0, 1), 786469, -1f, 111);
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iVar0, iVar2, 8, __LIB_21__::func_37(iParam0, 0), __LIB_21__::func_34(iParam0), 1000f, 1000f, true);
						}
					}
				}
				else if ((iVar1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, -1, 2f, 9, 0);
				}
			}
		}
	}
}

void func_580(int iParam0, int iParam1)//Position - 0xC2DC7
{
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_HANDS_UP"), 1) && __LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_156.f_2.f_67.f_4);
		TASK::TASK_HANDS_UP(iParam1, __LIB_21__::func_46(iParam0), __LIB_21__::func_45(iParam0), __LIB_21__::func_44(iParam0), __LIB_21__::func_43(iParam0));
	}
}

void func_581(int iParam0, int iParam1)//Position - 0xC323C
{
	if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ACHIEVE_HEADING"), 1) && __LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
	{
		TASK::TASK_ACHIEVE_HEADING(iParam1, __LIB_21__::func_51(iParam0), 0);
	}
}

void func_582(int iParam0, int iParam1)//Position - 0xC32A1
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
	{
		if (Local_197.f_38.f_1[iParam0 /*21*/].f_8 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]))
			{
				iVar0 = NETWORK::NET_TO_VEH(Local_360.f_47[Local_197.f_38.f_1[iParam0 /*21*/].f_8 /*8*/]);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1) || PED::GET_VEHICLE_PED_IS_ENTERING(iParam1) != iVar0)
					{
						TASK::CLEAR_PED_TASKS(iParam1);
						TASK::TASK_ENTER_VEHICLE(iParam1, iVar0, -1, Local_197.f_38.f_1[iParam0 /*21*/].f_9, __LIB_21__::func_55(iParam0), 1, 0);
					}
				}
			}
		}
		else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
		{
			Var1 = { __LIB_21__::func_54(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, __LIB_21__::func_55(iParam0), __LIB_21__::func_53(), 0.25f, 4096, __LIB_21__::func_52(iParam0));
		}
	}
}

void func_583(int iParam0, int iParam1)//Position - 0xC3444
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
	{
		iVar0 = joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS");
		if (__LIB_21__::func_56(iParam0))
		{
			iVar0 = joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD");
		}
		if (!__LIB_0__::func_798(iParam1, iVar0, 1))
		{
			Var1 = { __LIB_21__::func_54(iParam0) };
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, true);
			switch (iVar0)
			{
				case joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"):
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam1, Var1, __LIB_21__::func_55(iParam0), __LIB_21__::func_53(), 0.25f, 4096, __LIB_21__::func_52(iParam0));
					break;
				case joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS"):
					TASK::TASK_GO_TO_COORD_ANY_MEANS(iParam1, Var1, __LIB_21__::func_55(iParam0), 0, false, 786603, -1f);
					break;
				}
			}
	}
}

bool func_584(int iParam0)//Position - 0xC361E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Local_197.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_197.f_38.f_23[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1 && __LIB_21__::func_285(iVar2, 4))
		{
			return 1;
		}
		iVar1++;
	}
	return Local_197.f_38.f_1[iParam0 /*21*/].f_20 >= 0.75f;
}

void func_585(int iParam0, int iParam1)//Position - 0xC44D2
{
	if (__LIB_20__::func_975(iParam0, 0))
	{
		if (__LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam1, __LIB_21__::func_79(iParam0), __LIB_21__::func_78(iParam0));
			}
		}
	}
}

void func_586(int iParam0, int iParam1)//Position - 0xC47B0
{
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		Stack.Push(iParam0);
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2);
		if (__LIB_21__::func_81(StackVal, StackVal))
		{
			if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) && __LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
			{
				Stack.Push(iParam1);
				Stack.Push(iParam0);
				Call_Loc(Local_214.f_156.f_2);
				Stack.Push(iParam0);
				Call_Loc(Local_214.f_156.f_2.f_1);
				Stack.Push(iParam0);
				Call_Loc(Local_214.f_156.f_2.f_2);
				TASK::TASK_START_SCENARIO_AT_POSITION(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, true, true);
			}
		}
		else if (!__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1) && __LIB_1__::func_561(Local_360.f_22[iParam0 /*24*/]))
		{
			Stack.Push(iParam1);
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_156.f_2);
			TASK::TASK_START_SCENARIO_IN_PLACE(StackVal, StackVal, 0, false);
		}
		if (__LIB_21__::func_80(iParam0))
		{
			if (__LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"), 1) || __LIB_0__::func_798(iParam1, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE"), 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_360.f_22[iParam0 /*24*/]))
				{
					if (!PED::IS_PED_HEADTRACKING_PED(iParam1, iLocal_323))
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam1, iLocal_323, -1, 2048, 2);
					}
				}
			}
		}
	}
}

int func_587()//Position - 0xC52DC
{
	if (Local_214.f_111 == 0)
	{
		return 0;
	}
	Stack.Push(&(Local_360.f_68));
	Stack.Push(Local_360.f_68.f_2);
	Call_Loc(Local_214.f_111);
	return __LIB_0__::func_937(StackVal, StackVal, 0);
}

int func_588(int iParam0)//Position - 0xC5A51
{
	if (__LIB_21__::func_285(iParam0, 2))
	{
		return 3000;
	}
	if (__LIB_21__::func_285(iParam0, 6))
	{
		return 6500;
	}
	return 10000;
}

void func_589(bool bParam0)//Position - 0xC6D0A
{
	if (bParam0)
	{
	}
	else
	{
		__LIB_21__::func_217();
	}
}

Vector3 func_590(int iParam0)//Position - 0x2CF38
{
	struct<3> Var0;
	struct<3> Var1;
	if (bLocal_318 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_323, false))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_328))
		{
			Var0 = { __LIB_19__::func_464(iParam0) };
			if (!__LIB_0__::func_86(Var0))
			{
				return Var0;
			}
		}
		Var1 = { __LIB_19__::func_397(iParam0) };
		if (!__LIB_0__::func_86(Var1))
		{
			return Var1;
		}
	}
	return __LIB_19__::func_266(iParam0);
}

int func_591()//Position - 0xB04B7
{
	if (bLocal_317)
	{
		if (iLocal_328 != 0)
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_327, -1, false) == iLocal_323)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_327, false))
				{
					if (!__LIB_19__::func_407(iLocal_323))
					{
						return __LIB_0__::func_213(iLocal_327, __LIB_20__::func_950(), __LIB_0__::func_109(), __LIB_19__::func_299(), 0, 0, 0);
					}
				}
			}
		}
	}
	return 0;
}

int func_592(int iParam0, bool bParam1)//Position - 0xB9F5D
{
	if (__LIB_20__::func_910() <= 0 && !bParam1)
	{
		return 0;
	}
	if (__LIB_19__::func_553(iLocal_321, 0, -1))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_321) == iParam0)
	{
		return 0;
	}
	if (__LIB_19__::func_417() && !bParam1)
	{
		return 0;
	}
	Stack.Push(Local_214.f_64.f_3 != 0);
	Stack.Push(bParam1);
	Call_Loc(Local_214.f_64.f_3);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

void func_593(var uParam0)//Position - 0xBFB65
{
	if (!__LIB_19__::func_424(&(Local_360.f_72), uParam0))
	{
		__LIB_19__::func_480(uParam0, &(Local_360.f_72));
	}
}

void func_594(int iParam0, int iParam1, int iParam2)//Position - 0x10D8
{
	if (__LIB_12__::func_548(1))
	{
		__LIB_19__::func_385(Local_331.f_0, __LIB_19__::func_487(1), iParam0, iParam1, iParam2);
	}
	else
	{
		__LIB_19__::func_385(Local_331.f_0, __LIB_0__::func_950(iLocal_321), iParam0, iParam1, iParam2);
	}
}

void func_595()//Position - 0x766
{
	struct<3> Var0;
	if (Local_214.f_80 == 0)
	{
		return;
	}
	Call_Loc(Local_214.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__::func_86(Var0))
	{
		return;
	}
	if (__LIB_0__::func_937(&(Local_360.f_108), __LIB_20__::func_34(), 0))
	{
		if (!__LIB_0__::func_490(Local_360.f_115, Var0, 1056964608, 0))
		{
			__LIB_20__::func_388(__LIB_3__::func_206(1, 1), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), Var0, -1082130432);
			__LIB_0__::clearF_1Prop(&(Local_360.f_108));
		}
		Local_360.f_115 = { Var0 };
	}
}

void func_596(int iParam0, int iParam1, struct<3> Param2)//Position - 0x2A6E4
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	iVar0 = __LIB_3__::func_309(Param2, 6, -1, 0, 1, -1);
	Var1 = { __LIB_0__::func_785(iVar0, 0) };
	iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, __LIB_3__::func_285(iVar0));
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
	if (iVar2 != 0 && iVar2 == iVar3)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam1))
		{
			return;
		}
		if (!__LIB_1__::func_561(Local_360.f_2[iParam0]))
		{
			return;
		}
		if (__LIB_0__::func_388(iVar0, &Var1, &fVar4))
		{
			Var1 = { Var1.f_0, Var1.f_1, (Var1.f_2 + 5f) };
			ENTITY::SET_ENTITY_COORDS(iParam1, Var1, true, false, false, true);
			if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			}
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar4);
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam1);
		}
	}
}

int func_597()//Position - 0x24ADC
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0++;
		iVar1++;
	}
	return iVar0;
}

char* func_598(int iParam0, int iParam1)//Position - 0x2764D
{
	switch (iParam1)
	{
		case 0:
			return "Fixer_Setup_1";
		case 1:
			return "Fixer_Prep_Nightclub_1";
		case 2:
			return "Fixer_Prep_Nightclub_2";
		case 3:
			return "Fixer_Prep_Yacht_1";
		case 4:
			return "Fixer_Prep_Yacht_2";
		case 5:
			return "Fixer_Prep_Limo_1";
		case 6:
			return "Fixer_Prep_Limo_2";
		case 7:
			return "Fixer_Prep_Way_In_1";
		case 8:
			return "Fixer_Prep_Way_In_2";
		case 9:
			return "Fixer_Prep_Families_1";
		case 10:
			return "Fixer_Prep_Families_2";
		case 11:
			return "Fixer_Prep_Ballas_1";
		case 12:
			return "Fixer_Prep_Ballas_2";
		default:
	}
	return "";
}

int func_599(var uParam0)//Position - 0x2D8DA
{
	return 40000;
}

void func_600(var uParam0, int iParam1)//Position - 0x31210
{
	PED::SET_PED_HEARING_RANGE(iParam1, 200f);
	PED::SET_PED_SEEING_RANGE(iParam1, 200f);
}

int func_601(int iParam0)//Position - 0x315F5
{
	switch (iParam0)
	{
		case 15:
			return 37;
		case 16:
			return 38;
		case 17:
			return 39;
		case 47:
			return 40;
		case 48:
			return 41;
		default:
	}
	return -1;
}

char* func_602(int iParam0)//Position - 0x32DAE
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return "anim@amb@warehouse@laptop@";
		default:
	}
	return "";
}

char* func_603(int iParam0)//Position - 0x5A0CD
{
	switch (iParam0)
	{
		case 0:
			return "FIXER_DELIVERING_START";
		case 1:
			return "FIXER_SUSPENSE";
		case 2:
			return "FIXER_GUNFIGHT";
		case 3:
			return "FIXER_MED_INTENSITY";
		default:
	}
	return "";
}

int func_604(int iParam0)//Position - 0x5A62B
{
	switch (iParam0)
	{
		case 0:
			return 9;
			break;
	}
	return 5;
}

int func_605(int iParam0)//Position - 0x91FD8
{
	if ((iParam0 % 2) == 0)
	{
		return 1;
	}
	return 0;
}

void func_606(bool bParam0)//Position - 0x920FD
{
	if (bParam0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Ba_NightClub_NoFlies_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Ba_NightClub_NoFlies_Scene");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Ba_NightClub_NoFlies_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Ba_NightClub_NoFlies_Scene");
	}
}

int func_607(char* sParam0)//Position - 0x93C3F
{
	return MISC::GET_HASH_KEY(sParam0);
}

int func_608(int iParam0)//Position - 0x9429F
{
	switch (iParam0)
	{
		case 0:
			return 32;
		default:
	}
	return -1;
}

char* func_609(var uParam0)//Position - 0x95AFB
{
	return "Alarm_Loop_01";
}

bool func_610(var uParam0, int iParam1)//Position - 0x96B6F
{
	return !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false);
}

int func_611(int iParam0)//Position - 0x97676
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

char* func_612()//Position - 0xA5C46
{
	return "FXR_BM_OVER" /* GXT: MISSION OVER */;
}

char* func_613()//Position - 0xA72E2
{
	return "FXR_BM_PASS" /* GXT: MISSION PASSED */;
}

int func_614()//Position - 0xD7EA1
{
	return joaat("apa_mp_apa_yacht_radar_01a");
}

int func_615()//Position - 0xD7ED5
{
	return joaat("prop_golf_ball");
}

int func_616(int iParam0, bool bParam1)//Position - 0xD7EE2
{
	if (iParam0 == -1 || iParam0 == 255)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("apa_prop_flag_scotland_yt");
			break;
		case 1:
			return joaat("apa_prop_flag_us_yt");
			break;
		case 2:
			return joaat("apa_prop_flag_france");
			break;
		case 3:
			return joaat("apa_prop_flag_italy");
			break;
		case 4:
			return joaat("apa_prop_flag_sweden");
			break;
		case 5:
			return joaat("apa_prop_flag_argentina");
			break;
		case 6:
			return joaat("apa_prop_flag_eu_yt");
			break;
		case 7:
			return joaat("apa_prop_flag_finland");
			break;
		case 8:
			return joaat("apa_prop_flag_netherlands");
			break;
		case 9:
			return joaat("apa_prop_flag_portugal");
			break;
		case 10:
			return joaat("apa_prop_flag_southkorea");
			break;
		case 11:
			return joaat("apa_prop_flag_australia");
			break;
		case 12:
			return joaat("apa_prop_flag_german_yt");
			break;
		case 13:
			return joaat("apa_prop_flag_switzerland");
			break;
		case 14:
			return joaat("apa_prop_flag_belgium");
			break;
		case 15:
			return joaat("apa_prop_flag_turkey");
			break;
		case 16:
			return joaat("apa_prop_flag_china");
			break;
		case 17:
			return joaat("apa_prop_flag_hungary");
			break;
		case 18:
			return joaat("apa_prop_flag_newzealand");
			break;
		case 19:
			return joaat("apa_prop_flag_puertorico");
			break;
		case 20:
			return joaat("apa_prop_flag_brazil");
			break;
		case 21:
			return joaat("apa_prop_flag_japan_yt");
			break;
		case 22:
			return joaat("apa_prop_flag_jamaica");
			break;
		case 23:
			return joaat("apa_prop_flag_mexico_yt");
			break;
		case 24:
			return joaat("apa_prop_flag_ireland");
			break;
		case 25:
			return joaat("apa_prop_flag_croatia");
			break;
		case 26:
			return joaat("apa_prop_flag_israel");
			break;
		case 27:
			return joaat("apa_prop_flag_nigeria");
			break;
		case 28:
			return joaat("apa_prop_flag_slovakia");
			break;
		case 29:
			return joaat("apa_prop_flag_spain");
			break;
		case 30:
			return joaat("apa_prop_flag_colombia");
			break;
		case 31:
			return joaat("apa_prop_flag_austria");
			break;
		case 32:
			return joaat("apa_prop_flag_wales");
			break;
		case 33:
			return joaat("apa_prop_flag_czechrep");
			break;
		case 34:
			return joaat("apa_prop_flag_lstein");
			break;
		case 35:
			return joaat("apa_prop_flag_palestine");
			break;
		case 36:
			return joaat("apa_prop_flag_southafrica");
			break;
		case 37:
			return joaat("apa_prop_flag_canada_yt");
			break;
		case 38:
			return joaat("apa_prop_flag_uk_yt");
			break;
		case 39:
			return joaat("apa_prop_flag_norway");
			break;
		case 40:
			return joaat("apa_prop_flag_russia_yt");
			break;
		case 41:
			return joaat("apa_prop_flag_england");
			break;
		case 42:
			return joaat("apa_prop_flag_denmark");
			break;
		case 43:
			return joaat("apa_prop_flag_malta");
			break;
		case 44:
			return joaat("apa_prop_flag_poland");
			break;
		case 45:
			return joaat("apa_prop_flag_slovenia");
			break;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_617(int iParam0, int iParam1)//Position - 0xD833D
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_yacht_o1_rail_a");
					break;
				case 1:
					return joaat("apa_mp_apa_yacht_o2_rail_a");
					break;
				case 2:
					return joaat("apa_mp_apa_yacht_o3_rail_a");
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_yacht_o1_rail_b");
					break;
				case 1:
					return joaat("apa_mp_apa_yacht_o2_rail_b");
					break;
				case 2:
					return joaat("apa_mp_apa_yacht_o3_rail_b");
					break;
			}
			break;
	}
	return 0;
}

int func_618(int iParam0, int iParam1)//Position - 0xD83F3
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_y1_l1a");
					break;
				case 1:
					return joaat("apa_mp_apa_y2_l1a");
					break;
				case 2:
					return joaat("apa_mp_apa_y3_l1a");
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_y1_l1b");
					break;
				case 1:
					return joaat("apa_mp_apa_y2_l1b");
					break;
				case 2:
					return joaat("apa_mp_apa_y3_l1b");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_y1_l1c");
					break;
				case 1:
					return joaat("apa_mp_apa_y2_l1c");
					break;
				case 2:
					return joaat("apa_mp_apa_y3_l1c");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_y1_l1d");
					break;
				case 1:
					return joaat("apa_mp_apa_y2_l1d");
					break;
				case 2:
					return joaat("apa_mp_apa_y3_l1d");
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_y1_l2a");
					break;
				case 1:
					return joaat("apa_mp_apa_y2_l2a");
					break;
				case 2:
					return joaat("apa_mp_apa_y3_l2a");
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_y1_l2b");
					break;
				case 1:
					return joaat("apa_mp_apa_y2_l2b");
					break;
				case 2:
					return joaat("apa_mp_apa_y3_l2b");
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_y1_l2c");
					break;
				case 1:
					return joaat("apa_mp_apa_y2_l2c");
					break;
				case 2:
					return joaat("apa_mp_apa_y3_l2c");
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_y1_l2d");
					break;
				case 1:
					return joaat("apa_mp_apa_y2_l2d");
					break;
				case 2:
					return joaat("apa_mp_apa_y3_l2d");
					break;
			}
			break;
	}
	return 0;
}

int func_619()//Position - 0xD8631
{
	return joaat("apa_mp_apa_yacht_jacuzzi_ripple1");
}

int func_620(int iParam0, int iParam1)//Position - 0xD867B
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_yacht_option1");
					break;
				case 1:
					return joaat("apa_mp_apa_yacht_option2");
					break;
				case 2:
					return joaat("apa_mp_apa_yacht_option3");
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("apa_mp_apa_yacht_option1_cola");
					break;
				case 1:
					return joaat("apa_mp_apa_yacht_option2_cola");
					break;
				case 2:
					return joaat("apa_mp_apa_yacht_option3_cola");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return joaat("apa_mp_apa_yacht_option2_colb");
					break;
				case 2:
					return joaat("apa_mp_apa_yacht_option3_colb");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 2:
					return joaat("apa_mp_apa_yacht_option3_colc");
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					return joaat("apa_mp_apa_yacht_option3_cold");
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 2:
					return joaat("apa_mp_apa_yacht_option3_cole");
					break;
			}
			break;
	}
	return 0;
}

int func_621(int iParam0, int iParam1)//Position - 0xD87A6
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_622(int* iParam0)//Position - 0xD883D
{
	OBJECT::DELETE_OBJECT(iParam0);
	*iParam0 = 0;
}

int func_623(var uParam0)//Position - 0xD896A
{
	if (uParam0->f_2.f_3 == 0)
	{
		return joaat("apa_mp_apa_yacht_door");
	}
	return joaat("apa_mp_apa_yacht_door2");
}

void func_624(var uParam0, char* sParam1, int iParam2)//Position - 0xD90B8
{
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam1))
	{
		HUD::REGISTER_NAMED_RENDERTARGET(sParam1, false);
		if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iParam2))
		{
			HUD::LINK_NAMED_RENDERTARGET(iParam2);
			if (*uParam0 == -1)
			{
				*uParam0 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sParam1);
			}
		}
	}
}

void func_625(int iParam0)//Position - 0xD9AB5
{
	if (!ENTITY::IS_ENTITY_ATTACHED(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	}
	ENTITY::SET_ENTITY_DYNAMIC(iParam0, false);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, true, false);
	INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0);
}

Vector3 func_626(int iParam0)//Position - 0xD9C03
{
	return Global_4280768[iParam0 /*45*/].f_8;
}

int func_627(var uParam0)//Position - 0xD9C17
{
	if (Global_2824571.f_136 > 0 || uParam0)
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_20__::func_791());
	}
	return 0;
}

void func_628(var uParam0, var uParam1)//Position - 0xD9FF7
{
	*uParam0 = { -0.14f, -58.1f, -3.38f };
	*uParam1 = { 49.68f, 0f, 0f };
}

float func_629(int iParam0)//Position - 0xDA01D
{
	return Global_4280768[iParam0 /*45*/].f_11;
}

void func_630(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0xDA02F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.953125f, -2.17139f, 9.60403f };
					*fParam3 = 90f;
					break;
				case 1:
					*uParam2 = { 1.27979f, -1.99268f, 13.4305f };
					*fParam3 = -180f;
					break;
				case 2:
					*uParam2 = { 5.48218f, -1.98486f, 18.1568f };
					*fParam3 = -90f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2.24878f, -1.99268f, 17.32f };
					*fParam3 = -90f;
					break;
				case 1:
					*uParam2 = { 1.6189f, -1.99268f, 14.0505f };
					*fParam3 = -180f;
					break;
				case 2:
					*uParam2 = { 7.63501f, -1.99268f, 10.3491f };
					*fParam3 = 90f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 10.8328f, -1.99268f, 9.85299f };
					*fParam3 = 90f;
					break;
				case 1:
					*uParam2 = { -0.226318f, -1.96289f, 12.8964f };
					*fParam3 = 180f;
					break;
				case 2:
					*uParam2 = { -15.052f, -1.99463f, 9.06741f };
					*fParam3 = 90f;
					break;
			}
			break;
	}
}

void func_631(var uParam0, var uParam1)//Position - 0xDA213
{
	*uParam0 = { -50.8065f, -1.98013f, 0.136816f };
	*uParam1 = 0f;
}

int func_632()//Position - 0xE6D91
{
	if (Local_211.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_211.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_633()//Position - 0xE6DB4
{
	if (Local_211.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_211.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_634()//Position - 0xE6F7D
{
	if (Local_211.f_15.f_2 != 0)
	{
		Call_Loc(Local_211.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_635()//Position - 0xE7065
{
	if (Local_211.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_211.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_636()//Position - 0xE7174
{
	if (Local_211.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_211.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_637()//Position - 0xE73F0
{
	if (Local_211.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_211.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_638()//Position - 0xE74A7
{
	if (Local_211.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_639()//Position - 0xE74CC
{
	if (Local_211.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_640()//Position - 0xE74EF
{
	if (Local_211.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

int func_641()//Position - 0xE754D
{
	if (Local_211.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_642()//Position - 0xE7570
{
	if (Local_211.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_211.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_643()//Position - 0xE7593
{
	if (Local_211.f_15.f_6 != 0)
	{
		Call_Loc(Local_211.f_15.f_6);
		return StackVal;
	}
	return 0;
}

char* func_644()//Position - 0xF0C1C
{
	return "FXR_OT_AG_EXT" /* GXT: Exit the Agency. */;
}

float func_645()//Position - 0xFD671
{
	return 1.7f;
}

int func_646(int iParam0)//Position - 0x11383D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 5);
	}
	return 0;
}

void func_647(var uParam0)//Position - 0xD884F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_7))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_7));
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_8))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("port_text"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("port_text");
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("starb_text"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("starb_text");
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("stern_text"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("stern_text");
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		__LIB_0__::func_123(&(uParam0->f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		__LIB_0__::func_123(&(uParam0->f_5));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		__LIB_0__::func_123(&(uParam0->f_6));
	}
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	*uParam0 = 0;
}

int func_648(int iParam0)//Position - 0xDA5CE
{
	int iVar0;
	if (__LIB_1__::func_778(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!STREAMING::IS_IPL_ACTIVE(__LIB_20__::func_859(iParam0, iVar0)))
			{
				return 0;
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_649(int iParam0, bool bParam1)//Position - 0xDA633
{
	int iVar0;
	if (__LIB_1__::func_778(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			STREAMING::REQUEST_IPL(__LIB_20__::func_859(iParam0, iVar0));
			iVar0++;
		}
		STREAMING::REQUEST_MODEL(__LIB_20__::func_792());
		STREAMING::REQUEST_MODEL(__LIB_20__::func_791());
		if (!bParam1)
		{
			if (!Global_2824571.f_93[iParam0])
			{
				Global_2824571.f_93[iParam0] = 1;
				Global_2824571.f_136++;
			}
		}
	}
}

void func_650(int iParam0, bool bParam1)//Position - 0xD898C
{
	int iVar0;
	if (__LIB_1__::func_778(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			STREAMING::REMOVE_IPL(__LIB_20__::func_859(iParam0, iVar0));
			iVar0++;
		}
		if (!bParam1)
		{
			if (Global_2824571.f_93[iParam0])
			{
				Global_2824571.f_93[iParam0] = 0;
				Global_2824571.f_136 = (Global_2824571.f_136 + -1);
			}
			if (Global_2824571.f_136 <= 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_20__::func_792());
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_20__::func_791());
				Global_2824571.f_136 = 0;
			}
		}
	}
}

int func_651()//Position - 0xDA545
{
	if ((__LIB_1__::func_864(PLAYER::PLAYER_ID()) && !__LIB_0__::func_457(PLAYER::PLAYER_ID())) && !__LIB_1__::func_665())
	{
		return 1;
	}
	return 0;
}

void func_652()//Position - 0x116C4A
{
	if (__LIB_1__::func_501())
	{
		__LIB_21__::func_404(0);
	}
}

void func_653(bool bParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xE3640
{
	__LIB_1__::func_534();
	if (bParam0)
	{
		__LIB_1__::func_674(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	__LIB_1__::func_553();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	__LIB_1__::func_373(0, 1, 1, 0, 0, bParam2, 0);
	__LIB_1__::func_320();
	__LIB_1__::func_7(12, 0, -1);
	__LIB_1__::func_8(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_0__::func_131();
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
	__LIB_0__::func_83(0);
	if (((((__LIB_0__::func_629() == 0 && __LIB_1__::func_486() == 0) && uParam1) && !__LIB_0__::func_457(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && __LIB_0__::func_893())
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2703735.f_3428 = 0;
	__LIB_3__::func_83();
}

int func_654(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5)//Position - 0x570D2
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_873(&Global_1966234);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		__LIB_10__::func_735(iParam1, &Global_1966234);
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iVar0, Param2, fParam3, bParam4, bParam5, false);
		__LIB_20__::func_122(*uParam0, &Global_1966234, 1, 1, 0);
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

void func_655(bool bParam0)//Position - 0x31C5
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_1965626, bParam0))
		{
			MISC::CLEAR_BIT(&Global_1965626, bParam0);
			MISC::CLEAR_BIT(&Global_1965632, bParam0);
			MISC::CLEAR_BIT(&Global_1965634, bParam0);
		}
	}
	else if (BitTest(Global_1965627, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&Global_1965627, (bParam0 - 32));
		MISC::CLEAR_BIT(&Global_1965633, (bParam0 - 32));
		MISC::CLEAR_BIT(&Global_1965635, (bParam0 - 32));
	}
}

bool func_656(bool bParam0)//Position - 0x33CB
{
	if (bParam0 < 32)
	{
		return (BitTest(Global_1965628, bParam0) && BitTest(Global_1965630, bParam0));
	}
	return (BitTest(Global_1965629, (bParam0 - 32)) && BitTest(Global_1965631, (bParam0 - 32)));
}

void func_657(int iParam0)//Position - 0x355D
{
	if ((MISC::GET_FRAME_COUNT() % 20) == 0)
	{
	}
	Global_1965528 = iParam0;
}

void func_658()//Position - 0x4CE1
{
	Global_2787917 = 0;
}

bool func_659()//Position - 0x4DA2
{
	return BitTest(Global_1958736, 4);
}

bool func_660()//Position - 0x4DE1
{
	return BitTest(Global_1958736, 5);
}

void func_661(bool bParam0)//Position - 0x4DFD
{
	if (bParam0)
	{
		if (__LIB_0__::func_93())
		{
			if (!BitTest(Global_1958711, 9))
			{
				MISC::SET_BIT(&Global_1958711, 9);
			}
		}
	}
	else if (BitTest(Global_1958711, 9))
	{
		MISC::CLEAR_BIT(&Global_1958711, 9);
	}
}

void func_662(int iParam0)//Position - 0x4F1B
{
	Global_2787907 = iParam0;
}

int func_663(int iParam0)//Position - 0x8554
{
	if (((((iParam0 == joaat("xs_prop_arena_turntable_02a") || iParam0 == joaat("xs_prop_arena_turntable_03a")) || iParam0 == joaat("vw_prop_arena_turntable_02f_sf")) || iParam0 == joaat("xs_prop_arena_turntable_03a_sf")) || iParam0 == joaat("xs_prop_arena_turntable_02a_wl")) || iParam0 == joaat("xs_prop_arena_turntable_03a_wl"))
	{
		return 1;
	}
	return 0;
}

void func_664()//Position - 0x87AF
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (BitTest(Global_4718592.f_21, 21))
		{
			iVar1 = iVar0;
			if (HUD::IS_MP_GAMER_TAG_ACTIVE(iVar0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				if ((iVar1 != PLAYER::PLAYER_ID() || BitTest(Global_4718592.f_31, 9)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
				{
					if (BitTest(Global_4718592.f_31, 1))
					{
						HUD::SET_MP_GAMER_TAGS_SHOULD_USE_POINTS_HEALTH(iVar0, true);
						HUD::SET_MP_GAMER_TAGS_POINT_HEALTH(iVar0, SYSTEM::ROUND(VEHICLE::GET_VEHICLE_BODY_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false))), 1001);
					}
					else
					{
						HUD::SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(iVar0, true);
					}
				}
				else
				{
					HUD::SET_MP_GAMER_TAGS_SHOULD_USE_POINTS_HEALTH(iVar0, false);
					HUD::SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(iVar0, false);
				}
			}
		}
		iVar0++;
	}
}

int func_665(int iParam0, int iParam1, bool bParam2)//Position - 0x9522
{
	if (bParam2 == 1)
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

bool func_666()//Position - 0xA0CE
{
	return BitTest(Global_2788035, 2);
}

void func_667(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA578
{
	MISC::SET_BIT(&Global_2788033, 12);
	Global_2787947.f_20 = iParam0;
	Global_2787947.f_20.f_1 = iParam1;
	Global_2787947.f_20.f_2 = iParam2;
	Global_2787947.f_20.f_3 = iParam3;
}

void func_668(int iParam0)//Position - 0xA5B0
{
	MISC::SET_BIT(&Global_2788033, 6);
	Global_2787947.f_19 = iParam0;
}

void func_669(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)//Position - 0xA5C9
{
	MISC::SET_BIT(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 1;
	Global_2787947.f_8 = iParam0;
	Global_2787947.f_8.f_2 = iParam2;
	Global_2787947.f_8.f_3 = iParam1;
	Global_2787947.f_8.f_4 = iParam3;
	Global_2787947.f_13 = fParam4;
	Global_2787947.f_13.f_1 = iParam5;
	Global_2787947.f_13.f_2 = iParam6;
}

int func_670()//Position - 0xA625
{
	int iVar0;
	var uVar1;
	MISC::SET_BIT(&Global_2788035, 1);
	iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2787946 = iVar0;
	uVar1 = Global_2788034;
	Global_2788034 = Global_2788033;
	Global_2788033 = uVar1;
	return iVar0;
}

void func_671(int iParam0)//Position - 0xA673
{
	MISC::SET_BIT(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 3;
	Global_2787947.f_8 = joaat("VEHICLE_WEAPON_PLAYER_BULLET");
	Global_2787947.f_8.f_2 = iParam0;
	Global_2787947.f_8.f_3 = 0;
	Global_2787947.f_8.f_4 = 0f;
}

void func_672()//Position - 0xA6B4
{
	Global_2788034 = Global_2788033;
	Global_2788033 = 0;
}

bool func_673()//Position - 0xAA0E
{
	return (Global_2787934 == Global_2787943 && !__LIB_10__::func_569());
}

void func_674(var* uParam0)//Position - 0xAA29
{
	Global_2787945 = 0;
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("turret_cam_script"), uParam0, 8, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("turret_cam_script"));
	Global_2787934 = Global_2787943;
	Global_1944345.f_44 = 1;
}

void func_675(var uParam0)//Position - 0xAC7F
{
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Global_2787946 = *uParam0;
}

void func_676(char* sParam0)//Position - 0xAC95
{
	MISC::SET_BIT(&Global_2788033, 11);
	StringCopy(&(Global_2787947.f_80), sParam0, 16);
}

void func_677(int iParam0, char* sParam1)//Position - 0xACB1
{
	int iVar0;
	MISC::SET_BIT(&Global_2788033, 7);
	iVar0 = Global_2787947.f_24;
	if (iVar0 > 8)
	{
		return;
	}
	StringCopy(&(Global_2787947.f_24.f_1[iVar0 /*4*/]), sParam1, 16);
	Global_2787947.f_24.f_34[iVar0] = iParam0;
	Global_2787947.f_24++;
}

void func_678(int iParam0, char* sParam1)//Position - 0xAD00
{
	int iVar0;
	MISC::SET_BIT(&Global_2788033, 7);
	iVar0 = Global_2787947.f_24;
	if (iVar0 >= 8)
	{
		return;
	}
	StringCopy(&(Global_2787947.f_24.f_1[iVar0 /*4*/]), sParam1, 16);
	Global_2787947.f_24.f_34[iVar0] = (32 + iParam0);
	Global_2787947.f_24++;
}

void func_679(int iParam0)//Position - 0xADB8
{
	MISC::SET_BIT(&Global_2788033, 5);
	Global_2787947.f_18 = iParam0;
}

void func_680(int iParam0)//Position - 0xAE15
{
	MISC::SET_BIT(&Global_2788033, 4);
	Global_2787947.f_17 = iParam0;
}

void func_681(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0xAE2E
{
	MISC::SET_BIT(&Global_2788033, 0);
	Global_2787947 = fParam0;
	Global_2787947.f_1 = fParam1;
	Global_2787947.f_2 = fParam2;
	Global_2787947.f_3 = fParam3;
	Global_2787947.f_4 = fParam4;
	Global_2787947.f_5 = fParam5;
}

void func_682()//Position - 0xAE90
{
	Global_2788033 = 0;
	Global_2787947.f_24 = 0;
	Global_2787947.f_74 = 0;
}

int func_683(int iParam0, int iParam1)//Position - 0xB063
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 20;
			break;
		case 3:
			iVar0 = 10;
			break;
	}
	iVar0 = (iVar0 + iParam1 + 1);
	if (iParam1 >= 10)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_684(int iParam0)//Position - 0xB1E0
{
	if (iParam0 == PLAYER::PLAYER_ID() && !__LIB_10__::func_569())
	{
		return Global_2787940;
	}
	return Global_2680265.f_1399[iParam0 /*3*/];
}

int func_685(int iParam0)//Position - 0xCE04
{
	if ((((((iParam0 == joaat("xs_prop_arena_bollard_rising_01a") || iParam0 == joaat("xs_prop_arena_bollard_rising_01b")) || iParam0 == joaat("xs_prop_arena_bollard_rising_01a_sf")) || iParam0 == joaat("xs_prop_arena_bollard_rising_01b_sf")) || iParam0 == joaat("xs_prop_arena_bollard_rising_01a_wl")) || iParam0 == joaat("xs_prop_arena_bollard_rising_01b_wl")) || __LIB_19__::func_130(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_686()//Position - 0xE156
{
	return BitTest(Global_1958736, 0);
}

void func_687(bool bParam0)//Position - 0xEBF9
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 2))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 2);
		}
	}
	else if (BitTest(Global_1958711.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 2);
	}
}

float func_688()//Position - 0x1055F
{
	return 3.5f;
}

void func_689(int iParam0)//Position - 0x10C52
{
	Global_2667225.f_2675 = iParam0;
}

void func_690(int iParam0)//Position - 0x1176E
{
	Global_1965622 = iParam0;
}

void func_691(var uParam0)//Position - 0x1225A
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	iVar0 = 1;
	while (iVar0 < 5)
	{
		Var2 = { *(uParam0[iVar0 /*13*/]) };
		iVar1 = iVar0;
		while (iVar1 > 0 && Var2.f_2 < (uParam0[(iVar1 - 1) /*13*/])->f_2)
		{
			*(uParam0[iVar1 /*13*/]) = { *(uParam0[(iVar1 - 1) /*13*/]) };
			iVar1 = (iVar1 - 1);
		}
		*(uParam0[iVar1 /*13*/]) = { Var2 };
		iVar0++;
	}
}

int func_692(int iParam0)//Position - 0x1271A
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_693(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, int iParam5, int iParam6, int iParam7)//Position - 0x12BD9
{
	if (__LIB_0__::func_86(Param2))
	{
		Param2 = { Global_4718592.f_173049[iParam0 /*18*/].f_6[0 /*3*/] };
	}
	if (__LIB_0__::func_86(Param3))
	{
		Param3 = { Global_4718592.f_173049[iParam0 /*18*/].f_6[1 /*3*/] };
	}
	if (Global_4718592.f_173049[iParam0 /*18*/] == 0)
	{
		return Global_4718592.f_173049[iParam0 /*18*/].f_2;
	}
	else if (Global_4718592.f_173049[iParam0 /*18*/] == 1)
	{
		if (iParam1 == 0)
		{
			if (!__LIB_0__::func_86(Param2))
			{
				return Param2 + Vector(-2f, 0f, 0f);
			}
			else
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam1 == 1)
		{
			if (__LIB_0__::func_86(Param3))
			{
				if (bParam4)
				{
					return Vector(iParam7, iParam6, iParam5) + Vector(Global_4718592.f_173049[iParam0 /*18*/].f_13, 0f, 0f);
				}
				else
				{
					return 0f, 0f, 0f;
				}
			}
			else
			{
				return Param3 + Vector(Global_4718592.f_173049[iParam0 /*18*/].f_13, 0f, 0f);
			}
		}
	}
	return 0f, 0f, 0f;
}

int func_694(var uParam0)//Position - 0x13DDD
{
	int iVar0;
	__LIB_0__::func_627(uParam0, 0, 0);
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_30[iVar0] != 0)
		{
			uParam0->f_30[iVar0] = 0;
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_695(var uParam0)//Position - 0x13E2E
{
	return BitTest(uParam0->f_105, 3);
}

int func_696(var uParam0)//Position - 0x13EFC
{
	if (uParam0->f_8 == 20)
	{
		return 1;
	}
	return 0;
}

int func_697(var uParam0, bool bParam1)//Position - 0x13F12
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_30[iVar0] >= uParam0->f_30[iVar1])
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (uParam0->f_30[iVar0] >= uParam0->f_30[iVar2] && iVar0 != iVar1)
			{
				iVar2 = iVar0;
			}
			iVar0++;
		}
		return iVar2;
	}
	return iVar1;
}

bool func_698(var uParam0)//Position - 0x13F85
{
	return BitTest(uParam0->f_105, 7);
}

bool func_699(var uParam0)//Position - 0x13F93
{
	return BitTest(uParam0->f_105, 2);
}

bool func_700(var uParam0)//Position - 0x13FA1
{
	return BitTest(uParam0->f_105, 5);
}

int func_701(var uParam0)//Position - 0x14077
{
	if (__LIB_0__::func_864(uParam0))
	{
		if (__LIB_0__::func_937(uParam0, Global_262145.f_9455 /* Tunable: NJVS_MAJORITY_TIMOUT */, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_702(var uParam0)//Position - 0x1409E
{
	if (__LIB_0__::func_864(uParam0))
	{
		if (__LIB_0__::func_937(uParam0, Global_262145.f_9454 /* Tunable: NJVS_TIMOUT */, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_703(var uParam0)//Position - 0x140C5
{
	if (!__LIB_0__::func_864(&(uParam0->f_2)))
	{
		__LIB_0__::func_795(&(uParam0->f_2), 0, 0);
	}
}

void func_704(var uParam0)//Position - 0x140E3
{
	__LIB_0__::func_627(&(uParam0->f_2), 0, 0);
}

void func_705(var uParam0)//Position - 0x140F5
{
	if (uParam0->f_108 == 0)
	{
		if (!BitTest(uParam0->f_105, 2))
		{
			MISC::SET_BIT(&(uParam0->f_105), 2);
		}
	}
	else if (!BitTest(uParam0->f_105, 5))
	{
		MISC::SET_BIT(&(uParam0->f_105), 5);
	}
}

int func_706(var uParam0)//Position - 0x1412E
{
	if (uParam0->f_8 == 19)
	{
		return 1;
	}
	return 0;
}

void func_707(var uParam0, int iParam1)//Position - 0x14144
{
	uParam0->f_104 = iParam1;
}

int func_708(int iParam0, bool bParam1)//Position - 0x15151
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_72;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_72;
}

int func_709(int iParam0, bool bParam1)//Position - 0x1535B
{
	if (bParam1 && iParam0 < 100)
	{
		return 0;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_80;
}

int func_710(int iParam0, bool bParam1)//Position - 0x15385
{
	if (bParam1 && iParam0 < 100)
	{
		return 0;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_77;
}

var func_711(int iParam0, bool bParam1)//Position - 0x153AF
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_76;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_76;
}

struct<6> func_712(int iParam0, bool bParam1)//Position - 0x1543C
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/];
	}
	return Global_794709.f_4[iParam0 /*88*/];
}

void func_713(var uParam0)//Position - 0x15472
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 18)
	{
		if (BitTest(uParam0->f_106, bVar0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_106), bVar0);
		}
		bVar0++;
	}
}

int func_714(int iParam0, bool bParam1)//Position - 0x15BAD
{
	if (bParam1 && iParam0 < 100)
	{
		return 0;
	}
	return Global_794709.f_177589[iParam0 /*13*/].f_1;
}

int func_715(int iParam0, bool bParam1)//Position - 0x16247
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_70;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_70;
}

int func_716(int iParam0, bool bParam1)//Position - 0x162BB
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_69;
	}
	if (Global_794709.f_177589[iParam0 /*13*/].f_2 != -1 && Global_262145.f_4947[Global_794709.f_177589[iParam0 /*13*/].f_2] != -1)
	{
		return Global_262145.f_4947[Global_794709.f_177589[iParam0 /*13*/].f_2];
	}
	return Global_794709.f_4[iParam0 /*88*/].f_69;
}

int func_717(int iParam0, bool bParam1)//Position - 0x1633F
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_71;
	}
	if (Global_794709.f_177589[iParam0 /*13*/].f_2 != -1 && Global_262145.f_4896[Global_794709.f_177589[iParam0 /*13*/].f_2] != -1)
	{
		return Global_262145.f_4896[Global_794709.f_177589[iParam0 /*13*/].f_2];
	}
	return Global_794709.f_4[iParam0 /*88*/].f_71;
}

int func_718(int iParam0, bool bParam1)//Position - 0x163FD
{
	if (bParam1 && iParam0 < 100)
	{
		return -1;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_68;
}

bool func_719(int iParam0, bool bParam1)//Position - 0x16427
{
	if (bParam1 && iParam0 < 100)
	{
		return Global_998606.f_604[iParam0 /*88*/].f_65;
	}
	return Global_794709.f_4[iParam0 /*88*/].f_65;
}

bool func_720(var uParam0)//Position - 0x16564
{
	return BitTest(uParam0->f_105, 4);
}

int func_721(var uParam0, var uParam1)//Position - 0x16572
{
	if (Global_262145.f_9458 /* Tunable: DISABLE_NJVS_PLAYSTYLE */ || uParam1->f_46 == 0)
	{
		return 0;
	}
	else if (uParam0->f_54 < uParam1->f_46)
	{
		return 1;
	}
	return 0;
}

int func_722(var uParam0)//Position - 0x1670B
{
	if (Global_1057166.f_103 < uParam0->f_111[0 /*5*/])
	{
		return 1;
	}
	return 0;
}

int func_723(var uParam0, var uParam1)//Position - 0x16728
{
	if (uParam1->f_26 < 3)
	{
		if (uParam0->f_54 == uParam1->f_27[uParam1->f_26])
		{
			return 1;
		}
	}
	return 0;
}

int func_724(var uParam0, var uParam1)//Position - 0x1674E
{
	if (uParam1->f_31 < 6)
	{
		if (uParam0->f_54 == uParam1->f_32[uParam1->f_31])
		{
			return 1;
		}
	}
	return 0;
}

bool func_725(int iParam0)//Position - 0x18A93
{
	return iParam0 == 52;
}

int func_726(int iParam0, int iParam1)//Position - 0x18AFB
{
	int iVar0;
	int iVar1;
	iVar1 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 4);
	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 36:
				return Global_262145.f_9830[iVar1];
			case 42:
				return Global_262145.f_9841[iVar1];
			case 43:
				return Global_262145.f_9852[iVar1];
			case 44:
				return Global_262145.f_9863[iVar1];
			case 45:
				return Global_262145.f_9874[iVar1];
			case 47:
				return Global_262145.f_9885[iVar1];
			case 49:
				return Global_262145.f_9896[iVar1];
			case 54:
				return Global_262145.f_9907[iVar1];
			case 51:
				return Global_262145.f_9918[iVar1];
			case 52:
				return Global_262145.f_9929[iVar1];
			case 55:
				return Global_262145.f_9940[iVar1];
			case 58:
				return Global_262145.f_9951[iVar1];
			case 57:
				return Global_262145.f_9962[iVar1];
			case 50:
				return Global_262145.f_9973[iVar1];
			case 56:
				return Global_262145.f_9984[iVar1];
			case 61:
				return Global_262145.f_9995[iVar1];
			case 60:
				return Global_262145.f_10006[iVar1];
			case 64:
				return Global_262145.f_10017[iVar1];
			case 65:
				return Global_262145.f_10028[iVar1];
			case 67:
				return Global_262145.f_10040[iVar1];
			case 68:
				return Global_262145.f_10051[iVar1];
			}
		default:
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9511[iVar1];
			}
			else
			{
				return Global_262145.f_9533[iVar1];
			}
			break;
		case 11:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9698[iVar1];
			}
			else
			{
				return Global_262145.f_9674[iVar1];
			}
			break;
		case 0:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9522[iVar1];
			}
			else
			{
				return Global_262145.f_9533[iVar1];
			}
			break;
		case 2:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9522[iVar1];
			}
			else
			{
				return Global_262145.f_9511[iVar1];
			}
			break;
		case 3:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9511[iVar1];
			}
			else if (iVar0 == 1)
			{
				return Global_262145.f_9533[iVar1];
			}
			else
			{
				return Global_262145.f_9522[iVar1];
			}
			break;
		case 28:
			return Global_262145.f_9797[iVar1];
			break;
		case 29:
			return Global_262145.f_9819[iVar1];
			break;
		case 30:
			return Global_262145.f_9808[iVar1];
			break;
		case 31:
			return Global_262145.f_9786[iVar1];
			break;
		case 9:
			return Global_262145.f_9674[iVar1];
			break;
		case 10:
			return Global_262145.f_9687[iVar1];
			break;
		case 12:
			return Global_262145.f_9709[iVar1];
			break;
		case 13:
			return Global_262145.f_9731[iVar1];
			break;
		case 22:
			return Global_262145.f_9577[iVar1];
			break;
		case 14:
			return Global_262145.f_9720[iVar1];
			break;
		case 16:
			return Global_262145.f_9588[iVar1];
			break;
		case 27:
			return Global_262145.f_9599[iVar1];
			break;
		case 24:
			return Global_262145.f_9608[iVar1];
			break;
		case 26:
			return Global_262145.f_9618[iVar1];
			break;
		case 25:
			return Global_262145.f_9630[iVar1];
			break;
		case 17:
			return Global_262145.f_9742[iVar1];
			break;
		case 20:
			return Global_262145.f_9753[iVar1];
			break;
		case 21:
			return Global_262145.f_9764[iVar1];
			break;
		case 23:
			return Global_262145.f_9775[iVar1];
			break;
		case 7:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9641[iVar1];
			}
			else
			{
				return Global_262145.f_9663[iVar1];
			}
			break;
		case 6:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9652[iVar1];
			}
			else
			{
				return Global_262145.f_9663[iVar1];
			}
			break;
		case 8:
			iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(0, 1);
			if (iVar0 == 0)
			{
				return Global_262145.f_9652[iVar1];
			}
			else
			{
				return Global_262145.f_9641[iVar1];
			}
			break;
	}
	return 0;
}

int func_727(var uParam0)//Position - 0x1912B
{
	return uParam0->f_110;
}

int func_728(var uParam0, int iParam1)//Position - 0x19137
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = 1;
	while (iVar3 && iVar2 < 10)
	{
		iVar3 = 0;
		iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(iParam1, iParam1 + 6);
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (iVar0 == uParam0->f_27[iVar1])
			{
				iVar3 = 0;
				iVar2++;
				iVar0 = -1;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_729()//Position - 0x19190
{
	if (Global_4718592.f_117095 == 5 || Global_4718592.f_117095 == 6)
	{
		return 1;
	}
	return 0;
}

int func_730(int iParam0)//Position - 0x191BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	while (iVar2 && iVar1 < 10)
	{
		iVar2 = 0;
		iVar0 = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(iParam0, iParam0 + 6);
		iVar1++;
	}
	return iVar0;
}

void func_731(var uParam0)//Position - 0x1986C
{
	uParam0->f_107 = 0;
}

int func_732(int iParam0)//Position - 0x19915
{
	return __LIB_8__::func_347(Global_4718592.f_116524, iParam0);
}

int func_733(int iParam0)//Position - 0x19CA3
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_262145.f_6890[iVar1] == iParam0)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6210[iVar1])
			{
				if (Global_262145.f_5065[iVar1 /*51*/][iVar0] == 0)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_734(int iParam0)//Position - 0x19DC4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == __LIB_18__::func_683(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_735(var uParam0)//Position - 0x19F96
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uParam0->f_11[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_128 = { Global_1922899 };
}

void func_736()//Position - 0x19FD4
{
	Global_1835431.f_3 = 1;
}

int func_737(var uParam0)//Position - 0x1A0AD
{
	return uParam0->f_104;
}

void func_738(var uParam0, int iParam1)//Position - 0x1A0B9
{
	if (BitTest(uParam0->f_105, 6) || iParam1)
	{
		if (!__LIB_0__::func_864(uParam0))
		{
			uParam0->f_5++;
			__LIB_0__::func_795(uParam0, 0, 0);
		}
	}
}

bool func_739()//Position - 0x1A99C
{
	return BitTest(Global_1057830.f_94, 1);
}

bool func_740()//Position - 0x1AF1D
{
	return Global_1941273.f_10;
}

int func_741()//Position - 0x1EB62
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (Global_4718592.f_180134.f_2825[0] != Global_4718592.f_180134.f_2825[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_742(int iParam0)//Position - 0x284BC
{
	struct<2> Var0;
	Var0.f_1 = { 0f, 0f, 0f };
	if (iParam0 < 0 || iParam0 >= 59)
	{
		return Var0.f_1;
	}
	return Global_4980736.f_69361[iParam0 /*151*/];
}

int func_743(int iParam0)//Position - 0x28E18
{
	int iVar0;
	if (!__LIB_0__::func_998())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_172946.f_1 - 1))
	{
		if (Global_4718592.f_172946.f_2[iVar0 /*20*/] == 2 && Global_4718592.f_172946.f_2[iVar0 /*20*/].f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_744(int iParam0)//Position - 0x294B5
{
	if ((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("tampa3") || iParam0 == joaat("dune3")) || iParam0 == joaat("halftrack")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("technical3")) || iParam0 == joaat("apc")) || iParam0 == joaat("oppressor")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("trailerlarge")) || iParam0 == joaat("microlight")) || iParam0 == joaat("havok")) || iParam0 == joaat("seabreeze")) || iParam0 == joaat("starling")) || iParam0 == joaat("pyro")) || iParam0 == joaat("mogul")) || iParam0 == joaat("rogue")) || iParam0 == joaat("nokota")) || iParam0 == joaat("hunter")) || iParam0 == joaat("tula")) || iParam0 == joaat("bombushka")) || iParam0 == joaat("alphaz1")) || iParam0 == joaat("howard")) || iParam0 == joaat("barrage")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("volatol")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("cuban800")) || iParam0 == joaat("molotok")) || iParam0 == joaat("akula")) || iParam0 == joaat("avenger")) || iParam0 == joaat("savestra")) || iParam0 == joaat("comet4")) || iParam0 == joaat("revolter")) || iParam0 == joaat("viseris")) || iParam0 == joaat("menacer")) || iParam0 == joaat("oppressor2")) || iParam0 == joaat("strikeforce")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("seasparrow")) || iParam0 == joaat("jb7002")) || iParam0 == joaat("minitank")) || iParam0 == joaat("annihilator2")) || iParam0 == joaat("alkonost"))
	{
		return 1;
	}
	return 0;
}

int func_745(int iParam0, struct<3> Param1, int iParam2)//Position - 0x2AF43
{
	if (Param1.f_2 < -100f && iParam2 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_746(int iParam0)//Position - 0x2E606
{
	return Global_262145.f_6086[iParam0] == Global_4718592.f_116524;
}

int func_747(int iParam0)//Position - 0x2E65A
{
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 0;
	}
	return BitTest(Global_2715699.f_3880, iParam0);
}

int func_748(int iParam0)//Position - 0x2EC51
{
	if (iParam0 != -1)
	{
		return Global_1970897[iParam0 /*68*/].f_18.f_7;
	}
	return 0;
}

void func_749(var uParam0, float fParam1, float fParam2)//Position - 0x2F0D2
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	Var1 = { -16000f, -16000f, -1700f };
	Var2 = { 16000f, 16000f, 2700f };
	*uParam0 = MISC::ADD_POP_MULTIPLIER_AREA(Var1, Var2, fParam1, fParam2, bVar0, true);
}

void func_750(var uParam0)//Position - 0x2F480
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_34[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_1[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_40 = -1;
}

Vector3 func_751()//Position - 0x2F6D8
{
	return 2800f, -3800.5f, 185.8f;
}

int func_752()//Position - 0x2F71D
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (Global_4718592.f_180134.f_2820[0] != Global_4718592.f_180134.f_2820[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_753(var uParam0)//Position - 0x3572B
{
	return (BitTest(*uParam0, 7) || BitTest(Global_1965531, 20));
}

int func_754()//Position - 0x37719
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
	{
		return 1;
	}
	return 0;
}

int func_755()//Position - 0x37730
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		return 1;
	}
	return 0;
}

bool func_756(var uParam0)//Position - 0x37875
{
	return uParam0->f_29 == 5;
}

void func_757()//Position - 0x378A5
{
	Global_2714762.f_841 = 1;
}

int func_758()//Position - 0x3907A
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		return 1;
	}
	return 0;
}

int func_759()//Position - 0x3917A
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/))
	{
		return 1;
	}
	return 0;
}

int func_760()//Position - 0x39239
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		return 1;
	}
	return 0;
}

int func_761()//Position - 0x392D7
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
	{
		return 1;
	}
	return 0;
}

int func_762(var uParam0)//Position - 0x39373
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 26) && uParam0->f_27 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_763()//Position - 0x393D6
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1, 5);
}

bool func_764(var uParam0)//Position - 0x393EF
{
	return uParam0->f_28 == 1;
}

bool func_765(var uParam0)//Position - 0x393FD
{
	return (((uParam0->f_29 == 1 || uParam0->f_29 == 3) || uParam0->f_29 == 4) || uParam0->f_29 == 5);
}

int func_766(int* iParam0)//Position - 0x39BE5
{
	if (iParam0->f_1 > 0)
	{
		return 1;
	}
	return 0;
}

int func_767()//Position - 0x39BFA
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/))
	{
		return 1;
	}
	return 0;
}

bool func_768(int* iParam0)//Position - 0x54AD4
{
	return BitTest(*iParam0, 3);
}

int func_769(int* iParam0)//Position - 0x54AE1
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(iParam0->f_1, false, true, false, -1, 0))
	{
		return 0;
	}
	return 1;
}

int func_770(var uParam0)//Position - 0x54CC2
{
	if (BitTest(*uParam0, 1))
	{
		return 0;
	}
	if (Global_1836604)
	{
		return 0;
	}
	if (__LIB_1__::func_202())
	{
		return 0;
	}
	return 1;
}

int func_771()//Position - 0xA0860
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
	{
		return 1;
	}
	return 0;
}

int func_772(var uParam0)//Position - 0xA090E
{
	if (BitTest(*uParam0, 0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_15, 2))
	{
		return 0;
	}
	if ((__LIB_8__::func_335(Global_4718592.f_116524) || __LIB_8__::func_336(Global_4718592.f_116524)) || __LIB_7__::func_708(Global_4718592.f_116524))
	{
		return 0;
	}
	if (__LIB_1__::func_202())
	{
		return 0;
	}
	return 1;
}

int func_773(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA09DE
{
	int iVar0;
	iVar0 = 0;
	if (!bParam1 && !bParam2)
	{
		if (((((((((((((((Global_4718592.f_658[iParam0 /*22957*/].f_61 != 0 || Global_4718592.f_658[iParam0 /*22957*/].f_62 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_63 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_64 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_339 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_340 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_341 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_342 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_616 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_617 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_618 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_619 != 0) || Global_4718592.f_176572[iParam0 /*8*/] != -1) || Global_4718592.f_176572[iParam0 /*8*/].f_1 != -1) || Global_4718592.f_176572[iParam0 /*8*/].f_2 != -1) || BitTest(Global_4718592.f_176572[iParam0 /*8*/].f_3, 4))
		{
			iVar0 = 1;
		}
	}
	else
	{
		if (bParam1)
		{
			if (((((Global_4718592.f_658[iParam0 /*22957*/].f_61 != 0 || Global_4718592.f_658[iParam0 /*22957*/].f_62 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_63 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_64 != 0) || Global_4718592.f_176572[iParam0 /*8*/] != -1) || BitTest(Global_4718592.f_176572[iParam0 /*8*/].f_3, 4))
			{
				iVar0 = 1;
			}
		}
		if (bParam2)
		{
			if ((((Global_4718592.f_658[iParam0 /*22957*/].f_339 != 0 || Global_4718592.f_658[iParam0 /*22957*/].f_340 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_341 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_342 != 0) || Global_4718592.f_176572[iParam0 /*8*/].f_1 != -1)
			{
				iVar0 = 1;
			}
		}
		if (bParam3)
		{
			if ((((Global_4718592.f_658[iParam0 /*22957*/].f_616 != 0 || Global_4718592.f_658[iParam0 /*22957*/].f_617 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_618 != 0) || Global_4718592.f_658[iParam0 /*22957*/].f_619 != 0) || Global_4718592.f_176572[iParam0 /*8*/].f_2 != -1)
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_774()//Position - 0xA1290
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		if (BitTest(Global_1853348[iVar0 /*834*/].f_833, 7) == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_775()//Position - 0xA12FC
{
	if (Global_4718592 != 0)
	{
		return 0;
	}
	return Global_4718592.f_593 == 2;
}

void func_776()//Position - 0xA151B
{
	MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 1);
}

void func_777()//Position - 0xA1CAD
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 4);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 5);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 7);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 8);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 12);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 13);
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 6);
}

void func_778(int iParam0)//Position - 0xA1D60
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_5 = iParam0;
}

void func_779()//Position - 0xA1D77
{
	if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 23))
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 23);
	}
}

void func_780()//Position - 0xA28CD
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 9);
}

bool func_781(var uParam0)//Position - 0xA28EA
{
	return uParam0->f_29 == 1;
}

void func_782()//Position - 0xA28F8
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 8);
	__LIB_18__::func_760();
}

int func_783(int iParam0)//Position - 0xA3D01
{
	int iVar0;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("LBD_VOTE_TICK" /* GXT: Rated Job.  +~1~ ~BLIP_RP~ */);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(false, true);
	return iVar0;
}

var func_784()//Position - 0xA3D24
{
	return Global_262145.f_4306 /* Tunable: XP_TUNABLE_VOTE_FOR_CONTENT */;
}

int func_785()//Position - 0xA3E6B
{
	if ((!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
	{
		return 1;
	}
	return 0;
}

void func_786(var uParam0)//Position - 0xA4AF1
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	__LIB_18__::func_777(uParam0, 2);
}

void func_787(var uParam0)//Position - 0xA4B37
{
	__LIB_18__::func_777(uParam0, 1);
}

int func_788()//Position - 0xA7806
{
	if (Global_1836382)
	{
		if (__LIB_18__::func_787())
		{
			return 0;
		}
	}
	return BitTest(Global_4718592.f_13, 2);
}

int func_789()//Position - 0xA784A
{
	if (__LIB_18__::func_788() && __LIB_18__::func_789())
	{
		return 1;
	}
	return 0;
}

void func_790(var uParam0)//Position - 0xA8903
{
	__LIB_18__::func_777(uParam0, 6);
}

int func_791()//Position - 0xAC104
{
	if (__LIB_18__::func_787())
	{
		return 2;
	}
	return 1;
}

void func_792(var uParam0, int iParam1, int iParam2)//Position - 0xAC1A5
{
	uParam0->f_17[iParam2 /*13*/] = { __LIB_1__::func_696(iParam1) };
}

var func_793(int iParam0)//Position - 0xAC2D5
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 23);
}

var func_794(int iParam0)//Position - 0xAC2ED
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 6);
}

var func_795(int iParam0)//Position - 0xAC304
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 7);
}

var func_796(int iParam0)//Position - 0xAC31B
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 8);
}

void func_797(var uParam0, int iParam1)//Position - 0xB0F99
{
	if (iParam1 != -1)
	{
		if (BitTest(Global_1853348[iParam1 /*834*/].f_36.f_18, 10) || BitTest(Global_1853348[iParam1 /*834*/].f_36.f_18, 11))
		{
			uParam0->f_500 = 1;
		}
		else
		{
			uParam0->f_500 = 0;
		}
		if (BitTest(Global_1853348[iParam1 /*834*/].f_36.f_18, 11))
		{
			uParam0->f_501 = 1;
		}
		else
		{
			uParam0->f_501 = 0;
		}
	}
}

bool func_798(int iParam0)//Position - 0xB1001
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 5);
}

int func_799(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB1408
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = (((iParam1 + iParam2) + iParam2) + iParam3);
	}
	else
	{
		iVar0 = (iParam1 + iParam3);
	}
	iVar0 = (iVar0 - Global_1836355);
	return iVar0;
}

int func_800(int iParam0, int iParam1)//Position - 0xB5060
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if (__LIB_2__::func_232(iParam0, &iVar0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (((Global_2779511[iVar1 /*5*/].f_1 == -1 || Global_2779511[iVar1 /*5*/].f_2 == -1) || Global_2779511[iVar1 /*5*/].f_3 == -1) || Global_2779511[iVar1 /*5*/].f_4 == -1)
		{
			iVar0 = iVar1;
			iVar1 = 2;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	HUD::GET_HUD_COLOUR(iParam0, &uVar2, &uVar3, &uVar4, &uVar5);
	Global_2779511[iVar0 /*5*/] = iParam0;
	Global_2779511[iVar0 /*5*/].f_1 = uVar2;
	Global_2779511[iVar0 /*5*/].f_2 = uVar3;
	Global_2779511[iVar0 /*5*/].f_3 = uVar4;
	Global_2779511[iVar0 /*5*/].f_4 = uVar5;
	HUD::REPLACE_HUD_COLOUR(iParam0, iParam1);
	return iVar0;
}

int func_801()//Position - 0xB5A97
{
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
	{
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
	{
		return 1;
	}
	return 0;
}

int func_802(bool bParam0)//Position - 0xB67BB
{
	if ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)) && __LIB_18__::func_783(Global_1836352, 0))
	{
		return 1;
	}
	if (bParam0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/))
		{
			return 1;
		}
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/))
	{
		return 1;
	}
	return 0;
}

int func_803()//Position - 0xC28A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= (Global_4718592.f_593 - 1))
	{
		if (Global_4718592.f_600[iVar1] == 0)
		{
			return iVar1;
		}
		else if (Global_4718592.f_600[iVar1] > iVar2 || iVar0 == -1)
		{
			iVar0 = iVar1;
			iVar2 = Global_4718592.f_600[iVar1];
		}
		iVar1++;
	}
	return iVar0;
}

int func_804()//Position - 0xC291D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_619(Global_4718592.f_168757))
	{
		return 2;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= (Global_4718592.f_593 - 1))
	{
		if ((Global_4718592.f_600[iVar1] < iVar2 || iVar0 == -1) && Global_4718592.f_600[iVar1] != 0)
		{
			iVar0 = iVar1;
			iVar2 = Global_4718592.f_600[iVar1];
		}
		iVar1++;
	}
	return iVar0;
}

void func_805()//Position - 0xC2E03
{
	if (__LIB_0__::func_1("THUMB_VOTE" /* GXT: After completing a Job you can let other players know if you enjoyed it or not. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_806()//Position - 0xC2E1B
{
	if (Global_1056949 > -1 && Global_1056949 < 10)
	{
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_807()//Position - 0xC30B6
{
	if (__LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2667225.f_45.f_304 = 1;
	}
}

void func_808()//Position - 0xC3171
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
}

int func_809(int iParam0)//Position - 0xDCB58
{
	if (__LIB_18__::func_833(iParam0) || __LIB_18__::func_838(iParam0))
	{
		return 60309;
	}
	if (__LIB_18__::func_839(iParam0))
	{
		return 31086;
	}
	return 28422;
}

Vector3 func_810(int iParam0)//Position - 0xDCB8E
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 0f, 90f, 0f };
			break;
		case 2:
			Var0 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

Vector3 func_811(int iParam0)//Position - 0xDCBE5
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 0f, 0f, 0.3f };
			break;
		case 3:
			Var0 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

char* func_812(int iParam0)//Position - 0xDCC3C
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "scr_xs_beer_chug";
			break;
		case 1:
			sVar0 = "scr_xs_money_rain_celeb";
			break;
		case 2:
			sVar0 = "scr_xs_champagne_spray";
			break;
		case 3:
			sVar0 = "scr_xs_confetti_burst";
			break;
	}
	return sVar0;
}

int func_813(int iParam0, int iParam1)//Position - 0xDCC92
{
	if (__LIB_18__::func_839(iParam0))
	{
		*iParam1 = 0;
		return 1;
	}
	if (__LIB_18__::func_838(iParam0))
	{
		*iParam1 = 1;
		return 1;
	}
	if (__LIB_18__::func_834(iParam0))
	{
		*iParam1 = 2;
		return 1;
	}
	if (__LIB_18__::func_833(iParam0))
	{
		*iParam1 = 3;
		return 1;
	}
	*iParam1 = 4;
	return 0;
}

char* func_814(int iParam0)//Position - 0xDCCE3
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "vfx_xs_beer_chug_stop";
			break;
		case 1:
			sVar0 = "vfx_xs_raining_cash_celeb_stop";
			break;
		case 2:
			sVar0 = "vfx_xs_champagne_spray_celeb_stop";
			break;
	}
	return sVar0;
}

char* func_815(int iParam0)//Position - 0xDCD29
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "vfx_xs_beer_chug_start";
			break;
		case 1:
			sVar0 = "vfx_xs_raining_cash_celeb_start";
			break;
		case 2:
			sVar0 = "vfx_xs_champagne_spray_celeb_start";
			break;
		case 3:
			sVar0 = "vfx_xs_confetti_fire";
			break;
	}
	return sVar0;
}

char* func_816()//Position - 0xDCD7F
{
	return "scr_xs_celebration";
}

void func_817(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xDCD8C
{
	StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
	if (__LIB_18__::func_841(uParam0))
	{
		StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
	}
	switch (uParam0->f_1[iParam3])
	{
		case 80:
			StringCopy(sParam2, "cham_a_champagne", 64);
			break;
		case 81:
			StringCopy(sParam2, "cham_b_champagne", 64);
			break;
		case 82:
			StringCopy(sParam2, "cham_c_champagne", 64);
			break;
		case 83:
			StringCopy(sParam2, "cham_d_champagne", 64);
			break;
		case 100:
			StringCopy(sParam2, "cham_a_champagne", 64);
			break;
		case 101:
			StringCopy(sParam2, "cham_b_champagne", 64);
			break;
		case 102:
			StringCopy(sParam2, "cham_c_champagne", 64);
			break;
		case 103:
			StringCopy(sParam2, "cham_d_champagne", 64);
			break;
		case 26:
			StringCopy(sParam2, "cham_chug_a_champagne", 64);
			break;
		case 27:
			StringCopy(sParam2, "cham_spray_a_champagne", 64);
			break;
		case 28:
			StringCopy(sParam2, "cham_spray_b_champagne", 64);
			break;
		case 29:
			StringCopy(sParam2, "cham_spray_c_champagne", 64);
			break;
		case 30:
			StringCopy(sParam2, "confetti_canon_a_1st", 64);
			break;
		case 31:
			StringCopy(sParam2, "confetti_canon_c_1st", 64);
			break;
		case 32:
			StringCopy(sParam2, "confetti_canon_d_1st", 64);
			break;
		case 0:
		case 3:
		case 84:
		case 104:
			StringCopy(sParam2, "trophy_a_trophy", 64);
			break;
		case 1:
		case 4:
		case 85:
		case 105:
			StringCopy(sParam2, "trophy_b_trophy", 64);
			break;
		case 2:
		case 5:
		case 86:
		case 106:
			StringCopy(sParam2, "trophy_c_trophy", 64);
			break;
	}
}

int func_818(var uParam0)//Position - 0xDCFFA
{
	if (__LIB_18__::func_841(uParam0))
	{
		return 2;
	}
	return 3;
}

int func_819()//Position - 0xDD848
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 10:
		case 9:
		case 12:
		case 8:
			return 0;
		default:
	}
	return 1;
}

struct<4> func_820(int iParam0, bool bParam1)//Position - 0xDDB1D
{
	struct<4> Var0;
	StringCopy(&Var0, "HEIST_RL_NONE" /* GXT: UNASSIGNED */, 16);
	if (iParam0 < 0)
	{
		return Var0;
	}
	StringCopy(&Var0, "COR_TEAM_", 16);
	if (bParam1)
	{
		StringConCat(&Var0, "S_", 16);
	}
	StringIntConCat(&Var0, Global_4718592.f_92543[iParam0], 16);
	if (Global_4718592.f_92543[iParam0] == 38)
	{
		Var0 = { Global_4718592.f_92548[iParam0 /*4*/] };
	}
	return Var0;
}

char* func_821(var uParam0)//Position - 0xDDFE4
{
	char* sVar0;
	sVar0 = "PODIUM_CAM_1";
	if (__LIB_18__::func_841(uParam0))
	{
		sVar0 = "FLAT_CAM_1";
	}
	return sVar0;
}

struct<16> func_822(var uParam0)//Position - 0xDE005
{
	struct<16> Var0;
	StringCopy(&Var0, "anim@arena@celeb@podium@no_prop@", 64);
	if (__LIB_18__::func_841(uParam0))
	{
		StringCopy(&Var0, "anim@arena@celeb@flat@paired@no_props@", 64);
	}
	return Var0;
}

void func_823(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xDF164
{
	switch (uParam0->f_1[bParam3])
	{
		case default:
			break;
		case 0:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_a_1st", 64);
			break;
		case 1:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_b_1st", 64);
			break;
		case 2:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_c_1st", 64);
			break;
		case 3:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_d_1st", 64);
			break;
		case 4:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_e_1st", 64);
			break;
		case 5:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "trophy_f_1st", 64);
			break;
		case 6:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cheer_a_1st", 64);
			break;
		case 7:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "clapping_a_1st", 64);
			break;
		case 8:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cocky_a_1st", 64);
			break;
		case 9:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "crowd_point_a_1st", 64);
			break;
		case 10:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_a_1st", 64);
			break;
		case 11:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_b_1st", 64);
			break;
		case 12:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_a_1st", 64);
			break;
		case 13:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_b_1st", 64);
			break;
		case 14:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "fist_pump_a_1st", 64);
			break;
		case 15:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_a_1st", 64);
			break;
		case 16:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_b_1st", 64);
			break;
		case 17:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_c_1st", 64);
			break;
		case 18:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_b_1st", 64);
			break;
		case 19:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_c_1st", 64);
			break;
		case 20:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "make_noise_a_1st", 64);
			break;
		case 21:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_a_1st", 64);
			break;
		case 22:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_b_1st", 64);
			break;
		case 23:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_c_1st", 64);
			break;
		case 24:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "shrug_off_a_1st", 64);
			break;
		case 33:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cheer_a_2nd", 64);
			break;
		case 34:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "cocky_a_2nd", 64);
			break;
		case 35:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "crowd_point_a_2nd", 64);
			break;
		case 36:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_a_2nd", 64);
			break;
		case 37:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "finger_guns_b_2nd", 64);
			break;
		case 38:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_a_2nd", 64);
			break;
		case 39:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_b_2nd", 64);
			break;
		case 40:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "flip_off_c_2nd", 64);
			break;
		case 41:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "make_noise_a_2nd", 64);
			break;
		case 42:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "shrug_off_a_2nd", 64);
			break;
		case 43:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "clapping_a_3rd", 64);
			break;
		case 44:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_a_3rd", 64);
			break;
		case 45:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "dance_b_3rd", 64);
			break;
		case 46:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "fist_pump_a_3rd", 64);
			break;
		case 47:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_b_3rd", 64);
			break;
		case 48:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "hands_air_c_3rd", 64);
			break;
		case 49:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_a_3rd", 64);
			break;
		case 50:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_b_3rd", 64);
			break;
		case 51:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "regal_c_3rd", 64);
			break;
		case 25:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "air_slap_a_1st", 64);
			break;
		case 52:
			StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
			StringCopy(sParam2, "air_slap_a_2nd", 64);
			break;
		case 26:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_1st", 64);
			break;
		case 27:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_1st", 64);
			break;
		case 28:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_1st", 64);
			break;
		case 29:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_1st", 64);
			break;
		case 30:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_1st", 64);
			break;
		case 31:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_1st", 64);
			break;
		case 32:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_1st", 64);
			break;
		case 53:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_2nd", 64);
			break;
		case 54:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_2nd", 64);
			break;
		case 55:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_2nd", 64);
			break;
		case 56:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_2nd", 64);
			break;
		case 57:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_2nd", 64);
			break;
		case 58:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_2nd", 64);
			break;
		case 59:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_2nd", 64);
			break;
		case 60:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_chug_a_3rd", 64);
			break;
		case 61:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_a_3rd", 64);
			break;
		case 62:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_b_3rd", 64);
			break;
		case 63:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "cham_spray_c_3rd", 64);
			break;
		case 64:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_a_3rd", 64);
			break;
		case 65:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_c_3rd", 64);
			break;
		case 66:
			StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
			StringCopy(sParam2, "confetti_canon_d_3rd", 64);
			break;
		case 109:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_a_player_a", 64);
			break;
		case 110:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_b_player_a", 64);
			break;
		case 129:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "angry_clap_b_player_b", 64);
			break;
		case 111:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "cap_a_player_a", 64);
			break;
		case 112:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "flip_a_player_a", 64);
			break;
		case 113:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "giggle_a_player_a", 64);
			break;
		case 130:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "giggle_a_player_b", 64);
			break;
		case 114:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_a_player_a", 64);
			break;
		case 115:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_b_player_a", 64);
			break;
		case 116:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_c_player_a", 64);
			break;
		case 117:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "jump_d_player_a", 64);
			break;
		case 118:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "pageant_a_player_a", 64);
			break;
		case 131:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "pageant_a_player_b", 64);
			break;
		case 119:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_a_player_a", 64);
			break;
		case 120:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_b_player_a", 64);
			break;
		case 121:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slide_c_player_a", 64);
			break;
		case 122:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "slugger_a_player_a", 64);
			break;
		case 123:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_a_player_a", 64);
			break;
		case 132:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_a_player_b", 64);
			break;
		case 124:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_b_player_a", 64);
			break;
		case 133:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "smug_b_player_b", 64);
			break;
		case 125:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_b_player_a", 64);
			break;
		case 134:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_b_player_b", 64);
			break;
		case 135:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_c_player_b", 64);
			break;
		case 136:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_d_player_b", 64);
			break;
		case 137:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "taunt_e_player_b", 64);
			break;
		case 126:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "thumbs_down_a_player_a", 64);
			break;
		case 138:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "thumbs_down_a_player_b", 64);
			break;
		case 139:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wave_a_player_b", 64);
			break;
		case 140:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wow_a_player_b", 64);
			break;
		case 141:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
			StringCopy(sParam2, "wow_b_player_b", 64);
			break;
		case 80:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_a_player_a", 64);
			break;
		case 100:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_a_player_b", 64);
			break;
		case 81:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_b_player_a", 64);
			break;
		case 101:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_b_player_b", 64);
			break;
		case 82:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_c_player_a", 64);
			break;
		case 102:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_c_player_b", 64);
			break;
		case 83:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_d_player_a", 64);
			break;
		case 103:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "cham_d_player_b", 64);
			break;
		case 84:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_a_player_a", 64);
			break;
		case 104:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_a_player_b", 64);
			break;
		case 85:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_b_player_a", 64);
			break;
		case 105:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_b_player_b", 64);
			break;
		case 86:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_c_player_a", 64);
			break;
		case 106:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
			StringCopy(sParam2, "trophy_c_player_b", 64);
			break;
		case 67:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "baseball_a_player_a", 64);
			break;
		case 87:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "baseball_a_player_b", 64);
			break;
		case 68:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "daps_b_player_a", 64);
			break;
		case 88:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "daps_b_player_b", 64);
			break;
		case 69:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "did_you_see_a_player_a", 64);
			break;
		case 89:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "did_you_see_a_player_b", 64);
			break;
		case 70:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_b_player_a", 64);
			break;
		case 90:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_b_player_b", 64);
			break;
		case 71:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_c_player_a", 64);
			break;
		case 91:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "high_five_c_player_b", 64);
			break;
		case 72:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "hype_a_player_a", 64);
			break;
		case 92:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "hype_a_player_b", 64);
			break;
		case 73:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_a_player_a", 64);
			break;
		case 93:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_a_player_b", 64);
			break;
		case 74:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_b_player_a", 64);
			break;
		case 94:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "laugh_b_player_b", 64);
			break;
		case 75:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_b_player_a", 64);
			break;
		case 95:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_b_player_b", 64);
			break;
		case 76:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_c_player_a", 64);
			break;
		case 96:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "piggyback_c_player_b", 64);
			break;
		case 77:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "the_bird_a_player_a", 64);
			break;
		case 97:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "the_bird_a_player_b", 64);
			break;
		case 78:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_a_player_a", 64);
			break;
		case 98:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_a_player_b", 64);
			break;
		case 79:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_b_player_a", 64);
			break;
		case 99:
			StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
			StringCopy(sParam2, "this_guy_b_player_b", 64);
			break;
		case 107:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "chug_beer_a_player_a", 64);
			break;
		case 108:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "chug_beer_b_player_a", 64);
			break;
		case 127:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "make_it_rain_b_player_b", 64);
			break;
		case 128:
			StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
			StringCopy(sParam2, "smoking_b_player_b", 64);
			break;
	}
}

int func_824(int iParam0)//Position - 0xE07CC
{
	if (__LIB_18__::func_833(iParam0) || __LIB_18__::func_838(iParam0))
	{
		return 60309;
	}
	return 28422;
}

int func_825(var uParam0, int iParam1)//Position - 0xE07F3
{
	if (__LIB_18__::func_842(iParam1))
	{
		return 0;
	}
	if (__LIB_18__::func_843(iParam1))
	{
		return 1;
	}
	if (__LIB_18__::func_836(iParam1))
	{
		return 1;
	}
	if (__LIB_18__::func_833(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_826(int iParam0)//Position - 0xE7474
{
	if (__LIB_1__::func_907(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_827(int iParam0)//Position - 0xE750D
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = __LIB_0__::func_161(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_828(int iParam0)//Position - 0xF4095
{
	int iVar0;
	if (iParam0 >= 9)
	{
		return Global_262145.f_26575 /* Tunable: -43734750 */;
	}
	else if (iParam0 >= Global_262145.f_26573 /* Tunable: 228354248 */)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f));
		return (Global_262145.f_26574 /* Tunable: -1894644386 */ * iVar0);
	}
	return 0;
}

float func_829(int iParam0)//Position - 0xF40D9
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f));
	if (iVar0 >= 6)
	{
		return Global_262145.f_26572 /* Tunable: -1544941337 */;
	}
	else if (iVar0 >= Global_262145.f_26564 /* Tunable: 545899484 */)
	{
		return (1f + (IntToFloat((iVar0 - 1)) * Global_262145.f_26571 /* Tunable: 537045080 */));
	}
	return 1f;
}

void func_830(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)//Position - 0xF4164
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "ADD_ARENA_UNLOCK_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700("CLB_UNLOCK" /* GXT: UNLOCKED */);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam6))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&uParam2);
		if (iParam10 > 0)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&uParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uParam6);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_831(int iParam0)//Position - 0xF41C9
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return Global_1964893.f_4[iParam0];
}

int func_832(int iParam0)//Position - 0xF4CEB
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return -1;
	}
	return Global_1964893[iParam0];
}

bool func_833()//Position - 0xF4D10
{
	return Global_1964893[0] != -1;
}

int func_834()//Position - 0xF4D21
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1964893[iVar0] != -1)
		{
			iVar1++;
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_835(var uParam0, char* sParam1)//Position - 0xF4DAC
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1210.f_5);
	__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("CLB_RNKA" /* GXT: TIER */);
	__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("CLB_RNKB" /* GXT: UP */);
}

void func_836(var uParam0, var uParam1)//Position - 0xF4E0C
{
	uParam0->f_1210 = *uParam1;
	uParam0->f_1210.f_1 = uParam1->f_1;
	uParam0->f_1210.f_2 = uParam1->f_2;
	uParam0->f_1210.f_3 = uParam1->f_3;
	uParam0->f_1210.f_4 = uParam1->f_4;
	uParam0->f_1210.f_5 = uParam1->f_5;
}

int func_837()//Position - 0xF4FF1
{
	int iVar0;
	struct<13> Var1[32];
	int iVar2;
	int iVar3;
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (iVar3 != PLAYER::PLAYER_ID())
			{
				Var1[iVar2 /*13*/] = { __LIB_1__::func_696(iVar3) };
				if (NETWORK::NETWORK_IS_FRIEND(&(Var1[iVar2 /*13*/])))
				{
					iVar0++;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_838(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xF5075
{
	char* sVar0;
	char cVar1[16];
	char cVar2[16];
	char* sVar3;
	StringCopy(&cVar1, "", 16);
	StringCopy(&cVar2, "", 16);
	StringIntConCat(&cVar1, iParam3, 16);
	StringIntConCat(&cVar2, iParam4, 16);
	if (iParam2 == 1)
	{
		if (bParam5)
		{
			sVar0 = "CELEB_WINNERS" /* GXT: WINNERS */;
		}
		else
		{
			sVar0 = "CELEB_LOSERS" /* GXT: LOSERS */;
		}
		sVar3 = "CELEB_H2H_PART_OF" /* GXT: CREW HEAD TO HEAD PART ~a~ OF ~a~ */;
	}
	else
	{
		if (bParam5)
		{
			sVar0 = "CELEB_WINNER" /* GXT: Winner */;
		}
		else
		{
			sVar0 = "CELEB_LOSER" /* GXT: Loser */;
		}
		sVar3 = "CELEB_CHALLENGE_PART_OF" /* GXT: CHALLENGE PART ~a~ OF ~a~ */;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_CHALLENGE_PART_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700(sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_CHALLENGE_PART_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700(sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_CHALLENGE_PART_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__::func_700(sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_839(var uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0xF51A9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_POSITION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		if (!MISC::IS_STRING_NULL(sParam3))
		{
			__LIB_0__::func_700(sParam3);
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_POSITION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		if (!MISC::IS_STRING_NULL(sParam3))
		{
			__LIB_0__::func_700(sParam3);
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_POSITION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		if (!MISC::IS_STRING_NULL(sParam3))
		{
			__LIB_0__::func_700(sParam3);
		}
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_840(var uParam0, int iParam1, bool bParam2)//Position - 0x100FAB
{
	var uVar0;
	uVar0 = BitTest(uParam0, iParam1);
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

bool func_841(int iParam0)//Position - 0x101425
{
	return BitTest(Global_1888862[iParam0 /*120*/].f_14, 20);
}

void func_842()//Position - 0x10153F
{
	MISC::SET_BIT(&(Global_2714762.f_669.f_1), 0);
}

int func_843(int iParam0, int iParam1)//Position - 0x101DAA
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == 1)
	{
		iVar0 = iParam1;
	}
	return iVar0;
}

int func_844(int iParam0)//Position - 0x1024B2
{
	int iVar0;
	iVar0 = __LIB_18__::func_966(iParam0);
	if (!Global_2103119.f_22[iVar0])
	{
		return 0;
	}
	if (Global_2103119.f_11[iVar0])
	{
		return 0;
	}
	return 1;
}

struct<6> func_845()//Position - 0x10265D
{
	int iVar0;
	if (__LIB_1__::func_130())
	{
		iVar0 = 1;
	}
	else if (__LIB_1__::func_128(Global_4718592.f_168757))
	{
		iVar0 = 2;
	}
	else if (__LIB_1__::func_131(Global_4718592.f_168757))
	{
		iVar0 = 3;
	}
	else if (__LIB_1__::func_129())
	{
		iVar0 = 4;
	}
	else if (__LIB_1__::func_133(Global_4718592.f_168757))
	{
		iVar0 = 5;
	}
	else if (__LIB_1__::func_134(Global_4718592.f_168757))
	{
		iVar0 = 6;
	}
	else if (__LIB_1__::func_132(Global_4718592.f_168757))
	{
		iVar0 = 7;
	}
	else if (__LIB_1__::func_127(Global_4718592.f_168757))
	{
		iVar0 = 8;
	}
	else if (__LIB_1__::func_135(Global_4718592.f_168757))
	{
		iVar0 = 9;
	}
	return __LIB_8__::func_315(iVar0);
}

void func_846(int iParam0)//Position - 0x102A63
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1057406 = (Global_1057406 + iParam0);
		Global_1853348[iVar0 /*834*/].f_9 = Global_1057406;
	}
}

int func_847(int iParam0)//Position - 0x103667
{
	switch (iParam0)
	{
		case 9:
		case 5:
		case 6:
			return 1;
		default:
	}
	return 0;
}

int func_848(int iParam0)//Position - 0x103959
{
	if (iParam0 <= 10)
	{
		return 100;
	}
	else if (iParam0 <= 30)
	{
		return 25;
	}
	else
	{
		switch (iParam0)
		{
			case 31:
				return 24;
			case 32:
				return 23;
			case 33:
				return 22;
			case 34:
				return 21;
			case 35:
				return 20;
			case 36:
				return 19;
			case 37:
				return 18;
			case 38:
				return 17;
			case 39:
				return 16;
			case 40:
				return 15;
			case 41:
				return 14;
			case 42:
				return 13;
			case 43:
				return 12;
			case 44:
				return 11;
			case 45:
				return 10;
			case 46:
				return 9;
			case 47:
				return 8;
			default:
		}
		return 7;
	}
	return 100;
}

float func_849(int iParam0, int iParam1)//Position - 0x103A4A
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar1 = SYSTEM::TO_FLOAT(iParam0);
	fVar2 = SYSTEM::TO_FLOAT(iParam1);
	fVar3 = (fVar2 - fVar1);
	fVar4 = (fVar3 / 400f);
	fVar5 = SYSTEM::POW(10f, fVar4);
	fVar0 = (1f / (1f + fVar5));
	return fVar0;
}

void func_850(int iParam0)//Position - 0x11EFCC
{
	Global_1837284 = (Global_1837284 + iParam0);
}

int func_851(int iParam0, var uParam1, int iParam2)//Position - 0x11F8E7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	__LIB_0__::func_795(iParam0, 0, 0);
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam1, *iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_852(int iParam0, char[64] cParam1)//Position - 0x124A04
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2727852, "", 64);
	}
	else
	{
		Global_2727852 = { cParam1 };
	}
	Global_2727851 = iParam0;
}

struct<16> func_853()//Position - 0x124AB4
{
	return Global_2727852;
}

bool func_854()//Position - 0x124AC3
{
	return Global_2727851;
}

void func_855(int* iParam0)//Position - 0x125453
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
}

float func_856()//Position - 0x152AE2
{
	return 0.72f;
}

int func_857()//Position - 0x152C4D
{
	if ((__LIB_10__::func_231(Global_4718592.f_168757) || __LIB_8__::func_875(Global_4718592.f_168757)) || __LIB_10__::func_213(Global_4718592.f_168757))
	{
		return 100;
	}
	return 3000;
}

void func_858()//Position - 0x152FBD
{
	if (__LIB_1__::func_615() != 0)
	{
		__LIB_1__::func_616(0);
		GRAPHICS::DISABLE_SCREENBLUR_FADE();
	}
}

void func_859(bool bParam0)//Position - 0x152FD6
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2815059.f_1795), 14);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1795), 14);
	}
}

bool func_860()//Position - 0x153000
{
	return BitTest(Global_2815059.f_1795, 14);
}

bool func_861()//Position - 0x1531C5
{
	return BitTest(Global_2815059.f_1795, 13);
}

int func_862(int iParam0, int iParam1, bool bParam2)//Position - 0x1534E2
{
	if (__LIB_10__::func_365() && __LIB_1__::func_189(iParam0, bParam2))
	{
		return Global_1585857[Global_1659903 /*142*/].f_5;
	}
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 4;
			break;
		case 3:
			return 27;
			break;
		case 4:
			return 33;
			break;
		case 5:
			return 135;
			break;
		case 6:
			return 38;
			break;
		case 7:
			return 90;
			break;
		case 8:
			return 89;
			break;
		case 9:
			return 50;
			break;
		case 10:
			return 53;
			break;
		case 11:
			return 64;
			break;
		case 12:
			return 74;
			break;
		case 13:
			return 95;
			break;
		case 14:
			return 145;
			break;
		case 15:
			return 111;
			break;
	}
	return 0;
}

int func_863()//Position - 0x153F0C
{
	if (Global_1659909 == -1)
	{
		return 1;
	}
	return 0;
}

int func_864(int iParam0)//Position - 0x153FAF
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			return 1;
		default:
	}
	return 0;
}

void func_865()//Position - 0x1540CE
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), false);
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_252 = 1;
}

void func_866(int iParam0)//Position - 0x1542A0
{
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0) && NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		VEHICLE::DELETE_VEHICLE(&iParam0);
	}
}

int func_867()//Position - 0x15D470
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_995(1))
		{
			return 1;
		}
	}
	return 0;
}

int func_868(int iParam0, int iParam1)//Position - 0x163DC4
{
	if (iParam0 != 0)
	{
		return (WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * iParam1);
	}
	return 0;
}

int func_869(int iParam0)//Position - 0x163DDF
{
	switch (iParam0)
	{
		case joaat("WEAPON_MINIGUN"):
			return 1;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 1;
			break;
		case joaat("WEAPON_RPG"):
			return 1;
			break;
		case joaat("WEAPON_MUSKET"):
			return 1;
			break;
		case joaat("WEAPON_FIREWORK"):
			return 1;
			break;
		case joaat("WEAPON_GRENADE"):
			return 1;
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return 1;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			return 1;
			break;
		case joaat("WEAPON_RAYPISTOL"):
			return 1;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			return 1;
			break;
	}
	return 0;
}

void func_870()//Position - 0x16464B
{
	if (Global_1836604 == 0)
	{
		Global_1836604 = 1;
	}
}

int func_871(int iParam0)//Position - 0x165D21
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_UNARMED");
			break;
		case 1:
			return joaat("WEAPON_PISTOL");
			break;
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
			break;
		case 3:
			return joaat("WEAPON_APPISTOL");
			break;
		case 4:
			return joaat("WEAPON_MICROSMG");
			break;
		case 5:
			return joaat("WEAPON_SMG");
			break;
		case 6:
			return joaat("WEAPON_MG");
			break;
		case 7:
			return joaat("WEAPON_COMBATMG");
			break;
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		case 10:
			return joaat("WEAPON_ADVANCEDRIFLE");
			break;
		case 11:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 12:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		case 13:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 14:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
			break;
		case 15:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 16:
			return joaat("WEAPON_GRENADELAUNCHER");
			break;
		case 17:
			return joaat("WEAPON_RPG");
			break;
		case 18:
			return joaat("WEAPON_MINIGUN");
			break;
		case 19:
			return joaat("WEAPON_GRENADE");
			break;
		case 20:
			return joaat("WEAPON_STICKYBOMB");
			break;
		case 21:
			return joaat("WEAPON_PETROLCAN");
			break;
		case 22:
			return joaat("WEAPON_KNIFE");
			break;
		case 23:
			return joaat("WEAPON_BAT");
			break;
		case 24:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 25:
			return joaat("WEAPON_PISTOL");
			break;
		case 26:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 27:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 28:
			return joaat("WEAPON_COMBATMG");
			break;
		case 29:
			return joaat("WEAPON_UNARMED");
			break;
		case 30:
			return joaat("WEAPON_UNARMED");
			break;
		case 31:
			return joaat("WEAPON_UNARMED");
			break;
		case 32:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 33:
			return joaat("WEAPON_FLAREGUN");
			break;
		case 34:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 35:
			return joaat("WEAPON_CROWBAR");
			break;
		case 36:
			return joaat("WEAPON_PISTOL50");
			break;
		case 37:
			return joaat("WEAPON_COMBATMG");
			break;
		case 38:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 39:
			return joaat("WEAPON_NIGHTSTICK");
			break;
		case 40:
			return joaat("WEAPON_BULLPUPRIFLE");
			break;
		case 41:
			return joaat("WEAPON_PISTOL50");
			break;
		case 42:
			return joaat("WEAPON_HEAVYSHOTGUN");
			break;
		case 43:
			return joaat("WEAPON_PISTOL");
		case 44:
			return joaat("WEAPON_APPISTOL");
		case 45:
			return joaat("WEAPON_HOMINGLAUNCHER");
		case 46:
			return joaat("WEAPON_FLASHLIGHT");
		case 47:
			return joaat("WEAPON_MACHETE");
		case 48:
			return joaat("WEAPON_MACHINEPISTOL");
		case 49:
			return joaat("WEAPON_MARKSMANPISTOL");
		case 50:
			return joaat("WEAPON_HATCHET");
		case 51:
			return joaat("WEAPON_ASSAULTSMG");
		case 52:
			return joaat("WEAPON_RAILGUN");
		case 53:
			return joaat("WEAPON_GUSENBERG");
		case 54:
			return joaat("WEAPON_REVOLVER");
		case 55:
			return joaat("WEAPON_DBSHOTGUN");
		case 56:
			return joaat("WEAPON_COMPACTRIFLE");
		case 57:
			return joaat("WEAPON_AUTOSHOTGUN");
		case 58:
			return joaat("WEAPON_MINISMG");
		case 59:
			return joaat("WEAPON_COMPACTLAUNCHER");
		case 60:
			return joaat("WEAPON_BATTLEAXE");
		case 61:
			return joaat("WEAPON_PIPEBOMB");
		case 62:
			return joaat("WEAPON_POOLCUE");
		case 63:
			return joaat("WEAPON_WRENCH");
		case 64:
			return joaat("WEAPON_HAMMER");
		case 65:
			return joaat("WEAPON_GOLFCLUB");
		case 66:
			return joaat("WEAPON_BOTTLE");
		case 67:
			return joaat("WEAPON_DAGGER");
		case 68:
			return joaat("WEAPON_KNUCKLE");
		case 69:
			return joaat("WEAPON_SWITCHBLADE");
	}
	return joaat("WEAPON_UNARMED");
}

int func_872(int iParam0)//Position - 0x168ED5
{
	if (Global_4718592.f_658[Global_1836612 /*22957*/].f_65[iParam0] == -3 || Global_4718592.f_658[Global_1836612 /*22957*/].f_343[iParam0] == -3)
	{
		return 1;
	}
	return 0;
}

int func_873(int iParam0)//Position - 0x169256
{
	switch (iParam0)
	{
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_ASSAULTSMG"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_HEAVYRIFLE"):
		case joaat("WEAPON_ASSAULTMG"):
			return joaat("COMPONENT_AT_AR_FLSH");
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_REVOLVER_MK2"):
			return joaat("COMPONENT_AT_PI_FLSH");
		default:
	}
	return 0;
}

int func_874(int iParam0, int iParam1)//Position - 0x169330
{
	if (iParam1 > -1)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_SMG_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_SMG_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE");
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY");
					case 5:
						return 0;
					case 6:
						return joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ");
					default:
				}
				break;
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING");
					case 2:
						return joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE");
					case 3:
						return joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT");
					case 4:
						return joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY");
					case 5:
						return 0;
					case 6:
						return 0;
					default:
				}
				break;
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case 1:
						return joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING");
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY");
					case 5:
						return joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER");
					case 6:
						return joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ");
					default:
				}
				break;
		}
	}
	return 0;
}

int func_875(int iParam0, int iParam1)//Position - 0x169C62
{
	if (__LIB_18__::func_246(iParam0))
	{
		if (iParam1 > -1)
		{
			return Global_4980736.f_69361[iParam1 /*151*/].f_43;
		}
	}
	return -1;
}

int func_876(int iParam0)//Position - 0x169CAD
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			return 0;
		case joaat("WEAPON_SMG_MK2"):
			return 1;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 2;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 3;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 4;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 5;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 6;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 7;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 8;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 9;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 10;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 11;
		default:
	}
	return -1;
}

int func_877(int iParam0)//Position - 0x16A2B2
{
	if (iParam0 < 100)
	{
		return 1;
	}
	return 0;
}

int func_878(int iParam0)//Position - 0x16A3C5
{
	int iVar0;
	if ((iParam0 == joaat("WEAPON_STUNGUN") || iParam0 == joaat("WEAPON_STUNGUN_MP")) || iParam0 == joaat("GADGET_PARACHUTE"))
	{
		return 1;
	}
	if ((((iParam0 == joaat("WEAPON_GRENADE") || iParam0 == joaat("WEAPON_STICKYBOMB")) || iParam0 == joaat("WEAPON_SMOKEGRENADE")) || iParam0 == joaat("WEAPON_MOLOTOV")) || iParam0 == joaat("WEAPON_PETROLCAN"))
	{
		if (iParam0 == joaat("WEAPON_SMOKEGRENADE"))
		{
			iVar0 = 4;
		}
		else if (iParam0 == joaat("WEAPON_PETROLCAN"))
		{
			iVar0 = 800;
		}
		else if (__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 8;
		}
		return iVar0;
	}
	iVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, true) * 2;
	if (Global_1836577 == 1)
	{
		iVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, true) * 4;
		return iVar0;
	}
	if (iVar0 > 0)
	{
		return iVar0;
	}
	return iVar0;
}

void func_879(int iParam0, int iParam1, int iParam2)//Position - 0x16A72E
{
	WEAPON::SET_PED_WEAPON_COMPONENT_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, iParam2);
}

void func_880(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x16A744
{
	int iVar0;
	if (__LIB_18__::func_246(iParam0) && iParam1 != 0)
	{
		if (bParam2)
		{
			iVar0 = -1;
		}
		else if (iParam3 != -1)
		{
			iVar0 = iParam3;
		}
		else
		{
			iVar0 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, true) * 30;
		}
		WEAPON::ADD_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iParam1, iVar0);
	}
}

void func_881(int iParam0, int iParam1)//Position - 0x16A791
{
	WEAPON::SET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
}

void func_882(int iParam0)//Position - 0x16A808
{
	if (!BitTest(Global_4718592.f_35, 20))
	{
		Global_1574580 = iParam0;
	}
}

void func_883()//Position - 0x16B229
{
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), -1, false, false);
	__LIB_3__::func_340(PLAYER::PLAYER_ID(), Global_4718592.f_94870[Global_1836612], 0);
}

int func_884()//Position - 0x16CB3C
{
	if (__LIB_1__::func_150() || __LIB_1__::func_149())
	{
		return 0;
	}
	return 1;
}

int func_885(int iParam0)//Position - 0x16D384
{
	switch (*iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
	}
	return 0;
}

int func_886(int iParam0)//Position - 0x16D3C0
{
	switch (iParam0)
	{
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_STINGER"):
		case joaat("WEAPON_HOMINGLAUNCHER"):
		case joaat("WEAPON_RAILGUN"):
		case joaat("WEAPON_RAYMINIGUN"):
		case joaat("WEAPON_EMPLAUNCHER"):
		case joaat("WEAPON_FIREWORK"):
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 1;
		default:
	}
	return 0;
}

int func_887(int iParam0)//Position - 0x16D410
{
	switch (iParam0)
	{
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_MUSKET"):
		case joaat("WEAPON_DBSHOTGUN"):
		case joaat("WEAPON_AUTOSHOTGUN"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 1;
		default:
	}
	return 0;
}

int func_888(int iParam0)//Position - 0x16D49C
{
	switch (iParam0)
	{
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_RAYCARBINE"):
			return 1;
		default:
	}
	return 0;
}

int func_889(int iParam0)//Position - 0x16D4CE
{
	switch (iParam0)
	{
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_COMPACTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 1;
		default:
	}
	return 0;
}

int func_890(int iParam0)//Position - 0x16D51E
{
	switch (iParam0)
	{
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_ASSAULTSMG"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_COMBATPDW"):
		case joaat("WEAPON_MACHINEPISTOL"):
		case joaat("WEAPON_MINISMG"):
		case joaat("WEAPON_SMG_MK2"):
			return 1;
		default:
	}
	return 0;
}

int func_891()//Position - 0x16E7B6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (__LIB_12__::func_613(iVar0) == joaat("WEAPON_PISTOL") && iVar0 != 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 100;
}

void func_892(var uParam0, int iParam1)//Position - 0x16F099
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		switch (iParam1)
		{
			case 1:
				__LIB_1__::func_863(0);
				break;
			case 0:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			case 2:
				break;
			case 3:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_GALLERY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			case 7:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			case 4:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_WEAPONS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				break;
			}
	}
}

bool func_893()//Position - 0x16F504
{
	return Global_1836580 != 0;
}

void func_894(var uParam0, var uParam1)//Position - 0x16F593
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

char* func_895(int iParam0, bool bParam1, bool bParam2)//Position - 0x17246A
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "PWRUP_U_SHNT";
			}
			else if (bParam2)
			{
				return "PWRUP_SHNT_H";
			}
			else
			{
				return "PWRUP_SHNT";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "PWRUP_U_BMB";
			}
			else if (bParam2)
			{
				return "PWRUP_BMB_H";
			}
			else
			{
				return "PWRUP_BMB";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "PWRUP_U_REP";
			}
			else if (bParam2)
			{
				return "PWRUP_REP_H";
			}
			else
			{
				return "PWRUP_REP";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "PWRUP_U_GST";
			}
			else if (bParam2)
			{
				return "PWRUP_GST_H";
			}
			else
			{
				return "PWRUP_GST";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "PWRUP_U_RKT";
			}
			else if (bParam2)
			{
				return "PWRUP_RKT_H";
			}
			else
			{
				return "PWRUP_RKT";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "PWRUP_U_MK";
			}
			else if (bParam2)
			{
				return "PWRUP_MK_H";
			}
			else
			{
				return "PWRUP_MK";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "PWRUP_U_MSP";
			}
			else if (bParam2)
			{
				return "PWRUP_MSP_H";
			}
			else
			{
				return "PWRUP_MSP";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "PWRUP_U_ME";
			}
			else if (bParam2)
			{
				return "PWRUP_ME_H";
			}
			else
			{
				return "PWRUP_ME";
			}
			break;
		case 8:
			if (bParam1)
			{
				return "PWRUP_U_MSL";
			}
			else if (bParam2)
			{
				return "PWRUP_MSL_H";
			}
			else
			{
				return "PWRUP_MSL";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "PWRUP_U_TNK";
			}
			else if (bParam2)
			{
				return "PWRUP_TNK_H";
			}
			else
			{
				return "PWRUP_TNK";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "PWRUP_U_AMP";
			}
			else if (bParam2)
			{
				return "PWRUP_AMP_H";
			}
			else
			{
				return "PWRUP_AMP";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "PWRUP_U_SQCH";
			}
			else if (bParam2)
			{
				return "PWRUP_SQCH_H";
			}
			else
			{
				return "PWRUP_SQCH";
			}
			break;
	}
	return "";
}

void func_896(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x174556
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

int func_897(int iParam0)//Position - 0x174C88
{
	if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_898()//Position - 0x1752D5
{
	int iVar0;
	char* sVar1;
	if (!__LIB_0__::func_625() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
	sVar1 = "";
	switch (iVar0)
	{
		case 0:
			sVar1 = "ARANN_AAAC";
			break;
		case 1:
			sVar1 = "ARANN_KOAC";
			break;
		case 2:
			sVar1 = "ARANN_KPAC";
			break;
		case 3:
			sVar1 = "ARANN_KQAC";
			break;
		case 4:
			sVar1 = "ARANN_KRAC";
			break;
		case 5:
			sVar1 = "ARANN_ABAB";
			break;
		case 6:
			sVar1 = "ARANN_KSAB";
			break;
		case 7:
			sVar1 = "ARANN_KVAB";
			break;
		case 8:
			sVar1 = "ARANN_KXAB";
			break;
	}
	AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(sVar1, "ARENA_ANNOUNCE1", 2800f, -3800.2f, 179.5f, "SPEECH_PARAMS_FORCE_FRONTEND");
}

void func_899(int iParam0)//Position - 0x1758A6
{
	Global_2727744 = iParam0;
}

void func_900(bool bParam0)//Position - 0x1758DA
{
	if (bParam0)
	{
		if (!BitTest(Global_2789739, 11))
		{
			MISC::SET_BIT(&Global_2789739, 11);
		}
	}
	else if (BitTest(Global_2789739, 11))
	{
		MISC::CLEAR_BIT(&Global_2789739, 11);
	}
}

void func_901(int iParam0)//Position - 0x175913
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TeamId", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId"))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId", iParam0);
		}
	}
}

void func_902(bool bParam0)//Position - 0x175B38
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_LOOK_AT_TALKERS(bParam0);
	}
}

int func_903()//Position - 0x175B4D
{
	return joaat("prop_npc_phone");
}

void func_904(float fParam0)//Position - 0x17629A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(true);
	}
}

bool func_905(int iParam0)//Position - 0x176566
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1888862[iParam0 /*120*/].f_29, 17));
}

void func_906(var uParam0)//Position - 0x176589
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_38));
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_39));
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_40));
}

float func_907(int iParam0)//Position - 0x176C16
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("halftrack"):
				case joaat("granger"):
					fVar0 = -1.5f;
					break;
				case joaat("boxville5"):
					fVar0 = -2.5f;
					break;
				case joaat("monster3"):
				case joaat("monster4"):
				case joaat("monster5"):
					fVar0 = -4.5f;
					break;
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case joaat("bruiser3"):
				case joaat("brutus"):
				case joaat("brutus2"):
				case joaat("brutus3"):
					fVar0 = -1.5f;
					break;
				case joaat("dominator4"):
				case joaat("dominator5"):
				case joaat("dominator6"):
					fVar0 = -1f;
					break;
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case joaat("cerberus3"):
					fVar0 = -7.5f;
					break;
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger2"))
			{
				fVar0 = -1.5f;
			}
		}
	}
	return fVar0;
}

int func_908()//Position - 0x178016
{
	return 6000;
}

bool func_909()//Position - 0x179F08
{
	return Global_2714762.f_669.f_2;
}

void func_910(var uParam0, int iParam1)//Position - 0x179F4D
{
	uParam0->f_51.f_3 = iParam1;
}

int func_911(int iParam0)//Position - 0x17A1A5
{
	switch (*iParam0)
	{
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_POOLCUE"):
			return 1;
			break;
	}
	return 0;
}

int func_912(int iParam0)//Position - 0x17A1CF
{
	switch (*iParam0)
	{
		case joaat("WEAPON_GOLFCLUB"):
			return 1;
			break;
	}
	return 0;
}

int func_913(var uParam0)//Position - 0x17A2EF
{
	return uParam0->f_51.f_3;
}

void func_914(int iParam0)//Position - 0x17BFAD
{
	Global_2715699.f_3479.f_24 = iParam0;
}

int func_915(int iParam0)//Position - 0x180603
{
	switch (*iParam0)
	{
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 1;
			break;
	}
	return 0;
}

int func_916(int iParam0)//Position - 0x180627
{
	switch (*iParam0)
	{
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_917(int iParam0)//Position - 0x180651
{
	switch (*iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
			break;
	}
	return 0;
}

int func_918(int iParam0)//Position - 0x1806B7
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 1;
		default:
	}
	return 0;
}

int func_919(int iParam0)//Position - 0x1806D1
{
	switch (iParam0)
	{
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_HEAVYRIFLE"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_ASSAULTMG"):
		case joaat("WEAPON_ASSAULTSNIPER"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_MUSKET"):
		case joaat("WEAPON_AMRIFLE"):
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_COMBATPDW"):
		case joaat("WEAPON_DBSHOTGUN"):
		case joaat("WEAPON_COMPACTRIFLE"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_920(int iParam0)//Position - 0x18075A
{
	switch (iParam0)
	{
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_MACHINEPISTOL"):
			return 1;
		default:
	}
	return 0;
}

int func_921(var uParam0)//Position - 0x18EBC2
{
	char* sVar0;
	if (uParam0->f_124.f_422)
	{
		sVar0 = __LIB_18__::func_270(uParam0);
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
			if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
			{
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 1;
			}
		}
		MISC::SET_BIT(&(Global_1940663[1]), 8);
		return 0;
	}
	return 1;
}

var func_922(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x18ECB0
{
	switch (iParam1)
	{
		case 0:
			if (bParam3)
			{
				if (bParam6)
				{
					return __LIB_1__::func_601(uParam0[0 /*16*/]);
				}
				else
				{
					return __LIB_1__::func_601(uParam0[1 /*16*/]);
				}
			}
			else if (!bParam7)
			{
				if (bParam6)
				{
					return __LIB_1__::func_601(uParam0[2 /*16*/]);
				}
				else if (uParam2 || uParam5)
				{
					return __LIB_1__::func_601(uParam0[4 /*16*/]);
				}
				else if (bParam4)
				{
					return __LIB_1__::func_601(uParam0[5 /*16*/]);
				}
				else
				{
					return __LIB_1__::func_601(uParam0[3 /*16*/]);
				}
			}
			else if (bParam6)
			{
				return __LIB_1__::func_601(uParam0[6 /*16*/]);
			}
			else if (uParam2 || uParam5)
			{
				return __LIB_1__::func_601(uParam0[8 /*16*/]);
			}
			else if (bParam4)
			{
				return __LIB_1__::func_601(uParam0[9 /*16*/]);
			}
			else
			{
				return __LIB_1__::func_601(uParam0[7 /*16*/]);
			}
			break;
	}
	if (bParam8)
	{
		return __LIB_1__::func_601(uParam0[12 /*16*/]);
	}
	return __LIB_1__::func_601(uParam0[0 /*16*/]);
}

void func_923(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x18F35A
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 29:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("prototipo")), 1);
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 27:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("prototipo")), 1);
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 30:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("prototipo")), 1);
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							break;
					}
					break;
				case 7:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							break;
					}
					break;
				case 10:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							break;
					}
					break;
				case 11:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							break;
					}
					break;
				case 15:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							break;
					}
					break;
				case 25:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("raptor")), 1);
							break;
					}
					break;
				case 26:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("italigtb")), 1);
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("italigtb2")), 1);
							break;
					}
					break;
				case 5:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("italigtb")), 1);
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("italigtb2")), 1);
							break;
					}
					break;
				case 23:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 9:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 28:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("cheetah2")), 1);
							break;
					}
					break;
				case 42:
					switch (iParam3)
					{
						case 3:
							__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("slamtruck")), 1);
							break;
					}
					break;
			}
			switch (iParam3)
			{
				case 3:
					__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("formula")), 1);
					__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("formula2")), 1);
					__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("openwheel1")), 1);
					__LIB_18__::func_290(uParam2, __LIB_18__::func_291(joaat("openwheel2")), 1);
					break;
			}
			break;
	}
}

void func_924(char* sParam0, bool bParam1, float fParam2)//Position - 0x197759
{
	if (bParam1)
	{
		MISC::SET_OVERRIDE_WEATHEREX(sParam0, true);
	}
	else if (fParam2 > 0f)
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam0, fParam2);
	}
	else
	{
		MISC::SET_OVERRIDE_WEATHER(sParam0);
	}
}

int func_925()//Position - 0x197788
{
	if (BitTest(Global_4718592.f_162495, 19))
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_39, 20))
	{
		return 1;
	}
	return 0;
}

void func_926(int iParam0)//Position - 0x197B78
{
	switch (iParam0)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(6);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_CREATE_RANDOM_COPS(true);
			break;
		case 1:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(false);
			PED::SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(false);
			STREAMING::SET_DITCH_POLICE_MODELS(true);
			break;
		case 2:
			PLAYER::SET_MAX_WANTED_LEVEL(6);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			break;
		default:
			break;
	}
	if (__LIB_13__::func_605() && BitTest(Global_4718592.f_14, 21))
	{
		PED::SET_CREATE_RANDOM_COPS(false);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Security_01"), true);
	}
}

void func_927()//Position - 0x197BFB
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bVar0 = BitTest(Global_4718592.f_31, 21);
	bVar1 = BitTest(Global_4718592.f_31, 22);
	bVar2 = BitTest(Global_4718592.f_31, 23);
	bVar3 = BitTest(Global_4718592.f_31, 24);
	bVar4 = BitTest(Global_4718592.f_31, 25);
	bVar5 = BitTest(Global_4718592.f_31, 26);
	bVar6 = BitTest(Global_4718592.f_31, 27);
	bVar7 = BitTest(Global_4718592.f_31, 28);
	if (!__LIB_0__::func_157(0))
	{
		if ((((((bVar0 || bVar1) || bVar2) || bVar3) || bVar4) || bVar5) || bVar6)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, false, bVar6);
				if (bVar3)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
				}
			}
			if (bVar7)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar8, false))
					{
						ENTITY::SET_ENTITY_PROOFS(iVar8, bVar0, bVar1, bVar2, bVar3, bVar4, bVar5, false, bVar6);
					}
				}
			}
		}
	}
}

void func_928()//Position - 0x197E2D
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
		}
	}
}

void func_929(int iParam0)//Position - 0x197F82
{
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iParam0, 0);
}

void func_930(int iParam0, int iParam1)//Position - 0x197F95
{
	PLAYER::SET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID(), iParam1);
	if ((!Global_1836577 && !Global_1836575) && Global_1853348[PLAYER::PLAYER_ID() /*834*/] == -1)
	{
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), iParam0);
	}
	HUD::SET_MAX_ARMOUR_HUD_DISPLAY(iParam1);
}

int func_931(var uParam0)//Position - 0x19801C
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_161(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 737;
				break;
			case 1:
				return 738;
				break;
		}
	}
	return 13122;
}

void func_932(var uParam0)//Position - 0x1980EC
{
	Global_2703735.f_2399 = uParam0;
}

int func_933()//Position - 0x1980FD
{
	return 12000;
}

void func_934(int iParam0)//Position - 0x19B65A
{
	Global_2667225.f_45.f_305 = iParam0;
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_305);
	if (Global_2667225.f_45.f_305 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, false);
	}
}

void func_935(bool bParam0)//Position - 0x19C0B0
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	StringCopy(&cVar1, "", 64);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!bParam0)
		{
			if (iVar2 < Global_1660944)
			{
				if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iVar2 /*5*/].f_2))
				{
					if (Global_1660783[iVar2 /*5*/].f_2 != 0)
					{
						StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1660783[iVar2 /*5*/].f_2), 64);
						HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
					}
					PED::UNREGISTER_PEDHEADSHOT(Global_1660783[iVar2 /*5*/].f_2);
				}
			}
		}
		__LIB_1__::func_829(&(Global_1660783[iVar2 /*5*/]));
		iVar2++;
	}
	Global_1660944 = 0;
	Global_1660945 = 0;
}

int func_936(int iParam0)//Position - 0x19C5F0
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 2;
		case 16:
			return 2;
		case 17:
			return 2;
		case 18:
			return 3;
		case 19:
			return 3;
		case 20:
			return 3;
		case 21:
			return 3;
		case 22:
			return 3;
		case 23:
			return 3;
		case 24:
			return 3;
		case 25:
			return 3;
		case 26:
			return 3;
		case 27:
			return 3;
		case 28:
			return 3;
		case 29:
			return 4;
		case 30:
			return 4;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 4;
		case 37:
			return 4;
		case 38:
			return 4;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 5;
		case 43:
			return 5;
		case 44:
			return 5;
		case 45:
			return 5;
		case 46:
			return 5;
		case 47:
			return 5;
		case 48:
			return 6;
		case 49:
			return 6;
		case 50:
			return 6;
		case 51:
			return 6;
		case 52:
			return 6;
		case 53:
			return 6;
		case 54:
			return 6;
		case 55:
			return 6;
		case 56:
			return 6;
		case 57:
			return 6;
		case 58:
			return 6;
		case 59:
			return 6;
		case 60:
			return 7;
		case 61:
			return 7;
		case 62:
			return 7;
		case 63:
			return 7;
		case 64:
			return 7;
		case 65:
			return 7;
		case 66:
			return 7;
		case 67:
			return 7;
		case 68:
			return 7;
		case 69:
			return 8;
		case 70:
			return 8;
		case 71:
			return 8;
		case 72:
			return 8;
		case 73:
			return 8;
		case 74:
			return 8;
		case 75:
			return 8;
		case 76:
			return 9;
		case 77:
			return 9;
		case 78:
			return 9;
		case 79:
			return 9;
		default:
	}
	return -1;
}

char* func_937(int iParam0)//Position - 0x19C92B
{
	switch (iParam0)
	{
		case 0:
			return "RC_HEIST_1";
		case 1:
			return "RC_HEIST_2";
		case 2:
			return "RC_HEIST_3";
		case 3:
			return "RC_HEIST_4";
		case 4:
			return "RC_HEIST_5";
		case 5:
			return "RC_HEIST_6";
		case 6:
			return "RC_HEIST_7";
		case 7:
			return "RC_EXECUTIVE_1";
		case 8:
			return "RC_EXECUTIVE_2";
		case 9:
			return "RC_EXECUTIVE_3";
		case 10:
			return "RC_EXECUTIVE_4";
		case 11:
			return "RC_EXECUTIVE_5";
		case 12:
			return "RC_EXECUTIVE_6";
		case 13:
			return "RC_EXECUTIVE_7";
		case 14:
			return "RC_EXECUTIVE_8";
		case 15:
			return "RC_BUSINESS_1";
		case 16:
			return "RC_BUSINESS_2";
		case 17:
			return "RC_BUSINESS_3";
		case 18:
			return "RC_LOWRIDER_1";
		case 19:
			return "RC_LOWRIDER_2";
		case 20:
			return "RC_LOWRIDER_3";
		case 21:
			return "RC_LOWRIDER_4";
		case 22:
			return "RC_LOWRIDER_5";
		case 23:
			return "RC_LOWRIDER_6";
		case 24:
			return "RC_LOWRIDER_7";
		case 25:
			return "RC_LOWRIDER_8";
		case 26:
			return "RC_LOWRIDER_9";
		case 27:
			return "RC_LOWRIDER_10";
		case 28:
			return "RC_LOWRIDER_11";
		case 29:
			return "RC_BIKER_1";
		case 30:
			return "RC_BIKER_2";
		case 31:
			return "RC_BIKER_3";
		case 32:
			return "RC_BIKER_4";
		case 33:
			return "RC_BIKER_5";
		case 34:
			return "RC_BIKER_6";
		case 35:
			return "RC_BIKER_7";
		case 36:
			return "RC_BIKER_8";
		case 37:
			return "RC_BIKER_9";
		case 38:
			return "RC_BIKER_10";
		case 39:
			return "RC_BIKER_11";
		case 40:
			return "RC_BIKER_12";
		case 41:
			return "RC_BIKER_13";
		case 42:
			return "RC_IMPORT_EXPORT_1";
		case 43:
			return "RC_IMPORT_EXPORT_2";
		case 44:
			return "RC_IMPORT_EXPORT_3";
		case 45:
			return "RC_IMPORT_EXPORT_4";
		case 46:
			return "RC_IMPORT_EXPORT_5";
		case 47:
			return "RC_IMPORT_EXPORT_6";
		case 48:
			return "RC_GUNRUNNING_1";
		case 49:
			return "RC_GUNRUNNING_2";
		case 50:
			return "RC_GUNRUNNING_3";
		case 51:
			return "RC_GUNRUNNING_4";
		case 52:
			return "RC_GUNRUNNING_5";
		case 53:
			return "RC_GUNRUNNING_6";
		case 54:
			return "RC_GUNRUNNING_7";
		case 55:
			return "RC_GUNRUNNING_8";
		case 56:
			return "RC_GUNRUNNING_9";
		case 57:
			return "RC_GUNRUNNING_10";
		case 58:
			return "RC_GUNRUNNING_11";
		case 59:
			return "RC_GUNRUNNING_12";
		case 60:
			return "RC_SMUGGLER_1";
		case 61:
			return "RC_SMUGGLER_2";
		case 62:
			return "RC_SMUGGLER_3";
		case 63:
			return "RC_SMUGGLER_4";
		case 64:
			return "RC_SMUGGLER_5";
		case 65:
			return "RC_SMUGGLER_6";
		case 66:
			return "RC_SMUGGLER_7";
		case 67:
			return "RC_SMUGGLER_8";
		case 68:
			return "RC_SMUGGLER_9";
		case 69:
			return "RC_HEIST2_1";
		case 70:
			return "RC_HEIST2_2";
		case 71:
			return "RC_HEIST2_3";
		case 72:
			return "RC_HEIST2_4";
		case 73:
			return "RC_HEIST2_5";
		case 74:
			return "RC_HEIST2_6";
		case 75:
			return "RC_HEIST2_7";
		case 76:
			return "RC_ASSAULT_1";
		case 77:
			return "RC_ASSAULT_2";
		case 78:
			return "RC_ASSAULT_3";
		case 79:
			return "RC_ASSAULT_4";
		default:
	}
	return "";
}

void func_938()//Position - 0x19D783
{
	if (!BitTest(Global_1965531, 0))
	{
		MISC::SET_BIT(&Global_1965531, 0);
	}
}

void func_939()//Position - 0x19D79E
{
	Global_2727744 = -1;
}

void func_940(int iParam0)//Position - 0x19D8F9
{
	PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 9:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Global_152058.f_11);
				break;
			case 8:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Global_152138.f_11);
				break;
			default:
				if (iParam0 == -1)
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Global_1837161[PLAYER::PLAYER_ID()]);
				}
				break;
			}
	}
	switch (__LIB_0__::func_3())
	{
		case 0:
			switch (iParam0)
			{
				case 8:
					PLAYER::SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(PLAYER::PLAYER_ID(), Global_152138.f_1);
					break;
				default:
					PLAYER::SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(PLAYER::PLAYER_ID(), true);
					break;
			}
			break;
		default:
			switch (iParam0)
			{
				case 9:
					PLAYER::SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(PLAYER::PLAYER_ID(), Global_152058.f_1);
					break;
				case 8:
					PLAYER::SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(PLAYER::PLAYER_ID(), Global_152138.f_1);
					break;
			}
			break;
	}
}

int func_941()//Position - 0x19E2E5
{
	int iVar0;
	if (!__LIB_0__::func_998())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4718592.f_110280[iVar0] != 0 && STREAMING::IS_MODEL_VALID(Global_4718592.f_110280[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_942(var uParam0)//Position - 0x19E4C4
{
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
}

int func_943(int iParam0)//Position - 0x19E616
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_PISTOL");
			break;
		case 1:
			return joaat("WEAPON_COMBATPISTOL");
			break;
		case 2:
			return joaat("WEAPON_APPISTOL");
			break;
		case 3:
			return joaat("WEAPON_PISTOL50");
			break;
		case 4:
			return joaat("WEAPON_HEAVYPISTOL");
			break;
		case 5:
			return joaat("WEAPON_SNSPISTOL");
			break;
		case 6:
			return joaat("WEAPON_VINTAGEPISTOL");
			break;
		case 7:
			return joaat("WEAPON_FLAREGUN");
			break;
		case 8:
			return joaat("WEAPON_MARKSMANPISTOL");
			break;
		case 9:
			return joaat("WEAPON_PISTOL_MK2");
			break;
		case 10:
			return joaat("WEAPON_REVOLVER_MK2");
			break;
		case 11:
			return joaat("WEAPON_SNSPISTOL_MK2");
			break;
		case 12:
			return joaat("WEAPON_REVOLVER");
			break;
		case 13:
			return joaat("WEAPON_RAYPISTOL");
			break;
		case 14:
			return joaat("WEAPON_GADGETPISTOL");
			break;
		case 15:
			return joaat("WEAPON_MICROSMG");
			break;
		case 16:
			return joaat("WEAPON_SMG");
			break;
		case 17:
			return joaat("WEAPON_ASSAULTSMG");
			break;
		case 18:
			return joaat("WEAPON_COMBATPDW");
			break;
		case 19:
			return joaat("WEAPON_MINISMG");
			break;
		case 20:
			return joaat("WEAPON_MACHINEPISTOL");
			break;
		case 21:
			return joaat("WEAPON_SMG_MK2");
			break;
		case 22:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
		case 23:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		case 24:
			return joaat("WEAPON_ADVANCEDRIFLE");
			break;
		case 25:
			return joaat("WEAPON_BULLPUPRIFLE");
			break;
		case 26:
			return joaat("WEAPON_MARKSMANRIFLE");
			break;
		case 27:
			return joaat("WEAPON_COMPACTRIFLE");
			break;
		case 28:
			return joaat("WEAPON_GUSENBERG");
			break;
		case 29:
			return joaat("WEAPON_MUSKET");
			break;
		case 30:
			return joaat("WEAPON_RAYCARBINE");
			break;
		case 31:
			return joaat("WEAPON_SPECIALCARBINE");
			break;
		case 32:
			return joaat("WEAPON_ASSAULTRIFLE_MK2");
			break;
		case 33:
			return joaat("WEAPON_CARBINERIFLE_MK2");
			break;
		case 34:
			return joaat("WEAPON_COMBATMG_MK2");
			break;
		case 35:
			return joaat("WEAPON_BULLPUPRIFLE_MK2");
			break;
		case 36:
			return joaat("WEAPON_MARKSMANRIFLE_MK2");
			break;
		case 37:
			return joaat("WEAPON_SPECIALCARBINE_MK2");
			break;
		case 38:
			return joaat("WEAPON_MILITARYRIFLE");
			break;
		case 39:
			return joaat("WEAPON_MG");
			break;
		case 40:
			return joaat("WEAPON_COMBATMG");
			break;
		case 41:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 42:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
			break;
		case 43:
			return joaat("WEAPON_ASSAULTSHOTGUN");
			break;
		case 44:
			return joaat("WEAPON_BULLPUPSHOTGUN");
			break;
		case 45:
			return joaat("WEAPON_HEAVYSHOTGUN");
			break;
		case 46:
			return joaat("WEAPON_DBSHOTGUN");
			break;
		case 47:
			return joaat("WEAPON_AUTOSHOTGUN");
			break;
		case 48:
			return joaat("WEAPON_DOUBLEACTION");
			break;
		case 49:
			return joaat("WEAPON_PUMPSHOTGUN_MK2");
			break;
		case 50:
			return joaat("WEAPON_COMBATSHOTGUN");
			break;
		case 51:
			return joaat("WEAPON_SNIPERRIFLE");
			break;
		case 52:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		case 53:
			return joaat("WEAPON_HEAVYSNIPER_MK2");
			break;
		case 54:
			return joaat("WEAPON_GRENADELAUNCHER");
			break;
		case 55:
			return joaat("WEAPON_RPG");
			break;
		case 56:
			return joaat("WEAPON_MINIGUN");
			break;
		case 57:
			return joaat("WEAPON_RAYMINIGUN");
			break;
		case 58:
			return joaat("WEAPON_FIREWORK");
			break;
		case 59:
			return joaat("WEAPON_HOMINGLAUNCHER");
			break;
		case 60:
			return joaat("WEAPON_RAILGUN");
			break;
		case 61:
			return joaat("WEAPON_COMPACTLAUNCHER");
			break;
		case 62:
			return joaat("WEAPON_GRENADE");
			break;
		case 63:
			return joaat("WEAPON_SMOKEGRENADE");
			break;
		case 64:
			return joaat("WEAPON_STICKYBOMB");
			break;
		case 65:
			return joaat("WEAPON_MOLOTOV");
			break;
		case 66:
			return joaat("WEAPON_PROXMINE");
			break;
		case 67:
			return joaat("WEAPON_PIPEBOMB");
			break;
		case 68:
			return joaat("WEAPON_STUNGUN_MP");
			break;
		case 69:
			return joaat("WEAPON_PETROLCAN");
			break;
		case 70:
			return joaat("WEAPON_KNIFE");
			break;
		case 71:
			return joaat("WEAPON_NIGHTSTICK");
			break;
		case 72:
			return joaat("WEAPON_HAMMER");
			break;
		case 73:
			return joaat("WEAPON_BAT");
			break;
		case 74:
			return joaat("WEAPON_CROWBAR");
			break;
		case 75:
			return joaat("WEAPON_GOLFCLUB");
			break;
		case 76:
			return joaat("WEAPON_BOTTLE");
			break;
		case 77:
			return joaat("WEAPON_DAGGER");
			break;
		case 78:
			return joaat("WEAPON_KNUCKLE");
			break;
		case 79:
			return joaat("WEAPON_HATCHET");
			break;
		case 80:
			return joaat("WEAPON_MACHETE");
			break;
		case 81:
			return joaat("WEAPON_FLASHLIGHT");
			break;
		case 82:
			return joaat("WEAPON_SWITCHBLADE");
			break;
		case 83:
			return joaat("WEAPON_BATTLEAXE");
			break;
		case 84:
			return joaat("WEAPON_POOLCUE");
			break;
		case 85:
			return joaat("WEAPON_WRENCH");
			break;
		case 86:
			return joaat("WEAPON_STONE_HATCHET");
			break;
		case 87:
			return joaat("WEAPON_UNARMED");
			break;
		case 88:
			return joaat("WEAPON_FERTILIZERCAN");
			break;
		case 89:
			return joaat("WEAPON_EMPLAUNCHER");
			break;
		case 90:
			return joaat("WEAPON_TACTICALRIFLE");
			break;
		case 91:
			return joaat("WEAPON_PRECISIONRIFLE");
			break;
		case 92:
			return joaat("WEAPON_HEAVYRIFLE");
			break;
	}
	return joaat("WEAPON_PISTOL");
}

void func_944()//Position - 0x19F753
{
	Global_1888195 = 0;
}

void func_945(int iParam0)//Position - 0x19F8C1
{
	Global_1966059 = iParam0;
}

int func_946()//Position - 0x1A00DE
{
	if (Global_1966059 == 1)
	{
		return 1;
	}
	return 0;
}

int func_947()//Position - 0x1A0118
{
	if (Global_1965657[0] == 1)
	{
		return Global_1965654[0];
	}
	return -1;
}

void func_948(int iParam0)//Position - 0x1A05AD
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2815059.f_4660, 10))
		{
			MISC::SET_BIT(&(Global_2815059.f_4660), 10);
		}
	}
	else if (BitTest(Global_2815059.f_4660, 10))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 10);
	}
}

void func_949()//Position - 0x1A0690
{
	if (!BitTest(Global_1965532, 8))
	{
		MISC::SET_BIT(&Global_1965532, 8);
	}
}

int func_950(int iParam0, bool bParam1)//Position - 0x1A09D2
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case joaat("PICKUP_ARMOUR_STANDARD"):
				return 0;
			case joaat("PICKUP_HEALTH_STANDARD"):
				return joaat("WEAPON_UNARMED");
			case joaat("PICKUP_PARACHUTE"):
				return joaat("WEAPON_FALL");
			case joaat("PICKUP_CUSTOM_SCRIPT"):
				return joaat("WEAPON_COUGAR");
			case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
				return joaat("WEAPON_EXPLOSION");
			case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
				return joaat("WEAPON_EXPLOSION");
			case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT"):
				return joaat("VEHICLE_WEAPON_TORPEDO");
			default:
		}
		return OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(iParam0);
	}
	else
	{
		switch (iParam0)
		{
			case joaat("PICKUP_VEHICLE_WEAPON_PISTOL"):
				return joaat("WEAPON_PISTOL");
			case joaat("PICKUP_VEHICLE_WEAPON_COMBATPISTOL"):
				return joaat("WEAPON_COMBATPISTOL");
			case joaat("PICKUP_VEHICLE_WEAPON_APPISTOL"):
				return joaat("WEAPON_APPISTOL");
			case joaat("PICKUP_VEHICLE_WEAPON_MICROSMG"):
				return joaat("WEAPON_MICROSMG");
			case joaat("PICKUP_VEHICLE_WEAPON_SAWNOFF"):
				return joaat("WEAPON_SAWNOFFSHOTGUN");
			case joaat("PICKUP_VEHICLE_WEAPON_ASSAULTSMG"):
				return joaat("WEAPON_ASSAULTSMG");
			case joaat("PICKUP_VEHICLE_WEAPON_PISTOL50"):
				return joaat("WEAPON_PISTOL50");
			case joaat("PICKUP_VEHICLE_WEAPON_GRENADE"):
				return joaat("WEAPON_GRENADE");
			case joaat("PICKUP_VEHICLE_WEAPON_SMOKEGRENADE"):
				return joaat("WEAPON_SMOKEGRENADE");
			case joaat("PICKUP_VEHICLE_WEAPON_STICKYBOMB"):
				return joaat("WEAPON_STICKYBOMB");
			case joaat("PICKUP_VEHICLE_WEAPON_MOLOTOV"):
				return joaat("WEAPON_MOLOTOV");
			case joaat("PICKUP_WEAPON_PROXMINE"):
				return joaat("WEAPON_PROXMINE");
			case joaat("PICKUP_VEHICLE_HEALTH_STANDARD"):
				return 0;
			case joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW"):
				return 0;
			case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT"):
				return joaat("WEAPON_UNARMED");
			case joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT_LOW_GLOW"):
				return joaat("WEAPON_UNARMED");
			case joaat("PICKUP_WEAPON_DOUBLEACTION"):
				return joaat("WEAPON_DOUBLEACTION");
			case joaat("PICKUP_WEAPON_STONE_HATCHET"):
				return joaat("WEAPON_STONE_HATCHET");
			case joaat("PICKUP_WEAPON_FERTILIZERCAN"):
				return joaat("WEAPON_FERTILIZERCAN");
			}
		default:
	}
	return -1;
}

int func_951(int iParam0)//Position - 0x1A0B5A
{
	if ((((((iParam0 != joaat("PICKUP_ARMOUR_STANDARD") || iParam0 != joaat("PICKUP_HEALTH_STANDARD")) || iParam0 != joaat("PICKUP_PARACHUTE")) || iParam0 != joaat("PICKUP_CUSTOM_SCRIPT")) || iParam0 != joaat("PICKUP_VEHICLE_HEALTH_STANDARD")) || iParam0 != joaat("PICKUP_VEHICLE_HEALTH_STANDARD_LOW_GLOW")) || iParam0 != joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT"))
	{
		return 1;
	}
	return 0;
}

int func_952(int iParam0)//Position - 0x1A2867
{
	switch (iParam0)
	{
		case 0:
			return joaat("hei_prop_hst_usb_drive");
		default:
	}
	return 0;
}

int func_953(int iParam0)//Position - 0x1A2885
{
	switch (iParam0)
	{
		case 0:
			return joaat("h4_prop_h4_bolt_cutter_01a");
		case 1:
			return joaat("h4_prop_h4_bag_hook_01a");
		case 2:
			return joaat("prop_cs_duffel_01b");
		case 3:
			return joaat("prop_cs_envolope_01");
		case 4:
			return joaat("h4_prop_h4_card_hack_01a");
		case 5:
			return joaat("h4_prop_h4_keys_jail_01a");
		case 6:
			return joaat("h4_prop_h4_codes_01a");
		case 7:
			return joaat("h4_prop_h4_securitycard_01a");
		default:
	}
	return 0;
}

int func_954(int iParam0)//Position - 0x1A2905
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_cs_duffel_01");
		case 1:
			return joaat("hei_prop_heist_binbag");
		default:
	}
	return joaat("prop_cs_duffel_01");
}

int func_955(struct<3> Param0, int iParam1, int iParam2, float fParam3, int iParam4)//Position - 0x1A2978
{
	STREAMING::REQUEST_MODEL(iParam1);
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
	}
	return OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT_LOW_GLOW"), Param0, 0f, 0f, fParam3, iParam2, iParam4, 2, true, iParam1);
}

int func_956()//Position - 0x1A2D95
{
	return joaat("prop_mp_repair");
}

int func_957()//Position - 0x1A2E27
{
	return joaat("gr_prop_gr_rsply_crate01a");
}

int func_958()//Position - 0x1A2FC9
{
	return joaat("prop_tyre_spike_01");
}

bool func_959(int iParam0)//Position - 0x1AD1CA
{
	return __LIB_19__::func_151(iParam0) != 0;
}

void func_960(bool bParam0)//Position - 0x1AD2AE
{
	if (bParam0)
	{
		if (Global_2621442 == 0)
		{
			Global_2621442 = 1;
		}
	}
	else if (Global_2621442 == 1)
	{
		Global_2621442 = 0;
	}
}

void func_961(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1AE419
{
	GRAPHICS::DRAW_POLY(Param0, Param1, Param2, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param0, Param2, Param3, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param2, Param1, Param0, iParam4, iParam5, iParam6, iParam7);
	GRAPHICS::DRAW_POLY(Param3, Param2, Param0, iParam4, iParam5, iParam6, iParam7);
}

float func_962(float fParam0, float fParam1, float fParam2)//Position - 0x1AF965
{
	fParam0 = __LIB_0__::func_331(fParam0, -fParam1, fParam1);
	fParam0 = __LIB_0__::func_373((fParam0 > fParam2 || fParam0 < -fParam2), fParam0, 0f);
	return fParam0;
}

int func_963(int iParam0)//Position - 0x1AF996
{
	if (iParam0 != 0 && !__LIB_2__::func_624(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_964(bool bParam0)//Position - 0x1AFB6D
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 16))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 16);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2, 16))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_2), 16);
	}
}

void func_965()//Position - 0x1AFDF7
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 139 /*INPUT_VEH_PUSHBIKE_REAR_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 331 /*INPUT_VEH_FLY_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
	MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f, 0);
}

void func_966(var uParam0, int iParam1)//Position - 0x1AFE50
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam1) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam1))
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
	}
	else if (iParam1 == joaat("avenger"))
	{
		fVar0 = 1.25f;
		fVar1 = 1.5f;
		fVar2 = 1.25f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
	{
		fVar0 = 1f;
		fVar1 = 1f;
		fVar2 = 1f;
	}
	else if (iParam1 == joaat("thruster"))
	{
		fVar0 = 0f;
		fVar1 = 0.2f;
		fVar2 = 0.125f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))
	{
		fVar0 = 0f;
		fVar1 = 1f;
		fVar2 = 1f;
	}
	else if (iParam1 == joaat("tug"))
	{
		fVar0 = 0f;
		fVar1 = 1f;
		fVar2 = 2.5f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam1))
	{
		fVar0 = 0f;
		fVar1 = 1f;
		fVar2 = 1f;
	}
	else
	{
		fVar0 = 0f;
		fVar1 = 1f;
		fVar2 = 1f;
	}
	if (fVar0 != 0f)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "wings", fVar0, false);
	}
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "width", fVar1, false);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(*uParam0, "length", fVar2, false);
}

int func_967()//Position - 0x1B06D3
{
	float fVar0;
	struct<3> Var1;
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar0, true, false))
	{
		if ((Var1.f_2 - fVar0) > 7.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_968(int iParam0)//Position - 0x1B0AFB
{
	if ((iParam0 == joaat("veto") || iParam0 == joaat("veto2")) || iParam0 == joaat("minitank"))
	{
		return 1;
	}
	return 0;
}

void func_969(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x1B0C82
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 24, 31);
	*iParam2 = MISC::GET_BITS_IN_RANGE(iParam0, 16, 23);
	*iParam3 = MISC::GET_BITS_IN_RANGE(iParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 7);
}

int func_970(var uParam0)//Position - 0x1B2460
{
	return uParam0->f_47.f_1062;
}

void func_971(var uParam0, int iParam1)//Position - 0x1B246F
{
	int iVar0;
	uParam0->f_47.f_1012[uParam0->f_47.f_1045] = iParam1;
	uParam0->f_47.f_1045++;
	if (uParam0->f_47.f_1045 >= 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2621446.f_9[iVar0] != uParam0->f_47.f_1012[iVar0])
			{
				__LIB_10__::func_324();
			}
			Global_2621446.f_9[iVar0] = uParam0->f_47.f_1012[iVar0];
			uParam0->f_47.f_1012[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_47.f_1045 = 0;
	}
}

var func_972(var uParam0)//Position - 0x1B252B
{
	return uParam0->f_47.f_1045;
}

int func_973(var uParam0, int iParam1)//Position - 0x1EC749
{
	if (iParam1 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 1) && !__LIB_3__::func_234(PLAYER::PLAYER_ID(), iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		return 0;
	}
	return 1;
}

void func_974(int iParam0)//Position - 0x2D7165
{
	int iVar0;
	MISC::SET_BIT(&Global_2788033, 10);
	iVar0 = Global_2787947.f_74;
	if (iVar0 >= 4)
	{
		return;
	}
	Global_2787947.f_74.f_1[iVar0] = iParam0;
	Global_2787947.f_74++;
}

void func_975()//Position - 0x2D71A4
{
	MISC::SET_BIT(&Global_2788033, 10);
	Global_2787947.f_74 = 0;
}

void func_976(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2D7266
{
	MISC::SET_BIT(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 2;
	Global_2787947.f_8 = iParam0;
	Global_2787947.f_8.f_2 = iParam3;
	Global_2787947.f_8.f_3 = iParam2;
	Global_2787947.f_8.f_4 = iParam4;
	Global_2787947.f_16 = iParam1;
}

bool func_977()//Position - 0x2D72D9
{
	return (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_1__::func_133(Global_4718592.f_168757));
}

void func_978(struct<3> Param0)//Position - 0x2D73E6
{
	MISC::SET_BIT(&Global_2788033, 9);
	Global_2787947.f_71 = { Param0 };
}

int func_979(int iParam0)//Position - 0x2D7404
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (BitTest(iParam0, 0))
		{
			return iVar0;
		}
		iParam0 = SYSTEM::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return -1;
}

var func_980()//Position - 0x2D743F
{
	int iVar0;
	var uVar1[4];
	float fVar2[4];
	float fVar3;
	float fVar4;
	MISC::SET_BIT(&(uVar1[0]), 0);
	fVar2[0] = 1.5f;
	MISC::SET_BIT(&(uVar1[1]), 1);
	fVar2[1] = 1.3f;
	MISC::SET_BIT(&(uVar1[2]), 2);
	fVar2[2] = 1.2f;
	MISC::SET_BIT(&(uVar1[3]), 0);
	MISC::SET_BIT(&(uVar1[3]), 1);
	MISC::SET_BIT(&(uVar1[3]), 2);
	fVar2[3] = 1f;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		fVar3 = (fVar3 + fVar2[iVar0]);
		iVar0++;
	}
	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar3);
	fVar3 = 0f;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		fVar3 = (fVar3 + fVar2[iVar0]);
		if (fVar4 <= fVar3)
		{
		}
		else
		{
			iVar0++;
		}
	}
	return uVar1[iVar0];
}

int func_981(int iParam0, int iParam1, int iParam2)//Position - 0x2D7520
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_2680265.f_1399)
	{
		if ((Global_2680265.f_1399[iVar0 /*3*/].f_1 == iParam0 && Global_2680265.f_1399[iVar0 /*3*/].f_2 == iParam1) && Global_2680265.f_1399[iVar0 /*3*/] == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_982(var uParam0, bool bParam1, int iParam2)//Position - 0x2D7581
{
	return ((*uParam0)[bParam1] != 0 && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET((*uParam0)[bParam1], -iParam2)));
}

int func_983(bool bParam0, float fParam1, float fParam2)//Position - 0x2D75AB
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(Global_2788036.f_1[bParam0], false) };
	fVar2 = (Var0.f_2 - Var1.f_2);
	if (fVar2 >= -1.5f && fVar2 <= 5.5f)
	{
		*fParam2 = SYSTEM::VMAG(Var0 - Var1);
		return *fParam2 <= fParam1;
	}
	return 0;
}

void func_984(var uParam0)//Position - 0x2D7C05
{
	*uParam0 = (*uParam0 + 1 % Global_2788036);
}

void func_985(bool bParam0)//Position - 0x2D7C1A
{
	int iVar0;
	char* sVar1;
	if (!Global_2788182 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		Global_2788182 = 1;
		iVar0 = __LIB_0__::func_253(24889, -1);
		if (iVar0 < 3)
		{
			if (bParam0)
			{
				sVar1 = "ACT_HELP_P" /* GXT: Gun Towers ~HUD_COLOUR_YELLOW~~BLIP_ARENA_TURRET~~s~ are now online, drive under a tower for the chance to use machine guns, homing missiles or piloted missile. */;
			}
			else
			{
				sVar1 = "ACT_HELP_S" /* GXT: The Gun Tower ~HUD_COLOUR_YELLOW~~BLIP_ARENA_TURRET~~s~ is now online, drive under the tower for the chance to use machine guns, homing missiles or piloted missile. */;
			}
			__LIB_0__::func_151(sVar1, 10000);
			__LIB_1__::func_379(24889, iVar0 + 1, -1);
		}
	}
}

void func_986(var uParam0, int iParam1)//Position - 0x2D7C74
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_15[iParam1]))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_15[iParam1]));
	}
}

bool func_987(struct<27> Param0, var uParam1)//Position - 0x2D7E42
{
	return (BitTest(Param0.f_13, 0) || (__LIB_0__::func_864(&(Param0.f_26)) && !__LIB_0__::func_937(&(Param0.f_26), 2000, 0)));
}

int func_988(int iParam0)//Position - 0x2D7E70
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iParam0)
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 != joaat("rcbandito"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_989(var uParam0)//Position - 0x2D7F3B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_15[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_15[iVar0]));
		}
		iVar0++;
	}
}

int func_990()//Position - 0x2D7F71
{
	return Global_2788036;
}

void func_991(bool bParam0, var uParam1, int* iParam2)//Position - 0x2D8220
{
	MISC::CLEAR_BIT(&(uParam1->f_68), bParam0);
	MISC::CLEAR_BIT(&(uParam1->f_67), bParam0);
	__LIB_0__::clearF_1Prop(&(uParam1->f_335[bParam0 /*2*/]));
	__LIB_0__::clearF_1Prop(&(uParam1->f_2[bParam0 /*2*/]));
	if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || __LIB_0__::func_157(0)) || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		MISC::CLEAR_BIT(&(iParam2->f_1), bParam0);
		MISC::CLEAR_BIT(&(iParam2->f_1), bParam0);
		MISC::CLEAR_BIT(&(iParam2->f_1), bParam0);
	}
}

int func_992(int iParam0)//Position - 0x2D8314
{
	return Global_4980736.f_63312[iParam0 /*183*/].f_41 * 1000;
}

int func_993(int* iParam0)//Position - 0x2D8601
{
	if ((ENTITY::IS_ENTITY_DEAD(*iParam0, false) || ENTITY::GET_ENTITY_HEALTH(*iParam0) < 1) || !ENTITY::IS_ENTITY_VISIBLE(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_994(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2D8A64
{
	if (uParam0->f_666[iParam1] == -1)
	{
		uParam0->f_666[iParam1] = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_666[iParam1], sParam3, iParam2, sParam4, false, 0);
	}
}

void func_995(int iParam0)//Position - 0x2D8D64
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1136672596;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = __LIB_1__::func_705(PLAYER::INT_TO_PLAYERINDEX(iParam0));
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_996(int iParam0)//Position - 0x2D8DF3
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 19);
}

char* func_997(int iParam0)//Position - 0x2D8E15
{
	if (((iParam0 == joaat("xs_prop_arena_pit_fire_01a") || iParam0 == joaat("xs_prop_arena_pit_fire_01a_wl")) || iParam0 == joaat("xs_prop_arena_pit_fire_02a")) || iParam0 == joaat("xs_prop_arena_pit_fire_02a_wl"))
	{
		return "DLC_AW_Trap_Fire_Pit_Small_Sounds";
	}
	if (((iParam0 == joaat("xs_prop_arena_pit_fire_03a") || iParam0 == joaat("xs_prop_arena_pit_fire_03a_wl")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a_wl"))
	{
		return "DLC_AW_Trap_Fire_Pit_Large_Sounds";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_01a_sf") || iParam0 == joaat("xs_prop_arena_pit_fire_02a_sf"))
	{
		return "DLC_AW_Trap_Electro_Pit_Small_Sounds";
	}
	if (iParam0 == joaat("xs_prop_arena_pit_fire_03a_sf") || iParam0 == joaat("xs_prop_arena_pit_fire_04a_sf"))
	{
		return "DLC_AW_Trap_Electro_Pit_Large_Sounds";
	}
	return "INVALID";
}

int func_998()//Position - 0x2D9156
{
	if (BitTest(Global_4718592.f_32, 23))
	{
		return 0;
	}
	return 1;
}

void func_999(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2D91F2
{
	if (uParam0->f_633[iParam1] == -1)
	{
		uParam0->f_633[iParam1] = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_633[iParam1], sParam3, iParam2, sParam4, false, 0);
	}
}
