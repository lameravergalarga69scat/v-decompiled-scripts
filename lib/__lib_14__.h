bool func_0()//Position - 0x2A95F
{
	return __LIB_0__.func_137(32318, -1);
}

void func_1(int iParam0, int iParam1, int iParam2)//Position - 0x2D3B6
{
	int iVar0;
	var uVar1;
	var uVar2;
	iVar0 = Local_220[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_220[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_220[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_220[iParam0 /*21*/].f_19++;
}

void func_2(int iParam0, int iParam1, int iParam2)//Position - 0x2D451
{
	int iVar0;
	var uVar1;
	iVar0 = Local_219[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_219[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_219[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_219[iParam0 /*20*/].f_19++;
}

int func_3()//Position - 0x2D5E4
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	if (iVar0 != -1)
	{
		return Global_1888617.f_1[iVar0 /*15*/].f_6;
	}
	return -1;
}

int func_4()//Position - 0x2D608
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	if (iVar0 != -1)
	{
		return Global_1888617.f_1[iVar0 /*15*/].f_5;
	}
	return -1;
}

void func_5(int iParam0)//Position - 0x316F4
{
	if (HUD::DOES_BLIP_EXIST(Local_292[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_292[iParam0 /*7*/]));
	}
}

int func_6(int iParam0)//Position - 0x8EDA1
{
	if (Global_1965458)
	{
		switch (Global_1585857[iParam0 /*142*/].f_66)
		{
			case joaat("avenger"):
			case joaat("terbyte"):
				return 0;
				break;
			}
	}
	if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 276 && func_207(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	return 1;
}

int func_7(struct<3> Param0)//Position - 0x9D9A3
{
	if (__LIB_5__.func_693(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !func_76(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_8()//Position - 0xB2E7C
{
	if (Local_215.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_215.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_9()//Position - 0xB2E9F
{
	if (Local_215.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_215.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_10()//Position - 0xB315D
{
	if (Local_215.f_15.f_2 != 0)
	{
		Call_Loc(Local_215.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_11()//Position - 0xB3245
{
	if (Local_215.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_215.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_12()//Position - 0xB3354
{
	if (Local_215.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_215.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_13()//Position - 0xB35D0
{
	if (Local_215.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_215.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_14()//Position - 0xB36CF
{
	if (Local_215.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_215.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_15()//Position - 0xB36F4
{
	if (Local_215.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_215.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_16()//Position - 0xB3717
{
	if (Local_215.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_215.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

int func_17()//Position - 0xB3775
{
	if (Local_215.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_215.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_18()//Position - 0xB3798
{
	if (Local_215.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_215.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_19()//Position - 0xB37BB
{
	if (Local_215.f_15.f_6 != 0)
	{
		Call_Loc(Local_215.f_15.f_6);
		return StackVal;
	}
	return 0;
}

float func_20()//Position - 0xB5787
{
	return 250f;
}

int func_21()//Position - 0xB939D
{
	return 143;
}

void func_22()//Position - 0xBBC93
{
	Local_306.f_0 = 0;
	Local_306.f_2 = 0;
	Local_306.f_1 = 0;
	__LIB_0__.func_579(&(Local_306.f_3));
}

void func_23(int iParam0)//Position - 0xBE463
{
	if (HUD::DOES_BLIP_EXIST(Local_313.f_1[iParam0 /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_313.f_1[iParam0 /*4*/].f_1));
	}
}

void func_24()//Position - 0xBF5C2
{
	Local_303.f_0++;
}

bool func_25(int iParam0)//Position - 0xC1C1E
{
	return Local_292[iParam0 /*7*/].f_4 != __LIB_0__.func_160();
}

int func_26(int iParam0, int iParam1)//Position - 0xC1F8A
{
	if (!__LIB_0__.func_285(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_77.f_42, iParam1);
}

void func_27()//Position - 0xC359B
{
	if (Local_303.f_0 > Local_303.f_1)
	{
		Local_303.f_1 = Local_303.f_0;
	}
	Local_303.f_0 = 0;
}

void func_28(int iParam0, int iParam1)//Position - 0xC8C1E
{
	Local_220[iParam0 /*21*/].f_17 = iParam1;
}

void func_29(int iParam0, int iParam1)//Position - 0xC8C91
{
	Local_220[iParam0 /*21*/].f_18 = iParam1;
}

void func_30(int iParam0, int iParam1)//Position - 0xC9250
{
	Local_219[iParam0 /*20*/].f_17 = iParam1;
}

void func_31(int iParam0, int iParam1)//Position - 0xC9315
{
	Local_219[iParam0 /*20*/].f_18 = iParam1;
}

bool func_32()//Position - 0xC94FB
{
	return (Local_303.f_0 == 0 && Local_303.f_1 > 0);
}

void func_33(int iParam0, var uParam1, int iParam2)//Position - 0xCAC38
{
	int iVar0;
	var uVar1;
	iVar0 = Local_220[iParam0 /*21*/].f_19;
	uVar1 = uParam1;
	Local_220[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_220[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_220[iParam0 /*21*/].f_19++;
}

void func_34(int iParam0, int iParam1)//Position - 0xCAC98
{
	int iVar0;
	var uVar1;
	iVar0 = Local_220[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_220[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_220[iParam0 /*21*/].f_19++;
}

char* func_35(var uParam0, int iParam1)//Position - 0x2562B
{
	switch (iParam1)
	{
		case 0:
			return "RE_DrugVehicle_1";
		case 1:
			return "RE_DrugVehicle_2";
		case 2:
			return "RE_DrugVehicle_3";
		case 3:
			return "RE_DrugVehicle_4";
		case 4:
			return "RE_DrugVehicle_5";
		case 5:
			return "RE_DrugVehicle_6";
		case 6:
			return "RE_DrugVehicle_7";
		case 7:
			return "RE_DrugVehicle_8";
		case 8:
			return "RE_DrugVehicle_9";
		case 9:
			return "RE_DrugVehicle_10";
		case 10:
			return "RE_DrugVehicle_11";
		case 11:
			return "RE_DrugVehicle_12";
		case 12:
			return "RE_DrugVehicle_13";
		case 13:
			return "RE_DrugVehicle_14";
		case 14:
			return "RE_DrugVehicle_15";
		case 15:
			return "RE_DrugVehicle_16";
		case 16:
			return "RE_DrugVehicle_17";
		case 17:
			return "RE_DrugVehicle_18";
		case 18:
			return "RE_DrugVehicle_19";
		case 19:
			return "RE_DrugVehicle_20";
		case 20:
			return "RE_DrugVehicle_21";
		case 21:
			return "RE_DrugVehicle_22";
		case 22:
			return "RE_DrugVehicle_23";
		case 23:
			return "RE_DrugVehicle_24";
		case 24:
			return "RE_DrugVehicle_25";
		case 25:
			return "RE_DrugVehicle_26";
		case 26:
			return "RE_DrugVehicle_27";
		case 27:
			return "RE_DrugVehicle_28";
		case 28:
			return "RE_DrugVehicle_29";
		case 29:
			return "RE_DrugVehicle_30";
		default:
	}
	return "";
}

void func_36(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, float fParam5)//Position - 0x25FB6
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, iParam1, bParam2, bParam3);
	VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, iParam1, iParam4, fParam5);
}

int func_37(int iParam0)//Position - 0x1DA6
{
	if ((__LIB_13__.func_966(iParam0, 10) && func_81(iParam0, 8)) && !__LIB_13__.func_966(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x28D1
{
	if (__LIB_13__.func_964(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

var func_39(int iParam0)//Position - 0x2BE9
{
	return Local_195.f_38.f_86[Local_195.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_40(int iParam0)//Position - 0x2C61
{
	if (__LIB_13__.func_964(22))
	{
		return 1;
	}
	return 0;
}

bool func_41(int iParam0, int iParam1)//Position - 0x38B1
{
	return __LIB_9__.func_807(&(Local_195.f_130.f_1[iParam0 /*15*/]), iParam1);
}

int func_42(int iParam0, int iParam1)//Position - 0x5312
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
		if (BitTest(Local_195.f_130.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_43(int iParam0, int iParam1)//Position - 0x556F
{
	if (Local_195.f_130.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_195.f_130.f_1[iParam0 /*15*/].f_8, Local_195.f_130.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_195.f_130.f_1[iParam0 /*15*/].f_8, Local_195.f_130.f_1[iParam0 /*15*/].f_8);
	}
}

int func_44()//Position - 0x21F08
{
	int iVar0;
	iVar0 = (iVar0 + __LIB_13__.func_965());
	return iVar0;
}

bool func_45()//Position - 0x21FFD
{
	return __LIB_13__.func_964(0);
}

char* func_46(var uParam0)//Position - 0x25511
{
	return "SM2WBAU";
}

char* func_47(var uParam0, var uParam1)//Position - 0x25537
{
	return "SM2_WBOSS1";
}

int func_48(var uParam0)//Position - 0x25543
{
	return 184;
}

int func_49(int iParam0)//Position - 0x26C98
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/] > 0 && Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/] <= 22)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_50(int iParam0, int iParam1)//Position - 0x26E06
{
	int iVar0;
	if (__LIB_2__.func_141(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1853348[iParam1 /*834*/].f_267.f_114[iVar0 /*3*/])
			{
				return Global_1853348[iParam1 /*834*/].f_267.f_114[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_51(int iParam0, int iParam1)//Position - 0x280DC
{
	if (__LIB_1__.func_101(&(Local_195.f_130.f_1[iParam0 /*15*/]), iParam1))
	{
	}
}

void func_52(int iParam0)//Position - 0x34676
{
	int iVar0;
	switch (__LIB_13__.func_968())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iVar0, true);
			break;
	}
}

int func_53(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)//Position - 0x3469F
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (__LIB_13__.func_968())
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

Vector3 func_54(int iParam0, int iParam1)//Position - 0x34708
{
	switch (__LIB_13__.func_968())
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

float func_55(int iParam0)//Position - 0xC5655
{
	switch (iParam0)
	{
		case 748:
		case 749:
		case 747:
		case 750:
			return 5f;
			break;
		case 796:
		case 800:
		case 802:
		case 798:
			return 2.5f;
			break;
		case 770:
			return 7f;
			break;
	}
	return 10f;
}

int func_56(int iParam0)//Position - 0xC667B
{
	return Local_195.f_38.f_86[Local_195.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

bool func_57(int iParam0)//Position - 0xD0D6E
{
	return (VEHICLE::IS_THIS_MODEL_A_HELI(Local_195.f_130.f_1[Local_195.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_195.f_130.f_1[Local_195.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3));
}

float func_58(int iParam0)//Position - 0xD0E5B
{
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_195.f_130.f_1[Local_195.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_3))
	{
		return 100f;
	}
	return 30f;
}

Vector3 func_59(int iParam0)//Position - 0xD1F13
{
	struct<3> Var0;
	Var0 = { Local_195.f_130.f_1[Local_195.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
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

bool func_60()//Position - 0xDC1D7
{
	return __LIB_13__.func_965() > 0;
}

char* func_61(var uParam0, int iParam1)//Position - 0x23681
{
	switch (iParam1)
	{
		case 0:
			return "RE_Golden_Gun_1";
		case 1:
			return "RE_Golden_Gun_2";
		case 2:
			return "RE_Golden_Gun_3";
		case 3:
			return "RE_Golden_Gun_4";
		case 4:
			return "RE_Golden_Gun_5";
		case 5:
			return "RE_Golden_Gun_6";
		case 6:
			return "RE_Golden_Gun_7";
		case 7:
			return "RE_Golden_Gun_8";
		case 8:
			return "RE_Golden_Gun_9";
		case 9:
			return "RE_Golden_Gun_10";
		default:
	}
	return "";
}

int func_62(int iParam0)//Position - 0x23CD7
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 17);
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x29F8
{
	if (__LIB_13__.func_818(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_64(int iParam0)//Position - 0xEBB2
{
	if (!__LIB_0__.func_114() && func_312(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_65()//Position - 0x2289B
{
	return __LIB_13__.func_818(0);
}

char* func_66(int iParam0, int iParam1)//Position - 0x26B15
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Hack_Plane_1";
		case 1:
			return "Sum2_Hack_Plane_2";
		case 2:
			return "Sum2_Hack_Plane_3";
		case 3:
			return "Sum2_Ocean_Drop_1";
		case 4:
			return "Sum2_Ocean_Drop_2";
		case 5:
			return "Sum2_Ocean_Drop_3";
		default:
	}
	return "";
}

char* func_67(var uParam0)//Position - 0x2779B
{
	return "SM2AGAU";
}

char* func_68(var uParam0, var uParam1)//Position - 0x278A1
{
	return "AGENT14" /* GXT: Agent 14 */;
}

int func_69(var uParam0)//Position - 0x278AD
{
	return 76;
}

int func_70(int iParam0)//Position - 0x28B70
{
	char cVar0[64];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY1_v0", 64);
			break;
		case 2:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY2_v0", 64);
			break;
		case 3:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY3_v0", 64);
			break;
		case 4:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY4_v0", 64);
			break;
		case 5:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY5_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

float func_71(int iParam0)//Position - 0x2D059
{
	return 25f;
}

void func_72(int iParam0, int iParam1)//Position - 0x2EBC5
{
	if (__LIB_1__.func_101(&(Local_196.f_38.f_1[iParam0 /*21*/]), iParam1))
	{
	}
}

void func_73(int iParam0)//Position - 0x2EC0F
{
	if (__LIB_1__.func_101(&(Local_196.f_16), iParam0))
	{
	}
}

int func_74(int iParam0, int iParam1)//Position - 0x301F1
{
	if (iParam0 > 2)
	{
		return 0;
	}
	if ((*iParam1)[iParam0] == 2)
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)//Position - 0x30212
{
	if (iParam0 > 2)
	{
		return 0;
	}
	return (*iParam1)[iParam0];
}

int func_76(var uParam0)//Position - 0x30FF0
{
	return 556;
}

char* func_77()//Position - 0x3C5CC
{
	return "RHP_BLIP_SUPP" /* GXT: Supplies */;
}

int func_78(int iParam0)//Position - 0x983DC
{
	if (Global_1965458)
	{
		switch (Global_1585857[iParam0 /*142*/].f_66)
		{
			case joaat("avenger"):
			case joaat("terbyte"):
				return 0;
				break;
			}
	}
	if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 276 && func_270(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	return 1;
}

int func_79(struct<3> Param0)//Position - 0xA6F2B
{
	if (__LIB_1__.func_82(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !func_86(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0, int iParam1)//Position - 0xD9915
{
	if (iParam0 > (__LIB_13__.func_440() - 1))
	{
		return 0;
	}
	if ((*iParam1)[iParam0] == 3 || (*iParam1)[iParam0] == 2)
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)//Position - 0xD994A
{
	if (iParam0 > (__LIB_13__.func_440() - 1))
	{
		return 0;
	}
	return (*iParam1)[iParam0];
}

int func_82(var uParam0)//Position - 0xFAD46
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 13)
	{
		return Global_262145.f_31827[iVar0];
	}
	return 100;
}

int func_83(int iParam0)//Position - 0xFB6
{
	if (Local_212.f_156.f_168 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_168);
		return StackVal;
	}
	return 0;
}

int func_84()//Position - 0x17EF
{
	Call_Loc(Local_212.f_64);
	return StackVal;
}

int func_85(int iParam0)//Position - 0x3A64
{
	if (Local_212.f_407.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_23);
		return StackVal;
	}
	return 1;
}

int func_86(int iParam0)//Position - 0x3BAE
{
	if (Local_212.f_407.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_27);
		return StackVal;
	}
	return 0;
}

float func_87(int iParam0, int iParam1)//Position - 0x484B
{
	if (Local_212.f_352.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_352.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		default:
	}
	return 0.2f;
}

int func_88(int iParam0)//Position - 0x21DC7
{
	if (Local_212.f_114.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_114.f_28);
		return StackVal;
	}
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS_UPRIGHT");
}

bool func_89(var uParam0)//Position - 0x21F81
{
	struct<3> Var0;
	if (Local_212.f_114.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_114.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !__LIB_0__.func_86(Var0);
}

struct<8> func_90(var* uParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x25110
{
	struct<8> Var0;
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 32);
	}
	else
	{
		StringCopy(&Var0, sParam2, 32);
	}
	return Var0;
}

char* func_91(int iParam0, int iParam1)//Position - 0x25401
{
	switch (iParam1)
	{
		case 0:
			return "DJ_KM_Skate_Clothing_1";
		case 1:
			return "DJ_KM_Pizza";
		case 2:
			return "DJ_KM_Chakra_Stones_1";
		case 3:
			return "DJ_MM_Rental_Car_1";
		case 4:
			return "DJ_MM_Slippers_1";
		case 5:
			return "DJ_PT_Equipment_1";
		case 6:
			return "DJ_PT_Champagne_1";
		default:
	}
	return "LoadedDataTest3";
}

float func_92(var uParam0)//Position - 0x2573A
{
	return 50f;
}

int func_93(var uParam0)//Position - 0x25C24
{
	return 15;
}

void func_94(int iParam0, int iParam1)//Position - 0x26206
{
	int iVar0;
	var uVar1;
	iVar0 = Local_217[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_217[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_217[iParam0 /*21*/].f_19++;
}

void func_95(int iParam0, int iParam1, int iParam2)//Position - 0x26AFA
{
	int iVar0;
	var uVar1;
	iVar0 = Local_216[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_216[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_216[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_216[iParam0 /*20*/].f_19++;
}

void func_96(int iParam0, int iParam1)//Position - 0x26B59
{
	int iVar0;
	var uVar1;
	iVar0 = Local_216[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_216[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_216[iParam0 /*20*/].f_19++;
}

int func_97(var uParam0)//Position - 0x2741A
{
	if (uParam0->f_6 == joaat("WEAPON_RAMMED_BY_CAR") || uParam0->f_6 == joaat("WEAPON_RUN_OVER_BY_CAR"))
	{
		return 1;
	}
	return 0;
}

void func_98(int iParam0, int iParam1)//Position - 0x279F0
{
	if (__LIB_1__.func_101(&(Local_195.f_19.f_5[iParam0 /*13*/]), iParam1))
	{
	}
}

int func_99(int iParam0)//Position - 0x2827A
{
	switch (iParam0)
	{
		case 0:
			return 0;
		default:
	}
	return 1;
}

int func_100()//Position - 0x2863D
{
	if (Local_212.f_64.f_11 != 0)
	{
		Call_Loc(Local_212.f_64.f_11);
		return StackVal;
	}
	return 1;
}

int func_101()//Position - 0x2865C
{
	if (Local_212.f_64.f_10 != 0)
	{
		Call_Loc(Local_212.f_64.f_10);
		return StackVal;
	}
	return 0;
}

float func_102(var uParam0)//Position - 0x286CE
{
	return 125f;
}

int func_103(var uParam0)//Position - 0x286E4
{
	return 523;
}

float func_104(var uParam0)//Position - 0x2AAD4
{
	return 0.25f;
}

float func_105(var uParam0)//Position - 0x2AAED
{
	return 0.75f;
}

bool func_106(var uParam0)//Position - 0x2B5A4
{
	return (*uParam0 >= 377 && *uParam0 <= 674);
}

Vector3 func_107()//Position - 0x2BDED
{
	return 1f, 1f, 1f;
}

bool func_108(var uParam0)//Position - 0x2BF68
{
	return (*uParam0 >= 1 && *uParam0 <= 376);
}

void func_109(int iParam0, var uParam1)//Position - 0x2C0A9
{
	switch (iParam0)
	{
		case 763:
			uParam1->f_20 = { -2484.8804f, -4361.8506f, -7.889073f };
			uParam1->f_23 = { 4009.8774f, -3911.593f, 3001.8782f };
			uParam1->f_26 = 750f;
			return;
			break;
		case 789:
			uParam1->f_20 = { -179.82547f, -607.1684f, 31.424486f };
			uParam1->f_23 = { -173.0034f, -609.6523f, 34.236984f };
			uParam1->f_26 = 4.0625f;
			return;
			break;
		case 790:
			uParam1->f_20 = { 139.06358f, -728.7686f, 32.13333f };
			uParam1->f_23 = { 141.22156f, -722.888f, 36.00834f };
			uParam1->f_26 = 3.9375f;
			return;
			break;
		case 791:
			uParam1->f_20 = { 42.10335f, -886.42615f, 29.223171f };
			uParam1->f_23 = { 43.727795f, -881.99176f, 32.666386f };
			uParam1->f_26 = 3.75f;
			return;
			break;
	}
	uParam1->f_20 = { 0f, 0f, 0f };
	uParam1->f_23 = { 0f, 0f, 0f };
	uParam1->f_26 = 0f;
}

void func_110(int iParam0, var uParam1)//Position - 0x2C1CB
{
	MISC::SET_BIT(&(uParam1->f_16), 11);
	switch (iParam0)
	{
		case 757:
			MISC::SET_BIT(&(uParam1->f_16), 16);
			MISC::SET_BIT(&(uParam1->f_16), 8);
			break;
		case 763:
			MISC::SET_BIT(&(uParam1->f_16), 3);
			MISC::SET_BIT(&(uParam1->f_16), 5);
			MISC::SET_BIT(&(uParam1->f_16), 1);
			break;
		case 756:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 796:
		case 798:
		case 800:
		case 802:
			MISC::SET_BIT(&(uParam1->f_16), 13);
			break;
		case 794:
			MISC::SET_BIT(&(uParam1->f_16), 7);
			break;
		case 771:
		case 772:
			MISC::CLEAR_BIT(&(uParam1->f_16), 11);
			break;
		case 789:
		case 790:
		case 791:
			MISC::SET_BIT(&(uParam1->f_16), 9);
			MISC::SET_BIT(&(uParam1->f_16), 15);
			break;
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
			MISC::SET_BIT(&(uParam1->f_16), 10);
			MISC::SET_BIT(&(uParam1->f_16), 17);
			break;
	}
}

void func_111(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2DC47
{
	switch (iParam0)
	{
		case 763:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 796:
		case 798:
		case 800:
		case 802:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 816:
		case 817:
		case 818:
		case 819:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
			*uParam2 = 0;
			*uParam3 = 1;
			return;
			break;
		case 795:
		case 797:
		case 799:
		case 801:
		case 879:
		case 880:
		case 881:
			*uParam2 = 1;
			*uParam3 = 0;
			return;
			break;
	}
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_112(int iParam0)//Position - 0x2E1FF
{
	switch (iParam0)
	{
		case 759:
		case 764:
			return 1;
			break;
	}
	return 0;
}

int func_113(int iParam0)//Position - 0x2E222
{
	switch (iParam0)
	{
		case 761:
		case 762:
		case 760:
		case 763:
			return 1;
			break;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x2E251
{
	switch (iParam0)
	{
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 793:
		case 792:
		case 771:
		case 772:
			return 1;
			break;
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x2E32D
{
	switch (iParam0)
	{
		case 761:
		case 762:
			return 20;
			break;
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
			return 27;
			break;
		default:
			return 28;
			break;
	}
	return 28;
}

float func_116(int iParam0)//Position - 0x2E491
{
	switch (iParam0)
	{
		case 795:
		case 799:
		case 801:
		case 797:
			return 0.5f;
			break;
	}
	return 5f;
}

char* func_117(int iParam0)//Position - 0x2E4C4
{
	return "GB_DELIVERY";
}

bool func_118(int iParam0)//Position - 0x2E4D0
{
	return (iParam0 >= 747 && iParam0 <= 882);
}

Vector3 func_119(int iParam0)//Position - 0x2E71A
{
	switch (iParam0)
	{
		case 714:
			return -239.6946f, 6231.41f, 30.5003f;
		case 715:
			return 1710.63f, 4755.55f, 40.97f;
		case 716:
			return -102.8687f, -1775.5823f, 28.5124f;
		case 717:
			return -618.0107f, 282.3917f, 80.6787f;
		case 718:
			return -1288.8455f, -275.3818f, 37.7781f;
		case 719:
			return 722.7928f, -822.6534f, 23.7156f;
		case 720:
			return -249.71f, 6222.79f, 30.49f;
		case 721:
			return 1688.9379f, 4770.203f, 40.9215f;
		case 722:
			return -113.4865f, -1763.3188f, 28.7557f;
		case 723:
			return -592.94f, 270.24f, 81.17f;
		case 724:
			return -1268.06f, -294.23f, 36.4f;
		case 725:
			return 751.33f, -840.9f, 24.62f;
		case 726:
			return -248.9815f, 6226.736f, 30.4544f;
		case 727:
			return 1712.4965f, 4799.7964f, 40.8101f;
		case 728:
			return -31.0365f, -1754.2012f, 28.2347f;
		case 729:
			return -596.077f, 332.5039f, 84.1166f;
		case 730:
			return -1273.9028f, -284.471f, 36.9529f;
		case 731:
			return 737.4631f, -841.6989f, 24.0383f;
		case 732:
			return 696.304f, 129.601f, 79.755f;
		case 733:
			return 1031.95f, -269.04f, 49.8512f;
		case 734:
			return 1742.125f, 3275.608f, 40.132f;
		case 735:
			return -161.4011f, -164.9205f, 42.6216f;
		case 736:
			return -1125.3287f, 4946.6333f, 219.0566f;
		case 742:
			return 977.4358f, 17.8086f, 79.9903f;
		case 743:
			return 992.6253f, 75.9125f, 79.9906f;
		case 744:
			return 987.3862f, 79.2873f, 79.9906f;
		case 745:
			return 974.0888f, 13.0281f, 80.041f;
		case 746:
			return 980.2654f, 22.3152f, 79.9902f;
		case 737:
			return 1964.7253f, 3755.3123f, 31.2405f;
		case 738:
			return -23.473f, 6456.6553f, 30.4236f;
		case 739:
			return -1325.8221f, -1149.7263f, 3.398f;
		case 740:
			return 192.6347f, -153.5202f, 55.9168f;
		case 741:
			return 1066.7434f, -2384.2964f, 29.461f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_120(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2EA44
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0x2EB15
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1))
	{
		if (__LIB_0__.func_121(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)))
	{
		return 0;
	}
	if (__LIB_2__.func_472(iParam1))
	{
		return 0;
	}
	if ((__LIB_0__.func_657(iParam1, 1) || __LIB_1__.func_178(iParam1)) || __LIB_0__.func_655(iParam1, 1))
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

bool func_122(int iParam0)//Position - 0x2EC38
{
	return (iParam0 >= 714 && iParam0 <= 746);
}

Vector3 func_123(int iParam0)//Position - 0x2ED94
{
	switch (iParam0)
	{
		case 704:
			return 918.5922f, 50.5265f, 79.7648f;
		case 705:
			return 915.2054f, 52.5925f, 79.7648f;
		case 710:
			return 939.7278f, 145.0655f, 79.8304f;
		case 711:
			return 965.8581f, 42.3771f, 123.1199f;
		case 712:
			return 976.8382f, -69.818f, 73.9592f;
		case 713:
			return 935.5134f, 0.3663f, 77.7649f;
		case 706:
			return -523.206f, -1720.587f, 18.225f;
		case 707:
			return 273.709f, -2223.898f, 7.257f;
		case 708:
			return -1068.403f, 4912.794f, 211.851f;
		case 709:
			return -1584.666f, 2695.359f, 3.118f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_124(int iParam0)//Position - 0x2EEA6
{
	switch (iParam0)
	{
		case 704:
		case 705:
		case 713:
		case 712:
		case 711:
			return 1;
		default:
	}
	return 0;
}

bool func_125(int iParam0)//Position - 0x2EED8
{
	return (iParam0 >= 704 && iParam0 <= 713);
}

int func_126(int iParam0)//Position - 0x2F36F
{
	if ((iParam0 == 690 || iParam0 == 691) || iParam0 == 687)
	{
		return 1;
	}
	return 0;
}

bool func_127(int iParam0)//Position - 0x2F3B6
{
	return (iParam0 >= 684 && iParam0 <= 703);
}

Vector3 func_128(int iParam0)//Position - 0x2F666
{
	switch (iParam0)
	{
		case 675:
			return 1272.3566f, 2834.424f, 47.9951f;
		case 676:
			return 35.1777f, 2621.5452f, 84.4465f;
		case 677:
			return 2755.241f, 3906.798f, 44.2074f;
		case 678:
			return 3388.7317f, 5509.329f, 24.78f;
		case 679:
			return 20.3048f, 6825.069f, 14.3348f;
		case 680:
			return -2229.3318f, 2398.6497f, 11.0724f;
		case 681:
			return -2.7877f, 3345.063f, 40.1563f;
		case 682:
			return 2086.7502f, 1761.9626f, 102.9603f;
		case 683:
			return 1864.3485f, 268.5328f, 162.9432f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_129(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2F750
{
	if (iParam1 == 13)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (iParam1 == 14)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

bool func_130(var uParam0)//Position - 0x2F782
{
	return (*uParam0 >= 675 && *uParam0 <= 683);
}

void func_131(int iParam0, var uParam1)//Position - 0x2F928
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 645:
			uParam1->f_4 = { -1009.399f, -1510.902f, 10.787f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1009.3573f, -1510.7726f, 30.786808f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 646:
			uParam1->f_4 = { 488.149f, 193.576f, 110.521f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 488.33878f, 193.44931f, 130.521f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 647:
			uParam1->f_4 = { 1136.636f, -1545.09f, 47.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1136.6494f, -1545.1962f, 67.145065f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 648:
			uParam1->f_4 = { 287.184f, -2430.126f, 7.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 287.0954f, -2430.2578f, 27.04158f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 649:
			uParam1->f_4 = { -1273.492f, 613.795f, 138.303f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1273.4093f, 613.63574f, 158.30273f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 650:
			uParam1->f_4 = { 1152.29f, -411.709f, 73.447f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1152.2189f, -411.74384f, 93.4471f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 651:
			uParam1->f_4 = { 154.71f, 1154.905f, 225.794f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 154.73918f, 1154.6189f, 245.79408f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 652:
			uParam1->f_4 = { -3102.653f, 405.02f, 15.265f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3102.914f, 404.93973f, 35.265068f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 653:
			uParam1->f_4 = { -1568.817f, -416.371f, 58.755f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1568.9001f, -416.29337f, 78.75464f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 654:
			uParam1->f_4 = { -697.74f, 167.438f, 72.242f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -697.7376f, 167.34137f, 92.24247f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 655:
			uParam1->f_4 = { -707.304f, -896.965f, 29.343f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -707.3842f, -896.7987f, 49.342945f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 656:
			uParam1->f_4 = { 129.193f, -1504.046f, 35.35f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 129.28084f, -1504.0159f, 55.350025f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 657:
			uParam1->f_4 = { 705.942f, -898.681f, 31.162f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 706.1223f, -898.7618f, 51.16165f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 658:
			uParam1->f_4 = { -54.868f, -320.534f, 55.571f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -54.924786f, -320.59464f, 75.57126f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 659:
			uParam1->f_4 = { 960.6f, -2310.002f, 38.836f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 960.72925f, -2310.0024f, 58.835842f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 660:
			uParam1->f_4 = { 2475.58f, 3442.302f, 52.942f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2475.5842f, 3442.3816f, 74.15777f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 661:
			uParam1->f_4 = { -71.699f, 6380.39f, 34.004f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -71.58961f, 6380.4487f, 55.219765f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 662:
			uParam1->f_4 = { 2576.59f, 4648.265f, 35.655f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2576.5366f, 4648.233f, 56.870766f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 663:
			uParam1->f_4 = { 1383.088f, 2164.901f, 100.221f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1383.053f, 2164.8767f, 121.43677f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 664:
			uParam1->f_4 = { -52.204f, 2874.061f, 57.88f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -52.198067f, 2874.1191f, 79.095764f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 665:
			uParam1->f_4 = { -2606.045f, 1874.706f, 166.32f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2605.9067f, 1874.7327f, 187.53577f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 666:
			uParam1->f_4 = { 2232.609f, 5612.76f, 57.479f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2232.6074f, 5612.829f, 78.69922f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 667:
			uParam1->f_4 = { -98.906f, 1909.688f, 196.053f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -98.8879f, 1909.77f, 217.26648f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 668:
			uParam1->f_4 = { 1338.384f, 4353.149f, 46.215f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1338.3473f, 4353.256f, 67.43076f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 669:
			uParam1->f_4 = { -533.217f, 4196.721f, 191.991f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -533.30994f, 4196.7124f, 213.20604f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 670:
			uParam1->f_4 = { -1514.534f, 1524.422f, 117.112f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1514.4976f, 1524.4554f, 138.32776f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 671:
			uParam1->f_4 = { 1224.78f, 2735.091f, 41.089f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1224.7273f, 2735.13f, 62.304764f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 672:
			uParam1->f_4 = { 1430.944f, 6354.661f, 27.35f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1430.8425f, 6354.5483f, 48.565765f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 673:
			uParam1->f_4 = { -746.832f, 5579.238f, 40.596f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -746.8964f, 5579.122f, 61.814705f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		case 674:
			uParam1->f_4 = { 1950.596f, 3831.224f, 38.394f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1950.5132f, 3831.2605f, 59.609768f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_132(int iParam0, var uParam1)//Position - 0x30374
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 615:
			uParam1->f_4 = { -1129.887f, 4908.95f, 218.176f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1129.9518f, 4908.959f, 367.26385f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 616:
			uParam1->f_4 = { -1278.679f, 4397.949f, 8.797f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1278.7998f, 4398.199f, 157.88539f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 617:
			uParam1->f_4 = { 2472.119f, -383.714f, 108.633f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2472.2266f, -383.71667f, 257.63406f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 618:
			uParam1->f_4 = { 3704.91f, 3792.808f, 10.344f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3704.8325f, 3792.7717f, 159.38066f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 619:
			uParam1->f_4 = { 501.491f, 5604.684f, 796.915f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 501.4285f, 5604.6064f, 945.9148f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 620:
			uParam1->f_4 = { -324.364f, -1968.709f, 65.994f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -324.3981f, -1968.6488f, 214.99359f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 621:
			uParam1->f_4 = { 1352.153f, 4355.032f, 42.72f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1352.194f, 4355.176f, 191.71982f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 622:
			uParam1->f_4 = { -188.822f, -176.633f, 84.225f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -188.81023f, -176.54657f, 233.22467f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 623:
			uParam1->f_4 = { 2327.591f, -2106.102f, 4.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2327.514f, -2106.1694f, 153.0316f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 624:
			uParam1->f_4 = { -930.626f, 6157.1f, 3.935f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -930.68243f, 6157.203f, 152.92888f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 625:
			uParam1->f_4 = { 685.825f, -744.68f, 33.968f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 685.7804f, -744.5552f, 183.02505f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 626:
			uParam1->f_4 = { -3222.702f, 835.279f, 1.389f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3222.962f, 835.3319f, 150.39249f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 627:
			uParam1->f_4 = { 3722.393f, 1525.736f, 0.188f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3731.0818f, 1518.7272f, 154.99211f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 628:
			uParam1->f_4 = { 4343.171f, 5407.742f, 0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 4349.43f, 5413.0234f, 153.48865f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 629:
			uParam1->f_4 = { 1493.387f, 7343.342f, -0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1495.3088f, 7349.0767f, 153.35368f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 630:
			uParam1->f_4 = { 1108.552f, -3865.831f, -0.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1108.7401f, -3865.5967f, 149.25316f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 631:
			uParam1->f_4 = { -2794.206f, -1340.128f, -0.857f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2794.7107f, -1341.1272f, 150.9005f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 632:
			uParam1->f_4 = { -3753.333f, 2421.297f, 0.134f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3753.0425f, 2421.2273f, 151.57924f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 633:
			uParam1->f_4 = { 2820.673f, 5970.349f, 351.4f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2819.8877f, 5971.6655f, 498.53113f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 634:
			uParam1->f_4 = { -1207.282f, 508.525f, 104.699f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1208.5414f, 508.31442f, 251.81982f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 635:
			uParam1->f_4 = { 1458.088f, 1113.121f, 115.213f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1458.2434f, 1111.971f, 262.33398f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 636:
			uParam1->f_4 = { 2472.171f, 3423.729f, 50.713f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2472.1848f, 3423.3613f, 200.95125f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 637:
			uParam1->f_4 = { -57.098f, 1915.81f, 196.24f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -56.97901f, 1914.7673f, 343.68228f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 638:
			uParam1->f_4 = { -1747.223f, 1991.318f, 118.105f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1748.0717f, 1992.806f, 265.12048f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 639:
			uParam1->f_4 = { 2480.091f, 4951.536f, 45.872f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2480.8274f, 4952.609f, 193.00775f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 640:
			uParam1->f_4 = { 306.207f, 6493.011f, 30.267f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 304.85123f, 6493.137f, 177.407f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 641:
			uParam1->f_4 = { 1184.253f, -2272.983f, 31.212f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1183.0604f, -2273.0784f, 178.33308f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 642:
			uParam1->f_4 = { 704.845f, 3122.848f, 44.728f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 704.9832f, 3121.7288f, 191.8539f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 643:
			uParam1->f_4 = { 2213.413f, 1834.712f, 108.61f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2214.3125f, 1835.3599f, 255.75644f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 644:
			uParam1->f_4 = { 1087.726f, 9.947f, 81.59f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1087.4246f, 8.9017f, 228.84726f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_133(int iParam0, var uParam1)//Position - 0x30DBE
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 585:
			uParam1->f_4 = { -1410.13f, -993.289f, 18.38f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1410.1022f, -993.2345f, 168.38046f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 586:
			uParam1->f_4 = { -71.169f, 807.415f, 226.25f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -71.13431f, 807.32874f, 376.24976f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 587:
			uParam1->f_4 = { -163.298f, -160.212f, 92.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -163.23193f, -160.04138f, 242.70241f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 588:
			uParam1->f_4 = { 78.731f, -1587.635f, 37.559f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 78.70574f, -1587.4011f, 187.55872f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 589:
			uParam1->f_4 = { 1145.42f, -431.092f, 66.169f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1145.483f, -431.07242f, 216.16441f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 590:
			uParam1->f_4 = { -293.618f, 2798.6f, 58.476f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -293.56152f, 2798.7178f, 208.45999f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 591:
			uParam1->f_4 = { -2233.786f, 222.936f, 193.612f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2234.0078f, 223.10982f, 343.6117f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 592:
			uParam1->f_4 = { -211.003f, 6270.165f, 30.489f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -211.30235f, 6270.386f, 180.48935f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 593:
			uParam1->f_4 = { 501.306f, 5597.584f, 794.921f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 501.07016f, 5597.815f, 944.9088f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 594:
			uParam1->f_4 = { 2559.657f, 4288.563f, 40.59f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2559.5508f, 4288.573f, 190.59033f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 595:
			uParam1->f_4 = { 2061.787f, 1876.157f, 92.147f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2061.8208f, 1876.2552f, 242.09607f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 596:
			uParam1->f_4 = { 1439.398f, -2123.25f, 55.758f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1439.4642f, -2123.0645f, 205.73857f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 597:
			uParam1->f_4 = { 536.555f, -2817.696f, 5.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 536.7016f, -2817.775f, 155.04208f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 598:
			uParam1->f_4 = { 1414.709f, 3812.396f, 31.285f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1414.6805f, 3812.4243f, 181.28584f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 599:
			uParam1->f_4 = { -1224.871f, 4451.718f, 29.123f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1224.6489f, 4451.7266f, 179.1271f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 600:
			uParam1->f_4 = { 1942.57f, 4992.075f, 41.622f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1942.686f, 4992.245f, 191.605f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 601:
			uParam1->f_4 = { -413.839f, 1570.649f, 354.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -413.76416f, 1570.7485f, 504.00107f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 602:
			uParam1->f_4 = { -338.977f, -738.634f, 52.247f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -338.82565f, -739.0767f, 202.2467f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 603:
			uParam1->f_4 = { 2785.339f, -671.202f, 3.129f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2785.3723f, -671.1329f, 153.11765f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 604:
			uParam1->f_4 = { 1597.853f, 6574.43f, 13.057f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1597.9431f, 6574.6816f, 163.09561f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 605:
			uParam1->f_4 = { -1788.953f, 5296.781f, 0.937f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1794.7366f, 5302.018f, 156.04633f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 606:
			uParam1->f_4 = { 107.929f, 7556.932f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 102.06755f, 7561.3867f, 154.28708f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 607:
			uParam1->f_4 = { 4348.7f, 4204.648f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 4356.0957f, 4211.247f, 155.39928f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 608:
			uParam1->f_4 = { 3350.914f, 1271.106f, -0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3344.999f, 1277.3665f, 155.48206f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 609:
			uParam1->f_4 = { 25.182f, -3666.942f, 1.312f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 32.641727f, -3669.9443f, 155.93864f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 610:
			uParam1->f_4 = { -3462.223f, 1513.8f, 0.938f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3470.701f, 1519.4761f, 155.74915f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 611:
			uParam1->f_4 = { 3123.25f, 6765.652f, 0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3127.177f, 6770.7217f, 155.95119f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 612:
			uParam1->f_4 = { 3666.045f, -1481.32f, 1.125f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3664.705f, -1489.4701f, 155.77937f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 613:
			uParam1->f_4 = { -2261.479f, -1643.832f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2246.7297f, -1646.4563f, 155.43785f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 614:
			uParam1->f_4 = { 2602.581f, -2480.521f, 0.188f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2592.3206f, -2481.4602f, 156.49266f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_134(int iParam0, var uParam1)//Position - 0x31808
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	MISC::SET_BIT(&(uParam1->f_16), 6);
	switch (iParam0)
	{
		case 552:
			uParam1->f_4 = { -228.69f, -2445.7f, 19f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -228.4485f, -2445.3672f, 16.001398f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 553:
			uParam1->f_4 = { 617.286f, -840.587f, 24.072f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 617.3474f, -840.5027f, 21.929361f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		case 554:
			uParam1->f_4 = { 2908.728f, 770.107f, 35.121f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2908.1746f, 769.7324f, 33.864594f };
			uParam1->f_23 = { 25f, 25f, 13f };
			uParam1->f_26 = 0f;
			break;
		case 555:
			uParam1->f_4 = { -180.058f, 2863.623f, 37.528f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -180.13344f, 2863.537f, 37.45629f };
			uParam1->f_23 = { 25f, 25f, 7f };
			uParam1->f_26 = 0f;
			break;
		case 556:
			uParam1->f_4 = { -1414.163f, 2636.951f, 8.005f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1413.6182f, 2636.4932f, 7.268405f };
			uParam1->f_23 = { 25f, 25f, 8f };
			uParam1->f_26 = 0f;
			break;
		case 557:
			uParam1->f_4 = { -2665.451f, 2595.696f, 6.008f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2665.38f, 2595.2908f, 5.917889f };
			uParam1->f_23 = { 25f, 25f, 7f };
			uParam1->f_26 = 0f;
			break;
		case 558:
			uParam1->f_4 = { -1955.164f, 4579.263f, 16.212f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1954.9628f, 4579.1543f, 13.939919f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		case 559:
			uParam1->f_4 = { -509.557f, 4421.524f, 44.4f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -510.9154f, 4421.009f, 39.48253f };
			uParam1->f_23 = { 25f, 25f, 13f };
			uParam1->f_26 = 0f;
			break;
		case 560:
			uParam1->f_4 = { 806.034f, -2635.465f, 15.293f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 806.7756f, -2636.1274f, 4.788301f };
			uParam1->f_23 = { 25f, 25f, 19f };
			uParam1->f_26 = 0f;
			break;
		case 561:
			uParam1->f_4 = { 2265.854f, 2036.017f, 142.197f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2265.9521f, 2036.0543f, 139.33603f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 562:
			uParam1->f_4 = { 1659.95f, -1638.865f, 125.283f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1659.896f, -1638.8683f, 122.25269f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 563:
			uParam1->f_4 = { -1850.943f, -334.037f, 70.237f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1850.9381f, -334.01202f, 67.087456f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 564:
			uParam1->f_4 = { 1976.216f, 717.231f, 178.613f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1976.2753f, 717.4149f, 175.29718f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 565:
			uParam1->f_4 = { -24.043f, 668.69f, 211.003f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -23.55385f, 668.9614f, 202.52658f };
			uParam1->f_23 = { 25f, 25f, 18f };
			uParam1->f_26 = 0f;
			break;
		case 566:
			uParam1->f_4 = { -211.001f, -1800.318f, 14.044f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -210.77379f, -1800.1516f, 11.554911f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		case 567:
			uParam1->f_4 = { 321.856f, 2214.761f, 87.77f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 321.9139f, 2214.874f, 85.22589f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 568:
			uParam1->f_4 = { 1973.514f, 5042.104f, 51.505f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1973.4525f, 5042.0293f, 49.965775f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 569:
			uParam1->f_4 = { 2025.132f, 2941.179f, 56.555f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2025.1855f, 2941.275f, 55.59736f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		case 570:
			uParam1->f_4 = { 77.001f, 7075.894f, 13.25f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 76.95587f, 7075.9355f, 10.972376f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 571:
			uParam1->f_4 = { 3857.717f, 4362.673f, 17.503f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3857.7163f, 4362.641f, 15.640448f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 572:
			uParam1->f_4 = { 2920.751f, 5314.043f, 109.404f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2920.7302f, 5314.0693f, 106.13412f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 573:
			uParam1->f_4 = { 201.446f, -725.152f, 60.002f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 201.35461f, -725.2289f, 57.076965f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 574:
			uParam1->f_4 = { 714.262f, 4115.009f, 45.006f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 714.30804f, 4115.0625f, 43.814262f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		case 575:
			uParam1->f_4 = { 1090.173f, 61.733f, 92.059f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1090.208f, 61.79512f, 89.89091f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 576:
			uParam1->f_4 = { -2823.096f, 1423.129f, 109.982f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2823.114f, 1423.1431f, 108.80838f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		case 577:
			uParam1->f_4 = { -1373.553f, 5352.695f, 14.957f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1373.5121f, 5352.8086f, 13.162935f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 578:
			uParam1->f_4 = { -1350.463f, -1434.643f, 17.118f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1350.4296f, -1434.6469f, 14.324188f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 579:
			uParam1->f_4 = { 2471.126f, 3763.668f, 55.025f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2471.111f, 3763.6226f, 52.047554f };
			uParam1->f_23 = { 25f, 25f, 11.5f };
			uParam1->f_26 = 0f;
			break;
		case 580:
			uParam1->f_4 = { -967.126f, -974.166f, 15.002f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -967.16156f, -974.1507f, 12.865185f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 581:
			uParam1->f_4 = { 626.714f, 623.564f, 142.166f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 626.7075f, 623.6097f, 138.91101f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 582:
			uParam1->f_4 = { -1038.206f, 929.886f, 182.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1038.2771f, 929.90753f, 178.71692f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 583:
			uParam1->f_4 = { -1186.123f, 38.309f, 65f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1186.1428f, 38.23398f, 62.726677f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		case 584:
			uParam1->f_4 = { 1441.211f, 6346.602f, 37.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1441.137f, 6346.3726f, 33.95491f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_135(int iParam0, var uParam1)//Position - 0x32358
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 522:
			uParam1->f_4 = { 1628.253f, -1885.011f, 104.244f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1628.2585f, -1885.1235f, 249.23586f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 523:
			uParam1->f_4 = { 2663.699f, 1395.744f, 23.461f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2663.7305f, 1395.7704f, 168.46466f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 524:
			uParam1->f_4 = { -681.022f, 5798.669f, 16.331f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -680.9479f, 5798.4067f, 161.33096f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 525:
			uParam1->f_4 = { -1046.675f, -997.832f, 8.618f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1046.5162f, -997.7623f, 153.61827f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 526:
			uParam1->f_4 = { 2361.193f, 2563.87f, 50.653f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2361.3772f, 2563.7698f, 195.65042f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 527:
			uParam1->f_4 = { 2228.439f, 5595.11f, 53.047f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2228.5115f, 5594.9727f, 198.04309f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 528:
			uParam1->f_4 = { 1041.293f, -2980.383f, 4.901f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1041.3848f, -2980.4934f, 149.90105f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 529:
			uParam1->f_4 = { -2975.953f, 728.386f, 28.34f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2975.98f, 728.33093f, 173.33992f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 530:
			uParam1->f_4 = { 1564.093f, 3572.587f, 32.745f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1564.1434f, 3572.576f, 177.74013f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 531:
			uParam1->f_4 = { -1376.622f, -1398.935f, 4.628f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1376.7946f, -1398.8474f, 150.84377f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 532:
			uParam1->f_4 = { -1833.113f, 2154.464f, 114.646f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1833.0265f, 2154.5115f, 260.86176f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 533:
			uParam1->f_4 = { 1730.572f, 4856.538f, 39.628f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1730.6697f, 4856.5283f, 185.84216f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 534:
			uParam1->f_4 = { 418.192f, -1331.322f, 45.054f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 418.20517f, -1331.2477f, 191.26978f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 535:
			uParam1->f_4 = { 248.522f, 3107.336f, 44.924f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 248.51096f, 3107.3315f, 190.9334f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 536:
			uParam1->f_4 = { 3294.076f, 5188.679f, 17.416f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3294.1697f, 5188.587f, 163.4254f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 537:
			uParam1->f_4 = { -987.05f, 4397.283f, 14.945f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -986.8815f, 4396.998f, 159.8712f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 538:
			uParam1->f_4 = { 2702.994f, 3503.466f, 60.526f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2703.048f, 3503.4329f, 205.52579f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 539:
			uParam1->f_4 = { 985.286f, -2244.75f, 29.557f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 985.3023f, -2244.7437f, 174.55681f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 540:
			uParam1->f_4 = { 2257.649f, 5157.199f, 56.825f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2257.4976f, 5157.2275f, 201.83179f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 541:
			uParam1->f_4 = { -1057.081f, 834.838f, 165.729f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1057.1173f, 834.9001f, 310.72934f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 542:
			uParam1->f_4 = { 473.819f, -2589.012f, 13.461f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 473.67996f, -2588.8635f, 158.46104f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 543:
			uParam1->f_4 = { 69.555f, 6526.386f, 30.576f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 69.5831f, 6526.563f, 176.79176f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 544:
			uParam1->f_4 = { 1390.892f, 2172.039f, 100.532f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1390.9703f, 2171.9993f, 246.74777f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 545:
			uParam1->f_4 = { -238.29f, -1530.307f, 30.486f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -238.3365f, -1530.4065f, 176.70177f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 546:
			uParam1->f_4 = { 1350.858f, 6372.605f, 32.21f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1350.8473f, 6372.5723f, 178.42577f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 547:
			uParam1->f_4 = { -289.799f, 2526.061f, 73.613f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -289.8188f, 2526.115f, 219.82877f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 548:
			uParam1->f_4 = { 384.79f, -1798.908f, 32.015f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 384.76242f, -1798.7744f, 178.23077f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 549:
			uParam1->f_4 = { 1300.635f, 6611.277f, 1.215f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1300.7583f, 6611.3315f, 147.43076f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 550:
			uParam1->f_4 = { 2688.698f, 2878f, 35.041f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2688.7314f, 2878.0505f, 181.25677f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		case 551:
			uParam1->f_4 = { -482.302f, -428.943f, 56.24f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -482.3047f, -428.81155f, 202.45576f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_136(int iParam0, var uParam1)//Position - 0x32DA2
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 492:
			uParam1->f_4 = { 1349.434f, -2211.201f, 59.185f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1349.434f, -2211.201f, 59.185f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 493:
			uParam1->f_4 = { 244.666f, -3086.762f, 4.634f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 244.666f, -3086.762f, 4.634f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 494:
			uParam1->f_4 = { 374.023f, -1845.642f, 26.707f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 374.023f, -1845.642f, 26.707f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 495:
			uParam1->f_4 = { 2566.534f, -678.942f, 53.169f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2566.534f, -678.942f, 53.169f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 496:
			uParam1->f_4 = { 1147.377f, -1479.249f, 33.685f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1147.377f, -1479.249f, 33.685f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 497:
			uParam1->f_4 = { -1204.087f, -1340.333f, 3.726f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1204.087f, -1340.333f, 3.726f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 498:
			uParam1->f_4 = { 736.9614f, -328.0111f, 49.2329f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 736.9614f, -328.0111f, 49.2329f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 499:
			uParam1->f_4 = { 1025.3444f, 955.4961f, 221.172f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1025.3444f, 955.4961f, 221.172f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 500:
			uParam1->f_4 = { 298.837f, 16.626f, 82.075f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 298.837f, 16.626f, 82.075f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 501:
			uParam1->f_4 = { -301.376f, -1106.58f, 22.026f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -301.376f, -1106.58f, 22.026f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 502:
			uParam1->f_4 = { 1321.417f, -725.513f, 64.579f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1321.417f, -725.513f, 64.579f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 503:
			uParam1->f_4 = { 2611.826f, 469.9974f, 104.681f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2611.826f, 469.9974f, 104.681f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 504:
			uParam1->f_4 = { -808.094f, -396.25f, 36.031f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -808.094f, -396.25f, 36.031f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 505:
			uParam1->f_4 = { 150.6398f, 758.6245f, 208.3275f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 150.6398f, 758.6245f, 208.3275f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 506:
			uParam1->f_4 = { -1619.563f, 391.341f, 85.697f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1619.563f, 391.341f, 85.697f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 507:
			uParam1->f_4 = { 1756.9448f, 6395.202f, 35.4139f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1756.9448f, 6395.202f, 35.4139f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 508:
			uParam1->f_4 = { 56.7549f, 6521.598f, 30.4565f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 56.7549f, 6521.598f, 30.4565f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 509:
			uParam1->f_4 = { -596.026f, 5753.056f, 34.011f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -596.026f, 5753.056f, 34.011f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 510:
			uParam1->f_4 = { -2259.771f, 4341.076f, 42.849f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2259.771f, 4341.076f, 42.849f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 511:
			uParam1->f_4 = { 135.126f, 4447.888f, 79.167f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 135.126f, 4447.888f, 79.167f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 512:
			uParam1->f_4 = { 1440.9668f, 4470.13f, 48.483f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1440.9668f, 4470.13f, 48.483f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 513:
			uParam1->f_4 = { 1963.212f, 5083.114f, 39.6153f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1963.212f, 5083.114f, 39.6153f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 514:
			uParam1->f_4 = { 2679.76f, 4341.263f, 44.796f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2679.76f, 4341.263f, 44.796f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 515:
			uParam1->f_4 = { 2183.006f, 3399.342f, 44.527f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2183.006f, 3399.342f, 44.527f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 516:
			uParam1->f_4 = { 1472.324f, 3658.755f, 33.285f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1472.324f, 3658.755f, 33.285f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 517:
			uParam1->f_4 = { 1275.338f, 2629.966f, 36.708f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1275.338f, 2629.966f, 36.708f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 518:
			uParam1->f_4 = { 170.01f, 3214.749f, 41.299f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 170.01f, 3214.749f, 41.299f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 519:
			uParam1->f_4 = { -1700.2831f, 2371.0303f, 48.2861f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1700.2831f, 2371.0303f, 48.2861f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 520:
			uParam1->f_4 = { -281.741f, 1958.1182f, 162.362f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -281.741f, 1958.1182f, 162.362f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		case 521:
			uParam1->f_4 = { 2513.363f, 1969.4479f, 18.888f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2513.363f, 1969.4479f, 18.888f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_137(int iParam0, var uParam1)//Position - 0x337EC
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	MISC::SET_BIT(&(uParam1->f_16), 8);
	switch (iParam0)
	{
		case 432:
			uParam1->f_4 = { 930.938f, -2985.865f, 4.902f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 930.9051f, -2985.8345f, 7.117765f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 433:
			uParam1->f_4 = { 686.271f, 577.686f, 129.462f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 683.8532f, 571.3344f, 126.461395f };
			uParam1->f_23 = { 687.7781f, 581.94507f, 138.4614f };
			uParam1->f_26 = 26f;
			MISC::SET_BIT(&(uParam1->f_16), 5);
			break;
		case 434:
			uParam1->f_4 = { -383.939f, -2672.466f, 5.001f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -375.71375f, -2665.313f, 2.000296f };
			uParam1->f_23 = { -389.1924f, -2679.0251f, 16.000217f };
			uParam1->f_26 = 14f;
			MISC::SET_BIT(&(uParam1->f_16), 5);
			break;
		case 435:
			uParam1->f_4 = { -529.086f, -1684.222f, 18.162f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -529.1872f, -1684.5042f, 24.377766f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 436:
			uParam1->f_4 = { -971.197f, -1305.371f, 19.805f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -971.147f, -1305.2775f, 26.023878f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 437:
			uParam1->f_4 = { -1479.12f, -663.178f, 27.944f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1479.0929f, -663.1809f, 30.159763f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 438:
			uParam1->f_4 = { -606.75f, -127.3f, 38.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -606.71857f, -127.38826f, 42.224766f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		case 439:
			uParam1->f_4 = { -489.128f, 187.43f, 82.163f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -489.08054f, 188.41457f, 84.66271f };
			uParam1->f_23 = { 9f, 9f, 7.5f };
			uParam1->f_26 = 0f;
			break;
		case 440:
			uParam1->f_4 = { -121.642f, -1000.841f, 53.264f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -121.5962f, -1000.9277f, 59.479767f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 441:
			uParam1->f_4 = { -477.012f, -1048.3f, 28.111f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -476.20337f, -1048.3213f, 33.15062f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 442:
			uParam1->f_4 = { -2210.614f, 201.99f, 173.602f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2210.5352f, 202.00403f, 177.81776f };
			uParam1->f_23 = { 8f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 443:
			uParam1->f_4 = { -3266.001f, 955.427f, 7.353f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3265.7693f, 956.67145f, 8.852164f };
			uParam1->f_23 = { 4f, 5f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		case 444:
			uParam1->f_4 = { 203.223f, 1198.412f, 230.291f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 204.19838f, 1198.6799f, 232.29036f };
			uParam1->f_23 = { 6f, 5f, 5f };
			uParam1->f_26 = 0f;
			break;
		case 445:
			uParam1->f_4 = { 1129.031f, -2074.754f, 30.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1128.8834f, -2074.1394f, 32.112324f };
			uParam1->f_23 = { 8f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		case 446:
			uParam1->f_4 = { 710.051f, -1221.815f, 23.662f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 709.9984f, -1221.8376f, 31.877766f };
			uParam1->f_23 = { 12f, 12f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 447:
			uParam1->f_4 = { -773.23f, -1044.829f, 22.103f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -772.99054f, -1045.4329f, 25.032133f };
			uParam1->f_23 = { 8f, 8f, 5.5f };
			uParam1->f_26 = 0f;
			break;
		case 448:
			uParam1->f_4 = { -945.851f, -1422.691f, 6.68f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -945.86536f, -1422.6545f, 9.895765f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		case 449:
			uParam1->f_4 = { -1680.96f, -1144.234f, 12.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1680.9591f, -1144.1476f, 16.233765f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 450:
			uParam1->f_4 = { -1500.022f, -333.221f, 44.9f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1500.08f, -333.2999f, 49.115765f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 451:
			uParam1->f_4 = { -1860.242f, 222.527f, 83.294f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1861.1473f, 221.58356f, 84.88553f };
			uParam1->f_23 = { 10f, 10f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		case 452:
			uParam1->f_4 = { 413.116f, -29.235f, 113.545f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 413.6682f, -29.54296f, 120.63073f };
			uParam1->f_23 = { 12f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 453:
			uParam1->f_4 = { 34.83f, -383.45f, 63.806f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 35.54145f, -383.32483f, 67.84561f };
			uParam1->f_23 = { 7.5f, 7.5f, 5f };
			uParam1->f_26 = 0f;
			break;
		case 454:
			uParam1->f_4 = { 255.416f, -710.354f, 43.686f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 255.45332f, -710.27295f, 53.901764f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 455:
			uParam1->f_4 = { 592.18f, -507.294f, 23.749f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 592.2883f, -507.1213f, 27.964766f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 456:
			uParam1->f_4 = { 1076.132f, -685.856f, 56.644f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1076.6573f, -686.3031f, 60.683617f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		case 457:
			uParam1->f_4 = { 471.317f, -2645.512f, 4.712f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 471.19138f, -2645.6284f, 7.927763f };
			uParam1->f_23 = { 8f, 8f, 5f };
			uParam1->f_26 = 0f;
			break;
		case 458:
			uParam1->f_4 = { -129.316f, -2223.401f, 6.812f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -129.3752f, -2223.3967f, 11.027765f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 459:
			uParam1->f_4 = { -89.978f, -1619.276f, 28.561f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -90.02207f, -1619.1936f, 31.776768f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		case 460:
			uParam1->f_4 = { 276.008f, -1094.465f, 51.577f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 276.0785f, -1094.3767f, 59.792763f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 461:
			uParam1->f_4 = { -549.746f, -790.459f, 28.327f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -549.791f, -790.43787f, 34.542763f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		case 462:
			uParam1->f_4 = { -822.68f, -595.052f, 36.197f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -823.3206f, -595.4732f, 41.19666f };
			uParam1->f_23 = { 8f, 8f, 8f };
			uParam1->f_26 = 0f;
			break;
		case 463:
			uParam1->f_4 = { -1220.762f, -498.094f, 30.3f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1220.7949f, -498.23724f, 35.508194f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		case 464:
			uParam1->f_4 = { -178.672f, 53.382f, 66.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -177.8781f, 53.51821f, 69.70059f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 465:
			uParam1->f_4 = { 852.861f, -1902.551f, 36.09f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 852.8772f, -1902.4778f, 42.805763f };
			uParam1->f_23 = { 10f, 10f, 8.5f };
			uParam1->f_26 = 0f;
			break;
		case 466:
			uParam1->f_4 = { -510.353f, -2030.173f, 11.433f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -510.26016f, -2029.9062f, 17.694872f };
			uParam1->f_23 = { 6f, 6f, 8f };
			uParam1->f_26 = 0f;
			break;
		case 467:
			uParam1->f_4 = { 62.658f, -814.916f, 50.886f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 62.39498f, -815.689f, 57.885918f };
			uParam1->f_23 = { 8f, 8f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 468:
			uParam1->f_4 = { -325.831f, -595.941f, 32.559f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -325.95297f, -595.9745f, 37.77476f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		case 469:
			uParam1->f_4 = { 1083.071f, -231.408f, 56.415f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1078.6832f, -239.19824f, 53.728657f };
			uParam1->f_23 = { 1089.1793f, -221.78978f, 67.012024f };
			uParam1->f_26 = 11f;
			MISC::SET_BIT(&(uParam1->f_16), 5);
			break;
		case 470:
			uParam1->f_4 = { 210.413f, -3323.262f, 4.794f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 210.31485f, -3323.42f, 9.009765f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 471:
			uParam1->f_4 = { -1275.779f, 140.19f, 57.33f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1275.3822f, 139.88147f, 61.54577f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 472:
			uParam1->f_4 = { 1306.2595f, -1114.4169f, 38.5697f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1306.2456f, -1114.3223f, 42.7855f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 473:
			uParam1->f_4 = { 1430.655f, -965.071f, 46.799f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1431.8732f, -967.0405f, 49.820496f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 474:
			uParam1->f_4 = { 939.319f, -2368.1f, 29.532f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 939.37f, -2368.1384f, 32.247765f };
			uParam1->f_23 = { 10f, 10f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		case 475:
			uParam1->f_4 = { -466.422f, -902.717f, 37.689f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -464.98956f, -901.94025f, 41.188736f };
			uParam1->f_23 = { 6f, 6f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		case 476:
			uParam1->f_4 = { -3106.299f, 1226.45f, 9.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3106.2483f, 1226.4974f, 14.417765f };
			uParam1->f_23 = { 10f, 10f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		case 477:
			uParam1->f_4 = { 593.029f, -2094.036f, 4.753f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 592.5204f, -2093.1636f, 7.95219f };
			uParam1->f_23 = { 6f, 9f, 4.2f };
			uParam1->f_26 = 0f;
			break;
		case 478:
			uParam1->f_4 = { -153.31f, -1098.898f, 12.118f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -153.37935f, -1098.8341f, 22.333763f };
			uParam1->f_23 = { 7f, 7f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 479:
			uParam1->f_4 = { -45.0454f, -343.4405f, 42.8071f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -45.014374f, -343.36142f, 49.022865f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 480:
			uParam1->f_4 = { -891.383f, -1259.071f, 19.875f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -891.2989f, -1258.8693f, 28.090763f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 481:
			uParam1->f_4 = { -423.703f, -330.012f, 41.222f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -423.74597f, -330.02005f, 51.371574f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 482:
			uParam1->f_4 = { 730.988f, -2650.476f, 5.178f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 731.4402f, -2650.3774f, 7.383765f };
			uParam1->f_23 = { 8f, 8f, 4f };
			uParam1->f_26 = 0f;
			break;
		case 483:
			uParam1->f_4 = { 900.184f, -1436.454f, 11.174f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 899.5982f, -1435.8453f, 18.16083f };
			uParam1->f_23 = { 6f, 6f, 10f };
			uParam1->f_26 = 0f;
			break;
		case 484:
			uParam1->f_4 = { -136.243f, -943.827f, 113.252f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -136.91577f, -946.36847f, 116.13663f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		case 485:
			uParam1->f_4 = { -1468.573f, -176.102f, 47.82f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1468.5378f, -176.30005f, 53.035763f };
			uParam1->f_23 = { 10f, 10f, 7f };
			uParam1->f_26 = 0f;
			break;
		case 486:
			uParam1->f_4 = { 472.426f, -850.549f, 25.315f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 472.55453f, -850.2525f, 28.511568f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		case 487:
			uParam1->f_4 = { 692.847f, -1009.201f, 21.774f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 692.7442f, -1009.9658f, 23.76004f };
			uParam1->f_23 = { 9f, 9f, 5f };
			uParam1->f_26 = 0f;
			break;
		case 488:
			uParam1->f_4 = { 2523.03f, -191.997f, 74.313f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2523.234f, -191.92206f, 79.001686f };
			uParam1->f_23 = { 6f, 6f, 6.5f };
			uParam1->f_26 = 0f;
			break;
		case 489:
			uParam1->f_4 = { 837.865f, -844.449f, 25.336f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 837.7624f, -844.5037f, 31.551765f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		case 490:
			uParam1->f_4 = { -119.004f, -1470.729f, 32.822f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -118.99901f, -1470.7008f, 34.925766f };
			uParam1->f_23 = { 10f, 10f, 4f };
			uParam1->f_26 = 0f;
			break;
		case 491:
			uParam1->f_4 = { 10.9498f, 57.9502f, 70.8541f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 10.989043f, 58.020485f, 78.863525f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_138(int iParam0, var uParam1)//Position - 0x34BC9
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	MISC::SET_BIT(&(uParam1->f_16), 5);
	switch (iParam0)
	{
		case 402:
			uParam1->f_4 = { -1256.478f, -834.671f, 64.331f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1260.3811f, -827.6134f, 64.13916f };
			uParam1->f_23 = { -1238.3411f, -860.1589f, 145.1225f };
			uParam1->f_26 = 17f;
			break;
		case 403:
			uParam1->f_4 = { 228.338f, -3185.367f, 39.469f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 230.02164f, -3137.9685f, 37.165092f };
			uParam1->f_23 = { 230.20491f, -3248.1306f, 119.60289f };
			uParam1->f_26 = 67f;
			break;
		case 404:
			uParam1->f_4 = { -147.57f, -1279.328f, 46.898f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -122.06229f, -1274.618f, 44.342434f };
			uParam1->f_23 = { -173.79913f, -1275.0161f, 126.8981f };
			uParam1->f_26 = 35f;
			break;
		case 405:
			uParam1->f_4 = { 910.37f, -1681.356f, 50.132f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 941.9596f, -1687.2601f, 36.06182f };
			uParam1->f_23 = { 881.2831f, -1681.7797f, 126.14164f };
			uParam1->f_26 = 30f;
			break;
		case 406:
			uParam1->f_4 = { 934.263f, -938.137f, 58.092f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 927.3521f, -914.68463f, 53.090317f };
			uParam1->f_23 = { 927.36523f, -980.6048f, 138.09567f };
			uParam1->f_26 = 55f;
			break;
		case 407:
			uParam1->f_4 = { 84.206f, -350.93f, 66.202f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 56.185104f, -333.02963f, 61.14438f };
			uParam1->f_23 = { 96.68251f, -347.6448f, 146.14438f };
			uParam1->f_26 = 30f;
			break;
		case 408:
			uParam1->f_4 = { -1575.921f, 214.739f, 73.338f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1596.7969f, 198.90285f, 68.838554f };
			uParam1->f_23 = { -1556.0209f, 217.96547f, 153.83856f };
			uParam1->f_26 = 39f;
			break;
		case 409:
			uParam1->f_4 = { -2262.532f, 368.693f, 187.602f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2261.236f, 353.30835f, 183.66704f };
			uParam1->f_23 = { -2272.4805f, 378.95978f, 267.60236f };
			uParam1->f_26 = 30f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		case 410:
			uParam1->f_4 = { -743.213f, -221.389f, 47.519f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -759.46155f, -226.51099f, 43.11855f };
			uParam1->f_23 = { -733.8257f, -215.85773f, 128.11856f };
			uParam1->f_26 = 23f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		case 411:
			uParam1->f_4 = { 40.7f, -1777.083f, 46.7f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 33.93224f, -1787.5176f, 41.51208f };
			uParam1->f_23 = { 80.86339f, -1730.699f, 126.7003f };
			uParam1->f_26 = 27f;
			break;
		case 412:
			uParam1->f_4 = { 847.553f, -2523.74f, 39.525f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 806.31573f, -2519.1685f, 36.5355f };
			uParam1->f_23 = { 881.93604f, -2524.729f, 127.29712f };
			uParam1->f_26 = 25f;
			break;
		case 413:
			uParam1->f_4 = { -398.9756f, -343.3768f, 69.9677f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -416.54312f, -346.08212f, 71.05437f };
			uParam1->f_23 = { -375.17004f, -351.41907f, 155.80331f };
			uParam1->f_26 = 25f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		case 414:
			uParam1->f_4 = { 77.9442f, -922.8723f, 84.2884f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 107.64615f, -933.997f, 44.6149f };
			uParam1->f_23 = { 54.39706f, -914.7451f, 166.6149f };
			uParam1->f_26 = 85f;
			break;
		case 415:
			uParam1->f_4 = { 185.776f, 255.676f, 140.478f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 179.02353f, 227.56018f, 135.9282f };
			uParam1->f_23 = { 200.98013f, 288.23972f, 220.92818f };
			uParam1->f_26 = 28f;
			break;
		case 416:
			uParam1->f_4 = { 1240.408f, -2994.69f, 11.164f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1240.5659f, -3002.2239f, 3.319258f };
			uParam1->f_23 = { 1240.2728f, -2950.4558f, 88.31926f };
			uParam1->f_26 = 27f;
			break;
		case 417:
			uParam1->f_4 = { -137.675f, 6176.477f, 39.165f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -149.82231f, 6160.892f, 35.822548f };
			uParam1->f_23 = { -115.87742f, 6195.7886f, 121.92149f };
			uParam1->f_26 = 32f;
			break;
		case 418:
			uParam1->f_4 = { 2740.51f, 3474.729f, 72.704f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2722.1108f, 3442.816f, 66.5176f };
			uParam1->f_23 = { 2751.0098f, 3512.0186f, 152.5181f };
			uParam1->f_26 = 27f;
			break;
		case 419:
			uParam1->f_4 = { 1710.586f, 4779.984f, 46.585f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1711.055f, 4760.7646f, 41.41178f };
			uParam1->f_23 = { 1711.034f, 4790.0547f, 127.412865f };
			uParam1->f_26 = 30f;
			break;
		case 420:
			uParam1->f_4 = { 590.234f, 2763.851f, 50.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 598.3928f, 2744.5093f, 44.435173f };
			uParam1->f_23 = { 595.88354f, 2782.8347f, 127.9985f };
			uParam1->f_26 = 52f;
			break;
		case 421:
			uParam1->f_4 = { 734.51f, 1292.156f, 359.296f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 739.7446f, 1288.6091f, 353.29666f };
			uParam1->f_23 = { 769.9889f, 1287.5094f, 439.29666f };
			uParam1->f_26 = 55f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		case 422:
			uParam1->f_4 = { -1111.574f, 2704.87f, 22.841f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1123.0269f, 2693.3582f, 17.492786f };
			uParam1->f_23 = { -1098.1118f, 2716.403f, 102.483894f };
			uParam1->f_26 = 22f;
			break;
		case 423:
			uParam1->f_4 = { 1518.6439f, 3578.3745f, 41.0232f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1542.9409f, 3591.8179f, 35.10985f };
			uParam1->f_23 = { 1506.1976f, 3570.4502f, 121.11191f };
			uParam1->f_26 = 18f;
			break;
		case 424:
			uParam1->f_4 = { -1594.487f, 763.167f, 188.194f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1613.7874f, 760.4377f, 182.2431f };
			uParam1->f_23 = { -1563.257f, 784.19965f, 275.94962f };
			uParam1->f_26 = 45f;
			break;
		case 425:
			uParam1->f_4 = { 250.021f, 3610.677f, 32.931f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 239.75056f, 3564.6692f, 27.761375f };
			uParam1->f_23 = { 249.51248f, 3627.261f, 112.543686f };
			uParam1->f_26 = 48f;
			break;
		case 426:
			uParam1->f_4 = { 156.196f, 7353.579f, 10.521f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 137.43742f, 7337.5366f, 2.219269f };
			uParam1->f_23 = { 177.06898f, 7369.922f, 90.69885f };
			uParam1->f_26 = 48f;
			break;
		case 427:
			uParam1->f_4 = { 2936.501f, 777.473f, 25.68f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2904.6218f, 760.8602f, 12.970413f };
			uParam1->f_23 = { 2958.9998f, 809.29285f, 102.531136f };
			uParam1->f_26 = 48f;
			break;
		case 428:
			uParam1->f_4 = { 3623.009f, 5676.726f, 6.772f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3596.0598f, 5674.643f, 1.261269f };
			uParam1->f_23 = { 3674.8691f, 5651.38f, 102.20145f };
			uParam1->f_26 = 39.25f;
			break;
		case 429:
			uParam1->f_4 = { 2373.8376f, 6615.3403f, 1.1413f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2385.575f, 6643.9385f, -11.103401f };
			uParam1->f_23 = { 2372.5842f, 6580.026f, 87.70878f };
			uParam1->f_26 = 60f;
			break;
		case 430:
			uParam1->f_4 = { -2589.9417f, 1884.4567f, 170.4919f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2597.9607f, 1873.4514f, 165.67989f };
			uParam1->f_23 = { -2576.0771f, 1892.2828f, 250.49304f };
			uParam1->f_26 = 20f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		case 431:
			uParam1->f_4 = { -494.282f, 5289.946f, 79.61f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -512.15063f, 5246.9595f, 74.31995f };
			uParam1->f_23 = { -486.86267f, 5314.7456f, 166.48029f };
			uParam1->f_26 = 35f;
			break;
	}
}

void func_139(int iParam0, var uParam1)//Position - 0x356C1
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	MISC::SET_BIT(&(uParam1->f_16), 5);
	switch (iParam0)
	{
		case 382:
			uParam1->f_4 = { 874.777f, 2344.294f, 50.686f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 861.02515f, 2349.3838f, 49.647938f };
			uParam1->f_23 = { 881.1734f, 2349.6575f, 70.690796f };
			uParam1->f_26 = 30f;
			break;
		case 383:
			uParam1->f_4 = { -7.204f, 6199.675f, 38.755f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3.588748f, 6194.031f, 30.691616f };
			uParam1->f_23 = { -18.894112f, 6213.56f, 70.39188f };
			uParam1->f_26 = 45f;
			break;
		case 384:
			uParam1->f_4 = { 1991.296f, 5002.771f, 40.41f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1982.4972f, 5013.054f, 37.34918f };
			uParam1->f_23 = { 2002.3169f, 4990.8916f, 70.40779f };
			uParam1->f_26 = 40f;
			break;
		case 385:
			uParam1->f_4 = { 1787.863f, 3397.899f, 39.721f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1779.7404f, 3394.0332f, 36.238174f };
			uParam1->f_23 = { 1803.4008f, 3407.283f, 69.5711f };
			uParam1->f_26 = 40f;
			break;
		case 386:
			uParam1->f_4 = { -2022.113f, 561.086f, 106.95f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2024.8531f, 543.6421f, 106.16757f };
			uParam1->f_23 = { -2018.6019f, 575.48865f, 139.33495f };
			uParam1->f_26 = 32f;
			break;
		case 387:
			uParam1->f_4 = { 3848.9487f, 4749.0522f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3857.233f, 4736.3154f, 2.018371f };
			uParam1->f_23 = { 3841.512f, 4761.041f, 30.149063f };
			uParam1->f_26 = 25f;
			break;
		case 388:
			uParam1->f_4 = { 942.1198f, 6940.5366f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 939.61896f, 6925.514f, 1.983978f };
			uParam1->f_23 = { 944.59204f, 6954.486f, 29.812134f };
			uParam1->f_26 = 25f;
			break;
		case 389:
			uParam1->f_4 = { -757.7433f, 6175.5415f, 4.1283f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -771.9074f, 6176.819f, 2.186861f };
			uParam1->f_23 = { -743.0279f, 6174.7607f, 30.680489f };
			uParam1->f_26 = 25f;
			break;
		case 390:
			uParam1->f_4 = { -1807.1444f, 5279.7256f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1812.9233f, 5266.89f, 2.169169f };
			uParam1->f_23 = { -1800.9961f, 5293.8145f, 30.289665f };
			uParam1->f_26 = 25f;
			break;
		case 391:
			uParam1->f_4 = { -3414.893f, 1565.5381f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3428.2915f, 1561.2922f, 2.13642f };
			uParam1->f_23 = { -3400.5085f, 1570.3624f, 30.369434f };
			uParam1->f_26 = 25f;
			break;
		case 392:
			uParam1->f_4 = { -347.548f, -2421.686f, 1.652f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -359.11487f, -2435.0981f, -1.131242f };
			uParam1->f_23 = { -336.07132f, -2407.6287f, 26.869577f };
			uParam1->f_26 = 9f;
			break;
		case 393:
			uParam1->f_4 = { 1043.372f, -2881.166f, 18.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1024.1885f, -2880.9717f, 15.035818f };
			uParam1->f_23 = { 1063.5406f, -2881.016f, 43.03582f };
			uParam1->f_26 = 30f;
			break;
		case 394:
			uParam1->f_4 = { 924.896f, -1240.747f, 24.524f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 932.9946f, -1260.5745f, 22.685463f };
			uParam1->f_23 = { 912.22144f, -1232.2662f, 49.51196f };
			uParam1->f_26 = 30f;
			break;
		case 395:
			uParam1->f_4 = { -451.996f, -918.816f, 46.985f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -451.65112f, -935.54376f, 43.984642f };
			uParam1->f_23 = { -452.48764f, -897.9177f, 71.98894f };
			uParam1->f_26 = 25f;
			break;
		case 396:
			uParam1->f_4 = { 1147.597f, 124.969f, 80.967f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1133.214f, 100.168526f, 77.02354f };
			uParam1->f_23 = { 1163.7108f, 149.81491f, 104.885765f };
			uParam1->f_26 = 60f;
			break;
		case 397:
			uParam1->f_4 = { 673.841f, 1285.48f, 362.103f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 675.87164f, 1288.757f, 356.296f };
			uParam1->f_23 = { 676.0979f, 1276.2595f, 384.296f };
			uParam1->f_26 = 30f;
			break;
		case 398:
			uParam1->f_4 = { -2316.1685f, -1328.5548f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2322.772f, -1342.0417f, 2.358489f };
			uParam1->f_23 = { -2309.9294f, -1315.937f, 30.416939f };
			uParam1->f_26 = 25f;
			break;
		case 399:
			uParam1->f_4 = { 2288.2617f, -2547.099f, -24.1587f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2278.6948f, -2557.841f, 2.410532f };
			uParam1->f_23 = { 2298.0146f, -2536.5073f, 30.381504f };
			uParam1->f_26 = 25f;
			break;
		case 400:
			uParam1->f_4 = { 3107.64f, 822.0205f, -5.6705f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3117.8567f, 811.9422f, 2.199003f };
			uParam1->f_23 = { 3097.107f, 831.8228f, 30.358337f };
			uParam1->f_26 = 25f;
			break;
		case 401:
			uParam1->f_4 = { 3430.34f, 2275.2437f, -21.7691f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3422.7224f, 2263.081f, 2.113419f };
			uParam1->f_23 = { 3438.1653f, 2287.4429f, 30.348886f };
			uParam1->f_26 = 25f;
			break;
	}
}

void func_140(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x35DFE
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = { -1132.0187f, -3481.4395f, 36.94393f };
			*uParam2 = { -1227.9209f, -3426.592f, 136.80727f };
			*uParam3 = 100f;
			break;
		case 2:
			*uParam1 = { -1381.3502f, -3303.0198f, 29.996233f };
			*uParam2 = { -1434.0883f, -3272.819f, 130.9934f };
			*uParam3 = 45f;
			break;
		case 3:
			*uParam1 = { -2019.9495f, 3159.6804f, 48.58803f };
			*uParam2 = { -1979.7771f, 3229.2375f, 156.58911f };
			*uParam3 = 70f;
			break;
		case 4:
			*uParam1 = { -1876.7441f, 3111.0808f, 43.719162f };
			*uParam2 = { -1850.549f, 3156.4512f, 148.72247f };
			*uParam3 = 33f;
			break;
		case 5:
			*uParam1 = { -2468.4421f, 3278.0735f, 43.713802f };
			*uParam2 = { -2442.2034f, 3323.376f, 148.73094f };
			*uParam3 = 33f;
			break;
	}
}

Vector3 func_141(int iParam0)//Position - 0x35F20
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			Var0 = { -1148.6279f, -3403.893f, 12.945f };
			break;
		case 2:
			Var0 = { -1391.4531f, -3259.5642f, 12.9448f };
			break;
		case 3:
			Var0 = { -2025.2025f, 3150.5723f, 31.8103f };
			break;
		case 4:
			Var0 = { -1881.5845f, 3102.0073f, 31.8103f };
			break;
		case 5:
			Var0 = { -2473.6804f, 3267.9905f, 31.8461f };
			break;
	}
	return Var0;
}

Vector3 func_142(int iParam0)//Position - 0x35FC6
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			Var0 = { -1152.4313f, -3410.4202f, 12.945f };
			break;
		case 2:
			Var0 = { -1395.3582f, -3266.3525f, 12.9448f };
			break;
		case 3:
			Var0 = { -2020.9714f, 3157.293f, 31.8103f };
			break;
		case 4:
			Var0 = { -1877.7657f, 3108.9211f, 31.8103f };
			break;
		case 5:
			Var0 = { -2469.7173f, 3275.254f, 31.8325f };
			break;
	}
	return Var0;
}

void func_143(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x360DC
{
	if (iParam1 == 4)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (((((((iParam1 == 6 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

void func_144(int iParam0, var uParam1)//Position - 0x362EE
{
	if (iParam0 > 256)
	{
		switch (iParam0)
		{
			case 307:
				uParam1->f_4 = { -115.4032f, 1416.1228f, 294.134f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 308:
				uParam1->f_4 = { 156.6951f, 703.3265f, 207.1029f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 309:
				uParam1->f_4 = { 2538.2393f, -199.7805f, 72.551f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 310:
				uParam1->f_4 = { 659.4763f, -491.1226f, 14.688f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 311:
				uParam1->f_4 = { 1411.4135f, 1051.7147f, 113.3343f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 312:
				uParam1->f_4 = { -583.498f, -1453.7261f, 9.2096f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 313:
				uParam1->f_4 = { 1582.1805f, -2009.4749f, 92.7024f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 314:
				uParam1->f_4 = { 1563.9694f, -2677.0903f, 36.8862f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 315:
				uParam1->f_4 = { 1110.3373f, -3080.7673f, 4.8473f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 316:
				uParam1->f_4 = { 369.0472f, -2431.2852f, 5.0417f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 317:
				uParam1->f_4 = { -758.4178f, -2595.9338f, 12.8285f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 318:
				uParam1->f_4 = { 732.8478f, -1518.7463f, 18.7068f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 319:
				uParam1->f_4 = { -815.6332f, -1819.3187f, 27.6752f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 320:
				uParam1->f_4 = { 1234.6619f, -2689.2505f, 1.4614f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 321:
				uParam1->f_4 = { 271.8187f, -2501.8909f, 5.4403f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 322:
				uParam1->f_4 = { 395.6607f, 32.3907f, 90.4966f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 323:
				uParam1->f_4 = { -1049.0134f, -89.9484f, 42.5869f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 324:
				uParam1->f_4 = { 1345.9629f, -1025.3956f, 38.9002f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 325:
				uParam1->f_4 = { -1630.3453f, -1124.8622f, 1.0889f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 326:
				uParam1->f_4 = { 5.3001f, -1102.7137f, 37.152f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 327:
				uParam1->f_4 = { 613.4843f, -1108.7843f, 9.1824f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 328:
				uParam1->f_4 = { -350.6446f, -1188.9392f, 21.9375f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 329:
				uParam1->f_4 = { 2486.714f, -1989.5208f, 66.1648f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 330:
				uParam1->f_4 = { 610.8346f, -2850.1663f, 2.095f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 331:
				uParam1->f_4 = { 508.5753f, -2309.013f, 4.9173f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 332:
				uParam1->f_4 = { 865.9128f, 831.9396f, 167.0572f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 333:
				uParam1->f_4 = { 438.3826f, 790.9186f, 193.4617f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 334:
				uParam1->f_4 = { 2174.2297f, 129.0715f, 227.4601f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 335:
				uParam1->f_4 = { -430.7544f, -566.5062f, 26.6955f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 336:
				uParam1->f_4 = { 820.8608f, -487.1843f, 29.3492f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 337:
				uParam1->f_4 = { -927.1212f, -754.834f, 18.7713f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 338:
				uParam1->f_4 = { 2826.0066f, -744.9128f, 16.3986f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 339:
				uParam1->f_4 = { -347.0302f, -1714.7363f, 0.1588f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 340:
				uParam1->f_4 = { 1165.3328f, -2217.1558f, 29.818f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 341:
				uParam1->f_4 = { 732.7329f, -724.3032f, 25.5982f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 342:
				uParam1->f_4 = { -534.8953f, -893.4067f, 23.3456f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 343:
				uParam1->f_4 = { -1483.7996f, -1478.8672f, 1.5746f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 344:
				uParam1->f_4 = { 660.1437f, -1662.9365f, 8.7057f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 345:
				uParam1->f_4 = { 756.9075f, -2560.2788f, 9.1108f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 346:
				uParam1->f_4 = { -688.3148f, -2474.5986f, 12.8285f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 347:
				uParam1->f_4 = { -344.8739f, 1373.6272f, 339.4823f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 348:
				uParam1->f_4 = { 679.5253f, 1213.0343f, 323.3946f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 349:
				uParam1->f_4 = { 402.2882f, 1033.3969f, 236.317f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 350:
				uParam1->f_4 = { 1994.4613f, 497.7719f, 162.3902f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 351:
				uParam1->f_4 = { -71.2453f, 184.6311f, 86.3855f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			case 352:
				uParam1->f_4 = { -423.4632f, 865.8475f, 233.0571f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 353:
				uParam1->f_4 = { -1040.6815f, 918.1884f, 168.968f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 354:
				uParam1->f_4 = { -1540.535f, 332.4937f, 84.6292f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 355:
				uParam1->f_4 = { -1984.6556f, -248.1744f, 33.4115f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 356:
				uParam1->f_4 = { -359.8619f, -92.1446f, 44.662f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			}
	}
	switch (iParam0)
	{
		case 257:
			uParam1->f_4 = { 2347.5264f, 5563.6797f, 38.5584f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 258:
			uParam1->f_4 = { 2732.7122f, 5221.74f, 50.1412f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 259:
			uParam1->f_4 = { -203.4516f, 4426.908f, 45.1766f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 260:
			uParam1->f_4 = { 1402.9407f, 2107.9316f, 104.4429f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 261:
			uParam1->f_4 = { 1913.3085f, 3726.8713f, 31.4625f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 262:
			uParam1->f_4 = { 77.0293f, 7077.3076f, 0.9681f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 263:
			uParam1->f_4 = { 1468.9604f, 4947.4727f, 75.1823f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 264:
			uParam1->f_4 = { -126.1526f, 3546.554f, 55.0922f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 265:
			uParam1->f_4 = { 1063.1115f, 3275.5015f, 36.6055f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 266:
			uParam1->f_4 = { -509.5927f, 5242.9717f, 79.304f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 267:
			uParam1->f_4 = { 2351.0586f, 5001.8f, 41.7707f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 268:
			uParam1->f_4 = { 1824.4545f, 4733.53f, 32.5693f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 269:
			uParam1->f_4 = { -1844.6897f, 4556.438f, 4.9786f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 270:
			uParam1->f_4 = { -1376.3236f, 4413.6875f, 28.537f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 271:
			uParam1->f_4 = { -18.1656f, 6261.2383f, 30.2358f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 272:
			uParam1->f_4 = { 570.2625f, 4177.6675f, 37.1188f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 273:
			uParam1->f_4 = { -445.1836f, 4015.9512f, 80.0153f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 274:
			uParam1->f_4 = { 1440.2977f, 2804.806f, 51.8026f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 275:
			uParam1->f_4 = { -2103.8967f, 2473.4958f, 0.5534f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 276:
			uParam1->f_4 = { -80.3433f, 1879.3817f, 196.2338f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 277:
			uParam1->f_4 = { -494.58f, 5547.659f, 72.4075f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 278:
			uParam1->f_4 = { 1262.8695f, 4384.995f, 43.9866f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 279:
			uParam1->f_4 = { 825.5037f, 2137.788f, 51.2936f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 280:
			uParam1->f_4 = { -2911.5293f, 1592.0343f, 28.2507f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 281:
			uParam1->f_4 = { -1658.6764f, 3045.86f, 30.8135f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 282:
			uParam1->f_4 = { 813.8033f, 6638.8286f, 1.0195f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 283:
			uParam1->f_4 = { 143.9241f, 6317.5327f, 30.474f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 284:
			uParam1->f_4 = { -291.3325f, 6303.2754f, 30.4923f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 285:
			uParam1->f_4 = { -575.9571f, 5846.869f, 28.8116f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 286:
			uParam1->f_4 = { 2515.608f, 4962.869f, 43.5619f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 287:
			uParam1->f_4 = { 2900.8867f, 4637.51f, 47.5426f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 288:
			uParam1->f_4 = { 1993.7156f, 3934.452f, 31.23f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 289:
			uParam1->f_4 = { 124.3457f, 3004.6248f, 47.3517f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 290:
			uParam1->f_4 = { 754.0544f, 2336.919f, 49.0994f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 291:
			uParam1->f_4 = { 2746.92f, 1444.5044f, 23.4889f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 292:
			uParam1->f_4 = { 1550.9885f, 6543.8936f, 21.4149f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 293:
			uParam1->f_4 = { 993.5634f, 6403.824f, 28.4137f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 294:
			uParam1->f_4 = { 1623.7128f, 3783.4639f, 33.652f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 295:
			uParam1->f_4 = { 2623.7212f, 1971.464f, 29.141f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 296:
			uParam1->f_4 = { 2899.7607f, 4382.502f, 49.3713f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 297:
			uParam1->f_4 = { 2581.925f, 5608.7485f, 59.9163f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 298:
			uParam1->f_4 = { 2236.6985f, 4785.6587f, 39.1814f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 299:
			uParam1->f_4 = { 1158.3419f, 4584.4165f, 73.9566f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 300:
			uParam1->f_4 = { 1495.8f, 4599.0034f, 50.9645f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 301:
			uParam1->f_4 = { 1988.4698f, 3033.7903f, 46.0563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		case 302:
			uParam1->f_4 = { -1640.2533f, 4581.0366f, 41.8798f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 303:
			uParam1->f_4 = { 2607.2266f, 4441.909f, 39.0584f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 304:
			uParam1->f_4 = { -1204.7871f, 4448.3267f, 30.2424f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 305:
			uParam1->f_4 = { -2302.3362f, 4116.885f, 27.3913f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 306:
			uParam1->f_4 = { 468.1049f, 3546.3735f, 32.2386f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
	}
	if (((((((((((((((((((iParam0 != 261 && iParam0 != 266) && iParam0 != 271) && iParam0 != 276) && iParam0 != 281) && iParam0 != 286) && iParam0 != 291) && iParam0 != 296) && iParam0 != 301) && iParam0 != 306) && iParam0 != 311) && iParam0 != 316) && iParam0 != 321) && iParam0 != 326) && iParam0 != 331) && iParam0 != 336) && iParam0 != 341) && iParam0 != 346) && iParam0 != 351) && iParam0 != 356)
	{
		MISC::SET_BIT(&(uParam1->f_16), 2);
	}
}

void func_145(int iParam0, var uParam1)//Position - 0x37443
{
	if (iParam0 > 156)
	{
		switch (iParam0)
		{
			case 207:
				uParam1->f_4 = { -2191.674f, 904.894f, 228.613f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 208:
				uParam1->f_4 = { -2512.552f, 761.624f, 300.404f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 209:
				uParam1->f_4 = { -2554.847f, 279.211f, 184.89f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 210:
				uParam1->f_4 = { -2267.61f, -26.611f, 111.309f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 211:
				uParam1->f_4 = { -1705.979f, -82.071f, 79.054f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 212:
				uParam1->f_4 = { 2581.854f, -775.529f, 84.981f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 213:
				uParam1->f_4 = { 2155.905f, -1111.007f, 172.283f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 214:
				uParam1->f_4 = { 2048.335f, -1619.833f, 234.082f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 215:
				uParam1->f_4 = { 1880.627f, -1864.139f, 192.18f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 216:
				uParam1->f_4 = { 1827.189f, -2349.425f, 146.409f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 217:
				uParam1->f_4 = { 1893.68f, -885.746f, 117.794f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 218:
				uParam1->f_4 = { 1495.998f, -1275.113f, 121.534f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 219:
				uParam1->f_4 = { 1269.73f, -941.188f, 77.584f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 220:
				uParam1->f_4 = { 1582.159f, -635.642f, 147.727f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 221:
				uParam1->f_4 = { 1841.793f, -237.63f, 293.53f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 222:
				uParam1->f_4 = { 2216.092f, 246.356f, 258.916f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 223:
				uParam1->f_4 = { 2205.155f, 591.884f, 261.37f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 224:
				uParam1->f_4 = { 2089.61f, 971.773f, 213.314f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 225:
				uParam1->f_4 = { 1885.172f, 997.583f, 274.815f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 226:
				uParam1->f_4 = { 1830.645f, 1496.993f, 119.015f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 227:
				uParam1->f_4 = { 1050.058f, 1020.909f, 249.595f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 228:
				uParam1->f_4 = { 1311.87f, 720.812f, 85.503f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 229:
				uParam1->f_4 = { 1619.17f, 450.971f, 250.382f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 230:
				uParam1->f_4 = { 1589.916f, 95.761f, 209.272f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 231:
				uParam1->f_4 = { 1169.067f, -147.911f, 55.814f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 232:
				uParam1->f_4 = { 980.968f, 716.382f, 192.186f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 233:
				uParam1->f_4 = { 822.654f, 1314.468f, 362.31f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 234:
				uParam1->f_4 = { 358.749f, 1186.109f, 266.835f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 235:
				uParam1->f_4 = { 409.162f, 712.279f, 196.507f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 236:
				uParam1->f_4 = { 568.269f, 431.24f, 171.505f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 237:
				uParam1->f_4 = { 442.851f, 1711.104f, 258.1f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 238:
				uParam1->f_4 = { 489.231f, 1446.313f, 350.169f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 239:
				uParam1->f_4 = { -39.039f, 1563.259f, 297.352f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 240:
				uParam1->f_4 = { -96.733f, 1265.517f, 302.811f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 241:
				uParam1->f_4 = { 186.677f, 1038.29f, 243.259f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 242:
				uParam1->f_4 = { 125.427f, 1435.429f, 261.481f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 243:
				uParam1->f_4 = { -471.373f, 1525.389f, 390.228f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 244:
				uParam1->f_4 = { -891.67f, 1297.359f, 300.137f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 245:
				uParam1->f_4 = { -1022.612f, 1641.04f, 258.438f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 246:
				uParam1->f_4 = { -1363.53f, 1662.061f, 176.57f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 247:
				uParam1->f_4 = { -1135.81f, 1901.406f, 175.34f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 248:
				uParam1->f_4 = { -1043.954f, 1592.751f, 265.3f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 249:
				uParam1->f_4 = { -1289.223f, 1127.897f, 280.162f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 250:
				uParam1->f_4 = { -1547.309f, 724.521f, 202.398f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 251:
				uParam1->f_4 = { -1766.17f, 613.099f, 179.457f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 252:
				uParam1->f_4 = { -1616.113f, 794.88f, 184.868f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 253:
				uParam1->f_4 = { -1948.807f, 1081.29f, 256.194f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 254:
				uParam1->f_4 = { -2354.82f, 1293.149f, 330.953f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 255:
				uParam1->f_4 = { -1947.759f, 1503.9f, 269.274f };
				*uParam1 = { uParam1->f_4 };
				break;
			case 256:
				uParam1->f_4 = { -1736.649f, 1771.232f, 197.702f };
				*uParam1 = { uParam1->f_4 };
				break;
			}
	}
	switch (iParam0)
	{
		case 157:
			uParam1->f_4 = { 2166.96f, 5773.108f, 176.947f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 158:
			uParam1->f_4 = { 1794.606f, 5805.495f, 334.124f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 159:
			uParam1->f_4 = { 1311.736f, 5810.9f, 471.065f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 160:
			uParam1->f_4 = { 803.115f, 5696.31f, 696.74f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 161:
			uParam1->f_4 = { 505.028f, 5524.13f, 775.336f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 162:
			uParam1->f_4 = { 2678.877f, 2657.504f, 81.457f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 163:
			uParam1->f_4 = { 2950.072f, 2508.028f, 163.35f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 164:
			uParam1->f_4 = { 2802.67f, 2057.809f, 123.411f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 165:
			uParam1->f_4 = { 2383.232f, 1815.577f, 90.89f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 166:
			uParam1->f_4 = { 2119.9792f, 1718.67f, 100.1659f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 167:
			uParam1->f_4 = { 2985.565f, 4871.652f, 126.073f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 168:
			uParam1->f_4 = { 3193.98f, 4728.654f, 191.278f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 169:
			uParam1->f_4 = { 3443.923f, 4200.008f, 239.302f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 170:
			uParam1->f_4 = { 3090.46f, 3505.364f, 122.488f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 171:
			uParam1->f_4 = { 2956.266f, 3130.24f, 170.545f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 172:
			uParam1->f_4 = { -114.5166f, 4366.3047f, 66.5739f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 173:
			uParam1->f_4 = { -389.1314f, 4714.173f, 262.0202f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 174:
			uParam1->f_4 = { -927.3663f, 4830.777f, 308.1317f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 175:
			uParam1->f_4 = { -947.983f, 4616.67f, 238.343f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 176:
			uParam1->f_4 = { -1193.1351f, 4791.787f, 219.39f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 177:
			uParam1->f_4 = { -547.3558f, 3063.189f, 41.6977f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 178:
			uParam1->f_4 = { -788.8897f, 3439.2634f, 163.2574f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 179:
			uParam1->f_4 = { -693.747f, 3633.7327f, 290.969f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 180:
			uParam1->f_4 = { -524.5084f, 3545.8193f, 235.8375f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 181:
			uParam1->f_4 = { -299.48f, 3403.1494f, 143.3759f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 182:
			uParam1->f_4 = { -757.9035f, 3107.5188f, 87.9309f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 183:
			uParam1->f_4 = { -936.9541f, 3343.8281f, 214.99f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 184:
			uParam1->f_4 = { -976.6102f, 3827.8462f, 428.4182f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 185:
			uParam1->f_4 = { -1172.5184f, 3833.2788f, 483.9537f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 186:
			uParam1->f_4 = { -1296.5997f, 3683.4307f, 425.8118f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 187:
			uParam1->f_4 = { 1806.7881f, 6509.859f, 69.7009f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 188:
			uParam1->f_4 = { 2136.8179f, 6427.5757f, 153.6458f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 189:
			uParam1->f_4 = { 2412.8965f, 6475.143f, 72.3587f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 190:
			uParam1->f_4 = { 2827.7612f, 5967.5063f, 350.351f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 191:
			uParam1->f_4 = { 3061.1804f, 5557.61f, 195.6185f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 192:
			uParam1->f_4 = { 2626.2576f, 3660.5015f, 100.4183f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 193:
			uParam1->f_4 = { 1727.974f, 3046.8176f, 58.9817f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 194:
			uParam1->f_4 = { 537.097f, 3362.1672f, 98.3086f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 195:
			uParam1->f_4 = { -314.4719f, 3789.605f, 67.1712f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 196:
			uParam1->f_4 = { -544.3684f, 4198.8013f, 191.2337f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 197:
			uParam1->f_4 = { -1634.4612f, 1987.978f, 114.3933f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 198:
			uParam1->f_4 = { -1946.9988f, 1558.0131f, 268.019f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 199:
			uParam1->f_4 = { -2367.7488f, 1294.9072f, 331.8613f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 200:
			uParam1->f_4 = { -2725.2305f, 1248.9304f, 132.6765f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 201:
			uParam1->f_4 = { -3247.4492f, 1246.8092f, 1.6992f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 202:
			uParam1->f_4 = { 2487.3506f, 5210.566f, 70.7697f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 203:
			uParam1->f_4 = { 2153.8425f, 5382.093f, 164.5574f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 204:
			uParam1->f_4 = { 1663.6813f, 5156.728f, 152.0881f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 205:
			uParam1->f_4 = { 1398.8035f, 5181.02f, 224.986f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 206:
			uParam1->f_4 = { 862.0489f, 5172.775f, 456.8228f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
	if (((((((((((((((((((iParam0 != 161 && iParam0 != 166) && iParam0 != 171) && iParam0 != 176) && iParam0 != 181) && iParam0 != 186) && iParam0 != 191) && iParam0 != 196) && iParam0 != 201) && iParam0 != 206) && iParam0 != 211) && iParam0 != 216) && iParam0 != 221) && iParam0 != 226) && iParam0 != 231) && iParam0 != 236) && iParam0 != 241) && iParam0 != 246) && iParam0 != 251) && iParam0 != 256)
	{
		MISC::SET_BIT(&(uParam1->f_16), 2);
	}
}

void func_146(int iParam0, var uParam1)//Position - 0x384D2
{
	switch (iParam0)
	{
		case 92:
			uParam1->f_4 = { 2875.4678f, 2806.3674f, 53.7213f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 93:
			uParam1->f_4 = { 1052.251f, 2670.066f, 38.551f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 94:
			uParam1->f_4 = { -833.729f, 1714.583f, 191.577f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 95:
			uParam1->f_4 = { -2653.676f, 2422.161f, 3.925f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 96:
			uParam1->f_4 = { -3048.3418f, 602.2847f, 6.2691f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 97:
			uParam1->f_4 = { 1068.72f, 3588.034f, 30.602f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 98:
			uParam1->f_4 = { 138.118f, 3119.263f, 41.636f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 99:
			uParam1->f_4 = { -1285.809f, 2593.4087f, 11.3524f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 100:
			uParam1->f_4 = { -2417.672f, 4110.082f, 17.934f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 101:
			uParam1->f_4 = { -292.009f, 6130.332f, 30.501f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 102:
			uParam1->f_4 = { -140.7524f, 6356.9937f, 30.4906f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 103:
			uParam1->f_4 = { 1449.218f, 6579.69f, 11.894f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 104:
			uParam1->f_4 = { 2399.676f, 4911.915f, 41.464f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 105:
			uParam1->f_4 = { 1706.076f, 3872.908f, 33.904f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 106:
			uParam1->f_4 = { 435.271f, 3522.796f, 32.626f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 107:
			uParam1->f_4 = { 1187.571f, 6561.227f, 1.997f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 108:
			uParam1->f_4 = { 2486.772f, 4816.758f, 33.768f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 109:
			uParam1->f_4 = { 1488.547f, 3701.168f, 33.382f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 110:
			uParam1->f_4 = { 1522.554f, 1669.512f, 109.698f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 111:
			uParam1->f_4 = { 2309.18f, 2518.352f, 45.667f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 112:
			uParam1->f_4 = { 1095.315f, 2109.932f, 52.42f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 113:
			uParam1->f_4 = { 1376.68f, 3599.511f, 33.881f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 114:
			uParam1->f_4 = { 2952.854f, 4253.191f, 52.768f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 115:
			uParam1->f_4 = { 2263.006f, 5612.513f, 53.817f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 116:
			uParam1->f_4 = { 1465.186f, 6356f, 22.836f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 117:
			uParam1->f_4 = { 1929.979f, 4642.605f, 39.444f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 118:
			uParam1->f_4 = { 1803.659f, 3731.653f, 32.819f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 119:
			uParam1->f_4 = { 1034.936f, 2514.938f, 45.828f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 120:
			uParam1->f_4 = { 1215.731f, 1819.276f, 77.957f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 121:
			uParam1->f_4 = { 2700.918f, 1559.111f, 23.527f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 122:
			uParam1->f_4 = { 186.915f, 3056.921f, 41.959f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 123:
			uParam1->f_4 = { -124.3542f, 1883.4944f, 196.7805f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 124:
			uParam1->f_4 = { 1433.6195f, 1182.6066f, 113.194f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 125:
			uParam1->f_4 = { 2077.1995f, 2340.7576f, 93.3144f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 126:
			uParam1->f_4 = { 2869.9194f, 4711.4854f, 47.8156f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 127:
			uParam1->f_4 = { -3196.817f, 962.4005f, 17.1183f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 128:
			uParam1->f_4 = { -3043.2593f, 133.9678f, 10.6028f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 129:
			uParam1->f_4 = { -1657.0238f, -224.0322f, 54.0132f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 130:
			uParam1->f_4 = { -1065.0024f, -1443.4788f, 4.4254f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 131:
			uParam1->f_4 = { 37.752f, -1608.548f, 28.357f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 132:
			uParam1->f_4 = { -1174.6304f, -735.4771f, 19.2095f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 133:
			uParam1->f_4 = { -1336.968f, -1297.628f, 3.838f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 134:
			uParam1->f_4 = { 372.931f, -2132.614f, 15.2837f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 135:
			uParam1->f_4 = { 164.893f, -981.952f, 29.092f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 136:
			uParam1->f_4 = { -633.342f, -71.931f, 39.44f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 137:
			uParam1->f_4 = { -3109.526f, 221.046f, 5.814f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 138:
			uParam1->f_4 = { -1917.599f, 629.539f, 124.01f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 139:
			uParam1->f_4 = { -1291.788f, -268.334f, 38.298f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 140:
			uParam1->f_4 = { -97.476f, 91.144f, 70.777f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 141:
			uParam1->f_4 = { 860.49f, -916.962f, 24.923f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 142:
			uParam1->f_4 = { 1359.713f, 1147.2898f, 113.3128f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 143:
			uParam1->f_4 = { 643.5014f, 195.1281f, 95.1524f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 144:
			uParam1->f_4 = { 477.2894f, -1158.1477f, 28.2918f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 145:
			uParam1->f_4 = { 12.1334f, -1742.4001f, 28.3029f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 146:
			uParam1->f_4 = { 946.0427f, -2185.876f, 29.5616f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 147:
			uParam1->f_4 = { -672.3598f, -1823.9357f, 27.8611f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 148:
			uParam1->f_4 = { 18.1799f, -2485.0813f, 5.0068f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 149:
			uParam1->f_4 = { 1096.5426f, -3142.2693f, 4.9008f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 150:
			uParam1->f_4 = { 1129.2649f, -2382.2844f, 30.2488f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 151:
			uParam1->f_4 = { 1735.333f, -1431.009f, 111.637f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 152:
			uParam1->f_4 = { 313.451f, -2022.1349f, 19.4894f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 153:
			uParam1->f_4 = { 1142.6357f, -2511.3953f, 32.2916f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 154:
			uParam1->f_4 = { 1687.5365f, -1583.2422f, 111.5227f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 155:
			uParam1->f_4 = { 1374.8936f, -739.6987f, 66.2329f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 156:
			uParam1->f_4 = { 1902.062f, 418.819f, 162.108f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
	if ((((((((((((iParam0 != 96 && iParam0 != 101) && iParam0 != 106) && iParam0 != 111) && iParam0 != 116) && iParam0 != 121) && iParam0 != 126) && iParam0 != 131) && iParam0 != 136) && iParam0 != 141) && iParam0 != 146) && iParam0 != 151) && iParam0 != 156)
	{
		MISC::SET_BIT(&(uParam1->f_16), 2);
	}
}

void func_147(int iParam0, var uParam1)//Position - 0x38F92
{
	switch (iParam0)
	{
		case 72:
			uParam1->f_4 = { -227.4169f, 2062.3848f, 138.4856f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 73:
			uParam1->f_4 = { 2772.322f, 2845.9636f, 34.8882f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 74:
			uParam1->f_4 = { 2989.1829f, 3466.004f, 70.351f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 75:
			uParam1->f_4 = { -2666.3462f, 3455.6724f, 14.1713f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 76:
			uParam1->f_4 = { 1492.691f, 3579.0828f, 34.2291f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 77:
			uParam1->f_4 = { -2379.7112f, 4278.755f, 9.1551f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 78:
			uParam1->f_4 = { 2500.7375f, 4294.372f, 38.1973f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 79:
			uParam1->f_4 = { -1848.6257f, 4419.534f, 48.1508f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 80:
			uParam1->f_4 = { -1566.0024f, 4485.8955f, 20.2007f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 81:
			uParam1->f_4 = { -386.5953f, 6380.837f, 13.0622f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 82:
			uParam1->f_4 = { 1186.3239f, -3241.4265f, 5.0288f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 83:
			uParam1->f_4 = { 210.987f, -3127.6196f, 4.7903f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 84:
			uParam1->f_4 = { 302.8576f, -2857.0398f, 5.0245f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 85:
			uParam1->f_4 = { 1635.4027f, -2370.956f, 92.9864f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 86:
			uParam1->f_4 = { 853.4637f, -2437.8184f, 26.9939f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 87:
			uParam1->f_4 = { -1226.4976f, -2393.574f, 12.9452f };
			*uParam1 = { uParam1->f_4 };
			MISC::SET_BIT(&(uParam1->f_16), 0);
			break;
		case 88:
			uParam1->f_4 = { 900.6783f, -1736.1044f, 29.4254f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 89:
			uParam1->f_4 = { 1737.7461f, -1534.7815f, 111.6664f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 90:
			uParam1->f_4 = { 485.929f, -1394.4803f, 28.2951f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 91:
			uParam1->f_4 = { -146.8984f, -1347.3796f, 28.6772f };
			*uParam1 = { uParam1->f_4 };
			break;
			break;
	}
}

void func_148(int iParam0, var uParam1)//Position - 0x392CD
{
	switch (iParam0)
	{
		case 367:
			uParam1->f_4 = { -725.8421f, -2213.1409f, 5.003f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 368:
			uParam1->f_4 = { -315.874f, -2552.008f, 5.0006f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 369:
			uParam1->f_4 = { 144.4716f, -2807.3489f, 5.0002f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 370:
			uParam1->f_4 = { 1142.3071f, -3277.4636f, 4.9007f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 371:
			uParam1->f_4 = { 791.4049f, -2482.0208f, 19.9127f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 372:
			uParam1->f_4 = { -34.7159f, -2418.3035f, 5f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 373:
			uParam1->f_4 = { -947.4313f, -3531.936f, 13.0788f };
			*uParam1 = { uParam1->f_4 };
			MISC::SET_BIT(&(uParam1->f_16), 0);
			break;
		case 374:
			uParam1->f_4 = { 1482.0775f, -2436.5615f, 65.2259f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 375:
			uParam1->f_4 = { 821.9077f, -2937.0647f, 4.9042f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 376:
			uParam1->f_4 = { -1157.331f, -2885.625f, 12.9456f };
			*uParam1 = { uParam1->f_4 };
			MISC::SET_BIT(&(uParam1->f_16), 0);
			break;
		case 357:
			uParam1->f_4 = { -2884.53f, 3492.161f, 8.2728f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 358:
			uParam1->f_4 = { 1840.3181f, 1813.8236f, 66.5145f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 359:
			uParam1->f_4 = { 2074.8792f, 4605.449f, 34.5385f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 360:
			uParam1->f_4 = { 2801.8464f, 4749.3896f, 45.4179f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 361:
			uParam1->f_4 = { 2766.3516f, 1700.9596f, 23.7017f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 362:
			uParam1->f_4 = { -1543.1719f, 2856.0461f, 30.1456f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 363:
			uParam1->f_4 = { -3131f, 1284.2914f, 19.8153f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 364:
			uParam1->f_4 = { -564.372f, 6363.4893f, 2.2542f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 365:
			uParam1->f_4 = { 754.9817f, 6609.0625f, 1.3558f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 366:
			uParam1->f_4 = { 1026.2738f, 4338.423f, 40.0694f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
}

void func_149(int iParam0, var uParam1)//Position - 0x3960A
{
	switch (iParam0)
	{
		case 12:
			uParam1->f_4 = { 17.2985f, 6579.4985f, 31.3584f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 13:
			uParam1->f_4 = { 408.3282f, 6611.388f, 26.876f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 14:
			uParam1->f_4 = { 21.6079f, 6516.493f, 30.4948f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 15:
			uParam1->f_4 = { -206.043f, 6455.7974f, 30.1761f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 16:
			uParam1->f_4 = { -225.5175f, 6436.7056f, 30.1974f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 17:
			uParam1->f_4 = { -128.7701f, 6342.2056f, 30.4904f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 18:
			uParam1->f_4 = { -353.8975f, 6334.597f, 28.8339f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 19:
			uParam1->f_4 = { -315.1533f, 6312.473f, 31.3387f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 20:
			uParam1->f_4 = { -433.5699f, 6260.372f, 29.2542f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 21:
			uParam1->f_4 = { -258.5444f, 6223.6313f, 30.4892f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 22:
			uParam1->f_4 = { -274.8564f, 6170.648f, 30.4898f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 23:
			uParam1->f_4 = { -441.0088f, 6144.66f, 30.4783f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 24:
			uParam1->f_4 = { 2244.2954f, 5175.0464f, 59.1204f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 25:
			uParam1->f_4 = { 2011.6484f, 4969.727f, 40.5599f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 26:
			uParam1->f_4 = { 2309.9001f, 4753.1064f, 36.0693f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 27:
			uParam1->f_4 = { -1351.0676f, 4844.388f, 136.8821f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 28:
			uParam1->f_4 = { 1679.1039f, 4653.37f, 42.3712f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 29:
			uParam1->f_4 = { 1712.925f, 4747.414f, 40.9356f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 30:
			uParam1->f_4 = { 2936.587f, 4487.7544f, 46.8833f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 31:
			uParam1->f_4 = { 1881.4448f, 3761.1494f, 31.9154f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 32:
			uParam1->f_4 = { 1891.136f, 3711.4502f, 31.8388f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 33:
			uParam1->f_4 = { 923.1298f, 3646.537f, 31.5969f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 34:
			uParam1->f_4 = { 1360.1233f, 3599.0972f, 33.8908f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 35:
			uParam1->f_4 = { 436.2162f, 3550.248f, 32.2386f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 36:
			uParam1->f_4 = { -2235.7812f, 3475.785f, 29.33f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 37:
			uParam1->f_4 = { 1206.7217f, 2716.4758f, 37.0042f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 38:
			uParam1->f_4 = { 994.0612f, 2656.839f, 39.1282f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 39:
			uParam1->f_4 = { 2864.1184f, 1473.1959f, 23.5583f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 40:
			uParam1->f_4 = { 1775.0745f, 3652.8435f, 33.3731f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 41:
			uParam1->f_4 = { -258.8979f, 6251.875f, 30.4892f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 42:
			uParam1->f_4 = { -2001.6438f, 454.9861f, 101.4866f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 43:
			uParam1->f_4 = { -181.7756f, 319.9248f, 96.7999f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 44:
			uParam1->f_4 = { -152.1834f, 201.6567f, 89.9091f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 45:
			uParam1->f_4 = { -1935.1152f, 183.2173f, 83.5954f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 46:
			uParam1->f_4 = { 351.9804f, 21.8583f, 84.4991f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 47:
			uParam1->f_4 = { 195.2451f, -157.1152f, 55.6824f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 48:
			uParam1->f_4 = { -1490.2102f, -203.8835f, 49.3974f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 49:
			uParam1->f_4 = { 941.5977f, -247.444f, 67.5999f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 50:
			uParam1->f_4 = { -531.7662f, -43.3292f, 41.4131f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 51:
			uParam1->f_4 = { -1308.9706f, -410.3486f, 33.557f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 52:
			uParam1->f_4 = { 914.3543f, -489.5208f, 58.0344f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 53:
			uParam1->f_4 = { 1242.4198f, -578.4505f, 68.4043f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 54:
			uParam1->f_4 = { -1273.1748f, -607.2695f, 25.484f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 55:
			uParam1->f_4 = { 322.7755f, -683.6807f, 28.3018f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 56:
			uParam1->f_4 = { 916.045f, -641.1888f, 56.8682f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 57:
			uParam1->f_4 = { -1360.5935f, -780.0303f, 18.7525f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 58:
			uParam1->f_4 = { -617.1512f, -784.4778f, 24.1344f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 59:
			uParam1->f_4 = { -1364.3766f, -898.3317f, 11.4705f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 60:
			uParam1->f_4 = { -1440.974f, -871.7243f, 9.9175f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 61:
			uParam1->f_4 = { 450.0986f, -934.5388f, 27.58f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 62:
			uParam1->f_4 = { 1135.1428f, -974.3087f, 45.5844f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 63:
			uParam1->f_4 = { -1327.618f, -1027.4882f, 6.7181f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 64:
			uParam1->f_4 = { -600.9597f, -1091.9869f, 21.1781f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 65:
			uParam1->f_4 = { -1248.9954f, -1211.9359f, 6.1084f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 66:
			uParam1->f_4 = { -1097.9259f, -1505.1464f, 3.6901f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 67:
			uParam1->f_4 = { 1318.1313f, -1663.0138f, 50.2364f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 68:
			uParam1->f_4 = { 267.6798f, -1721.8668f, 28.2842f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 69:
			uParam1->f_4 = { 954.9901f, -2004.1172f, 29.2387f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 70:
			uParam1->f_4 = { 1003.8367f, -2364.2512f, 29.5096f };
			*uParam1 = { uParam1->f_4 };
			break;
		case 71:
			uParam1->f_4 = { -694.7249f, -2453.918f, 12.8718f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
}

int func_150(var uParam0)//Position - 0x3AC87
{
	switch (*uParam0)
	{
		case 1:
			return 70;
		case 2:
			return 71;
		case 3:
			return 72;
		case 4:
			return 73;
		case 5:
			return 74;
		case 6:
			return 75;
		case 7:
			return 76;
		case 8:
			return 77;
		case 9:
			return 78;
		case 10:
			return 79;
		case 11:
			return 80;
		default:
	}
	return -1;
}

bool func_151(var uParam0)//Position - 0x3AD11
{
	return (*uParam0 >= 1 && *uParam0 <= 11);
}

void func_152(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x3AD29
{
	if (iParam1 == 2)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (iParam1 == 3 || iParam1 == 1)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
	else if (iParam1 == 23)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

void func_153(int iParam0, int iParam1)//Position - 0x3ADDD
{
	Local_217[iParam0 /*21*/].f_18 = iParam1;
}

void func_154(int iParam0, int iParam1)//Position - 0x3AE42
{
	Local_217[iParam0 /*21*/].f_17 = iParam1;
}

float func_155(var uParam0)//Position - 0x3B8DE
{
	return 15f;
}

int func_156(char* sParam0)//Position - 0x3E424
{
	int iVar0;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU("CLOTHES_UNLOCK" /* GXT: Clothing Unlock */, 7, sParam0, 1);
	return iVar0;
}

int func_157(int iParam0)//Position - 0x46A19
{
	if (Local_212.f_114.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_114.f_29);
	}
	return 1;
}

int func_158(int iParam0)//Position - 0x473BC
{
	if (Local_212.f_114.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_114.f_18);
		return StackVal;
	}
	return 0;
}

bool func_159(int iParam0)//Position - 0x485CE
{
	if (Local_212.f_114.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_114.f_14);
		return StackVal;
	}
	return Local_195.f_19.f_1.f_3;
}

float func_160(int iParam0)//Position - 0x48D25
{
	if (Local_212.f_114.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_114.f_26);
		return StackVal;
	}
	return -1f;
}

int func_161(int iParam0)//Position - 0x48D46
{
	if (Local_212.f_114.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_114.f_25);
		return StackVal;
	}
	return 0;
}

float func_162(var uParam0)//Position - 0x49391
{
	if (Local_212.f_114.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_212.f_114.f_20);
		return StackVal;
	}
	return 0.3f;
}

int func_163()//Position - 0xC83F8
{
	if (Local_212.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_212.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_164()//Position - 0xC841B
{
	if (Local_212.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_212.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_165()//Position - 0xC86D9
{
	if (Local_212.f_15.f_2 != 0)
	{
		Call_Loc(Local_212.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_166()//Position - 0xC87C1
{
	if (Local_212.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_212.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_167()//Position - 0xC883D
{
	if (Local_212.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_212.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_168()//Position - 0xC8AB9
{
	if (Local_212.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_212.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_169()//Position - 0xC8BB8
{
	if (Local_212.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_212.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_170()//Position - 0xC8BDD
{
	if (Local_212.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_212.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_171()//Position - 0xC8C00
{
	if (Local_212.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_212.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

int func_172()//Position - 0xC8C5E
{
	if (Local_212.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_212.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_173()//Position - 0xC8C81
{
	if (Local_212.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_212.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_174()//Position - 0xC8CA4
{
	if (Local_212.f_15.f_6 != 0)
	{
		Call_Loc(Local_212.f_15.f_6);
		return StackVal;
	}
	return 0;
}

void func_175(int iParam0)//Position - 0xD0B7D
{
	if (Local_212.f_94.f_3.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_94.f_3.f_1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_212.f_94.f_3.f_1);
			AUDIO::TRIGGER_MUSIC_EVENT(StackVal);
		}
	}
}

bool func_176()//Position - 0xD13FF
{
	Call_Loc(Local_212.f_47);
	return StackVal;
}

int func_177()//Position - 0xD5401
{
	if (Local_212.f_82.f_2 != 0)
	{
		Call_Loc(Local_212.f_82.f_2);
		return StackVal;
	}
	return 300000;
}

int func_178()//Position - 0xD5CFC
{
	if (Local_212.f_64.f_4 != 0)
	{
		Call_Loc(Local_212.f_64.f_4);
		return StackVal;
	}
	return 1;
}

int func_179()//Position - 0xD5D86
{
	if (Local_212.f_64.f_9 != 0)
	{
		Call_Loc(Local_212.f_64.f_9);
		return StackVal;
	}
	return 0;
}

int func_180()//Position - 0xD5DA5
{
	if (Local_212.f_64.f_7 != 0)
	{
		Call_Loc(Local_212.f_64.f_7);
		return StackVal;
	}
	return 0;
}

int func_181(int iParam0)//Position - 0xD7EFA
{
	if (Local_212.f_156.f_132.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_132.f_1.f_3);
		return StackVal;
	}
	return 0;
}

int func_182(int iParam0)//Position - 0xD7F66
{
	if (Local_212.f_156.f_132.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_132.f_1.f_2);
		return StackVal;
	}
	return 0;
}

float func_183(int iParam0)//Position - 0xD7F8F
{
	if (Local_212.f_156.f_132.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_132.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

int func_184(int iParam0)//Position - 0xD7FBC
{
	if (Local_212.f_156.f_132.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_132.f_1.f_4);
		return StackVal;
	}
	return 0;
}

int func_185(var uParam0)//Position - 0xD826F
{
	if (Local_212.f_156.f_184 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_212.f_156.f_184);
		return StackVal;
	}
	return 287;
}

float func_186(int iParam0, var uParam1)//Position - 0xD862F
{
	switch (iParam0)
	{
		case 1:
			if (Local_212.f_352.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_212.f_352.f_22);
				return StackVal;
			}
			break;
		case 0:
			if (Local_212.f_156.f_140.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_212.f_156.f_140.f_22);
				return StackVal;
			}
			break;
		case 2:
			if (Local_212.f_407.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_212.f_407.f_22);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_187(int iParam0, var uParam1)//Position - 0xD86AA
{
	switch (iParam0)
	{
		case 0:
			if (Local_212.f_156.f_140.f_21 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_212.f_156.f_140.f_21);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_188(int iParam0)//Position - 0xD86DF
{
	if (Local_212.f_156.f_140.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_140.f_20);
		return StackVal;
	}
	return 0.5f;
}

int func_189(int iParam0)//Position - 0xD8F74
{
	if (Local_212.f_156.f_140.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_140.f_10);
		return StackVal;
	}
	return 0;
}

int func_190(int iParam0)//Position - 0xD8FA2
{
	if (Local_212.f_156.f_140.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_140.f_7);
		return StackVal;
	}
	return 11;
}

int func_191(int iParam0)//Position - 0xD8FC8
{
	if (Local_212.f_156.f_140.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_140.f_9);
		return StackVal;
	}
	return 0;
}

int func_192(int iParam0)//Position - 0xD90BA
{
	if (Local_212.f_156.f_140.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_140.f_16);
		return StackVal;
	}
	return 0;
}

void func_193(int iParam0, int iParam1)//Position - 0xD9637
{
	if (__LIB_11__.func_631(&(Local_218[iParam0 /*19*/]), iParam1))
	{
	}
}

void func_194(int iParam0, int iParam1)//Position - 0xD964F
{
	if (__LIB_1__.func_101(&(Local_218[iParam0 /*19*/]), iParam1))
	{
	}
}

float func_195()//Position - 0xD9667
{
	if (Local_212.f_156.f_132.f_7 != 0)
	{
		Call_Loc(Local_212.f_156.f_132.f_7);
		return StackVal;
	}
	return 20f;
}

float func_196(var uParam0)//Position - 0xD9818
{
	if (Local_212.f_407.f_41 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_212.f_407.f_41);
		return StackVal;
	}
	return 0.5f;
}

int func_197(var uParam0)//Position - 0xD983F
{
	if (Local_212.f_407.f_42 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_212.f_407.f_42);
		return StackVal;
	}
	return 18;
}

int func_198(var uParam0)//Position - 0xD9863
{
	if (Local_212.f_407.f_40 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_212.f_407.f_40);
		return StackVal;
	}
	return 0;
}

int func_199(int iParam0)//Position - 0xD9B1A
{
	if (Local_212.f_407.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_44);
		return StackVal;
	}
	return 0;
}

int func_200(int iParam0)//Position - 0xD9B3D
{
	if (Local_212.f_407.f_43 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_43);
		return StackVal;
	}
	return 0;
}

float func_201(int iParam0)//Position - 0xD9B60
{
	if (Local_212.f_407.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_39);
		return StackVal;
	}
	return 10f;
}

int func_202(int iParam0)//Position - 0xD9D16
{
	if (Local_212.f_407.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_9);
		return StackVal;
	}
	return 0;
}

int func_203(int iParam0)//Position - 0xD9D7D
{
	if (Local_212.f_407.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_16);
		return StackVal;
	}
	return 0;
}

float func_204(int iParam0)//Position - 0xD9F58
{
	if (Local_212.f_407.f_30.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_30.f_2);
		return StackVal;
	}
	return 1f;
}

int func_205(int iParam0)//Position - 0xD9F7F
{
	if (Local_212.f_407.f_30.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_407.f_30.f_1);
		return StackVal;
	}
	return 6;
}

void func_206(int iParam0, int iParam1)//Position - 0xDA3F4
{
	if (Local_212.f_352.f_49 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_352.f_49);
	}
}

float func_207(int iParam0)//Position - 0xDA471
{
	if (Local_212.f_352.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_352.f_20);
		return StackVal;
	}
	return 0.5f;
}

Vector3 func_208(int iParam0)//Position - 0xDAB3B
{
	if (Local_212.f_352.f_50.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_352.f_50.f_1);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

Vector3 func_209(int iParam0)//Position - 0xDAB64
{
	if (Local_212.f_352.f_50 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_352.f_50);
		return StackVal, StackVal, StackVal;
	}
	return 0f, -5.5f, 0.7f;
}

int func_210(int iParam0)//Position - 0xDB00C
{
	if (Local_212.f_352.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_352.f_7);
		return StackVal;
	}
	return 12;
}

int func_211(int iParam0)//Position - 0xDB075
{
	if (Local_212.f_352.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_352.f_9);
		return StackVal;
	}
	return 0;
}

int func_212(int iParam0)//Position - 0xDB098
{
	if (Local_212.f_352.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_352.f_16);
		return StackVal;
	}
	return 0;
}

int func_213()//Position - 0xDC09C
{
	if (Local_212.f_92.f_1 != 0)
	{
		Call_Loc(Local_212.f_92.f_1);
		return StackVal;
	}
	return 1;
}

int func_214(int iParam0)//Position - 0xDC0BB
{
	if (Local_212.f_92 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_92);
		return StackVal;
	}
	return 1;
}

char* func_215(var uParam0, var uParam1)//Position - 0xDC555
{
	if (Local_212.f_47.f_2.f_2 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_212.f_47.f_2.f_2);
		return StackVal;
	}
	return "";
}

char* func_216(var uParam0, var uParam1)//Position - 0xDC57D
{
	if (Local_212.f_47.f_2.f_1 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_212.f_47.f_2.f_1);
		return StackVal;
	}
	return "";
}

int func_217()//Position - 0xDCBB9
{
	if (Local_212.f_114.f_41 != 0)
	{
		Call_Loc(Local_212.f_114.f_41);
		return StackVal;
	}
	return 1;
}

float func_218(int iParam0)//Position - 0xE0A5F
{
	if (Local_212.f_114.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_114.f_8);
		return StackVal;
	}
	return 1.1f;
}

int func_219(int iParam0)//Position - 0xE2BCE
{
	if (__LIB_4__.func_682(iParam0, 1))
	{
		return Global_1892703[__LIB_2__.func_191(iParam0) /*599*/].f_10.f_462;
	}
	return __LIB_0__.func_160();
}

Vector3 func_220(int iParam0, int iParam1)//Position - 0xE3A16
{
	if (Local_212.f_156.f_2.f_52 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_52);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, true);
}

int func_221(int iParam0)//Position - 0xE3B7E
{
	if (Local_212.f_156.f_2.f_125.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_125.f_4);
		return StackVal;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0xE3BA7
{
	if (Local_212.f_156.f_2.f_125.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_125.f_3);
		return StackVal;
	}
	return 1;
}

int func_223(int iParam0)//Position - 0xE3BD0
{
	if (Local_212.f_156.f_2.f_125.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_125.f_2);
		return StackVal;
	}
	return 0;
}

float func_224(int iParam0)//Position - 0xE3C79
{
	if (Local_212.f_156.f_2.f_125.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_125.f_1);
		return StackVal;
	}
	return -1f;
}

float func_225(int iParam0, int iParam1)//Position - 0xE3D4B
{
	if (Local_212.f_156.f_2.f_123.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_156.f_2.f_123.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_226(int iParam0, int iParam1)//Position - 0xE3D76
{
	if (Local_212.f_156.f_2.f_123 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_156.f_2.f_123);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, false);
}

float func_227(int iParam0, int iParam1)//Position - 0xE40DA
{
	if (Local_212.f_156.f_2.f_106.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_156.f_2.f_106.f_4);
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

int func_228(int iParam0, int iParam1)//Position - 0xE4124
{
	if (Local_212.f_156.f_2.f_106.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_156.f_2.f_106.f_3);
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

int func_229(int iParam0, int iParam1)//Position - 0xE4173
{
	if (Local_212.f_156.f_2.f_106.f_7 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_156.f_2.f_106.f_7);
		return StackVal;
	}
	return 100;
}

float func_230(int iParam0, int iParam1)//Position - 0xE419F
{
	if (Local_212.f_156.f_2.f_106.f_5 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_156.f_2.f_106.f_5);
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

float func_231(int iParam0, int iParam1)//Position - 0xE41ED
{
	if (Local_212.f_156.f_2.f_106.f_6 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_156.f_2.f_106.f_6);
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

int func_232(int iParam0)//Position - 0xE4329
{
	if (Local_212.f_156.f_2.f_102.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_102.f_2);
		return StackVal;
	}
	return 0;
}

float func_233(int iParam0)//Position - 0xE4352
{
	if (Local_212.f_156.f_2.f_102.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_102.f_1);
		return StackVal;
	}
	return -1f;
}

float func_234(int iParam0)//Position - 0xE437B
{
	if (Local_212.f_156.f_2.f_102.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_102.f_3);
		return StackVal;
	}
	return 7.5f;
}

Vector3 func_235(int iParam0, int iParam1)//Position - 0xE43A8
{
	struct<3> Var0;
	float fVar1;
	if (Local_212.f_156.f_2.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_102);
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

int func_236(int iParam0)//Position - 0xE4814
{
	if (Local_212.f_156.f_2.f_91.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_91.f_1);
		return StackVal;
	}
	return 0;
}

int func_237(int iParam0, var uParam1)//Position - 0xE489E
{
	if (Local_212.f_156.f_2.f_91.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_212.f_156.f_2.f_91.f_10);
		return StackVal;
	}
	return 0;
}

float func_238(int iParam0)//Position - 0xE4AA4
{
	if (Local_212.f_156.f_2.f_91.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_91.f_7);
		return StackVal;
	}
	return 0f;
}

float func_239(var uParam0)//Position - 0xE4D89
{
	if (Local_212.f_156.f_2.f_85.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_212.f_156.f_2.f_85.f_2);
		return StackVal;
	}
	return 7.5f;
}

int func_240(int iParam0)//Position - 0xE4F2C
{
	if (Local_212.f_156.f_2.f_79.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_79.f_5);
		return StackVal;
	}
	return 786468;
}

int func_241(int iParam0)//Position - 0xE4F58
{
	if (Local_212.f_156.f_2.f_79.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_79.f_4);
		return StackVal;
	}
	return 80;
}

float func_242(int iParam0)//Position - 0xE4F82
{
	if (Local_212.f_156.f_2.f_79.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_79.f_3);
		return StackVal;
	}
	return 80f;
}

float func_243(int iParam0, bool bParam1)//Position - 0xE4FAF
{
	if (Local_212.f_156.f_2.f_79.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_79.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

int func_244(int iParam0)//Position - 0xE507C
{
	if (Local_212.f_156.f_2.f_76.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_76.f_2);
		return StackVal;
	}
	return 22713;
}

float func_245(int iParam0)//Position - 0xE50A7
{
	if (Local_212.f_156.f_2.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_76.f_1);
		return StackVal;
	}
	return 10f;
}

int func_246(int iParam0)//Position - 0xE5197
{
	if (Local_212.f_156.f_2.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_72.f_2);
		return StackVal;
	}
	return -1;
}

float func_247(int iParam0)//Position - 0xE51C0
{
	if (Local_212.f_156.f_2.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_72.f_1);
		return StackVal;
	}
	return 10000f;
}

void func_248(int iParam0, int iParam1)//Position - 0xE5223
{
	if (Local_212.f_156.f_2.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_212.f_156.f_2.f_72.f_3);
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
}

int func_249(int iParam0)//Position - 0xE52D2
{
	if (Local_212.f_156.f_2.f_67.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_67.f_3);
		return StackVal;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0xE52FB
{
	if (Local_212.f_156.f_2.f_67.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_67.f_2);
		return StackVal;
	}
	return -1;
}

int func_251(int iParam0)//Position - 0xE5324
{
	if (Local_212.f_156.f_2.f_67.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_67.f_1);
		return StackVal;
	}
	return 0;
}

int func_252(int iParam0)//Position - 0xE534D
{
	if (Local_212.f_156.f_2.f_67 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_67);
		return StackVal;
	}
	return -1;
}

int func_253(int iParam0, var uParam1)//Position - 0xE55F1
{
	if (Local_212.f_156.f_2.f_62.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_212.f_156.f_2.f_62.f_4);
		return StackVal;
	}
	return 1;
}

int func_254(int iParam0)//Position - 0xE561C
{
	if (Local_212.f_156.f_2.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_62.f_2);
		return StackVal;
	}
	return 1;
}

int func_255(int iParam0)//Position - 0xE5645
{
	if (Local_212.f_156.f_2.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_62.f_1);
		return StackVal;
	}
	return 0;
}

int func_256(int iParam0)//Position - 0xE569B
{
	if (Local_212.f_156.f_2.f_62.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_62.f_3);
		return StackVal;
	}
	return 0;
}

var func_257(int iParam0)//Position - 0xE572F
{
	if (Local_212.f_156.f_2.f_61 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_61);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_212.f_156.f_178);
	return StackVal;
}

float func_258(int iParam0)//Position - 0xE5855
{
	if (Local_212.f_156.f_2.f_56.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_56.f_4);
		return StackVal;
	}
	return 0f;
}

int func_259()//Position - 0xE587E
{
	if (Local_212.f_156.f_2.f_56.f_3 != 0)
	{
		Call_Loc(Local_212.f_156.f_2.f_56.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_260(int iParam0)//Position - 0xE58A7
{
	if (Local_212.f_156.f_2.f_56.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_56.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_212.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

float func_261(int iParam0)//Position - 0xE58D9
{
	if (Local_212.f_156.f_2.f_56.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_56.f_2);
		return StackVal;
	}
	return 1f;
}

int func_262(int iParam0)//Position - 0xE59AE
{
	if (Local_212.f_156.f_2.f_56 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_56);
		return StackVal;
	}
	return 0;
}

int func_263(int iParam0)//Position - 0xE5D3B
{
	if (Local_212.f_156.f_2.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25);
		return StackVal;
	}
	return 0;
}

float func_264(int iParam0)//Position - 0xE5DB9
{
	if (Local_212.f_156.f_2.f_25.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_4);
		return StackVal;
	}
	return 10f;
}

int func_265(int iParam0, var uParam1)//Position - 0xE5DE6
{
	if (Local_212.f_156.f_2.f_25.f_25 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_212.f_156.f_2.f_25.f_25);
		return StackVal;
	}
	return 0;
}

int func_266(int iParam0)//Position - 0xE6388
{
	if (Local_212.f_156.f_2.f_25.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_20);
		return StackVal;
	}
	return 0;
}

float func_267(int iParam0)//Position - 0xE63B1
{
	if (Local_212.f_156.f_2.f_25.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_15);
		return StackVal;
	}
	return -1f;
}

int func_268(int iParam0)//Position - 0xE63DA
{
	if (Local_212.f_156.f_2.f_25.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_7);
		return StackVal;
	}
	return 0;
}

int func_269(int iParam0)//Position - 0xE6403
{
	if (Local_212.f_156.f_2.f_25.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_11);
		return StackVal;
	}
	return 24;
}

int func_270(int iParam0)//Position - 0xE642D
{
	if (Local_212.f_156.f_2.f_25.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_271(int iParam0)//Position - 0xE6459
{
	if (Local_212.f_156.f_2.f_25.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_10);
		return StackVal;
	}
	return 0f;
}

int func_272(int iParam0)//Position - 0xE6482
{
	if (Local_212.f_156.f_2.f_25.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_6);
		return StackVal;
	}
	return 0;
}

float func_273(int iParam0)//Position - 0xE64ED
{
	if (Local_212.f_156.f_2.f_25.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_9);
		return StackVal;
	}
	return 0f;
}

int func_274(int iParam0)//Position - 0xE6534
{
	if (Local_212.f_156.f_2.f_25.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_12);
		return StackVal;
	}
	return 7;
}

float func_275(int iParam0)//Position - 0xE655D
{
	if (Local_212.f_156.f_2.f_25.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_3);
		return StackVal;
	}
	return 35f;
}

float func_276(int iParam0)//Position - 0xE658A
{
	if (Local_212.f_156.f_2.f_25.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_5);
		return StackVal;
	}
	return 5f;
}

int func_277()//Position - 0xE65B3
{
	if (Local_212.f_156.f_2.f_25.f_18 != 0)
	{
		Call_Loc(Local_212.f_156.f_2.f_25.f_18);
		return StackVal;
	}
	return 80;
}

float func_278()//Position - 0xE65DB
{
	if (Local_212.f_156.f_2.f_25.f_17 != 0)
	{
		Call_Loc(Local_212.f_156.f_2.f_25.f_17);
		return StackVal;
	}
	return 80f;
}

float func_279(int iParam0)//Position - 0xE6606
{
	if (Local_212.f_156.f_2.f_25.f_19 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_19);
		return StackVal;
	}
	return -1f;
}

float func_280(int iParam0)//Position - 0xE662F
{
	if (Local_212.f_156.f_2.f_25.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_16);
		return StackVal;
	}
	return 30f;
}

int func_281()//Position - 0xE665C
{
	if (Local_212.f_156.f_2.f_25.f_14 != 0)
	{
		Call_Loc(Local_212.f_156.f_2.f_25.f_14);
		return StackVal;
	}
	return 0;
}

int func_282(var uParam0)//Position - 0xE66D3
{
	if (Local_212.f_156.f_2.f_25.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_212.f_156.f_2.f_25.f_13);
		return StackVal;
	}
	return 0;
}

int func_283(int iParam0)//Position - 0xE69D7
{
	if (Local_212.f_156.f_2.f_13.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_13.f_1);
		return StackVal;
	}
	return 0;
}

int func_284(int iParam0)//Position - 0xE6A00
{
	if (Local_212.f_156.f_2.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_13);
		return StackVal;
	}
	return 0;
}

int func_285(int iParam0)//Position - 0xE6D79
{
	if (Local_212.f_156.f_2.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_212.f_156.f_2.f_3);
		return StackVal;
	}
	return 0;
}

bool func_286(var uParam0, char* sParam1)//Position - 0xE6D9E
{
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2.f_4);
	return ((((((StackVal || MISC::ARE_STRINGS_EQUAL(sParam1, "PROP_HUMAN_SEAT_SUNLOUNGER")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_STEPS")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

void func_287(int iParam0, int iParam1)//Position - 0xE75D7
{
	Local_216[iParam0 /*20*/].f_17 = iParam1;
}

void func_288(int iParam0, int iParam1)//Position - 0xE76B0
{
	Local_216[iParam0 /*20*/].f_18 = iParam1;
}

void func_289(var uParam0, int iParam1)//Position - 0xE8664
{
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2);
	Stack.Push(MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_2);
	if (StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
}

var func_290(var uParam0)//Position - 0xE8875
{
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_178);
	return StackVal;
}

Vector3 func_291(var uParam0)//Position - 0xE8887
{
	Stack.Push(uParam0);
	Call_Loc(Local_212.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

void func_292(int iParam0, int iParam1)//Position - 0xE89B1
{
	Local_218[iParam0 /*19*/].f_10[Local_218[iParam0 /*19*/].f_16] = iParam1;
	Local_218[iParam0 /*19*/].f_16++;
}

int func_293(int iParam0, int iParam1)//Position - 0xEBCC8
{
	int iVar0;
	if (__LIB_9__.func_506(iParam0, iParam1))
	{
		iVar0 = __LIB_8__.func_116(iParam0, iParam1);
		if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4 > 0 && Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_294(int iParam0, int iParam1)//Position - 0xEBF22
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_3, iParam1);
	}
	return 0;
}

char* func_295(int iParam0, int iParam1)//Position - 0x2801B
{
	switch (iParam1)
	{
		case 28:
			return "Prep_Pilot_1";
		case 29:
			return "Prep_Pilot_2";
		case 30:
			return "Prep_Pilot_3";
		case 31:
			return "Prep_Pilot2_1";
		case 32:
			return "Prep_Pilot2_2";
		case 33:
			return "Prep_Pilot2_3";
		case 0:
			return "Prep_Scoping_Intro_1";
		case 1:
			return "Prep_Scoping_Smuggler_1";
		case 2:
			return "Prep_Scoping_Smuggler_2";
		case 3:
			return "Prep_Scoping_Smuggler_3";
		case 4:
			return "Prep_Scoping_Smuggler_4";
		case 5:
			return "Prep_Scoping_Smuggler_5";
		case 6:
			return "Prep_Scoping_Party_1";
		case 7:
			return "Prep_Scoping_Return_1";
		case 8:
			return "Prep_Scoping_Island_1";
		case 9:
			return "Prep_Scoping_Island_2";
		case 10:
			return "Prep_Scoping_Island_3";
		case 11:
			return "Prep_Vehicles_Stealth_Heli_1";
		case 12:
			return "Prep_Vehicles_Stealth_Heli_2";
		case 13:
			return "Prep_Vehicles_Stealth_Heli_3";
		case 14:
			return "Prep_Vehicles_Stealth_Heli2_1";
		case 15:
			return "Prep_Vehicles_Gunboat_1";
		case 16:
			return "Prep_Vehicles_Gunboat2_1";
		case 17:
			return "Prep_Vehicles_Gunboat2_2";
		case 18:
			return "Prep_Vehicles_Gunboat2_3";
		case 19:
			return "Prep_Vehicles_Smuggler_Boat_1";
		case 20:
			return "Prep_Vehicles_Smuggler_Boat_2";
		case 21:
			return "Prep_Vehicles_Smuggler_Boat_3";
		case 22:
			return "Prep_Vehicles_Smuggler_Plane_1";
		case 23:
			return "Prep_Vehicles_Smuggler_Plane_2";
		case 24:
			return "Prep_Vehicles_Smuggler_Plane_3";
		case 25:
			return "Prep_Vehicles_Stealth_Plane_1";
		case 26:
			return "Prep_Vehicles_Stealth_Plane_2";
		case 27:
			return "Prep_Vehicles_Stealth_Plane_3";
		case 34:
			return "Prep_Equipment_Demolition_Charges_1";
		case 35:
			return "Prep_Equipment_Demolition_Charges_2";
		case 36:
			return "Prep_Equipment_Acetylene_Torch_1";
		case 37:
			return "Prep_Equipment_Acetylene_Torch_2";
		case 38:
			return "Prep_Equipment_Acetylene_Torch_3";
		case 39:
			return "Prep_Equipment_Plasma_Cutter_1";
		case 40:
			return "Prep_Equipment_Plasma_Cutter_2";
		case 41:
			return "Prep_Equipment_Plasma_Cutter_3";
		case 42:
			return "Prep_Equipment_Safe_Codes_1";
		case 43:
			return "Prep_Equipment_Safe_Codes_2";
		case 44:
			return "Prep_Equipment_Safe_Codes_3";
		case 45:
			return "Prep_Equipment_Fingerprint_Cracker_1";
		case 46:
			return "Prep_Equipment_Fingerprint_Cracker_2";
		case 47:
			return "Prep_Equipment_Fingerprint_Cracker_3";
		case 48:
			return "Prep_Equipment_Sonar_Jammer_1";
		case 49:
			return "Prep_Equipment_Sonar_Jammer_2";
		case 50:
			return "Prep_Equipment_Sonar_Jammer_3";
		case 51:
			return "Prep_Weapons_1";
		case 52:
			return "Prep_Weapons_2";
		case 53:
			return "Prep_Weapons_3";
		case 54:
			return "Prep_Weapons2_1";
		case 55:
			return "Prep_Weapons2_2";
		case 56:
			return "Prep_Weapons2_3";
		case 57:
			return "Prep_Disruption_Weapons_1";
		case 58:
			return "Prep_Disruption_Weapons_2";
		case 59:
			return "Prep_Disruption_Weapons_3";
		case 60:
			return "Prep_Disruption_Armor_1";
		case 61:
			return "Prep_Disruption_Armor_2";
		case 62:
			return "Prep_Disruption_Armor_3";
		case 63:
			return "Prep_Disruption_Backup_1";
		case 64:
			return "Prep_Disruption_Backup_2";
		case 65:
			return "Prep_Disruption_Backup_3";
		default:
	}
	return "";
}

char* func_296()//Position - 0x2880B
{
	return "HEI4_FAIL";
}

char* func_297()//Position - 0x28817
{
	return "HEI4_MUSIC_STOP";
}

int func_298(int iParam0, struct<3> Param1, char* sParam2, int iParam3, int iParam4)//Position - 0x2B6C2
{
	int iVar0;
	if (!OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(Param1, iParam0, &iVar0) && Global_2815059.f_4570)
	{
		iVar0 = MISC::GET_HASH_KEY(sParam2);
		if (iParam4 != 825812850)
		{
			iVar0 = iParam4;
		}
		OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, iParam0, Param1, true, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0) == iParam3)
		{
			return 0;
		}
		if (NETWORK::NETWORK_IS_DOOR_NETWORKED(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(iVar0))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, iParam3, true, false);
				return 1;
			}
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, iParam3, false, false);
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0)//Position - 0x2E22C
{
	switch (iParam0)
	{
		case 2:
			return 1;
		default:
	}
	return 0;
}

void func_300(int iParam0)//Position - 0x30342
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_48[iVar0]), iVar1);
}

void func_301(int iParam0)//Position - 0x314A0
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1911933[PLAYER::PLAYER_ID() /*260*/].f_48[iVar0]), iVar1);
}

float func_302(var uParam0)//Position - 0x3687A
{
	return 40f;
}

struct<6> func_303(int iParam0)//Position - 0x377FF
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -3556.266f, 1470.421f, 4.884f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		case 1:
			Var0 = { -3147.593f, 2829.87f, 4.884f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		case 2:
			Var0 = { -3277.773f, 2162.67f, 4.884f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		case 3:
			Var0 = { -2822.859f, 4052.038f, 4.884f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		case 4:
			Var0 = { -3249.902f, 3707.517f, 4.884f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		case 5:
			Var0 = { -2384.776f, 4682.65f, 4.884f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		case 6:
			Var0 = { -3227.506f, -216.282f, 4.884f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		case 7:
			Var0 = { -3447.091f, 289.203f, 4.884f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		case 8:
			Var0 = { -2715.69f, -527.168f, 4.884f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		case 9:
			Var0 = { -1979.136f, -1538.641f, 4.884f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		case 10:
			Var0 = { -2098.85f, -2531.191f, 4.884f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		case 11:
			Var0 = { -1598.179f, -1893.706f, 4.884f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		case 12:
			Var0 = { -730.969f, -3915.965f, 4.884f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		case 13:
			Var0 = { -364.504f, -3571.152f, 4.884f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		case 14:
			Var0 = { -1481.238f, -3753.098f, 4.884f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		case 15:
			Var0 = { 1535.054f, -3064.56f, 4.884f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		case 16:
			Var0 = { 2468.772f, -2431.949f, 4.884f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		case 17:
			Var0 = { 2069.509f, -2811.147f, 4.884f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		case 18:
			Var0 = { 3020.648f, -1516.404f, 4.884f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		case 19:
			Var0 = { 3025.902f, -701.55f, 4.884f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		case 20:
			Var0 = { 2960.287f, -2009.984f, 4.884f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		case 21:
			Var0 = { 3397.975f, 1955.692f, 4.884f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		case 22:
			Var0 = { 3430.819f, 1203.923f, 4.884f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		case 23:
			Var0 = { 3787.53f, 2570.704f, 4.884f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		case 24:
			Var0 = { 4236.866f, 4006.935f, 4.884f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		case 25:
			Var0 = { 4243.688f, 4597.804f, 4.884f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		case 26:
			Var0 = { 4209.004f, 3395.541f, 4.884f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		case 27:
			Var0 = { 3736.457f, 5769.835f, 4.884f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		case 28:
			Var0 = { 3470.213f, 6315.928f, 4.884f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		case 29:
			Var0 = { 3695.331f, 5192.521f, 4.884f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		case 30:
			Var0 = { 571.117f, 7144.276f, 4.884f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		case 31:
			Var0 = { 2026.761f, 6908.321f, 4.884f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		case 32:
			Var0 = { 1374.476f, 6862.931f, 4.884f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		case 33:
			Var0 = { -1169.905f, 6002.997f, 4.884f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		case 34:
			Var0 = { -756.928f, 6575.625f, 4.884f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		case 35:
			Var0 = { -373.403f, 6967.661f, 4.884f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
		case 36:
			Var0 = { 3637.816f, -4780.584f, 4.9112f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 37:
			Var0 = { 50.6219f, -3312.5625f, 9.7065f };
			Var0.f_3 = { 0f, 0f, 90.05f };
			break;
		case 38:
			Var0 = { -3556.677f, 738.4581f, 9.7065f };
			Var0.f_3 = { 0f, 0f, 0.05f };
			break;
		case 39:
			Var0 = { -1766.8353f, 5334.0933f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -9.95f };
			break;
		case 40:
			Var0 = { -3280.7068f, -1580.8092f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -12.45f };
			break;
		case 41:
			Var0 = { -833.0568f, -4809.8076f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -147.45f };
			break;
	}
	return Var0;
}

bool func_304(int iParam0)//Position - 0x39EE2
{
	if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		return 0;
	}
	return ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 1f;
}

int func_305()//Position - 0x3A198
{
	return joaat("seashark");
}

int func_306(var uParam0)//Position - 0x3F572
{
	return 604;
}

float func_307(int iParam0)//Position - 0x4AEED
{
	return 0.85f;
}

int func_308(int iParam0, bool bParam1)//Position - 0x4C97D
{
	int iVar0;
	if (__LIB_0__.func_154(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			if (__LIB_0__.func_657(PED::GET_VEHICLE_PED_IS_IN(iVar0, bParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309(int iParam0)//Position - 0x4DC0D
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		default:
	}
	return 0;
}

void func_310(int iParam0, int iParam1)//Position - 0x4E2F6
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) > 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
			switch (iParam1)
			{
				case joaat("VEHICLE_WEAPON_BOMB"):
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 0, false);
					break;
				case joaat("VEHICLE_WEAPON_BOMB_INCENDIARY"):
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 1, false);
					break;
				case joaat("VEHICLE_WEAPON_BOMB_GAS"):
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 2, false);
					break;
				case joaat("VEHICLE_WEAPON_BOMB_CLUSTER"):
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 3, false);
					break;
				case 0:
					VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, 9);
					break;
				}
		}
		if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("strikeforce"))
		{
			VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 0, false);
		}
	}
}

int func_311(int iParam0)//Position - 0xA006D
{
	switch (iParam0)
	{
		case 8:
			return 1;
		default:
	}
	return 0;
}

void func_312(bool bParam0)//Position - 0xB0A94
{
	if (bParam0)
	{
		ENTITY::REMOVE_MODEL_HIDE(4882.582f, -4843.457f, 11.871f, 0.5f, joaat("h4_mph4_isl_wire_01"), false);
		ENTITY::REMOVE_MODEL_HIDE(4978.309f, -4866.08f, 19.366f, 0.5f, joaat("h4_mph4_isl_wire_02"), false);
		ENTITY::REMOVE_MODEL_HIDE(4937.865f, -5014.636f, 12.879f, 0.5f, joaat("h4_mph4_isl_wire_03"), false);
	}
	else
	{
		ENTITY::CREATE_MODEL_HIDE(4882.582f, -4843.457f, 11.871f, 0.5f, joaat("h4_mph4_isl_wire_01"), true);
		ENTITY::CREATE_MODEL_HIDE(4978.309f, -4866.08f, 19.366f, 0.5f, joaat("h4_mph4_isl_wire_02"), true);
		ENTITY::CREATE_MODEL_HIDE(4937.865f, -5014.636f, 12.879f, 0.5f, joaat("h4_mph4_isl_wire_03"), true);
	}
}

void func_313()//Position - 0xB1A45
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		NETWORK::NETWORK_END_TUTORIAL_SESSION();
	}
	NETWORK::NETWORK_SET_OVERRIDE_TUTORIAL_SESSION_CHAT(false);
}

void func_314()//Position - 0xB1A74
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_ISLAND")) != 0 || NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_ISLAND", -1, true, 0))
	{
		Global_1973199 = 1;
	}
}

int func_315(int iParam0)//Position - 0xC8809
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_1, 3);
	}
	return 0;
}

int func_316()//Position - 0xCA130
{
	char* sVar0;
	int iVar1;
	if (Global_1973204 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_2680265.f_1496 == 0)
			{
				return 0;
			}
			else
			{
				Global_1973204 = Global_2680265.f_1496;
			}
		}
		else
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
			if (iVar1 < 500)
			{
				Global_1973204 = 1;
			}
			else
			{
				Global_1973204 = 2;
			}
		}
	}
	if (Global_1973204 == 1)
	{
		sVar0 = "h4_islandx_disc_StrandedWhale";
	}
	else if (Global_1973204 == 2)
	{
		sVar0 = "h4_islandx_disc_StrandedShark";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	if (STREAMING::IS_IPL_ACTIVE(sVar0))
	{
		return 1;
	}
	STREAMING::REQUEST_IPL(sVar0);
	return 0;
}

void func_317(var uParam0)//Position - 0xCA2A9
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

bool func_318(int iParam0, int iParam1)//Position - 0xCB25A
{
	int iVar0;
	iVar0 = iParam0;
	return !__LIB_0__.func_492(&(Global_2689235[iVar0 /*453*/].f_435), iParam1);
}

int func_319(int iParam0, var uParam1, var uParam2)//Position - 0xCB32C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 4915.9116f, -4911.293f, 2.3611f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 1:
			*uParam1 = { 4915.268f, -4910.05f, 2.361f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 2:
			*uParam1 = { 4914.6245f, -4908.8066f, 2.3615f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 3:
			*uParam1 = { 4913.981f, -4907.5635f, 2.3623f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 4:
			*uParam1 = { 4913.3374f, -4906.3203f, 2.363f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 5:
			*uParam1 = { 4912.694f, -4905.077f, 2.3637f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 6:
			*uParam1 = { 4914.6685f, -4911.9365f, 2.3623f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 7:
			*uParam1 = { 4914.025f, -4910.6934f, 2.3613f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 8:
			*uParam1 = { 4913.3813f, -4909.45f, 2.3611f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 9:
			*uParam1 = { 4912.738f, -4908.207f, 2.3618f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 10:
			*uParam1 = { 4912.094f, -4906.964f, 2.3626f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 11:
			*uParam1 = { 4911.4507f, -4905.7207f, 2.3634f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 12:
			*uParam1 = { 4913.4253f, -4912.58f, 2.3635f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 13:
			*uParam1 = { 4912.7817f, -4911.337f, 2.3614f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 14:
			*uParam1 = { 4912.138f, -4910.0938f, 2.3607f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 15:
			*uParam1 = { 4911.4946f, -4908.8506f, 2.3614f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 16:
			*uParam1 = { 4910.851f, -4907.6074f, 2.3621f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 17:
			*uParam1 = { 4910.2075f, -4906.3643f, 2.363f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 18:
			*uParam1 = { 4912.182f, -4913.2236f, 2.3648f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 19:
			*uParam1 = { 4911.5386f, -4911.9805f, 2.3626f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 20:
			*uParam1 = { 4910.895f, -4910.7373f, 2.3611f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 21:
			*uParam1 = { 4910.2515f, -4909.494f, 2.361f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 22:
			*uParam1 = { 4909.608f, -4908.251f, 2.3617f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 23:
			*uParam1 = { 4908.9644f, -4907.008f, 2.3627f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 24:
			*uParam1 = { 4910.939f, -4913.867f, 2.3653f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 25:
			*uParam1 = { 4910.2954f, -4912.624f, 2.3636f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 26:
			*uParam1 = { 4909.652f, -4911.381f, 2.362f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 27:
			*uParam1 = { 4909.0083f, -4910.1377f, 2.3608f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 28:
			*uParam1 = { 4908.3647f, -4908.8945f, 2.3613f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 29:
			*uParam1 = { 4907.721f, -4907.6514f, 2.3623f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 30:
			*uParam1 = { 4909.696f, -4914.5107f, 2.3658f };
			*uParam2 = 117.36f;
			return 1;
			break;
		case 31:
			*uParam1 = { 4909.0522f, -4913.2676f, 2.3646f };
			*uParam2 = 117.36f;
			return 1;
			break;
	}
	return 0;
}

var func_320(int iParam0)//Position - 0xCBE1D
{
	return Global_2689235[iParam0 /*453*/].f_436;
}

int func_321(var uParam0)//Position - 0xD2376
{
	return 307;
}

float func_322(struct<3> Param0, struct<3> Param1)//Position - 0xD3BC4
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return SYSTEM::VDIST2(Param0, Param1);
}

int func_323(int iParam0)//Position - 0xD4508
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 11:
			return 1;
		case 5:
		case 6:
			return 2;
		case 7:
		case 8:
			return 3;
		case 9:
			return 4;
		case 10:
			return 5;
		case 12:
		case 13:
			return 6;
		case 19:
			return 7;
		case 14:
			return 8;
		case 15:
			return 9;
		case 16:
			return 10;
		case 17:
			return 11;
		case 18:
			return 12;
		case 20:
		case 21:
			return 13;
		case 22:
			return 14;
		case 23:
			return 15;
		case 24:
			return 16;
		default:
	}
	return -1;
}

float func_324()//Position - 0xDEBD2
{
	return 1.1f;
}

int func_325()//Position - 0x10A213
{
	return joaat("apa_mp_apa_yacht");
}

int func_326()//Position - 0x10A220
{
	return joaat("apa_mp_apa_yacht_win");
}

char* func_327(int iParam0)//Position - 0x10A8F0
{
	switch (iParam0)
	{
		case joaat("apa_prop_ap_port_text"):
			return "port_text";
			break;
		case joaat("apa_prop_ap_starb_text"):
			return "starb_text";
			break;
		case joaat("apa_prop_ap_stern_text"):
			return "stern_text";
			break;
	}
	return "";
}

void func_328(int iParam0)//Position - 0x10B38A
{
	MISC::SET_BIT(&(Global_2815059.f_5195.f_48), iParam0);
}

void func_329(int iParam0)//Position - 0x10B3A1
{
	MISC::CLEAR_BIT(&(Global_2815059.f_5195.f_48), iParam0);
}

Vector3 func_330(int iParam0)//Position - 0x11ED17
{
	return 1f, 1f, -1f;
}

void func_331(int iParam0)//Position - 0x11F7CA
{
	HUD::SET_BLIP_SHOW_CONE(iParam0, false, 11);
	HUD::REMOVE_FAKE_CONE_DATA(iParam0);
}

void func_332(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x12E33C
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*iParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*iParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_333(var uParam0, char* sParam1)//Position - 0x12E957
{
	StringCopy(&(uParam0->f_14), sParam1, 24);
}

int func_334(int iParam0, int iParam1)//Position - 0x12EFF1
{
	switch (iParam1)
	{
		case 1:
			return iParam0 * 2;
			break;
		case 2:
			return iParam0 * 10;
			break;
	}
	return iParam0;
}

float func_335(float fParam0)//Position - 0x12F0F7
{
	float fVar0;
	fVar0 = (fParam0 / 1080f);
	return fVar0;
}

float func_336(float fParam0)//Position - 0x12F10B
{
	float fVar0;
	fVar0 = (fParam0 / 1920f);
	return fVar0;
}

void func_337(var uParam0, char* sParam1)//Position - 0x12F13D
{
	uParam0->f_5 = GRAPHICS::SET_BINK_MOVIE(sParam1);
}

void func_338(int* iParam0, var uParam1, int iParam2)//Position - 0x12F18B
{
	iParam0->f_1 = __LIB_0__.func_310(__LIB_1__.func_295(uParam1, 0, 0), 0, iParam2);
}

void func_339(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x130700
{
	int iVar0;
	iVar0 = iParam0;
	if (iParam0 > 3)
	{
		iVar0 = (iParam0 - 3 + 1);
	}
	switch (iVar0)
	{
		case 0:
			*uParam1 = 255;
			*uParam2 = 10;
			*uParam3 = 10;
			break;
		case 1:
			*uParam1 = 255;
			*uParam2 = 171;
			*uParam3 = 0;
			break;
		case 2:
			*uParam1 = 50;
			*uParam2 = 30;
			*uParam3 = 255;
			break;
	}
	if (iParam0 > 3)
	{
		*uParam1 = SYSTEM::ROUND((IntToFloat(*uParam1) / 2f));
		*uParam2 = SYSTEM::ROUND((IntToFloat(*uParam2) / 2f));
		*uParam3 = SYSTEM::ROUND((IntToFloat(*uParam3) / 2f));
	}
}

void func_340(int iParam0, var uParam1)//Position - 0x130817
{
	switch (iParam0)
	{
		case 0:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Connect_Multiply_1", uParam1->f_741, true);
			break;
		case 1:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Connect_Multiply_2", uParam1->f_741, true);
			break;
		case 2:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Connect_Multiply_10", uParam1->f_741, true);
			break;
	}
}

void func_341(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x130BA6
{
	int iVar0;
	iVar0 = MISC::ABSI((iParam1 - iParam0));
	*uParam2 = SYSTEM::CEIL(((IntToFloat(iVar0) * fParam3) + 0.9f));
	if (iParam1 == 0)
	{
		*uParam2 = (*uParam2 - 1);
		return;
	}
	if (iParam0 >= 5 && iParam1 >= 5)
	{
		*uParam2 += 4;
		return;
	}
	if (iParam0 >= 5 && iParam1 >= 3)
	{
		*uParam2 += 2;
		return;
	}
}

void func_342(struct<2> Param0, struct<2> Param1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x130CD7
{
	GRAPHICS::DRAW_RECT(Param0.f_0, Param0.f_1, Param1.f_0, Param1.f_1, iParam2, iParam3, iParam4, iParam5, false);
}

float func_343()//Position - 0x130D6B
{
	float fVar0;
	fVar0 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fVar0 >= 4f)
		{
			fVar0 = (fVar0 / 3f);
		}
	}
	return fVar0;
}

struct<2> func_344(struct<2> Param0, float fParam1)//Position - 0x130DCD
{
	struct<2> Var0;
	Var0.f_0 = (Param0.f_0 / fParam1);
	Var0.f_1 = (Param0.f_1 / fParam1);
	return Var0;
}

int func_345(int iParam0)//Position - 0x130F18
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 0;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		case 8:
		case 9:
		case 10:
			return 2;
			break;
	}
	return 1;
}

int func_346()//Position - 0x131023
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)//Position - 0x1313A4
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 5;
			break;
		case 2:
			return 9;
			break;
	}
	return 0;
}

int func_348()//Position - 0x1313DC
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
	{
		return 1;
	}
	return 0;
}

char* func_349(int iParam0)//Position - 0x131868
{
	switch (iParam0)
	{
		case 0:
			return "0";
			break;
		case 1:
			return "1";
			break;
		case 2:
			return "2";
			break;
		case 3:
			return "3";
			break;
		case 4:
			return "4";
			break;
		case 5:
			return "5";
			break;
		case 6:
			return "6";
			break;
		case 7:
			return "7";
			break;
		case 8:
			return "8";
			break;
		case 9:
			return "9";
			break;
	}
	return "0";
}

char* func_350(int iParam0)//Position - 0x1320F5
{
	switch (iParam0)
	{
		case 0:
			return "Icons__x1";
			break;
		case 1:
			return "Icons__x2";
			break;
		case 2:
			return "Icons__x10";
			break;
	}
	return "Icons__x1";
}

void func_351(int* iParam0, var uParam1)//Position - 0x13213C
{
	if (GRAPHICS::GET_BINK_MOVIE_TIME(uParam1->f_5) > 0.1f && !BitTest(uParam1->f_740, 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Startup_Sequence", uParam1->f_741, true);
		MISC::SET_BIT(&(uParam1->f_740), 0);
	}
	if (GRAPHICS::GET_BINK_MOVIE_TIME(uParam1->f_5) > 75f && !BitTest(uParam1->f_740, 1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Draw_Screen", uParam1->f_741, true);
		MISC::SET_BIT(&(uParam1->f_740), 1);
	}
}

void func_352(var uParam0, int* iParam1)//Position - 0x13232A
{
	if (BitTest(*iParam1, 1) || BitTest(*iParam1, 0))
	{
		return;
	}
	__LIB_1__.func_0(uParam0, 1);
}

void func_353(var uParam0)//Position - 0x1323E4
{
	uParam0->f_8 = (uParam0->f_8 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	uParam0->f_9 = SYSTEM::FLOOR((IntToFloat(uParam0->f_8) / 365f));
	uParam0->f_8 = (uParam0->f_8 - SYSTEM::ROUND((365f * IntToFloat(uParam0->f_9))));
	uParam0->f_6 = (uParam0->f_6 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	uParam0->f_7 = SYSTEM::FLOOR((IntToFloat(uParam0->f_6) / 311f));
	uParam0->f_6 = (uParam0->f_6 - SYSTEM::ROUND((311f * IntToFloat(uParam0->f_7))));
	uParam0->f_10 = (uParam0->f_10 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	uParam0->f_11 = SYSTEM::FLOOR((IntToFloat(uParam0->f_10) / 155f));
	uParam0->f_10 = (uParam0->f_10 - SYSTEM::ROUND((155f * IntToFloat(uParam0->f_11))));
}

int func_354(int* iParam0)//Position - 0x1326F2
{
	if (BitTest(iParam0->f_280, 13))
	{
		return 1;
	}
	return 0;
}

void func_355(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x134712
{
	switch (iParam1)
	{
		case 0:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 0, 2, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 0, 2, iParam3);
			break;
		case 1:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 3, 5, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 3, 5, iParam3);
			break;
		case 2:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 6, 8, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 6, 8, iParam3);
			break;
		case 3:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 9, 11, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 9, 11, iParam3);
			break;
		case 4:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 12, 14, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 12, 14, iParam3);
			break;
		case 5:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 15, 17, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 15, 17, iParam3);
			break;
		case 6:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 18, 20, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 18, 20, iParam3);
			break;
		case 7:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 21, 23, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 21, 23, iParam3);
			break;
		case 8:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 24, 26, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 24, 26, iParam3);
			break;
		case 9:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), 27, 29, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), 27, 29, iParam3);
			break;
		case 10:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[2]), 0, 2, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[3]), 0, 2, iParam3);
			break;
		case 11:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[2]), 3, 5, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[3]), 3, 5, iParam3);
			break;
		case 12:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[2]), 6, 8, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[3]), 6, 8, iParam3);
			break;
		case 13:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[2]), 9, 11, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[3]), 9, 11, iParam3);
			break;
		case 14:
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[2]), 12, 14, iParam2);
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[3]), 12, 14, iParam3);
			break;
	}
}

void func_356(var uParam0, int iParam1, int iParam2)//Position - 0x13499E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (iVar0 < 9)
		{
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), iVar0 * 3, iVar0 * 3 + 2, MISC::GET_BITS_IN_RANGE(uParam0->f_283[0], iVar0 + 1 * 3, iVar0 + 1 * 3 + 2));
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), iVar0 * 3, iVar0 * 3 + 2, MISC::GET_BITS_IN_RANGE(uParam0->f_283[1], iVar0 + 1 * 3, iVar0 + 1 * 3 + 2));
		}
		else if (iVar0 == 9)
		{
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[0]), iVar0 * 3, iVar0 * 3 + 2, MISC::GET_BITS_IN_RANGE(uParam0->f_283[2], 0, 2));
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[1]), iVar0 * 3, iVar0 * 3 + 2, MISC::GET_BITS_IN_RANGE(uParam0->f_283[3], 0, 2));
		}
		else
		{
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[2]), (iVar0 - 10) * 3, (iVar0 - 10) * 3 + 2, MISC::GET_BITS_IN_RANGE(uParam0->f_283[2], (iVar0 + 1 - 10) * 3, (iVar0 + 1 - 10) * 3 + 2));
			MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[3]), (iVar0 - 10) * 3, (iVar0 - 10) * 3 + 2, MISC::GET_BITS_IN_RANGE(uParam0->f_283[3], (iVar0 + 1 - 10) * 3, (iVar0 + 1 - 10) * 3 + 2));
		}
		iVar0++;
	}
	MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[2]), 12, 14, iParam1);
	MISC::SET_BITS_IN_RANGE(&(uParam0->f_283[3]), 12, 14, iParam2);
}

void func_357(int iParam0, int iParam1)//Position - 0x134B48
{
	PAD::SET_CONTROL_SHAKE(2 /*FRONTEND_CONTROL*/, iParam0, iParam1);
}

float func_358(float fParam0, int iParam1)//Position - 0x134C14
{
	float fVar0;
	fVar0 = (fParam0 % IntToFloat(iParam1));
	fVar0 = (fVar0 / IntToFloat((iParam1 - 1)));
	return fVar0;
}

float func_359(float fParam0, int iParam1)//Position - 0x134C30
{
	float fVar0;
	fVar0 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam0 / IntToFloat(iParam1))));
	fVar0 = (fVar0 / IntToFloat((iParam1 - 1)));
	return fVar0;
}

void func_360(var uParam0, int iParam1)//Position - 0x1353D1
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_26.f_6 = 0.174f;
			uParam0->f_26.f_7 = 0.739f;
			uParam0->f_26 = uParam0->f_26.f_6;
			uParam0->f_26.f_1 = uParam0->f_26.f_7;
			uParam0->f_26.f_12 = 3;
			uParam0->f_26.f_13 = uParam0->f_26.f_12;
			uParam0->f_26.f_15 = 0.088f;
			uParam0->f_26.f_16 = (uParam0->f_26.f_15 * uParam0->f_288);
			uParam0->f_26.f_8 = 0.83f;
			uParam0->f_26.f_9 = 0.232f;
			uParam0->f_26.f_10 = 0.026f;
			uParam0->f_26.f_11 = 0.07f;
			uParam0->f_114[0 /*4*/] = 0.1573f;
			uParam0->f_114[0 /*4*/].f_1 = 0.5f;
			uParam0->f_114[0 /*4*/].f_2 = 0.007f;
			uParam0->f_114[0 /*4*/].f_3 = 0.696f;
			uParam0->f_114[1 /*4*/] = 0.8423f;
			uParam0->f_114[1 /*4*/].f_1 = 0.5f;
			uParam0->f_114[1 /*4*/].f_2 = 0.007f;
			uParam0->f_114[1 /*4*/].f_3 = 0.696f;
			uParam0->f_114[2 /*4*/] = 0.5003f;
			uParam0->f_114[2 /*4*/].f_1 = 0.148f;
			uParam0->f_114[2 /*4*/].f_2 = 0.6905f;
			uParam0->f_114[2 /*4*/].f_3 = 0.01f;
			uParam0->f_114[3 /*4*/] = 0.5005f;
			uParam0->f_114[3 /*4*/].f_1 = 0.853f;
			uParam0->f_114[3 /*4*/].f_2 = 0.691f;
			uParam0->f_114[3 /*4*/].f_3 = 0.01f;
			uParam0->f_114[4 /*4*/] = 0.171f;
			uParam0->f_114[4 /*4*/].f_1 = 0.739f;
			uParam0->f_114[4 /*4*/].f_2 = 0.027f;
			uParam0->f_114[4 /*4*/].f_3 = 0.078f;
			uParam0->f_114[5 /*4*/] = 0.2438f;
			uParam0->f_114[5 /*4*/].f_1 = 0.3675f;
			uParam0->f_114[5 /*4*/].f_2 = 0.123f;
			uParam0->f_114[5 /*4*/].f_3 = 0.4285f;
			uParam0->f_114[6 /*4*/] = 0.3511f;
			uParam0->f_114[6 /*4*/].f_1 = 0.3157f;
			uParam0->f_114[6 /*4*/].f_2 = 0.059f;
			uParam0->f_114[6 /*4*/].f_3 = 0.32f;
			uParam0->f_114[7 /*4*/] = 0.4125f;
			uParam0->f_114[7 /*4*/].f_1 = 0.2648f;
			uParam0->f_114[7 /*4*/].f_2 = 0.0308f;
			uParam0->f_114[7 /*4*/].f_3 = 0.2235f;
			uParam0->f_114[8 /*4*/] = 0.4607f;
			uParam0->f_114[8 /*4*/].f_1 = 0.2645f;
			uParam0->f_114[8 /*4*/].f_2 = 0.0316f;
			uParam0->f_114[8 /*4*/].f_3 = 0.224f;
			uParam0->f_114[9 /*4*/] = 0.5079f;
			uParam0->f_114[9 /*4*/].f_1 = 0.2645f;
			uParam0->f_114[9 /*4*/].f_2 = 0.03f;
			uParam0->f_114[9 /*4*/].f_3 = 0.224f;
			uParam0->f_114[10 /*4*/] = 0.5611f;
			uParam0->f_114[10 /*4*/].f_1 = 0.2294f;
			uParam0->f_114[10 /*4*/].f_2 = 0.0443f;
			uParam0->f_114[10 /*4*/].f_3 = 0.152f;
			uParam0->f_114[11 /*4*/] = 0.621f;
			uParam0->f_114[11 /*4*/].f_1 = 0.2294f;
			uParam0->f_114[11 /*4*/].f_2 = 0.0443f;
			uParam0->f_114[11 /*4*/].f_3 = 0.152f;
			uParam0->f_114[12 /*4*/] = 0.6947f;
			uParam0->f_114[12 /*4*/].f_1 = 0.2031f;
			uParam0->f_114[12 /*4*/].f_2 = 0.067f;
			uParam0->f_114[12 /*4*/].f_3 = 0.1f;
			uParam0->f_114[13 /*4*/] = 0.3678f;
			uParam0->f_114[13 /*4*/].f_1 = 0.775f;
			uParam0->f_114[13 /*4*/].f_2 = 0.128f;
			uParam0->f_114[13 /*4*/].f_3 = 0.148f;
			uParam0->f_114[14 /*4*/] = 0.5102f;
			uParam0->f_114[14 /*4*/].f_1 = 0.6458f;
			uParam0->f_114[14 /*4*/].f_2 = 0.1162f;
			uParam0->f_114[14 /*4*/].f_3 = 0.418f;
			uParam0->f_114[15 /*4*/] = 0.6453f;
			uParam0->f_114[15 /*4*/].f_1 = 0.663f;
			uParam0->f_114[15 /*4*/].f_2 = 0.1151f;
			uParam0->f_114[15 /*4*/].f_3 = 0.37f;
			uParam0->f_114[16 /*4*/] = 0.779f;
			uParam0->f_114[16 /*4*/].f_1 = 0.663f;
			uParam0->f_114[16 /*4*/].f_2 = 0.114f;
			uParam0->f_114[16 /*4*/].f_3 = 0.37f;
			uParam0->f_114[17 /*4*/] = 0.3711f;
			uParam0->f_114[17 /*4*/].f_1 = 0.5917f;
			uParam0->f_114[17 /*4*/].f_2 = 0.0532f;
			uParam0->f_114[17 /*4*/].f_3 = 0.092f;
			uParam0->f_114[18 /*4*/] = 0.713f;
			uParam0->f_114[18 /*4*/].f_1 = 0.413f;
			uParam0->f_114[18 /*4*/].f_2 = 0.255f;
			uParam0->f_114[18 /*4*/].f_3 = 0.07f;
			uParam0->f_114[19 /*4*/] = 0.7648f;
			uParam0->f_114[19 /*4*/].f_1 = 0.3458f;
			uParam0->f_114[19 /*4*/].f_2 = 0.1432f;
			uParam0->f_114[19 /*4*/].f_3 = 0.066f;
			uParam0->f_114[20 /*4*/] = 0f;
			uParam0->f_114[20 /*4*/].f_1 = 0f;
			uParam0->f_114[20 /*4*/].f_2 = 0f;
			uParam0->f_114[20 /*4*/].f_3 = 0f;
			uParam0->f_114[21 /*4*/] = 0f;
			uParam0->f_114[21 /*4*/].f_1 = 0f;
			uParam0->f_114[21 /*4*/].f_2 = 0f;
			uParam0->f_114[21 /*4*/].f_3 = 0f;
			uParam0->f_114[22 /*4*/] = 0f;
			uParam0->f_114[22 /*4*/].f_1 = 0f;
			uParam0->f_114[22 /*4*/].f_2 = 0f;
			uParam0->f_114[22 /*4*/].f_3 = 0f;
			uParam0->f_114[23 /*4*/] = 0f;
			uParam0->f_114[23 /*4*/].f_1 = 0f;
			uParam0->f_114[23 /*4*/].f_2 = 0f;
			uParam0->f_114[23 /*4*/].f_3 = 0f;
			uParam0->f_114[24 /*4*/] = 0f;
			uParam0->f_114[24 /*4*/].f_1 = 0f;
			uParam0->f_114[24 /*4*/].f_2 = 0f;
			uParam0->f_114[24 /*4*/].f_3 = 0f;
			uParam0->f_114[25 /*4*/] = 0f;
			uParam0->f_114[25 /*4*/].f_1 = 0f;
			uParam0->f_114[25 /*4*/].f_2 = 0f;
			uParam0->f_114[25 /*4*/].f_3 = 0f;
			uParam0->f_114[26 /*4*/] = 0f;
			uParam0->f_114[26 /*4*/].f_1 = 0f;
			uParam0->f_114[26 /*4*/].f_2 = 0f;
			uParam0->f_114[26 /*4*/].f_3 = 0f;
			uParam0->f_114[27 /*4*/] = 0f;
			uParam0->f_114[27 /*4*/].f_1 = 0f;
			uParam0->f_114[27 /*4*/].f_2 = 0f;
			uParam0->f_114[27 /*4*/].f_3 = 0f;
			uParam0->f_114[28 /*4*/] = 0f;
			uParam0->f_114[28 /*4*/].f_1 = 0f;
			uParam0->f_114[28 /*4*/].f_2 = 0f;
			uParam0->f_114[28 /*4*/].f_3 = 0f;
			uParam0->f_114[29 /*4*/] = 0f;
			uParam0->f_114[29 /*4*/].f_1 = 0f;
			uParam0->f_114[29 /*4*/].f_2 = 0f;
			uParam0->f_114[29 /*4*/].f_3 = 0f;
			uParam0->f_114[30 /*4*/] = 0f;
			uParam0->f_114[30 /*4*/].f_1 = 0f;
			uParam0->f_114[30 /*4*/].f_2 = 0f;
			uParam0->f_114[30 /*4*/].f_3 = 0f;
			uParam0->f_114[31 /*4*/] = 0f;
			uParam0->f_114[31 /*4*/].f_1 = 0f;
			uParam0->f_114[31 /*4*/].f_2 = 0f;
			uParam0->f_114[31 /*4*/].f_3 = 0f;
			uParam0->f_114[32 /*4*/] = 0f;
			uParam0->f_114[32 /*4*/].f_1 = 0f;
			uParam0->f_114[32 /*4*/].f_2 = 0f;
			uParam0->f_114[32 /*4*/].f_3 = 0f;
			uParam0->f_114[33 /*4*/] = 0f;
			uParam0->f_114[33 /*4*/].f_1 = 0f;
			uParam0->f_114[33 /*4*/].f_2 = 0f;
			uParam0->f_114[33 /*4*/].f_3 = 0f;
			uParam0->f_114[34 /*4*/] = 0f;
			uParam0->f_114[34 /*4*/].f_1 = 0f;
			uParam0->f_114[34 /*4*/].f_2 = 0f;
			uParam0->f_114[34 /*4*/].f_3 = 0f;
			uParam0->f_114[35 /*4*/] = 0f;
			uParam0->f_114[35 /*4*/].f_1 = 0f;
			uParam0->f_114[35 /*4*/].f_2 = 0f;
			uParam0->f_114[35 /*4*/].f_3 = 0f;
			uParam0->f_114[36 /*4*/] = 0f;
			uParam0->f_114[36 /*4*/].f_1 = 0f;
			uParam0->f_114[36 /*4*/].f_2 = 0f;
			uParam0->f_114[36 /*4*/].f_3 = 0f;
			uParam0->f_114[37 /*4*/] = 0f;
			uParam0->f_114[37 /*4*/].f_1 = 0f;
			uParam0->f_114[37 /*4*/].f_2 = 0f;
			uParam0->f_114[37 /*4*/].f_3 = 0f;
			uParam0->f_114[38 /*4*/] = 0f;
			uParam0->f_114[38 /*4*/].f_1 = 0f;
			uParam0->f_114[38 /*4*/].f_2 = 0f;
			uParam0->f_114[38 /*4*/].f_3 = 0f;
			uParam0->f_114[39 /*4*/] = 0f;
			uParam0->f_114[39 /*4*/].f_1 = 0f;
			uParam0->f_114[39 /*4*/].f_2 = 0f;
			uParam0->f_114[39 /*4*/].f_3 = 0f;
			break;
		case 1:
			uParam0->f_26.f_6 = 0.174f;
			uParam0->f_26.f_7 = 0.739f;
			uParam0->f_26 = uParam0->f_26.f_6;
			uParam0->f_26.f_1 = uParam0->f_26.f_7;
			uParam0->f_26.f_12 = 3;
			uParam0->f_26.f_13 = uParam0->f_26.f_12;
			uParam0->f_26.f_15 = 0.088f;
			uParam0->f_26.f_16 = (uParam0->f_26.f_15 * uParam0->f_288);
			uParam0->f_26.f_8 = 0.83f;
			uParam0->f_26.f_9 = 0.301f;
			uParam0->f_26.f_10 = 0.026f;
			uParam0->f_26.f_11 = 0.07f;
			uParam0->f_114[0 /*4*/] = 0.1573f;
			uParam0->f_114[0 /*4*/].f_1 = 0.5f;
			uParam0->f_114[0 /*4*/].f_2 = 0.007f;
			uParam0->f_114[0 /*4*/].f_3 = 0.696f;
			uParam0->f_114[1 /*4*/] = 0.8423f;
			uParam0->f_114[1 /*4*/].f_1 = 0.5f;
			uParam0->f_114[1 /*4*/].f_2 = 0.007f;
			uParam0->f_114[1 /*4*/].f_3 = 0.696f;
			uParam0->f_114[2 /*4*/] = 0.5003f;
			uParam0->f_114[2 /*4*/].f_1 = 0.148f;
			uParam0->f_114[2 /*4*/].f_2 = 0.6905f;
			uParam0->f_114[2 /*4*/].f_3 = 0.01f;
			uParam0->f_114[3 /*4*/] = 0.5005f;
			uParam0->f_114[3 /*4*/].f_1 = 0.853f;
			uParam0->f_114[3 /*4*/].f_2 = 0.691f;
			uParam0->f_114[3 /*4*/].f_3 = 0.01f;
			uParam0->f_114[4 /*4*/] = 0.171f;
			uParam0->f_114[4 /*4*/].f_1 = 0.739f;
			uParam0->f_114[4 /*4*/].f_2 = 0.027f;
			uParam0->f_114[4 /*4*/].f_3 = 0.078f;
			uParam0->f_114[5 /*4*/] = 0.2034f;
			uParam0->f_114[5 /*4*/].f_1 = 0.3984f;
			uParam0->f_114[5 /*4*/].f_2 = 0.089f;
			uParam0->f_114[5 /*4*/].f_3 = 0.488f;
			uParam0->f_114[6 /*4*/] = 0.3278f;
			uParam0->f_114[6 /*4*/].f_1 = 0.2125f;
			uParam0->f_114[6 /*4*/].f_2 = 0.172f;
			uParam0->f_114[6 /*4*/].f_3 = 0.113f;
			uParam0->f_114[7 /*4*/] = 0.3763f;
			uParam0->f_114[7 /*4*/].f_1 = 0.638f;
			uParam0->f_114[7 /*4*/].f_2 = 0.124f;
			uParam0->f_114[7 /*4*/].f_3 = 0.4367f;
			uParam0->f_114[8 /*4*/] = 0.486f;
			uParam0->f_114[8 /*4*/].f_1 = 0.5433f;
			uParam0->f_114[8 /*4*/].f_2 = 0.0526f;
			uParam0->f_114[8 /*4*/].f_3 = 0.61f;
			uParam0->f_114[9 /*4*/] = 0.6212f;
			uParam0->f_114[9 /*4*/].f_1 = 0.351f;
			uParam0->f_114[9 /*4*/].f_2 = 0.1257f;
			uParam0->f_114[9 /*4*/].f_3 = 0.3996f;
			uParam0->f_114[10 /*4*/] = 0.7034f;
			uParam0->f_114[10 /*4*/].f_1 = 0.3048f;
			uParam0->f_114[10 /*4*/].f_2 = 0.04f;
			uParam0->f_114[10 /*4*/].f_3 = 0.301f;
			uParam0->f_114[11 /*4*/] = 0.7397f;
			uParam0->f_114[11 /*4*/].f_1 = 0.2289f;
			uParam0->f_114[11 /*4*/].f_2 = 0.033f;
			uParam0->f_114[11 /*4*/].f_3 = 0.149f;
			uParam0->f_114[12 /*4*/] = 0.6249f;
			uParam0->f_114[12 /*4*/].f_1 = 0.7105f;
			uParam0->f_114[12 /*4*/].f_2 = 0.1412f;
			uParam0->f_114[12 /*4*/].f_3 = 0.1499f;
			uParam0->f_114[13 /*4*/] = 0.79f;
			uParam0->f_114[13 /*4*/].f_1 = 0.801f;
			uParam0->f_114[13 /*4*/].f_2 = 0.0955f;
			uParam0->f_114[13 /*4*/].f_3 = 0.1032f;
			uParam0->f_114[14 /*4*/] = 0.7704f;
			uParam0->f_114[14 /*4*/].f_1 = 0.5977f;
			uParam0->f_114[14 /*4*/].f_2 = 0.0564f;
			uParam0->f_114[14 /*4*/].f_3 = 0.163f;
			uParam0->f_114[15 /*4*/] = 0.8086f;
			uParam0->f_114[15 /*4*/].f_1 = 0.4081f;
			uParam0->f_114[15 /*4*/].f_2 = 0.0593f;
			uParam0->f_114[15 /*4*/].f_3 = 0.0931f;
			uParam0->f_114[16 /*4*/] = 0.3295f;
			uParam0->f_114[16 /*4*/].f_1 = 0.391f;
			uParam0->f_114[16 /*4*/].f_2 = 0.0304f;
			uParam0->f_114[16 /*4*/].f_3 = 0.0642f;
			uParam0->f_114[17 /*4*/] = 0.3961f;
			uParam0->f_114[17 /*4*/].f_1 = 0.3097f;
			uParam0->f_114[17 /*4*/].f_2 = 0.0346f;
			uParam0->f_114[17 /*4*/].f_3 = 0.0785f;
			uParam0->f_114[18 /*4*/] = 0.5495f;
			uParam0->f_114[18 /*4*/].f_1 = 0.5064f;
			uParam0->f_114[18 /*4*/].f_2 = 0.015f;
			uParam0->f_114[18 /*4*/].f_3 = 0.09f;
			uParam0->f_114[19 /*4*/] = 0f;
			uParam0->f_114[19 /*4*/].f_1 = 0f;
			uParam0->f_114[19 /*4*/].f_2 = 0f;
			uParam0->f_114[19 /*4*/].f_3 = 0f;
			uParam0->f_114[20 /*4*/] = 0f;
			uParam0->f_114[20 /*4*/].f_1 = 0f;
			uParam0->f_114[20 /*4*/].f_2 = 0f;
			uParam0->f_114[20 /*4*/].f_3 = 0f;
			uParam0->f_114[21 /*4*/] = 0f;
			uParam0->f_114[21 /*4*/].f_1 = 0f;
			uParam0->f_114[21 /*4*/].f_2 = 0f;
			uParam0->f_114[21 /*4*/].f_3 = 0f;
			uParam0->f_114[22 /*4*/] = 0f;
			uParam0->f_114[22 /*4*/].f_1 = 0f;
			uParam0->f_114[22 /*4*/].f_2 = 0f;
			uParam0->f_114[22 /*4*/].f_3 = 0f;
			uParam0->f_114[23 /*4*/] = 0f;
			uParam0->f_114[23 /*4*/].f_1 = 0f;
			uParam0->f_114[23 /*4*/].f_2 = 0f;
			uParam0->f_114[23 /*4*/].f_3 = 0f;
			uParam0->f_114[24 /*4*/] = 0f;
			uParam0->f_114[24 /*4*/].f_1 = 0f;
			uParam0->f_114[24 /*4*/].f_2 = 0f;
			uParam0->f_114[24 /*4*/].f_3 = 0f;
			uParam0->f_114[25 /*4*/] = 0f;
			uParam0->f_114[25 /*4*/].f_1 = 0f;
			uParam0->f_114[25 /*4*/].f_2 = 0f;
			uParam0->f_114[25 /*4*/].f_3 = 0f;
			uParam0->f_114[26 /*4*/] = 0f;
			uParam0->f_114[26 /*4*/].f_1 = 0f;
			uParam0->f_114[26 /*4*/].f_2 = 0f;
			uParam0->f_114[26 /*4*/].f_3 = 0f;
			uParam0->f_114[27 /*4*/] = 0f;
			uParam0->f_114[27 /*4*/].f_1 = 0f;
			uParam0->f_114[27 /*4*/].f_2 = 0f;
			uParam0->f_114[27 /*4*/].f_3 = 0f;
			uParam0->f_114[28 /*4*/] = 0f;
			uParam0->f_114[28 /*4*/].f_1 = 0f;
			uParam0->f_114[28 /*4*/].f_2 = 0f;
			uParam0->f_114[28 /*4*/].f_3 = 0f;
			uParam0->f_114[29 /*4*/] = 0f;
			uParam0->f_114[29 /*4*/].f_1 = 0f;
			uParam0->f_114[29 /*4*/].f_2 = 0f;
			uParam0->f_114[29 /*4*/].f_3 = 0f;
			uParam0->f_114[30 /*4*/] = 0f;
			uParam0->f_114[30 /*4*/].f_1 = 0f;
			uParam0->f_114[30 /*4*/].f_2 = 0f;
			uParam0->f_114[30 /*4*/].f_3 = 0f;
			uParam0->f_114[31 /*4*/] = 0f;
			uParam0->f_114[31 /*4*/].f_1 = 0f;
			uParam0->f_114[31 /*4*/].f_2 = 0f;
			uParam0->f_114[31 /*4*/].f_3 = 0f;
			uParam0->f_114[32 /*4*/] = 0f;
			uParam0->f_114[32 /*4*/].f_1 = 0f;
			uParam0->f_114[32 /*4*/].f_2 = 0f;
			uParam0->f_114[32 /*4*/].f_3 = 0f;
			uParam0->f_114[33 /*4*/] = 0f;
			uParam0->f_114[33 /*4*/].f_1 = 0f;
			uParam0->f_114[33 /*4*/].f_2 = 0f;
			uParam0->f_114[33 /*4*/].f_3 = 0f;
			uParam0->f_114[34 /*4*/] = 0f;
			uParam0->f_114[34 /*4*/].f_1 = 0f;
			uParam0->f_114[34 /*4*/].f_2 = 0f;
			uParam0->f_114[34 /*4*/].f_3 = 0f;
			uParam0->f_114[35 /*4*/] = 0f;
			uParam0->f_114[35 /*4*/].f_1 = 0f;
			uParam0->f_114[35 /*4*/].f_2 = 0f;
			uParam0->f_114[35 /*4*/].f_3 = 0f;
			uParam0->f_114[36 /*4*/] = 0f;
			uParam0->f_114[36 /*4*/].f_1 = 0f;
			uParam0->f_114[36 /*4*/].f_2 = 0f;
			uParam0->f_114[36 /*4*/].f_3 = 0f;
			uParam0->f_114[37 /*4*/] = 0f;
			uParam0->f_114[37 /*4*/].f_1 = 0f;
			uParam0->f_114[37 /*4*/].f_2 = 0f;
			uParam0->f_114[37 /*4*/].f_3 = 0f;
			uParam0->f_114[38 /*4*/] = 0f;
			uParam0->f_114[38 /*4*/].f_1 = 0f;
			uParam0->f_114[38 /*4*/].f_2 = 0f;
			uParam0->f_114[38 /*4*/].f_3 = 0f;
			uParam0->f_114[39 /*4*/] = 0f;
			uParam0->f_114[39 /*4*/].f_1 = 0f;
			uParam0->f_114[39 /*4*/].f_2 = 0f;
			uParam0->f_114[39 /*4*/].f_3 = 0f;
			break;
		case 2:
			uParam0->f_26.f_6 = 0.175f;
			uParam0->f_26.f_7 = 0.772f;
			uParam0->f_26 = uParam0->f_26.f_6;
			uParam0->f_26.f_1 = uParam0->f_26.f_7;
			uParam0->f_26.f_12 = 3;
			uParam0->f_26.f_13 = uParam0->f_26.f_12;
			uParam0->f_26.f_15 = 0.088f;
			uParam0->f_26.f_16 = (uParam0->f_26.f_15 * uParam0->f_288);
			uParam0->f_26.f_8 = 0.171f;
			uParam0->f_26.f_9 = 0.23f;
			uParam0->f_26.f_10 = 0.026f;
			uParam0->f_26.f_11 = 0.07f;
			uParam0->f_114[0 /*4*/] = 0.1573f;
			uParam0->f_114[0 /*4*/].f_1 = 0.5f;
			uParam0->f_114[0 /*4*/].f_2 = 0.007f;
			uParam0->f_114[0 /*4*/].f_3 = 0.696f;
			uParam0->f_114[1 /*4*/] = 0.8423f;
			uParam0->f_114[1 /*4*/].f_1 = 0.5f;
			uParam0->f_114[1 /*4*/].f_2 = 0.007f;
			uParam0->f_114[1 /*4*/].f_3 = 0.696f;
			uParam0->f_114[2 /*4*/] = 0.5003f;
			uParam0->f_114[2 /*4*/].f_1 = 0.148f;
			uParam0->f_114[2 /*4*/].f_2 = 0.6905f;
			uParam0->f_114[2 /*4*/].f_3 = 0.01f;
			uParam0->f_114[3 /*4*/] = 0.5005f;
			uParam0->f_114[3 /*4*/].f_1 = 0.853f;
			uParam0->f_114[3 /*4*/].f_2 = 0.691f;
			uParam0->f_114[3 /*4*/].f_3 = 0.01f;
			uParam0->f_114[4 /*4*/] = 0.171f;
			uParam0->f_114[4 /*4*/].f_1 = 0.772f;
			uParam0->f_114[4 /*4*/].f_2 = 0.028f;
			uParam0->f_114[4 /*4*/].f_3 = 0.079f;
			uParam0->f_114[5 /*4*/] = 0.2405f;
			uParam0->f_114[5 /*4*/].f_1 = 0.5073f;
			uParam0->f_114[5 /*4*/].f_2 = 0.1739f;
			uParam0->f_114[5 /*4*/].f_3 = 0.4143f;
			uParam0->f_114[6 /*4*/] = 0.401f;
			uParam0->f_114[6 /*4*/].f_1 = 0.7611f;
			uParam0->f_114[6 /*4*/].f_2 = 0.0698f;
			uParam0->f_114[6 /*4*/].f_3 = 0.1734f;
			uParam0->f_114[7 /*4*/] = 0.4172f;
			uParam0->f_114[7 /*4*/].f_1 = 0.4899f;
			uParam0->f_114[7 /*4*/].f_2 = 0.2f;
			uParam0->f_114[7 /*4*/].f_3 = 0.1679f;
			uParam0->f_114[8 /*4*/] = 0.537f;
			uParam0->f_114[8 /*4*/].f_1 = 0.3792f;
			uParam0->f_114[8 /*4*/].f_2 = 0.0701f;
			uParam0->f_114[8 /*4*/].f_3 = 0.262f;
			uParam0->f_114[9 /*4*/] = 0.5992f;
			uParam0->f_114[9 /*4*/].f_1 = 0.519f;
			uParam0->f_114[9 /*4*/].f_2 = 0.0994f;
			uParam0->f_114[9 /*4*/].f_3 = 0.0891f;
			uParam0->f_114[10 /*4*/] = 0.7266f;
			uParam0->f_114[10 /*4*/].f_1 = 0.7504f;
			uParam0->f_114[10 /*4*/].f_2 = 0.227f;
			uParam0->f_114[10 /*4*/].f_3 = 0.2018f;
			uParam0->f_114[11 /*4*/] = 0.7684f;
			uParam0->f_114[11 /*4*/].f_1 = 0.495f;
			uParam0->f_114[11 /*4*/].f_2 = 0.141f;
			uParam0->f_114[11 /*4*/].f_3 = 0.1301f;
			uParam0->f_114[12 /*4*/] = 0.7276f;
			uParam0->f_114[12 /*4*/].f_1 = 0.2681f;
			uParam0->f_114[12 /*4*/].f_2 = 0.225f;
			uParam0->f_114[12 /*4*/].f_3 = 0.23f;
			uParam0->f_114[13 /*4*/] = 0.4103f;
			uParam0->f_114[13 /*4*/].f_1 = 0.246f;
			uParam0->f_114[13 /*4*/].f_2 = 0.0704f;
			uParam0->f_114[13 /*4*/].f_3 = 0.1924f;
			uParam0->f_114[14 /*4*/] = 0.3368f;
			uParam0->f_114[14 /*4*/].f_1 = 0.1981f;
			uParam0->f_114[14 /*4*/].f_2 = 0.0743f;
			uParam0->f_114[14 /*4*/].f_3 = 0.0938f;
			uParam0->f_114[15 /*4*/] = 0.5345f;
			uParam0->f_114[15 /*4*/].f_1 = 0.6472f;
			uParam0->f_114[15 /*4*/].f_2 = 0.0653f;
			uParam0->f_114[15 /*4*/].f_3 = 0.2456f;
			uParam0->f_114[16 /*4*/] = 0.4531f;
			uParam0->f_114[16 /*4*/].f_1 = 0.2952f;
			uParam0->f_114[16 /*4*/].f_2 = 0.0225f;
			uParam0->f_114[16 /*4*/].f_3 = 0.0954f;
			uParam0->f_114[17 /*4*/] = 0f;
			uParam0->f_114[17 /*4*/].f_1 = 0f;
			uParam0->f_114[17 /*4*/].f_2 = 0f;
			uParam0->f_114[17 /*4*/].f_3 = 0f;
			uParam0->f_114[18 /*4*/] = 0f;
			uParam0->f_114[18 /*4*/].f_1 = 0f;
			uParam0->f_114[18 /*4*/].f_2 = 0f;
			uParam0->f_114[18 /*4*/].f_3 = 0f;
			uParam0->f_114[19 /*4*/] = 0f;
			uParam0->f_114[19 /*4*/].f_1 = 0f;
			uParam0->f_114[19 /*4*/].f_2 = 0f;
			uParam0->f_114[19 /*4*/].f_3 = 0f;
			uParam0->f_114[20 /*4*/] = 0f;
			uParam0->f_114[20 /*4*/].f_1 = 0f;
			uParam0->f_114[20 /*4*/].f_2 = 0f;
			uParam0->f_114[20 /*4*/].f_3 = 0f;
			uParam0->f_114[21 /*4*/] = 0f;
			uParam0->f_114[21 /*4*/].f_1 = 0f;
			uParam0->f_114[21 /*4*/].f_2 = 0f;
			uParam0->f_114[21 /*4*/].f_3 = 0f;
			uParam0->f_114[22 /*4*/] = 0f;
			uParam0->f_114[22 /*4*/].f_1 = 0f;
			uParam0->f_114[22 /*4*/].f_2 = 0f;
			uParam0->f_114[22 /*4*/].f_3 = 0f;
			uParam0->f_114[23 /*4*/] = 0f;
			uParam0->f_114[23 /*4*/].f_1 = 0f;
			uParam0->f_114[23 /*4*/].f_2 = 0f;
			uParam0->f_114[23 /*4*/].f_3 = 0f;
			uParam0->f_114[24 /*4*/] = 0f;
			uParam0->f_114[24 /*4*/].f_1 = 0f;
			uParam0->f_114[24 /*4*/].f_2 = 0f;
			uParam0->f_114[24 /*4*/].f_3 = 0f;
			uParam0->f_114[25 /*4*/] = 0f;
			uParam0->f_114[25 /*4*/].f_1 = 0f;
			uParam0->f_114[25 /*4*/].f_2 = 0f;
			uParam0->f_114[25 /*4*/].f_3 = 0f;
			uParam0->f_114[26 /*4*/] = 0f;
			uParam0->f_114[26 /*4*/].f_1 = 0f;
			uParam0->f_114[26 /*4*/].f_2 = 0f;
			uParam0->f_114[26 /*4*/].f_3 = 0f;
			uParam0->f_114[27 /*4*/] = 0f;
			uParam0->f_114[27 /*4*/].f_1 = 0f;
			uParam0->f_114[27 /*4*/].f_2 = 0f;
			uParam0->f_114[27 /*4*/].f_3 = 0f;
			uParam0->f_114[28 /*4*/] = 0f;
			uParam0->f_114[28 /*4*/].f_1 = 0f;
			uParam0->f_114[28 /*4*/].f_2 = 0f;
			uParam0->f_114[28 /*4*/].f_3 = 0f;
			uParam0->f_114[29 /*4*/] = 0f;
			uParam0->f_114[29 /*4*/].f_1 = 0f;
			uParam0->f_114[29 /*4*/].f_2 = 0f;
			uParam0->f_114[29 /*4*/].f_3 = 0f;
			uParam0->f_114[30 /*4*/] = 0f;
			uParam0->f_114[30 /*4*/].f_1 = 0f;
			uParam0->f_114[30 /*4*/].f_2 = 0f;
			uParam0->f_114[30 /*4*/].f_3 = 0f;
			uParam0->f_114[31 /*4*/] = 0f;
			uParam0->f_114[31 /*4*/].f_1 = 0f;
			uParam0->f_114[31 /*4*/].f_2 = 0f;
			uParam0->f_114[31 /*4*/].f_3 = 0f;
			uParam0->f_114[32 /*4*/] = 0f;
			uParam0->f_114[32 /*4*/].f_1 = 0f;
			uParam0->f_114[32 /*4*/].f_2 = 0f;
			uParam0->f_114[32 /*4*/].f_3 = 0f;
			uParam0->f_114[33 /*4*/] = 0f;
			uParam0->f_114[33 /*4*/].f_1 = 0f;
			uParam0->f_114[33 /*4*/].f_2 = 0f;
			uParam0->f_114[33 /*4*/].f_3 = 0f;
			uParam0->f_114[34 /*4*/] = 0f;
			uParam0->f_114[34 /*4*/].f_1 = 0f;
			uParam0->f_114[34 /*4*/].f_2 = 0f;
			uParam0->f_114[34 /*4*/].f_3 = 0f;
			uParam0->f_114[35 /*4*/] = 0f;
			uParam0->f_114[35 /*4*/].f_1 = 0f;
			uParam0->f_114[35 /*4*/].f_2 = 0f;
			uParam0->f_114[35 /*4*/].f_3 = 0f;
			uParam0->f_114[36 /*4*/] = 0f;
			uParam0->f_114[36 /*4*/].f_1 = 0f;
			uParam0->f_114[36 /*4*/].f_2 = 0f;
			uParam0->f_114[36 /*4*/].f_3 = 0f;
			uParam0->f_114[37 /*4*/] = 0f;
			uParam0->f_114[37 /*4*/].f_1 = 0f;
			uParam0->f_114[37 /*4*/].f_2 = 0f;
			uParam0->f_114[37 /*4*/].f_3 = 0f;
			uParam0->f_114[38 /*4*/] = 0f;
			uParam0->f_114[38 /*4*/].f_1 = 0f;
			uParam0->f_114[38 /*4*/].f_2 = 0f;
			uParam0->f_114[38 /*4*/].f_3 = 0f;
			uParam0->f_114[39 /*4*/] = 0f;
			uParam0->f_114[39 /*4*/].f_1 = 0f;
			uParam0->f_114[39 /*4*/].f_2 = 0f;
			uParam0->f_114[39 /*4*/].f_3 = 0f;
			break;
		case 3:
			uParam0->f_26.f_6 = 0.174f;
			uParam0->f_26.f_7 = 0.753f;
			uParam0->f_26 = uParam0->f_26.f_6;
			uParam0->f_26.f_1 = uParam0->f_26.f_7;
			uParam0->f_26.f_12 = 3;
			uParam0->f_26.f_13 = uParam0->f_26.f_12;
			uParam0->f_26.f_15 = 0.088f;
			uParam0->f_26.f_16 = (uParam0->f_26.f_15 * uParam0->f_288);
			uParam0->f_26.f_8 = 0.83f;
			uParam0->f_26.f_9 = 0.29f;
			uParam0->f_26.f_10 = 0.026f;
			uParam0->f_26.f_11 = 0.07f;
			uParam0->f_114[0 /*4*/] = 0.1573f;
			uParam0->f_114[0 /*4*/].f_1 = 0.5f;
			uParam0->f_114[0 /*4*/].f_2 = 0.007f;
			uParam0->f_114[0 /*4*/].f_3 = 0.696f;
			uParam0->f_114[1 /*4*/] = 0.8423f;
			uParam0->f_114[1 /*4*/].f_1 = 0.5f;
			uParam0->f_114[1 /*4*/].f_2 = 0.007f;
			uParam0->f_114[1 /*4*/].f_3 = 0.696f;
			uParam0->f_114[2 /*4*/] = 0.5003f;
			uParam0->f_114[2 /*4*/].f_1 = 0.148f;
			uParam0->f_114[2 /*4*/].f_2 = 0.6905f;
			uParam0->f_114[2 /*4*/].f_3 = 0.01f;
			uParam0->f_114[3 /*4*/] = 0.5005f;
			uParam0->f_114[3 /*4*/].f_1 = 0.853f;
			uParam0->f_114[3 /*4*/].f_2 = 0.691f;
			uParam0->f_114[3 /*4*/].f_3 = 0.01f;
			uParam0->f_114[4 /*4*/] = 0.171f;
			uParam0->f_114[4 /*4*/].f_1 = 0.753f;
			uParam0->f_114[4 /*4*/].f_2 = 0.026f;
			uParam0->f_114[4 /*4*/].f_3 = 0.078f;
			uParam0->f_114[5 /*4*/] = 0.2406f;
			uParam0->f_114[5 /*4*/].f_1 = 0.3722f;
			uParam0->f_114[5 /*4*/].f_2 = 0.1605f;
			uParam0->f_114[5 /*4*/].f_3 = 0.44f;
			uParam0->f_114[6 /*4*/] = 0.329f;
			uParam0->f_114[6 /*4*/].f_1 = 0.7922f;
			uParam0->f_114[6 /*4*/].f_2 = 0.104f;
			uParam0->f_114[6 /*4*/].f_3 = 0.1245f;
			uParam0->f_114[7 /*4*/] = 0.4985f;
			uParam0->f_114[7 /*4*/].f_1 = 0.606f;
			uParam0->f_114[7 /*4*/].f_2 = 0.3826f;
			uParam0->f_114[7 /*4*/].f_3 = 0.0964f;
			uParam0->f_114[8 /*4*/] = 0.4807f;
			uParam0->f_114[8 /*4*/].f_1 = 0.7167f;
			uParam0->f_114[8 /*4*/].f_2 = 0.1194f;
			uParam0->f_114[8 /*4*/].f_3 = 0.1268f;
			uParam0->f_114[9 /*4*/] = 0.7102f;
			uParam0->f_114[9 /*4*/].f_1 = 0.7833f;
			uParam0->f_114[9 /*4*/].f_2 = 0.2629f;
			uParam0->f_114[9 /*4*/].f_3 = 0.1297f;
			uParam0->f_114[10 /*4*/] = 0.81f;
			uParam0->f_114[10 /*4*/].f_1 = 0.578f;
			uParam0->f_114[10 /*4*/].f_2 = 0.06f;
			uParam0->f_114[10 /*4*/].f_3 = 0.363f;
			uParam0->f_114[11 /*4*/] = 0.769f;
			uParam0->f_114[11 /*4*/].f_1 = 0.453f;
			uParam0->f_114[11 /*4*/].f_2 = 0.024f;
			uParam0->f_114[11 /*4*/].f_3 = 0.043f;
			uParam0->f_114[12 /*4*/] = 0.6691f;
			uParam0->f_114[12 /*4*/].f_1 = 0.425f;
			uParam0->f_114[12 /*4*/].f_2 = 0.1854f;
			uParam0->f_114[12 /*4*/].f_3 = 0.1048f;
			uParam0->f_114[13 /*4*/] = 0.6643f;
			uParam0->f_114[13 /*4*/].f_1 = 0.304f;
			uParam0->f_114[13 /*4*/].f_2 = 0.0429f;
			uParam0->f_114[13 /*4*/].f_3 = 0.1461f;
			uParam0->f_114[14 /*4*/] = 0.4955f;
			uParam0->f_114[14 /*4*/].f_1 = 0.3611f;
			uParam0->f_114[14 /*4*/].f_2 = 0.2535f;
			uParam0->f_114[14 /*4*/].f_3 = 0.0936f;
			uParam0->f_114[15 /*4*/] = 0.3947f;
			uParam0->f_114[15 /*4*/].f_1 = 0.3276f;
			uParam0->f_114[15 /*4*/].f_2 = 0.0519f;
			uParam0->f_114[15 /*4*/].f_3 = 0.2157f;
			uParam0->f_114[16 /*4*/] = 0.5282f;
			uParam0->f_114[16 /*4*/].f_1 = 0.2075f;
			uParam0->f_114[16 /*4*/].f_2 = 0.1359f;
			uParam0->f_114[16 /*4*/].f_3 = 0.1086f;
			uParam0->f_114[17 /*4*/] = 0.7504f;
			uParam0->f_114[17 /*4*/].f_1 = 0.2068f;
			uParam0->f_114[17 /*4*/].f_2 = 0.055f;
			uParam0->f_114[17 /*4*/].f_3 = 0.112f;
			uParam0->f_114[18 /*4*/] = 0.4298f;
			uParam0->f_114[18 /*4*/].f_1 = 0.5236f;
			uParam0->f_114[18 /*4*/].f_2 = 0.2205f;
			uParam0->f_114[18 /*4*/].f_3 = 0.0686f;
			uParam0->f_114[19 /*4*/] = 0.7586f;
			uParam0->f_114[19 /*4*/].f_1 = 0.5968f;
			uParam0->f_114[19 /*4*/].f_2 = 0.0431f;
			uParam0->f_114[19 /*4*/].f_3 = 0.2474f;
			uParam0->f_114[20 /*4*/] = 0.3614f;
			uParam0->f_114[20 /*4*/].f_1 = 0.2587f;
			uParam0->f_114[20 /*4*/].f_2 = 0.0174f;
			uParam0->f_114[20 /*4*/].f_3 = 0.0782f;
			uParam0->f_114[21 /*4*/] = 0f;
			uParam0->f_114[21 /*4*/].f_1 = 0f;
			uParam0->f_114[21 /*4*/].f_2 = 0f;
			uParam0->f_114[21 /*4*/].f_3 = 0f;
			uParam0->f_114[22 /*4*/] = 0f;
			uParam0->f_114[22 /*4*/].f_1 = 0f;
			uParam0->f_114[22 /*4*/].f_2 = 0f;
			uParam0->f_114[22 /*4*/].f_3 = 0f;
			uParam0->f_114[23 /*4*/] = 0f;
			uParam0->f_114[23 /*4*/].f_1 = 0f;
			uParam0->f_114[23 /*4*/].f_2 = 0f;
			uParam0->f_114[23 /*4*/].f_3 = 0f;
			uParam0->f_114[24 /*4*/] = 0f;
			uParam0->f_114[24 /*4*/].f_1 = 0f;
			uParam0->f_114[24 /*4*/].f_2 = 0f;
			uParam0->f_114[24 /*4*/].f_3 = 0f;
			uParam0->f_114[25 /*4*/] = 0f;
			uParam0->f_114[25 /*4*/].f_1 = 0f;
			uParam0->f_114[25 /*4*/].f_2 = 0f;
			uParam0->f_114[25 /*4*/].f_3 = 0f;
			uParam0->f_114[26 /*4*/] = 0f;
			uParam0->f_114[26 /*4*/].f_1 = 0f;
			uParam0->f_114[26 /*4*/].f_2 = 0f;
			uParam0->f_114[26 /*4*/].f_3 = 0f;
			uParam0->f_114[27 /*4*/] = 0f;
			uParam0->f_114[27 /*4*/].f_1 = 0f;
			uParam0->f_114[27 /*4*/].f_2 = 0f;
			uParam0->f_114[27 /*4*/].f_3 = 0f;
			uParam0->f_114[28 /*4*/] = 0f;
			uParam0->f_114[28 /*4*/].f_1 = 0f;
			uParam0->f_114[28 /*4*/].f_2 = 0f;
			uParam0->f_114[28 /*4*/].f_3 = 0f;
			uParam0->f_114[29 /*4*/] = 0f;
			uParam0->f_114[29 /*4*/].f_1 = 0f;
			uParam0->f_114[29 /*4*/].f_2 = 0f;
			uParam0->f_114[29 /*4*/].f_3 = 0f;
			uParam0->f_114[30 /*4*/] = 0f;
			uParam0->f_114[30 /*4*/].f_1 = 0f;
			uParam0->f_114[30 /*4*/].f_2 = 0f;
			uParam0->f_114[30 /*4*/].f_3 = 0f;
			uParam0->f_114[31 /*4*/] = 0f;
			uParam0->f_114[31 /*4*/].f_1 = 0f;
			uParam0->f_114[31 /*4*/].f_2 = 0f;
			uParam0->f_114[31 /*4*/].f_3 = 0f;
			uParam0->f_114[32 /*4*/] = 0f;
			uParam0->f_114[32 /*4*/].f_1 = 0f;
			uParam0->f_114[32 /*4*/].f_2 = 0f;
			uParam0->f_114[32 /*4*/].f_3 = 0f;
			uParam0->f_114[33 /*4*/] = 0f;
			uParam0->f_114[33 /*4*/].f_1 = 0f;
			uParam0->f_114[33 /*4*/].f_2 = 0f;
			uParam0->f_114[33 /*4*/].f_3 = 0f;
			uParam0->f_114[34 /*4*/] = 0f;
			uParam0->f_114[34 /*4*/].f_1 = 0f;
			uParam0->f_114[34 /*4*/].f_2 = 0f;
			uParam0->f_114[34 /*4*/].f_3 = 0f;
			uParam0->f_114[35 /*4*/] = 0f;
			uParam0->f_114[35 /*4*/].f_1 = 0f;
			uParam0->f_114[35 /*4*/].f_2 = 0f;
			uParam0->f_114[35 /*4*/].f_3 = 0f;
			uParam0->f_114[36 /*4*/] = 0f;
			uParam0->f_114[36 /*4*/].f_1 = 0f;
			uParam0->f_114[36 /*4*/].f_2 = 0f;
			uParam0->f_114[36 /*4*/].f_3 = 0f;
			uParam0->f_114[37 /*4*/] = 0f;
			uParam0->f_114[37 /*4*/].f_1 = 0f;
			uParam0->f_114[37 /*4*/].f_2 = 0f;
			uParam0->f_114[37 /*4*/].f_3 = 0f;
			uParam0->f_114[38 /*4*/] = 0f;
			uParam0->f_114[38 /*4*/].f_1 = 0f;
			uParam0->f_114[38 /*4*/].f_2 = 0f;
			uParam0->f_114[38 /*4*/].f_3 = 0f;
			uParam0->f_114[39 /*4*/] = 0f;
			uParam0->f_114[39 /*4*/].f_1 = 0f;
			uParam0->f_114[39 /*4*/].f_2 = 0f;
			uParam0->f_114[39 /*4*/].f_3 = 0f;
			break;
		case 4:
			uParam0->f_26.f_6 = 0.174f;
			uParam0->f_26.f_7 = 0.29f;
			uParam0->f_26 = uParam0->f_26.f_6;
			uParam0->f_26.f_1 = uParam0->f_26.f_7;
			uParam0->f_26.f_12 = 3;
			uParam0->f_26.f_13 = uParam0->f_26.f_12;
			uParam0->f_26.f_15 = 0.088f;
			uParam0->f_26.f_16 = (uParam0->f_26.f_15 * uParam0->f_288);
			uParam0->f_26.f_8 = 0.791f;
			uParam0->f_26.f_9 = 0.831f;
			uParam0->f_26.f_10 = 0.04f;
			uParam0->f_26.f_11 = 0.045f;
			uParam0->f_114[0 /*4*/] = 0.1573f;
			uParam0->f_114[0 /*4*/].f_1 = 0.5f;
			uParam0->f_114[0 /*4*/].f_2 = 0.007f;
			uParam0->f_114[0 /*4*/].f_3 = 0.696f;
			uParam0->f_114[1 /*4*/] = 0.8423f;
			uParam0->f_114[1 /*4*/].f_1 = 0.5f;
			uParam0->f_114[1 /*4*/].f_2 = 0.007f;
			uParam0->f_114[1 /*4*/].f_3 = 0.696f;
			uParam0->f_114[2 /*4*/] = 0.5003f;
			uParam0->f_114[2 /*4*/].f_1 = 0.148f;
			uParam0->f_114[2 /*4*/].f_2 = 0.6905f;
			uParam0->f_114[2 /*4*/].f_3 = 0.01f;
			uParam0->f_114[3 /*4*/] = 0.5005f;
			uParam0->f_114[3 /*4*/].f_1 = 0.853f;
			uParam0->f_114[3 /*4*/].f_2 = 0.691f;
			uParam0->f_114[3 /*4*/].f_3 = 0.01f;
			uParam0->f_114[4 /*4*/] = 0.167f;
			uParam0->f_114[4 /*4*/].f_1 = 0.29f;
			uParam0->f_114[4 /*4*/].f_2 = 0.036f;
			uParam0->f_114[4 /*4*/].f_3 = 0.078f;
			uParam0->f_114[5 /*4*/] = 0.3475f;
			uParam0->f_114[5 /*4*/].f_1 = 0.2064f;
			uParam0->f_114[5 /*4*/].f_2 = 0.1869f;
			uParam0->f_114[5 /*4*/].f_3 = 0.1068f;
			uParam0->f_114[6 /*4*/] = 0.2903f;
			uParam0->f_114[6 /*4*/].f_1 = 0.39f;
			uParam0->f_114[6 /*4*/].f_2 = 0.0721f;
			uParam0->f_114[6 /*4*/].f_3 = 0.287f;
			uParam0->f_114[7 /*4*/] = 0.226f;
			uParam0->f_114[7 /*4*/].f_1 = 0.476f;
			uParam0->f_114[7 /*4*/].f_2 = 0.0601f;
			uParam0->f_114[7 /*4*/].f_3 = 0.0735f;
			uParam0->f_114[8 /*4*/] = 0.4322f;
			uParam0->f_114[8 /*4*/].f_1 = 0.583f;
			uParam0->f_114[8 /*4*/].f_2 = 0.356f;
			uParam0->f_114[8 /*4*/].f_3 = 0.1035f;
			uParam0->f_114[9 /*4*/] = 0.3125f;
			uParam0->f_114[9 /*4*/].f_1 = 0.666f;
			uParam0->f_114[9 /*4*/].f_2 = 0.1171f;
			uParam0->f_114[9 /*4*/].f_3 = 0.0692f;
			uParam0->f_114[10 /*4*/] = 0.1885f;
			uParam0->f_114[10 /*4*/].f_1 = 0.6079f;
			uParam0->f_114[10 /*4*/].f_2 = 0.0601f;
			uParam0->f_114[10 /*4*/].f_3 = 0.0538f;
			uParam0->f_114[11 /*4*/] = 0.2675f;
			uParam0->f_114[11 /*4*/].f_1 = 0.807f;
			uParam0->f_114[11 /*4*/].f_2 = 0.0726f;
			uParam0->f_114[11 /*4*/].f_3 = 0.0892f;
			uParam0->f_114[12 /*4*/] = 0.5352f;
			uParam0->f_114[12 /*4*/].f_1 = 0.7972f;
			uParam0->f_114[12 /*4*/].f_2 = 0.2359f;
			uParam0->f_114[12 /*4*/].f_3 = 0.1064f;
			uParam0->f_114[13 /*4*/] = 0.5231f;
			uParam0->f_114[13 /*4*/].f_1 = 0.7283f;
			uParam0->f_114[13 /*4*/].f_2 = 0.0537f;
			uParam0->f_114[13 /*4*/].f_3 = 0.0467f;
			uParam0->f_114[14 /*4*/] = 0.7517f;
			uParam0->f_114[14 /*4*/].f_1 = 0.5701f;
			uParam0->f_114[14 /*4*/].f_2 = 0.0219f;
			uParam0->f_114[14 /*4*/].f_3 = 0.1489f;
			uParam0->f_114[15 /*4*/] = 0.7182f;
			uParam0->f_114[15 /*4*/].f_1 = 0.6725f;
			uParam0->f_114[15 /*4*/].f_2 = 0.0486f;
			uParam0->f_114[15 /*4*/].f_3 = 0.3545f;
			uParam0->f_114[16 /*4*/] = 0.5527f;
			uParam0->f_114[16 /*4*/].f_1 = 0.5174f;
			uParam0->f_114[16 /*4*/].f_2 = 0.1125f;
			uParam0->f_114[16 /*4*/].f_3 = 0.0673f;
			uParam0->f_114[17 /*4*/] = 0.4222f;
			uParam0->f_114[17 /*4*/].f_1 = 0.4538f;
			uParam0->f_114[17 /*4*/].f_2 = 0.078f;
			uParam0->f_114[17 /*4*/].f_3 = 0.0774f;
			uParam0->f_114[18 /*4*/] = 0.4251f;
			uParam0->f_114[18 /*4*/].f_1 = 0.3047f;
			uParam0->f_114[18 /*4*/].f_2 = 0.0319f;
			uParam0->f_114[18 /*4*/].f_3 = 0.1075f;
			uParam0->f_114[19 /*4*/] = 0.4953f;
			uParam0->f_114[19 /*4*/].f_1 = 0.3437f;
			uParam0->f_114[19 /*4*/].f_2 = 0.0277f;
			uParam0->f_114[19 /*4*/].f_3 = 0.083f;
			uParam0->f_114[20 /*4*/] = 0.5222f;
			uParam0->f_114[20 /*4*/].f_1 = 0.1977f;
			uParam0->f_114[20 /*4*/].f_2 = 0.165f;
			uParam0->f_114[20 /*4*/].f_3 = 0.0892f;
			uParam0->f_114[21 /*4*/] = 0.554f;
			uParam0->f_114[21 /*4*/].f_1 = 0.2726f;
			uParam0->f_114[21 /*4*/].f_2 = 0.0439f;
			uParam0->f_114[21 /*4*/].f_3 = 0.062f;
			uParam0->f_114[22 /*4*/] = 0.5895f;
			uParam0->f_114[22 /*4*/].f_1 = 0.2454f;
			uParam0->f_114[22 /*4*/].f_2 = 0.0307f;
			uParam0->f_114[22 /*4*/].f_3 = 0.018f;
			uParam0->f_114[23 /*4*/] = 0.6824f;
			uParam0->f_114[23 /*4*/].f_1 = 0.4f;
			uParam0->f_114[23 /*4*/].f_2 = 0.2089f;
			uParam0->f_114[23 /*4*/].f_3 = 0.0642f;
			uParam0->f_114[24 /*4*/] = 0.6821f;
			uParam0->f_114[24 /*4*/].f_1 = 0.2876f;
			uParam0->f_114[24 /*4*/].f_2 = 0.0478f;
			uParam0->f_114[24 /*4*/].f_3 = 0.178f;
			uParam0->f_114[25 /*4*/] = 0.7637f;
			uParam0->f_114[25 /*4*/].f_1 = 0.187f;
			uParam0->f_114[25 /*4*/].f_2 = 0.0217f;
			uParam0->f_114[25 /*4*/].f_3 = 0.0681f;
			uParam0->f_114[26 /*4*/] = 0.829f;
			uParam0->f_114[26 /*4*/].f_1 = 0.293f;
			uParam0->f_114[26 /*4*/].f_2 = 0.0215f;
			uParam0->f_114[26 /*4*/].f_3 = 0.0686f;
			uParam0->f_114[27 /*4*/] = 0.778f;
			uParam0->f_114[27 /*4*/].f_1 = 0.494f;
			uParam0->f_114[27 /*4*/].f_2 = 0.0542f;
			uParam0->f_114[27 /*4*/].f_3 = 0.1207f;
			uParam0->f_114[28 /*4*/] = 0.824f;
			uParam0->f_114[28 /*4*/].f_1 = 0.661f;
			uParam0->f_114[28 /*4*/].f_2 = 0.0299f;
			uParam0->f_114[28 /*4*/].f_3 = 0.0921f;
			uParam0->f_114[29 /*4*/] = 0.3549f;
			uParam0->f_114[29 /*4*/].f_1 = 0.744f;
			uParam0->f_114[29 /*4*/].f_2 = 0.0322f;
			uParam0->f_114[29 /*4*/].f_3 = 0.0864f;
			uParam0->f_114[30 /*4*/] = 0.4358f;
			uParam0->f_114[30 /*4*/].f_1 = 0.6514f;
			uParam0->f_114[30 /*4*/].f_2 = 0.0691f;
			uParam0->f_114[30 /*4*/].f_3 = 0.0428f;
			uParam0->f_114[31 /*4*/] = 0.629f;
			uParam0->f_114[31 /*4*/].f_1 = 0.5832f;
			uParam0->f_114[31 /*4*/].f_2 = 0.0458f;
			uParam0->f_114[31 /*4*/].f_3 = 0.1989f;
			uParam0->f_114[32 /*4*/] = 0.5213f;
			uParam0->f_114[32 /*4*/].f_1 = 0.3994f;
			uParam0->f_114[32 /*4*/].f_2 = 0.0798f;
			uParam0->f_114[32 /*4*/].f_3 = 0.0648f;
			uParam0->f_114[33 /*4*/] = 0f;
			uParam0->f_114[33 /*4*/].f_1 = 0f;
			uParam0->f_114[33 /*4*/].f_2 = 0f;
			uParam0->f_114[33 /*4*/].f_3 = 0f;
			uParam0->f_114[34 /*4*/] = 0f;
			uParam0->f_114[34 /*4*/].f_1 = 0f;
			uParam0->f_114[34 /*4*/].f_2 = 0f;
			uParam0->f_114[34 /*4*/].f_3 = 0f;
			uParam0->f_114[35 /*4*/] = 0f;
			uParam0->f_114[35 /*4*/].f_1 = 0f;
			uParam0->f_114[35 /*4*/].f_2 = 0f;
			uParam0->f_114[35 /*4*/].f_3 = 0f;
			uParam0->f_114[36 /*4*/] = 0f;
			uParam0->f_114[36 /*4*/].f_1 = 0f;
			uParam0->f_114[36 /*4*/].f_2 = 0f;
			uParam0->f_114[36 /*4*/].f_3 = 0f;
			uParam0->f_114[37 /*4*/] = 0f;
			uParam0->f_114[37 /*4*/].f_1 = 0f;
			uParam0->f_114[37 /*4*/].f_2 = 0f;
			uParam0->f_114[37 /*4*/].f_3 = 0f;
			uParam0->f_114[38 /*4*/] = 0f;
			uParam0->f_114[38 /*4*/].f_1 = 0f;
			uParam0->f_114[38 /*4*/].f_2 = 0f;
			uParam0->f_114[38 /*4*/].f_3 = 0f;
			uParam0->f_114[39 /*4*/] = 0f;
			uParam0->f_114[39 /*4*/].f_1 = 0f;
			uParam0->f_114[39 /*4*/].f_2 = 0f;
			uParam0->f_114[39 /*4*/].f_3 = 0f;
			break;
		case 5:
			uParam0->f_26.f_6 = 0.79f;
			uParam0->f_26.f_7 = 0.178f;
			uParam0->f_26 = uParam0->f_26.f_6;
			uParam0->f_26.f_1 = uParam0->f_26.f_7;
			uParam0->f_26.f_12 = 1;
			uParam0->f_26.f_13 = uParam0->f_26.f_12;
			uParam0->f_26.f_15 = 0.088f;
			uParam0->f_26.f_16 = (uParam0->f_26.f_15 * uParam0->f_288);
			uParam0->f_26.f_8 = 0.171f;
			uParam0->f_26.f_9 = 0.244f;
			uParam0->f_26.f_10 = 0.026f;
			uParam0->f_26.f_11 = 0.07f;
			uParam0->f_114[0 /*4*/] = 0.1573f;
			uParam0->f_114[0 /*4*/].f_1 = 0.5f;
			uParam0->f_114[0 /*4*/].f_2 = 0.007f;
			uParam0->f_114[0 /*4*/].f_3 = 0.696f;
			uParam0->f_114[1 /*4*/] = 0.8423f;
			uParam0->f_114[1 /*4*/].f_1 = 0.5f;
			uParam0->f_114[1 /*4*/].f_2 = 0.007f;
			uParam0->f_114[1 /*4*/].f_3 = 0.696f;
			uParam0->f_114[2 /*4*/] = 0.5003f;
			uParam0->f_114[2 /*4*/].f_1 = 0.148f;
			uParam0->f_114[2 /*4*/].f_2 = 0.6905f;
			uParam0->f_114[2 /*4*/].f_3 = 0.01f;
			uParam0->f_114[3 /*4*/] = 0.5005f;
			uParam0->f_114[3 /*4*/].f_1 = 0.853f;
			uParam0->f_114[3 /*4*/].f_2 = 0.691f;
			uParam0->f_114[3 /*4*/].f_3 = 0.01f;
			uParam0->f_114[4 /*4*/] = 0.79f;
			uParam0->f_114[4 /*4*/].f_1 = 0.169f;
			uParam0->f_114[4 /*4*/].f_2 = 0.041f;
			uParam0->f_114[4 /*4*/].f_3 = 0.053f;
			uParam0->f_114[5 /*4*/] = 0.7227f;
			uParam0->f_114[5 /*4*/].f_1 = 0.39f;
			uParam0->f_114[5 /*4*/].f_2 = 0.05f;
			uParam0->f_114[5 /*4*/].f_3 = 0.4769f;
			uParam0->f_114[6 /*4*/] = 0.8089f;
			uParam0->f_114[6 /*4*/].f_1 = 0.3596f;
			uParam0->f_114[6 /*4*/].f_2 = 0.0587f;
			uParam0->f_114[6 /*4*/].f_3 = 0.0819f;
			uParam0->f_114[7 /*4*/] = 0.7713f;
			uParam0->f_114[7 /*4*/].f_1 = 0.5076f;
			uParam0->f_114[7 /*4*/].f_2 = 0.051f;
			uParam0->f_114[7 /*4*/].f_3 = 0.1008f;
			uParam0->f_114[8 /*4*/] = 0.687f;
			uParam0->f_114[8 /*4*/].f_1 = 0.799f;
			uParam0->f_114[8 /*4*/].f_2 = 0.3008f;
			uParam0->f_114[8 /*4*/].f_3 = 0.1046f;
			uParam0->f_114[9 /*4*/] = 0.7007f;
			uParam0->f_114[9 /*4*/].f_1 = 0.7211f;
			uParam0->f_114[9 /*4*/].f_2 = 0.106f;
			uParam0->f_114[9 /*4*/].f_3 = 0.054f;
			uParam0->f_114[10 /*4*/] = 0.5632f;
			uParam0->f_114[10 /*4*/].f_1 = 0.6991f;
			uParam0->f_114[10 /*4*/].f_2 = 0.0539f;
			uParam0->f_114[10 /*4*/].f_3 = 0.094f;
			uParam0->f_114[11 /*4*/] = 0.4796f;
			uParam0->f_114[11 /*4*/].f_1 = 0.6816f;
			uParam0->f_114[11 /*4*/].f_2 = 0.1175f;
			uParam0->f_114[11 /*4*/].f_3 = 0.0587f;
			uParam0->f_114[12 /*4*/] = 0.547f;
			uParam0->f_114[12 /*4*/].f_1 = 0.625f;
			uParam0->f_114[12 /*4*/].f_2 = 0.0442f;
			uParam0->f_114[12 /*4*/].f_3 = 0.06f;
			uParam0->f_114[13 /*4*/] = 0.5885f;
			uParam0->f_114[13 /*4*/].f_1 = 0.555f;
			uParam0->f_114[13 /*4*/].f_2 = 0.1268f;
			uParam0->f_114[13 /*4*/].f_3 = 0.0837f;
			uParam0->f_114[14 /*4*/] = 0.6261f;
			uParam0->f_114[14 /*4*/].f_1 = 0.4294f;
			uParam0->f_114[14 /*4*/].f_2 = 0.0519f;
			uParam0->f_114[14 /*4*/].f_3 = 0.173f;
			uParam0->f_114[15 /*4*/] = 0.6472f;
			uParam0->f_114[15 /*4*/].f_1 = 0.2786f;
			uParam0->f_114[15 /*4*/].f_2 = 0.037f;
			uParam0->f_114[15 /*4*/].f_3 = 0.1251f;
			uParam0->f_114[16 /*4*/] = 0.5127f;
			uParam0->f_114[16 /*4*/].f_1 = 0.384f;
			uParam0->f_114[16 /*4*/].f_2 = 0.1757f;
			uParam0->f_114[16 /*4*/].f_3 = 0.082f;
			uParam0->f_114[17 /*4*/] = 0.465f;
			uParam0->f_114[17 /*4*/].f_1 = 0.3118f;
			uParam0->f_114[17 /*4*/].f_2 = 0.024f;
			uParam0->f_114[17 /*4*/].f_3 = 0.0629f;
			uParam0->f_114[18 /*4*/] = 0.55f;
			uParam0->f_114[18 /*4*/].f_1 = 0.2257f;
			uParam0->f_114[18 /*4*/].f_2 = 0.0791f;
			uParam0->f_114[18 /*4*/].f_3 = 0.1228f;
			uParam0->f_114[19 /*4*/] = 0.4637f;
			uParam0->f_114[19 /*4*/].f_1 = 0.1888f;
			uParam0->f_114[19 /*4*/].f_2 = 0.0211f;
			uParam0->f_114[19 /*4*/].f_3 = 0.0712f;
			uParam0->f_114[20 /*4*/] = 0.3855f;
			uParam0->f_114[20 /*4*/].f_1 = 0.3728f;
			uParam0->f_114[20 /*4*/].f_2 = 0.0215f;
			uParam0->f_114[20 /*4*/].f_3 = 0.0702f;
			uParam0->f_114[21 /*4*/] = 0.3719f;
			uParam0->f_114[21 /*4*/].f_1 = 0.201f;
			uParam0->f_114[21 /*4*/].f_2 = 0.0425f;
			uParam0->f_114[21 /*4*/].f_3 = 0.0995f;
			uParam0->f_114[22 /*4*/] = 0.3269f;
			uParam0->f_114[22 /*4*/].f_1 = 0.344f;
			uParam0->f_114[22 /*4*/].f_2 = 0.0519f;
			uParam0->f_114[22 /*4*/].f_3 = 0.3836f;
			uParam0->f_114[23 /*4*/] = 0.3505f;
			uParam0->f_114[23 /*4*/].f_1 = 0.6085f;
			uParam0->f_114[23 /*4*/].f_2 = 0.051f;
			uParam0->f_114[23 /*4*/].f_3 = 0.3014f;
			uParam0->f_114[24 /*4*/] = 0.4005f;
			uParam0->f_114[24 /*4*/].f_1 = 0.5702f;
			uParam0->f_114[24 /*4*/].f_2 = 0.051f;
			uParam0->f_114[24 /*4*/].f_3 = 0.0546f;
			uParam0->f_114[25 /*4*/] = 0.4748f;
			uParam0->f_114[25 /*4*/].f_1 = 0.5469f;
			uParam0->f_114[25 /*4*/].f_2 = 0.0216f;
			uParam0->f_114[25 /*4*/].f_3 = 0.1392f;
			uParam0->f_114[26 /*4*/] = 0.2159f;
			uParam0->f_114[26 /*4*/].f_1 = 0.8031f;
			uParam0->f_114[26 /*4*/].f_2 = 0.114f;
			uParam0->f_114[26 /*4*/].f_3 = 0.0896f;
			uParam0->f_114[27 /*4*/] = 0.1826f;
			uParam0->f_114[27 /*4*/].f_1 = 0.6674f;
			uParam0->f_114[27 /*4*/].f_2 = 0.043f;
			uParam0->f_114[27 /*4*/].f_3 = 0.1915f;
			uParam0->f_114[28 /*4*/] = 0.2088f;
			uParam0->f_114[28 /*4*/].f_1 = 0.5968f;
			uParam0->f_114[28 /*4*/].f_2 = 0.014f;
			uParam0->f_114[28 /*4*/].f_3 = 0.0503f;
			uParam0->f_114[29 /*4*/] = 0.2506f;
			uParam0->f_114[29 /*4*/].f_1 = 0.6819f;
			uParam0->f_114[29 /*4*/].f_2 = 0.0216f;
			uParam0->f_114[29 /*4*/].f_3 = 0.0688f;
			uParam0->f_114[30 /*4*/] = 0.3119f;
			uParam0->f_114[30 /*4*/].f_1 = 0.6508f;
			uParam0->f_114[30 /*4*/].f_2 = 0.0286f;
			uParam0->f_114[30 /*4*/].f_3 = 0.0921f;
			uParam0->f_114[31 /*4*/] = 0.2752f;
			uParam0->f_114[31 /*4*/].f_1 = 0.5175f;
			uParam0->f_114[31 /*4*/].f_2 = 0.0497f;
			uParam0->f_114[31 /*4*/].f_3 = 0.092f;
			uParam0->f_114[32 /*4*/] = 0.1871f;
			uParam0->f_114[32 /*4*/].f_1 = 0.422f;
			uParam0->f_114[32 /*4*/].f_2 = 0.0526f;
			uParam0->f_114[32 /*4*/].f_3 = 0.1849f;
			uParam0->f_114[33 /*4*/] = 0.2287f;
			uParam0->f_114[33 /*4*/].f_1 = 0.377f;
			uParam0->f_114[33 /*4*/].f_2 = 0.0368f;
			uParam0->f_114[33 /*4*/].f_3 = 0.094f;
			uParam0->f_114[34 /*4*/] = 0.2924f;
			uParam0->f_114[34 /*4*/].f_1 = 0.2899f;
			uParam0->f_114[34 /*4*/].f_2 = 0.018f;
			uParam0->f_114[34 /*4*/].f_3 = 0.0752f;
			uParam0->f_114[35 /*4*/] = 0.236f;
			uParam0->f_114[35 /*4*/].f_1 = 0.309f;
			uParam0->f_114[35 /*4*/].f_2 = 0.0222f;
			uParam0->f_114[35 /*4*/].f_3 = 0.0562f;
			uParam0->f_114[36 /*4*/] = 0.2432f;
			uParam0->f_114[36 /*4*/].f_1 = 0.1858f;
			uParam0->f_114[36 /*4*/].f_2 = 0.0221f;
			uParam0->f_114[36 /*4*/].f_3 = 0.0667f;
			uParam0->f_114[37 /*4*/] = 0.8108f;
			uParam0->f_114[37 /*4*/].f_1 = 0.6542f;
			uParam0->f_114[37 /*4*/].f_2 = 0.0541f;
			uParam0->f_114[37 /*4*/].f_3 = 0.0815f;
			uParam0->f_114[38 /*4*/] = 0.6899f;
			uParam0->f_114[38 /*4*/].f_1 = 0.6045f;
			uParam0->f_114[38 /*4*/].f_2 = 0.0194f;
			uParam0->f_114[38 /*4*/].f_3 = 0.0493f;
			uParam0->f_114[39 /*4*/] = 0.4123f;
			uParam0->f_114[39 /*4*/].f_1 = 0.7818f;
			uParam0->f_114[39 /*4*/].f_2 = 0.1749f;
			uParam0->f_114[39 /*4*/].f_3 = 0.0504f;
			break;
	}
}

float func_361(var uParam0, bool bParam1)//Position - 0x139707
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	iVar1 = 0;
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &iVar1);
	if (bParam1)
	{
	}
	if (iVar1 < 600)
	{
		if (!BitTest(uParam0->f_280, 20))
		{
			MISC::SET_BIT(&(uParam0->f_280), 20);
		}
	}
	else if (BitTest(uParam0->f_280, 20))
	{
		MISC::CLEAR_BIT(&(uParam0->f_280), 20);
	}
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (MISC::IS_PC_VERSION())
	{
		if (fVar2 > 4f)
		{
			fVar2 = (fVar2 / 3f);
		}
	}
	return fVar2;
}

void func_362(var uParam0)//Position - 0x1397F4
{
	if (BitTest(uParam0->f_280, 6))
	{
		MISC::CLEAR_BIT(&(uParam0->f_280), 6);
	}
}

void func_363(var uParam0)//Position - 0x139861
{
	uParam0->f_279 = -2;
}

int func_364(var uParam0, int iParam1, int iParam2)//Position - 0x139871
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < uParam0->f_693)
	{
		if (BitTest(uParam0->f_689, bVar0))
		{
			if (!BitTest(uParam0->f_690, bVar0))
			{
				if (iParam1 == uParam0->f_1[bVar0 /*57*/].f_54 && iParam2 == uParam0->f_1[bVar0 /*57*/].f_55)
				{
					return 1;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1[bVar0 /*57*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1[bVar0 /*57*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iParam1, iParam2, true)))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_365(int iParam0)//Position - 0x13B65C
{
	return Global_1998[iParam0 /*29*/].f_18;
}

void func_366(int iParam0)//Position - 0x13B6BB
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8137, 28);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8137, 28);
	}
}

void func_367(bool bParam0)//Position - 0x13B6FE
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_8136, 28);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 28);
	}
}

char* func_368(int iParam0)//Position - 0x13E10E
{
	switch (iParam0)
	{
		case 0:
			return "BEACH_GUARD";
		case 1:
			return "BLOCKED_GENERIC";
		case 2:
			return "BUMP";
		case 3:
			return "CHALLENGE_THREATEN";
		case 4:
			return "CHAT_RESP";
		case 5:
			return "CRASH_GENERIC";
		case 6:
			return "DODGE";
		case 7:
			return "DRUGS_CUST_PRICE_APPROVE";
		case 8:
			return "DRUGS_CUST_PRICE_APPROVE_CHEAP";
		case 9:
			return "FIGHT";
		case 10:
			return "FIGHT_RUN";
		case 11:
			return "GENERIC_CURSE_HIGH";
		case 12:
			return "GENERIC_CURSE_MED";
		case 13:
			return "GENERIC_FRIGHTENED_HIGH";
		case 14:
			return "GENERIC_FRIGHTENED_MED";
		case 15:
			return "GENERIC_HI";
		case 16:
			return "GENERIC_HOWS_IT_GOING";
		case 17:
			return "GENERIC_INSULT_HIGH";
		case 18:
			return "GENERIC_INSULT_MED";
		case 19:
			return "GENERIC_SHOCKED_HIGH";
		case 20:
			return "GENERIC_SHOCKED_MED";
		case 21:
			return "GENERIC_THANKS";
		case 22:
			return "GENERIC_WHATEVER";
		case 23:
			return "GET_WANTED_LEVEL";
		case 24:
			return "GREET_ACROSS_STREET";
		case 25:
			return "GREET_ACROSS_STREET_02";
		case 26:
			return "GUN_BEG";
		case 27:
			return "GUN_COOL";
		case 28:
			return "JACKED_GENERIC";
		case 29:
			return "KIFFLOM_GREET";
		case 30:
			return "NICE_CAR";
		case 31:
			return "NICE_CAR_SHOUT";
		case 32:
			return "PHONE_CONV1_CHAT2_01";
		case 33:
			return "PHONE_CONV1_CHAT3_01";
		case 34:
			return "PHONE_CONV3_INTRO_01";
		case 35:
			return "POLICE_PURSUIT_DRIVEN";
		case 36:
			return "PROVOKE_GENERIC";
		case 38:
			return "SPOT_BY_POLICE";
		case 42:
			return "TAXI_HAIL";
		case 43:
			return "TAXI_START";
		case 39:
			return "TOUR_ABOUT_TO_START";
		case 40:
			return "TOUR_CHAT";
		case 41:
			return "TOUR_LANDMARK";
		case 37:
			return "SCOPING_CAUGHT";
		case 44:
			return "STOP_ON_FOOT_MEGAPHONE_03";
		default:
	}
	return "";
}

void func_369(var uParam0, var uParam1)//Position - 0x144F3F
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__.func_559(*uParam0, *uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		(*uParam1)[iVar1] = (*uParam0)[iVar1];
		iVar1++;
	}
}

int func_370(int iParam0)//Position - 0x1519D2
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_7;
	}
	return 0;
}

int func_371(int iParam0)//Position - 0x1519F0
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_8;
	}
	return 0;
}

int func_372(int iParam0)//Position - 0x151A0E
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_6;
	}
	return 0;
}

void func_373(int iParam0)//Position - 0x15C908
{
	int iVar0;
	iVar0 = __LIB_0__.func_228(30500, -1);
	if (iVar0 != iParam0)
	{
		__LIB_1__.func_39(30500, iParam0, -1);
	}
}

int func_374(int iParam0)//Position - 0x15FA00
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 1);
	}
	return 0;
}

int func_375()//Position - 0xB06
{
	return Local_198.f_19;
}

int func_376()//Position - 0x2030E
{
	return Local_198.f_19.f_5[0 /*13*/].f_11;
}

int func_377(int iParam0)//Position - 0x2179A
{
	if (Local_198.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_198.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_198.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_198.f_38.f_1[iParam0 /*21*/].f_16);
}

int func_378()//Position - 0x21EF7
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_198.f_38)
	{
		if (Local_198.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_198.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

char* func_379(var uParam0, int iParam1)//Position - 0x23A74
{
	switch (iParam1)
	{
		case 0:
			return "RE_Metal_Detector_1";
		case 1:
			return "RE_Metal_Detector_2";
		case 2:
			return "RE_Metal_Detector_3";
		case 3:
			return "RE_Metal_Detector_4";
		case 4:
			return "RE_Metal_Detector_5";
		case 5:
			return "RE_Metal_Detector_6";
		case 6:
			return "RE_Metal_Detector_7";
		case 7:
			return "RE_Metal_Detector_8";
		case 8:
			return "RE_Metal_Detector_9";
		case 9:
			return "RE_Metal_Detector_10";
		default:
	}
	return "";
}

var func_380(int iParam0)//Position - 0x25D56
{
	return iParam0 + 7;
}

var func_381()//Position - 0x2F6A3
{
	return Local_198.f_19.f_1.f_2;
}

int func_382(int iParam0)//Position - 0xBBAB8
{
	return Local_198.f_38.f_1[iParam0 /*21*/].f_14;
}

bool func_383(int iParam0, var uParam1)//Position - 0xC1C9A
{
	return (Local_198.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_198.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

var func_384(int iParam0)//Position - 0xC711F
{
	return Local_198.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_385(int iParam0)//Position - 0xC713C
{
	return Local_198.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_386(int iParam0)//Position - 0xC740F
{
	return Local_198.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_387(int iParam0)//Position - 0xC7423
{
	return Local_198.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_388(int iParam0)//Position - 0xC7442
{
	return Local_198.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_389(int iParam0)//Position - 0xC74D2
{
	return Local_198.f_38.f_1[iParam0 /*21*/].f_2;
}

char* func_390(var uParam0, int iParam1)//Position - 0x2420F
{
	switch (iParam1)
	{
		case 0:
			return "RE_MovieProps_DrinksGlobe_1";
		case 1:
			return "RE_MovieProps_DrinksGlobe_2";
		case 2:
			return "RE_MovieProps_DrinksGlobe_3";
		case 3:
			return "RE_MovieProps_Sarcophagus_1";
		case 4:
			return "RE_MovieProps_Sarcophagus_2";
		case 5:
			return "RE_MovieProps_Sarcophagus_3";
		case 6:
			return "RE_MovieProps_TigerRug_1";
		case 7:
			return "RE_MovieProps_TigerRug_2";
		case 8:
			return "RE_MovieProps_TigerRug_3";
		default:
	}
	return "";
}

int func_391()//Position - 0x2F848
{
	if ((__LIB_0__.func_93() || func_931()) || func_930(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_392()//Position - 0x2B8
{
	Local_220.f_22++;
	if (Local_220.f_22 >= Local_197.f_38)
	{
		Local_220.f_22 = 0;
	}
}

bool func_393(int iParam0, int iParam1)//Position - 0xD7A
{
	return __LIB_0__.func_287(&(Local_197.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_394(int iParam0)//Position - 0xDBF
{
	if (Local_214.f_156.f_168 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_168);
		return StackVal;
	}
	return 0;
}

int func_395(int iParam0)//Position - 0xFDF
{
	if (Local_214.f_156.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_1);
		return StackVal;
	}
	return 0;
}

int func_396()//Position - 0x133D
{
	Call_Loc(Local_214.f_64);
	return StackVal;
}

bool func_397(int iParam0)//Position - 0x138A
{
	return __LIB_0__.func_287(&(Local_197.f_16), iParam0);
}

var func_398(int iParam0)//Position - 0x29E6
{
	return Local_197.f_38.f_23[Local_197.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_399(int iParam0)//Position - 0x2CB5
{
	if (Local_214.f_156.f_175 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_175);
		return StackVal;
	}
	return 1;
}

int func_400(int iParam0)//Position - 0x3367
{
	if (Local_214.f_407.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_23);
		return StackVal;
	}
	return 1;
}

int func_401(int iParam0)//Position - 0x3429
{
	if (Local_214.f_407.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_27);
		return StackVal;
	}
	return 0;
}

bool func_402(int iParam0, int iParam1)//Position - 0x379B
{
	return __LIB_0__.func_287(&(Local_197.f_67.f_1[iParam0 /*15*/]), iParam1);
}

int func_403(int iParam0, int iParam1)//Position - 0x3EC9
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
		if (BitTest(Local_197.f_67.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

float func_404(int iParam0, int iParam1)//Position - 0x40B1
{
	if (Local_214.f_352.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		default:
	}
	return 0.2f;
}

void func_405(int iParam0, int iParam1)//Position - 0x4111
{
	if (Local_197.f_67.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_197.f_67.f_1[iParam0 /*15*/].f_8, Local_197.f_67.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_197.f_67.f_1[iParam0 /*15*/].f_8, Local_197.f_67.f_1[iParam0 /*15*/].f_8);
	}
}

int func_406(int iParam0)//Position - 0x1FF8B
{
	if (Local_214.f_352.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_23);
		return StackVal;
	}
	return 1;
}

bool func_407(int iParam0, int iParam1)//Position - 0x21260
{
	return __LIB_0__.func_287(&(Local_197.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_408(int iParam0)//Position - 0x21278
{
	if (Local_214.f_114.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_28);
		return StackVal;
	}
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS_UPRIGHT");
}

bool func_409(var uParam0)//Position - 0x21430
{
	struct<3> Var0;
	if (Local_214.f_114.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_114.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !__LIB_0__.func_86(Var0);
}

int func_410()//Position - 0x26C36
{
	int iVar0;
	iVar0 = (iVar0 + __LIB_13__.func_801());
	return iVar0;
}

int func_411(int iParam0)//Position - 0x299BD
{
	if (Local_214.f_114.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_29);
	}
	return 1;
}

int func_412(int iParam0)//Position - 0x2A332
{
	if (Local_214.f_114.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_18);
		return StackVal;
	}
	return 0;
}

bool func_413(int iParam0)//Position - 0x2B7BC
{
	if (Local_214.f_114.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_14);
		return StackVal;
	}
	return Local_197.f_19.f_1.f_3;
}

int func_414()//Position - 0x2BEC7
{
	if (Local_214.f_64.f_11 != 0)
	{
		Call_Loc(Local_214.f_64.f_11);
		return StackVal;
	}
	return 1;
}

int func_415()//Position - 0x2BEE6
{
	if (Local_214.f_64.f_10 != 0)
	{
		Call_Loc(Local_214.f_64.f_10);
		return StackVal;
	}
	return 0;
}

float func_416(int iParam0)//Position - 0x2C40F
{
	if (Local_214.f_114.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_26);
		return StackVal;
	}
	return -1f;
}

int func_417(int iParam0)//Position - 0x2C430
{
	if (Local_214.f_114.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_25);
		return StackVal;
	}
	return 0;
}

float func_418(var uParam0)//Position - 0x2CA7B
{
	if (Local_214.f_114.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_114.f_20);
		return StackVal;
	}
	return 0.3f;
}

void func_419(int iParam0)//Position - 0x2D0F5
{
	int iVar0;
	switch (__LIB_13__.func_802())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iVar0, true);
			break;
	}
}

int func_420(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)//Position - 0x2D11E
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (__LIB_13__.func_802())
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

Vector3 func_421(int iParam0, int iParam1)//Position - 0x2D187
{
	switch (__LIB_13__.func_802())
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

int func_422(var uParam0)//Position - 0x44B73
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	if ((__LIB_0__.func_3() == 0 || func_978() == 0) || (__LIB_0__.func_3() == 999 && func_978() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			case 1:
				return 1040;
				break;
			case 2:
				return 1041;
				break;
			case 3:
				return 1042;
				break;
			case 4:
				return 1043;
				break;
			case 5:
				return 1503;
				break;
			case 6:
				return 1758;
				break;
			case 7:
				return 1952;
				break;
			case 8:
				return 1953;
				break;
			case 9:
				return 1954;
				break;
			case 10:
				return 1955;
				break;
			case 11:
				return 1956;
				break;
			case 12:
				return 1957;
				break;
			case 13:
				return 2424;
				break;
			case 14:
				return 2444;
				break;
			case 15:
				return 2447;
				break;
			case 16:
				return 2450;
				break;
			case 17:
				return 2614;
				break;
			case 18:
				return 2617;
				break;
			case 19:
				return 2620;
				break;
			case 20:
				return 3786;
				break;
			case 21:
				return 3789;
				break;
			case 22:
				return 3864;
				break;
			case 23:
				return 3867;
				break;
			case 24:
				return 3870;
				break;
			case 25:
				return 3873;
				break;
			case 26:
				return 5364;
				break;
			case 27:
				return 5367;
				break;
			case 28:
				return 5469;
				break;
			case 29:
				return 5472;
				break;
			case 30:
				return 6431;
				break;
			case 31:
				return 6434;
				break;
			case 32:
				return 7255;
				break;
			case 33:
				return 7258;
				break;
			case 34:
				return 7261;
				break;
			case 35:
				return 7970;
				break;
			case 36:
				return 7973;
				break;
			case 37:
				return 7976;
				break;
			case 38:
				return 7979;
				break;
			case 39:
				return 8501;
				break;
			case 40:
				return 8504;
				break;
			case 41:
				return 8507;
				break;
			case 42:
				return 8510;
				break;
			case 43:
				return 8906;
				break;
			case 44:
				return 8909;
				break;
			case 45:
				return 8912;
				break;
			case 46:
				return 10287;
				break;
			case 47:
				return 10290;
				break;
			case 48:
				return 10413;
				break;
			case 49:
				return 10416;
				break;
		}
	}
	return 13122;
}

int func_423(int iParam0)//Position - 0xA1C7C
{
	int iVar0;
	Stack.Push(Local_214.f_474.f_3 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_474.f_3);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	Stack.Push(Local_214.f_474.f_4 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_474.f_4);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_424(int iParam0)//Position - 0xA1D4A
{
	if (Local_214.f_474.f_18.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_18.f_5);
		return StackVal;
	}
	return 12;
}

int func_425(int iParam0)//Position - 0xA1DA3
{
	if (Local_214.f_474 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474);
		return StackVal;
	}
	return 1;
}

int func_426()//Position - 0xA2127
{
	if (Local_214.f_474.f_8 != 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

int func_427(int iParam0)//Position - 0xA23D4
{
	if (Local_214.f_474.f_18.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_18.f_7);
		return StackVal;
	}
	return 9;
}

int func_428(int iParam0)//Position - 0xA24A2
{
	if (Local_214.f_474.f_18.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_18.f_14);
		return StackVal;
	}
	return 1;
}

int func_429(int iParam0)//Position - 0xA24C9
{
	if (Local_214.f_474.f_18.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_18.f_16);
		return StackVal;
	}
	return 0;
}

float func_430(int iParam0)//Position - 0xA24F0
{
	if (Local_214.f_474.f_18.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_18.f_6);
		return StackVal;
	}
	return 1f;
}

int func_431(int iParam0)//Position - 0xA2552
{
	if (Local_214.f_474.f_18.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_18.f_4);
		return StackVal;
	}
	return -1;
}

int func_432()//Position - 0xAC3B6
{
	if (Local_214.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_214.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_433()//Position - 0xAC3D9
{
	if (Local_214.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_214.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_434()//Position - 0xAC697
{
	if (Local_214.f_15.f_2 != 0)
	{
		Call_Loc(Local_214.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_435()//Position - 0xAC77F
{
	if (Local_214.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_214.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_436()//Position - 0xAC88E
{
	if (Local_214.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_214.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_437()//Position - 0xACB0A
{
	if (Local_214.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_214.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_438()//Position - 0xACC09
{
	if (Local_214.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_214.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_439()//Position - 0xACC2E
{
	if (Local_214.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_214.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_440()//Position - 0xACC51
{
	if (Local_214.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_214.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

int func_441()//Position - 0xACCAF
{
	if (Local_214.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_214.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_442()//Position - 0xACCD2
{
	if (Local_214.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_214.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_443()//Position - 0xACCF5
{
	if (Local_214.f_15.f_6 != 0)
	{
		Call_Loc(Local_214.f_15.f_6);
		return StackVal;
	}
	return 0;
}

int func_444(int iParam0)//Position - 0xB301A
{
	Stack.Push(Local_214.f_456.f_8 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_456.f_8);
	if (StackVal && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(StackVal))
	{
		return 1;
	}
	return 0;
}

int func_445(int iParam0)//Position - 0xB3048
{
	if (Local_214.f_456.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_456.f_2);
		return StackVal;
	}
	return 1;
}

int func_446(int iParam0)//Position - 0xB30AC
{
	if (Local_214.f_456.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_456.f_1);
		return StackVal;
	}
	return 1;
}

bool func_447()//Position - 0xB50BD
{
	Call_Loc(Local_214.f_47);
	return StackVal;
}

int func_448()//Position - 0xB58CA
{
	if (Local_214.f_82.f_2 != 0)
	{
		Call_Loc(Local_214.f_82.f_2);
		return StackVal;
	}
	return 300000;
}

int func_449()//Position - 0xB599B
{
	if (Local_214.f_521.f_1 != 0)
	{
		Call_Loc(Local_214.f_521.f_1);
		return StackVal;
	}
	return 0;
}

float func_450()//Position - 0xB59D3
{
	if (Local_214.f_521.f_2 != 0)
	{
		Call_Loc(Local_214.f_521.f_2);
		return StackVal;
	}
	return 60f;
}

int func_451()//Position - 0xB6070
{
	if (Local_214.f_64.f_9 != 0)
	{
		Call_Loc(Local_214.f_64.f_9);
		return StackVal;
	}
	return 0;
}

int func_452()//Position - 0xB608F
{
	if (Local_214.f_64.f_7 != 0)
	{
		Call_Loc(Local_214.f_64.f_7);
		return StackVal;
	}
	return 0;
}

int func_453(int iParam0)//Position - 0xB7185
{
	if (Local_214.f_156.f_132.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_132.f_1.f_3);
		return StackVal;
	}
	return 0;
}

int func_454(int iParam0)//Position - 0xB71F1
{
	if (Local_214.f_156.f_132.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_132.f_1.f_2);
		return StackVal;
	}
	return 0;
}

float func_455(int iParam0)//Position - 0xB721A
{
	if (Local_214.f_156.f_132.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_132.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

int func_456(int iParam0)//Position - 0xB7262
{
	if (Local_214.f_156.f_132.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_132.f_1.f_4);
		return StackVal;
	}
	return 0;
}

int func_457(var uParam0)//Position - 0xB7513
{
	if (Local_214.f_156.f_184 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_156.f_184);
		return StackVal;
	}
	return 287;
}

int func_458(int iParam0)//Position - 0xB76A1
{
	return Local_197.f_38.f_23[Local_197.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

float func_459(int iParam0, var uParam1)//Position - 0xB797F
{
	switch (iParam0)
	{
		case 1:
			if (Local_214.f_352.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_214.f_352.f_22);
				return StackVal;
			}
			break;
		case 0:
			if (Local_214.f_156.f_140.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_214.f_156.f_140.f_22);
				return StackVal;
			}
			break;
		case 2:
			if (Local_214.f_407.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_214.f_407.f_22);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_460(int iParam0, var uParam1)//Position - 0xB79FA
{
	switch (iParam0)
	{
		case 0:
			if (Local_214.f_156.f_140.f_21 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_214.f_156.f_140.f_21);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_461(int iParam0)//Position - 0xB7A2F
{
	if (Local_214.f_156.f_140.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_140.f_20);
		return StackVal;
	}
	return 0.5f;
}

bool func_462(int iParam0, int iParam1)//Position - 0xB7BD5
{
	return __LIB_0__.func_287(&(Local_220[iParam0 /*19*/]), iParam1);
}

int func_463(int iParam0)//Position - 0xB7F46
{
	if (Local_214.f_156.f_140.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_140.f_10);
		return StackVal;
	}
	return 0;
}

int func_464(int iParam0)//Position - 0xB7F74
{
	if (Local_214.f_156.f_140.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_140.f_7);
		return StackVal;
	}
	return 11;
}

int func_465(int iParam0)//Position - 0xB8024
{
	if (Local_214.f_156.f_140.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_140.f_9);
		return StackVal;
	}
	return 0;
}

int func_466(int iParam0)//Position - 0xB8116
{
	if (Local_214.f_156.f_140.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_140.f_16);
		return StackVal;
	}
	return 0;
}

void func_467(int iParam0, int iParam1)//Position - 0xB8693
{
	if (__LIB_11__.func_631(&(Local_220[iParam0 /*19*/]), iParam1))
	{
	}
}

void func_468(int iParam0, int iParam1)//Position - 0xB86AB
{
	if (__LIB_1__.func_101(&(Local_220[iParam0 /*19*/]), iParam1))
	{
	}
}

float func_469()//Position - 0xB86C3
{
	if (Local_214.f_156.f_132.f_7 != 0)
	{
		Call_Loc(Local_214.f_156.f_132.f_7);
		return StackVal;
	}
	return 20f;
}

int func_470(int iParam0)//Position - 0xB8806
{
	if (Local_214.f_407.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_28);
		return StackVal;
	}
	return 0;
}

float func_471(var uParam0)//Position - 0xB884F
{
	if (Local_214.f_407.f_41 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_407.f_41);
		return StackVal;
	}
	return 0.5f;
}

int func_472(var uParam0)//Position - 0xB8876
{
	if (Local_214.f_407.f_42 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_407.f_42);
		return StackVal;
	}
	return 18;
}

int func_473(var uParam0)//Position - 0xB889A
{
	if (Local_214.f_407.f_40 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_407.f_40);
		return StackVal;
	}
	return 0;
}

int func_474(int iParam0)//Position - 0xB8B50
{
	if (Local_214.f_407.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_44);
		return StackVal;
	}
	return 0;
}

int func_475(int iParam0)//Position - 0xB8B73
{
	if (Local_214.f_407.f_43 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_43);
		return StackVal;
	}
	return 0;
}

float func_476(int iParam0)//Position - 0xB8B96
{
	if (Local_214.f_407.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_39);
		return StackVal;
	}
	return 10f;
}

int func_477(int iParam0)//Position - 0xB8D4C
{
	if (Local_214.f_407.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_9);
		return StackVal;
	}
	return 0;
}

int func_478(int iParam0)//Position - 0xB8DB3
{
	if (Local_214.f_407.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_16);
		return StackVal;
	}
	return 0;
}

float func_479(int iParam0)//Position - 0xB8F8D
{
	if (Local_214.f_407.f_30.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_30.f_2);
		return StackVal;
	}
	return 1f;
}

int func_480(int iParam0)//Position - 0xB8FB4
{
	if (Local_214.f_407.f_30.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_30.f_1);
		return StackVal;
	}
	return 6;
}

void func_481(int iParam0, int iParam1)//Position - 0xB9480
{
	if (Local_214.f_352.f_49 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_214.f_352.f_49);
	}
}

float func_482(int iParam0)//Position - 0xB94FD
{
	if (Local_214.f_352.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_20);
		return StackVal;
	}
	return 0.5f;
}

Vector3 func_483(int iParam0)//Position - 0xB9B4D
{
	if (Local_214.f_352.f_50.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_50.f_1);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

Vector3 func_484(int iParam0)//Position - 0xB9B76
{
	if (Local_214.f_352.f_50 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_50);
		return StackVal, StackVal, StackVal;
	}
	return 0f, -5.5f, 0.7f;
}

int func_485(int iParam0)//Position - 0xBA01A
{
	if (Local_214.f_352.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_7);
		return StackVal;
	}
	return 12;
}

int func_486(int iParam0)//Position - 0xBA083
{
	if (Local_214.f_352.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_9);
		return StackVal;
	}
	return 0;
}

int func_487(int iParam0)//Position - 0xBA0A6
{
	if (Local_214.f_352.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_352.f_16);
		return StackVal;
	}
	return 0;
}

int func_488()//Position - 0xBB081
{
	if (Local_214.f_92.f_1 != 0)
	{
		Call_Loc(Local_214.f_92.f_1);
		return StackVal;
	}
	return 1;
}

int func_489(int iParam0)//Position - 0xBB0A0
{
	if (Local_214.f_92 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_92);
		return StackVal;
	}
	return 1;
}

char* func_490(var uParam0, var uParam1)//Position - 0xBB53A
{
	if (Local_214.f_47.f_2.f_2 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_214.f_47.f_2.f_2);
		return StackVal;
	}
	return "";
}

char* func_491(var uParam0, var uParam1)//Position - 0xBB562
{
	if (Local_214.f_47.f_2.f_1 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_214.f_47.f_2.f_1);
		return StackVal;
	}
	return "";
}

int func_492()//Position - 0xBBACC
{
	if (Local_214.f_114.f_41 != 0)
	{
		Call_Loc(Local_214.f_114.f_41);
		return StackVal;
	}
	return 1;
}

float func_493(int iParam0)//Position - 0xBC93F
{
	if (Local_214.f_114.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_114.f_8);
		return StackVal;
	}
	return 1.1f;
}

void func_494(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBD88F
{
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_10 = iParam2;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_11 = iParam3;
}

Vector3 func_495(int iParam0, int iParam1)//Position - 0xBD956
{
	if (Local_214.f_156.f_2.f_52 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_52);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, true);
}

int func_496(int iParam0)//Position - 0xBDABD
{
	if (Local_214.f_156.f_2.f_125.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_125.f_4);
		return StackVal;
	}
	return 0;
}

int func_497(int iParam0)//Position - 0xBDAE6
{
	if (Local_214.f_156.f_2.f_125.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_125.f_3);
		return StackVal;
	}
	return 1;
}

int func_498(int iParam0)//Position - 0xBDB0F
{
	if (Local_214.f_156.f_2.f_125.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_125.f_2);
		return StackVal;
	}
	return 0;
}

float func_499(int iParam0)//Position - 0xBDBB8
{
	if (Local_214.f_156.f_2.f_125.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_125.f_1);
		return StackVal;
	}
	return -1f;
}

float func_500(int iParam0, int iParam1)//Position - 0xBDC8A
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

Vector3 func_501(int iParam0, int iParam1)//Position - 0xBDCB5
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

float func_502(int iParam0, int iParam1)//Position - 0xBE016
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

int func_503(int iParam0, int iParam1)//Position - 0xBE060
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

int func_504(int iParam0, int iParam1)//Position - 0xBE0AF
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

float func_505(int iParam0, int iParam1)//Position - 0xBE0DB
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

float func_506(int iParam0, int iParam1)//Position - 0xBE129
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

int func_507(int iParam0)//Position - 0xBE262
{
	if (Local_214.f_156.f_2.f_102.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_102.f_2);
		return StackVal;
	}
	return 0;
}

float func_508(int iParam0)//Position - 0xBE28B
{
	if (Local_214.f_156.f_2.f_102.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_102.f_1);
		return StackVal;
	}
	return -1f;
}

float func_509(int iParam0)//Position - 0xBE2B4
{
	if (Local_214.f_156.f_2.f_102.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_102.f_3);
		return StackVal;
	}
	return 7.5f;
}

Vector3 func_510(int iParam0, int iParam1)//Position - 0xBE2E1
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

Vector3 func_511(int iParam0)//Position - 0xBE631
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

int func_512(int iParam0)//Position - 0xBE748
{
	if (Local_214.f_156.f_2.f_91.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_1);
		return StackVal;
	}
	return 0;
}

float func_513(int iParam0)//Position - 0xBE7A5
{
	if (Local_214.f_156.f_2.f_91.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_2);
		return StackVal;
	}
	return 10f;
}

int func_514(int iParam0, var uParam1)//Position - 0xBE7D2
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

float func_515(int iParam0)//Position - 0xBE981
{
	if (Local_214.f_156.f_2.f_91.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_9);
		return StackVal;
	}
	return 20f;
}

int func_516(int iParam0)//Position - 0xBE9AE
{
	if (Local_214.f_156.f_2.f_91.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_8);
		return StackVal;
	}
	return 25;
}

float func_517(int iParam0)//Position - 0xBE9D8
{
	if (Local_214.f_156.f_2.f_91.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_7);
		return StackVal;
	}
	return 0f;
}

int func_518(int iParam0)//Position - 0xBEA01
{
	if (Local_214.f_156.f_2.f_91.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_6);
		return StackVal;
	}
	return 1076642364;
}

float func_519(int iParam0)//Position - 0xBEABC
{
	if (Local_214.f_156.f_2.f_91.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_91.f_4);
		return StackVal;
	}
	return 2f;
}

float func_520(var uParam0)//Position - 0xBED18
{
	if (Local_214.f_156.f_2.f_85.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_156.f_2.f_85.f_2);
		return StackVal;
	}
	return 7.5f;
}

int func_521(int iParam0)//Position - 0xBEEBB
{
	if (Local_214.f_156.f_2.f_79.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_79.f_5);
		return StackVal;
	}
	return 786468;
}

int func_522(int iParam0)//Position - 0xBEEE7
{
	if (Local_214.f_156.f_2.f_79.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_79.f_4);
		return StackVal;
	}
	return 80;
}

float func_523(int iParam0)//Position - 0xBEF11
{
	if (Local_214.f_156.f_2.f_79.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_79.f_3);
		return StackVal;
	}
	return 80f;
}

float func_524(int iParam0, bool bParam1)//Position - 0xBEF3E
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

int func_525(int iParam0)//Position - 0xBF00B
{
	if (Local_214.f_156.f_2.f_76.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_76.f_2);
		return StackVal;
	}
	return 22713;
}

float func_526(int iParam0)//Position - 0xBF036
{
	if (Local_214.f_156.f_2.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_76.f_1);
		return StackVal;
	}
	return 10f;
}

int func_527(int iParam0)//Position - 0xBF125
{
	if (Local_214.f_156.f_2.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_72.f_2);
		return StackVal;
	}
	return -1;
}

float func_528(int iParam0)//Position - 0xBF14E
{
	if (Local_214.f_156.f_2.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_72.f_1);
		return StackVal;
	}
	return 10000f;
}

void func_529(int iParam0, int iParam1)//Position - 0xBF1B1
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

int func_530(int iParam0)//Position - 0xBF260
{
	if (Local_214.f_156.f_2.f_67.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_67.f_3);
		return StackVal;
	}
	return 0;
}

int func_531(int iParam0)//Position - 0xBF289
{
	if (Local_214.f_156.f_2.f_67.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_67.f_2);
		return StackVal;
	}
	return -1;
}

int func_532(int iParam0)//Position - 0xBF2B2
{
	if (Local_214.f_156.f_2.f_67.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_67.f_1);
		return StackVal;
	}
	return 0;
}

int func_533(int iParam0)//Position - 0xBF2DB
{
	if (Local_214.f_156.f_2.f_67 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_67);
		return StackVal;
	}
	return -1;
}

int func_534(int iParam0, var uParam1)//Position - 0xBF578
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

int func_535(int iParam0)//Position - 0xBF5A3
{
	if (Local_214.f_156.f_2.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_62.f_2);
		return StackVal;
	}
	return 1;
}

int func_536(int iParam0)//Position - 0xBF5CC
{
	if (Local_214.f_156.f_2.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_62.f_1);
		return StackVal;
	}
	return 0;
}

int func_537(int iParam0)//Position - 0xBF622
{
	if (Local_214.f_156.f_2.f_62.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_62.f_3);
		return StackVal;
	}
	return 0;
}

var func_538(int iParam0)//Position - 0xBF6B4
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

float func_539(int iParam0)//Position - 0xBF7D8
{
	if (Local_214.f_156.f_2.f_56.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_56.f_4);
		return StackVal;
	}
	return 0f;
}

int func_540()//Position - 0xBF801
{
	if (Local_214.f_156.f_2.f_56.f_3 != 0)
	{
		Call_Loc(Local_214.f_156.f_2.f_56.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_541(int iParam0)//Position - 0xBF82A
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

float func_542(int iParam0)//Position - 0xBF85C
{
	if (Local_214.f_156.f_2.f_56.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_56.f_2);
		return StackVal;
	}
	return 1f;
}

int func_543(int iParam0)//Position - 0xBF931
{
	if (Local_214.f_156.f_2.f_56 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_56);
		return StackVal;
	}
	return 0;
}

int func_544(var uParam0, var uParam1)//Position - 0xBFB03
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

int func_545(int iParam0)//Position - 0xBFCBE
{
	if (Local_214.f_156.f_2.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25);
		return StackVal;
	}
	return 0;
}

float func_546(int iParam0)//Position - 0xBFD3C
{
	if (Local_214.f_156.f_2.f_25.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_4);
		return StackVal;
	}
	return 10f;
}

int func_547(int iParam0, var uParam1)//Position - 0xBFD69
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

int func_548(int iParam0)//Position - 0xC030B
{
	if (Local_214.f_156.f_2.f_25.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_20);
		return StackVal;
	}
	return 0;
}

float func_549(int iParam0)//Position - 0xC0334
{
	if (Local_214.f_156.f_2.f_25.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_15);
		return StackVal;
	}
	return -1f;
}

int func_550(int iParam0)//Position - 0xC035D
{
	if (Local_214.f_156.f_2.f_25.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_7);
		return StackVal;
	}
	return 0;
}

int func_551(int iParam0)//Position - 0xC0386
{
	if (Local_214.f_156.f_2.f_25.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_11);
		return StackVal;
	}
	return 24;
}

int func_552(int iParam0)//Position - 0xC03B0
{
	if (Local_214.f_156.f_2.f_25.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_553(int iParam0)//Position - 0xC03DC
{
	if (Local_214.f_156.f_2.f_25.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_10);
		return StackVal;
	}
	return 0f;
}

int func_554(int iParam0)//Position - 0xC0405
{
	if (Local_214.f_156.f_2.f_25.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_6);
		return StackVal;
	}
	return 0;
}

float func_555(int iParam0)//Position - 0xC0470
{
	if (Local_214.f_156.f_2.f_25.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_9);
		return StackVal;
	}
	return 0f;
}

int func_556(int iParam0)//Position - 0xC04B7
{
	if (Local_214.f_156.f_2.f_25.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_12);
		return StackVal;
	}
	return 7;
}

float func_557(int iParam0)//Position - 0xC04E0
{
	if (Local_214.f_156.f_2.f_25.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_3);
		return StackVal;
	}
	return 35f;
}

float func_558(int iParam0)//Position - 0xC050D
{
	if (Local_214.f_156.f_2.f_25.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_5);
		return StackVal;
	}
	return 5f;
}

int func_559()//Position - 0xC0536
{
	if (Local_214.f_156.f_2.f_25.f_18 != 0)
	{
		Call_Loc(Local_214.f_156.f_2.f_25.f_18);
		return StackVal;
	}
	return 80;
}

float func_560()//Position - 0xC055E
{
	if (Local_214.f_156.f_2.f_25.f_17 != 0)
	{
		Call_Loc(Local_214.f_156.f_2.f_25.f_17);
		return StackVal;
	}
	return 80f;
}

float func_561(int iParam0)//Position - 0xC0589
{
	if (Local_214.f_156.f_2.f_25.f_19 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_19);
		return StackVal;
	}
	return -1f;
}

float func_562(int iParam0)//Position - 0xC05B2
{
	if (Local_214.f_156.f_2.f_25.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_16);
		return StackVal;
	}
	return 30f;
}

int func_563()//Position - 0xC05DF
{
	if (Local_214.f_156.f_2.f_25.f_14 != 0)
	{
		Call_Loc(Local_214.f_156.f_2.f_25.f_14);
		return StackVal;
	}
	return 0;
}

int func_564(var uParam0)//Position - 0xC0655
{
	if (Local_214.f_156.f_2.f_25.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_214.f_156.f_2.f_25.f_13);
		return StackVal;
	}
	return 0;
}

int func_565(int iParam0)//Position - 0xC0959
{
	if (Local_214.f_156.f_2.f_13.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_13.f_1);
		return StackVal;
	}
	return 0;
}

int func_566(int iParam0)//Position - 0xC0982
{
	if (Local_214.f_156.f_2.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_13);
		return StackVal;
	}
	return 0;
}

int func_567(int iParam0)//Position - 0xC0CF9
{
	if (Local_214.f_156.f_2.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_3);
		return StackVal;
	}
	return 0;
}

bool func_568(var uParam0, char* sParam1)//Position - 0xC0D1E
{
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_2.f_4);
	return ((((((StackVal || MISC::ARE_STRINGS_EQUAL(sParam1, "PROP_HUMAN_SEAT_SUNLOUNGER")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_STEPS")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

void func_569(int iParam0, int iParam1)//Position - 0xC0F27
{
	Local_219[iParam0 /*21*/].f_17 = iParam1;
}

void func_570(int iParam0, int iParam1)//Position - 0xC0F9A
{
	Local_219[iParam0 /*21*/].f_18 = iParam1;
}

void func_571(int iParam0, int iParam1)//Position - 0xC1559
{
	Local_218[iParam0 /*20*/].f_17 = iParam1;
}

void func_572(int iParam0, int iParam1)//Position - 0xC161E
{
	Local_218[iParam0 /*20*/].f_18 = iParam1;
}

void func_573(var uParam0, int iParam1)//Position - 0xC2127
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

var func_574(var uParam0)//Position - 0xC22CF
{
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_178);
	return StackVal;
}

Vector3 func_575(var uParam0)//Position - 0xC22E1
{
	Stack.Push(uParam0);
	Call_Loc(Local_214.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

void func_576(int iParam0, int iParam1)//Position - 0xC23E1
{
	Local_220[iParam0 /*19*/].f_10[Local_220[iParam0 /*19*/].f_16] = iParam1;
	Local_220[iParam0 /*19*/].f_16++;
}

void func_577(int iParam0, int iParam1, int iParam2)//Position - 0xC24FE
{
	int iVar0;
	var uVar1;
	iVar0 = Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12++;
}

void func_578(int iParam0, int iParam1, int iParam2)//Position - 0xC2558
{
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/] = iParam2;
	Local_220.f_23[iParam0 /*67*/]++;
}

void func_579(int iParam0, var uParam1, int iParam2)//Position - 0xC288C
{
	int iVar0;
	var uVar1;
	iVar0 = Local_219[iParam0 /*21*/].f_19;
	uVar1 = uParam1;
	Local_219[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_219[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_219[iParam0 /*21*/].f_19++;
}

void func_580(int iParam0, int iParam1)//Position - 0xC28EC
{
	int iVar0;
	var uVar1;
	iVar0 = Local_219[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_219[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_219[iParam0 /*21*/].f_19++;
}

void func_581(int iParam0, int iParam1, int iParam2)//Position - 0xC2994
{
	int iVar0;
	var uVar1;
	iVar0 = Local_218[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_218[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_218[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_218[iParam0 /*20*/].f_19++;
}

bool func_582()//Position - 0xC77B1
{
	return __LIB_13__.func_801() > 0;
}

int func_583()//Position - 0xA3A
{
	return Local_199.f_19;
}

int func_584()//Position - 0x21A6F
{
	return Local_199.f_19.f_5[0 /*13*/].f_11;
}

int func_585(int iParam0)//Position - 0x23443
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

void func_586(int iParam0)//Position - 0x23851
{
	if (__LIB_1__.func_101(&(Local_199.f_16), iParam0))
	{
	}
}

int func_587()//Position - 0x23FD2
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

char* func_588(int iParam0, int iParam1)//Position - 0x269C3
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

void func_589(int iParam0)//Position - 0x2782E
{
	if (__LIB_1__.func_101(&(Global_2789194.f_1), iParam0))
	{
	}
}

void func_590(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x2E85C
{
	Global_23150.f_8783 = iParam4;
	Global_23150.f_8779 = uParam0;
	Global_23150.f_8780 = uParam1;
	Global_23150.f_8781 = uParam2;
	Global_23150.f_8782 = uParam3;
}

float func_591()//Position - 0x2F6BF
{
	return 800f;
}

float func_592(var uParam0)//Position - 0x2FA1F
{
	return 12f;
}

int func_593(int iParam0)//Position - 0x331E3
{
	int iVar0;
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return __LIB_0__.func_160();
	}
	return NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
}

char* func_594(var uParam0)//Position - 0x3644A
{
	return "grab_low";
}

int func_595(int iParam0)//Position - 0x3686E
{
	return 676;
}

int func_596(var uParam0)//Position - 0x38967
{
	return 4000;
}

char* func_597(var uParam0)//Position - 0x38C13
{
	return "anim@GangOps@Facility@Servers@BodySearch@";
}

char* func_598(var uParam0)//Position - 0x38C1F
{
	return "Player_Search";
}

int func_599(var uParam0, int iParam1)//Position - 0x390CC
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

int func_600(bool bParam0, bool bParam1, int iParam2)//Position - 0x3B1F5
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (iParam2 || bVar1 != bParam0)
		{
			if (__LIB_1__.func_264(bVar1, bParam1, 1))
			{
				if (__LIB_2__.func_235(bParam0, bVar1))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_601(var uParam0)//Position - 0x3CCB2
{
	return 120000;
}

char* func_602()//Position - 0xB0237
{
	return "DLC_SECURITY/DLC_Sec_Payphone_Hit_Taxi";
}

int func_603(int iParam0)//Position - 0xB1F85
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 28);
	}
	return 0;
}

var func_604()//Position - 0xB90F1
{
	return Local_199.f_19.f_1.f_2;
}

void func_605(var uParam0, var uParam1, char* sParam2, bool bParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xF63F4
{
	int iVar0;
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			__LIB_6__.func_404(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			Global_43792[iVar0 /*32*/].f_2 = uParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = bParam3;
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
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_606(int iParam0)//Position - 0xF8BE5
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_14;
}

bool func_607(int iParam0, var uParam1)//Position - 0x104A26
{
	return (Local_199.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_199.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

var func_608(int iParam0)//Position - 0x10A571
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_609(int iParam0)//Position - 0x10A58E
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_610(int iParam0)//Position - 0x10A651
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_611(int iParam0)//Position - 0x10A665
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_612(int iParam0)//Position - 0x10A684
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_613(int iParam0)//Position - 0x10A714
{
	return Local_199.f_38.f_1[iParam0 /*21*/].f_2;
}

int func_614()//Position - 0x650
{
	if (Local_197.f_102 != -1)
	{
		return Local_197.f_102 * 60 * 1000;
	}
	return Local_197.f_102;
}

int func_615(int iParam0)//Position - 0x144A
{
	if (__LIB_14__.func_393(iParam0, 18))
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

struct<9> func_616(int iParam0)//Position - 0x2623
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

struct<9> func_617(int iParam0)//Position - 0x26B9
{
	return Local_197.f_111.f_1[iParam0 /*9*/];
}

int func_618(int iParam0)//Position - 0x26CE
{
	if (__LIB_14__.func_397(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_619(int iParam0)//Position - 0x2A5E
{
	if (__LIB_14__.func_397(22))
	{
		return 1;
	}
	return 0;
}

bool func_620(int iParam0, int iParam1)//Position - 0x32B0
{
	return __LIB_0__.func_287(&(Local_197.f_85.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_621(int iParam0)//Position - 0x32C8
{
	struct<3> Var0;
	if (Local_214.f_407.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_38);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__.func_86(Var0))
	{
		Var0 = { Local_197.f_85.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_622(int iParam0)//Position - 0x330C
{
	struct<3> Var0;
	if (Local_214.f_407.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_407.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__.func_86(Var0))
	{
		Var0 = { Local_197.f_85.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

bool func_623(int iParam0, int iParam1)//Position - 0x40E9
{
	return __LIB_14__.func_404(iParam0, iParam1) != 1f;
}

bool func_624(int iParam0, int iParam1)//Position - 0x20047
{
	return __LIB_0__.func_287(&(Local_374[iParam0 /*35*/].f_1), iParam1);
}

bool func_625()//Position - 0x20420
{
	return __LIB_14__.func_397(0);
}

void func_626()//Position - 0x21824
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
		if (!__LIB_0__.func_86(Local_197.f_141[iVar0 /*8*/]))
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

int func_627()//Position - 0x21A3E
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__.func_86(Local_197.f_141[iVar1 /*8*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_628(var uParam0, int iParam1)//Position - 0x232BE
{
	switch (iParam1)
	{
		case 0:
			return "RE_Phantom_Car_1";
		default:
	}
	return "";
}

int func_629(int iParam0)//Position - 0x234B4
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

void func_630(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23926
{
	int iVar0;
	var uVar1;
	iVar0 = Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/].f_1 = iParam3;
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12++;
}

void func_631(int iParam0, int iParam1, int iParam2)//Position - 0x239C6
{
	Local_220.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_8 = iParam2;
}

void func_632(int iParam0, int iParam1)//Position - 0x23FBA
{
	if (__LIB_1__.func_101(&(Local_197.f_38.f_1[iParam0 /*21*/]), iParam1))
	{
	}
}

void func_633(int iParam0, int iParam1)//Position - 0x23FD5
{
	if (__LIB_11__.func_631(&(Local_197.f_67.f_1[iParam0 /*15*/]), iParam1))
	{
	}
}

void func_634(int iParam0, int iParam1)//Position - 0x23FF0
{
	if (__LIB_1__.func_101(&(Local_197.f_67.f_1[iParam0 /*15*/]), iParam1))
	{
	}
}

void func_635(int iParam0, int iParam1, int iParam2)//Position - 0x24148
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

int func_636(int iParam0)//Position - 0x2438E
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

bool func_637(int iParam0, int iParam1, int iParam2)//Position - 0x2AE6B
{
	return __LIB_0__.func_287(&(Local_374[iParam1 /*35*/].f_3[iParam0 /*3*/]), iParam2);
}

int func_638(int iParam0)//Position - 0x2B2FE
{
	if ((((__LIB_13__.func_886(iParam0, 19) || (__LIB_13__.func_886(iParam0, 3) && func_13(&(Local_367.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || __LIB_13__.func_886(iParam0, 4)) || __LIB_13__.func_886(iParam0, 25)) || __LIB_13__.func_886(iParam0, 33))
	{
		return (__LIB_13__.func_886(iParam0, 4) || __LIB_13__.func_886(iParam0, 3));
	}
	return 0;
}

void func_639(int iParam0)//Position - 0x2B397
{
	if (HUD::DOES_BLIP_EXIST(Local_291[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_291[iParam0 /*7*/]));
	}
}

bool func_640(int iParam0)//Position - 0x2DA66
{
	return __LIB_13__.func_886(iParam0, 1);
}

bool func_641(int iParam0)//Position - 0xA2E62
{
	return Local_197.f_141[iParam0 /*8*/].f_5 != -1;
}

var func_642(int iParam0)//Position - 0xA3126
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

Vector3 func_643(int iParam0)//Position - 0xA31FF
{
	struct<3> Var0;
	if (Local_214.f_474.f_12 != 0)
	{
		Stack.Push(Local_197.f_141[iParam0 /*8*/].f_4);
		Call_Loc(Local_214.f_474.f_12);
		Var0 = { StackVal, StackVal, StackVal };
		if (!__LIB_0__.func_86(Var0))
		{
			return Var0;
		}
	}
	return Local_197.f_141[Local_197.f_141[iParam0 /*8*/].f_4 /*8*/];
}

bool func_644(int iParam0, int iParam1)//Position - 0xA3260
{
	return __LIB_0__.func_287(&(Local_197.f_141[iParam0 /*8*/].f_6), iParam1);
}

int func_645(int iParam0)//Position - 0xA3316
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__.func_801())
	{
		if (Local_291[iVar0 /*7*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_646(int iParam0)//Position - 0xA3863
{
	if ((!__LIB_0__.func_86(Local_197.f_141[iParam0 /*8*/]) && Local_197.f_141[iParam0 /*8*/].f_4 != -1) && !__LIB_0__.func_86(Local_197.f_141[Local_197.f_141[iParam0 /*8*/].f_4 /*8*/]))
	{
		return 1;
	}
	return 0;
}

Vector3 func_647(int iParam0)//Position - 0xB42B3
{
	if (Local_214.f_456.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_456.f_9);
		if (!__LIB_0__.func_86(StackVal, StackVal, StackVal))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_456.f_9);
			return StackVal, StackVal, StackVal;
		}
	}
	return Local_197.f_134.f_1[iParam0 /*5*/];
}

void func_648(int iParam0)//Position - 0xB4D0E
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

bool func_649(int iParam0)//Position - 0xB4E5A
{
	return __LIB_2__.func_319(&Local_315, iParam0);
}

int func_650(int iParam0)//Position - 0xB666A
{
	if (__LIB_14__.func_397(16))
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

int func_651()//Position - 0xB7161
{
	if (__LIB_14__.func_397(24) || __LIB_14__.func_397(25))
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

void func_652()//Position - 0xB76C1
{
	Local_305.f_0 = 0;
	Local_305.f_2 = 0;
	Local_305.f_1 = 0;
	__LIB_0__.func_579(&(Local_305.f_3));
}

void func_653(int iParam0)//Position - 0xB7DD7
{
	if (HUD::DOES_BLIP_EXIST(Local_312.f_1[iParam0 /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_312.f_1[iParam0 /*4*/].f_1));
	}
}

bool func_654(int iParam0, int iParam1, int iParam2)//Position - 0xB8643
{
	return __LIB_0__.func_287(&(Local_374[iParam1 /*35*/].f_7[iParam0 /*2*/]), iParam2);
}

bool func_655(int iParam0)//Position - 0xB8706
{
	return __LIB_13__.func_858(iParam0, 15);
}

bool func_656(int iParam0)//Position - 0xB878D
{
	return (__LIB_13__.func_858(iParam0, 16) && !__LIB_13__.func_858(iParam0, 0));
}

int func_657(int iParam0)//Position - 0xB8B7F
{
	if (((((__LIB_13__.func_858(iParam0, 1) || __LIB_13__.func_858(iParam0, 0)) || __LIB_13__.func_858(iParam0, 14)) || __LIB_13__.func_858(iParam0, 12)) || __LIB_13__.func_858(iParam0, 11)) || __LIB_13__.func_858(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

void func_658()//Position - 0xB8FE6
{
	Local_302.f_0++;
}

int func_659(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB92F2
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
	if (!__LIB_14__.func_393(iParam0, 15))
	{
		return 0;
	}
	*uParam1 = 100;
	*uParam2 = 5000f;
	*uParam3 = 400f;
	return 1;
}

float func_660(int iParam0)//Position - 0xB99A3
{
	if (__LIB_13__.func_858(iParam0, 19))
	{
		return 300f;
	}
	return -1f;
}

bool func_661(int iParam0, int iParam1, int iParam2)//Position - 0xB9E09
{
	return __LIB_0__.func_287(&(Local_374[iParam1 /*35*/].f_10[iParam0 /*2*/]), iParam2);
}

bool func_662(int iParam0)//Position - 0xBB641
{
	return Local_291[iParam0 /*7*/].f_4 != __LIB_0__.func_160();
}

bool func_663(int iParam0, int iParam1, int iParam2)//Position - 0xBB660
{
	return __LIB_0__.func_287(&(Local_374[iParam1 /*35*/].f_19[iParam0 /*2*/]), iParam2);
}

void func_664()//Position - 0xBCF7E
{
	if (Local_302.f_0 > Local_302.f_1)
	{
		Local_302.f_1 = Local_302.f_0;
	}
	Local_302.f_0 = 0;
}

void func_665(int iParam0, var uParam1)//Position - 0xBD4B8
{
	if (__LIB_11__.func_631(&(Local_367.f_22[iParam0 /*24*/].f_3), uParam1))
	{
	}
}

bool func_666(int iParam0, int iParam1)//Position - 0xBD58A
{
	return __LIB_2__.func_319(&(Local_374[iParam0 /*35*/].f_24), iParam1);
}

void func_667(int iParam0, int iParam1, var uParam2)//Position - 0xBD5E6
{
	if (!__LIB_13__.func_872(iParam1, iParam0))
	{
		__LIB_13__.func_871(iParam1, iParam0);
	}
}

void func_668(int iParam0, int iParam1, var uParam2)//Position - 0xBD712
{
	if (!__LIB_13__.func_858(iParam1, iParam0))
	{
		__LIB_13__.func_857(iParam1, iParam0);
	}
}

void func_669(int iParam0, int iParam1, var uParam2)//Position - 0xBD81A
{
	if (!__LIB_13__.func_876(iParam1, iParam0))
	{
		__LIB_13__.func_875(iParam1, iParam0);
	}
}

void func_670(int iParam0, int iParam1, var uParam2)//Position - 0xBDA23
{
	if (!__LIB_13__.func_886(iParam1, iParam0))
	{
		__LIB_13__.func_890(iParam1, iParam0);
	}
}

var func_671(int iParam0)//Position - 0xBDBF0
{
	return Local_374[iParam0 /*35*/];
}

char* func_672(int iParam0, int iParam1)//Position - 0xBE876
{
	int iVar0;
	iVar0 = Local_197.f_122.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/];
	if (iVar0 != -1)
	{
	}
	return "";
}

bool func_673(int iParam0, var uParam1)//Position - 0xBEA12
{
	return __LIB_13__.func_858(iParam0, 5);
}

bool func_674(int iParam0, var uParam1)//Position - 0xBEA4E
{
	return __LIB_13__.func_858(iParam0, 21);
}

Vector3 func_675(int iParam0, int iParam1)//Position - 0xC087E
{
	return Local_197.f_122.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/].f_1;
}

struct<4> func_676(int iParam0)//Position - 0xC09F2
{
	if (Local_214.f_156.f_2.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_62);
		return StackVal, StackVal, StackVal, StackVal;
	}
	return Local_314[iParam0 /*4*/];
}

int func_677(int iParam0)//Position - 0xC0A48
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

int func_678(int iParam0)//Position - 0xC1896
{
	if (__LIB_14__.func_554(iParam0))
	{
		return joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED");
	}
	return joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD");
}

var func_679()//Position - 0xC218F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < Local_197.f_38)
	{
		iVar2 = __LIB_14__.func_395(iVar1);
		if (iVar2 < 1 && iVar2 > iVar0)
		{
			iVar0 = iVar2;
		}
		iVar1++;
	}
	return iVar0 + 1;
}

void func_680()//Position - 0xC297B
{
	__LIB_13__.func_933(1);
}

void func_681()//Position - 0xC2A5F
{
	__LIB_13__.func_954();
}

void func_682()//Position - 0xC2A6B
{
	__LIB_13__.func_933(4);
}

bool func_683()//Position - 0xC2B9A
{
	return (Local_302.f_0 == 0 && Local_302.f_1 > 0);
}

int func_684(int iParam0)//Position - 0xC3655
{
	if (__LIB_13__.func_858(iParam0, 19))
	{
		return 9;
	}
	return 1;
}

int func_685(int iParam0)//Position - 0xC372D
{
	if (__LIB_13__.func_858(iParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_686(int iParam0)//Position - 0xC3745
{
	if (__LIB_13__.func_858(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

int func_687(int iParam0)//Position - 0xC375D
{
	if (__LIB_13__.func_858(iParam0, 12))
	{
		return 1;
	}
	return 0;
}

int func_688(int iParam0)//Position - 0xC37F5
{
	__LIB_13__.func_857(iParam0, 16);
	if (__LIB_13__.func_858(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_689(int iParam0)//Position - 0xC384E
{
	__LIB_13__.func_857(iParam0, 15);
	if (__LIB_13__.func_858(iParam0, 14))
	{
		return 1;
	}
	return 0;
}

int func_690(int iParam0)//Position - 0xC386E
{
	__LIB_13__.func_857(iParam0, 18);
	if (__LIB_13__.func_858(iParam0, 11))
	{
		return 1;
	}
	return 0;
}

var func_691()//Position - 0xC3AD1
{
	return Local_197.f_99;
}

void func_692()//Position - 0xC44E6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_197.f_111)
	{
		__LIB_6__.func_352(&(uLocal_313[iVar0]));
		iVar0++;
	}
}

void func_693()//Position - 0xC4552
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

bool func_694(int iParam0)//Position - 0x90B
{
	return __LIB_9__.func_807(&(Local_197.f_16), iParam0);
}

bool func_695(int iParam0, int iParam1)//Position - 0x23A8A
{
	return __LIB_9__.func_807(&(Local_197.f_19.f_5[iParam0 /*13*/]), iParam1);
}

char* func_696(int iParam0, int iParam1)//Position - 0x275B2
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

char* func_697()//Position - 0x7CB02
{
	return "FIXER_FAIL";
}

char* func_698()//Position - 0x7CB0E
{
	return "FIXER_MUSIC_STOP";
}

char* func_699(var uParam0)//Position - 0x7D2CB
{
	return "FXFRAUD";
}

int func_700(var uParam0)//Position - 0x7D2D7
{
	return 175;
}

char* func_701(var uParam0, var uParam1)//Position - 0x7D2E1
{
	return "FIX_FRANKLIN";
}

int func_702(var uParam0)//Position - 0x7E0F7
{
	return 822;
}

int func_703(var uParam0, bool bParam1)//Position - 0x7EB23
{
	if (bParam1)
	{
		return 0;
	}
	return 4000;
}

int func_704(bool bParam0, bool bParam1)//Position - 0x7F0F3
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

float func_705(var uParam0)//Position - 0x84915
{
	return 0.8f;
}

float func_706(var uParam0)//Position - 0x88B0D
{
	return 80f;
}

char* func_707()//Position - 0x90D20
{
	return "DLC_TUNER/DLC_Tuner_Generic";
}

float func_708()//Position - 0x917EB
{
	return 300f;
}

int func_709(var uParam0)//Position - 0x92685
{
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INCAR");
}

bool func_710(int iParam0, var uParam1)//Position - 0x92892
{
	return Local_197.f_38.f_1[iParam0 /*21*/].f_10 != -1;
}

char* func_711(int iParam0)//Position - 0x9410A
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

int func_712(int iParam0)//Position - 0x942FE
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

char* func_713(var uParam0)//Position - 0x9441D
{
	return "sm_smugdlc_int_01";
}

Vector3 func_714(var uParam0)//Position - 0x94429
{
	return -1266.802f, -3014.8364f, -49.4895f;
}

void func_715(int iParam0, bool bParam1)//Position - 0x95E42
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

int func_716(var uParam0, var uParam1)//Position - 0xEA387
{
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, *uParam1);
}

int func_717(int iParam0)//Position - 0x1BE1
{
	if ((__LIB_14__.func_393(iParam0, 10) && func_73(iParam0, 8)) && !__LIB_14__.func_393(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

struct<6> func_718(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x25931
{
	struct<6> Var0;
	StringCopy(&Var0, sParam1, 24);
	StringConCat(&Var0, sParam0, 24);
	StringConCat(&Var0, sParam3, 24);
	StringConCat(&Var0, sParam2, 24);
	return Var0;
}

void func_719(var uParam0)//Position - 0x25B1B
{
	*uParam0 = (32 - *uParam0);
}

void func_720()//Position - 0xB696C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_291.f_0)
	{
		__LIB_14__.func_639(iVar0);
		iVar0++;
	}
}

void func_721()//Position - 0xB9F0E
{
	MISC::CLEAR_BIT(&Global_8136, 16);
}

int func_722()//Position - 0xB9FAB
{
	if (BitTest(Global_8136, 29))
	{
		return 1;
	}
	return 0;
}

void func_723(var uParam0)//Position - 0xBA035
{
	Global_22636 = uParam0;
	MISC::SET_BIT(&Global_8136, 16);
}

int func_724(struct<3> Param0, float fParam1, float fParam2)//Position - 0xBA29B
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

int func_725()//Position - 0xC151D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_197.f_67)
	{
		if (__LIB_14__.func_619(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_726()//Position - 0xC154B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_197.f_38)
	{
		if (__LIB_14__.func_619(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_727(int iParam0)//Position - 0xC7396
{
	if (__LIB_14__.func_615(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_728(int iParam0)//Position - 0xCCBA
{
	if (!__LIB_0__.func_114() && func_247(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_729(var uParam0, int iParam1)//Position - 0x23ACC
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

char* func_730()//Position - 0x24283
{
	return "anim@scripted@player@freemode@tun_prep_ig1_grab_low@male@";
}

int func_731()//Position - 0x2BDCD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((__LIB_0__.func_228((34837 + iVar0 * 4), -1) != 255 || __LIB_0__.func_228((34839 + iVar0 * 4), -1) != 255) || __LIB_0__.func_228((34838 + iVar0 * 4), -1) != 255)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_732(int iParam0)//Position - 0x8ED97
{
	if (Global_1965458)
	{
		switch (Global_1585857[iParam0 /*142*/].f_66)
		{
			case joaat("avenger"):
			case joaat("terbyte"):
				return 0;
				break;
			}
	}
	if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 276 && func_205(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	return 1;
}

int func_733()//Position - 0xD1604
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (__LIB_13__.func_865(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_734(int iParam0)//Position - 0x2258C
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1911933[iParam0 /*260*/].f_50, 0);
	}
	return 0;
}

int func_735(bool bParam0)//Position - 0x22876
{
	if (bParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318.f_5, 25);
	}
	return 0;
}

bool func_736(int iParam0, int iParam1)//Position - 0xD7E
{
	return __LIB_0__.func_287(&(Local_199.f_38.f_1[iParam0 /*21*/]), iParam1);
}

bool func_737(int iParam0)//Position - 0x138E
{
	return __LIB_0__.func_287(&(Local_199.f_16), iParam0);
}

var func_738(int iParam0)//Position - 0x29EF
{
	return Local_199.f_38.f_65[Local_199.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

bool func_739(int iParam0, int iParam1)//Position - 0x32B9
{
	return __LIB_0__.func_287(&(Local_199.f_127.f_1[iParam0 /*12*/]), iParam1);
}

bool func_740(int iParam0, int iParam1)//Position - 0x37A4
{
	return __LIB_0__.func_287(&(Local_199.f_109.f_1[iParam0 /*15*/]), iParam1);
}

int func_741(int iParam0, int iParam1)//Position - 0x3ED2
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

void func_742(int iParam0, int iParam1)//Position - 0x4118
{
	if (Local_199.f_109.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_199.f_109.f_1[iParam0 /*15*/].f_8, Local_199.f_109.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_199.f_109.f_1[iParam0 /*15*/].f_8, Local_199.f_109.f_1[iParam0 /*15*/].f_8);
	}
}

bool func_743(int iParam0, int iParam1)//Position - 0x21263
{
	return __LIB_0__.func_287(&(Local_199.f_19.f_5[iParam0 /*13*/]), iParam1);
}

char* func_744(var uParam0, int iParam1)//Position - 0x237DD
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

bool func_745(int iParam0)//Position - 0x23ADB
{
	return __LIB_0__.func_287(&uLocal_346, iParam0);
}

char* func_746()//Position - 0x23E06
{
	return "TAIL_PLANE_SCENE";
}

void func_747(int iParam0)//Position - 0x23E12
{
	if (__LIB_11__.func_631(&uLocal_346, iParam0))
	{
	}
}

void func_748(int iParam0)//Position - 0x24FB7
{
	if (__LIB_1__.func_101(&uLocal_346, iParam0))
	{
	}
}

char* func_749()//Position - 0x24FCB
{
	return "TAIL_PLANE_MIXGROUP";
}

int func_750()//Position - 0x28F35
{
	int iVar0;
	iVar0 = (iVar0 + __LIB_14__.func_583());
	return iVar0;
}

void func_751(int iParam0)//Position - 0x2F3A0
{
	int iVar0;
	switch (__LIB_14__.func_584())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iVar0, true);
			break;
	}
}

int func_752(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)//Position - 0x2F3C9
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (__LIB_14__.func_584())
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

Vector3 func_753(int iParam0, int iParam1)//Position - 0x2F432
{
	switch (__LIB_14__.func_584())
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

void func_754()//Position - 0xB8C67
{
	if (HUD::DOES_BLIP_EXIST(iLocal_362))
	{
		HUD::REMOVE_BLIP(&iLocal_362);
	}
}

int func_755(int iParam0)//Position - 0xBB5C0
{
	return Local_199.f_38.f_65[Local_199.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

Vector3 func_756(int iParam0)//Position - 0xC26E5
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

bool func_757()//Position - 0xCB87F
{
	return __LIB_14__.func_583() > 0;
}

int func_758(int iParam0)//Position - 0x1372
{
	return Local_575.f_22[iParam0 /*24*/].f_2;
}

void func_759(int iParam0, int iParam1)//Position - 0x1835
{
	if (__LIB_1__.func_101(&(Local_575.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_760(int iParam0, int iParam1)//Position - 0x1851
{
	return __LIB_9__.func_807(&(Local_575.f_22[iParam0 /*24*/].f_3), iParam1);
}

int func_761(int iParam0)//Position - 0x2F7A
{
	return Local_575.f_119[iParam0 /*8*/].f_1;
}

bool func_762(int iParam0, int iParam1)//Position - 0x33AF
{
	return __LIB_9__.func_807(&(Local_575.f_119[iParam0 /*8*/].f_2), iParam1);
}

bool func_763(int iParam0, int iParam1)//Position - 0x3737
{
	return __LIB_9__.func_807(&(Local_575.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_764(int iParam0)//Position - 0x3B2C
{
	return Local_575.f_22[iParam0 /*24*/].f_1;
}

void func_765(int iParam0, int iParam1)//Position - 0x4561
{
	if (__LIB_11__.func_631(&(Local_575.f_119[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_766(int iParam0, int iParam1)//Position - 0x457D
{
	if (__LIB_1__.func_101(&(Local_575.f_119[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_767(int iParam0)//Position - 0x539E
{
	return Local_575.f_2.f_13[iParam0];
}

void func_768(int iParam0, int iParam1)//Position - 0x213EF
{
	Local_575.f_119[iParam0 /*8*/].f_1 = iParam1;
}

int func_769(int iParam0)//Position - 0x2143F
{
	return Local_575.f_2.f_9[iParam0];
}

void func_770(int iParam0, int iParam1)//Position - 0x2179C
{
	if (__LIB_11__.func_631(&(Local_575.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_771(int iParam0)//Position - 0x21808
{
	return Local_575.f_2.f_9[iParam0] != -1;
}

void func_772(int iParam0, int iParam1)//Position - 0x2187B
{
	if (__LIB_1__.func_101(&(Local_575.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_773(int iParam0, bool bParam1, bool bParam2)//Position - 0x224E0
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_575.f_2[iParam0]), bParam1, bParam2);
}

char* func_774(var uParam0, int iParam1)//Position - 0x24A16
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

int func_775(int iParam0)//Position - 0x26150
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

void func_776(int iParam0)//Position - 0x2D970
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_575.f_2.f_15[iParam0]) && __LIB_6__.func_924(Local_575.f_2.f_15[iParam0]))
	{
		__LIB_4__.func_509(&(Local_575.f_2.f_15[iParam0]));
		__LIB_1__.func_162(&(Local_575.f_2.f_15[iParam0]));
	}
}

void func_777(int iParam0, int iParam1)//Position - 0xC3152
{
	if (__LIB_11__.func_631(&(Local_575.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

void func_778(int iParam0, int iParam1)//Position - 0xC8462
{
	if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
	{
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_COWER"), 1))
		{
			TASK::TASK_COWER(iParam1, -1);
		}
	}
}

void func_779(int iParam0, int iParam1)//Position - 0xC8491
{
	if (!__LIB_0__.func_583(iParam1, -251125078, 1))
	{
		if (__LIB_6__.func_924(Local_575.f_22[iParam0 /*24*/]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), 10000f, 999999, false, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 65536, true);
		}
	}
}

Vector3 func_780(int iParam0)//Position - 0xCA2A4
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

bool func_781(int iParam0)//Position - 0x1409
{
	return __LIB_0__.func_287(&(Local_195.f_16), iParam0);
}

bool func_782(int iParam0, int iParam1)//Position - 0x219B4
{
	return __LIB_0__.func_287(&(Local_195.f_19.f_5[iParam0 /*13*/]), iParam1);
}

char* func_783(int iParam0, int iParam1)//Position - 0x24BF0
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

int func_784(int iParam0)//Position - 0x260B9
{
	switch (iParam0)
	{
		case 0:
			return 5000;
		default:
	}
	return 0;
}

int func_785(var uParam0)//Position - 0x2610B
{
	return 67108864;
}

char* func_786(var uParam0)//Position - 0x288DB
{
	return "grab_low_facial";
}

void func_787(int iParam0)//Position - 0x293F0
{
	if (__LIB_1__.func_101(&uLocal_518, iParam0))
	{
	}
}

void func_788(int iParam0)//Position - 0x2A1C7
{
	if (__LIB_1__.func_101(&(Local_195.f_16), iParam0))
	{
	}
}

int func_789(int iParam0, int iParam1)//Position - 0xD573F
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_1__.func_346(iParam1) && func_3374(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_12;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_790(int iParam0, bool bParam1)//Position - 0xD5FD7
{
	if (bParam1)
	{
		return __LIB_0__.func_137(15384, -1);
	}
	return __LIB_0__.func_137(func_3386(iParam0), -1);
}

int func_791(int iParam0)//Position - 0xD6469
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

bool func_792()//Position - 0xD69F3
{
	return __LIB_0__.func_228(9359, -1) == 51;
}

float func_793(int iParam0)//Position - 0xD6CBA
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

int func_794(int iParam0)//Position - 0xD6FFA
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

int func_795(int iParam0)//Position - 0xD72C5
{
	switch (iParam0)
	{
		case 5:
			return 34739;
			break;
	}
	return 0;
}

int func_796(int iParam0)//Position - 0xD72E5
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

void func_797(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xD737E
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

int func_798(int iParam0)//Position - 0xD7404
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

char* func_799(int iParam0)//Position - 0xD7612
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

int func_800(int iParam0)//Position - 0x2BC8
{
	if (__LIB_14__.func_694(35))
	{
		return (iParam0 % 2) == 0;
	}
	return 0;
}

bool func_801()//Position - 0x22950
{
	return __LIB_14__.func_694(0);
}

char* func_802(int iParam0, int iParam1)//Position - 0x27503
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

void func_803(var uParam0, int iParam1)//Position - 0x2975D
{
	TASK::CLEAR_PED_TASKS(iParam1);
}

void func_804(var uParam0)//Position - 0x2A187
{
	if (uParam0->f_1 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_1);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

char* func_805()//Position - 0x2A1E2
{
	return "DLC_IE_Steal_EITS_Sounds";
}

void func_806(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)//Position - 0x2A644
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

float func_807(int iParam0)//Position - 0x2A798
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

int func_808(var uParam0)//Position - 0x2A86E
{
	if (!__LIB_0__.func_649(&(uParam0->f_35)))
	{
		__LIB_0__.func_580(&(uParam0->f_35), 0, 0);
	}
	else if (__LIB_1__.func_295(&(uParam0->f_35), 0, 0) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_809(float fParam0, float fParam1, float fParam2)//Position - 0x2A9BE
{
	if (fParam0 <= fParam2 && fParam1 <= fParam2)
	{
		return 1;
	}
	return 0;
}

float func_810(float fParam0, float fParam1, var uParam2, var uParam3)//Position - 0x2A9DD
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

void func_811(int iParam0)//Position - 0x2C245
{
	if (__LIB_1__.func_101(&(Local_197.f_16), iParam0))
	{
	}
}

void func_812(var uParam0)//Position - 0x87FE9
{
	Global_1944685.f_30 = uParam0;
}

int func_813()//Position - 0x8AAB8
{
	return 60000;
}

int func_814(int iParam0)//Position - 0x8C76E
{
	switch (iParam0)
	{
		case 3:
			return 0;
		default:
	}
	return 1;
}

char* func_815(var uParam0)//Position - 0x8E5BD
{
	return "DLC_H4_Island_Security_Cameras_Sounds";
}

int func_816(var uParam0)//Position - 0x99E2F
{
	return 3000;
}

char* func_817(int iParam0)//Position - 0x99ECD
{
	switch (iParam0)
	{
		case 1:
			return "DOOR_OPEN_SUCCEED_STAND_SAFE";
		default:
	}
	return "";
}

char* func_818(int iParam0)//Position - 0x9A139
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

char* func_819(var uParam0)//Position - 0x9B827
{
	return "GB_P2P_DEST" /* GXT: Destination */;
}

int func_820(int iParam0)//Position - 0x9D6D6
{
	switch (iParam0)
	{
		case 0:
			return 2;
		default:
	}
	return 1;
}

int func_821(int iParam0)//Position - 0x9D803
{
	switch (iParam0)
	{
		case 4:
			return 0;
		default:
	}
	return 1;
}

float func_822()//Position - 0x9D9BA
{
	return 400f;
}

int func_823()//Position - 0xC2DF5
{
	return __LIB_13__.func_801();
}

int func_824(var uParam0)//Position - 0x104F7A
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

int func_825(int iParam0, int iParam1, int iParam2)//Position - 0x114AA9
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			return 0;
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), -1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_A_PLAYER(iVar0))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && PED::IS_PED_A_PLAYER(iParam2))
	{
		return 0;
	}
	if (__LIB_11__.func_69(ENTITY::GET_ENTITY_MODEL(iParam0)) && ENTITY::GET_ENTITY_POPULATION_TYPE(iParam0) != 7)
	{
		return 1;
	}
	if (__LIB_10__.func_952(iParam1))
	{
		return 1;
	}
	if (__LIB_10__.func_952(iParam2))
	{
		return 1;
	}
	return 0;
}

void func_826(int iParam0)//Position - 0x3CF
{
	if (!bLocal_319)
	{
		return;
	}
	Local_360.f_82 = iParam0;
}

void func_827(int iParam0)//Position - 0x740
{
	if (!bLocal_319)
	{
		return;
	}
	Local_360.f_85 = iParam0;
}

int func_828()//Position - 0x759
{
	return Local_360.f_85;
}

void func_829(int iParam0, int iParam1)//Position - 0xFAD
{
	if (!bLocal_319)
	{
		return;
	}
	Local_360.f_22[iParam0 /*24*/].f_2 = iParam1;
}

int func_830(int iParam0)//Position - 0xFCC
{
	return Local_360.f_22[iParam0 /*24*/].f_2;
}

bool func_831(var uParam0)//Position - 0x139C
{
	return BitTest(Local_360.f_62, uParam0);
}

void func_832(int iParam0, int iParam1)//Position - 0x1489
{
	if (__LIB_1__.func_101(&(Local_360.f_22[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

bool func_833(int iParam0, int iParam1)//Position - 0x14A5
{
	return __LIB_0__.func_287(&(Local_360.f_22[iParam0 /*24*/].f_3), iParam1);
}

void func_834()//Position - 0x1C00
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

int func_835()//Position - 0x2627
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

int func_836()//Position - 0x265E
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

int func_837(int iParam0)//Position - 0x2693
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

int func_838()//Position - 0x26F5
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

void func_839(int iParam0, var uParam1)//Position - 0x2A7A
{
	if (Local_360.f_99 == -1)
	{
		Local_360.f_84 = iParam0;
		Local_360.f_99 = uParam1;
	}
}

int func_840(int iParam0)//Position - 0x2B07
{
	return Local_360.f_47[iParam0 /*8*/].f_1;
}

int func_841(int iParam0, int iParam1)//Position - 0x2B1A
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

void func_842(int iParam0, int iParam1)//Position - 0x2C1D
{
	if (!bLocal_319)
	{
		return;
	}
	Local_360.f_22[iParam0 /*24*/].f_1 = iParam1;
}

int func_843(int iParam0)//Position - 0x2C7D
{
	return Local_360.f_22[iParam0 /*24*/].f_1;
}

int func_844(int iParam0)//Position - 0x328E
{
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_321))
	{
		return 0;
	}
	return 1;
}

void func_845(int iParam0, int iParam1)//Position - 0x3319
{
	if (__LIB_1__.func_101(&(Local_360.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_846(int iParam0, int iParam1)//Position - 0x334E
{
	return __LIB_0__.func_287(&(Local_360.f_56[iParam0 /*5*/].f_2), iParam1);
}

void func_847(int iParam0, int iParam1)//Position - 0x338A
{
	Local_360.f_56[iParam0 /*5*/].f_1 = iParam1;
}

int func_848(int iParam0)//Position - 0x339F
{
	return Local_360.f_56[iParam0 /*5*/].f_1;
}

void func_849(int iParam0, int iParam1)//Position - 0x361D
{
	if (__LIB_1__.func_101(&(Local_360.f_47[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

bool func_850(int iParam0, int iParam1)//Position - 0x3682
{
	return __LIB_0__.func_287(&(Local_360.f_47[iParam0 /*8*/].f_2), iParam1);
}

void func_851(int iParam0, int iParam1)//Position - 0x36F1
{
	struct<3> Var0;
	float fVar1;
	if (iParam0 != Local_197.f_67.f_17)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar1 = 500f;
	if (__LIB_0__.func_86(Local_360.f_118))
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

int func_852(int iParam0, int iParam1)//Position - 0x378F
{
	Stack.Push(Local_214.f_352.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_214.f_352.f_52);
	if (StackVal && StackVal)
	{
		__LIB_1__.func_162(&(Local_360.f_47[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_853(int iParam0)//Position - 0x3EF5
{
	return Local_360.f_2.f_13[iParam0];
}

int func_854(int iParam0)//Position - 0x3F08
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__.func_801())
	{
		if (Local_360.f_2.f_9[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_855(var uParam0)//Position - 0x1285F
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

bool func_856(int iParam0, int iParam1)//Position - 0x1FF7F
{
	return __LIB_0__.func_287(&(Local_367[iParam0 /*35*/].f_1), iParam1);
}

void func_857(int iParam0, int iParam1)//Position - 0x1FFFB
{
	Local_360.f_47[iParam0 /*8*/].f_1 = iParam1;
}

int func_858(int iParam0)//Position - 0x20050
{
	return Local_360.f_2.f_9[iParam0];
}

bool func_859(int iParam0, int iParam1)//Position - 0x20317
{
	return __LIB_0__.func_287(&(Local_360.f_2.f_5[iParam0 /*3*/]), iParam1);
}

void func_860(int iParam0, int iParam1)//Position - 0x203C6
{
	if (__LIB_11__.func_631(&(Local_360.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_861(int iParam0)//Position - 0x20432
{
	return Local_360.f_2.f_9[iParam0] != -1;
}

void func_862(int iParam0, int iParam1)//Position - 0x204A5
{
	if (__LIB_1__.func_101(&(Local_360.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_863(int iParam0)//Position - 0x20EB2
{
	return iLocal_321;
}

void func_864(int iParam0, bool bParam1, bool bParam2)//Position - 0x21100
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_360.f_2[iParam0]), bParam1, bParam2);
}

int func_865(int iParam0)//Position - 0x2116A
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

int func_866()//Position - 0x213A3
{
	return Local_360.f_82;
}

void func_867(int iParam0)//Position - 0x213B0
{
	Local_360.f_81 = iParam0;
}

void func_868()//Position - 0x2148B
{
	if (Local_360.f_98 == -1)
	{
		Local_360.f_98 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_869()//Position - 0x21529
{
	Local_360.f_83 = 2;
}

void func_870(int iParam0)//Position - 0x21745
{
	if (__LIB_1__.func_101(&uLocal_334, iParam0))
	{
	}
}

char* func_871(var uParam0)//Position - 0x21AA6
{
	return "CBV_BLP_VEH" /* GXT: Exotic Exports Vehicle */;
}

void func_872(int iParam0)//Position - 0x21ED1
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("VehicleList", 2))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "VehicleList", true);
	}
}

int func_873(int iParam0, var uParam1)//Position - 0x21F0B
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

int func_874(int iParam0)//Position - 0x26943
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

void func_875(int iParam0, int iParam1)//Position - 0x26B2A
{
	Local_218[iParam0 /*20*/] = iParam1;
	iLocal_332++;
}

void func_876(int iParam0, int iParam1, int iParam2)//Position - 0x26BB7
{
	Local_219[iParam0 /*21*/] = iParam1;
	Local_219[iParam0 /*21*/].f_20 = iParam2;
	iLocal_333++;
}

bool func_877(int iParam0)//Position - 0x26C4C
{
	return __LIB_0__.func_287(&uLocal_334, iParam0);
}

void func_878(int iParam0)//Position - 0x26E41
{
	if (__LIB_1__.func_101(&(Local_367[iLocal_324 /*35*/].f_1), iParam0))
	{
	}
}

int func_879()//Position - 0x2D2BC
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

void func_880(int iParam0)//Position - 0x2D379
{
	if (__LIB_11__.func_631(&uLocal_334, iParam0))
	{
	}
}

int func_881()//Position - 0x2D468
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__.func_801())
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

bool func_882(int iParam0, int iParam1, int iParam2)//Position - 0x2D537
{
	return __LIB_0__.func_287(&(Local_367[iParam1 /*35*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_883(int iParam0)//Position - 0x2D6CE
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_2.f_15[iParam0]) && __LIB_6__.func_924(Local_360.f_2.f_15[iParam0]))
	{
		__LIB_4__.func_509(&(Local_360.f_2.f_15[iParam0]));
		__LIB_1__.func_162(&(Local_360.f_2.f_15[iParam0]));
	}
}

void func_884(int iParam0, int iParam1)//Position - 0x2F0B0
{
	if (__LIB_1__.func_101(&(Local_367[iLocal_324 /*35*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_885()//Position - 0x2F33E
{
	return Local_367[iLocal_324 /*35*/];
}

void func_886(int iParam0, int iParam1)//Position - 0x2FD2E
{
	if (__LIB_11__.func_631(&(Local_367[iLocal_324 /*35*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

bool func_887()//Position - 0x30D20
{
	return Local_315.f_0 != -1;
}

void func_888(int iParam0)//Position - 0xA5999
{
	if (__LIB_11__.func_631(&(Local_315.f_7), iParam0))
	{
	}
}

int func_889()//Position - 0xA59D4
{
	return Local_315.f_1;
}

void func_890(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA5A31
{
	if (iParam0 != __LIB_0__.func_160() && __LIB_1__.func_264(iParam0, 1, 1))
	{
		__LIB_13__.func_330(Local_331.f_0, __LIB_0__.func_679(iParam0), iParam1, iParam2, iParam3);
	}
}

void func_891(int iParam0)//Position - 0xA5A63
{
	if (__LIB_1__.func_101(&(Local_315.f_7), iParam0))
	{
	}
}

int func_892(struct<3> Param0)//Position - 0xA5AF9
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

bool func_893()//Position - 0xA5BDF
{
	return AUDIO::HAS_SOUND_FINISHED(Local_315.f_2);
}

bool func_894(int iParam0)//Position - 0xA5CEB
{
	return __LIB_0__.func_287(&(Local_315.f_7), iParam0);
}

void func_895(int iParam0)//Position - 0xA5DCD
{
	if (__LIB_11__.func_631(&(Local_367[iLocal_324 /*35*/].f_1), iParam0))
	{
	}
}

int func_896()//Position - 0xA5E57
{
	return Local_315.f_0;
}

char* func_897(int iParam0)//Position - 0xA60EE
{
	if (Local_214.f_474.f_18.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_474.f_18.f_13);
		return StackVal;
	}
	if (__LIB_14__.func_644(iParam0, 0))
	{
		return "ILH_BLP_EXIT" /* GXT: Exit */;
	}
	return "ILH_BLP_ENTR" /* GXT: Entrance */;
}

void func_898(int iParam0)//Position - 0xA66D6
{
	Local_367[iLocal_324 /*35*/] = iParam0;
}

void func_899()//Position - 0xA67B1
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

void func_900()//Position - 0xA69A8
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

float func_901()//Position - 0xB0853
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

bool func_902(float fParam0)//Position - 0xB2EA2
{
	struct<3> Var0;
	Call_Loc(Local_214.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__.func_86(Var0))
	{
		return 0;
	}
	return SYSTEM::VDIST2(Local_326, Var0) <= (fParam0 * fParam0);
}

int func_903(bool bParam0)//Position - 0xB2EE3
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
			iVar3 = __LIB_0__.func_201(iVar0, (iVar2 - 1), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_A_PLAYER(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
				if (__LIB_0__.func_114(iVar4))
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

int func_904()//Position - 0xB7273
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
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__.func_364(iVar0)))
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

int func_905()//Position - 0xB738F
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

void func_906()//Position - 0xB8C08
{
	if (HUD::DOES_BLIP_EXIST(iLocal_358))
	{
		HUD::REMOVE_BLIP(&iLocal_358);
	}
}

int func_907()//Position - 0xB95D3
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

float func_908()//Position - 0xBA327
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_323, false))
	{
		return 1.5f;
	}
	return 0.5f;
}

int func_909()//Position - 0xBA430
{
	return Local_367[iLocal_324 /*35*/].f_14;
}

void func_910(int iParam0, int iParam1)//Position - 0xBAB5A
{
	if ((ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iParam1) && !NETWORK::NETWORK_IS_ENTITY_FADING(iParam1)) && __LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
	{
		if (__LIB_14__.func_393(iParam0, 13))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1);
			PED::SET_PED_KEEP_TASK(iParam1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, true, true);
	}
}

void func_911(int iParam0, int iParam1)//Position - 0xBAD22
{
	if (__LIB_11__.func_631(&(Local_367[iLocal_325 /*35*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_912(int iParam0, int iParam1)//Position - 0xBAD41
{
	if (__LIB_1__.func_101(&(Local_367[iLocal_325 /*35*/].f_7[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_913(int iParam0, float fParam1, bool bParam2)//Position - 0xBAD89
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

bool func_914(int iParam0, int iParam1, int iParam2)//Position - 0xBAE22
{
	return __LIB_0__.func_287(&(Local_367[iParam1 /*35*/].f_7[iParam0 /*2*/]), iParam2);
}

int func_915(int iParam0, float fParam1)//Position - 0xBAF26
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

bool func_916()//Position - 0xBB070
{
	int iVar0;
	return ((WEAPON::GET_CURRENT_PED_WEAPON(iLocal_323, &iVar0, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT"));
}

bool func_917()//Position - 0xBC2B4
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() > Local_360.f_98 + 2;
}

void func_918(int iParam0, int iParam1)//Position - 0xBC57D
{
	if (__LIB_1__.func_101(&(Local_367[iLocal_325 /*35*/].f_10[iParam0 /*2*/]), iParam1))
	{
	}
}

bool func_919(int iParam0, int iParam1, int iParam2)//Position - 0xBC5D8
{
	return __LIB_0__.func_287(&(Local_367[iParam1 /*35*/].f_10[iParam0 /*2*/]), iParam2);
}

void func_920(int iParam0, int iParam1)//Position - 0xBC6A5
{
	if (__LIB_11__.func_631(&(Local_367[iLocal_325 /*35*/].f_10[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_921(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0xBC6C4
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

void func_922(int iParam0, int iParam1)//Position - 0xBD288
{
	if (__LIB_14__.func_402(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 1);
	}
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam1, iLocal_321, false);
	if (!__LIB_0__.func_114())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	if (!__LIB_14__.func_402(iParam0, 6))
	{
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, false);
	}
}

void func_923(int iParam0, int iParam1)//Position - 0xBD4A1
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

void func_924(int iParam0, int iParam1)//Position - 0xBD95D
{
	if (__LIB_11__.func_631(&(Local_367[iLocal_325 /*35*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

bool func_925(int iParam0, int iParam1, int iParam2)//Position - 0xBDE2F
{
	return __LIB_0__.func_287(&(Local_367[iParam1 /*35*/].f_19[iParam0 /*2*/]), iParam2);
}

void func_926(int iParam0, int iParam1)//Position - 0xBDE4A
{
	if (__LIB_1__.func_101(&(Local_367[iLocal_325 /*35*/].f_19[iParam0 /*2*/]), iParam1))
	{
	}
}

int func_927(int iParam0)//Position - 0xBE1A1
{
	return __LIB_14__.func_26(iParam0, Local_331.f_1);
}

int func_928(int iParam0)//Position - 0xBE9A9
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

void func_929(struct<13> Param0, int iParam1, int iParam2)//Position - 0xBEBB7
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
						if (__LIB_14__.func_397(15))
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
							{
								if (__LIB_0__.func_114(iVar0))
								{
									__LIB_0__.func_371();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_930(int iParam0)//Position - 0xBF154
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

void func_931(int iParam0, var uParam1)//Position - 0xBFC66
{
	if (__LIB_11__.func_631(&(Local_360.f_22[iParam0 /*24*/].f_3), uParam1))
	{
	}
}

bool func_932(int iParam0, int iParam1)//Position - 0xBFD38
{
	return __LIB_2__.func_319(&(Local_367[iParam0 /*35*/].f_24), iParam1);
}

var func_933(int iParam0)//Position - 0xC03B3
{
	return Local_367[iParam0 /*35*/];
}

int func_934(int iParam0, bool bParam1, bool bParam2)//Position - 0xC0581
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

void func_935(int iParam0)//Position - 0xC0638
{
	if (__LIB_11__.func_631(&(Local_360.f_88), iParam0))
	{
	}
}

void func_936(int iParam0)//Position - 0xC064E
{
	Local_367[iLocal_324 /*35*/].f_22 = iParam0;
}

void func_937()//Position - 0xC06CF
{
	Global_1943929.f_2 = Local_360.f_90;
	Global_1943929.f_3 = Local_360.f_91;
}

void func_938()//Position - 0xC06ED
{
	int iVar0;
	int iVar1;
	var uVar2;
	uVar2 = uVar2;
	__LIB_13__.func_339(iLocal_332, 5, "iNumModeStates", "MAX_NUM_STATES");
	__LIB_13__.func_339(iLocal_333, 7, "iNumClientModeStates", "MAX_NUM_CLIENT_STATES");
	iVar0 = 0;
	while (iVar0 < iLocal_332)
	{
		__LIB_13__.func_339(Local_218[iVar0 /*20*/].f_19, 5, "sModeStates[iLoop].iNumTransitions", "MAX_NUM_TRANSITIONS");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_333)
	{
		__LIB_13__.func_339(Local_219[iVar0 /*21*/].f_19, 5, "sClientModeStates[iLoop].iNumTransitions", "MAX_NUM_TRANSITIONS");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_13__.func_339(Local_220.f_23[iVar0 /*67*/], 5, "sPedLocal.sBehaviour[iLoop].iNumTasks", "MAX_NUM_PED_TASKS");
		iVar1 = 0;
		while (iVar1 < Local_220.f_23[iVar0 /*67*/])
		{
			__LIB_13__.func_339(Local_220.f_23[iVar0 /*67*/].f_1[iVar1 /*13*/].f_12, 3, "sPedLocal.sBehaviour[iLoop].Task[iLoop2].iNumTransitions", "MAX_NUM_PED_TASK_TRANSITIONS");
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_197.f_38)
	{
		__LIB_13__.func_339(Local_220[iVar0 /*19*/].f_16, 5, "sPedLocal.sPed[iLoop].iNumTriggers", "MAX_NUM_PED_TRIGGERS");
		iVar0++;
	}
}

void func_939(bool bParam0)//Position - 0xC0924
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__.func_801())
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

int func_940(int iParam0, int iParam1)//Position - 0xC1540
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

void func_941(int iParam0, int iParam1, bool bParam2)//Position - 0xC1F06
{
	int iVar0;
	if (!((__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_WANDER_STANDARD"), 1) || __LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_WANDER_IN_AREA"), 1)) || __LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_WANDER_SPECIFIC"), 1)))
	{
		if (__LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
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
					Stack.Push((StackVal && !__LIB_0__.func_86(StackVal, StackVal, StackVal)));
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

Vector3 func_942(int iParam0, int iParam1)//Position - 0xC23BC
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

void func_943(var uParam0, int iParam1)//Position - 0xC24ED
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
	iVar1 = __LIB_4__.func_511(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

int func_944(int iParam0)//Position - 0xC25ED
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

int func_945(int iParam0, var uParam1)//Position - 0xC2C22
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

Vector3 func_946(int iParam0)//Position - 0xC2D3A
{
	if (Local_214.f_156.f_2.f_72 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_214.f_156.f_2.f_72);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_360.f_22[iParam0 /*24*/]), false);
}

Vector3 func_947(int iParam0, int iParam1)//Position - 0xC3953
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

int func_948(int iParam0)//Position - 0xC41C6
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

void func_949(int iParam0, int iParam1)//Position - 0xC423E
{
	int iVar0;
	if (Local_214.f_156.f_2.f_23 != 0)
	{
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_214.f_156.f_2.f_23);
			iVar0 = StackVal;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(iVar0), false))
			{
				if (__LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
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

void func_950(int iParam0, int iParam1)//Position - 0xC42B6
{
	int iVar0;
	if (Local_214.f_156.f_2.f_22 != 0)
	{
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY"), 1))
		{
			Stack.Push(iParam0);
			Call_Loc(Local_214.f_156.f_2.f_22);
			iVar0 = StackVal;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (__LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, true);
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam1, iVar0, -1, false);
				}
			}
		}
	}
}

void func_951(int iParam0, int iParam1)//Position - 0xC4322
{
	if (Local_214.f_156.f_2.f_21 != 0)
	{
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_AIM_GUN_AT_COORD"), 1))
		{
			if (__LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
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

void func_952(int iParam0, int iParam1)//Position - 0xC43D6
{
	char* sVar0;
	char* sVar1;
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_2.f_15);
	sVar0 = StackVal;
	Stack.Push(iParam0);
	Call_Loc(Local_214.f_156.f_2.f_15.f_1);
	sVar1 = StackVal;
	if ((!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_PLAY_ANIM"), 1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar0)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, sVar0, sVar1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (__LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
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

void func_953(int iParam0, int iParam1)//Position - 0xC447C
{
	if (__LIB_14__.func_462(iParam0, 0))
	{
		if (__LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
		{
			if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_VEHICLE_PARK"), 1))
			{
				TASK::TASK_VEHICLE_PARK(iParam1, PED::GET_VEHICLE_PED_IS_IN(iParam1, false), ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 1, 10f, false);
			}
		}
	}
}

void func_954(int iParam0, int iParam1)//Position - 0xC471D
{
	if (__LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
	{
		if (!__LIB_0__.func_583(iParam1, joaat("SCRIPT_TASK_COWER"), 1))
		{
			TASK::TASK_COWER(iParam1, -1);
		}
	}
}

void func_955(int iParam0, int iParam1)//Position - 0xC474C
{
	if (!__LIB_0__.func_583(iParam1, -251125078, 1))
	{
		if (__LIB_6__.func_924(Local_360.f_22[iParam0 /*24*/]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), 10000f, 999999, false, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 65536, true);
		}
	}
}

void func_956()//Position - 0xC51F5
{
	if (Local_360.f_101 + 1 < 1)
	{
		Local_360.f_101++;
	}
}

void func_957()//Position - 0xC5214
{
	Local_360.f_68.f_2++;
	__LIB_0__.func_579(&(Local_360.f_68));
}

int func_958()//Position - 0xC53F0
{
	return Local_360.f_81;
}

int func_959()//Position - 0xC53FD
{
	return Local_367[iLocal_324 /*35*/].f_22;
}

int func_960()//Position - 0xC59B8
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

bool func_961(var uParam0, struct<3> Param1)//Position - 0xC5B7E
{
	return ENTITY::IS_ENTITY_AT_COORD(iLocal_323, Param1, 1f, 1f, 2f, false, true, 0);
}

Vector3 func_962(int iParam0)//Position - 0xC5DB6
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

void func_963()//Position - 0xC6C26
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_13__.func_801())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_2[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_360.f_2[iVar0]))
			{
				__LIB_4__.func_509(&(Local_360.f_2[iVar0]));
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_360.f_2.f_15[iVar0]))
		{
			if (__LIB_6__.func_924(Local_360.f_2.f_15[iVar0]))
			{
				__LIB_4__.func_509(&(Local_360.f_2.f_15[iVar0]));
			}
			__LIB_1__.func_162(&(Local_360.f_2.f_15[iVar0]));
		}
		iVar0++;
	}
}

void func_964()//Position - 0xC6D55
{
	Stack.Push(iLocal_323);
	Call_Loc(Local_214.f_15.f_18.f_2);
	WEAPON::REMOVE_WEAPON_FROM_PED(StackVal, StackVal);
}

void func_965(int iParam0, int iParam1)//Position - 0xCB456
{
	Local_331.f_0 = iParam0;
	Local_331.f_1 = iParam1;
}

void func_966()//Position - 0xCC393
{
	int iVar0;
	iLocal_327 = iVar0;
	iLocal_328 = 0;
}

int func_967(int iParam0)//Position - 0xEC96
{
	if (!__LIB_0__.func_114() && func_318(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_968()//Position - 0x24ADC
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

char* func_969(int iParam0, int iParam1)//Position - 0x2764D
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

int func_970(var uParam0)//Position - 0x2D8DA
{
	return 40000;
}

void func_971(var uParam0, int iParam1)//Position - 0x31210
{
	PED::SET_PED_HEARING_RANGE(iParam1, 200f);
	PED::SET_PED_SEEING_RANGE(iParam1, 200f);
}

int func_972(int iParam0)//Position - 0x315F5
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

char* func_973(int iParam0)//Position - 0x32DAE
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

char* func_974(int iParam0)//Position - 0x5A0CD
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

int func_975(int iParam0)//Position - 0x5A62B
{
	switch (iParam0)
	{
		case 0:
			return 9;
			break;
	}
	return 5;
}

int func_976(int iParam0)//Position - 0x91FD8
{
	if ((iParam0 % 2) == 0)
	{
		return 1;
	}
	return 0;
}

void func_977(bool bParam0)//Position - 0x920FD
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

int func_978(char* sParam0)//Position - 0x93C3F
{
	return MISC::GET_HASH_KEY(sParam0);
}

int func_979(int iParam0)//Position - 0x9429F
{
	switch (iParam0)
	{
		case 0:
			return 32;
		default:
	}
	return -1;
}

char* func_980(var uParam0)//Position - 0x95AFB
{
	return "Alarm_Loop_01";
}

bool func_981(var uParam0, int iParam1)//Position - 0x96B6F
{
	return !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false);
}

int func_982(int iParam0)//Position - 0x97676
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

char* func_983()//Position - 0xA5C46
{
	return "FXR_BM_OVER" /* GXT: MISSION OVER */;
}

char* func_984()//Position - 0xA72E2
{
	return "FXR_BM_PASS" /* GXT: MISSION PASSED */;
}

int func_985(int iParam0)//Position - 0xBD083
{
	if (Global_1965458)
	{
		switch (Global_1585857[iParam0 /*142*/].f_66)
		{
			case joaat("avenger"):
			case joaat("terbyte"):
				return 0;
				break;
			}
	}
	if (__LIB_0__.func_396(PLAYER::PLAYER_ID()) == 276 && func_276(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	return 1;
}

int func_986(struct<3> Param0)//Position - 0xCB0E2
{
	if (__LIB_1__.func_82(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0) || !func_97(Param0, 3f, 1f, 1f, 5f, 0, 0, 0, 0f, 1, -1, 0, 0f, 1, 0f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_987()//Position - 0xD7EA1
{
	return joaat("apa_mp_apa_yacht_radar_01a");
}

int func_988()//Position - 0xD7ED5
{
	return joaat("prop_golf_ball");
}

int func_989(int iParam0, bool bParam1)//Position - 0xD7EE2
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

int func_990(int iParam0, int iParam1)//Position - 0xD833D
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

int func_991(int iParam0, int iParam1)//Position - 0xD83F3
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

int func_992()//Position - 0xD8631
{
	return joaat("apa_mp_apa_yacht_jacuzzi_ripple1");
}

int func_993(int iParam0, int iParam1)//Position - 0xD867B
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

int func_994(int iParam0, int iParam1)//Position - 0xD87A6
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

void func_995(int* iParam0)//Position - 0xD883D
{
	OBJECT::DELETE_OBJECT(iParam0);
	*iParam0 = 0;
}

int func_996(var uParam0)//Position - 0xD896A
{
	if (uParam0->f_2.f_3 == 0)
	{
		return joaat("apa_mp_apa_yacht_door");
	}
	return joaat("apa_mp_apa_yacht_door2");
}

void func_997(var uParam0, char* sParam1, int iParam2)//Position - 0xD90B8
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

void func_998(int iParam0)//Position - 0xD9AB5
{
	if (!ENTITY::IS_ENTITY_ATTACHED(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	}
	ENTITY::SET_ENTITY_DYNAMIC(iParam0, false);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, true, false);
	INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0);
}

Vector3 func_999(int iParam0)//Position - 0xD9C03
{
	return Global_4280768[iParam0 /*45*/].f_8;
}
