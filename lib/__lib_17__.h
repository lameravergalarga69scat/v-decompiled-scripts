int func_0(var uParam0, int iParam1)//Position - 0x23B5E1
{
	struct<15> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 40)
	{
		if (*uParam0 < 315)
		{
			Var0 = { __LIB_13__.func_134(*uParam0, iParam1) };
			if (Var0.f_1 == 99 || Var0.f_1 == iParam1)
			{
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_0))
				{
					return 0;
				}
			}
		}
		*uParam0++;
		iVar1++;
	}
	if (*uParam0 < 315)
	{
		return 0;
	}
	return 1;
}

int func_1(var uParam0, var uParam1, int iParam2)//Position - 0x23C02A
{
	int iVar0;
	*iParam2 = -1;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_78574 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1[iVar0], false))
			{
				if (__LIB_16__.func_338(uParam0, uParam1->f_1[iVar0]))
				{
					*iParam2 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_2(var uParam0, var uParam1, int iParam2)//Position - 0x23C5D3
{
	int iVar0;
	*iParam2 = -1;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_36355 - 1))
	{
		if (__LIB_16__.func_339(uParam0, Global_4980736.f_36356[iVar0 /*134*/], 1.5f))
		{
			*iParam2 = iVar0;
			return 1;
		}
		else if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			if (__LIB_16__.func_338(uParam0, (*uParam1)[iVar0]))
			{
				*iParam2 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_3(var uParam0, var uParam1, int iParam2)//Position - 0x23C71D
{
	int iVar0;
	*iParam2 = -1;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_63310 - 1))
	{
		if (__LIB_16__.func_339(uParam0, Global_4980736.f_63312[iVar0 /*183*/], 1.5f))
		{
			*iParam2 = iVar0;
			return 1;
		}
		else if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			if (__LIB_16__.func_338(uParam0, (*uParam1)[iVar0]))
			{
				*iParam2 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_4(int* iParam0)//Position - 0x248477
{
	PED::ADD_RELATIONSHIP_GROUP("sRGH.rghLike", &(iParam0->f_1));
	PED::ADD_RELATIONSHIP_GROUP("sRGH.rghPlayer", iParam0);
	PED::ADD_RELATIONSHIP_GROUP("sRGH.rghHate", &(iParam0->f_3));
	PED::ADD_RELATIONSHIP_GROUP("sRGH.rghIgnore", &(iParam0->f_2));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, iParam0->f_1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iParam0->f_1, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iParam0->f_2, iParam0->f_1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iParam0->f_2, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iParam0->f_2, iParam0->f_3);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iParam0->f_1, iParam0->f_2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iParam0->f_3, iParam0->f_2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, *iParam0, iParam0->f_2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iParam0->f_3, iParam0->f_1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iParam0->f_1, iParam0->f_3);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, *iParam0, iParam0->f_3);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iParam0->f_3, *iParam0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), *iParam0);
}

void func_5(var uParam0)//Position - 0x249AFD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_16__.func_371(&(uParam0->f_1994[iVar0 /*51*/]), &(uParam0->f_1984[0]));
		iVar0++;
	}
	__LIB_16__.func_302(joaat("S_M_M_FIBSec_01"), &(uParam0->f_1994[0 /*51*/]), &(uParam0->f_1984[0]));
	__LIB_16__.func_302(joaat("S_M_Y_Marine_03"), &(uParam0->f_1994[0 /*51*/]), &(uParam0->f_1984[0]));
	__LIB_16__.func_302(joaat("S_M_Y_BlackOps_01"), &(uParam0->f_1994[0 /*51*/]), &(uParam0->f_1984[0]));
	__LIB_16__.func_302(joaat("S_M_Y_BlackOps_02"), &(uParam0->f_1994[0 /*51*/]), &(uParam0->f_1984[0]));
	__LIB_16__.func_302(joaat("S_M_Y_BlackOps_03"), &(uParam0->f_1994[0 /*51*/]), &(uParam0->f_1984[0]));
	__LIB_16__.func_302(joaat("S_M_M_ChemSec_01"), &(uParam0->f_1994[0 /*51*/]), &(uParam0->f_1984[0]));
	__LIB_16__.func_302(joaat("S_M_Y_Swat_01"), &(uParam0->f_1994[0 /*51*/]), &(uParam0->f_1984[0]));
	__LIB_16__.func_302(joaat("S_M_Y_Ranger_01"), &(uParam0->f_1994[0 /*51*/]), &(uParam0->f_1984[0]));
	__LIB_16__.func_302(joaat("G_M_Y_Azteca_01"), &(uParam0->f_1994[1 /*51*/]), &(uParam0->f_1984[1]));
	__LIB_16__.func_302(joaat("G_M_Y_BallaOrig_01"), &(uParam0->f_1994[1 /*51*/]), &(uParam0->f_1984[1]));
	__LIB_16__.func_302(joaat("G_M_Y_BallaEast_01"), &(uParam0->f_1994[1 /*51*/]), &(uParam0->f_1984[1]));
	__LIB_16__.func_302(joaat("G_M_Y_BallaSout_01"), &(uParam0->f_1994[1 /*51*/]), &(uParam0->f_1984[1]));
	__LIB_16__.func_302(joaat("G_M_Y_Lost_01"), &(uParam0->f_1994[1 /*51*/]), &(uParam0->f_1984[1]));
	__LIB_16__.func_302(joaat("G_F_Y_Lost_01"), &(uParam0->f_1994[1 /*51*/]), &(uParam0->f_1984[1]));
	__LIB_16__.func_302(joaat("G_M_Y_Lost_02"), &(uParam0->f_1994[1 /*51*/]), &(uParam0->f_1984[1]));
	__LIB_16__.func_302(joaat("G_M_Y_Lost_03"), &(uParam0->f_1994[1 /*51*/]), &(uParam0->f_1984[1]));
	__LIB_16__.func_302(joaat("HC_Gunman"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
	__LIB_16__.func_302(joaat("MP_M_AvonGoon"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
	__LIB_16__.func_302(joaat("U_M_Y_Juggernaut_01"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
	__LIB_16__.func_302(joaat("A_M_M_Hillbilly_02"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
	__LIB_16__.func_302(joaat("A_M_M_Hillbilly_01"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
	__LIB_16__.func_302(joaat("A_F_Y_Hippie_01"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
	__LIB_16__.func_302(joaat("A_M_Y_Hippy_01"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
	__LIB_16__.func_302(joaat("S_M_M_Security_01"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
	__LIB_16__.func_302(joaat("S_M_M_HighSec_01"), &(uParam0->f_1994[2 /*51*/]), &(uParam0->f_1984[2]));
}

void func_6(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x24A786
{
	__LIB_16__.func_302(iParam2, uParam1[iParam3 /*50*/], uParam0[iParam3]);
}

bool func_7()//Position - 0x6B1
{
	return Global_1573131.f_5;
}

bool func_8()//Position - 0x6F5
{
	return BitTest(Global_2714762, 19);
}

bool func_9()//Position - 0x84F
{
	return Global_2723612;
}

bool func_10()//Position - 0x878
{
	return Global_1835431.f_10;
}

void func_11(var uParam0)//Position - 0x25657
{
	struct<7> Var0;
	*uParam0 = { Var0 };
}

int func_12()//Position - 0x269DB
{
	if (Global_1574991 == 68)
	{
		return 1;
	}
	return 0;
}

bool func_13(int iParam0)//Position - 0xAE7
{
	return (iParam0 > -1 && iParam0 < 2);
}

int func_14(int iParam0)//Position - 0xB11
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case -1:
			iVar0 = 0;
			break;
		case 0:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0xB3D
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 2:
			iVar0 = 0;
			break;
		case 3:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool func_16(int iParam0, int iParam1)//Position - 0xB69
{
	return (iParam0 == 999 && iParam1 == 999);
}

int func_17(var uParam0)//Position - 0xF33
{
	if (Global_4718592 == 2)
	{
		if ((*uParam0)[2] == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_18()//Position - 0x1001
{
	return BitTest(Global_2715699.f_1.f_2809, 4);
}

bool func_19(int iParam0)//Position - 0x2B6A
{
	return iParam0 == 90;
}

bool func_20()//Position - 0x2B84
{
	return ((((((((((BitTest(Global_4718592.f_162497, 20) || BitTest(Global_4718592.f_162497, 21)) || BitTest(Global_4718592.f_162497, 22)) || BitTest(Global_4718592.f_162497, 23)) || BitTest(Global_4718592.f_162497, 24)) || BitTest(Global_4718592.f_162497, 25)) || BitTest(Global_4718592.f_162497, 26)) || BitTest(Global_4718592.f_162497, 27)) || BitTest(Global_4718592.f_162497, 28)) || BitTest(Global_4718592.f_162497, 29)) || BitTest(Global_4718592.f_162497, 30));
}

void func_21(int iParam0)//Position - 0x3594
{
	float fVar0;
	int iVar1;
	if (((((Global_4718592 == 0 || Global_4718592 == 1) && ((((Global_4718592.f_2 == 5 || Global_4718592.f_2 == 9) || Global_4718592.f_2 == 6) || Global_4718592.f_2 == 4) || Global_4718592 == 1)) && Global_4718592.f_593 == 2) && Global_4718592.f_142646 != 5) && iParam0 > 2)
	{
		fVar0 = (SYSTEM::TO_FLOAT(Global_4718592.f_142646) / 10f);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam0) * fVar0));
		if (iVar1 == 0)
		{
			iVar1 = 1;
		}
		if (iVar1 == iParam0)
		{
			iVar1 = (iVar1 - 1);
		}
		Global_4718592.f_600[0] = iVar1;
		Global_4718592.f_600[1] = (iParam0 - iVar1);
		if (Global_4718592.f_600[0] == Global_4718592.f_600[1])
		{
			if (fVar0 > 0.5f)
			{
				Global_4718592.f_600[0] = 0;
			}
			else
			{
				Global_4718592.f_600[1] = 0;
			}
		}
	}
}

bool func_22()//Position - 0x39C0
{
	return BitTest(Global_2714762, 9);
}

void func_23(int iParam0)//Position - 0x3A6C
{
	Global_2788173 = iParam0;
}

void func_24(int iParam0)//Position - 0x3A7A
{
	Global_2788174 = iParam0;
}

void func_25()//Position - 0x3AC9
{
	MISC::CLEAR_BIT(&Global_2714762, 9);
}

void func_26()//Position - 0x3AED
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 0);
}

void func_27(int iParam0)//Position - 0x4674
{
	if (iParam0 == 1)
	{
		Global_1836590 = 1;
	}
	else
	{
		Global_1836590 = 0;
	}
}

struct<13> func_28(int iParam0)//Position - 0x28AD5
{
	return Global_2715699.f_1.f_845[iParam0 /*57*/];
}

int func_29(int iParam0)//Position - 0x2BA23
{
	switch (iParam0)
	{
		case 2:
			return __LIB_11__.func_590();
		case 1:
		case 0:
		case 3:
			return Global_4980736.f_69352;
		default:
	}
	return 0;
}

int func_30(int iParam0, int iParam1)//Position - 0x2BC6B
{
	if (__LIB_0__.func_827(221))
	{
		return 1;
	}
	if (iParam0 == 1)
	{
		if (iParam1 == 3 || iParam1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_31()//Position - 0x2C0A1
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 1);
}

bool func_32()//Position - 0x2C0C7
{
	return BitTest(Global_2714762.f_2, 0);
}

void func_33()//Position - 0x2C0F9
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 0);
}

Vector3 func_34()//Position - 0x2C1C3
{
	return -1366.41f, 56.71f, 53.1f;
}

bool func_35()//Position - 0x2C1DA
{
	return Global_262145.f_31703[0] == Global_4718592.f_116524;
}

int func_36(var uParam0)//Position - 0x2C3DE
{
	if (Global_4718592 == 0)
	{
		if (Global_4718592.f_593 > 1)
		{
			if ((*uParam0)[1] == 0)
			{
				return 1;
			}
		}
	}
	else if (Global_4718592 == 1)
	{
		if ((*uParam0)[0] == 1 || (*uParam0)[0] == 4)
		{
			if ((*uParam0)[2] == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_37()//Position - 0x2C9AA
{
	return BitTest(Global_2711251[11], 0);
}

void func_38()//Position - 0x31A39
{
	Global_2715699.f_5982 = { 0f, 0f, 0f };
}

int func_39()//Position - 0x31FEA
{
	return Global_1966049.f_1;
}

void func_40()//Position - 0x32240
{
	Global_2788181 = NETWORK::GET_NETWORK_TIME();
}

char* func_41(int iParam0)//Position - 0x3228C
{
	switch (iParam0)
	{
		case 0:
			return "HBMB";
		case 1:
			return "BMBL";
		case 2:
			return "BZBT";
		case 3:
			return "FWAR";
		case 4:
			return "TGTM";
		case 5:
			return "WRCK";
		case 6:
			return "CRNG";
		case 7:
			return "HCTM";
		case 8:
			return "GMST";
		default:
	}
	return "ciARENA_JOB_TYPE_INVALID";
}

char* func_42(int iParam0)//Position - 0x32314
{
	switch (iParam0)
	{
		case 1:
			return "APOC";
		case 2:
			return "SCIFI";
		case 3:
			return "CONS";
		default:
	}
	return "";
}

int func_43()//Position - 0x323C3
{
	return Global_2788174;
}

int func_44()//Position - 0x323CF
{
	return Global_1946250.f_518;
}

bool func_45()//Position - 0x323DE
{
	return (Global_1946250.f_518 != 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_1946250.f_518) > 0);
}

int func_46(int iParam0, var uParam1)//Position - 0x32823
{
	if (iParam0 != 0)
	{
		return 0;
	}
	return uParam1;
}

void func_47(int iParam0)//Position - 0x32D6F
{
	Global_1574628 = iParam0;
}

void func_48()//Position - 0x32D8D
{
	MISC::SET_BIT(&Global_1574589, 5);
}

void func_49()//Position - 0x32DAF
{
	MISC::SET_BIT(&Global_2714762, 19);
}

void func_50()//Position - 0x3347F
{
	Global_2714762.f_727 = 1;
}

var func_51()//Position - 0x33504
{
	return BitTest(Global_2714762, 23);
}

int func_52()//Position - 0x336B0
{
	return Global_1575015;
}

void func_53(int iParam0)//Position - 0x33A2A
{
	Global_2727755 = iParam0;
}

int func_54()//Position - 0x33A38
{
	return Global_2727754;
}

var func_55()//Position - 0x33D8E
{
	return Global_2726795;
}

bool func_56()//Position - 0x33F64
{
	return Global_2714762.f_745;
}

void func_57()//Position - 0x33F96
{
	Global_2714762.f_748 = 0;
}

void func_58()//Position - 0x33FBA
{
	Global_2714762.f_696 = 1;
}

int func_59()//Position - 0x33FEA
{
	switch (Global_1575016)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 9:
		case 12:
			return 1;
		default:
	}
	return 0;
}

int func_60()//Position - 0x34175
{
	return Global_2715699.f_1.f_2825;
}

bool func_61(int iParam0)//Position - 0x34186
{
	return BitTest(Global_2715699.f_1.f_845[iParam0 /*57*/].f_51, 4);
}

void func_62()//Position - 0x3419F
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

bool func_63()//Position - 0x3446E
{
	return Global_2714762.f_893;
}

void func_64()//Position - 0x344BA
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_PAUSE_MENU_RESTARTING())
	{
		HUD::DISPLAY_RADAR(false);
		HUD::SET_FRONTEND_ACTIVE(false);
	}
}

bool func_65(int iParam0)//Position - 0x348E0
{
	return BitTest(Global_2715699.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

bool func_66()//Position - 0x34B1D
{
	return BitTest(Global_2714762, 13);
}

void func_67()//Position - 0x34C63
{
	Global_2715699.f_1.f_2824 = 0;
}

void func_68()//Position - 0x34C75
{
	Global_2715699.f_1.f_2799 = 0;
}

void func_69(bool bParam0)//Position - 0x13C3
{
	if (bParam0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_speech_ducking_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_speech_ducking_scene");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_speech_ducking_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_speech_ducking_scene");
	}
}

int func_70()//Position - 0x2176
{
	if (Global_1965657[0] == 2)
	{
		return Global_1965654[0];
	}
	return -1;
}

int func_71(int iParam0)//Position - 0x2394
{
	if (iParam0 < 32)
	{
		return BitTest(Global_1965652, iParam0);
	}
	else
	{
		return BitTest(Global_1965653, (iParam0 - 32));
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x23BE
{
	if (iParam0 < 32)
	{
		return BitTest(Global_1965650, iParam0);
	}
	else
	{
		return BitTest(Global_1965651, (iParam0 - 32));
	}
	return 0;
}

struct<4> func_73(int iParam0)//Position - 0x23E8
{
	struct<4> Var0;
	StringCopy(&Var0, "a", 16);
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "A", 16);
			break;
		case 2:
			StringCopy(&Var0, "B", 16);
			break;
		case 3:
			StringCopy(&Var0, "C", 16);
			break;
		case 4:
			StringCopy(&Var0, "D", 16);
			break;
		case 5:
			StringCopy(&Var0, "E", 16);
			break;
		case 6:
			StringCopy(&Var0, "F", 16);
			break;
		case 7:
			StringCopy(&Var0, "G", 16);
			break;
		case 8:
			StringCopy(&Var0, "H", 16);
			break;
		case 9:
			StringCopy(&Var0, "I", 16);
			break;
		case 10:
			StringCopy(&Var0, "J", 16);
			break;
		case 11:
			StringCopy(&Var0, "K", 16);
			break;
		case 12:
			StringCopy(&Var0, "L", 16);
			break;
		case 13:
			StringCopy(&Var0, "M", 16);
			break;
		case 14:
			StringCopy(&Var0, "N", 16);
			break;
		case 15:
			StringCopy(&Var0, "O", 16);
			break;
		case 16:
			StringCopy(&Var0, "P", 16);
			break;
		case 17:
			StringCopy(&Var0, "Q", 16);
			break;
		case 18:
			StringCopy(&Var0, "R", 16);
			break;
		case 19:
			StringCopy(&Var0, "S", 16);
			break;
		case 20:
			StringCopy(&Var0, "T", 16);
			break;
		case 21:
			StringCopy(&Var0, "U", 16);
			break;
		case 22:
			StringCopy(&Var0, "V", 16);
			break;
		case 23:
			StringCopy(&Var0, "W", 16);
			break;
		case 24:
			StringCopy(&Var0, "X", 16);
			break;
		case 25:
			StringCopy(&Var0, "Y", 16);
			break;
		case 26:
			StringCopy(&Var0, "Z", 16);
			break;
	}
	return Var0;
}

int func_74(int iParam0)//Position - 0x25BD
{
	if (iParam0 < 32)
	{
		return BitTest(Global_1965634, iParam0);
	}
	else
	{
		return BitTest(Global_1965635, (iParam0 - 32));
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x25E7
{
	if (iParam0 < 32)
	{
		return BitTest(Global_1965632, iParam0);
	}
	else
	{
		return BitTest(Global_1965633, (iParam0 - 32));
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x2708
{
	if (Global_1659814 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 3;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 3;
			}
		default:
	}
	return 2;
}

int func_77(int iParam0)//Position - 0x2774
{
	switch (iParam0)
	{
		case 0:
			return 3;
		default:
	}
	return 2;
}

int func_78(int iParam0)//Position - 0x27C2
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 3;
		default:
	}
	return 2;
}

int func_79(int iParam0)//Position - 0x27E6
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 21:
			return 1;
		default:
	}
	return 2;
}

int func_80(int iParam0)//Position - 0x280A
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 8:
			return 1;
		default:
	}
	return 2;
}

void func_81(bool bParam0)//Position - 0x2A60
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_1965644, bParam0))
		{
			MISC::CLEAR_BIT(&Global_1965644, bParam0);
			MISC::CLEAR_BIT(&Global_1965650, bParam0);
			MISC::CLEAR_BIT(&Global_1965652, bParam0);
		}
	}
	else if (BitTest(Global_1965645, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&Global_1965645, (bParam0 - 32));
		MISC::CLEAR_BIT(&Global_1965651, (bParam0 - 32));
		MISC::CLEAR_BIT(&Global_1965653, (bParam0 - 32));
	}
}

int func_82(int iParam0)//Position - 0x30B1
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 7;
		case 3:
			return 3;
		case 4:
			return 1;
		case 11:
			return 1;
		case 13:
			return 1;
		case 7:
			return 0;
		case 21:
			return 1;
		case 28:
			return 1;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 1;
		case 49:
			return 1;
		case 50:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 53:
			return 1;
		case 54:
			return 1;
		case 55:
			return 1;
		case 56:
			return 1;
		case 57:
			return 1;
		case 58:
			return 1;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		case 37:
			return 1;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 1;
		case 45:
			return 1;
		default:
	}
	return 3;
}

int func_83(int iParam0, bool bParam1)//Position - 0x329D
{
	switch (iParam0)
	{
		case 1:
			if ((Global_1965654[0] >= 46 && Global_1965654[0] <= 58) && Global_1965657[0] == 1)
			{
				return 0;
			}
			if (bParam1 < 32 && Global_1965654[0] >= 32)
			{
				return 0;
			}
			break;
		case 2:
			if ((Global_1965654[0] >= 46 && Global_1965654[0] <= 58) && Global_1965657[0] == 1)
			{
				return 0;
			}
			if (Global_1965654[0] >= 32 && Global_1965657[0] == 1)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_84(int iParam0, bool bParam1)//Position - 0x3355
{
	if (bParam1 < 32)
	{
		return BitTest(Global_1965636[iParam0], bParam1);
	}
	else
	{
		return BitTest(Global_1965639[iParam0], (bParam1 - 32));
	}
	return 0;
}

int func_85(bool bParam0)//Position - 0x33E3
{
	switch (bParam0)
	{
		case 0:
			return 0;
		case 29:
			return 2;
		case 30:
			return 2;
		case 23:
			return 3;
		case 15:
			return 3;
		case 12:
			return 3;
		default:
	}
	return 0;
}

bool func_86()//Position - 0x4F1B
{
	return Global_1965529;
}

int func_87()//Position - 0x83F8
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
	{
		return 0;
	}
	return 0;
}

int func_88()//Position - 0x859F
{
	int iVar0;
	iVar0 = 223;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 237;
	}
	return iVar0;
}

int func_89()//Position - 0x8617
{
	int iVar0;
	iVar0 = 229;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 22;
	}
	return iVar0;
}

int func_90()//Position - 0x8631
{
	int iVar0;
	iVar0 = 228;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 44;
	}
	return iVar0;
}

int func_91()//Position - 0x864B
{
	int iVar0;
	iVar0 = 226;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 36;
	}
	return iVar0;
}

int func_92()//Position - 0x8665
{
	int iVar0;
	iVar0 = 227;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 21;
	}
	return iVar0;
}

int func_93()//Position - 0x867F
{
	int iVar0;
	iVar0 = 225;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 238;
	}
	return iVar0;
}

int func_94()//Position - 0x87E6
{
	if ((Global_1965533 != PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) || BitTest(Global_1965531, 24)) || PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/))
	{
		return 1;
	}
	return 0;
}

int func_95()//Position - 0xA510
{
	int iVar0;
	iVar0 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), (1000 * Global_4718592.f_170136));
	if (iVar0 == 0)
	{
		iVar0 = NETWORK::GET_TIME_OFFSET(iVar0, 1);
	}
	return iVar0;
}

var func_96(int iParam0)//Position - 0xA9DC
{
	if (iParam0 == Global_2788168.f_1)
	{
		return Global_2788168;
	}
	return Global_2681762.f_192[iParam0];
}

void func_97(float fParam0, float fParam1)//Position - 0xAE95
{
	MISC::SET_BIT(&Global_2788033, 1);
	Global_2787947.f_6.f_1 = fParam0;
	Global_2787947.f_6 = fParam1;
}

void func_98(var uParam0)//Position - 0xB140
{
	if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__.func_388(), -1, 0))
	{
		Global_2681762.f_192[uParam0->f_2] = uParam0->f_3;
	}
}

int func_99(int iParam0)//Position - 0xB1A9
{
	if (iParam0 == -1 || Global_4718592.f_170136 == -1)
	{
		return 1;
	}
	if (iParam0 == Global_2788168.f_1 && (Global_2681762.f_192[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Global_2788168, Global_2681762.f_192[iParam0])))
	{
		return 0;
	}
	return 1;
}

void func_100()//Position - 0xB310
{
	if (!BitTest(Global_1965531, 22))
	{
		MISC::SET_BIT(&Global_1965531, 22);
	}
}

void func_101(bool bParam0)//Position - 0xB32D
{
	ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 0, false);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	if (bParam0)
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
	MISC::SET_BIT(&Global_1965531, 10);
}

int func_102(int iParam0)//Position - 0xB9E1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((Global_2689235[iVar0 /*453*/].f_426 == iParam0 && iVar0 != PLAYER::PLAYER_ID()) && iParam0 != -1)
		{
			if (Global_2689235[iVar0 /*453*/].f_427 < Global_1965573)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_103(bool bParam0)//Position - 0xBA3B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((Global_2689235[iVar0 /*453*/].f_426 == bParam0 && iVar0 != PLAYER::PLAYER_ID()) && bParam0 != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_104(var uParam0, float fParam1, float fParam2)//Position - 0xC33D
{
	float fVar0;
	if (fParam1 < 0f)
	{
		fVar0 = (*uParam0 - fParam1);
		if (*uParam0 > fParam1)
		{
			*uParam0 = (*uParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
		else if (*uParam0 < fParam1)
		{
			fVar0 = (fParam1 - *uParam0);
			*uParam0 = (*uParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
	}
	else if (fParam1 > 0f)
	{
		fVar0 = (fParam1 - *uParam0);
		if (*uParam0 < fParam1)
		{
			*uParam0 = (*uParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
		else if (*uParam0 > fParam1)
		{
			fVar0 = (*uParam0 - fParam1);
			*uParam0 = (*uParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
	}
	else if (*uParam0 > fParam1)
	{
		fVar0 = (*uParam0 - fParam1);
		*uParam0 = (*uParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
	}
	else if (*uParam0 < fParam1)
	{
		fVar0 = (fParam1 - *uParam0);
		*uParam0 = (*uParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
	}
}

Vector3 func_105(struct<3> Param0)//Position - 0xCA5B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	fVar5 = (8f - (SYSTEM::TO_FLOAT(Global_1965579) * 1.25f));
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar5 - 0.5f), (fVar5 + 0.5f));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	fVar3 = (-28f + (2.5f * IntToFloat(Global_1965578)));
	fVar4 = (28f - (2.5f * IntToFloat(Global_1965578)));
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar6 >= 90)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, fVar4);
	}
	else if (iVar6 >= 80)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
	}
	else if (iVar6 >= 60)
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar6 > 50)
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		}
		else
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar3 + 5f), fVar3);
		}
		fVar2 = 0f;
	}
	else if (iVar6 >= 52)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
	}
	else if (iVar6 >= 45)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, (fVar3 + 5f));
	}
	else if (iVar6 >= 25)
	{
		fVar1 = 0f;
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar6 > 50)
		{
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		}
		else
		{
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar3 + 5f), fVar3);
		}
	}
	else if (iVar6 >= 15)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar4 - 5f), fVar4);
	}
	else
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, (fVar3 + 5f));
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, (-fVar3 + 5f));
	}
	Param0.f_0 = (Param0.f_0 + fVar1);
	Param0.f_1 = (Param0.f_1 + fVar2);
	Param0.f_2 = (Param0.f_2 + (2f + fVar0));
	return Param0;
}

Vector3 func_106(struct<3> Param0, int iParam1)//Position - 0xCC18
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	MISC::GET_MODEL_DIMENSIONS(iParam1, &uVar1, &Var2);
	Var2.f_2 = (Var2.f_2 * 2f);
	Var2.f_2 = (Var2.f_2 + 1f);
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, 0f, 0f, 0f, Var2.f_2) };
	return Var0;
}

void func_107(struct<3> Param0, struct<3> Param1)//Position - 0xCC55
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(Global_1965537, &uVar3, &uVar1, &uVar2, &iVar4);
	if (iVar0 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			MISC::CLEAR_BIT(&Global_1965531, 28);
			MISC::CLEAR_BIT(&Global_1965532, 1);
			MISC::CLEAR_BIT(&Global_1965532, 17);
			MISC::CLEAR_BIT(&Global_1965531, 27);
			MISC::SET_BIT(&Global_1965532, 16);
			MISC::SET_BIT(&Global_1965531, 26);
		}
		else
		{
			Global_1965578 = 0;
			Global_1965579 = 0;
			Global_1965537 = 0;
			MISC::SET_BIT(&Global_1965531, 28);
			MISC::SET_BIT(&Global_1965532, 1);
			MISC::SET_BIT(&Global_1965532, 17);
		}
	}
	else if (iVar0 == 0)
	{
		iVar5 = 497;
		Global_1965537 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param1, 1f, iVar5, 0, 4);
	}
}

int func_108(int iParam0)//Position - 0xCE2C
{
	if ((((((iParam0 == joaat("xs_prop_arena_bollard_rising_01a") || iParam0 == joaat("xs_prop_arena_bollard_rising_01b")) || iParam0 == joaat("xs_prop_arena_bollard_rising_01a_sf")) || iParam0 == joaat("xs_prop_arena_bollard_rising_01b_sf")) || iParam0 == joaat("xs_prop_arena_bollard_rising_01a_wl")) || iParam0 == joaat("xs_prop_arena_bollard_rising_01b_wl")) || __LIB_13__.func_164(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)//Position - 0xCE96
{
	if ((iParam0 == joaat("xs_prop_arena_landmine_03a") || iParam0 == joaat("xs_prop_arena_landmine_03a_sf")) || iParam0 == joaat("xs_prop_arena_landmine_03a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0xCECA
{
	if ((iParam0 == joaat("xs_prop_arena_barrel_01a") || iParam0 == joaat("xs_prop_arena_barrel_01a_sf")) || iParam0 == joaat("xs_prop_arena_barrel_01a_wl"))
	{
		return 1;
	}
	return 0;
}

void func_111()//Position - 0xD7E7
{
	if (!Global_1965529)
	{
		Global_1965529 = 1;
	}
}

int func_112(int iParam0)//Position - 0xDB3F
{
	if ((iParam0 == joaat("xs_prop_arena_spikes_01a") || iParam0 == joaat("xs_prop_arena_spikes_01a_sf")) || iParam0 == -1371372177)
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)//Position - 0xE18C
{
	switch (iParam0)
	{
		case joaat("rcbandito"):
		case joaat("minitank"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
			return 1;
			break;
	}
	return 0;
}

void func_114(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE9E9
{
	if (!__LIB_0__.func_493())
	{
		return;
	}
	if (__LIB_15__.func_21(bParam0) || __LIB_12__.func_871(bParam0))
	{
		return;
	}
	if (Global_1965847 == bParam0)
	{
		return;
	}
	if (bParam0 < 32)
	{
		if (!BitTest(Global_1965626, bParam0))
		{
			MISC::SET_BIT(&Global_1965626, bParam0);
			if (bParam1)
			{
				MISC::SET_BIT(&Global_1965628, bParam0);
			}
			if (bParam2)
			{
				MISC::SET_BIT(&Global_1965632, bParam0);
			}
			if (bParam3)
			{
				MISC::SET_BIT(&Global_1965634, bParam0);
			}
			if (bParam4)
			{
				__LIB_12__.func_719(0, bParam0);
			}
			Global_1965943[bParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else if (!bParam1)
		{
		}
	}
	else if (!BitTest(Global_1965627, (bParam0 - 32)))
	{
		MISC::SET_BIT(&Global_1965627, (bParam0 - 32));
		if (bParam1)
		{
			MISC::SET_BIT(&Global_1965629, (bParam0 - 32));
		}
		if (bParam2)
		{
			MISC::SET_BIT(&Global_1965633, (bParam0 - 32));
		}
		if (bParam3)
		{
			MISC::SET_BIT(&Global_1965635, (bParam0 - 32));
		}
		if (bParam4)
		{
			__LIB_12__.func_719(0, bParam0);
		}
		Global_1965943[bParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else if (!bParam1)
	{
	}
}

bool func_115()//Position - 0xEDEF
{
	return ((Global_4718592.f_162543.f_1 == 3 || Global_4718592.f_162543.f_1 == 3) || Global_4718592.f_162543.f_1 == 3);
}

int func_116(int iParam0)//Position - 0xEE54
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1892703[iVar0 /*599*/].f_594;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (iParam0 == Global_1892703[iVar2 /*599*/].f_593)
		{
			if (Global_1892703[iVar2 /*599*/].f_594 > -1 && Global_1892703[iVar2 /*599*/].f_594 < iVar1)
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	if (iVar0 == PLAYER::PLAYER_ID() || iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_117()//Position - 0xF6A1
{
	return Global_2787906;
}

bool func_118()//Position - 0xF6D3
{
	return Global_2787910;
}

Vector3 func_119(int iParam0, var uParam1)//Position - 0x105D4
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 357.7f;
			Var0 = { 2798.7449f, -3938.6604f, 185.5f };
			break;
		case 1:
			*uParam1 = 1.35f;
			Var0 = { 2796.0596f, -3935.254f, 185.5107f };
			break;
		case 2:
			*uParam1 = 355f;
			Var0 = { 2794.7393f, -3935.5466f, 185.5107f };
			break;
		case 3:
			*uParam1 = 349.5615f;
			Var0 = { 2794.6428f, -3936.7405f, 185.5107f };
			break;
		case 4:
			*uParam1 = 3.4171f;
			Var0 = { 2799.5942f, -3935.2976f, 185.5107f };
			break;
		case 5:
			*uParam1 = 6.0675f;
			Var0 = { 2801.9966f, -3935.275f, 185.5107f };
			break;
		case 6:
			*uParam1 = 16.6502f;
			Var0 = { 2804.3735f, -3935.2693f, 185.5107f };
			break;
		case 7:
			*uParam1 = 12.2188f;
			Var0 = { 2807.2727f, -3935.1836f, 185.5107f };
			break;
		case 8:
			*uParam1 = 357.1077f;
			Var0 = { 2808.812f, -3938.9521f, 185.5356f };
			break;
		case 9:
			*uParam1 = 8.7248f;
			Var0 = { 2799.678f, -3939.6902f, 185.5357f };
			break;
		case 10:
			*uParam1 = 352.6495f;
			Var0 = { 2798.6985f, -3941.112f, 185.5357f };
			break;
		case 11:
			*uParam1 = 357.2962f;
			Var0 = { 2795.593f, -3940.5688f, 185.5357f };
			break;
		case 12:
			*uParam1 = 349.1294f;
			Var0 = { 2793.865f, -3939.5042f, 185.5357f };
			break;
		case 13:
			*uParam1 = 354.4223f;
			Var0 = { 2790.926f, -3938.8413f, 185.58357f };
			break;
		case 14:
			*uParam1 = 21.2078f;
			Var0 = { 2802.9397f, -3930.8408f, 185.5357f };
			break;
		case 15:
			*uParam1 = 340.7448f;
			Var0 = { 2791.4568f, -3931.614f, 185.5357f };
			break;
		case 16:
			*uParam1 = 20.7956f;
			Var0 = { 2797.9585f, -3935.1934f, 185.5796f };
			break;
		case 17:
			*uParam1 = 20.7956f;
			Var0 = { 2797.9585f, -3935.1934f, 185.5796f };
			break;
		case 18:
			*uParam1 = 20.7956f;
			Var0 = { 2808.3604f, -3932.7432f, 185.5475f };
			break;
		case 19:
			*uParam1 = 20.7956f;
			Var0 = { 2804.234f, -3932.2532f, 185.5495f };
			break;
		case 20:
			*uParam1 = 20.7956f;
			Var0 = { 2800.6917f, -3930.9111f, 185.8687f };
			break;
		case 21:
			*uParam1 = 20.7956f;
			Var0 = { 2800.6917f, -3930.9111f, 185.8687f };
			break;
		case 22:
			*uParam1 = 20.7956f;
			Var0 = { 2800.572f, -3928.069f, 185.9161f };
			break;
		case 23:
			*uParam1 = 20.7956f;
			Var0 = { 2802.842f, -3928.0645f, 185.9162f };
			break;
		case 24:
			*uParam1 = 20.7956f;
			Var0 = { 2792.55f, -3928.1562f, 185.9131f };
			break;
		case 25:
			*uParam1 = 20.7956f;
			Var0 = { 2790.8086f, -3928.2773f, 185.9088f };
			break;
		case 26:
			*uParam1 = 20.7956f;
			Var0 = { 2796.947f, -3935.581f, 185.8195f };
			break;
		case 27:
			*uParam1 = 20.7956f;
			Var0 = { 2798.896f, -3936.6255f, 185.7206f };
			break;
		case 28:
			*uParam1 = 20.7956f;
			Var0 = { 2803.3577f, -3936.6587f, 185.7762f };
			break;
		case 29:
			*uParam1 = 20.7956f;
			Var0 = { 2803.3577f, -3936.6587f, 185.7762f };
			break;
		case 30:
			*uParam1 = 20.7956f;
			Var0 = { 2806.0461f, -3936.326f, 185.7744f };
			break;
		case 31:
			*uParam1 = 20.7956f;
			Var0 = { 2809.536f, -3935.324f, 185.0902f };
			break;
	}
	return Var0;
}

void func_120(int iParam0)//Position - 0x10CA6
{
	var uVar0;
	uVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 = iParam0;
	Global_2667225.f_2638 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_121()//Position - 0x10FDE
{
	Global_2787917 = 1;
}

void func_122()//Position - 0x110CA
{
	if (BitTest(Global_1965531, 2) || __LIB_4__.func_418())
	{
		if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 18))
		{
			MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 18);
		}
	}
	else if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 18))
	{
		MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 18);
	}
	if (BitTest(Global_1965531, 3) || __LIB_12__.func_613())
	{
		if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 19))
		{
			MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 19);
		}
	}
	else if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 19))
	{
		MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 19);
	}
	if (BitTest(Global_1965531, 4))
	{
		if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 20))
		{
			MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 20);
		}
		if (Global_1965572 > -1)
		{
			if (__LIB_13__.func_166(Global_4980736.f_63312[Global_1965572 /*183*/].f_7))
			{
				if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 22))
				{
					MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 22);
				}
			}
		}
	}
	else
	{
		if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 20))
		{
			MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 20);
		}
		if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 22))
		{
			MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 22);
		}
	}
	if (BitTest(Global_1965531, 5))
	{
		if (!BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 21))
		{
			MISC::SET_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 21);
		}
	}
	else if (BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 21))
	{
		MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 21);
	}
}

void func_123(int iParam0)//Position - 0x112E2
{
	Global_1965530 = iParam0;
}

void func_124(int iParam0)//Position - 0x117E6
{
	Global_1965623 = iParam0;
}

bool func_125()//Position - 0x11802
{
	return Global_1965622;
}

void func_126(int iParam0, int iParam1)//Position - 0x12D3C
{
	iParam0->f_104 = iParam1;
}

bool func_127(bool bParam0)//Position - 0x1AE9F
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_36.f_18, 6);
}

bool func_128(int iParam0)//Position - 0x20373
{
	return iParam0 == 58;
}

bool func_129()//Position - 0x21E97
{
	return BitTest(Global_4718592.f_35, 19);
}

int func_130(int iParam0)//Position - 0x223EF
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 46:
			return 31;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 23:
			return 11;
		case 26:
			return 12;
		case 32:
			return 15;
		case 33:
			return 17;
		case 47:
			return 32;
		case 55:
			return 35;
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
		case 24:
			return 11;
		case 27:
			return 12;
		case 48:
			return 32;
		case 50:
			return 31;
		case 11:
			return 1;
		case 12:
			return 2;
		case 13:
			return 3;
		case 14:
			return 4;
		case 15:
			return 5;
		case 25:
			return 11;
		case 28:
			return 12;
		case 30:
			return 13;
		case 49:
			return 32;
		case 51:
			return 31;
		case 16:
			return 4;
		case 17:
			return 5;
		case 29:
			return 12;
		case 40:
			return 23;
		case 41:
			return 24;
		case 18:
			return 6;
		case 19:
			return 7;
		case 20:
			return 8;
		case 21:
			return 9;
		case 22:
			return 10;
		case 31:
			return 14;
		case 34:
			return 16;
		case 42:
			return 27;
		case 43:
			return 28;
		case 44:
			return 29;
		case 45:
			return 30;
		case 53:
			return 33;
		case 54:
			return 34;
		case 56:
			return 36;
		default:
	}
	return 0;
}

bool func_131()//Position - 0x2764A
{
	return Global_2714762.f_43.f_56;
}

void func_132()//Position - 0x280C8
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightgrain"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tankercar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("metrotrain"));
}

char* func_133(int iParam0)//Position - 0x28118
{
	switch (iParam0)
	{
		case 0:
			return "missfbi1";
		case 1:
			return "missfbi5ig_12";
		case 2:
			return "dead";
		case 3:
			return "dead";
		case 4:
			return "dead";
		case 5:
			return "dead";
		case 6:
			return "dead";
		case 7:
			return "dead";
		case 8:
			return "dead";
		case 9:
			return "dead";
		case 10:
			return "anim@GangOps@Morgue@Table@";
		default:
	}
	return "missfbi1";
}

int func_134()//Position - 0x2CD9D
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 <= 3)
	{
		if (BitTest(Global_2715699.f_3880, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_135(bool bParam0)//Position - 0x2F133
{
	return Global_1853348[bParam0 /*834*/].f_205.f_6;
}

int func_136()//Position - 0x30E1C
{
	return Global_4718592.f_168997;
}

int func_137(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x31068
{
	int iVar0;
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam4, bParam6, bParam5);
	*iParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*iParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x456BC
{
	switch (iParam0)
	{
		case 0:
			return joaat("PLAYER");
		case 1:
			return joaat("CIVMALE");
		case 2:
			return joaat("CIVFEMALE");
		case 3:
			return joaat("COP");
		case 4:
			return joaat("HATES_PLAYER");
		case 5:
			return joaat("AMBIENT_GANG_LOST");
		case 6:
			return joaat("AMBIENT_GANG_MEXICAN");
		case 7:
			return joaat("AMBIENT_GANG_FAMILY");
		case 8:
			return joaat("ARMY");
		case 9:
			return joaat("SECURITY_GUARD");
		case 10:
			return joaat("AMBIENT_GANG_MARABUNTE");
		case 11:
			return joaat("AMBIENT_GANG_CULT");
		case 12:
			return joaat("AMBIENT_GANG_SALVA");
		case 13:
			return joaat("AMBIENT_GANG_WEICHENG");
		case 14:
			return joaat("AMBIENT_GANG_BALLAS");
		case 15:
			return joaat("AMBIENT_GANG_HILLBILLY");
		case 16:
			return joaat("AGGRESSIVE_INVESTIGATE");
		case 17:
			return joaat("NO_RELATIONSHIP");
		case 18:
			return joaat("SHARK");
		case 19:
			return joaat("PRIVATE_SECURITY");
		case 20:
			return joaat("CAT");
		default:
	}
	return joaat("NO_RELATIONSHIP");
}

void func_139(int iParam0, bool bParam1, bool bParam2)//Position - 0x457F6
{
	if (bParam2)
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_ChasePedID", 3))
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "MC_ChasePedID"))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "MC_ChasePedID", bParam1);
			}
		}
	}
	else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "MC_EntityID"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "MC_EntityID", bParam1);
		}
	}
}

bool func_140(bool bParam0)//Position - 0x45854
{
	return bParam0;
}

bool func_141(int iParam0)//Position - 0x46570
{
	return Global_262145.f_5032[0] == iParam0;
}

int func_142()//Position - 0x525FC
{
	STREAMING::REQUEST_ANIM_SET("ANIM_GROUP_MOVE_BALLISTIC");
	STREAMING::REQUEST_ANIM_SET("MOVE_STRAFE_BALLISTIC");
	STREAMING::REQUEST_CLIP_SET("move_ballistic_2h");
	if ((STREAMING::HAS_ANIM_SET_LOADED("ANIM_GROUP_MOVE_BALLISTIC") && STREAMING::HAS_ANIM_SET_LOADED("MOVE_STRAFE_BALLISTIC")) && STREAMING::HAS_CLIP_SET_LOADED("move_ballistic_2h"))
	{
		return 1;
	}
	return 0;
}

void func_143(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x562F9
{
	*uParam0 = Global_1058372[12];
	if (*uParam0 == 255)
	{
		*uParam0 = -1;
	}
	*uParam1 = Global_1058372[13];
	if (*uParam1 == 255)
	{
		*uParam1 = -1;
	}
	*uParam2 = Global_1058372[14];
	if (*uParam2 == 255)
	{
		*uParam2 = -1;
	}
	*uParam3 = Global_1058372[15];
	if (*uParam3 == 255)
	{
		*uParam3 = -1;
	}
}

void func_144(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5635D
{
	*uParam0 = Global_1058372[8];
	if (*uParam0 == 255)
	{
		*uParam0 = -1;
	}
	*uParam1 = Global_1058372[9];
	if (*uParam1 == 255)
	{
		*uParam1 = -1;
	}
	*uParam2 = Global_1058372[10];
	if (*uParam2 == 255)
	{
		*uParam2 = -1;
	}
	*uParam3 = Global_1058372[11];
	if (*uParam3 == 255)
	{
		*uParam3 = -1;
	}
}

void func_145(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x563C1
{
	*uParam0 = Global_1058372[4];
	if (*uParam0 == 255)
	{
		*uParam0 = -1;
	}
	*uParam1 = Global_1058372[5];
	if (*uParam1 == 255)
	{
		*uParam1 = -1;
	}
	*uParam2 = Global_1058372[6];
	if (*uParam2 == 255)
	{
		*uParam2 = -1;
	}
	*uParam3 = Global_1058372[7];
	if (*uParam3 == 255)
	{
		*uParam3 = -1;
	}
}

void func_146(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x56421
{
	*uParam0 = Global_1058372[0];
	if (*uParam0 == 255)
	{
		*uParam0 = -1;
	}
	*uParam1 = Global_1058372[1];
	if (*uParam1 == 255)
	{
		*uParam1 = -1;
	}
	*uParam2 = Global_1058372[2];
	if (*uParam2 == 255)
	{
		*uParam2 = -1;
	}
	*uParam3 = Global_1058372[3];
	if (*uParam3 == 255)
	{
		*uParam3 = -1;
	}
}

int func_147(bool bParam0)//Position - 0x564EB
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_12409, bParam0))
		{
			return 1;
		}
		iVar1 = 0;
		while (iVar1 <= (Global_4718592.f_658[iVar0 /*22957*/].f_59 - 1))
		{
			if (Global_4718592.f_658[iVar0 /*22957*/].f_12391[iVar1] == bParam0)
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

bool func_148(int iParam0)//Position - 0x59DEC
{
	return Global_262145.f_5023[0] == iParam0;
}

int func_149(bool bParam0, var uParam1)//Position - 0x6ADCC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = false;
		while (bVar2 <= 16)
		{
			if (Global_4718592.f_658[iVar1 /*22957*/].f_6921[bVar2] == 3 && Global_4718592.f_658[iVar1 /*22957*/].f_6991[bVar2] == bParam0)
			{
				iVar0 = 1;
				if (!BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7081, bVar2) && BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7082, bVar2))
				{
					*uParam1 = 1;
					bVar2 = 17;
					iVar1 = 4;
				}
			}
			bVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_150(int iParam0, int iParam1, int iParam2)//Position - 0x6AFED
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 5:
			if (BitTest(Global_4718592.f_658[iParam1 /*22957*/].f_7911[iParam2], 14))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_151()//Position - 0x6B474
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 <= 5 || iVar0 >= 21)
	{
		return 1;
	}
	return 0;
}

int func_152(bool bParam0)//Position - 0x75B3C
{
	if (bParam0)
	{
		return 1;
	}
	return 2;
}

bool func_153(bool bParam0)//Position - 0xCE6B6
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_96.f_32, 5);
}

int func_154(int iParam0)//Position - 0xCE6CD
{
	switch (iParam0)
	{
		case 2:
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
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
			return 1;
			break;
	}
	return 0;
}

void func_155(int iParam0)//Position - 0xD0B60
{
	Global_2715699.f_3479.f_32 = iParam0;
}

int func_156(int iParam0)//Position - 0xE3E10
{
	switch (iParam0)
	{
		case 32:
		case 33:
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
		case 44:
		case 45:
		case 46:
		case 58:
		case 61:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 73:
		case 74:
			return 1;
		default:
	}
	return 0;
}

int func_157(int iParam0, int iParam1)//Position - 0xE4A57
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_23393 /* Tunable: H2_REPLAY_COOLDOWN_2_PLAYER_IAA */;
				case 3:
					return Global_262145.f_23396 /* Tunable: H2_REPLAY_COOLDOWN_3_PLAYER_IAA */;
				case 4:
					return Global_262145.f_23399 /* Tunable: H2_REPLAY_COOLDOWN_4_PLAYER_IAA */;
				default:
			}
			return Global_262145.f_23391 /* Tunable: H2_IAA_REPLAY_COOLDOWN_TIME */;
			break;
		case 1:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_23394 /* Tunable: H2_REPLAY_COOLDOWN_2_PLAYER_SUB */;
				case 3:
					return Global_262145.f_23397 /* Tunable: H2_REPLAY_COOLDOWN_3_PLAYER_SUB */;
				case 4:
					return Global_262145.f_23400 /* Tunable: H2_REPLAY_COOLDOWN_4_PLAYER_SUB */;
				default:
			}
			return Global_262145.f_23392 /* Tunable: H2_SUB_REPLAY_COOLDOWN_TIME */;
			break;
		case 2:
			switch (iParam1)
			{
				case 2:
					return Global_262145.f_23395 /* Tunable: H2_REPLAY_COOLDOWN_2_PLAYER_SILO */;
				case 3:
					return Global_262145.f_23398 /* Tunable: H2_REPLAY_COOLDOWN_3_PLAYER_SILO */;
				case 4:
					return Global_262145.f_23401 /* Tunable: H2_REPLAY_COOLDOWN_4_PLAYER_SILO */;
				default:
			}
			return Global_262145.f_23402 /* Tunable: H2_SILO_REPLAY_COOLDOWN_TIME */;
			break;
	}
	return 3600;
}

void func_158()//Position - 0xE4D4E
{
	if (BitTest(Global_2815059.f_1805, 5))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 5);
	}
	if (BitTest(Global_2815059.f_1804, 26))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1804), 26);
	}
	if (BitTest(Global_2815059.f_1805, 6))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 6);
	}
	if (BitTest(Global_2815059.f_1804, 27))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1804), 27);
	}
	if (BitTest(Global_2815059.f_1805, 8))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 8);
	}
	if (BitTest(Global_2815059.f_1804, 28))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1804), 28);
	}
	if (BitTest(Global_2815059.f_1805, 11))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 11);
	}
	if (BitTest(Global_2815059.f_1804, 29))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1804), 29);
	}
	if (BitTest(Global_2815059.f_1805, 9))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1805), 9);
	}
	if (BitTest(Global_2815059.f_1806, 0))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 0);
	}
	if (BitTest(Global_2815059.f_1806, 1))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 1);
	}
	if (BitTest(Global_2815059.f_1806, 2))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 2);
	}
	if (BitTest(Global_2815059.f_1806, 3))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 3);
	}
	if (BitTest(Global_2815059.f_1806, 4))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 4);
	}
	if (BitTest(Global_2815059.f_1806, 5))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 5);
	}
	if (BitTest(Global_2815059.f_1806, 6))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 6);
	}
	if (BitTest(Global_2815059.f_1806, 7))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 7);
	}
	if (BitTest(Global_2815059.f_1806, 8))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 8);
	}
	if (BitTest(Global_2815059.f_1806, 9))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 9);
	}
	if (BitTest(Global_2815059.f_1806, 10))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 10);
	}
	if (BitTest(Global_2815059.f_1806, 11))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 11);
	}
	if (BitTest(Global_2815059.f_1806, 12))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1806), 12);
	}
}

int func_159(bool bParam0)//Position - 0xE5C0B
{
	switch (bParam0)
	{
		case 0:
			return 14;
		case 1:
			return 15;
		case 2:
			return 16;
		case 3:
			return 17;
		case 4:
			return 18;
		case 5:
			return 19;
		case 6:
			return 20;
		case 7:
			return 21;
		case 8:
			return 22;
		case 9:
			return 23;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
		case 13:
			return 27;
		default:
	}
	return -1;
}

bool func_160(int iParam0)//Position - 0xE9FB2
{
	return PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0);
}

int func_161(int iParam0)//Position - 0xFBE4B
{
	switch (iParam0)
	{
		case 0:
			return -623391175;
		case 1:
			return -1801970482;
		case 2:
			return -589934703;
		case 3:
			return -1591493106;
		case 4:
			return 1511571939;
		case 5:
			return -590314610;
		case 6:
			return -439469264;
		case 7:
			return 1240484981;
		default:
	}
	return -623391175;
}

int func_162(int iParam0)//Position - 0xFD06F
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23331 /* Tunable: H2_FIRST_TIME_BONUS */;
		case 2:
			return Global_262145.f_23331 /* Tunable: H2_FIRST_TIME_BONUS */;
		case 6:
			return Global_262145.f_23331 /* Tunable: H2_FIRST_TIME_BONUS */;
		case 3:
			return Global_262145.f_23332 /* Tunable: H2_ORDER_BONUS */;
		case 4:
			return Global_262145.f_23335 /* Tunable: 1686795626 */;
		case 7:
			return Global_262145.f_23333 /* Tunable: -461618332 */;
		case 8:
			return Global_262145.f_23334 /* Tunable: -1940778575 */;
		case 5:
			return Global_262145.f_23338 /* Tunable: -203511919 */;
		case 9:
			return Global_262145.f_23336 /* Tunable: -1566570663 */;
		case 10:
			return Global_262145.f_23337 /* Tunable: -48087040 */;
		case 11:
			return Global_262145.f_23339 /* Tunable: 188001427 */;
		default:
	}
	return 0;
}

int func_163(int iParam0)//Position - 0xFD22A
{
	return (SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam0))) - 1);
}

int func_164(int iParam0)//Position - 0xFD243
{
	switch (iParam0)
	{
		case 3:
			return joaat("MPPLY_GANGOPS_ALLINORDER");
		case 4:
			return joaat("MPPLY_GANGOPS_LOYALTY");
		case 7:
			return joaat("MPPLY_GANGOPS_LOYALTY2");
		case 8:
			return joaat("MPPLY_GANGOPS_LOYALTY3");
		case 5:
			return joaat("MPPLY_GANGOPS_CRIMMASMD");
		case 9:
			return joaat("MPPLY_GANGOPS_CRIMMASMD2");
		case 10:
			return joaat("MPPLY_GANGOPS_CRIMMASMD3");
		case 11:
			return joaat("MPPLY_GANGOPS_SUPPORT");
		default:
	}
	return joaat("MPPLY_GANGOPS_ALLINORDER");
}

int func_165(int iParam0)//Position - 0xFD51A
{
	switch (iParam0)
	{
		case 4:
			return 3;
		case 7:
			return 1;
		case 8:
			return 2;
		case 5:
			return 3;
		case 9:
			return 1;
		case 10:
			return 2;
		default:
	}
	return -1;
}

int func_166(int iParam0)//Position - 0xFD5DC
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 26;
		case 6:
			return 28;
		case 7:
			return 29;
		default:
	}
	return -1;
}

int func_167(int iParam0)//Position - 0xFD7E4
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		case 4:
			return 12;
		case 5:
			return 13;
		case 6:
			return 14;
		case 7:
			return 15;
		case 8:
			return 16;
		case 9:
			return 22;
		case 10:
			return 23;
		case 11:
			return 24;
		case 12:
			return 25;
		case 13:
			return 27;
		case 14:
		case 15:
			return 28;
		default:
	}
	return -1;
}

int func_168()//Position - 0x104D8B
{
	if (__LIB_4__.func_766(Global_4718592.f_116524) || __LIB_2__.func_259(Global_4718592.f_116524))
	{
		return 0;
	}
	return 1;
}

int func_169(int iParam0)//Position - 0x104DBD
{
	if (iParam0 >= 0 && iParam0 < 4)
	{
		return BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_12180, 9);
	}
	return 0;
}

void func_170()//Position - 0x11EBDE
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebPass"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPass");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebPassBW"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPassBW");
	}
}

void func_171()//Position - 0x11EC10
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebFail"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebFail");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebFailBW"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebFailBW");
	}
}

void func_172()//Position - 0x11EC42
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SuccessNeutral"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("SuccessNeutral");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("HeistCelebEnd"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebEnd");
	}
}

int func_173()//Position - 0x131EB8
{
	int iVar0;
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
		{
			if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_174()//Position - 0x131EF5
{
	return HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(10) == 3;
}

bool func_175()//Position - 0x131FC1
{
	return HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(10) == 1;
}

bool func_176()//Position - 0x131FD1
{
	return BitTest(Global_2621446, 24);
}

void func_177(var uParam0, char* sParam1, int iParam2)//Position - 0x13A98F
{
	float fVar0;
	fVar0 = (SYSTEM::TO_FLOAT(iParam2) / 1000f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "PAUSE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "PAUSE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "PAUSE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_178(var uParam0)//Position - 0x13AA25
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_INCREMENTAL_CASH_ANIMATION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_INCREMENTAL_CASH_ANIMATION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_INCREMENTAL_CASH_ANIMATION_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_179(int iParam0)//Position - 0x13AAE6
{
	switch (iParam0)
	{
		case 1:
			return "AWD_GANGOP0d" /* GXT: Complete Act I of The Doomsday Heist for the first time. */;
		case 2:
			return "AWD_GANGOP1d" /* GXT: Complete Act II of The Doomsday Heist for the first time. */;
		case 6:
			return "AWD_GANGOP2d" /* GXT: Complete Act III of The Doomsday Heist for the first time. */;
		case 3:
			return "AWD_GANGOP3d" /* GXT: Complete The Doomsday Heist in order. */;
		case 4:
			return "AWD_GANGOP7d" /* GXT: Complete The Doomsday Heist in order with the same team of 4 players. */;
		case 5:
			return "AWD_GANGOP9d" /* GXT: Complete The Doomsday Heist in order, with the same team of 4 players, on hard difficulty, without losing any lives on Setups and Finales. */;
		case 7:
			return "AWD_GANGOP4d" /* GXT: Complete The Doomsday Heist in order with the same team of 2 players. */;
		case 8:
			return "AWD_GANGOP6d" /* GXT: Complete The Doomsday Heist in order with the same team of 3 players. */;
		case 9:
			return "AWD_GANGOP5d" /* GXT: Complete The Doomsday Heist in order, with the same team of 2 players, on hard difficulty, without losing any lives on Setups and Finales. */;
		case 10:
			return "AWD_GANGOP8d" /* GXT: Complete The Doomsday Heist in order, with the same team of 3 players, on hard difficulty, without losing any lives on Setups and Finales. */;
		case 11:
			return "AWD_GANGO10d" /* GXT: Complete all acts of The Doomsday Heist as a crew member, ending with completion of the Act III finale. */;
		default:
	}
	return "";
}

int func_180(bool bParam0)//Position - 0x13AC40
{
	if (bParam0)
	{
		return 6;
	}
	return 2;
}

char* func_181()//Position - 0x13AC52
{
	if (!Global_2715699.f_3479.f_133)
	{
		return "CELEB_EL_CH_F" /* GXT: ELITE CHALLENGE INCOMPLETE */;
	}
	return "CELEB_EL_CH_P" /* GXT: ELITE CHALLENGE COMPLETE */;
}

struct<16> func_182(int iParam0, bool bParam1)//Position - 0x13AC74
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	iVar0 = 3600000;
	iVar1 = (iParam0 / iVar0);
	iVar2 = ((iParam0 - (iVar1 * iVar0)) / (iVar0 / 60));
	iVar3 = (((iParam0 - (iVar1 * iVar0)) - (iVar2 * (iVar0 / 60))) / 1000);
	iVar4 = (((iParam0 - (iVar1 * iVar0)) - (iVar2 * (iVar0 / 60))) - iVar3 * 1000);
	StringCopy(&Var5, "", 64);
	if (iVar1 != 0)
	{
		StringIntConCat(&Var5, iVar1, 64);
		StringConCat(&Var5, ":", 64);
	}
	if (iVar2 != 0)
	{
		if (iVar2 < 10)
		{
			StringConCat(&Var5, "0", 64);
		}
		StringIntConCat(&Var5, iVar2, 64);
	}
	else
	{
		StringConCat(&Var5, "00", 64);
	}
	StringConCat(&Var5, ":", 64);
	if (iVar3 != 0)
	{
		if (iVar3 < 10)
		{
			StringConCat(&Var5, "0", 64);
		}
		StringIntConCat(&Var5, iVar3, 64);
	}
	else
	{
		StringConCat(&Var5, "00", 64);
	}
	if (bParam1)
	{
		StringConCat(&Var5, ".", 64);
		if (iVar4 != 0)
		{
			if (iVar4 < 100)
			{
				StringConCat(&Var5, "0", 64);
			}
			if (iVar4 < 10)
			{
				StringConCat(&Var5, "0", 64);
			}
			StringIntConCat(&Var5, iVar4, 64);
		}
		else
		{
			StringConCat(&Var5, "000", 64);
		}
	}
	return Var5;
}

void func_183(var uParam0, int iParam1)//Position - 0x13AD84
{
	if (!*uParam0)
	{
		*iParam1 = 6;
		*uParam0 = 1;
	}
	else
	{
		*iParam1 = -1;
	}
}

void func_184(var uParam0, float fParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x13ADB4
{
	int iVar0;
	switch (iParam7)
	{
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 0;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iParam9 != -1)
	{
		iVar0 = iParam9;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_INCREMENTAL_CASH_WON_STEP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_INCREMENTAL_CASH_WON_STEP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_INCREMENTAL_CASH_WON_STEP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		if (iParam8 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_185(var uParam0)//Position - 0x13B021
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CREATE_INCREMENTAL_CASH_ANIMATION");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "CREATE_INCREMENTAL_CASH_ANIMATION");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "CREATE_INCREMENTAL_CASH_ANIMATION");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("SUMMARY");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("CASH");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_186(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x13B0E2
{
	char* sVar0;
	if (bParam4)
	{
		sVar0 = "CELEB_CUT_TAKE";
	}
	else
	{
		sVar0 = "CELEB_PAYMENT" /* GXT: PAYMENT */;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_CASH_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__.func_514(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	if (bParam5)
	{
		__LIB_0__.func_514("left");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_CASH_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__.func_514(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	if (bParam5)
	{
		__LIB_0__.func_514("left");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_CASH_WON_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	__LIB_0__.func_514(sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	if (bParam5)
	{
		__LIB_0__.func_514("left");
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_187(int iParam0)//Position - 0x13B3D2
{
	int iVar0;
	iVar0 = (333 * iParam0);
	iVar0 = (iVar0 + (2333 * iParam0));
	iVar0 += 333;
	return iVar0;
}

int func_188()//Position - 0x13BC6E
{
	if (__LIB_0__.func_850())
	{
		return 1;
	}
	if (__LIB_0__.func_863())
	{
		return 1;
	}
	return 0;
}

int func_189(var* uParam0, int iParam1)//Position - 0x13BCE9
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	if (__LIB_0__.func_585(*uParam0))
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			Var2 = { __LIB_0__.func_593() };
			NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&iVar0, 35, &Var2);
			iVar1 = iVar0;
			if (iVar1 != 0)
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&iVar0, 35, uParam0))
					{
						*iParam1 = 1;
						return iVar0 == iVar1;
					}
					else
					{
						*iParam1 = 1;
						return 0;
					}
				}
				else
				{
					*iParam1 = 1;
					return 0;
				}
			}
			else
			{
				*iParam1 = 1;
				return 0;
			}
		}
		else
		{
			*iParam1 = 1;
			return 0;
		}
	}
	else
	{
		*iParam1 = 1;
		return 0;
	}
	return 0;
}

void func_190()//Position - 0x13C033
{
	if (!__LIB_2__.func_214(PLAYER::PLAYER_ID(), 0, 0))
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}
}

var func_191(int iParam0)//Position - 0x13D9DB
{
	var uVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (__LIB_1__.func_264(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID())
				{
					if (bVar2 != iParam0)
					{
						MISC::SET_BIT(&uVar0, bVar2);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

Vector3 func_192(int iParam0, int iParam1)//Position - 0x13E306
{
	return Global_4523275[iParam0 /*97*/].f_18[iParam1 /*3*/];
}

int func_193(int iParam0)//Position - 0x1441BC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == __LIB_1__.func_701(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_194(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15711A
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_505)
	{
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
			*iParam2 = iParam3;
			uParam0->f_505 = 1;
			iVar0++;
			iVar1 = (iVar0 * 2 - 1);
			uParam0->f_509 = iVar1;
		}
		else if (iParam3 >= (iParam4 - 1))
		{
			*iParam2 = 0;
			uParam0->f_505 = 1;
		}
	}
}

int func_195(var uParam0)//Position - 0x15C721
{
	int iVar0;
	float fVar1;
	iVar0 = 200;
	__LIB_0__.func_471(&(uParam0->f_434), &(uParam0->f_434.f_1), &(uParam0->f_434.f_2), &(uParam0->f_434.f_3), 1);
	fVar1 = 1f;
	if (fVar1 == 1f)
	{
		if ((!uParam0->f_434.f_4 || !uParam0->f_434.f_9) || !uParam0->f_434.f_8)
		{
			if (uParam0->f_434.f_28 <= 0)
			{
				uParam0->f_434.f_28 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_434.f_32 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_434.f_28 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_32, iVar0 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_28) > iVar0 * 3))
				{
					fVar1 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_434.f_28 = 0;
		}
	}
	if (fVar1 == 1f)
	{
		if ((!uParam0->f_434.f_5 || !uParam0->f_434.f_10) || !uParam0->f_434.f_11)
		{
			if (uParam0->f_434.f_29 <= 0)
			{
				uParam0->f_434.f_29 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_434.f_33 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_434.f_29 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_33, iVar0 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_29) > iVar0 * 3))
				{
					fVar1 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_434.f_29 = 0;
		}
	}
	if (fVar1 == 1f)
	{
		if (!uParam0->f_434.f_6)
		{
			if (uParam0->f_434.f_30 <= 0)
			{
				uParam0->f_434.f_30 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_434.f_34 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_434.f_30 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_34, iVar0 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_30) > iVar0 * 3))
				{
					fVar1 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_434.f_30 = 0;
		}
	}
	if (fVar1 == 1f)
	{
		if (!uParam0->f_434.f_7)
		{
			if (uParam0->f_434.f_31 <= 0)
			{
				uParam0->f_434.f_31 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_434.f_35 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_434.f_31 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_35, iVar0 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_31) > iVar0 * 3))
				{
					fVar1 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_434.f_31 = 0;
		}
	}
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * fVar1));
	if (!uParam0->f_434.f_4)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_24, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_20) > iVar0)) || (uParam0->f_434.f_1 < 75 && uParam0->f_434.f_1 > -75))
		{
			uParam0->f_434.f_4 = 1;
		}
	}
	if (!uParam0->f_434.f_5)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_25, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_21) > iVar0)) || (uParam0->f_434 < 75 && uParam0->f_434 > -75))
		{
			uParam0->f_434.f_5 = 1;
		}
	}
	if (!uParam0->f_434.f_6)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_26, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_22) > iVar0)) || (uParam0->f_434.f_3 < 75 && uParam0->f_434.f_3 > -75))
		{
			uParam0->f_434.f_6 = 1;
		}
	}
	if (!uParam0->f_434.f_7)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_27, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_23) > iVar0)) || (uParam0->f_434.f_2 < 75 && uParam0->f_434.f_2 > -75))
		{
			uParam0->f_434.f_7 = 1;
		}
	}
	if (!uParam0->f_434.f_8)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_24, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_20) > iVar0))
		{
			uParam0->f_434.f_8 = 1;
		}
	}
	if (!uParam0->f_434.f_9)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_24, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_20) > iVar0))
		{
			uParam0->f_434.f_9 = 1;
		}
	}
	if (!uParam0->f_434.f_10)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_25, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_21) > iVar0))
		{
			uParam0->f_434.f_10 = 1;
		}
	}
	if (!uParam0->f_434.f_11)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_25, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_21) > iVar0))
		{
			uParam0->f_434.f_11 = 1;
		}
	}
	return iVar0;
}

int func_196(var uParam0, var uParam1)//Position - 0x16EA6A
{
	if (MISC::IS_PC_VERSION())
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			return 1;
		}
	}
	if (uParam0->f_5 == uParam1->f_4)
	{
		return 0;
	}
	if (__LIB_0__.func_863())
	{
		return 0;
	}
	return 1;
}

void func_197(var uParam0, int iParam1)//Position - 0x18A97A
{
	char* sVar0;
	if (iParam1 > 0)
	{
		__LIB_12__.func_540("", "END_LBD_WAITPN" /* GXT: Waiting for players (~a~) */, iParam1);
	}
	__LIB_1__.func_345(202, "FMMC_END_QUIT" /* GXT: Quit */, -1, 0);
	sVar0 = __LIB_4__.func_756();
	__LIB_1__.func_345(217, sVar0, -1, 0);
	if (uParam0->f_14 && uParam0->f_29 < 3)
	{
		__LIB_1__.func_345(205, "FMMC_ADDBK" /* GXT: Bookmark Job */, -1, 0);
	}
}

void func_198(int iParam0, int iParam1)//Position - 0x19A475
{
	Global_4521801 = iParam0;
	Global_4521801.f_1 = iParam1;
}

int func_199()//Position - 0x1A8D55
{
	return Global_1931975.f_1;
}

struct<6> func_200()//Position - 0x1A9EDF
{
	return Global_2714762.f_43.f_18;
}

char* func_201(int iParam0)//Position - 0x1ACAFD
{
	switch (iParam0)
	{
		case 1:
			return "apa_v_mp_h_01";
		case 2:
			return "apa_v_mp_h_02";
		case 3:
			return "apa_v_mp_h_03";
		case 4:
			return "apa_v_mp_h_04";
		case 5:
			return "apa_v_mp_h_05";
		case 6:
			return "apa_v_mp_h_06";
		case 7:
			return "apa_v_mp_h_07";
		case 8:
			return "apa_v_mp_h_08";
		default:
	}
	return "";
}

int func_202()//Position - 0x1ACEF6
{
	return Global_2715699.f_6331;
}

void func_203(char* sParam0)//Position - 0x1B307A
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "HeistCelebPass"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "HeistCelebPassBW"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPass");
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "HeistCelebEnd"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPass");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPassBW");
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "HeistCelebToast"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPass");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebPassBW");
		GRAPHICS::ANIMPOSTFX_STOP("HeistCelebEnd");
	}
	GRAPHICS::ANIMPOSTFX_PLAY(sParam0, 0, true);
}

bool func_204()//Position - 0x1DFBCA
{
	return BitTest(Global_2714762.f_43.f_4, 1);
}

void func_205(int iParam0)//Position - 0x1DFCDD
{
	Global_2714762.f_43 = iParam0;
}

int func_206()//Position - 0x1E1D1B
{
	return Global_4538824;
}

bool func_207()//Position - 0x1E1DB1
{
	if ((Global_4538805 && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_4538806)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&Global_4538806)) == 0)
	{
		__LIB_0__.func_917(0);
	}
	return Global_4538805;
}

int func_208()//Position - 0x1E26C7
{
	if ((__LIB_6__.func_178(Global_4718592.f_168757) || __LIB_8__.func_248(Global_4718592.f_168757)) || __LIB_6__.func_160(Global_4718592.f_168757))
	{
		return 100;
	}
	return 3000;
}

void func_209()//Position - 0x1E48BC
{
	struct<13> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_2715699.f_6348[iVar1 /*16*/] = { Var0 };
		Global_2715699.f_6348[iVar1 /*16*/].f_13 = -1;
		Global_2715699.f_6348[iVar1 /*16*/].f_14 = -1;
		Global_2715699.f_6348[iVar1 /*16*/].f_15 = -1;
		iVar1++;
	}
}

void func_210(var uParam0)//Position - 0x1E5030
{
	uParam0->f_405 = 0;
	uParam0->f_406 = 0;
	uParam0->f_407 = 0;
	uParam0->f_408 = 0;
	uParam0->f_409 = 0;
	uParam0->f_410 = 0;
	uParam0->f_411 = 0;
	uParam0->f_412 = 0;
	uParam0->f_413 = 0;
	uParam0->f_414 = 0;
	uParam0->f_417 = 0;
	uParam0->f_418 = 0;
	uParam0->f_419 = 0;
	uParam0->f_422 = 0;
	uParam0->f_423 = 0;
}

void func_211(var uParam0, int iParam1)//Position - 0x1E50A0
{
	uParam0->f_410 = iParam1;
}

bool func_212(var uParam0)//Position - 0x1E50AF
{
	return uParam0->f_410;
}

void func_213(var uParam0)//Position - 0x1E50BC
{
	int iVar0;
	char* sVar1;
	struct<16> Var2;
	StringCopy(&Var2, sVar1, 64);
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_82 = 0;
	uParam0->f_84 = { Var2 };
	uParam0->f_100 = { Var2 };
	uParam0->f_116 = { Var2 };
	uParam0->f_310 = { Var2 };
	uParam0->f_294 = { Var2 };
	uParam0->f_326 = { Var2 };
	uParam0->f_342 = { Var2 };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		MemCopy(&(uParam0->f_10[iVar0 /*13*/]), {Var2}, 8);
		uParam0->f_10[iVar0 /*13*/].f_8 = 0f;
		uParam0->f_10[iVar0 /*13*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[iVar0 /*13*/].f_12 = 0;
		uParam0->f_76[iVar0] = 0;
		uParam0->f_132[iVar0 /*16*/] = { Var2 };
		uParam0->f_213[iVar0 /*16*/] = { Var2 };
		uParam0->f_358[iVar0] = 0;
		uParam0->f_371[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_387[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	uParam0->f_83 = 0;
	uParam0->f_364 = 0;
	uParam0->f_365 = { 0f, 0f, 0f };
	uParam0->f_368 = { 0f, 0f, 0f };
	uParam0->f_403 = 0;
	uParam0->f_404 = 0;
	uParam0->f_405 = 0;
	uParam0->f_406 = 0;
	uParam0->f_407 = 0;
	uParam0->f_408 = 0;
	uParam0->f_409 = 0;
	uParam0->f_410 = 0;
	uParam0->f_411 = 0;
	uParam0->f_412 = 0;
	uParam0->f_413 = 0;
	uParam0->f_414 = 0;
	uParam0->f_417 = 0;
	uParam0->f_418 = 0;
	uParam0->f_419 = 0;
	uParam0->f_422 = 0;
	uParam0->f_423 = 0;
}

bool func_214()//Position - 0x1E526F
{
	return Global_2815059.f_4598;
}

void func_215(bool bParam0)//Position - 0x1E527E
{
	NETWORK::NETWORK_SET_VOICE_ACTIVE(bParam0);
	Global_2715699.f_6319 = bParam0;
}

bool func_216()//Position - 0x1E5295
{
	return Global_2715699.f_6319;
}

void func_217(int iParam0)//Position - 0x1E5443
{
	Global_1931975.f_1774 = iParam0;
}

bool func_218()//Position - 0x1E5454
{
	return Global_1931975.f_1774;
}

void func_219()//Position - 0x1E6766
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__.func_5();
	iVar2 = __LIB_0__.func_737(iVar0);
	iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
	if (BitTest(iVar3, 20))
	{
		MISC::CLEAR_BIT(&iVar3, 20);
		bVar1 = true;
	}
	if (BitTest(iVar3, 21))
	{
		MISC::CLEAR_BIT(&iVar3, 21);
		bVar1 = true;
	}
	if (BitTest(iVar3, 22))
	{
		MISC::CLEAR_BIT(&iVar3, 22);
		bVar1 = true;
	}
	if (bVar1)
	{
		STATS::SET_FREEMODE_PROLOGUE_DONE(iVar3, iVar0);
	}
}

void func_220()//Position - 0x1E6D50
{
	Global_1931975.f_1766 = 0;
}

bool func_221()//Position - 0x1E6F07
{
	return BitTest(Global_2815059.f_4660, 4);
}

void func_222(var uParam0)//Position - 0x1E7F8A
{
	Global_2714762.f_43.f_40 = uParam0;
}

void func_223(char* sParam0)//Position - 0x1E7F9C
{
	StringCopy(&(Global_2714762.f_43.f_6), sParam0, 24);
}

int func_224()//Position - 0x1E7FB0
{
	return Global_2714762.f_43;
}

bool func_225()//Position - 0x1E9574
{
	return __LIB_0__.func_517(Global_112411, 2);
}

int func_226(int iParam0)//Position - 0x1EC965
{
	switch (iParam0)
	{
		case 421:
		case 424:
		case 423:
		case 426:
		case 427:
		case 533:
		case 534:
		case 558:
		case 562:
		case 460:
		case 572:
		case 573:
		case 575:
		case 577:
		case 578:
		case 579:
		case 580:
		case 581:
		case 582:
		case 583:
		case 584:
		case 585:
		case 598:
		case 600:
		case 601:
		case 633:
		case 634:
		case 640:
		case 667:
		case 646:
		case 613:
		case 742:
		case 760:
		case 404:
		case 758:
		case 747:
		case 748:
			return 1;
			break;
	}
	return 0;
}

int func_227(int iParam0, int iParam1)//Position - 0x1ECA5A
{
	switch (iParam1)
	{
		case joaat("blazer5"):
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "B_BA" /* GXT: Blazer Aqua */);
			return 1;
			break;
		case joaat("tampa3"):
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "BLIP_562" /* GXT: Weaponized Tampa */);
			return 1;
			break;
		case joaat("apc"):
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "BLIP_558" /* GXT: APC */);
			return 1;
			break;
		case joaat("oppressor"):
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "BLIP_559" /* GXT: Oppressor */);
			return 1;
			break;
		case joaat("halftrack"):
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "BLIP_560" /* GXT: Half Track */);
			return 1;
			break;
		case joaat("dune3"):
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "BLIP_561" /* GXT: Dune FAV */);
			return 1;
			break;
		case joaat("trailersmall2"):
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "BLIP_563" /* GXT: Anti-Aircraft Trailer */);
			return 1;
			break;
		case joaat("nightshark"):
			if (__LIB_1__.func_324(Global_4718592.f_168757) || __LIB_1__.func_86(Global_4718592.f_168757))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "BLIP_NSK" /* GXT: Nightshark */);
				return 1;
			}
			break;
		case joaat("technical"):
		case joaat("technical3"):
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "BLIP_TECH" /* GXT: Technical */);
			return 1;
			break;
	}
	return 0;
}

void func_228(int* iParam0)//Position - 0x1ED558
{
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
}

void func_229(int iParam0)//Position - 0x1ED643
{
	switch (iParam0)
	{
		case 1:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Ahead", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 4:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Behind", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 2:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Left", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 3:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Right", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 5:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Ahead", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 6:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Behind", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
		case 7:
			if (!RECORDING::IS_REPLAY_RECORDING())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_Arrow_Behind", "DLC_HEISTS_GENERAL_FRONTEND_SOUNDS", true);
			}
			break;
	}
}

void func_230(int iParam0)//Position - 0x1EE50B
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2815059.f_4660, 28))
		{
			MISC::SET_BIT(&(Global_2815059.f_4660), 28);
		}
	}
	else if (BitTest(Global_2815059.f_4660, 28))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 28);
	}
}

int func_231(int iParam0)//Position - 0x1F7D22
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_1 == iParam0)
		{
			return 1;
		}
		if (Global_2703735.f_2400[iVar0 /*80*/].f_1 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 0;
}

bool func_232(int iParam0)//Position - 0x1F8D5D
{
	return Global_262145.f_5032[7] == iParam0;
}

bool func_233(int iParam0)//Position - 0x203754
{
	return Global_262145.f_5032[5] == iParam0;
}

void func_234(int iParam0)//Position - 0x2065AB
{
	Global_1946250.f_3371 = iParam0;
}

int func_235(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x2065DD
{
	if (iParam0 == 114)
	{
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.61975f, 36.637207f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 25.07854f, -664.3469f, 30.406733f, 14.144746f, -690.1883f, 38.617584f, 16f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 12.052811f, -689.5426f, 30.588087f, -44.429474f, -693.0777f, 38.33809f, 70f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -43.32302f, -693.9668f, 30.588087f, -72.39151f, -683.4483f, 39.483612f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.637825f, -686.18097f, 30.588087f, -39.304077f, -662.2571f, 39.480827f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	else if (iParam0 == 127)
	{
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1397.2491f, 3609.5845f, 33.98091f, 1395.3737f, 3615.067f, 37.54341f, 3.1f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1394.6075f, 3612.337f, 33.98091f, 1392.0453f, 3611.4053f, 37.48091f, 2.9375f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1391.9431f, 3612.024f, 33.98091f, 1385.8204f, 3609.7896f, 40.629475f, 1.5625f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1386.8076f, 3609.3362f, 37.306503f, 1385.4124f, 3613.4968f, 40.72715f, 1.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1387.2428f, 3605.9607f, 37.949646f, 1398.6206f, 3610.15f, 40.82697f, 15.6875f, false, true, 0))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Param1, Param2, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_236(int iParam0)//Position - 0x31CA72
{
	if (*iParam0 != -1)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(*iParam0);
		*iParam0 = -1;
	}
}

struct<4> func_237(int iParam0, int iParam1)//Position - 0x330458
{
	struct<4> Var0;
	StringCopy(&Var0, "COR_ROLE_", 16);
	StringIntConCat(&Var0, Global_4718592.f_92565[iParam1], 16);
	if (iParam0 != -1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_658[iParam0 /*22957*/].f_12305[iParam1 /*16*/])))
		{
			MemCopy(&Var0, {Global_4718592.f_658[iParam0 /*22957*/].f_12305[iParam1 /*16*/]}, 4);
		}
	}
	return Var0;
}

int func_238(int iParam0)//Position - 0x34F2AC
{
	switch (iParam0)
	{
		case 9:
			return 123;
			break;
	}
	return 1;
}

void func_239()//Position - 0x34F32C
{
	Global_1649593.f_1167 = 1;
}

int func_240(bool bParam0)//Position - 0x351157
{
	int iVar0;
	iVar0 = bParam0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
	{
		return BitTest(Global_2678393.f_370, iVar0);
	}
	return 0;
}

bool func_241()//Position - 0x354FFA
{
	return Global_2703735.f_2400[0 /*80*/].f_2 == 3;
}

char* func_242(int iParam0, int iParam1)//Position - 0x35C579
{
	char* sVar0;
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_2";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_2";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_2";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_2";
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_3";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_3";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_3";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_3";
					break;
			}
			break;
		case 7:
		case 8:
		case 35:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_4";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_4";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_4";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_4";
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_4";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_4";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_4";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_4";
					break;
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_HFIN";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_HFIN";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_HFIN";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_HFIN";
					break;
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION_HPREP";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE_HPREP";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE_HPREP";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE_HPREP";
					break;
			}
			break;
		case 62:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_IMP_EXP_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_IMP_EXP_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_IMP_EXP_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_IMP_EXP_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_IMP_EXP_VEHICLE_CHASE";
					break;
			}
			break;
		case 63:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_GR_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_GR_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_GR_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_GR_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_GR_VEHICLE_CHASE";
					break;
			}
			break;
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_CMH_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_CMH_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_CMH_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_CMH_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_CMH_VEHICLE_CHASE";
					break;
			}
			break;
		case 73:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_CMH_ADV_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_CMH_ADV_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_CMH_ADV_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_CMH_ADV_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_CMH_ADV_VEHICLE_CHASE";
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ASSAULT_ADV_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_ASSAULT_ADV_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_ASSAULT_ADV_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_ASSAULT_ADV_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_ASSAULT_ADV_VEHICLE_CHASE";
					break;
			}
			break;
		case 75:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_CASINO_BRAWL_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_CASINO_BRAWL_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_CASINO_BRAWL_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_CASINO_BRAWL_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_CASINO_BRAWL_VEHICLE_CHASE";
					break;
			}
			break;
		case 64:
		case 65:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_SMG_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_SMG_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_SMG_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SMG_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_SMG_VEHICLE_CHASE";
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_CHF_ACTION";
					break;
				case 2:
					sVar0 = "MP_CHF_AIRBORNE";
					break;
				case 15:
					sVar0 = "MP_CHF_DRIVING";
					break;
				case 16:
					sVar0 = "MP_CHF_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "MP_CHF_SUSPENSE_LOW";
					break;
				case 18:
					sVar0 = "MP_CHF_SUSPENSE_HIGH";
					break;
				case 5:
					sVar0 = "MP_CHF_VEHICLE_CHASE";
					break;
				case 3:
					sVar0 = "MP_CHF_SILENT";
					break;
			}
			break;
		case 77:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_SUM20_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_SUM20_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_SUM20_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUM20_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_SUM20_VEHICLE_CHASE";
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 1:
					sVar0 = "HEI4_FIN_ACTION";
					break;
				case 2:
					sVar0 = "HEI4_FIN_AIRBORNE";
					break;
				case 15:
					sVar0 = "HEI4_FIN_DRIVING";
					break;
				case 16:
					sVar0 = "HEI4_FIN_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "HEI4_FIN_SUSPENSE_LOW";
					break;
				case 18:
					sVar0 = "HEI4_FIN_SUSPENSE_HIGH";
					break;
				case 5:
					sVar0 = "HEI4_FIN_VEHICLE_CHASE";
					break;
				case 3:
					sVar0 = "HEI4_FIN_SILENT";
					break;
				case 19:
					sVar0 = "HEI4_FIN_SAFE_ROOM";
					break;
				case 20:
					sVar0 = "HEI4_FIN_SAFE_ROOM_AGRRO";
					break;
			}
			break;
		case 79:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_TUNER_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_TUNER_AIRBORNE";
					break;
				case 15:
					sVar0 = "MP_MC_TUNER_DRIVING";
					break;
				case 16:
					sVar0 = "MP_MC_TUNER_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "MP_MC_TUNER_SUSPENSE";
					break;
				case 18:
					sVar0 = "HEI4_FIN_SUSPENSE_HIGH";
					break;
				case 5:
					sVar0 = "MP_MC_TUNER_VEHICLE_CHASE_A";
					break;
				case 3:
					sVar0 = "MP_MC_TUNER_SILENT";
					break;
				case 21:
					sVar0 = "MP_MC_TUNER_VEHICLE_CHASE_B";
					break;
			}
			break;
		case 80:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_FIXER_HOLDOUT_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_FIXER_HOLDOUT_AIRBORNE";
					break;
				case 4:
					sVar0 = "MP_MC_FIXER_HOLDOUT_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_FIXER_HOLDOUT_VEHICLE_CHASE";
					break;
				case 3:
					sVar0 = "MP_MC_FIXER_HOLDOUT_SILENT";
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_FIXER_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_FIXER_AIRBORNE";
					break;
				case 15:
					sVar0 = "MP_MC_FIXER_DRIVING";
					break;
				case 16:
					sVar0 = "MP_MC_FIXER_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "MP_MC_FIXER_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_FIXER_VEHICLE_CHASE_A";
					break;
				case 3:
					sVar0 = "MP_MC_FIXER_SILENT";
					break;
				case 21:
					sVar0 = "MP_MC_FIXER_VEHICLE_CHASE_B";
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_GOLF_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_GOLF_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_GOLF_DRIVING";
					break;
				case 3:
					sVar0 = "DATA_LEAK_GOLF_SILENT";
					break;
				case 16:
					sVar0 = "DATA_LEAK_GOLF_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_GOLF_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_GOLF_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_GOLF_VEHICLE_CHASE_B";
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_PARTY_PROMO_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_PARTY_PROMO_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_PARTY_PROMO_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_PARTY_PROMO_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_PARTY_PROMO_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_PARTY_PROMO_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_PARTY_PROMO_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_PARTY_PROMO_SILENT";
					break;
			}
			break;
		case 84:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_BILLIONAIRE_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_BILLIONAIRE_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_BILLIONAIRE_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_BILLIONAIRE_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_BILLIONAIRE_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_BILLIONAIRE_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_BILLIONAIRE_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_BILLIONAIRE_SILENT";
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_HOOD_PASS_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_HOOD_PASS_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_HOOD_PASS_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_HOOD_PASS_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_HOOD_PASS_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_HOOD_PASS_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_HOOD_PASS_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_HOOD_PASS_SILENT";
					break;
			}
			break;
		case 86:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_FIRE_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_FIRE_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_FIRE_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_FIRE_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_FIRE_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_FIRE_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_FIRE_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_FIRE_SILENT";
					break;
			}
			break;
		case 87:
			switch (iParam1)
			{
				case 1:
					sVar0 = "DATA_LEAK_DFWD_ACTION";
					break;
				case 2:
					sVar0 = "DATA_LEAK_DFWD_AIRBORNE";
					break;
				case 15:
					sVar0 = "DATA_LEAK_DFWD_DRIVING";
					break;
				case 16:
					sVar0 = "DATA_LEAK_DFWD_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "DATA_LEAK_DFWD_SUSPENSE";
					break;
				case 5:
					sVar0 = "DATA_LEAK_DFWD_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "DATA_LEAK_DFWD_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "DATA_LEAK_DFWD_SILENT";
					break;
			}
			break;
		case 88:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_MPSUM2_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_MPSUM2_AIRBORNE";
					break;
				case 15:
					sVar0 = "MP_MC_MPSUM2_DRIVING";
					break;
				case 16:
					sVar0 = "MP_MC_MPSUM2_MED_INTENSITY";
					break;
				case 4:
				case 17:
					sVar0 = "MP_MC_MPSUM2_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_MPSUM2_VEHICLE_CHASE_A";
					break;
				case 21:
					sVar0 = "MP_MC_MPSUM2_VEHICLE_CHASE_B";
					break;
				case 3:
					sVar0 = "MP_MC_MPSUM2_SILENT";
					break;
			}
			break;
		case 89:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_H22_ADV_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_H22_ADV_AIRBORNE";
					break;
				case 4:
				case 17:
					sVar0 = "MP_MC_H22_ADV_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_H22_ADV_VEHICLE_CHASE";
					break;
				case 3:
					sVar0 = "MP_MC_H22_ADV_SILENT";
					break;
			}
			break;
		default:
			switch (iParam1)
			{
				case 1:
					sVar0 = "MP_MC_ACTION";
					break;
				case 2:
					sVar0 = "MP_MC_AIRBORNE";
					break;
				case 3:
					sVar0 = "MP_MC_SILENT";
					break;
				case 4:
					sVar0 = "MP_MC_SUSPENSE";
					break;
				case 5:
					sVar0 = "MP_MC_VEHICLE_CHASE";
					break;
			}
			break;
	}
	return sVar0;
}

void func_243(int iParam0)//Position - 0x36DAEE
{
	if (iParam0 != Global_1951104)
	{
		Global_1951104 = iParam0;
	}
}

void func_244(var uParam0)//Position - 0x36DDFB
{
	struct<97> Var0;
	Var0 = 32;
	*uParam0 = { Var0 };
}

void func_245()//Position - 0x36DE15
{
	struct<3> Var0;
	Global_1941652.f_47.f_1009 = { Var0 };
}

void func_246()//Position - 0x36DE2C
{
	struct<9> Var0;
	Global_1941652.f_47.f_2188 = { Var0 };
}

void func_247()//Position - 0x36DE45
{
	int iVar0;
	struct<16> Var1;
	struct<4> Var2;
	Global_1941652.f_47.f_1474 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/] = { Var1 };
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_16 = { Var1 };
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_32 = { Var2 };
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_38 = { Var1 };
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_54 = 0;
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_36 = 0;
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_55 = 0;
		Global_1941652.f_47.f_1474.f_1[iVar0 /*57*/].f_56 = 0;
		iVar0++;
	}
	Global_1941652.f_47.f_1474.f_686 = 0;
	Global_1941652.f_47.f_1474.f_688 = 0;
	Global_1941652.f_47.f_1474.f_689 = 0;
	Global_1941652.f_47.f_1474.f_690 = 0;
	Global_1941652.f_47.f_1474.f_691 = 0;
	Global_1941652.f_47.f_1474.f_692 = 0;
	Global_1941652.f_47.f_1474.f_693 = 0;
	Global_1941652.f_47.f_1474.f_694 = 0;
	Global_1941652.f_47.f_1474.f_695 = 0f;
	Global_1941652.f_47.f_1474.f_696 = 0f;
	Global_1941652.f_47.f_1474.f_697 = 0f;
	Global_1941652.f_47.f_1474.f_698 = 0f;
	Global_1941652.f_47.f_1474.f_699 = 1f;
}

void func_248()//Position - 0x36DFBB
{
	struct<22> Var0;
	Var0.f_5 = 2;
	Global_1941652.f_47.f_1 = { Var0 };
}

void func_249(int* iParam0, bool bParam1)//Position - 0x36F6DD
{
	if (bParam1)
	{
		if (!BitTest(*iParam0, 8))
		{
			MISC::SET_BIT(iParam0, 8);
		}
	}
	else if (BitTest(*iParam0, 8))
	{
		MISC::CLEAR_BIT(iParam0, 8);
	}
}

void func_250()//Position - 0x37497C
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_1__.func_917(iVar0, &bVar1))
		{
			VEHICLE::SET_VEHICLE_FIXED(iVar0);
		}
		if (bVar1)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
}

int func_251(int iParam0, int iParam1)//Position - 0x375681
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	else if (iParam1 > iParam0)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_252()//Position - 0x37D7B7
{
	return Global_32184;
}

int func_253(bool bParam0)//Position - 0x387DF0
{
	if (bParam0)
	{
		return 25 + 1;
	}
	return 25 + 1;
}

int func_254()//Position - 0x3936C6
{
	return joaat("G_M_M_ChiGoon_02");
}

void func_255(bool bParam0)//Position - 0x398355
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_2, 14))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 14);
		}
	}
	else if (BitTest(Global_1946250.f_2, 14))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 14);
	}
}

bool func_256()//Position - 0x398396
{
	return BitTest(Global_1946250.f_2, 14);
}

int func_257(int iParam0)//Position - 0x3A1E46
{
	if (__LIB_15__.func_28(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_258(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, bool bParam4)//Position - 0x3A59C3
{
	struct<3> Var0;
	if (!bParam4)
	{
		Param1.f_2 = (Param1.f_2 - (0.5f * fParam3));
	}
	Var0 = { Param0 - Param1 };
	if (Var0.f_2 < 0f || Var0.f_2 > fParam3)
	{
		return 0;
	}
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam2 * fParam2);
}

int func_259(int iParam0, int iParam1, int iParam2)//Position - 0x3A7037
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	sVar0 = "scr_indep_fireworks";
	sVar1 = "scr_indep_firework_starburst";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		switch (iParam0)
		{
			case 0:
				sVar1 = "scr_indep_firework_starburst";
				break;
			case 1:
				sVar1 = "scr_indep_firework_fountain";
				break;
			case 2:
				sVar1 = "scr_indep_firework_shotburst";
				break;
		}
		GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
		if (iParam2 > 0)
		{
			HUD::GET_HUD_COLOUR(iParam2, &iVar2, &iVar3, &iVar4, &uVar5);
		}
		else
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
			switch (iParam2)
			{
				case 1:
					iVar2 = 255;
					iVar3 = 0;
					iVar4 = 0;
					break;
				case 2:
					iVar2 = 0;
					iVar3 = 255;
					iVar4 = 0;
					break;
				case 3:
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
					break;
				case 4:
					iVar2 = 255;
					iVar3 = 255;
					iVar4 = 0;
					break;
				case 5:
					iVar2 = 0;
					iVar3 = 255;
					iVar4 = 255;
					break;
				case 6:
					iVar2 = 255;
					iVar3 = 0;
					iVar4 = 255;
					break;
				case 7:
					iVar2 = 255;
					iVar3 = 255;
					iVar4 = 255;
					break;
				}
		}
		GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar4));
		GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(sVar1, ENTITY::GET_ENTITY_COORDS(iParam1, true), 0f, 0f, 0.12f, 1f, false, false, false, false);
		return 1;
	}
	return 0;
}

bool func_260(int iParam0, struct<3> Param1)//Position - 0x3ABBFA
{
	int iVar0;
	if (BitTest(Global_4980736.f_36356[iParam0 /*134*/].f_22, 3))
	{
		iVar0 = SYSTEM::FLOOR(MISC::ABSF((Param1.f_2 - Global_4980736.f_36356[iParam0 /*134*/].f_2)));
		if (iVar0 <= Global_4980736.f_36356[iParam0 /*134*/].f_66)
		{
			Param1.f_2 = Global_4980736.f_36356[iParam0 /*134*/].f_2;
		}
		else
		{
			return 0;
		}
	}
	return SYSTEM::VDIST2(Param1, Global_4980736.f_36356[iParam0 /*134*/]) < SYSTEM::POW(SYSTEM::TO_FLOAT(Global_4980736.f_36356[iParam0 /*134*/].f_65), 2f);
}

int func_261(int iParam0, char* sParam1)//Position - 0x3ABC92
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "Airhorn", 16);
			return 1;
		case 1:
			StringCopy(sParam1, "Roar", 16);
			return 1;
		case 2:
			StringCopy(sParam1, "Guitar", 16);
			return 1;
		case 3:
			StringCopy(sParam1, "Guitar_2", 16);
			return 1;
		case 4:
			StringCopy(sParam1, "Horn", 16);
			return 1;
		case 5:
			StringCopy(sParam1, "Thunder", 16);
			return 1;
		case 6:
			StringCopy(sParam1, "Klaxon", 16);
			return 1;
		default:
	}
	return 0;
}

char* func_262(int iParam0)//Position - 0x3ACF97
{
	switch (iParam0)
	{
		case 15:
			return "DLC_HEISTS_GENERIC_SOUNDS";
		case 16:
			return "DLC_PRISON_BREAK_HEIST_SOUNDS";
		case 17:
			return "DLC_PRISON_BREAK_HEIST_SOUNDS";
		case 19:
			return "dlc_xm_silo_finale_sounds";
		case 20:
			return "DLC_XM_Silo_Secret_Door_Sounds";
		case 21:
			return "dlc_xm_silo_finale_sounds";
		case 22:
			return "dlc_ch_heist_finale_security_alarms_sounds";
		case 23:
			return "dlc_xm_silo_finale_sounds";
		case 24:
			return "dlc_xm_silo_finale_sounds";
		default:
	}
	return "ALARMS_SOUNDSET";
}

char* func_263(int iParam0)//Position - 0x3AD029
{
	switch (iParam0)
	{
		case 0:
			return "Bell_01";
		case 1:
			return "Bell_02";
		case 2:
			return "Bell_03";
		case 3:
			return "Klaxon_01";
		case 4:
			return "Klaxon_02";
		case 5:
			return "Klaxon_03";
		case 6:
			return "Klaxon_04";
		case 7:
			return "Klaxon_05";
		case 8:
			return "Klaxon_06";
		case 9:
			return "Klaxon_07";
		case 10:
			return "Small_01";
		case 11:
			return "Small_02";
		case 12:
			return "Small_03";
		case 13:
			return "Small_04";
		case 14:
			return "Small_05";
		case 15:
			return "Sirens_Approach";
		case 16:
			return "Gate_Alarm_Open";
		case 17:
			return "Gate_Alarm_Close";
		case 18:
			return "Klaxon_07_Louder";
		case 19:
			return "launch_alarm_loop";
		case 20:
			return "Exit_Silo";
		case 21:
			return "missile_system_armed";
		case 22:
			return "Camera_Alarm";
		case 23:
			return "silo_alarm_loop";
		case 24:
			return "launch_alarm_loop";
		default:
	}
	return "";
}

int func_264(float fParam0)//Position - 0x3B2997
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = 255;
	fVar1 = 3500f;
	if (Global_2787859)
	{
		fVar1 = 10000f;
	}
	if (fParam0 >= fVar1)
	{
		iVar0 = 0;
	}
	else if (fParam0 <= 1000f)
	{
		iVar0 = 255;
	}
	else
	{
		fVar2 = (1f - ((fParam0 - 1000f) / fVar1));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
	}
	return iVar0;
}

float func_265(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x3B29F5
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	return fVar0;
}

void func_266(int iParam0, bool bParam1, int iParam2)//Position - 0x3B30EF
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, true), false);
	fVar0 = 0.015f;
	HUD::GET_HUD_COLOUR(iParam2, &iVar1, &iVar2, &iVar3, &iVar4);
	if (!bParam1)
	{
		GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar1, iVar2, iVar3, iVar4, true, 0);
	}
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

void func_267()//Position - 0x3B9DD7
{
	__LIB_15__.func_34(joaat("WEAPON_ARENA_MACHINE_GUN"), 20, 100, 1128792064, 0.6f, 0, 3000);
	__LIB_15__.func_33(1);
	__LIB_15__.func_334();
}

void func_268()//Position - 0x3CC91E
{
	bool bVar0;
	bVar0 = 32;
	while (bVar0 <= 45)
	{
		__LIB_15__.func_20(bVar0);
		bVar0++;
	}
}

bool func_269(bool bParam0)//Position - 0x3D91B0
{
	return __LIB_1__.func_424(bParam0, 24);
}

bool func_270(bool bParam0)//Position - 0x3D91C0
{
	return BitTest(Global_1888862[bParam0 /*120*/].f_29, 0);
}

void func_271(int iParam0)//Position - 0x3DA04D
{
	if (iParam0 > 21)
	{
	}
	else
	{
		Global_4541504 = iParam0;
	}
}

void func_272(bool bParam0)//Position - 0x3DA065
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_4541229, 4);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_4541229, 4);
	}
}

void func_273(int iParam0)//Position - 0x3DE96A
{
	if (iParam0 == 1)
	{
		Global_1836591 = 1;
	}
	else
	{
		Global_1836591 = 0;
	}
}

int func_274(int iParam0)//Position - 0x3E45AE
{
	if (((((((((__LIB_9__.func_476(iParam0) || iParam0 == joaat("hauler")) || iParam0 == joaat("hauler2")) || iParam0 == joaat("phantom")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("avenger")) || iParam0 == joaat("akula")) || iParam0 == joaat("tug")) || iParam0 == joaat("volatol"))
	{
		return 1;
	}
	return 0;
}

void func_275(int iParam0)//Position - 0x3EFBD2
{
	if (iParam0 == 1)
	{
		Global_1836606 = 1;
	}
	else
	{
		Global_1836606 = 0;
	}
}

void func_276(int iParam0)//Position - 0x3F0B07
{
	if (Global_1958711.f_6 != iParam0)
	{
		Global_1958711.f_6 = iParam0;
	}
}

void func_277(int iParam0)//Position - 0x3F28D9
{
	Global_1661003 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_278(var uParam0, char* sParam1)//Position - 0x3FB5AE
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam1))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam1);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_739))
	{
		AUDIO::STOP_SOUND(uParam0->f_739);
	}
}

void func_279()//Position - 0x3FBBF2
{
	struct<4> Var0;
	Var0.f_3 = 255;
	Var0.f_0 = 0;
	Var0.f_1 = 0;
	Var0.f_2 = 0;
	Var0.f_3 = 215;
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, Var0.f_0, Var0.f_1, Var0.f_2, Var0.f_3, false);
}

float func_280(int iParam0)//Position - 0x3FBD75
{
	float fVar0;
	switch (iParam0)
	{
		case 1:
			fVar0 = 0.581f;
			break;
		case 2:
			fVar0 = 0.707f;
			break;
		case 3:
			fVar0 = 0.833f;
			break;
		case 4:
			fVar0 = 0.959f;
			break;
	}
	return fVar0;
}

void func_281(int iParam0, var uParam1, var uParam2)//Position - 0x3FBFA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	*uParam1 = 0.182f;
	fVar0 = (0.358f + 0.07037f);
	fVar1 = (fVar0 + 0.07037f);
	fVar2 = (fVar1 + 0.07037f);
	fVar3 = (fVar2 + 0.07037f);
	fVar4 = (fVar3 + 0.07037f);
	fVar5 = (fVar4 + 0.07037f);
	fVar6 = (fVar5 + 0.07037f);
	switch (iParam0)
	{
		case 0:
			*uParam2 = 0.358f;
			break;
		case 1:
			*uParam2 = fVar0;
			break;
		case 2:
			*uParam2 = fVar1;
			break;
		case 3:
			*uParam2 = fVar2;
			break;
		case 4:
			*uParam2 = fVar3;
			break;
		case 5:
			*uParam2 = fVar4;
			break;
		case 6:
			*uParam2 = fVar5;
			break;
		case 7:
			*uParam2 = fVar6;
			break;
	}
}

int func_282(int iParam0, int iParam1, int iParam2)//Position - 0x3FC65D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_283(var uParam0, int iParam1)//Position - 0x3FC83E
{
	return BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iParam1 /*3*/].f_1, 1);
}

bool func_284(var uParam0, int iParam1)//Position - 0x3FC85A
{
	return BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iParam1 /*3*/].f_1, 0);
}

void func_285(var uParam0)//Position - 0x3FCBA4
{
	if (!BitTest(uParam0->f_752, 1) && uParam0->f_756 >= 4)
	{
		MISC::SET_BIT(&(uParam0->f_752), 1);
		MISC::SET_BIT(&(uParam0->f_752), 2);
	}
}

void func_286(var uParam0, int iParam1)//Position - 0x3FCBD7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_2 == iParam1)
		{
			if (!BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1, 0))
			{
				if (uParam0->f_756 >= 4)
				{
					return;
				}
				uParam0->f_756++;
				MISC::SET_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
				if (!BitTest(uParam0->f_752, 7))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Tile_select", uParam0->f_741, true);
				}
			}
			else
			{
				uParam0->f_756 = (uParam0->f_756 - 1);
				MISC::CLEAR_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
				if (!BitTest(uParam0->f_752, 7))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Tile_select", uParam0->f_741, true);
				}
			}
		}
		iVar0++;
	}
}

int func_287(var uParam0)//Position - 0x3FCCAB
{
	if (*uParam0 != 4 && *uParam0 != 8)
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 1))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 3))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 4))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 5))
	{
		return 0;
	}
	return 1;
}

void func_288(var uParam0)//Position - 0x3FCF3D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1, 0))
		{
		}
		iVar0++;
	}
}

int func_289(var uParam0)//Position - 0x3FCF6E
{
	int iVar0;
	int iVar1;
	iVar0 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/);
	iVar1 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/);
	if (iVar1 < 100 && !BitTest(uParam0->f_736, 0))
	{
		MISC::SET_BIT(&(uParam0->f_736), 0);
		return 188;
	}
	if (iVar1 > 150 && !BitTest(uParam0->f_736, 1))
	{
		MISC::SET_BIT(&(uParam0->f_736), 1);
		return 187;
	}
	if (iVar0 < 100 && !BitTest(uParam0->f_736, 2))
	{
		MISC::SET_BIT(&(uParam0->f_736), 2);
		return 189;
	}
	if (iVar0 > 150 && !BitTest(uParam0->f_736, 3))
	{
		MISC::SET_BIT(&(uParam0->f_736), 3);
		return 190;
	}
	if (((iVar1 > 100 && iVar1 < 150) && iVar0 > 100) && iVar0 < 150)
	{
		uParam0->f_736 = 0;
	}
	return 202;
}

struct<6> func_290(int iParam0)//Position - 0x3FD364
{
	struct<6> Var0;
	StringCopy(&Var0, "mpfclone_Retro_print", 24);
	StringIntConCat(&Var0, iParam0, 24);
	return Var0;
}

struct<8> func_291(int iParam0)//Position - 0x3FD37F
{
	struct<8> Var0;
	StringCopy(&Var0, "MPFClone_Retro_PrintFull", 32);
	StringIntConCat(&Var0, iParam0 + 1, 32);
	return Var0;
}

void func_292(var uParam0)//Position - 0x3FD417
{
	uParam0->f_766[0 /*25*/][4 /*3*/] = 4;
	uParam0->f_766[0 /*25*/][5 /*3*/] = 5;
	uParam0->f_766[0 /*25*/][6 /*3*/] = 6;
	uParam0->f_766[0 /*25*/][7 /*3*/] = 7;
	uParam0->f_766[1 /*25*/][5 /*3*/] = 5;
	uParam0->f_766[1 /*25*/][6 /*3*/] = 6;
	uParam0->f_766[1 /*25*/][7 /*3*/] = 7;
	uParam0->f_766[2 /*25*/][6 /*3*/] = 6;
	uParam0->f_766[2 /*25*/][7 /*3*/] = 7;
}

int func_293(int iParam0, int iParam1)//Position - 0x3FD4FB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 5:
				case 6:
					return 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 2:
				case 4:
				case 5:
				case 7:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 2:
				case 5:
				case 6:
				case 7:
					return 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 6:
				case 7:
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 5:
				case 6:
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 6:
				case 7:
					return 1;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 2:
				case 4:
				case 5:
					return 1;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 6:
				case 7:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_294(var uParam0, int iParam1)//Position - 0x3FD683
{
	if (iParam1 < 1)
	{
		uParam0->f_735 = 1;
	}
	else if (iParam1 > 4)
	{
		uParam0->f_735 = 4;
	}
	else
	{
		uParam0->f_735 = iParam1;
	}
}

void func_295(char* sParam0, int iParam1)//Position - 0x3FDF31
{
	StringCopy(sParam0, "FINGERPRINT_HACKING_MINIGAME_NUMBERS_0", 64);
	if (iParam1 > 9)
	{
		StringIntConCat(sParam0, 9, 64);
	}
	else if (iParam1 < 0)
	{
		StringIntConCat(sParam0, 0, 64);
	}
	else
	{
		StringIntConCat(sParam0, iParam1, 64);
	}
}

void func_296(var uParam0, char* sParam1)//Position - 0x3FDF81
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam1))
	{
		AUDIO::START_AUDIO_SCENE(sParam1);
	}
	if (*uParam0 > 2)
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_739))
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_739, "Background_Hum", uParam0->f_741, true);
		}
	}
}

float func_297(int iParam0)//Position - 0x3FE7C1
{
	float fVar0;
	switch (iParam0)
	{
		case 1:
			fVar0 = 0.536f;
			break;
		case 2:
			fVar0 = 0.662f;
			break;
		case 3:
			fVar0 = 0.782f;
			break;
		case 4:
			fVar0 = 0.905f;
			break;
	}
	return fVar0;
}

void func_298(int iParam0, var uParam1, var uParam2)//Position - 0x3FEB06
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0.105f;
			*uParam2 = 0.306f;
			break;
		case 1:
			*uParam1 = 0.239f;
			*uParam2 = 0.306f;
			break;
		case 2:
			*uParam1 = 0.105f;
			*uParam2 = 0.439f;
			break;
		case 3:
			*uParam1 = 0.239f;
			*uParam2 = 0.439f;
			break;
		case 4:
			*uParam1 = 0.105f;
			*uParam2 = 0.572f;
			break;
		case 5:
			*uParam1 = 0.239f;
			*uParam2 = 0.572f;
			break;
		case 6:
			*uParam1 = 0.105f;
			*uParam2 = 0.706f;
			break;
		case 7:
			*uParam1 = 0.239f;
			*uParam2 = 0.706f;
			break;
	}
}

void func_299(var uParam0, int iParam1)//Position - 0x3FF27E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_2 == iParam1)
		{
			if (!BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1, 0))
			{
				if (uParam0->f_756 >= 4)
				{
					return;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Select_Print_Tile", uParam0->f_741, true);
				uParam0->f_756++;
				MISC::SET_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Deselect_Print_Tile", uParam0->f_741, true);
				uParam0->f_756 = (uParam0->f_756 - 1);
				MISC::CLEAR_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
			}
		}
		iVar0++;
	}
}

void func_300(var uParam0, int iParam1)//Position - 0x3FF33C
{
	switch (iParam1)
	{
		case 188:
			uParam0->f_753 = (uParam0->f_753 - 2);
			if (uParam0->f_753 < 0)
			{
				if (uParam0->f_753 == -1)
				{
					uParam0->f_753 = 7;
				}
				else
				{
					uParam0->f_753 = 6;
				}
			}
			break;
		case 187:
			uParam0->f_753 += 2;
			if (uParam0->f_753 >= 8)
			{
				if (uParam0->f_753 == 8)
				{
					uParam0->f_753 = 0;
				}
				else
				{
					uParam0->f_753 = 1;
				}
			}
			break;
		case 189:
			uParam0->f_753 = (uParam0->f_753 - 1);
			if (uParam0->f_753 < 0)
			{
				uParam0->f_753 = 7;
			}
			break;
		case 190:
			uParam0->f_753++;
			if (uParam0->f_753 >= 8)
			{
				uParam0->f_753 = 0;
			}
			break;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Cursor_Move", uParam0->f_741, true);
}

struct<6> func_301(int iParam0)//Position - 0x3FF674
{
	struct<6> Var0;
	StringCopy(&Var0, "mpfclone_print", 24);
	StringIntConCat(&Var0, iParam0, 24);
	return Var0;
}

int func_302(int iParam0, int iParam1)//Position - 0x3FF771
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 3:
				case 5:
				case 6:
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
				case 3:
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
					return 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_303(var* uParam0)//Position - 0x3FFA1F
{
	int iVar0;
	uParam0->f_752 = 0;
	uParam0->f_3 = 6;
	uParam0->f_755 = 0;
	uParam0->f_993 = 255;
	uParam0->f_993.f_1 = 255;
	uParam0->f_993.f_2 = 255;
	uParam0->f_993.f_3 = 250;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_971[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_980[iVar0] = 255;
		iVar0++;
	}
	uParam0->f_989 = 0;
	uParam0->f_990 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	uParam0->f_991 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	uParam0->f_732 = 300000;
	uParam0->f_733 = 30000;
	uParam0->f_734 = 0;
	uParam0->f_1 = 1;
}

void func_304(char* sParam0, int iParam1)//Position - 0x4001B5
{
	StringCopy(sParam0, "Numbers_", 24);
	if (iParam1 > 9)
	{
		StringIntConCat(sParam0, 9, 24);
	}
	else if (iParam1 < 0)
	{
		StringIntConCat(sParam0, 0, 24);
	}
	else
	{
		StringIntConCat(sParam0, iParam1, 24);
	}
}

void func_305(var uParam0, int iParam1, int iParam2)//Position - 0x400307
{
	float fVar0;
	int iVar1;
	fVar0 = ((SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(iParam2)) * 100f);
	iVar1 = SYSTEM::FLOOR(fVar0);
	if (iVar1 > 50)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_Low", uParam0->f_741, true);
	}
	else if (iVar1 < 17)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_High", uParam0->f_741, true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_Med", uParam0->f_741, true);
	}
}

float func_306(int iParam0, bool bParam1)//Position - 0x400C10
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
			case 4:
			case 7:
				return (0.878f - 0.0944f);
				break;
			case 0:
			case 2:
			case 5:
			case 8:
				return 0.878f;
				break;
			case 3:
			case 6:
			case 9:
				return (0.878f + 0.0944f);
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return (0.433f + (0.0944f * 2f));
				break;
			case 1:
			case 2:
			case 3:
				return (0.433f - 0.0944f);
				break;
			case 4:
			case 5:
			case 6:
				return 0.433f;
				break;
			case 7:
			case 8:
			case 9:
				return (0.433f + 0.0944f);
				break;
			}
	}
	return 0.878f;
}

bool func_307(var uParam0, int iParam1, int iParam2)//Position - 0x401159
{
	return (BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 1) && !BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 0));
}

void func_308(var uParam0, int iParam1, int iParam2)//Position - 0x401193
{
	MISC::CLEAR_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2]), 2);
}

bool func_309(var uParam0, int iParam1, int iParam2)//Position - 0x4011B4
{
	return BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 2);
}

bool func_310(var uParam0, int iParam1, int iParam2)//Position - 0x4011D2
{
	return BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 0);
}

bool func_311(var uParam0, int iParam1, int iParam2)//Position - 0x4011F0
{
	return (BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 1) && BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 0));
}

void func_312(var uParam0)//Position - 0x401A12
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				MISC::CLEAR_BIT(&(uParam0->f_757[iVar0 /*37*/][iVar1 /*6*/][iVar2]), 2);
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_313(var uParam0, int iParam1, int iParam2)//Position - 0x401A66
{
	return BitTest(uParam0->f_757[uParam0->f_755 /*37*/][iParam1 /*6*/][iParam2], 1);
}

void func_314(var uParam0, int iParam1)//Position - 0x401A84
{
	switch (iParam1)
	{
		case 188:
			uParam0->f_753 = (uParam0->f_753 - 1);
			if (uParam0->f_753 < 0)
			{
				uParam0->f_753 = 4;
			}
			break;
		case 187:
			uParam0->f_753++;
			if (uParam0->f_753 >= 5)
			{
				uParam0->f_753 = 0;
			}
			break;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Cursor_Move", uParam0->f_741, true);
}

int func_315(var uParam0)//Position - 0x401AEB
{
	if (*uParam0 != 4 && *uParam0 != 8)
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 1))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 3))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 4))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 5))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 8))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 7))
	{
		return 0;
	}
	if (BitTest(uParam0->f_752, 12))
	{
		return 0;
	}
	return 1;
}

void func_316(var uParam0)//Position - 0x401D8B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[6];
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			iVar4[iVar3] = -1;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			iVar4[iVar3] = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			iVar3++;
		}
		iVar3 = 1;
		while (iVar3 <= 4)
		{
			if (iVar4[iVar3] == iVar4[(iVar3 - 1)] || iVar4[iVar3] == iVar4[iVar3 + 1])
			{
				iVar4[iVar3] = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			}
			iVar3++;
		}
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				if (iVar2 == iVar4[iVar1])
				{
					MISC::SET_BIT(&(uParam0->f_757[iVar0 /*37*/][iVar1 /*6*/][iVar2]), 0);
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_317(var* uParam0)//Position - 0x401FF2
{
	int iVar0;
	uParam0->f_752 = 0;
	uParam0->f_3 = 6;
	uParam0->f_926 = 255;
	uParam0->f_926.f_1 = 255;
	uParam0->f_926.f_2 = 255;
	uParam0->f_926.f_3 = 250;
	uParam0->f_732 = 300000;
	uParam0->f_733 = 30000;
	uParam0->f_1 = 1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		uParam0->f_911[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		iVar0++;
	}
}

float func_318(struct<2> Param0)//Position - 0x410A57
{
	return SYSTEM::SQRT((SYSTEM::POW(Param0.f_0, 2f) + SYSTEM::POW(Param0.f_1, 2f)));
}

int func_319(int* iParam0)//Position - 0x431DF3
{
	if (BitTest(*iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_320(int* iParam0)//Position - 0x431E08
{
	TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_62));
	TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_63));
	TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_64));
	TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_65));
}

void func_321(var uParam0)//Position - 0x431F42
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_51))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(uParam0->f_51, false);
		CAM::DESTROY_ALL_CAMS(false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
}

int func_322(int* iParam0)//Position - 0x431F7E
{
	if (BitTest(*iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_323(int* iParam0, int iParam1, var uParam2)//Position - 0x43217F
{
	struct<3> Var0;
	struct<3> Var1;
	if (*iParam0 == 0 || *uParam2 == 0)
	{
	}
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), false, false);
	}
	Var1 = { 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iParam1) + 90f) };
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - PED::GET_ANIM_INITIAL_OFFSET_POSITION("mini@safe_cracking", "DOOR_OPEN_SUCCEED_STAND_SAFE", 0f, 0f, 0f, Var1, 0f, 2) };
	*uParam2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var0, Var1, 2, false, false, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), *uParam2, "mini@safe_cracking", "DOOR_OPEN_SUCCEED_STAND", 8f, -8f, 1421, 16, 1000f, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iParam1, *uParam2, "mini@safe_cracking", "DOOR_OPEN_SUCCEED_STAND_SAFE", 8f, -8f, 137);
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(*uParam2);
}

float func_324(int* iParam0)//Position - 0x4325AE
{
	return iParam0->f_72;
}

void func_325(int* iParam0)//Position - 0x432923
{
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iParam0->f_64);
}

int func_326(int* iParam0)//Position - 0x432937
{
	return iParam0->f_73;
}

void func_327(int* iParam0)//Position - 0x432943
{
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iParam0->f_63);
}

int func_328()//Position - 0x432957
{
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "idle_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "idle_heavy_breathe", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "idle_look_around", 3))
	{
		return 1;
	}
	return 0;
}

void func_329(int* iParam0)//Position - 0x432A6E
{
	TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iParam0->f_65);
}

int func_330()//Position - 0x432D95
{
	int iVar0;
	iVar0 = (70 - SYSTEM::ROUND(0f));
	if (iVar0 > 70)
	{
		iVar0 = 70;
	}
	else if (iVar0 < 7)
	{
		iVar0 = 7;
	}
	return iVar0;
}

void func_331(var uParam0)//Position - 0x432E41
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_51))
	{
		uParam0->f_51 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_ACTIVE(uParam0->f_51, true);
		CAM::SET_CAM_PARAMS(uParam0->f_51, uParam0->f_52, uParam0->f_55, uParam0->f_58, 0, 1, 1, 2);
		CAM::POINT_CAM_AT_ENTITY(uParam0->f_51, PLAYER::PLAYER_PED_ID(), 0.7f, 0f, 0.15f, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_332(var uParam0)//Position - 0x432FA9
{
	uParam0->f_26 = 0.5f;
	uParam0->f_26.f_1 = 0.5f;
	uParam0->f_26.f_2 = 0.298f;
	uParam0->f_26.f_3 = 0.495f;
	uParam0->f_26.f_4 = 255;
	uParam0->f_26.f_5 = 255;
	uParam0->f_26.f_6 = 255;
	uParam0->f_26.f_7 = 255;
	uParam0->f_26.f_8 = 0f;
	uParam0->f_35 = 0.499f;
	uParam0->f_35.f_1 = 0.499f;
	uParam0->f_35.f_2 = 0.15f;
	uParam0->f_35.f_3 = 0.25f;
	uParam0->f_35.f_4 = 255;
	uParam0->f_35.f_5 = 255;
	uParam0->f_35.f_6 = 255;
	uParam0->f_35.f_7 = 255;
	uParam0->f_35.f_8 = 0f;
}

void func_333()//Position - 0x4331C9
{
	TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "step_out", 4f, -8f, -1, 1310720, 0f, false, false, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
}

int func_334(int* iParam0)//Position - 0x4331FC
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	if ((((((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), iParam0->f_15, 0.75f, 0.75f, 1.5f, false, true, 1) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || __LIB_0__.func_191(8, -1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || iParam0->f_71)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), false, false);
		}
		return 1;
	}
	return 0;
}

int func_335()//Position - 0x433295
{
	if ((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || __LIB_0__.func_191(8, -1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || __LIB_0__.func_190()) || Global_75485) || __LIB_0__.func_77(0))
	{
		return 0;
	}
	return 1;
}

char* func_336(int iParam0)//Position - 0x43372C
{
	switch (iParam0)
	{
		case 0:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 5))
			{
				case 1:
					return "dial_turn_succeed_1";
				case 2:
					return "dial_turn_succeed_2";
				case 3:
					return "dial_turn_succeed_3";
				case 4:
					return "dial_turn_succeed_4";
				default:
			}
			break;
		case 1:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 5))
			{
				case 1:
					return "dial_turn_fail_1";
				case 2:
					return "dial_turn_fail_2";
				case 3:
					return "dial_turn_fail_3";
				case 4:
					return "dial_turn_fail_4";
				default:
			}
			break;
	}
	return "idle_base";
}

void func_337(int iParam0, struct<3> Param1, float fParam2)//Position - 0x433A3C
{
	if (*iParam0 == -1)
	{
		*iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, Param1, fParam2);
	}
}

void func_338(int iParam0, int iParam1)//Position - 0x43456A
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam1);
	if (iVar0 != -1)
	{
		STREAMING::REQUEST_ANIM_DICT("mini@safe_cracking");
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::OBJ_TO_NET(iParam0)) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.95f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0) && STREAMING::HAS_ANIM_DICT_LOADED("mini@safe_cracking"))
					{
						ENTITY::PLAY_ENTITY_ANIM(iParam0, "DOOR_OPEN_SUCCEED_STAND_SAFE", "mini@safe_cracking", 8f, false, true, false, 0.96f, 262144);
					}
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
				}
			}
		}
	}
}

int func_339(int iParam0)//Position - 0x435371
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!__LIB_7__.func_175(&(Global_1911933[iParam0 /*260*/].f_94.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_340()//Position - 0x4353BD
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!__LIB_7__.func_175(&(Global_2683918.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

void func_341(var uParam0, int iParam1, int iParam2)//Position - 0x43BA92
{
	if (iParam1 == iParam2)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam2]))
		{
			if (uParam0->f_10 >= uParam0->f_16 && uParam0->f_10 <= uParam0->f_17)
			{
				if (uParam0->f_12 > 1f)
				{
					uParam0->f_12 = 1f;
				}
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "power", uParam0->f_12, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "power", 0f, false);
			}
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam2]))
		{
			if (uParam0->f_10 > uParam0->f_17 && uParam0->f_12 > 0f)
			{
				if (uParam0->f_19 > 1f)
				{
					uParam0->f_19 = 1f;
				}
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", uParam0->f_19, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", 0f, false);
			}
		}
	}
	else
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "power", 0.5f, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", 0.1f, false);
		}
	}
}

void func_342(var uParam0, int iParam1, int iParam2)//Position - 0x43BBB3
{
	if (iParam1 == iParam2)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_47[iParam2]))
		{
			if (uParam0->f_10 > 0f)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_47[iParam2], "intensity", uParam0->f_12, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_47[iParam2], "intensity", 0f, false);
			}
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam2]))
		{
			if (uParam0->f_10 > 0f)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "intensity", uParam0->f_12, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "intensity", 0f, false);
			}
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam2]))
		{
			if (uParam0->f_10 > uParam0->f_17 && uParam0->f_12 > 0f)
			{
				if (uParam0->f_19 > 1f)
				{
					uParam0->f_19 = 1f;
				}
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", uParam0->f_19, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", 0f, false);
			}
		}
	}
	else
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_47[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_47[iParam2], "intensity", 0.5f, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_80[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_80[iParam2], "power", 0.5f, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_113[iParam2]))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_113[iParam2], "heat", 0.1f, false);
		}
	}
}

void func_343(bool bParam0, int iParam1)//Position - 0x43BD8B
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hei_prop_hei_drill_hole"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ch_finale"))
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_ch_finale");
	}
	if (bParam0)
	{
		STREAMING::REMOVE_ANIM_DICT(__LIB_3__.func_760());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_laserdrill_01a"));
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL");
	}
	else
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2");
		STREAMING::REMOVE_ANIM_DICT(__LIB_3__.func_760());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_ch_heist_drill"));
	}
	STREAMING::REMOVE_ANIM_DICT("anim@heists@fleeca_bank@drilling");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
}

int func_344(bool bParam0, int iParam1)//Position - 0x43BE05
{
	int iVar0;
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT(__LIB_3__.func_759());
		STREAMING::REQUEST_MODEL(joaat("ch_prop_laserdrill_01a"));
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL", false, -1);
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(__LIB_3__.func_760());
		STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_heist_drill"));
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1);
	}
	STREAMING::REQUEST_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ch_finale");
	STREAMING::REQUEST_ANIM_DICT("anim@heists@fleeca_bank@drilling");
	iVar0 = 1;
	if (bParam0)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_3__.func_759()) && !STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_laserdrill_01a")))
		{
			iVar0 = 0;
		}
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL", false, -1))
		{
			iVar0 = 0;
		}
	}
	else
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_3__.func_760()))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_ch_heist_drill")))
		{
			iVar0 = 0;
		}
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1))
		{
			iVar0 = 0;
		}
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1))
		{
			iVar0 = 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@heists@fleeca_bank@drilling"))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_hei_drill_hole")))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ch_finale"))
	{
		iVar0 = 0;
	}
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("HACK", 3))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_345()//Position - 0x442AB2
{
	return BitTest(Global_1946250.f_2, 25);
}

void func_346(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x443211
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_SECONDARY_COLOUR(*uParam0, iParam1, iParam2, iParam3);
	}
}

int func_347(int iParam0)//Position - 0x443D18
{
	switch (iParam0)
	{
		case 64:
			return 422;
			break;
		case 528:
			return 528;
			break;
		case 529:
			return 529;
			break;
		case 530:
			return 530;
			break;
		case 531:
			return 531;
			break;
		case 532:
			return 532;
			break;
		case 533:
			return 533;
			break;
		case 534:
			return 534;
			break;
		case 512:
			return 512;
			break;
		case 558:
			return 558;
			break;
		case 559:
			return 559;
			break;
		case 560:
			return 560;
			break;
		case 561:
			return 561;
			break;
		case 562:
			return 562;
			break;
		case 563:
			return 563;
			break;
		case 595:
			return 595;
			break;
		case 596:
			return 596;
			break;
		case 597:
			return 597;
			break;
		case 598:
			return 598;
			break;
		case 599:
			return 599;
			break;
		case 600:
			return 600;
			break;
		case 601:
			return 601;
			break;
		case 602:
			return 602;
			break;
		case 603:
			return 603;
			break;
		case 589:
			return 589;
			break;
		case 631:
			return 631;
			break;
		case 632:
			return 632;
			break;
		case 633:
			return 633;
			break;
		case 634:
			return 634;
			break;
		case 635:
			return 635;
			break;
		case 636:
			return 636;
			break;
		case 637:
			return 637;
			break;
		case 640:
			return 640;
			break;
		case 658:
			return 658;
			break;
		case 659:
			return 659;
			break;
		case 660:
			return 660;
			break;
		case 661:
			return 661;
			break;
		case 662:
			return 662;
			break;
		case 663:
			return 663;
			break;
		case 664:
			return 664;
			break;
		case 665:
			return 665;
			break;
		case 666:
			return 666;
			break;
		case 667:
			return 667;
			break;
		case 668:
			return 668;
			break;
		case 669:
			return 669;
			break;
		case 646:
			return 646;
			break;
		case 742:
			return 742;
			break;
		case 746:
			return 746;
			break;
		case 753:
			return 753;
			break;
		case 758:
			return 758;
			break;
		case 348:
			return 348;
			break;
		case 749:
			return 749;
			break;
		case 757:
			return 757;
			break;
		case 754:
			return 754;
			break;
		case 745:
			return 745;
			break;
		case 755:
			return 755;
			break;
		case 759:
			return 759;
			break;
		case 747:
			return 747;
			break;
		case 748:
			return 748;
			break;
		case 750:
			return 750;
			break;
		case 824:
			return 824;
			break;
		case 825:
			return 825;
			break;
		case 823:
			return 823;
			break;
		case 820:
			return 820;
			break;
		case 821:
			return 821;
			break;
		case 818:
			return 818;
			break;
	}
	return iParam0;
}

void func_348(int iParam0, int iParam1, int iParam2)//Position - 0x4452E1
{
	switch (iParam0)
	{
		case 2:
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam2, joaat("VEHICLE_WEAPON_RUINER_BULLET"));
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_RUINER_BULLET"), iParam1, iParam2);
			break;
		case 3:
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam2, joaat("VEHICLE_WEAPON_CANNON_BLAZER"));
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_CANNON_BLAZER"), iParam1, iParam2);
			break;
	}
	VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 0, Global_1574508.f_1);
}

void func_349(int iParam0, int iParam1, int iParam2)//Position - 0x445343
{
	switch (iParam0)
	{
		case 2:
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam2, joaat("VEHICLE_WEAPON_RUINER_ROCKET"));
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), iParam1, iParam2);
			VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 1, Global_1574492.f_3);
			break;
	}
}

void func_350(int iParam0, int iParam1, int iParam2)//Position - 0x4453C1
{
	switch (iParam0)
	{
		case 2:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_BULLET"), iParam1, iParam2);
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam2, joaat("VEHICLE_WEAPON_RUINER_ROCKET"));
			break;
		case 3:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_CANNON_BLAZER"), iParam1, iParam2);
			break;
	}
	VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 0, 0);
}

void func_351(int iParam0, int iParam1, int iParam2)//Position - 0x445412
{
	switch (iParam0)
	{
		case 2:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), iParam1, iParam2);
			VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 1, -1);
			PLAYER::SET_PLAYER_LOCKON(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	}
}

void func_352(int iParam0, int iParam1, int iParam2)//Position - 0x445449
{
	switch (iParam0)
	{
		case 2:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), iParam1, iParam2);
			VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 1, -1);
			break;
	}
}

void func_353(int iParam0, int iParam1, int iParam2)//Position - 0x445477
{
	switch (iParam0)
	{
		case 2:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_PLAYER_LASER"), iParam1, iParam2);
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_BULLET"), iParam1, iParam2);
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_RUINER_ROCKET"), iParam1, iParam2);
			break;
		case 3:
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_CANNON_BLAZER"), iParam1, iParam2);
			break;
	}
	VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam1, 0, 0);
}

int func_354()//Position - 0x4454D8
{
	if (((Global_1574485 == 1 || Global_1574492 == 1) || Global_1574481.f_3 == 1) || Global_1574508 == 1)
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)//Position - 0x44AE43
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 20);
	}
	return 0;
}

int func_356(int iParam0, int iParam1)//Position - 0x44AEF1
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 1:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 8);
			case 2:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 10);
			case 3:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 12);
			case 4:
				return BitTest(Global_1970897[iParam0 /*68*/].f_18, 14);
			}
		default:
	}
	return 0;
}

int func_357(int iParam0)//Position - 0x44B048
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 1);
	}
	return 0;
}

int func_358(int iParam0)//Position - 0x44B066
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_40, 22);
	}
	return 0;
}

int func_359(int iParam0)//Position - 0x44B0C2
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 5);
	}
	return 0;
}

int func_360(int iParam0)//Position - 0x44B101
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 5);
	}
	return 0;
}

int func_361(int iParam0)//Position - 0x44B15F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 8);
	}
	return 0;
}

bool func_362(bool bParam0)//Position - 0x44B9AD
{
	return Global_1977138[bParam0 /*57*/].f_26 == 1;
}

int func_363(int iParam0)//Position - 0x44CE9E
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_833, 3))
	{
		return 1;
	}
	return 0;
}

bool func_364(bool bParam0)//Position - 0x44CEBC
{
	return __LIB_10__.func_886(Global_2678393.f_624[bParam0], &(Global_2678393.f_389), bParam0);
}

int func_365(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x44E27D
{
	if (BitTest(uParam0, 9))
	{
		if ((iParam3 == joaat("granger") || iParam3 == joaat("barracks")) || iParam3 == joaat("barracks3"))
		{
			return joaat("prop_box_ammo03a_set2");
		}
		else
		{
			return joaat("prop_box_ammo03a_set");
		}
	}
	else if (BitTest(uParam0, 10))
	{
		if ((iParam3 == joaat("granger") || iParam3 == joaat("barracks")) || iParam3 == joaat("barracks3"))
		{
			return joaat("hei_prop_crate_stack_01");
		}
		else
		{
			return joaat("prop_drop_crate_01_set");
		}
	}
	else if (BitTest(uParam0, 11))
	{
		if (iParam3 == joaat("granger"))
		{
			return 0;
		}
		else
		{
			return joaat("prop_mb_crate_01a_set");
		}
	}
	else if (BitTest(uParam1, 8))
	{
		return joaat("hei_prop_mini_sever_02");
	}
	else if (BitTest(uParam1, 27))
	{
		return joaat("hei_prop_mini_sever_03");
	}
	else if (BitTest(uParam1, 11))
	{
		return joaat("hei_prop_heist_tub_truck");
	}
	else if (BitTest(uParam1, 20))
	{
		return joaat("hei_prop_hei_ammo_pile");
	}
	else if (BitTest(uParam1, 21))
	{
		return joaat("hei_prop_hei_ammo_pile_02");
	}
	else if (BitTest(uParam1, 24))
	{
		return joaat("hei_prop_heist_weed_pallet_02");
	}
	else if (BitTest(uParam1, 25))
	{
		return joaat("hei_prop_drug_statue_stack");
	}
	else if (BitTest(uParam1, 26))
	{
		return joaat("hei_prop_heist_transponder");
	}
	else if (BitTest(uParam1, 28))
	{
		return joaat("hei_prop_heist_emp");
	}
	else if (BitTest(uParam2, 24))
	{
		return joaat("xm_prop_vancrate_01a");
	}
	return 0;
}

int func_366(var uParam0, int iParam1)//Position - 0x44F4F5
{
	bool bVar0;
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (uParam0->f_41 < 3)
					{
						return 25;
					}
					return 33;
				case 1:
					return 43;
				case 2:
					return 52;
				default:
			}
			break;
		case 1:
			if (uParam0->f_41 >= 2)
			{
				bVar0 = true;
			}
			switch (iParam1)
			{
				case 0:
					if (bVar0)
					{
						return 87;
					}
					return 127;
				case 1:
					if (bVar0)
					{
						return 107;
					}
					return 142;
				default:
			}
			break;
	}
	return 0;
}

int func_367(var uParam0, int iParam1)//Position - 0x44F589
{
	bool bVar0;
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 33;
				case 2:
					return 43;
				default:
			}
			break;
		case 1:
			if (uParam0->f_41 >= 2)
			{
				bVar0 = true;
			}
			switch (iParam1)
			{
				case 0:
					if (bVar0)
					{
						return 67;
					}
					return 107;
				case 1:
					if (bVar0)
					{
						return 87;
					}
					return 127;
				default:
			}
			break;
	}
	return 0;
}

int func_368(int iParam0)//Position - 0x44F60F
{
	switch (iParam0)
	{
		case 31:
		case 27:
		case 28:
		case 29:
			return 1;
		default:
	}
	return 0;
}

int func_369(int iParam0, int iParam1)//Position - 0x44F63B
{
	switch (iParam0)
	{
		case 25:
			return 52;
		case 26:
			if (iParam1 == 1)
			{
				return 53;
			}
			return 60;
		case 27:
			if (iParam1 == 1)
			{
				return 54;
			}
			return 61;
		case 28:
			if (iParam1 == 1)
			{
				return 55;
			}
			return 62;
		case 29:
			if (iParam1 == 1)
			{
				return 56;
			}
			return 63;
		case 30:
			if (iParam1 == 1)
			{
				return 57;
			}
			return 64;
		case 31:
			if (iParam1 == 1)
			{
				return 58;
			}
			return 65;
		case 32:
			if (iParam1 == 1)
			{
				return 59;
			}
			return 66;
		case 80:
			return 100;
		case 81:
			return 101;
		case 82:
			return 102;
		case 83:
			return 103;
		case 84:
			return 104;
		case 85:
			return 105;
		case 86:
			return 106;
		case 67:
			return 87;
		case 68:
			return 88;
		case 69:
			return 89;
		case 70:
			return 90;
		case 71:
			return 91;
		case 72:
			return 92;
		case 73:
			return 93;
		case 74:
			return 94;
		case 75:
			return 95;
		case 76:
			return 96;
		case 77:
			return 97;
		case 78:
			return 98;
		case 79:
			return 99;
		default:
	}
	return -1;
}

int func_370(int iParam0, int iParam1)//Position - 0x451AB3
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT((iParam0 * iParam1)) / IntToFloat((SYSTEM::FLOOR((32f / IntToFloat(iParam1))) * iParam1))));
	return iVar0;
}

int func_371(int iParam0)//Position - 0x454587
{
	if (iParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_372(var uParam0, int iParam1)//Position - 0x45B791
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_373()//Position - 0x476FB3
{
	int iVar0[4];
	int iVar1;
	iVar0[0] = -1608031236;
	iVar0[1] = 1969557112;
	iVar0[2] = -2088850773;
	iVar0[3] = 1466913421;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0[iVar1]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar0[iVar1], 0);
		}
		iVar1++;
	}
}

float func_374(float fParam0, float fParam1)//Position - 0x48C812
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	else if (fParam1 > fParam0)
	{
		return fParam1;
	}
	return fParam0;
}

void func_375(int iParam0)//Position - 0x48FF2B
{
	if (Global_1958711.f_4 != iParam0)
	{
		Global_1958711.f_4 = iParam0;
	}
}

int func_376()//Position - 0x48FF46
{
	if (Global_1958711.f_4 != -1 && Global_1958711.f_4 != 0)
	{
		return Global_1958711.f_4;
	}
	return Global_1837205;
}

float func_377(int iParam0)//Position - 0x49A0FA
{
	return SYSTEM::TO_FLOAT((iParam0 * iParam0));
}

void func_378(var uParam0)//Position - 0x4B4D68
{
	if (BitTest(uParam0->f_1.f_1, 4))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1.f_1), 4);
	}
}

void func_379(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4B6C3C
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	if (bParam0)
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
	}
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
	if (bParam2)
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	}
	if (bParam1)
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	}
	if (bParam4)
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 341 /*INPUT_VEH_HYDRAULICS_CONTROL_DOWN*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 338 /*INPUT_VEH_HYDRAULICS_CONTROL_LEFT*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 339 /*INPUT_VEH_HYDRAULICS_CONTROL_RIGHT*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 340 /*INPUT_VEH_HYDRAULICS_CONTROL_UP*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 343 /*INPUT_VEH_HYDRAULICS_CONTROL_UD*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 342 /*INPUT_VEH_HYDRAULICS_CONTROL_LR*/, true);
	}
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	__LIB_16__.func_591(bParam3);
}

void func_380(bool bParam0)//Position - 0x4BE290
{
	if (!Global_2667225.f_26.f_2)
	{
		Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_26.f_2 = 1;
	}
	if (!Global_2667225.f_26.f_1 == bParam0)
	{
		Global_2667225.f_26.f_1 = bParam0;
		Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (!bParam0)
	{
		Global_2667225.f_26.f_4 = 1;
	}
}

bool func_381()//Position - 0x4BE449
{
	return Global_2667225.f_26.f_1;
}

int func_382()//Position - 0x4C193E
{
	if (!Global_2667225.f_676 == 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__.func_638(SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675))
		{
			return 1;
		}
	}
	return 0;
}

void func_383()//Position - 0x4C5A00
{
	Global_2715699.f_6321 = 0;
}

int func_384(var uParam0)//Position - 0x4CC6F7
{
	switch (uParam0->f_51.f_1)
	{
		case 9:
		case 13:
		case 12:
			if (__LIB_15__.func_263())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_385()//Position - 0x4D04AE
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 9)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_386(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x4D0E5C
{
	int iVar0;
	iVar0 = MISC::ABSI(iParam0);
	*uParam4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 1000000f));
	iVar0 = (iVar0 - (*uParam4 * 1000000));
	*uParam3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 100000f));
	iVar0 = (iVar0 - (*uParam3 * 100000));
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 100f));
	iVar0 = (iVar0 - *uParam1 * 100);
	*uParam2 = iVar0;
}

int func_387()//Position - 0x4D31F0
{
	return 0;
	if (__LIB_0__.func_86(Global_4718592.f_165321))
	{
		return 0;
	}
	return 1;
}

void func_388(int iParam0)//Position - 0x4D99A0
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274 = 0;
	switch (iParam0)
	{
		case 1:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 13))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 13);
			}
			break;
		case 2:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 0))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 0);
			}
			break;
		case 3:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 1))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 1);
			}
			break;
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 2))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 2);
			}
			break;
		case 5:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 3))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 3);
			}
			break;
		case 6:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 4))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 4);
			}
			break;
		case 7:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 5))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 5);
			}
			break;
		case 8:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 6))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 6);
			}
			break;
		case 9:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 7))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 7);
			}
			break;
		case 10:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 8))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 8);
			}
			break;
		case 11:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 9))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 9);
			}
			break;
		case 12:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 10))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 10);
			}
			break;
		case 13:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 11))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 11);
			}
			break;
		case 14:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274, 12))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_274), 12);
			}
			break;
		default:
			break;
	}
}

int func_389()//Position - 0x4D9CC4
{
	switch (Global_4718592.f_169366.f_3)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 7;
		case 7:
			return 8;
		case 8:
			return 9;
		case 9:
			return 10;
		case 10:
			return 11;
		case 11:
			return 12;
		case 12:
			return 13;
		case 13:
			return 14;
		default:
	}
	return 0;
}

void func_390(int iParam0, int iParam1, int iParam2)//Position - 0x4D9D70
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273 = 0;
	switch (iParam0)
	{
		case 1:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 9))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 9);
			}
			break;
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 6))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 6);
			}
			break;
		default:
			break;
	}
	switch (iParam1)
	{
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 7))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 7);
			}
			break;
		case 3:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 1))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 1);
			}
			break;
		case 2:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 4))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 4);
			}
			break;
		case 6:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 19))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 19);
			}
			break;
		case 5:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 16))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 16);
			}
			break;
		default:
			break;
	}
	switch (iParam2)
	{
		case 5:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 17))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 17);
			}
			break;
		case 4:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 8))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 8);
			}
			break;
		case 0:
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273, 23))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_273), 23);
			}
			break;
		default:
			break;
	}
}

int func_391(int iParam0)//Position - 0x4DA0A4
{
	switch (iParam0)
	{
		case 0:
			switch (Global_4718592.f_169366)
			{
				case 0:
					return 4;
				case 1:
					return 1;
				default:
			}
			break;
		case 1:
			switch (Global_4718592.f_169366.f_1)
			{
				case 0:
					return 5;
				case 1:
					return 4;
				case 2:
					return 2;
				case 3:
					return 3;
				default:
			}
			break;
		case 2:
			if (Global_4718592.f_169366.f_1 == 3)
			{
				return 0;
			}
			switch (Global_4718592.f_169366.f_2)
			{
				case 0:
					return 5;
				case 1:
					return 4;
				case 2:
					return 2;
				case 3:
					return 7;
				default:
			}
			break;
	}
	return 0;
}

int func_392()//Position - 0x4DA4B6
{
	int iVar0;
	iVar0 = 50;
	return iVar0;
}

bool func_393()//Position - 0x4DB76F
{
	return (__LIB_0__.func_714(joaat("MPPLY_HEISTNODEATHPROGREITSET")) > 0 && !__LIB_9__.func_783(19));
}

bool func_394()//Position - 0x4DB7AC
{
	return (__LIB_0__.func_714(joaat("MPPLY_HEISTFLOWORDERPROGRESS")) > 0 && !__LIB_9__.func_783(17));
}

int func_395(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4DB837
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	if (!__LIB_9__.func_783(17))
	{
		iVar0 = __LIB_0__.func_714(joaat("MPPLY_HEISTFLOWORDERPROGRESS"));
	}
	else
	{
		iVar0 = __LIB_0__.func_714(joaat("MPPLY_HEISTNODEATHPROGREITSET"));
	}
	iParam1 = (iParam1 + iParam3);
	fVar2 = (SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam1)) - 1f);
	fVar3 = (SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam3)) - 1f);
	fVar4 = (SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam0)) - 1f);
	fVar5 = (SYSTEM::POW(2f, SYSTEM::TO_FLOAT(iParam2)) - 1f);
	if (IntToFloat(iVar0) >= fVar2 || IntToFloat(iVar0) < fVar3)
	{
		iVar1 = 1;
	}
	else if (fVar4 < fVar2 && iParam0 >= iParam3)
	{
		if (IntToFloat(iVar0) >= fVar5)
		{
			if (iParam0 >= iParam2)
			{
				iVar1 = 1;
			}
		}
		else if (iParam0 < iParam2)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

void func_396()//Position - 0x4DCDA9
{
	Global_2714762.f_834 = 1;
}

void func_397(int iParam0, bool bParam1)//Position - 0x4FB836
{
	Global_1659905 = iParam0;
	if (!bParam1)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96 = iParam0;
	}
}

void func_398(int iParam0, int iParam1)//Position - 0x4FEBCE
{
	if (iParam0 <= -1)
	{
		return;
	}
	Global_2715699.f_6300[iParam0] = iParam1;
}

void func_399(int iParam0, int iParam1)//Position - 0x4FEED9
{
	if (iParam0 <= -1)
	{
		return;
	}
	Global_2715699.f_6295[iParam0] = iParam1;
}

int func_400()//Position - 0x501B2E
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < Global_4980736.f_36355)
	{
		if (Global_4980736.f_36356[iVar1 /*134*/].f_7 != 0)
		{
			if (Global_4980736.f_36356[iVar1 /*134*/].f_7 == joaat("hei_prop_heist_apecrate"))
			{
				STREAMING::REQUEST_MODEL(joaat("A_C_Rhesus"));
				STREAMING::REQUEST_ANIM_DICT("missfbi5ig_30Monkeys");
				if (!__LIB_1__.func_535(Global_4718592.f_168757))
				{
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEY_SCREAMS_01", false, -1);
				}
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEYS", false, -1);
			}
			if (Global_4980736.f_36356[iVar1 /*134*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
			{
				if (!__LIB_0__.func_584(joaat("stt_prop_stunt_tube_speeda")) && !__LIB_0__.func_584(joaat("stt_prop_stunt_tube_speedb")))
				{
					iVar0 = 0;
				}
			}
			if (!__LIB_0__.func_584(Global_4980736.f_36356[iVar1 /*134*/].f_7))
			{
				iVar0 = 0;
			}
			if (Global_4980736.f_36356[iVar1 /*134*/].f_7 == joaat("xm_prop_x17_barge_01"))
			{
				if (!__LIB_0__.func_584(joaat("xm_prop_x17_barge_col_01")) && !__LIB_0__.func_584(joaat("xm_prop_x17_barge_col_02")))
				{
					iVar0 = 0;
				}
			}
			if (Global_4980736.f_36356[iVar1 /*134*/].f_7 == joaat("hei_prop_heist_apecrate"))
			{
				if ((!STREAMING::HAS_MODEL_LOADED(joaat("A_C_Rhesus")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi5ig_30Monkeys")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEYS", false, -1))
				{
					iVar0 = 0;
				}
				if (!__LIB_1__.func_535(Global_4718592.f_168757))
				{
					if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FBI_05_MONKEY_SCREAMS_01", false, -1))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_401()//Position - 0x502A89
{
	int iVar0;
	if (!__LIB_0__.func_493())
	{
		return 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1965654[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 61)
	{
		Global_1965849[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_1965912[iVar0] = -1;
		iVar0++;
	}
	Global_1965846 = -1;
	if (__LIB_0__.func_845(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
	}
	else if (__LIB_0__.func_844(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
	}
	else if (__LIB_0__.func_843(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
	}
	else if (__LIB_0__.func_842(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
	}
	else if (__LIB_0__.func_841(Global_4718592.f_168757))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
	}
	else if (__LIB_0__.func_840())
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
	}
	else if (__LIB_0__.func_839())
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
	}
	else if (__LIB_0__.func_838(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
		}
		else
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
		}
	}
	else if (__LIB_0__.func_837(Global_4718592.f_168757))
	{
		if (Global_1659814 == 1)
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AJ_Interrupts", false, -1);
		}
		else
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AWXM2018/AV_Interrupts", false, -1);
		}
	}
	return 1;
}

void func_402()//Position - 0x503661
{
	if (Global_2715699.f_6623 >= 0f)
	{
		if (Global_2715699.f_6624)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 46, true);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), Global_2715699.f_6623);
	}
}

void func_403(int iParam0, struct<3> Param1, int iParam2, bool bParam3)//Position - 0x50385A
{
	if (!bParam3)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0, 0);
		}
		return;
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iParam0, iParam2, Param1, false, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1, false, false);
	}
}

int func_404(var uParam0, var uParam1, var uParam2)//Position - 0x506508
{
	if (CAM::DOES_CAM_EXIST(*uParam1))
	{
		CAM::DESTROY_CAM(*uParam1, false);
	}
	if (CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::DESTROY_CAM(*uParam2, false);
	}
	*uParam1 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	if (CAM::DOES_CAM_EXIST(*uParam1) && CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::SET_CAM_COORD(*uParam1, *uParam0);
		CAM::SET_CAM_ROT(*uParam1, uParam0->f_3, 2);
		CAM::SET_CAM_FOV(*uParam1, uParam0->f_12);
		CAM::SET_CAM_COORD(*uParam2, uParam0->f_6);
		CAM::SET_CAM_ROT(*uParam2, uParam0->f_6.f_3, 2);
		CAM::SET_CAM_FOV(*uParam2, uParam0->f_12);
		CAM::SHAKE_CAM(*uParam1, "HAND_SHAKE", uParam0->f_13);
		CAM::SHAKE_CAM(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, SYSTEM::ROUND((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(*uParam1, true);
		}
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

void func_405(int* iParam0)//Position - 0x506950
{
	MISC::SET_BIT(iParam0, 0);
}

int func_406(int iParam0)//Position - 0x50D496
{
	switch (__LIB_0__.func_3())
	{
		case 0:
			if (!__LIB_6__.func_172(iParam0))
			{
				if (Global_1853348[iParam0 /*834*/] == 2 || Global_1853348[iParam0 /*834*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_407(bool bParam0)//Position - 0x510CDA
{
	if (Global_1892703[bParam0 /*599*/] == 236 || Global_1892703[bParam0 /*599*/] == 150)
	{
		return __LIB_0__.func_740(bParam0);
	}
	return 0;
}

int func_408(int iParam0)//Position - 0x5175C2
{
	if (Global_1937518.f_57 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_409(int iParam0, char* sParam1, bool bParam2)//Position - 0x517D87
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_4__.func_771(iParam0), __LIB_8__.func_106(iParam0));
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sParam1))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam1);
			}
		}
	}
	if (bParam2)
	{
		INTERIOR::REFRESH_INTERIOR(iVar0);
	}
}

int func_410(int iParam0)//Position - 0x51DC81
{
	switch (iParam0)
	{
		case 189:
			return BitTest(Global_4718592.f_162496, 0);
		case 3:
			return BitTest(Global_4718592.f_162496, 1);
		case 23:
			return BitTest(Global_4718592.f_162496, 2);
		case 20:
			return BitTest(Global_4718592.f_162496, 3);
		case 45:
			return BitTest(Global_4718592.f_162496, 5);
		case 137:
			return BitTest(Global_4718592.f_162496, 6);
		case 138:
			return BitTest(Global_4718592.f_162496, 7);
		case 139:
			return BitTest(Global_4718592.f_162496, 8);
		case 140:
			return BitTest(Global_4718592.f_162496, 9);
		case 22:
			return BitTest(Global_4718592.f_162496, 10);
		case 141:
			return BitTest(Global_4718592.f_162496, 11);
		case 142:
			return BitTest(Global_4718592.f_162496, 12);
		case 143:
			return BitTest(Global_4718592.f_162496, 13);
		case 144:
			return BitTest(Global_4718592.f_162496, 14);
		case 145:
			return BitTest(Global_4718592.f_162496, 15);
		case 146:
			return BitTest(Global_4718592.f_162496, 16);
		case 147:
			return BitTest(Global_4718592.f_162496, 17);
		case 148:
			return BitTest(Global_4718592.f_162496, 18);
		case 149:
			return BitTest(Global_4718592.f_162496, 19);
		case 150:
			return BitTest(Global_4718592.f_162496, 20);
		case 151:
			return BitTest(Global_4718592.f_162496, 21);
		case 152:
			return BitTest(Global_4718592.f_162496, 22);
		case 153:
			return BitTest(Global_4718592.f_162496, 23);
		case 154:
			return BitTest(Global_4718592.f_162496, 24);
		case 155:
			return BitTest(Global_4718592.f_162496, 25);
		case 156:
			return BitTest(Global_4718592.f_162496, 26);
		case 157:
			return BitTest(Global_4718592.f_162496, 27);
		case 158:
			return BitTest(Global_4718592.f_162496, 28);
		case 159:
			return BitTest(Global_4718592.f_162496, 29);
		case 160:
			return BitTest(Global_4718592.f_162496, 30);
		case 161:
			return BitTest(Global_4718592.f_162496, 31);
		case 162:
			return BitTest(Global_4718592.f_162497, 0);
		case 163:
			return BitTest(Global_4718592.f_162497, 1);
		case 13:
			return BitTest(Global_4718592.f_162497, 2);
		case 12:
			return BitTest(Global_4718592.f_162497, 3);
		case 167:
			return BitTest(Global_4718592.f_162497, 5);
		case 168:
			return BitTest(Global_4718592.f_162497, 6);
		case 171:
			return BitTest(Global_4718592.f_162497, 7);
		case 174:
			return BitTest(Global_4718592.f_162497, 8);
		case 177:
			return BitTest(Global_4718592.f_162497, 9);
		case 182:
			return BitTest(Global_4718592.f_162497, 10);
		case 195:
			return BitTest(Global_4718592.f_162497, 13);
		case 223:
			return BitTest(Global_4718592.f_162498, 15);
		case 196:
			return BitTest(Global_4718592.f_162497, 14);
		case 197:
			return BitTest(Global_4718592.f_162497, 15);
		case 198:
			return BitTest(Global_4718592.f_162497, 16);
		case 199:
			return BitTest(Global_4718592.f_162497, 17);
		case 200:
			return BitTest(Global_4718592.f_162497, 18);
		case 201:
			return BitTest(Global_4718592.f_162497, 19);
		case 202:
			return BitTest(Global_4718592.f_162497, 20);
		case 203:
			return BitTest(Global_4718592.f_162497, 21);
		case 204:
			return BitTest(Global_4718592.f_162497, 22);
		case 205:
			return BitTest(Global_4718592.f_162497, 23);
		case 206:
			return BitTest(Global_4718592.f_162497, 25);
		case 207:
			return BitTest(Global_4718592.f_162497, 26);
		case 208:
			return BitTest(Global_4718592.f_162497, 27);
		case 209:
			return BitTest(Global_4718592.f_162497, 28);
		case 210:
			return BitTest(Global_4718592.f_162497, 29);
		case 211:
			return BitTest(Global_4718592.f_162497, 30);
		case 212:
			return BitTest(Global_4718592.f_162498, 3);
		case 213:
			return BitTest(Global_4718592.f_162498, 4);
		case 193:
			return BitTest(Global_4718592.f_162497, 12);
		case 214:
			return BitTest(Global_4718592.f_162498, 5);
		case 215:
			return BitTest(Global_4718592.f_162498, 6);
		case 216:
			return BitTest(Global_4718592.f_162498, 7);
		case 217:
			return BitTest(Global_4718592.f_162498, 8);
		case 218:
			return BitTest(Global_4718592.f_162498, 9);
		case 219:
			return BitTest(Global_4718592.f_162498, 10);
		case 221:
			return BitTest(Global_4718592.f_162498, 11);
		case 222:
			return BitTest(Global_4718592.f_162498, 12);
		case 224:
			return BitTest(Global_4718592.f_162495, 21);
		case 225:
			return BitTest(Global_4718592.f_162498, 20);
		case 14:
			return BitTest(Global_4718592.f_162498, 21);
		case 226:
			return BitTest(Global_4718592.f_162498, 22);
		case 227:
			return BitTest(Global_4718592.f_162498, 23);
		case 70:
			return BitTest(Global_4718592.f_162498, 24);
		default:
	}
	return 0;
}

void func_411(int iParam0)//Position - 0x521BE4
{
	switch (iParam0)
	{
		case 198:
			STREAMING::REQUEST_IPL("vw_casino_main");
			break;
		case 199:
			STREAMING::REQUEST_IPL("vw_casino_carpark");
			break;
		case 200:
			STREAMING::REQUEST_IPL("vw_casino_penthouse");
			break;
		case 201:
			STREAMING::REQUEST_IPL("vw_casino_garage");
			break;
		case 227:
			STREAMING::REQUEST_IPL("xs_arena_interior_mod_2");
			break;
		case 70:
			STREAMING::REQUEST_IPL("apa_v_mp_h_04_b");
			break;
	}
}

void func_412()//Position - 0x525B45
{
	if (BitTest(Global_2715699.f_6307, 0))
	{
		STREAMING::REMOVE_IPL("hei_carrier");
		STREAMING::REMOVE_IPL("hei_Carrier_int1");
		STREAMING::REMOVE_IPL("hei_Carrier_int2");
		STREAMING::REMOVE_IPL("hei_Carrier_int3");
		STREAMING::REMOVE_IPL("hei_Carrier_int4");
		STREAMING::REMOVE_IPL("hei_Carrier_int5");
		STREAMING::REMOVE_IPL("hei_Carrier_int6");
		STREAMING::REMOVE_IPL("hei_carrier_LODLights");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_HEI_AIRCRAFT_CARRIER", false, true);
	}
	if (BitTest(Global_2715699.f_6307, 2))
	{
		STREAMING::REMOVE_IPL("smboat");
	}
	if (BitTest(Global_2715699.f_6307, 3))
	{
		STREAMING::REMOVE_IPL("hei_yacht_heist");
		STREAMING::REMOVE_IPL("hei_yacht_heist_enginrm");
		STREAMING::REMOVE_IPL("hei_yacht_heist_Lounge");
		STREAMING::REMOVE_IPL("hei_yacht_heist_Bridge");
		STREAMING::REMOVE_IPL("hei_yacht_heist_Bar");
		STREAMING::REMOVE_IPL("hei_yacht_heist_Bedrm");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_DLC_HEI_MILO_YACHT_ZONES", false, true);
	}
	if (BitTest(Global_2715699.f_6307, 7))
	{
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_Bridge");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_Bar");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_Bedrm");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_Lounge");
		STREAMING::REMOVE_IPL("gr_Heist_Yacht2_enginrm");
	}
	if (BitTest(Global_2715699.f_6307, 5))
	{
		STREAMING::REMOVE_IPL("lr_cs6_08_grave_open");
		STREAMING::REQUEST_IPL("lr_cs6_08_grave_closed");
	}
	if (BitTest(Global_2715699.f_6307, 6))
	{
		STREAMING::REMOVE_IPL("CS1_02_cf_onmission1");
		STREAMING::REMOVE_IPL("CS1_02_cf_onmission2");
		STREAMING::REMOVE_IPL("CS1_02_cf_onmission3");
		STREAMING::REMOVE_IPL("CS1_02_cf_onmission4");
	}
	if (BitTest(Global_2715699.f_6307, 4))
	{
		STREAMING::REMOVE_IPL("hei_yacht_heist_DistantLights");
		STREAMING::REMOVE_IPL("hei_yacht_heist_LODLights");
	}
	if (BitTest(Global_2715699.f_6307, 8))
	{
		Global_2824571.f_181 = 1;
	}
	Global_2715699.f_6307 = 0;
}

float func_413(int iParam0, float fParam1)//Position - 0x526511
{
	float fVar0;
	fVar0 = __LIB_15__.func_2(iParam0);
	fParam1 = (fParam1 + fVar0);
	while (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	while (fParam1 >= 360f)
	{
		fParam1 = (fParam1 - 360f);
	}
	return fParam1;
}

Vector3 func_414(int iParam0, struct<3> Param1)//Position - 0x526556
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_14__.func_999(iParam0), __LIB_15__.func_2(iParam0), Param1);
}

bool func_415()//Position - 0x526724
{
	return STREAMING::HAS_MODEL_LOADED(__LIB_14__.func_987());
}

int func_416(int iParam0)//Position - 0x526734
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = __LIB_14__.func_989(iParam0, 0);
	if (!iVar1 == 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			iVar0 = 0;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_14__.func_988()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_417(int iParam0, int iParam1)//Position - 0x52676E
{
	int iVar0;
	iVar0 = __LIB_14__.func_990(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		return STREAMING::HAS_MODEL_LOADED(iVar0);
	}
	return 1;
}

int func_418(int iParam0, int iParam1)//Position - 0x526792
{
	int iVar0;
	iVar0 = __LIB_14__.func_991(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		return STREAMING::HAS_MODEL_LOADED(iVar0);
	}
	return 1;
}

int func_419(int iParam0)//Position - 0x5267B6
{
	if (iParam0 > 0)
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_14__.func_992());
	}
	return 1;
}

int func_420(int iParam0)//Position - 0x5267D0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_14__.func_994(iParam0, iVar0))
		{
			iVar1 = __LIB_14__.func_993(iParam0, iVar0);
			if (!iVar1 == 0)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_421()//Position - 0x526850
{
	STREAMING::REQUEST_MODEL(__LIB_14__.func_987());
}

void func_422(int iParam0)//Position - 0x526860
{
	int iVar0;
	iVar0 = __LIB_14__.func_989(iParam0, 0);
	if (!iVar0 == 0)
	{
		STREAMING::REQUEST_MODEL(iVar0);
	}
	STREAMING::REQUEST_MODEL(__LIB_14__.func_988());
}

void func_423(int iParam0, int iParam1)//Position - 0x526887
{
	int iVar0;
	iVar0 = __LIB_14__.func_990(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		STREAMING::REQUEST_MODEL(iVar0);
	}
}

void func_424(int iParam0, int iParam1)//Position - 0x5268A7
{
	int iVar0;
	iVar0 = __LIB_14__.func_991(iParam0, iParam1);
	if (!iVar0 == 0)
	{
		STREAMING::REQUEST_MODEL(iVar0);
	}
}

void func_425(int iParam0)//Position - 0x5268C7
{
	if (iParam0 > 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_14__.func_992());
	}
}

void func_426(int iParam0)//Position - 0x5268DD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_14__.func_994(iParam0, iVar0))
		{
			iVar1 = __LIB_14__.func_993(iParam0, iVar0);
			if (!iVar1 == 0)
			{
				STREAMING::REQUEST_MODEL(iVar1);
			}
		}
		iVar0++;
	}
}

int func_427()//Position - 0x5269AF
{
	int iVar0;
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_0__.func_155(0)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_4718592.f_174915[iVar0 /*24*/].f_16 != -1 || BitTest(Global_4718592.f_174915[iVar0 /*24*/].f_17, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_428(struct<7> Param0, var uParam1, var uParam2, int iParam3)//Position - 0x52E504
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Param0.f_4))
	{
		Global_1966438[iParam3] = NETWORK::NET_TO_OBJ(Param0.f_4);
	}
	if (Param0.f_5)
	{
		MISC::SET_BIT(&(Global_1966339[iParam3]), 0);
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 2);
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 0);
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 1);
		MISC::SET_BIT(&(Global_1966339[iParam3]), 2);
	}
	if (Param0.f_6)
	{
		MISC::SET_BIT(&(Global_1966339[iParam3]), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1966339[iParam3]), 3);
	}
}

bool func_429(int iParam0, bool bParam1)//Position - 0x5305D2
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam1), false))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam1), false);
}

char* func_430(int iParam0)//Position - 0x532701
{
	switch (iParam0)
	{
		case 0:
			return "Airhorn";
		case 1:
			return "Roar";
		case 2:
			return "Guitar";
		case 3:
			return "Guitar_2";
		case 4:
			return "Horn";
		case 5:
			return "Thunder";
		case 6:
			return "Klaxon";
		default:
	}
	return "";
}

void func_431()//Position - 0x561967
{
	int iVar0;
	iVar0 = Global_4718592.f_162947 ^ 255;
	Global_1836145 = (Global_1836145 && iVar0);
}

void func_432(int iParam0)//Position - 0x561CFB
{
	Global_2715699.f_6310 = iParam0;
}

void func_433(bool bParam0)//Position - 0x561DB2
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 <= (Global_2714762.f_43.f_427 - 1))
	{
		if ((BitTest(Global_2714762.f_43.f_429, bVar0) && ENTITY::DOES_ENTITY_EXIST(Global_2714762.f_43.f_430[bVar0])) && !PED::IS_PED_INJURED(Global_2714762.f_43.f_430[bVar0]))
		{
			if (bParam0)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2714762.f_43.f_430[bVar0]))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2714762.f_43.f_430[bVar0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2714762.f_43.f_430[bVar0], false, true);
						PED::DELETE_PED(&(Global_2714762.f_43.f_430[bVar0]));
					}
				}
			}
			else
			{
				NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Global_2714762.f_43.f_430[bVar0]);
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= (Global_2714762.f_43.f_212 - 1))
	{
		if (BitTest(Global_2714762.f_43.f_214, bVar0) && ENTITY::DOES_ENTITY_EXIST(Global_2714762.f_43.f_215[bVar0]))
		{
			if (bParam0)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2714762.f_43.f_215[bVar0]))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2714762.f_43.f_215[bVar0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2714762.f_43.f_215[bVar0], false, true);
						OBJECT::DELETE_OBJECT(&(Global_2714762.f_43.f_215[bVar0]));
					}
				}
			}
			else
			{
				NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Global_2714762.f_43.f_215[bVar0]);
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= (Global_2714762.f_43.f_136 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2714762.f_43.f_140[bVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2714762.f_43.f_140[bVar0], false))
		{
			if (BitTest(Global_2714762.f_43.f_138, bVar0))
			{
				if (bParam0)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2714762.f_43.f_140[bVar0]))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2714762.f_43.f_140[bVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2714762.f_43.f_140[bVar0], false, true);
							VEHICLE::DELETE_VEHICLE(&(Global_2714762.f_43.f_140[bVar0]));
						}
					}
				}
				else
				{
					NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Global_2714762.f_43.f_140[bVar0]);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= (Global_2714762.f_43.f_61 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2714762.f_43.f_64[bVar0]))
		{
			if (BitTest(Global_2714762.f_43.f_63, bVar0))
			{
				if (bParam0)
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2714762.f_43.f_64[bVar0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2714762.f_43.f_64[bVar0], false, true);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_2714762.f_43.f_64[bVar0]));
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2714762.f_43.f_64[bVar0], false, false);
				}
			}
		}
		bVar0++;
	}
}

int func_434()//Position - 0x5621D3
{
	return Global_2715699.f_1.f_837;
}

void func_435(int* iParam0)//Position - 0x565F2E
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
}

void func_436()//Position - 0x5696BB
{
	if (Global_1965529)
	{
		Global_1965529 = 0;
	}
}

int func_437(int iParam0)//Position - 0x5696CF
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6086[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_438(var uParam0)//Position - 0x56A3CD
{
	Global_1836583 = uParam0;
}

void func_439()//Position - 0x56C5D4
{
	Global_2715699.f_3813 = 0;
	Global_2715699.f_3813.f_1 = 0;
	Global_2715699.f_3813.f_2 = 0;
	Global_2715699.f_3813.f_3 = 0;
	Global_2715699.f_3813.f_4 = 0;
	Global_2715699.f_3813.f_5 = 0;
	Global_2715699.f_3813.f_6 = 0;
	Global_2715699.f_3813.f_7 = 0;
	Global_2715699.f_3813.f_8 = 0;
	Global_2715699.f_3813.f_9 = 0;
}

bool func_440()//Position - 0x56C9F8
{
	return Global_1965623;
}

bool func_441()//Position - 0x56DA5F
{
	return BitTest(Global_2714762.f_2, 31);
}

void func_442()//Position - 0x56DDD5
{
	struct<8> Var0;
	Global_1941652.f_1.f_16 = { Var0 };
}

void func_443(int iParam0, bool bParam1, bool bParam2)//Position - 0xB93
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*iParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*iParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*iParam0 = MISC::GET_GAME_TIMER();
	}
	iParam0->f_1 = 1;
}

bool func_444(int iParam0)//Position - 0xBD0
{
	return BitTest(iParam0->f_105, 3);
}

int func_445(int iParam0)//Position - 0xC9E
{
	if (iParam0->f_8 == 20)
	{
		return 1;
	}
	return 0;
}

int func_446(int iParam0, bool bParam1)//Position - 0xCB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iParam0->f_30[iVar0] >= iParam0->f_30[iVar1])
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
			if (iParam0->f_30[iVar0] >= iParam0->f_30[iVar2] && iVar0 != iVar1)
			{
				iVar2 = iVar0;
			}
			iVar0++;
		}
		return iVar2;
	}
	return iVar1;
}

bool func_447(int iParam0)//Position - 0xD27
{
	return BitTest(iParam0->f_105, 7);
}

bool func_448(int iParam0)//Position - 0xD35
{
	return BitTest(iParam0->f_105, 2);
}

bool func_449(int iParam0)//Position - 0xD43
{
	return BitTest(iParam0->f_105, 5);
}

void func_450(int iParam0, bool bParam1, bool bParam2)//Position - 0xE9D
{
	if (iParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*iParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*iParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*iParam0 = MISC::GET_GAME_TIMER();
		}
		iParam0->f_1 = 1;
	}
}

void func_451(int iParam0)//Position - 0xF45
{
	if (iParam0->f_108 == 0)
	{
		if (!BitTest(iParam0->f_105, 2))
		{
			MISC::SET_BIT(&(iParam0->f_105), 2);
		}
	}
	else if (!BitTest(iParam0->f_105, 5))
	{
		MISC::SET_BIT(&(iParam0->f_105), 5);
	}
}

int func_452(int iParam0)//Position - 0xF7E
{
	if (iParam0->f_8 == 19)
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0)//Position - 0x715E
{
	return iParam0->f_104;
}

bool func_454(bool bParam0)//Position - 0x8202
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_11.f_1, 0);
}

void func_455(int iParam0)//Position - 0x9E2F
{
	iParam0->f_1 = 0;
}

var func_456(int iParam0, int iParam1, int iParam2)//Position - 0xD1A0
{
	var uVar0;
	uVar0 = __LIB_4__.func_191(iParam2, 0);
	return (SYSTEM::SHIFT_RIGHT(iParam0, (iParam1 * iParam2)) && uVar0);
}

int func_457(bool bParam0, bool bParam1, bool bParam2)//Position - 0xF897
{
	if (bParam2 == 1)
	{
		if (bParam0 == bParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((bParam0 > -1 && bParam1 > -1) && bParam0 == bParam1)
	{
		return 1;
	}
	switch (bParam0)
	{
		case 0:
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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
			switch (bParam1)
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

void func_458(int iParam0, int iParam1)//Position - 0x11655
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1583378358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_459(int iParam0)//Position - 0x11C93
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
			return 15;
		case 12:
			return 20;
		case 13:
			return 999;
		default:
	}
	return 0;
}

void func_460(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11)//Position - 0x11FD6
{
	Param0.f_0 = 136284527;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam11 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 12, iParam11);
	}
}

int func_461(int iParam0, bool bParam1, bool bParam2)//Position - 0x133D8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *iParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *iParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *iParam0);
}

int func_462()//Position - 0x14488
{
	if (__LIB_0__.func_155(0))
	{
		return PLAYER::PLAYER_ID();
	}
	return Global_1922031;
}

bool func_463()//Position - 0x150F8
{
	return BitTest(Global_4718592.f_11, 5);
}

int func_464()//Position - 0x15211
{
	if (__LIB_9__.func_797(Global_4718592.f_168757))
	{
		return 1;
	}
	return BitTest(Global_4718592.f_11, 0);
}

int func_465()//Position - 0x15B49
{
	if (BitTest(Global_4718592.f_11, 0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_11, 5))
	{
		return 0;
	}
	return 1;
}

int func_466(int iParam0)//Position - 0x15D49
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 60000;
		case 1:
			return 120000;
		case 2:
			return 300000;
		case 3:
			return 600000;
		case 4:
			return 900000;
		case 5:
			return 1200000;
		case 6:
			return 1800000;
		case 7:
			return 3600000;
		case 8:
			return 7200000;
		default:
	}
	return -1;
}

void func_467(int iParam0, bool bParam1, bool bParam2)//Position - 0x17B2B
{
	int iVar0;
	if (bParam2)
	{
		if (bParam1)
		{
		}
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iParam0, !bParam1);
	}
	else
	{
		iVar0 = NETWORK::NET_TO_ENT(iParam0);
		if (bParam1)
		{
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, bParam1);
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iParam0, !bParam1);
	}
}

int func_468(int iParam0)//Position - 0x18109
{
	if (((((((((iParam0 == joaat("ch_prop_vault_painting_01a") || iParam0 == joaat("ch_prop_vault_painting_01b")) || iParam0 == joaat("ch_prop_vault_painting_01c")) || iParam0 == joaat("ch_prop_vault_painting_01d")) || iParam0 == joaat("ch_prop_vault_painting_01e")) || iParam0 == joaat("ch_prop_vault_painting_01f")) || iParam0 == joaat("ch_prop_vault_painting_01g")) || iParam0 == joaat("ch_prop_vault_painting_01h")) || iParam0 == joaat("ch_prop_vault_painting_01i")) || iParam0 == joaat("ch_prop_vault_painting_01j"))
	{
		return 1;
	}
	return 0;
}

void func_469(bool bParam0, int iParam1, int iParam2)//Position - 0x1898C
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 1174241816;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_470(int iParam0)//Position - 0x19314
{
	int iVar0;
	switch (iParam0)
	{
		case 30:
		case 32:
		case 9:
		case 50:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 107:
		case 108:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_471(bool bParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x19715
{
	struct<6> Var0;
	int iVar1;
	Var0.f_0 = 1998125978;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = bParam2;
	Var0.f_5 = iParam3;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

void func_472(var uParam0)//Position - 0x1A2F8
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 376123309;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

float func_473(int iParam0)//Position - 0x1A3C4
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 5:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.2f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
		case 4:
			fVar0 = 0.85f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		default:
			break;
	}
	return (1f * fVar0);
}

float func_474(int iParam0)//Position - 0x1A432
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 5:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.2f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		case 4:
			fVar0 = 0.85f;
			break;
		default:
			break;
	}
	return (fVar0 * 1f);
}

int func_475()//Position - 0x1B499
{
	if (__LIB_15__.func_108(3))
	{
		return 3;
	}
	if (__LIB_15__.func_108(2))
	{
		return 2;
	}
	if (__LIB_15__.func_108(1))
	{
		return 1;
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x1BC96
{
	if (((((((((((((iParam0 == joaat("hei_prop_hei_cash_trolly_01") || iParam0 == joaat("imp_prop_impexp_coke_trolly")) || iParam0 == joaat("ch_prop_diamond_trolly_01a")) || iParam0 == joaat("ch_prop_diamond_trolly_01b")) || iParam0 == joaat("ch_prop_diamond_trolly_01c")) || iParam0 == joaat("ch_prop_cash_low_trolly_01a")) || iParam0 == joaat("ch_prop_cash_low_trolly_01b")) || iParam0 == joaat("ch_prop_cash_low_trolly_01c")) || iParam0 == joaat("ch_prop_gold_trolly_01a")) || iParam0 == joaat("ch_prop_gold_trolly_01b")) || iParam0 == joaat("ch_prop_gold_trolly_01c")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01a")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01b")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01c"))
	{
		return 1;
	}
	return 0;
}

int func_477(bool bParam0)//Position - 0x1F410
{
	if (Global_4980736.f_5742[bParam0 /*442*/].f_163 > -1 && Global_4980736.f_5742[bParam0 /*442*/].f_155 > -1)
	{
		if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_120, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_478(bool bParam0)//Position - 0x1FE95
{
	if (Global_4980736.f_78578[bParam0 /*450*/].f_55 > -1 && Global_4980736.f_78578[bParam0 /*450*/].f_56 > -1)
	{
		if (BitTest(Global_4980736.f_78578[bParam0 /*450*/].f_107, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_479(int iParam0)//Position - 0x201E4
{
	switch (iParam0)
	{
		case joaat("S_M_Y_Cop_01"):
		case joaat("S_F_Y_Cop_01"):
		case joaat("S_M_Y_Swat_01"):
		case joaat("S_M_M_FIBOffice_01"):
		case joaat("S_M_M_FIBOffice_02"):
		case joaat("S_M_M_FIBSec_01"):
		case joaat("S_M_Y_Sheriff_01"):
		case joaat("S_F_Y_Sheriff_01"):
		case joaat("S_M_Y_Ranger_01"):
		case joaat("S_F_Y_Ranger_01"):
		case joaat("S_M_Y_BlackOps_01"):
		case joaat("S_M_Y_BlackOps_02"):
		case joaat("S_M_Y_BlackOps_03"):
		case joaat("S_M_M_CCrew_01"):
		case joaat("S_M_M_Armoured_01"):
		case joaat("S_M_Y_Pilot_01"):
		case joaat("S_M_M_Pilot_02"):
		case joaat("S_M_Y_Marine_03"):
		case joaat("S_M_M_CIASec_01"):
		case joaat("S_M_M_ChemSec_01"):
		case joaat("S_M_M_PrisGuard_01"):
		case joaat("S_M_M_Security_01"):
		case joaat("S_M_M_HighSec_01"):
		case joaat("A_M_Y_Business_01"):
		case joaat("A_F_Y_Business_02"):
			return 1;
			break;
	}
	return 0;
}

int func_480(bool bParam0)//Position - 0x20532
{
	if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_542, 25))
	{
		return 1;
	}
	return 0;
}

bool func_481(var uParam0)//Position - 0x21D22
{
	int iVar0;
	bool bVar1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (__LIB_0__.func_86(*(uParam0[iVar0 /*3*/])))
		{
			MISC::SET_BIT(&uVar2, iVar0);
		}
		iVar0++;
	}
	MISC::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	iVar0 = 0;
	while (iVar0 <= 150)
	{
		bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		if (!BitTest(uVar2, bVar1))
		{
		}
		else
		{
			iVar0++;
		}
	}
	return bVar1;
}

void func_482(int iParam0)//Position - 0x22A7A
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(ENTITY::GET_ENTITY_COORDS(iParam0, true));
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iParam0, iVar0);
	}
}

int func_483()//Position - 0x2B2D6
{
	if (__LIB_3__.func_695())
	{
		return joaat("fm_mission_controller");
	}
	return joaat("fm_mission_controller_2020");
}

int func_484(var uParam0, bool bParam1)//Position - 0x2BE34
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	iVar3 = 2;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar1]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar2]))
	{
		if (bParam1 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar3]))
		{
			iVar0 = 1;
		}
		else if (!bParam1)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_485()//Position - 0x2BE89
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	iVar1 = joaat("prop_container_ld");
	iVar2 = joaat("hei_prop_cntrdoor_mph_l");
	iVar3 = joaat("hei_prop_cntrdoor_mph_r");
	iVar4 = joaat("hei_prop_container_lock");
	STREAMING::REQUEST_MODEL(iVar1);
	STREAMING::REQUEST_MODEL(iVar2);
	STREAMING::REQUEST_MODEL(iVar3);
	STREAMING::REQUEST_MODEL(iVar4);
	if (((STREAMING::HAS_MODEL_LOADED(iVar1) && STREAMING::HAS_MODEL_LOADED(iVar2)) && STREAMING::HAS_MODEL_LOADED(iVar3)) && STREAMING::HAS_MODEL_LOADED(iVar4))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_486(bool bParam0)//Position - 0x2BEF7
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Global_4980736.f_5742[bParam0 /*442*/].f_15 == joaat("prop_container_ld") && Global_4980736.f_5742[bParam0 /*442*/].f_16[iVar1] == 13)
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_487(bool bParam0)//Position - 0x2CE7B
{
	int iVar0;
	iVar0 = Global_4980736.f_5742[bParam0 /*442*/].f_15;
	if (((((iVar0 == joaat("prop_arena_icon_flag_white") || iVar0 == joaat("prop_arena_icon_flag_yellow")) || iVar0 == joaat("prop_arena_icon_flag_purple")) || iVar0 == joaat("prop_arena_icon_flag_green")) || iVar0 == joaat("prop_arena_icon_flag_pink")) || iVar0 == joaat("prop_arena_icon_flag_red"))
	{
		return 1;
	}
	return 0;
}

Vector3 func_488(int iParam0)//Position - 0x36A7E
{
	struct<3> Var0;
	struct<3> Var1;
	Var1 = { Global_4980736.f_5[iParam0 /*273*/].f_1[0 /*3*/] };
	if (__LIB_0__.func_86(Global_4980736.f_5[iParam0 /*273*/].f_57) || __LIB_0__.func_86(Global_4980736.f_5[iParam0 /*273*/].f_60))
	{
		Var0 = { Var1 };
	}
	else
	{
		Var0 = { Global_4980736.f_5[iParam0 /*273*/].f_57 + Global_4980736.f_5[iParam0 /*273*/].f_60 };
		Var0 = { Var0 * Vector(0.5f, 0.5f, 0.5f) };
	}
	return Var0;
}

char* func_489(int iParam0)//Position - 0x39AB6
{
	switch (iParam0)
	{
		case 0:
			return "cpr_pumpchest_idle";
		case 1:
			return "dead_c";
		case 2:
			return "dead_a";
		case 3:
			return "dead_b";
		case 4:
			return "dead_c";
		case 5:
			return "dead_d";
		case 6:
			return "dead_e";
		case 7:
			return "dead_f";
		case 8:
			return "dead_g";
		case 9:
			return "dead_h";
		case 10:
			return "Body_Search";
		default:
	}
	return "cpr_pumpchest_idle";
}

float func_490(int iParam0)//Position - 0x39CC7
{
	float fVar0;
	fVar0 = 90f;
	switch (iParam0)
	{
		case 6:
			fVar0 = 110f;
			break;
		case 7:
			fVar0 = 135f;
			break;
		case 8:
			fVar0 = 180f;
			break;
	}
	return fVar0;
}

char* func_491(int iParam0, char* sParam1)//Position - 0x39E76
{
	switch (iParam0)
	{
		case -1:
			return "Lester";
		case 0:
			return "Lester";
		case 1:
			return "Lester";
		case 2:
			return "Lester";
		case 3:
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "MPSCI16") || MISC::ARE_STRINGS_EQUAL(sParam1, "MPSCI17"))
			{
				return "MELVINSCIENTIST";
			}
			else
			{
				return "Lester";
			}
			break;
		case 4:
			return "Lester";
		case 5:
			return "Lester";
		case 6:
			return "Lester";
		case 7:
			return "AGENT14" /* GXT: Agent 14 */;
		case 8:
			return "AGENT14" /* GXT: Agent 14 */;
		case 9:
			return "AGENT14" /* GXT: Agent 14 */;
		case 10:
			return "AGENT14" /* GXT: Agent 14 */;
		case 11:
			return "AGENT14" /* GXT: Agent 14 */;
		case 12:
			return "AGENT14" /* GXT: Agent 14 */;
	}
	return "NULL";
}

int func_492(int iParam0)//Position - 0x3A526
{
	int iVar0;
	iVar0 = 100;
	switch (iParam0)
	{
		case 0:
			iVar0 += 100;
			break;
		case 1:
			iVar0 += 150;
			break;
		case 2:
			iVar0 += 200;
			break;
		case 3:
			iVar0 += 300;
			break;
		case 4:
			iVar0 += 400;
			break;
		case 5:
			iVar0 += 500;
			break;
		case 6:
			iVar0 += 25;
			break;
		case 7:
			iVar0 += 50;
			break;
		case 8:
			iVar0 += 75;
			break;
		case 9:
			iVar0 += 600;
			break;
		case 10:
			iVar0 += 700;
			break;
		case 11:
			iVar0 += 800;
			break;
		case 12:
			iVar0 += 900;
			break;
		case 13:
			iVar0 += 1000;
			break;
		case 14:
			iVar0 += 250;
			break;
		case 15:
			iVar0 += 350;
			break;
		case 16:
			iVar0 += 450;
			break;
	}
	return iVar0;
}

int func_493(bool bParam0)//Position - 0x3B2C6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_4980736.f_94390[bParam0 /*1004*/].f_40[iVar0] < 17)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_494(int iParam0)//Position - 0x470E7
{
	struct<4> Var0;
	struct<3> Var1;
	Var0 = { Global_1312193[iParam0 /*1951*/].f_38[1 /*27*/] };
	Var1 = { Var0 + Var0.f_3 * Vector(0.5f, 0.5f, 0.5f) };
	if (Var0.f_2 < Var0.f_3.f_2)
	{
		Var1.f_2 = Var0.f_2;
	}
	else
	{
		Var1.f_2 = Var0.f_3.f_2;
	}
	return Var1;
}

int func_495(int iParam0)//Position - 0x4714B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_0__.func_86(Global_4980736.f_94390[iParam0 /*1004*/].f_669[iVar0 /*3*/]))
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

int func_496(bool bParam0)//Position - 0x47505
{
	return (bParam0 / 31);
}

int func_497(bool bParam0)//Position - 0x47512
{
	if (Global_4980736.f_94390[bParam0 /*1004*/].f_85 > -1 && Global_4980736.f_94390[bParam0 /*1004*/].f_86 > -1)
	{
		if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_530, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_498()//Position - 0x48A85
{
	return BitTest(Global_2714762.f_43.f_4, 11);
}

int func_499(int iParam0)//Position - 0x48BA1
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("benson"):
		case joaat("gburrito"):
		case joaat("gburrito2"):
		case joaat("youga2"):
		case joaat("caddy"):
			return 0;
		default:
	}
	return 1;
}

void func_500(int iParam0, bool bParam1, bool bParam2)//Position - 0x48FAE
{
	int iVar0;
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(bParam2, 0);
	if (bParam1)
	{
		iVar0 = 0;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((iVar0 + iParam0));
}

char* func_501(int iParam0)//Position - 0x4AE4D
{
	if (iParam0 == -2)
	{
		return "HIDDEN_RADIO_09_HIPHOP_OLD";
	}
	else if (iParam0 == -3)
	{
		return "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */;
	}
	else if (iParam0 == -4)
	{
		return "HIDDEN_RADIO_SEC_PROMOTER";
	}
	else if (iParam0 == -5)
	{
		return "HIDDEN_RADIO_SEC_PROMOTER_INTRO";
	}
	else if (iParam0 == -6)
	{
		return "HIDDEN_RADIO_SEC_BILLIONAIRE";
	}
	return AUDIO::GET_RADIO_STATION_NAME(iParam0);
}

void func_502(int iParam0)//Position - 0x4C1CA
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RespawnVeh", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "RespawnVeh"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "RespawnVeh");
				}
				else
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
					DECORATOR::DECOR_SET_INT(iParam0, "RespawnVeh", iVar0);
				}
			}
		}
	}
}

void func_503(int iParam0, bool bParam1)//Position - 0x4F9A9
{
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 0))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 0, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 1))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 1, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 2))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 2, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 3))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 3, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 4))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 4, false);
	}
	if (BitTest(Global_4980736.f_78578[bParam1 /*450*/].f_236, 5))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 5, false);
	}
}

void func_504(int iParam0, bool bParam1)//Position - 0x4FA5F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				if (VEHICLE::GET_VEHICLE_HAS_KERS(iParam0))
				{
					VEHICLE::SET_VEHICLE_KERS_ALLOWED(iParam0, bParam1);
				}
			}
		}
	}
}

void func_505(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4)//Position - 0x4FDC9
{
	int iVar0;
	iVar0 = *uParam1;
	iVar0 = __LIB_0__.func_310(iVar0, -1, VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2));
	if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2) >= iVar0)
	{
		VEHICLE::SET_VEHICLE_MOD(iParam0, iParam2, iVar0, false);
	}
	else
	{
		*uParam1 = -1;
	}
}

float func_506(int iParam0, int iParam1)//Position - 0x61098
{
	if (BitTest(Global_4980736.f_78578[iParam0 /*450*/].f_111, 18) && iParam1 > 0)
	{
		return (Global_4980736.f_78578[iParam0 /*450*/].f_42 * IntToFloat(iParam1));
	}
	return Global_4980736.f_78578[iParam0 /*450*/].f_42;
}

Vector3 func_507(int iParam0)//Position - 0x63C39
{
	switch (iParam0)
	{
		case 130:
			return -127.9808f, -1773.9374f, 28.8223f;
		case 133:
			return 720.7731f, -845.0633f, 23.3518f;
		case 131:
			return -618.3507f, 280.0032f, 80.6174f;
		case 132:
			return -1293.4572f, -257.7296f, 39.3748f;
		case 128:
			return -262.5771f, 6214.37f, 30.4892f;
		case 129:
			return 1683.5795f, 4778.221f, 40.872f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_508(int iParam0, bool bParam1, int iParam2)//Position - 0x63CDB
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 1269.7108f, 2810.263f, 46.3932f };
						break;
					case 1:
						Var0 = { 1283.6785f, 2807.432f, 45.8531f };
						break;
					case 2:
						Var0 = { 1293.9281f, 2801.2336f, 45.9045f };
						break;
					case 3:
						Var0 = { 1302.8928f, 2790.4263f, 45.9494f };
						break;
					}
			}
			break;
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 108.2844f, 2682.8638f, 51.2655f };
						break;
					case 1:
						Var0 = { 100.8731f, 2690.2368f, 51.9237f };
						break;
					case 2:
						Var0 = { 92.608f, 2698.4973f, 52.6602f };
						break;
					case 3:
						Var0 = { 84.978f, 2706.2805f, 53.3393f };
						break;
					}
			}
			break;
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 2703.9912f, 3941.3975f, 42.9278f };
						break;
					case 1:
						Var0 = { 2699.308f, 3948.511f, 42.9362f };
						break;
					case 2:
						Var0 = { 2693.9524f, 3956.0442f, 43.2208f };
						break;
					case 3:
						Var0 = { 2688.256f, 3963.2256f, 43.1996f };
						break;
					}
			}
			break;
		case 4:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 3339.8357f, 5495.4526f, 19.097f };
						break;
					case 1:
						Var0 = { 3344.867f, 5485.445f, 19.176f };
						break;
					case 2:
						Var0 = { 3340.1326f, 5471.9697f, 18.936f };
						break;
					case 3:
						Var0 = { 3325.696f, 5461.682f, 18.25f };
						break;
					}
			}
			break;
		case 5:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 94.7715f, 6807.0874f, 18.3168f };
						break;
					case 1:
						Var0 = { 103.9207f, 6808.7837f, 18.5372f };
						break;
					case 2:
						Var0 = { 113.5154f, 6808.481f, 18.3483f };
						break;
					case 3:
						Var0 = { 123.9375f, 6807.2734f, 18.1728f };
						break;
					}
			}
			break;
		case 6:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { -2210.4165f, 2319.8657f, 31.789f };
						break;
					case 1:
						Var0 = { -2220.704f, 2315.8467f, 31.5612f };
						break;
					case 2:
						Var0 = { -2230.022f, 2310.1746f, 31.3209f };
						break;
					case 3:
						Var0 = { -2238.6804f, 2301.704f, 31.2985f };
						break;
					}
			}
			break;
		case 7:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 42.5677f, 3303.0054f, 37.5235f };
						break;
					case 1:
						Var0 = { 51.0444f, 3309.019f, 36.7843f };
						break;
					case 2:
						Var0 = { 60.0832f, 3315.3926f, 36.0527f };
						break;
					case 3:
						Var0 = { 70.9043f, 3323.2515f, 35.3186f };
						break;
					}
			}
			break;
		case 8:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 2126.9744f, 1758.8127f, 101.9554f };
						break;
					case 1:
						Var0 = { 2133.3003f, 1763.9292f, 102.0615f };
						break;
					case 2:
						Var0 = { 2140.1497f, 1768.0485f, 102.6124f };
						break;
					case 3:
						Var0 = { 2147.808f, 1771.8081f, 103.5514f };
						break;
					}
			}
			break;
		case 9:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 1811.5513f, 226.4673f, 172.2476f };
						break;
					case 1:
						Var0 = { 1807.7817f, 235.8754f, 172.0976f };
						break;
					case 2:
						Var0 = { 1803.7319f, 244.2342f, 171.9037f };
						break;
					case 3:
						Var0 = { 1799.6433f, 253.3166f, 172.2495f };
						break;
					}
			}
			break;
	}
	return Var0;
}

Vector3 func_509(int iParam0, bool bParam1, int iParam2)//Position - 0x641A3
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 1257.9058f, 2816.7207f, 46.4744f };
						break;
					case 1:
						Var0 = { 1286.5487f, 2812.5867f, 45.138f };
						break;
					}
			}
			break;
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 123.9581f, 2692.9766f, 51.0008f };
						break;
					case 1:
						Var0 = { 111.0356f, 2702.349f, 52.0286f };
						break;
					}
			}
			break;
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 2665.121f, 3928.4866f, 41.3414f };
						break;
					case 1:
						Var0 = { 2678.1165f, 3938.6414f, 42.0821f };
						break;
					}
			}
			break;
		case 4:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 3343.3848f, 5506.638f, 19.4111f };
						break;
					case 1:
						Var0 = { 3338.3643f, 5483.511f, 18.9941f };
						break;
					}
			}
			break;
		case 5:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 84.8397f, 6802.9053f, 18.3797f };
						break;
					case 1:
						Var0 = { 70.6766f, 6796.9546f, 18.2857f };
						break;
					}
			}
			break;
		case 6:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { -2196.4827f, 2318.5334f, 32.1881f };
						break;
					case 1:
						Var0 = { -2218.2546f, 2304.9778f, 31.8374f };
						break;
					}
			}
			break;
		case 7:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 79.5721f, 3329.2998f, 34.8155f };
						break;
					case 1:
						Var0 = { 52.3994f, 3333.052f, 35.9825f };
						break;
					}
			}
			break;
		case 8:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 2116.3918f, 1745.6737f, 102.1252f };
						break;
					case 1:
						Var0 = { 2109.0276f, 1735.5074f, 102.2097f };
						break;
					}
			}
			break;
		case 9:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						Var0 = { 1826.1625f, 183.2551f, 171.1721f };
						break;
					case 1:
						Var0 = { 1825.2017f, 213.079f, 172.4278f };
						break;
					}
			}
			break;
	}
	return Var0;
}

int func_510(int iParam0)//Position - 0x644F9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_0__.func_86(Global_4980736.f_78578[iParam0 /*450*/].f_237[iVar0 /*3*/]))
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

int func_511()//Position - 0x666C1
{
	return ((Global_4980736.f_5739 + Global_4980736.f_63310) + Global_4980736.f_20329);
}

int func_512(int iParam0)//Position - 0x6C591
{
	switch (iParam0)
	{
		case 1:
			return joaat("hauler");
		case 3:
			return joaat("hauler2");
		case 0:
			return joaat("phantom");
		case 2:
			return joaat("phantom2");
		case 4:
			return joaat("phantom3");
		case 5:
			return joaat("packer");
		case 6:
			return joaat("docktug");
		case 7:
			return joaat("barracks2");
		default:
	}
	return 0;
}

void func_513(var uParam0)//Position - 0x73F26
{
	struct<24> Var0;
	Var0.f_1 = 20;
	*uParam0 = { Var0 };
}

void func_514()//Position - 0x74D67
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (iVar0 == iVar1)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1836871[iVar0], Global_1836871[iVar1]);
			}
			else if (BitTest(Global_4718592.f_607, (iVar0 * 4 + iVar1)))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1836871[iVar0], Global_1836871[iVar1]);
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1836871[iVar0], Global_1836871[iVar1]);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_515(int iParam0)//Position - 0x7524D
{
	int iVar0;
	char cVar1[24];
	if (iParam0 > 0)
	{
		return 1;
	}
	StringCopy(&cVar1, "rgFM_PlayerTeam", 24);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "rgFM_PlayerTeam", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		if (PED::ADD_RELATIONSHIP_GROUP(&cVar1, &(Global_1836871[iVar0])))
		{
		}
		iVar0++;
	}
	return 1;
}

void func_516()//Position - 0x76C2B
{
	Global_2714762.f_700 = 1;
}

void func_517(int iParam0)//Position - 0x76C4E
{
	Global_2715699.f_3479.f_33 = iParam0;
}

void func_518(int iParam0)//Position - 0x791DF
{
	struct<43> Var0;
	Var0.f_0 = -2089726453;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2715699.f_3479.f_92;
	Var0.f_3 = Global_2715699.f_3479.f_93;
	Var0.f_4 = Global_2715699.f_3479.f_94;
	Var0.f_5 = Global_2715699.f_3479.f_95;
	Var0.f_6 = Global_2715699.f_3479.f_96;
	Var0.f_7 = Global_2715699.f_3479.f_97;
	Var0.f_8 = Global_2715699.f_3479.f_98;
	Var0.f_9 = Global_2715699.f_3479.f_99;
	Var0.f_10 = Global_2715699.f_3479.f_100;
	Var0.f_11 = Global_2715699.f_3479.f_101;
	Var0.f_12 = Global_2715699.f_3479.f_102;
	Var0.f_13 = Global_2715699.f_3479.f_103;
	Var0.f_14 = Global_2715699.f_3479.f_104;
	Var0.f_15 = Global_2715699.f_3479.f_105;
	Var0.f_16 = Global_2715699.f_3479.f_106;
	Var0.f_17 = Global_2715699.f_3479.f_107;
	Var0.f_18 = Global_2715699.f_3479.f_108;
	Var0.f_19 = Global_2715699.f_3479.f_109;
	Var0.f_20 = Global_2715699.f_3479.f_110;
	Var0.f_21 = Global_2715699.f_3479.f_111;
	Var0.f_22 = Global_2715699.f_3479.f_122;
	Var0.f_23 = Global_2715699.f_3479.f_123;
	Var0.f_24 = Global_2715699.f_3479.f_124;
	Var0.f_25 = Global_2715699.f_3479.f_125;
	Var0.f_26 = Global_2715699.f_3479.f_126;
	Var0.f_27 = Global_2715699.f_3479.f_127;
	Var0.f_28 = Global_2715699.f_3479.f_128;
	Var0.f_29 = Global_2715699.f_3479.f_129;
	Var0.f_30 = Global_2715699.f_3479.f_130;
	Var0.f_31 = Global_2715699.f_3479.f_131;
	Var0.f_32 = Global_2715699.f_3479.f_132;
	Var0.f_33 = Global_2715699.f_3479.f_112;
	Var0.f_34 = Global_2715699.f_3479.f_113;
	Var0.f_35 = Global_2715699.f_3479.f_114;
	Var0.f_36 = Global_2715699.f_3479.f_115;
	Var0.f_37 = Global_2715699.f_3479.f_118;
	Var0.f_38 = Global_2715699.f_3479.f_119;
	Var0.f_39 = Global_2715699.f_3479.f_120;
	Var0.f_40 = Global_2715699.f_3479.f_121;
	Var0.f_41 = Global_2715699.f_3479.f_116;
	Var0.f_42 = Global_2715699.f_3479.f_117;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 43, iParam0);
	}
}

void func_519(int iParam0)//Position - 0x79421
{
	struct<28> Var0;
	Var0.f_0 = -1850807674;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2715699.f_3479.f_9;
	Var0.f_3 = Global_2715699.f_3479.f_10;
	Var0.f_4 = Global_2715699.f_3479.f_11;
	Var0.f_5 = Global_2715699.f_3479.f_12;
	Var0.f_6 = Global_2715699.f_3479.f_13;
	Var0.f_7 = Global_2715699.f_3479.f_14;
	Var0.f_8 = Global_2715699.f_3479.f_76;
	Var0.f_9 = Global_2715699.f_3479.f_77;
	Var0.f_10 = Global_2715699.f_3479.f_78;
	Var0.f_11 = Global_2715699.f_3479.f_79;
	Var0.f_12 = Global_2715699.f_3479.f_90;
	Var0.f_13 = Global_2715699.f_3479.f_91;
	Var0.f_14 = Global_2715699.f_3479.f_133;
	Var0.f_15 = Global_2715699.f_3479.f_134;
	Var0.f_16 = Global_2715699.f_3479.f_135;
	Var0.f_17 = Global_2715699.f_3479.f_136;
	Var0.f_18 = Global_2715699.f_3479.f_137;
	Var0.f_19 = Global_2715699.f_3479.f_138;
	Var0.f_20 = Global_2715699.f_3479.f_139;
	Var0.f_21 = Global_2715699.f_3479.f_140;
	Var0.f_22 = Global_2715699.f_3479.f_141;
	Var0.f_23 = Global_2715699.f_3479.f_142;
	Var0.f_24 = Global_2715699.f_3479.f_143;
	Var0.f_25 = Global_2715699.f_3479.f_144;
	Var0.f_26 = Global_2715699.f_3479.f_279;
	Var0.f_27 = Global_2715699.f_3479.f_328;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 28, iParam0);
	}
}

void func_520(int iParam0)//Position - 0x795A2
{
	if (iParam0 != Global_2715699.f_3479.f_332)
	{
		Global_2715699.f_3479.f_332 = iParam0;
	}
}

void func_521(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x7AE71
{
	int iVar0;
	if (__LIB_0__.func_850() || __LIB_0__.func_863())
	{
		iVar0 = PLAYER::PLAYER_ID();
		Global_1888862[iVar0 /*120*/].f_6 = (Global_1888862[iVar0 /*120*/].f_6 + iParam0);
		Global_1888862[iVar0 /*120*/].f_7 = (Global_1888862[iVar0 /*120*/].f_7 + iParam1);
		Global_1888862[iVar0 /*120*/].f_8 = (Global_1888862[iVar0 /*120*/].f_8 + iParam2);
		Global_1888862[iVar0 /*120*/].f_9 = (Global_1888862[iVar0 /*120*/].f_9 + iParam3);
		Global_1888862[iVar0 /*120*/].f_10 = (Global_1888862[iVar0 /*120*/].f_10 + iParam4);
		Global_1888862[iVar0 /*120*/].f_11 = (Global_1888862[iVar0 /*120*/].f_11 + iParam5);
		Global_1888862[iVar0 /*120*/].f_12 = (Global_1888862[iVar0 /*120*/].f_12 + iParam6);
		Global_1888862[iVar0 /*120*/].f_13 = (Global_1888862[iVar0 /*120*/].f_13 + iParam7);
	}
}

int func_522(int iParam0)//Position - 0x87F5F
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 12:
			iVar0 = 1;
			break;
		case 19:
			iVar0 = 2;
			break;
		case 31:
			iVar0 = 3;
			break;
		case 18:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 5;
			break;
		case 20:
			iVar0 = 6;
			break;
		case 86:
			iVar0 = 7;
			break;
	}
	return iVar0;
}

void func_523()//Position - 0x87FC7
{
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_34 = 0;
}

int func_524()//Position - 0x87FE0
{
	return Global_2657431;
}

bool func_525(int iParam0)//Position - 0x8B758
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_7__.func_71(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__.func_158(iVar1));
}

bool func_526(int iParam0)//Position - 0x8B9C3
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_7__.func_73(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__.func_158(iVar1));
}

bool func_527(int iParam0)//Position - 0x8BC46
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_7__.func_75(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__.func_158(iVar1));
}

bool func_528(int iParam0)//Position - 0x8EAF0
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_7__.func_77(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__.func_158(iVar1));
}

void func_529(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x9091F
{
	__LIB_1__.func_611(iParam0, iParam1, iParam2, fParam3);
}

void func_530(int iParam0)//Position - 0x90CE7
{
	__LIB_1__.func_597(10392, iParam0, -1, 1, 0);
}

int func_531(int iParam0)//Position - 0xB768E
{
	if (iParam0 == Global_262145.f_31710[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_31710[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_31710[2])
	{
		return 2;
	}
	return -1;
}

void func_532(int iParam0, int iParam1)//Position - 0xB7C12
{
	if (!__LIB_0__.func_692(iParam0))
	{
		__LIB_1__.func_597(iParam0, 0, iParam1, 0, 0);
	}
	else
	{
		__LIB_1__.func_603(iParam0, 0, iParam1, 0);
	}
}

int func_533(int iParam0)//Position - 0xB7DB2
{
	if (iParam0 == Global_262145.f_31703[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_31703[1])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_31703[2])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_31703[3])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_31703[4])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_31703[5])
	{
		return 12;
	}
	return -1;
}

int func_534(int iParam0)//Position - 0xB8141
{
	var uVar0[8];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	uVar0[0] = Global_262145.f_31050[0];
	uVar0[1] = Global_262145.f_31050[1];
	uVar0[2] = Global_262145.f_31050[2];
	uVar0[3] = Global_262145.f_31050[3];
	uVar0[4] = Global_262145.f_31050[4];
	uVar0[5] = Global_262145.f_31050[5];
	uVar0[6] = Global_262145.f_31050[6];
	uVar0[7] = Global_262145.f_31050[7];
	iVar4 = 0;
	while (iVar4 < 8)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar4 = 0;
	while (iVar4 < 8)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			*iParam0 = iVar4;
			return 1;
		}
		iVar4++;
	}
	*iParam0 = -1;
	return 0;
}

void func_535(bool bParam0)//Position - 0xB8247
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(9618, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 1);
	}
	__LIB_1__.func_597(9618, iVar0, -1, 1, 0);
}

int func_536(int iParam0)//Position - 0xB8FA9
{
	int iVar0;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__.func_5();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 940;
			break;
		case 1:
			iVar0 = 941;
			break;
	}
	return iVar0;
}

void func_537(bool bParam0)//Position - 0xB916B
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 13);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 13);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 13);
	}
	__LIB_1__.func_597(9482, iVar0, -1, 1, 0);
}

void func_538(bool bParam0)//Position - 0xB9221
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 11);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 11);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 11);
	}
	__LIB_1__.func_597(9482, iVar0, -1, 1, 0);
}

void func_539(bool bParam0)//Position - 0xB927C
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 10);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 10);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 10);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 10);
	}
	__LIB_1__.func_597(9482, iVar0, -1, 1, 0);
}

void func_540(bool bParam0)//Position - 0xB92D7
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 9);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 9);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 9);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 9);
	}
	__LIB_1__.func_597(9482, iVar0, -1, 1, 0);
}

void func_541(bool bParam0)//Position - 0xB93E4
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 6);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 6);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 6);
	}
	__LIB_1__.func_597(9482, iVar0, -1, 1, 0);
}

void func_542(bool bParam0)//Position - 0xB9492
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 4);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 4);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 4);
	}
	__LIB_1__.func_597(9482, iVar0, -1, 1, 0);
}

void func_543(bool bParam0)//Position - 0xB9540
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(9482, -1, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 2);
		MISC::CLEAR_BIT(&(Global_1975224[PLAYER::PLAYER_ID() /*53*/].f_5), 2);
	}
	__LIB_1__.func_597(9482, iVar0, -1, 1, 0);
}

int func_544(int iParam0)//Position - 0xB9A3F
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 11088;
			break;
		case 1:
			iVar0 = 11089;
			break;
		case 2:
			iVar0 = 11090;
			break;
		case 3:
			iVar0 = 11091;
			break;
		case 4:
			iVar0 = 11092;
			break;
		case 5:
			iVar0 = 11093;
			break;
		case 6:
			iVar0 = 11094;
			break;
		case 7:
			iVar0 = 11095;
			break;
		case 9:
		case 10:
			iVar0 = 11096;
			break;
		case 11:
			iVar0 = 11097;
			break;
		case 12:
			iVar0 = 11098;
			break;
		case 8:
			iVar0 = 11099;
			break;
		case 13:
			iVar0 = 11100;
			break;
		case 14:
			iVar0 = 11101;
			break;
		case 17:
			iVar0 = 11102;
			break;
		case 18:
			iVar0 = 11103;
			break;
		case 15:
			iVar0 = 11104;
			break;
		case 19:
			iVar0 = 11105;
			break;
		case 16:
			iVar0 = 11106;
			break;
		case 20:
			iVar0 = 11107;
			break;
		case 21:
			iVar0 = 11108;
			break;
		case 25:
			iVar0 = 11109;
			break;
		case 24:
			iVar0 = 11110;
			break;
		case 23:
			iVar0 = 11111;
			break;
		case 22:
			iVar0 = 11112;
			break;
		case 26:
		case 27:
			iVar0 = 11113;
			break;
		case 29:
			iVar0 = 6377;
			break;
		case 30:
			iVar0 = 6378;
			break;
		case 31:
			iVar0 = 6379;
			break;
		case 32:
			iVar0 = 6380;
			break;
		case 33:
			iVar0 = 6381;
			break;
		case 34:
			iVar0 = 6382;
			break;
		case 35:
			iVar0 = 6383;
			break;
		case 36:
			iVar0 = 6384;
			break;
		case 37:
			iVar0 = 6385;
			break;
		case 38:
			iVar0 = 6386;
			break;
		case 39:
			iVar0 = 6387;
			break;
		case 40:
			iVar0 = 6388;
			break;
		case 41:
			iVar0 = 6389;
			break;
		case 42:
			iVar0 = 6390;
			break;
		case 43:
			iVar0 = 6391;
			break;
		case 44:
			iVar0 = 6392;
			break;
		case 45:
			iVar0 = 8918;
			break;
		case 46:
			iVar0 = 8919;
			break;
		case 47:
			iVar0 = 8920;
			break;
		case 48:
			iVar0 = 8921;
			break;
		case 49:
			iVar0 = 8922;
			break;
		case 50:
			iVar0 = 8923;
			break;
		case 51:
			iVar0 = 8924;
			break;
		case 52:
			iVar0 = 8925;
			break;
		case 53:
			iVar0 = 8926;
			break;
		case 54:
			iVar0 = 8927;
			break;
		case 55:
			iVar0 = 8928;
			break;
		case 56:
			iVar0 = 8929;
			break;
		case 57:
			iVar0 = 8930;
			break;
		case 58:
			iVar0 = 8931;
			break;
		case 59:
			iVar0 = 8932;
			break;
		case 60:
			iVar0 = 8933;
			break;
		case 61:
			iVar0 = 8934;
			break;
		case 62:
			iVar0 = 8935;
			break;
		case 63:
			iVar0 = 8936;
			break;
		case 64:
			iVar0 = 8937;
			break;
		case 65:
			iVar0 = 8938;
			break;
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			iVar0 = 9588;
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_545(bool bParam0)//Position - 0xC66D3
{
	return (bParam0 >= 0 && bParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS());
}

int func_546()//Position - 0xC727F
{
	if (Global_262145.f_4739 /* Tunable: OVERWRITE_CLOUD_VS_MISSION_AWARDS */)
	{
		return 1;
	}
	return 0;
}

void func_547()//Position - 0xC7A2A
{
	Global_2666222 = 1;
}

var func_548(bool bParam0)//Position - 0xC7B57
{
	if (bParam0)
	{
		return Global_262145.f_31734 /* Tunable: FIXER_FINALE_GOON_CASH_REWARD */;
	}
	return Global_262145.f_31735 /* Tunable: FIXER_FINALE_LEADER_CASH_REWARD */;
}

int func_549(bool bParam0, int iParam1)//Position - 0xC94D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1922981[iVar0 /*42*/].f_2 == iParam1)
		{
			if (Global_1922981[iVar0 /*42*/].f_1 == bParam0)
			{
				iVar1 = iVar0;
				iVar0 = 32;
			}
		}
		else
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar1 = (iVar1 - iVar2);
	return iVar1;
}

int func_550(bool bParam0)//Position - 0xC952B
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1922981[iVar0 /*42*/].f_1 == bParam0)
		{
			iVar1 = iVar0;
			iVar0 = 32;
		}
		iVar0++;
	}
	return iVar1;
}

void func_551()//Position - 0xC987F
{
	switch (Global_4718592.f_116976)
	{
		case 76:
			AUDIO::TRIGGER_MUSIC_EVENT("CH_FAIL");
			break;
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("HEI4_FIN_FAIL");
			break;
		case 79:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_TUNER_FAIL");
			break;
		case 81:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL");
			break;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FIXER_FAIL");
			break;
		case 88:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_MPSUM2_FAIL");
			break;
		default:
			AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL");
			break;
	}
}

int func_552(int iParam0, int iParam1)//Position - 0xC9B21
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				case 2:
					return 6;
				case 3:
					return 7;
				case 4:
					return 8;
				case 5:
					return 9;
				case 6:
					return 10;
				case 7:
					return 11;
				default:
			}
			return 0;
		default:
	}
	return 0;
}

void func_553()//Position - 0xCA485
{
	Global_1922955.f_6 = 1;
}

char* func_554(char* sParam0)//Position - 0xCC4F2
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) == 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "a") || MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
			{
				return "A";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "b") || MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
			{
				return "B";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "c") || MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
			{
				return "C";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "d") || MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
			{
				return "D";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "e") || MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
			{
				return "E";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "f") || MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
			{
				return "F";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "g") || MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
			{
				return "G";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "h") || MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
			{
				return "H";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "i") || MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
			{
				return "I";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "j") || MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
			{
				return "J";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "k") || MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
			{
				return "K";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "l") || MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
			{
				return "L";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "m") || MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
			{
				return "M";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "n") || MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
			{
				return "N";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "o") || MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
			{
				return "O";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "p") || MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
			{
				return "P";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "q") || MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
			{
				return "Q";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "r") || MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
			{
				return "R";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "s") || MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
			{
				return "S";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "t") || MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
			{
				return "T";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "u") || MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
			{
				return "U";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "v") || MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
			{
				return "V";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "w") || MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
			{
				return "W";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "x") || MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
			{
				return "X";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "y") || MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
			{
				return "Y";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "z") || MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
			{
				return "Z";
			}
		}
	}
	return sParam0;
}

void func_555()//Position - 0xCDC55
{
	Global_1941273.f_10 = 1;
}

void func_556(bool bParam0, int iParam1)//Position - 0xCDCBF
{
	int iVar0;
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(bParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(bParam0), "MPBitset");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(bParam0), "MPBitset", iVar0);
}

void func_557()//Position - 0x11D4BB
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("InchPickup"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("InchPickup");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPOrange"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPOrange");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPurple"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPPurple");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPGreen"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPGreen");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPink"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPPink");
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeadlineNeon"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("DeadlineNeon");
	}
	else if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(1f);
	}
}

void func_558()//Position - 0x11D6C1
{
	if (!BitTest(Global_2815059.f_4660, 14))
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 14);
	}
}

int func_559(var uParam0, bool bParam1)//Position - 0x11DBD6
{
	if (PED::IS_PED_INJURED(uParam0->f_23[1]) && bParam1 >= 0)
	{
		if (Global_2689235[bParam1 /*453*/].f_257 == 2)
		{
			if (((Global_2689235[bParam1 /*453*/].f_258 == 1 || Global_2689235[bParam1 /*453*/].f_258 == 3) || Global_2689235[bParam1 /*453*/].f_258 == 2) || Global_2689235[bParam1 /*453*/].f_258 == 4)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_560(bool bParam0)//Position - 0x11FDAC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2689235[bParam0 /*453*/].f_238;
}

void func_561(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1281A1
{
	switch (uParam0->f_1[iParam3])
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

void func_562(var uParam0)//Position - 0x12939F
{
	int iVar0;
	bool bVar1;
	if (uParam0->f_1206)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			bVar1 = iVar0;
			if (__LIB_1__.func_264(bVar1, 0, 1))
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(bVar1, false);
			}
			iVar0++;
		}
	}
}

void func_563()//Position - 0x129980
{
	bool bVar0;
	NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(true);
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (__LIB_1__.func_264(bVar0, 0, 1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(bVar0, true);
		}
		bVar0++;
	}
}

int func_564(int iParam0, bool bParam1, int iParam2)//Position - 0x12A263
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*iParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*iParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_565(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12A65A
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_566()//Position - 0x12B910
{
	if (__LIB_0__.func_910())
	{
		if (__LIB_0__.func_863())
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_567()//Position - 0x12C9D2
{
	struct<10> Var0;
	Global_2715699.f_3813 = { Var0 };
}

int func_568(int iParam0)//Position - 0x12C9E9
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		Var0 = { CAM::GET_CAM_COORD(*iParam0) };
		Var1 = { CAM::GET_CAM_ROT(*iParam0, 2) };
		fVar2 = CAM::GET_CAM_FOV(*iParam0);
		CAM::STOP_CAM_POINTING(*iParam0);
		CAM::SET_CAM_PARAMS(*iParam0, Var0, Var1, (fVar2 - 3f), 0, 1, 1, 2);
		CAM::SET_CAM_PARAMS(*iParam0, Var0, Var1, fVar2, 1500, 0, 0, 2);
		__LIB_6__.func_880(iParam0, 0.3f);
		return 1;
	}
	return 0;
}

int func_569(int iParam0)//Position - 0x12E512
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1922981)
	{
		if (Global_1922981[iVar0 /*42*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_570(int iParam0, bool bParam1, int iParam2)//Position - 0x134008
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 959710041;
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_4 = iParam2;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

bool func_571()//Position - 0x13580C
{
	return Global_2714762.f_43.f_58;
}

void func_572(int iParam0)//Position - 0x136809
{
	if (!Global_2667225.f_26 == iParam0)
	{
		Global_2667225.f_26 = iParam0;
	}
}

int func_573()//Position - 0x1368E4
{
	if (BitTest(Global_1574989, 9))
	{
		return 0;
	}
	if (BitTest(Global_1574989, 10))
	{
		return 1;
	}
	return BitTest(Global_4718592.f_12, 18);
}

int func_574(int iParam0)//Position - 0x1373E0
{
	if (iParam0 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_575(bool bParam0, bool bParam1)//Position - 0x1387B3
{
	if (BitTest(*bParam0, bParam1))
	{
		MISC::CLEAR_BIT(bParam0, bParam1);
	}
	else
	{
		MISC::SET_BIT(bParam0, bParam1);
	}
}

void func_576(int iParam0)//Position - 0x138E30
{
	MISC::CLEAR_BIT(&(Global_2815059.f_282), iParam0);
}

var func_577(int iParam0)//Position - 0x138E45
{
	return BitTest(Global_2815059.f_282, iParam0);
}

float func_578(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x13A7DC
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!bParam2)
	{
		Var0.f_2 = 0f;
		Param1.f_2 = 0f;
	}
	return SYSTEM::VDIST2(Var0, Param1);
}

char* func_579(int iParam0)//Position - 0x13B4E1
{
	switch (iParam0)
	{
		case 1:
			return "orb_target_a";
		case 2:
			return "orb_target_b";
		case 3:
			return "orb_target_c";
		case 4:
			return "orb_target_d";
		case 5:
			return "orb_target_e";
		case 6:
			return "orb_target_f";
		case 7:
			return "orb_target_g";
		default:
	}
	return "invalid";
}

void func_580(int iParam0)//Position - 0x13B557
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
	{
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var1, &uVar0, &uVar0))
		{
			HUD::GET_HUD_COLOUR(18, &iVar2, &iVar3, &iVar4, &uVar5);
			Var6 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Var7 = { -90f, 0f, 0f };
			fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var6.f_0, Var6.f_1, 0f, Var1.f_0, Var1.f_1, 0f, true);
			fVar9 = (Var1.f_2 - Var6.f_2);
			if (fVar8 > 0f)
			{
				fVar10 = MISC::ATAN((fVar9 / fVar8));
			}
			else
			{
				fVar10 = 0f;
			}
			fVar11 = __LIB_17__.func_265(Var6, Var1);
			fVar12 = MISC::ATAN2(((SYSTEM::COS(Var7.f_0) * SYSTEM::SIN(fVar10)) - ((SYSTEM::SIN(Var7.f_0) * SYSTEM::COS(fVar10)) * SYSTEM::COS(((fVar11 * -1f) - Var7.f_2)))), (SYSTEM::SIN(((fVar11 * -1f) - Var7.f_2)) * SYSTEM::COS(fVar10)));
			fVar13 = (0.5f - (SYSTEM::COS(fVar12) * 0.19f));
			fVar14 = (0.5f - (SYSTEM::SIN(fVar12) * 0.19f));
			fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var6, false);
			GRAPHICS::DRAW_SPRITE("helicopterhud", "hudArrow", fVar13, fVar14, 0.02f, 0.04f, (fVar12 - 90f), iVar2, iVar3, iVar4, __LIB_17__.func_264(fVar15), true, 0);
			HUD::SET_TEXT_CENTRE(true);
		}
	}
}

void func_581(int iParam0, bool bParam1, int iParam2)//Position - 0x13B6A1
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, true), false);
	fVar0 = 0.017f;
	HUD::GET_HUD_COLOUR(iParam2, &iVar1, &iVar2, &iVar3, &iVar4);
	if (!bParam1)
	{
		GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar1, iVar2, iVar3, iVar4, true, 0);
	}
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar1, iVar2, iVar3, iVar4, true, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

int func_582(int iParam0, int iParam1)//Position - 0x13B7C3
{
	if (NETWORK::IS_ENTITY_A_GHOST(iParam0) || BitTest(Global_4980736.f_78578[iParam1 /*450*/].f_113, 25))
	{
		return 0;
	}
	return 1;
}

int func_583(int iParam0, int iParam1)//Position - 0x13BCB6
{
	if ((NETWORK::IS_ENTITY_A_GHOST(iParam0) || (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && BitTest(Global_4980736.f_94390[iParam1 /*1004*/].f_540, 22))) || BitTest(Global_4980736.f_94390[iParam1 /*1004*/].f_540, 21))
	{
		return 0;
	}
	return 1;
}

int func_584(int iParam0)//Position - 0x13D375
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0));
}

void func_585(float fParam0)//Position - 0x13E6C9
{
	int iVar0;
	int iVar1;
	iVar0 = (100 - SYSTEM::FLOOR(fParam0));
	if (iVar0 <= 0)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 9;
	}
	__LIB_8__.func_79(iVar0, 100, "STAMINA_LEFT" /* GXT: STAMINA */, iVar1, -1, 13, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

int func_586(int iParam0)//Position - 0x13F44E
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 10:
			iVar0 = 1;
			break;
		case 20:
			iVar0 = 2;
			break;
		case 30:
			iVar0 = 3;
			break;
		case 40:
			iVar0 = 4;
			break;
		case 50:
			iVar0 = 5;
			break;
		case 60:
			iVar0 = 6;
			break;
		case 70:
			iVar0 = 7;
			break;
		case 80:
			iVar0 = 8;
			break;
		case 90:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

bool func_587()//Position - 0x140ABB
{
	return BitTest(Global_4718592.f_20, 0);
}

void func_588(var uParam0, bool bParam1)//Position - 0x141BC6
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 110901056;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	Var0.f_3 = uParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

float func_589(int iParam0, int iParam1)//Position - 0x141F7E
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return SYSTEM::VDIST2(Var0, Var1);
}

struct<4> func_590()//Position - 0x1476C4
{
	struct<4> Var0;
	if (Global_2703735.f_2400[0 /*80*/].f_1 != 0)
	{
		Var0 = { Global_2703735.f_2400[0 /*80*/].f_21 };
	}
	return Var0;
}

void func_591(char* sParam0, char* sParam1, char* sParam2)//Position - 0x147A5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	char cVar4[64];
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	StringCopy(&Var3, "", 64);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iVar2 <= (iVar0 - iVar1))
		{
			StringCopy(&cVar4, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar2, (iVar2 + iVar1)), 64);
			if (MISC::ARE_STRINGS_EQUAL(sParam1, &cVar4))
			{
				if (iVar2 != 0)
				{
					StringCopy(&Var3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, iVar2), 64);
				}
				StringConCat(&Var3, sParam2, 64);
				StringConCat(&Var3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, (iVar2 + iVar1), iVar0), 64);
				*sParam0 = { Var3 };
			}
		}
		iVar2++;
	}
}

int func_592(int iParam0)//Position - 0x147D9A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 1;
	if (__LIB_1__.func_264(bVar0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			iVar3 = 0;
			while (iVar3 < 32)
			{
				bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (__LIB_1__.func_264(bVar4, 1, 1))
				{
					if (PLAYER::GET_PLAYER_PED(bVar4) != iVar1)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar4), iVar5, true))
						{
							iVar2++;
						}
					}
				}
				iVar3++;
			}
		}
	}
	if (iVar2 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_593(int iParam0, int iParam1)//Position - 0x1495F0
{
	if (iParam0 != iParam1)
	{
		if (iParam1 == 0)
		{
			if (!BitTest(Global_4718592.f_95506, 0))
			{
				MISC::SET_BIT(&(Global_4718592.f_95506), 0);
			}
		}
		else if (iParam1 == 1)
		{
			if (!BitTest(Global_4718592.f_95506, 1))
			{
				MISC::SET_BIT(&(Global_4718592.f_95506), 1);
			}
		}
		else if (iParam1 == 2)
		{
			if (!BitTest(Global_4718592.f_95506, 2))
			{
				MISC::SET_BIT(&(Global_4718592.f_95506), 2);
			}
		}
		else if (iParam1 == 3)
		{
			if (!BitTest(Global_4718592.f_95506, 3))
			{
				MISC::SET_BIT(&(Global_4718592.f_95506), 3);
			}
		}
	}
}

int func_594(int iParam0, int iParam1)//Position - 0x14AA57
{
	if (BitTest(Global_4980736.f_94390[iParam0 /*1004*/].f_537, 11) && Global_4980736.f_94390[iParam0 /*1004*/].f_663 == iParam1)
	{
		return 1;
	}
	if (BitTest(Global_4980736.f_94390[iParam0 /*1004*/].f_537, 11) && Global_4980736.f_94390[iParam0 /*1004*/].f_663 == -1)
	{
		return 1;
	}
	return 0;
}

struct<2> func_595()//Position - 0x14ABC4
{
	return Global_1958636;
}

struct<2> func_596()//Position - 0x14ABD2
{
	return Global_1958638;
}

char* func_597(int iParam0)//Position - 0x14B31F
{
	char* sVar0;
	if (!(iParam0 >= 0 && iParam0 <= 28))
	{
		return "";
	}
	switch (iParam0)
	{
		case 5:
			sVar0 = "SHD_STR_LVL1" /* GXT: You have 3 minutes */;
			break;
		case 6:
			sVar0 = "SHD_STR_LVL2" /* GXT: You have 2 minutes */;
			break;
		case 7:
			sVar0 = "SHD_STR_LVL3" /* GXT: You have 1 minute 30 seconds */;
			break;
		case 8:
			sVar0 = "SHD_STR_LVL4" /* GXT: You have 1 minute 20 seconds */;
			break;
		case 9:
			sVar0 = "SHD_STR_LVL5" /* GXT: You have 1 minute 10 seconds */;
			break;
		case 10:
			sVar0 = "SHD_STR_LVL6" /* GXT: You have 1 minute */;
			break;
		case 11:
			sVar0 = "SHD_STR_LVL7" /* GXT: You have 50 seconds */;
			break;
		case 21:
			sVar0 = "SHD_TAG_ASTRONG";
			break;
		case 22:
			sVar0 = "SHD_TAG_DSTRONG";
			break;
		case 23:
			sVar0 = "SHD_TAG_AWEAK";
			break;
		case 24:
			sVar0 = "SHD_TAG_DWEAK";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_598(int iParam0)//Position - 0x14B400
{
	char* sVar0;
	if (!(iParam0 >= 0 && iParam0 <= 28))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			sVar0 = "FMMC_SEL_OFF";
			break;
		case 1:
			sVar0 = "SHD_FVJ_HUNTED";
			break;
		case 2:
			sVar0 = "SHD_FVJ_HUNTER";
			break;
		case 3:
			sVar0 = "SHD_SPR_FASTER";
			break;
		case 4:
			sVar0 = "SHD_SPR_SUDDEN";
			break;
		case 5:
		case 12:
			sVar0 = "SHD_LVL1" /* GXT: Level 1 */;
			break;
		case 6:
		case 13:
			sVar0 = "SHD_LVL2" /* GXT: Level 2 */;
			break;
		case 7:
		case 14:
			sVar0 = "SHD_LVL3" /* GXT: Level 3 */;
			break;
		case 8:
		case 15:
			sVar0 = "SHD_LVL4" /* GXT: Level 4 */;
			break;
		case 9:
		case 16:
			sVar0 = "SHD_LVL5" /* GXT: Level 5 */;
			break;
		case 10:
		case 17:
			sVar0 = "SHD_LVL6" /* GXT: Level 6 */;
			break;
		case 11:
		case 18:
			sVar0 = "SHD_LVL7" /* GXT: Level 7 */;
			break;
		case 19:
			sVar0 = "SHD_LVL8" /* GXT: Level 8 */;
			break;
		case 20:
			sVar0 = "SHD_LVL9" /* GXT: Level 9 */;
			break;
		case 21:
		case 25:
			sVar0 = "SHD_TAG_DAY";
			break;
		case 22:
			sVar0 = "SHD_TAG_NIGHT";
			break;
		case 26:
			sVar0 = "SHD_LVL10" /* GXT: Level 10 */;
			break;
		case 23:
			sVar0 = "SHD_TAG_NIGHT";
			break;
		case 24:
			sVar0 = "SHD_TAG_DAY";
			break;
		case 27:
			sVar0 = "SHD_NVEH" /* GXT: New Vehicle */;
			break;
		case 28:
			sVar0 = "SHD_TOTH" /* GXT: Take out the Hunted! */;
			break;
	}
	return sVar0;
}

bool func_599(bool bParam0, var uParam1)//Position - 0x14DD68
{
	return (BitTest(Global_4718592.f_166137[bParam0], uParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166007[bParam0 /*16*/])));
}

void func_600()//Position - 0x14DDB8
{
	Global_1649593.f_1166 = 1;
}

bool func_601(bool bParam0)//Position - 0x14F27F
{
	return BitTest(Global_1648034.f_241.f_136[__LIB_0__.func_159(9) /*33*/][bParam0], __LIB_0__.func_158(9));
}

int func_602(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x150CDF
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param1, true) < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_603(int iParam0)//Position - 0x151E78
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1344471069;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_604(int iParam0, int iParam1)//Position - 0x1527BC
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1211233918;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_605(bool bParam0)//Position - 0x153038
{
	int iVar0;
	iVar0 = 1;
	if (BitTest(Global_4718592.f_658[bParam0 /*22957*/].f_12180, 11))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_606(int iParam0)//Position - 0x1574AC
{
	return Global_4980736.f_5[iParam0 /*273*/].f_72[0] == 1;
}

int func_607(int iParam0)//Position - 0x158057
{
	int iVar0;
	iVar0 = 0;
	if ((BitTest(Global_4980736.f_5[iParam0 /*273*/].f_88, 9) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_88, 10)) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 26))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_608(var uParam0)//Position - 0x158151
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1599357371;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_609()//Position - 0x15818A
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = -1681272815;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_610(var uParam0, bool bParam1, int iParam2)//Position - 0x1582D0
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 1823618518;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = iParam2;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_611(int iParam0, bool bParam1)//Position - 0x158535
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 81563277;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_612(bool bParam0, bool bParam1)//Position - 0x158B9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 1);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 1);
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 2);
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 0);
		return 1;
	}
	else
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 2);
		if (!bParam0)
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 0);
			iVar0 = -1;
			while (iVar0 <= 2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar2, iVar0, false))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, iVar0, false);
					if (iVar1 != 0)
					{
						if (iVar1 != PLAYER::PLAYER_PED_ID())
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (__LIB_1__.func_264(bVar3, 1, 1))
								{
									if (!BitTest(Global_2689235[bVar3 /*453*/].f_35, 0))
									{
										return 0;
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 1);
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 2);
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_35), 0);
			return 1;
		}
	}
	return 0;
}

bool func_613(int iParam0, int iParam1)//Position - 0x15B54F
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_APPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_PISTOL50"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_SNSPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MICROSMG"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_SMG"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_COMBATPDW"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_MG"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_COMBATMG"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_ASSAULTMG"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_GUSENBERG"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			*iParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			*iParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_MUSKET"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			*iParam1 = joaat("AMMO_SNIPER");
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			*iParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		case joaat("WEAPON_RPG"):
			*iParam1 = joaat("AMMO_RPG");
			break;
		case joaat("WEAPON_MINIGUN"):
			*iParam1 = joaat("AMMO_MINIGUN");
			break;
		case joaat("WEAPON_FIREWORK"):
			*iParam1 = joaat("AMMO_FIREWORK");
			break;
		case joaat("WEAPON_FLAREGUN"):
			*iParam1 = joaat("AMMO_FLAREGUN");
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			*iParam1 = joaat("AMMO_HOMINGLAUNCHER");
			break;
		case joaat("WEAPON_PROXMINE"):
			*iParam1 = joaat("AMMO_PROXMINE");
			break;
		case joaat("WEAPON_RAILGUN"):
			*iParam1 = joaat("AMMO_RAILGUN");
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_REVOLVER"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			*iParam1 = joaat("AMMO_GRENADELAUNCHER");
			break;
		case joaat("WEAPON_MINISMG"):
			*iParam1 = joaat("AMMO_SMG");
			break;
		case joaat("WEAPON_PIPEBOMB"):
			*iParam1 = joaat("AMMO_PIPEBOMB");
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			*iParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			*iParam1 = joaat("AMMO_SMG");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_SMG_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_SMG_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_SMG_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_SMG_TRACER");
				}
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			*iParam1 = joaat("AMMO_SNIPER");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE")))
				{
					*iParam1 = joaat("AMMO_SNIPER_EXPLOSIVE");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_SNIPER_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_SNIPER_INCENDIARY");
				}
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			*iParam1 = joaat("AMMO_MG");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_MG_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_MG_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_MG_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_MG_TRACER");
				}
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			*iParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			*iParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_SHOTGUN_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE")))
				{
					*iParam1 = joaat("AMMO_SHOTGUN_EXPLOSIVE");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_SHOTGUN_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_SHOTGUN_INCENDIARY");
				}
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			*iParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			*iParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			*iParam1 = joaat("AMMO_SNIPER");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_SNIPER_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_SNIPER_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_SNIPER_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_SNIPER_TRACER");
				}
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			*iParam1 = joaat("AMMO_PISTOL");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_PISTOL_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT")))
				{
					*iParam1 = joaat("AMMO_PISTOL_HOLLOWPOINT");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_PISTOL_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_PISTOL_TRACER");
				}
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			*iParam1 = joaat("AMMO_RIFLE");
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING")))
				{
					*iParam1 = joaat("AMMO_RIFLE_ARMORPIERCING");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ")))
				{
					*iParam1 = joaat("AMMO_RIFLE_FMJ");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY")))
				{
					*iParam1 = joaat("AMMO_RIFLE_INCENDIARY");
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER")))
				{
					*iParam1 = joaat("AMMO_RIFLE_TRACER");
				}
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			*iParam1 = joaat("AMMO_RAYPISTOL");
			break;
		case joaat("WEAPON_RAYCARBINE"):
			*iParam1 = joaat("AMMO_MG");
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			*iParam1 = joaat("AMMO_MINIGUN");
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			*iParam1 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			*iParam1 = joaat("AMMO_PISTOL");
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			*iParam1 = joaat("AMMO_EMPLAUNCHER");
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			*iParam1 = joaat("AMMO_STUNGUN");
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			*iParam1 = joaat("AMMO_RIFLE");
			break;
		case joaat("WEAPON_PRECISIONRIFLE"):
			*iParam1 = joaat("AMMO_SNIPER");
			break;
	}
	return *iParam1 != -1;
}

void func_614(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x167EF5
{
	struct<8> Var0;
	int iVar1;
	int iVar2;
	Var0.f_7 = 10;
	Var0.f_0 = -825442862;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = bParam2;
	Var0.f_5 = bParam3;
	Var0.f_6 = iParam4;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam5)
	{
		if (iVar1 < *iParam5)
		{
			Var0.f_7[iVar1] = (*iParam5)[iVar1];
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	iVar2 = __LIB_4__.func_511(1);
	if (!iVar2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 18, iVar2);
	}
}

int func_615(bool bParam0, int iParam1, int iParam2)//Position - 0x168420
{
	int iVar0;
	iVar0 = 0;
	if (iParam2 < 17 && BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_509[iParam1], iParam2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_616(bool bParam0, int iParam1)//Position - 0x168455
{
	switch (iParam1)
	{
		case 0:
			if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_531, 21))
			{
				return 1;
			}
			break;
		case 1:
			if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_531, 22))
			{
				return 1;
			}
			break;
		case 2:
			if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_531, 23))
			{
				return 1;
			}
			break;
		case 3:
			if (BitTest(Global_4980736.f_94390[bParam0 /*1004*/].f_531, 24))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_617(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1695C8
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	if (bParam2)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
}

int func_618(int iParam0)//Position - 0x16A794
{
	switch (iParam0)
	{
		case 1:
			return 6;
		case 54:
			return 11;
		case 3:
			return 9;
		case 2:
			return 18;
		case 5:
			return 12;
		case 4:
			return 1;
		case 842150655:
			return 2;
		case 50:
			return 21;
		default:
	}
	return 1;
}

void func_619()//Position - 0x16BB12
{
	MISC::SET_BIT(&(Global_2815059.f_4660), 2);
}

void func_620(int iParam0)//Position - 0x16BB26
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 4);
	}
}

void func_621(int iParam0)//Position - 0x16BB60
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 0);
	}
}

int func_622(int iParam0)//Position - 0x16BDE1
{
	int iVar0;
	iVar0 = 5;
	switch (iParam0)
	{
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 6:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int func_623(int iParam0)//Position - 0x16C30F
{
	switch (iParam0)
	{
		case 1:
			return 6;
		case 2:
			return 11;
		case 3:
			return 10;
		case 4:
			return 18;
		case 5:
			return 12;
		case 6:
			return 0;
		case 7:
			return 2;
		case 8:
			return 21;
		case 9:
			return 15;
		default:
	}
	return 0;
}

int func_624(int iParam0)//Position - 0x16CE5E
{
	switch (iParam0)
	{
		case 0:
			return 10000;
		case 1:
			return 20000;
		case 2:
			return 30000;
		case 3:
			return 40000;
		case 4:
			return 50000;
		case 5:
			return 60000;
		case 6:
			return 9600000;
		default:
	}
	return 30000;
}

int func_625(int iParam0)//Position - 0x16CEC8
{
	if ((iParam0 == 17 || iParam0 == 18) || iParam0 == 19)
	{
		return 1;
	}
	return 0;
}

void func_626(int iParam0, int* iParam1)//Position - 0x16D731
{
	if (BitTest(Global_4980736.f_69361[iParam0 /*151*/].f_8, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
	}
	else
	{
		MISC::SET_BIT(iParam1, 9);
	}
	if (BitTest(Global_4718592.f_22, 29))
	{
		MISC::CLEAR_BIT(iParam1, 9);
	}
	if (BitTest(Global_4980736.f_69361[iParam0 /*151*/].f_8, 10))
	{
		MISC::SET_BIT(iParam1, 16);
	}
	if (BitTest(Global_4980736.f_69361[iParam0 /*151*/].f_8, 14))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		MISC::SET_BIT(iParam1, 4);
		MISC::SET_BIT(iParam1, 3);
		MISC::SET_BIT(iParam1, 8);
	}
}

bool func_627(var uParam0)//Position - 0x170499
{
	return BitTest(*uParam0, 8);
}

bool func_628(var uParam0)//Position - 0x17152A
{
	return BitTest(*uParam0, 12);
}

int func_629(int iParam0)//Position - 0x171D02
{
	int iVar0;
	float fVar1;
	iVar0 = 1000;
	if (iParam0 >= 0 && iParam0 < 4)
	{
		fVar1 = (IntToFloat(Global_4718592.f_110313[iParam0]) / 100f);
		iVar0 = SYSTEM::FLOOR((fVar1 * 1000f));
	}
	return iVar0;
}

void func_630(bool bParam0)//Position - 0x1720CD
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 285313418;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_631(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x173746
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -1019.33044f, -2426.0234f, 13.008f };
			*uParam3 = 8f;
			break;
		case 1:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -1004.44977f, -2400.376f, 13.08f };
			*uParam3 = 8f;
			break;
		case 2:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -996.74f, -2826.1f, 12.99f };
			*uParam3 = 8f;
			break;
		case 3:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -971.11f, -2840.98f, 13.07f };
			*uParam3 = 8f;
			break;
		case 5:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -1157.67f, -2719.3f, 12.96f };
			*uParam3 = 8f;
			break;
		case 4:
			*iParam1 = joaat("prop_gate_airport_01");
			*uParam2 = { -1132.1f, -2734.17f, 13.01f };
			*uParam3 = 8f;
			break;
		case 6:
			*iParam1 = joaat("prop_gate_military_01");
			*uParam2 = { 2492.459f, -335.52747f, 92.119f };
			*uParam3 = 8f;
			break;
		case 7:
			*iParam1 = joaat("prop_gate_military_01");
			*uParam2 = { 2492.7598f, -432.71283f, 91.99274f };
			*uParam3 = 8f;
			break;
		default:
			*iParam1 = 0;
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = -1f;
			break;
	}
}

float func_632(bool bParam0)//Position - 0x173EF5
{
	if (Global_4980736.f_34611[bParam0 /*50*/].f_3 == joaat("ch_prop_ch_lobay_gate01"))
	{
		return 2f;
	}
	return 1f;
}

void func_633(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x173F34
{
	struct<6> Var0;
	int iVar1;
	Var0.f_0 = 696628190;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

float func_634(var uParam0)//Position - 0x174259
{
	float fVar0;
	float fVar1;
	if (uParam0->f_3 == joaat("v_ilev_garageliftdoor"))
	{
		return 0.5f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_tunnel_door_01_r"))
	{
		return 0.5f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_tunnel_door_01_l"))
	{
		return -0.5f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_lobay_gate01"))
	{
		return 1.75f;
	}
	else if (uParam0->f_3 == joaat("prop_gate_prison_01"))
	{
		return 3.25f;
	}
	if (__LIB_0__.func_718(5))
	{
		MISC::GET_MODEL_DIMENSIONS(uParam0->f_3, &fVar0, &fVar1);
		return ((fVar1 - fVar0) * 0.5f);
	}
	return 0.5f;
}

Vector3 func_635(var uParam0)//Position - 0x17433F
{
	if (uParam0->f_3 == joaat("v_ilev_garageliftdoor"))
	{
		return 0f, 0f, 0.7f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_tunnel_door_01_r") || uParam0->f_3 == joaat("ch_prop_ch_tunnel_door_01_l"))
	{
		return 0f, 0f, 0.7f;
	}
	else if (uParam0->f_3 == joaat("ch_prop_ch_lobay_gate01"))
	{
		return 0f, 0f, 1.5f;
	}
	else if (uParam0->f_3 == joaat("prop_gate_prison_01"))
	{
		return 0f, 0f, 1.95f;
	}
	return 0f, 0f, 0f;
}

void func_636(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x17685A
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = -1787038574;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam5;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

void func_637(int iParam0)//Position - 0x1774D1
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 9)
	{
		if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0, false);
		}
		iVar0++;
	}
}

bool func_638(int iParam0)//Position - 0x1775E9
{
	return (VEHICLE::GET_TYRE_HEALTH(iParam0, 4) >= 950f && VEHICLE::GET_TYRE_HEALTH(iParam0, 5) >= 950f);
}

bool func_639(int iParam0)//Position - 0x177610
{
	return (VEHICLE::GET_TYRE_HEALTH(iParam0, 0) >= 950f && VEHICLE::GET_TYRE_HEALTH(iParam0, 1) >= 950f);
}

int func_640(int iParam0)//Position - 0x177686
{
	if (VEHICLE::GET_TYRE_HEALTH(iParam0, 0) < 950f)
	{
		return 0;
	}
	if (VEHICLE::GET_TYRE_HEALTH(iParam0, 1) < 950f)
	{
		return 0;
	}
	if (VEHICLE::GET_TYRE_HEALTH(iParam0, 4) < 950f)
	{
		return 0;
	}
	if (VEHICLE::GET_TYRE_HEALTH(iParam0, 5) < 950f)
	{
		return 0;
	}
	return 1;
}

void func_641(int iParam0)//Position - 0x1776DF
{
	VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 0);
	VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 1);
	VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 4);
	VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 5);
}

int func_642(int iParam0)//Position - 0x177703
{
	if (__LIB_0__.func_578(iParam0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0) > 1f)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
	{
		return 0;
	}
	return 1;
}

int func_643(int iParam0)//Position - 0x177C02
{
	return (Global_4718592.f_174915[iParam0 /*24*/].f_18 * 3 + Global_4718592.f_174915[iParam0 /*24*/].f_19);
}

void func_644(struct<3> Param0, bool bParam1)//Position - 0x1789E9
{
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "Metal_Detector_Big_Guns", Param0, "dlc_ch_heist_finale_security_alarms_sounds", false, 0, false);
	}
	else
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "Metal_Detector_Small_Guns", Param0, "dlc_ch_heist_finale_security_alarms_sounds", false, 0, false);
	}
}

void func_645(bool bParam0, bool bParam1, struct<3> Param2, var uParam3)//Position - 0x178A25
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = 1227500260;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = { Param2 };
	Var0.f_7 = uParam3;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

float func_646(float fParam0)//Position - 0x178F9C
{
	if (fParam0 >= 10f)
	{
		return 0f;
	}
	return __LIB_0__.func_408(10f, 0f, (fParam0 / 10f));
}

float func_647(float fParam0)//Position - 0x178FC5
{
	return __LIB_0__.func_408(30f, 0f, (fParam0 / 100f));
}

void func_648(bool bParam0)//Position - 0x1790E9
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = -363714924;
	if (bParam0)
	{
		Var0.f_1 = PLAYER::PLAYER_ID();
	}
	else
	{
		Var0.f_1 = 0;
	}
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_649(bool bParam0)//Position - 0x179568
{
	NETWORK::SET_LOCAL_PLAYER_AS_GHOST(bParam0, true);
	if (bParam0 == 1)
	{
		NETWORK::SET_GHOST_ALPHA(50);
	}
	else
	{
		NETWORK::RESET_GHOST_ALPHA();
	}
}

Vector3 func_650(struct<3> Param0)//Position - 0x17A564
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (__LIB_0__.func_78(Param0, 0f, 0f, 0f, 0))
	{
		return Param0;
	}
	fVar0 = MISC::ABSF(Param0.f_0);
	fVar1 = MISC::ABSF(Param0.f_1);
	fVar2 = MISC::ABSF(Param0.f_2);
	if (fVar0 <= fVar1 && fVar0 <= fVar2)
	{
		return __LIB_0__.func_620(Param0, 1f, 0f, 0f);
	}
	if (fVar1 <= fVar0 && fVar1 <= fVar2)
	{
		return __LIB_0__.func_620(Param0, 0f, 1f, 0f);
	}
	return __LIB_0__.func_620(Param0, 0f, 0f, 1f);
}

void func_651(bool bParam0, bool bParam1, bool bParam2)//Position - 0x17B47F
{
	if (!bParam2)
	{
		MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(8, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
		MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(4, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(7, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(13, !bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(14, !bParam0);
	if (bParam0 && !bParam1)
	{
		if (!bParam2)
		{
			MISC::ENABLE_DISPATCH_SERVICE(2, true);
			MISC::ENABLE_DISPATCH_SERVICE(12, true);
		}
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, false);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, false);
	}
	else if (bParam0 && bParam1)
	{
		if (!bParam2)
		{
			MISC::ENABLE_DISPATCH_SERVICE(2, false);
			MISC::ENABLE_DISPATCH_SERVICE(12, false);
		}
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, true);
	}
	else
	{
		if (!bParam2)
		{
			MISC::ENABLE_DISPATCH_SERVICE(2, false);
			MISC::ENABLE_DISPATCH_SERVICE(12, false);
		}
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, true);
	}
}

void func_652()//Position - 0x17C1A2
{
	Global_2667225.f_26.f_10 = { 0f, 0f, 0f };
	Global_2667225.f_26.f_13 = { 0f, 0f, 0f };
	Global_2667225.f_26.f_16 = 0f;
	Global_2667225.f_26.f_17 = 0;
	Global_2667225.f_26.f_18 = 0;
}

void func_653(bool bParam0, bool bParam1, int* iParam2, int* iParam3, int iParam4, bool bParam5)//Position - 0x17C1DF
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	if ((Global_4980736.f_195934[bParam0 /*111*/].f_10 != 0 && Global_4980736.f_195934[bParam0 /*111*/].f_10 != 2) && Global_4980736.f_195934[bParam0 /*111*/].f_10 != 29)
	{
		return;
	}
	Var0 = { Global_4980736.f_195934[bParam0 /*111*/][0 /*3*/] };
	Var1 = { Global_4980736.f_195934[bParam0 /*111*/][1 /*3*/] };
	if (Global_4980736.f_195934[bParam0 /*111*/].f_9 != 1)
	{
		Var0.f_2 = (Global_4980736.f_195934[bParam0 /*111*/][0 /*3*/].f_2 - 100f);
		Var1.f_2 = (Global_4980736.f_195934[bParam0 /*111*/][1 /*3*/].f_2 + 500f);
	}
	if (bParam1)
	{
		if (!BitTest(*iParam2, bParam0))
		{
			iVar2 = 1;
			MISC::SET_BIT(iParam2, bParam0);
		}
	}
	else if (BitTest(*iParam2, bParam0))
	{
		iVar2 = 1;
		MISC::CLEAR_BIT(iParam2, bParam0);
	}
	if (iVar2 || iParam4)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, !bParam1, false);
	}
	if (bParam1)
	{
		if (!BitTest(*iParam3, bParam0))
		{
			iVar3 = 1;
			MISC::SET_BIT(iParam3, bParam0);
		}
	}
	else if (BitTest(*iParam3, bParam0))
	{
		iVar3 = 1;
		MISC::CLEAR_BIT(iParam3, bParam0);
	}
	if (iVar3 || iParam4)
	{
		if (!bParam5)
		{
			PATHFIND::SET_ROADS_IN_AREA(Var0, Var1, !bParam1, false);
		}
		else
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var1, 0);
		}
	}
}

void func_654(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x17DB11
{
	struct<3> Var0;
	struct<3> Var1;
	if (Param0.f_0 < Param1.f_0)
	{
		Var0.f_0 = Param0.f_0;
		Var1.f_0 = Param1.f_0;
	}
	else
	{
		Var0.f_0 = Param1.f_0;
		Var1.f_0 = Param0.f_0;
	}
	if (Param0.f_1 < Param1.f_1)
	{
		Var0.f_1 = Param0.f_1;
		Var1.f_1 = Param1.f_1;
	}
	else
	{
		Var0.f_1 = Param1.f_1;
		Var1.f_1 = Param0.f_1;
	}
	if (Param0.f_2 < Param1.f_2)
	{
		Var0.f_2 = Param0.f_2;
		Var1.f_2 = Param1.f_2;
	}
	else
	{
		Var0.f_2 = Param1.f_2;
		Var1.f_2 = Param0.f_2;
	}
	Global_2667225.f_26.f_10 = { Var0 };
	Global_2667225.f_26.f_13 = { Var1 };
	Global_2667225.f_26.f_16 = fParam2;
	Global_2667225.f_26.f_17 = iParam3;
	Global_2667225.f_26.f_18 = 1;
}

float func_655(float fParam0)//Position - 0x180A61
{
	if (fParam0 > 360f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < 0f)
	{
		fParam0 = (360f + fParam0);
	}
	return fParam0;
}

void func_656(bool bParam0)//Position - 0x18258F
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -407754957;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_657(var uParam0, var uParam1)//Position - 0x183070
{
	int iVar0;
	struct<3> Var1;
	iVar0 = uParam1;
	if (__LIB_0__.func_734())
	{
		iVar0 = __LIB_1__.func_329();
	}
	if (__LIB_0__.func_121(iVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		if (SYSTEM::VDIST2(Var1, ENTITY::GET_ENTITY_COORDS(*uParam0, true)) > 220f)
		{
			return 0;
		}
		return ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, *uParam0);
	}
	return 0;
}

bool func_658(int iParam0, var uParam1)//Position - 0x184415
{
	return __LIB_1__.func_7(&(uParam1->f_69[Global_4980736.f_36356[iParam0 /*134*/].f_85 /*2*/]));
}

int func_659(int iParam0, int iParam1)//Position - 0x184526
{
	switch (iParam0)
	{
		case 1:
			return __LIB_16__.func_902(Global_4980736.f_94390[iParam1 /*1004*/].f_700);
		case 2:
			return __LIB_16__.func_902(Global_4980736.f_78578[iParam1 /*450*/].f_312);
		case 3:
			return __LIB_16__.func_902(Global_4980736.f_36356[iParam1 /*134*/].f_77);
		case 4:
			return __LIB_16__.func_902(Global_4980736.f_5742[iParam1 /*442*/].f_227);
		default:
	}
	return 1;
}

float func_660(struct<3> Param0)//Position - 0x184ADB
{
	return (((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2));
}

int func_661()//Position - 0x184D2E
{
	if (__LIB_2__.func_30(Local_74, 200, 0))
	{
		return 1;
	}
	return 0;
}

void func_662(int iParam0, int iParam1)//Position - 0x187D41
{
	Global_4541482[iParam0] = iParam1;
}

bool func_663(int iParam0)//Position - 0x18DAE1
{
	return GRAPHICS::IS_TRACKED_POINT_VISIBLE(*iParam0);
}

bool func_664(int iParam0)//Position - 0x18DB13
{
	return *iParam0 != -1;
}

int func_665(int iParam0)//Position - 0x191BD6
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
			return 12;
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
			return 13;
		case 13:
			return 14;
		default:
	}
	return 0;
}

struct<2> func_666(struct<2> Param0, struct<2> Param1)//Position - 0x192017
{
	struct<2> Var0;
	Var0.f_0 = (Param0.f_0 - Param1.f_0);
	Var0.f_1 = (Param0.f_1 - Param1.f_1);
	return Var0;
}

float func_667(struct<2> Param0, struct<2> Param1)//Position - 0x192037
{
	return SYSTEM::SQRT((SYSTEM::POW((Param1.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param1.f_1 - Param0.f_1), 2f)));
}

float func_668(float fParam0)//Position - 0x19205C
{
	return SYSTEM::SIN(fParam0);
}

float func_669(float fParam0)//Position - 0x19206A
{
	return SYSTEM::COS(fParam0);
}

float func_670(struct<2> Param0, struct<2> Param1)//Position - 0x192712
{
	return (SYSTEM::POW((Param1.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param1.f_1 - Param0.f_1), 2f));
}

struct<2> func_671(struct<2> Param0, struct<2> Param1, float fParam2)//Position - 0x1928ED
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar1 = SYSTEM::SIN(fParam2);
	fVar2 = SYSTEM::COS(fParam2);
	Var0.f_0 = (Param1.f_0 - Param0.f_0);
	Var0.f_1 = (Param1.f_1 - Param0.f_1);
	fVar3 = ((Var0.f_0 * fVar2) - (Var0.f_1 * fVar1));
	fVar4 = ((Var0.f_0 * fVar1) + (Var0.f_1 * fVar2));
	Var0.f_0 = (fVar3 + Param0.f_0);
	Var0.f_1 = (fVar4 + Param0.f_1);
	return Var0;
}

struct<2> func_672(struct<2> Param0)//Position - 0x1936A3
{
	struct<2> Var0;
	Var0.f_0 = Param0.f_1;
	Var0.f_1 = -Param0.f_0;
	return Var0;
}

void func_673(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1936BC
{
	*iParam2 = 0;
	*iParam3 = 0;
	if (bParam4)
	{
		if (iParam1 == 1)
		{
			iParam1 = 3;
		}
		else if (iParam1 == 2)
		{
			iParam1 = 4;
		}
		else if (iParam1 == 3)
		{
			iParam1 = 1;
		}
		else if (iParam1 == 4)
		{
			iParam1 = 2;
		}
	}
	if (iParam1 == 1)
	{
		if (bParam0 == 0)
		{
			*iParam2 = 0;
			*iParam3 = 1;
		}
		else if (bParam0 == 1)
		{
			*iParam2 = 3;
			*iParam3 = 0;
		}
	}
	else if (iParam1 == 2)
	{
		if (bParam0 == 0)
		{
			*iParam2 = 2;
			*iParam3 = 3;
		}
		else if (bParam0 == 1)
		{
			*iParam2 = 3;
			*iParam3 = 0;
		}
	}
	else if (iParam1 == 3)
	{
		if (bParam0 == 0)
		{
			*iParam2 = 1;
			*iParam3 = 2;
		}
		else if (bParam0 == 1)
		{
			*iParam2 = 2;
			*iParam3 = 3;
		}
	}
	else if (iParam1 == 4)
	{
		if (bParam0 == 0)
		{
			*iParam2 = 0;
			*iParam3 = 1;
		}
		else if (bParam0 == 1)
		{
			*iParam2 = 1;
			*iParam3 = 2;
		}
	}
}

void func_674(int iParam0, int iParam1, int iParam2)//Position - 0x19379B
{
	*iParam1 = 0;
	*iParam2 = 0;
	if (iParam0 == 1 || iParam0 == 3)
	{
		*iParam1 = 1;
		*iParam2 = 3;
	}
	else if (iParam0 == 2 || iParam0 == 4)
	{
		*iParam1 = 0;
		*iParam2 = 2;
	}
}

int func_675(struct<2> Param0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x1938A7
{
	if (iParam3 == 1 || iParam3 == 2)
	{
		if (Param1.f_1 > Param0.f_1 && Param2.f_1 > Param0.f_1)
		{
			return 0;
		}
	}
	else if (iParam3 == 3 || iParam3 == 4)
	{
		if (Param1.f_1 < Param0.f_1 && Param2.f_1 < Param0.f_1)
		{
			return 0;
		}
	}
	if (iParam3 == 1 || iParam3 == 4)
	{
		if (Param1.f_0 < Param0.f_0 && Param2.f_0 < Param0.f_0)
		{
			return 0;
		}
	}
	else if (iParam3 == 2 || iParam3 == 3)
	{
		if (Param1.f_0 > Param0.f_0 && Param2.f_0 > Param0.f_0)
		{
			return 0;
		}
	}
	return 1;
}

int func_676(struct<2> Param0)//Position - 0x193962
{
	if (Param0.f_0 > -0.001f && Param0.f_1 <= 0f)
	{
		return 1;
	}
	if (Param0.f_0 <= -0.001f && Param0.f_1 <= 0f)
	{
		return 2;
	}
	if (Param0.f_0 <= -0.001f && Param0.f_1 > 0f)
	{
		return 3;
	}
	return 4;
}

bool func_677(struct<2> Param0)//Position - 0x193B3B
{
	return (Param0.f_0 == 0f && Param0.f_1 == 0f);
}

void func_678(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x19E870
{
	*iParam0 = iParam1;
	iParam0->f_1 = iParam2;
	iParam0->f_2 = iParam3;
	iParam0->f_3 = iParam4;
}

void func_679(var uParam0, int iParam1)//Position - 0x1AF1A0
{
	int iVar0[8];
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0[iVar1] = __LIB_11__.func_748(&iVar0, 8, 0, 8);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		uParam0->f_766[iParam1 /*25*/][iVar1 /*3*/] = iVar0[iVar1];
		iVar1++;
	}
}

void func_680(var uParam0, int iParam1)//Position - 0x1B1A13
{
	int iVar0[8];
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar3 < uParam0->f_734)
	{
		uParam0->f_756 = 0;
		bVar4 = true;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0[iVar1] = __LIB_11__.func_748(&iVar0, 8, 0, 8);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0[iVar1] == -1)
		{
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (!__LIB_17__.func_282(&iVar0, iVar2, 8))
				{
					iVar0[iVar1] = iVar2;
				}
				else
				{
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		uParam0->f_766[iParam1 /*25*/][iVar1 /*3*/].f_2 = iVar0[iVar1];
		if (bVar4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_766[iParam1 /*25*/][iVar1 /*3*/].f_1), 0);
		}
		iVar1++;
	}
}

int func_681(bool bParam0, bool bParam1)//Position - 0x1B211F
{
	if (bParam0 != -1)
	{
		if (Global_1970897[bParam0 /*68*/].f_18.f_14 != 0 || bParam1)
		{
			return Global_1970897[bParam0 /*68*/].f_18.f_14;
		}
	}
	if (bParam1)
	{
		return Global_1966500.f_17;
	}
	return 0;
}

void func_682(var uParam0)//Position - 0x1B42F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < uParam0->f_734)
	{
		uParam0->f_756 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iVar0 >= uParam0->f_756)
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				MISC::CLEAR_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iVar0 /*6*/][iVar1]), 0);
				MISC::CLEAR_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iVar0 /*6*/][iVar1]), 1);
				MISC::CLEAR_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iVar0 /*6*/][iVar1]), 2);
				iVar1++;
			}
			MISC::SET_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][iVar0 /*6*/][iVar2]), 0);
			if (__LIB_17__.func_310(uParam0, iVar0, iVar2))
			{
			}
		}
		iVar0++;
	}
}

int func_683()//Position - 0x1B4DEC
{
	if (__LIB_0__.func_1("CH_EMP_HELP" /* GXT: Use the SecuroServ App to activate the EMP. Press ~INPUT_CELLPHONE_UP~ to open your phone and select the app. */))
	{
		return 1;
	}
	return 0;
}

void func_684(int iParam0, bool bParam1, int iParam2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1B7968
{
	struct<17> Var0;
	int iVar1;
	Var0.f_0 = -949119977;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = { Param3 };
	Var0.f_8 = { Param4 };
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	Var0.f_14 = iParam8;
	Var0.f_15 = iParam9;
	Var0.f_16 = iParam10;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 17, iVar1);
	}
}

int func_685(var uParam0)//Position - 0x1B7CBE
{
	int iVar0;
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
		case 8:
			return 0;
		case 66:
			return 1;
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		case 36:
		case 37:
		case 38:
		case 39:
			return 3;
		case 21:
		case 22:
		case 23:
		case 24:
			return 4;
		case 33:
		case 34:
		case 35:
			return 5;
		case 9:
		case 10:
		case 11:
		case 12:
			return 6;
		case 67:
			return 7;
		case 68:
			return 8;
		case 25:
		case 26:
		case 27:
		case 28:
			return 9;
		case 13:
		case 14:
		case 15:
		case 16:
			return 10;
		case 17:
		case 18:
		case 19:
		case 20:
			return 11;
		case 29:
		case 30:
		case 31:
		case 32:
			return 12;
		case 64:
		case 65:
			return 13;
		case 60:
		case 61:
		case 62:
		case 63:
			return 14;
		case 69:
		case 70:
		case 71:
		case 72:
			return 15;
		case 40:
		case 41:
		case 42:
		case 43:
			return 16;
		case 48:
		case 49:
		case 50:
		case 51:
			return 17;
		case 44:
		case 45:
		case 46:
		case 47:
			return 18;
		case 52:
		case 53:
		case 54:
		case 55:
			return 19;
		case 56:
		case 57:
		case 58:
		case 59:
			return 20;
		case 73:
		case 74:
		case 75:
		case 76:
			return 21;
		case 77:
		case 78:
		case 79:
		case 80:
			return 22;
		case 81:
		case 82:
		case 83:
		case 84:
			return 23;
		case 487:
		case 488:
		case 489:
		case 490:
		case 491:
		case 492:
		case 493:
		case 494:
			return 24;
		case 495:
		case 496:
		case 497:
		case 498:
			return 26;
		case 499:
		case 500:
		case 501:
		case 502:
			return 25;
		case 503:
		case 504:
		case 505:
		case 506:
			return 27;
		case 1194:
			return 28;
		case 1195:
		case 1196:
		case 1197:
		case 1198:
			return 29;
		case 1249:
		case 1250:
		case 1251:
		case 1252:
			return 30;
		case 1253:
		case 1254:
		case 1255:
		case 1256:
			return 31;
		case 1257:
		case 1258:
		case 1259:
		case 1260:
			return 32;
		case 1261:
		case 1262:
		case 1263:
		case 1264:
			return 33;
		case 1265:
		case 1266:
		case 1267:
		case 1268:
			return 34;
		case 1269:
		case 1270:
		case 1271:
		case 1272:
			return 35;
		case 1273:
		case 1274:
		case 1275:
		case 1276:
			return 36;
		case 1277:
		case 1278:
		case 1279:
		case 1280:
			return 37;
		case 1281:
		case 1282:
		case 1283:
		case 1284:
			return 38;
		case 1285:
		case 1286:
		case 1287:
		case 1288:
			return 39;
		case 1289:
		case 1290:
		case 1291:
		case 1292:
			return 40;
		case 1293:
		case 1294:
		case 1295:
		case 1296:
			return 41;
		case 1297:
		case 1298:
		case 1299:
		case 1300:
			return 42;
		case 1301:
		case 1302:
		case 1303:
		case 1304:
			return 43;
		case 1305:
		case 1306:
		case 1307:
		case 1308:
			return 44;
		case 1309:
		case 1310:
		case 1311:
		case 1312:
			return 45;
		case 1313:
		case 1314:
		case 1315:
		case 1316:
			return 46;
		case 1317:
		case 1318:
		case 1319:
		case 1320:
			return 47;
		default:
	}
	switch (iVar0)
	{
		case 1530:
		case 1531:
		case 1532:
		case 1533:
		case 1534:
		case 1535:
			return 48;
		case 1536:
		case 1537:
		case 1538:
		case 1539:
		case 1540:
		case 1541:
			return 49;
		case 1542:
		case 1543:
		case 1544:
		case 1545:
		case 1546:
		case 1547:
			return 50;
		case 1548:
		case 1549:
		case 1550:
		case 1551:
		case 1552:
		case 1553:
			return 51;
		case 1554:
		case 1555:
		case 1556:
		case 1557:
		case 1558:
		case 1559:
			return 52;
		case 1560:
		case 1561:
		case 1562:
		case 1563:
		case 1564:
		case 1565:
			return 53;
		case 1585:
		case 1586:
		case 1587:
		case 1588:
		case 1589:
		case 1590:
			return 54;
		case 1595:
		case 1596:
		case 1597:
		case 1598:
		case 1599:
		case 1600:
			return 55;
		case 1579:
		case 1580:
		case 1581:
		case 1582:
		case 1583:
		case 1584:
			return 56;
		case 1591:
		case 1592:
		case 1593:
		case 1594:
			return 57;
		case 1489:
		case 1490:
		case 1491:
		case 1492:
		case 1493:
		case 1494:
			return 58;
		case 1495:
		case 1496:
		case 1497:
		case 1498:
		case 1499:
		case 1500:
			return 59;
		case 1501:
		case 1502:
		case 1503:
		case 1504:
		case 1505:
		case 1506:
			return 60;
		case 1507:
		case 1508:
		case 1509:
		case 1510:
		case 1511:
		case 1512:
			return 61;
		case 1513:
		case 1514:
		case 1515:
		case 1516:
		case 1517:
		case 1518:
			return 62;
		case 1519:
		case 1520:
		case 1521:
		case 1522:
		case 1523:
		case 1524:
			return 63;
		default:
	}
	switch (iVar0)
	{
		case 1614:
		case 1615:
		case 1616:
		case 1617:
			return 64;
		case 1618:
		case 1619:
		case 1620:
		case 1621:
			return 65;
		case 1622:
		case 1623:
		case 1624:
		case 1625:
			return 66;
		case 1626:
		case 1627:
		case 1628:
		case 1629:
			return 67;
		case 1630:
		case 1631:
		case 1632:
		case 1633:
			return 68;
		case 1634:
		case 1635:
		case 1636:
		case 1637:
			return 69;
		case 1638:
		case 1639:
		case 1640:
		case 1641:
			return 70;
		case 1673:
		case 1674:
		case 1675:
		case 1676:
			return 71;
		case 1677:
		case 1678:
		case 1679:
		case 1680:
			return 72;
		case 1681:
		case 1682:
		case 1683:
		case 1684:
		case 1685:
		case 1686:
		case 1687:
		case 1688:
			return 73;
		case 1691:
		case 1692:
		case 1693:
		case 1694:
			return 74;
		default:
	}
	return 999;
}

void func_686(var uParam0, var uParam1)//Position - 0x1BA1FD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = -0.1f;
	fVar1 = 1.1f;
	fVar2 = 0.175f;
	fVar3 = 0.845f;
	if (*uParam0 > fVar1)
	{
		*uParam0 = fVar1;
	}
	if (*uParam0 < fVar0)
	{
		*uParam0 = fVar0;
	}
	if (*uParam1 > fVar3)
	{
		*uParam1 = fVar3;
	}
	if (*uParam1 < fVar2)
	{
		*uParam1 = fVar2;
	}
}

float func_687(int iParam0)//Position - 0x1BAA74
{
	switch (iParam0)
	{
		case 0:
			return 0.29f;
		case 1:
			return 0.44f;
		case 2:
			return 0.59f;
		case 3:
			return 0.74f;
		default:
	}
	return 0f;
}

void func_688(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x1BABCE
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.29f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				case 1:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.372f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.37f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 2:
					*uParam2 = 0.5f;
					*uParam3 = 0.36f;
					*uParam4 = 0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.528f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.392f;
					*uParam4 = 0.7f;
					*uParam5 = 0.25f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line3", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.64f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.369f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.371f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				case 1:
					*uParam2 = 0.5f;
					*uParam3 = 0.44f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				case 2:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.522f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.52f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.51f;
					*uParam4 = 0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.678f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.36f;
					*uParam4 = -0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.528f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 1:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.519f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.521f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				case 2:
					*uParam2 = 0.5f;
					*uParam3 = 0.59f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				case 3:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.672f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.67f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.392f;
					*uParam4 = -0.7f;
					*uParam5 = 0.25f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line3", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.64f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 1:
					*uParam2 = 0.5f;
					*uParam3 = 0.51f;
					*uParam4 = -0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.678f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				case 2:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.669f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.671f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.74f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
			}
			break;
	}
}

void func_689(bool bParam0)//Position - 0x1BC391
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -893739527;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_690(int iParam0, int iParam1)//Position - 0x1C1226
{
	int iVar0;
	int iVar1;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		iVar1 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1) != iVar0 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam1) != iVar1)
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iParam1, iVar0);
			INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam1, iVar0, iVar1);
		}
	}
}

int func_691(int iParam0)//Position - 0x1C1F1F
{
	switch (iParam0)
	{
		case 2:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 13:
		case 15:
			return joaat("ch_p_m_bag_var02_arm_s");
		case 17:
		case 19:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 21:
		case 23:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 25:
		case 27:
			return joaat("ch_p_m_bag_var03_arm_s");
		case 29:
		case 31:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 33:
		case 35:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 37:
		case 39:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 41:
		case 43:
			return joaat("hei_p_m_bag_var22_arm_s");
		case 45:
		case 47:
			return joaat("ch_p_m_bag_var04_arm_s");
		case 49:
		case 51:
			return joaat("ch_p_m_bag_var01_arm_s");
		case 53:
		case 55:
			return joaat("ch_p_m_bag_var08_arm_s");
		case 57:
		case 59:
			return joaat("ch_p_m_bag_var09_arm_s");
		case 61:
		case 63:
			return joaat("ch_p_m_bag_var06_arm_s");
		case 65:
		case 67:
			return joaat("ch_p_m_bag_var05_arm_s");
		case 69:
		case 71:
			return joaat("ch_p_m_bag_var10_arm_s");
		case 73:
		case 75:
			return joaat("ch_p_m_bag_var07_arm_s");
		default:
	}
	return joaat("hei_p_m_bag_var22_arm_s");
}

int func_692(int iParam0)//Position - 0x1C23A9
{
	switch (iParam0)
	{
		case 15:
		case 27:
		case 47:
		case 51:
		case 55:
		case 59:
		case 63:
		case 67:
		case 71:
		case 75:
			return 1;
		default:
	}
	return 0;
}

int func_693(int iParam0)//Position - 0x1C23F9
{
	switch (iParam0)
	{
		case 13:
		case 15:
			return 15;
		case 25:
		case 27:
			return 27;
		case 45:
		case 47:
			return 47;
		case 49:
		case 51:
			return 51;
		case 53:
		case 55:
			return 55;
		case 57:
		case 59:
			return 59;
		case 61:
		case 63:
			return 63;
		case 65:
		case 67:
			return 67;
		case 69:
		case 71:
			return 71;
		case 73:
		case 75:
			return 75;
		default:
	}
	return -1;
}

void func_694(int iParam0, int iParam1, var uParam2)//Position - 0x1C4525
{
	struct<4> Var0;
	Var0.f_0 = -261919831;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam0);
	}
}

int func_695(int iParam0, int iParam1)//Position - 0x1CA514
{
	if (__LIB_9__.func_318(iParam0) == iParam1)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_474;
	}
	return -1;
}

void func_696(var uParam0, int iParam1, var uParam2)//Position - 0x1CC2CC
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -1352397180;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam2;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_697(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1CD52F
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = -1902798417;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (iParam2 != 0)
	{
		Var0.f_4 = iParam2;
	}
	Var0.f_3 = uParam1;
	Var0.f_5 = iParam3;
	Var0.f_6 = iParam4;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iVar1);
	}
}

void func_698(int* iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1CF216
{
	iParam0->f_37 = uParam2;
	iParam0->f_38 = uParam3;
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 8);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 8);
	}
	if (bParam4)
	{
		MISC::SET_BIT(iParam0, 16);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 16);
	}
}

void func_699(var uParam0)//Position - 0x1D0DA6
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0f;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0f;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0.25f;
	uParam0->f_13 = 0f;
	uParam0->f_14 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	uParam0->f_19 = 0f;
	uParam0->f_10 = 0f;
}

int func_700()//Position - 0x1D1C41
{
	if (Global_1922025)
	{
		return 1;
	}
	return 0;
}

void func_701()//Position - 0x1D1C61
{
	Global_1649593.f_1171 = 1;
}

void func_702(int* iParam0)//Position - 0x1D1C71
{
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 2000, 220);
	MISC::SET_BIT(iParam0, 2);
	if (iParam0->f_8 <= 0f)
	{
		MISC::SET_BIT(iParam0, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 4);
	}
}

void func_703(int* iParam0)//Position - 0x1D1CA4
{
	if (iParam0->f_7 > iParam0->f_14)
	{
		if (MISC::ABSF((iParam0->f_23 - iParam0->f_22)) < 0.002f)
		{
			iParam0->f_23 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.04f, 0f);
		}
	}
	else
	{
		iParam0->f_23 = 0f;
	}
	iParam0->f_22 = __LIB_0__.func_408(iParam0->f_22, iParam0->f_23, 1f);
}

int func_704(var uParam0)//Position - 0x1D2076
{
	STREAMING::REQUEST_ANIM_DICT("anim@heists@fleeca_bank@drilling");
	STREAMING::REQUEST_MODEL(joaat("hei_prop_heist_deposit_box"));
	STREAMING::REQUEST_MODEL(joaat("hei_prop_heist_drill"));
	STREAMING::REQUEST_MODEL(joaat("hei_p_m_bag_var22_arm_s"));
	if ((((((((STREAMING::HAS_ANIM_DICT_LOADED("anim@heists@fleeca_bank@drilling") && STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_heist_deposit_box"))) && STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_heist_drill"))) && STREAMING::HAS_MODEL_LOADED(joaat("hei_p_m_bag_var22_arm_s"))) && STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_hei_drill_hole"))) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("fm_mission_controler")) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_33)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1))
	{
		return 1;
	}
	return 0;
}

void func_705(int* iParam0)//Position - 0x1D2126
{
	if (!BitTest(*iParam0, 2))
	{
		if (!BitTest(*iParam0, 5))
		{
			iParam0->f_11 = 0.08f;
			iParam0->f_6 = 0;
		}
		iParam0->f_15 = 0f;
	}
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_7 = 0f;
	iParam0->f_21 = 0f;
	iParam0->f_22 = 0f;
	iParam0->f_8 = 0f;
	iParam0->f_9 = 0f;
	iParam0->f_16 = 0f;
	iParam0->f_18 = 0f;
	iParam0->f_19 = 0f;
	iParam0->f_10 = 0f;
	iParam0->f_12 = 0.25f;
	iParam0->f_14 = iParam0->f_11;
	iParam0->f_13 = (iParam0->f_14 - 0.25f);
	if (iParam0->f_13 < 0f)
	{
		iParam0->f_13 = 0f;
	}
	MISC::CLEAR_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
}

void func_706(var uParam0)//Position - 0x1D2228
{
	STREAMING::REQUEST_ANIM_DICT("anim@heists@fleeca_bank@drilling");
	STREAMING::REQUEST_MODEL(joaat("hei_prop_heist_deposit_box"));
	STREAMING::REQUEST_MODEL(joaat("hei_prop_heist_drill"));
	STREAMING::REQUEST_MODEL(joaat("hei_p_m_bag_var22_arm_s"));
	STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1);
	STREAMING::REQUEST_NAMED_PTFX_ASSET("fm_mission_controler");
	if (uParam0->f_33 == 0)
	{
		uParam0->f_33 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRILLING");
	}
}

int func_707(int* iParam0)//Position - 0x1D4979
{
	if (BitTest(*iParam0, 25))
	{
		return 1;
	}
	return 0;
}

int func_708(int iParam0)//Position - 0x1D4A30
{
	switch (iParam0)
	{
		case 0:
			return 4;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 3;
			break;
		case 5:
			return 5;
			break;
	}
	return 4;
}

int func_709(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x1D57AA
{
	Param2.f_0 = (Param2.f_0 / 2f);
	Param2.f_1 = (Param2.f_1 / 2f);
	Param2.f_2 = (Param2.f_2 / 2f);
	if (!__LIB_0__.func_86(Param0))
	{
		if ((((((Param1.f_0 + Param2.f_0) > Param0.f_0 && (Param1.f_1 + Param2.f_1) > Param0.f_1) && (Param1.f_2 + Param2.f_2) > Param0.f_2) && (Param1.f_0 - Param2.f_0) < Param0.f_0) && (Param1.f_1 - Param2.f_1) < Param0.f_1) && (Param1.f_2 - Param2.f_2) < Param0.f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_710(int iParam0, var uParam1, int iParam2)//Position - 0x1D89C4
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return -1;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_14;
	}
	return uParam1->f_7[iParam2 /*27*/].f_14;
}

float func_711(int iParam0, var uParam1, int iParam2)//Position - 0x1D9886
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return 0f;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_13;
	}
	return uParam1->f_7[iParam2 /*27*/].f_13;
}

void func_712(int iParam0, int iParam1)//Position - 0x1DCBD8
{
	__LIB_11__.func_949(iParam0, iParam1);
}

float func_713(float fParam0)//Position - 0x1DE8A6
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0.5f - ((0.5f - fParam0) / __LIB_14__.func_343()));
	return fParam0;
}

void func_714(var uParam0)//Position - 0x1E03A0
{
	uParam0->f_14 = 1f;
	uParam0->f_15 = 1f;
	*uParam0 = 0;
	uParam0->f_3 = -1;
	MISC::CLEAR_BIT(&(uParam0->f_12), 3);
	MISC::CLEAR_BIT(&(uParam0->f_12), 5);
}

bool func_715(int iParam0)//Position - 0x1E0424
{
	return iParam0 == joaat("h4_prop_h4_weed_stack_01a");
}

bool func_716(int iParam0)//Position - 0x1E0434
{
	return iParam0 == joaat("h4_prop_h4_coke_stack_01a");
}

bool func_717(int iParam0)//Position - 0x1E0444
{
	return iParam0 == joaat("h4_prop_h4_cash_stack_01a");
}

void func_718(var uParam0)//Position - 0x1E049A
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, false);
	}
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_719()//Position - 0x1E0559
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_STASH_SWAG");
}

bool func_720(int iParam0)//Position - 0x1E0666
{
	return (((((((((((((((((iParam0 == joaat("ch_prop_vault_painting_01a") || iParam0 == joaat("ch_prop_vault_painting_01b")) || iParam0 == joaat("ch_prop_vault_painting_01c")) || iParam0 == joaat("ch_prop_vault_painting_01d")) || iParam0 == joaat("ch_prop_vault_painting_01e")) || iParam0 == joaat("ch_prop_vault_painting_01f")) || iParam0 == joaat("ch_prop_vault_painting_01g")) || iParam0 == joaat("ch_prop_vault_painting_01h")) || iParam0 == joaat("ch_prop_vault_painting_01i")) || iParam0 == joaat("ch_prop_vault_painting_01j")) || iParam0 == joaat("h4_prop_h4_painting_01a")) || iParam0 == joaat("h4_prop_h4_painting_01b")) || iParam0 == joaat("h4_prop_h4_painting_01c")) || iParam0 == joaat("h4_prop_h4_painting_01d")) || iParam0 == joaat("h4_prop_h4_painting_01e")) || iParam0 == joaat("h4_prop_h4_painting_01f")) || iParam0 == joaat("h4_prop_h4_painting_01g")) || iParam0 == joaat("h4_prop_h4_painting_01h"));
}

bool func_721(int iParam0)//Position - 0x1E0764
{
	return ((((((iParam0 == joaat("hei_prop_hei_cash_trolly_01") || iParam0 == joaat("ch_prop_cash_low_trolly_01a")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01a")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01b")) || iParam0 == joaat("ch_prop_ch_cash_trolly_01c")) || iParam0 == joaat("ch_prop_cash_low_trolly_01b")) || iParam0 == joaat("ch_prop_cash_low_trolly_01c"));
}

bool func_722(int iParam0)//Position - 0x1E07C8
{
	return (((iParam0 == joaat("prop_gold_trolly_full") || iParam0 == joaat("ch_prop_gold_trolly_01a")) || iParam0 == joaat("ch_prop_gold_trolly_01b")) || iParam0 == joaat("ch_prop_gold_trolly_01c"));
}

bool func_723(int iParam0)//Position - 0x1E0802
{
	return ((iParam0 == joaat("ch_prop_diamond_trolly_01a") || iParam0 == joaat("ch_prop_diamond_trolly_01b")) || iParam0 == joaat("ch_prop_diamond_trolly_01c"));
}

bool func_724(int iParam0)//Position - 0x1E157D
{
	return iParam0 == joaat("imp_prop_impexp_coke_trolly");
}

bool func_725(int iParam0)//Position - 0x1E18D8
{
	return ((iParam0 == joaat("ch_prop_cash_low_trolly_01a") || iParam0 == joaat("ch_prop_cash_low_trolly_01b")) || iParam0 == joaat("ch_prop_cash_low_trolly_01c"));
}

void func_726(var uParam0)//Position - 0x1E1B44
{
	uParam0->f_14 = 1f;
	uParam0->f_15 = 1f;
}

bool func_727(int iParam0)//Position - 0x1E2AA0
{
	return iParam0 == joaat("h4_prop_h4_gold_stack_01a");
}

int func_728(int iParam0)//Position - 0x1E2C4D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("hei_prop_hei_cash_trolly_01"):
				return 1;
				break;
			case joaat("prop_gold_trolly_full"):
				return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_STASH_SWAG", false, -1);
				break;
			default:
				return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_STASH_SWAG", false, -1);
				break;
		}
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("imp_prop_impexp_coke_trolly"))
		{
			return 1;
		}
	}
	return 0;
}

char* func_729(var uParam0, int iParam1)//Position - 0x1E3B29
{
	switch (iParam1)
	{
		case 0:
			return "MC_INTOBJ_CP_R";
			break;
		case 1:
			return "MC_INTOBJ_CP_D";
			break;
		case 2:
			return "MC_INTOBJ_CP_L";
			break;
		case 3:
			return "MC_INTOBJ_CP_D";
			break;
	}
	return "";
}

void func_730(var uParam0)//Position - 0x1F02C4
{
	if (*uParam0 > 150f)
	{
		*uParam0 = 145f;
	}
	if (uParam0->f_1 > 150f)
	{
		uParam0->f_1 = 145f;
	}
	if (uParam0->f_2 > 150f)
	{
		uParam0->f_2 = 145f;
	}
}

int func_731(int iParam0, int iParam1)//Position - 0x1F030C
{
	if (iParam1 == 2)
	{
		return VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iParam0);
	}
	return VEHICLE::GET_ENTITY_ATTACHED_TO_CARGOBOB(iParam0);
}

int func_732(int iParam0, int iParam1)//Position - 0x1F18F4
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, (Var0.f_1 - 2.8f), (Var0.f_2 - 1.2f)) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, (Var1.f_1 + 2.8f), (Var1.f_2 + 1.2f)) };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var2, Var3, ((Var1.f_0 + 2.1f) - (Var0.f_0 - 2.1f)), false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_733(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1FC068
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
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	iVar4 = 185;
	iVar5 = 48;
	iVar6 = 48;
	iVar7 = iVar3;
	fParam0 = (fParam0 / 100f);
	if (fParam0 > 1f)
	{
		fParam0 = 1f;
	}
	if (fParam0 < 0f)
	{
		fParam0 = 0f;
	}
	iVar8 = (iVar4 - iVar0);
	*uParam1 = (iVar0 + SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar8) * fParam0)));
	iVar8 = (iVar5 - iVar1);
	*uParam2 = (iVar1 + SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar8) * fParam0)));
	iVar8 = (iVar6 - iVar2);
	*uParam3 = (iVar2 + SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar8) * fParam0)));
	iVar8 = (iVar7 - iVar3);
	*uParam4 = (iVar3 + SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar8) * fParam0)));
}

int func_734()//Position - 0x1FC113
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1317))
	{
		return 1;
	}
	return 0;
}

int func_735(bool bParam0)//Position - 0x1FC522
{
	if (bParam0 != -1)
	{
		return Global_1975224[bParam0 /*53*/].f_5.f_35;
	}
	return 0;
}

int func_736(bool bParam0, int iParam1)//Position - 0x1FC540
{
	if (bParam0 != -1)
	{
		return BitTest(Global_1975224[bParam0 /*53*/].f_5.f_1, iParam1);
	}
	return 0;
}

int func_737(bool bParam0)//Position - 0x1FC561
{
	if (bParam0 != -1)
	{
		switch (Global_1975224[bParam0 /*53*/].f_5.f_9)
		{
			case 4:
			case 2:
				return 11;
			default:
		}
		return 10;
	}
	return -1;
}

int func_738(int iParam0)//Position - 0x1FC597
{
	if (iParam0 == joaat("h4_prop_h4_bag_cutter_01a"))
	{
		return 10;
	}
	else if (iParam0 == joaat("h4_prop_h4_jammer_01a"))
	{
		return 7;
	}
	else if (iParam0 == joaat("h4_prop_h4_box_ammo03a"))
	{
		return 8;
	}
	else if (iParam0 == joaat("h4_prop_h4_gascutter_01a"))
	{
		return 9;
	}
	else if (iParam0 == joaat("h4_prop_h4_mb_crate_01a"))
	{
		return 13;
	}
	else if (iParam0 == joaat("h4_prop_h4_card_hack_01a"))
	{
		return 12;
	}
	return -1;
}

int func_739(bool bParam0)//Position - 0x1FC7DD
{
	if (bParam0 != -1)
	{
		return Global_1970897[bParam0 /*68*/].f_18.f_13;
	}
	return 0;
}

int func_740(bool bParam0, bool bParam1)//Position - 0x1FC7FB
{
	if (bParam0 != -1)
	{
		if (Global_1970897[bParam0 /*68*/].f_18.f_12 != 0 || !bParam1)
		{
			return Global_1970897[bParam0 /*68*/].f_18.f_12;
		}
	}
	if (bParam1)
	{
		return Global_1966500.f_15;
	}
	return 0;
}

int func_741(int iParam0)//Position - 0x1FCBCA
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 0);
	}
	return 0;
}

int func_742(int iParam0)//Position - 0x1FCBEA
{
	bool bVar0;
	if (iParam0 != -1)
	{
		bVar0 = false;
		while (bVar0 < 11)
		{
			if (!BitTest(Global_1970897[iParam0 /*68*/].f_18.f_2, bVar0))
			{
				return 0;
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

int func_743(int iParam0)//Position - 0x1FCC64
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 2);
	}
	return 0;
}

int func_744(int iParam0)//Position - 0x1FCC82
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18, 19);
	}
	return 0;
}

int func_745(int iParam0)//Position - 0x1FCCBF
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 9);
	}
	return 0;
}

int func_746(int iParam0)//Position - 0x1FCDFD
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_18.f_1, 2);
	}
	return 0;
}

int func_747(int iParam0)//Position - 0x1FCE45
{
	switch (iParam0)
	{
		case joaat("prop_box_guncase_03a"):
			return 1;
		default:
	}
	if (iParam0 == joaat("ch_prop_box_ammo01b"))
	{
		return 13;
	}
	if (iParam0 == joaat("ch_prop_box_ammo01a"))
	{
		return 7;
	}
	if (iParam0 == joaat("ch_prop_ch_security_case_02a"))
	{
		return 3;
	}
	if (iParam0 == joaat("ch_prop_adv_case_sm_flash"))
	{
		return 30;
	}
	if (iParam0 == joaat("ch_prop_vault_drill_01a"))
	{
		return 5;
	}
	if ((iParam0 == joaat("ch_prop_crate_stack_01a") || iParam0 == joaat("ch_prop_ch_case_sm_01x")) || iParam0 == joaat("ch_prop_ch_crate_01a"))
	{
		return 1;
	}
	if (iParam0 == joaat("ch_prop_ch_bag_01a"))
	{
		return 24;
	}
	if (iParam0 == joaat("ch_prop_laserdrill_01a"))
	{
		return 4;
	}
	if (iParam0 == joaat("ch_prop_ch_duffbag_stealth_01a"))
	{
		return 22;
	}
	if (iParam0 == joaat("ch_prop_heist_drill_bag_01a"))
	{
		return 6;
	}
	if (iParam0 == joaat("ch_prop_ch_duffbag_gruppe_01a"))
	{
		return 27;
	}
	if (iParam0 == joaat("ch_prop_ch_bag_02a"))
	{
		return 28;
	}
	return -1;
}

int func_748(bool bParam0)//Position - 0x1FCF2D
{
	if (bParam0 != -1)
	{
		return Global_1970897[bParam0 /*68*/].f_18.f_4;
	}
	return 0;
}

int func_749(int iParam0)//Position - 0x1FD549
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 16:
		case 17:
		case 18:
			return 0;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return 1;
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return 2;
		default:
	}
	return -1;
}

int func_750(int iParam0)//Position - 0x1FD6D4
{
	switch (iParam0)
	{
		case 5:
			return 16;
		case 3:
			return 17;
		case 6:
			return 18;
		case 7:
			return 19;
		case 1:
			return 20;
		case 4:
			return 21;
		case 2:
			return 22;
		case 8:
			return 23;
		case 0:
			return 24;
		case 9:
			return 25;
		case 10:
			return 26;
		case 11:
			return 27;
		case 12:
			return 28;
		case 13:
			return 29;
		default:
	}
	return -1;
}

int func_751(int iParam0)//Position - 0x1FD77E
{
	switch (iParam0)
	{
		case joaat("xm_prop_x17_bag_01a"):
			return 0;
		case joaat("flatbed"):
			return 2;
		case joaat("deluxo"):
			return 3;
		case joaat("riot2"):
			return 4;
		case joaat("riot"):
			return 7;
		case joaat("ambulance"):
			return 5;
		case joaat("akula"):
			return 6;
		case joaat("wastelander"):
			return 2;
		case joaat("xm_prop_x17_flight_rec_01a"):
			return 13;
		case joaat("chernobog"):
			return 10;
		default:
	}
	if (iParam0 == joaat("xm_prop_x17_bag_01b"))
	{
		return 1;
	}
	if (iParam0 == joaat("xm_prop_x17_bag_01c"))
	{
		return 8;
	}
	if (iParam0 == joaat("xm_prop_x17_lap_top_01"))
	{
		return 12;
	}
	if (iParam0 == joaat("xm_prop_x17_ld_case_01"))
	{
		return 11;
	}
	return -1;
}

int func_752(bool bParam0)//Position - 0x1FD9B5
{
	if (bParam0 != -1)
	{
		return BitTest(Global_1977138[bParam0 /*57*/].f_27, 4);
	}
	return 0;
}

int func_753(bool bParam0)//Position - 0x1FDA8F
{
	if (bParam0 != -1)
	{
		return BitTest(Global_1975224[bParam0 /*53*/].f_1, 0);
	}
	return 0;
}

var func_754(int iParam0)//Position - 0x1FDC4D
{
	return Global_1892703[iParam0 /*599*/].f_10.f_179;
}

int func_755(bool bParam0)//Position - 0x1FDCBF
{
	return Global_1911933[bParam0 /*260*/].f_259;
}

bool func_756(bool bParam0)//Position - 0x1FDF93
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return __LIB_0__.func_674();
	}
	return BitTest(Global_1648034.f_241.f_136[__LIB_0__.func_159(10) /*33*/][bParam0], __LIB_0__.func_158(10));
}

int func_757(int iParam0)//Position - 0x1FDFC6
{
	switch (iParam0)
	{
		case 51:
		case 52:
			return 1;
		default:
	}
	return 0;
}

int func_758(int iParam0, bool bParam1, int iParam2)//Position - 0x1FE2CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = bParam1;
	if (iVar0 == -1 || iVar1 == -1)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1888817)
	{
		if (Global_1888862[iVar0 /*120*/].f_77.f_1[iVar2 /*3*/] == 2 && Global_1888862[iVar1 /*120*/].f_77.f_1[iVar2 /*3*/] == 2)
		{
			*iParam2 = iVar2;
			return 1;
		}
		iVar2++;
	}
	return 0;
}

var func_759()//Position - 0x1FEE5E
{
	return Global_2678393.f_1647;
}

int func_760(int iParam0, var uParam1, int iParam2)//Position - 0x20B426
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return -1;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_7;
	}
	return uParam1->f_7[iParam2 /*27*/].f_7;
}

int func_761(int iParam0, var uParam1, int iParam2)//Position - 0x20B46D
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return -1;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_16;
	}
	return uParam1->f_7[iParam2 /*27*/].f_16;
}

int func_762(int iParam0, var uParam1)//Position - 0x20B887
{
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_6;
	}
	return uParam1->f_6;
}

void func_763(bool bParam0, bool bParam1, bool bParam2)//Position - 0x20D0F1
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 437885653;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (bParam1)
	{
		MISC::SET_BIT(&(Var0.f_3), 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Var0.f_3), 1);
	}
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_764(int iParam0, int iParam1)//Position - 0x20D146
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (BitTest(Global_4980736.f_94390[iParam0 /*1004*/].f_543, 28))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0);
				iVar2 = -1;
				while (iVar2 <= (iVar3 - 1))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							return 0;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 1;
}

bool func_765(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x21198D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			if (((((bParam1 >= 0 && bParam1 < 80) && iParam2 >= 0) && iParam2 < 4) && iParam3 >= 0) && iParam3 < 17)
			{
				iVar0 = 1;
				if (Global_4980736.f_94390[bParam1 /*1004*/].f_40[iParam2] == iParam3)
				{
					bVar1 = true;
				}
			}
			break;
		case 2:
			if (((((bParam1 >= 0 && bParam1 < 32) && iParam2 >= 0) && iParam2 < 4) && iParam3 >= 0) && iParam3 < 17)
			{
				iVar0 = 1;
				if (Global_4980736.f_78578[bParam1 /*450*/].f_18[iParam2] == iParam3)
				{
					bVar1 = true;
				}
			}
			break;
		case 3:
			if (((((bParam1 >= 0 && bParam1 < 32) && iParam2 >= 0) && iParam2 < 4) && iParam3 >= 0) && iParam3 < 17)
			{
				iVar0 = 1;
				if (Global_4980736.f_5742[bParam1 /*442*/].f_21[iParam2] == iParam3)
				{
					bVar1 = true;
				}
			}
			break;
		case 4:
			if (((((bParam1 >= 0 && bParam1 < 20) && iParam2 >= 0) && iParam2 < 4) && iParam3 >= 0) && iParam3 < 17)
			{
				iVar0 = 1;
				if (Global_4980736.f_5742[bParam1 /*442*/].f_21[iParam2] == iParam3)
				{
					bVar1 = true;
				}
			}
			break;
	}
	if (iVar0 && !bVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 29)
		{
			if (Global_4718592.f_111254[iVar2] == iParam0 && Global_4718592.f_111285[iVar2] == bParam1)
			{
				iVar3 = 0;
				while (iVar3 <= 12)
				{
					if (Global_4718592.f_113297[iVar2 /*66*/][iVar3 /*5*/][iParam2] == iParam3)
					{
						bVar1 = true;
						iVar3 = 13;
					}
					iVar3++;
				}
				iVar2 = 30;
			}
			iVar2++;
		}
	}
	return bVar1;
}

int func_766(bool bParam0)//Position - 0x2145D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_4980736.f_5742[iVar0 /*442*/].f_67 == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_767(int iParam0)//Position - 0x2146A1
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 25:
		case 26:
		case 36:
		case 34:
		case 48:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_768(bool bParam0)//Position - 0x214C1E
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1695802831;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_769(bool bParam0)//Position - 0x214F4A
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1208645566;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_770(var uParam0)//Position - 0x217F76
{
	switch (*uParam0)
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

void func_771(bool bParam0)//Position - 0x2182B3
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 571654886;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_772(var uParam0, int iParam1)//Position - 0x219A72
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1426675307;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_773(int iParam0)//Position - 0x21A4FB
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
	}
	return iVar0;
}

bool func_774()//Position - 0x22542C
{
	return ((((BitTest(Global_4718592.f_162497, 16) || BitTest(Global_4718592.f_162497, 17)) || BitTest(Global_4718592.f_162497, 18)) || BitTest(Global_4718592.f_162497, 19)) || __LIB_0__.func_835(Global_4718592.f_116524));
}

void func_775(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x225C04
{
	struct<21> Var0;
	struct<20> Var1;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var1.f_4 = 1065353216;
	Var1.f_5 = 1065353216;
	Var1.f_9 = 1065353216;
	Var1.f_10 = 1065353216;
	Var1.f_14 = 1065353216;
	Var1.f_15 = 1065353216;
	Var1.f_17 = 1040187392;
	Var1.f_18 = 1040187392;
	Var1.f_19 = -1;
	Var0.f_1 = sParam2;
	Var0.f_2 = sParam3;
	Var0.f_0 = 1;
	Var0.f_20 = 49;
	Var0.f_16 = MISC::GET_HASH_KEY("BONEMASK_UPPERONLY");
	TASK::TASK_SCRIPTED_ANIMATION(iParam1, &Var0, &Var1, &Var1, 0.125f, 0.125f);
}

char* func_776(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x225E50
{
	if (bParam3)
	{
		switch (iParam2)
		{
			case 1:
				return "aim_med_loop";
			default:
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				return "idle_a";
			case 2:
				return "idle_d";
			}
		default:
	}
	return "INVALID";
}

char* func_777(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x225E9C
{
	if (bParam3)
	{
		switch (iParam2)
		{
			case 1:
				return "anim@weapons@flashlight@stealth";
			default:
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				return "AMB@CODE_HUMAN_POLICE_INVESTIGATE@idle_a";
			case 2:
				return "AMB@CODE_HUMAN_POLICE_INVESTIGATE@idle_b";
			}
		default:
	}
	return "INVALID";
}

void func_778(var uParam0, bool bParam1)//Position - 0x226FC5
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::SET_BLIP_SHOW_CONE(*uParam0, bParam1, 11);
	}
}

float func_779(int iParam0, float fParam1)//Position - 0x22760F
{
	switch (iParam0)
	{
		case 421:
		case 426:
			return 0.9f;
			break;
		case 424:
		case 423:
		case 422:
		case 353:
		case 64:
		case 427:
			return 1f;
			break;
		case 533:
		case 534:
			return 1f;
			break;
		case 589:
			return 1.2f;
			break;
		case 646:
			return 1f;
			break;
		case 833:
			return 1.2f;
			break;
		case 742:
			return 1f;
			break;
	}
	return fParam1;
}

int func_780(int iParam0, bool bParam1)//Position - 0x229698
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), PED::GET_VEHICLE_PED_IS_USING(iParam0)))
			{
				return 1;
			}
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), PED::GET_VEHICLE_PED_IS_USING(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_781(int iParam0, int iParam1)//Position - 0x229EF0
{
	struct<3> Var0;
	Var0.f_0 = -2000694069;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

void func_782(bool bParam0)//Position - 0x231B30
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 710786563;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_783(bool bParam0)//Position - 0x231B69
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1431551210;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

float func_784(int iParam0, var uParam1)//Position - 0x2320DF
{
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_4;
	}
	return uParam1->f_4;
}

float func_785(int iParam0, var uParam1, int iParam2)//Position - 0x232155
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return 0f;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_12;
	}
	return uParam1->f_7[iParam2 /*27*/].f_12;
}

void func_786(int iParam0, var uParam1)//Position - 0x2321FE
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -2029190504;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

float func_787(int iParam0, var uParam1, int iParam2)//Position - 0x232486
{
	if (iParam2 >= 12 || iParam2 <= -1)
	{
		return 0f;
	}
	if (iParam0 > -1)
	{
		return Global_4718592.f_176813[iParam0 /*332*/].f_7[iParam2 /*27*/].f_15;
	}
	return uParam1->f_7[iParam2 /*27*/].f_15;
}

int func_788(int iParam0)//Position - 0x233EAB
{
	int iVar0;
	switch (iParam0)
	{
		case 42:
		case 44:
		case 78:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_789(int iParam0)//Position - 0x233ED4
{
	int iVar0;
	switch (iParam0)
	{
		case 42:
		case 44:
		case 12:
		case 78:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_790(int iParam0)//Position - 0x239EDC
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1949654184;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_791(bool bParam0, bool bParam1, bool bParam2)//Position - 0x239FEA
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1528294114;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (bParam1)
	{
		MISC::SET_BIT(&(Var0.f_3), 0);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Var0.f_3), 1);
	}
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_792(int iParam0)//Position - 0x23E0B1
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_FLARE"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_PETROLCAN"):
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_VINTAGEPISTOL"):
		case joaat("WEAPON_FLAREGUN"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_HATCHET"):
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_793(int iParam0)//Position - 0x23E15B
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_PROXMINE"):
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_794(int iParam0)//Position - 0x23E1CD
{
	if (ENTITY::GET_ENTITY_SPEED(iParam0) < 2f)
	{
		return 1;
	}
	return 0;
}

int func_795(struct<3> Param0, float fParam1)//Position - 0x23F055
{
	int iVar0;
	if ((((Param0.f_0 > (7000f + fParam1) || Param0.f_0 < (-7000f - fParam1)) || Param0.f_1 > (8000f + fParam1)) || Param0.f_1 < (-7000f - fParam1)) || Param0.f_2 > (2000f + fParam1))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_796(bool bParam0)//Position - 0x23F3D1
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1750184395;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_797(bool bParam0)//Position - 0x240A75
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -487071400;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

char* func_798(int iParam0, bool bParam1)//Position - 0x240AAE
{
	if (Global_4980736.f_94390[bParam1 /*1004*/].f_589 == 16)
	{
		return "S_M_M_GENERICSECURITY_01_WHITE_MINI_01";
	}
	if (iParam0 > -1)
	{
		switch (iParam0)
		{
			case 0:
				return "S_M_Y_Cop_01_BLACK_FULL_01";
			case 1:
				return "S_M_Y_Cop_01_WHITE_FULL_01";
			}
		default:
	}
	return "";
}

void func_799(bool bParam0, int iParam1)//Position - 0x240BE2
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -1291405418;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_4 = iParam1;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_800(bool bParam0)//Position - 0x240C21
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 328078533;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_801(int iParam0, int iParam1)//Position - 0x240CB4
{
	int iVar0;
	iVar0 = NETWORK::GET_NETWORK_TIME();
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((iVar0 % iParam1 * 10) == 0)
		{
			AUDIO::PLAY_PAIN(iParam0, 25, 0f, 0);
		}
	}
}

void func_802(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x240EE2
{
	struct<6> Var0;
	int iVar1;
	Var0.f_0 = -371701203;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

char* func_803(int iParam0)//Position - 0x241DBD
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@lightlydrunk";
		case 1:
			return "move_m@drunk@moderatedrunk";
		case 2:
			return "move_m@drunk@verydrunk";
		case 3:
			return "move_m@flee@a";
		case 4:
			return "move_f@flee@a";
		case 5:
			return "AMB@WORLD_HUMAN_POWER_WALKER@BASE";
		case 6:
			return "move_M@TOUGH_GUY@";
		case 7:
			return "move_F@TOUGH_GUY@";
		case 8:
			return "move_injured_generic";
		case 9:
			return "move_injured_generic_female";
		default:
	}
	return "";
}

void func_804(int iParam0)//Position - 0x242F1D
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -555865863;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_805(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x245297
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
			{
				iParam0 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
			}
		}
	}
	fVar2 = 1f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	fVar4 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar5 = (Var1.f_2 - fVar4);
	if (fVar2 <= (fVar5 + 0.1f))
	{
		fVar2 = (fVar5 + 0.4f);
	}
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 1f, 1f, 1f, iParam1, iParam2, iParam3, 200, true, true, 2, false, 0, 0, false);
}

float func_806(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x245A25
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	fVar0 = SYSTEM::VDIST2(Param0, Param1);
	if (fVar0 == 0f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Param0, true);
	}
	fVar1 = (__LIB_0__.func_156(Param2 - Param0, Param1 - Param0) / fVar0);
	if (fVar1 < 0f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Param0, true);
	}
	else if (fVar1 > 1f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Param1, true);
	}
	Var2 = { Param0 + Vector(fVar1, fVar1, fVar1) * Param1 - Param0 };
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Param2, Var2, true);
}

struct<13> func_807(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x245AC1
{
	struct<13> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = 4;
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Var1 = { __LIB_0__.func_79(Param1 - Param0) };
	Var0[0 /*3*/] = { Var1 };
	fVar2 = Var0[0 /*3*/];
	Var0[0 /*3*/] = Var0[0 /*3*/].f_1;
	Var0[0 /*3*/].f_1 = (0f - fVar2);
	Var0[0 /*3*/] = { Param0 + Var0[0 /*3*/] * FtoV((fParam2 / 2f)) };
	Var0[1 /*3*/] = { Var1 };
	fVar2 = Var0[1 /*3*/];
	Var0[1 /*3*/] = (0f - Var0[1 /*3*/].f_1);
	Var0[1 /*3*/].f_1 = fVar2;
	Var0[1 /*3*/] = { Param0 + Var0[1 /*3*/] * FtoV((fParam2 / 2f)) };
	Var0[2 /*3*/] = { Var1 };
	fVar2 = Var0[2 /*3*/];
	Var0[2 /*3*/] = Var0[2 /*3*/].f_1;
	Var0[2 /*3*/].f_1 = (0f - fVar2);
	Var0[2 /*3*/] = { Param1 + Var0[2 /*3*/] * FtoV((fParam2 / 2f)) };
	Var0[3 /*3*/] = { Var1 };
	fVar2 = Var0[3 /*3*/];
	Var0[3 /*3*/] = (0f - Var0[3 /*3*/].f_1);
	Var0[3 /*3*/].f_1 = fVar2;
	Var0[3 /*3*/] = { Param1 + Var0[3 /*3*/] * FtoV((fParam2 / 2f)) };
	return Var0;
}

int func_808(bool bParam0)//Position - 0x2467BF
{
	int iVar0;
	iVar0 = 0;
	if (BitTest(Global_4980736.f_5[bParam0 /*273*/].f_89, 6))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_809(int iParam0)//Position - 0x246D1A
{
	int iVar0;
	iVar0 = 0;
	if ((((BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 0) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 1)) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 2)) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 3)) || BitTest(Global_4980736.f_5[iParam0 /*273*/].f_89, 4))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_810(bool bParam0, bool bParam1)//Position - 0x246E4F
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -829655830;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = bParam1;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

var func_811(struct<3> Param0)//Position - 0x24BD91
{
	var uVar0;
	struct<3> Var1;
	Var1.f_2 = (Param0.f_2 - 2f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar0, false, false))
	{
		Param0.f_2 = uVar0;
	}
	return Param0.f_2;
}

Vector3 func_812(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x24BDBC
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2[4];
	int iVar3;
	struct<3> Var4[4];
	int iVar5;
	Param1.f_2 = __LIB_2__.func_320(Param1.f_2, Param2.f_2);
	Param2.f_2 = Param1.f_2;
	Var0 = { Param2 - Param1 };
	fVar1 = Var0.f_0;
	Var0.f_0 = Var0.f_1;
	Var0.f_1 = (0f - fVar1);
	Var0 = { __LIB_0__.func_79(Var0) };
	fParam3 = ((fParam3 / 2f) - 2f);
	Var2[0 /*3*/] = { Param1 + Var0 * Vector(fParam3, fParam3, fParam3) };
	Var2[1 /*3*/] = { Param1 + Var0 * Vector(-fParam3, -fParam3, -fParam3) };
	Var2[2 /*3*/] = { Param2 + Var0 * Vector(fParam3, fParam3, fParam3) };
	Var2[3 /*3*/] = { Param2 + Var0 * Vector(-fParam3, -fParam3, -fParam3) };
	iVar3 = 0;
	Var4[0 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, Var2[0 /*3*/], Var2[1 /*3*/], true) };
	Var4[1 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, Var2[0 /*3*/], Var2[2 /*3*/], true) };
	Var4[2 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, Var2[2 /*3*/], Var2[3 /*3*/], true) };
	Var4[3 /*3*/] = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, Var2[1 /*3*/], Var2[3 /*3*/], true) };
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4[iVar5 /*3*/], true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4[iVar3 /*3*/], true))
		{
			iVar3 = iVar5;
		}
		iVar5++;
	}
	return Var4[iVar3 /*3*/];
}

void func_813(var uParam0, struct<3> Param1, int iParam2)//Position - 0x24CE93
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = 362970257;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = { Param1 };
	Var0.f_6 = iParam2;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

void func_814(var uParam0, var uParam1, var uParam2)//Position - 0x24DC03
{
	if (Global_2714762.f_43.f_581 < 5)
	{
		Global_2714762.f_43.f_583[Global_2714762.f_43.f_581] = uParam0;
		Global_2714762.f_43.f_589[Global_2714762.f_43.f_581] = uParam2;
		Global_2714762.f_43.f_595[Global_2714762.f_43.f_581] = uParam1;
		MISC::SET_BIT(&(Global_2714762.f_43.f_582), Global_2714762.f_43.f_581);
		Global_2714762.f_43.f_581++;
	}
}

char* func_815(int iParam0)//Position - 0x24DC84
{
	switch (iParam0)
	{
		case 0:
			return "ALARM_BELL_01";
		case 1:
			return "ALARM_BELL_02";
		case 2:
			return "ALARM_BELL_03";
		case 3:
			return "ALARM_KLAXON_01";
		case 4:
			return "ALARM_KLAXON_02";
		case 5:
			return "ALARM_KLAXON_03";
		case 6:
			return "ALARM_KLAXON_04";
		case 7:
			return "ALARM_KLAXON_05";
		case 8:
			return "ALARM_KLAXON_06";
		case 9:
			return "ALARM_KLAXON_07";
		case 10:
			return "";
		case 11:
			return "";
		case 12:
			return "";
		case 13:
			return "";
		case 14:
			return "";
		case 15:
			return "";
		case 16:
			return "";
		case 17:
			return "";
		case 18:
			return "ALARM_KLAXON_07";
		case 19:
			return "DLC_CHRISTMAS2017/XM_SILO";
		case 22:
			return "DLC_HEIST3/CASINO_HEIST_FINALE_GENERAL_01";
		case 23:
			return "DLC_CHRISTMAS2017/XM_SILO";
		case 24:
			return "DLC_CHRISTMAS2017/XM_SILO";
		default:
	}
	return "";
}

int func_816(int iParam0)//Position - 0x24F2A0
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("ch_prop_ch_cctv_wall_atta_01a"))
	{
		return 1;
	}
	return 0;
}

int func_817(int iParam0)//Position - 0x24FE48
{
	switch (iParam0)
	{
		case joaat("prop_fnclink_03gate1"):
		case 234679968:
		case -603321669:
		case joaat("prop_fnclink_03gate2"):
		case -633891736:
		case 407998623:
		case joaat("prop_fnclink_03gate3"):
		case -271779356:
		case joaat("prop_fnclink_03gate4"):
		case 33751332:
		case 1067023440:
		case joaat("prop_fnclink_03gate5"):
		case -747665783:
		case -1111467221:
		case joaat("prop_lrggate_04a"):
		case -219724389:
			return 1;
		default:
	}
	if (iParam0 == joaat("ch_prop_casino_door_01d"))
	{
		return 1;
	}
	return 0;
}

bool func_818(bool bParam0)//Position - 0x2500F9
{
	return __LIB_13__.func_185(bParam0) != 0;
}

int func_819(bool bParam0)//Position - 0x252008
{
	if (BitTest(Global_4980736.f_5742[bParam0 /*442*/].f_122, 0))
	{
		return 0;
	}
	return 1;
}

void func_820(bool bParam0, var uParam1, var uParam2)//Position - 0x252559
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 1169419726;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam1;
	Var0.f_2 = bParam0;
	Var0.f_4 = uParam2;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_821(int iParam0)//Position - 0x258C8D
{
	switch (iParam0)
	{
		case 422:
		case 64:
		case 528:
		case 529:
		case 530:
		case 531:
		case 532:
		case 533:
		case 534:
		case 512:
		case 558:
		case 559:
		case 560:
		case 561:
		case 562:
		case 563:
		case 595:
		case 596:
		case 597:
		case 598:
		case 599:
		case 600:
		case 601:
		case 602:
		case 603:
		case 589:
		case 631:
		case 632:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 640:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 666:
		case 667:
		case 668:
		case 669:
		case 646:
		case 742:
		case 746:
		case 753:
		case 758:
		case 348:
		case 749:
		case 757:
		case 754:
		case 745:
		case 755:
		case 759:
		case 747:
		case 748:
		case 750:
		case 760:
		case 824:
		case 825:
		case 823:
		case 820:
		case 821:
		case 818:
			return 1;
			break;
	}
	return 0;
}

int func_822(int iParam0, int iParam1)//Position - 0x25AC0E
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("ruiner2") || iVar0 == joaat("dune3"))
	{
		return 3000;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		return 13000;
	}
	if (iParam1 > -1 && iParam1 < 32)
	{
		if (BitTest(Global_4980736.f_78578[iParam1 /*450*/].f_113, 29))
		{
			return 25000;
		}
	}
	return 0;
}

void func_823(bool bParam0)//Position - 0x25BB79
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 15))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 15);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 15))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 15);
	}
}

int func_824(int iParam0)//Position - 0x25BCB3
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger"))
	{
		return 5;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo"))
	{
		return 4;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito"))
	{
		return 4;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks"))
	{
		return 2;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks3"))
	{
		return 2;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("benson"))
	{
		return 5;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito2"))
	{
		return 4;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule"))
	{
		return 4;
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule3"))
	{
		return 4;
	}
	return 0;
}

int func_825(int iParam0, int iParam1)//Position - 0x25DC65
{
	struct<3> Var0;
	float fVar1;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (!__LIB_0__.func_86(Global_4980736.f_5[iParam0 /*273*/].f_57) && !__LIB_0__.func_86(Global_4980736.f_5[iParam0 /*273*/].f_60))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Global_4980736.f_5[iParam0 /*273*/].f_57, Global_4980736.f_5[iParam0 /*273*/].f_60, Global_4980736.f_5[iParam0 /*273*/].f_63, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { Global_4980736.f_5[iParam0 /*273*/].f_1[0 /*3*/] };
			fVar1 = SYSTEM::POW(Global_4980736.f_5[iParam0 /*273*/].f_14[0], 2f);
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam1, true), Var0) < fVar1)
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<16> func_826(bool bParam0)//Position - 0x260E36
{
	struct<13> Var0;
	struct<2> Var1;
	Var0 = { __LIB_1__.func_267(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 0, &Var0);
	return Var1.f_1;
}

int func_827(int iParam0)//Position - 0x260F74
{
	if (Global_4718592.f_92543[iParam0] != 0)
	{
		return 1;
	}
	return 0;
}

int func_828(var uParam0)//Position - 0x2613B9
{
	if (Global_1931426)
	{
		return 0;
	}
	return BitTest(uParam0->f_1, 5);
}

void func_829(var uParam0, int iParam1)//Position - 0x264652
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
	if (*uParam0 > 0)
	{
		MISC::SET_BIT(&(uParam0->f_1), 7);
		MISC::SET_BIT(&(uParam0->f_1), 9);
	}
	if (*uParam0 > 1)
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 10);
		if (*uParam0 < 4)
		{
			uParam0->f_3 = 0f;
		}
		if (!BitTest(uParam0->f_1, 1))
		{
			uParam0->f_5 = 0;
		}
		uParam0->f_6 = 0;
		if (!BitTest(uParam0->f_1, 3))
		{
			uParam0->f_7 = 0;
		}
		if (!BitTest(uParam0->f_1, 4))
		{
			uParam0->f_8 = 0;
		}
	}
}

void func_830(int iParam0)//Position - 0x26ED99
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
}

void func_831(bool bParam0, bool bParam1)//Position - 0x27016E
{
	if (bParam1 < 0 || bParam1 > 7)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1568[bParam1]) || Global_2678393.f_1568[bParam1] == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2678393.f_1568[bParam1] = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), (10 + bParam1));
		}
		else
		{
			Global_2678393.f_1568[bParam1] = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), (10 + bParam1));
		}
	}
}

int func_832(var uParam0, int iParam1, int iParam2)//Position - 0x271000
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	sVar0 = "scr_ar_planes";
	sVar1 = "scr_ar_trail_smoke";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (iParam2 > 0)
		{
			HUD::GET_HUD_COLOUR(iParam2, &iVar2, &iVar3, &iVar4, &uVar5);
		}
		else
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
			switch (iParam2)
			{
				case 1:
					iVar2 = 255;
					iVar3 = 0;
					iVar4 = 0;
					break;
				case 2:
					iVar2 = 0;
					iVar3 = 255;
					iVar4 = 0;
					break;
				case 3:
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
					break;
				case 4:
					iVar2 = 255;
					iVar3 = 255;
					iVar4 = 0;
					break;
				case 5:
					iVar2 = 0;
					iVar3 = 255;
					iVar4 = 255;
					break;
				case 6:
					iVar2 = 255;
					iVar3 = 0;
					iVar4 = 255;
					break;
				case 7:
					iVar2 = 255;
					iVar3 = 255;
					iVar4 = 255;
					break;
				}
		}
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
			iVar6 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "rudder");
			if (iVar6 == -1)
			{
				*uParam0 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(sVar1, iParam1, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
			}
			else
			{
				*uParam0 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(sVar1, iParam1, 0f, 0f, -0.8f, 0f, 0f, 0f, iVar6, 1f, false, false, false, 1f, 1f, 1f, 0f);
			}
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar4), false);
		}
		return 1;
	}
	return 0;
}

int func_833()//Position - 0x2713A9
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (TASK::GET_IS_TASK_ACTIVE(iVar0, 2))
	{
		return 0;
	}
	if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar0))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0)
	{
		return 0;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iVar0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iVar0) != 0)
	{
		return 0;
	}
	return 1;
}

void func_834(var uParam0)//Position - 0x27142B
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		GRAPHICS::REMOVE_PARTICLE_FX(*uParam0, false);
	}
}

void func_835()//Position - 0x27169E
{
	if (!__LIB_0__.func_73())
	{
		Global_20266.f_1 = 3;
	}
}

int func_836(int iParam0)//Position - 0x2716B4
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				if (Global_20265 == 1)
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20265 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20266.f_1 > 3)
	{
		if (Global_20265 == 1)
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

void func_837(int iParam0)//Position - 0x271AED
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2815059.f_4660, 7))
		{
			MISC::SET_BIT(&(Global_2815059.f_4660), 7);
		}
	}
	else if (BitTest(Global_2815059.f_4660, 7))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 7);
	}
}

void func_838(int iParam0, int iParam1, int iParam2)//Position - 0x27421D
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = 72337390;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_839(int iParam0)//Position - 0x274359
{
	if (iParam0 == joaat("WEAPON_STUNGUN"))
	{
		return 1;
	}
	return 0;
}

void func_840(int iParam0, int iParam1)//Position - 0x2745BD
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = 542740201;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_841(int iParam0)//Position - 0x274F97
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1575618508;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_842(bool bParam0)//Position - 0x2752AE
{
	if (bParam0)
	{
	}
	Global_1574969 = bParam0;
}

void func_843(int iParam0)//Position - 0x2752C4
{
	Global_2703735.f_2722 = iParam0;
}

int func_844(int iParam0)//Position - 0x275FCE
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	iVar4 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		FILES::GET_VARIANT_PROP(iParam0, iVar0, &iVar1, &uVar2, &uVar3);
		if (iVar1 != 0 && iVar1 != joaat("0"))
		{
			return iVar1;
		}
		iVar0 = iVar4 + 1;
		iVar0++;
	}
	return 0;
}

bool func_845()//Position - 0x27601F
{
	if ((Global_4538824.f_1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4538824.f_2))) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_4538824.f_2))) == 0)
	{
		Global_4538824.f_1 = 0;
		StringCopy(&(Global_4538824.f_2), "", 32);
	}
	return Global_4538824.f_1;
}

int func_846()//Position - 0x27606D
{
	return Global_4538824.f_10;
}

void func_847()//Position - 0x276635
{
	Global_4521801.f_973 = 1;
}

int func_848(int iParam0, bool bParam1, int iParam2)//Position - 0x2768CA
{
	if (iParam0 == 0)
	{
		if (Global_4538824 != 0 && Global_4538824.f_1)
		{
			Global_4538824 = 0;
			Global_4538824.f_1 = 0;
			StringCopy(&(Global_4538824.f_2), "", 32);
			Global_4538824.f_10 = iParam2;
			return 1;
		}
	}
	else if (!bParam1)
	{
		Global_4538824 = iParam0;
		Global_4538824.f_1 = 0;
		StringCopy(&(Global_4538824.f_2), "", 32);
		Global_4538824.f_10 = iParam2;
		return 1;
	}
	else if (Global_4538824 != iParam0)
	{
		Global_4538824 = iParam0;
		Global_4538824.f_1 = 1;
		StringCopy(&(Global_4538824.f_2), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
		Global_4538824.f_10 = iParam2;
		return 1;
	}
	return 0;
}

int func_849()//Position - 0x276B2F
{
	if (GRAPHICS::GET_USINGNIGHTVISION())
	{
		return 2;
	}
	if (GRAPHICS::GET_USINGSEETHROUGH())
	{
		return 3;
	}
	return 1;
}

void func_850(int iParam0)//Position - 0x277221
{
	Global_2703735.f_833.f_15 = iParam0;
}

bool func_851(int iParam0)//Position - 0x278AB1
{
	int iVar0;
	iVar0 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (Global_1853203)
	{
		return 1;
	}
	return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("OVER_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_1"), 0));
}

void func_852(var uParam0, var uParam1)//Position - 0x27913C
{
	Global_2667225.f_22 = uParam0;
	Global_2667225.f_23 = uParam1;
}

void func_853(float fParam0)//Position - 0x2799D4
{
	Global_2667225.f_45.f_311 = fParam0;
}

void func_854(struct<3> Param0)//Position - 0x27A80A
{
	Global_1957699 = { Param0 };
}

Vector3 func_855(float fParam0, float fParam1, struct<3> Param2)//Position - 0x27A8C3
{
	struct<3> Var0;
	if (fParam1 < fParam0)
	{
		fParam1 = fParam0;
	}
	Var0 = { __LIB_0__.func_681(Param2, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1)) };
	return Var0;
}

float func_856(float fParam0, float fParam1)//Position - 0x27A8EF
{
	if (__LIB_0__.func_502())
	{
		return MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1);
	}
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, -fParam0);
}

int func_857(bool bParam0)//Position - 0x27BC89
{
	if (__LIB_9__.func_318(bParam0) == 146)
	{
		if (bParam0 == Global_2815059.f_5120)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_858(bool bParam0)//Position - 0x27C5B4
{
	switch (bParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 5f, 5f, 0f;
		case 2:
			return -5f, -5f, 0f;
		case 3:
			return -5f, 5f, 0f;
		case 4:
			return 5f, -5f, 0f;
		case 5:
			return 10f, 5f, 0f;
		case 6:
			return 10f, 10f, 0f;
		case 7:
			return -10f, -10f, 0f;
		case 8:
			return -10f, 10f, 0f;
		case 9:
			return 10f, -10f, 0f;
		default:
	}
	return 0f, 0f, 0f;
}

char* func_859(int iParam0)//Position - 0x27C9FF
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "SMALL_EXPLOSION_SHAKE";
			break;
		case 1:
			sVar0 = "MEDIUM_EXPLOSION_SHAKE";
			break;
		case 2:
			sVar0 = "LARGE_EXPLOSION_SHAKE";
			break;
		case 3:
			sVar0 = "HAND_SHAKE";
			break;
		case 4:
			sVar0 = "JOLT_SHAKE";
			break;
		case 5:
			sVar0 = "VIBRATE_SHAKE";
			break;
		case 6:
			sVar0 = "WOBBLY_SHAKE";
			break;
		case 7:
			sVar0 = "DRUNK_SHAKE";
			break;
		case 8:
			sVar0 = "WATER_BOB_SHAKE";
			break;
	}
	return sVar0;
}

void func_860(var uParam0)//Position - 0x27D6D6
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	Var0.f_2 = 6;
	Var0.f_0 = -480364226;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		Var0.f_2[iVar1] = (*uParam0)[iVar1];
		iVar1++;
	}
	iVar2 = __LIB_4__.func_511(1);
	if (!iVar2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iVar2);
	}
}

int func_861(bool bParam0, int iParam1)//Position - 0x27D9EC
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (bParam0 != -1 && iParam1 != -1)
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bParam0));
		bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (__LIB_1__.func_264(bVar0, 1, 1) && __LIB_1__.func_264(bVar1, 1, 1))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(bVar0);
			iVar3 = PLAYER::GET_PLAYER_PED(bVar1);
			if (!PED::IS_PED_INJURED(iVar2) && !PED::IS_PED_INJURED(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar5 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
				}
				if (iVar4 != iVar5)
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_862(int iParam0, bool bParam1)//Position - 0x27DB5E
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_407[iParam0] = bParam1;
}

void func_863(int iParam0)//Position - 0x27DB7A
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_414 = iParam0;
}

void func_864(int iParam0)//Position - 0x27DBC8
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_415 = iParam0;
}

int func_865(int iParam0)//Position - 0x27EF71
{
	if (Global_2824571.f_136 > 0 || iParam0)
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_14__.func_325());
	}
	return 0;
}

void func_866(int iParam0, bool bParam1)//Position - 0x27F0A6
{
	if (MISC::IS_PC_VERSION())
	{
		if (iParam0 != -1)
		{
			if (iParam0 == 0)
			{
				HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 15);
			}
			else if (iParam0 == 1)
			{
				HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 18);
			}
			else if (iParam0 == 2)
			{
				HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 24);
			}
			else if (iParam0 == 4)
			{
				if (bParam1)
				{
					HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 21);
				}
				else
				{
					HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, 6);
				}
			}
			else
			{
				HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(1, iParam0);
			}
		}
		else
		{
			HUD::OVERRIDE_MP_TEXT_CHAT_COLOR(0, 1);
		}
	}
}

var func_867(int iParam0)//Position - 0x27F5E7
{
	return Global_4718592.f_110318[iParam0];
}

int func_868(int iParam0, int iParam1)//Position - 0x27F5FC
{
	int iVar0;
	float fVar1;
	iVar0 = 1000;
	if ((iParam0 >= 0 && iParam0 < 4) && iParam1 < 17)
	{
		fVar1 = (IntToFloat(Global_4718592.f_658[iParam0 /*22957*/].f_16510[iParam1]) / 100f);
		iVar0 = SYSTEM::FLOOR((fVar1 * 1000f));
	}
	return iVar0;
}

void func_869(bool bParam0, int iParam1)//Position - 0x27FB58
{
	if (bParam0)
	{
		Global_1958631 = 1;
		Global_1958632 = iParam1;
	}
	else
	{
		Global_1958631 = 0;
		Global_1958632 = 0;
	}
}

void func_870(bool bParam0, int iParam1)//Position - 0x27FB7D
{
	if (bParam0)
	{
		Global_1958633 = 1;
		Global_1958634 = iParam1;
	}
	else
	{
		Global_1958633 = 0;
		Global_1958634 = 0;
	}
}

void func_871(var uParam0, var uParam1)//Position - 0x27FBA2
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((((uParam0->f_4 == joaat("VEHICLE_WEAPON_PLANE_ROCKET") || uParam0->f_4 == joaat("VEHICLE_WEAPON_SPACE_ROCKET")) || uParam0->f_4 == joaat("WEAPON_VEHICLE_ROCKET")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_DOGFIGHTER_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_ROGUE_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_HUNTER_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_VIGILANTE_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_TRAILER_MISSILE")) || uParam0->f_4 == joaat("VEHICLE_WEAPON_HUNTER_BARRAGE"))
	{
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_PLANE_ROCKET")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_SPACE_ROCKET")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("WEAPON_VEHICLE_ROCKET")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_DOGFIGHTER_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_ROGUE_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_HUNTER_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_VIGILANTE_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_TRAILER_MISSILE")))
		{
			return;
		}
		if (WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_HUNTER_BARRAGE")))
		{
			return;
		}
	}
}

void func_872()//Position - 0x28174F
{
	if (Global_2815059.f_287 == 1)
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) >= 1)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, false);
			Global_2815059.f_287 = 0;
			__LIB_0__.func_521(3782, 0, -1);
		}
		else
		{
			if (!__LIB_0__.func_137(3782, -1))
			{
				__LIB_0__.func_521(3782, 1, -1);
			}
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		}
	}
}

int func_873(int iParam0)//Position - 0x282589
{
	if (WEAPON::GET_BEST_PED_WEAPON(iParam0, true) == joaat("WEAPON_UNARMED") || WEAPON::GET_BEST_PED_WEAPON(iParam0, true) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_874(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2835E1
{
	return SYSTEM::VDIST2(Param0, Param1) < SYSTEM::POW(fParam2, 2f);
}

void func_875(bool bParam0)//Position - 0x283E39
{
	if (bParam0)
	{
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
	}
	else
	{
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	}
}

int func_876()//Position - 0x285DCD
{
	return Global_2667225.f_714;
}

int func_877(int iParam0)//Position - 0x2878BD
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 3;
			break;
		case 5:
			return 4;
			break;
		case 6:
			return 5;
			break;
		case 7:
			return 1;
			break;
		case 8:
			return 2;
			break;
		case 9:
			return 3;
			break;
		case 10:
			return 4;
			break;
		case 11:
			return 5;
			break;
		case 12:
			return -1;
			break;
		case 13:
			return -2;
			break;
		case 14:
			return -3;
			break;
		case 15:
			return -4;
			break;
	}
	return 0;
}

void func_878(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28BAA0
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = -1920455593;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam5;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

void func_879(int iParam0, int iParam1)//Position - 0x28EDF1
{
	int iVar0;
	if (iParam1 == joaat("stalion"))
	{
		iVar0 = 1;
		iVar0 = 1;
		while (iVar0 <= 5)
		{
			if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0))
			{
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0, true);
				}
			}
			iVar0++;
		}
	}
}

int func_880()//Position - 0x2AFD35
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if ((!__LIB_0__.func_86(Global_2667225.f_45[iVar0 /*12*/]) || !__LIB_0__.func_86(Global_2667225.f_45[iVar0 /*12*/].f_3)) || Global_2667225.f_45[iVar0 /*12*/].f_6 > 0f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_881(int iParam0)//Position - 0x2B0F72
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0))
	{
		if (iParam0 == PLAYER::INT_TO_PARTICIPANTINDEX(__LIB_1__.func_947(__LIB_1__.func_948())))
		{
			return 1;
		}
	}
	return 0;
}

int func_882(int iParam0)//Position - 0x2B0FC7
{
	if (Global_4718592.f_110323[iParam0] >= 1 && BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_12181, 8))
	{
		return 1;
	}
	return 0;
}

void func_883()//Position - 0x2B2EB7
{
	Global_2667225.f_2876 = 0;
}

void func_884(int iParam0, int iParam1)//Position - 0x2B2EC7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Global_2667225.f_2876 = iParam0;
		Global_2667225.f_2877 = iParam1;
	}
}

void func_885(int iParam0)//Position - 0x2B2EF7
{
	Global_2667225.f_45.f_312 = iParam0;
}

void func_886(float fParam0)//Position - 0x2B2F0A
{
	Global_2667225.f_45.f_307 = fParam0;
}

int func_887(int iParam0)//Position - 0x2B6E53
{
	return DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
}

void func_888(int iParam0)//Position - 0x2B714A
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sanctus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("avarus"))
		{
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_17321 /* Tunable: -1458062250 */);
		}
		else
		{
			VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_17320 /* Tunable: 891045982 */);
		}
	}
}

void func_889(bool bParam0, var uParam1, int iParam2)//Position - 0x2B78F4
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -1023507784;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_890(char* sParam0)//Position - 0x2B8338
{
	if ((MISC::ARE_STRINGS_EQUAL(sParam0, "DLC_SUM20/SUM20_Yacht_LAS_01") || MISC::ARE_STRINGS_EQUAL(sParam0, "DLC_VINEWOOD/VW_CASINO_FINALE")) || MISC::ARE_STRINGS_EQUAL(sParam0, "DLC_HEIST3/CASINO_HEIST_FINALE_GENERAL_01"))
	{
		return 0;
	}
	return 1;
}

var func_891(int iParam0)//Position - 0x2B9C2D
{
	return Global_4718592.f_173211[iParam0 /*58*/].f_23;
}

int func_892(bool bParam0)//Position - 0x2B9D97
{
	if (BitTest(Global_4718592.f_173211[bParam0 /*58*/].f_34, 13))
	{
		return 1;
	}
	else
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			return 1;
		}
	}
	return 0;
}

void func_893()//Position - 0x2BA834
{
	if (BitTest(Global_2815059.f_4660, 14))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 14);
	}
}

void func_894(var uParam0, var uParam1, int iParam2)//Position - 0x2DAB0F
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	switch (uParam0->f_508)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				(*uParam1)[iVar0] = -1;
				iVar0++;
			}
			uParam0->f_508 = 1;
			break;
		case 1:
			if (__LIB_15__.func_164(0))
			{
				iVar0 = 0;
				while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
						iVar1 = bVar3;
						if (__LIB_1__.func_264(bVar3, 0, 1))
						{
							if (Global_1836352 == (*uParam1)[iVar1] && Global_1836352 != iParam2)
							{
								Var2 = { __LIB_1__.func_267(bVar3) };
								NETWORK::NETWORK_SHOW_PROFILE_UI(&Var2);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
					}
					iVar0++;
				}
			}
			break;
	}
}

bool func_895()//Position - 0x2DAECF
{
	return Global_1836571;
}

void func_896()//Position - 0x2DC676
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 1);
}

void func_897(int iParam0)//Position - 0x2DCF88
{
	Global_2714762.f_43.f_5 = iParam0;
}

void func_898()//Position - 0x2DCF9A
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 0);
}

int func_899()//Position - 0x2DE47A
{
	int iVar0;
	if (!BitTest(Global_2815059.f_1792, 10))
	{
		iVar0 = __LIB_1__.func_556(1194, -1, 0);
		if (!BitTest(iVar0, 15))
		{
			return 0;
		}
	}
	return 1;
}

int func_900()//Position - 0x2FBE25
{
	if (__LIB_1__.func_159())
	{
		return 1;
	}
	if (__LIB_0__.func_191(12, -1))
	{
		return 1;
	}
	return 0;
}

char* func_901(int iParam0)//Position - 0x2FC202
{
	switch (iParam0)
	{
		case 1:
			return "LLIVEEXP";
			break;
		case 0:
			return "POUTBND";
			break;
	}
	return "PLYFAIL";
}

Vector3 func_902(int iParam0)//Position - 0x2FCF96
{
	if (iParam0 > -1)
	{
		return Global_4980736.f_5[iParam0 /*273*/].f_209[0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_903(int iParam0)//Position - 0x2FD5E8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_DIES_IN_WATER(iParam0, false);
			PED::SET_PED_MAX_TIME_UNDERWATER(iParam0, 10000f);
			PED::SET_PED_DIES_IN_SINKING_VEHICLE(iParam0, false);
		}
	}
}

void func_904()//Position - 0x2FE133
{
	MISC::CLEAR_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 1);
}

Vector3 func_905(int iParam0)//Position - 0x2FE32A
{
	switch (iParam0)
	{
		case 1:
			return 2154.8835f, 2921.061f, -82.0755f;
		case 2:
			return 2154.9832f, 2920.958f, -62.9025f;
		case 3:
			return -182.216f, -1016.441f, 31.373f;
		case 4:
			return -182.9832f, -1016.958f, 115.51f;
		case 5:
			return -182.9832f, -1016.958f, 31.37f;
		case 6:
			return -182.216f, -1016.441f, 115.51f;
		case 7:
			return -158.778f, -942.255f, 31.37f;
		case 8:
			return -158.778f, -942.255f, 115.654f;
		case 9:
			return -158.778f, -942.255f, 270.9025f;
		case 10:
			return -158.778f, -942.958f, 31.37f;
		case 11:
			return -158.778f, -942.958f, 115.654f;
		case 12:
			return -158.778f, -942.958f, 270.9025f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_906(int iParam0)//Position - 0x2FEC8C
{
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 == __LIB_15__.func_166())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_15__.func_165();
		__LIB_1__.func_824();
	}
	else if (iParam0 && !BitTest(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29, 16))
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_15__.func_166();
		__LIB_16__.func_509();
	}
}

int func_907(bool bParam0)//Position - 0x2FF2CF
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("frogger"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("frogger2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("valkyrie"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("valkyrie2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("supervolito"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("supervolito2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("swift"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("swift2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("savage"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("skylift"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("maverick"), bParam0);
	return 11;
}

int func_908(int iParam0, int iParam1)//Position - 0x306551
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 62:
					if (__LIB_1__.func_7(&Global_2788055))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_909(int iParam0, int iParam1)//Position - 0x30D6E6
{
	int iVar0;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((!VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) && iVar0 != joaat("hydra")) && iVar0 != joaat("tula")) && iVar0 != joaat("avenger"))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (((iVar0 == joaat("hydra") || iVar0 == joaat("tula")) || iVar0 == joaat("avenger")) && VEHICLE::GET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0) != 1f)
	{
		VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
	if (iParam1 && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0))
	{
		VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
	}
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 1f);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
}

void func_910(int iParam0)//Position - 0x30E9FD
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	VEHICLE::DELETE_VEHICLE(&iParam0);
}

int func_911()//Position - 0x30EC28
{
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_vw_oil");
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_vw_oil"))
	{
		return 0;
	}
	return 1;
}

void func_912()//Position - 0x310616
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 2);
}

int func_913(int iParam0, bool bParam1, var uParam2)//Position - 0x310CE7
{
	switch (iParam0)
	{
		case 73:
		case 76:
			if (bParam1 == 1)
			{
				return 0;
			}
			break;
		case 74:
		case 77:
			if (bParam1 == 0)
			{
				return 0;
			}
			break;
		case 79:
			if (!BitTest(uParam2, bParam1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_914()//Position - 0x31241C
{
	if (BitTest(Global_4718592.f_161915.f_17, 30))
	{
		return 0;
	}
	return 1;
}

int func_915(int iParam0, bool bParam1)//Position - 0x31243A
{
	int iVar0;
	if ((iParam0 < 0 || (bParam1 && iParam0 >= __LIB_12__.func_738())) || (!bParam1 && iParam0 >= 5))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = BitTest(Global_4718592.f_142828[iParam0 /*1626*/].f_4, 2);
	}
	else
	{
		iVar0 = BitTest(Global_4718592.f_159089[iParam0 /*565*/].f_16, 2);
	}
	return iVar0;
}

int func_916(char* sParam0)//Position - 0x312540
{
	int iVar0;
	bool bVar1;
	SCRIPT::SCRIPT_THREAD_ITERATOR_RESET();
	while (!bVar1)
	{
		iVar0 = SCRIPT::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		if (MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_NAME_OF_SCRIPT_WITH_THIS_ID(iVar0), sParam0))
		{
			bVar1 = true;
		}
	}
	return iVar0;
}

void func_917(char* sParam0)//Position - 0x31256F
{
	StringCopy(&(Global_2714762.f_43.f_18), sParam0, 24);
}

void func_918(int iParam0)//Position - 0x312D1C
{
	Global_2714762.f_43.f_617 = iParam0;
}

void func_919()//Position - 0x31303F
{
	MISC::SET_BIT(&(Global_2714762.f_43.f_4), 3);
}

void func_920()//Position - 0x313054
{
	MISC::CLEAR_BIT(&(Global_2714762.f_43.f_4), 3);
}

void func_921(int iParam0)//Position - 0x31709A
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -860097505;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

bool func_922(bool bParam0)//Position - 0x377E77
{
	return __LIB_4__.func_109(bParam0, 3);
}

char* func_923(int iParam0)//Position - 0x424ABD
{
	switch (iParam0)
	{
		case -1:
			return "NONE" /* GXT: None */;
		case 0:
			return "SMALL_EXPLOSION_SHAKE";
		case 1:
			return "MEDIUM_EXPLOSION_SHAKE";
		case 2:
			return "LARGE_EXPLOSION_SHAKE";
		case 3:
			return "HAND_SHAKE";
		case 4:
			return "JOLT_SHAKE";
		case 5:
			return "VIBRATE_SHAKE";
		case 6:
			return "WOBBLY_SHAKE";
		case 7:
			return "DRUNK_SHAKE";
		default:
	}
	return "";
}

void func_924()//Position - 0x424B4C
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			__LIB_17__.func_198(3, 4);
			break;
		case 1:
			__LIB_17__.func_198(3, 5);
			break;
		case 2:
			__LIB_17__.func_198(3, 6);
			break;
		case 3:
			__LIB_17__.func_198(3, 7);
			break;
	}
}

int func_925(int iParam0)//Position - 0x425415
{
	switch (iParam0)
	{
		case 1:
			return 144;
		case 2:
			return 139;
		default:
	}
	return 228;
}

char* func_926(int iParam0, int iParam1)//Position - 0x429AF6
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "";
				default:
			}
			break;
	}
	return "";
}

void func_927(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x42AD63
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 90f;
			*uParam2 = 130f;
			*uParam3 = 50f;
			*uParam4 = 90f;
			break;
		case 2:
			*uParam1 = 270f;
			*uParam2 = 310f;
			*uParam3 = 230f;
			*uParam4 = 270f;
			break;
		case 3:
		case 4:
			*uParam1 = -110f;
			break;
		case 5:
		case 6:
			*uParam1 = -290f;
			break;
		case 7:
		case 8:
		case 9:
			*uParam1 = -200f;
			break;
		case 10:
		case 11:
		case 12:
			*uParam1 = -20f;
			break;
	}
}

void func_928()//Position - 0x42AE2C
{
	int iVar0;
	int iVar1;
	iVar0 = 21;
	while (iVar0 <= 104)
	{
		iVar1 = iVar0;
		if (iVar1 != 27)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar1, true);
		}
		iVar0++;
	}
}

bool func_929(int iParam0)//Position - 0x42AE7D
{
	return BitTest(Global_4718592.f_142828[iParam0 /*1626*/].f_4, 12);
}

int func_930(int iParam0, bool bParam1)//Position - 0x42BBB2
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return 0;
	}
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				STREAMING::REQUEST_ANIM_DICT("anim@BUILDING_TRANS@HINGE_L");
				if (STREAMING::HAS_ANIM_DICT_LOADED("anim@BUILDING_TRANS@HINGE_L"))
				{
					return 1;
				}
				break;
			default:
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				STREAMING::REMOVE_ANIM_DICT("anim@BUILDING_TRANS@HINGE_L");
				break;
		}
		return 1;
	}
	return 0;
}

void func_931()//Position - 0x42BC25
{
	MISC::SET_BIT(&(Global_1924338[PLAYER::PLAYER_ID() /*199*/].f_198), 1);
}

int func_932(int iParam0)//Position - 0x42BD9C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (BitTest(Global_4718592.f_142828[iParam0 /*1626*/].f_441[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_933(int iParam0, var uParam1)//Position - 0x42DA02
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = __LIB_0__.func_263(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, __LIB_0__.func_263(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = __LIB_6__.func_772(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = __LIB_6__.func_772(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (66 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !__LIB_0__.func_261(Var7.f_1)) && iVar9 < 66)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (!__LIB_0__.func_259(Var8.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

void func_934()//Position - 0x42DE44
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mg_race_to_point")) > 0)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 16);
	}
}

int func_935(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x42EB04
{
	switch (iParam2)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 14);
						case 1:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 20);
						case 2:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_17, 1);
						default:
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 15);
						case 1:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 21);
						case 2:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_17, 2);
						default:
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 16);
						case 1:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 22);
						case 2:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_17, 3);
						default:
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 17);
						case 1:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_16, 23);
						case 2:
							return BitTest(Global_4718592.f_159089[iParam1 /*565*/].f_17, 4);
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_161915.f_16, 14);
						case 1:
							return BitTest(Global_4718592.f_161915.f_16, 20);
						case 2:
							return BitTest(Global_4718592.f_161915.f_17, 1);
						default:
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_161915.f_16, 15);
						case 1:
							return BitTest(Global_4718592.f_161915.f_16, 21);
						case 2:
							return BitTest(Global_4718592.f_161915.f_17, 2);
						default:
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_161915.f_16, 16);
						case 1:
							return BitTest(Global_4718592.f_161915.f_16, 22);
						case 2:
							return BitTest(Global_4718592.f_161915.f_17, 3);
						default:
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 0:
							return BitTest(Global_4718592.f_161915.f_16, 17);
						case 1:
							return BitTest(Global_4718592.f_161915.f_16, 23);
						case 2:
							return BitTest(Global_4718592.f_161915.f_17, 4);
						default:
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_936()//Position - 0x42F95F
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MASK")))
	{
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MASK"));
}

bool func_937(var uParam0)//Position - 0x42F9B8
{
	return BitTest(uParam0->f_2, 1);
}

int func_938(int iParam0)//Position - 0x42FE02
{
	if (iParam0 == joaat("bodhi2"))
	{
		return 1;
	}
	return 0;
}

int func_939(int iParam0)//Position - 0x42FE19
{
	if (iParam0 == -1351130214 || iParam0 == -1348300917)
	{
		return 1;
	}
	return 0;
}

int func_940(int iParam0)//Position - 0x42FE3F
{
	if (((iParam0 == -1388248248 || iParam0 == 112541904) || iParam0 == joaat("clipset@veh@van@rds_rear@base")) || iParam0 == joaat("clipset@veh@van@rps_rear@base"))
	{
		return 1;
	}
	return 0;
}

int func_941(int iParam0)//Position - 0x42FE81
{
	if (((iParam0 == joaat("clipset@veh@low@ds@base") || iParam0 == joaat("clipset@veh@low@ps@base")) || iParam0 == -1773703166) || iParam0 == 809557572)
	{
		return 1;
	}
	return 0;
}

int func_942(int iParam0)//Position - 0x42FEC3
{
	if (((iParam0 == -961969251 || iParam0 == 2137025664) || iParam0 == -1773703166) || iParam0 == 809557572)
	{
		return 1;
	}
	return 0;
}

int func_943(int iParam0)//Position - 0x42FF05
{
	if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (iParam0 == joaat("blazer"))
	{
		return 0;
	}
	if (iParam0 == joaat("blazer2"))
	{
		return 0;
	}
	if (iParam0 == joaat("blazer3"))
	{
		return 0;
	}
	return 1;
}

char* func_944()//Position - 0x42FF92
{
	return "put_on_mask";
}

int func_945(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x430478
{
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 14)
		{
			if ((iParam2 >= 131 && iParam2 <= 138) || (iParam2 >= 147 && iParam2 <= 154))
			{
				return 1;
			}
			else if (iParam2 >= 327)
			{
				if (iParam3 == -1)
				{
					iParam3 = __LIB_0__.func_420(iParam0, iParam2, 14, 3);
				}
				if (__LIB_0__.func_709(iParam0, iParam1, iParam2, iParam3))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("FULL_FACE"), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 14)
		{
			if ((iParam2 >= 131 && iParam2 <= 138) || (iParam2 >= 147 && iParam2 <= 154))
			{
				return 1;
			}
			else if (iParam2 >= 327)
			{
				if (iParam3 == -1)
				{
					iParam3 = __LIB_0__.func_420(iParam0, iParam2, 14, 4);
				}
				if (__LIB_0__.func_709(iParam0, iParam1, iParam2, iParam3))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("FULL_FACE"), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_946(var uParam0)//Position - 0x43074F
{
	return BitTest(uParam0->f_2, 0);
}

void func_947(var uParam0, int iParam1)//Position - 0x430F9C
{
	uParam0->f_11 = { Global_4718592.f_165298[iParam1 /*3*/] };
	uParam0->f_14 = Global_4718592.f_165316[iParam1];
	uParam0->f_15 = { Global_4718592.f_165272[iParam1 /*3*/] };
	uParam0->f_18 = { Global_4718592.f_165285[iParam1 /*3*/] };
	uParam0->f_21 = Global_4718592.f_165311[iParam1];
}

void func_948()//Position - 0x431977
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				}
			}
		}
	}
}

void func_949(float fParam0)//Position - 0x4319E2
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(PLAYER::PLAYER_PED_ID(), iVar0, fParam0, 786603);
				}
			}
		}
	}
}

int func_950()//Position - 0x431B18
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
				}
				return 0;
			}
			else if (NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_951()//Position - 0x431B74
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, true, true);
				}
				return 0;
			}
			else if (NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_952()//Position - 0x431BCF
{
	CAM::STOP_GAMEPLAY_HINT(true);
}

int func_953(int iParam0)//Position - 0x431CDA
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			return -1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, false))
		{
			return 0;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, false))
		{
			return 2;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 3, false))
		{
			return 3;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 4, false))
		{
			return 4;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 5, false))
		{
			return 5;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 6, false))
		{
			return 6;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 7, false))
		{
			return 7;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 8, false))
		{
			return 8;
		}
	}
	return -2;
}

bool func_954()//Position - 0x431D88
{
	return !Global_2815059.f_4599;
}

void func_955(int iParam0, int iParam1)//Position - 0x431D98
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), &Var0, &Var1);
		fVar2 = (Var1.f_2 - Var0.f_2);
		CAM::SET_GAMEPLAY_VEHICLE_HINT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f, fLocal_78, 0f, true, iParam1, iParam0, 0);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET((fLocal_75 * fVar2));
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_76);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_77);
	}
}

int func_956(int iParam0)//Position - 0x432131
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (__LIB_10__.func_870(iVar0) || iVar0 == joaat("stromberg"))
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

int func_957(bool bParam0)//Position - 0x43216D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__.func_264(bParam0, 1, 1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0)))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if ((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("stromberg"))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar0) || (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) < 0.5f && ENTITY::GET_ENTITY_SPEED(iVar0) > 2f))
					{
						if (!BitTest(Global_4718592.f_12, 21))
						{
							iVar1 = 0;
							while (iVar1 < VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) + 1)
							{
								iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, (iVar1 - 1), false);
								if (iVar2 != 0)
								{
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_A_PLAYER(iVar2))
										{
											if (PLAYER::GET_PLAYER_PED(bParam0) != iVar2)
											{
												if (PLAYER::GET_PLAYER_TEAM(bParam0) != PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)))
												{
													return 0;
												}
											}
										}
									}
								}
								else if (iVar1 == 0)
								{
									return 0;
								}
								iVar1++;
							}
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

int func_958(var uParam0, var uParam1, struct<3> Param2)//Position - 0x432486
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_11, 300f, 300f, 300f, false, true, 0))
	{
		if (!BitTest(uParam1->f_1, 6))
		{
			MISC::SET_BIT(&(uParam1->f_1), 6);
		}
		return 1;
	}
	if (!__LIB_0__.func_86(Param2))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param2, 300f, 300f, 300f, false, true, 0))
		{
			if (!BitTest(uParam1->f_1, 6))
			{
				MISC::SET_BIT(&(uParam1->f_1), 6);
			}
			return 1;
		}
	}
	return 0;
}

int func_959(var uParam0)//Position - 0x4325AD
{
	float fVar0;
	fVar0 = __LIB_5__.func_2(MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__.func_265(PLAYER::PLAYER_ID()), uParam0->f_11, true));
	if (__LIB_0__.func_718(1))
	{
		if (fVar0 < IntToFloat(Global_262145.f_23431 /* Tunable: -647532692 */))
		{
			return Global_262145.f_23428 /* Tunable: -410008161 */;
		}
		else if (fVar0 >= IntToFloat(Global_262145.f_23432 /* Tunable: -915582564 */) && fVar0 <= IntToFloat(Global_262145.f_23433 /* Tunable: 599041078 */))
		{
			return Global_262145.f_23429 /* Tunable: -362232112 */;
		}
		else if (fVar0 > IntToFloat(Global_262145.f_23433 /* Tunable: 599041078 */))
		{
			return Global_262145.f_23430 /* Tunable: 1827742261 */;
		}
	}
	else if (!__LIB_0__.func_175())
	{
		if (fVar0 < 4f)
		{
			return 4000;
		}
		else if (fVar0 >= 10f)
		{
			return 10000;
		}
	}
	else if (fVar0 < IntToFloat(Global_262145.f_23424 /* Tunable: 940931043 */))
	{
		return Global_262145.f_23403 /* Tunable: -128173654 */;
	}
	else if (fVar0 >= IntToFloat(Global_262145.f_23425 /* Tunable: -648686294 */) && fVar0 <= IntToFloat(Global_262145.f_23426 /* Tunable: 518822185 */))
	{
		return Global_262145.f_23404 /* Tunable: 1138568799 */;
	}
	else if (fVar0 > IntToFloat(Global_262145.f_23426 /* Tunable: 518822185 */))
	{
		return Global_262145.f_23405 /* Tunable: 304858460 */;
	}
	return 7000;
}

void func_960()//Position - 0x4326C4
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
}

int func_961(int iParam0)//Position - 0x43288B
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("surfer"))
	{
		return 1;
	}
	return 0;
}

bool func_962(int iParam0)//Position - 0x433211
{
	return __LIB_4__.func_943(iParam0);
}

void func_963(struct<3> Param0)//Position - 0x43361D
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 528926723;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	iVar1 = __LIB_4__.func_511(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_964(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x43D028
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			__LIB_0__.func_478(sParam1);
		}
		else if (__LIB_9__.func_318(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C" /* GXT: ~a~ Challenge (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		__LIB_0__.func_478("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_965()//Position - 0x43D275
{
	if (__LIB_9__.func_318(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

int func_966()//Position - 0x43D4C8
{
	if (__LIB_9__.func_318(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2815059.f_5114;
	}
	return -1;
}

int func_967()//Position - 0x43FE22
{
	if ((__LIB_0__.func_850() && Global_2714762.f_669.f_10 == 0) || !__LIB_0__.func_850())
	{
		return 1;
	}
	return 0;
}

char* func_968()//Position - 0x44186F
{
	if (MISC::IS_PC_VERSION() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return "FLTR_PC_HELP" /* GXT: Press ~INPUT_VEH_HEADLIGHT~ to toggle between different filters. */;
	}
	return "FILTERS_HELP" /* GXT: Press ~INPUT_CONTEXT~ to toggle between different filters. */;
}

int func_969(int iParam0)//Position - 0x4455D8
{
	if (BitTest(Global_4718592.f_117098[iParam0 /*210*/].f_18, 2))
	{
		return 1;
	}
	return 0;
}

int func_970(int iParam0)//Position - 0x44599E
{
	if (iParam0 == joaat("rallytruck"))
	{
		if (BitTest(Global_4718592.f_18, 31))
		{
			return 1;
		}
	}
	if (iParam0 == joaat("starling"))
	{
		if (__LIB_12__.func_364())
		{
			return 1;
		}
	}
	return 0;
}

int func_971(var uParam0, int iParam1)//Position - 0x446DC3
{
	if (iParam1 == 0)
	{
		if (*uParam0 >= 3 && *uParam0 < 7)
		{
			return 1;
		}
	}
	else if (*uParam0 >= 3 && *uParam0 <= 7)
	{
		return 1;
	}
	return 0;
}

char* func_972(int iParam0)//Position - 0x447BD5
{
	switch (iParam0)
	{
		case 1:
			return "DLC_HEIST_MISSION_GUNFIGHT_SCENE";
		case 2:
			return "DLC_HEIST_MISSION_DRIVING_SCENE";
		default:
	}
	return "";
}

void func_973()//Position - 0x447C2E
{
	if (BitTest(Global_4718592.f_14, 7))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("Speed_Race_Airport_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("Speed_Race_Airport_Scene");
		}
	}
}

void func_974(int iParam0)//Position - 0x4551E2
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("InchPickup") && iParam0 != 11)
	{
		GRAPHICS::ANIMPOSTFX_STOP("InchPickup");
		GRAPHICS::ANIMPOSTFX_PLAY("InchPickupOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPOrange") && iParam0 != 12)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPOrange");
		GRAPHICS::ANIMPOSTFX_PLAY("PPOrangeOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPurple") && iParam0 != 13)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPPurple");
		GRAPHICS::ANIMPOSTFX_PLAY("PPPurpleOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPGreen") && iParam0 != 14)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPGreen");
		GRAPHICS::ANIMPOSTFX_PLAY("PPGreenOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPink") && iParam0 != 15)
	{
		GRAPHICS::ANIMPOSTFX_STOP("PPPink");
		GRAPHICS::ANIMPOSTFX_PLAY("PPPinkOut", 0, false);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeadlineNeon") && iParam0 != 16)
	{
		GRAPHICS::ANIMPOSTFX_STOP("DeadlineNeon");
	}
	else if ((GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 && iParam0 < 1) && iParam0 > 10)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(1f);
	}
}

int func_975()//Position - 0x45530E
{
	if ((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("InchPickup") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPOrange")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPurple")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPGreen")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PPPink")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeadlineNeon")) || GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		return 1;
	}
	return 0;
}

void func_976(bool bParam0)//Position - 0x45712D
{
	if (bParam0)
	{
		if (!Global_2678393.f_1539)
		{
			Global_2678393.f_1539 = 1;
			Global_2678393.f_1541 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else if (!Global_2678393.f_1541 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1541))
			{
				Global_2678393.f_1541 = SCRIPT::GET_ID_OF_THIS_THREAD();
			}
		}
	}
	else if (Global_2678393.f_1539)
	{
		if (Global_2678393.f_1541 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			Global_2678393.f_1539 = 0;
			Global_2678393.f_1541 = -1;
		}
		else if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1541))
		{
			Global_2678393.f_1539 = 0;
			Global_2678393.f_1541 = -1;
		}
	}
	else
	{
		Global_2678393.f_1541 = -1;
	}
}

void func_977()//Position - 0x45733C
{
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	HUD::SET_RADAR_ZOOM_PRECISE(50f);
}

void func_978(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, char* sParam16, char* sParam17, char* sParam18)//Position - 0x45911D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&uParam0, "scr_ch_finale_bug_infestation"))
		{
			StringCopy(sParam16, "DLC_HEIST3/CASINO_HEIST_FINALE_GENERAL_01", 64);
			StringCopy(sParam17, "bugs_infestation", 64);
			StringCopy(sParam18, "dlc_ch_heist_finale_sounds", 64);
		}
	}
}

Vector3 func_979(struct<3> Param0, struct<3> Param1)//Position - 0x45A2F4
{
	return Param0 + Param1 * Vector(0.5f, 0.5f, 0.5f);
}

bool func_980(bool bParam0)//Position - 0x45A500
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_833, 7);
}

float func_981(int iParam0)//Position - 0x45AE16
{
	if (iParam0 == joaat("stt_prop_stunt_track_short") || iParam0 == joaat("stt_prop_stunt_track_straight"))
	{
		return 0.08f;
	}
	if ((((iParam0 == joaat("stt_prop_track_straight_s") || iParam0 == joaat("stt_prop_track_straight_m")) || iParam0 == joaat("stt_prop_track_straight_lm")) || iParam0 == joaat("stt_prop_track_straight_l")) || iParam0 == joaat("ba_prop_track_straight_lm"))
	{
		return 0.135f;
	}
	if (iParam0 == 868391675)
	{
		return 0.4f;
	}
	if (iParam0 == joaat("as_prop_as_stunt_target") || iParam0 == joaat("as_prop_as_stunt_target_small"))
	{
		return 1f;
	}
	return 0.5f;
}

float func_982(int iParam0)//Position - 0x45AEBE
{
	if (iParam0 == joaat("stt_prop_stunt_track_short") || iParam0 == joaat("stt_prop_stunt_track_straight"))
	{
		return 0.6f;
	}
	if (iParam0 == joaat("stt_prop_track_straight_s"))
	{
		return 0.1f;
	}
	if (iParam0 == joaat("stt_prop_track_straight_m"))
	{
		return 0.31f;
	}
	if (iParam0 == joaat("ba_prop_track_straight_lm"))
	{
		return 0.31f;
	}
	if (iParam0 == joaat("stt_prop_track_straight_lm"))
	{
		return 0.63f;
	}
	if (iParam0 == joaat("stt_prop_track_straight_l"))
	{
		return 0.95f;
	}
	if (iParam0 == 868391675)
	{
		return 0.5f;
	}
	if (iParam0 == joaat("as_prop_as_stunt_target") || iParam0 == joaat("as_prop_as_stunt_target_small"))
	{
		return 1f;
	}
	return 0.4f;
}

char* func_983(int iParam0)//Position - 0x45AF75
{
	if (((((((iParam0 == joaat("stt_prop_stunt_track_short") || iParam0 == joaat("stt_prop_stunt_track_straight")) || iParam0 == joaat("stt_prop_track_straight_s")) || iParam0 == joaat("stt_prop_track_straight_m")) || iParam0 == joaat("stt_prop_track_straight_lm")) || iParam0 == joaat("stt_prop_track_straight_l")) || iParam0 == 868391675) || iParam0 == joaat("ba_prop_track_straight_lm"))
	{
		return "scr_as_trap_zone_rectangle";
	}
	if (iParam0 == joaat("as_prop_as_stunt_target") || iParam0 == joaat("as_prop_as_stunt_target_small"))
	{
		return "scr_as_trap_zone_circle";
	}
	return "scr_as_trap_zone_rectangle";
}

void func_984(bool bParam0, bool bParam1)//Position - 0x45C3B6
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1597) || Global_2678393.f_1597 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam1)
	{
		if (bParam0)
		{
			Global_2678393.f_1597 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 22);
			__LIB_15__.func_473(1, -1, 2147483647, 0, 0);
		}
		else
		{
			Global_2678393.f_1597 = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 22);
			__LIB_15__.func_473(0, -1, 500, 500, 0);
		}
	}
	else if (!bParam1)
	{
	}
}

var func_985(int iParam0)//Position - 0x45C45F
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 22);
}

void func_986(int iParam0)//Position - 0x45CBE7
{
	Global_2815059.f_443 = iParam0;
}

int func_987(int iParam0)//Position - 0x45D83B
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_31059 /* Tunable: -922426998 */;
			break;
		case 6:
			return Global_262145.f_31060 /* Tunable: -1622052205 */;
			break;
		case 7:
			return Global_262145.f_31061 /* Tunable: -1654716417 */;
			break;
		case 8:
			return Global_262145.f_31062 /* Tunable: 1381034286 */;
			break;
	}
	return 0;
}

float func_988(int iParam0, bool bParam1)//Position - 0x45F015
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	fVar1 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0);
	if (!bParam1)
	{
		fVar2 = ENTITY::GET_ENTITY_SPEED(iParam0);
		fVar0 = (fVar2 / fVar1);
	}
	else
	{
		Var3 = { NETWORK::NETWORK_GET_LAST_VEL_RECEIVED_OVER_NETWORK(iParam0) };
		fVar4 = ((MISC::ABSF(Var3.f_0) + MISC::ABSF(Var3.f_1)) + MISC::ABSF(Var3.f_2));
		fVar0 = (fVar4 / fVar1);
	}
	return fVar0;
}

void func_989(bool bParam0)//Position - 0x45FCBE
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_5, 19))
		{
			MISC::SET_BIT(&(Global_1946250.f_5), 19);
		}
	}
	else if (BitTest(Global_1946250.f_5, 19))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 19);
	}
}

void func_990(int iParam0, bool bParam1)//Position - 0x45FCFF
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	Var0 = { __LIB_2__.func_913(iParam0) };
	iVar1 = __LIB_2__.func_914(iParam0);
	iVar2 = 0;
	if (bParam1)
	{
		iVar2 = 1;
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iParam0, iVar1, Var0, false, false, false);
	}
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iVar2, false, false);
}

float func_991()//Position - 0x45FF9F
{
	return 142.1f;
}

Vector3 func_992()//Position - 0x45FFAC
{
	return 1100f, 220f, -49.45f;
}

int func_993()//Position - 0x45FFC3
{
	return joaat("thrax");
}

void func_994()//Position - 0x4606B2
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = 1240056714;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iVar1);
	}
}

void func_995(bool bParam0)//Position - 0x4609A1
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 25))
		{
			MISC::SET_BIT(&Global_1958711, 25);
		}
	}
	else if (BitTest(Global_1958711, 25))
	{
		MISC::CLEAR_BIT(&Global_1958711, 25);
	}
}

void func_996(int* iParam0, bool bParam1)//Position - 0x460A1D
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
	if (bParam1)
	{
		*iParam0 = 0;
	}
}

void func_997(var uParam0)//Position - 0x4641D6
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { -16000f, -16000f, -1700f };
	Var1 = { 16000f, 16000f, 2700f };
	if (PED::DOES_SCENARIO_BLOCKING_AREA_EXISTS(Var0, Var1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, true);
	}
}

void func_998(var uParam0)//Position - 0x46421B
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { -16000f, -16000f, -1700f };
	Var1 = { 16000f, 16000f, 2700f };
	if (!PED::DOES_SCENARIO_BLOCKING_AREA_EXISTS(Var0, Var1))
	{
		*uParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, true, true, true, true);
	}
}

void func_999(int iParam0, var uParam1)//Position - 0x464310
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = true;
	Var1 = { -16000f, -16000f, -1700f };
	Var2 = { 16000f, 16000f, 2700f };
	if (*iParam0 > -1)
	{
		if (MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*iParam0))
		{
			MISC::REMOVE_POP_MULTIPLIER_AREA(*iParam0, bVar0);
		}
		*iParam0 = -1;
	}
	if (*uParam1)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var1, Var2, true, false);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var1, Var2, !bVar0);
		*uParam1 = 0;
	}
}
