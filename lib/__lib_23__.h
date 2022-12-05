void func_0(int iParam0)//Position - 0x2A0EBB
{
	Global_1574546 = iParam0;
}

void func_1()//Position - 0x2A0EC9
{
	Global_1577835 = 1;
}

void func_2()//Position - 0x2A10AA
{
	if (Global_78319)
	{
		Global_113386.f_14051[3 /*20*/].f_18 = 0;
	}
}

void func_3(struct<3> Param0, int iParam1, int iParam2, var uParam3)//Position - 0x2A5839
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = -1973753057;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = iParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = uParam3;
	iVar1 = __LIB_4__.func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

int func_4(int iParam0)//Position - 0x2A62FC
{
	switch (iParam0)
	{
		case 1:
			return Global_1888323 > 0;
		case 2:
			return Global_1888323.f_1 > 0;
		case 3:
			return Global_1888323.f_2 > 0;
		case 4:
			return Global_1888323.f_4 > 0;
		case 5:
			return Global_1888323.f_3 > 0;
		default:
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x2A6F62
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_M_ShopKeep_01");
		case 1:
			return joaat("p_poly_bag_01_s");
		case 2:
			return joaat("p_till_01_s");
		default:
	}
	return joaat("MP_M_ShopKeep_01");
}

int func_6(int iParam0, int iParam1)//Position - 0x2A72D5
{
	int iVar0;
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3) && DECORATOR::DECOR_EXIST_ON(iParam1, "ContrabandDeliveryType")) && DECORATOR::DECOR_GET_INT(iParam1, "ContrabandDeliveryType") == -81613951)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (__LIB_9__.func_645(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_7()//Position - 0x2A73E4
{
	MISC::SET_BIT(&Global_2714762, 15);
}

void func_8(bool bParam0)//Position - 0x2A743A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2715699.f_1.f_2810), 8);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2715699.f_1.f_2810), 8);
	}
}

void func_9()//Position - 0x2A7468
{
	HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("FMMC_STARTTRAN" /* GXT: Launching session */);
	HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
}

void func_10(bool bParam0)//Position - 0x2A747E
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2715699.f_1.f_2809), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2715699.f_1.f_2809), 3);
	}
}

void func_11()//Position - 0x2A74AA
{
	Global_2714762.f_691 = 1;
}

void func_12()//Position - 0x2A757C
{
	MISC::SET_BIT(&Global_2714762, 22);
}

void func_13()//Position - 0x2A75A2
{
	MISC::SET_BIT(&Global_2714762, 16);
}

void func_14()//Position - 0x2A75C0
{
	Global_2714762.f_719 = 1;
}

void func_15()//Position - 0x2A75DE
{
	Global_2714762.f_706 = 1;
}

void func_16()//Position - 0x2A75EE
{
	Global_2714762.f_693 = 1;
}

int func_17(bool bParam0)//Position - 0x2A81D5
{
	if (__LIB_9__.func_29(__LIB_3__.func_803(bParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_18(bool bParam0, int iParam1)//Position - 0x2A8EBB
{
	return (__LIB_17__.func_755(bParam0) == iParam1 && __LIB_4__.func_109(bParam0, 13));
}

int func_19(bool bParam0, int iParam1, bool bParam2)//Position - 0x2A90DD
{
	if (__LIB_17__.func_755(bParam0) == iParam1 && __LIB_4__.func_109(bParam0, 14))
	{
		if (!bParam2)
		{
			return 1;
		}
		return (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bParam0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 500f);
	}
	return 0;
}

int func_20(int iParam0, int iParam1)//Position - 0x2A9667
{
	if (!__LIB_1__.func_385(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_77.f_42, iParam1);
}

int func_21(bool bParam0)//Position - 0x2AAF64
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if (Global_1853348[bParam0 /*834*/].f_810)
		{
			return 1;
		}
	}
	return 0;
}

int func_22(struct<3> Param0)//Position - 0x2AB006
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 936.193f, -2.462f, 119.027f, 986.118f, 78.263f, 139.302f, 36.275f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0)//Position - 0x2AB0AB
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if ((((__LIB_4__.func_340(bParam0) && __LIB_4__.func_85(bParam0) == 1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bParam0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bParam0))) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0, int iParam1)//Position - 0x2AB5BF
{
	switch (__LIB_0__.func_170(iParam0))
	{
		case -1:
		case 3:
		case 18:
			return 0;
			break;
		case 15:
			if (iParam1 > -1)
			{
				if (iParam1 == 0)
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_25(int iParam0)//Position - 0x2AD7CD
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam0);
	return SYSTEM::ROUND(fVar0);
}

void func_26(int iParam0)//Position - 0x2AE4D9
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_21[iVar0]), iVar1);
}

int func_27(int iParam0, int iParam1)//Position - 0x2AE851
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		iVar1 = HUD::GET_BLIP_FROM_ENTITY(iVar0);
		if ((HUD::DOES_BLIP_EXIST(iVar1) && (HUD::GET_BLIP_ALPHA(iVar1) > 1 || iParam1)) && !iVar1 == Global_2678393.f_1595)
		{
			return 1;
		}
	}
	return 0;
}

void func_28(var uParam0)//Position - 0x2AEDC8
{
	HUD::SHOW_OUTLINE_INDICATOR_ON_BLIP(*uParam0, false);
}

bool func_29(bool bParam0)//Position - 0x2AEF7F
{
	return BitTest(Global_2678393.f_384, bParam0);
}

int func_30(int iParam0, int iParam1)//Position - 0x2B01D4
{
	if (iParam1 == -1)
	{
		return BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_33, iParam0);
	}
	else if (Global_2703735.f_3462[iParam0] >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)//Position - 0x2B055C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Global_1648034.f_241.f_68[iVar0 /*33*/][iParam0] = 0;
		iVar0++;
	}
}

bool func_32()//Position - 0x2B0A17
{
	return BitTest(Global_2714762.f_2, 23);
}

int func_33()//Position - 0x2B0DB1
{
	int iVar0;
	struct<13> Var1;
	Var1 = { __LIB_0__.func_593() };
	iVar0 = 0;
	while (iVar0 <= (Global_2715699.f_1.f_2805 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_2715699.f_1.f_845[iVar0 /*57*/]), &Var1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_34()//Position - 0x2B156A
{
	int iVar0;
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	return iVar0;
}

var func_35(int iParam0, int iParam1, int iParam2)//Position - 0x2B158F
{
	return ((SYSTEM::SHIFT_LEFT(iParam0, 24) || SYSTEM::SHIFT_LEFT(iParam1, 16)) || SYSTEM::SHIFT_LEFT(iParam2, 8));
}

int func_36()//Position - 0x2B2C2E
{
	return Global_1922955.f_11;
}

var func_37()//Position - 0x2B2CB2
{
	return Global_1922955.f_5;
}

void func_38(int iParam0, char* sParam1)//Position - 0x2B3066
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		NETWORK::NETWORK_APPLY_TRANSITION_PARAMETER_STRING(iParam0, sParam1, true);
	}
}

void func_39(bool bParam0, int iParam1)//Position - 0x2B3DD8
{
	PLAYER::SET_POLICE_IGNORE_PLAYER(bParam0, true);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		VEHICLE::SET_VEHICLE_IS_WANTED(iParam1, false);
		VEHICLE::SET_DISABLE_WANTED_CONES_RESPONSE(iParam1, true);
	}
	PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(bParam0);
	PLAYER::ALLOW_EVASION_HUD_IF_DISABLING_HIDDEN_EVASION_THIS_FRAME(bParam0, -1082130432);
}

void func_40(int iParam0, int iParam1)//Position - 0x2B404B
{
	if (iParam0 == PLAYER::GET_PLAYER_WANTED_LEVEL(iParam1))
	{
		return;
	}
	PLAYER::SET_MAX_WANTED_LEVEL(iParam0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(iParam1, iParam0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iParam1, false);
	PLAYER::SET_WANTED_LEVEL_DIFFICULTY(iParam1, 1f);
}

void func_41(float fParam0, float fParam1)//Position - 0x2B424B
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = GRAPHICS::GET_SAFE_ZONE_SIZE();
	fVar1 = 1f;
	fVar2 = ((100f * fVar1) - (100f * fVar0));
	if (Global_2678393.f_1593)
	{
		*fParam0 = (*fParam0 + 0.09f);
	}
	*fParam0 = (*fParam0 + (fVar2 * 0.005f));
	*fParam1 = (*fParam1 - (fVar2 * 0.005f));
}

void func_42(int iParam0)//Position - 0x2B4DC7
{
	Local_66.f_1 = (Local_66.f_1 + iParam0);
	if (Local_66.f_1 < 0)
	{
		Local_66.f_1 = 2;
	}
	else if (Local_66.f_1 > 2)
	{
		Local_66.f_1 = 0;
	}
}

char* func_43(int iParam0)//Position - 0x2B88A9
{
	switch (iParam0)
	{
		case 0:
			return "RCE_OW_TIRE_HH";
		case 1:
			return "RCE_OW_TIRE_MH";
		case 2:
			return "RCE_OW_TIRE_SH";
		default:
	}
	return "";
}

void func_44(int iParam0)//Position - 0x2B88F5
{
	if (Local_66.f_0 != iParam0)
	{
		Local_66.f_0 = iParam0;
	}
}

int func_45()//Position - 0x2B8908
{
	return Local_66.f_0;
}

void func_46(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x2B9270
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__.func_667(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__.func_666(5, iVar0);
		Global_1649593.f_3705[iVar0] = iParam0;
		Global_1649593.f_3705.f_172[iVar0] = iParam1;
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

float func_47(int iParam0, var uParam1)//Position - 0x2C10E4
{
	if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 13) || (uParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 14)))
	{
		return 2f;
	}
	else if (__LIB_12__.func_834())
	{
		return 9f;
	}
	return 28f;
}

int func_48(int iParam0, bool bParam1)//Position - 0x2C1384
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 4;
	}
	if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_54, (0 + iVar0)))
	{
		return 0;
	}
	else if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_54, (1 + iVar0)))
	{
		return 1;
	}
	else if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_54, (2 + iVar0)))
	{
		return 2;
	}
	else if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_54, (3 + iVar0)))
	{
		return 3;
	}
	return -1;
}

int func_49(int iParam0, bool bParam1)//Position - 0x2C278D
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = Global_4718592.f_95507[iParam0 /*58*/].f_39;
	}
	else
	{
		iVar0 = Global_4718592.f_95507[iParam0 /*58*/].f_38;
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x2C27CA
{
	if ((((((((((((iParam0 == joaat("hauler") || iParam0 == joaat("hauler2")) || iParam0 == joaat("phantom")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("benson")) || iParam0 == joaat("biff")) || iParam0 == joaat("mule")) || iParam0 == joaat("mule2")) || iParam0 == joaat("mule3")) || iParam0 == joaat("packer")) || iParam0 == joaat("pounder")) || iParam0 == joaat("flatbed"))
	{
		return 1;
	}
	return 0;
}

float func_51(int iParam0, bool bParam1)//Position - 0x2C288A
{
	if (iParam0 < 0 || iParam0 >= __LIB_11__.func_590())
	{
		return 0f;
	}
	if (bParam1)
	{
		return Global_4718592.f_95507[iParam0 /*58*/].f_45;
	}
	return Global_4718592.f_95507[iParam0 /*58*/].f_44;
}

Vector3 func_52(int iParam0)//Position - 0x2C3483
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 1f;
		case 1:
			return (7.5f / 2f), 0f, 1f;
		case 2:
			return (-7.5f / 2f), 0f, 1f;
		case 3:
			return 0f, (7.5f / 2f), 1f;
		case 4:
			return 0f, (-7.5f / 2f), 1f;
		case 5:
			return (7.5f / 2f), (7.5f / 2f), 1f;
		case 6:
			return (-7.5f / 2f), (-7.5f / 2f), 1f;
		case 7:
			return (7.5f / 2f), (-7.5f / 2f), 1f;
		case 8:
			return (-7.5f / 2f), (7.5f / 2f), 1f;
		default:
	}
	return 0f, 0f, 0f;
}

float func_53(float fParam0)//Position - 0x2C3549
{
	float fVar0;
	if (fParam0 > 1f)
	{
		fVar0 = (6f + (((fParam0 - 1f) * 10f) * 0.55f));
	}
	else
	{
		fVar0 = (6f - (((1f - fParam0) * 10f) * 0.55f));
	}
	return fVar0;
}

void func_54(bool bParam0)//Position - 0x2C41A6
{
	char* sVar0;
	sVar0 = "321GO";
	if (bParam0)
	{
		sVar0 = "GO";
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, "Open_Wheel_Racing_Start_Lights_Sounds", true);
}

void func_55(var uParam0, int iParam1)//Position - 0x2C41CE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_COUNTDOWN_LIGHTS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_56(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22)//Position - 0x2C4741
{
	float fVar0;
	int iVar1;
	fVar0 = 0f;
	if (__LIB_0__.func_155(0))
	{
		fVar0 = 0.29f;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_PLAY_ANIM(0, &uParam1, &uParam17, 8f, -8f, -1, 536870920, fVar0, false, false, false);
	TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iParam0), 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar1);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar1);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
}

int func_57(int iParam0)//Position - 0x2C479F
{
	switch (iParam0)
	{
		case 5:
			return 1;
		default:
	}
	return 0;
}

int func_58(char* sParam0, char* sParam1)//Position - 0x2C47B9
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		STREAMING::REQUEST_ANIM_DICT(sParam0);
		return STREAMING::HAS_ANIM_DICT_LOADED(sParam0);
	}
	return 1;
}

char* func_59(int iParam0)//Position - 0x2C484A
{
	switch (iParam0)
	{
		case 1:
			return "browse_a";
		case 2:
			return "idle_a";
		case 3:
			return "";
		case 4:
			return "";
		default:
	}
	return "_car_b_lookout";
}

char* func_60(int iParam0)//Position - 0x2C4892
{
	switch (iParam0)
	{
		case 0:
			return "a";
		case 1:
			return "b";
		case 2:
			return "c";
		default:
	}
	return "";
}

char* func_61(int iParam0)//Position - 0x2C4916
{
	switch (iParam0)
	{
		case 1:
			return "amb@world_human_window_shop@male@idle_a";
		case 2:
			return "amb@world_human_stand_impatient@male@no_sign@idle_a";
		case 3:
			return "WORLD_HUMAN_MOBILE_FILM_SHOCKING";
		case 4:
			return "WORLD_HUMAN_DRINKING";
		default:
	}
	return "random@street_race";
}

void func_62(var uParam0)//Position - 0x2C4A07
{
	int iVar0;
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 8, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 64, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 2, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, true);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
	{
		iVar0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(*uParam0);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iVar0, false);
			NETWORK::SET_NETWORK_ID_CAN_BE_REASSIGNED(iVar0, true);
		}
	}
}

void func_63(var uParam0)//Position - 0x2C4A69
{
	struct<3> Var0;
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(*uParam0, joaat("WEAPON_PISTOL"), 25000, true);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_PISTOL"), true);
	PED::SET_PED_AS_COP(*uParam0, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 249, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 365, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1024, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 78, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 57, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 88, true);
	PED::SET_PED_COMBAT_ABILITY(*uParam0, 0);
	PED::SET_PED_ACCURACY(*uParam0, 5);
	PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 0);
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Var0, 20f, false, false);
}

void func_64(var uParam0, int iParam1, int iParam2)//Position - 0x2C4B60
{
	if (uParam0->f_3[iParam1 /*5*/].f_1 != iParam2)
	{
		uParam0->f_3[iParam1 /*5*/].f_1 = iParam2;
	}
}

int func_65(var uParam0)//Position - 0x2C4B83
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(*uParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_66(var uParam0, int iParam1)//Position - 0x2C4BB8
{
	switch (uParam0->f_1[iParam1 /*26*/].f_1)
	{
		case 5:
			return BitTest(uParam0->f_834, 1);
			break;
	}
	return 1;
}

int func_67(int iParam0)//Position - 0x2C4C8D
{
	switch (iParam0)
	{
		case 5:
		case 2:
		case 3:
			return 1;
		default:
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x2C516C
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 5;
		default:
	}
	return 1;
}

int func_69(bool bParam0, bool bParam1)//Position - 0x2C5A7F
{
	if (BitTest(Global_4980736.f_69361[bParam0 /*151*/].f_8, 26))
	{
		return !bParam1;
	}
	return 1;
}

char* func_70()//Position - 0x2C8935
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(Var0) == joaat("City"))
	{
		return "MP_MC_START_CITY";
	}
	if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(Var0) == joaat("countryside"))
	{
		return "MP_MC_START_COUNTRY";
	}
	return "MP_MC_START";
}

void func_71(int iParam0)//Position - 0x2C9DE3
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!__LIB_0__.func_578(iParam0))
	{
		if (Global_1659914 != -1)
		{
			fVar0 = Global_4718592.f_169008[Global_1659914];
			VEHICLE::SET_TYRE_WEAR_RATE(iParam0, 0, fVar0);
			VEHICLE::SET_TYRE_WEAR_RATE(iParam0, 1, fVar0);
			VEHICLE::SET_TYRE_WEAR_RATE(iParam0, 4, fVar0);
			VEHICLE::SET_TYRE_WEAR_RATE(iParam0, 5, fVar0);
			fVar1 = Global_4718592.f_169012[Global_1659914];
			VEHICLE::SET_TYRE_WEAR_RATE_SCALE(iParam0, 0, fVar1);
			VEHICLE::SET_TYRE_WEAR_RATE_SCALE(iParam0, 1, fVar1);
			VEHICLE::SET_TYRE_WEAR_RATE_SCALE(iParam0, 4, fVar1);
			VEHICLE::SET_TYRE_WEAR_RATE_SCALE(iParam0, 5, fVar1);
			fVar2 = Global_4718592.f_169016[Global_1659914];
			VEHICLE::SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(iParam0, 0, fVar2);
			VEHICLE::SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(iParam0, 1, fVar2);
			VEHICLE::SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(iParam0, 4, fVar2);
			VEHICLE::SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(iParam0, 5, fVar2);
		}
	}
}

int func_72(int iParam0)//Position - 0x2CB046
{
	if ((iParam0 == joaat("stromberg") || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2"))
	{
		return 1;
	}
	return 0;
}

bool func_73(var uParam0, bool bParam1)//Position - 0x2DAC61
{
	return BitTest(uParam0->f_545[__LIB_9__.func_799(bParam1)], __LIB_20__.func_919(bParam1));
}

bool func_74(int* iParam0)//Position - 0x2DB5F3
{
	if (iParam0->f_142[__LIB_15__.func_682(iParam0)] == 13 || iParam0->f_142[__LIB_15__.func_682(iParam0)] == 20)
	{
		return 0;
	}
	return iParam0->f_142[__LIB_15__.func_682(iParam0)] != 117;
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2DEE0C
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (!STREAMING::IS_MODEL_VALID(iVar2))
		{
			return;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1) };
		Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0.f_0, Var1.f_1, Var1.f_2) };
		Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var0.f_1, Var1.f_2) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0.f_0, Var0.f_1, Var1.f_2) };
		Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var1.f_1, Var0.f_2) };
		Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0.f_0, Var1.f_1, Var0.f_2) };
		Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var0.f_1, Var0.f_2) };
		Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0) };
		GRAPHICS::DRAW_LINE(Var3, Var4, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var4, Var6, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var6, Var5, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var5, Var3, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var7, Var8, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var8, Var10, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var10, Var9, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var9, Var7, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var3, Var7, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var4, Var8, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var6, Var10, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_LINE(Var5, Var9, iParam1, iParam2, iParam3, 150);
		GRAPHICS::DRAW_POLY(Var3, Var4, Var6, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var6, Var5, Var3, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var4, Var3, Var7, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var7, Var8, Var4, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var5, Var6, Var10, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var10, Var9, Var5, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var9, Var10, Var8, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var8, Var7, Var9, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var6, Var4, Var8, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var8, Var10, Var6, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var3, Var5, Var9, iParam1, iParam2, iParam3, iParam4);
		GRAPHICS::DRAW_POLY(Var9, Var7, Var3, iParam1, iParam2, iParam3, iParam4);
	}
}

int func_76(int iParam0)//Position - 0x2DF127
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((((((((((((((((((((((((iVar0 == joaat("prop_streetlight_01") || iVar0 == joaat("prop_streetlight_01b")) || iVar0 == joaat("prop_streetlight_02")) || iVar0 == joaat("prop_streetlight_03")) || iVar0 == joaat("prop_streetlight_03b")) || iVar0 == joaat("prop_streetlight_03c")) || iVar0 == joaat("prop_streetlight_03d")) || iVar0 == joaat("prop_streetlight_03e")) || iVar0 == joaat("prop_streetlight_04")) || iVar0 == joaat("prop_streetlight_05")) || iVar0 == joaat("prop_streetlight_05_b")) || iVar0 == joaat("prop_streetlight_06")) || iVar0 == joaat("prop_streetlight_07a")) || iVar0 == joaat("prop_streetlight_07b")) || iVar0 == joaat("prop_streetlight_08")) || iVar0 == joaat("prop_streetlight_09")) || iVar0 == joaat("prop_streetlight_10")) || iVar0 == joaat("prop_streetlight_11a")) || iVar0 == joaat("prop_streetlight_11b")) || iVar0 == joaat("prop_streetlight_11c")) || iVar0 == joaat("prop_streetlight_12a")) || iVar0 == joaat("prop_streetlight_12b")) || iVar0 == joaat("prop_streetlight_14a")) || iVar0 == joaat("prop_streetlight_15a")) || iVar0 == joaat("prop_streetlight_16a"))
	{
		return 1;
	}
	if ((iVar0 == joaat("prop_wall_light_09a") || iVar0 == joaat("prop_wall_light_09b")) || iVar0 == joaat("prop_wall_light_09d"))
	{
		return 1;
	}
	if (((((((((((iVar0 == joaat("prop_rail_signals03") || iVar0 == joaat("prop_rail_signals04")) || iVar0 == joaat("prop_rail_sign01")) || iVar0 == joaat("prop_rail_sign02")) || iVar0 == joaat("prop_rail_sign03")) || iVar0 == joaat("prop_rail_sign04")) || iVar0 == joaat("prop_rail_sign05")) || iVar0 == joaat("prop_rail_sign06")) || iVar0 == joaat("prop_railway_barrier_01")) || iVar0 == -640448142) || iVar0 == joaat("prop_railway_barrier_02")) || iVar0 == 1674229717)
	{
		return 1;
	}
	if (((((((iVar0 == joaat("prop_ind_light_02a") || iVar0 == joaat("prop_ind_light_02b")) || iVar0 == joaat("prop_ind_light_02c")) || iVar0 == joaat("prop_ind_light_03a")) || iVar0 == joaat("prop_ind_light_03b")) || iVar0 == joaat("prop_ind_light_03c")) || iVar0 == joaat("prop_ind_light_04")) || iVar0 == joaat("prop_ind_light_05"))
	{
		return 1;
	}
	if (((((((((iVar0 == joaat("prop_traffic_01a") || iVar0 == joaat("prop_traffic_01b")) || iVar0 == joaat("prop_traffic_01d")) || iVar0 == joaat("prop_traffic_02a")) || iVar0 == joaat("prop_traffic_02b")) || iVar0 == joaat("prop_traffic_03a")) || iVar0 == joaat("prop_traffic_03b")) || iVar0 == joaat("prop_traffic_rail_1a")) || iVar0 == joaat("prop_traffic_rail_2")) || iVar0 == joaat("prop_traffic_rail_3"))
	{
		return 1;
	}
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 == joaat("prop_sign_freewayentrance") || iVar0 == joaat("prop_sign_gas_01")) || iVar0 == joaat("prop_sign_gas_02")) || iVar0 == joaat("prop_sign_gas_03")) || iVar0 == joaat("prop_sign_gas_04")) || iVar0 == joaat("prop_sign_interstate_01")) || iVar0 == joaat("prop_sign_interstate_02")) || iVar0 == joaat("prop_sign_interstate_03")) || iVar0 == joaat("prop_sign_interstate_04")) || iVar0 == joaat("prop_sign_interstate_05")) || iVar0 == joaat("prop_sign_loading_1")) || iVar0 == joaat("prop_sign_parking_1")) || iVar0 == joaat("prop_sign_prologue_01a")) || iVar0 == joaat("prop_sign_prologue_06e")) || iVar0 == joaat("prop_sign_prologue_06g")) || iVar0 == joaat("prop_sign_road_01a")) || iVar0 == joaat("prop_sign_road_01b")) || iVar0 == joaat("prop_sign_road_01c")) || iVar0 == joaat("prop_sign_road_02a")) || iVar0 == joaat("prop_sign_road_03a")) || iVar0 == joaat("prop_sign_road_03b")) || iVar0 == joaat("prop_sign_road_03c")) || iVar0 == joaat("prop_sign_road_03d")) || iVar0 == joaat("prop_sign_road_03e")) || iVar0 == joaat("prop_sign_road_03f")) || iVar0 == joaat("prop_sign_road_03g")) || iVar0 == joaat("prop_sign_road_03h")) || iVar0 == joaat("prop_sign_road_03i")) || iVar0 == joaat("prop_sign_road_03j")) || iVar0 == joaat("prop_sign_road_03k")) || iVar0 == joaat("prop_sign_road_03l")) || iVar0 == joaat("prop_sign_road_03m")) || iVar0 == joaat("prop_sign_road_03n")) || iVar0 == joaat("prop_sign_road_03o")) || iVar0 == joaat("prop_sign_road_03p")) || iVar0 == joaat("prop_sign_road_03q")) || iVar0 == joaat("prop_sign_road_03r")) || iVar0 == joaat("prop_sign_road_03s")) || iVar0 == joaat("prop_sign_road_03t")) || iVar0 == joaat("prop_sign_road_03u")) || iVar0 == joaat("prop_sign_road_03v")) || iVar0 == joaat("prop_sign_road_03w")) || iVar0 == joaat("prop_sign_road_03x")) || iVar0 == joaat("prop_sign_road_03y")) || iVar0 == joaat("prop_sign_road_03z")) || iVar0 == joaat("prop_sign_road_04a")) || iVar0 == joaat("prop_sign_road_04b")) || iVar0 == joaat("prop_sign_road_04c")) || iVar0 == joaat("prop_sign_road_04d")) || iVar0 == joaat("prop_sign_road_04e")) || iVar0 == joaat("prop_sign_road_04f")) || iVar0 == joaat("prop_sign_road_04g")) || iVar0 == joaat("prop_sign_road_04h")) || iVar0 == joaat("prop_sign_road_04i")) || iVar0 == joaat("prop_sign_road_04j")) || iVar0 == joaat("prop_sign_road_04k")) || iVar0 == joaat("prop_sign_road_04l")) || iVar0 == joaat("prop_sign_road_04m")) || iVar0 == joaat("prop_sign_road_04n")) || iVar0 == joaat("prop_sign_road_04o")) || iVar0 == joaat("prop_sign_road_04p")) || iVar0 == joaat("prop_sign_road_04q")) || iVar0 == joaat("prop_sign_road_04r")) || iVar0 == joaat("prop_sign_road_04s")) || iVar0 == joaat("prop_sign_road_04t")) || iVar0 == joaat("prop_sign_road_04u")) || iVar0 == joaat("prop_sign_road_04v")) || iVar0 == joaat("prop_sign_road_04w")) || iVar0 == joaat("prop_sign_road_04x")) || iVar0 == joaat("prop_sign_road_04y")) || iVar0 == joaat("prop_sign_road_04z")) || iVar0 == joaat("prop_sign_road_04za")) || iVar0 == joaat("prop_sign_road_04zb")) || iVar0 == joaat("prop_sign_road_05a")) || iVar0 == joaat("prop_sign_road_05b")) || iVar0 == joaat("prop_sign_road_05c")) || iVar0 == joaat("prop_sign_road_05d")) || iVar0 == joaat("prop_sign_road_05e")) || iVar0 == joaat("prop_sign_road_05f")) || iVar0 == joaat("prop_sign_road_05g")) || iVar0 == joaat("prop_sign_road_05h")) || iVar0 == joaat("prop_sign_road_05i")) || iVar0 == joaat("prop_sign_road_05j")) || iVar0 == joaat("prop_sign_road_05k")) || iVar0 == joaat("prop_sign_road_05l")) || iVar0 == joaat("prop_sign_road_05m")) || iVar0 == joaat("prop_sign_road_05n")) || iVar0 == joaat("prop_sign_road_05o")) || iVar0 == joaat("prop_sign_road_05p")) || iVar0 == joaat("prop_sign_road_05q")) || iVar0 == joaat("prop_sign_road_05r")) || iVar0 == joaat("prop_sign_road_05s")) || iVar0 == joaat("prop_sign_road_05t")) || iVar0 == joaat("prop_sign_road_05u")) || iVar0 == joaat("prop_sign_road_05v")) || iVar0 == joaat("prop_sign_road_05w")) || iVar0 == joaat("prop_sign_road_05x")) || iVar0 == joaat("prop_sign_road_05y")) || iVar0 == joaat("prop_sign_road_05z")) || iVar0 == joaat("prop_sign_road_05za")) || iVar0 == joaat("prop_sign_road_06a")) || iVar0 == joaat("prop_sign_road_06b")) || iVar0 == joaat("prop_sign_road_06c")) || iVar0 == joaat("prop_sign_road_06d")) || iVar0 == joaat("prop_sign_road_06e")) || iVar0 == joaat("prop_sign_road_06f")) || iVar0 == joaat("prop_sign_road_06g")) || iVar0 == joaat("prop_sign_road_06h")) || iVar0 == joaat("prop_sign_road_06i")) || iVar0 == joaat("prop_sign_road_06j")) || iVar0 == joaat("prop_sign_road_06k")) || iVar0 == joaat("prop_sign_road_06l")) || iVar0 == joaat("prop_sign_road_06m")) || iVar0 == joaat("prop_sign_road_06n")) || iVar0 == joaat("prop_sign_road_06o")) || iVar0 == joaat("prop_sign_road_06p")) || iVar0 == joaat("prop_sign_road_06q")) || iVar0 == joaat("prop_sign_road_06r")) || iVar0 == joaat("prop_sign_road_06s")) || iVar0 == joaat("prop_sign_road_07a")) || iVar0 == joaat("prop_sign_road_07b")) || iVar0 == joaat("prop_sign_road_08a")) || iVar0 == joaat("prop_sign_road_08b")) || iVar0 == joaat("prop_sign_road_09a")) || iVar0 == joaat("prop_sign_road_09b")) || iVar0 == joaat("prop_sign_road_09c")) || iVar0 == joaat("prop_sign_road_09d")) || iVar0 == joaat("prop_sign_road_09e")) || iVar0 == joaat("prop_sign_road_09f")) || iVar0 == joaat("prop_sign_road_callbox")) || iVar0 == joaat("prop_sign_road_restriction_10")) || iVar0 == joaat("prop_sign_route_01")) || iVar0 == joaat("prop_sign_route_11")) || iVar0 == joaat("prop_sign_route_13")) || iVar0 == joaat("prop_sign_route_15")) || iVar0 == joaat("prop_sign_sec_01")) || iVar0 == joaat("prop_sign_sec_02")) || iVar0 == joaat("prop_sign_sec_03")) || iVar0 == joaat("prop_sign_sec_04")) || iVar0 == joaat("prop_sign_sec_05")) || iVar0 == joaat("prop_sign_sec_06"))
	{
		return 1;
	}
	if (((((((((((((((((((((iVar0 == joaat("prop_bin_01a") || iVar0 == joaat("prop_bin_02a")) || iVar0 == joaat("prop_bin_03a")) || iVar0 == joaat("prop_bin_04a")) || iVar0 == joaat("prop_bin_05a")) || iVar0 == joaat("prop_bin_06a")) || iVar0 == joaat("prop_bin_07a")) || iVar0 == joaat("prop_bin_07b")) || iVar0 == joaat("prop_bin_07c")) || iVar0 == joaat("prop_bin_07d")) || iVar0 == joaat("prop_bin_08a")) || iVar0 == joaat("prop_bin_08open")) || iVar0 == joaat("prop_bin_09a")) || iVar0 == joaat("prop_bin_10a")) || iVar0 == joaat("prop_bin_10b")) || iVar0 == joaat("prop_bin_11a")) || iVar0 == joaat("prop_bin_11b")) || iVar0 == joaat("prop_bin_12a")) || iVar0 == joaat("prop_bin_13a")) || iVar0 == joaat("prop_bin_14a")) || iVar0 == joaat("prop_bin_14b")) || iVar0 == -1686554635)
	{
		return 1;
	}
	if ((((((iVar0 == joaat("prop_dumpster_01a") || iVar0 == joaat("prop_dumpster_02a")) || iVar0 == joaat("prop_dumpster_02b")) || iVar0 == joaat("prop_dumpster_3a")) || iVar0 == joaat("prop_dumpster_3step")) || iVar0 == joaat("prop_dumpster_4a")) || iVar0 == joaat("prop_dumpster_4b"))
	{
		return 1;
	}
	if ((((((((iVar0 == joaat("prop_skip_01a") || iVar0 == joaat("prop_skip_02a")) || iVar0 == joaat("prop_skip_03")) || iVar0 == joaat("prop_skip_04")) || iVar0 == joaat("prop_skip_05a")) || iVar0 == joaat("prop_skip_05b")) || iVar0 == joaat("prop_skip_06a")) || iVar0 == joaat("prop_skip_08a")) || iVar0 == joaat("prop_skip_08b"))
	{
		return 1;
	}
	if ((iVar0 == joaat("prop_fire_hydrant_1") || iVar0 == joaat("prop_fire_hydrant_2")) || iVar0 == joaat("prop_fire_hydrant_4"))
	{
		return 1;
	}
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 == joaat("prop_fnc_farm_01a") || iVar0 == joaat("prop_fnc_farm_01b")) || iVar0 == joaat("prop_fnc_farm_01c")) || iVar0 == joaat("prop_fnc_farm_01d")) || iVar0 == joaat("prop_fnc_farm_01e")) || iVar0 == joaat("prop_fnc_farm_01f")) || iVar0 == joaat("prop_fnc_omesh_01a")) || iVar0 == joaat("prop_fnc_omesh_02a")) || iVar0 == joaat("prop_fnc_omesh_03a")) || iVar0 == joaat("prop_fncbeach_01a")) || iVar0 == joaat("prop_fncbeach_01b")) || iVar0 == joaat("prop_fncbeach_01c")) || iVar0 == joaat("prop_fncconstruc_01d")) || iVar0 == joaat("prop_fncconstruc_02a")) || iVar0 == joaat("prop_fncconstruc_ld")) || iVar0 == joaat("prop_fnccorgm_01a")) || iVar0 == joaat("prop_fnccorgm_01b")) || iVar0 == joaat("prop_fnccorgm_02a")) || iVar0 == joaat("prop_fnccorgm_02b")) || iVar0 == joaat("prop_fnccorgm_02c")) || iVar0 == joaat("prop_fnccorgm_02d")) || iVar0 == joaat("prop_fnccorgm_02e")) || iVar0 == joaat("prop_fnccorgm_02pole")) || iVar0 == joaat("prop_fnccorgm_03a")) || iVar0 == joaat("prop_fnccorgm_03b")) || iVar0 == joaat("prop_fnccorgm_03c")) || iVar0 == joaat("prop_fnccorgm_04a")) || iVar0 == joaat("prop_fnccorgm_05a")) || iVar0 == joaat("prop_fnccorgm_05b")) || iVar0 == joaat("prop_fnccorgm_06a")) || iVar0 == joaat("prop_fnccorgm_06b")) || iVar0 == joaat("prop_fncglass_01a")) || iVar0 == joaat("prop_fnclink_01a")) || iVar0 == joaat("prop_fnclink_01b")) || iVar0 == joaat("prop_fnclink_01c")) || iVar0 == joaat("prop_fnclink_01d")) || iVar0 == joaat("prop_fnclink_01e")) || iVar0 == joaat("prop_fnclink_01f")) || iVar0 == joaat("prop_fnclink_01gate1")) || iVar0 == joaat("prop_fnclink_01h")) || iVar0 == joaat("prop_fnclink_02a")) || iVar0 == joaat("prop_fnclink_02a_sdt")) || iVar0 == joaat("prop_fnclink_02b")) || iVar0 == joaat("prop_fnclink_02c")) || iVar0 == joaat("prop_fnclink_02d")) || iVar0 == joaat("prop_fnclink_02e")) || iVar0 == joaat("prop_fnclink_02f")) || iVar0 == joaat("prop_fnclink_02g")) || iVar0 == joaat("prop_fnclink_02gate1")) || iVar0 == joaat("prop_fnclink_02gate2")) || iVar0 == joaat("prop_fnclink_02gate3")) || iVar0 == joaat("prop_fnclink_02gate4")) || iVar0 == joaat("prop_fnclink_02gate5")) || iVar0 == joaat("prop_fnclink_02gate6")) || iVar0 == joaat("prop_fnclink_02gate6_l")) || iVar0 == joaat("prop_fnclink_02gate6_r")) || iVar0 == joaat("prop_fnclink_02gate7")) || iVar0 == joaat("prop_fnclink_02h")) || iVar0 == joaat("prop_fnclink_02i")) || iVar0 == 108707039) || iVar0 == joaat("prop_fnclink_02j")) || iVar0 == -877375498) || iVar0 == joaat("prop_fnclink_02k")) || iVar0 == joaat("prop_fnclink_02l")) || iVar0 == joaat("prop_fnclink_02m")) || iVar0 == joaat("prop_fnclink_02n")) || iVar0 == joaat("prop_fnclink_02o")) || iVar0 == joaat("prop_fnclink_02p")) || iVar0 == joaat("prop_fnclink_03a")) || iVar0 == joaat("prop_fnclink_03b")) || iVar0 == joaat("prop_fnclink_03c")) || iVar0 == joaat("prop_fnclink_03d")) || iVar0 == joaat("prop_fnclink_03e")) || iVar0 == joaat("prop_fnclink_03f")) || iVar0 == joaat("prop_fnclink_03g")) || iVar0 == joaat("prop_fnclink_03gate1")) || iVar0 == joaat("prop_fnclink_03gate2")) || iVar0 == joaat("prop_fnclink_03gate3")) || iVar0 == joaat("prop_fnclink_03gate4")) || iVar0 == joaat("prop_fnclink_03gate5")) || iVar0 == joaat("prop_fnclink_03h")) || iVar0 == joaat("prop_fnclink_03i")) || iVar0 == joaat("prop_fnclink_04a")) || iVar0 == joaat("prop_fnclink_04b")) || iVar0 == joaat("prop_fnclink_04c")) || iVar0 == joaat("prop_fnclink_04d")) || iVar0 == joaat("prop_fnclink_04e")) || iVar0 == joaat("prop_fnclink_04f")) || iVar0 == joaat("prop_fnclink_04g")) || iVar0 == joaat("prop_fnclink_04gate1")) || iVar0 == joaat("prop_fnclink_04h")) || iVar0 == joaat("prop_fnclink_04j")) || iVar0 == 835901363) || iVar0 == joaat("prop_fnclink_04k")) || iVar0 == -2100933929) || iVar0 == joaat("prop_fnclink_04l")) || iVar0 == joaat("prop_fnclink_04m")) || iVar0 == 36233033) || iVar0 == joaat("prop_fnclink_05a")) || iVar0 == joaat("prop_fnclink_05b")) || iVar0 == joaat("prop_fnclink_05c")) || iVar0 == joaat("prop_fnclink_05crnr1")) || iVar0 == joaat("prop_fnclink_05d")) || iVar0 == joaat("prop_fnclink_05pole")) || iVar0 == joaat("prop_fnclink_06a")) || iVar0 == joaat("prop_fnclink_06b")) || iVar0 == joaat("prop_fnclink_06c")) || iVar0 == joaat("prop_fnclink_06d")) || iVar0 == joaat("prop_fnclink_06gate2")) || iVar0 == joaat("prop_fnclink_06gate3")) || iVar0 == joaat("prop_fnclink_06gatepost")) || iVar0 == joaat("prop_fnclink_07a")) || iVar0 == joaat("prop_fnclink_07b")) || iVar0 == joaat("prop_fnclink_07c")) || iVar0 == joaat("prop_fnclink_07d")) || iVar0 == joaat("prop_fnclink_07gate1")) || iVar0 == joaat("prop_fnclink_07gate2")) || iVar0 == joaat("prop_fnclink_07gate3")) || iVar0 == joaat("prop_fnclink_08b")) || iVar0 == joaat("prop_fnclink_08c")) || iVar0 == joaat("prop_fnclink_08post")) || iVar0 == joaat("prop_fnclink_09a")) || iVar0 == joaat("prop_fnclink_09b")) || iVar0 == joaat("prop_fnclink_09crnr1")) || iVar0 == joaat("prop_fnclink_09d")) || iVar0 == joaat("prop_fnclink_09e")) || iVar0 == joaat("prop_fnclink_09frame")) || iVar0 == joaat("prop_fnclink_09gate1")) || iVar0 == joaat("prop_fnclink_10a")) || iVar0 == joaat("prop_fnclink_10b")) || iVar0 == joaat("prop_fnclink_10c")) || iVar0 == joaat("prop_fnclink_10d")) || iVar0 == joaat("prop_fnclink_10d_ld")) || iVar0 == joaat("prop_fnclink_10e")) || iVar0 == joaat("prop_fnclog_01a")) || iVar0 == joaat("prop_fnclog_01b")) || iVar0 == joaat("prop_fnclog_01c")) || iVar0 == joaat("prop_fnclog_02a")) || iVar0 == joaat("prop_fnclog_02b")) || iVar0 == joaat("prop_fnclog_03a")) || iVar0 == joaat("prop_fncpeir_03a")) || iVar0 == joaat("prop_fncply_01a")) || iVar0 == joaat("prop_fncply_01b")) || iVar0 == joaat("prop_fncply_01gate")) || iVar0 == joaat("prop_fncply_01post")) || iVar0 == joaat("prop_fncres_01a")) || iVar0 == joaat("prop_fncres_01b")) || iVar0 == joaat("prop_fncres_01c")) || iVar0 == joaat("prop_fncres_02_gate1")) || iVar0 == joaat("prop_fncres_02a")) || iVar0 == joaat("prop_fncres_02b")) || iVar0 == joaat("prop_fncres_02c")) || iVar0 == joaat("prop_fncres_02d")) || iVar0 == joaat("prop_fncres_03a")) || iVar0 == joaat("prop_fncres_03b")) || iVar0 == joaat("prop_fncres_03c")) || iVar0 == joaat("prop_fncres_03gate1")) || iVar0 == joaat("prop_fncres_04a")) || iVar0 == joaat("prop_fncres_04b")) || iVar0 == joaat("prop_fncres_05a")) || iVar0 == joaat("prop_fncres_05b")) || iVar0 == joaat("prop_fncres_05c")) || iVar0 == joaat("prop_fncres_06a")) || iVar0 == joaat("prop_fncres_06b")) || iVar0 == joaat("prop_fncres_06gatel")) || iVar0 == joaat("prop_fncres_06gater")) || iVar0 == joaat("prop_fncres_07a")) || iVar0 == joaat("prop_fncres_07b")) || iVar0 == joaat("prop_fncres_07gate")) || iVar0 == joaat("prop_fncres_08a")) || iVar0 == joaat("prop_fncres_08gatel")) || iVar0 == joaat("prop_fncres_09a")) || iVar0 == joaat("prop_fncres_09gate")) || iVar0 == joaat("prop_fncsec_01a")) || iVar0 == joaat("prop_fncsec_01b")) || iVar0 == joaat("prop_fncsec_01crnr")) || iVar0 == joaat("prop_fncsec_01gate")) || iVar0 == joaat("prop_fncsec_01pole")) || iVar0 == joaat("prop_fncsec_02a")) || iVar0 == joaat("prop_fncsec_02pole")) || iVar0 == joaat("prop_fncsec_03a")) || iVar0 == joaat("prop_fncsec_03b")) || iVar0 == joaat("prop_fncsec_03c")) || iVar0 == joaat("prop_fncsec_03d")) || iVar0 == joaat("prop_fncsec_04a")) || iVar0 == joaat("prop_fncwood_01_ld")) || iVar0 == joaat("prop_fncwood_01a")) || iVar0 == joaat("prop_fncwood_01b")) || iVar0 == joaat("prop_fncwood_01c")) || iVar0 == joaat("prop_fncwood_01gate")) || iVar0 == joaat("prop_fncwood_02b")) || iVar0 == joaat("prop_fncwood_03a")) || iVar0 == joaat("prop_fncwood_04a")) || iVar0 == joaat("prop_fncwood_06a")) || iVar0 == joaat("prop_fncwood_06b")) || iVar0 == joaat("prop_fncwood_06c")) || iVar0 == joaat("prop_fncwood_07a")) || iVar0 == joaat("prop_fncwood_07gate1")) || iVar0 == joaat("prop_fncwood_08a")) || iVar0 == joaat("prop_fncwood_08b")) || iVar0 == joaat("prop_fncwood_08c")) || iVar0 == joaat("prop_fncwood_08d")) || iVar0 == joaat("prop_fncwood_09a")) || iVar0 == joaat("prop_fncwood_09b")) || iVar0 == joaat("prop_fncwood_09c")) || iVar0 == joaat("prop_fncwood_09d")) || iVar0 == joaat("prop_fncwood_10b")) || iVar0 == joaat("prop_fncwood_10d")) || iVar0 == joaat("prop_fncwood_11a")) || iVar0 == joaat("prop_fncwood_12a")) || iVar0 == joaat("prop_fncwood_13c")) || iVar0 == joaat("prop_fncwood_14a")) || iVar0 == joaat("prop_fncwood_14b")) || iVar0 == joaat("prop_fncwood_14c")) || iVar0 == joaat("prop_fncwood_14d")) || iVar0 == joaat("prop_fncwood_14e")) || iVar0 == joaat("prop_fncwood_15a")) || iVar0 == joaat("prop_fncwood_15b")) || iVar0 == joaat("prop_fncwood_15c")) || iVar0 == joaat("prop_fncwood_16a")) || iVar0 == joaat("prop_fncwood_16b")) || iVar0 == joaat("prop_fncwood_16c")) || iVar0 == joaat("prop_fncwood_16d")) || iVar0 == joaat("prop_fncwood_16e")) || iVar0 == joaat("prop_fncwood_16f")) || iVar0 == joaat("prop_fncwood_16g")) || iVar0 == joaat("prop_fncwood_17b")) || iVar0 == joaat("prop_fncwood_17c")) || iVar0 == joaat("prop_fncwood_18a")) || iVar0 == joaat("prop_fncwood_19_end")) || iVar0 == joaat("prop_fncwood_19a"))
	{
		return 1;
	}
	if ((((((((((((((((iVar0 == joaat("prop_bench_01a") || iVar0 == -1552740234) || iVar0 == joaat("prop_bench_01b")) || iVar0 == joaat("prop_bench_01c")) || iVar0 == joaat("prop_bench_02")) || iVar0 == joaat("prop_bench_02")) || iVar0 == joaat("prop_bench_03")) || iVar0 == 739365570) || iVar0 == joaat("prop_bench_04")) || iVar0 == joaat("prop_bench_05")) || iVar0 == joaat("prop_bench_06")) || iVar0 == joaat("prop_bench_07")) || iVar0 == joaat("prop_bench_08")) || iVar0 == joaat("prop_bench_09")) || iVar0 == joaat("prop_bench_10")) || iVar0 == joaat("prop_bench_11")) || iVar0 == 1903840780)
	{
		return 1;
	}
	if (((((((((iVar0 == joaat("prop_busstop_02") || iVar0 == -621471835) || iVar0 == -926780608) || iVar0 == -1374732894) || iVar0 == joaat("prop_busstop_04")) || iVar0 == -1864977491) || iVar0 == -1656828803) || iVar0 == -1418172176) || iVar0 == 1508636765) || iVar0 == joaat("prop_busstop_05"))
	{
		return 1;
	}
	if (((((((iVar0 == joaat("prop_phonebox_01a") || iVar0 == joaat("prop_phonebox_01b")) || iVar0 == joaat("prop_phonebox_01c")) || iVar0 == joaat("prop_phonebox_02")) || iVar0 == joaat("prop_phonebox_03")) || iVar0 == joaat("prop_phonebox_04")) || iVar0 == joaat("prop_phonebox_05a")) || iVar0 == -643442747)
	{
		return 1;
	}
	if (iVar0 == joaat("prop_postbox_01a") || iVar0 == joaat("prop_postbox_ss_01a"))
	{
		return 1;
	}
	if ((((((((((((((((((((((((((((((((iVar0 == joaat("prop_elecbox_01a") || iVar0 == joaat("prop_elecbox_01b")) || iVar0 == joaat("prop_elecbox_02a")) || iVar0 == joaat("prop_elecbox_02b")) || iVar0 == joaat("prop_elecbox_03a")) || iVar0 == joaat("prop_elecbox_04a")) || iVar0 == joaat("prop_elecbox_05a")) || iVar0 == joaat("prop_elecbox_06a")) || iVar0 == -773410010) || iVar0 == joaat("prop_elecbox_07a")) || iVar0 == joaat("prop_elecbox_08")) || iVar0 == joaat("prop_elecbox_08b")) || iVar0 == joaat("prop_elecbox_09")) || iVar0 == joaat("prop_elecbox_10")) || iVar0 == joaat("prop_elecbox_10_cr")) || iVar0 == joaat("prop_elecbox_11")) || iVar0 == joaat("prop_elecbox_12")) || iVar0 == joaat("prop_elecbox_13")) || iVar0 == joaat("prop_elecbox_14")) || iVar0 == joaat("prop_elecbox_15")) || iVar0 == joaat("prop_elecbox_15_cr")) || iVar0 == joaat("prop_elecbox_16")) || iVar0 == joaat("prop_elecbox_17")) || iVar0 == joaat("prop_elecbox_17_cr")) || iVar0 == joaat("prop_elecbox_18")) || iVar0 == joaat("prop_elecbox_19")) || iVar0 == joaat("prop_elecbox_20")) || iVar0 == joaat("prop_elecbox_21")) || iVar0 == joaat("prop_elecbox_22")) || iVar0 == joaat("prop_elecbox_23")) || iVar0 == joaat("prop_elecbox_24")) || iVar0 == joaat("prop_elecbox_24b")) || iVar0 == joaat("prop_elecbox_25"))
	{
		return 1;
	}
	return 0;
}

int func_77(var uParam0, int iParam1)//Position - 0x2EA44B
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_78(float fParam0)//Position - 0x2EB675
{
	return (fParam0 * 0.0006213712f);
}

void func_79(int* iParam0, int iParam1, int* iParam2, bool bParam3, var uParam4)//Position - 0x2F4DAE
{
	if (BitTest(*iParam2, bParam3))
	{
		MISC::CLEAR_BIT(iParam2, bParam3);
		__LIB_21__.func_788(iParam0, 0f, 0f, 0f, 1, 0);
	}
	else
	{
		MISC::SET_BIT(iParam2, bParam3);
		if (iParam0->f_550 == 0)
		{
			__LIB_21__.func_788(iParam0, uParam4->f_3, 1, 0);
		}
		else
		{
			__LIB_21__.func_788(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true), 1, 0);
		}
		iParam0->f_2600 = { iParam0->f_2597 };
	}
	__LIB_15__.func_668(iParam0);
}

bool func_80(int iParam0, bool bParam1)//Position - 0x315363
{
	if (iParam0 == -1)
	{
		return bParam1;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_80[iParam0 /*16*/]));
}

int func_81(int iParam0)//Position - 0x3153D5
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 70:
			return 0;
		case 72:
			return 0;
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x315406
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 70:
			return 6;
		case 72:
			return 4;
	}
	return 0;
}

float func_83(int iParam0)//Position - 0x3154C6
{
	switch (iParam0)
	{
		case 9:
			return 0f;
		default:
	}
	return 0f;
}

float func_84(int iParam0)//Position - 0x3154E0
{
	switch (iParam0)
	{
		case 9:
			return 1f;
		case 37:
			return 15f;
		case 48:
			return 10000f;
		case 72:
			return 30f;
		default:
	}
	return 0f;
}

float func_85(int iParam0)//Position - 0x3155C6
{
	switch (iParam0)
	{
		case 9:
			return 0f;
		case 75:
			return 0f;
		default:
	}
	return 0f;
}

float func_86(int iParam0)//Position - 0x3155EA
{
	switch (iParam0)
	{
		case 9:
			return 1f;
		case 10:
			return 1000f;
		case 19:
			return 3f;
		case 20:
			return SYSTEM::TO_FLOAT(4);
		case 37:
			return 150f;
		case 23:
			return 15f;
		case 33:
			return 100f;
		case 40:
			return 20f;
		case 17:
			return 4f;
		case 45:
			return 100f;
		case 48:
			return 1000000f;
		case 72:
			return 120f;
		case 75:
			return 5f;
		default:
	}
	return 0f;
}

void func_87(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x315FA4
{
	int iVar0;
	if (*iParam0 > 0)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = -1;
	}
	if (iParam1 > iParam2 || (iParam1 == iParam2 && *iParam0 > 0))
	{
		*iParam0 = SYSTEM::ROUND((IntToFloat(iVar0) * fParam3));
	}
}

int func_88(int iParam0)//Position - 0x316012
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 3:
			return 11;
		case 4:
			return 12;
		case 5:
			return 16;
		case 7:
			return 14;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 10;
		case 2:
			return 3;
		case 6:
			return 4;
		case 11:
			return 18;
		default:
	}
	return 0;
}

void func_89(int* iParam0)//Position - 0x31B087
{
	switch (__LIB_15__.func_682(iParam0))
	{
		case 0:
			break;
	}
}

void func_90(int* iParam0, int iParam1)//Position - 0x31B0A3
{
	if (iParam1 != 0)
	{
		__LIB_13__.func_206(&(Global_4718592.f_162543.f_3), __LIB_15__.func_682(iParam0));
	}
}

int func_91()//Position - 0x31B54F
{
	switch (Global_4718592.f_162543)
	{
		case 0:
			return 0;
		case 1:
			return 17;
		case 2:
			return 10;
		case 3:
			return 10;
		default:
	}
	return 0;
}

bool func_92(int iParam0, int iParam1, int iParam2)//Position - 0x31B5F1
{
	bool bVar0;
	bVar0 = false;
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					bVar0 = ((iParam2 == 6 || iParam2 == 7) || iParam2 == 1);
					break;
				case 1:
					bVar0 = false;
					break;
				case 2:
					bVar0 = iParam2 == true;
					break;
				case 3:
					bVar0 = iParam2 == true;
					break;
				case 4:
					bVar0 = iParam2 == true;
					break;
				case 5:
					bVar0 = false;
					break;
				case 6:
					bVar0 = false;
					break;
				case 7:
					bVar0 = iParam2 == true;
					break;
				case 8:
					bVar0 = iParam2 == true;
					break;
				case 9:
					bVar0 = iParam2 == 10;
					break;
				case 11:
					bVar0 = ((((iParam2 == 10 || iParam2 == 3) || iParam2 == 6) || iParam2 == 1) || iParam2 == 9);
					break;
				case 16:
					bVar0 = ((((iParam2 == 10 || iParam2 == 3) || iParam2 == 6) || iParam2 == 1) || iParam2 == 9);
					break;
			}
			break;
		case 2:
			bVar0 = (((((iParam2 == 5 || iParam2 == 4) || iParam2 == 8) || iParam2 == 9) || iParam2 == 10) || iParam2 == 3);
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 5:
				case 7:
				case 8:
				case 9:
					bVar0 = (iParam2 == 8 || iParam2 == 3);
					break;
				case 4:
				case 6:
					bVar0 = ((iParam2 == 8 || iParam2 == 3) || iParam2 == 9);
					break;
			}
			break;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_93(int iParam0, int iParam1)//Position - 0x31B833
{
	bool bVar0;
	bVar0 = false;
	if (iParam0 == 1)
	{
		if ((((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 10)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

void func_94(int* iParam0)//Position - 0x31BAD1
{
	if (__LIB_15__.func_682(iParam0) == 0)
	{
		__LIB_13__.func_206(&(Global_4718592.f_170131), 0);
	}
	else if (__LIB_15__.func_682(iParam0) == 1)
	{
		__LIB_13__.func_206(&(Global_4718592.f_170131), 1);
	}
	else if (__LIB_15__.func_682(iParam0) == 2)
	{
		__LIB_13__.func_206(&(Global_4718592.f_170131), 2);
	}
	else if (__LIB_15__.func_682(iParam0) == 3)
	{
		__LIB_13__.func_206(&(Global_4718592.f_170131), 3);
	}
	else if (__LIB_15__.func_682(iParam0) == 4)
	{
		__LIB_13__.func_206(&(Global_4718592.f_170131), 4);
	}
	else if (__LIB_15__.func_682(iParam0) == 5)
	{
		__LIB_13__.func_206(&(Global_4718592.f_170131), 5);
	}
	else if (__LIB_15__.func_682(iParam0) == 6)
	{
		__LIB_13__.func_206(&(Global_4718592.f_170131), 6);
	}
}

int func_95(int* iParam0)//Position - 0x321BEE
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (!iParam0->f_2742)
	{
		return 0;
	}
	return BitTest(iParam0->f_2739, 7);
}

Vector3 func_96(int* iParam0)//Position - 0x321CF9
{
	switch (__LIB_15__.func_682(iParam0))
	{
		case 0:
		case 9:
		case 7:
			return 4503f, -4487f, 2.2f;
		case 1:
			return 4978.39f, -5707.24f, 35f;
		case 2:
		case 6:
			return 5047.4f, -5821.8f, 35f;
		case 3:
			return 4450.6f, -4489.1f, 35f;
		case 4:
			return 4870f, -4928f, 72f;
		case 5:
			return 4950.6f, -5783.2f, 40.3f;
		case 8:
			return 5107.6f, -4580.8f, 45f;
		case 10:
			return 4858.2f, -5080.1f, 45f;
		default:
	}
	return __LIB_2__.func_364();
}

float func_97(int iParam0, int iParam1, bool bParam2)//Position - 0x324351
{
	float fVar0[4];
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		fVar0[iVar1] = -1f;
		iVar1++;
	}
	if (iParam0 == joaat("thrust"))
	{
		fVar0[0] = (VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iParam0) * 0.74f);
		if (bParam2)
		{
			fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(iParam0) * 1.048f);
			fVar0[2] = VEHICLE::GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS(iParam0);
		}
		else
		{
			fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iParam0) * 1.048f);
			fVar0[2] = VEHICLE::GET_VEHICLE_MODEL_MAX_BRAKING(iParam0);
		}
		fVar0[3] = (VEHICLE::GET_VEHICLE_MODEL_MAX_TRACTION(iParam0) * 0.9f);
	}
	else
	{
		switch (iParam0)
		{
			case joaat("voltic"):
				fVar0[0] = VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(joaat("stinger"));
				if (bParam2)
				{
					fVar0[1] = VEHICLE::GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(joaat("voltic"));
				}
				else
				{
					fVar0[1] = VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(joaat("voltic"));
				}
				break;
			case joaat("jetmax"):
				if (bParam2)
				{
					fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(joaat("seashark")) * 0.95f);
				}
				else
				{
					fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(joaat("seashark")) * 0.95f);
				}
				break;
			case joaat("dilettante"):
				fVar0[0] = (VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(joaat("issi2")) * 0.95f);
				if (bParam2)
				{
					fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(joaat("issi2")) * 1.03f);
				}
				else
				{
					fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(joaat("issi2")) * 1.03f);
				}
				break;
			case joaat("surge"):
				fVar0[0] = (VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(joaat("issi2")) * 1.05f);
				if (bParam2)
				{
					fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(joaat("issi2")) * 1.08f);
				}
				else
				{
					fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(joaat("issi2")) * 1.08f);
				}
				break;
			case joaat("cargobob"):
			case joaat("cargobob2"):
			case joaat("cargobob3"):
				fVar0[0] = (VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(joaat("annihilator")) * 0.9f);
				if (bParam2)
				{
					fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(joaat("annihilator")) * 0.9f);
				}
				else
				{
					fVar0[1] = (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(joaat("annihilator")) * 0.9f);
				}
				break;
		}
		if (bParam2)
		{
			if (fVar0[1] == -1f)
			{
				fVar0[1] = VEHICLE::GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(iParam0);
			}
			if (fVar0[2] == -1f)
			{
				fVar0[2] = VEHICLE::GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS(iParam0);
			}
		}
		else
		{
			if (fVar0[1] == -1f)
			{
				fVar0[1] = VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iParam0);
			}
			if (fVar0[2] == -1f)
			{
				fVar0[2] = VEHICLE::GET_VEHICLE_MODEL_MAX_BRAKING(iParam0);
			}
		}
		if (fVar0[0] == -1f)
		{
			fVar0[0] = VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iParam0);
		}
		if (fVar0[3] == -1f)
		{
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
			{
				fVar0[3] = VEHICLE::GET_FLYING_VEHICLE_MODEL_AGILITY(iParam0);
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0))
			{
				fVar0[3] = VEHICLE::GET_BOAT_VEHICLE_MODEL_AGILITY(iParam0);
			}
			else
			{
				fVar0[3] = VEHICLE::GET_VEHICLE_MODEL_MAX_TRACTION(iParam0);
			}
		}
	}
	return fVar0[iParam1];
}

float func_98(int iParam0)//Position - 0x3246C0
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return VEHICLE::GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(iParam0);
}

int func_99(int iParam0, int iParam1)//Position - 0x3246DC
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
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
					return 17;
				case 15:
					return 18;
				case 16:
					return 19;
				case 17:
					return 20;
				case 18:
					return 22;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				default:
			}
			break;
	}
	return -1;
}

int func_100(int iParam0)//Position - 0x324A40
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 12:
		case 13:
		case 6:
		case 7:
		case 18:
		case 19:
		case 22:
		case 23:
		case 20:
		case 21:
		case 24:
		case 25:
		case 26:
		case 27:
			return 20;
			break;
		case 2:
		case 3:
			return 0;
		case 4:
		case 5:
			return 2;
	}
	return 0;
}

char* func_101(int iParam0)//Position - 0x327943
{
	switch (iParam0)
	{
		case 0:
			return "MC_H_ZONE1";
		case 1:
			return "MC_H_ZONE1";
		case 2:
			return "MC_H_ZONE1";
		case 3:
			return "MC_H_ZONE2";
		case 4:
			return "MC_H_ZONE1";
		case 5:
			return "MC_H_ZONE1";
		case 15:
			return "MC_H_ZONE_BM";
		case 49:
			return "MC_H_ZN_TY49";
		case 53:
			return "MC_H_ZN_TY53";
		case 54:
			return "MC_H_ZN_TY54";
		case 55:
			return "MC_H_ZN_TY55";
		case 56:
			return "MC_H_ZN_TY56";
		case 57:
			return "MC_H_ZN_TY57";
		case 58:
			return "MC_H_ZN_TY58";
		case 59:
			return "MC_H_ZN_TY59";
		case 60:
			return "MC_H_ZN_TY60";
		case 67:
			return "MC_H_ZN_TY67";
		case 17:
			return "MC_H_ZN_TY17";
		case 72:
			return "MC_H_ZN_TY72";
		default:
	}
	return "";
}

char* func_102(int* iParam0)//Position - 0x328426
{
	if (__LIB_15__.func_682(iParam0) == 0)
	{
		return "MC_H_T0_FTOD";
	}
	if (__LIB_15__.func_682(iParam0) == 1)
	{
		return "MC_H_T0_TODH";
	}
	if (__LIB_15__.func_682(iParam0) == 2)
	{
		return "MC_H_T0_TODM";
	}
	return "";
}

char* func_103(int* iParam0)//Position - 0x328645
{
	if (__LIB_15__.func_682(iParam0) == 0)
	{
		return "MC_H_ARNMOD";
	}
	else if (__LIB_15__.func_682(iParam0) == 1)
	{
		return "MC_H_VSHNT";
	}
	else if (__LIB_15__.func_682(iParam0) == 2)
	{
		return "MC_H_VHBST";
	}
	return "";
}

int func_104(int iParam0, bool bParam1)//Position - 0x328762
{
	switch (iParam0)
	{
		case 4:
			if ((bParam1 == 0 || bParam1 == 1) || bParam1 == 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_105(int* iParam0, int iParam1)//Position - 0x32DAAE
{
	if (!__LIB_21__.func_705(iParam0, iParam1))
	{
		return 0;
	}
	if (__LIB_16__.func_931(iParam0, 3))
	{
		if (Global_4980736.f_195934[iParam1 /*111*/].f_10 != 52)
		{
			return 0;
		}
	}
	else if (Global_4980736.f_195934[iParam1 /*111*/].f_10 == 52)
	{
		return 0;
	}
	return 1;
}

char* func_106(bool bParam0)//Position - 0x330164
{
	switch (bParam0)
	{
		case 0:
			return "HIDDEN";
		case 1:
			return "FROZEN";
		case 2:
			return "HIDDEN_CUTSCENE";
		case 3:
			return "INVINCIBLE";
		case 4:
			return "MANUALLY_PLACED";
		default:
	}
	return "";
}

int func_107(int iParam0, int iParam1)//Position - 0x3384A9
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		case 1:
			return 11;
			break;
		case 2:
			return 18;
			break;
		case 4:
			return 21;
			break;
		case 5:
			return 29;
			break;
		case 16:
			return 12;
			break;
		case 25:
			return 12;
			break;
		case 66:
			return 15;
			break;
		case 18:
			return 24;
			break;
		case 48:
			return 21;
			break;
		case 56:
			return 21;
			break;
		case 58:
			return 12;
			break;
		case 3:
			if (Global_4718592 != 1)
			{
				return 23;
			}
			else
			{
				return 10;
			}
			break;
		case 8:
			return __LIB_22__.func_432(iParam1);
		case 49:
			return __LIB_22__.func_432(iParam1);
		case 50:
			return __LIB_22__.func_432(iParam1);
		case 93:
			return 21;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x3A4A4F
{
	if ((__LIB_22__.func_399(iParam0) || __LIB_22__.func_398(iParam0)) || __LIB_22__.func_397(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 45:
		case 46:
		case 14:
		case 20:
		case 6:
		case 36:
		case 49:
		case 58:
		case 56:
		case 68:
		case 74:
		case 52:
			return 1;
			break;
	}
	return 0;
}

int func_109(int* iParam0, int iParam1, var uParam2, float fParam3, float fParam4)//Position - 0x3B98B5
{
	if (iParam0->f_547 != iParam1)
	{
		return 0;
	}
	if (!__LIB_15__.func_681())
	{
		return 0;
	}
	return __LIB_22__.func_341(uParam2, fParam3, fParam4);
}

int func_110(char* sParam0)//Position - 0x425A66
{
	struct<13> Var0;
	struct<13> Var1;
	Var0 = { __LIB_11__.func_527(sParam0) };
	Var1 = { __LIB_1__.func_267(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_111()//Position - 0x42C461
{
	if (__LIB_9__.func_794())
	{
		if (Global_4718592.f_107224 > 0)
		{
			return 1;
		}
	}
	if (__LIB_0__.func_836())
	{
		if (Global_4980736.f_176054 > 0)
		{
			return 1;
		}
		if (((Global_4980736.f_176055[0] > 0 || Global_4980736.f_176055[1] > 0) || Global_4980736.f_176055[2] > 0) || Global_4980736.f_176055[3] > 0)
		{
			return 1;
		}
	}
	if (Global_4980736.f_36355 > 0 || Global_4980736.f_63310 > 0)
	{
		return 1;
	}
	if (!__LIB_0__.func_86(Global_4718592.f_628))
	{
		return 1;
	}
	if (Global_4718592.f_172946.f_1 > 0)
	{
		return 1;
	}
	return 0;
}

int func_112(var uParam0)//Position - 0x42D0BA
{
	float fVar0;
	struct<3> Var1;
	fVar0 = 0f;
	if (Global_4718592.f_162543.f_4[0] > 0 || Global_4718592.f_162543.f_4[1] > 0)
	{
		fVar0 = 125f;
	}
	if (Global_4718592.f_162543.f_9[0] > 0 || Global_4718592.f_162543.f_9[1] > 0)
	{
		fVar0 = 130f;
	}
	if (Global_4718592.f_162543.f_14[0] > 0 || Global_4718592.f_162543.f_14[1] > 0)
	{
		fVar0 = 140f;
	}
	if (Global_4718592.f_162543.f_19[0] > 0 || Global_4718592.f_162543.f_19[1] > 0)
	{
		fVar0 = 149f;
	}
	Var1 = { CAM::GET_CAM_COORD(*uParam0) };
	if (Var1.f_2 <= fVar0)
	{
		Var1.f_2 = fVar0;
		CAM::SET_CAM_COORD(*uParam0, Var1);
		return 1;
	}
	return 0;
}

void func_113(var uParam0, int iParam1)//Position - 0x42D1B0
{
	uParam0->f_3279 = iParam1;
}

void func_114(int* iParam0)//Position - 0x42E8CC
{
	bool bVar0;
	var uVar1;
	bVar0 = __LIB_15__.func_682(iParam0);
	uVar1 = iParam0->f_411[bVar0];
	if (__LIB_12__.func_688(uVar1, 2))
	{
		__LIB_1__.func_345(203, "FMMC_SPDADJF", -1, 0);
		__LIB_1__.func_345(204, "FMMC_SPDADJ", -1, 0);
	}
	else
	{
		if (__LIB_12__.func_688(uVar1, 0))
		{
			__LIB_1__.func_345(203, "FMMC_SPDADJF", -1, 0);
		}
		if (__LIB_12__.func_688(uVar1, 1))
		{
			__LIB_1__.func_345(204, "FMMC_SPDADJ", -1, 0);
		}
	}
}

Vector3 func_115()//Position - 0x42FD7D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	Var0 = { 0f, 0f, 0f };
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			Var1 = { -251f, -1870.4f, 27.1f };
			Var2 = { -277.3f, -1901.7f, 27.1f };
			break;
		case 1:
			Var1 = { -245.9f, -1874.8f, 27.1f };
			Var2 = { -272.1f, -1906.3f, 27.1f };
			break;
		case 2:
			Var1 = { -240.2f, -1879.4f, 27.1f };
			Var2 = { -266.6f, -1911f, 27.1f };
			break;
	}
	Var0 = { __LIB_1__.func_163(Var1, Var2, fVar3) };
	return Var0;
}

void func_116(var uParam0)//Position - 0x432A17
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = 0;
		while (iVar1 <= 49)
		{
			if (uParam0->f_1994[iVar0 /*51*/][iVar1] != 0)
			{
				if (STREAMING::IS_MODEL_VALID(uParam0->f_1994[iVar0 /*51*/][iVar1]))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1994[iVar0 /*51*/][iVar1]);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_117()//Position - 0x435FCD
{
	if (Global_4718592 == 2)
	{
		Global_4718592.f_588 = 14;
		if (__LIB_0__.func_493())
		{
			Global_4718592.f_107228 = 1;
		}
		else
		{
			Global_4718592.f_107228 = 0;
		}
		Global_4718592.f_110271 = 0;
		Global_4718592.f_590 = 0;
		Global_4718592.f_107226 = 1;
		Global_4718592.f_107230 = -1;
		Global_4718592.f_110279 = -1;
		Global_4718592.f_110269 = 2;
		Global_4718592.f_110270 = 0;
		Global_4980736.f_69354 = 0;
		Global_4718592.f_619 = 0;
		Global_4718592.f_116980 = 0;
		Global_4718592.f_107229 = 0;
		Global_4718592.f_116982 = 0;
		Global_4718592.f_110359 = 1;
		Global_4718592.f_621 = 0;
		Global_4718592.f_110266 = 1;
	}
	else if (Global_4718592 == 1)
	{
		Global_4718592.f_588 = 6;
		Global_4718592.f_613 = 1;
		Global_4718592.f_616 = 0;
		Global_4718592.f_590 = 1;
		Global_4980736.f_69354 = 0;
		Global_4980736.f_78575 = 1;
		Global_4718592.f_617 = 0;
		Global_4718592.f_618 = 0;
		Global_4718592.f_619 = 2;
		Global_4718592.f_620 = 0;
		Global_4718592.f_116980 = 0;
		Global_4718592.f_107229 = 0;
		Global_4718592.f_116982 = 0;
		Global_4718592.f_110359 = 1;
		Global_4718592.f_110279 = 0;
	}
	else if (Global_4718592 == 0)
	{
	}
}

int func_118(int iParam0, int iParam1)//Position - 0x24261
{
	return (iParam0 * iParam1 + 1);
}

void func_119()//Position - 0x244BB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_5739)
	{
		if (Global_4980736.f_5742[iVar0 /*442*/].f_15 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_5742[iVar0 /*442*/].f_15);
		}
		iVar0++;
	}
}

void func_120()//Position - 0x244FF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_78574)
	{
		if (Global_4980736.f_78578[iVar0 /*450*/].f_12 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_78578[iVar0 /*450*/].f_12);
		}
		iVar0++;
	}
}

void func_121(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xC301A
{
	char cVar0[16];
	IntToString(&cVar0, iParam2, 16);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_WAVE_REACHED_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELEB_WAVE_NUMBER" /* GXT: WAVE ~a~ */);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam3)
	{
		__LIB_0__.func_514("CELEB_SURVIVED" /* GXT: SURVIVED */);
	}
	else
	{
		__LIB_0__.func_514("CELEB_REACHED" /* GXT: REACHED */);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_WAVE_REACHED_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELEB_WAVE_NUMBER" /* GXT: WAVE ~a~ */);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam3)
	{
		__LIB_0__.func_514("CELEB_SURVIVED" /* GXT: SURVIVED */);
	}
	else
	{
		__LIB_0__.func_514("CELEB_REACHED" /* GXT: REACHED */);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_WAVE_REACHED_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELEB_WAVE_NUMBER" /* GXT: WAVE ~a~ */);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam3)
	{
		__LIB_0__.func_514("CELEB_SURVIVED" /* GXT: SURVIVED */);
	}
	else
	{
		__LIB_0__.func_514("CELEB_REACHED" /* GXT: REACHED */);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_122(int iParam0)//Position - 0xC3543
{
	if (iParam0 >= 0 && iParam0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		return 1;
	}
	return 0;
}

int func_123(var uParam0, int iParam1)//Position - 0xC38C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_124()//Position - 0xC3BE0
{
	return Global_4718592.f_621 == 0;
}

int func_125()//Position - 0xCBB46
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

float func_126(int iParam0, int iParam1)//Position - 0xD71E5
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = SYSTEM::TO_FLOAT(iParam0);
	fVar2 = SYSTEM::TO_FLOAT(iParam1);
	if (fVar2 > 0f)
	{
		fVar0 = (fVar1 / fVar2);
	}
	else if (fVar2 == 0f)
	{
		if (fVar1 > 0f)
		{
			fVar0 = (fVar1 / 1f);
		}
	}
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	return fVar0;
}

bool func_127(int iParam0)//Position - 0xDDA30
{
	return iParam0 >= 0;
}

int func_128(int iParam0, int iParam1)//Position - 0xE02FB
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)//Position - 0x11134B
{
	if (PED::GET_VEHICLE_PED_IS_USING(iParam1) == iParam0)
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_130(var uParam0)//Position - 0x112121
{
	struct<26> Var0;
	Var0.f_1 = 4;
	Var0.f_6 = 4;
	Var0.f_11 = 4;
	Var0.f_16 = 4;
	Var0.f_21 = 4;
	*uParam0 = { Var0 };
	uParam0->f_6[0] = -1;
	uParam0->f_6[1] = -1;
	uParam0->f_6[2] = -1;
	uParam0->f_6[3] = -1;
}

void func_131()//Position - 0x11311F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_4980736.f_36355)
	{
		if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_4980736.f_36356[iVar0 /*134*/].f_7);
		}
		iVar0++;
	}
}

void func_132(float fParam0, float fParam1, float fParam2)//Position - 0x115835
{
	float fVar0;
	if (fParam1 < 0f)
	{
		fVar0 = (*fParam0 - fParam1);
		if (*fParam0 > fParam1)
		{
			*fParam0 = (*fParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
		else if (*fParam0 < fParam1)
		{
			fVar0 = (fParam1 - *fParam0);
			*fParam0 = (*fParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
	}
	else if (fParam1 > 0f)
	{
		fVar0 = (fParam1 - *fParam0);
		if (*fParam0 < fParam1)
		{
			*fParam0 = (*fParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
		else if (*fParam0 > fParam1)
		{
			fVar0 = (*fParam0 - fParam1);
			*fParam0 = (*fParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
		}
	}
	else if (*fParam0 > fParam1)
	{
		fVar0 = (*fParam0 - fParam1);
		*fParam0 = (*fParam0 - (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
	}
	else if (*fParam0 < fParam1)
	{
		fVar0 = (fParam1 - *fParam0);
		*fParam0 = (*fParam0 + (fVar0 * (MISC::GET_FRAME_TIME() * fParam2)));
	}
}

int func_133()//Position - 0x149427
{
	HUD::REQUEST_ADDITIONAL_TEXT("FMHRD", 0);
	if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMHRD", 0))
	{
		return 1;
	}
	return 0;
}

void func_134(int iParam0)//Position - 0x14A14F
{
	if (*iParam0 > 1000)
	{
		*iParam0 = 1000;
	}
}

int func_135(var uParam0, bool bParam1)//Position - 0x14A2B1
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
		if (!PED::IS_PED_A_PLAYER(iVar1))
		{
			return __LIB_0__.func_160();
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
		{
			return __LIB_0__.func_160();
		}
		iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0);
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
		{
			return __LIB_0__.func_160();
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (!PED::IS_PED_A_PLAYER(iVar1))
		{
			return __LIB_0__.func_160();
		}
	}
	return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
}

bool func_136(int iParam0)//Position - 0x295135
{
	return (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0) && (!NETWORK::NETWORK_IS_DOOR_NETWORKED(iParam0) || NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(iParam0)));
}

int func_137(int iParam0)//Position - 0x29A2F6
{
	switch (iParam0)
	{
		case 1036961952:
		case 1864280899:
			return 0;
			break;
		case 738966015:
		case 969004395:
			return 1;
			break;
		case 1741567220:
			return 2;
			break;
		case -2117572376:
			return 3;
			break;
		case 1308623196:
			return 4;
			break;
		case -1178784373:
		case 94815597:
			return 5;
			break;
	}
	return -1;
}

void func_138(var uParam0)//Position - 0x12755
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		iVar0 = 0;
		while (iVar0 <= 48)
		{
			if (STREAMING::IS_MODEL_VALID(uParam0->f_88[iVar1 /*50*/][iVar0]) && uParam0->f_88[iVar1 /*50*/][iVar0] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_88[iVar1 /*50*/][iVar0]);
			}
		else
		{
			}
			else
			{
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_139()//Position - 0x20D6C
{
	if (!__LIB_2__.func_135())
	{
		return;
	}
	if (__LIB_16__.func_860())
	{
		return;
	}
	if (__LIB_16__.func_859())
	{
		return;
	}
	if (__LIB_16__.func_858())
	{
		return;
	}
	Global_1641031.f_40.f_10 = 4;
	if (__LIB_16__.func_857())
	{
		__LIB_2__.func_128();
	}
	__LIB_2__.func_130();
}

void func_140()//Position - 0x20DB5
{
	if (!__LIB_2__.func_135())
	{
		return;
	}
	if (__LIB_16__.func_860())
	{
		return;
	}
	if (__LIB_16__.func_859())
	{
		return;
	}
	if (__LIB_16__.func_858())
	{
		return;
	}
	Global_1641031.f_40.f_10 = 2;
	if (__LIB_16__.func_857())
	{
		__LIB_2__.func_128();
	}
	__LIB_2__.func_130();
}

int func_141()//Position - 0x21393
{
	if (!__LIB_2__.func_135())
	{
		return 0;
	}
	return __LIB_16__.func_857();
}

void func_142()//Position - 0x21613
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		__LIB_22__.func_278(iVar0);
		iVar0++;
	}
	__LIB_16__.func_868();
	Global_1661006.f_7 = 0;
}

void func_143(int iParam0)//Position - 0x561A5
{
	Global_4718592.f_658[iParam0 /*22957*/].f_6885[0] = 0f;
	Global_4718592.f_658[iParam0 /*22957*/].f_6781[0 /*3*/] = { 0f, 0f, 0f };
	Global_4718592.f_658[iParam0 /*22957*/].f_6833[0 /*3*/] = { 0f, 0f, 0f };
}

int func_144(int* iParam0, var uParam1)//Position - 0x6E497
{
	if (iParam0->f_5570 == 13)
	{
		if (iParam0->f_5569 == -1)
		{
			return 0;
		}
		else
		{
			return Global_4718592.f_169889[iParam0->f_5569];
		}
	}
	return uParam1->f_88[iParam0->f_5570 /*50*/][iParam0->f_5569];
}

int func_145(int* iParam0)//Position - 0x8D318
{
	if (iParam0->f_898 == 7)
	{
		if (iParam0->f_900 > 0)
		{
			return iParam0->f_1994[iParam0->f_898 /*51*/][(iParam0->f_900 - 1)];
		}
		else
		{
			return 0;
		}
	}
	return iParam0->f_1994[iParam0->f_898 /*51*/][iParam0->f_900];
}

void func_146(struct<3> Param0, float fParam1, float fParam2, int iParam3, int iParam4, bool bParam5, float fParam6)//Position - 0x8D37A
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Var0 = { fParam1, fParam1, fParam2 };
	HUD::GET_HUD_COLOUR(iParam3, &iVar1, &iVar2, &iVar3, &iVar4);
	iVar4 = iParam4;
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Var0, iVar1, iVar2, iVar3, iVar4, false, false, 2, false, 0, 0, false);
	if (bParam5)
	{
		Var0 = { fParam1, fParam1, -fParam2 };
		if (fParam6 != 0.075f)
		{
			Param0.f_2 = (Param0.f_2 - fParam6);
		}
		else
		{
			Param0.f_2 = (Param0.f_2 - 0.075f);
		}
		GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Var0, iVar1, iVar2, iVar3, iVar4, false, false, 2, false, 0, 0, false);
	}
}

Vector3 func_147(var uParam0, float fParam1)//Position - 0x8DBFB
{
	struct<3> Var0;
	float fVar1;
	Var0 = { 0f, 0f, 0f };
	if (fParam1 == 999999f)
	{
		fParam1 = uParam0->f_6[0 /*11*/].f_2;
	}
	if (uParam0->f_4 != 999999f && uParam0->f_5 != 999999f)
	{
		fVar1 = (uParam0->f_5 - uParam0->f_4);
		if (MISC::ABSF((uParam0->f_4 - uParam0->f_5)) > MISC::ABSF(fVar1))
		{
			fVar1 = (uParam0->f_5 - uParam0->f_4);
		}
		Var0.f_2 = (uParam0->f_4 + (fVar1 * fParam1));
	}
	else if (uParam0->f_3 == joaat("v_ilev_mm_windowwc"))
	{
		Var0.f_2 = (21f + (fParam1 * 180f));
	}
	else
	{
		Var0.f_2 = (105f + (fParam1 * 180f));
	}
	return Var0;
}

void func_148(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)//Position - 0x94425
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	var uVar5[4];
	iVar0 = 1;
	iVar3 = (Global_4718592.f_593 - 1);
	iVar1 = 0;
	while (iVar1 <= iVar3)
	{
		StringCopy(&Var4, "FMMC_TS_", 16);
		StringIntConCat(&Var4, (iVar3 - iVar1), 16);
		if (__LIB_1__.func_19())
		{
			StringCopy(&Var4, "SC_SPAWN_T", 16);
		}
		if (iParam1 == 0 || (iVar3 - iVar1) != iParam2)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 500;
		}
		uVar5[(iVar3 - iVar1)] = Global_4980736.f_176055[(iVar3 - iVar1)];
		if (bParam4)
		{
			uVar5[(iVar3 - iVar1)] = (*uParam3)[(iVar3 - iVar1)];
		}
		if (uVar5[(iVar3 - iVar1)] > (*iParam0)[(iVar3 - iVar1)])
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 1;
		}
		if (uVar5[(iVar3 - iVar1)] == (*iParam0)[(iVar3 - iVar1)])
		{
			__LIB_16__.func_915(uVar5[(iVar3 - iVar1)], (*iParam0)[(iVar3 - iVar1)], &Var4, -1, iVar0, 2, 0, iParam1, iVar2, 0, 0, 1, 1, 0, 255, 0);
		}
		else
		{
			__LIB_16__.func_915(uVar5[(iVar3 - iVar1)], (*iParam0)[(iVar3 - iVar1)], &Var4, -1, iVar0, 2, 0, iParam1, iVar2, 1, 0, 1, 1, 0, 255, 0);
		}
		iVar1++;
	}
}

void func_149(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE88BC
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar0 = ((125f - 8f) * 0.00078125f);
	fVar1 = (125f * 0.00078125f);
	fVar2 = fParam0;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (fParam2 > ((fVar0 / 100f) * 20f))
		{
			__LIB_2__.func_154(fVar2, fParam1, ((fVar0 / 100f) * 20f), fParam3, iParam4, iParam5, iParam6, iParam7);
		}
		else if (fParam2 > 0f)
		{
			__LIB_2__.func_154(fVar2, fParam1, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7);
		}
		fParam2 = (fParam2 - ((fVar0 / 100f) * 20f));
		fVar2 = (fVar2 + ((fVar1 / 100f) * 20f));
		iVar3++;
	}
}

void func_150(int iParam0)//Position - 0xEC826
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= (__LIB_11__.func_600() - 1))
	{
		if (iVar0 < (__LIB_11__.func_600() - 1))
		{
			Global_4980736.f_201076[iVar0 /*7*/] = { Global_4980736.f_201076[iVar0 + 1 /*7*/] };
			Global_4980736.f_201076[iVar0 /*7*/].f_3 = Global_4980736.f_201076[iVar0 + 1 /*7*/].f_3;
			Global_4980736.f_201076[iVar0 /*7*/].f_4 = Global_4980736.f_201076[iVar0 + 1 /*7*/].f_4;
		}
		else
		{
			Global_4980736.f_201076[iVar0 /*7*/] = { 0f, 0f, 0f };
			Global_4980736.f_201076[iVar0 /*7*/].f_3 = 0;
			Global_4980736.f_201076[iVar0 /*7*/].f_4 = 0;
		}
		iVar0++;
	}
	Global_4980736.f_201777 = (Global_4980736.f_201777 - 1);
}

void func_151(var uParam0, bool bParam1, bool bParam2, var uParam3)//Position - 0xFD545
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	if (*uParam3)
	{
		HUD::GET_HUD_COLOUR(23, &iVar0, &iVar1, &iVar2, &uVar3);
		if (bParam2)
		{
			uParam0->f_822[bParam1] = __LIB_15__.func_618(&(uParam0->f_789), 32);
		}
		if (uParam0->f_822[bParam1] != -1)
		{
			Var4 = { Global_4980736.f_5742[bParam1 /*442*/] + Vector(0.2f, 0f, 0f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
			uParam0->f_789[uParam0->f_822[bParam1]] = GRAPHICS::ADD_DECAL(9118, Var4, 0f, 0f, -1f, 0f, 1f, 0f, 2f, 2f, (SYSTEM::TO_FLOAT(iVar0) / 255f), (SYSTEM::TO_FLOAT(iVar1) / 255f), (SYSTEM::TO_FLOAT(iVar2) / 255f), 1f, -1f, true, false, false);
			*uParam3 = 0;
		}
	}
}

int func_152(int* iParam0, int iParam1)//Position - 0x101B25
{
	if (iParam0->f_271 != iParam1)
	{
		return -1;
	}
	return iParam0->f_4796;
}

bool func_153()//Position - 0x1060D4
{
	return BitTest(Global_2703735.f_2394.f_2, 3);
}

int func_154(var uParam0, char* sParam1, int iParam2)//Position - 0x1063F1
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		__LIB_0__.func_151(sParam1, iParam2);
	}
	StringCopy(&(uParam0->f_5), sParam1, 16);
	uParam0->f_15 = 0;
	return 1;
}

void func_155(var uParam0, bool bParam1)//Position - 0x2406E2
{
	if (BitTest(uParam0->f_744, bParam1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_744), bParam1);
	}
}

void func_156(var uParam0, bool bParam1)//Position - 0x240700
{
	if (!BitTest(uParam0->f_744, bParam1))
	{
		MISC::SET_BIT(&(uParam0->f_744), bParam1);
	}
}

int func_157(var uParam0)//Position - 0x241CD1
{
	if ((((uParam0->f_271 == 101 || uParam0->f_270 == 101) || uParam0->f_271 == 117) || uParam0->f_271 == 118) || uParam0->f_271 == 120)
	{
		return 1;
	}
	return 0;
}

var func_158()//Position - 0x248
{
	return Global_113386.f_20118.f_254.f_4;
}

int func_159()//Position - 0x25B
{
	if (Global_113386.f_20118.f_263)
	{
		return 1;
	}
	return 0;
}

void func_160(var uParam0, int iParam1, int iParam2)//Position - 0x219B
{
	if (iParam1 != 4)
	{
		uParam0->f_34[iParam1] = iParam2;
		Global_23011.f_2 = 1;
	}
}

void func_161(var uParam0)//Position - 0x3046A
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_6 = -0.15f;
		uParam0->f_7 = 0.05f;
		CAM::ATTACH_CAM_TO_PED_BONE(uParam0->f_4, uParam0->f_3, 31086, 0f, uParam0->f_6, uParam0->f_7, true);
		CAM::SET_CAM_NEAR_CLIP(uParam0->f_4, 0.101f);
		CAM::POINT_CAM_AT_ENTITY(uParam0->f_4, uParam0->f_3, 0f, 10f, uParam0->f_7, true);
		CAM::SET_CAM_FOV(uParam0->f_4, 96.76f);
		CAM::SET_CAM_DOF_PLANES(uParam0->f_4, 0f, 0f, 100000f, 100000f);
	}
}

int func_162(int* iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x32312
{
	int iVar0;
	iVar0 = __LIB_11__.func_813();
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			PED::DELETE_PED(iParam0);
		}
		*iParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam2, false, false);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 2, 0, 0, 0);
		if (Global_113386.f_20118.f_263)
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, Global_113386.f_20118.f_254.f_4, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, 4, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 11, 0, 0, 0);
		PED::CLEAR_ALL_PED_PROPS(*iParam0);
		if (bParam3)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x68B92
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_664(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0)//Position - 0x86721
{
	iParam0 = iParam0;
	return 1;
}

void func_165(int iParam0)//Position - 0x8A8C6
{
	if (*iParam0 == 2)
	{
		CAM::SET_USE_HI_DOF();
	}
}

void func_166(int iParam0)//Position - 0x8A8D9
{
	bool bVar0;
	switch (iParam0->f_10)
	{
		case 0:
			if (*iParam0 == 2)
			{
				iParam0->f_10 = 1;
			}
			break;
		case 1:
			bVar0 = false;
			switch (iParam0->f_11)
			{
				case 0:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_A_01", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_A_02", false, -1))
					{
						bVar0 = true;
					}
					break;
				case 1:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_B_01", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_B_02", false, -1))
					{
						bVar0 = true;
					}
					break;
				case 2:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_C_01", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CHOP_CAM_C_02", false, -1))
					{
						bVar0 = true;
					}
					break;
			}
			if (bVar0)
			{
				if (iParam0->f_12 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
					{
						switch (iParam0->f_11)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_A", 0, true);
								break;
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_B", 0, true);
								break;
							case 2:
								AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_12, "CHOP_CAM_C", 0, true);
								break;
							}
						}
				}
				iParam0->f_11++;
				if (iParam0->f_11 > 2)
				{
					iParam0->f_11 = 0;
				}
				iParam0->f_10 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_167(float fParam0, float fParam1, float fParam2)//Position - 0x96B18
{
	*fParam0 = (*fParam0 + ((((fParam1 - *fParam0) * fParam2) * 30f) * SYSTEM::TIMESTEP()));
}

void func_168(float fParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x96B3B
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
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) };
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
				*fParam0 = (fParam9 - ((fParam9 - fParam10) * fVar4));
			}
			else
			{
				*fParam0 = fParam9;
			}
		}
		else if (fVar3 > fParam4)
		{
			fVar4 = ((fVar3 - fParam4) / (fParam5 - fParam4));
			*fParam0 = (1f - (fVar6 * fVar4));
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
				*fParam0 = (1f + ((fVar4 * fVar5) * 2f));
			}
			else
			{
				*fParam0 = (1f + (fVar4 * fVar5));
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
		fVar8 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(*uParam1));
		if (fVar8 > 0f)
		{
			fVar4 = (fVar4 * 0.5f);
		}
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
		{
			*fParam0 = (2f + fVar4);
		}
		else if (ENTITY::GET_ENTITY_SPEED(*uParam1) < 5f && fVar8 > 0f)
		{
			*fParam0 = (0.6f + fVar4);
		}
		else
		{
			*fParam0 = (1f + fVar4);
		}
	}
	*fParam0 = (*fParam0 * fParam8);
	if (bParam12)
	{
		fVar9 = fParam13;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*fParam0 > 1f)
		{
			fVar9 = (fParam13 + ((fParam14 - fParam13) * (*fParam0 - 1f)));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*uParam1, -fVar9);
	}
}

void func_169(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1AC3
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam3 == 1)
		{
			PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, Param1);
		}
		else if (iParam3 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
		}
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (iParam4 == 1)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (iParam5 == 1)
			{
				STREAMING::LOAD_SCENE(Param1);
			}
		}
	}
}

char* func_170()//Position - 0x954F1
{
	return "MISSCHOP_VEHICLE@BACK_OF_VAN";
}

void func_171()//Position - 0x955C2
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
}

int func_172(char* sParam0, var uParam1, var uParam2)//Position - 0xA0EF0
{
	int iVar0;
	iVar0 = 0;
	if (*uParam2 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam2 - 1))
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED((*uParam1)[iVar0], sParam0))
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING((*uParam1)[iVar0], sParam0);
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

void func_173(int iParam0, char* sParam1, var uParam2, int iParam3, var uParam4)//Position - 0xA136B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (*uParam4 >= 0)
	{
		if (*uParam4 <= (iParam3 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= *uParam4)
			{
				if ((*uParam2)[iVar0] == iParam0)
				{
					iVar1 = 1;
				}
				iVar0++;
			}
			if (iVar1 == 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
				(*uParam2)[*uParam4] = iParam0;
				*uParam4++;
			}
		}
	}
}

void func_174(char* sParam0, var uParam1, var uParam2)//Position - 0xA158B
{
	int iVar0;
	iVar0 = 0;
	if (*uParam2 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam2 - 1))
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED((*uParam1)[iVar0], sParam0))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING((*uParam1)[iVar0], sParam0);
				(*uParam1)[iVar0] = 0;
			}
			iVar0++;
		}
	}
	*uParam2 = 0;
}

int func_175(int iParam0, bool bParam1, struct<3> Param2, float fParam3)//Position - 0xA32B5
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return MISC::IS_BULLET_IN_AREA(Param2, fParam3, bParam1);
		}
	}
	return 0;
}

void func_176(int* iParam0, bool bParam1)//Position - 0x1D57
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

int func_177(int iParam0)//Position - 0x71C52
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = *iParam0;
	iVar2 = 0;
	if ((iParam0[0 /*21*/])->f_3)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar2 /*21*/]))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = iVar1;
	}
	return iVar0;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x72310
{
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, iParam2);
	PED::SET_PED_COMBAT_ABILITY(*iParam0, iParam3);
	PED::SET_PED_COMBAT_RANGE(*iParam0, iParam4);
	PED::SET_PED_ACCURACY(*iParam0, iParam1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, iParam5);
}

int func_179(int iParam0, int iParam1, struct<2> Param2, float fParam3)//Position - 0x738B3
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	fVar2 = SYSTEM::VDIST2(Var0, Var1);
	fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Var1.f_0), (Param2.f_1 - Var1.f_1));
	fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D((Var0.f_0 - Var1.f_0), (Var0.f_1 - Var1.f_1));
	fVar5 = MISC::ABSF((fVar4 - fVar3));
	if (fVar5 > 180f)
	{
		fVar5 = MISC::ABSF((fVar5 - 360f));
	}
	if (fVar2 < 9f)
	{
		if (fVar5 < 40f)
		{
			return 1;
		}
	}
	else if (fVar5 < 20f)
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4, float fParam5)//Position - 0x85842
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param3, Param4, fParam5, false, true, 0))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Param3, Param4, fParam5, false, true, 0))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam2))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, Param3, Param4, fParam5, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_181(var uParam0, int iParam1, int iParam2)//Position - 0x9B935
{
	if (iParam1 != 4)
	{
		uParam0->f_13[iParam1] = iParam2;
	}
}

void func_182(int iParam0)//Position - 0x1674
{
	switch (iParam0)
	{
		case 0:
			Global_1835502.f_395 = NETWORK::GET_NETWORK_TIME();
			break;
		case 1:
			Global_1835502.f_395.f_1 = NETWORK::GET_NETWORK_TIME();
			break;
		case 2:
			Global_1835502.f_395.f_2 = NETWORK::GET_NETWORK_TIME();
			break;
		case 3:
			Global_1835502.f_395.f_3 = NETWORK::GET_NETWORK_TIME();
			break;
	}
}

int func_183(int iParam0)//Position - 0x1711
{
	switch (iParam0)
	{
		case 0:
			return Global_1835502.f_395;
			break;
		case 1:
			return Global_1835502.f_395.f_1;
			break;
		case 2:
			return Global_1835502.f_395.f_2;
			break;
		case 3:
			return Global_1835502.f_395.f_3;
			break;
	}
	return NETWORK::GET_NETWORK_TIME();
}

int func_184(int iParam0)//Position - 0x17D0
{
	if (iParam0 < Global_2724918)
	{
		return 0;
	}
	else if (iParam0 < (Global_2724918 + Global_2724919))
	{
		return 1;
	}
	else if (iParam0 < ((Global_2724918 + Global_2724919) + Global_2724920))
	{
		return 2;
	}
	else if (iParam0 < (((Global_2724918 + Global_2724919) + Global_2724920) + Global_2724921))
	{
		return 3;
	}
	return 0;
}

bool func_185(int iParam0)//Position - 0x1F1B
{
	return Global_2689235[iParam0 /*453*/].f_269.f_5;
}

int func_186(int iParam0)//Position - 0x1F9B
{
	return Global_2683918[iParam0 /*3*/].f_1;
}

int func_187()//Position - 0x1FAD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 42)
	{
		if (Global_2683918.f_97[iVar0 /*33*/].f_28 || Global_2683918.f_97[iVar0 /*33*/].f_29)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_188(bool bParam0)//Position - 0x2A9F
{
	return __LIB_1__.func_330(__LIB_9__.func_346(bParam0));
}

int func_189()//Position - 0x6F29
{
	if (Global_1835502.f_176[44] != 0 || Global_1835502.f_176[13] != 0)
	{
		return 0;
	}
	return 1;
}

void func_190(int iParam0, struct<3> Param1)//Position - 0x8D55
{
	Global_2688483[iParam0 /*10*/] = { Param1 };
}

bool func_191(bool bParam0)//Position - 0x8D9C
{
	return BitTest(Global_2688483[bParam0 /*10*/].f_6, 5);
}

void func_192(bool bParam0, var uParam1, var uParam2)//Position - 0x8FCA
{
	if (bParam0 == -1)
	{
		return;
	}
	*uParam1 = Global_2688483.f_324[bParam0 /*8*/].f_2;
	*uParam2 = Global_2688483.f_324[bParam0 /*8*/].f_3;
}

void func_193(bool bParam0, int iParam1, int iParam2)//Position - 0x8FFB
{
	Global_2688483.f_324[bParam0 /*8*/].f_2 = iParam1;
	Global_2688483.f_324[bParam0 /*8*/].f_3 = iParam2;
}

int func_194(int iParam0, int iParam1)//Position - 0x90C7
{
	int iVar0;
	while (iParam1 != 0)
	{
		iVar0 = iParam1;
		iParam1 = (iParam0 % iParam1);
		iParam0 = iVar0;
	}
	return iParam0;
}

void func_195(float fParam0, float fParam1)//Position - 0x91A6
{
	*fParam0 = ((100f / fParam1) - 1f);
	if (*fParam0 < 0f)
	{
		*fParam0 = 0.05f;
	}
}

bool func_196(bool bParam0)//Position - 0x91CB
{
	return Global_2688483.f_324[bParam0 /*8*/].f_4 > 0;
}

void func_197(int iParam0, var uParam1)//Position - 0x91E2
{
	Global_2688483[iParam0 /*10*/].f_3 = uParam1;
}

void func_198(int iParam0, bool bParam1, int iParam2)//Position - 0x91F6
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2688483[iParam0 /*10*/].f_6), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2688483[iParam0 /*10*/].f_6), 0);
	}
	Global_2688483[iParam0 /*10*/].f_7 = iParam2;
}

int func_199(bool bParam0)//Position - 0x9253
{
	return Global_2688483.f_324[bParam0 /*8*/].f_6;
}

void func_200(bool bParam0, var uParam1)//Position - 0x9268
{
	Global_2688483.f_324[bParam0 /*8*/].f_4 = uParam1;
}

int func_201(int iParam0)//Position - 0x92E8
{
	return Global_2688483.f_324[iParam0 /*8*/].f_1;
}

var func_202(int iParam0)//Position - 0x93E2
{
	return Global_2688483[iParam0 /*10*/].f_8;
}

Vector3 func_203(bool bParam0)//Position - 0x93F4
{
	return Global_2688483[bParam0 /*10*/];
}

bool func_204(int iParam0)//Position - 0x9406
{
	return Global_2688483.f_324[iParam0 /*8*/].f_7;
}

int func_205(bool bParam0)//Position - 0x941B
{
	return Global_1853348[bParam0 /*834*/].f_96.f_28;
}

int func_206(int iParam0)//Position - 0x964B
{
	return Global_2686568[iParam0 /*41*/].f_3.f_1;
}

int func_207(int iParam0)//Position - 0x965F
{
	int iVar0;
	iVar0 = iParam0;
	if (Global_2681762.f_4[iVar0 /*2*/] == 3)
	{
		return 0;
	}
	return 1;
}

void func_208(int iParam0)//Position - 0x9691
{
	int iVar0;
	int iVar1;
	iVar0 = Global_2681762.f_127[iParam0 /*2*/].f_1;
	iVar1 = Global_2681762.f_127[iParam0 /*2*/];
	if (iVar0 != -1 && iVar1 != -1)
	{
		MISC::CLEAR_BIT(&(Global_2681762.f_94[iVar0]), iVar1);
	}
	Global_2681762.f_127[iParam0 /*2*/].f_1 = -1;
	Global_2681762.f_127[iParam0 /*2*/] = -1;
}

bool func_209(int iParam0)//Position - 0x9BA8
{
	return Global_2686568[iParam0 /*41*/] == 1;
}

bool func_210(int iParam0)//Position - 0x9BBA
{
	return Global_2686568[iParam0 /*41*/] == 0;
}

bool func_211(int iParam0)//Position - 0x9F01
{
	return Global_2657492.f_291[iParam0 /*4*/].f_3 > 0;
}

bool func_212(int iParam0)//Position - 0x9F69
{
	return Global_2657492.f_2[iParam0 /*18*/];
}

Vector3 func_213(int iParam0)//Position - 0xA117
{
	return Global_2657492.f_291[iParam0 /*4*/];
}

struct<10> func_214(int iParam0)//Position - 0xA3B5
{
	struct<10> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	__LIB_9__.func_819(&Var0);
	if (__LIB_22__.func_948(iParam0))
	{
		Var0.f_0 = Global_2657492.f_356[iParam0 /*75*/].f_6;
		Var0.f_1 = Global_2657492.f_356[iParam0 /*75*/].f_7;
		Var0.f_2 = Global_2657492.f_356[iParam0 /*75*/].f_8;
		Var0.f_3 = { Global_2657492.f_356[iParam0 /*75*/].f_10 };
		Var0.f_9 = iParam0;
	}
	return Var0;
}

bool func_215(int iParam0)//Position - 0xA432
{
	return BitTest(Global_2657492.f_356[iParam0 /*75*/].f_5, 3);
}

void func_216(int iParam0, int iParam1, int iParam2)//Position - 0xA92A
{
	Global_2681762.f_4[iParam0 /*2*/] = iParam1;
	Global_2681762.f_4[iParam0 /*2*/].f_1 = iParam2;
}

bool func_217(int iParam0)//Position - 0xAB10
{
	return BitTest(Global_2686568[iParam0 /*41*/].f_40, 0);
}

bool func_218(int iParam0)//Position - 0xB6FE
{
	return Global_2686568[iParam0 /*41*/] == 3;
}

int func_219(int iParam0)//Position - 0xB710
{
	return Global_2686568[iParam0 /*41*/].f_1;
}

bool func_220(int iParam0, bool bParam1)//Position - 0xB81A
{
	var uVar0;
	uVar0 = bParam1;
	return BitTest(Global_2686568[iParam0 /*41*/].f_37, uVar0);
}

bool func_221(int iParam0, bool bParam1)//Position - 0xB833
{
	var uVar0;
	uVar0 = bParam1;
	return BitTest(Global_2686568[iParam0 /*41*/].f_34, uVar0);
}

var func_222(int iParam0)//Position - 0xB917
{
	return Global_2686568[iParam0 /*41*/].f_37;
}

int func_223(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB929
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = (iParam3 + iParam4);
	if (iVar1 >= iParam6)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			if ((iVar1 + iParam5) >= iParam6)
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		return 1;
	}
	iParam0 = iParam0;
	iParam1 = iParam1;
	return 0;
}

int func_224(int iParam0)//Position - 0xD73E
{
	if (iParam0 == 0)
	{
	}
	return 0;
}

int func_225(int iParam0)//Position - 0xD75C
{
	return Global_2686568[iParam0 /*41*/].f_29;
}

int func_226(int iParam0, int iParam1)//Position - 0xD76E
{
	int iVar0;
	iVar0 = __LIB_9__.func_832(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return 1;
	}
	return Global_1641652[iVar0 /*6*/].f_3;
}

void func_227(int iParam0)//Position - 0xD7ED
{
	Global_2686568[iParam0 /*41*/].f_30 = 0;
}

var func_228(int iParam0)//Position - 0xED49
{
	return Global_2686568[iParam0 /*41*/].f_28;
}

void func_229(int iParam0)//Position - 0xEEF8
{
	struct<41> Var0;
	Var0 = 5;
	Var0.f_1 = 10;
	Var0.f_2 = 11;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_9 = -1;
	Var0.f_3.f_16 = -1;
	Var0.f_3.f_19 = -1;
	Var0.f_3.f_20 = -1;
	Var0.f_27 = -1;
	Global_2686568[iParam0 /*41*/] = { Var0 };
}

int func_230(int iParam0, int iParam1)//Position - 0xF05A
{
	switch (iParam0)
	{
		case 7:
		case 5:
			break;
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 4:
		case 8:
		case 9:
		case 10:
			return 0;
		default:
			return 0;
	}
	if (iParam0 == 7 || iParam0 == 5)
	{
		switch (iParam1)
		{
			case 0:
			case 5:
			case 1:
			case 2:
			case 3:
			case 4:
				return 1;
			default:
		}
		return 0;
		return 0;
	}
	return 0;
}

int func_231(int iParam0)//Position - 0xF452
{
	if (iParam0 == -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 9:
			if (Global_152058.f_3 == 2)
			{
				return 0;
			}
			break;
		case 8:
			if (Global_152138.f_3 == 2)
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 1;
}

bool func_232(int iParam0, var uParam1)//Position - 0xF524
{
	return BitTest(*uParam1, iParam0);
}

int func_233(bool bParam0)//Position - 0xF5A9
{
	bParam0 = bParam0;
	return 1;
}

void func_234(var uParam0)//Position - 0xF634
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_235(bool bParam0)//Position - 0x11723
{
	return Global_1853348[bParam0 /*834*/].f_267.f_465 != 0;
}

bool func_236(bool bParam0)//Position - 0x1179E
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_366, 7);
}

int func_237(bool bParam0)//Position - 0x1196F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_114[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_238()//Position - 0x12021
{
	if (!Global_1958606 && Global_1958607)
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)//Position - 0x139C1
{
	if (__LIB_1__.func_330(iParam0))
	{
		return (Global_2824571.f_2[iParam0] && Global_2824571.f_137[iParam0]);
	}
	return 0;
}

int func_240(int iParam0, int iParam1)//Position - 0x6EC34
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((iParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_241(bool bParam0)//Position - 0x76FE5
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

bool func_242(bool bParam0)//Position - 0x9810C
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_366, 8);
}

int func_243()//Position - 0xA1118
{
	return __LIB_9__.func_346(PLAYER::PLAYER_ID());
}

void func_244(struct<3> Param0)//Position - 0xA1128
{
	int iVar0;
	if (SYSTEM::VMAG(Param0) < 0.01f)
	{
		Param0.f_2 = 1f;
	}
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_1 = { Param0 };
	iVar0 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID());
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_46 = iVar0;
}

void func_245(var uParam0)//Position - 0xA11D6
{
	if (*uParam0 < 0)
	{
		*uParam0 = 0;
	}
	if (*uParam0 > 2)
	{
		*uParam0 = 2;
	}
	if (uParam0->f_1 < 0)
	{
		uParam0->f_1 = 0;
	}
	if (uParam0->f_1 > 15)
	{
		uParam0->f_1 = 15;
	}
	if (uParam0->f_2 < 0)
	{
		uParam0->f_2 = 0;
	}
	if (uParam0->f_2 > 7)
	{
		uParam0->f_2 = 7;
	}
	if (uParam0->f_3 < 0)
	{
		uParam0->f_3 = 0;
	}
	if (uParam0->f_3 > 1)
	{
		uParam0->f_3 = 1;
	}
	if (uParam0->f_4 < 0)
	{
		uParam0->f_4 = 0;
	}
	if (uParam0->f_4 > 45)
	{
		uParam0->f_4 = 45;
	}
}

Vector3 func_246(int iParam0)//Position - 0xA1260
{
	return Global_4282900[iParam0 /*3*/];
}

int func_247(bool bParam0)//Position - 0xA207A
{
	return __LIB_4__.func_947(PLAYER::PLAYER_ID(), bParam0);
}

void func_248(int iParam0)//Position - 0xA3534
{
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1301 = (Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1301 + iParam0);
	if (Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1302 == -1)
	{
		Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1302 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1301 >= Global_262145.f_7045 /* Tunable: CAP_MAX_AMOUNT_CASH_RECIEVED */)
	{
		if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 10) == 0)
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 10);
		}
	}
}

void func_249()//Position - 0xA3B83
{
	struct<35> Var0;
	Var0.f_2 = 32;
	Global_2725914 = { Var0 };
}

int func_250(bool bParam0)//Position - 0xA5DF0
{
	if (__LIB_1__.func_188(Global_1853348[bParam0 /*834*/].f_267.f_32))
	{
		return 1;
	}
	return 0;
}

void func_251(int iParam0, int iParam1, bool bParam2)//Position - 0xA6085
{
	if (bParam2)
	{
		if (!__LIB_1__.func_331(iParam0, iParam1))
		{
			Global_4282659[iParam0 /*10*/].f_6 = (Global_4282659[iParam0 /*10*/].f_6 + iParam1);
		}
	}
	else if (__LIB_1__.func_331(iParam0, iParam1))
	{
		Global_4282659[iParam0 /*10*/].f_6 = (Global_4282659[iParam0 /*10*/].f_6 - iParam1);
	}
}

void func_252(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xA60E0
{
	int iVar0;
	iVar0 = uParam1;
	switch (iParam0)
	{
		case joaat("speeder2"):
			switch (iVar0)
			{
				case 0:
					*uParam2 = 77;
					*uParam3 = 11;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 78;
					break;
				case 1:
					*uParam2 = 63;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 67;
					*uParam6 = 65;
					*uParam7 = 74;
					break;
				case 2:
					*uParam2 = 73;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 73;
					*uParam6 = 111;
					*uParam7 = 73;
					break;
				case 3:
					*uParam2 = 23;
					*uParam3 = 23;
					*uParam4 = 7;
					*uParam5 = 8;
					*uParam6 = 23;
					*uParam7 = 8;
					break;
				case 4:
					*uParam2 = 9;
					*uParam3 = 9;
					*uParam4 = 7;
					*uParam5 = 8;
					*uParam6 = 9;
					*uParam7 = 6;
					break;
				case 5:
					*uParam2 = 2;
					*uParam3 = 2;
					*uParam4 = 7;
					*uParam5 = 45;
					*uParam6 = 2;
					*uParam7 = 45;
					break;
				case 6:
					*uParam2 = 2;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 2;
					*uParam7 = 2;
					break;
				case 7:
					*uParam2 = 111;
					*uParam3 = 0;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 0;
					break;
				case 8:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 138;
					*uParam6 = 111;
					*uParam7 = 138;
					break;
				case 9:
					*uParam2 = 2;
					*uParam3 = 18;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 2;
					*uParam7 = 2;
					break;
				case 10:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 59;
					*uParam6 = 111;
					*uParam7 = 59;
					break;
				case 11:
					*uParam2 = 30;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 30;
					*uParam7 = 111;
					break;
				case 12:
					*uParam2 = 121;
					*uParam3 = 121;
					*uParam4 = 7;
					*uParam5 = 77;
					*uParam6 = 121;
					*uParam7 = 77;
					break;
				case 13:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 14:
					*uParam2 = 33;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 33;
					*uParam6 = 111;
					*uParam7 = 33;
					break;
				case 15:
					*uParam2 = 1;
					*uParam3 = 1;
					*uParam4 = 7;
					*uParam5 = 99;
					*uParam6 = 158;
					*uParam7 = 1;
					break;
				default:
					*uParam2 = 0;
					*uParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 0;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
			}
			break;
		case joaat("dinghy4"):
			switch (iVar0)
			{
				case 0:
					*uParam2 = 111;
					*uParam3 = 77;
					*uParam4 = 8;
					*uParam5 = 77;
					*uParam6 = 77;
					*uParam7 = 111;
					break;
				case 1:
					*uParam2 = 111;
					*uParam3 = 63;
					*uParam4 = 8;
					*uParam5 = 63;
					*uParam6 = 63;
					*uParam7 = 63;
					break;
				case 2:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 8;
					*uParam5 = 73;
					*uParam6 = 73;
					*uParam7 = 111;
					break;
				case 3:
					*uParam2 = 23;
					*uParam3 = 23;
					*uParam4 = 8;
					*uParam5 = 8;
					*uParam6 = 8;
					*uParam7 = 23;
					break;
				case 4:
					*uParam2 = 9;
					*uParam3 = 9;
					*uParam4 = 8;
					*uParam5 = 9;
					*uParam6 = 8;
					*uParam7 = 6;
					break;
				case 5:
					*uParam2 = 2;
					*uParam3 = 2;
					*uParam4 = 8;
					*uParam5 = 2;
					*uParam6 = 45;
					*uParam7 = 2;
					break;
				case 6:
					*uParam2 = 2;
					*uParam3 = 111;
					*uParam4 = 8;
					*uParam5 = 2;
					*uParam6 = 2;
					*uParam7 = 111;
					break;
				case 7:
					*uParam2 = 111;
					*uParam3 = 0;
					*uParam4 = 8;
					*uParam5 = 2;
					*uParam6 = 2;
					*uParam7 = 111;
					break;
				case 8:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 8;
					*uParam5 = 138;
					*uParam6 = 138;
					*uParam7 = 111;
					break;
				case 9:
					*uParam2 = 2;
					*uParam3 = 18;
					*uParam4 = 8;
					*uParam5 = 2;
					*uParam6 = 2;
					*uParam7 = 18;
					break;
				case 10:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 8;
					*uParam5 = 2;
					*uParam6 = 59;
					*uParam7 = 132;
					break;
				case 11:
					*uParam2 = 31;
					*uParam3 = 111;
					*uParam4 = 8;
					*uParam5 = 2;
					*uParam6 = 111;
					*uParam7 = 31;
					break;
				case 12:
					*uParam2 = 121;
					*uParam3 = 121;
					*uParam4 = 8;
					*uParam5 = 77;
					*uParam6 = 77;
					*uParam7 = 121;
					break;
				case 13:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 8;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 14:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 8;
					*uParam5 = 33;
					*uParam6 = 33;
					*uParam7 = 111;
					break;
				case 15:
					*uParam2 = 1;
					*uParam3 = 1;
					*uParam4 = 0;
					*uParam5 = 1;
					*uParam6 = 158;
					*uParam7 = 1;
					break;
				default:
					*uParam2 = 0;
					*uParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 0;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
			}
			break;
		case joaat("seashark3"):
			switch (iVar0)
			{
				case 0:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 77;
					*uParam7 = 77;
					break;
				case 1:
					*uParam2 = 111;
					*uParam3 = 63;
					*uParam4 = 7;
					*uParam5 = 63;
					*uParam6 = 63;
					*uParam7 = 63;
					break;
				case 2:
					*uParam2 = 111;
					*uParam3 = 73;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 73;
					*uParam7 = 73;
					break;
				case 3:
					*uParam2 = 23;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 8;
					*uParam6 = 8;
					*uParam7 = 8;
					break;
				case 4:
					*uParam2 = 8;
					*uParam3 = 9;
					*uParam4 = 7;
					*uParam5 = 8;
					*uParam6 = 8;
					*uParam7 = 9;
					break;
				case 5:
					*uParam2 = 45;
					*uParam3 = 2;
					*uParam4 = 7;
					*uParam5 = 45;
					*uParam6 = 2;
					*uParam7 = 2;
					break;
				case 6:
					*uParam2 = 2;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 8;
					*uParam6 = 2;
					*uParam7 = 2;
					break;
				case 7:
					*uParam2 = 2;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 2;
					*uParam7 = 111;
					break;
				case 8:
					*uParam2 = 111;
					*uParam3 = 138;
					*uParam4 = 7;
					*uParam5 = 138;
					*uParam6 = 111;
					*uParam7 = 138;
					break;
				case 9:
					*uParam2 = 18;
					*uParam3 = 2;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 2;
					*uParam7 = 2;
					break;
				case 10:
					*uParam2 = 111;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 8;
					*uParam6 = 8;
					*uParam7 = 111;
					break;
				case 11:
					*uParam2 = 111;
					*uParam3 = 31;
					*uParam4 = 7;
					*uParam5 = 31;
					*uParam6 = 111;
					*uParam7 = 31;
					break;
				case 12:
					*uParam2 = 121;
					*uParam3 = 77;
					*uParam4 = 7;
					*uParam5 = 77;
					*uParam6 = 121;
					*uParam7 = 77;
					break;
				case 13:
					*uParam2 = 111;
					*uParam3 = 18;
					*uParam4 = 7;
					*uParam5 = 18;
					*uParam6 = 18;
					*uParam7 = 111;
					break;
				case 14:
					*uParam2 = 33;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 33;
					break;
				case 15:
					*uParam2 = 1;
					*uParam3 = 158;
					*uParam4 = 7;
					*uParam5 = 1;
					*uParam6 = 1;
					*uParam7 = 1;
					break;
				default:
					*uParam2 = 0;
					*uParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 0;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
			}
			break;
		case joaat("toro2"):
			switch (iVar0)
			{
				case 0:
					*uParam2 = 111;
					*uParam3 = 104;
					*uParam4 = 7;
					*uParam5 = 77;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 1:
					*uParam2 = 63;
					*uParam3 = 103;
					*uParam4 = 7;
					*uParam5 = 63;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 2:
					*uParam2 = 73;
					*uParam3 = 103;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 3:
					*uParam2 = 23;
					*uParam3 = 103;
					*uParam4 = 7;
					*uParam5 = 8;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 4:
					*uParam2 = 9;
					*uParam3 = 103;
					*uParam4 = 7;
					*uParam5 = 8;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 5:
					*uParam2 = 2;
					*uParam3 = 11;
					*uParam4 = 7;
					*uParam5 = 45;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 6:
					*uParam2 = 2;
					*uParam3 = 94;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 7:
					*uParam2 = 111;
					*uParam3 = 11;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 8:
					*uParam2 = 138;
					*uParam3 = 104;
					*uParam4 = 7;
					*uParam5 = 138;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 9:
					*uParam2 = 2;
					*uParam3 = 101;
					*uParam4 = 7;
					*uParam5 = 18;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 10:
					*uParam2 = 111;
					*uParam3 = 97;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 11:
					*uParam2 = 31;
					*uParam3 = 104;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 12:
					*uParam2 = 111;
					*uParam3 = 103;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 13:
					*uParam2 = 111;
					*uParam3 = 104;
					*uParam4 = 7;
					*uParam5 = 2;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 14:
					*uParam2 = 111;
					*uParam3 = 104;
					*uParam4 = 7;
					*uParam5 = 33;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				case 15:
					*uParam2 = 1;
					*uParam3 = 2;
					*uParam4 = 7;
					*uParam5 = 158;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
				default:
					*uParam2 = 0;
					*uParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 0;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
			}
			break;
		case joaat("tropic2"):
			switch (iVar0)
			{
				case 0:
					*uParam2 = 111;
					*uParam3 = 77;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 1:
					*uParam2 = 111;
					*uParam3 = 63;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 2:
					*uParam2 = 111;
					*uParam3 = 73;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 3:
					*uParam2 = 23;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 4:
					*uParam2 = 9;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 5:
					*uParam2 = 2;
					*uParam3 = 45;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 6:
					*uParam2 = 2;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 7:
					*uParam2 = 111;
					*uParam3 = 2;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 8:
					*uParam2 = 111;
					*uParam3 = 138;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 9:
					*uParam2 = 2;
					*uParam3 = 18;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 10:
					*uParam2 = 111;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 11:
					*uParam2 = 111;
					*uParam3 = 31;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 12:
					*uParam2 = 121;
					*uParam3 = 77;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 13:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 14:
					*uParam2 = 111;
					*uParam3 = 33;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 15:
					*uParam2 = 1;
					*uParam3 = 158;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				default:
					*uParam2 = 0;
					*uParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 0;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
			}
			break;
		case joaat("swift2"):
			switch (iVar0)
			{
				case 0:
					*uParam2 = 111;
					*uParam3 = 77;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 1:
					*uParam2 = 111;
					*uParam3 = 63;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 2:
					*uParam2 = 111;
					*uParam3 = 73;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 3:
					*uParam2 = 23;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 4:
					*uParam2 = 9;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 5:
					*uParam2 = 2;
					*uParam3 = 45;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 6:
					*uParam2 = 2;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 7:
					*uParam2 = 111;
					*uParam3 = 2;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 8:
					*uParam2 = 111;
					*uParam3 = 138;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 9:
					*uParam2 = 2;
					*uParam3 = 18;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 10:
					*uParam2 = 111;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 11:
					*uParam2 = 111;
					*uParam3 = 31;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 12:
					*uParam2 = 121;
					*uParam3 = 77;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 13:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 14:
					*uParam2 = 111;
					*uParam3 = 33;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 15:
					*uParam2 = 1;
					*uParam3 = 158;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				default:
					*uParam2 = 0;
					*uParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 0;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
			}
			break;
		case joaat("supervolito2"):
			switch (iVar0)
			{
				case 0:
					*uParam2 = 111;
					*uParam3 = 77;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 1:
					*uParam2 = 111;
					*uParam3 = 63;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 2:
					*uParam2 = 111;
					*uParam3 = 73;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 3:
					*uParam2 = 23;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 4:
					*uParam2 = 9;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 5:
					*uParam2 = 2;
					*uParam3 = 45;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 6:
					*uParam2 = 2;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 7:
					*uParam2 = 111;
					*uParam3 = 2;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 8:
					*uParam2 = 111;
					*uParam3 = 138;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 9:
					*uParam2 = 2;
					*uParam3 = 18;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 10:
					*uParam2 = 111;
					*uParam3 = 8;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 11:
					*uParam2 = 111;
					*uParam3 = 31;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 12:
					*uParam2 = 121;
					*uParam3 = 77;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 13:
					*uParam2 = 111;
					*uParam3 = 111;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 14:
					*uParam2 = 111;
					*uParam3 = 33;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				case 15:
					*uParam2 = 1;
					*uParam3 = 158;
					*uParam4 = 7;
					*uParam5 = 111;
					*uParam6 = 111;
					*uParam7 = 111;
					break;
				default:
					*uParam2 = 0;
					*uParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 0;
					*uParam6 = 0;
					*uParam7 = 0;
					break;
			}
			break;
	}
}

bool func_253()//Position - 0xAB81D
{
	return Global_262145.f_13108 /* Tunable: YACHT_DISABLE_DEFENSES */;
}

int func_254(bool bParam0, bool bParam1)//Position - 0xABF83
{
	if (BitTest(Global_2689235[bParam0 /*453*/].f_389, bParam1) || BitTest(Global_2689235[bParam1 /*453*/].f_389, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_255(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0xABFB7
{
	struct<9> Var0;
	Var0.f_0 = -714268990;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = bParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

Vector3 func_256(int iParam0)//Position - 0xAD229
{
	return Global_4280768[iParam0 /*45*/].f_12;
}

void func_257(int iParam0, int iParam1)//Position - 0xAD282
{
	Global_2824571.f_2[iParam0] = iParam1;
}

int func_258(int iParam0)//Position - 0xAE6D4
{
	if (__LIB_1__.func_330(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(__LIB_2__.func_2(iParam0)), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
		}
	}
	return 0;
}

int func_259(int iParam0, int iParam1)//Position - 0xAF654
{
	if (!STREAMING::IS_MODEL_VALID(iParam1) || iParam1 == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) && BitTest(Global_4718592.f_174915[iParam0 /*24*/].f_17, 2))
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam1) && BitTest(Global_4718592.f_174915[iParam0 /*24*/].f_17, 3))
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam1) && BitTest(Global_4718592.f_174915[iParam0 /*24*/].f_17, 4))
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)//Position - 0xAF6DE
{
	return Global_4282659[iParam0 /*10*/].f_5;
}

void func_261()//Position - 0xAFC15
{
	Global_4282659[0 /*10*/] = { -0.2508f, -32.3f, 0.8727f };
	Global_4282659[0 /*10*/].f_3 = 0f;
	Global_4282659[0 /*10*/].f_5 = joaat("supervolito2");
	Global_4282659[0 /*10*/].f_4 = 3.5f;
	Global_4282659[0 /*10*/].f_7 = 300000;
	Global_4282659[0 /*10*/].f_8 = -1;
	Global_4282659[0 /*10*/].f_9 = 400f;
	Global_4282659[0 /*10*/].f_6 = 64;
	Global_4282659[1 /*10*/] = { 11.25f, -55.8404f, -11f };
	Global_4282659[1 /*10*/].f_3 = 340.8939f;
	Global_4282659[1 /*10*/].f_5 = joaat("dinghy4");
	Global_4282659[1 /*10*/].f_4 = 2.4f;
	Global_4282659[1 /*10*/].f_9 = 300f;
	Global_4282659[1 /*10*/].f_6 = 1;
	Global_4282659[2 /*10*/] = { 6.75f, -63f, -11f };
	Global_4282659[2 /*10*/].f_3 = 206.26f;
	Global_4282659[2 /*10*/].f_5 = joaat("seashark3");
	Global_4282659[2 /*10*/].f_4 = 1.4f;
	Global_4282659[2 /*10*/].f_9 = 200f;
	Global_4282659[2 /*10*/].f_6 = 1;
	Global_4282659[3 /*10*/] = { 4.5f, -63f, -11f };
	Global_4282659[3 /*10*/].f_3 = 206.26f;
	Global_4282659[3 /*10*/].f_5 = joaat("seashark3");
	Global_4282659[3 /*10*/].f_4 = 1.4f;
	Global_4282659[3 /*10*/].f_9 = 200f;
	Global_4282659[3 /*10*/].f_6 = 1;
	Global_4282659[4 /*10*/] = { -11.25f, -55.8404f, -11f };
	Global_4282659[4 /*10*/].f_3 = 20f;
	Global_4282659[4 /*10*/].f_5 = joaat("toro2");
	Global_4282659[4 /*10*/].f_4 = 2.4f;
	Global_4282659[4 /*10*/].f_9 = 300f;
	Global_4282659[4 /*10*/].f_6 = 1;
	Global_4282659[5 /*10*/] = { -4.5f, -63f, -11f };
	Global_4282659[5 /*10*/].f_3 = 153.7463f;
	Global_4282659[5 /*10*/].f_5 = joaat("seashark3");
	Global_4282659[5 /*10*/].f_4 = 1.4f;
	Global_4282659[5 /*10*/].f_9 = 200f;
	Global_4282659[5 /*10*/].f_6 = 1;
	Global_4282659[6 /*10*/] = { -6.75f, -63f, -11f };
	Global_4282659[6 /*10*/].f_3 = 153.7463f;
	Global_4282659[6 /*10*/].f_5 = joaat("seashark3");
	Global_4282659[6 /*10*/].f_4 = 1.4f;
	Global_4282659[6 /*10*/].f_9 = 200f;
	Global_4282659[6 /*10*/].f_6 = 1;
	Global_4282730[0 /*5*/] = { Global_4282659[1 /*10*/] };
	Global_4282730[0 /*5*/].f_3 = Global_4282659[1 /*10*/].f_3;
	Global_4282730[0 /*5*/].f_4 = Global_4282659[1 /*10*/].f_4;
	Global_4282730[1 /*5*/] = { Global_4282659[2 /*10*/] };
	Global_4282730[1 /*5*/].f_3 = Global_4282659[2 /*10*/].f_3;
	Global_4282730[1 /*5*/].f_4 = Global_4282659[2 /*10*/].f_4;
	Global_4282730[2 /*5*/] = { Global_4282659[3 /*10*/] };
	Global_4282730[2 /*5*/].f_3 = Global_4282659[3 /*10*/].f_3;
	Global_4282730[2 /*5*/].f_4 = Global_4282659[3 /*10*/].f_4;
	Global_4282730[3 /*5*/] = { Global_4282659[4 /*10*/] };
	Global_4282730[3 /*5*/].f_3 = Global_4282659[4 /*10*/].f_3;
	Global_4282730[3 /*5*/].f_4 = Global_4282659[4 /*10*/].f_4;
	Global_4282730[4 /*5*/] = { Global_4282659[5 /*10*/] };
	Global_4282730[4 /*5*/].f_3 = Global_4282659[5 /*10*/].f_3;
	Global_4282730[4 /*5*/].f_4 = Global_4282659[5 /*10*/].f_4;
	Global_4282730[5 /*5*/] = { Global_4282659[6 /*10*/] };
	Global_4282730[5 /*5*/].f_3 = Global_4282659[6 /*10*/].f_3;
	Global_4282730[5 /*5*/].f_4 = Global_4282659[6 /*10*/].f_4;
	Global_4282730[6 /*5*/] = { 0f, -63f, -11.9254f };
	Global_4282730[6 /*5*/].f_3 = 180.2068f;
	Global_4282730[6 /*5*/].f_4 = 2.4f;
}

void func_262()//Position - 0xB0E72
{
	if (Global_2703735.f_3307.f_72 > 0)
	{
		STATS::PLAYSTATS_ROS_BET(Global_2703735.f_3307.f_72, Global_4718592, PLAYER::PLAYER_ID(), (Global_262145.f_105 /* Tunable: BOOKIE_RAKE */ * 0.01f));
	}
}

int func_263()//Position - 0xB3932
{
	return Global_2703735.f_3307;
}

int func_264(int iParam0)//Position - 0xB5F75
{
	switch (iParam0)
	{
		case 0:
			return __LIB_12__.func_462();
		case 1:
			return __LIB_12__.func_461();
		case 2:
			return __LIB_12__.func_460();
		case 3:
			return __LIB_12__.func_459();
		case 4:
			return __LIB_4__.func_663();
		default:
	}
	return 0;
}

int func_265(int iParam0)//Position - 0xB7AB1
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[__LIB_1__.func_443(-1)];
			}
			else if (__LIB_22__.func_841(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[__LIB_1__.func_443(-1)];
	}
	return 0;
}

void func_266(int iParam0)//Position - 0xBAC06
{
	Global_2788199.f_499 = iParam0;
}

int func_267(int iParam0)//Position - 0xBACC2
{
	switch (iParam0)
	{
		case 0:
			return 26911;
		case 1:
			return 26912;
		case 2:
			return 26913;
		case 3:
			return 26914;
		case 4:
			return 26915;
		case 5:
			return 26916;
		case 6:
			return 26917;
		case 7:
			return 26918;
		case 8:
			return 26919;
		case 9:
			return 26920;
		case 10:
			return 26921;
		case 11:
			return 26922;
		case 12:
			return 26923;
		case 13:
			return 26924;
		case 14:
			return 26925;
		case 15:
			return 26926;
		case 16:
			return 26927;
		case 17:
			return 26928;
		case 18:
			return 26929;
		case 19:
			return 26930;
		case 20:
			return 26931;
		case 21:
			return 26932;
		case 22:
			return 26933;
		case 23:
			return 26934;
		case 24:
			return 26935;
		case 25:
			return 26936;
		case 26:
			return 26937;
		case 27:
			return 26938;
		case 28:
			return 26939;
		case 29:
			return 26940;
		case 30:
			return 26941;
		case 31:
			return 26942;
		case 32:
			return 26943;
		case 33:
			return 26944;
		case 34:
			return 26945;
		case 35:
			return 26946;
		case 36:
			return 26947;
		case 37:
			return 26948;
		case 38:
			return 26949;
		case 39:
			return 26950;
		case 40:
			return 26951;
		case 41:
			return 26952;
		case 42:
			return 26953;
		case 43:
			return 26954;
		case 44:
			return 26955;
		case 45:
			return 26956;
		case 46:
			return 26957;
		case 47:
			return 26958;
		case 48:
			return 26959;
		case 49:
			return 26960;
		case 50:
			return 26961;
		case 51:
			return 26962;
		case 52:
			return 26963;
		case 53:
			return 26964;
		default:
	}
	return 26964;
}

int func_268(int iParam0)//Position - 0xBAF9E
{
	switch (iParam0)
	{
		case 0:
			return 26811;
		case 1:
			return 26812;
		case 2:
			return 26813;
		case 3:
			return 26814;
		case 4:
			return 26815;
		case 5:
			return 26816;
		case 6:
			return 26817;
		case 7:
			return 26818;
		case 8:
			return 26819;
		case 9:
			return 26820;
		case 10:
			return 26821;
		case 11:
			return 26822;
		case 12:
			return 26823;
		case 13:
			return 26824;
		case 14:
			return 26825;
		case 15:
			return 26826;
		case 16:
			return 26827;
		case 17:
			return 26828;
		case 18:
			return 26829;
		case 19:
			return 26830;
		case 20:
			return 26831;
		case 21:
			return 26832;
		case 22:
			return 26833;
		case 23:
			return 26834;
		case 24:
			return 26835;
		case 25:
			return 26836;
		case 26:
			return 26837;
		case 27:
			return 26838;
		case 28:
			return 26839;
		case 29:
			return 26840;
		case 30:
			return 26841;
		case 31:
			return 26842;
		case 32:
			return 26843;
		case 33:
			return 26844;
		case 34:
			return 26845;
		case 35:
			return 26846;
		case 36:
			return 26847;
		case 37:
			return 26848;
		case 38:
			return 26849;
		case 39:
			return 26850;
		case 40:
			return 26851;
		case 41:
			return 26852;
		case 42:
			return 26853;
		case 43:
			return 26854;
		case 44:
			return 26855;
		case 45:
			return 26856;
		case 46:
			return 26857;
		case 47:
			return 26858;
		case 48:
			return 26859;
		case 49:
			return 26860;
		case 50:
			return 26861;
		case 51:
			return 26862;
		case 52:
			return 26863;
		case 53:
			return 26864;
		case 54:
			return 26865;
		case 55:
			return 26866;
		case 56:
			return 26867;
		case 57:
			return 26868;
		case 58:
			return 26869;
		case 59:
			return 26870;
		case 60:
			return 26871;
		case 61:
			return 26872;
		case 62:
			return 26873;
		case 63:
			return 26874;
		case 64:
			return 26875;
		case 65:
			return 26876;
		case 66:
			return 26877;
		case 67:
			return 26878;
		case 68:
			return 26879;
		case 69:
			return 26880;
		case 70:
			return 26881;
		case 71:
			return 26882;
		case 72:
			return 26883;
		case 73:
			return 26884;
		case 74:
			return 26885;
		case 75:
			return 26886;
		case 76:
			return 26887;
		case 77:
			return 26888;
		case 78:
			return 26889;
		case 79:
			return 26890;
		case 80:
			return 26891;
		case 81:
			return 26892;
		case 82:
			return 26893;
		case 83:
			return 26894;
		case 84:
			return 26895;
		case 85:
			return 26896;
		case 86:
			return 26897;
		case 87:
			return 26898;
		case 88:
			return 26899;
		case 89:
			return 26900;
		case 90:
			return 26901;
		case 91:
			return 26902;
		case 92:
			return 26903;
		case 93:
			return 26904;
		case 94:
			return 26905;
		case 95:
			return 26906;
		case 96:
			return 26907;
		case 97:
			return 26908;
		case 98:
			return 26909;
		case 99:
			return 26910;
		default:
	}
	return 26811;
}

char* func_269()//Position - 0xBCCB6
{
	return "digiscanner";
}

char* func_270()//Position - 0xBCCC2
{
	return "digiscanner_reh";
}

int func_271(bool bParam0, int iParam1)//Position - 0xF023D
{
	if (Global_1892703[bParam0 /*599*/].f_10.f_32 != -1 || (iParam1 && Global_1892703[bParam0 /*599*/].f_10.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_272(bool bParam0)//Position - 0x1E6694
{
	Global_2788199.f_500 = HUD::ADD_BLIP_FOR_COORD(-1007.973f, -487.1707f, 38.9745f);
	HUD::SET_BLIP_SPRITE(Global_2788199.f_500, 790);
	HUD::SET_BLIP_COLOUR(Global_2788199.f_500, 5);
	HUD::SET_BLIP_PRIORITY(Global_2788199.f_500, 11);
	if (bParam0)
	{
		HUD::SET_BLIP_FLASH_TIMER(Global_2788199.f_500, 10000);
	}
}

int func_273(bool bParam0)//Position - 0x1E9FB8
{
	if (__LIB_3__.func_803(bParam0) == 264)
	{
		return __LIB_2__.func_234(bParam0);
	}
	return -1;
}

int func_274(bool bParam0, int iParam1)//Position - 0x1E9FD6
{
	if (__LIB_3__.func_803(bParam0) == iParam1)
	{
		return __LIB_2__.func_234(bParam0);
	}
	return -1;
}

int func_275(int iParam0, int iParam1)//Position - 0x20239C
{
	int iVar0;
	if (__LIB_0__.func_3() != 0)
	{
		return 0;
	}
	if (!__LIB_22__.func_841(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853348[iVar0 /*834*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_276(int iParam0)//Position - 0x212A40
{
	Global_1931437 = iParam0;
}

Vector3 func_277(int iParam0)//Position - 0x22CC95
{
	switch (iParam0)
	{
		case 0:
			return 171.4769f, -1925.5862f, 20.156f;
		case 1:
			return -234.541f, -1516.663f, 31.296f;
		case 2:
			return -213.5869f, 6455.2397f, 30.329f;
		case 3:
			return 327.064f, 6430.808f, 30.097f;
		case 4:
			return 2268.018f, 4597.53f, 34.175f;
		case 5:
			return 3102.362f, 6034.412f, 122.219f;
		case 6:
			return -35.2434f, 2868.4004f, 58.4023f;
		case 7:
			return 1733.005f, 3850.126f, 33.874f;
		case 8:
			return 340.023f, 3565.621f, 32.491f;
		case 9:
			return -1858.733f, 4806.635f, 1.969f;
		case 10:
			return 490.588f, 5530.081f, 777.292f;
		case 11:
			return -2792.443f, 1432.48f, 99.968f;
		case 12:
			return -2999.09f, 769.195f, 26.167f;
		case 13:
			return -855.473f, 572.053f, 95.69f;
		case 14:
			return 1021.663f, 2910.82f, 39.645f;
		case 15:
			return -3078.123f, 3202.819f, 1.319f;
		case 16:
			return -1557.408f, 2581.642f, -0.078f;
		case 17:
			return 2578.658f, 5548.083f, 59.436f;
		case 18:
			return 2573.032f, 1250.679f, 42.545f;
		case 19:
			return -922.265f, 4583.207f, 230.673f;
		case 20:
			return 2820.144f, -759.318f, 1.471f;
		case 21:
			return 2385.41f, 3335.046f, 46.401f;
		case 22:
			return -1275.095f, 1895.234f, 101.362f;
		case 23:
			return 1545.851f, 1685.537f, 108.875f;
		case 24:
			return 727.608f, -235.347f, 65.276f;
		case 25:
			return -111.254f, -413.31f, 34.65f;
		case 26:
			return -1881.692f, -607.578f, 14.588f;
		case 27:
			return 1071.716f, -686.215f, 56.692f;
		case 28:
			return 2066.84f, 1940.29f, 81.791f;
		case 29:
			return 1614.594f, 6611.073f, 14.617f;
		case 30:
			return -1179.712f, 3854.412f, 488.493f;
		case 31:
			return 2940.191f, 2745.018f, 42.231f;
		case 32:
			return 1288.918f, -1059.638f, 38.242f;
		case 33:
			return -1678.225f, 357.721f, 83.711f;
		case 34:
			return -778.6017f, 117.243f, 55.456f;
		case 35:
			return -794.2935f, -727.5123f, 26.418f;
		case 36:
			return 330.147f, 440.902f, 144.37f;
		case 37:
			return -1314.857f, -424.843f, 34.462f;
		case 38:
			return 224.4638f, 49.089f, 83.1668f;
		case 39:
			return 1276.405f, -1720.52f, 53.795f;
		case 40:
			return -960.924f, -2034.23f, 8.524f;
		case 41:
			return -838.726f, -1216.943f, 5.902f;
		case 42:
			return 2029.5846f, 498.1133f, 163.1716f;
		case 43:
			return 2764.432f, -1600.286f, 0.865f;
		case 44:
			return 1498.68f, -2722.499f, 1.933f;
		case 45:
			return 217.1979f, -980.8727f, 28.7917f;
		case 46:
			return 686.64f, -1109.484f, 21.477f;
		case 47:
			return -220.848f, 1006.557f, 231.478f;
		case 48:
			return 493.725f, 1439.799f, 350.758f;
		case 49:
			return -995.688f, 6258.749f, 1.433f;
		case 50:
			return -2871.632f, 2605.2683f, -10.2517f;
		case 51:
			return 56.2666f, 7365.265f, -5.357f;
		case 52:
			return -2861.1204f, 3900.557f, -33.818f;
		case 53:
			return -1588.6914f, 5312.9844f, -5.1802f;
		case 54:
			return 475.3864f, 6946.059f, -7.333f;
		case 55:
			return 2453.2576f, 6692.051f, -14.2188f;
		case 56:
			return 4235.6206f, 4105.97f, -31.4225f;
		case 57:
			return -138.1969f, 4060.7036f, 26.1655f;
		case 58:
			return 3395.229f, 2252.5095f, -14.6511f;
		case 59:
			return 2946.109f, 812.0292f, -11.0387f;
		case 60:
			return 3194.6438f, -356.9405f, -33.105f;
		case 61:
			return -1745.945f, -1277.3726f, -19.8266f;
		case 62:
			return -3320.8806f, 1335.2634f, -17.2728f;
		case 63:
			return 2183.961f, -2714.1033f, -29.2357f;
		case 64:
			return -169.7448f, -2890.4065f, -24.8927f;
		case 65:
			return -164.6574f, -2309.2812f, -29.0637f;
		case 66:
			return 618.835f, -2192.5525f, -8.5744f;
		case 67:
			return 649.5286f, -3232.5737f, -16.81f;
		case 68:
			return -3078.0183f, -104.2799f, -18.3237f;
		case 69:
			return -2205.0056f, -681.4622f, -10.409f;
		case 70:
			return 825.2657f, -2790.5657f, -22.1959f;
		case 71:
			return 3415.271f, 5253.468f, -12.1134f;
		case 72:
			return 1219.1924f, 4119.4785f, 13.7925f;
		case 73:
			return -1014.5877f, -1707.1688f, -9.2745f;
		case 74:
			return 1674.9827f, 5141.8975f, 149.6046f;
		case 75:
			return -21.0273f, -1424.1678f, 29.7078f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_278(int iParam0)//Position - 0x22F323
{
	var uVar0;
	if (__LIB_1__.func_330(iParam0))
	{
		if (__LIB_2__.func_57(iParam0))
		{
			uVar0 = Global_2683918.f_97[iParam0 /*33*/].f_32;
			return uVar0;
		}
	}
	return 0;
}

int func_279(int iParam0)//Position - 0x235B50
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 1:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_alien");
		case 2:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_alien");
		case 3:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_alien");
		case 4:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_alien");
		case 5:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_alien");
		case 6:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_alien");
		case 7:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_alien");
		case 8:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_alien");
		case 9:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 10:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 11:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 12:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 13:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 14:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 15:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 16:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 17:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 18:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 19:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 20:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 21:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 22:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 23:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 24:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 25:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 26:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_imporage");
		case 27:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 28:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 29:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 30:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 31:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 32:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 33:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 34:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 35:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 36:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 37:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 38:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 39:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 40:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 41:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 42:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 43:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 44:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_prbubble");
		case 45:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 46:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 47:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 48:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 49:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 50:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 51:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 52:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 53:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 54:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 55:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 56:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 57:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 58:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 59:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 60:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 61:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_pogo");
		case 62:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 63:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 64:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 65:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 66:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 67:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 68:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 69:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 70:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 71:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 72:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 73:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 74:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 75:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 76:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 77:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 78:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 79:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrcomm");
		case 80:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 81:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 82:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 83:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 84:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 85:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 86:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 87:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 88:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 89:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 90:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 91:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 92:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 93:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 94:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 95:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 96:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 97:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_rsrgeneric");
		case 98:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_beast");
		case 99:
			return MISC::GET_HASH_KEY("vw_prop_vw_colle_sasquatch");
		default:
	}
	return joaat("bkr_prop_coke_boxeddoll");
}

int func_280(int iParam0)//Position - 0x242FF4
{
	if (__LIB_14__.func_106(iParam0))
	{
		if (*iParam0 >= 382 && *iParam0 <= 401)
		{
			return 23;
		}
		if (*iParam0 >= 402 && *iParam0 <= 431)
		{
			return 20;
		}
		if (*iParam0 >= 432 && *iParam0 <= 491)
		{
			return 15;
		}
		if (*iParam0 >= 492 && *iParam0 <= 521)
		{
			return 24;
		}
		if (*iParam0 >= 522 && *iParam0 <= 551)
		{
			return 21;
		}
		if (*iParam0 >= 552 && *iParam0 <= 584)
		{
			return 22;
		}
		if (*iParam0 >= 585 && *iParam0 <= 614)
		{
			return 16;
		}
		if (*iParam0 >= 615 && *iParam0 <= 644)
		{
			return 17;
		}
		if (*iParam0 >= 645 && *iParam0 <= 674)
		{
			return 25;
		}
	}
	return -1;
}

int func_281(int iParam0)//Position - 0x247719
{
	if (__LIB_14__.func_108(iParam0))
	{
		if (*iParam0 >= 12 && *iParam0 <= 71)
		{
			return 17;
		}
		if (*iParam0 >= 72 && *iParam0 <= 91)
		{
			return 15;
		}
		if (*iParam0 >= 92 && *iParam0 <= 156)
		{
			return 14;
		}
		if (*iParam0 >= 157 && *iParam0 <= 256)
		{
			return 16;
		}
		if (*iParam0 >= 257 && *iParam0 <= 356)
		{
			return 19;
		}
		if (*iParam0 >= 357 && *iParam0 <= 376)
		{
			return 18;
		}
	}
	return -1;
}

int func_282(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2491ED
{
	switch (iParam0)
	{
		case 409:
			*uParam1 = { -2267.0264f, 402.22568f, 183.66704f };
			*uParam2 = { -2257.7244f, 380.6196f, 267.60236f };
			*uParam3 = 20f;
			return 1;
		case 410:
			*uParam1 = { -757.32635f, -192.94748f, 43.208218f };
			*uParam2 = { -745.31683f, -213.00967f, 128.11855f };
			*uParam3 = 18f;
			return 1;
		case 413:
			*uParam1 = { -410.7763f, -319.03003f, 70.803314f };
			*uParam2 = { -380.264f, -340.9736f, 155.80331f };
			*uParam3 = 16f;
			return 1;
		case 421:
			*uParam1 = { 740.6537f, 1287.0071f, 353.29666f };
			*uParam2 = { 716.8173f, 1286.3627f, 439.296f };
			*uParam3 = 30f;
			return 1;
		case 430:
			*uParam1 = { -2595.0645f, 1927.0411f, 167.04633f };
			*uParam2 = { -2589.6262f, 1882.4998f, 250.49268f };
			*uParam3 = 22f;
			return 1;
		default:
	}
	return 0;
}

int func_283(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x24948A
{
	if (bParam4)
	{
		switch (iParam0)
		{
			case 675:
				*uParam1 = { 1297.2286f, 2854.6675f, 46.222424f };
				*uParam2 = { 1277.3792f, 2838.311f, 54.347424f };
				*uParam3 = 14.75f;
				return 1;
			case 676:
				*uParam1 = { 7.976243f, 2604.159f, 82.82843f };
				*uParam2 = { 30.077522f, 2618.2488f, 90.95343f };
				*uParam3 = 14.75f;
				return 1;
			case 677:
				*uParam1 = { 2777.815f, 3928.6045f, 42.660427f };
				*uParam2 = { 2759.6677f, 3910.7578f, 50.785427f };
				*uParam3 = 14.75f;
				return 1;
			case 678:
				*uParam1 = { 3419.642f, 5501.849f, 23.106426f };
				*uParam2 = { 3394.699f, 5507.827f, 31.231426f };
				*uParam3 = 14.75f;
				return 1;
			case 679:
				*uParam1 = { -9.453247f, 6836.3047f, 12.645426f };
				*uParam2 = { 14.476137f, 6827.5225f, 20.770426f };
				*uParam3 = 14.75f;
				return 1;
			case 680:
				*uParam1 = { -2232.3665f, 2430.4856f, 9.009426f };
				*uParam2 = { -2230.1323f, 2405.009f, 17.134426f };
				*uParam3 = 14.75f;
				return 1;
			case 681:
				*uParam1 = { -9.857053f, 3314.3345f, 38.459427f };
				*uParam2 = { -4.230778f, 3339.4604f, 46.584427f };
				*uParam3 = 14.75f;
				return 1;
			case 682:
				*uParam1 = { 2064.1958f, 1738.9713f, 101.34242f };
				*uParam2 = { 2082.4482f, 1757.6411f, 109.46743f };
				*uParam3 = 14.75f;
				return 1;
			case 683:
				*uParam1 = { 1881.3813f, 295.3014f, 161.13342f };
				*uParam2 = { 1867.7048f, 273.57565f, 169.25842f };
				*uParam3 = 14.75f;
				return 1;
			default:
		}
		return 0;
	}
	switch (iParam0)
	{
		case 675:
			*uParam1 = { 1273.6775f, 2835.7322f, 44.847424f };
			*uParam2 = { 1262.8866f, 2827.3574f, 55.80887f };
			*uParam3 = 17.125f;
			return 1;
		case 676:
			*uParam1 = { 32.718624f, 2620.0369f, 81.45343f };
			*uParam2 = { 43.606667f, 2626.6187f, 90.93901f };
			*uParam3 = 17.125f;
			return 1;
		case 677:
			*uParam1 = { 2757.3706f, 3908.7166f, 41.285427f };
			*uParam2 = { 2749.0642f, 3901.2454f, 51.935905f };
			*uParam3 = 17.125f;
			return 1;
		case 678:
			*uParam1 = { 3392.2385f, 5508.4644f, 21.731428f };
			*uParam2 = { 3380.6125f, 5511.0874f, 31.091427f };
			*uParam3 = 17.125f;
			return 1;
		case 679:
			*uParam1 = { 17.183691f, 6826.0957f, 11.270427f };
			*uParam2 = { 28.891647f, 6822.171f, 22.877625f };
			*uParam3 = 17.125f;
			return 1;
		case 680:
			*uParam1 = { -2229.6096f, 2401.256f, 7.634426f };
			*uParam2 = { -2229.282f, 2387.3977f, 21.650341f };
			*uParam3 = 17.125f;
			return 1;
		case 681:
			*uParam1 = { -3.066728f, 3343.304f, 37.084427f };
			*uParam2 = { 1.22503f, 3357.9656f, 47.80353f };
			*uParam3 = 17.125f;
			return 1;
		case 682:
			*uParam1 = { 2084.432f, 1759.6304f, 99.96742f };
			*uParam2 = { 2092.5952f, 1767.4336f, 110.46602f };
			*uParam3 = 17.125f;
			return 1;
		case 683:
			*uParam1 = { 1866.0016f, 271.21497f, 159.75842f };
			*uParam2 = { 1859.3286f, 260.6256f, 171.21489f };
			*uParam3 = 17.125f;
			return 1;
		default:
	}
	return 0;
}

Vector3 func_284(int iParam0)//Position - 0x24990C
{
	switch (iParam0)
	{
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 882:
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 0.5f, 0.5f, 1f;
			}
			break;
		case 761:
		case 762:
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 3f, 3f, 4.5f;
			}
			break;
		case 763:
			return 100f, 100f, 200f;
			break;
		case 756:
			return 1f, 1f, 2f;
			break;
		case 771:
		case 772:
			return 1f, 1f, 2f;
			break;
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
			return 1f, 1f, 2f;
			break;
	}
	return 1f, 1f, 1f;
}

Vector3 func_285()//Position - 0x249A34
{
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0.5f, 0.5f, 1f;
	}
	return 1f, 1f, 1f;
}

Vector3 func_286(int iParam0)//Position - 0x249A7C
{
	struct<3> Var0;
	Var0 = { 1f, 1f, 1f };
	return Var0;
}

Vector3 func_287(int iParam0)//Position - 0x249A8F
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 8:
			Var0 = { 1f, 1f, 3f };
			break;
		case 14:
			Var0 = { 2.5f, 2.5f, 4f };
			break;
		case 18:
			Var0 = { 2f, 2f, 4f };
			break;
		case 15:
			Var0 = { 2.2f, 2.2f, 4f };
			break;
		case 17:
			Var0 = { 0.75f, 0.75f, 4f };
			break;
		case 19:
			Var0 = { 2f, 2f, 4f };
			break;
		case 16:
			Var0 = { 2f, 2f, 4f };
			break;
		default:
			Var0 = { 1f, 1f, 1f };
			break;
	}
	return Var0;
}

int func_288(bool bParam0)//Position - 0x24A500
{
	if (__LIB_2__.func_296(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 8);
}

int func_289(int iParam0)//Position - 0x24BD4D
{
	switch (iParam0)
	{
		case 36:
			return 1;
		case 37:
			return 2;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 5;
		case 41:
			return 6;
		case 42:
			return 7;
		case 43:
			return 8;
		case 44:
			return 9;
		case 45:
			return 10;
		default:
	}
	return 0;
}

int func_290(int iParam0)//Position - 0x24C402
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
			return 1;
		default:
	}
	return 0;
}

int func_291(int iParam0)//Position - 0x24C428
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 1;
		default:
	}
	return 0;
}

bool func_292()//Position - 0x24C814
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("gb_ie_delivery_cutscene")) > 0;
}

void func_293(int iParam0, var uParam1, var uParam2)//Position - 0x24DB65
{
	struct<4> Var0;
	Var0.f_0 = -1373106115;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam0);
	}
}

void func_294(int iParam0)//Position - 0x24E562
{
	if (!__LIB_2__.func_748(iParam0))
	{
		return;
	}
	__LIB_9__.func_158(0, iParam0);
	__LIB_9__.func_158(1, iParam0);
	__LIB_9__.func_158(2, iParam0);
	__LIB_9__.func_158(3, iParam0);
	__LIB_9__.func_158(4, iParam0);
	__LIB_9__.func_158(10, iParam0);
	Global_1946250.f_2624[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1946250.f_3102[iParam0] = 0f;
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_15 == iParam0)
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_15 = -1;
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 2);
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 1);
	}
	if (BitTest(Global_1946250.f_1, 22))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 22);
	}
	MISC::CLEAR_BIT(&(Global_1946250.f_6), 9);
}

bool func_295()//Position - 0x24EB58
{
	return BitTest(Global_1946250.f_2, 3);
}

bool func_296()//Position - 0x24EB68
{
	return BitTest(Global_1946250.f_2, 4);
}

bool func_297()//Position - 0x24EB78
{
	return BitTest(Global_1946250, 30);
}

bool func_298()//Position - 0x24EB87
{
	return BitTest(Global_1946250, 31);
}

float func_299(float fParam0)//Position - 0x24FDFF
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

bool func_300()//Position - 0x24FF24
{
	return BitTest(Global_1958711, 21);
}

int func_301(bool bParam0)//Position - 0x251C15
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		return Global_1946250.f_4596[iVar0 /*3*/].f_1 == MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(bParam0));
	}
	return 0;
}

int func_302(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2522DE
{
	switch (iParam0)
	{
		case 21:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 998.02893f, -3202.4429f, -38.86309f };
					*uParam3 = { 998.0486f, -3196.208f, -35.64316f };
					*uParam4 = 3.5f;
					*uParam5 = 0f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_303(struct<3> Param0, float fParam1, var uParam2)//Position - 0x252380
{
	struct<3> Var0;
	int iVar1;
	Var0 = { Param0 + Vector(uParam2, 0f, 0f) };
	iVar1 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Var0, fParam1, 7, 0, 0);
	if (iVar1 != 0)
	{
	}
	return iVar1;
}

int func_304(struct<3> Param0, float fParam1, float fParam2)//Position - 0x2523B3
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	Var4 = { Param0 };
	Var4.f_2 = 0f;
	fVar5 = (fParam1 * fParam1);
	iVar0 = 0;
	while (iVar0 < __LIB_1__.func_527())
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__.func_264(bVar1, 1, 1))
		{
			Var2 = { __LIB_1__.func_265(bVar1) };
			Var3 = { Var2 };
			Var3.f_2 = 0f;
			if (SYSTEM::VDIST2(Var3, Var4) < fVar5)
			{
				if (Var2.f_2 >= (Param0.f_2 - fParam1) && Var2.f_2 < ((Param0.f_2 + fParam2) + fParam1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_305(var uParam0)//Position - 0x25267B
{
	return __LIB_2__.func_406(uParam0->f_7);
}

void func_306(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x25287C
{
	var uVar0;
	var uVar1;
	uVar0 = (*uParam0)[iParam2];
	(*uParam0)[iParam2] = (*uParam0)[iParam3];
	(*uParam0)[iParam3] = uVar0;
	uVar1 = (*uParam1)[iParam2];
	(*uParam1)[iParam2] = (*uParam1)[iParam3];
	(*uParam1)[iParam3] = uVar1;
}

struct<24> func_307(int iParam0)//Position - 0x2528BC
{
	struct<24> Var0;
	Var0.f_10 = 8;
	Var0.f_20 = 1069547520;
	switch (iParam0)
	{
		case 0:
			Var0 = { 51.7513f, 6339.846f, 31.2258f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.81f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.71f;
			Var0.f_7 = 29.16f;
			Var0.f_8 = 13;
			Var0.f_9 = 9;
			Var0.f_10[0] = 0;
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 11);
			MISC::SET_BIT(&(Var0.f_10[3]), 13);
			MISC::SET_BIT(&(Var0.f_10[3]), 15);
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 2:
			Var0 = { 418.4608f, 6520.72f, 27.7201f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.81f;
			Var0.f_5 = 0.13f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 263.52f;
			Var0.f_8 = 15;
			Var0.f_9 = 7;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 13);
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 11);
			MISC::SET_BIT(&(Var0.f_10[2]), 13);
			MISC::SET_BIT(&(Var0.f_10[2]), 14);
			MISC::SET_BIT(&(Var0.f_10[2]), 15);
			MISC::SET_BIT(&(Var0.f_10[2]), 16);
			MISC::SET_BIT(&(Var0.f_10[2]), 26);
			MISC::SET_BIT(&(Var0.f_10[2]), 27);
			MISC::SET_BIT(&(Var0.f_10[2]), 28);
			MISC::SET_BIT(&(Var0.f_10[2]), 30);
			MISC::SET_BIT(&(Var0.f_10[2]), 31);
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 1);
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 1:
			Var0 = { 52.7514f, 6487.154f, 31.4267f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.42f;
			Var0.f_5 = 0.13f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 314.9f;
			Var0.f_8 = 31;
			Var0.f_9 = 2;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 18);
			MISC::SET_BIT(&(Var0.f_10[0]), 20);
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 23);
			MISC::SET_BIT(&(Var0.f_10[2]), 25);
			MISC::SET_BIT(&(Var0.f_10[2]), 27);
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 4:
			Var0 = { -408.6213f, 6168.991f, 31.4782f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.58f;
			Var0.f_5 = 0.13f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 314.9f;
			Var0.f_8 = 19;
			Var0.f_9 = 5;
			Var0.f_19 = 8;
			Var0.f_10[0] = 0;
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 8);
			MISC::SET_BIT(&(Var0.f_10[2]), 10);
			MISC::SET_BIT(&(Var0.f_10[2]), 25);
			MISC::SET_BIT(&(Var0.f_10[2]), 27);
			MISC::SET_BIT(&(Var0.f_10[2]), 29);
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 3:
			Var0 = { -160.5925f, 6333.8f, 31.5808f };
			Var0.f_3 = 1.47f;
			Var0.f_4 = 16.07f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 316.08f;
			Var0.f_8 = 27;
			Var0.f_9 = 2;
			Var0.f_19 = 4;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 22);
			MISC::SET_BIT(&(Var0.f_10[0]), 24);
			MISC::SET_BIT(&(Var0.f_10[0]), 26);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 1);
			MISC::SET_BIT(&(Var0.f_10[1]), 3);
			MISC::SET_BIT(&(Var0.f_10[1]), 5);
			MISC::SET_BIT(&(Var0.f_10[1]), 7);
			MISC::SET_BIT(&(Var0.f_10[1]), 8);
			MISC::SET_BIT(&(Var0.f_10[1]), 9);
			MISC::SET_BIT(&(Var0.f_10[1]), 10);
			MISC::SET_BIT(&(Var0.f_10[1]), 11);
			MISC::SET_BIT(&(Var0.f_10[1]), 13);
			MISC::SET_BIT(&(Var0.f_10[1]), 15);
			MISC::SET_BIT(&(Var0.f_10[1]), 17);
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 5:
			Var0 = { 1443.526f, -1652.72f, 66.0608f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.83f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 20.88f;
			Var0.f_8 = 18;
			Var0.f_9 = 6;
			Var0.f_19 = 11;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 0);
			MISC::SET_BIT(&(Var0.f_10[0]), 1);
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			MISC::SET_BIT(&(Var0.f_10[0]), 16);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 2);
			MISC::SET_BIT(&(Var0.f_10[1]), 20);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 4);
			MISC::SET_BIT(&(Var0.f_10[2]), 6);
			MISC::SET_BIT(&(Var0.f_10[2]), 15);
			MISC::SET_BIT(&(Var0.f_10[2]), 17);
			MISC::SET_BIT(&(Var0.f_10[2]), 19);
			MISC::SET_BIT(&(Var0.f_10[2]), 21);
			MISC::SET_BIT(&(Var0.f_10[2]), 23);
			MISC::SET_BIT(&(Var0.f_10[2]), 25);
			MISC::SET_BIT(&(Var0.f_10[2]), 31);
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 1);
			MISC::SET_BIT(&(Var0.f_10[3]), 3);
			MISC::SET_BIT(&(Var0.f_10[3]), 5);
			MISC::SET_BIT(&(Var0.f_10[3]), 7);
			MISC::SET_BIT(&(Var0.f_10[3]), 9);
			MISC::SET_BIT(&(Var0.f_10[3]), 11);
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 7:
			Var0 = { 101.7318f, 174.0827f, 104.5913f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.81f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 1f;
			Var0.f_7 = 160.92f;
			Var0.f_8 = 19;
			Var0.f_9 = 7;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 3);
			MISC::SET_BIT(&(Var0.f_10[0]), 4);
			MISC::SET_BIT(&(Var0.f_10[0]), 5);
			MISC::SET_BIT(&(Var0.f_10[0]), 6);
			MISC::SET_BIT(&(Var0.f_10[0]), 7);
			MISC::SET_BIT(&(Var0.f_10[0]), 8);
			MISC::SET_BIT(&(Var0.f_10[0]), 9);
			MISC::SET_BIT(&(Var0.f_10[0]), 10);
			MISC::SET_BIT(&(Var0.f_10[0]), 11);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			MISC::SET_BIT(&(Var0.f_10[0]), 16);
			MISC::SET_BIT(&(Var0.f_10[0]), 18);
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 31);
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 0);
			MISC::SET_BIT(&(Var0.f_10[3]), 1);
			MISC::SET_BIT(&(Var0.f_10[3]), 3);
			MISC::SET_BIT(&(Var0.f_10[3]), 5);
			MISC::SET_BIT(&(Var0.f_10[3]), 7);
			MISC::SET_BIT(&(Var0.f_10[3]), 9);
			MISC::SET_BIT(&(Var0.f_10[3]), 15);
			MISC::SET_BIT(&(Var0.f_10[3]), 17);
			MISC::SET_BIT(&(Var0.f_10[3]), 19);
			Var0.f_10[4] = 0;
			MISC::SET_BIT(&(Var0.f_10[4]), 2);
			MISC::SET_BIT(&(Var0.f_10[4]), 4);
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 6:
			Var0 = { -1461.5582f, -382.7768f, 38.7483f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.69f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 225.72f;
			Var0.f_8 = 20;
			Var0.f_9 = 5;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			MISC::SET_BIT(&(Var0.f_10[0]), 16);
			MISC::SET_BIT(&(Var0.f_10[0]), 18);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 2);
			MISC::SET_BIT(&(Var0.f_10[1]), 4);
			MISC::SET_BIT(&(Var0.f_10[1]), 6);
			MISC::SET_BIT(&(Var0.f_10[1]), 26);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 11);
			MISC::SET_BIT(&(Var0.f_10[2]), 13);
			MISC::SET_BIT(&(Var0.f_10[2]), 15);
			MISC::SET_BIT(&(Var0.f_10[2]), 16);
			MISC::SET_BIT(&(Var0.f_10[2]), 17);
			MISC::SET_BIT(&(Var0.f_10[2]), 19);
			MISC::SET_BIT(&(Var0.f_10[2]), 21);
			MISC::SET_BIT(&(Var0.f_10[2]), 23);
			MISC::SET_BIT(&(Var0.f_10[2]), 25);
			MISC::SET_BIT(&(Var0.f_10[2]), 27);
			MISC::SET_BIT(&(Var0.f_10[2]), 29);
			MISC::SET_BIT(&(Var0.f_10[2]), 31);
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 1);
			MISC::SET_BIT(&(Var0.f_10[3]), 3);
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 9:
			Var0 = { -1176.414f, -1382.795f, 4.8572f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.83f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 35.64f;
			Var0.f_8 = 11;
			Var0.f_9 = 8;
			Var0.f_19 = 7;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 9);
			MISC::SET_BIT(&(Var0.f_10[0]), 20);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 30);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 0);
			MISC::SET_BIT(&(Var0.f_10[2]), 2);
			MISC::SET_BIT(&(Var0.f_10[2]), 3);
			MISC::SET_BIT(&(Var0.f_10[2]), 5);
			MISC::SET_BIT(&(Var0.f_10[2]), 7);
			MISC::SET_BIT(&(Var0.f_10[2]), 9);
			MISC::SET_BIT(&(Var0.f_10[2]), 11);
			MISC::SET_BIT(&(Var0.f_10[2]), 12);
			MISC::SET_BIT(&(Var0.f_10[2]), 13);
			MISC::SET_BIT(&(Var0.f_10[2]), 14);
			MISC::SET_BIT(&(Var0.f_10[2]), 15);
			MISC::SET_BIT(&(Var0.f_10[2]), 16);
			MISC::SET_BIT(&(Var0.f_10[2]), 18);
			MISC::SET_BIT(&(Var0.f_10[2]), 20);
			MISC::SET_BIT(&(Var0.f_10[2]), 22);
			MISC::SET_BIT(&(Var0.f_10[2]), 23);
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 8:
			Var0 = { 300.613f, -759.0207f, 29.3106f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 2.41f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 252.36f;
			Var0.f_8 = 25;
			Var0.f_9 = 2;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 2);
			MISC::SET_BIT(&(Var0.f_10[0]), 4);
			MISC::SET_BIT(&(Var0.f_10[0]), 5);
			MISC::SET_BIT(&(Var0.f_10[0]), 6);
			MISC::SET_BIT(&(Var0.f_10[0]), 7);
			MISC::SET_BIT(&(Var0.f_10[0]), 8);
			MISC::SET_BIT(&(Var0.f_10[0]), 9);
			MISC::SET_BIT(&(Var0.f_10[0]), 10);
			MISC::SET_BIT(&(Var0.f_10[0]), 11);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 13);
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			MISC::SET_BIT(&(Var0.f_10[0]), 15);
			MISC::SET_BIT(&(Var0.f_10[0]), 17);
			MISC::SET_BIT(&(Var0.f_10[0]), 28);
			MISC::SET_BIT(&(Var0.f_10[0]), 30);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 0);
			MISC::SET_BIT(&(Var0.f_10[1]), 11);
			MISC::SET_BIT(&(Var0.f_10[1]), 13);
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 10:
			Var0 = { 202.4223f, 2460.433f, 55.7011f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.8f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 200.16f;
			Var0.f_8 = 18;
			Var0.f_9 = 6;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 3);
			MISC::SET_BIT(&(Var0.f_10[1]), 19);
			MISC::SET_BIT(&(Var0.f_10[1]), 21);
			MISC::SET_BIT(&(Var0.f_10[1]), 29);
			MISC::SET_BIT(&(Var0.f_10[1]), 31);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 1);
			MISC::SET_BIT(&(Var0.f_10[2]), 3);
			MISC::SET_BIT(&(Var0.f_10[2]), 5);
			MISC::SET_BIT(&(Var0.f_10[2]), 7);
			MISC::SET_BIT(&(Var0.f_10[2]), 8);
			MISC::SET_BIT(&(Var0.f_10[2]), 9);
			MISC::SET_BIT(&(Var0.f_10[2]), 10);
			MISC::SET_BIT(&(Var0.f_10[2]), 11);
			MISC::SET_BIT(&(Var0.f_10[2]), 12);
			MISC::SET_BIT(&(Var0.f_10[2]), 13);
			MISC::SET_BIT(&(Var0.f_10[2]), 14);
			MISC::SET_BIT(&(Var0.f_10[2]), 15);
			MISC::SET_BIT(&(Var0.f_10[2]), 16);
			MISC::SET_BIT(&(Var0.f_10[2]), 17);
			MISC::SET_BIT(&(Var0.f_10[2]), 18);
			MISC::SET_BIT(&(Var0.f_10[2]), 19);
			MISC::SET_BIT(&(Var0.f_10[2]), 21);
			MISC::SET_BIT(&(Var0.f_10[2]), 23);
			MISC::SET_BIT(&(Var0.f_10[2]), 25);
			MISC::SET_BIT(&(Var0.f_10[2]), 26);
			MISC::SET_BIT(&(Var0.f_10[2]), 27);
			MISC::SET_BIT(&(Var0.f_10[2]), 28);
			MISC::SET_BIT(&(Var0.f_10[2]), 29);
			MISC::SET_BIT(&(Var0.f_10[2]), 30);
			MISC::SET_BIT(&(Var0.f_10[2]), 31);
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 0);
			MISC::SET_BIT(&(Var0.f_10[3]), 1);
			MISC::SET_BIT(&(Var0.f_10[3]), 2);
			MISC::SET_BIT(&(Var0.f_10[3]), 3);
			MISC::SET_BIT(&(Var0.f_10[3]), 4);
			MISC::SET_BIT(&(Var0.f_10[3]), 5);
			MISC::SET_BIT(&(Var0.f_10[3]), 6);
			MISC::SET_BIT(&(Var0.f_10[3]), 7);
			MISC::SET_BIT(&(Var0.f_10[3]), 8);
			MISC::SET_BIT(&(Var0.f_10[3]), 9);
			MISC::SET_BIT(&(Var0.f_10[3]), 11);
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 12:
			Var0 = { 2846.742f, 4449.625f, 48.5186f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.56f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 106.92f;
			Var0.f_8 = 19;
			Var0.f_9 = 5;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 23);
			MISC::SET_BIT(&(Var0.f_10[2]), 25);
			MISC::SET_BIT(&(Var0.f_10[2]), 27);
			MISC::SET_BIT(&(Var0.f_10[2]), 29);
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 11:
			Var0 = { 387.8527f, 3586.863f, 33.2922f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.56f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 349.91f;
			Var0.f_8 = 19;
			Var0.f_9 = 5;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 17);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 2);
			MISC::SET_BIT(&(Var0.f_10[1]), 4);
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 14:
			Var0 = { 644.2907f, 2783.898f, 41.9584f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.62f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 183.96f;
			Var0.f_8 = 13;
			Var0.f_9 = 8;
			Var0.f_19 = 9;
			Var0.f_10[0] = 0;
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 30);
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 0);
			MISC::SET_BIT(&(Var0.f_10[3]), 2);
			MISC::SET_BIT(&(Var0.f_10[3]), 3);
			MISC::SET_BIT(&(Var0.f_10[3]), 4);
			MISC::SET_BIT(&(Var0.f_10[3]), 5);
			MISC::SET_BIT(&(Var0.f_10[3]), 6);
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 13:
			Var0 = { 1658.298f, 4851.931f, 41.9609f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 2.85f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 277.2f;
			Var0.f_8 = 27;
			Var0.f_9 = 2;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 24);
			MISC::SET_BIT(&(Var0.f_10[0]), 26);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 4);
			MISC::SET_BIT(&(Var0.f_10[1]), 6);
			MISC::SET_BIT(&(Var0.f_10[1]), 8);
			MISC::SET_BIT(&(Var0.f_10[1]), 10);
			MISC::SET_BIT(&(Var0.f_10[1]), 12);
			MISC::SET_BIT(&(Var0.f_10[1]), 13);
			MISC::SET_BIT(&(Var0.f_10[1]), 14);
			MISC::SET_BIT(&(Var0.f_10[1]), 15);
			MISC::SET_BIT(&(Var0.f_10[1]), 16);
			MISC::SET_BIT(&(Var0.f_10[1]), 17);
			MISC::SET_BIT(&(Var0.f_10[1]), 18);
			MISC::SET_BIT(&(Var0.f_10[1]), 19);
			MISC::SET_BIT(&(Var0.f_10[1]), 20);
			MISC::SET_BIT(&(Var0.f_10[1]), 21);
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 15:
			Var0 = { 1180.122f, -3116.589f, 6.028f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.41f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 90f;
			Var0.f_8 = 19;
			Var0.f_9 = 5;
			Var0.f_19 = 3;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 4);
			MISC::SET_BIT(&(Var0.f_10[0]), 6);
			MISC::SET_BIT(&(Var0.f_10[0]), 8);
			MISC::SET_BIT(&(Var0.f_10[0]), 10);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			MISC::SET_BIT(&(Var0.f_10[0]), 25);
			MISC::SET_BIT(&(Var0.f_10[0]), 27);
			MISC::SET_BIT(&(Var0.f_10[0]), 29);
			MISC::SET_BIT(&(Var0.f_10[0]), 31);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 1);
			MISC::SET_BIT(&(Var0.f_10[1]), 3);
			MISC::SET_BIT(&(Var0.f_10[1]), 12);
			MISC::SET_BIT(&(Var0.f_10[1]), 14);
			MISC::SET_BIT(&(Var0.f_10[1]), 16);
			MISC::SET_BIT(&(Var0.f_10[1]), 18);
			MISC::SET_BIT(&(Var0.f_10[1]), 20);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 11);
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 17:
			Var0 = { 137.9712f, -2473.538f, 6f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.61f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 235.44f;
			Var0.f_8 = 15;
			Var0.f_9 = 9;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 6);
			MISC::SET_BIT(&(Var0.f_10[0]), 8);
			MISC::SET_BIT(&(Var0.f_10[0]), 10);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			MISC::SET_BIT(&(Var0.f_10[0]), 21);
			MISC::SET_BIT(&(Var0.f_10[0]), 23);
			MISC::SET_BIT(&(Var0.f_10[0]), 25);
			MISC::SET_BIT(&(Var0.f_10[0]), 27);
			MISC::SET_BIT(&(Var0.f_10[0]), 28);
			MISC::SET_BIT(&(Var0.f_10[0]), 29);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 2);
			MISC::SET_BIT(&(Var0.f_10[1]), 4);
			MISC::SET_BIT(&(Var0.f_10[1]), 6);
			MISC::SET_BIT(&(Var0.f_10[1]), 7);
			MISC::SET_BIT(&(Var0.f_10[1]), 8);
			MISC::SET_BIT(&(Var0.f_10[1]), 9);
			MISC::SET_BIT(&(Var0.f_10[1]), 10);
			MISC::SET_BIT(&(Var0.f_10[1]), 11);
			MISC::SET_BIT(&(Var0.f_10[1]), 12);
			MISC::SET_BIT(&(Var0.f_10[1]), 17);
			MISC::SET_BIT(&(Var0.f_10[1]), 19);
			MISC::SET_BIT(&(Var0.f_10[1]), 21);
			MISC::SET_BIT(&(Var0.f_10[1]), 22);
			MISC::SET_BIT(&(Var0.f_10[1]), 23);
			MISC::SET_BIT(&(Var0.f_10[1]), 24);
			MISC::SET_BIT(&(Var0.f_10[1]), 25);
			MISC::SET_BIT(&(Var0.f_10[1]), 26);
			MISC::SET_BIT(&(Var0.f_10[1]), 27);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 0);
			MISC::SET_BIT(&(Var0.f_10[2]), 2);
			MISC::SET_BIT(&(Var0.f_10[2]), 4);
			MISC::SET_BIT(&(Var0.f_10[2]), 5);
			MISC::SET_BIT(&(Var0.f_10[2]), 6);
			MISC::SET_BIT(&(Var0.f_10[2]), 7);
			MISC::SET_BIT(&(Var0.f_10[2]), 8);
			MISC::SET_BIT(&(Var0.f_10[2]), 9);
			MISC::SET_BIT(&(Var0.f_10[2]), 10);
			MISC::SET_BIT(&(Var0.f_10[2]), 18);
			MISC::SET_BIT(&(Var0.f_10[2]), 19);
			MISC::SET_BIT(&(Var0.f_10[2]), 20);
			MISC::SET_BIT(&(Var0.f_10[2]), 21);
			MISC::SET_BIT(&(Var0.f_10[2]), 22);
			MISC::SET_BIT(&(Var0.f_10[2]), 23);
			MISC::SET_BIT(&(Var0.f_10[2]), 24);
			MISC::SET_BIT(&(Var0.f_10[2]), 25);
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 0);
			MISC::SET_BIT(&(Var0.f_10[3]), 2);
			MISC::SET_BIT(&(Var0.f_10[3]), 4);
			MISC::SET_BIT(&(Var0.f_10[3]), 5);
			MISC::SET_BIT(&(Var0.f_10[3]), 6);
			MISC::SET_BIT(&(Var0.f_10[3]), 7);
			MISC::SET_BIT(&(Var0.f_10[3]), 8);
			MISC::SET_BIT(&(Var0.f_10[3]), 9);
			MISC::SET_BIT(&(Var0.f_10[3]), 10);
			MISC::SET_BIT(&(Var0.f_10[3]), 11);
			MISC::SET_BIT(&(Var0.f_10[3]), 13);
			MISC::SET_BIT(&(Var0.f_10[3]), 15);
			MISC::SET_BIT(&(Var0.f_10[3]), 17);
			MISC::SET_BIT(&(Var0.f_10[3]), 19);
			MISC::SET_BIT(&(Var0.f_10[3]), 20);
			MISC::SET_BIT(&(Var0.f_10[3]), 21);
			MISC::SET_BIT(&(Var0.f_10[3]), 22);
			MISC::SET_BIT(&(Var0.f_10[3]), 23);
			MISC::SET_BIT(&(Var0.f_10[3]), 24);
			MISC::SET_BIT(&(Var0.f_10[3]), 26);
			MISC::SET_BIT(&(Var0.f_10[3]), 28);
			MISC::SET_BIT(&(Var0.f_10[3]), 30);
			Var0.f_10[4] = 0;
			MISC::SET_BIT(&(Var0.f_10[4]), 0);
			MISC::SET_BIT(&(Var0.f_10[4]), 1);
			MISC::SET_BIT(&(Var0.f_10[4]), 2);
			MISC::SET_BIT(&(Var0.f_10[4]), 3);
			MISC::SET_BIT(&(Var0.f_10[4]), 4);
			MISC::SET_BIT(&(Var0.f_10[4]), 5);
			MISC::SET_BIT(&(Var0.f_10[4]), 6);
			MISC::SET_BIT(&(Var0.f_10[4]), 7);
			MISC::SET_BIT(&(Var0.f_10[4]), 9);
			MISC::SET_BIT(&(Var0.f_10[4]), 11);
			MISC::SET_BIT(&(Var0.f_10[4]), 13);
			MISC::SET_BIT(&(Var0.f_10[4]), 14);
			MISC::SET_BIT(&(Var0.f_10[4]), 15);
			MISC::SET_BIT(&(Var0.f_10[4]), 16);
			MISC::SET_BIT(&(Var0.f_10[4]), 17);
			MISC::SET_BIT(&(Var0.f_10[4]), 18);
			MISC::SET_BIT(&(Var0.f_10[4]), 19);
			MISC::SET_BIT(&(Var0.f_10[4]), 20);
			MISC::SET_BIT(&(Var0.f_10[4]), 21);
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 16:
			Var0 = { -254.9883f, -2586.877f, 6.0006f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.61f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 90f;
			Var0.f_8 = 15;
			Var0.f_9 = 9;
			Var0.f_19 = 6;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 8);
			MISC::SET_BIT(&(Var0.f_10[0]), 10);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			MISC::SET_BIT(&(Var0.f_10[0]), 25);
			MISC::SET_BIT(&(Var0.f_10[0]), 27);
			MISC::SET_BIT(&(Var0.f_10[0]), 29);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 6);
			MISC::SET_BIT(&(Var0.f_10[1]), 8);
			MISC::SET_BIT(&(Var0.f_10[1]), 10);
			MISC::SET_BIT(&(Var0.f_10[1]), 12);
			MISC::SET_BIT(&(Var0.f_10[1]), 21);
			MISC::SET_BIT(&(Var0.f_10[1]), 23);
			MISC::SET_BIT(&(Var0.f_10[1]), 25);
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 19:
			Var0 = { 669.6413f, -2667.506f, 6.0812f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.55f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 90f;
			Var0.f_8 = 15;
			Var0.f_9 = 9;
			Var0.f_19 = 0;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 5);
			MISC::SET_BIT(&(Var0.f_10[0]), 7);
			MISC::SET_BIT(&(Var0.f_10[0]), 9);
			MISC::SET_BIT(&(Var0.f_10[0]), 11);
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 18:
			Var0 = { -334.9665f, -2777.501f, 5.0002f };
			Var0.f_3 = 1.41f;
			Var0.f_4 = 1.55f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.8f;
			Var0.f_7 = 90f;
			Var0.f_8 = 15;
			Var0.f_9 = 9;
			Var0.f_19 = 2;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 12);
			MISC::SET_BIT(&(Var0.f_10[1]), 27);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 10);
			Var0.f_10[3] = 0;
			MISC::SET_BIT(&(Var0.f_10[3]), 3);
			MISC::SET_BIT(&(Var0.f_10[3]), 5);
			MISC::SET_BIT(&(Var0.f_10[3]), 18);
			MISC::SET_BIT(&(Var0.f_10[3]), 20);
			MISC::SET_BIT(&(Var0.f_10[3]), 22);
			Var0.f_10[4] = 0;
			MISC::SET_BIT(&(Var0.f_10[4]), 3);
			MISC::SET_BIT(&(Var0.f_10[4]), 5);
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 20:
			Var0 = { 1088.728f, -3188.18f, -38.9935f };
			Var0.f_3 = 1.35f;
			Var0.f_4 = 1.45f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.64f;
			Var0.f_7 = 180f;
			Var0.f_8 = 7;
			Var0.f_9 = 8;
			Var0.f_19 = 0;
			Var0.f_20 = 1f;
			Var0.f_21 = 1;
			Var0.f_22 = 8.82f;
			Var0.f_23 = 0.58f;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 2);
			MISC::SET_BIT(&(Var0.f_10[0]), 3);
			MISC::SET_BIT(&(Var0.f_10[0]), 4);
			MISC::SET_BIT(&(Var0.f_10[0]), 5);
			MISC::SET_BIT(&(Var0.f_10[0]), 6);
			MISC::SET_BIT(&(Var0.f_10[0]), 10);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 13);
			MISC::SET_BIT(&(Var0.f_10[0]), 17);
			MISC::SET_BIT(&(Var0.f_10[0]), 18);
			MISC::SET_BIT(&(Var0.f_10[0]), 19);
			MISC::SET_BIT(&(Var0.f_10[0]), 20);
			MISC::SET_BIT(&(Var0.f_10[0]), 25);
			MISC::SET_BIT(&(Var0.f_10[0]), 26);
			MISC::SET_BIT(&(Var0.f_10[0]), 27);
			MISC::SET_BIT(&(Var0.f_10[0]), 31);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 1);
			MISC::SET_BIT(&(Var0.f_10[1]), 4);
			MISC::SET_BIT(&(Var0.f_10[1]), 5);
			MISC::SET_BIT(&(Var0.f_10[1]), 6);
			MISC::SET_BIT(&(Var0.f_10[1]), 7);
			MISC::SET_BIT(&(Var0.f_10[1]), 8);
			MISC::SET_BIT(&(Var0.f_10[1]), 9);
			MISC::SET_BIT(&(Var0.f_10[1]), 12);
			MISC::SET_BIT(&(Var0.f_10[1]), 13);
			MISC::SET_BIT(&(Var0.f_10[1]), 14);
			MISC::SET_BIT(&(Var0.f_10[1]), 15);
			MISC::SET_BIT(&(Var0.f_10[1]), 16);
			MISC::SET_BIT(&(Var0.f_10[1]), 20);
			MISC::SET_BIT(&(Var0.f_10[1]), 22);
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 21:
			Var0 = { 997.294f, -3197.584f, -36.3937f };
			Var0.f_3 = 2.01f;
			Var0.f_4 = 0.58f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.6f;
			Var0.f_7 = 270f;
			Var0.f_8 = 6;
			Var0.f_9 = 12;
			Var0.f_19 = 7;
			Var0.f_20 = 1f;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 0);
			MISC::SET_BIT(&(Var0.f_10[0]), 4);
			MISC::SET_BIT(&(Var0.f_10[0]), 5);
			MISC::SET_BIT(&(Var0.f_10[0]), 9);
			MISC::SET_BIT(&(Var0.f_10[0]), 10);
			MISC::SET_BIT(&(Var0.f_10[0]), 11);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 16);
			MISC::SET_BIT(&(Var0.f_10[0]), 17);
			MISC::SET_BIT(&(Var0.f_10[0]), 18);
			MISC::SET_BIT(&(Var0.f_10[0]), 19);
			MISC::SET_BIT(&(Var0.f_10[0]), 20);
			MISC::SET_BIT(&(Var0.f_10[0]), 22);
			MISC::SET_BIT(&(Var0.f_10[0]), 23);
			MISC::SET_BIT(&(Var0.f_10[0]), 24);
			MISC::SET_BIT(&(Var0.f_10[0]), 25);
			MISC::SET_BIT(&(Var0.f_10[0]), 26);
			MISC::SET_BIT(&(Var0.f_10[0]), 27);
			MISC::SET_BIT(&(Var0.f_10[0]), 28);
			MISC::SET_BIT(&(Var0.f_10[0]), 29);
			MISC::SET_BIT(&(Var0.f_10[0]), 30);
			MISC::SET_BIT(&(Var0.f_10[0]), 31);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 0);
			MISC::SET_BIT(&(Var0.f_10[1]), 1);
			MISC::SET_BIT(&(Var0.f_10[1]), 2);
			MISC::SET_BIT(&(Var0.f_10[1]), 3);
			MISC::SET_BIT(&(Var0.f_10[1]), 4);
			MISC::SET_BIT(&(Var0.f_10[1]), 5);
			MISC::SET_BIT(&(Var0.f_10[1]), 6);
			MISC::SET_BIT(&(Var0.f_10[1]), 7);
			MISC::SET_BIT(&(Var0.f_10[1]), 8);
			MISC::SET_BIT(&(Var0.f_10[1]), 9);
			MISC::SET_BIT(&(Var0.f_10[1]), 10);
			MISC::SET_BIT(&(Var0.f_10[1]), 12);
			MISC::SET_BIT(&(Var0.f_10[1]), 14);
			MISC::SET_BIT(&(Var0.f_10[1]), 15);
			MISC::SET_BIT(&(Var0.f_10[1]), 20);
			MISC::SET_BIT(&(Var0.f_10[1]), 21);
			MISC::SET_BIT(&(Var0.f_10[1]), 26);
			MISC::SET_BIT(&(Var0.f_10[1]), 27);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 0);
			MISC::SET_BIT(&(Var0.f_10[2]), 1);
			MISC::SET_BIT(&(Var0.f_10[2]), 4);
			MISC::SET_BIT(&(Var0.f_10[2]), 6);
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 22:
			Var0 = { 1062.991f, -3182.502f, -39.1633f };
			Var0.f_3 = 1.35f;
			Var0.f_4 = 1.35f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.64f;
			Var0.f_7 = 180f;
			Var0.f_8 = 4;
			Var0.f_9 = 8;
			Var0.f_19 = 0;
			Var0.f_20 = 1f;
			Var0.f_21 = 1;
			Var0.f_22 = 10f;
			Var0.f_23 = 0.57f;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 7);
			MISC::SET_BIT(&(Var0.f_10[0]), 14);
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 24:
			Var0 = { 1138.451f, -3197.307f, -39.6657f };
			Var0.f_3 = 1.2f;
			Var0.f_4 = 1.2f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.64f;
			Var0.f_7 = 90f;
			Var0.f_8 = 4;
			Var0.f_9 = 10;
			Var0.f_19 = 0;
			Var0.f_20 = 1f;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 1);
			MISC::SET_BIT(&(Var0.f_10[0]), 5);
			MISC::SET_BIT(&(Var0.f_10[0]), 7);
			MISC::SET_BIT(&(Var0.f_10[0]), 9);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 17);
			MISC::SET_BIT(&(Var0.f_10[0]), 18);
			MISC::SET_BIT(&(Var0.f_10[0]), 21);
			MISC::SET_BIT(&(Var0.f_10[0]), 22);
			MISC::SET_BIT(&(Var0.f_10[0]), 24);
			MISC::SET_BIT(&(Var0.f_10[0]), 25);
			MISC::SET_BIT(&(Var0.f_10[0]), 26);
			MISC::SET_BIT(&(Var0.f_10[0]), 28);
			MISC::SET_BIT(&(Var0.f_10[0]), 30);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 0);
			MISC::SET_BIT(&(Var0.f_10[1]), 1);
			MISC::SET_BIT(&(Var0.f_10[1]), 2);
			MISC::SET_BIT(&(Var0.f_10[1]), 5);
			MISC::SET_BIT(&(Var0.f_10[1]), 6);
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 23:
			Var0 = { 1172.925f, -3196.603f, -39.008f };
			Var0.f_3 = 1.2f;
			Var0.f_4 = 1.2f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 0.64f;
			Var0.f_7 = 90f;
			Var0.f_8 = 7;
			Var0.f_9 = 10;
			Var0.f_19 = 0;
			Var0.f_20 = 1f;
			Var0.f_21 = 1;
			Var0.f_22 = 10.63f;
			Var0.f_23 = 0.5f;
			Var0.f_10[0] = 0;
			MISC::SET_BIT(&(Var0.f_10[0]), 5);
			MISC::SET_BIT(&(Var0.f_10[0]), 6);
			MISC::SET_BIT(&(Var0.f_10[0]), 12);
			MISC::SET_BIT(&(Var0.f_10[0]), 13);
			MISC::SET_BIT(&(Var0.f_10[0]), 18);
			MISC::SET_BIT(&(Var0.f_10[0]), 19);
			MISC::SET_BIT(&(Var0.f_10[0]), 20);
			MISC::SET_BIT(&(Var0.f_10[0]), 21);
			MISC::SET_BIT(&(Var0.f_10[0]), 22);
			MISC::SET_BIT(&(Var0.f_10[0]), 25);
			MISC::SET_BIT(&(Var0.f_10[0]), 26);
			MISC::SET_BIT(&(Var0.f_10[0]), 27);
			MISC::SET_BIT(&(Var0.f_10[0]), 28);
			MISC::SET_BIT(&(Var0.f_10[0]), 29);
			MISC::SET_BIT(&(Var0.f_10[0]), 30);
			Var0.f_10[1] = 0;
			MISC::SET_BIT(&(Var0.f_10[1]), 0);
			MISC::SET_BIT(&(Var0.f_10[1]), 1);
			MISC::SET_BIT(&(Var0.f_10[1]), 2);
			MISC::SET_BIT(&(Var0.f_10[1]), 6);
			MISC::SET_BIT(&(Var0.f_10[1]), 8);
			MISC::SET_BIT(&(Var0.f_10[1]), 9);
			MISC::SET_BIT(&(Var0.f_10[1]), 10);
			MISC::SET_BIT(&(Var0.f_10[1]), 12);
			MISC::SET_BIT(&(Var0.f_10[1]), 15);
			MISC::SET_BIT(&(Var0.f_10[1]), 16);
			MISC::SET_BIT(&(Var0.f_10[1]), 17);
			MISC::SET_BIT(&(Var0.f_10[1]), 18);
			MISC::SET_BIT(&(Var0.f_10[1]), 19);
			MISC::SET_BIT(&(Var0.f_10[1]), 21);
			MISC::SET_BIT(&(Var0.f_10[1]), 23);
			MISC::SET_BIT(&(Var0.f_10[1]), 24);
			MISC::SET_BIT(&(Var0.f_10[1]), 26);
			MISC::SET_BIT(&(Var0.f_10[1]), 30);
			Var0.f_10[2] = 0;
			MISC::SET_BIT(&(Var0.f_10[2]), 5);
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
		case 25:
			Var0 = { 972f, -2989f, -39.6471f };
			Var0.f_3 = 2f;
			Var0.f_4 = 2f;
			Var0.f_5 = 0.1f;
			Var0.f_6 = 1f;
			Var0.f_7 = 178.56f;
			Var0.f_8 = 4;
			Var0.f_9 = 4;
			Var0.f_19 = 0;
			Var0.f_20 = 1.5f;
			Var0.f_10[0] = 0;
			Var0.f_10[1] = 0;
			Var0.f_10[2] = 0;
			Var0.f_10[3] = 0;
			Var0.f_10[4] = 0;
			Var0.f_10[5] = 0;
			Var0.f_10[6] = 0;
			Var0.f_10[7] = 0;
			break;
	}
	return Var0;
}

int func_308(int iParam0)//Position - 0x25657B
{
	int iVar0;
	var uVar1;
	if (__LIB_2__.func_748(iParam0))
	{
		__LIB_2__.func_747(iParam0, &iVar0, &uVar1);
		return BitTest(Global_1946250.f_3554[iVar0], uVar1);
	}
	return 0;
}

void func_309(var uParam0)//Position - 0x257051
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7 = uParam0;
}

void func_310(bool bParam0)//Position - 0x257EDA
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_2, 7))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 7);
		}
	}
	else if (BitTest(Global_1946250.f_2, 7))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 7);
	}
}

bool func_311()//Position - 0x257F17
{
	return BitTest(Global_1946250.f_2, 7);
}

void func_312(bool bParam0)//Position - 0x25811A
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348, 23))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348), 23);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348, 23))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_348), 23);
	}
}

void func_313(bool bParam0)//Position - 0x258272
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 30))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 30);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 30))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 30);
	}
}

void func_314(bool bParam0)//Position - 0x258343
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 25))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 25);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292, 25))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_292), 25);
	}
}

bool func_315()//Position - 0x2589E4
{
	return BitTest(Global_1946250, 16);
}

int func_316(int iParam0)//Position - 0x2589F3
{
	if (Global_1946250.f_4698 == iParam0 && iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_317(var uParam0)//Position - 0x258D5D
{
	Global_1946250.f_3371 = uParam0;
}

bool func_318()//Position - 0x259663
{
	bool bVar0;
	bVar0 = true;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		bVar0 = false;
	}
	if (__LIB_0__.func_706())
	{
		bVar0 = false;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !__LIB_2__.func_382())
	{
		bVar0 = false;
	}
	if (__LIB_0__.func_527())
	{
		bVar0 = false;
	}
	if (((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !BitTest(Global_1946250, 7)) && !__LIB_2__.func_382()) && !Global_2667225.f_2680)
	{
		if (!(Global_1946250.f_3615 != -1 && CAM::IS_SCREEN_FADED_OUT()))
		{
			if (!BitTest(Global_1946250, 21))
			{
				bVar0 = false;
			}
		}
	}
	if (!__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1) && !Global_2667225.f_2680)
	{
		bVar0 = false;
	}
	if (__LIB_0__.func_618())
	{
		if (BitTest(Global_1946250.f_2, 31) || Global_1946233)
		{
		}
		else
		{
			bVar0 = false;
		}
	}
	if (!__LIB_2__.func_748(Global_1946250.f_3606))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (BitTest(Global_1946250, 21))
		{
			MISC::CLEAR_BIT(&Global_1946250, 21);
		}
	}
	return bVar0;
}

bool func_319(var uParam0)//Position - 0x25A5F8
{
	return BitTest(uParam0->f_3, 5);
}

int func_320(int iParam0, int iParam1)//Position - 0x25AF6A
{
	switch (iParam0)
	{
		case 0:
			return Global_2724114[iParam1 /*4*/].f_3;
			break;
		case 1:
			return Global_2724155[iParam1 /*4*/].f_3;
			break;
		case 2:
			return Global_2724308[iParam1 /*4*/].f_3;
			break;
		case 3:
			return Global_2724557[iParam1 /*4*/].f_3;
			break;
	}
	return 123;
}

int func_321(int iParam0)//Position - 0x25B98D
{
	switch (iParam0)
	{
		case joaat("WEAPON_PETROLCAN"):
			return joaat("WP_WT_PETROL_t5_v1");
		case joaat("WEAPON_KNIFE"):
			return joaat("WP_WT_KNIFE_t1_v1");
		case joaat("WEAPON_NIGHTSTICK"):
			return joaat("WP_WT_NGTSTK_t1_v1");
		case joaat("WEAPON_HAMMER"):
			return joaat("WP_WT_HAMMER_t1_v1");
		case joaat("WEAPON_BAT"):
			return -1;
		case joaat("WEAPON_CROWBAR"):
			return -1;
		case joaat("WEAPON_GOLFCLUB"):
			return -1;
		case joaat("WEAPON_BOTTLE"):
			return joaat("WP_WT_BOTTLE_t1_v1");
		case joaat("WEAPON_DAGGER"):
			return joaat("WP_WT_DAGGER_t1_v1");
		case joaat("WEAPON_GRENADE"):
			return joaat("WP_WT_GNADE_t2_v2");
		case joaat("WEAPON_MOLOTOV"):
			return -1;
		case joaat("WEAPON_STICKYBOMB"):
			return joaat("WP_WT_GNADE_STK_t2_v2");
		case joaat("WEAPON_SMOKEGRENADE"):
			return joaat("WP_WT_GNADE_SMK_t2_v2");
		case joaat("WEAPON_PROXMINE"):
			return joaat("WP_WT_PRXMINE_t2_v2");
		case joaat("WEAPON_COMBATPISTOL"):
			return joaat("WP_WT_PIST_CBT_t0_v1");
		case joaat("WEAPON_MICROSMG"):
			return joaat("WP_WT_SMG_MCR_t0_v1");
		case joaat("WEAPON_ASSAULTRIFLE"):
			return joaat("WP_WT_RIFLE_ASL_t0_v1");
		case joaat("WEAPON_PUMPSHOTGUN"):
			return joaat("WP_WT_SG_PMP_t0_v1");
		case joaat("WEAPON_SNIPERRIFLE"):
			return joaat("WP_WT_SNIP_RIF_t0_v1");
		default:
	}
	return -1;
}

void func_322(int iParam0, int iParam1, bool bParam2)//Position - 0x25BB3A
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_777[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[iParam0 /*834*/].f_777[iVar0]), iVar1);
	}
}

void func_323(int iParam0)//Position - 0x25BB84
{
	if (iParam0 < 0 || iParam0 >= Global_2724923)
	{
		return;
	}
	if (OBJECT::DOES_PICKUP_EXIST(Global_2724923[iParam0]))
	{
		OBJECT::REMOVE_PICKUP(Global_2724923[iParam0]);
	}
	Global_2724923[iParam0] = 0;
	if (HUD::DOES_BLIP_EXIST(Global_2725112[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Global_2725112[iParam0]));
	}
	Global_2725112[iParam0] = 0;
}

bool func_324()//Position - 0x25C27B
{
	return Global_1964883;
}

bool func_325()//Position - 0x25C2EF
{
	return Global_1964732;
}

bool func_326()//Position - 0x25C2FB
{
	return Global_1964731;
}

bool func_327()//Position - 0x25C307
{
	return Global_1964728;
}

bool func_328()//Position - 0x25C32F
{
	return Global_1964704;
}

bool func_329()//Position - 0x25C33B
{
	return Global_1964697;
}

bool func_330()//Position - 0x25C347
{
	return Global_1964696;
}

bool func_331()//Position - 0x25C353
{
	return Global_1958656;
}

bool func_332()//Position - 0x25C3A2
{
	return Global_1958642;
}

bool func_333()//Position - 0x25C3AE
{
	return Global_1958641;
}

void func_334(int iParam0, int iParam1)//Position - 0x25CB6C
{
	if (Global_1888617.f_1[iParam0 /*15*/] != iParam1)
	{
		Global_1888617.f_1[iParam0 /*15*/] = iParam1;
	}
}

char* func_335(var uParam0, int iParam1)//Position - 0x2604BD
{
	switch (iParam1)
	{
		case 0:
			return "RE_Parachuter_1";
		case 1:
			return "RE_Parachuter_2";
		case 2:
			return "RE_Parachuter_3";
		case 3:
			return "RE_Parachuter_4";
		case 4:
			return "RE_Parachuter_5";
		default:
	}
	return "";
}

char* func_336(var uParam0, int iParam1)//Position - 0x2607C1
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return "";
		default:
	}
	return "";
}

void func_337(var uParam0)//Position - 0x26194F
{
	int iVar0;
	uParam0->f_20 = 0;
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

float func_338(int iParam0, int iParam1)//Position - 0x262803
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 1f;
				default:
			}
			break;
		case 262:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_31736 /* Tunable: 757642932 */;
				case 1:
					return Global_262145.f_31737 /* Tunable: -678131595 */;
				case 2:
					return Global_262145.f_31738 /* Tunable: -369153977 */;
				case 3:
					return Global_262145.f_31739 /* Tunable: -2129051069 */;
				case 4:
					return Global_262145.f_31740 /* Tunable: 37939428 */;
				case 5:
					return Global_262145.f_31741 /* Tunable: -313349874 */;
				case 6:
					return Global_262145.f_31742 /* Tunable: 1820044260 */;
				case 7:
					return Global_262145.f_31743 /* Tunable: -61745963 */;
				default:
			}
			break;
		case 294:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_33138 /* Tunable: 289990589 */;
				case 1:
					return Global_262145.f_33139 /* Tunable: 662304577 */;
				default:
			}
			break;
		case 297:
			switch (iParam1)
			{
				case 1:
					return Global_262145.f_33140 /* Tunable: 230846628 */;
				case 0:
					return Global_262145.f_33141 /* Tunable: -841520834 */;
				default:
			}
			break;
		case 299:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_33142 /* Tunable: -1057231589 */;
				case 1:
					return Global_262145.f_33143 /* Tunable: 1854522283 */;
				default:
			}
			break;
	}
	return 1f;
}

int func_339(int iParam0)//Position - 0x26295F
{
	switch (iParam0)
	{
		case 150:
			return 3;
		case 24:
			return 1;
		case 26:
			return 3;
		case 256:
			return 25;
		case 258:
			return 7;
		case 259:
			return 1;
		case 271:
			return 17;
		case 273:
			return 1;
		case 276:
			return 4;
		case 277:
			return 2;
		case 263:
			return 6;
		case 262:
			return 8;
		case 264:
			return 7;
		case 268:
			return 1;
		case 269:
			return 1;
		case 270:
			return 1;
		case 275:
			return 1;
		case 286:
			return 1;
		case 267:
			return 1;
		case 266:
			return 1;
		case 289:
			return 1;
		case 147:
			return 1;
		case 287:
			return 1;
		case 291:
			return 1;
		case 292:
			return 1;
		case 293:
			return 2;
		case 294:
			return 2;
		case 295:
			return 1;
		case 296:
			return 1;
		case 297:
			return 2;
		case 298:
			return 1;
		case 299:
			return 2;
		case 300:
			return 1;
		case 301:
			return 2;
		default:
	}
	return 0;
}

float func_340(int iParam0, int iParam1)//Position - 0x262BF5
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 1f;
				default:
			}
			break;
	}
	return 1f;
}

int func_341(int iParam0)//Position - 0x262C8F
{
	switch (iParam0)
	{
		case 70:
		case 71:
		case 72:
		case 74:
		case 75:
		case 78:
		case 80:
			return 11;
		case 73:
		case 76:
		case 77:
		case 79:
			return 8;
		default:
	}
	return 0;
}

int func_342(int iParam0, int iParam1)//Position - 0x262D21
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_343(var uParam0, int iParam1)//Position - 0x26431F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1594.f_14)
	{
		if (uParam0->f_1594[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_344(int iParam0, int iParam1, int iParam2)//Position - 0x26441F
{
	switch (iParam0)
	{
		case 256:
			switch (iParam1)
			{
				case 0:
				case 2:
				case 4:
				case 3:
					return 0;
				default:
			}
			break;
		case 269:
			return 0;
	}
	return 1;
}

int func_345(int iParam0, int iParam1, int iParam2, struct<3> Param3)//Position - 0x264596
{
	int iVar0;
	int iVar1;
	int iVar2;
	NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(Param3, 0, &iVar0, &iVar1, &iVar2);
	if ((iParam0 <= (__LIB_1__.func_45(0) - iVar0) && iParam1 <= (__LIB_1__.func_45(1) - iVar1)) && iParam2 <= (__LIB_1__.func_45(2) - iVar2))
	{
		return 1;
	}
	return 0;
}

float func_346(int iParam0, int iParam1)//Position - 0x26468E
{
	switch (iParam0)
	{
		case 262:
			return Global_262145.f_32512 /* Tunable: 523318704 */;
		default:
	}
	return -1f;
}

float func_347(int iParam0)//Position - 0x2648AA
{
	switch (iParam0)
	{
		case 0:
			return 500f;
		default:
	}
	return 500f;
}

int func_348(int iParam0, int iParam1)//Position - 0x2649A1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 827;
				case 1:
					return 828;
				case 2:
					return 829;
				case 3:
					return 830;
				case 4:
					return 831;
				case 5:
					return 832;
				case 6:
					return 833;
				case 7:
					return 834;
				case 8:
					return 835;
				case 9:
					return 836;
				case 10:
					return 837;
				case 11:
					return 838;
				case 12:
					return 839;
				case 13:
					return 840;
				case 14:
					return 841;
				case 15:
					return 842;
				case 16:
					return 843;
				case 17:
					return 844;
				default:
			}
			break;
	}
	return 0;
}

int func_349(int iParam0, int iParam1)//Position - 0x264B49
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 773;
				case 1:
					return 774;
				case 2:
					return 775;
				case 3:
					return 776;
				case 4:
					return 777;
				case 5:
					return 778;
				case 6:
					return 779;
				case 7:
					return 780;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 8:
					return 781;
				case 9:
					return 782;
				case 10:
					return 783;
				case 11:
					return 784;
				case 12:
					return 785;
				case 13:
					return 786;
				case 14:
					return 787;
				case 15:
					return 788;
				default:
			}
			break;
	}
	return 0;
}

Vector3 func_350(var uParam0, int iParam1)//Position - 0x266090
{
	switch (iParam1)
	{
		case 181:
			return uParam0->f_129.f_1[0 /*21*/].f_3;
		default:
	}
	return 0f, 0f, 0f;
}

int func_351(int iParam0)//Position - 0x2660B8
{
	switch (iParam0)
	{
		case 181:
			return -1;
		default:
	}
	return -1;
}

int func_352(int iParam0, int iParam1)//Position - 0x266124
{
	if (iParam0 == Global_1920255.f_11.f_240[iParam1 /*2*/])
	{
		return Global_1920255.f_11.f_240[iParam1 /*2*/].f_1;
	}
	return -1;
}

int func_353(int iParam0, int iParam1)//Position - 0x26614F
{
	switch (iParam0)
	{
		case 256:
			switch (iParam1)
			{
				case 0:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return 0;
				default:
			}
			break;
		case 276:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return 1;
				default:
			}
			return 0;
			break;
		case 264:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
			}
			break;
	}
	return 1;
}

int func_354(int iParam0)//Position - 0x2661FF
{
	switch (iParam0)
	{
		case 167:
		case 192:
		case 178:
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 250:
		case 243:
		case 158:
		case 256:
		case 258:
		case 271:
		case 277:
		case 276:
		case 262:
		case 263:
		case 264:
		case 291:
		case 292:
		case 293:
		case 294:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 295:
			return 1;
		default:
	}
	return 0;
}

int func_355(int iParam0, int iParam1)//Position - 0x2662CD
{
	switch (iParam0)
	{
		case 181:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
			}
			break;
		case 150:
			switch (iParam1)
			{
				case 3:
					return 0;
					break;
			}
			break;
		case 263:
			switch (iParam1)
			{
				case 15:
				case 16:
					return 1;
				default:
			}
			break;
	}
	return 0;
}

int func_356(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x266334
{
	switch (iParam0)
	{
		case 276:
			switch (iParam1)
			{
				case 2:
				case 3:
					return MISC::GET_RANDOM_INT_IN_RANGE(iParam2, iParam3 + 1);
				default:
			}
			break;
	}
	return -1;
}

int func_357(int iParam0, int iParam1)//Position - 0x26636D
{
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 3;
				case 2:
					return 1;
				default:
			}
			break;
		case 24:
			return 30;
		case 26:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				case 2:
					return 3;
				default:
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 5:
				case 8:
				case 9:
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
				case 11:
				case 4:
					return 3;
				case 10:
				case 14:
					return 2;
				case 1:
					return 5;
				default:
			}
			return 1;
			break;
		case 258:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
				default:
			}
			break;
		case 259:
			return 10;
		case 271:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 15:
					return 4;
				default:
			}
			return 2;
			break;
		case 277:
			switch (iParam1)
			{
				case 0:
					return 8;
				case 1:
					return 8;
				default:
			}
			break;
		case 273:
			return 1;
		case 276:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 3:
					return 7;
				default:
			}
			return 1;
			break;
		case 262:
			return 3;
		case 263:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				default:
			}
			return 5;
		case 264:
			switch (iParam1)
			{
				case 0:
					return 1;
				default:
			}
			return 2;
		case 268:
			return 10;
		case 269:
			return 1;
		case 270:
			return 8;
		case 275:
			return 1;
		case 286:
			return 15;
		case 267:
			return 25;
		case 266:
			return 5;
		case 289:
			return 5;
		case 147:
			return 10;
		case 287:
			return 12;
		case 291:
			return 10;
		case 292:
			return 18;
		case 293:
			return 3;
		case 294:
			return 3;
		case 295:
			return 66;
		case 296:
			return 10;
		case 297:
			return 3;
		case 298:
			switch (iParam1)
			{
				case 0:
					return 5;
				default:
			}
			break;
		case 299:
			return 3;
		case 300:
			return 12;
		case 301:
			switch (iParam1)
			{
				case 1:
					return 5;
				case 0:
					return 5;
				default:
			}
			break;
	}
	return -1;
}

int func_358(int iParam0, int iParam1)//Position - 0x266696
{
	switch (iParam0)
	{
		case 150:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 4;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				case 2:
					return 6;
				default:
			}
			break;
		case 24:
			return 0;
		case 256:
			switch (iParam1)
			{
				case 12:
					return 28;
				case 13:
					return 31;
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 6;
				case 3:
					return 7;
				case 4:
					return 8;
				case 5:
					return 11;
				case 6:
					return 14;
				case 7:
					return 15;
				case 8:
					return 16;
				case 9:
					return 19;
				case 10:
					return 22;
				case 11:
					return 25;
				case 14:
					return 34;
				case 15:
					return 36;
				case 16:
					return 39;
				case 17:
					return 42;
				case 18:
					return 45;
				case 19:
					return 48;
				case 20:
					return 51;
				case 21:
					return 54;
				case 22:
					return 57;
				case 23:
					return 60;
				case 24:
					return 63;
				default:
			}
			break;
		case 258:
			switch (iParam1)
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
				default:
			}
			break;
		case 259:
			return 0;
		case 271:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 4;
				case 2:
					return 6;
				case 3:
					return 8;
				case 4:
					return 10;
				case 5:
					return 12;
				case 6:
					return 14;
				case 7:
					return 16;
				case 8:
					return 18;
				case 9:
					return 20;
				case 10:
					return 22;
				case 11:
					return 24;
				case 12:
					return 26;
				case 13:
					return 28;
				case 14:
					return 30;
				case 15:
					return 32;
				case 16:
					return 36;
				default:
			}
			break;
		case 277:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 8;
				default:
			}
			break;
		case 273:
			return 0;
		case 276:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 4;
				default:
			}
			break;
		case 262:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				case 2:
					return 6;
				case 3:
					return 9;
				case 4:
					return 12;
				case 5:
					return 15;
				case 6:
					return 18;
				case 7:
					return 21;
				default:
			}
			break;
		case 263:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 5;
				case 3:
					return 10;
				case 4:
					return 15;
				case 5:
					return 20;
				default:
			}
			break;
		case 264:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 3;
				case 3:
					return 5;
				case 4:
					return 7;
				case 5:
					return 9;
				case 6:
					return 11;
				default:
			}
			break;
		case 268:
			return 0;
		case 269:
			return 0;
		case 270:
			return 0;
		case 275:
			return 0;
		case 267:
			return 0;
		case 286:
			return 0;
		case 266:
			return 0;
		case 289:
			return 0;
		case 147:
			return 0;
		case 287:
			return 0;
		case 291:
			return 0;
		case 292:
			return 0;
		case 293:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				default:
			}
			break;
		case 294:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				default:
			}
			break;
		case 295:
			return 0;
		case 296:
			return 0;
		case 297:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				default:
			}
			break;
		case 298:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
			}
			break;
		case 299:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				default:
			}
			break;
		case 300:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
			}
			break;
		case 301:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 5;
				default:
			}
			break;
	}
	return -1;
}

var func_359(int iParam0)//Position - 0x267223
{
	return Global_1892703[iParam0 /*599*/].f_10.f_308;
}

int func_360(int iParam0, int iParam1)//Position - 0x267239
{
	switch (iParam0)
	{
		case 181:
			iParam1 = iParam1;
			break;
		case 150:
			switch (iParam1)
			{
				case 0:
					return !Global_262145.f_29648 /* Tunable: -1036423235 */;
				case 2:
					return !Global_262145.f_29656 /* Tunable: -1212739458 */;
				case 1:
					return !Global_262145.f_29652 /* Tunable: 1650434624 */;
				default:
			}
			break;
	}
	return 0;
}

int func_361(int iParam0)//Position - 0x2672D8
{
	return Global_1888617.f_1[iParam0 /*15*/];
}

int func_362()//Position - 0x26897D
{
	return Global_1888617.f_199;
}

Vector3 func_363(int iParam0, bool bParam1)//Position - 0x268E2E
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return -1297.199f, 252.495f, 61.813f;
			case 1:
				return -1114.101f, 479.205f, 81.161f;
			case 2:
				return -345.267f, 662.299f, 168.587f;
			case 3:
				return -72.605f, 902.579f, 234.631f;
			case 4:
				return -161.232f, 274.911f, 92.534f;
			case 5:
				return -504.323f, 424.21f, 96.287f;
			case 6:
				return -1451.916f, 533.495f, 118.177f;
			case 7:
				return -1979.252f, 586.078f, 116.479f;
			case 8:
				return -1405.117f, 81.983f, 52.099f;
			case 9:
				return -1299.92f, -228.464f, 59.654f;
			case 10:
				return -1409.08f, -590.823f, 29.317f;
			case 11:
				return -1085.162f, -476.529f, 35.636f;
			case 12:
				return -817.325f, -1201.59f, 5.935f;
			case 13:
				return -1873.598f, -343.933f, 48.26f;
			case 14:
				return -1334.625f, -1008.972f, 6.867f;
			case 15:
				return -1043.008f, -1010.464f, 1.15f;
			case 16:
				return -489.189f, -596.899f, 30.174f;
			case 17:
				return -187.144f, -175.854f, 42.624f;
			case 18:
				return 871.548f, -75.386f, 77.764f;
			case 19:
				return 443.542f, 253.197f, 102.21f;
			case 20:
				return 185.595f, -1016.005f, 28.3f;
			case 21:
				return 110.261f, -714.605f, 32.133f;
			case 22:
				return -220.102f, -590.273f, 33.264f;
			case 23:
				return -74.575f, -619.874f, 35.173f;
			case 24:
				return 283.769f, -342.644f, 43.92f;
			case 25:
				return -237.521f, -2059.951f, 26.62f;
			case 26:
				return -1044.016f, -2608.022f, 19.775f;
			case 27:
				return -801.566f, -1313.922f, 4f;
			case 28:
				return -972.578f, -1464.273f, 4.013f;
			case 29:
				return 1309.942f, -530.154f, 70.312f;
			case 30:
				return 1566.097f, -1683.172f, 87.205f;
			case 31:
				return 339.481f, 159.143f, 102.146f;
			case 32:
				return -2316.493f, 280.86f, 168.467f;
			case 33:
				return -3036.574f, 105.31f, 10.593f;
			case 34:
				return -3071.87f, 658.171f, 9.918f;
			case 35:
				return -1534.826f, 889.731f, 180.803f;
			case 36:
				return 140.945f, 6606.513f, 30.845f;
			case 37:
				return 1362.672f, 1178.352f, 111.609f;
			case 38:
				return 1869.749f, 2622.154f, 44.672f;
			case 39:
				return 2673.478f, 1678.569f, 23.488f;
			case 40:
				return 2593.022f, 364.349f, 107.457f;
			case 41:
				return -1886.248f, 2016.572f, 139.951f;
			case 42:
				return 2537.084f, -390.048f, 91.993f;
			case 43:
				return 3511.653f, 3783.877f, 28.925f;
			case 44:
				return 2002.724f, 3769.429f, 31.181f;
			case 45:
				return -771.927f, 5566.46f, 32.486f;
			case 46:
				return 1697.817f, 6414.365f, 31.73f;
			case 47:
				return 386.663f, 2640.138f, 43.493f;
			case 48:
				return 231.935f, 1162.313f, 224.464f;
			case 49:
				return 1700.445f, 4937.267f, 41.078f;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -582.454f, -859.433f, 25.034f;
			case 1:
				return -604.458f, -1218.292f, 13.507f;
			case 2:
				return -229.587f, -1483.435f, 30.352f;
			case 3:
				return 28.385f, -1707.341f, 28.298f;
			case 4:
				return -22.296f, -1851.577f, 24.108f;
			case 5:
				return 321.798f, -1948.141f, 23.627f;
			case 6:
				return 455.602f, -1695.263f, 28.289f;
			case 7:
				return 934.148f, -1812.944f, 29.812f;
			case 8:
				return 1228.548f, -1605.649f, 50.736f;
			case 9:
				return -329.7f, -700.958f, 31.912f;
			case 10:
				return 238.339f, -35.01f, 68.728f;
			case 11:
				return 393.61f, -649.557f, 27.5f;
			case 12:
				return 246.847f, -1162.082f, 28.16f;
			case 13:
				return 124.231f, -1472.496f, 28.142f;
			case 14:
				return 1136.156f, -773.997f, 56.632f;
			case 15:
				return 1156.682f, -1474.145f, 33.693f;
			case 16:
				return 1028.898f, -2405.952f, 28.494f;
			case 17:
				return -936.334f, -2692.07f, 15.611f;
			case 18:
				return -532.351f, -2134.219f, 4.992f;
			case 19:
				return -1530.625f, -993.47f, 12.017f;
			case 20:
				return -1528.444f, -427.05f, 34.447f;
			case 21:
				return -1640.424f, -202.879f, 54.146f;
			case 22:
				return -552.673f, 309.154f, 82.191f;
			case 23:
				return 642.042f, 587.747f, 127.911f;
			case 24:
				return -1804.769f, 804.137f, 137.514f;
			case 25:
				return 839.097f, 2202.196f, 50.46f;
			case 26:
				return 756.539f, 2525.957f, 72.161f;
			case 27:
				return 1205.454f, 2658.357f, 36.824f;
			case 28:
				return 1991.707f, 3078.063f, 46.016f;
			case 29:
				return 1977.207f, 3837.1f, 30.997f;
			case 30:
				return 1350.173f, 3601.249f, 33.899f;
			case 31:
				return 1819.042f, 4592.234f, 35.316f;
			case 32:
				return 2905.354f, 4419.682f, 47.541f;
			case 33:
				return -472.038f, 6034.981f, 30.341f;
			case 34:
				return -165.839f, 6454.25f, 30.495f;
			case 35:
				return -2221.144f, 4232.757f, 46.132f;
			case 36:
				return -3138.864f, 1086.83f, 19.669f;
			case 37:
				return 1546.591f, 3781.791f, 33.06f;
			case 38:
				return 2717.772f, 1391.725f, 23.535f;
			case 39:
				return -1144.001f, 2666.28f, 17.094f;
			case 40:
				return -2555.512f, 2322.827f, 32.06f;
			case 41:
				return -2340.763f, 296.197f, 168.467f;
			case 42:
				return 1122.086f, 267.125f, 79.856f;
			case 43:
				return 629.014f, 196.173f, 96.128f;
			case 44:
				return 1150.161f, -991.569f, 44.528f;
			case 45:
				return 244.916f, -860.606f, 28.5f;
			case 46:
				return -340.099f, -876.452f, 30.071f;
			case 47:
				return 387.275f, -215.651f, 55.835f;
			case 48:
				return -1234.105f, -1646.832f, 3.129f;
			case 49:
				return -1062.018f, -226.736f, 37.155f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

int func_364(int iParam0)//Position - 0x2698E0
{
	return Global_1945938[iParam0];
}

void func_365()//Position - 0x26A13F
{
	if (Global_1964873 != 0)
	{
		Global_1964873 = 0;
	}
}

var func_366()//Position - 0x26A160
{
	return Global_1964837;
}

void func_367(var uParam0, char* sParam1)//Position - 0x26AFC4
{
	uParam0->f_31 = 1;
	uParam0->f_32[0] = 1;
	StringCopy(&(uParam0->f_36[0 /*16*/]), sParam1, 64);
}

void func_368(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x26B02F
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), sParam3, 16);
	uParam0->f_558 = uParam4;
	uParam0->f_559 = iParam5;
	uParam0->f_560 = iParam6;
	uParam0->f_561 = iParam7;
	uParam0->f_580 = iParam8;
}

void func_369(char* sParam0, int iParam1)//Position - 0x26B073
{
	__LIB_10__.func_584(&(Global_2703735.f_2724.f_1), 8, sParam0, "", iParam1, 0, 0, 0);
	Global_2703735.f_2724 = 1;
}

void func_370(char* sParam0, int iParam1)//Position - 0x26B09C
{
	__LIB_11__.func_515(&(Global_2703735.f_2724.f_1), 1, sParam0, iParam1, 0, 5, 0, 0);
	Global_2703735.f_2724 = 1;
}

void func_371(char* sParam0, int iParam1)//Position - 0x26B0C2
{
	__LIB_10__.func_584(&(Global_2703735.f_2724.f_1), 0, sParam0, "", 0, 0, iParam1, 0);
	Global_2703735.f_2724 = 1;
}

void func_372(char* sParam0, int iParam1)//Position - 0x26B0EA
{
	__LIB_10__.func_584(&(Global_2703735.f_2724.f_1), 3, sParam0, "", iParam1, 0, 0, 1);
	Global_2703735.f_2724 = 1;
}

void func_373(char* sParam0, int iParam1)//Position - 0x26B112
{
	__LIB_10__.func_584(&(Global_2703735.f_2724.f_1), 3, sParam0, "", iParam1, 0, 0, 0);
	Global_2703735.f_2724 = 1;
}

void func_374(char* sParam0, char* sParam1)//Position - 0x26B13A
{
	__LIB_10__.func_584(&(Global_2703735.f_2724.f_1), 20, sParam0, sParam1, 0, 0, 0, 0);
	Global_2703735.f_2724 = 1;
}

int func_375(bool bParam0)//Position - 0x27511D
{
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 == 86)
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0)//Position - 0x27D7FD
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 19;
		case 2:
			return 20;
		case 5:
			return 17;
		case 3:
			return 18;
		case 4:
			return 16;
		case 27:
			return 7;
		case 34:
			return 22;
		case 33:
			return 11;
		case 35:
			return 14;
		case 49:
		case 50:
			return 30;
		case 47:
		case 48:
			return 13;
		case 28:
		case 29:
			return 8;
		case 23:
		case 24:
			return 5;
		case 25:
		case 26:
			return 6;
		case 45:
		case 46:
			return 15;
		case 21:
		case 22:
			return 4;
		case 43:
		case 44:
			return 29;
		case 38:
			return 24;
		case 39:
			return 25;
		case 36:
			return 23;
		case 37:
			return 21;
		case 40:
			return 26;
		case 41:
			return 27;
		case 42:
			return 28;
		case 30:
			return 9;
		case 31:
		case 32:
			return 10;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return 1;
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return 2;
		case 19:
		case 20:
			return 3;
		case 52:
			return 33;
		case 51:
			return 32;
		default:
	}
	return -1;
}

int func_377()//Position - 0x27DC09
{
	return 1000;
}

int func_378(bool bParam0, bool bParam1)//Position - 0x287769
{
	if (bParam0 != -1)
	{
		if (Global_1970897[bParam0 /*68*/].f_18.f_10 != 0 || !bParam1)
		{
			return Global_1970897[bParam0 /*68*/].f_18.f_10;
		}
	}
	if (bParam1)
	{
		return Global_1966500.f_13;
	}
	return 0;
}

int func_379(int iParam0)//Position - 0x2A6025
{
	switch (iParam0)
	{
		case 22:
		case 25:
			return 0;
		default:
	}
	return 1;
}

int func_380(int iParam0)//Position - 0x2A6108
{
	switch (iParam0)
	{
		case 24:
		case 21:
		case 25:
			return 1;
		default:
	}
	return 0;
}

Vector3 func_381(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2A67C1
{
	float fVar0;
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -6.2026f, -85.8151f, 56.8303f;
						case 1:
							return -1570.7666f, -1129.0973f, 2.22f;
						case 2:
							return 494.933f, -1541.2828f, 28.2841f;
						case 3:
							return -1570.9714f, -1130.2518f, 2.2176f;
						case 4:
							return -1573.9377f, -1129.7382f, 2.0385f;
						case 5:
							return -1572.9698f, -1133.0565f, 1.9642f;
						case 6:
							return -1573.9762f, -1132.4882f, 1.9129f;
						case 7:
							return -1570.4154f, -1133.0519f, 2.1588f;
						case 8:
							return -1573.527f, -1130.5787f, 2.0322f;
						case 9:
							return -1571.9192f, -1129.7432f, 2.1919f;
						case 10:
							return -1571.2885f, -1133.2788f, 2.0822f;
						case 11:
							return 493.902f, -1542.9325f, 28.2806f;
						case 12:
							return 497.2683f, -1538.8578f, 28.2819f;
						case 13:
							return 497.7681f, -1537.8204f, 28.289f;
						case 14:
							return 496.5292f, -1539.6626f, 28.2817f;
						case 15:
							return 495.8922f, -1540.4862f, 28.2812f;
						case 16:
							return -6.5139f, -84.8662f, 56.7756f;
						case 17:
							return -6.1122f, -83.0137f, 57.263f;
						case 18:
							return -4.9508f, -82.7081f, 57.1712f;
						default:
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 350.0906f, -186.9666f, 57.3458f;
						case 1:
							return -1514.7568f, -1232.7103f, 1.3284f;
						case 2:
							return 127.4534f, -1576.6377f, 28.4842f;
						case 3:
							return -1514.8845f, -1233.9757f, 1.3244f;
						case 4:
							return -1517.355f, -1232.163f, 1.322f;
						case 5:
							return -1518.0446f, -1235.5367f, 1.3363f;
						case 6:
							return -1518.8959f, -1234.7008f, 1.3351f;
						case 7:
							return -1518.708f, -1231.07f, 1.321f;
						case 8:
							return -1519.1528f, -1235.8257f, 1.3398f;
						case 9:
							return -1516.0153f, -1233.0913f, 1.3227f;
						case 10:
							return -1519.483f, -1231.49f, 1.325f;
						case 11:
							return 129.0774f, -1577.9974f, 28.4839f;
						case 12:
							return 131.4777f, -1580.1753f, 28.5083f;
						case 13:
							return 124.9785f, -1574.2247f, 28.434f;
						case 14:
							return 125.4729f, -1574.8843f, 28.4704f;
						case 15:
							return 126.535f, -1575.6726f, 28.4552f;
						case 16:
							return 349.33f, -187.6954f, 57.1358f;
						case 17:
							return 345.3698f, -187.4418f, 56.8825f;
						case 18:
							return 345.9389f, -186.2059f, 57.9988f;
						default:
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -18.1067f, -1031.2568f, 27.9412f;
						case 1:
							return -1954.2444f, -656.6883f, 5.7589f;
						case 2:
							return -743.3499f, 244.975f, 76.3378f;
						case 3:
							return -1955.9114f, -658.6602f, 5.4343f;
						case 4:
							return -1955.9736f, -659.9794f, 5.3433f;
						case 5:
							return -1957.0974f, -659.4893f, 5.2423f;
						case 6:
							return -1953.76f, -660.2953f, 5.5836f;
						case 7:
							return -1952.704f, -660.6775f, 5.6835f;
						case 8:
							return -1953.5111f, -661.1762f, 5.557f;
						case 9:
							return -1952.1145f, -657.161f, 5.9838f;
						case 10:
							return -1954.9762f, -656.4246f, 5.6895f;
						case 11:
							return -740.4633f, 243.8979f, 75.5489f;
						case 12:
							return -739.4404f, 244.0474f, 75.666f;
						case 13:
							return -736.5172f, 245.4668f, 76.0777f;
						case 14:
							return -735.749f, 244.8191f, 76.1551f;
						case 15:
							return -744.3978f, 242.074f, 75.099f;
						case 16:
							return -17.8208f, -1034.8915f, 27.9331f;
						case 17:
							return -18.2395f, -1033.7844f, 27.9374f;
						case 18:
							return -19.8094f, -1031.6459f, 28.4126f;
						default:
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 359.776f, -796.791f, 28.293f;
						case 1:
							return -1785.649f, -865.632f, 6.603f;
						case 2:
							return -430.948f, 261.05f, 82.008f;
						case 3:
							return -1789.681f, -866.724f, 6.382f;
						case 4:
							return -1789.094f, -867.805f, 6.35f;
						case 5:
							return -1788.75f, -864.634f, 6.52f;
						case 6:
							return -1787.185f, -867.474f, 6.461f;
						case 7:
							return -1786.204f, -867.254f, 6.522f;
						case 8:
							return -1786.785f, -868.209f, 6.457f;
						case 9:
							return -1789.42f, -865.131f, 6.483f;
						case 10:
							return -1786.382f, -864.809f, 6.595f;
						case 11:
							return -429.068f, 259.924f, 82.016f;
						case 12:
							return -427.837f, 259.692f, 82.044f;
						case 13:
							return -425.09f, 259.876f, 82.08f;
						case 14:
							return -424.614f, 259.042f, 82.114f;
						case 15:
							return -433.232f, 260.249f, 81.984f;
						case 16:
							return 358.013f, -793.843f, 28.293f;
						case 17:
							return 356.953f, -793.849f, 28.294f;
						case 18:
							return 359.151f, -797.838f, 29.261f;
						default:
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 255.287f, -14.358f, 72.654f;
						case 1:
							return -1896.146f, -705.612f, 6.702f;
						case 2:
							return -581.586f, -1744.691f, 21.397f;
						case 3:
							return -1898.068f, -707.924f, 6.423f;
						case 4:
							return -1896.638f, -707.559f, 6.549f;
						case 5:
							return -1899.091f, -706.463f, 6.418f;
						case 6:
							return -1899.806f, -705.309f, 6.427f;
						case 7:
							return -1898.384f, -705.459f, 6.557f;
						case 8:
							return -1897.569f, -709.48f, 6.374f;
						case 9:
							return -1896.639f, -708.878f, 6.472f;
						case 10:
							return -1896.772f, -704.87f, 6.725f;
						case 11:
							return -583.261f, -1743.281f, 21.466f;
						case 12:
							return -584.368f, -1742.533f, 21.511f;
						case 13:
							return -587.173f, -1740.389f, 21.626f;
						case 14:
							return -587.003f, -1739.317f, 21.639f;
						case 15:
							return -579.824f, -1745.688f, 21.354f;
						case 16:
							return 259.315f, -13.976f, 72.709f;
						case 17:
							return 260.458f, -14.592f, 72.717f;
						case 18:
							return 256.119f, -13.268f, 73.683f;
						default:
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -346.962f, 77.771f, 63.139f;
						case 1:
							return -1290.448f, -1710.782f, 1.615f;
						case 2:
							return 72.8f, -1028.47f, 28.475f;
						case 3:
							return -1296.12f, -1708.985f, 1.575f;
						case 4:
							return -1294.181f, -1709.082f, 1.602f;
						case 5:
							return -1294.705f, -1710.596f, 1.634f;
						case 6:
							return -1291.283f, -1707.813f, 1.608f;
						case 7:
							return -1292.18f, -1708.417f, 1.583f;
						case 8:
							return -1291.258f, -1708.949f, 1.582f;
						case 9:
							return -1293.115f, -1712.123f, 1.642f;
						case 10:
							return -1290.648f, -1711.904f, 1.607f;
						case 11:
							return 73.621f, -1026.908f, 28.476f;
						case 12:
							return 74.074f, -1025.744f, 28.477f;
						case 13:
							return 74.6f, -1023.616f, 28.478f;
						case 14:
							return 75.169f, -1022.99f, 28.478f;
						case 15:
							return 71.603f, -1031.054f, 28.472f;
						case 16:
							return -342.738f, 76.933f, 63.349f;
						case 17:
							return -341.892f, 78.028f, 63.505f;
						case 18:
							return -345.968f, 77.305f, 64.117f;
						default:
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 200.404f, -1691.435f, 28.65f;
						case 1:
							return -1364.575f, -1597.641f, 1.608f;
						case 2:
							return -244.799f, -354.972f, 28.989f;
						case 3:
							return -1368.671f, -1600.198f, 1.586f;
						case 4:
							return -1366.856f, -1599.343f, 1.608f;
						case 5:
							return -1366.848f, -1600.843f, 1.595f;
						case 6:
							return -1363.859f, -1599.172f, 1.732f;
						case 7:
							return -1364.619f, -1600.963f, 1.685f;
						case 8:
							return -1363.518f, -1601.517f, 1.601f;
						case 9:
							return -1364.528f, -1602.055f, 1.64f;
						case 10:
							return -1365.285f, -1598.114f, 1.664f;
						case 11:
							return -245.272f, -352.48f, 28.988f;
						case 12:
							return -245.455f, -351.223f, 28.988f;
						case 13:
							return -245.127f, -347.21f, 28.993f;
						case 14:
							return -245.649f, -348.013f, 28.989f;
						case 15:
							return -244.101f, -349.922f, 29.002f;
						case 16:
							return 198.009f, -1694.654f, 28.524f;
						case 17:
							return 198.497f, -1693.529f, 28.572f;
						case 18:
							return 199.939f, -1690.036f, 29.558f;
						default:
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 185.8f, -157.893f, 55.33f;
						case 1:
							return -1440.82f, -1448.238f, 1.564f;
						case 2:
							return 99.343f, -1316.014f, 28.29f;
						case 3:
							return -1443.399f, -1446.332f, 1.569f;
						case 4:
							return -1442.889f, -1444.519f, 1.566f;
						case 5:
							return -1441.892f, -1444.049f, 1.562f;
						case 6:
							return -1442.04f, -1445.111f, 1.564f;
						case 7:
							return -1442.828f, -1447.603f, 1.568f;
						case 8:
							return -1440.017f, -1445.782f, 1.559f;
						case 9:
							return -1440.105f, -1447.459f, 1.561f;
						case 10:
							return -1444.578f, -1444.74f, 1.572f;
						case 11:
							return 99.971f, -1317.683f, 28.292f;
						case 12:
							return 100.55f, -1318.659f, 28.292f;
						case 13:
							return 103.268f, -1318.166f, 28.262f;
						case 14:
							return 103.021f, -1318.955f, 28.269f;
						case 15:
							return 98.098f, -1313.414f, 28.287f;
						case 16:
							return 183.915f, -158.59f, 55.317f;
						case 17:
							return 182.828f, -158.899f, 55.317f;
						case 18:
							return 186.446f, -159.439f, 56.116f;
						default:
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return -784.682f, -197.407f, 36.284f;
						case 1:
							return -1459.442f, -1385.725f, 1.7f;
						case 2:
							return 504.921f, -1622.449f, 28.369f;
						case 3:
							return -1460.56f, -1390.569f, 1.595f;
						case 4:
							return -1459.601f, -1389.198f, 1.648f;
						case 5:
							return -1460.972f, -1387.428f, 1.611f;
						case 6:
							return -1462.778f, -1384.363f, 1.574f;
						case 7:
							return -1461.557f, -1384.691f, 1.618f;
						case 8:
							return -1461.759f, -1383.557f, 1.627f;
						case 9:
							return -1458.955f, -1390.577f, 1.684f;
						case 10:
							return -1459.68f, -1384.877f, 1.702f;
						case 11:
							return 503.581f, -1623.504f, 28.368f;
						case 12:
							return 503.01f, -1624.272f, 28.37f;
						case 13:
							return 500.704f, -1627.224f, 28.377f;
						case 14:
							return 499.787f, -1627.151f, 28.37f;
						case 15:
							return 506.831f, -1620.483f, 28.367f;
						case 16:
							return -787.412f, -194.994f, 36.284f;
						case 17:
							return -788.298f, -194.58f, 36.284f;
						case 18:
							return -786.023f, -198.155f, 36.915f;
						default:
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -385.2935f, -150.6294f, 37.5323f;
						case 1:
							return -1850.9902f, -794.7486f, 5.0092f;
						case 2:
							return 255.1374f, -1014.089f, 28.2691f;
						case 3:
							return -1856.4802f, -794.0271f, 4.6744f;
						case 4:
							return -1856.3395f, -795.5011f, 4.5455f;
						case 5:
							return -1857.7661f, -794.902f, 4.4777f;
						case 6:
							return -1853.9391f, -794.8177f, 4.8217f;
						case 7:
							return -1853.9294f, -791.4667f, 5.0324f;
						case 8:
							return -1853.0151f, -791.9612f, 5.0499f;
						case 9:
							return -1853.115f, -791.0764f, 5.0895f;
						case 10:
							return -1851.2391f, -795.6143f, 4.953f;
						case 11:
							return 254.4998f, -1010.5359f, 28.2722f;
						case 12:
							return 254.7505f, -1009.376f, 28.2733f;
						case 13:
							return 256.3451f, -1005.7694f, 28.2705f;
						case 14:
							return 255.7505f, -1004.9838f, 28.2701f;
						case 15:
							return 252.9288f, -1015.3057f, 28.2668f;
						case 16:
							return -387.9428f, -150.7018f, 37.5323f;
						case 17:
							return -388.8581f, -150.3491f, 37.5323f;
						case 18:
							return -384.6611f, -152.1163f, 38.1768f;
						default:
					}
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					switch (iParam2)
					{
						case 50:
							return -720.153f, -1442.05f, 4.001f;
						case 51:
							return -722.215f, -1469.837f, 4.001f;
						case 52:
							return -760.067f, -1457.884f, 4.001f;
						case 53:
							return -744.003f, -1437.925f, 4.001f;
						case 54:
							return -717.525f, -1451.659f, 4.001f;
						case 55:
							return -736.89f, -1476.571f, 4.001f;
						case 56:
							return -751.053f, -1448.276f, 4.001f;
						case 57:
							return -732.202f, -1429.561f, 4.001f;
						case 58:
							return -759.796f, -1469.092f, 4.001f;
						case 59:
							return -720.978f, -1421.725f, 4.001f;
						default:
					}
					return -720.153f, -1442.05f, 4.001f;
				default:
			}
			switch (iParam2)
			{
				case 50:
					switch (iParam0)
					{
						case 1:
							return 1248.228f, -3103.985f, 6.053f;
						case 2:
							return 1246.7533f, -3099.5562f, 4.8541f;
						case 3:
							return 1248.316f, -3103.067f, 5.957f;
						case 4:
							return 1251.2728f, -3112.801f, 4.8281f;
						case 5:
							return 1249.0396f, -3108.78f, 5.0284f;
						case 6:
							return 1246.321f, -3111.958f, 5.028f;
						case 7:
							return 1244.37f, -3107.0342f, 5.0285f;
						case 8:
							return 1244.3179f, -3108.1096f, 5.0284f;
						case 9:
							return 1248.564f, -3107.6292f, 5.0284f;
						case 10:
							return 1247.88f, -3108.8892f, 5.0284f;
						case 11:
							return 1251.5623f, -3111.3445f, 4.8104f;
						case 12:
							return 1246.333f, -3113.187f, 5.028f;
						case 13:
							return 1245.453f, -3112.824f, 5.028f;
						case 14:
							return 1242.8461f, -3104.0857f, 5.0285f;
						case 15:
							return 1241.7498f, -3103.2852f, 5.0284f;
						default:
					}
					break;
				case 51:
					switch (iParam0)
					{
						case 1:
							return 1174.176f, -371.396f, 67.345f;
						case 2:
							return 1173.712f, -367.522f, 67.23f;
						case 3:
							return 1189.587f, -358.2611f, 67.9775f;
						case 4:
							return 1181.2357f, -355.95f, 67.6025f;
						case 5:
							return 1173.293f, -375.059f, 67.335f;
						case 6:
							return 1178.392f, -374.256f, 67.622f;
						case 7:
							return 1172.896f, -371.05f, 67.261f;
						case 8:
							return 1179.202f, -374.883f, 67.655f;
						case 9:
							return 1173.361f, -376.434f, 67.354f;
						case 10:
							return 1179.7737f, -356.0942f, 67.5162f;
						case 11:
							return 1172.422f, -375.927f, 67.294f;
						case 12:
							return 1180.2992f, -357.0907f, 67.5592f;
						case 13:
							return 1188.4607f, -358.2688f, 67.9678f;
						case 14:
							return 1168.6085f, -370.2458f, 66.9921f;
						case 15:
							return 1168.6378f, -371.5166f, 66.9892f;
						default:
					}
					break;
				case 52:
					switch (iParam0)
					{
						case 1:
							return 1009.901f, -2458.745f, 28.721f;
						case 2:
							return 1016.6006f, -2464.0935f, 27.4666f;
						case 3:
							return 1010.796f, -2458.979f, 28.638f;
						case 4:
							return 1007.4747f, -2457.9792f, 27.5962f;
						case 5:
							return 1010.495f, -2450.953f, 27.411f;
						case 6:
							return 1016.1119f, -2453.7908f, 27.4586f;
						case 7:
							return 1009.793f, -2454.135f, 27.49f;
						case 8:
							return 1006.3816f, -2458.6812f, 27.6202f;
						case 9:
							return 1011.117f, -2449.813f, 27.4f;
						case 10:
							return 1020.9005f, -2460.9956f, 27.5879f;
						case 11:
							return 1017.0186f, -2453.3716f, 27.444f;
						case 12:
							return 1007.4373f, -2459.3848f, 27.6377f;
						case 13:
							return 1011.919f, -2450.819f, 27.402f;
						case 14:
							return 1008.692f, -2453.74f, 27.484f;
						case 15:
							return 1021.0383f, -2462.532f, 27.5501f;
						default:
					}
					break;
				case 53:
					switch (iParam0)
					{
						case 1:
							return -1446.806f, -883.084f, 10.761f;
						case 2:
							return -1453.5231f, -885.1664f, 9.6752f;
						case 3:
							return -1434.1677f, -886.1555f, 9.8585f;
						case 4:
							return -1448.5143f, -878.5192f, 9.7318f;
						case 5:
							return -1442.625f, -876.709f, 9.931f;
						case 6:
							return -1442.7681f, -884.382f, 9.8096f;
						case 7:
							return -1445.469f, -883.662f, 10.767f;
						case 8:
							return -1447.3491f, -877.611f, 9.7926f;
						case 9:
							return -1442.1935f, -883.1953f, 9.8115f;
						case 10:
							return -1441.289f, -875.86f, 9.938f;
						case 11:
							return -1433.4895f, -887.1486f, 9.8522f;
						case 12:
							return -1441.099f, -883.9621f, 9.8127f;
						case 13:
							return -1442.871f, -875.403f, 9.916f;
						case 14:
							return -1455.706f, -877.9001f, 9.6575f;
						case 15:
							return -1454.3868f, -878.1523f, 9.6539f;
						default:
					}
					break;
				case 54:
					switch (iParam0)
					{
						case 1:
							return 368.5621f, -839.816f, 28.2917f;
						case 2:
							return 370.1738f, -842.9114f, 28.2274f;
						case 3:
							return 351.041f, -837.5028f, 28.2916f;
						case 4:
							return 362.2213f, -832.619f, 28.2916f;
						case 5:
							return 359.929f, -838.2189f, 28.2916f;
						case 6:
							return 365.9248f, -836.2479f, 28.2917f;
						case 7:
							return 369.5723f, -839.8442f, 28.2917f;
						case 8:
							return 358.4692f, -837.5182f, 28.2916f;
						case 9:
							return 365.6709f, -834.7831f, 28.2916f;
						case 10:
							return 362.1678f, -831.3858f, 28.2927f;
						case 11:
							return 349.8235f, -836.9639f, 28.2916f;
						case 12:
							return 366.9706f, -835.4464f, 28.2917f;
						case 13:
							return 359.2328f, -836.8672f, 28.3195f;
						case 14:
							return 372.3253f, -837.9888f, 28.2917f;
						case 15:
							return 372.8765f, -839.0621f, 28.2917f;
						default:
					}
					break;
				case 55:
					switch (iParam0)
					{
						case 1:
							return -435.986f, 137.22f, 64.786f;
						case 2:
							return -439.2877f, 121.8959f, 63.6416f;
						case 3:
							return -442.4803f, 115.4645f, 63.674f;
						case 4:
							return -442.914f, 143.11f, 63.695f;
						case 5:
							return -434.5463f, 139.9002f, 63.8221f;
						case 6:
							return -438.5113f, 136.9946f, 63.7637f;
						case 7:
							return -434.528f, 137.21f, 64.792f;
						case 8:
							return -444.129f, 143.843f, 63.696f;
						case 9:
							return -433.7332f, 141.016f, 63.841f;
						case 10:
							return -439.865f, 137.694f, 63.7354f;
						case 11:
							return -434.8772f, 114.4857f, 63.8206f;
						case 12:
							return -442.795f, 144.581f, 63.691f;
						case 13:
							return -435.0443f, 141.3033f, 63.8015f;
						case 14:
							return -443.5722f, 116.3928f, 63.6512f;
						case 15:
							return -434.2003f, 115.6764f, 63.8796f;
						default:
					}
					break;
				case 56:
					switch (iParam0)
					{
						case 1:
							return 1088.4926f, -1821.1558f, 35.8694f;
						case 2:
							return 1091.358f, -1819.0553f, 35.7914f;
						case 3:
							return 1079.766f, -1817.1373f, 36.3069f;
						case 4:
							return 1076.3862f, -1809.8352f, 36.3069f;
						case 5:
							return 1076.4457f, -1816.324f, 36.3069f;
						case 6:
							return 1083.4457f, -1809.2412f, 35.6032f;
						case 7:
							return 1088.079f, -1820.093f, 35.8455f;
						case 8:
							return 1075.4695f, -1817.1625f, 36.3069f;
						case 9:
							return 1082.7084f, -1808.058f, 35.5734f;
						case 10:
							return 1075.5198f, -1809.0327f, 36.3069f;
						case 11:
							return 1079.7203f, -1818.2275f, 36.3069f;
						case 12:
							return 1075.0901f, -1816.071f, 36.3069f;
						case 13:
							return 1082.1505f, -1808.9495f, 35.5871f;
						case 14:
							return 1086.1533f, -1825.257f, 35.9348f;
						case 15:
							return 1087.1957f, -1825.2506f, 35.9418f;
						default:
					}
					break;
				case 57:
					switch (iParam0)
					{
						case 1:
							return -1202.8943f, -408.9779f, 32.9742f;
						case 2:
							return -1201.2389f, -412.1422f, 32.9202f;
						case 3:
							return -1195.0145f, -395.3473f, 33.6803f;
						case 4:
							return -1208.1501f, -402.579f, 37.0992f;
						case 5:
							return -1192.8046f, -400.4597f, 33.3723f;
						case 6:
							return -1196.9203f, -403.671f, 33.1849f;
						case 7:
							return -1201.7772f, -408.6503f, 32.9981f;
						case 8:
							return -1191.6453f, -400.2199f, 33.4099f;
						case 9:
							return -1209.1704f, -401.7023f, 37.0994f;
						case 10:
							return -1197.9321f, -404.5459f, 33.1384f;
						case 11:
							return -1206.036f, -406.7897f, 32.947f;
						case 12:
							return -1194.9263f, -393.9713f, 33.8587f;
						case 13:
							return -1191.7603f, -401.5443f, 33.381f;
						case 14:
							return -1209.4547f, -402.9088f, 37.0991f;
						case 15:
							return -1207.4161f, -407.4379f, 32.9188f;
						default:
					}
					break;
				case 58:
					switch (iParam0)
					{
						case 1:
							return 1176.5388f, -3328.9229f, 5.0287f;
						case 2:
							return 1173.2058f, -3329.7676f, 4.9016f;
						case 3:
							return 1187.2859f, -3335.3223f, 4.8464f;
						case 4:
							return 1196.1084f, -3334.3784f, 4.8782f;
						case 5:
							return 1189.2931f, -3329.0999f, 4.5823f;
						case 6:
							return 1182.6711f, -3332.5813f, 5.0288f;
						case 7:
							return 1176.5209f, -3330.0916f, 5.0288f;
						case 8:
							return 1188.9441f, -3327.627f, 4.5288f;
						case 9:
							return 1195.4513f, -3335.619f, 4.8369f;
						case 10:
							return 1183.4407f, -3331.6465f, 5.0288f;
						case 11:
							return 1179.5781f, -3326.209f, 5.0287f;
						case 12:
							return 1190.3179f, -3327.8015f, 4.5288f;
						case 13:
							return 1194.7662f, -3334.613f, 4.8705f;
						case 14:
							return 1185.8978f, -3335.3752f, 4.8447f;
						case 15:
							return 1180.6918f, -3326.83f, 5.0287f;
						default:
					}
					break;
				case 59:
					switch (iParam0)
					{
						case 1:
							return -1557.64f, -483.142f, 34.488f;
						case 2:
							return -1555.301f, -485.808f, 34.478f;
						case 3:
							return -1554.292f, -477.991f, 34.455f;
						case 4:
							return -1548.797f, -476.663f, 34.467f;
						case 5:
							return -1554.271f, -472.687f, 34.598f;
						case 6:
							return -1547.77f, -472.022f, 34.446f;
						case 7:
							return -1556.611f, -482.503f, 34.493f;
						case 8:
							return -1547.151f, -470.806f, 34.442f;
						case 9:
							return -1555.416f, -472.966f, 34.626f;
						case 10:
							return -1548.438f, -475.702f, 34.463f;
						case 11:
							return -1555.241f, -477.518f, 34.448f;
						case 12:
							return -1546.503f, -471.662f, 34.447f;
						case 13:
							return -1555.227f, -471.799f, 34.661f;
						case 14:
							return -1562.623f, -482.133f, 34.422f;
						case 15:
							return -1562.566f, -483.155f, 34.432f;
						default:
					}
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 89:
					switch (iParam3)
					{
						case 0:
							return 1270.766f, -372.455f, 68.026f;
						case 1:
							return 1105.152f, -778.851f, 57.263f;
						case 2:
							return 1387.088f, -580.673f, 73.339f;
						case 3:
							return 878.357f, -600.191f, 57.223f;
						case 4:
							return 1020.932f, -682.93f, 55.686f;
						case 5:
							return 1245.72f, -595.355f, 68.489f;
						case 6:
							return 1143.973f, -375.806f, 66.049f;
						case 7:
							return 1000.893f, -594.191f, 58.232f;
						case 8:
							return 1017.046f, -461.949f, 62.9f;
						case 9:
							return 1205.096f, -659.606f, 60.691f;
						default:
					}
					break;
				case 90:
					switch (iParam3)
					{
						case 0:
							return 1840.813f, 3902.574f, 32.261f;
						case 1:
							return 1734.763f, 3952.604f, 31.744f;
						case 2:
							return 1937.371f, 3903f, 31.606f;
						case 3:
							return 1843.956f, 3776.344f, 32.152f;
						case 4:
							return 1733.679f, 3791.078f, 33.564f;
						case 5:
							return 1583.706f, 3795.385f, 33.762f;
						case 6:
							return 1620.782f, 3706.165f, 33.361f;
						case 7:
							return 1712.676f, 3881.071f, 33.886f;
						case 8:
							return 1715.616f, 3675.015f, 33.839f;
						case 9:
							return 1944.577f, 3799.444f, 31.037f;
						default:
					}
					break;
				case 91:
					switch (iParam3)
					{
						case 0:
							return -358.474f, 6154.974f, 30.469f;
						case 1:
							return -140.69f, 6342.884f, 30.491f;
						case 2:
							return -235.701f, 6201.066f, 30.944f;
						case 3:
							return -49.858f, 6361.739f, 30.514f;
						case 4:
							return -110.094f, 6245.832f, 30.339f;
						case 5:
							return -111.305f, 6571.361f, 28.522f;
						case 6:
							return -61.585f, 6448.617f, 30.493f;
						case 7:
							return -367.345f, 6284.153f, 28.974f;
						case 8:
							return -274.748f, 6356.462f, 31.489f;
						case 9:
							return -196.179f, 6463.149f, 30.002f;
						default:
					}
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1041.6207f, -225.9267f, 38.0126f;
				case 1:
					return -241.2316f, -771.1162f, 32.2386f;
				case 2:
					return 402.0372f, -215.0059f, 58.2583f;
				case 3:
					return 2618.8186f, 264.5169f, 99.9543f;
				default:
			}
			break;
		case 9:
			switch (iParam2)
			{
				case 71:
					switch (iParam0)
					{
						case 0:
							return -253.6976f, 6481.6675f, 10.3806f;
						case 1:
							return -256.5499f, 6488.5903f, 10.5612f;
						case 2:
							return -255.3678f, 6494.9155f, 10.43f;
						case 3:
							return -249.8232f, 6488.0303f, 10.3591f;
						case 4:
							return -261.2525f, 6493.056f, 10.0709f;
						case 5:
							return -246.8141f, 6482.183f, 10.4148f;
						case 6:
							return -255.5302f, 6476.581f, 10.4861f;
						case 7:
							return -252.8314f, 6492.959f, 10.5207f;
						case 8:
							return -253.2473f, 6486.5312f, 10.3549f;
						default:
					}
					break;
				case 72:
					switch (iParam0)
					{
						case 0:
							return -326.5845f, -2547.8499f, 5.0006f;
						case 1:
							return -319.808f, -2542.22f, 5.0006f;
						case 2:
							return -328.4217f, -2542.7156f, 5.0006f;
						case 3:
							return -334.6011f, -2550.5698f, 5.0006f;
						case 4:
							return -323.4081f, -2542.0752f, 5.0006f;
						case 5:
							return -331.026f, -2547.9722f, 5.0006f;
						case 6:
							return -334.4609f, -2545.2422f, 5.0007f;
						case 7:
							return -326.1193f, -2538.343f, 5.0006f;
						case 8:
							return -331.2742f, -2541.8801f, 5.0006f;
						default:
					}
					break;
				case 73:
					switch (iParam0)
					{
						case 0:
							return 2710.5747f, 4193.949f, 42.7753f;
						case 1:
							return 2704.04f, 4195.8164f, 42.8875f;
						case 2:
							return 2704.4983f, 4189.8774f, 42.7691f;
						case 3:
							return 2711.227f, 4189.3716f, 42.6762f;
						case 4:
							return 2715.475f, 4193.9907f, 42.6546f;
						case 5:
							return 2700.382f, 4191.9956f, 42.9431f;
						case 6:
							return 2708.751f, 4186.515f, 42.6663f;
						case 7:
							return 2701.233f, 4187.968f, 42.8911f;
						case 8:
							return 2716.3127f, 4189.121f, 42.5431f;
						default:
					}
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 77:
					switch (iParam0)
					{
						case 0:
							return -742.4603f, -1311.6948f, 5.372f;
						case 1:
							return -778.9803f, -1326.4216f, 5.0472f;
						default:
					}
					break;
				case 78:
					switch (iParam0)
					{
						case 0:
							return 1020.779f, 2653.809f, 40.018f;
						case 1:
							return 1055.407f, 2658.265f, 39.901f;
						default:
					}
					break;
				case 79:
					switch (iParam0)
					{
						case 0:
							return 2506.521f, 4077.922f, 39.057f;
						case 1:
							return 2517.8186f, 4114.758f, 38.8289f;
						default:
					}
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 80:
					switch (iParam0)
					{
						case 0:
							return 3218.791f, 1459.082f, 0.4543f;
						case 1:
							return 3218.636f, 1450.751f, 0.4543f;
						case 2:
							return 3246.8765f, 1457.9807f, 5.7267f;
						default:
					}
					break;
				case 81:
					switch (iParam0)
					{
						case 0:
							return -166.594f, 7389.195f, 0.4543f;
						case 1:
							return -157.359f, 7387.641f, 0.4543f;
						case 2:
							return -170.211f, 7416.21f, 5.7267f;
						default:
					}
					break;
				case 82:
					switch (iParam0)
					{
						case 0:
							return -2496.779f, 5058.658f, 0.4543f;
						case 1:
							return -2490.782f, 5050.8f, 0.4543f;
						case 2:
							return -2481.807f, 5079.953f, 5.7267f;
						default:
					}
					break;
			}
			break;
		case 17:
			switch (iParam2)
			{
				case 102:
					switch (iParam0)
					{
						case 0:
							return 33.721f, 3661.942f, 38.742f;
						case 1:
							return 35.989f, 3665.173f, 38.728f;
						case 2:
							return 35.392f, 3666.227f, 38.723f;
						case 3:
							return 40.277f, 3656.787f, 38.8f;
						case 4:
							return 33.264f, 3652.785f, 38.755f;
						case 5:
							return 48.033f, 3672.626f, 38.743f;
						case 6:
							return 46.176f, 3680.676f, 38.792f;
						case 7:
							return 44.939f, 3679.813f, 38.82f;
						case 8:
							return 56.145f, 3671.855f, 38.726f;
						default:
					}
					break;
				case 103:
					switch (iParam0)
					{
						case 0:
							return -604.777f, -1058.103f, 20.788f;
						case 1:
							return -608.604f, -1059.475f, 20.788f;
						case 2:
							return -613.675f, -1061.703f, 20.788f;
						case 3:
							return -612.355f, -1062.175f, 20.788f;
						case 4:
							return -614.521f, -1055.249f, 20.788f;
						case 5:
							return -618.207f, -1056.835f, 20.788f;
						case 6:
							return -618.59f, -1057.848f, 20.788f;
						case 7:
							return -621.598f, -1059.304f, 20.788f;
						case 8:
							return -615.487f, -1052.418f, 20.788f;
						default:
					}
					break;
				case 104:
					switch (iParam0)
					{
						case 0:
							return 210.8655f, -2007.3256f, 17.8615f;
						case 1:
							return 208.455f, -2015.494f, 17.584f;
						case 2:
							return 209.732f, -2015.179f, 17.601f;
						case 3:
							return 206.7269f, -2006.411f, 17.8615f;
						case 4:
							return 215.7208f, -2013.7445f, 17.8587f;
						case 5:
							return 203.39f, -2016.403f, 17.574f;
						case 6:
							return 214.292f, -2017.779f, 17.655f;
						case 7:
							return 214.496f, -2019.364f, 17.636f;
						case 8:
							return 219.028f, -2016.6f, 17.85f;
						default:
					}
					break;
			}
			break;
		case 1:
			fVar0 = 3.4f;
			switch (iParam2)
			{
				case 10:
					switch (iParam0)
					{
						case 0:
							return 2477.508f, 3384.677f, 48.727f;
						case 1:
							return 2472.729f, 3385.683f, 48.86f;
						case 2:
							return 2470f, 3382.201f, 49.054f;
						case 3:
							return 2475.757f, 3384.031f, 48.792f;
						case 4:
							return 2478.99f, 3385.99f, 48.674f;
						case 5:
							return 2467.675f, 3387.6235f, (49.0792f + fVar0);
						case 6:
							return 2468.935f, 3381.697f, 49.092f;
						case 7:
							return 2469.955f, 3381.02f, 49.109f;
						case 8:
							return 2473.734f, 3383.334f, 48.892f;
						case 9:
							return 2473.253f, 3388.081f, 48.819f;
						case 10:
							return 2477.334f, 3388.304f, 48.717f;
						case 11:
							return 2474.629f, 3389.6f, 48.778f;
						case 12:
							return 2473.109f, 3384.322f, 48.887f;
						case 13:
							return 2471.426f, 3384.647f, 48.918f;
						case 14:
							return 2469.1213f, 3389.6875f, (48.9759f + fVar0);
						case 15:
							return 2470.187f, 3384.196f, 48.964f;
						case 16:
							return 2471.667f, 3386.25f, 48.888f;
						case 17:
							return 2472.687f, 3383.073f, 48.929f;
						case 18:
							return 2476.572f, 3388.745f, 48.736f;
						case 19:
							return 2475.371f, 3385.567f, 48.786f;
						case 20:
							return 2473.36f, 3386.888f, 48.825f;
						case 21:
							return 2474.504f, 3388.472f, 48.787f;
						case 22:
							return 2477.434f, 3389.219f, 48.722f;
						case 23:
							return 2474.804f, 3390.958f, 48.772f;
						case 24:
							return 2474.74f, 3387.102f, 48.791f;
						case 25:
							return 2479.196f, 3386.865f, 48.662f;
						case 26:
							return 2471.735f, 3381.784f, 49.018f;
						case 27:
							return 2475.967f, 3383.282f, 48.809f;
						case 28:
							return 2476.227f, 3385.909f, 48.765f;
						case 29:
							return 2470.741f, 3391.6455f, (48.8858f + fVar0);
						default:
					}
					break;
				case 11:
					switch (iParam0)
					{
						case 0:
							return 1601.5536f, 3323.4097f, (39.3274f + fVar0);
						case 1:
							return 1603.7045f, 3322.1797f, (39.3904f + fVar0);
						case 2:
							return 1599.2756f, 3325.3694f, (39.183f + fVar0);
						case 3:
							return 1607.451f, 3324.5027f, 39.4025f;
						case 4:
							return 1606.0096f, 3325.9485f, 39.3474f;
						case 5:
							return 1604.1699f, 3327.2344f, 39.2807f;
						case 6:
							return 1602.0951f, 3328.5393f, 39.1738f;
						case 7:
							return 1604.878f, 3329.9666f, 39.2092f;
						case 8:
							return 1608.2194f, 3330.1562f, 39.2263f;
						case 9:
							return 1609.0939f, 3327.434f, 39.3174f;
						case 10:
							return 1612.0555f, 3324.878f, 39.312f;
						case 11:
							return 1607.1023f, 3327.8884f, 39.2895f;
						case 12:
							return 1600.6135f, 3329.321f, 39.1024f;
						case 13:
							return 1605.3391f, 3332.4329f, 38.9867f;
						case 14:
							return 1602.6942f, 3331.733f, 38.977f;
						case 15:
							return 1603.835f, 3329.8765f, 39.1854f;
						case 16:
							return 1607.3646f, 3325.7065f, 39.3623f;
						case 17:
							return 1603.4839f, 3328.2942f, 39.2251f;
						case 18:
							return 1611.8016f, 3323.6738f, 39.332f;
						case 19:
							return 1600.3038f, 3330.9033f, 38.9728f;
						case 20:
							return 1606.1342f, 3328.4438f, 39.2656f;
						case 21:
							return 1606.8829f, 3329.743f, 39.23f;
						case 22:
							return 1608.8301f, 3328.658f, 39.2774f;
						case 23:
							return 1609.9622f, 3328.436f, 39.2921f;
						case 24:
							return 1609.5461f, 3325.0833f, 39.3941f;
						case 25:
							return 1601.2494f, 3330.6743f, 39.028f;
						case 26:
							return 1605.5466f, 3326.9414f, 39.3122f;
						case 27:
							return 1606.3668f, 3331.718f, 39.073f;
						case 28:
							return 1610.7765f, 3326.4954f, 39.3208f;
						case 29:
							return 1604.3252f, 3330.8523f, 39.1187f;
						default:
					}
					break;
				case 12:
					switch (iParam0)
					{
						case 0:
							return 1346.389f, 2737.0356f, (51.3883f + fVar0);
						case 1:
							return 1348.5546f, 2738.477f, (51.2733f + fVar0);
						case 2:
							return 1343.9404f, 2735.8333f, (51.4263f + fVar0);
						case 3:
							return 1344.362f, 2740.778f, 51.062f;
						case 4:
							return 1341.932f, 2738.773f, 51.146f;
						case 5:
							return 1346.488f, 2745.202f, 50.818f;
						case 6:
							return 1340.606f, 2740.427f, 51.011f;
						case 7:
							return 1341.553f, 2741.453f, 50.991f;
						case 8:
							return 1343.61f, 2744.285f, 50.867f;
						case 9:
							return 1349.881f, 2746.691f, 50.675f;
						case 10:
							return 1339.334f, 2737.644f, 51.172f;
						case 11:
							return 1338.819f, 2735.386f, 51.344f;
						case 12:
							return 1341.359f, 2743.569f, 50.892f;
						case 13:
							return 1341.292f, 2744.681f, 50.848f;
						case 14:
							return 1349.349f, 2744.116f, 50.84f;
						case 15:
							return 1347.463f, 2745.01f, 50.823f;
						case 16:
							return 1338.252f, 2738.296f, 51.082f;
						case 17:
							return 1343.538f, 2743.416f, 50.91f;
						case 18:
							return 1348.968f, 2746.396f, 50.727f;
						case 19:
							return 1338.83f, 2741.571f, 50.933f;
						case 20:
							return 1340.277f, 2744.048f, 50.859f;
						case 21:
							return 1340.003f, 2735.451f, 51.361f;
						case 22:
							return 1344.511f, 2743.999f, 50.879f;
						case 23:
							return 1341.688f, 2740.367f, 51.045f;
						case 24:
							return 1347.51f, 2742.896f, 50.952f;
						case 25:
							return 1345.935f, 2741.989f, 51.006f;
						case 26:
							return 1343.186f, 2740.113f, 51.085f;
						case 27:
							return 1343.884f, 2741.962f, 50.994f;
						case 28:
							return 1337.991f, 2737.375f, 51.158f;
						case 29:
							return 1338.987f, 2740.588f, 50.963f;
						default:
					}
					break;
				case 13:
					switch (iParam0)
					{
						case 0:
							return 2261.04f, 2653.646f, (46.5532f + fVar0);
						case 1:
							return 2258.1453f, 2653.0874f, (46.8187f + fVar0);
						case 2:
							return 2263.1523f, 2654.688f, (46.4011f + fVar0);
						case 3:
							return 2253.4104f, 2660.5237f, 47.907f;
						case 4:
							return 2255.2493f, 2659.858f, 47.6394f;
						case 5:
							return 2260.2388f, 2662.4163f, 47.2459f;
						case 6:
							return 2258.3684f, 2660.6108f, 47.3568f;
						case 7:
							return 2263.1992f, 2658.794f, 46.6511f;
						case 8:
							return 2258.7888f, 2657.437f, 46.9861f;
						case 9:
							return 2265.7073f, 2660.9116f, 46.635f;
						case 10:
							return 2257.7112f, 2658.9849f, 47.2835f;
						case 11:
							return 2255.1013f, 2656.244f, 47.2343f;
						case 12:
							return 2255.9053f, 2661.7285f, 47.7294f;
						case 13:
							return 2267.1487f, 2660.8325f, 46.5453f;
						case 14:
							return 2263.1921f, 2661.2275f, 46.7892f;
						case 15:
							return 2261.5823f, 2658.7498f, 46.8524f;
						case 16:
							return 2260.0525f, 2658.3901f, 46.9735f;
						case 17:
							return 2266.688f, 2661.9875f, 46.6105f;
						case 18:
							return 2257.3655f, 2656.86f, 47.0643f;
						case 19:
							return 2259.393f, 2661.0217f, 47.2451f;
						case 20:
							return 2262.3623f, 2661.1401f, 46.8688f;
						case 21:
							return 2254.7961f, 2658.7427f, 47.5501f;
						case 22:
							return 2261.306f, 2663.28f, 47.202f;
						case 23:
							return 2256.9846f, 2662.1409f, 47.6351f;
						case 24:
							return 2253.9956f, 2655.7476f, 47.3089f;
						case 25:
							return 2256.079f, 2658.7144f, 47.4164f;
						case 26:
							return 2260.1167f, 2663.7458f, 47.4055f;
						case 27:
							return 2260.6235f, 2660.1472f, 47.044f;
						case 28:
							return 2264.0156f, 2662.5564f, 46.8326f;
						case 29:
							return 2252.62f, 2659.7466f, 47.9228f;
						default:
					}
					break;
				case 14:
					switch (iParam0)
					{
						case 0:
							return 2444.9734f, 3093.1526f, (46.3435f + fVar0);
						case 1:
							return 2446.8757f, 3095.443f, (46.3485f + fVar0);
						case 2:
							return 2443.7234f, 3090.9617f, (46.4066f + fVar0);
						case 3:
							return 2446.509f, 3087.341f, 46.313f;
						case 4:
							return 2450.367f, 3095.445f, 46.423f;
						case 5:
							return 2448.821f, 3091.266f, 46.274f;
						case 6:
							return 2450.694f, 3092.956f, 46.347f;
						case 7:
							return 2445.617f, 3084.537f, 46.337f;
						case 8:
							return 2452.254f, 3095.458f, 46.402f;
						case 9:
							return 2448.633f, 3084.863f, 46.262f;
						case 10:
							return 2453.874f, 3093.199f, 46.466f;
						case 11:
							return 2450.706f, 3089.04f, 46.312f;
						case 12:
							return 2449.769f, 3085.152f, 46.233f;
						case 13:
							return 2452.823f, 3092.765f, 46.313f;
						case 14:
							return 2450.913f, 3097.783f, 46.66f;
						case 15:
							return 2449.534f, 3092.456f, 46.313f;
						case 16:
							return 2447.221f, 3088.933f, 46.296f;
						case 17:
							return 2449.539f, 3093.85f, 46.32f;
						case 18:
							return 2449.177f, 3090.041f, 46.272f;
						case 19:
							return 2449.109f, 3086.885f, 46.249f;
						case 20:
							return 2449.508f, 3087.669f, 46.247f;
						case 21:
							return 2451.725f, 3088.414f, 46.311f;
						case 22:
							return 2452.704f, 3094.617f, 46.358f;
						case 23:
							return 2447.912f, 3087.941f, 46.279f;
						case 24:
							return 2446.233f, 3085.601f, 46.318f;
						case 25:
							return 2453.649f, 3092.135f, 46.411f;
						case 26:
							return 2450.361f, 3086.667f, 46.268f;
						case 27:
							return 2451.923f, 3097.327f, 46.575f;
						case 28:
							return 2450.99f, 3091.514f, 46.305f;
						case 29:
							return 2451.544f, 3090.735f, 46.29f;
						default:
					}
					break;
				case 15:
					switch (iParam0)
					{
						case 0:
							return 2095.6655f, 3498.8486f, (42.7607f + fVar0);
						case 1:
							return 2094.5645f, 3500.845f, (42.6921f + fVar0);
						case 2:
							return 2097.4143f, 3496.554f, (42.9458f + fVar0);
						case 3:
							return 2097.805f, 3507.279f, 42.171f;
						case 4:
							return 2105.035f, 3502.767f, 42.929f;
						case 5:
							return 2103.54f, 3495.921f, 43.262f;
						case 6:
							return 2100.772f, 3504.626f, 42.56f;
						case 7:
							return 2100.838f, 3501.483f, 42.839f;
						case 8:
							return 2103.095f, 3499.722f, 43.047f;
						case 9:
							return 2100.489f, 3499.955f, 42.925f;
						case 10:
							return 2101.506f, 3503.013f, 42.749f;
						case 11:
							return 2105.83f, 3495.149f, 43.422f;
						case 12:
							return 2105.798f, 3493.995f, 43.463f;
						case 13:
							return 2101.347f, 3497.099f, 43.128f;
						case 14:
							return 2099.189f, 3501.085f, 42.767f;
						case 15:
							return 2100.556f, 3498.351f, 43.023f;
						case 16:
							return 2098.657f, 3502.724f, 42.62f;
						case 17:
							return 2102.202f, 3500.095f, 42.994f;
						case 18:
							return 2097.937f, 3504.341f, 42.444f;
						case 19:
							return 2099.896f, 3503.747f, 42.596f;
						case 20:
							return 2099.603f, 3505.036f, 42.462f;
						case 21:
							return 2104.017f, 3503.013f, 42.88f;
						case 22:
							return 2102.039f, 3494.531f, 43.257f;
						case 23:
							return 2096.936f, 3507.79f, 42.11f;
						case 24:
							return 2103.456f, 3497.701f, 43.183f;
						case 25:
							return 2096.827f, 3506.176f, 42.221f;
						case 26:
							return 2104.394f, 3501.955f, 42.957f;
						case 27:
							return 2102.475f, 3499.011f, 43.068f;
						case 28:
							return 2103.365f, 3494.776f, 43.29f;
						case 29:
							return 2102.045f, 3502.099f, 42.853f;
						default:
					}
					break;
				case 16:
					switch (iParam0)
					{
						case 0:
							return 2613.6458f, 3531.9033f, (49.3837f + fVar0);
						case 1:
							return 2612.5818f, 3528.9666f, (49.4021f + fVar0);
						case 2:
							return 2614.4968f, 3534.0688f, (49.439f + fVar0);
						case 3:
							return 2617.1514f, 3523.5413f, 50.0514f;
						case 4:
							return 2618.6287f, 3525.5872f, 50.1291f;
						case 5:
							return 2620.2466f, 3531.5469f, 49.9724f;
						case 6:
							return 2621.813f, 3528.8474f, 50.3264f;
						case 7:
							return 2616.054f, 3523.881f, 49.9403f;
						case 8:
							return 2621.5566f, 3524.4084f, 50.6347f;
						case 9:
							return 2618.4695f, 3531.7424f, 49.7985f;
						case 10:
							return 2619.1436f, 3529.4087f, 49.9524f;
						case 11:
							return 2620.7986f, 3526.9485f, 50.3564f;
						case 12:
							return 2624.487f, 3530.5413f, 50.5476f;
						case 13:
							return 2624.542f, 3529.602f, 50.593f;
						case 14:
							return 2616.6638f, 3527.9858f, 49.8019f;
						case 15:
							return 2622.7273f, 3532.365f, 50.2513f;
						case 16:
							return 2621.3833f, 3525.5857f, 50.5318f;
						case 17:
							return 2619.4983f, 3530.9348f, 49.9106f;
						case 18:
							return 2620.2695f, 3533.5364f, 49.9424f;
						case 19:
							return 2617.5088f, 3526.6091f, 49.9394f;
						case 20:
							return 2620.898f, 3528.455f, 50.2598f;
						case 21:
							return 2620.3948f, 3530.487f, 50.0438f;
						case 22:
							return 2622.1433f, 3525.0308f, 50.6664f;
						case 23:
							return 2623.6597f, 3530.1497f, 50.4594f;
						case 24:
							return 2622.2417f, 3531.3577f, 50.2314f;
						case 25:
							return 2618.846f, 3526.6216f, 50.0927f;
						case 26:
							return 2617.0645f, 3524.6191f, 49.9936f;
						case 27:
							return 2617.7302f, 3530.4675f, 49.7789f;
						case 28:
							return 2617.563f, 3529.2112f, 49.8229f;
						case 29:
							return 2616.2876f, 3526.7302f, 49.8278f;
						default:
					}
					break;
				case 17:
					switch (iParam0)
					{
						case 0:
							return 2632.5703f, 4840.239f, (32.3643f + fVar0);
						case 1:
							return 2634.4077f, 4842.4106f, (32.4245f + fVar0);
						case 2:
							return 2630.4062f, 4838.5513f, (32.1941f + fVar0);
						case 3:
							return 2624.2615f, 4844.3315f, 32.7342f;
						case 4:
							return 2628.661f, 4843.699f, 32.5776f;
						case 5:
							return 2628.0454f, 4842.0225f, 32.4691f;
						case 6:
							return 2630.9663f, 4846.1304f, 32.647f;
						case 7:
							return 2632.9956f, 4848.9155f, 32.6972f;
						case 8:
							return 2632.011f, 4848.187f, 32.7018f;
						case 9:
							return 2626.2551f, 4843.0728f, 32.5684f;
						case 10:
							return 2628.929f, 4849.252f, 32.7753f;
						case 11:
							return 2624.4575f, 4842.1855f, 32.5294f;
						case 12:
							return 2628.9211f, 4846.5083f, 32.6845f;
						case 13:
							return 2624.3984f, 4845.5483f, 32.8289f;
						case 14:
							return 2627.7493f, 4845.104f, 32.6525f;
						case 15:
							return 2625.472f, 4845.1772f, 32.7613f;
						case 16:
							return 2626.5476f, 4847.173f, 32.8015f;
						case 17:
							return 2630.0928f, 4847.85f, 32.7212f;
						case 18:
							return 2626.7903f, 4843.869f, 32.6249f;
						case 19:
							return 2625.4197f, 4839.759f, 32.3135f;
						case 20:
							return 2630.7869f, 4850.3647f, 32.7659f;
						case 21:
							return 2632.6274f, 4846.062f, 32.6426f;
						case 22:
							return 2627.037f, 4841.261f, 32.4133f;
						case 23:
							return 2630.0916f, 4844.6187f, 32.5906f;
						case 24:
							return 2627.8872f, 4846.4185f, 32.692f;
						case 25:
							return 2624.491f, 4838.904f, 32.3028f;
						case 26:
							return 2631.9053f, 4849.2427f, 32.7238f;
						case 27:
							return 2625.7356f, 4846.68f, 32.8332f;
						case 28:
							return 2628.024f, 4848.5913f, 32.7629f;
						case 29:
							return 2623.0105f, 4842.5474f, 32.7167f;
						default:
					}
					break;
				case 18:
					switch (iParam0)
					{
						case 0:
							return 580.3698f, 2463.3237f, (58.6865f + fVar0);
						case 1:
							return 582.027f, 2461.0676f, (58.6088f + fVar0);
						case 2:
							return 579.0123f, 2465.524f, (58.7737f + fVar0);
						case 3:
							return 592.8286f, 2464.3774f, 59.6591f;
						case 4:
							return 589.2234f, 2470.9595f, 60.0692f;
						case 5:
							return 584.8365f, 2467.3845f, 59.5512f;
						case 6:
							return 585.1426f, 2465.5845f, 59.3939f;
						case 7:
							return 586.3008f, 2466.9973f, 59.722f;
						case 8:
							return 584.5764f, 2471.8047f, 59.9504f;
						case 9:
							return 587.6541f, 2465.3076f, 59.6232f;
						case 10:
							return 588.3805f, 2462.4758f, 59.4236f;
						case 11:
							return 586.484f, 2462.8064f, 59.2678f;
						case 12:
							return 588.9673f, 2461.0286f, 59.3256f;
						case 13:
							return 589.2358f, 2466.4495f, 59.7402f;
						case 14:
							return 591.9676f, 2465.071f, 59.6924f;
						case 15:
							return 587.4232f, 2466.2754f, 59.6918f;
						case 16:
							return 591.9243f, 2463.7368f, 59.5926f;
						case 17:
							return 586.4788f, 2464.5957f, 59.4723f;
						case 18:
							return 584.5439f, 2470.8164f, 59.8917f;
						case 19:
							return 585.4612f, 2471.2236f, 60.0039f;
						case 20:
							return 586.6047f, 2468.8936f, 59.8733f;
						case 21:
							return 583.3774f, 2468.3298f, 59.4397f;
						case 22:
							return 589.2119f, 2465.4177f, 59.6619f;
						case 23:
							return 589.649f, 2462.226f, 59.4304f;
						case 24:
							return 588.5356f, 2470.0195f, 59.9944f;
						case 25:
							return 592.2249f, 2460.2026f, 59.3359f;
						case 26:
							return 592.6932f, 2461.2205f, 59.4236f;
						case 27:
							return 588.1747f, 2471.1538f, 60.0569f;
						case 28:
							return 590.2761f, 2468.0054f, 59.8775f;
						case 29:
							return 587.4067f, 2468.0425f, 59.8242f;
						default:
					}
					break;
				case 19:
					switch (iParam0)
					{
						case 0:
							return 614.1548f, 3021.3477f, (41.3229f + fVar0);
						case 1:
							return 611.6553f, 3021.5957f, (41.2153f + fVar0);
						case 2:
							return 616.8113f, 3021.4468f, (41.3952f + fVar0);
						case 3:
							return 612.451f, 3013.539f, 41.121f;
						case 4:
							return 614.644f, 3015.942f, 41.22f;
						case 5:
							return 611.878f, 3014.544f, 41.102f;
						case 6:
							return 613.622f, 3015.684f, 41.177f;
						case 7:
							return 605.787f, 3017.614f, 40.995f;
						case 8:
							return 616.501f, 3017.061f, 41.29f;
						case 9:
							return 617.566f, 3013.943f, 41.097f;
						case 10:
							return 609.432f, 3015.622f, 41.035f;
						case 11:
							return 618.325f, 3015.924f, 41.2f;
						case 12:
							return 619.893f, 3018.769f, 41.275f;
						case 13:
							return 614.732f, 3013.101f, 41.13f;
						case 14:
							return 607.546f, 3013.551f, 40.956f;
						case 15:
							return 617.813f, 3016.39f, 41.24f;
						case 16:
							return 618.032f, 3018.054f, 41.29f;
						case 17:
							return 614.644f, 3017.635f, 41.27f;
						case 18:
							return 614.411f, 3014.756f, 41.193f;
						case 19:
							return 612.938f, 3017.198f, 41.175f;
						case 20:
							return 620.686f, 3019.394f, 41.276f;
						case 21:
							return 606.879f, 3016.901f, 40.992f;
						case 22:
							return 605.851f, 3016.521f, 40.965f;
						case 23:
							return 610.323f, 3015.396f, 41.057f;
						case 24:
							return 616.567f, 3013.862f, 41.123f;
						case 25:
							return 610.342f, 3013.184f, 41.046f;
						case 26:
							return 607.45f, 3014.65f, 40.964f;
						case 27:
							return 608.596f, 3014.089f, 40.992f;
						case 28:
							return 620.341f, 3016.659f, 41.169f;
						case 29:
							return 613.915f, 3012.076f, 41.081f;
						default:
					}
					break;
			}
			break;
		case 18:
			switch (iParam2)
			{
				case 105:
					switch (iParam0)
					{
						case 0:
							return 461.205f, -1678.6f, 28.291f;
						case 1:
							return 469.685f, -1681.316f, 28.291f;
						case 2:
							return 461.452f, -1677.536f, 28.291f;
						case 3:
							return 460.792f, -1673.705f, 28.295f;
						case 4:
							return 464.203f, -1679.442f, 29.338f;
						case 5:
							return 803.2545f, -758.0833f, 25.7871f;
						case 6:
							return 812.6336f, -750.6476f, 25.7278f;
						case 7:
							return 817.7614f, -754.9615f, 25.7277f;
						case 8:
							return 816.8469f, -755.6562f, 25.728f;
						case 9:
							return 814.4457f, -760.9552f, 25.7278f;
						case 10:
							return 724.4889f, -2097.6055f, 28.274f;
						case 11:
							return 726.412f, -2094.0012f, 28.2898f;
						case 12:
							return 723.5543f, -2097.9622f, 28.2694f;
						case 13:
							return 720.5225f, -2103.4028f, 28.2449f;
						case 14:
							return 732.8106f, -2095.891f, 28.2916f;
						case 15:
							return 1161.4125f, -1324.0576f, 33.7427f;
						case 16:
							return 1164.4922f, -1320.9836f, 33.7427f;
						case 17:
							return 1165.2279f, -1319.7627f, 33.7428f;
						case 18:
							return 1159.1001f, -1314.4896f, 33.7427f;
						case 19:
							return 1162.4241f, -1313.4474f, 33.7427f;
						default:
					}
					break;
				case 106:
					switch (iParam0)
					{
						case 0:
							return 466.796f, -577.996f, 27.5f;
						case 1:
							return 455.185f, -575.576f, 27.5f;
						case 2:
							return 465.792f, -578.183f, 27.5f;
						case 3:
							return 460.097f, -575.555f, 27.5f;
						case 4:
							return 461.111f, -575.208f, 27.5f;
						case 5:
							return 432.3498f, -1506.4327f, 28.2916f;
						case 6:
							return 430.8685f, -1519.4246f, 28.2829f;
						case 7:
							return 431.2669f, -1518.4004f, 28.2838f;
						case 8:
							return 427.3735f, -1515.6904f, 28.2898f;
						case 9:
							return 440.4802f, -1520.1023f, 28.2752f;
						case 10:
							return 714.487f, -904.373f, 22.894f;
						case 11:
							return 717.651f, -908.199f, 23.008f;
						case 12:
							return 718.315f, -909.201f, 23.035f;
						case 13:
							return 717.701f, -919.21f, 22.941f;
						case 14:
							return 713.884f, -913.051f, 22.806f;
						case 15:
							return 32.1993f, -902.8693f, 28.9644f;
						case 16:
							return 39.3274f, -898.26f, 28.9778f;
						case 17:
							return 38.8128f, -907.3989f, 29.7014f;
						case 18:
							return 31.9348f, -898.082f, 29.0039f;
						case 19:
							return 33.1034f, -897.5202f, 28.9979f;
						default:
					}
					break;
				case 107:
					switch (iParam0)
					{
						case 0:
							return -321.973f, -1546.307f, 30.025f;
						case 1:
							return -320.7279f, -1529.1217f, 26.5495f;
						case 2:
							return -318.274f, -1535.916f, 26.612f;
						case 3:
							return -318.929f, -1535.038f, 26.595f;
						case 4:
							return -333.0749f, -1529.3372f, 26.5389f;
						case 5:
							return 154.0475f, -1648.2014f, 28.2917f;
						case 6:
							return 153.8193f, -1646.763f, 28.2917f;
						case 7:
							return 152.5139f, -1640.63f, 28.2917f;
						case 8:
							return 166.4466f, -1649.5715f, 28.2917f;
						case 9:
							return 159.5389f, -1645.0374f, 28.2917f;
						case 10:
							return -585.867f, -869.005f, 24.693f;
						case 11:
							return -593.419f, -881.371f, 24.91f;
						case 12:
							return -598.049f, -876.126f, 25.254f;
						case 13:
							return -594.023f, -882.414f, 24.898f;
						case 14:
							return -586.598f, -868.194f, 24.713f;
						case 15:
							return 393.4899f, -902.3287f, 28.4185f;
						case 16:
							return 384.4513f, -906.701f, 28.4424f;
						case 17:
							return 383.0696f, -906.5172f, 28.437f;
						case 18:
							return 387.6588f, -900.842f, 28.4556f;
						case 19:
							return 391.4316f, -908.0316f, 28.4187f;
						default:
					}
					break;
				case 108:
					switch (iParam0)
					{
						case 0:
							return -44.492f, -220.774f, 44.445f;
						case 1:
							return -43.032f, -228.334f, 44.8f;
						case 2:
							return -39.331f, -218.82f, 44.799f;
						case 3:
							return -45.522f, -221.31f, 44.445f;
						case 4:
							return -47.866f, -217.383f, 44.445f;
						case 5:
							return -483.586f, 270.471f, 82.193f;
						case 6:
							return -487.827f, 273.47f, 82.236f;
						case 7:
							return -488.572f, 272.863f, 82.224f;
						case 8:
							return -495.288f, 276.509f, 82.292f;
						case 9:
							return -492.758f, 272.616f, 83.136f;
						case 10:
							return 285.844f, 313.234f, 104.545f;
						case 11:
							return 274.546f, 310.145f, 104.543f;
						case 12:
							return 277.91f, 312.424f, 104.468f;
						case 13:
							return 277.074f, 313.588f, 104.53f;
						case 14:
							return 274.47f, 317.501f, 104.486f;
						case 15:
							return 906.7725f, -177.7884f, 73.135f;
						case 16:
							return 902.279f, -183.5272f, 72.9013f;
						case 17:
							return 901.2993f, -184.6903f, 72.853f;
						case 18:
							return 895.9459f, -178.8585f, 73.7053f;
						case 19:
							return 889.4717f, -183.7448f, 72.5973f;
						default:
					}
					break;
				case 109:
					switch (iParam0)
					{
						case 0:
							return 1089.647f, -2392.977f, 29.516f;
						case 1:
							return 1092.776f, -2399.578f, 29.649f;
						case 2:
							return 1091.756f, -2400.594f, 29.623f;
						case 3:
							return 1087.923f, -2405.254f, 29.497f;
						case 4:
							return 1082.311f, -2386.719f, 29.38f;
						case 5:
							return 183.849f, -2029.537f, 17.251f;
						case 6:
							return 192.472f, -2031.042f, 17.261f;
						case 7:
							return 196.945f, -2028.746f, 18.562f;
						case 8:
							return 193.545f, -2031.919f, 17.253f;
						case 9:
							return 201.367f, -2030.124f, 17.295f;
						case 10:
							return 1144.773f, -1402.581f, 33.799f;
						case 11:
							return 1146.782f, -1408.547f, 33.607f;
						case 12:
							return 1147.738f, -1408.656f, 33.636f;
						case 13:
							return 1148.968f, -1404.703f, 33.822f;
						case 14:
							return 1148.739f, -1412.352f, 35.043f;
						case 15:
							return 332.8968f, -1283.8556f, 30.8638f;
						case 16:
							return 321.7992f, -1284.7815f, 29.5671f;
						case 17:
							return 325.9501f, -1287.2992f, 30.7033f;
						case 18:
							return 326.0643f, -1288.5577f, 30.7224f;
						case 19:
							return 316.6205f, -1291.8586f, 30.1717f;
						default:
					}
					break;
				case 110:
					switch (iParam0)
					{
						case 0:
							return -1652.325f, -974.582f, 6.557f;
						case 1:
							return -1657.757f, -977.206f, 6.368f;
						case 2:
							return -1658.636f, -977.921f, 6.363f;
						case 3:
							return -1668.026f, -976.1f, 6.443f;
						case 4:
							return -1669.105f, -976.28f, 6.424f;
						case 5:
							return -698.791f, -874.56f, 22.743f;
						case 6:
							return -704.598f, -873.911f, 24.03f;
						case 7:
							return -703.548f, -880.608f, 22.612f;
						case 8:
							return -704.6f, -880.023f, 22.604f;
						case 9:
							return -707.3458f, -877.1424f, 22.5544f;
						case 10:
							return -501.4088f, -54.6948f, 39.0549f;
						case 11:
							return -512.5459f, -48.8825f, 39.9111f;
						case 12:
							return -500.379f, -55.1191f, 39.0385f;
						case 13:
							return -496.5539f, -54.9949f, 38.9849f;
						case 14:
							return -510.1058f, -53.0148f, 41.1174f;
						case 15:
							return -2971.662f, 69.1195f, 10.6085f;
						case 16:
							return -2968.4077f, 70.614f, 10.557f;
						case 17:
							return -2967.1948f, 70.6424f, 10.5326f;
						case 18:
							return -2964.67f, 64.8283f, 10.6085f;
						case 19:
							return -2957.5696f, 61.7802f, 10.6085f;
						default:
					}
					break;
				case 111:
					switch (iParam0)
					{
						case 0:
							return -914.806f, -2041.563f, 8.405f;
						case 1:
							return -913.648f, -2041.805f, 8.405f;
						case 2:
							return -908.415f, -2043.687f, 8.299f;
						case 3:
							return -907.292f, -2043.486f, 8.299f;
						case 4:
							return -903.162f, -2046.016f, 8.299f;
						case 5:
							return 226.9219f, -1994.1321f, 18.5411f;
						case 6:
							return 209.6287f, -1989.6005f, 18.7165f;
						case 7:
							return 221.202f, -1996.7643f, 18.5865f;
						case 8:
							return 221.9354f, -1995.7008f, 18.59f;
						case 9:
							return 223.7177f, -1986.5846f, 18.7077f;
						case 10:
							return -1775.189f, -2792.181f, 12.945f;
						case 11:
							return -1779.876f, -2776.923f, 12.945f;
						case 12:
							return -1771.292f, -2774.826f, 12.945f;
						case 13:
							return -1772.365f, -2774.594f, 12.945f;
						case 14:
							return -1775.226f, -2769.304f, 12.945f;
						case 15:
							return -245.4949f, -2568.1023f, 5.0014f;
						case 16:
							return -239.407f, -2564.7039f, 5.0014f;
						case 17:
							return -238.3637f, -2565.5554f, 5.0014f;
						case 18:
							return -234.7951f, -2573.4348f, 4.2618f;
						case 19:
							return -240.4159f, -2571.2964f, 5.0014f;
						default:
					}
					break;
				case 112:
					switch (iParam0)
					{
						case 0:
							return 1104.8069f, -327.5913f, 66.1531f;
						case 1:
							return 1105.008f, -326.5695f, 66.1437f;
						case 2:
							return 1115.8748f, -321.0512f, 66.1471f;
						case 3:
							return 1112.8717f, -325.6644f, 66.0854f;
						case 4:
							return 1111.7f, -335.1138f, 66.1006f;
						case 5:
							return -242.806f, 277.761f, 91.034f;
						case 6:
							return -251.095f, 283.568f, 92.317f;
						case 7:
							return -253.944f, 285.706f, 90.649f;
						case 8:
							return -253.839f, 286.862f, 90.68f;
						case 9:
							return -248.475f, 291.145f, 90.942f;
						case 10:
							return 107.628f, -153.81f, 53.781f;
						case 11:
							return 105.248f, -148.075f, 53.749f;
						case 12:
							return 104.52f, -148.864f, 53.749f;
						case 13:
							return 106.88f, -154.904f, 53.825f;
						case 14:
							return 100.443f, -150.408f, 53.801f;
						case 15:
							return 454.151f, -947.8701f, 27.3998f;
						case 16:
							return 452.7656f, -940.3359f, 27.4364f;
						case 17:
							return 453.7471f, -939.1234f, 27.4608f;
						case 18:
							return 449.0954f, -934.515f, 27.5981f;
						case 19:
							return 445.7341f, -944.0082f, 27.7135f;
						default:
					}
					break;
				case 113:
					switch (iParam0)
					{
						case 0:
							return -40.953f, -2521.888f, 5.01f;
						case 1:
							return -49.928f, -2530.565f, 5.161f;
						case 2:
							return -40.921f, -2511.923f, 5.161f;
						case 3:
							return -39.869f, -2521.222f, 5.01f;
						case 4:
							return -43.555f, -2519.467f, 6.399f;
						case 5:
							return 737.1168f, -1917.2592f, 28.292f;
						case 6:
							return 736.2333f, -1908.9756f, 28.292f;
						case 7:
							return 736.8429f, -1908.0886f, 28.292f;
						case 8:
							return 742.0927f, -1899.8699f, 28.2119f;
						case 9:
							return 742.0724f, -1910.9559f, 28.292f;
						case 10:
							return 820.57f, -2401.148f, 22.658f;
						case 11:
							return 811.736f, -2405.353f, 22.657f;
						case 12:
							return 812.869f, -2405.856f, 22.657f;
						case 13:
							return 818.081f, -2407.192f, 22.657f;
						case 14:
							return 812.698f, -2398.999f, 22.658f;
						case 15:
							return 1203.354f, -3197.428f, 5.028f;
						case 16:
							return 1200.568f, -3193.279f, 5.028f;
						case 17:
							return 1200.236f, -3192.125f, 5.028f;
						case 18:
							return 1200.869f, -3179.85f, 4.627f;
						case 19:
							return 1213.381f, -3203.336f, 5.028f;
						default:
					}
					break;
				case 114:
					switch (iParam0)
					{
						case 0:
							return -1452.257f, -690.597f, 25.313f;
						case 1:
							return -1457.718f, -682.082f, 25.467f;
						case 2:
							return -1452.297f, -689.62f, 25.313f;
						case 3:
							return -1458.868f, -681.661f, 25.467f;
						case 4:
							return -1466.774f, -680.53f, 25.516f;
						case 5:
							return -335.4424f, -1298.5128f, 30.3979f;
						case 6:
							return -328.0673f, -1296.7026f, 30.3879f;
						case 7:
							return -334.2825f, -1299.2632f, 30.3736f;
						case 8:
							return -327.4905f, -1295.8391f, 30.3817f;
						case 9:
							return -332.425f, -1296.256f, 31.8307f;
						case 10:
							return -1015.8249f, -1514.7062f, 5.5174f;
						case 11:
							return -1020.2206f, -1519.4963f, 4.5923f;
						case 12:
							return -1020.9905f, -1522.8564f, 5.9137f;
						case 13:
							return -1021.4694f, -1519.465f, 4.5923f;
						case 14:
							return -1026.7477f, -1521.2545f, 4.5966f;
						case 15:
							return -436.7471f, -454.3198f, 31.5494f;
						case 16:
							return -432.6787f, -461.4581f, 31.3464f;
						case 17:
							return -431.625f, -461.843f, 31.2991f;
						case 18:
							return -428.5065f, -455.5374f, 31.5264f;
						case 19:
							return -425.0201f, -460.8574f, 31.0079f;
						default:
					}
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 115:
					switch (iParam3)
					{
						case 0:
							return -1601.8597f, -1050.1019f, 12.0174f;
						case 1:
							return 291.3058f, 182.9298f, 103.3216f;
						case 2:
							return -414.5579f, 1167.2877f, 324.8539f;
						case 3:
							return -235.7755f, -2047.0153f, 26.7554f;
						case 4:
							return -3239.568f, 964.6418f, 11.7019f;
						case 5:
							return -1293.118f, 275.4119f, 63.6691f;
						case 6:
							return -512.8077f, -256.1715f, 34.6083f;
						case 7:
							return -151.9083f, -864.6563f, 28.7563f;
						case 8:
							return -2181.291f, -398.5341f, 12.3434f;
						case 9:
							return -820.828f, -1222.387f, 6.334f;
						default:
					}
					break;
				case 116:
					switch (iParam3)
					{
						case 0:
							return -1334.909f, -1086.681f, 5.931f;
						case 1:
							return -747.9713f, -2290.1782f, 12.0593f;
						case 2:
							return 721.519f, 1198.186f, 325.041f;
						case 3:
							return 238.7485f, -868.2595f, 29.2922f;
						case 4:
							return 434.384f, 215.884f, 102.166f;
						case 5:
							return -1209.2f, -138.5055f, 39.7994f;
						case 6:
							return 382.5704f, -2143.4807f, 15.3986f;
						case 7:
							return 1167.1014f, -741.3898f, 56.3944f;
						case 8:
							return -213.6051f, -1500.4496f, 30.4278f;
						case 9:
							return -568.8f, -391.359f, 33.985f;
						default:
					}
					break;
				case 117:
					switch (iParam3)
					{
						case 0:
							return -877.0343f, -843.8042f, 18.23f;
						case 1:
							return -1318.439f, -1480.193f, 3.909f;
						case 2:
							return 1042.708f, 189.265f, 80f;
						case 3:
							return 209.8813f, 1212.9432f, 224.5948f;
						case 4:
							return 610.956f, -1008.877f, 36.365f;
						case 5:
							return -766.823f, -31.813f, 38.508f;
						case 6:
							return -363.812f, 269.396f, 83.665f;
						case 7:
							return -1860.323f, -346.401f, 48.843f;
						case 8:
							return 397.6863f, -205.5966f, 57.7555f;
						case 9:
							return -1692.1765f, 480.7207f, 127.8763f;
						default:
					}
					break;
				case 118:
					switch (iParam3)
					{
						case 0:
							return -243.804f, -1867.788f, 27.694f;
						case 1:
							return -494.675f, -205.24f, 35.909f;
						case 2:
							return -2209.104f, -369.683f, 12.315f;
						case 3:
							return 690.113f, 1203.051f, 323.259f;
						case 4:
							return 993.09f, -669.94f, 56.268f;
						case 5:
							return 219.342f, -859.955f, 29.221f;
						case 6:
							return -1329.203f, -1419.214f, 3.313f;
						case 7:
							return -381.759f, 273.412f, 83.761f;
						case 8:
							return -1651.153f, 514.123f, 129.364f;
						case 9:
							return -890.35f, -877.746f, 14.465f;
						default:
					}
					break;
			}
			break;
		case 22:
			switch (iParam2)
			{
				case 130:
					switch (iParam0)
					{
						case 4:
							return 1214.0983f, -1071.4622f, 38.6097f;
						case 5:
							return 1211.6757f, -1071.6223f, 38.8522f;
						default:
					}
					break;
				case 131:
					switch (iParam0)
					{
						case 4:
							return 1214.0983f, -1071.4622f, 38.6097f;
						case 5:
							return 1211.6757f, -1071.6223f, 38.8522f;
						default:
					}
					break;
				case 132:
					switch (iParam0)
					{
						case 4:
							return 1214.0983f, -1071.4622f, 38.6097f;
						case 5:
							return 1211.6757f, -1071.6223f, 38.8522f;
						default:
					}
					break;
			}
			break;
		case 23:
			switch (iParam2)
			{
				case 133:
					switch (iParam0)
					{
						case 1:
							return -3013.7551f, 356.7191f, 13.6864f;
						case 2:
							return -3015.2349f, 359.3406f, 13.6786f;
						default:
					}
					break;
				case 134:
					switch (iParam0)
					{
						case 1:
							return -1237.8479f, 489.4335f, 92.359f;
						case 2:
							return -1238.0995f, 477.5735f, 91.7374f;
						default:
					}
					break;
				case 135:
					switch (iParam0)
					{
						case 1:
							return 361.1592f, -1965.0297f, 23.5014f;
						case 2:
							return 365.9861f, -1968.1619f, 23.3829f;
						default:
					}
					break;
				case 136:
					switch (iParam0)
					{
						case 1:
							return 699.534f, -299.403f, 58.182f;
						case 2:
							return 708.152f, -290.318f, 58.188f;
						default:
					}
					break;
			}
			break;
		case 20:
			switch (iParam2)
			{
				case 119:
					switch (iParam0)
					{
						case 0:
							return -377.8543f, 220.3137f, 82.988f;
						case 1:
							return 128.39f, -1303.754f, 28.233f;
						default:
					}
					break;
				case 120:
					switch (iParam0)
					{
						case 0:
							return -428.555f, -26.291f, 45.228f;
						case 1:
							return 230.68f, -1096.561f, 28.294f;
						default:
					}
					break;
				case 121:
					switch (iParam0)
					{
						case 0:
							return -2977.638f, 600.7917f, 19.0554f;
						case 1:
							return -1063.8602f, -501.4426f, 35.0386f;
						default:
					}
					break;
				case 122:
					switch (iParam0)
					{
						case 0:
							return -1366.5199f, 58.5907f, 53.1035f;
						case 1:
							return -883.3578f, -2180.8435f, 7.9374f;
						default:
					}
					break;
				case 123:
					switch (iParam0)
					{
						case 0:
							return -1024.631f, 360.1824f, 70.3614f;
						case 1:
							return -604.405f, -947.359f, 21.118f;
						case 2:
							return -1009.2708f, 348.2982f, 69.685f;
						case 3:
							return -1010.9621f, 372.8206f, 71.009f;
						case 4:
							return -1019.0314f, 345.5998f, 68.9121f;
						case 5:
							return -1011.0087f, 371.8035f, 71.0568f;
						case 6:
							return -1020.1595f, 356.3672f, 69.6348f;
						case 7:
							return -1023.086f, 360.7421f, 70.3615f;
						case 8:
							return -605.25f, -946.869f, 21.107f;
						case 9:
							return -611.681f, -945.547f, 20.947f;
						case 10:
							return -601.969f, -939.091f, 22.862f;
						case 11:
							return -600.827f, -938.549f, 22.863f;
						default:
					}
					break;
				case 124:
					switch (iParam0)
					{
						case 0:
							return -120.2677f, 374.6528f, 111.8858f;
						case 1:
							return -290.127f, -611.7f, 32.568f;
						case 2:
							return -123.3278f, 379.0442f, 111.6436f;
						case 3:
							return -124.3013f, 380.3278f, 111.7395f;
						case 4:
							return -124.9365f, 375.2323f, 111.6156f;
						case 5:
							return -126.1577f, 374.2529f, 111.6433f;
						case 6:
							return -122.4865f, 377.2514f, 111.8858f;
						case 7:
							return -289.539f, -610.519f, 32.566f;
						case 8:
							return -293.794f, -600.518f, 32.558f;
						case 9:
							return -294.934f, -606.011f, 32.56f;
						case 10:
							return -296.197f, -605.769f, 32.56f;
						case 11:
							return -296.585f, -614.445f, 32.562f;
						default:
					}
					break;
				case 125:
					switch (iParam0)
					{
						case 0:
							return -166.708f, 268.609f, 92.332f;
						case 1:
							return 266.2798f, -834.6835f, 28.3774f;
						case 2:
							return -167.413f, 270.904f, 92.292f;
						case 3:
							return -165.976f, 270.54f, 92.369f;
						case 4:
							return -168.753f, 269.466f, 92.223f;
						case 5:
							return -164.555f, 268.956f, 92.447f;
						case 6:
							return -164.097f, 269.667f, 92.471f;
						case 7:
							return -168.612f, 272.081f, 92.227f;
						case 8:
							return 265.982f, -833.684f, 28.391f;
						case 9:
							return 267.019f, -833.863f, 28.366f;
						case 10:
							return 259.4851f, -831.1522f, 28.5559f;
						case 11:
							return 259.3217f, -830.0856f, 28.5681f;
						default:
					}
					break;
				case 126:
					switch (iParam0)
					{
						case 0:
							return -733.3334f, -132.6494f, 36.4412f;
						case 1:
							return 943.662f, -653.37f, 57.434f;
						case 2:
							return -732.1006f, -130.8399f, 36.4002f;
						case 3:
							return -731.3292f, -132.6422f, 36.4137f;
						case 4:
							return -734.3561f, -130.318f, 36.443f;
						case 5:
							return -733.6005f, -129.5448f, 36.3992f;
						case 6:
							return -731.2173f, -134.3122f, 36.422f;
						case 7:
							return -728.7539f, -135.1498f, 36.4039f;
						case 8:
							return 945.02f, -646.0478f, 57.0311f;
						case 9:
							return 951.7865f, -657.0081f, 57.0206f;
						case 10:
							return 954.1982f, -644.5851f, 56.4371f;
						case 11:
							return 953.3594f, -644.1643f, 56.4415f;
						default:
					}
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 74:
					switch (iParam0)
					{
						case 0:
							return -695.1247f, -988.6584f, 19.3898f;
						case 1:
							return -693.3476f, -990.0684f, 19.39f;
						case 2:
							return -696.6201f, -990.117f, 19.3896f;
						case 16:
							return -690.849f, -977.285f, 19.391f;
						default:
					}
					break;
				case 75:
					switch (iParam0)
					{
						case 0:
							return -753.2964f, 5535.0713f, 32.4857f;
						case 1:
							return -751.9077f, 5536.291f, 32.4857f;
						case 2:
							return -752.1079f, 5533.8633f, 32.4857f;
						case 16:
							return -768.944f, 5532.949f, 32.48f;
						default:
					}
					break;
				case 76:
					switch (iParam0)
					{
						case 0:
							return 179.9991f, 2711.1865f, 41.3048f;
						case 1:
							return 178.8075f, 2710.1357f, 41.242f;
						case 2:
							return 179.635f, 2715.7349f, 41.1498f;
						case 16:
							return 187.444f, 2699.3f, 41.799f;
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_382(int iParam0, int iParam1, int iParam2)//Position - 0x2AD2E6
{
	switch (iParam1)
	{
		case 12:
			switch (iParam0)
			{
				case 0:
					return joaat("cargobob2");
				default:
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					return joaat("benson");
				case 1:
					return joaat("benson");
				case 2:
					return joaat("benson");
				case 3:
					return joaat("benson");
				default:
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return joaat("police3");
				case 1:
					return joaat("cargobob2");
				case 2:
					return joaat("police3");
				default:
			}
			break;
		case 9:
			switch (iParam2)
			{
				case 71:
					switch (iParam0)
					{
						case 0:
							return joaat("gburrito");
						case 1:
							return joaat("gburrito");
						case 2:
							return joaat("slamvan2");
						default:
					}
					break;
				case 72:
					switch (iParam0)
					{
						case 0:
							return joaat("kuruma");
						case 1:
							return joaat("kuruma");
						case 2:
							return joaat("kuruma");
						default:
					}
					break;
				case 73:
					switch (iParam0)
					{
						case 0:
							return joaat("bodhi2");
						case 1:
							return joaat("rebel");
						case 2:
							return joaat("rebel");
						default:
					}
					break;
			}
			break;
		case 17:
			switch (iParam2)
			{
				case 102:
					switch (iParam0)
					{
						case 0:
							return joaat("gburrito");
						default:
					}
					break;
				case 103:
					switch (iParam0)
					{
						case 0:
							return joaat("kuruma");
						default:
					}
					break;
				case 104:
					switch (iParam0)
					{
						case 0:
							return joaat("manana");
						default:
					}
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 77:
					switch (iParam0)
					{
						case 0:
							return joaat("police4");
						case 1:
							return joaat("police4");
						default:
					}
					break;
				case 78:
					switch (iParam0)
					{
						case 0:
							return joaat("police4");
						case 1:
							return joaat("police4");
						default:
					}
					break;
				case 79:
					switch (iParam0)
					{
						case 0:
							return joaat("police4");
						case 1:
							return joaat("police4");
						default:
					}
					break;
			}
			break;
		case 15:
			return joaat("kamacho");
			break;
		case 19:
			switch (iParam2)
			{
				case 115:
				case 117:
					return joaat("huntley");
				case 116:
				case 118:
					return joaat("cogcabrio");
				default:
			}
			break;
		case 18:
			return joaat("burrito");
		case 23:
			switch (iParam2)
			{
				case 133:
					switch (iParam0)
					{
						case 0:
							return joaat("f620");
						default:
					}
					break;
				case 134:
					switch (iParam0)
					{
						case 0:
							return joaat("surano");
						default:
					}
					break;
				case 135:
					switch (iParam0)
					{
						case 0:
							return joaat("f620");
						default:
					}
					break;
				case 136:
					switch (iParam0)
					{
						case 0:
							return joaat("surano");
						default:
					}
					break;
			}
			break;
		case 14:
			return joaat("frogger");
		case 10:
			switch (iParam0)
			{
				case 0:
					return joaat("nightshark");
				default:
			}
			return joaat("mesa3");
		case 24:
			switch (iParam0)
			{
				case 0:
					return joaat("buzzard");
				default:
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return joaat("shamal");
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("akuma");
				default:
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 10:
					switch (iParam0)
					{
						case 0:
							return joaat("sadler");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("riata");
						case 3:
							return joaat("sadler");
						case 4:
							return joaat("riata");
						default:
					}
					break;
				case 11:
					switch (iParam0)
					{
						case 0:
							return joaat("riata");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("sadler");
						case 3:
							return joaat("sadler");
						case 4:
							return joaat("riata");
						default:
					}
					break;
				case 12:
					switch (iParam0)
					{
						case 0:
							return joaat("riata");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("sadler");
						case 3:
							return joaat("riata");
						case 4:
							return joaat("sadler");
						default:
					}
					break;
				case 13:
					switch (iParam0)
					{
						case 0:
							return joaat("riata");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("sadler");
						case 3:
							return joaat("riata");
						case 4:
							return joaat("sadler");
						default:
					}
					break;
				case 14:
					switch (iParam0)
					{
						case 0:
							return joaat("riata");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("sadler");
						case 3:
							return joaat("sadler");
						case 4:
							return joaat("riata");
						default:
					}
					break;
				case 15:
					switch (iParam0)
					{
						case 0:
							return joaat("sadler");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("riata");
						case 3:
							return joaat("sadler");
						case 4:
							return joaat("riata");
						default:
					}
					break;
				case 16:
					switch (iParam0)
					{
						case 0:
							return joaat("sadler");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("riata");
						case 3:
							return joaat("riata");
						case 4:
							return joaat("sadler");
						default:
					}
					break;
				case 17:
					switch (iParam0)
					{
						case 0:
							return joaat("sadler");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("riata");
						case 3:
							return joaat("riata");
						case 4:
							return joaat("sadler");
						default:
					}
					break;
				case 18:
					switch (iParam0)
					{
						case 0:
							return joaat("sadler");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("riata");
						case 3:
							return joaat("sadler");
						case 4:
							return joaat("riata");
						default:
					}
					break;
				case 19:
					switch (iParam0)
					{
						case 0:
							return joaat("sadler");
						case 1:
							return joaat("riata");
						case 2:
							return joaat("riata");
						case 3:
							return joaat("riata");
						case 4:
							return joaat("sadler");
						default:
					}
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return joaat("tr2");
				case 1:
					return joaat("phantom3");
				case 2:
					return joaat("coquette2");
				case 3:
					return joaat("cheburek");
				case 4:
					return joaat("flashgt");
				case 5:
					return joaat("coquette2");
				case 6:
					return joaat("flashgt");
				default:
			}
			break;
		case 0:
			return joaat("manchez");
		case 20:
			switch (iParam2)
			{
				case 123:
				case 124:
				case 125:
				case 126:
					return joaat("pcj");
				default:
			}
			break;
	}
	return 0;
}

Vector3 func_383(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2ADAF2
{
	switch (iParam1)
	{
		case 12:
			switch (iParam2)
			{
				case 80:
					switch (iParam0)
					{
						case 0:
							return 2755.482f, 1345.014f, 23.524f;
						default:
					}
					break;
				case 81:
					switch (iParam0)
					{
						case 0:
							return 63.899f, 6542.757f, 30.4528f;
						default:
					}
					break;
				case 82:
					switch (iParam0)
					{
						case 0:
							return -2367.5f, 4341.537f, 3.499f;
						default:
					}
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 115:
					switch (iParam3)
					{
						case 0:
							return -1597.3221f, -1049.9279f, 12.0176f;
						case 1:
							return 287.9971f, 177.8631f, 103.2051f;
						case 2:
							return -406.0031f, 1172.948f, 324.6416f;
						case 3:
							return -234.7199f, -2053.242f, 26.6204f;
						case 4:
							return -3233.7295f, 959.4883f, 12.1825f;
						case 5:
							return -1291.9424f, 269.0375f, 63.1593f;
						case 6:
							return -515.9047f, -263.3058f, 34.3882f;
						case 7:
							return -158.7342f, -856.8522f, 28.6873f;
						case 8:
							return -2179.9587f, -403.4071f, 12.137f;
						case 9:
							return -822.9429f, -1216.0824f, 5.9347f;
						default:
					}
					break;
				case 116:
					switch (iParam3)
					{
						case 0:
							return -1336.5739f, -1095.2684f, 5.95f;
						case 1:
							return -756.88f, -2289.2292f, 11.8583f;
						case 2:
							return 725.7341f, 1206.3375f, 325.0716f;
						case 3:
							return 245.0082f, -861.2943f, 28.4931f;
						case 4:
							return 441.2779f, 217.0452f, 102.1654f;
						case 5:
							return -1202.3429f, -133.4005f, 39.6662f;
						case 6:
							return 382.7753f, -2149.827f, 14.9877f;
						case 7:
							return 1166.7772f, -753.5115f, 56.8114f;
						case 8:
							return -208.3618f, -1493.0795f, 30.2676f;
						case 9:
							return -578.4795f, -384.0876f, 33.8646f;
						default:
					}
					break;
				case 117:
					switch (iParam3)
					{
						case 0:
							return -880.1486f, -837.3857f, 18.0595f;
						case 1:
							return -1318.6733f, -1488.8173f, 3.318f;
						case 2:
							return 1038.923f, 195.4291f, 79.9905f;
						case 3:
							return 201.843f, 1218.2628f, 224.4599f;
						case 4:
							return 606.1815f, -1013.0632f, 35.7852f;
						case 5:
							return -765.08f, -39.9258f, 36.6855f;
						case 6:
							return -359.0315f, 272.8986f, 83.7807f;
						case 7:
							return -1867.5345f, -347.1952f, 48.2512f;
						case 8:
							return 394.163f, -198.7987f, 58.2762f;
						case 9:
							return -1686.3047f, 480.5247f, 127.8763f;
						default:
					}
					break;
				case 118:
					switch (iParam3)
					{
						case 0:
							return -234.312f, -1867.0841f, 27.8307f;
						case 1:
							return -483.36f, -205.5759f, 35.7891f;
						case 2:
							return -2213.1406f, -365.1164f, 12.2639f;
						case 3:
							return 696.4f, 1207.1257f, 324.423f;
						case 4:
							return 991.4551f, -677.7005f, 56.4491f;
						case 5:
							return 228.8111f, -855.3818f, 28.8994f;
						case 6:
							return -1332.842f, -1424.0645f, 3.3134f;
						case 7:
							return -378.5029f, 281.9506f, 83.8362f;
						case 8:
							return -1655.3844f, 519.2047f, 129.7317f;
						case 9:
							return -898.6993f, -877.3289f, 14.5472f;
						default:
					}
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					switch (iParam2)
					{
						case 50:
							return 1251.243f, -3106.474f, 4.83f;
						case 51:
							return 1174.669f, -369.5071f, 67.2207f;
						case 52:
							return 1010.115f, -2461.952f, 27.44f;
						case 53:
							return -1448.478f, -885.599f, 9.634f;
						case 54:
							return 368.3157f, -841.6785f, 28.1594f;
						case 55:
							return -433.7393f, 134.1461f, 63.7221f;
						case 56:
							return 1090.4921f, -1820.6157f, 35.7475f;
						case 57:
							return -1202.7924f, -411.0688f, 32.8217f;
						case 58:
							return 1174.7003f, -3328.5557f, 4.9016f;
						case 59:
							return -1557.005f, -485.346f, 34.389f;
						default:
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 50:
							return -725.469f, -1444.936f, 4.001f;
						case 51:
							return -719.462f, -1475.001f, 4.001f;
						case 52:
							return -764.854f, -1451.526f, 4.001f;
						case 53:
							return -748.175f, -1431.519f, 4.001f;
						case 54:
							return -714.411f, -1457.23f, 4.001f;
						case 55:
							return -733.958f, -1481.654f, 4.001f;
						case 56:
							return -755.66f, -1442.068f, 4.001f;
						case 57:
							return -736.045f, -1423.286f, 4.001f;
						case 58:
							return -767.029f, -1466.405f, 4.001f;
						case 59:
							return -725.422f, -1415.377f, 4.001f;
						default:
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 50:
							return 1251.6605f, -3118.4639f, 4.8043f;
						case 51:
							return 1185.8441f, -361.0499f, 67.7134f;
						case 52:
							return 1005.8588f, -2451.1904f, 27.4787f;
						case 53:
							return -1436.278f, -889.2004f, 9.751f;
						case 54:
							return 350.2902f, -841.9645f, 28.1662f;
						case 55:
							return -428.2279f, 139.0765f, 63.9359f;
						case 56:
							return 1069.922f, -1818.7148f, 36.3069f;
						case 57:
							return -1192.2769f, -393.1002f, 33.9566f;
						case 58:
							return 1197.8005f, -3332.8757f, 5.0288f;
						case 59:
							return -1555.404f, -466.657f, 34.806f;
						default:
					}
					break;
			}
			break;
		case 22:
			switch (iParam2)
			{
				case 130:
					switch (iParam0)
					{
						case 0:
							return 488.586f, -1685.345f, 28.187f;
						case 1:
							return 2606.3909f, 2506.8591f, 28.1067f;
						case 2:
							return -1474.9543f, 2020.8325f, 64.3418f;
						case 3:
							return -1768.242f, -645.3874f, 9.6474f;
						default:
					}
					break;
				case 131:
					switch (iParam0)
					{
						case 0:
							return 94.3984f, 3492.9204f, 38.7962f;
						case 1:
							return 684.2642f, 224.0924f, 92.1373f;
						case 2:
							return -2048.9934f, 1963.2402f, 188.0604f;
						case 3:
							return -862.634f, -2607.499f, 12.801f;
						default:
					}
					break;
				case 132:
					switch (iParam0)
					{
						case 0:
							return -711.597f, -854.114f, 22.083f;
						case 1:
							return 1491.998f, 2151.773f, 86.429f;
						case 2:
							return -2628.67f, 2836.943f, 15.6817f;
						case 3:
							return 2279.2246f, -420.7068f, 87.4597f;
						default:
					}
					break;
			}
			break;
		case 9:
			switch (iParam2)
			{
				case 71:
					switch (iParam0)
					{
						case 0:
							return -249.4805f, 6484.9893f, 10.2887f;
						case 1:
							return -259.6397f, 6494.89f, 10.1407f;
						case 2:
							return -253.7026f, 6490.204f, 10.4352f;
						default:
					}
					break;
				case 72:
					switch (iParam0)
					{
						case 0:
							return -325.2544f, -2540.5938f, 5.0006f;
						case 1:
							return -333.2641f, -2547.669f, 5.0006f;
						case 2:
							return -327.7825f, -2546.2695f, 5.0006f;
						default:
					}
					break;
				case 73:
					switch (iParam0)
					{
						case 0:
							return 2714.6946f, 4191.172f, 42.5929f;
						case 1:
							return 2707.848f, 4191.9307f, 42.7334f;
						case 2:
							return 2700.8657f, 4190.42f, 42.9373f;
						default:
					}
					break;
			}
			break;
		case 17:
			switch (iParam2)
			{
				case 102:
					switch (iParam0)
					{
						case 0:
							return 47.73f, 3676.175f, 38.81f;
						default:
					}
					break;
				case 103:
					switch (iParam0)
					{
						case 0:
							return -619.838f, -1061.679f, 20.788f;
						default:
					}
					break;
				case 104:
					switch (iParam0)
					{
						case 0:
							return 207.5303f, -2019.788f, 17.524f;
						default:
					}
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 77:
					switch (iParam0)
					{
						case 0:
							return -743.6788f, -1311.017f, 4.0004f;
						case 1:
							return -777.8008f, -1326.3387f, 4.0004f;
						default:
					}
					break;
				case 78:
					switch (iParam0)
					{
						case 0:
							return 1020.679f, 2653.537f, 38.557f;
						case 1:
							return 1055.388f, 2657.644f, 38.552f;
						default:
					}
					break;
				case 79:
					switch (iParam0)
					{
						case 0:
							return 2506.923f, 4077.902f, 37.631f;
						case 1:
							return 2518.6182f, 4114.5156f, 37.6307f;
						default:
					}
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 89:
					switch (iParam3)
					{
						case 0:
							return 1271.448f, -370.513f, 68.036f;
						case 1:
							return 1111.68f, -777.373f, 57.263f;
						case 2:
							return 1388.797f, -577.251f, 73.339f;
						case 3:
							return 875.354f, -597.039f, 57.152f;
						case 4:
							return 1021.487f, -686.351f, 55.731f;
						case 5:
							return 1240.78f, -585.891f, 68.31f;
						case 6:
							return 1143.521f, -378.116f, 66.049f;
						case 7:
							return 1007.512f, -588.964f, 58.101f;
						case 8:
							return 1020.205f, -461.712f, 62.904f;
						case 9:
							return 1207.443f, -660.841f, 60.907f;
						default:
					}
					break;
				case 90:
					switch (iParam3)
					{
						case 0:
							return 1837.211f, 3903.757f, 32.186f;
						case 1:
							return 1733.049f, 3954.123f, 31.577f;
						case 2:
							return 1936.729f, 3906.347f, 31.364f;
						case 3:
							return 1847.031f, 3773.829f, 32.148f;
						case 4:
							return 1734.021f, 3793.78f, 33.542f;
						case 5:
							return 1583.83f, 3799.811f, 33.662f;
						case 6:
							return 1621.443f, 3708.381f, 33.374f;
						case 7:
							return 1714.92f, 3884.811f, 33.904f;
						case 8:
							return 1723.715f, 3674.055f, 33.845f;
						case 9:
							return 1949.259f, 3799.854f, 31.061f;
						default:
					}
					break;
				case 91:
					switch (iParam3)
					{
						case 0:
							return -354.975f, 6153.438f, 30.481f;
						case 1:
							return -140.414f, 6345.692f, 30.491f;
						case 2:
							return -242.075f, 6197.691f, 30.489f;
						case 3:
							return -50.236f, 6356.161f, 30.315f;
						case 4:
							return -106.025f, 6250.811f, 30.352f;
						case 5:
							return -110.019f, 6572.976f, 28.522f;
						case 6:
							return -57.545f, 6452.511f, 30.507f;
						case 7:
							return -365.49f, 6280.021f, 29.217f;
						case 8:
							return -270.705f, 6358.026f, 31.287f;
						case 9:
							return -200.643f, 6460.745f, 30.101f;
						default:
					}
					break;
			}
			break;
		case 23:
			switch (iParam2)
			{
				case 133:
					switch (iParam0)
					{
						case 0:
							return -3015.3699f, 356.5794f, 13.6063f;
						default:
					}
					break;
				case 134:
					switch (iParam0)
					{
						case 0:
							return -1236.2244f, 488.4323f, 92.2327f;
						default:
					}
					break;
				case 135:
					switch (iParam0)
					{
						case 0:
							return 364.0974f, -1966.1995f, 23.4325f;
						default:
					}
					break;
				case 136:
					switch (iParam0)
					{
						case 0:
							return 699.028f, -296.572f, 58.185f;
						default:
					}
					break;
			}
			break;
		case 18:
			switch (iParam2)
			{
				case 105:
					switch (iParam0)
					{
						case 0:
							return 469.745f, -1683.583f, 28.291f;
						case 1:
							return 817.0272f, -758.7137f, 25.7274f;
						case 2:
							return 727.4249f, -2097.3281f, 28.2866f;
						case 3:
							return 1159.4985f, -1321.1633f, 33.7428f;
						default:
					}
					break;
				case 106:
					switch (iParam0)
					{
						case 0:
							return 454.321f, -572.23f, 27.5f;
						case 1:
							return 440.1198f, -1517.9878f, 28.278f;
						case 2:
							return 717.74f, -904.42f, 23.052f;
						case 3:
							return 42.1645f, -900.7593f, 28.9807f;
						default:
					}
					break;
				case 107:
					switch (iParam0)
					{
						case 0:
							return -323.6898f, -1530.5094f, 26.5426f;
						case 1:
							return 155.2826f, -1642.9125f, 28.2917f;
						case 2:
							return -597.05f, -885.92f, 24.513f;
						case 3:
							return 390.3208f, -904.3383f, 28.4187f;
						default:
					}
					break;
				case 108:
					switch (iParam0)
					{
						case 0:
							return -48.996f, -220.575f, 44.445f;
						case 1:
							return -484.358f, 269.188f, 82.17f;
						case 2:
							return 272.331f, 315.102f, 104.529f;
						case 3:
							return 906.052f, -181.3754f, 73.1346f;
						default:
					}
					break;
				case 109:
					switch (iParam0)
					{
						case 0:
							return 1089.371f, -2396.45f, 29.637f;
						case 1:
							return 202.911f, -2029.617f, 17.295f;
						case 2:
							return 1143.725f, -1405.727f, 33.58f;
						case 3:
							return 335.3341f, -1280.8303f, 30.8931f;
						default:
					}
					break;
				case 110:
					switch (iParam0)
					{
						case 0:
							return -1650.253f, -977.342f, 6.483f;
						case 1:
							return -706.6551f, -880.2819f, 22.6065f;
						case 2:
							return -497.6812f, -51.7973f, 38.9601f;
						case 3:
							return -2968.967f, 66.9994f, 10.6085f;
						default:
					}
					break;
				case 111:
					switch (iParam0)
					{
						case 0:
							return -904.673f, -2043.066f, 8.299f;
						case 1:
							return 219.6904f, -1993.9274f, 18.6654f;
						case 2:
							return -1775.76f, -2770.805f, 12.945f;
						case 3:
							return -244.2923f, -2571.5f, 5.0014f;
						default:
					}
					break;
				case 112:
					switch (iParam0)
					{
						case 0:
							return 1108.9271f, -332.8348f, 66.1295f;
						case 1:
							return -250.452f, 292.773f, 90.78f;
						case 2:
							return 100.196f, -146.932f, 53.782f;
						case 3:
							return 456.7384f, -945.0308f, 27.281f;
						default:
					}
					break;
				case 113:
					switch (iParam0)
					{
						case 0:
							return -37.584f, -2517.533f, 5.01f;
						case 1:
							return 735.886f, -1913.9359f, 28.292f;
						case 2:
							return 817.715f, -2404.01f, 22.657f;
						case 3:
							return 1206.183f, -3194.917f, 5.028f;
						default:
					}
					break;
				case 114:
					switch (iParam0)
					{
						case 0:
							return -1463.272f, -679.914f, 25.467f;
						case 1:
							return -337.2616f, -1295.658f, 30.3991f;
						case 2:
							return -1024.7257f, -1518.727f, 4.5942f;
						case 3:
							return -435.8633f, -457.8559f, 31.4974f;
						default:
					}
					break;
			}
			break;
		case 14:
			switch (iParam2)
			{
				case 86:
					switch (iParam0)
					{
						case 0:
							return -1682.0421f, 63.9532f, 117.0128f;
						default:
					}
					break;
				case 87:
					switch (iParam0)
					{
						case 0:
							return 1813.9673f, -1281.6213f, 147.0125f;
						default:
					}
					break;
				case 88:
					switch (iParam0)
					{
						case 0:
							return 904.7272f, -49.9625f, 132.5364f;
						default:
					}
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 74:
					switch (iParam0)
					{
						case 0:
							return -699.099f, -988.335f, 19.389f;
						case 7:
							return -688.791f, -981.056f, 19.39f;
						default:
					}
					break;
				case 75:
					switch (iParam0)
					{
						case 0:
							return -753.118f, 5531.254f, 32.486f;
						case 7:
							return -770.402f, 5536.521f, 32.485f;
						default:
					}
					break;
				case 76:
					switch (iParam0)
					{
						case 0:
							return 177.046f, 2714.577f, 41.212f;
						case 7:
							return 191.675f, 2701.026f, 41.588f;
						default:
					}
					break;
			}
			break;
		case 24:
			switch (iParam2)
			{
				case 137:
					switch (iParam0)
					{
						case 0:
							return -1303.739f, -2274.059f, 12.9473f;
						default:
					}
					break;
				case 138:
					switch (iParam0)
					{
						case 0:
							return -1541.521f, -2682.9333f, 12.9445f;
						default:
					}
					break;
				case 139:
					switch (iParam0)
					{
						case 0:
							return -1123.2104f, -3009.3625f, 12.9451f;
						default:
					}
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -854.4843f, -2919.72f, 75.4389f;
				default:
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 20:
					switch (iParam0)
					{
						case 0:
							return -1371.2589f, 219.1135f, 57.7171f;
						default:
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							return -1221.695f, 228.181f, 65.559f;
						default:
					}
					break;
				case 22:
					switch (iParam0)
					{
						case 0:
							return -1216.2106f, 233.1658f, 66.0404f;
						default:
					}
					break;
				case 23:
					switch (iParam0)
					{
						case 0:
							return -1339.4564f, 226.0749f, 57.7433f;
						default:
					}
					break;
				case 24:
					switch (iParam0)
					{
						case 0:
							return -1342.3553f, 225.8615f, 57.7414f;
						default:
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							return -1274.6355f, 215.1094f, 59.5056f;
						default:
					}
					break;
				case 26:
					switch (iParam0)
					{
						case 0:
							return -1242.3114f, 228.4301f, 63.3139f;
						default:
					}
					break;
				case 27:
					switch (iParam0)
					{
						case 0:
							return -1252.8394f, 215.3139f, 61.6552f;
						default:
					}
					break;
				case 28:
					switch (iParam0)
					{
						case 0:
							return -1320.7853f, 226.9186f, 57.7574f;
						default:
					}
					break;
				case 29:
					switch (iParam0)
					{
						case 0:
							return -1210.8944f, 234.1089f, 66.4545f;
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 10:
					switch (iParam0)
					{
						case 0:
							return 2484.7427f, 3382.7786f, 48.5586f;
						case 1:
							return 2470.86f, 3372.6863f, 49.7472f;
						case 2:
							return 2466.6602f, 3373.04f, 49.5588f;
						case 3:
							return 2486.5916f, 3405.4338f, 49.0988f;
						case 4:
							return 2497.0022f, 3392.6584f, 48.6279f;
						default:
					}
					break;
				case 11:
					switch (iParam0)
					{
						case 0:
							return 1617.2933f, 3325.9814f, 38.9493f;
						case 1:
							return 1603.6903f, 3340.4004f, 38.4097f;
						case 2:
							return 1616.871f, 3331.4922f, 38.9299f;
						case 3:
							return 1589.8632f, 3334.1555f, 38.106f;
						case 4:
							return 1615.8789f, 3320.558f, 38.9793f;
						default:
					}
					break;
				case 12:
					switch (iParam0)
					{
						case 0:
							return 1350.479f, 2753.499f, 50.3878f;
						case 1:
							return 1334.4451f, 2748.7358f, 50.6153f;
						case 2:
							return 1354.7778f, 2751.8606f, 50.3648f;
						case 3:
							return 1365.5195f, 2745.1682f, 50.8089f;
						case 4:
							return 1337.215f, 2758.0752f, 50.4052f;
						default:
					}
					break;
				case 13:
					switch (iParam0)
					{
						case 0:
							return 2271.0186f, 2665.8508f, 46.5854f;
						case 1:
							return 2262.6235f, 2670.111f, 47.6765f;
						case 2:
							return 2246.2273f, 2662.7295f, 49.2182f;
						case 3:
							return 2242.3552f, 2658.645f, 49.1144f;
						case 4:
							return 2253.3586f, 2674.902f, 48.6738f;
						default:
					}
					break;
				case 14:
					switch (iParam0)
					{
						case 0:
							return 2452.5286f, 3078.3438f, 46.1789f;
						case 1:
							return 2459.3604f, 3099.8472f, 47.4006f;
						case 2:
							return 2462.9678f, 3094.5671f, 47.5579f;
						case 3:
							return 2454.6606f, 3102.829f, 46.7598f;
						case 4:
							return 2466.4707f, 3082.7825f, 47.0988f;
						default:
					}
					break;
				case 15:
					switch (iParam0)
					{
						case 0:
							return 2093.69f, 3513.132f, 41.674f;
						case 1:
							return 2115.111f, 3499.683f, 43.54f;
						case 2:
							return 2113.963f, 3503.543f, 43.342f;
						case 3:
							return 2110.2986f, 3490.9314f, 43.9358f;
						case 4:
							return 2083.438f, 3507.0674f, 41.9417f;
						default:
					}
					break;
				case 16:
					switch (iParam0)
					{
						case 0:
							return 2617.1226f, 3514.1494f, 50.7084f;
						case 1:
							return 2632.279f, 3535.5378f, 50.9178f;
						case 2:
							return 2632.683f, 3528.91f, 51.3635f;
						case 3:
							return 2611.439f, 3515.6157f, 50.228f;
						case 4:
							return 2623.0366f, 3543.4944f, 50.1509f;
						default:
					}
					break;
				case 17:
					switch (iParam0)
					{
						case 0:
							return 2631.111f, 4858.0645f, 32.8836f;
						case 1:
							return 2616.381f, 4845.351f, 33.2846f;
						case 2:
							return 2618.4353f, 4838.718f, 32.9008f;
						case 3:
							return 2639.277f, 4851.732f, 32.6325f;
						case 4:
							return 2613.5742f, 4840.779f, 33.2859f;
						default:
					}
					break;
				case 18:
					switch (iParam0)
					{
						case 0:
							return 586.8419f, 2478.1465f, 60.261f;
						case 1:
							return 598.1171f, 2459.2483f, 59.4126f;
						case 2:
							return 597.7141f, 2465.2761f, 59.8198f;
						case 3:
							return 589.8533f, 2454.355f, 58.6038f;
						case 4:
							return 575.4168f, 2475.7156f, 59.1821f;
						default:
					}
					break;
				case 19:
					switch (iParam0)
					{
						case 0:
							return 624.5857f, 3009.2258f, 40.9766f;
						case 1:
							return 607.38f, 3006.3223f, 40.8904f;
						case 2:
							return 612.3398f, 3006.0608f, 40.5836f;
						case 3:
							return 630.5665f, 3024.0396f, 41.4217f;
						case 4:
							return 594.3163f, 3011.2222f, 40.892f;
						default:
					}
					break;
			}
			break;
		case 3:
			switch (iParam2)
			{
				case 30:
					switch (iParam0)
					{
						case 0:
							return 2607.675f, 263.959f, 97.367f;
						case 1:
							return 2609.969f, 273.271f, 97.177f;
						default:
					}
					break;
				case 31:
					switch (iParam0)
					{
						case 0:
							return -1678.9957f, -689.9188f, 10.2883f;
						case 1:
							return -1685.3491f, -685.408f, 10.3004f;
						default:
					}
					break;
				case 32:
					switch (iParam0)
					{
						case 0:
							return 1355.714f, 650.3459f, 79.3869f;
						case 1:
							return 1350.0156f, 644.9999f, 79.4645f;
						default:
					}
					break;
				case 33:
					switch (iParam0)
					{
						case 0:
							return 633.4656f, -309.621f, 42.6194f;
						case 1:
							return 636.5789f, -302.4718f, 42.6585f;
						default:
					}
					break;
				case 34:
					switch (iParam0)
					{
						case 0:
							return -2366.3408f, -289.2394f, 13.17f;
						case 1:
							return -2360.0928f, -293.829f, 13.0415f;
						default:
					}
					break;
				case 35:
					switch (iParam0)
					{
						case 0:
							return -1988.9747f, -449.1148f, 10.7775f;
						case 1:
							return -1994.9723f, -444.1566f, 10.7436f;
						default:
					}
					break;
				case 36:
					switch (iParam0)
					{
						case 0:
							return 1452.358f, -1063.2943f, 54.0991f;
						case 1:
							return 1459.1989f, -1059.4629f, 54.339f;
						default:
					}
					break;
				case 37:
					switch (iParam0)
					{
						case 0:
							return -2442.418f, -220.1357f, 15.6274f;
						case 1:
							return -2449.4539f, -216.6807f, 15.8673f;
						default:
					}
					break;
				case 38:
					switch (iParam0)
					{
						case 0:
							return -1730.6062f, -679.282f, 9.8912f;
						case 1:
							return -1724.3989f, -684.0659f, 10.151f;
						default:
					}
					break;
				case 39:
					switch (iParam0)
					{
						case 0:
							return 1478.183f, -1019.8671f, 55.4095f;
						case 1:
							return 1471.4216f, -1023.597f, 55.1622f;
						default:
					}
					break;
			}
			break;
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -8.169f, -84.8623f, 56.5074f;
						case 1:
							return -6.7639f, -82.4518f, 56.7987f;
						case 2:
							return -4.2651f, -83.8969f, 57.2672f;
						default:
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 345.6744f, -186.2342f, 57.1566f;
						case 1:
							return 347.6142f, -186.9624f, 57.1554f;
						case 2:
							return 348.9586f, -189.2114f, 56.8058f;
						default:
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -19.8287f, -1031.8419f, 27.9397f;
						case 1:
							return -20.0449f, -1033.5531f, 27.8801f;
						case 2:
							return -16.5509f, -1033.5632f, 27.929f;
						default:
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 358.615f, -797.56f, 28.294f;
						case 1:
							return 358.027f, -795.364f, 28.295f;
						case 2:
							return 358f, -792.168f, 28.292f;
						default:
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 256.351f, -13.115f, 72.697f;
						case 1:
							return 257.191f, -14.702f, 72.661f;
						case 2:
							return 259.617f, -16.512f, 72.64f;
						default:
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -345.561f, 77.868f, 63.274f;
						case 1:
							return -344.042f, 77.529f, 63.302f;
						case 2:
							return -340.729f, 75.857f, 63.486f;
						default:
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 199.41f, -1690.25f, 28.653f;
						case 1:
							return 198.018f, -1692.228f, 28.611f;
						case 2:
							return 199.354f, -1694.875f, 28.534f;
						default:
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 186.426f, -159.329f, 55.319f;
						case 1:
							return 183.278f, -159.733f, 55.317f;
						case 2:
							return 181.53f, -158.373f, 55.317f;
						default:
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return -786.218f, -198.355f, 36.284f;
						case 1:
							return -787.212f, -196.828f, 36.284f;
						case 2:
							return -786.235f, -193.779f, 36.284f;
						default:
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -384.7404f, -152.349f, 37.5323f;
						case 1:
							return -386.2783f, -153.2111f, 37.5323f;
						case 2:
							return -388.1436f, -148.5444f, 37.5323f;
						default:
					}
					break;
			}
			break;
		case 20:
			switch (iParam2)
			{
				case 123:
					switch (iParam0)
					{
						case 0:
							return -1020.6304f, 343.7216f, 68.5287f;
						case 1:
							return -1012.988f, 373.261f, 70.999f;
						case 2:
							return -1007.4553f, 348.8657f, 69.7952f;
						case 3:
							return -1014.7319f, 374.7997f, 70.8704f;
						default:
					}
					break;
				case 124:
					switch (iParam0)
					{
						case 0:
							return -124.9867f, 387.6605f, 111.8218f;
						case 1:
							return -123.3431f, 390.4512f, 111.7459f;
						case 2:
							return -131.0407f, 373.2224f, 111.6236f;
						case 3:
							return -132.2866f, 370.3068f, 111.5484f;
						default:
					}
					break;
				case 125:
					switch (iParam0)
					{
						case 0:
							return -164.7272f, 273.5452f, 92.4017f;
						case 1:
							return -166.8107f, 273.8469f, 92.306f;
						case 2:
							return -160.7095f, 265.9451f, 92.5231f;
						case 3:
							return -157.3334f, 265.6603f, 92.7294f;
						default:
					}
					break;
				case 126:
					switch (iParam0)
					{
						case 0:
							return -739.8737f, -125.3638f, 36.7048f;
						case 1:
							return -738.5381f, -126.6788f, 36.6286f;
						case 2:
							return -731.2865f, -140.0159f, 36.2787f;
						case 3:
							return -729.4428f, -142.9517f, 36.2278f;
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_384(int iParam0)//Position - 0x2B315C
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 <= 0 || iVar0 >= 10)
	{
		return 0;
	}
	return 1;
}

int func_385()//Position - 0x2BF7BE
{
	return 999999;
}

int func_386(int iParam0)//Position - 0x2C1634
{
	switch (iParam0)
	{
		case 83:
			return 377;
		case 84:
			return 378;
		case 85:
			return 379;
		case 86:
			return 380;
		case 87:
			return 381;
		default:
	}
	return 0;
}

int func_387(int iParam0)//Position - 0x2C17B2
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 <= 0 || iVar0 >= 6)
	{
		return 0;
	}
	return 1;
}

int func_388()//Position - 0x2D252B
{
	return joaat("trailers");
	return joaat("trailers4");
}

int func_389(int iParam0)//Position - 0x2F393A
{
	switch (iParam0)
	{
		case 167:
		case 178:
		case 192:
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 250:
		case 243:
		case 158:
		case 256:
		case 258:
			return 1;
		default:
	}
	if (__LIB_0__.func_684(iParam0) == 0)
	{
		return 1;
	}
	return 0;
}

void func_390(var uParam0)//Position - 0x2F6F8E
{
	Global_1836068.f_14 = uParam0;
}

var func_391(int iParam0)//Position - 0x2F7083
{
	return Global_1892703[iParam0 /*599*/].f_10.f_58;
}

int func_392(bool bParam0)//Position - 0x2F71D9
{
	if (__LIB_0__.func_630(Global_1853348[bParam0 /*834*/].f_267.f_32, -1))
	{
		return 1;
	}
	return 0;
}

void func_393(int iParam0)//Position - 0x2F7ABC
{
	if (Global_2815059.f_5195.f_346 != iParam0)
	{
		Global_2815059.f_5195.f_346 = iParam0;
	}
}

void func_394(int iParam0)//Position - 0x2F9223
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -1000f);
	}
}

float func_395()//Position - 0x2F9439
{
	return 1.5f;
}

int func_396(bool bParam0)//Position - 0x2F9C7D
{
	if (bParam0 != -1)
	{
		return BitTest(Global_1970897[bParam0 /*68*/].f_18, 19);
	}
	return 0;
}

int func_397(int iParam0)//Position - 0x2FB6CF
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_35;
	}
	return 0;
}

int func_398(int iParam0)//Position - 0x2FC6CF
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("VehicleList", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "VehicleList"))
	{
		return 1;
	}
	return 0;
}

bool func_399(int iParam0)//Position - 0x2FCF30
{
	return Global_1977138[iParam0 /*57*/].f_26 == 1;
}

int func_400()//Position - 0x2FD4B5
{
	if (Global_2815059.f_6694.f_23)
	{
		return 0;
	}
	if (__LIB_2__.func_308(Global_2703735.f_4.f_16))
	{
		return 0;
	}
	if (__LIB_1__.func_476(Global_2703735.f_4.f_16))
	{
		return 0;
	}
	if (Global_1853348[Global_2703735.f_4.f_16 /*834*/] == 6)
	{
		return 0;
	}
	if (__LIB_4__.func_421(Global_2703735.f_4.f_16) || __LIB_0__.func_674())
	{
		return 0;
	}
	if (Global_1853348[Global_2703735.f_4.f_16 /*834*/].f_192 != 0)
	{
		return 0;
	}
	if (BitTest(Global_1853348[Global_2703735.f_4.f_16 /*834*/].f_833, 15) || BitTest(Global_1853348[Global_2703735.f_4.f_16 /*834*/].f_833, 14))
	{
		return 0;
	}
	if (__LIB_2__.func_509(Global_2703735.f_4.f_16, 0))
	{
		return 0;
	}
	if (__LIB_0__.func_710(Global_2703735.f_4.f_16) == joaat("WEAPON_MINIGUN"))
	{
		return 0;
	}
	if (__LIB_2__.func_381())
	{
		return 0;
	}
	if (Global_1853348[Global_2703735.f_4.f_16 /*834*/] == 5)
	{
		return 0;
	}
	if (BitTest(Global_2815059.f_428.f_5, 0))
	{
		return 0;
	}
	return 1;
}

int func_401(int iParam0)//Position - 0x301F25
{
	switch (iParam0)
	{
		case 2:
			return 11503;
		case 1:
			return 11504;
		default:
	}
	return -1;
}

bool func_402()//Position - 0x302C36
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_430 != 0;
}

void func_403(int iParam0)//Position - 0x302DC2
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_430 = iParam0;
}

int func_404(int iParam0)//Position - 0x302EA2
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			if (((((VEHICLE::GET_VEHICLE_CLASS(iVar1) == 8 || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("blazer")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("blazer3")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("blazer4")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("verus")) || (Global_262145.f_2418 /* Tunable: FORMATION_BIKE_MODEL */ != 0 && ENTITY::GET_ENTITY_MODEL(iVar1) == Global_262145.f_2418 /* Tunable: FORMATION_BIKE_MODEL */))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iVar0, iVar1))
				{
					if (__LIB_2__.func_50(iVar0, iVar1) == -1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_405(bool bParam0)//Position - 0x303025
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			if (VEHICLE::GET_VEHICLE_CLASS(iVar1) == 16 || (Global_262145.f_2418 /* Tunable: FORMATION_BIKE_MODEL */ != 0 && ENTITY::GET_ENTITY_MODEL(iVar1) == Global_262145.f_2418 /* Tunable: FORMATION_BIKE_MODEL */))
			{
				if (__LIB_2__.func_50(iVar0, iVar1) == -1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_406(int iParam0, int iParam1)//Position - 0x364BE0
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && (!ENTITY::IS_ENTITY_DEAD(iVar0, false) || iParam1))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
				{
					iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (__LIB_9__.func_237(iVar1))
					{
						VEHICLE::DETACH_VEHICLE_FROM_CARGOBOB(iVar1, iParam0);
					}
					else
					{
						VEHICLE::DETACH_VEHICLE_FROM_TRAILER(iVar1);
					}
				}
			}
		}
	}
}

float func_407(int iParam0)//Position - 0x365D6F
{
	switch (iParam0)
	{
		case -1905128202:
			return 800f;
		default:
	}
	return 400f;
}

float func_408(int iParam0)//Position - 0x365D91
{
	switch (iParam0)
	{
		case -1905128202:
			return 4500f;
		default:
	}
	return 1400f;
}

int func_409(int iParam0)//Position - 0x365DB3
{
	switch (iParam0)
	{
		case -1905128202:
			return 0;
		case 1160415507:
			return 255;
		case 1553945504:
			return 255;
		case 639967857:
			return 255;
		case -1396457166:
			return 255;
		case 303124754:
			return 255;
		case -956255885:
			return 255;
		default:
	}
	return 0;
}

void func_410(bool bParam0)//Position - 0x365F40
{
	switch (__LIB_3__.func_803(bParam0))
	{
		case 256:
			__LIB_1__.func_447(127);
			break;
		case 263:
			__LIB_1__.func_447(152);
			break;
	}
	if (__LIB_4__.func_109(bParam0, 15))
	{
		__LIB_1__.func_447(148);
	}
}

float func_411(bool bParam0)//Position - 0x365F82
{
	switch (__LIB_3__.func_803(bParam0))
	{
		case 256:
			return 1f;
		default:
	}
	return 1f;
}

int func_412(bool bParam0)//Position - 0x365FE7
{
	switch (__LIB_3__.func_803(bParam0))
	{
		case 256:
			return 765;
		case 263:
			return 813;
		case 300:
			return 326;
		default:
	}
	if (__LIB_4__.func_109(bParam0, 15))
	{
		return 794;
	}
	return 478;
}

int func_413(int iParam0)//Position - 0x36606F
{
	return 586;
}

int func_414(int iParam0)//Position - 0x36857D
{
	switch (iParam0)
	{
		case 3:
			return 1;
		default:
	}
	return 0;
}

int func_415()//Position - 0x36AAF3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_262145.f_12838 /* Tunable: GB_NUMBER_OF_BOSSES_IN_SESSION */)
	{
		if (Global_1920255.f_11.f_132[iVar0] == -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_416()//Position - 0x36C578
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return __LIB_0__.func_628(PLAYER::PLAYER_PED_ID());
	}
	return 0;
}

int func_417()//Position - 0x36C597
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return __LIB_0__.func_629(PLAYER::PLAYER_PED_ID());
	}
	return 0;
}

var func_418()//Position - 0x36CC86
{
	return Global_262145.f_12853 /* Tunable: GB_WAGES_AMOUNT */;
}

int func_419(int iParam0)//Position - 0x36D3C1
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_30[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_420()//Position - 0x36D9D1
{
	Global_2815059.f_900 = 0;
	Global_2815059.f_900.f_1 = { 0f, 0f, 0f };
	Global_2815059.f_900.f_4 = 0f;
	Global_2815059.f_900.f_8 = 0;
	MISC::CLEAR_BIT(&(Global_2815059.f_900.f_7), 0);
}

bool func_421(var uParam0)//Position - 0x36E6D8
{
	return BitTest(Global_1888478.f_3, uParam0);
}

void func_422(int iParam0)//Position - 0x36F166
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_22 = iParam0;
}

int func_423()//Position - 0x3711B4
{
	return Global_1892703[__LIB_0__.func_582() /*599*/].f_10.f_76.f_2;
}

int func_424(int iParam0)//Position - 0x373CFC
{
	switch (iParam0)
	{
		case 714:
		case 718:
		case 722:
		case 726:
		case 730:
		case 734:
		case 738:
		case 918:
		case 926:
		case 934:
		case 942:
		case 1090:
		case 1060:
		case 1114:
		case 1122:
		case 1171:
		case 1185:
			return 0;
		case 715:
		case 719:
		case 723:
		case 727:
		case 731:
		case 735:
		case 739:
		case 919:
		case 927:
		case 935:
		case 943:
		case 1091:
		case 1061:
		case 1115:
		case 1123:
		case 1172:
		case 1186:
			return 1;
		case 716:
		case 720:
		case 724:
		case 728:
		case 732:
		case 736:
		case 740:
		case 920:
		case 928:
		case 936:
		case 944:
		case 1092:
		case 1062:
		case 1116:
		case 1124:
		case 1173:
		case 1187:
			return 2;
		case 717:
		case 721:
		case 725:
		case 729:
		case 733:
		case 737:
		case 741:
		case 921:
		case 929:
		case 937:
		case 945:
		case 1093:
		case 1063:
		case 1117:
		case 1125:
		case 1174:
		case 1188:
			return 3;
		case 870:
		case 874:
		case 878:
		case 882:
		case 886:
		case 890:
		case 894:
		case 922:
		case 930:
		case 938:
		case 946:
		case 1094:
		case 1064:
		case 1118:
		case 1126:
		case 1175:
		case 1189:
			return 4;
		case 871:
		case 875:
		case 879:
		case 883:
		case 887:
		case 891:
		case 895:
		case 923:
		case 931:
		case 939:
		case 947:
		case 1095:
		case 1065:
		case 1119:
		case 1127:
		case 1176:
		case 1190:
			return 5;
		case 872:
		case 876:
		case 880:
		case 884:
		case 888:
		case 892:
		case 896:
		case 924:
		case 932:
		case 940:
		case 948:
		case 1096:
		case 1066:
		case 1120:
		case 1128:
		case 1177:
		case 1191:
			return 6;
		case 873:
		case 877:
		case 881:
		case 885:
		case 889:
		case 893:
		case 897:
		case 925:
		case 933:
		case 941:
		case 949:
		case 1097:
		case 1067:
		case 1121:
		case 1129:
		case 1178:
		case 1192:
			return 7;
		default:
	}
	return -1;
}

void func_425()//Position - 0x374D3C
{
	Global_2815059.f_5195.f_2 = -1;
}

void func_426(bool bParam0)//Position - 0x375245
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 9))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 9);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 9))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 9);
	}
}

void func_427(bool bParam0)//Position - 0x3752AE
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_3, 0))
		{
			MISC::SET_BIT(&(Global_1946250.f_3), 0);
		}
	}
	else if (BitTest(Global_1946250.f_3, 0))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_3), 0);
	}
}

void func_428(bool bParam0)//Position - 0x3752EB
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2, 5))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2), 5);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2), 5);
	}
}

void func_429(bool bParam0)//Position - 0x3753B6
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 11))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 11);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 11))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 11);
	}
}

void func_430(bool bParam0)//Position - 0x37541F
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 1);
		}
	}
	else if (BitTest(Global_1946250.f_1, 1))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 1);
	}
}

void func_431(int iParam0)//Position - 0x3801F0
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_3 = iParam0;
}

int func_432()//Position - 0x380A29
{
	return Global_1892703[__LIB_0__.func_582() /*599*/].f_10.f_59;
}

void func_433()//Position - 0x3811F1
{
	Global_2815059.f_314 = 1;
	Global_2815059.f_288 = -1;
	Global_2815059.f_289 = -1;
	Global_2815059.f_292 = -1;
	Global_2815059.f_295 = -1;
}

bool func_434(var uParam0, int iParam1)//Position - 0x381D5E
{
	return BitTest(uParam0->f_1, iParam1);
}

var func_435()//Position - 0x381E26
{
	return Global_262145.f_12874 /* Tunable: GB_DISABLE_BOSS_AND_GOON */;
}

bool func_436(int iParam0)//Position - 0x381E7E
{
	return Global_262145.f_5023[3] == iParam0;
}

void func_437(int iParam0)//Position - 0x381FAA
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_429 != iParam0)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_429 = iParam0;
	}
	if (Global_2715699.f_3076.f_171 != iParam0)
	{
		Global_2715699.f_3076.f_171 = iParam0;
	}
}

void func_438(int iParam0, int iParam1)//Position - 0x382C4E
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_3[iParam0] = __LIB_9__.func_376(iParam0, iParam1);
	Global_2824753.f_2[iParam0] = __LIB_9__.func_376(iParam0, iParam1);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_11[iParam0] = __LIB_9__.func_376(iParam0, iParam1);
	Global_2824753.f_15[iParam0] = __LIB_9__.func_376(iParam0, iParam1);
}

int func_439(int iParam0)//Position - 0x3840DA
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return 0;
		case 3:
			return 1;
		default:
	}
	return -1;
}

bool func_440()//Position - 0x38411E
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32, 3);
}

void func_441(int iParam0)//Position - 0x3856BE
{
	Global_1937088.f_427 = iParam0;
}

void func_442(int iParam0)//Position - 0x3857B3
{
	Global_1937088.f_422 = iParam0;
}

void func_443(int iParam0)//Position - 0x385B89
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_ALL_POSTITS"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_444(int iParam0)//Position - 0x385BA3
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_ALL_HIGHLIGHTS"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_445(int iParam0)//Position - 0x385BBD
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_ALL_AREAS"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_446(int iParam0)//Position - 0x385BD7
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_ALL_ARROWS"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_447(int iParam0)//Position - 0x385BF1
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_ALL_TEXT"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_448(int iParam0)//Position - 0x385C0B
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "REMOVE_ALL_PINS"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_449(int iParam0)//Position - 0x385C25
{
	Global_1937518.f_48 = iParam0;
}

bool func_450()//Position - 0x385C35
{
	return Global_1937518.f_48;
}

void func_451(int iParam0)//Position - 0x385C43
{
	Global_1931975.f_1717 = iParam0;
}

void func_452(int iParam0)//Position - 0x385C54
{
	Global_1931975.f_1786 = iParam0;
}

void func_453(int iParam0)//Position - 0x385C65
{
	Global_1931975.f_1784 = iParam0;
}

void func_454(int iParam0)//Position - 0x385C76
{
	Global_1931975.f_1781 = iParam0;
}

void func_455(int iParam0)//Position - 0x385C87
{
	Global_1931975.f_1780 = iParam0;
}

void func_456(int iParam0)//Position - 0x385C98
{
	Global_1931975.f_1779 = iParam0;
}

void func_457(int iParam0)//Position - 0x385CA9
{
	Global_1931975.f_1778 = iParam0;
}

void func_458()//Position - 0x385CBA
{
	Global_1931975.f_1 = 0;
}

void func_459(int iParam0)//Position - 0x385CC9
{
	Global_1931975.f_1776 = iParam0;
}

void func_460()//Position - 0x385CDA
{
	int iVar0;
	struct<17> Var1;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_1931975.f_1793[iVar0 /*17*/] = { Var1 };
		iVar0++;
	}
}

void func_461()//Position - 0x385D17
{
	struct<3> Var0;
	Global_1931975.f_1693 = { Var0 };
}

void func_462(var uParam0)//Position - 0x385D2C
{
	struct<23> Var0;
	*uParam0 = { Var0 };
}

void func_463(var uParam0)//Position - 0x385D4E
{
	struct<53> Var0;
	*uParam0 = { Var0 };
}

void func_464()//Position - 0x385D60
{
	int iVar0;
	struct<5> Var1;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_1931975.f_1574[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_465()//Position - 0x385DC7
{
	struct<23> Var0;
	struct<3> Var1;
	struct<16> Var2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	struct<6> Var10;
	int iVar11;
	int iVar12;
	iVar11 = 0;
	while (iVar11 <= 6)
	{
		iVar12 = 0;
		while (iVar12 <= 0)
		{
			Global_1931975.f_111[iVar11 /*204*/][iVar12 /*23*/] = { Var0 };
			iVar12++;
		}
		Global_1931975.f_111[iVar11 /*204*/].f_24 = { Var1 };
		Global_1931975.f_111[iVar11 /*204*/].f_27 = { Var2 };
		Global_1931975.f_111[iVar11 /*204*/].f_43 = uVar3;
		Global_1931975.f_111[iVar11 /*204*/].f_173 = uVar4;
		Global_1931975.f_111[iVar11 /*204*/].f_174 = uVar5;
		Global_1931975.f_111[iVar11 /*204*/].f_175 = uVar6;
		Global_1931975.f_111[iVar11 /*204*/].f_176 = uVar7;
		Global_1931975.f_111[iVar11 /*204*/].f_177 = uVar8;
		Global_1931975.f_111[iVar11 /*204*/].f_178 = uVar9;
		iVar12 = 0;
		while (iVar12 <= 3)
		{
			Global_1931975.f_111[iVar11 /*204*/].f_179[iVar12 /*6*/] = { Var10 };
			iVar12++;
		}
		Global_1931975.f_1793[iVar11 /*17*/] = 0;
		iVar11++;
	}
}

void func_466(var uParam0)//Position - 0x385EC5
{
	struct<108> Var0;
	Var0 = 17;
	Var0.f_18 = 17;
	Var0.f_36 = 17;
	Var0.f_54 = 17;
	Var0.f_72 = 17;
	Var0.f_90 = 17;
	*uParam0 = { Var0 };
}

bool func_467()//Position - 0x385F13
{
	return Global_1931975.f_1775;
}

void func_468()//Position - 0x385F22
{
	Global_2715699.f_6328 = 0;
}

void func_469(int iParam0)//Position - 0x385F32
{
	Global_1937518.f_40 = iParam0;
}

void func_470()//Position - 0x385F42
{
	Global_1931975.f_1771 = 0;
}

void func_471()//Position - 0x38633F
{
	struct<141> Var0;
	Var0 = 4;
	Var0.f_63.f_2 = 5;
	Var0.f_77 = 2;
	Var0.f_82 = 4;
	Var0.f_82.f_5 = 4;
	Var0.f_82.f_10 = 5;
	Var0.f_82.f_16 = 4;
	Var0.f_82.f_21 = -1;
	Var0.f_82.f_22 = -1;
	Var0.f_109 = 4;
	Global_1933908.f_3033 = { Var0 };
}

void func_472()//Position - 0x38639B
{
	struct<5> Var0;
	Var0 = 4;
	Global_1933908.f_3014 = { Var0 };
}

void func_473()//Position - 0x3863B7
{
	struct<6> Var0;
	Var0 = 5;
	Global_1933908.f_3008 = { Var0 };
}

void func_474()//Position - 0x3863D3
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		Global_1933908.f_237[iVar0 /*4*/] = { Var1 };
		Global_1933908.f_306[iVar0 /*3*/] = { Var2 };
		iVar0++;
	}
}

void func_475()//Position - 0x38640F
{
	struct<2> Var0;
	Global_1933908 = { Var0 };
}

void func_476()//Position - 0x386421
{
	int iVar0;
	struct<9> Var1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1933908.f_197[iVar0 /*9*/] = { Var1 };
		iVar0++;
	}
}

void func_477(int iParam0, int iParam1)//Position - 0x38644D
{
	int iVar0;
	if (iParam0 == iParam0)
	{
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				Global_1933908.f_3033.f_82[iVar0] = -1;
				Global_1933908.f_3033.f_82.f_5[iVar0] = -1;
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				Global_1933908.f_3033.f_82.f_10[iVar0] = -1;
				iVar0++;
			}
			break;
		case 2:
			break;
	}
}

void func_478(int iParam0)//Position - 0x3864D0
{
	Global_1933908.f_2999 = iParam0;
}

void func_479(int iParam0)//Position - 0x3865D2
{
	Global_1933908.f_2768 = iParam0;
}

void func_480(int iParam0)//Position - 0x38674E
{
	Global_2727088 = iParam0;
}

bool func_481()//Position - 0x386C91
{
	return Global_2727088;
}

void func_482(int iParam0)//Position - 0x386C9D
{
	if (iParam0 == 1)
	{
		Global_1836593 = 1;
	}
	else
	{
		Global_1836593 = 0;
	}
}

var func_483()//Position - 0x392D3F
{
	return BitTest(Global_2714762, 29);
}

var func_484()//Position - 0x392F7F
{
	return Global_2714762.f_846;
}

int func_485(var uParam0, var uParam1, bool bParam2)//Position - 0x39335E
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), *uParam0) < (uParam1[iVar0 /*4*/])->f_3)
		{
			if (bParam2)
			{
				__LIB_1__.func_120(uParam0, *(uParam1[iVar0 /*4*/]), (uParam1[iVar0 /*4*/])->f_3, 1036831949, 0, 0);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_486()//Position - 0x3935C1
{
	return BitTest(Global_1922761, 30);
}

void func_487(int iParam0)//Position - 0x3935D0
{
	Global_2715699.f_6328 = iParam0;
}

void func_488(int iParam0)//Position - 0x3937C0
{
	if (iParam0 == 79)
	{
		if (!STREAMING::IS_IPL_ACTIVE("apa_stilt_ch2_09c_int"))
		{
			STREAMING::REQUEST_IPL("apa_stilt_ch2_09c_int");
		}
	}
}

int func_489(int iParam0)//Position - 0x3960CB
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		switch (iVar0)
		{
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("brutus"):
			case joaat("brutus2"):
			case joaat("brutus3"):
			case joaat("cerberus"):
			case joaat("cerberus2"):
			case joaat("cerberus3"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("imperator"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("issi4"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("monster3"):
			case joaat("monster4"):
			case joaat("monster5"):
			case joaat("scarab"):
			case joaat("scarab2"):
			case joaat("scarab3"):
			case joaat("slamvan4"):
			case joaat("slamvan5"):
			case joaat("slamvan6"):
			case joaat("zr380"):
			case joaat("zr3802"):
			case joaat("zr3803"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 37) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 42) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 43) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 44) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 45) > -1)
				{
					return 1;
				}
				break;
			case joaat("mule4"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("pounder2"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 2) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("rcbandito"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 8) > -1)
				{
					return 1;
				}
				break;
			case joaat("revolter"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("savestra"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("speedo4"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("viseris"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("deluxo"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("comet4"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("cuban800"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				break;
			case joaat("havok"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("rogue"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) > -1)
				{
					return 1;
				}
				break;
			case joaat("seabreeze"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("thruster"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				break;
			case joaat("jb7002"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) > -1)
				{
					return 1;
				}
				break;
			case joaat("champion"):
			case joaat("deity"):
			case joaat("granger2"):
			case joaat("buffalo4"):
			case joaat("patriot3"):
			case joaat("jubilee"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 45) > -1)
				{
					return 1;
				}
				break;
			case joaat("greenwood"):
			case joaat("omnisegt"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
				{
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_490(bool bParam0)//Position - 0x398345
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), Global_2715699.f_6007.f_257))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_491()//Position - 0x398386
{
	int iVar0;
	int iVar1[32];
	int iVar2;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1[iVar2] = iVar0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (iVar1[iVar0] == NETWORK::PARTICIPANT_ID())
		{
			switch (iVar0)
			{
				case 0:
					return -1;
				case 1:
					return 0;
				case 2:
					return 1;
				case 3:
					return 2;
				case 4:
					return 3;
				case 5:
					return 4;
				case 6:
					return 5;
				case 7:
					return 6;
				case 8:
					return 7;
				case 9:
					return 8;
				}
			default:
		}
		iVar0++;
	}
	return -2;
}

int func_492(int iParam0)//Position - 0x3989AD
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		default:
	}
	return 0;
}

bool func_493()//Position - 0x398E02
{
	return Global_2714762.f_867;
}

bool func_494()//Position - 0x399689
{
	return Global_2714762.f_877;
}

bool func_495()//Position - 0x399D5B
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 16);
}

void func_496()//Position - 0x399F93
{
	Global_2714762.f_877 = 0;
}

int func_497(int iParam0, int iParam1)//Position - 0x39A632
{
	int iVar0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 8:
					iVar0 = 4;
					break;
				default:
					if (__LIB_12__.func_302() || __LIB_17__.func_55())
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 0;
					}
					break;
			}
			break;
	}
	return iVar0;
}

var func_498()//Position - 0x39BA17
{
	return Global_2714762.f_16;
}

Vector3 func_499(int iParam0, int iParam1)//Position - 0x39BD03
{
	switch (iParam0)
	{
		case 11:
			return -1370.3983f, 56.4489f, 52.5023f;
			break;
		case 122:
			return -1154.8163f, -2716.453f, 18.8923f;
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 16.3823f, -1099.9557f, 28.797f;
				case 1:
					return 817.6979f, -2161.9824f, 28.619f;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1162.5516f, -1628.3932f, 3.3739f;
				case 1:
					return 479.8226f, -234.8953f, 52.7934f;
				case 2:
					return -1237.3899f, 333.6207f, 78.9863f;
				case 3:
					return -2870.1614f, 9.0811f, 10.6081f;
				case 4:
					return -939.5128f, -1255.6967f, 6.9671f;
				case 5:
					return -1618.9148f, 249.326f, 58.5552f;
				case 6:
					return -1369.9988f, -117.22f, 49.7046f;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 904.329f, -173.7431f, 73.0754f;
				case 1:
					return 1440.432f, -2215.5957f, 60.133f;
				case 2:
					return -83.8271f, -1330.8877f, 28.2913f;
				case 3:
					return 366.4715f, -2446.2266f, 5.1129f;
				case 4:
					return 1222.72f, 2721.2f, 37.0042f;
				case 5:
					return 1051.4794f, 2667.2903f, 38.5509f;
				case 6:
					return 273.371f, 2607.7676f, 43.7028f;
				case 7:
					return -193.7423f, 6277.6753f, 30.4892f;
				case 8:
					return 1687.1375f, 4966.838f, 42.0569f;
				case 9:
					return 2343.9714f, 3134.054f, 47.2088f;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1994.7828f, 3049.323f, 46.1123f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_500(bool bParam0)//Position - 0x39BFDF
{
	return Global_2689235[bParam0 /*453*/].f_119 == 3;
}

int func_501()//Position - 0x3A60A2
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_295;
}

int func_502(int iParam0)//Position - 0x3A869C
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 83 && iParam0 <= 87)
	{
		return 1;
	}
	return 0;
}

void func_503(bool bParam0)//Position - 0x3ABE8C
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703735.f_61.f_11, bParam0))
		{
			MISC::SET_BIT(&(Global_2703735.f_61.f_11), bParam0);
		}
	}
	else if (!BitTest(Global_2703735.f_61.f_12, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_12), (bParam0 - 32));
	}
}

int func_504()//Position - 0x3ABF9F
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == __LIB_0__.func_662())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_53) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_53))
		{
			return NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_53);
		}
	}
	return Global_2815059.f_325;
}

void func_505(bool bParam0)//Position - 0x3ACC13
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 11))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 11);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 11))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 11);
	}
}

void func_506(int iParam0)//Position - 0x3B09EB
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_173[iParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_173[iParam0], false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_173[iParam0]))
			{
				if (VEHICLE::HAS_VEHICLE_PETROLTANK_SET_ON_FIRE_BY_ENTITY(Global_2703735.f_173[iParam0], Global_2703735.f_172))
				{
					VEHICLE::CLEAR_VEHICLE_PETROLTANK_FIRE_CULPRIT(Global_2703735.f_173[iParam0]);
				}
			}
		}
	}
}

int func_507()//Position - 0x3B1DB3
{
	if (CAM::DOES_CAM_EXIST(Global_2725863) && CAM::IS_CAM_ACTIVE(Global_2725863))
	{
		return 1;
	}
	return 0;
}

void func_508()//Position - 0x3B3513
{
	__LIB_4__.func_509(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38));
}

int func_509(int iParam0, int iParam1)//Position - 0x3B3D26
{
	int iVar0;
	int iVar1;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
	iVar1 = 0;
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(iVar0) * 1440);
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(iVar0) * 60);
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_MINUTES(iVar0));
	return iVar1;
}

void func_510(int iParam0, var uParam1, var uParam2)//Position - 0x3B42A0
{
	switch (iParam0)
	{
		case 87:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					*uParam1 = { -1605.148f, -552.5016f, 33.4606f };
					*uParam2 = 309.4211f;
					break;
				case 1:
					*uParam1 = { -1616.306f, -561.6959f, 32.9867f };
					*uParam2 = 309.4369f;
					break;
				case 2:
					*uParam1 = { -1582.6805f, -534.1682f, 34.4171f };
					*uParam2 = 307.8589f;
					break;
				case 3:
					*uParam1 = { -1619.6575f, -531.5862f, 33.4254f };
					*uParam2 = 128.9132f;
					break;
				case 4:
					*uParam1 = { -1560.2571f, -532.3268f, 34.5436f };
					*uParam2 = 216.0882f;
					break;
				case 5:
					*uParam1 = { -1553.6981f, -541.3412f, 33.8662f };
					*uParam2 = 215.8465f;
					break;
				case 6:
					*uParam1 = { -1611.769f, -601.588f, 31.2908f };
					*uParam2 = 50.7362f;
					break;
				case 7:
					*uParam1 = { -1600.63f, -610.1141f, 30.5087f };
					*uParam2 = 51.7297f;
					break;
			}
			break;
		case 88:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					*uParam1 = { -1390.6045f, -528.6405f, 29.8387f };
					*uParam2 = 35.4572f;
					break;
				case 1:
					*uParam1 = { -1357.0851f, -531.4611f, 29.7218f };
					*uParam2 = 125.0906f;
					break;
				case 2:
					*uParam1 = { -1346.2356f, -523.9114f, 30.6f };
					*uParam2 = 124.7302f;
					break;
				case 3:
					*uParam1 = { -1337.8523f, -518.1096f, 31.2329f };
					*uParam2 = 124.6998f;
					break;
				case 4:
					*uParam1 = { -1336.3901f, -556.0637f, 29.7514f };
					*uParam2 = 33.8088f;
					break;
				case 5:
					*uParam1 = { -1340.2145f, -508.9828f, 31.4089f };
					*uParam2 = 98.7714f;
					break;
				case 6:
					*uParam1 = { -1348.6066f, -510.3536f, 30.9263f };
					*uParam2 = 99.2425f;
					break;
				case 7:
					*uParam1 = { -1380.7642f, -536.3867f, 29.3128f };
					*uParam2 = 563.6203f;
					break;
			}
			break;
		case 89:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					*uParam1 = { -108.2604f, -613.6386f, 35.055f };
					*uParam2 = 160.8063f;
					break;
				case 1:
					*uParam1 = { -103.0375f, -598.4797f, 35.0538f };
					*uParam2 = 161.1968f;
					break;
				case 2:
					*uParam1 = { -112.84f, -629.6357f, 35.0662f };
					*uParam2 = 174.9843f;
					break;
				case 3:
					*uParam1 = { -98.7403f, -590.3209f, 35.075f };
					*uParam2 = 139.7632f;
					break;
				case 4:
					*uParam1 = { -98.3748f, -612.642f, 35.137f };
					*uParam2 = 161.1124f;
					break;
				case 5:
					*uParam1 = { -92.595f, -595.4065f, 35.1888f };
					*uParam2 = 161.3083f;
					break;
				case 6:
					*uParam1 = { -104.4742f, -630.1472f, 35.1396f };
					*uParam2 = 161.184f;
					break;
				case 7:
					*uParam1 = { -74.1068f, -619.9417f, 35.1488f };
					*uParam2 = 340.9123f;
					break;
			}
			break;
		case 90:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					*uParam1 = { -59.684f, -779.4568f, 43.114f };
					*uParam2 = 228.7591f;
					break;
				case 1:
					*uParam1 = { -52.7425f, -784.7151f, 43.1134f };
					*uParam2 = 237.7756f;
					break;
				case 2:
					*uParam1 = { -45.2736f, -788.4313f, 43.1133f };
					*uParam2 = 250.2438f;
					break;
				case 3:
					*uParam1 = { -35.9308f, -789.8549f, 43.1167f };
					*uParam2 = 271.1923f;
					break;
				case 4:
					*uParam1 = { -64.6911f, -762.4548f, 43.1316f };
					*uParam2 = 35.6897f;
					break;
				case 5:
					*uParam1 = { -24.9853f, -786.8022f, 43.1163f };
					*uParam2 = 297.8276f;
					break;
				case 6:
					*uParam1 = { -86.2083f, -739.3044f, 43.0546f };
					*uParam2 = 204.9405f;
					break;
				case 7:
					*uParam1 = { -9.239f, -773.0505f, 43.0788f };
					*uParam2 = 318.0367f;
					break;
			}
			break;
	}
}

int func_511()//Position - 0x3B58D2
{
	return joaat("dinghy4");
}

int func_512(int iParam0)//Position - 0x3B5E23
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("UsingForTimeTrial", 2))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "UsingForTimeTrial"))
		{
			return DECORATOR::DECOR_GET_BOOL(iParam0, "UsingForTimeTrial");
		}
	}
	return 0;
}

void func_513(int iParam0)//Position - 0x3B5EF7
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
	{
		if (!Global_262145.f_13160 /* Tunable: TOGGLE_XMAS2015_HORNS */ && Global_262145.f_2339 == 0)
		{
			switch (VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam0, 14, VEHICLE::GET_VEHICLE_MOD(iParam0, 14)))
			{
				case joaat("XM15_HORN_01"):
				case joaat("XM15_HORN_02"):
				case joaat("XM15_HORN_03"):
				case joaat("XM15_HORN_01_PREVIEW"):
				case joaat("XM15_HORN_02_PREVIEW"):
				case joaat("XM15_HORN_03_PREVIEW"):
					VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 14);
					break;
				}
			}
	}
}

void func_514(int iParam0, var uParam1, var uParam2)//Position - 0x3B668E
{
	if (iParam0 < 0 || iParam0 > 75)
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -2177.923f, 1107.9287f, -24.3563f };
			*uParam2 = 268.6074f;
			break;
		case 1:
			*uParam1 = { -2177.8303f, 1103.9323f, -24.3537f };
			*uParam2 = 274.427f;
			break;
		case 2:
			*uParam1 = { -2165.4531f, 1116.0776f, -24.358f };
			*uParam2 = 90.1466f;
			break;
		case 3:
			*uParam1 = { -2165.298f, 1112.5342f, -24.3572f };
			*uParam2 = 84.8473f;
			break;
		case 4:
			*uParam1 = { -2165.4578f, 1098.2908f, -24.3506f };
			*uParam2 = 108.7881f;
			break;
		case 5:
			*uParam1 = { -2165.422f, 1093.5231f, -24.3501f };
			*uParam2 = 76.1524f;
			break;
		case 6:
			*uParam1 = { -2165.4844f, 1119.5422f, -24.3574f };
			*uParam2 = 93.5614f;
			break;
		case 7:
			*uParam1 = { -2177.5957f, 1096.2678f, -24.3518f };
			*uParam2 = 271.8291f;
			break;
		case 8:
			*uParam1 = { -2200.1125f, 1126.0621f, -23.2453f };
			*uParam2 = 270.0032f;
			break;
		case 9:
			*uParam1 = { -2177.8289f, 1116.0764f, -24.3584f };
			*uParam2 = 269.9901f;
			break;
		case 10:
			*uParam1 = { -2177.5747f, 1112.5581f, -24.3582f };
			*uParam2 = 273.7864f;
			break;
		case 11:
			*uParam1 = { -2177.9053f, 1119.5828f, -24.3586f };
			*uParam2 = 264.7997f;
			break;
		case 12:
			*uParam1 = { -2158.2222f, 1116.0182f, -24.358f };
			*uParam2 = 270.0084f;
			break;
		case 13:
			*uParam1 = { -2158.2637f, 1119.523f, -24.3575f };
			*uParam2 = 265.0304f;
			break;
		case 14:
			*uParam1 = { -2158.0806f, 1112.5876f, -24.3572f };
			*uParam2 = 273.4794f;
			break;
		case 15:
			*uParam1 = { -2158.2239f, 1096.0312f, -24.3512f };
			*uParam2 = 270.0067f;
			break;
		case 16:
			*uParam1 = { -2158.1777f, 1092.5867f, -24.3501f };
			*uParam2 = 272.9506f;
			break;
		case 17:
			*uParam1 = { -2158.24f, 1099.5592f, -24.3512f };
			*uParam2 = 264.8289f;
			break;
		case 18:
			*uParam1 = { -2165.433f, 1086.0717f, -24.3499f };
			*uParam2 = 90.0032f;
			break;
		case 19:
			*uParam1 = { -2165.375f, 1089.5092f, -24.3498f };
			*uParam2 = 92.9855f;
			break;
		case 20:
			*uParam1 = { -2165.3408f, 1082.5454f, -24.3491f };
			*uParam2 = 84.9266f;
			break;
		case 21:
			*uParam1 = { -2158.156f, 1088.0164f, -24.3497f };
			*uParam2 = 275.9615f;
			break;
		case 22:
			*uParam1 = { -2158.2715f, 1084.2714f, -24.3493f };
			*uParam2 = 280.2039f;
			break;
		case 23:
			*uParam1 = { -2165.6335f, 1123.957f, -24.3583f };
			*uParam2 = 94.6246f;
			break;
		case 24:
			*uParam1 = { -2165.5767f, 1127.793f, -24.3584f };
			*uParam2 = 93.3687f;
			break;
		case 25:
			*uParam1 = { -2157.9446f, 1123.8267f, -24.3582f };
			*uParam2 = 284.7038f;
			break;
		case 26:
			*uParam1 = { -2157.9692f, 1128.2184f, -24.3584f };
			*uParam2 = 256.278f;
			break;
		case 27:
			*uParam1 = { -2177.767f, 1123.877f, -24.3588f };
			*uParam2 = 267.9635f;
			break;
		case 28:
			*uParam1 = { -2177.743f, 1128.0851f, -24.359f };
			*uParam2 = 267.4383f;
			break;
		case 29:
			*uParam1 = { -2144.9077f, 1094.907f, -24.3527f };
			*uParam2 = 88.7829f;
			break;
		case 30:
			*uParam1 = { -2145.0547f, 1091.4614f, -24.3521f };
			*uParam2 = 90.6067f;
			break;
		case 31:
			*uParam1 = { -2144.8313f, 1098.4993f, -24.3562f };
			*uParam2 = 90.1856f;
			break;
		case 32:
			*uParam1 = { -2144.9692f, 1087.9535f, -24.3517f };
			*uParam2 = 89.9745f;
			break;
		case 33:
			*uParam1 = { -2144.996f, 1084.4882f, -24.3513f };
			*uParam2 = 90.6556f;
			break;
		case 34:
			*uParam1 = { -2145.0771f, 1081.0107f, -24.3509f };
			*uParam2 = 88.6687f;
			break;
		case 35:
			*uParam1 = { -2145.183f, 1077.522f, -24.3505f };
			*uParam2 = 88.973f;
			break;
		case 36:
			*uParam1 = { -2145.0715f, 1133.0488f, -24.3584f };
			*uParam2 = 90.7486f;
			break;
		case 37:
			*uParam1 = { -2144.881f, 1136.5107f, -24.3584f };
			*uParam2 = 89.5743f;
			break;
		case 38:
			*uParam1 = { -2145.058f, 1139.9875f, -24.3584f };
			*uParam2 = 90.0032f;
			break;
		case 39:
			*uParam1 = { -2144.95f, 1129.4253f, -24.3584f };
			*uParam2 = 89.4755f;
			break;
		case 40:
			*uParam1 = { -2144.8835f, 1143.4878f, -24.3584f };
			*uParam2 = 90.7583f;
			break;
		case 41:
			*uParam1 = { -2145.039f, 1146.9966f, -24.3584f };
			*uParam2 = 92.1478f;
			break;
		case 42:
			*uParam1 = { -2177.7144f, 1134.1493f, -24.3593f };
			*uParam2 = 262.7999f;
			break;
		case 43:
			*uParam1 = { -2177.5146f, 1138.0248f, -24.3594f };
			*uParam2 = 259.8243f;
			break;
		case 44:
			*uParam1 = { -2177.5696f, 1088.3298f, -24.3522f };
			*uParam2 = 274.1133f;
			break;
		case 45:
			*uParam1 = { -2177.8508f, 1084.0895f, -24.3526f };
			*uParam2 = 282.4535f;
			break;
		case 46:
			*uParam1 = { -2187.4548f, 1103.331f, -23.2461f };
			*uParam2 = 92.336f;
			break;
		case 47:
			*uParam1 = { -2187.6548f, 1107.0391f, -23.2461f };
			*uParam2 = 92.2579f;
			break;
		case 48:
			*uParam1 = { -2187.6829f, 1110.595f, -23.2461f };
			*uParam2 = 93.1824f;
			break;
		case 49:
			*uParam1 = { -2187.5513f, 1114.069f, -23.2461f };
			*uParam2 = 89.229f;
			break;
		case 50:
			*uParam1 = { -2187.5925f, 1117.567f, -23.2461f };
			*uParam2 = 89.9956f;
			break;
		case 51:
			*uParam1 = { -2187.6853f, 1121.0276f, -23.2462f };
			*uParam2 = 90.0083f;
			break;
		case 52:
			*uParam1 = { -2187.3738f, 1124.541f, -23.2462f };
			*uParam2 = 91.5539f;
			break;
		case 53:
			*uParam1 = { -2187.5918f, 1128.0433f, -23.2463f };
			*uParam2 = 91.7091f;
			break;
		case 54:
			*uParam1 = { -2187.7708f, 1131.5052f, -23.2463f };
			*uParam2 = 93.1601f;
			break;
		case 55:
			*uParam1 = { -2187.567f, 1135.1608f, -23.2464f };
			*uParam2 = 94.9238f;
			break;
		case 56:
			*uParam1 = { -2187.6206f, 1138.7238f, -23.2464f };
			*uParam2 = 97.1151f;
			break;
		case 57:
			*uParam1 = { -2177.6123f, 1092.7548f, -24.3519f };
			*uParam2 = 272.2261f;
			break;
		case 58:
			*uParam1 = { -2200.002f, 1129.5577f, -23.2452f };
			*uParam2 = 265.2113f;
			break;
		case 59:
			*uParam1 = { -2199.9753f, 1122.6279f, -23.2451f };
			*uParam2 = 272.6231f;
			break;
		case 60:
			*uParam1 = { -2199.8738f, 1118.5548f, -23.2458f };
			*uParam2 = 259.0827f;
			break;
		case 61:
			*uParam1 = { -2199.789f, 1114.1665f, -23.2457f };
			*uParam2 = 289.0927f;
			break;
		case 62:
			*uParam1 = { -2187.3303f, 1094.161f, -23.246f };
			*uParam2 = 90.1848f;
			break;
		case 63:
			*uParam1 = { -2187.704f, 1090.5686f, -23.2459f };
			*uParam2 = 87.9952f;
			break;
		case 64:
			*uParam1 = { -2187.4436f, 1086.759f, -23.2459f };
			*uParam2 = 90.8072f;
			break;
		case 65:
			*uParam1 = { -2187.459f, 1083.1962f, -23.2459f };
			*uParam2 = 88.5089f;
			break;
		case 66:
			*uParam1 = { -2199.7505f, 1088.7549f, -23.2451f };
			*uParam2 = 263.4081f;
			break;
		case 67:
			*uParam1 = { -2199.968f, 1085.06f, -23.2449f };
			*uParam2 = 271.1517f;
			break;
		case 68:
			*uParam1 = { -2207.1748f, 1086.0065f, -23.2452f };
			*uParam2 = 90.0083f;
			break;
		case 69:
			*uParam1 = { -2207.0752f, 1089.484f, -23.2453f };
			*uParam2 = 92.8786f;
			break;
		case 70:
			*uParam1 = { -2206.9995f, 1082.4727f, -23.2451f };
			*uParam2 = 82.896f;
			break;
		case 71:
			*uParam1 = { -2207.2773f, 1117.6952f, -23.2459f };
			*uParam2 = 83.0709f;
			break;
		case 72:
			*uParam1 = { -2207.337f, 1114.0239f, -23.2459f };
			*uParam2 = 85.0167f;
			break;
		case 73:
			*uParam1 = { -2207.2214f, 1126.0583f, -23.2455f };
			*uParam2 = 90.0112f;
			break;
		case 74:
			*uParam1 = { -2207.2012f, 1129.4874f, -23.2452f };
			*uParam2 = 92.5523f;
			break;
		case 75:
			*uParam1 = { -2207.1748f, 1122.5454f, -23.2454f };
			*uParam2 = 85.2016f;
			break;
	}
}

void func_515(int iParam0, var uParam1, var uParam2)//Position - 0x3B80B2
{
	if (iParam0 < 0 || iParam0 > 31)
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1380.2461f, 221.1936f, -49.8f };
			*uParam2 = 268.1998f;
			break;
		case 1:
			*uParam1 = { 1380.4011f, 225.542f, -49.8f };
			*uParam2 = 90.5987f;
			break;
		case 2:
			*uParam1 = { 1394.024f, 204.5864f, -49.8f };
			*uParam2 = 92.1979f;
			break;
		case 3:
			*uParam1 = { 1394.2318f, 237.6428f, -49.8f };
			*uParam2 = 90.5988f;
			break;
		case 4:
			*uParam1 = { 1393.9592f, 229.3572f, -49.8f };
			*uParam2 = 93.5988f;
			break;
		case 5:
			*uParam1 = { 1366.3976f, 237.6949f, -49.8f };
			*uParam2 = 271.1988f;
			break;
		case 6:
			*uParam1 = { 1366.1423f, 229.3788f, -49.8f };
			*uParam2 = 268.5987f;
			break;
		case 7:
			*uParam1 = { 1380.4966f, 237.8432f, -49.9944f };
			*uParam2 = 88.3985f;
			break;
		case 8:
			*uParam1 = { 1380.3802f, 242.2101f, -49.9944f };
			*uParam2 = 270.9987f;
			break;
		case 9:
			*uParam1 = { 1380.273f, 208.8658f, -49.8f };
			*uParam2 = 272.3987f;
			break;
		case 10:
			*uParam1 = { 1366.0927f, 212.7634f, -49.8f };
			*uParam2 = 271.3987f;
			break;
		case 11:
			*uParam1 = { 1394.1305f, 225.191f, -49.8f };
			*uParam2 = 91.1988f;
			break;
		case 12:
			*uParam1 = { 1394.1263f, 221.2237f, -49.8f };
			*uParam2 = 90.3988f;
			break;
		case 13:
			*uParam1 = { 1366.1472f, 225.3195f, -49.8f };
			*uParam2 = 269.9988f;
			break;
		case 14:
			*uParam1 = { 1366.2468f, 221.0986f, -49.8f };
			*uParam2 = 270.1987f;
			break;
		case 15:
			*uParam1 = { 1366.4098f, 233.5972f, -49.8f };
			*uParam2 = 273.1988f;
			break;
		case 16:
			*uParam1 = { 1394.0109f, 233.4561f, -49.8f };
			*uParam2 = 88.3988f;
			break;
		case 17:
			*uParam1 = { 1394.0236f, 241.9537f, -49.8f };
			*uParam2 = 91.5988f;
			break;
		case 18:
			*uParam1 = { 1394.3064f, 246.0886f, -49.8f };
			*uParam2 = 93.9989f;
			break;
		case 19:
			*uParam1 = { 1366.3137f, 241.8321f, -49.8f };
			*uParam2 = 270.3987f;
			break;
		case 20:
			*uParam1 = { 1366.1464f, 246.3231f, -49.8f };
			*uParam2 = 265.3989f;
			break;
		case 21:
			*uParam1 = { 1366.4662f, 250.4494f, -49.8f };
			*uParam2 = 273.1988f;
			break;
		case 22:
			*uParam1 = { 1366.0286f, 254.7411f, -49.8f };
			*uParam2 = 266.9988f;
			break;
		case 23:
			*uParam1 = { 1394.0731f, 250.5416f, -49.8f };
			*uParam2 = 89.9988f;
			break;
		case 24:
			*uParam1 = { 1394.0795f, 254.6635f, -49.8f };
			*uParam2 = 93.7988f;
			break;
		case 25:
			*uParam1 = { 1394.1858f, 208.5477f, -49.8f };
			*uParam2 = 91.7988f;
			break;
		case 26:
			*uParam1 = { 1394.0452f, 216.6876f, -49.8f };
			*uParam2 = 88.3988f;
			break;
		case 27:
			*uParam1 = { 1366.27f, 217.0924f, -49.8f };
			*uParam2 = 271.9987f;
			break;
		case 28:
			*uParam1 = { 1366.0999f, 208.6777f, -49.8f };
			*uParam2 = 269.3986f;
			break;
		case 29:
			*uParam1 = { 1394.2329f, 212.5603f, -49.8f };
			*uParam2 = 91.5988f;
			break;
	}
}

void func_516()//Position - 0x3B8943
{
	Global_2703735.f_61.f_18 = 0;
	Global_2703735.f_61.f_21 = 0;
	Global_2703735.f_61.f_19 = 0;
	Global_2703735.f_61.f_20 = 0;
	if (Global_2703735.f_61.f_80)
	{
		MISC::SET_BIT(&(Global_2815059.f_4662), 2);
		Global_2703735.f_61.f_80 = 0;
	}
	Global_2703735.f_61.f_76 = { 0f, 0f, 0f };
	Global_2703735.f_61.f_79 = 0;
}

char* func_517(int iParam0, int iParam1)//Position - 0x3BD785
{
	switch (iParam0)
	{
		case 73:
			return "apa_stilt_ch2_05e_ext1";
			break;
		case 74:
			return "apa_stilt_ch2_04_ext1";
			break;
		case 75:
			return "apa_stilt_ch2_09b_ext3";
			break;
		case 76:
			return "apa_stilt_ch2_09c_ext2";
			break;
		case 77:
			return "apa_stilt_ch2_05c_ext1";
			break;
		case 78:
			return "apa_stilt_ch2_09c_ext3";
			break;
		case 79:
			return "apa_stilt_ch2_09c_ext1";
			break;
		case 80:
			return "apa_stilt_ch2_09b_ext2";
			break;
		case 81:
			return "apa_stilt_ch2_12b_ext1";
			break;
		case 82:
			return "apa_stilt_ch2_04_ext2";
			break;
		case 87:
			return "hei_sm_13_exshadowmesh";
			break;
		case 88:
			return "hei_sm_15_exshadowmesh";
			break;
		case 89:
			return "hei_dt1_02_exshadowmesh";
			break;
		case 90:
			return "hei_dt1_11_exshadowmesh";
			break;
		case 103:
			if (iParam1 == 0)
			{
				return "HEI_SM_13_ImpExpProxy_A";
			}
			else if (iParam1 == 1)
			{
				return "HEI_SM_13_ImpExpProxy_ModShop";
			}
			break;
		case 104:
			if (iParam1 == 0)
			{
				return "HEI_SM_13_ImpExpProxy_B";
			}
			else if (iParam1 == 1)
			{
				return "HEI_SM_13_ImpExpProxy_ModShop";
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return "HEI_SM_13_ImpExpProxy_C";
			}
			else if (iParam1 == 1)
			{
				return "HEI_SM_13_ImpExpProxy_ModShop";
			}
			break;
		case 106:
			if (iParam1 == 0)
			{
				return "HEI_SM_15_ImpExpProxy_A";
			}
			else if (iParam1 == 1)
			{
				return "HEI_SM_15_ImpExpProxy_ModShops";
			}
			break;
		case 107:
			if (iParam1 == 0)
			{
				return "HEI_SM_15_ImpExpProxy_B";
			}
			else if (iParam1 == 1)
			{
				return "HEI_SM_15_ImpExpProxy_ModShops";
			}
			break;
		case 108:
			if (iParam1 == 0)
			{
				return "HEI_SM_15_ImpExpProxy_C";
			}
			else if (iParam1 == 1)
			{
				return "HEI_SM_15_ImpExpProxy_ModShops";
			}
			break;
		case 109:
			if (iParam1 == 0)
			{
				return "HEI_DT1_02_ImpExpProxy_A";
			}
			else if (iParam1 == 1)
			{
				return "HEI_DT1_02_ImpExpEmProxy_A";
			}
			else if (iParam1 == 2)
			{
				return "HEI_DT1_02_ImpExpProxy_ModShop";
			}
			else if (iParam1 == 3)
			{
				return "HEI_DT1_02_ImpExpEmProxy_ModShop";
			}
			break;
		case 110:
			if (iParam1 == 0)
			{
				return "HEI_DT1_02_ImpExpProxy_B";
			}
			else if (iParam1 == 1)
			{
				return "HEI_DT1_02_ImpExpEmProxy_B";
			}
			else if (iParam1 == 2)
			{
				return "HEI_DT1_02_ImpExpProxy_ModShop";
			}
			else if (iParam1 == 3)
			{
				return "HEI_DT1_02_ImpExpEmProxy_ModShop";
			}
			break;
		case 111:
			if (iParam1 == 0)
			{
				return "HEI_DT1_02_ImpExpProxy_C";
			}
			else if (iParam1 == 1)
			{
				return "HEI_DT1_02_ImpExpEmProxy_C";
			}
			else if (iParam1 == 2)
			{
				return "HEI_DT1_02_ImpExpProxy_ModShop";
			}
			else if (iParam1 == 3)
			{
				return "HEI_DT1_02_ImpExpEmProxy_ModShop";
			}
			break;
		case 112:
			if (iParam1 == 0)
			{
				return "HEI_DT1_11_ImpExpProxy_A";
			}
			else if (iParam1 == 1)
			{
				return "HEI_DT1_11_ImpExpProxy_ModShop";
			}
			break;
		case 113:
			if (iParam1 == 0)
			{
				return "HEI_DT1_11_ImpExpProxy_B";
			}
			else if (iParam1 == 1)
			{
				return "HEI_DT1_11_ImpExpProxy_ModShop";
			}
			break;
		case 114:
			if (iParam1 == 0)
			{
				return "HEI_DT1_11_ImpExpProxy_C";
			}
			else if (iParam1 == 1)
			{
				return "HEI_DT1_11_ImpExpProxy_ModShop";
			}
			break;
	}
	return "";
}

bool func_518()//Position - 0x3BE219
{
	return Global_2714762.f_748;
}

Vector3 func_519(int iParam0)//Position - 0x3BE228
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 2:
			Var0 = { 172.7787f, -1003.2102f, -99.9999f };
			break;
		case 6:
			Var0 = { 198.6071f, -1000.5364f, -100f };
			break;
		case 10:
			Var0 = { 227.8602f, -991.1093f, -99.9999f };
			break;
	}
	return Var0;
}

int func_520()//Position - 0x3BEB5F
{
	if (__LIB_2__.func_57(Global_1310720.f_1441))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__.func_265(PLAYER::PLAYER_ID()), Global_4196263[Global_1310720.f_1441 /*2012*/].f_146.f_47, true) <= 30f)
		{
			if (__LIB_2__.func_214(PLAYER::PLAYER_ID(), 0, 0))
			{
				if (!Global_2667225.f_2677 && !Global_2667225.f_2679)
				{
					return 0;
				}
			}
			if (__LIB_20__.func_989(&(Global_4196263[Global_1310720.f_1441 /*2012*/]), 1, 0))
			{
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 12))
				{
					return 1;
				}
			}
		}
	}
	Global_1310720.f_1441++;
	if (Global_1310720.f_1441 >= 42)
	{
		Global_1310720.f_1441 = -1;
	}
	return 0;
}

int func_521()//Position - 0x3BEC23
{
	if (Global_1310720.f_1441 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_522()//Position - 0x3BEC3B
{
	return BitTest(Global_1310720.f_6, 11);
}

int func_523()//Position - 0x3BEC92
{
	if (Global_2715699.f_6321 && !Global_2725876)
	{
		return 1;
	}
	return 0;
}

bool func_524()//Position - 0x3BECC4
{
	return Global_2714762.f_750;
}

void func_525(var uParam0, int iParam1)//Position - 0x3C0908
{
	MISC::SET_BIT(uParam0[SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iParam1 / 32)))], (iParam1 % 32));
}

void func_526(bool bParam0)//Position - 0x3C11F8
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 9))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366), 9);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 9))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366), 9);
	}
}

int func_527()//Position - 0x3C2239
{
	var uVar0;
	uVar0 = Global_1659747[__LIB_1__.func_443(-1)];
	if (BitTest(uVar0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_528()//Position - 0x3C2696
{
	return Global_262145.f_26900 /* Tunable: VC_PENTHOUSE_DISABLE_MEDIA */;
}

void func_529()//Position - 0x3C27DC
{
	struct<8> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Global_4539876 = { Var0 };
}

int func_530()//Position - 0x3C2821
{
	var uVar0;
	uVar0 = Global_1659747[__LIB_1__.func_443(-1)];
	if (BitTest(uVar0, 13))
	{
		return 1;
	}
	return 0;
}

void func_531(var uParam0)//Position - 0x3C2AF1
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_23.f_4 = uParam0;
}

void func_532(var uParam0)//Position - 0x3C2B0D
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_23.f_3 = uParam0;
}

void func_533(var uParam0)//Position - 0x3C2B29
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_23.f_2 = uParam0;
}

void func_534(var uParam0)//Position - 0x3C2B45
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_23.f_1 = uParam0;
}

void func_535(int iParam0)//Position - 0x3C2B61
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_23 = iParam0;
}

void func_536(char* sParam0)//Position - 0x3C2C30
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	StringCopy(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_23.f_5), sParam0, 64);
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_23.f_21 = iVar0;
}

bool func_537()//Position - 0x3C77C7
{
	return Global_2703735.f_51;
}

var func_538()//Position - 0x3C83B7
{
	return Global_262145.f_13070 /* Tunable: GB_SMASHANDGRAB_STORE_COOLDOWN */;
}

Vector3 func_539(int iParam0)//Position - 0x3C9269
{
	return Global_1946250.f_533[__LIB_1__.func_248(iParam0) /*3*/];
}

int func_540(int iParam0)//Position - 0x3CB4F4
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_31703[0];
		case 4:
			return Global_262145.f_31703[1];
		case 7:
			return Global_262145.f_31703[2];
		case 10:
			return Global_262145.f_31703[3];
		case 11:
			return Global_262145.f_31703[4];
		case 12:
			return Global_262145.f_31703[5];
		default:
	}
	return -1;
}

void func_541()//Position - 0x3CB5CF
{
	MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 30);
}

bool func_542()//Position - 0x3CB6DB
{
	return BitTest(Global_1977048.f_3, 0);
}

void func_543(struct<3> Param0)//Position - 0x3CBA04
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	fVar4 = 0.75f;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	Param0.f_2 = (Param0.f_2 - 0.7f);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, (fVar4 * 1.8f), (fVar4 * 1.8f), 2.5f, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

int func_544(int iParam0, int iParam1)//Position - 0x3CBDEC
{
	switch (iParam1)
	{
		case 0:
			if ((__LIB_2__.func_401(iParam0, 2) && __LIB_2__.func_401(iParam0, 3)) && __LIB_2__.func_401(iParam0, 4))
			{
				return 1;
			}
			break;
		case 1:
			if ((__LIB_2__.func_401(iParam0, 5) && __LIB_2__.func_401(iParam0, 6)) && __LIB_2__.func_401(iParam0, 7))
			{
				return 1;
			}
			break;
		case 2:
			if ((__LIB_2__.func_401(iParam0, 8) && __LIB_2__.func_401(iParam0, 9)) && __LIB_2__.func_401(iParam0, 10))
			{
				return 1;
			}
			break;
		case 3:
			if (__LIB_2__.func_401(iParam0, 11))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_545(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3CC3A7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, bParam4, iParam3);
}

bool func_546()//Position - 0x3CCEF2
{
	return Global_1977082 != -1;
}

int func_547(int iParam0)//Position - 0x3CCF00
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 9);
	}
	return 0;
}

int func_548()//Position - 0x3CD53D
{
	if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0) && __LIB_2__.func_308(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_549(int iParam0)//Position - 0x3CD6C0
{
	if (iParam0 != -1)
	{
		if (NETWORK::GET_CLOUD_TIME_AS_INT() < Global_1977138[iParam0 /*57*/].f_27.f_5)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_550()//Position - 0x3CE2E5
{
	if (Global_262145.f_32663 /* Tunable: DISABLE_SIMEON_SHOWROOM */)
	{
		return -59.0544f, -1109.5034f, 25.4358f;
	}
	return -29.78f, -1104.24f, 25.42f;
}

int func_551(int iParam0)//Position - 0x3D05C2
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_1, 1);
	}
	return 0;
}

bool func_552()//Position - 0x3D0BCA
{
	return __LIB_0__.func_137(25520, -1);
}

void func_553(var uParam0)//Position - 0x3D1B59
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_11))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_11));
	}
}

int func_554(int iParam0, int iParam1)//Position - 0x3D24DA
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (Global_1975224[iParam0 /*53*/].f_5.f_10.f_1 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_5 && Global_1975224[iParam0 /*53*/].f_5.f_10.f_9 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_13)
				{
					return 1;
				}
				break;
			case 1:
				if (Global_1975224[iParam0 /*53*/].f_5.f_10.f_2 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_6 && Global_1975224[iParam0 /*53*/].f_5.f_10.f_10 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_14)
				{
					return 1;
				}
				break;
			case 2:
				if (Global_1975224[iParam0 /*53*/].f_5.f_10.f_3 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_7 && Global_1975224[iParam0 /*53*/].f_5.f_10.f_11 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_15)
				{
					return 1;
				}
				break;
			case 3:
				if (Global_1975224[iParam0 /*53*/].f_5.f_10.f_4 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_8 && Global_1975224[iParam0 /*53*/].f_5.f_10.f_12 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_16)
				{
					return 1;
				}
				break;
			case 4:
				if (Global_1975224[iParam0 /*53*/].f_5.f_10.f_17 == Global_1975224[iParam0 /*53*/].f_5.f_10.f_18)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_555(int iParam0, int iParam1)//Position - 0x3D2676
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5.f_2, iParam1);
	}
	return 0;
}

void func_556(int iParam0)//Position - 0x3D3639
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_33[iVar0]), iVar1);
}

int func_557(int iParam0)//Position - 0x3D75EF
{
	switch (iParam0)
	{
		case 104:
			return 27;
			break;
		case 105:
			return 28;
			break;
		case 106:
			return 29;
			break;
		case 107:
			return 30;
			break;
		case 108:
			return 31;
			break;
		case 109:
			return 32;
			break;
		case 110:
			return 33;
			break;
		case 111:
			return 34;
			break;
	}
	return 27;
}

int func_558(int iParam0)//Position - 0x3D7685
{
	if (iParam0 >= 0 && iParam0 < 363)
	{
		if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
		{
			return BitTest(Global_1585857[iParam0 /*142*/].f_103, 2);
		}
	}
	return 0;
}

int func_559(bool bParam0)//Position - 0x3DDE96
{
	int iVar0;
	if (__LIB_1__.func_264(bParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!Global_2689235[bParam0 /*453*/].f_269.f_17[iVar0] == 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_560(bool bParam0, bool bParam1)//Position - 0x3DF96F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (__LIB_1__.func_264(bParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
				if (__LIB_1__.func_264(bVar2, 1, 1))
				{
					if (PLAYER::GET_PLAYER_PED(bVar2) != iVar0)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), iVar3, bParam1))
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

char* func_561()//Position - 0x3E070C
{
	return "enter";
}

int func_562()//Position - 0x3E1E45
{
	if (((((((((((__LIB_9__.func_731(14) || __LIB_9__.func_731(15)) || __LIB_9__.func_731(16)) || __LIB_9__.func_731(17)) || __LIB_9__.func_731(18)) || __LIB_9__.func_731(19)) || __LIB_9__.func_731(20)) || __LIB_9__.func_731(21)) || __LIB_9__.func_731(22)) || __LIB_9__.func_731(23)) || __LIB_9__.func_731(24)) || __LIB_9__.func_731(25))
	{
		return 1;
	}
	return 0;
}

int func_563()//Position - 0x3E2269
{
	if (((((__LIB_9__.func_725(9) || __LIB_9__.func_725(10)) || __LIB_9__.func_725(11)) || __LIB_9__.func_725(12)) || __LIB_9__.func_725(13)) || __LIB_9__.func_725(14))
	{
		return 1;
	}
	return 0;
}

int func_564()//Position - 0x3E2A39
{
	if (((((((((((((((((((((((((__LIB_9__.func_723(6) || __LIB_9__.func_723(7)) || __LIB_9__.func_723(8)) || __LIB_9__.func_723(9)) || __LIB_9__.func_723(10)) || __LIB_9__.func_723(11)) || __LIB_9__.func_723(12)) || __LIB_9__.func_723(13)) || __LIB_9__.func_723(14)) || __LIB_9__.func_723(15)) || __LIB_9__.func_723(16)) || __LIB_9__.func_723(17)) || __LIB_9__.func_723(18)) || __LIB_9__.func_723(19)) || __LIB_9__.func_723(20)) || __LIB_9__.func_723(21)) || __LIB_9__.func_723(22)) || __LIB_9__.func_723(23)) || __LIB_9__.func_723(24)) || __LIB_9__.func_723(25)) || __LIB_9__.func_723(26)) || __LIB_9__.func_723(27)) || __LIB_9__.func_723(28)) || __LIB_9__.func_723(29)) || __LIB_9__.func_723(30)) || __LIB_9__.func_723(31))
	{
		return 1;
	}
	return 0;
}

int func_565()//Position - 0x3E392E
{
	if (((((((((((((((((((((((((__LIB_10__.func_924(0) || __LIB_10__.func_924(1)) || __LIB_10__.func_924(2)) || __LIB_10__.func_924(3)) || __LIB_10__.func_924(4)) || __LIB_10__.func_924(5)) || __LIB_10__.func_924(6)) || __LIB_10__.func_924(7)) || __LIB_10__.func_924(36)) || __LIB_10__.func_924(27)) || __LIB_10__.func_924(28)) || __LIB_10__.func_924(31)) || __LIB_10__.func_924(32)) || __LIB_10__.func_924(33)) || __LIB_10__.func_924(34)) || __LIB_10__.func_924(29)) || __LIB_10__.func_924(30)) || __LIB_10__.func_924(37)) || __LIB_10__.func_924(38)) || __LIB_10__.func_924(39)) || __LIB_10__.func_924(40)) || __LIB_10__.func_924(41)) || __LIB_10__.func_924(42)) || __LIB_10__.func_924(43)) || __LIB_10__.func_924(44)) || __LIB_10__.func_924(47))
	{
		return 1;
	}
	return 0;
}

void func_566(bool bParam0)//Position - 0x3E3FCB
{
	if (bParam0)
	{
		if (!BitTest(Global_2815059.f_1809, 1))
		{
			MISC::SET_BIT(&(Global_2815059.f_1809), 1);
		}
	}
	else if (BitTest(Global_2815059.f_1809, 1))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1809), 1);
	}
}

int func_567()//Position - 0x3E4632
{
	if ((((((((((((((__LIB_10__.func_975(0) || __LIB_10__.func_975(1)) || __LIB_10__.func_975(2)) || __LIB_10__.func_975(3)) || __LIB_10__.func_975(8)) || __LIB_10__.func_975(9)) || __LIB_10__.func_975(10)) || __LIB_10__.func_975(11)) || __LIB_10__.func_975(12)) || __LIB_10__.func_975(13)) || __LIB_10__.func_975(14)) || __LIB_10__.func_975(15)) || __LIB_10__.func_975(16)) || __LIB_10__.func_975(17)) || __LIB_10__.func_975(18))
	{
		return 1;
	}
	return 0;
}

int func_568()//Position - 0x3E4C10
{
	if (((((((__LIB_10__.func_974(4) || __LIB_10__.func_974(5)) || __LIB_10__.func_974(6)) || __LIB_10__.func_974(7)) || __LIB_10__.func_974(8)) || __LIB_10__.func_974(9)) || __LIB_10__.func_974(10)) || __LIB_10__.func_974(11))
	{
		return 1;
	}
	return 0;
}

void func_569(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x3E544C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
}

char* func_570()//Position - 0x3ECFD8
{
	return "LESTER";
}

void func_571(int iParam0)//Position - 0x3F1717
{
	if (Global_1640631 == iParam0)
	{
		Global_1640631 = 0;
	}
	else if (Global_1640631 == 0)
	{
	}
}

void func_572(bool bParam0)//Position - 0x3F1886
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 29))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 29);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 29))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 29);
	}
}

void func_573(int iParam0, int iParam1, int iParam2)//Position - 0x3F1FAA
{
	Global_2815059.f_5997 = iParam0;
	Global_2815059.f_6002 = iParam1;
	Global_2815059.f_6007 = iParam2;
}

bool func_574(int iParam0, var uParam1, var uParam2)//Position - 0x3F6754
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1284.7395f, -545.5959f, 68.6026f };
			*uParam2 = 80.5526f;
			break;
		case 1:
			*uParam1 = { -1467.9331f, -795.3086f, 22.7123f };
			*uParam2 = 319.5706f;
			break;
		case 2:
			*uParam1 = { -1096.3696f, -1715.5807f, 3.2635f };
			*uParam2 = 305.2817f;
			break;
		case 3:
			*uParam1 = { -770.2704f, -1303.4984f, 4.0004f };
			*uParam2 = 320.4224f;
			break;
		case 4:
			*uParam1 = { -224.9072f, -2042.7854f, 26.6204f };
			*uParam2 = 323.422f;
			break;
		case 5:
			*uParam1 = { -928.1251f, -2078.029f, 8.299f };
			*uParam2 = 134.4157f;
			break;
		case 6:
			*uParam1 = { 968.5782f, -3232.846f, 4.8981f };
			*uParam2 = 89.7001f;
			break;
		case 7:
			*uParam1 = { 1255.7095f, -2358.0815f, 48.9347f };
			*uParam2 = 353.8768f;
			break;
		case 8:
			*uParam1 = { 55.229f, -1724.0416f, 28.303f };
			*uParam2 = 319.5799f;
			break;
		case 9:
			*uParam1 = { 1150.178f, -1483.1593f, 33.6926f };
			*uParam2 = 359.6766f;
			break;
		case 10:
			*uParam1 = { 37.8095f, 52.0435f, 71.6005f };
			*uParam2 = 159.7696f;
			break;
		case 11:
			*uParam1 = { -33.978f, -98.8644f, 56.3819f };
			*uParam2 = 159.6577f;
			break;
		case 12:
			*uParam1 = { -306.806f, -979.8259f, 30.0806f };
			*uParam2 = 250.0748f;
			break;
		case 13:
			*uParam1 = { 315.2949f, -698.7788f, 28.3404f };
			*uParam2 = 250.2768f;
			break;
		case 14:
			*uParam1 = { 512.2047f, -1148.3099f, 28.3127f };
			*uParam2 = 1.766f;
			break;
		case 15:
			*uParam1 = { -562.7316f, 327.9078f, 83.4115f };
			*uParam2 = 265.3254f;
			break;
		case 16:
			*uParam1 = { -951.5113f, 171.5849f, 64.5215f };
			*uParam2 = 94.4913f;
			break;
		case 17:
			*uParam1 = { -836.8151f, 362.536f, 86.1082f };
			*uParam2 = 89.2988f;
			break;
		case 18:
			*uParam1 = { -2076.5588f, -229.3211f, 20.0404f };
			*uParam2 = 26.5634f;
			break;
		case 19:
			*uParam1 = { -2191.7969f, -378.2889f, 12.2412f };
			*uParam2 = 49.1378f;
			break;
		case 20:
			*uParam1 = { -3017.1223f, 357.6781f, 13.5654f };
			*uParam2 = 170.0936f;
			break;
		case 21:
			*uParam1 = { -3092.7588f, 1155.5844f, 19.359f };
			*uParam2 = 356.6831f;
			break;
		case 22:
			*uParam1 = { -1902.0404f, 764.0038f, 139.836f };
			*uParam2 = 133.0039f;
			break;
		case 23:
			*uParam1 = { -405.0357f, 1175.4813f, 324.6416f };
			*uParam2 = 253.2484f;
			break;
		case 24:
			*uParam1 = { 709.5561f, 648.7717f, 127.9112f };
			*uParam2 = 250.8219f;
			break;
		case 25:
			*uParam1 = { 960.2486f, 156.6699f, 79.8307f };
			*uParam2 = 140.1893f;
			break;
		case 26:
			*uParam1 = { 893.754f, -66.7553f, 77.7643f };
			*uParam2 = 148.1264f;
			break;
		case 27:
			*uParam1 = { 1700.5562f, -1444.7173f, 112.1386f };
			*uParam2 = 340.5691f;
			break;
		case 28:
			*uParam1 = { 2569.2188f, 401.6441f, 107.4593f };
			*uParam2 = 358.9408f;
			break;
		case 29:
			*uParam1 = { 1609.1687f, 1179.68f, 83.2313f };
			*uParam2 = 181.0576f;
			break;
		case 30:
			*uParam1 = { 2056.3582f, 5188.741f, 51.3049f };
			*uParam2 = 39.8946f;
			break;
		case 31:
			*uParam1 = { 274.6361f, 3129.055f, 40.9197f };
			*uParam2 = 88.016f;
			break;
		case 32:
			*uParam1 = { 922.5869f, 3084.8281f, 40.4309f };
			*uParam2 = 277.2226f;
			break;
		case 33:
			*uParam1 = { 1466.5073f, 2243.2249f, 75.09f };
			*uParam2 = 206.6338f;
			break;
		case 34:
			*uParam1 = { 529.882f, 2609.0593f, 41.2793f };
			*uParam2 = 8.4184f;
			break;
		case 35:
			*uParam1 = { -209.9119f, 4217.993f, 43.6867f };
			*uParam2 = 255.8171f;
			break;
		case 36:
			*uParam1 = { 2186.9873f, 3368.1038f, 44.4263f };
			*uParam2 = 297.6278f;
			break;
		case 37:
			*uParam1 = { 2552.0815f, 3250.3733f, 51.7113f };
			*uParam2 = 312.133f;
			break;
		case 38:
			*uParam1 = { 487.0461f, 6589.988f, 25.247f };
			*uParam2 = 216.8444f;
			break;
		case 39:
			*uParam1 = { -647.7258f, 5907.364f, 16.0567f };
			*uParam2 = 23.2491f;
			break;
		case 40:
			*uParam1 = { 1996.3438f, 2602.3235f, 53.3127f };
			*uParam2 = 133.0891f;
			break;
		case 41:
			*uParam1 = { 2168.1475f, 2869.9507f, 45.7404f };
			*uParam2 = 241.2353f;
			break;
		case 42:
			*uParam1 = { 2523.64f, 1603.348f, 29.0631f };
			*uParam2 = 299.8963f;
			break;
		case 43:
			*uParam1 = { 2204.4773f, 3709.9663f, 36.2608f };
			*uParam2 = 117.0373f;
			break;
		case 44:
			*uParam1 = { 2656.4993f, 4307.1104f, 43.5602f };
			*uParam2 = 35.6329f;
			break;
		case 45:
			*uParam1 = { 1418.761f, 3731.9033f, 31.852f };
			*uParam2 = 199.65f;
			break;
		case 46:
			*uParam1 = { 1803.8041f, 3277.6375f, 41.7935f };
			*uParam2 = 213.5281f;
			break;
		case 47:
			*uParam1 = { -192.9088f, 6206.8257f, 30.5037f };
			*uParam2 = 224.0903f;
			break;
		case 48:
			*uParam1 = { -824.098f, 5441.8135f, 32.7164f };
			*uParam2 = 50.8771f;
			break;
		case 49:
			*uParam1 = { -959.2971f, 5420.9688f, 37.9608f };
			*uParam2 = 110.5969f;
			break;
		case 50:
			*uParam1 = { -1527.4692f, 4995.7827f, 61.4537f };
			*uParam2 = 138.5709f;
			break;
		case 51:
			*uParam1 = { -2234.4683f, 4313.867f, 47.1469f };
			*uParam2 = 151.7738f;
			break;
		case 52:
			*uParam1 = { -2510.7588f, 3588.1436f, 13.5909f };
			*uParam2 = 169.5942f;
			break;
		case 53:
			*uParam1 = { -2734.8918f, 2301.7727f, 17.2203f };
			*uParam2 = 156.3156f;
			break;
		case 54:
			*uParam1 = { -2210.681f, 2309.3918f, 32.0001f };
			*uParam2 = 108.1975f;
			break;
		case 55:
			*uParam1 = { -1546.5492f, 2145.4927f, 54.477f };
			*uParam2 = 300.3906f;
			break;
		case 56:
			*uParam1 = { -78.0324f, 2007.609f, 179.0079f };
			*uParam2 = 135.3284f;
			break;
		case 57:
			*uParam1 = { -406.9017f, 2813.6167f, 44.5846f };
			*uParam2 = 323.1792f;
			break;
		case 58:
			*uParam1 = { 1074.645f, 2056.9958f, 51.6412f };
			*uParam2 = 94.7879f;
			break;
		case 59:
			*uParam1 = { 352.5322f, 4455.8276f, 61.6691f };
			*uParam2 = 20.8798f;
			break;
		case 60:
			return 0;
	}
	return !__LIB_0__.func_86(*uParam1);
}

int func_575(struct<3> Param0)//Position - 0x3F702D
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
	{
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1116.8934f, -2675.6707f, 12.177572f, -1183.9326f, -2789.4507f, 38.951855f, 53f, false, true))
	{
		return 1;
	}
	return 0;
}

void func_576(int iParam0, int iParam1, int iParam2)//Position - 0x3F7CF0
{
	Global_2815059.f_6687 = iParam0;
	Global_2815059.f_6005 = iParam1;
}

void func_577(int iParam0, int iParam1, int iParam2)//Position - 0x3F812C
{
	Global_2815059.f_6686 = iParam0;
	Global_2815059.f_6004 = iParam1;
	Global_2815059.f_6007 = iParam2;
}

bool func_578()//Position - 0x3F81B4
{
	return Global_2815059.f_330 > 0;
}

void func_579(int iParam0, int iParam1, int iParam2)//Position - 0x3F8306
{
	Global_2815059.f_5998 = iParam0;
	Global_2815059.f_6003 = iParam1;
	Global_2815059.f_6007 = iParam2;
}

void func_580(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3F8A2B
{
	Global_2815059.f_5994[0] = iParam0;
	Global_2815059.f_5994[1] = iParam1;
	Global_2815059.f_6001 = iParam2;
	Global_2815059.f_6007 = iParam3;
}

void func_581(int iParam0)//Position - 0x3F8F5E
{
	if (Global_1640631 == 0)
	{
		Global_1640631 = iParam0;
	}
	else if (Global_1640631 == iParam0)
	{
	}
}

Vector3 func_582(var uParam0)//Position - 0x3FD2CC
{
	struct<3> Var0;
	Var0.f_2 = -1;
	if (*uParam0 < 6)
	{
		return Var0;
	}
	Var0.f_2 = (*uParam0)[2];
	Var0.f_1 = (*uParam0)[3];
	Var0.f_0 = (*uParam0)[1];
	return Var0;
}

void func_583(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x3FD417
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= Global_2680265.f_1399)
	{
		return;
	}
	iVar1 = uParam1;
	if (iVar1 < 0 || iVar1 > 2)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	Global_2680265.f_1399[iVar0 /*3*/].f_1 = uParam1;
	Global_2680265.f_1399[iVar0 /*3*/].f_2 = uParam2;
	Global_2680265.f_1399[iVar0 /*3*/] = iParam3;
}

var func_584(int iParam0)//Position - 0x3FD494
{
	if (iParam0 == PLAYER::PLAYER_ID() && !__LIB_6__.func_364())
	{
		return Global_2787940.f_2;
	}
	return Global_2680265.f_1399[iParam0 /*3*/].f_2;
}

int func_585(int iParam0)//Position - 0x3FD67F
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 6;
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

var func_586(var uParam0)//Position - 0x3FE289
{
	return BitTest(uParam0->f_1, 6);
}

void func_587(var uParam0, int iParam1)//Position - 0x3FE297
{
	if (BitTest((*uParam0)[(iParam1 / 32)], (iParam1 % 32)))
	{
		MISC::CLEAR_BIT(uParam0[(iParam1 / 32)], (iParam1 % 32));
	}
}

bool func_588(var uParam0)//Position - 0x3FE364
{
	return BitTest(uParam0->f_1, 4);
}

void func_589(var uParam0, int iParam1)//Position - 0x3FE380
{
	if (!BitTest((*uParam0)[(iParam1 / 32)], (iParam1 % 32)))
	{
		MISC::SET_BIT(uParam0[(iParam1 / 32)], (iParam1 % 32));
	}
}

int func_590()//Position - 0x3FE3F7
{
	return 300000;
}

bool func_591(var uParam0)//Position - 0x3FE403
{
	return BitTest(uParam0->f_1, 3);
}

void func_592(char* sParam0)//Position - 0x3FE5E7
{
	StringCopy(sParam0, "", 64);
	sParam0->f_16 = -1;
	sParam0->f_17 = 0;
}

bool func_593(var uParam0)//Position - 0x3FE600
{
	return BitTest(uParam0->f_1, 10);
}

bool func_594(var uParam0)//Position - 0x3FE653
{
	return BitTest(uParam0->f_1, 9);
}

int func_595(bool bParam0)//Position - 0x3FE9EB
{
	switch (bParam0)
	{
		case 28:
			return 1;
			break;
		case 46:
			return 1;
			break;
		case 49:
			return 1;
			break;
		case 74:
			return 1;
			break;
		case 79:
			return 1;
			break;
		case 84:
			return 1;
			break;
		case 92:
			return 1;
			break;
		case 7:
			return 2;
			break;
		case 41:
			return 2;
			break;
		case 44:
			return 2;
			break;
		case 51:
			return 2;
			break;
		case 61:
			return 2;
			break;
		case 89:
			return 2;
			break;
		case 97:
			return 2;
			break;
		case 13:
			return 3;
			break;
		case 36:
			return 3;
			break;
		case 48:
			return 3;
			break;
		case 50:
			return 3;
			break;
		case 68:
			return 3;
			break;
		case 15:
			return 3;
			break;
		case 98:
			return 3;
			break;
		case 26:
			return 4;
			break;
		case 42:
			return 4;
			break;
		case 60:
			return 4;
			break;
		case 70:
			return 4;
			break;
		case 73:
			return 4;
			break;
		case 85:
			return 4;
			break;
		case 9:
			return 5;
			break;
		case 19:
			return 5;
			break;
		case 27:
			return 5;
			break;
		case 39:
			return 5;
			break;
		case 62:
			return 5;
			break;
		case 99:
			return 5;
			break;
		case 23:
			return 6;
			break;
		case 72:
			return 6;
			break;
		case 81:
			return 6;
			break;
		case 6:
			return 7;
			break;
		case 24:
			return 7;
			break;
		case 58:
			return 7;
			break;
		case 16:
			return 7;
			break;
		case 17:
			return 8;
			break;
		case 29:
			return 8;
			break;
		case 53:
			return 8;
			break;
		case 96:
			return 8;
			break;
		case 18:
			return 9;
			break;
		case 35:
			return 9;
			break;
		case 65:
			return 9;
			break;
		case 12:
			return 10;
			break;
		case 37:
			return 10;
			break;
		case 88:
			return 10;
			break;
		case 8:
			return 12;
			break;
		case 34:
			return 12;
			break;
		case 71:
			return 12;
			break;
		case 93:
			return 12;
			break;
		case 25:
			return 13;
			break;
		case 45:
			return 13;
			break;
		case 78:
			return 13;
			break;
		case 86:
			return 13;
			break;
		case 30:
			return 14;
			break;
		case 47:
			return 14;
			break;
		case 94:
			return 14;
			break;
		case 4:
			return 15;
			break;
		case 52:
			return 15;
			break;
		case 64:
			return 15;
			break;
		case 82:
			return 15;
			break;
		case 3:
			return 16;
			break;
		case 63:
			return 16;
			break;
		case 22:
			return 17;
			break;
		case 75:
			return 17;
			break;
		case 40:
			return 18;
			break;
		case 5:
			return 18;
			break;
		case 56:
			return 19;
			break;
		case 57:
			return 19;
			break;
		case 91:
			return 20;
			break;
		case 31:
			return 20;
			break;
		case 14:
			return 21;
			break;
		case 90:
			return 21;
			break;
		case 95:
			return 21;
			break;
		case 20:
			return 22;
			break;
		case 55:
			return 22;
			break;
		case 38:
			return 23;
			break;
		case 43:
			return 23;
			break;
		case 33:
			return 24;
			break;
		case 87:
			return 24;
			break;
		case 10:
			return 25;
			break;
		case 69:
			return 25;
			break;
		case 21:
			return 26;
			break;
		case 54:
			return 26;
			break;
		case 77:
			return 26;
			break;
		case 1:
			return 27;
			break;
		case 80:
			return 27;
			break;
		case 11:
			return 28;
			break;
		case 66:
			return 28;
			break;
		case 2:
			return 29;
			break;
		case 67:
			return 29;
			break;
		case 32:
			return 30;
			break;
		case 59:
			return 30;
			break;
		case 76:
			return 30;
			break;
		case 83:
			return 30;
			break;
	}
	return -1;
}

bool func_596(var uParam0)//Position - 0x3FEF3D
{
	return __LIB_9__.func_369(uParam0, 57);
}

struct<6> func_597(int iParam0)//Position - 0x3FEF4D
{
	struct<6> Var0;
	StringCopy(&Var0, "", 24);
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "ITH_NAME_000" /* GXT: A Tethered End */, 24);
			break;
		case 2:
			StringCopy(&Var0, "ITH_NAME_001" /* GXT: Bad Egg */, 24);
			break;
		case 3:
			StringCopy(&Var0, "ITH_NAME_002" /* GXT: Banana Hammock */, 24);
			break;
		case 4:
			StringCopy(&Var0, "ITH_NAME_003" /* GXT: Better Than Nothing */, 24);
			break;
		case 5:
			StringCopy(&Var0, "ITH_NAME_004" /* GXT: Black Rock Rooster */, 24);
			break;
		case 6:
			StringCopy(&Var0, "ITH_NAME_005" /* GXT: Bleet Me Baby */, 24);
			break;
		case 7:
			StringCopy(&Var0, "ITH_NAME_006" /* GXT: Blue Dream */, 24);
			break;
		case 8:
			StringCopy(&Var0, "ITH_NAME_007" /* GXT: Borrowed Sorrow */, 24);
			break;
		case 9:
			StringCopy(&Var0, "ITH_NAME_008" /* GXT: Bouncy Blessed */, 24);
			break;
		case 10:
			StringCopy(&Var0, "ITH_NAME_009" /* GXT: Cancelled Check */, 24);
			break;
		case 11:
			StringCopy(&Var0, "ITH_NAME_010" /* GXT: Can't Be Wronger */, 24);
			break;
		case 12:
			StringCopy(&Var0, "ITH_NAME_011" /* GXT: Clapback Charlie */, 24);
			break;
		case 13:
			StringCopy(&Var0, "ITH_NAME_012" /* GXT: Constant Brag */, 24);
			break;
		case 14:
			StringCopy(&Var0, "ITH_NAME_013" /* GXT: Country Stuck */, 24);
			break;
		case 15:
			StringCopy(&Var0, "ITH_NAME_014" /* GXT: Crackers and Please */, 24);
			break;
		case 16:
			StringCopy(&Var0, "ITH_NAME_015" /* GXT: Creepy Dentist */, 24);
			break;
		case 17:
			StringCopy(&Var0, "ITH_NAME_016" /* GXT: Crock Janley */, 24);
			break;
		case 18:
			StringCopy(&Var0, "ITH_NAME_017" /* GXT: Dancin' Pole */, 24);
			break;
		case 19:
			StringCopy(&Var0, "ITH_NAME_018" /* GXT: Dancin' Shoes */, 24);
			break;
		case 20:
			StringCopy(&Var0, "ITH_NAME_019" /* GXT: Darling Ricki */, 24);
			break;
		case 21:
			StringCopy(&Var0, "ITH_NAME_020" /* GXT: Dead Fam */, 24);
			break;
		case 22:
			StringCopy(&Var0, "ITH_NAME_021" /* GXT: Dead Heat Hattie */, 24);
			break;
		case 23:
			StringCopy(&Var0, "ITH_NAME_022" /* GXT: Dexie Runner */, 24);
			break;
		case 24:
			StringCopy(&Var0, "ITH_NAME_023" /* GXT: Divorced Doctor */, 24);
			break;
		case 25:
			StringCopy(&Var0, "ITH_NAME_024" /* GXT: Doozy Floozy */, 24);
			break;
		case 26:
			StringCopy(&Var0, "ITH_NAME_025" /* GXT: Downtown Renown */, 24);
			break;
		case 27:
			StringCopy(&Var0, "ITH_NAME_026" /* GXT: Dr. Deez Reins */, 24);
			break;
		case 28:
			StringCopy(&Var0, "ITH_NAME_027" /* GXT: Dream Shatterer */, 24);
			break;
		case 29:
			StringCopy(&Var0, "ITH_NAME_028" /* GXT: Drone Warning */, 24);
			break;
		case 30:
			StringCopy(&Var0, "ITH_NAME_029" /* GXT: Drunken Brandee */, 24);
			break;
		case 31:
			StringCopy(&Var0, "ITH_NAME_030" /* GXT: Durban Poison */, 24);
			break;
		case 32:
			StringCopy(&Var0, "ITH_NAME_031" /* GXT: Feed The Trolls */, 24);
			break;
		case 33:
			StringCopy(&Var0, "ITH_NAME_032" /* GXT: Fire Hazards */, 24);
			break;
		case 34:
			StringCopy(&Var0, "ITH_NAME_033" /* GXT: Flipped Wig */, 24);
			break;
		case 35:
			StringCopy(&Var0, "ITH_NAME_034" /* GXT: Friendly Fire */, 24);
			break;
		case 36:
			StringCopy(&Var0, "ITH_NAME_035" /* GXT: Getting Haughty */, 24);
			break;
		case 37:
			StringCopy(&Var0, "ITH_NAME_036" /* GXT: Ghost Dank */, 24);
			break;
		case 38:
			StringCopy(&Var0, "ITH_NAME_037" /* GXT: Glass or Tina */, 24);
			break;
		case 39:
			StringCopy(&Var0, "ITH_NAME_039" /* GXT: Los Santos Savior */, 24);
			break;
		case 40:
			StringCopy(&Var0, "ITH_NAME_040" /* GXT: Hard Time Done */, 24);
			break;
		case 41:
			StringCopy(&Var0, "ITH_NAME_041" /* GXT: Hell for Weather */, 24);
			break;
		case 42:
			StringCopy(&Var0, "ITH_NAME_042" /* GXT: Hennigan's Steed */, 24);
			break;
		case 43:
			StringCopy(&Var0, "ITH_NAME_043" /* GXT: Hippie Crack */, 24);
			break;
		case 44:
			StringCopy(&Var0, "ITH_NAME_044" /* GXT: Hot & Bothered */, 24);
			break;
		case 45:
			StringCopy(&Var0, "ITH_NAME_045" /* GXT: Invade Grenade */, 24);
			break;
		case 46:
			StringCopy(&Var0, "ITH_NAME_046" /* GXT: It's a Trap */, 24);
			break;
		case 47:
			StringCopy(&Var0, "ITH_NAME_047" /* GXT: Kraff Running */, 24);
			break;
		case 48:
			StringCopy(&Var0, "ITH_NAME_048" /* GXT: Lead is Out */, 24);
			break;
		case 49:
			StringCopy(&Var0, "ITH_NAME_049" /* GXT: Lit As Truck */, 24);
			break;
		case 50:
			StringCopy(&Var0, "ITH_NAME_050" /* GXT: Lonely Stepbrother */, 24);
			break;
		case 51:
			StringCopy(&Var0, "ITH_NAME_051" /* GXT: Lover's Speed */, 24);
			break;
		case 52:
			StringCopy(&Var0, "ITH_NAME_052" /* GXT: Measles Smeezles */, 24);
			break;
		case 53:
			StringCopy(&Var0, "ITH_NAME_053" /* GXT: Micro Aggression */, 24);
			break;
		case 54:
			StringCopy(&Var0, "ITH_NAME_054" /* GXT: Minimum Wager */, 24);
			break;
		case 55:
			StringCopy(&Var0, "ITH_NAME_055" /* GXT: Miss Mary John */, 24);
			break;
		case 56:
			StringCopy(&Var0, "ITH_NAME_056" /* GXT: Miss Triggered */, 24);
			break;
		case 57:
			StringCopy(&Var0, "ITH_NAME_057" /* GXT: Mister Redacted */, 24);
			break;
		case 58:
			StringCopy(&Var0, "ITH_NAME_058" /* GXT: Mister Scissors */, 24);
			break;
		case 59:
			StringCopy(&Var0, "ITH_NAME_059" /* GXT: Money to Burn */, 24);
			break;
		case 60:
			StringCopy(&Var0, "ITH_NAME_060" /* GXT: Moon Rocks */, 24);
			break;
		case 61:
			StringCopy(&Var0, "ITH_NAME_061" /* GXT: Mr. Worthwhile */, 24);
			break;
		case 62:
			StringCopy(&Var0, "ITH_NAME_062" /* GXT: Mud Dragon */, 24);
			break;
		case 63:
			StringCopy(&Var0, "ITH_NAME_063" /* GXT: Night-time Mare */, 24);
			break;
		case 64:
			StringCopy(&Var0, "ITH_NAME_064" /* GXT: Northern Lights */, 24);
			break;
		case 65:
			StringCopy(&Var0, "ITH_NAME_065" /* GXT: Nuns Orders */, 24);
			break;
		case 66:
			StringCopy(&Var0, "ITH_NAME_066" /* GXT: Ol' Skag */, 24);
			break;
		case 67:
			StringCopy(&Var0, "ITH_NAME_067" /* GXT: Old Ill Will */, 24);
			break;
		case 68:
			StringCopy(&Var0, "ITH_NAME_068" /* GXT: Omens and Ice */, 24);
			break;
		case 69:
			StringCopy(&Var0, "ITH_NAME_069" /* GXT: Pedestrian */, 24);
			break;
		case 70:
			StringCopy(&Var0, "ITH_NAME_070" /* GXT: Pretty as a Pistol */, 24);
			break;
		case 71:
			StringCopy(&Var0, "ITH_NAME_071" /* GXT: Questionable Dignity */, 24);
			break;
		case 72:
			StringCopy(&Var0, "ITH_NAME_072" /* GXT: Reach Around Town */, 24);
			break;
		case 73:
			StringCopy(&Var0, "ITH_NAME_073" /* GXT: Robocall */, 24);
			break;
		case 74:
			StringCopy(&Var0, "ITH_NAME_074" /* GXT: Salt 'N' Sauce */, 24);
			break;
		case 75:
			StringCopy(&Var0, "ITH_NAME_075" /* GXT: Salty and Woke */, 24);
			break;
		case 76:
			StringCopy(&Var0, "ITH_NAME_076" /* GXT: Scrawny Nag */, 24);
			break;
		case 77:
			StringCopy(&Var0, "ITH_NAME_077" /* GXT: Sir Scrambled */, 24);
			break;
		case 78:
			StringCopy(&Var0, "ITH_NAME_078" /* GXT: Sizzurp */, 24);
			break;
		case 79:
			StringCopy(&Var0, "ITH_NAME_079" /* GXT: Snatched Your Mama */, 24);
			break;
		case 80:
			StringCopy(&Var0, "ITH_NAME_080" /* GXT: Social Media Warrior */, 24);
			break;
		case 81:
			StringCopy(&Var0, "ITH_NAME_081" /* GXT: Square to Go */, 24);
			break;
		case 82:
			StringCopy(&Var0, "ITH_NAME_082" /* GXT: Study Buddy */, 24);
			break;
		case 83:
			StringCopy(&Var0, "ITH_NAME_083" /* GXT: Stupid Money */, 24);
			break;
		case 84:
			StringCopy(&Var0, "ITH_NAME_084" /* GXT: Sumptin Saucy */, 24);
			break;
		case 85:
			StringCopy(&Var0, "ITH_NAME_085" /* GXT: Sweet Releaf */, 24);
			break;
		case 86:
			StringCopy(&Var0, "ITH_NAME_086" /* GXT: Tax the Poor */, 24);
			break;
		case 87:
			StringCopy(&Var0, "ITH_NAME_087" /* GXT: Tea Ache Sea */, 24);
			break;
		case 88:
			StringCopy(&Var0, "ITH_NAME_088" /* GXT: Tenpenny */, 24);
			break;
		case 89:
			StringCopy(&Var0, "ITH_NAME_089" /* GXT: There She Blows */, 24);
			break;
		case 90:
			StringCopy(&Var0, "ITH_NAME_090" /* GXT: Throwing Shady */, 24);
			break;
		case 91:
			StringCopy(&Var0, "ITH_NAME_091" /* GXT: Thunder Skunk */, 24);
			break;
		case 92:
			StringCopy(&Var0, "ITH_NAME_092" /* GXT: Total Belter */, 24);
			break;
		case 93:
			StringCopy(&Var0, "ITH_NAME_093" /* GXT: Turnt Mood */, 24);
			break;
		case 94:
			StringCopy(&Var0, "ITH_NAME_094" /* GXT: Uptown Rider */, 24);
			break;
		case 95:
			StringCopy(&Var0, "ITH_NAME_095" /* GXT: Wage of Consent */, 24);
			break;
		case 96:
			StringCopy(&Var0, "ITH_NAME_096" /* GXT: Wee Scunner */, 24);
			break;
		case 97:
			StringCopy(&Var0, "ITH_NAME_097" /* GXT: Worth a Kingdom */, 24);
			break;
		case 98:
			StringCopy(&Var0, "ITH_NAME_098" /* GXT: Yay Yo Let's Go */, 24);
			break;
		case 99:
			StringCopy(&Var0, "ITH_NAME_099" /* GXT: Yellow Sunshine */, 24);
			break;
	}
	return Var0;
}

bool func_598(var uParam0)//Position - 0x3FF65D
{
	return __LIB_9__.func_369(uParam0, 1);
}

bool func_599(var uParam0)//Position - 0x3FF92F
{
	return __LIB_9__.func_369(uParam0, 0);
}

int func_600(var uParam0)//Position - 0x3FF96B
{
	int iVar0;
	iVar0 = uParam0->f_17;
	if (iVar0 == -1)
	{
		return 0;
	}
	return uParam0->f_3[iVar0];
}

bool func_601(var uParam0)//Position - 0x3FF9BA
{
	return BitTest(uParam0->f_1, 7);
}

Vector3 func_602()//Position - 0x3FFA0B
{
	return 1096.273f, 261.1804f, (-51.2418f - 1f);
}

int func_603(var uParam0)//Position - 0x3FFDAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 2147483647;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		if ((*uParam0)[iVar2] < iVar0)
		{
			iVar0 = (*uParam0)[iVar2];
			iVar1 = iVar2;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_604(var uParam0)//Position - 0x3FFDE9
{
	return BitTest(uParam0->f_1, 8);
}

bool func_605(var uParam0)//Position - 0x3FFE5E
{
	return __LIB_9__.func_369(uParam0, 12);
}

bool func_606(var uParam0)//Position - 0x3FFE6E
{
	return __LIB_9__.func_369(uParam0, 7);
}

void func_607(int* iParam0, bool bParam1)//Position - 0x3FFEA9
{
	if (!BitTest(*iParam0, bParam1))
	{
		MISC::SET_BIT(iParam0, bParam1);
	}
}

bool func_608(int* iParam0)//Position - 0x401543
{
	return BitTest(iParam0->f_1, 18);
}

void func_609(int* iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, char* sParam6, int iParam7)//Position - 0x401552
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_106, "SPIN_WHEEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	if (iParam5 != -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
		if (iParam7 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_610(int iParam0)//Position - 0x4015B0
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 3;
		case 6:
			return 3;
		case 7:
			return 4;
		case 8:
			return 4;
		case 9:
			return 4;
		case 10:
			return 5;
		case 11:
			return 5;
		case 12:
			return 5;
		case 13:
			return 6;
		case 14:
			return 7;
		case 15:
			return -1;
		default:
	}
	return -1;
}

int func_611(int iParam0, bool bParam1)//Position - 0x40166A
{
	int iVar0;
	iVar0 = -1;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 4:
				iVar0 = Global_262145.f_24095 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_LOW_WIN */;
				break;
			case 5:
				iVar0 = Global_262145.f_24096 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_MED_WIN */;
				break;
			case 6:
				iVar0 = Global_262145.f_24097 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_HIGH_WIN */;
				break;
			case 7:
				iVar0 = Global_262145.f_24092 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_LOW_WIN */;
				break;
			case 8:
				iVar0 = Global_262145.f_24093 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_MED_WIN */;
				break;
			case 9:
				iVar0 = Global_262145.f_24094 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_HIGH_WIN */;
				break;
			case 10:
				iVar0 = Global_262145.f_24089 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_LOW_WIN */;
				break;
			case 11:
				iVar0 = Global_262145.f_24090 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_MED_WIN */;
				break;
			case 12:
				iVar0 = Global_262145.f_24091 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_HIGH_WIN */;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				iVar0 = Global_262145.f_24086 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_LOW_WIN */;
				break;
			case 5:
				iVar0 = Global_262145.f_24087 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_MED_WIN */;
				break;
			case 6:
				iVar0 = Global_262145.f_24088 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_HIGH_WIN */;
				break;
			case 7:
				iVar0 = Global_262145.f_24083 /* Tunable: AW_ARENA_WAR_WHEEL_RP_LOW_WIN */;
				break;
			case 8:
				iVar0 = Global_262145.f_24084 /* Tunable: AW_ARENA_WAR_WHEEL_RP_MED_WIN */;
				break;
			case 9:
				iVar0 = Global_262145.f_24085 /* Tunable: AW_ARENA_WAR_WHEEL_RP_HIGH_WIN */;
				break;
			case 10:
				iVar0 = Global_262145.f_24080 /* Tunable: AW_ARENA_WAR_WHEEL_AP_LOW_WIN */;
				break;
			case 11:
				iVar0 = Global_262145.f_24081 /* Tunable: AW_ARENA_WAR_WHEEL_AP_MED_WIN */;
				break;
			case 12:
				iVar0 = Global_262145.f_24082 /* Tunable: AW_ARENA_WAR_WHEEL_AP_HIGH_WIN */;
				break;
			}
	}
	return iVar0;
}

struct<6> func_612(int iParam0)//Position - 0x4017D1
{
	struct<6> Var0;
	StringCopy(&Var0, "", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "WS_DRONE" /* GXT: Drone */, 24);
			break;
		case 1:
			StringCopy(&Var0, "WS_TRAP" /* GXT: Trap */, 24);
			break;
		case 2:
			StringCopy(&Var0, "WS_RC_CAR" /* GXT: RC Car */, 24);
			break;
		case 3:
			StringCopy(&Var0, "WS_TURRETS" /* GXT: Turrets */, 24);
			break;
		case 4:
			StringCopy(&Var0, "WS_CASH" /* GXT: $~1~ */, 24);
			break;
		case 5:
			StringCopy(&Var0, "WS_CASH" /* GXT: $~1~ */, 24);
			break;
		case 6:
			StringCopy(&Var0, "WS_CASH" /* GXT: $~1~ */, 24);
			break;
		case 7:
			StringCopy(&Var0, "WS_RP" /* GXT: ~1~ */, 24);
			break;
		case 8:
			StringCopy(&Var0, "WS_RP" /* GXT: ~1~ */, 24);
			break;
		case 9:
			StringCopy(&Var0, "WS_RP" /* GXT: ~1~ */, 24);
			break;
		case 10:
			StringCopy(&Var0, "WS_RP" /* GXT: ~1~ */, 24);
			break;
		case 11:
			StringCopy(&Var0, "WS_RP" /* GXT: ~1~ */, 24);
			break;
		case 12:
			StringCopy(&Var0, "WS_RP" /* GXT: ~1~ */, 24);
			break;
		case 13:
			StringCopy(&Var0, "WS_FREE_SPIN" /* GXT: Free Spin */, 24);
			break;
	}
	return Var0;
}

void func_613(int* iParam0, bool bParam1)//Position - 0x4018E7
{
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0->f_106, 255, 255, 255, 255, 0);
	}
	else
	{
		HUD::SET_TEXT_RENDER_ID(iParam0->f_11);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iParam0->f_106, 0.445f, 0.5f, 0.9f, 1f, 255, 255, 255, 255, 0);
	}
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_614(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x401949
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_106, "SET_SEGMENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_615(int iParam0, bool bParam1)//Position - 0x401975
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			case 1:
				return Global_262145.f_24089 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_LOW_WIN */;
			case 2:
				return 1;
			case 3:
				return Global_262145.f_24097 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_HIGH_WIN */;
			case 4:
				return 1;
			case 5:
				return Global_262145.f_24093 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_MED_WIN */;
			case 6:
				return Global_262145.f_24095 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_LOW_WIN */;
			case 7:
				return Global_262145.f_24091 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_HIGH_WIN */;
			case 8:
				return 1;
			case 9:
				return Global_262145.f_24092 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_LOW_WIN */;
			case 10:
				return 1;
			case 11:
				return Global_262145.f_24096 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_MED_WIN */;
			case 12:
				return 1;
			case 13:
				return Global_262145.f_24090 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_MED_WIN */;
			case 14:
				return 1;
			case 15:
				return Global_262145.f_24094 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_HIGH_WIN */;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			case 1:
				return Global_262145.f_24080 /* Tunable: AW_ARENA_WAR_WHEEL_AP_LOW_WIN */;
			case 2:
				return 1;
			case 3:
				return Global_262145.f_24088 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_HIGH_WIN */;
			case 4:
				return 1;
			case 5:
				return Global_262145.f_24084 /* Tunable: AW_ARENA_WAR_WHEEL_RP_MED_WIN */;
			case 6:
				return Global_262145.f_24086 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_LOW_WIN */;
			case 7:
				return Global_262145.f_24082 /* Tunable: AW_ARENA_WAR_WHEEL_AP_HIGH_WIN */;
			case 8:
				return 1;
			case 9:
				return 1;
			case 10:
				return Global_262145.f_24083 /* Tunable: AW_ARENA_WAR_WHEEL_RP_LOW_WIN */;
			case 11:
				return Global_262145.f_24087 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_MED_WIN */;
			case 12:
				return 1;
			case 13:
				return Global_262145.f_24081 /* Tunable: AW_ARENA_WAR_WHEEL_AP_MED_WIN */;
			case 14:
				return 1;
			case 15:
				return Global_262145.f_24085 /* Tunable: AW_ARENA_WAR_WHEEL_RP_HIGH_WIN */;
			}
		default:
	}
	return 0;
}

int func_616(int iParam0, bool bParam1)//Position - 0x401B40
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			case 1:
				return 4;
			case 2:
				return 1;
			case 3:
				return 2;
			case 4:
				return 1;
			case 5:
				return 3;
			case 6:
				return 2;
			case 7:
				return 4;
			case 8:
				return 1;
			case 9:
				return 3;
			case 10:
				return 1;
			case 11:
				return 2;
			case 12:
				return 1;
			case 13:
				return 4;
			case 14:
				return 6;
			case 15:
				return 3;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			case 1:
				return 4;
			case 2:
				return 1;
			case 3:
				return 2;
			case 4:
				return 1;
			case 5:
				return 3;
			case 6:
				return 2;
			case 7:
				return 4;
			case 8:
				return 1;
			case 9:
				return 5;
			case 10:
				return 3;
			case 11:
				return 2;
			case 12:
				return 1;
			case 13:
				return 4;
			case 14:
				return 6;
			case 15:
				return 3;
			}
		default:
	}
	return 0;
}

void func_617(int* iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x401C9F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_106, "SET_WHEEL_STYLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_618(int* iParam0, int iParam1)//Position - 0x401CCB
{
	iParam0->f_101 = iParam1;
}

int func_619(int* iParam0)//Position - 0x401CD9
{
	if (BitTest(*iParam0, 11) || BitTest(iParam0->f_1, 24))
	{
		return 1;
	}
	return 0;
}

int func_620()//Position - 0x401CFC
{
	if (((BitTest(Global_1965531, 2) || BitTest(Global_1965531, 3)) || BitTest(Global_1965531, 4)) || BitTest(Global_1965531, 5))
	{
		return 1;
	}
	return 0;
}

void func_621(int* iParam0, bool bParam1)//Position - 0x401DC2
{
	if (BitTest(*iParam0, 18))
	{
		MISC::SET_BIT(&Global_1965531, 6);
		MISC::CLEAR_BIT(iParam0, 18);
		if (!bParam1)
		{
			iParam0->f_20 = 1;
			iParam0->f_21 = 1;
		}
	}
	else if (BitTest(*iParam0, 19))
	{
		MISC::SET_BIT(&Global_1965531, 8);
		MISC::CLEAR_BIT(iParam0, 19);
		if (!bParam1)
		{
			iParam0->f_20 = 1;
			iParam0->f_21 = 1;
		}
	}
	else if (BitTest(*iParam0, 20))
	{
		MISC::SET_BIT(&Global_1965531, 7);
		MISC::CLEAR_BIT(iParam0, 20);
		if (!bParam1)
		{
			iParam0->f_20 = 1;
			iParam0->f_21 = 1;
		}
	}
	else if (BitTest(*iParam0, 21))
	{
		MISC::SET_BIT(&Global_1965531, 9);
		MISC::CLEAR_BIT(iParam0, 21);
		if (!bParam1)
		{
			iParam0->f_20 = 1;
			iParam0->f_21 = 1;
		}
	}
}

int func_622(bool bParam0)//Position - 0x401FC6
{
	int iVar0;
	iVar0 = 1;
	if (bParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_623(int iParam0)//Position - 0x402175
{
	switch (iParam0)
	{
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 9;
		default:
	}
	return -1;
}

int func_624()//Position - 0x40743E
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353;
}

Vector3 func_625()//Position - 0x407943
{
	return 2795.984f, -3930.3474f, 183.4774f;
}

int func_626(int iParam0, bool bParam1)//Position - 0x407A55
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 7;
			case 2:
				return 0;
			case 3:
				return 3;
			case 4:
				return 0;
			case 5:
				return 5;
			case 6:
				return 1;
			case 7:
				return 9;
			case 8:
				return 0;
			case 9:
				return 4;
			case 10:
				return 0;
			case 11:
				return 2;
			case 12:
				return 0;
			case 13:
				return 8;
			case 14:
				return 11;
			case 15:
				return 6;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 7;
			case 2:
				return 0;
			case 3:
				return 3;
			case 4:
				return 0;
			case 5:
				return 5;
			case 6:
				return 1;
			case 7:
				return 9;
			case 8:
				return 0;
			case 9:
				return 10;
			case 10:
				return 4;
			case 11:
				return 2;
			case 12:
				return 0;
			case 13:
				return 8;
			case 14:
				return 11;
			case 15:
				return 6;
			}
		default:
	}
	return -1;
}

int func_627(int iParam0, bool bParam1)//Position - 0x407BE4
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return 6;
			}
			else
			{
				return 5;
			}
			break;
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
			return 1;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			if (bParam1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_628(int iParam0)//Position - 0x407C8A
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
			return 1;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 4;
		case 8:
			return 5;
		case 9:
			return 6;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 9;
		case 13:
			return 10;
		case 14:
			return 11;
		default:
	}
	return -1;
}

void func_629(var uParam0)//Position - 0x407E8A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
}

int func_630()//Position - 0x407EAF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (Global_262145.f_26638 /* Tunable: -486935470 */)
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_631()//Position - 0x407F2D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (Global_262145.f_26635 /* Tunable: 793083307 */)
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_632()//Position - 0x408078
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (Global_262145.f_26636 /* Tunable: 1497794082 */)
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

void func_633(var uParam0)//Position - 0x40816C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iVar0;
		iVar0++;
	}
}

void func_634(int iParam0)//Position - 0x408267
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_5 = iParam0;
}

void func_635(int iParam0)//Position - 0x40EC10
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_193 = iParam0;
}

void func_636()//Position - 0x40EF9B
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() == 0)
	{
		return;
	}
}

int func_637(int iParam0)//Position - 0x40FD0D
{
	if (iParam0 >= 5 && iParam0 < 7)
	{
		return 1;
	}
	if (iParam0 >= 7 && iParam0 < 10)
	{
		return 2;
	}
	if (iParam0 >= 10 && iParam0 < 12)
	{
		return 3;
	}
	if (iParam0 >= 12 && iParam0 < 15)
	{
		return 4;
	}
	if (iParam0 >= 15 && iParam0 < 17)
	{
		return 5;
	}
	if (iParam0 >= 17 && iParam0 < 20)
	{
		return 6;
	}
	if (iParam0 >= 20 && iParam0 < 22)
	{
		return 7;
	}
	if (iParam0 >= 22 && iParam0 < 25)
	{
		return 8;
	}
	if (iParam0 >= 25 && iParam0 < 27)
	{
		return 9;
	}
	if (iParam0 >= 27 && iParam0 < 30)
	{
		return 10;
	}
	if (iParam0 >= 30 && iParam0 < 32)
	{
		return 11;
	}
	if (iParam0 >= 32 && iParam0 < 35)
	{
		return 12;
	}
	if (iParam0 >= 35 && iParam0 < 37)
	{
		return 13;
	}
	if (iParam0 >= 37 && iParam0 < 40)
	{
		return 14;
	}
	if (iParam0 >= 40 && iParam0 < 42)
	{
		return 15;
	}
	if (iParam0 >= 42 && iParam0 < 44)
	{
		return 16;
	}
	if (iParam0 >= 44 && iParam0 < 46)
	{
		return 17;
	}
	if (iParam0 >= 46 && iParam0 < 48)
	{
		return 18;
	}
	if (iParam0 >= 48 && iParam0 < 50)
	{
		return 19;
	}
	if (iParam0 >= 50)
	{
		return 20;
	}
	return 0;
}

int func_638()//Position - 0x4114BE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_2689235[iVar0 /*453*/].f_208 && iVar0 != PLAYER::NETWORK_PLAYER_ID_TO_INT())
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_639()//Position - 0x41270A
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			return "BBR_ADD_TEXT_1" /* GXT: Hey Pres. The bar's been standing room only lately. I gotta use my whole bodyweight to get that moneybag shut, even with a rear bumper like mine. Wanna pick up the cash sometime? */;
		case 1:
			return "BBR_ADD_TEXT_2" /* GXT: Hey Pres. We've made a ton of cash at the bar. You wanna ride by and get it? */;
		default:
	}
	return "";
}

int func_640(int iParam0)//Position - 0x413359
{
	char cVar0[64];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE1_v0", 64);
			break;
		case 2:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE2_v0", 64);
			break;
		case 3:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE3_v0", 64);
			break;
		case 4:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_641(int iParam0)//Position - 0x4133D5
{
	char cVar0[64];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE0_v0", 64);
			break;
		case 1:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE1_v0", 64);
			break;
		case 2:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE2_v0", 64);
			break;
		case 3:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE3_v0", 64);
			break;
		case 4:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_642(int iParam0)//Position - 0x41360C
{
	if (((((iParam0 == 2 || iParam0 == 4) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_643()//Position - 0x413654
{
	return Global_2869985[__LIB_0__.func_5()] >= Global_262145.f_15615 /* Tunable: EXEC_CONTRABAND_SPECIAL_ITEM_THRESHOLD */;
}

void func_644(int iParam0)//Position - 0x413677
{
	Global_1640633[Global_1640632] = iParam0;
	Global_1640632++;
	if (Global_1640632 >= 7)
	{
		Global_1640632 = 0;
	}
}

int func_645(int iParam0)//Position - 0x413752
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1640633[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_646()//Position - 0x41377E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1640633[iVar0] = -1;
		iVar0++;
	}
}

int func_647(int iParam0, int iParam1, int iParam2)//Position - 0x41393B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 != iParam2 && (*iParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x413EF1
{
	if (iParam0 == 0)
	{
		return 7648;
	}
	else if (iParam0 == 1)
	{
		return 7649;
	}
	else if (iParam0 == 2)
	{
		return 7650;
	}
	else if (iParam0 == 3)
	{
		return 7651;
	}
	else if (iParam0 == 4)
	{
		return 7652;
	}
	else if (iParam0 == 5)
	{
		return 7653;
	}
	return 7648;
}

int func_649(int iParam0)//Position - 0x413F53
{
	if (iParam0 == 0)
	{
		return 7642;
	}
	else if (iParam0 == 1)
	{
		return 7643;
	}
	else if (iParam0 == 2)
	{
		return 7644;
	}
	else if (iParam0 == 3)
	{
		return 7645;
	}
	else if (iParam0 == 4)
	{
		return 7646;
	}
	else if (iParam0 == 5)
	{
		return 7647;
	}
	return 7642;
}

int func_650(int iParam0)//Position - 0x41411C
{
	switch (iParam0)
	{
		case 0:
			return 3644;
		case 1:
			return 3645;
		case 2:
			return 3646;
		case 3:
			return 3647;
		case 4:
			return 3648;
		default:
	}
	return 13122;
}

int func_651(var uParam0)//Position - 0x415192
{
	int iVar0;
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 2:
			return joaat("ex_prop_crate_oegg");
		case 4:
			return joaat("ex_prop_crate_minig");
		case 6:
			return joaat("ex_prop_crate_xldiam");
		case 7:
			return joaat("ex_prop_crate_shide");
		case 8:
			return joaat("ex_prop_crate_freel");
		case 9:
			return joaat("ex_prop_crate_watch");
		default:
	}
	return 0;
}

int func_652(int iParam0, int iParam1)//Position - 0x4151FA
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 2:
			if ((((((iParam1 < 7 || (iParam1 > 20 && iParam1 < 28)) || (iParam1 > 41 && iParam1 < 49)) || (iParam1 > 62 && iParam1 < 70)) || (iParam1 > 83 && iParam1 < 87)) || (iParam1 > 92 && iParam1 < 96)) || (iParam1 > 101 && iParam1 < 105))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_653(int iParam0)//Position - 0x437224
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_17[iVar0]), iVar1);
}

int func_654(int iParam0, int iParam1)//Position - 0x4389D6
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_18711 /* Tunable: BIKER_DISABLE_BY_THE_POUND */)
			{
				return 1;
			}
			if (Global_262145.f_18712 /* Tunable: BIKER_DISABLE_BY_THE_POUND_0 */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18713 /* Tunable: BIKER_DISABLE_BY_THE_POUND_1 */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18714 /* Tunable: BIKER_DISABLE_BY_THE_POUND_2 */ && iParam1 == 2)
			{
				return 1;
			}
			break;
		case 1:
			if (Global_262145.f_18691 /* Tunable: BIKER_DISABLE_POW */)
			{
				return 1;
			}
			if (Global_262145.f_18692 /* Tunable: BIKER_DISABLE_POW_0 */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18693 /* Tunable: BIKER_DISABLE_POW_1 */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18694 /* Tunable: BIKER_DISABLE_POW_2 */ && iParam1 == 2)
			{
				return 1;
			}
			break;
		case 2:
			if (Global_262145.f_18702 /* Tunable: BIKER_DISABLE_GUNS_FOR_HIRE */)
			{
				return 1;
			}
			if (Global_262145.f_18703 /* Tunable: BIKER_DISABLE_GUNS_FOR_HIRE_0 */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18704 /* Tunable: BIKER_DISABLE_GUNS_FOR_HIRE_1 */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18705 /* Tunable: BIKER_DISABLE_GUNS_FOR_HIRE_2 */ && iParam1 == 2)
			{
				return 1;
			}
			break;
		case 3:
			if (Global_262145.f_18722 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE */)
			{
				return 1;
			}
			if (Global_262145.f_18723 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_YELLOW_JACK */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18724 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_BUS */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18725 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_ULSA */ && iParam1 == 2)
			{
				return 1;
			}
			else if (Global_262145.f_18726 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_GOLF */ && iParam1 == 3)
			{
				return 1;
			}
			else if (Global_262145.f_18727 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_CHICKEN */ && iParam1 == 4)
			{
				return 1;
			}
			else if (Global_262145.f_18728 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_LSIA */ && iParam1 == 5)
			{
				return 1;
			}
			else if (Global_262145.f_18729 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_DOWNTOWN */ && iParam1 == 6)
			{
				return 1;
			}
			else if (Global_262145.f_18730 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_VINEWOOD */ && iParam1 == 7)
			{
				return 1;
			}
			else if (Global_262145.f_18731 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_WILDERNESS */ && iParam1 == 8)
			{
				return 1;
			}
			else if (Global_262145.f_18732 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_MOVIE */ && iParam1 == 9)
			{
				return 1;
			}
			else if (Global_262145.f_18733 /* Tunable: BIKER_DISABLE_WEAPON_OF_CHOICE_ROAMING */ && iParam1 == 10)
			{
				return 1;
			}
			break;
		case 4:
			if (Global_262145.f_18683 /* Tunable: BIKER_DISABLE_GUNRUNNING */)
			{
				return 1;
			}
			if (Global_262145.f_18684 /* Tunable: BIKER_DISABLE_GUNRUNNING_0 */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18685 /* Tunable: BIKER_DISABLE_GUNRUNNING_1 */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18686 /* Tunable: BIKER_DISABLE_GUNRUNNING_2 */ && iParam1 == 2)
			{
				return 1;
			}
			break;
		case 5:
			if (Global_262145.f_18738 /* Tunable: BIKER_DISABLE_NINE_TENTHS */)
			{
				return 1;
			}
			if (Global_262145.f_18739 /* Tunable: BIKER_DISABLE_NINE_TENTHS_0 */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18740 /* Tunable: BIKER_DISABLE_NINE_TENTHS_1 */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18741 /* Tunable: BIKER_DISABLE_NINE_TENTHS_2 */ && iParam1 == 2)
			{
				return 1;
			}
			break;
		case 6:
			if (Global_262145.f_18760 /* Tunable: BIKER_DISABLE_JAILBREAK */)
			{
				return 1;
			}
			if (Global_262145.f_18761 /* Tunable: BIKER_DISABLE_JAILBREAK_0 */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18762 /* Tunable: BIKER_DISABLE_JAILBREAK_1 */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18763 /* Tunable: BIKER_DISABLE_JAILBREAK_2 */ && iParam1 == 2)
			{
				return 1;
			}
			break;
		case 7:
			if (Global_262145.f_18748 /* Tunable: BIKER_DISABLE_CRACKED */)
			{
				return 1;
			}
			if (Global_262145.f_18749 /* Tunable: BIKER_DISABLE_CRACKED_0 */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18750 /* Tunable: BIKER_DISABLE_CRACKED_1 */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18751 /* Tunable: BIKER_DISABLE_CRACKED_2 */ && iParam1 == 2)
			{
				return 1;
			}
			break;
		case 8:
			if (Global_262145.f_18768 /* Tunable: BIKER_DISABLE_FRAGILE_GOODS */)
			{
				return 1;
			}
			if (Global_262145.f_18769 /* Tunable: BIKER_DISABLE_FRAGILE_GOODS_NE */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18770 /* Tunable: BIKER_DISABLE_FRAGILE_GOODS_NW */ && iParam1 == 1)
			{
				return 1;
			}
			else if (Global_262145.f_18771 /* Tunable: BIKER_DISABLE_FRAGILE_GOODS_SE */ && iParam1 == 2)
			{
				return 1;
			}
			else if (Global_262145.f_18772 /* Tunable: BIKER_DISABLE_FRAGILE_GOODS_SW */ && iParam1 == 3)
			{
				return 1;
			}
			break;
		case 9:
			if (Global_262145.f_18789 /* Tunable: BIKER_DISABLE_TORCHED */)
			{
				return 1;
			}
			if (Global_262145.f_18790 /* Tunable: BIKER_DISABLE_TORCHED_CITY */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18791 /* Tunable: BIKER_DISABLE_TORCHED_COUNTRY */ && iParam1 == 1)
			{
				return 1;
			}
			break;
		case 10:
			if (Global_262145.f_18781 /* Tunable: BIKER_DISABLE_OUTRIDER */)
			{
				return 1;
			}
			if (Global_262145.f_18782 /* Tunable: BIKER_DISABLE_OUTRIDER_CITY */ && iParam1 == 0)
			{
				return 1;
			}
			else if (Global_262145.f_18783 /* Tunable: BIKER_DISABLE_OUTRIDER_COUNTRY */ && iParam1 == 1)
			{
				return 1;
			}
			break;
		case 11:
			if (Global_262145.f_32529 /* Tunable: -553806806 */)
			{
				return 1;
			}
			break;
		case 12:
			if (Global_262145.f_32530 /* Tunable: 910650986 */)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_655(int iParam0)//Position - 0x43909E
{
	switch (iParam0)
	{
		case joaat("chimera"):
			return 1;
		default:
	}
	return 0;
}

bool func_656()//Position - 0x439AA0
{
	return __LIB_2__.func_207(15);
}

int func_657(int iParam0)//Position - 0x43ACED
{
	int iVar0;
	if (iParam0 == 42)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2666179[iVar0 /*13*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_658(int iParam0)//Position - 0x43AE19
{
	if ((__LIB_2__.func_871(iParam0) || __LIB_0__.func_788(iParam0)) || __LIB_4__.func_602(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_659(int iParam0)//Position - 0x43AE47
{
	switch (Global_2666788)
	{
		case 0:
		case 1:
		case 10:
		case 11:
		case 12:
			return 0;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 5:
			return 0;
		case 2:
		case 6:
		case 7:
			return 1;
		default:
	}
	return 0;
}

bool func_660(int iParam0)//Position - 0x43AEF1
{
	if (iParam0 == 42)
	{
		return 0;
	}
	return iParam0 == Global_2666223;
}

bool func_661(int iParam0)//Position - 0x43AF5C
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar0++;
	if (iVar0 >= 24)
	{
		iVar0 = 0;
	}
	return BitTest(iParam0, iVar0);
}

bool func_662(int iParam0)//Position - 0x43AF7F
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	return BitTest(iParam0, iVar0);
}

int func_663(int iParam0)//Position - 0x43B040
{
	return Global_2661084[iParam0 /*10*/].f_1;
}

bool func_664(bool bParam0)//Position - 0x43C278
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_11.f_1, 1);
}

bool func_665()//Position - 0x44128C
{
	return __LIB_0__.func_137(28155, -1);
}

void func_666()//Position - 0x44339D
{
	Global_2714762.f_761 = 0;
}

int func_667(int iParam0)//Position - 0x444646
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_2347 /* Tunable: BOUNTY_AWARD_LEVEL_1_MODIFIER */;
			break;
		case 1:
			return Global_262145.f_2348 /* Tunable: BOUNTY_AWARD_LEVEL_2_MODIFIER */;
			break;
		case 2:
			return Global_262145.f_2349 /* Tunable: BOUNTY_AWARD_LEVEL_3_MODIFIER */;
			break;
		case 3:
			return Global_262145.f_2350 /* Tunable: BOUNTY_AWARD_LEVEL_4_MODIFIER */;
			break;
		case 4:
			return Global_262145.f_2351 /* Tunable: BOUNTY_AWARD_LEVEL_5_MODIFIER */;
			break;
	}
	return 0;
}

void func_668(int iParam0)//Position - 0x444C94
{
	Global_2727724 = iParam0;
}

void func_669()//Position - 0x444EB1
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_61.f_57))
	{
		if (__LIB_0__.func_584(MISC::GET_HASH_KEY("tr_prop_tr_meet_coll_01")))
		{
			Global_2703735.f_61.f_57 = OBJECT::CREATE_OBJECT(MISC::GET_HASH_KEY("tr_prop_tr_meet_coll_01"), -2000f, 1113.2114f, -25.362434f, false, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(Global_2703735.f_61.f_57, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_2703735.f_61.f_57, false);
			ENTITY::SET_ENTITY_VISIBLE(Global_2703735.f_61.f_57, false, false);
			ENTITY::SET_ENTITY_PROOFS(Global_2703735.f_61.f_57, true, true, true, false, true, true, true, true);
		}
	}
}

struct<7> func_670()//Position - 0x44B6D4
{
	struct<7> Var0;
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	return Var0;
}

bool func_671(bool bParam0)//Position - 0x44D711
{
	int iVar0;
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2727797;
	}
	else
	{
		iVar0 = bParam0;
		if (iVar0 > -1)
		{
			return Global_2689235[iVar0 /*453*/].f_266;
		}
	}
	return Global_2727797;
}

void func_672(int iParam0)//Position - 0x44EBF5
{
	Global_2727810 = iParam0;
}

bool func_673()//Position - 0x450961
{
	return Global_2826521.f_259;
}

bool func_674()//Position - 0x450970
{
	return Global_2826521.f_258;
}

float func_675(int iParam0, bool bParam1)//Position - 0x452866
{
	switch (iParam0)
	{
		case joaat("halftrack"):
			return 0.7f;
		case joaat("tampa3"):
			switch (bParam1)
			{
				case 4:
					return 0.3f;
				default:
			}
			break;
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargobob4"):
			return 0.75f;
			break;
		case joaat("speedo4"):
			switch (bParam1)
			{
				case 4:
					return 0.7f;
				default:
			}
			break;
	}
	return 0.8f;
}

void func_676(int iParam0)//Position - 0x453B9F
{
	Global_2683918.f_2452[iParam0 /*16*/].f_11 = 0;
}

void func_677(int iParam0)//Position - 0x453C03
{
	struct<15> Var0;
	Var0.f_13 = -1;
	Var0.f_14 = 1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_2683918.f_2452[iParam0 /*16*/]), &Var0, 16);
}

void func_678(int iParam0, bool bParam1)//Position - 0x453E7B
{
	int iVar0;
	struct<14> Var1;
	if (bParam1)
	{
		iVar0 = Global_1911933[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*260*/].f_94.f_21[iParam0 /*14*/].f_4;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
			}
			OBJECT::DELETE_OBJECT(&iVar0);
		}
	}
	Var1.f_13 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1911933[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*260*/].f_94.f_21[iParam0 /*14*/]), &Var1, 14);
}

bool func_679()//Position - 0x456881
{
	return __LIB_5__.func_803(PLAYER::PLAYER_ID());
}

void func_680(int iParam0, bool bParam1)//Position - 0x4572B1
{
	int iVar0;
	iVar0 = iParam0;
	__LIB_8__.func_894(&(Global_2689235[iVar0 /*453*/].f_434), 5, bParam1);
}

void func_681(var uParam0, int iParam1, bool bParam2)//Position - 0x4589FD
{
	int iVar0;
	iVar0 = uParam0;
	__LIB_8__.func_894(&(Global_2689235[iVar0 /*453*/].f_435), iParam1, !bParam2);
}

bool func_682(var uParam0, int iParam1)//Position - 0x458A61
{
	int iVar0;
	iVar0 = uParam0;
	return !__LIB_0__.func_492(&(Global_2689235[iVar0 /*453*/].f_435), iParam1);
}

int func_683(bool bParam0)//Position - 0x45EC5D
{
	struct<13> Var0;
	if (__LIB_1__.func_264(bParam0, 0, 0))
	{
		Var0 = { __LIB_1__.func_267(bParam0) };
		if (NETWORK::NETWORK_IS_FRIEND(&Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_684(bool bParam0, int iParam1)//Position - 0x46079C
{
	int iVar0;
	if (__LIB_1__.func_357())
	{
		return 0;
	}
	iVar0 = __LIB_22__.func_869(bParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2656326[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	return 1;
}

void func_685()//Position - 0x460D5B
{
	MISC::SET_BIT(&(Global_2714762.f_3), 7);
}

void func_686(int iParam0)//Position - 0x46255D
{
	Global_4535598 = iParam0;
}

int func_687()//Position - 0x4644C0
{
	return 600;
}

int func_688(int iParam0)//Position - 0x4653E1
{
	switch (iParam0)
	{
		case 32:
		case 33:
		case 8:
		case 49:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
			return 1;
		default:
	}
	return 0;
}

int func_689(int iParam0)//Position - 0x46543D
{
	switch (iParam0)
	{
		case 48:
		case 47:
		case 49:
			return 1;
		default:
	}
	return 0;
}

int func_690(int iParam0)//Position - 0x465463
{
	switch (iParam0)
	{
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
			return 1;
			break;
	}
	return 0;
}

void func_691(int iParam0)//Position - 0x46589B
{
	Global_2870048 = 1;
	Global_2870049 = iParam0;
}

int func_692(int iParam0)//Position - 0x467F20
{
	switch (iParam0)
	{
		case 0:
			return 7856;
			break;
		case 1:
			return 7857;
			break;
		case 2:
			return 7858;
			break;
		case 3:
			return 7859;
			break;
		case 4:
			return 7860;
			break;
		case 5:
			return 7861;
			break;
		case 6:
			return 7862;
			break;
		case 7:
			return 7863;
			break;
	}
	return 13122;
}

int func_693(bool bParam0)//Position - 0x4699CE
{
	if (!bParam0 == PLAYER::PLAYER_ID())
	{
		if (__LIB_1__.func_264(bParam0, 1, 1))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bParam0)))
				{
					if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(bParam0)))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 625f)
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

void func_694(int iParam0)//Position - 0x469B52
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Global_1648034.f_241.f_136[iVar0 /*33*/][iVar1] = 0;
		iVar0++;
	}
}

int func_695(bool bParam0, int iParam1)//Position - 0x46A866
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam1) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, (iVar0 - 1), false);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (PLAYER::GET_PLAYER_PED(bParam0) == iVar2)
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_696(bool bParam0, bool bParam1)//Position - 0x46AA01
{
	if (__LIB_2__.func_212(bParam0) && __LIB_2__.func_212(bParam1))
	{
		if (SYSTEM::VDIST(Global_2689235[bParam0 /*453*/].f_71.f_7, Global_2689235[bParam1 /*453*/].f_71.f_7) < 0.1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_697(int iParam0)//Position - 0x46AAE6
{
	if (BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 26) && !BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 27))
	{
		return 1;
	}
	return 0;
}

int func_698(bool bParam0, bool bParam1)//Position - 0x46ABCA
{
	if (__LIB_2__.func_212(bParam0) && __LIB_2__.func_212(bParam1))
	{
		if (Global_2689235[bParam0 /*453*/].f_71.f_6 == Global_2689235[bParam1 /*453*/].f_71.f_6 && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(bParam0, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_699(bool bParam0)//Position - 0x46AD51
{
	return BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, 8);
}

int func_700(bool bParam0)//Position - 0x46BCD2
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_2703735);
	if (iVar0 > -1)
	{
		if (BitTest(Global_2689235[bParam0 /*453*/].f_71.f_2, (10 + iVar0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_701(int iParam0)//Position - 0x46BD86
{
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2678393.f_333[iParam0]) < 3500)
	{
		return 1;
	}
	return 0;
}

int func_702(int iParam0, bool bParam1)//Position - 0x46C7EB
{
	return BitTest(Global_1648034.f_241[__LIB_0__.func_159(iParam0) /*33*/][bParam1], __LIB_0__.func_158(iParam0));
	return 0;
}

int func_703(var* uParam0)//Position - 0x46CCA2
{
	struct<22> Var0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var0, 35, uParam0);
				if (Var0.f_21 == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_704()//Position - 0x46E168
{
	return Global_1937518.f_40;
}

bool func_705(bool bParam0)//Position - 0x470271
{
	return HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]);
}

void func_706()//Position - 0x4719AD
{
	Global_2667225.f_2881 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

int func_707(int iParam0)//Position - 0x474FB8
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_708(var uParam0, var uParam1)//Position - 0x4878C9
{
	*uParam0 = Global_4521801.f_913;
	*uParam1 = Global_4521801.f_914;
}

int func_709()//Position - 0x487F54
{
	if (Global_22640 == 6 || Global_22640 > 6)
	{
		return 0;
	}
	if (BitTest(Global_8138, 3))
	{
		if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_710(int iParam0)//Position - 0x48CFAC
{
	Global_1574927 = iParam0;
}

var func_711()//Position - 0x48CFBA
{
	return Global_2727892;
}

void func_712(int iParam0)//Position - 0x48CFC6
{
	Global_1574925 = iParam0;
}

bool func_713()//Position - 0x48CFD4
{
	return Global_2725912;
}

void func_714(int iParam0)//Position - 0x48CFE0
{
	Global_2725403 = iParam0;
}

void func_715(int iParam0)//Position - 0x48CFEE
{
	Global_2727751 = iParam0;
}

void func_716(int iParam0)//Position - 0x48CFFC
{
	Global_1575050 = iParam0;
}

int func_717()//Position - 0x48D00A
{
	return Global_1575050;
}

void func_718(int iParam0)//Position - 0x48D016
{
	Global_1574533 = iParam0;
}

void func_719(int iParam0)//Position - 0x48D024
{
	Global_1574534 = iParam0;
}

void func_720(int iParam0)//Position - 0x48D032
{
	Global_1574922 = iParam0;
}

int func_721()//Position - 0x48DEA2
{
	return Global_1574922;
}

int func_722()//Position - 0x48DEAE
{
	return Global_1575070;
	return 0;
}

void func_723()//Position - 0x48DEBE
{
	Global_2727791 = 1;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::IS_SWITCH_READY_FOR_DESCENT())
		{
			STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
		}
	}
}

void func_724(int iParam0)//Position - 0x48DEE3
{
	Global_1574923 = iParam0;
}

void func_725(int iParam0)//Position - 0x48DEF1
{
	Global_1575037 = iParam0;
}

void func_726(int iParam0)//Position - 0x48DEFF
{
	Global_2727070 = iParam0;
}

int func_727(var uParam0)//Position - 0x491D79
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 >= 2 && CAM::IS_SCREEN_FADED_OUT())
		{
			return 0;
		}
	}
	if (uParam0->f_1 == 23)
	{
		if (__LIB_1__.func_264(uParam0->f_17, 1, 1))
		{
			return 0;
		}
	}
	return 1;
}

void func_728(int iParam0)//Position - 0x494D05
{
	struct<30> Var0;
	Var0.f_9 = 1;
	Global_2703735.f_967[iParam0 /*30*/] = { Var0 };
}

int func_729()//Position - 0x495FFF
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 15))
	{
		return 1;
	}
	return 0;
}

int func_730()//Position - 0x496078
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 16))
	{
		return 1;
	}
	return 0;
}

int func_731(int iParam0)//Position - 0x497E46
{
	if (__LIB_9__.func_318(iParam0) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

int func_732(bool bParam0)//Position - 0x498988
{
	switch (__LIB_3__.func_803(bParam0))
	{
		case 256:
			return -1396457166;
		case 263:
			return -956255885;
		default:
	}
	if (__LIB_4__.func_109(bParam0, 15))
	{
		return 303124754;
	}
	return -1292453789;
}

int func_733(bool bParam0)//Position - 0x498A23
{
	if (PLAYER::GET_PLAYER_TEAM(bParam0) > -1)
	{
		if (BitTest(Global_4718592.f_95506, PLAYER::GET_PLAYER_TEAM(bParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_734(bool bParam0)//Position - 0x498A4E
{
	if (__LIB_1__.func_264(bParam0, 1, 1))
	{
		return BitTest(Global_2678393.f_368, bParam0);
	}
	return 0;
}

bool func_735(bool bParam0)//Position - 0x498AB7
{
	return __LIB_10__.func_886(Global_2678393.f_657[bParam0], &(Global_2678393.f_390), bParam0);
}

int func_736(bool bParam0)//Position - 0x498AD7
{
	if (BitTest(Global_2678393.f_366, bParam0) || BitTest(Global_2678393.f_376, bParam0))
	{
		return 1;
	}
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		if (HUD::GET_BLIP_FADE_DIRECTION(Global_2678393[bParam0]) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_737(bool bParam0)//Position - 0x498D6F
{
	return __LIB_10__.func_886(Global_2678393.f_690[bParam0], &(Global_2678393.f_391), bParam0);
}

bool func_738(bool bParam0)//Position - 0x498DB6
{
	return __LIB_10__.func_886(Global_2678393.f_756[bParam0], &(Global_2678393.f_392), bParam0);
}

int func_739(int iParam0)//Position - 0x498EEE
{
	if ((Global_1836576 && Global_1853348[iParam0 /*834*/] == 1) || (Global_1836577 && Global_1853348[iParam0 /*834*/] == 0))
	{
		return 1;
	}
	return 0;
}

int func_740(int iParam0)//Position - 0x4999E6
{
	if (iParam0 == HUD::GET_STANDARD_BLIP_ENUM_ID())
	{
		return 1;
	}
	return 0;
}

var func_741(bool bParam0)//Position - 0x4999FC
{
	return Global_2678393.f_525[bParam0];
}

int func_742(float fParam0)//Position - 0x499A0F
{
	if (fParam0 < -47.2f)
	{
		return 0;
	}
	return 1;
}

int func_743(bool bParam0)//Position - 0x49B432
{
	if (__LIB_12__.func_846())
	{
		if (Global_1836566 != -1)
		{
			if (Global_1836566 == bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_744(bool bParam0)//Position - 0x49B9C3
{
	MISC::SET_BIT(&(Global_2678393.f_397), bParam0);
}

bool func_745(bool bParam0)//Position - 0x49BB0E
{
	return BitTest(Global_2678393.f_379, bParam0);
}

void func_746(bool bParam0, bool bParam1)//Position - 0x49BE82
{
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		if (bParam1)
		{
			if (!BitTest(Global_2678393.f_383, bParam0))
			{
				HUD::SHOW_HEADING_INDICATOR_ON_BLIP(Global_2678393[bParam0], true);
				MISC::SET_BIT(&(Global_2678393.f_383), bParam0);
			}
		}
		else if (BitTest(Global_2678393.f_383, bParam0))
		{
			HUD::SHOW_HEADING_INDICATOR_ON_BLIP(Global_2678393[bParam0], false);
			MISC::CLEAR_BIT(&(Global_2678393.f_383), bParam0);
		}
	}
	else if (BitTest(Global_2678393.f_383, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2678393.f_383), bParam0);
	}
}

bool func_747(bool bParam0)//Position - 0x49BFAB
{
	return BitTest(Global_2678393.f_382, bParam0);
}

void func_748(bool bParam0, var uParam1, var uParam2, var uParam3)//Position - 0x49C083
{
	Global_2678393.f_69[bParam0] = uParam1;
	Global_2678393.f_102[bParam0] = uParam2;
	Global_2678393.f_135[bParam0] = uParam3;
}

bool func_749(bool bParam0)//Position - 0x49C0AF
{
	return BitTest(Global_2678393.f_381, bParam0);
}

int func_750(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x49C0F7
{
	if ((Global_2678393.f_69[bParam0] == iParam1 && Global_2678393.f_102[bParam0] == iParam2) && Global_2678393.f_135[bParam0] == iParam3)
	{
		return 1;
	}
	return 0;
}

int func_751(bool bParam0)//Position - 0x49C199
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if (iVar0 > -1 && iVar0 < 4)
	{
		if (Global_4718592.f_111249[iVar0] > -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_752(int iParam0)//Position - 0x49C653
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 26);
}

int func_753(bool bParam0)//Position - 0x49CBAC
{
	if (__LIB_1__.func_264(bParam0, 1, 1))
	{
		return BitTest(Global_2678393.f_369, bParam0);
	}
	return 0;
}

Vector3 func_754(int iParam0)//Position - 0x49CC4E
{
	switch (iParam0)
	{
		case 91:
			return 268.5567f, -1808.6705f, 26.1131f;
			break;
		case 92:
			return -1487.1534f, -926.2145f, 9.4102f;
			break;
		case 93:
			return 53.8106f, -1027.6407f, 29.4261f;
			break;
		case 94:
			return 54.1676f, 2793.9036f, 57.135f;
			break;
		case 95:
			return -360.0072f, 6051.0093f, 30.3827f;
			break;
		case 96:
			return 1731.2938f, 3698.5935f, 33.7762f;
			break;
		case 97:
			return 940.4277f, -1478.9342f, 30.0416f;
			break;
		case 98:
			return 181.3953f, 324.3145f, 104.5234f;
			break;
		case 99:
			return -16.8933f, -176.4705f, 51.6339f;
			break;
		case 100:
			return 2474.8977f, 4099.427f, 37.2816f;
			break;
		case 101:
			return -49.2044f, 6430.939f, 30.8569f;
			break;
		case 102:
			return -1141.6272f, -1558.1749f, 3.2943f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_755(bool bParam0)//Position - 0x49CEB3
{
	if (__LIB_1__.func_264(bParam0, 1, 1))
	{
		return 1;
	}
	return 0;
}

float func_756(int iParam0)//Position - 0x49D311
{
	float fVar0;
	fVar0 = (WEAPON::GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(iParam0) * 2.5f);
	if (fVar0 > 400f)
	{
		fVar0 = 400f;
	}
	return fVar0;
}

void func_757(bool bParam0)//Position - 0x49D3F0
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1575) || Global_2678393.f_1575 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2678393.f_1575 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 20);
		}
		else
		{
			Global_2678393.f_1575 = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 20);
		}
	}
}

bool func_758()//Position - 0x49D6D1
{
	return __LIB_17__.func_985(PLAYER::PLAYER_ID());
}

int func_759(int iParam0, bool bParam1)//Position - 0x49E7A2
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Submarine"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_760()//Position - 0x4A13F4
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1658))
	{
		return Global_2678393.f_1659;
	}
	return 0;
}

int func_761(bool bParam0)//Position - 0x4A391D
{
	if (__LIB_1__.func_264(bParam0, 1, 1))
	{
		if (BitTest(Global_2689235[bParam0 /*453*/].f_416, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_762(int iParam0)//Position - 0x4A3E3F
{
	if (__LIB_0__.func_840())
	{
		if (iParam0 < 0)
		{
			return 0;
		}
		if (PLAYER::NETWORK_PLAYER_ID_TO_INT() < 0)
		{
			return 0;
		}
		return BitTest(Global_1659950[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/].f_25, iParam0);
	}
	else if (Global_1836378)
	{
		return 1;
	}
	if (BitTest(Global_1659869[iParam0], 12) && BitTest(Global_4718592.f_30, 28))
	{
		return 1;
	}
	if (Global_1836379 && BitTest(Global_4718592.f_30, 28))
	{
		return 1;
	}
	return 0;
}

int func_763(int iParam0)//Position - 0x4A64B3
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_40, 7);
	}
	return 0;
}

int func_764(int iParam0, int iParam1)//Position - 0x4A855A
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar0, false))
			{
				if (VEHICLE::IS_TURRET_SEAT(iParam0, iVar0))
				{
					*iParam1 = iVar0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_765(var uParam0)//Position - 0x4A8E44
{
	Global_2667225.f_45.f_305 = uParam0;
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

int func_766()//Position - 0x4AA90D
{
	switch (__LIB_9__.func_318(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 236:
		case 150:
			return 1;
		default:
	}
	if (__LIB_0__.func_684(__LIB_9__.func_318(PLAYER::PLAYER_ID())) == 1)
	{
		return 1;
	}
	return 0;
}

bool func_767()//Position - 0x4AC07B
{
	return DLC::IS_DLC_PRESENT(joaat("mpsmuggler"));
}

bool func_768()//Position - 0x4AC0CB
{
	return DLC::IS_DLC_PRESENT(joaat("mpstunt"));
}

bool func_769()//Position - 0x4AC0ED
{
	return DLC::IS_DLC_PRESENT(joaat("mplts"));
}

bool func_770()//Position - 0x4AC0FE
{
	return DLC::IS_DLC_PRESENT(joaat("mppilot"));
}

void func_771(int iParam0)//Position - 0x4C2EE8
{
	Global_2725908 = iParam0;
}

var func_772()//Position - 0x4C3659
{
	return Global_2725908;
}

void func_773(int iParam0, bool bParam1)//Position - 0x4C369A
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2826510[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2826510[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_774(var uParam0)//Position - 0x4C3716
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return joaat("MPPLY_PLATINUM_BOOLPLY_0");
			break;
	}
	return 22;
}

void func_775(int iParam0, bool bParam1)//Position - 0x4C3778
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1657921.f_1061[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1657921.f_1061[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_776(var uParam0)//Position - 0x4C37FA
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return joaat("MPPLY_PLATINUM_INTPLY_0");
			break;
		case 1:
			return joaat("MPPLY_PLATINUM_INTPLY_1");
			break;
		case 2:
			return joaat("MPPLY_PLATINUM_INTPLY_2");
			break;
		case 3:
			return joaat("MPPLY_PLATINUM_INTPLY_3");
			break;
	}
	return 504;
}

void func_777(int iParam0, bool bParam1)//Position - 0x4C3919
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1656668.f_1093[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1656668.f_1093[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_778(var uParam0)//Position - 0x4C39FD
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 765;
			break;
		case 1:
			return 766;
			break;
		case 2:
			return 767;
			break;
		case 3:
			return 8734;
			break;
		case 4:
			return 9538;
			break;
	}
	return 13122;
}

void func_779(int iParam0, bool bParam1)//Position - 0x4C3A9A
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1657921.f_1127[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1657921.f_1127[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_780(var uParam0)//Position - 0x4C3B1C
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return joaat("MPPLY_GOLD_INTPLY_0");
			break;
		case 1:
			return joaat("MPPLY_GOLD_INTPLY_1");
			break;
		case 2:
			return joaat("MPPLY_GOLD_INTPLY_2");
			break;
		case 3:
			return joaat("MPPLY_GOLD_INTPLY_3");
			break;
	}
	return 504;
}

void func_781(int iParam0, bool bParam1)//Position - 0x4C3D39
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1656668.f_1237[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1656668.f_1237[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_782(var uParam0)//Position - 0x4C3DBD
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 775;
			break;
		case 1:
			return 776;
			break;
		case 2:
			return 777;
			break;
		case 3:
			return 8732;
			break;
		case 4:
			return 9537;
			break;
	}
	return 13122;
}

void func_783(int iParam0, bool bParam1)//Position - 0x4C3E5A
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1657921.f_1105[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1657921.f_1105[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_784(var uParam0)//Position - 0x4C3EDC
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return joaat("MPPLY_SILVER_INTPLY_0");
			break;
		case 1:
			return joaat("MPPLY_SILVER_INTPLY_1");
			break;
		case 2:
			return joaat("MPPLY_SILVER_INTPLY_2");
			break;
		case 3:
			return joaat("MPPLY_SILVER_INTPLY_3");
			break;
	}
	return 504;
}

void func_785(int iParam0, bool bParam1)//Position - 0x4C410D
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1656668.f_1189[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1656668.f_1189[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_786(var uParam0)//Position - 0x4C4191
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 785;
			break;
		case 1:
			return 786;
			break;
		case 2:
			return 787;
			break;
		case 3:
			return 8730;
			break;
		case 4:
			return 9536;
			break;
	}
	return 13122;
}

void func_787(int iParam0, bool bParam1)//Position - 0x4C422E
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1657921.f_1083[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1657921.f_1083[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_788(var uParam0)//Position - 0x4C42B0
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return joaat("MPPLY_BRONZE_INTPLY_0");
			break;
		case 1:
			return joaat("MPPLY_BRONZE_INTPLY_1");
			break;
		case 2:
			return joaat("MPPLY_BRONZE_INTPLY_2");
			break;
		case 3:
			return joaat("MPPLY_BRONZE_INTPLY_3");
			break;
	}
	return 5;
}

void func_789(int iParam0, bool bParam1)//Position - 0x4C44CB
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1656668.f_1141[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1656668.f_1141[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_790(var uParam0)//Position - 0x4C454F
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 795;
			break;
		case 1:
			return 796;
			break;
		case 2:
			return 797;
			break;
		case 3:
			return 8728;
			break;
		case 4:
			return 9535;
			break;
	}
	return 13122;
}

void func_791(int iParam0, bool bParam1)//Position - 0x4C45ED
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2825435.f_1053[__LIB_0__.func_159(iVar0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2825435.f_1053[__LIB_0__.func_159(iVar0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

void func_792(int iParam0)//Position - 0x4C48FA
{
	Global_1648034.f_107 = iParam0;
}

int func_793(int iParam0, int iParam1)//Position - 0x4C490A
{
	if (iParam1 == 0)
	{
	}
	switch (iParam0)
	{
		case joaat("MPGEN_AWD_TEMPAWARDFLOAT"):
			break;
	}
	return 0;
}

int func_794(int iParam0, int iParam1)//Position - 0x4C4929
{
	if (iParam1 == 0)
	{
	}
	switch (iParam0)
	{
		case joaat("MPGEN_AWD_TEMPAWARDINT"):
			break;
	}
	return 0;
}

int func_795(int iParam0, int iParam1)//Position - 0x4C4948
{
	if (iParam1 == 0)
	{
	}
	switch (iParam0)
	{
		case joaat("MPGEN_AWD_TEMPAWARDBOOL"):
			break;
	}
	return 0;
}

int func_796(int iParam0, int iParam1)//Position - 0x4C4967
{
	if (iParam1 == 9)
	{
	}
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
		default:
	}
	return 0;
}

int func_797(int iParam0, int iParam1)//Position - 0x4C49A6
{
	if (iParam1 == 0)
	{
	}
	switch (iParam0)
	{
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
		case 1:
			return 1;
		case 2:
			return 1;
		case 6:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
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
		default:
	}
	return 0;
}

int func_798(int iParam0, int iParam1)//Position - 0x4C4A8E
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return 1;
		case 39:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 60:
			return 1;
		case 61:
			return 1;
		case 62:
			return 1;
		case 63:
			return 1;
		case 16:
			return 1;
		case 0:
			return 1;
		case 12:
			return 1;
		case 11:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 15:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 14:
			return 1;
		case 22:
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
			return 1;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 23:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 26:
			return 1;
		case 27:
			return 1;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
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
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 1;
		case 49:
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
		case 59:
			return 1;
		case 126:
			return 1;
		case 127:
			return 1;
		case 128:
			return 1;
		case 129:
			return 1;
		case 130:
			return 1;
		case 67:
			return 1;
		case 120:
			return 1;
		case 121:
			return 1;
		case 122:
			return 1;
		case 123:
			return 1;
		case 124:
			return 1;
		case 125:
			return 1;
		case 131:
			return 1;
		case 132:
			return 1;
		case 133:
			return 1;
		case 134:
			return 1;
		case 135:
			return 1;
		case 136:
			return 1;
		case 137:
			return 1;
		case 138:
			return 1;
		case 139:
			return 1;
		case 140:
			return 1;
		case 141:
			return 1;
		case 142:
			return 1;
		case 143:
			return 1;
		case 70:
			return 1;
		case 71:
			return 1;
		case 72:
			return 1;
		case 73:
			return 1;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 1;
		case 78:
			return 1;
		case 79:
			return 1;
		case 80:
			return 1;
		case 81:
			return 1;
		case 82:
			return 1;
		case 83:
			return 1;
		case 84:
			return 1;
		case 85:
			return 1;
		case 86:
			return 1;
		case 87:
			return 1;
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
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
		case 117:
		case 118:
		case 119:
			return 1;
			break;
	}
	return 0;
}

int func_799(int iParam0, int iParam1)//Position - 0x4C4F76
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
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
			return 1;
		case 7:
			return 1;
		case 8:
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
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 1;
		case 25:
			return 1;
		case 26:
			return 1;
		case 27:
			return 1;
		case 144:
			return 1;
		case 143:
			return 1;
		case 146:
			return 1;
		case 148:
			return 1;
		case 147:
			return 1;
		case 149:
			return 1;
		case 150:
			return 1;
		case 151:
			return 1;
		case 30:
			return 1;
		case 31:
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
		case 59:
			return 1;
		case 62:
			return 1;
		case 60:
			return 1;
		case 61:
			return 1;
		case 63:
			return 1;
		case 64:
			return 1;
		case 65:
			return 1;
		case 66:
			return 1;
		case 67:
			return 1;
		case 68:
			return 1;
		case 69:
			return 1;
		case 70:
			return 1;
		case 71:
			return 1;
		case 72:
			return 1;
		case 73:
			return 1;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 1;
		case 78:
			return 1;
		case 79:
			return 1;
		case 80:
			return 1;
		case 81:
			return 1;
		case 82:
			return 1;
		case 83:
			return 1;
		case 84:
			return 1;
		case 85:
			return 1;
		case 86:
			return 1;
		case 87:
			return 1;
		case 88:
			return 1;
		case 89:
			return 1;
		case 90:
			return 1;
		case 93:
			return 1;
		case 92:
			return 1;
		case 91:
			return 1;
		case 94:
			return 1;
		case 95:
			return 1;
		case 96:
			return 1;
		case 97:
			return 1;
		case 98:
			return 1;
		case 99:
			return 1;
		case 100:
			return 1;
		case 101:
			return 1;
		case 102:
			return 1;
		case 103:
			return 1;
		case 104:
			return 1;
		case 105:
			return 1;
		case 106:
			return 1;
		case 107:
			return 1;
		case 108:
			return 1;
		case 109:
			return 1;
		case 110:
			return 1;
		case 111:
			return 1;
		case 112:
			return 1;
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
			return 1;
			break;
	}
	return 0;
}

int func_800()//Position - 0x4C54C6
{
	if (__LIB_0__.func_233())
	{
		return Global_2671449.f_57;
	}
	return 0;
}

bool func_801(int iParam0)//Position - 0x4C55B5
{
	return iParam0 == 39;
}

void func_802(var uParam0)//Position - 0x4C55D3
{
	while (*uParam0 < 0f)
	{
		*uParam0 = (*uParam0 + 360f);
	}
	while (*uParam0 > 360f)
	{
		*uParam0 = (*uParam0 + -360f);
	}
}

void func_803()//Position - 0x4C5711
{
	struct<5> Var0;
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_F_BERD_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, Var0.f_3, Var0.f_4, 0);
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_F_JBIB_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, Var0.f_3, Var0.f_4, 0);
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_F_TORSO_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, Var0.f_3, Var0.f_4, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 4, 8, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
}

void func_804()//Position - 0x4C57BD
{
	struct<5> Var0;
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_BERD_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, Var0.f_3, Var0.f_4, 0);
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_JBIB_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, Var0.f_3, Var0.f_4, 0);
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_TORSO_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, Var0.f_3, Var0.f_4, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 1, 5, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 10, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 15, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
}

void func_805(bool bParam0)//Position - 0x4C7F1E
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer5"))
			{
				if (bParam0)
				{
					if (!VEHICLE::GET_IS_WHEELS_RETRACTED(iVar0))
					{
						Global_2667225.f_2890 = 1;
						Global_2667225.f_2891 = 0;
					}
				}
				else
				{
					Global_2667225.f_2891 = 1;
					Global_2667225.f_2890 = 0;
				}
			}
		}
	}
}

void func_806()//Position - 0x4C7F86
{
	int iVar0;
	if (Global_2667225.f_490.f_5)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::GET_VEHICLE_HAS_PARACHUTE(iVar0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("ruiner2"))
				{
					Global_2667225.f_2897 = 1;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("oppressor"))
			{
				Global_2667225.f_2897 = 1;
			}
		}
	}
}

int func_807()//Position - 0x4C7FF5
{
	if (BitTest(Global_1978994, 29))
	{
		return 0;
	}
	return 1;
}

bool func_808(int iParam0)//Position - 0x4C800E
{
	if (Global_1836584)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("blazer5"))
		{
			return Global_2667225.f_490.f_4;
		}
	}
	return ENTITY::IS_ENTITY_IN_WATER(iParam0);
}

bool func_809()//Position - 0x4C91DA
{
	if (Global_262145.f_165 /* Tunable: PASSIVE_DONATE */ == 0)
	{
		return 1;
	}
	return MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_165 /* Tunable: PASSIVE_DONATE */, false, false, true, -1, 0);
}

void func_810()//Position - 0x4CB683
{
	if (!Global_1660946)
	{
		return;
	}
	if (!PED::IS_PEDHEADSHOT_VALID(Global_1660946.f_2))
	{
		return;
	}
	PED::UNREGISTER_PEDHEADSHOT(Global_1660946.f_2);
}

void func_811(int iParam0)//Position - 0x4CBC40
{
	Global_1659366[iParam0 /*11*/] = 0;
}

void func_812(int iParam0)//Position - 0x4CBC51
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_1 = 0;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_2 = { 0f, 0f, 0f };
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/] = 0;
	StringCopy(&(Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_5), "", 24);
	StringCopy(&(Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_11), "", 64);
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_27 = 0;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_28 = 0;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_29 = 0;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_30 = -1;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_31 = -1;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_32 = -1;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_33 = -1;
}

bool func_813(int iParam0)//Position - 0x4CBD35
{
	int iVar0;
	iVar0 = Global_1659366[iParam0 /*11*/].f_2;
	if (iVar0 == 0)
	{
		return 0;
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iVar0);
}

int func_814(int iParam0)//Position - 0x4CBD6A
{
	return Global_1659366[iParam0 /*11*/];
}

void func_815(int iParam0)//Position - 0x4CC98E
{
	if (BitTest(Global_2621865[iParam0 /*26*/].f_13, 5))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 5);
}

bool func_816(int iParam0, int iParam1)//Position - 0x4CCA75
{
	var uVar0;
	uVar0 = iParam1;
	return BitTest(Global_2657492.f_356[iParam0 /*75*/].f_3, uVar0);
}

void func_817()//Position - 0x4CE9D3
{
	MISC::CLEAR_BIT(&Global_2667185, 14);
	MISC::CLEAR_BIT(&Global_2667185, 15);
	MISC::CLEAR_BIT(&Global_2667185, 16);
	MISC::CLEAR_BIT(&Global_2667185, 17);
	MISC::CLEAR_BIT(&Global_2667185, 18);
}

void func_818()//Position - 0x4CEA0D
{
	Global_2667205 = 0;
	Global_2667205.f_1 = 0;
	Global_2667205.f_2 = 0;
	Global_2667205.f_3 = MISC::GET_GAME_TIMER();
}

void func_819()//Position - 0x4CEEFE
{
	struct<4> Var0;
	Var0 = 5;
	Global_2667191 = { Var0 };
}

void func_820(int iParam0)//Position - 0x4CEF17
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&Global_2667185, 0);
			return;
		case 1:
			MISC::CLEAR_BIT(&Global_2667185, 3);
			return;
		case 2:
			MISC::CLEAR_BIT(&Global_2667185, 5);
			return;
		case 3:
			MISC::CLEAR_BIT(&Global_2667185, 7);
			return;
		case 4:
			MISC::CLEAR_BIT(&Global_2667185, 9);
			return;
		default:
	}
}

void func_821(int iParam0, bool bParam1)//Position - 0x4CFB4C
{
	switch (iParam0)
	{
		case 0:
			if (BitTest(Global_2667185, 0))
			{
				if (bParam1)
				{
					if (!BitTest(Global_2667185, 21))
					{
						MISC::SET_BIT(&Global_2667185, 21);
					}
				}
				else if (!BitTest(Global_2667185, 2))
				{
					MISC::SET_BIT(&Global_2667185, 2);
				}
			}
			return;
		case 1:
			if (BitTest(Global_2667185, 3))
			{
				if (bParam1)
				{
					if (!BitTest(Global_2667185, 22))
					{
						MISC::SET_BIT(&Global_2667185, 22);
					}
				}
				else if (!BitTest(Global_2667185, 4))
				{
					MISC::SET_BIT(&Global_2667185, 4);
				}
			}
			return;
		case 2:
			if (BitTest(Global_2667185, 5))
			{
				if (bParam1)
				{
					if (!BitTest(Global_2667185, 23))
					{
						MISC::SET_BIT(&Global_2667185, 23);
					}
				}
				else if (!BitTest(Global_2667185, 6))
				{
					MISC::SET_BIT(&Global_2667185, 6);
				}
			}
			return;
		case 3:
			if (BitTest(Global_2667185, 7))
			{
				if (bParam1)
				{
				}
				else if (!BitTest(Global_2667185, 8))
				{
					MISC::SET_BIT(&Global_2667185, 8);
				}
			}
			return;
		case 4:
			if (BitTest(Global_2667185, 9))
			{
				if (bParam1)
				{
				}
				else if (!BitTest(Global_2667185, 10))
				{
					MISC::SET_BIT(&Global_2667185, 10);
				}
			}
			return;
		default:
	}
}

float func_822(int iParam0)//Position - 0x4D0185
{
	return Global_2621865[iParam0 /*26*/].f_6.f_2;
}

void func_823(int iParam0)//Position - 0x4D0201
{
	struct<2> Var0;
	if (Global_2653177[iParam0 /*2*/].f_1 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_2653177[iParam0 /*2*/].f_1, false);
	}
	Var0 = -1;
	Global_2653177[iParam0 /*2*/] = { Var0 };
	Global_2653177[iParam0 /*2*/].f_1 = 0;
}

void func_824(int iParam0)//Position - 0x4D028F
{
	struct<2> Var0;
	if (Global_1573164[iParam0 /*2*/].f_1 != -1)
	{
		if (VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Global_1573164[iParam0 /*2*/].f_1))
		{
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Global_1573164[iParam0 /*2*/] = { Var0 };
}

void func_825(int iParam0)//Position - 0x4D02D1
{
	Global_1573851 = Global_1573131.f_26.f_4;
	Global_2621865[iParam0 /*26*/].f_1 = 16;
}

int func_826(int iParam0)//Position - 0x4D043F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2653177[iVar0 /*2*/].f_1 != 0)
		{
			if (Global_2653177[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_827(int iParam0)//Position - 0x4D047C
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 13);
}

int func_828(int iParam0)//Position - 0x4D055A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_1573164[iVar0 /*2*/].f_1 != -1)
		{
			if (Global_1573164[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_829(int iParam0)//Position - 0x4D0707
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 13);
}

struct<6> func_830(int iParam0)//Position - 0x4D077A
{
	return Global_2621865[iParam0 /*26*/].f_15.f_3;
}

void func_831(int iParam0)//Position - 0x4D0790
{
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 1);
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 2);
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 3);
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 21);
}

void func_832(int iParam0)//Position - 0x4D0889
{
	Global_1937518.f_3 = iParam0;
}

void func_833()//Position - 0x4D08E4
{
	Global_2666811 = -1;
}

int func_834(struct<3> Param0, float fParam1)//Position - 0x4D08F1
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
		{
			fVar0 = (Global_2621865[iVar1 /*26*/].f_6.f_2 + fParam1);
			if (__LIB_0__.func_394(Global_2621865[iVar1 /*26*/].f_3, Param0, fVar0, 0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		Var2 = { Global_1573169[iVar1 /*8*/].f_1 };
		Var3 = { Global_1573169[iVar1 /*8*/].f_4 };
		fVar4 = Global_1573169[iVar1 /*8*/].f_7;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var3, fVar4, false, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_835(int iParam0)//Position - 0x4D1A79
{
	Global_2715699.f_6320 = iParam0;
}

int func_836()//Position - 0x4D2121
{
	return Global_2666788.f_2;
}

void func_837(var uParam0)//Position - 0x4D315D
{
	float fVar0;
	bool bVar1;
	float fVar2;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_1))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_1);
		bVar1 = false;
		while (bVar1 <= 4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_10[bVar1 /*13*/])))
			{
				if (!BitTest(uParam0->f_3, bVar1))
				{
					fVar2 = (IntToFloat(uParam0->f_10[bVar1 /*13*/].f_12) / 100f);
					if (fVar0 <= (uParam0->f_10[bVar1 /*13*/].f_8 + fVar2) && fVar0 > (uParam0->f_10[bVar1 /*13*/].f_8 - fVar2))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(AUDIO::GET_SOUND_ID(), &(uParam0->f_10[bVar1 /*13*/]), uParam0->f_10[bVar1 /*13*/].f_9, &(uParam0->f_116), false, 0, false);
						MISC::SET_BIT(&(uParam0->f_3), bVar1);
					}
				}
			}
			bVar1++;
		}
	}
}

void func_838(int iParam0)//Position - 0x4D3AB8
{
	int iVar0;
	if (__LIB_12__.func_448(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("MP_M_Freemode_01"))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, 0);
		}
		else if (iVar0 == joaat("MP_F_Freemode_01"))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 3, 0, 0);
		}
	}
}

void func_839(int iParam0)//Position - 0x4D3F55
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
			iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_LEGS_0_0"), &Var0);
			if (iVar1 != Var0.f_3 && iVar2 != Var0.f_4)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 4, 0, 0);
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 2, 1, 0);
			}
		}
	}
}

bool func_840(var uParam0)//Position - 0x4D3FCB
{
	return NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_7);
}

void func_841(int iParam0, var uParam1)//Position - 0x4D3FDF
{
	uParam1->f_7 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
}

int func_842(var uParam0)//Position - 0x4D59D9
{
	if (uParam0->f_406)
	{
		return 1;
	}
	return 0;
}

void func_843(int iParam0)//Position - 0x4D59FE
{
	Global_1931975.f_1764 = iParam0;
}

bool func_844()//Position - 0x4D5AFE
{
	return Global_1931975.f_1764;
}

int func_845()//Position - 0x4D5C64
{
	if (Global_262145.f_10595 /* Tunable: TURN_OFF_SAVE_FAILING_HEIST_CORRECTION */)
	{
		return 0;
	}
	if (__LIB_1__.func_411())
	{
		return 1;
	}
	return 0;
}

int func_846(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4D5EC6
{
	int iVar0;
	if (iParam0 == Global_262145.f_9050 /* Tunable: ROOT_ID_HASH_THE_FLECCA_JOB */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 11;
			}
			else
			{
				iVar0 = 14;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 11;
			}
			else
			{
				iVar0 = 14;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 5;
			}
			else
			{
				iVar0 = 8;
			}
		}
	}
	else if (iParam0 == Global_262145.f_9055 /* Tunable: ROOT_ID_HASH_THE_PRISON_BREAK */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 33;
			}
			else
			{
				iVar0 = 36;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 24;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 27;
			}
			else
			{
				iVar0 = 30;
			}
		}
	}
	else if (iParam0 == Global_262145.f_9062 /* Tunable: ROOT_ID_HASH_THE_HUMANE_LABS_RAID */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 11;
			}
			else
			{
				iVar0 = 14;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 33;
			}
			else
			{
				iVar0 = 36;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 5;
			}
			else
			{
				iVar0 = 8;
			}
		}
	}
	else if (iParam0 == Global_262145.f_9068 /* Tunable: ROOT_ID_HASH_SERIES_A_FUNDING */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 24;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 11;
			}
			else
			{
				iVar0 = 14;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 27;
			}
			else
			{
				iVar0 = 30;
			}
		}
	}
	else if (iParam0 == Global_262145.f_9074 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 33;
			}
			else
			{
				iVar0 = 36;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 24;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 5;
			}
			else
			{
				iVar0 = 8;
			}
		}
	}
	else if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 11;
		}
		else
		{
			iVar0 = 14;
		}
	}
	else if (bParam3)
	{
		if (bParam1)
		{
			iVar0 = 11;
		}
		else
		{
			iVar0 = 14;
		}
	}
	else if (bParam4)
	{
		if (bParam1)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 8;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

int func_847(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4D60BB
{
	int iVar0;
	if (iParam0 == Global_262145.f_9050 /* Tunable: ROOT_ID_HASH_THE_FLECCA_JOB */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 9;
			}
			else
			{
				iVar0 = 12;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 9;
			}
			else
			{
				iVar0 = 12;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 6;
			}
		}
	}
	else if (iParam0 == Global_262145.f_9055 /* Tunable: ROOT_ID_HASH_THE_PRISON_BREAK */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 31;
			}
			else
			{
				iVar0 = 34;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 19;
			}
			else
			{
				iVar0 = 22;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 25;
			}
			else
			{
				iVar0 = 28;
			}
		}
	}
	else if (iParam0 == Global_262145.f_9062 /* Tunable: ROOT_ID_HASH_THE_HUMANE_LABS_RAID */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 9;
			}
			else
			{
				iVar0 = 12;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 31;
			}
			else
			{
				iVar0 = 34;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 6;
			}
		}
	}
	else if (iParam0 == Global_262145.f_9068 /* Tunable: ROOT_ID_HASH_SERIES_A_FUNDING */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 19;
			}
			else
			{
				iVar0 = 22;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 9;
			}
			else
			{
				iVar0 = 12;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 25;
			}
			else
			{
				iVar0 = 28;
			}
		}
	}
	else if (iParam0 == Global_262145.f_9074 /* Tunable: ROOT_ID_HASH_THE_PACIFIC_STANDARD_JOB */)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				iVar0 = 31;
			}
			else
			{
				iVar0 = 34;
			}
		}
		else if (bParam3)
		{
			if (bParam1)
			{
				iVar0 = 19;
			}
			else
			{
				iVar0 = 22;
			}
		}
		else if (bParam4)
		{
			if (bParam1)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 6;
			}
		}
	}
	else if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 9;
		}
		else
		{
			iVar0 = 12;
		}
	}
	else if (bParam3)
	{
		if (bParam1)
		{
			iVar0 = 9;
		}
		else
		{
			iVar0 = 12;
		}
	}
	else if (bParam4)
	{
		if (bParam1)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 6;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

int func_848(var uParam0)//Position - 0x4D62C9
{
	if (uParam0->f_6 != 0)
	{
		return 1;
	}
	return 0;
}

void func_849(var uParam0)//Position - 0x4D6A30
{
	Global_2715699.f_6334 = uParam0;
}

int func_850()//Position - 0x4D6AD3
{
	if (MISC::GET_GAME_TIMER() > Global_2656953)
	{
		return 0;
	}
	return 1;
}

int func_851()//Position - 0x4D7662
{
	var uVar0;
	if (Global_2656982)
	{
		return 0;
	}
	uVar0 = Global_2656982.f_24;
	Global_2656982.f_24 = 0;
	return uVar0;
}

bool func_852()//Position - 0x4D77B0
{
	return Global_1573131.f_3;
}

bool func_853()//Position - 0x4D77BE
{
	return Global_2723612.f_2;
}

int func_854()//Position - 0x4D78B5
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_cloud_mission_loader")) > 0)
	{
		return 1;
	}
	SCRIPT::REQUEST_SCRIPT("net_cloud_mission_loader");
	if (SCRIPT::HAS_SCRIPT_LOADED("net_cloud_mission_loader"))
	{
		SYSTEM::START_NEW_SCRIPT("net_cloud_mission_loader", 2050);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_cloud_mission_loader");
		return 1;
	}
	return 0;
}

void func_855(int iParam0)//Position - 0x4D7A48
{
	Global_2666788.f_2 = iParam0;
}

void func_856(int iParam0)//Position - 0x4D7E79
{
	if (__LIB_12__.func_490(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 15);
}

int func_857(int iParam0)//Position - 0x4D8155
{
	return Global_2621865[iParam0 /*26*/].f_1;
}

int func_858(int iParam0)//Position - 0x4D824A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573850)
	{
		if (iParam0 == Global_1573169[iVar0 /*8*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_859()//Position - 0x4D84B8
{
	return Global_2653167.f_7 != 0;
}

void func_860()//Position - 0x4D84EF
{
	struct<2> Var0;
	Global_2653184 = { Var0 };
}

bool func_861()//Position - 0x4D8501
{
	return Global_2653184 != 0;
}

bool func_862()//Position - 0x4D8692
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	return ((Global_1853348[iVar0 /*834*/].f_267.f_32 > 0 || Global_2689235[iVar0 /*453*/].f_318.f_6 != -1) || BitTest(Global_1853348[iVar0 /*834*/].f_267.f_30, 14));
}

void func_863(int iParam0)//Position - 0x4D89DB
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2653090.f_28[iVar0 /*2*/] == iParam0)
		{
			Global_2653090.f_28[iVar0 /*2*/].f_1 = 0;
			Global_2653090.f_28[iVar0 /*2*/] = -1;
			return;
		}
		iVar0++;
	}
}

void func_864(int iParam0)//Position - 0x4D8B6B
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	fVar1 = 0f;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_2653090[iParam0 /*5*/].f_1[iVar0 /*3*/].f_1 > fVar1)
		{
			fVar1 = Global_2653090[iParam0 /*5*/].f_1[iVar0 /*3*/].f_1;
		}
		iVar0++;
	}
	Global_2653090[iParam0 /*5*/] = fVar1;
}

void func_865(int iParam0, var uParam1)//Position - 0x4D8C47
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2653090.f_28[iVar0 /*2*/] == iParam0)
		{
			Global_2653090.f_28[iVar0 /*2*/].f_1 = uParam1;
			return;
		}
		if (iVar1 == -1)
		{
			if (Global_2653090.f_28[iVar0 /*2*/] == -1)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_2653090.f_28[iVar1 /*2*/] = iParam0;
	Global_2653090.f_28[iVar1 /*2*/].f_1 = uParam1;
}

int func_866(int iParam0)//Position - 0x4D8F6D
{
	return Global_1573860[iParam0 /*4*/].f_2;
}

bool func_867(int iParam0)//Position - 0x4D925A
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 15);
}

void func_868(var uParam0)//Position - 0x4D9298
{
	if (__LIB_2__.func_12(uParam0->f_1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return;
	}
	switch (uParam0->f_2)
	{
		case 63:
			if (uParam0->f_1 < 2018)
			{
				if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
					{
						if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 14))
						{
							Global_2715699.f_3351.f_2 = Global_794709.f_4[uParam0->f_1 /*88*/].f_65;
							Global_2715699.f_3351.f_2.f_1 = Global_794709.f_4[uParam0->f_1 /*88*/].f_68;
							Global_2715699.f_3351.f_2.f_3 = Global_794709.f_4[uParam0->f_1 /*88*/].f_70;
							Global_2715699.f_3351.f_2.f_4 = Global_794709.f_4[uParam0->f_1 /*88*/].f_75;
							Global_2715699.f_3351.f_2.f_2 = 0;
						}
						MISC::SET_BIT(&(Global_794709.f_4[uParam0->f_1 /*88*/].f_76), 14);
						return;
					}
				}
			}
			return;
		case 62:
			if (uParam0->f_1 < 100)
			{
				if (BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
					{
						if (!BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 14))
						{
							Global_2715699.f_3351.f_2 = Global_998606.f_604[uParam0->f_1 /*88*/].f_65;
							Global_2715699.f_3351.f_2.f_1 = Global_998606.f_604[uParam0->f_1 /*88*/].f_68;
							Global_2715699.f_3351.f_2.f_3 = Global_998606.f_604[uParam0->f_1 /*88*/].f_70;
							Global_2715699.f_3351.f_2.f_4 = Global_998606.f_604[uParam0->f_1 /*88*/].f_75;
							Global_2715699.f_3351.f_2.f_2 = 1;
						}
						MISC::SET_BIT(&(Global_998606.f_604[uParam0->f_1 /*88*/].f_76), 14);
						return;
					}
				}
			}
			return;
		default:
	}
}

void func_869()//Position - 0x4D947C
{
	if (!BitTest(Global_2815059.f_1796, 4))
	{
		MISC::SET_BIT(&(Global_2815059.f_1796), 4);
	}
}

void func_870(int iParam0)//Position - 0x4D952B
{
	if (!BitTest(Global_2621865[iParam0 /*26*/].f_13, 5))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 5);
}

void func_871(int iParam0)//Position - 0x4D962F
{
	struct<3> Var0;
	Var0 = 2;
	Var0.f_1 = -1;
	Global_1573886[iParam0 /*3*/] = { Var0 };
	Global_1573886[iParam0 /*3*/].f_2 = NETWORK::GET_NETWORK_TIME();
}

int func_872(int iParam0, int iParam1)//Position - 0x4D9660
{
	int iVar0;
	if (Global_1573911 == 0)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
		case 0:
			break;
		case 2:
			return 0;
		default:
			return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573911)
	{
		if (Global_1573886[iVar0 /*3*/].f_1 == iParam0)
		{
			if (Global_1573886[iVar0 /*3*/] == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_873(bool bParam0)//Position - 0x4D96D1
{
	Global_2621837.f_1 = 0;
	Global_2621837.f_2 = 0;
	Global_2621837.f_3 = 0;
	Global_2621837.f_4 = 0;
	Global_2621837.f_5 = 0;
	Global_2621837.f_6 = 0;
	Global_2621837.f_7 = 0;
	Global_2621837.f_8 = 0;
	if (bParam0)
	{
	}
}

void func_874()//Position - 0x4D9716
{
	struct<9> Var0;
	var uVar1;
	Global_1573851 = { Var0 };
	Global_1573851.f_3 = NETWORK::GET_NETWORK_TIME();
	Global_1573851.f_6 = NETWORK::GET_NETWORK_TIME();
	Global_1573851.f_7 = NETWORK::GET_NETWORK_TIME();
	Global_1573851.f_8 = NETWORK::GET_NETWORK_TIME();
	Global_2653066 = uVar1;
	Global_1836751.f_74 = 0;
}

void func_875()//Position - 0x4D97D1
{
	struct<66> Var0;
	Var0.f_1.f_53 = -1;
	Var0.f_1.f_55 = -1;
	Var0.f_1.f_56 = -1;
	Var0.f_1.f_57 = -1;
	Var0.f_1.f_58 = -1;
	Var0.f_1.f_59 = -1;
	Var0.f_1.f_60 = -1;
	Var0.f_1.f_62 = 16777215;
	Var0.f_1.f_64 = 2;
	Global_2660249 = { Var0 };
	Global_2660249 = 0;
	StringCopy(&(Global_2660249.f_1), "", 24);
	StringCopy(&(Global_2660249.f_1.f_6), "", 24);
	StringCopy(&(Global_2660249.f_1.f_12), "", 64);
	StringCopy(&(Global_2660249.f_1.f_28), "", 64);
	Global_2660249.f_1.f_44 = { 0f, 0f, 0f };
	Global_2660249.f_1.f_47 = { 0f, 0f, 0f };
	Global_2660249.f_1.f_63 = 0;
}

bool func_876(int iParam0)//Position - 0x4D9908
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 7);
}

void func_877(int iParam0)//Position - 0x4D9945
{
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 9);
}

int func_878(int iParam0)//Position - 0x4D995D
{
	struct<10> Var0;
	Var0 = { __LIB_9__.func_268(iParam0) };
	if (Global_1573982 != 0)
	{
		return 0;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(Global_2660315.f_3), &(Var0.f_3)))
	{
		return 0;
	}
	return 1;
}

int func_879(int iParam0)//Position - 0x4D99B0
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573025)
	{
		if (Global_1572864[iVar0 /*5*/] == 1)
		{
			if (Global_1572864[iVar0 /*5*/].f_1 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_880()//Position - 0x4D9B1C
{
	Global_1573982 = 1;
	Global_1573983 = 0;
	StringCopy(&(Global_1573983.f_1), "", 24);
}

void func_881(int iParam0)//Position - 0x4D9B39
{
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 9);
}

void func_882()//Position - 0x4D9BE7
{
	Global_1573851.f_6 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
}

var func_883(int iParam0)//Position - 0x4D9CCE
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 24);
}

var func_884(int iParam0)//Position - 0x4D9CE3
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 23);
}

bool func_885(int iParam0)//Position - 0x4D9CF8
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 22);
}

void func_886()//Position - 0x4D9D1F
{
	if (!Global_2621837.f_1)
	{
		return;
	}
	Global_2621837.f_8 = 1;
}

bool func_887(int iParam0)//Position - 0x4D9E72
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 3);
}

int func_888(int iParam0)//Position - 0x4DA585
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573025)
	{
		if (Global_1572864[iVar0 /*5*/] == 2)
		{
			if (Global_1572864[iVar0 /*5*/].f_1 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_889(int iParam0)//Position - 0x4DA5EC
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573025)
	{
		if (Global_1572864[iVar0 /*5*/] == 0)
		{
			if (Global_1572864[iVar0 /*5*/].f_1 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_890(int iParam0)//Position - 0x4DA64F
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573025)
	{
		if (Global_1572864[iVar0 /*5*/] == 4)
		{
			if (Global_1572864[iVar0 /*5*/].f_1 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_891(int iParam0)//Position - 0x4DA699
{
	int iVar0;
	int iVar1;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573025)
	{
		if (Global_1572864[iVar1 /*5*/] == 3)
		{
			if (Global_1572864[iVar1 /*5*/].f_1 == iParam0)
			{
				return Global_1572864[iVar1 /*5*/].f_2;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_892(int iParam0)//Position - 0x4DAB60
{
	return Global_2621865[iParam0 /*26*/].f_14;
}

bool func_893(int iParam0)//Position - 0x4DAC67
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 12);
}

bool func_894(int iParam0)//Position - 0x4DB1D0
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 23);
}

int func_895(int iParam0)//Position - 0x4DB1E5
{
	if (!Global_1573131.f_26.f_1)
	{
		return 0;
	}
	if (!Global_1573131.f_26.f_2)
	{
		return 0;
	}
	if (!Global_1573131.f_26.f_4 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_896(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x4DB597
{
	int iVar0;
	bool bVar1;
	if (!__LIB_1__.func_264(bParam0, 0, 1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		return 0;
	}
	if (iParam7 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = bParam0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_22__.func_948(iVar0))
		{
			if (iParam7 == Global_2657492.f_356[iVar0 /*75*/].f_2 && MISC::ARE_STRINGS_EQUAL(&uParam1, &(Global_2657492.f_356[iVar0 /*75*/].f_10)))
			{
				if (BitTest(Global_2657492.f_356[iVar0 /*75*/].f_3, bVar1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_897()//Position - 0x4DB62C
{
	return NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_1573851.f_6);
}

void func_898()//Position - 0x4DB662
{
	Global_1888234.f_71 = 1;
}

int func_899(int iParam0)//Position - 0x4DB6AB
{
	if (!Global_1573131.f_26.f_1)
	{
		return 0;
	}
	if (!Global_1573131.f_26.f_4 == iParam0)
	{
		return 0;
	}
	return 1;
}

void func_900()//Position - 0x4DB6D7
{
	Global_1573851.f_3 = NETWORK::GET_NETWORK_TIME();
	Global_2653066 = 0;
}

int func_901()//Position - 0x4DB6EE
{
	if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1573851.f_3))
	{
		return 0;
	}
	if (MISC::GET_FRAME_COUNT() < Global_2653066)
	{
		return 0;
	}
	return 1;
}

bool func_902()//Position - 0x4DB71B
{
	return Global_2621837.f_7;
}

var func_903()//Position - 0x4DB766
{
	return Global_2621837.f_6;
}

int func_904(int iParam0)//Position - 0x4DB774
{
	if (BitTest(Global_1888862[iParam0 /*120*/].f_14, 2))
	{
		return 1;
	}
	return 0;
}

void func_905(int iParam0)//Position - 0x4DB8CA
{
	Global_1573851.f_3 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_2653066 = MISC::GET_FRAME_COUNT() + 30;
}

void func_906()//Position - 0x4DB8EC
{
	Global_2621837.f_8 = 0;
}

void func_907()//Position - 0x4DB90C
{
	Global_1573851.f_8 = NETWORK::GET_NETWORK_TIME();
}

bool func_908()//Position - 0x4DB91E
{
	return NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_1573851.f_8);
}

bool func_909()//Position - 0x4DB934
{
	return Global_2621837.f_5;
}

void func_910()//Position - 0x4DBB2C
{
	Global_1573851.f_8 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 180000);
}

void func_911()//Position - 0x4DBB46
{
	if (!Global_2621837.f_1)
	{
		return;
	}
	Global_2621837.f_3 = 0;
	Global_2621837.f_4 = 1;
}

void func_912()//Position - 0x4DBB96
{
	Global_1573851.f_7 = NETWORK::GET_NETWORK_TIME();
}

bool func_913()//Position - 0x4DBBA8
{
	return NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_1573851.f_7);
}

int func_914(int iParam0, int iParam1, int iParam2)//Position - 0x4DBC04
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	*iParam1 = 0;
	*iParam2 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573025)
	{
		if (Global_1572864[iVar0 /*5*/] == 5)
		{
			if (Global_1572864[iVar0 /*5*/].f_1 == iParam0)
			{
				*iParam1 = Global_1572864[iVar0 /*5*/].f_2;
				*iParam2 = Global_1572864[iVar0 /*5*/].f_3;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_915()//Position - 0x4DBEB7
{
	Global_1573851.f_7 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 50000);
}

var func_916()//Position - 0x4DC0CA
{
	return Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_22;
}

bool func_917(int iParam0)//Position - 0x4DC0DE
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 25);
}

int func_918(int iParam0)//Position - 0x4DC28D
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (Global_2681762.f_4[iVar0 /*2*/] == 3)
	{
		return 0;
	}
	iVar1 = Global_2681762.f_4[iVar0 /*2*/].f_1;
	if (iVar1 == -1)
	{
		return 0;
	}
	return __LIB_9__.func_816(iVar1);
}

void func_919(int iParam0, struct<3> Param1)//Position - 0x4DC2C9
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Var0 = { Param1 };
	Var0.f_2 = (Var0.f_2 + 1.7f);
	iVar1 = 36;
	iVar2 = 120;
	iVar3 = 255;
	fVar4 = 10f;
	fVar5 = 5f;
	fVar6 = 64f;
	if (iParam0 == 1 || iParam0 == 207)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(Var0, iVar1, iVar2, iVar3, fVar4, fVar5, fVar6);
		return;
	}
	if (((iParam0 == 126 || iParam0 == 10) || iParam0 == 15) || iParam0 == 16)
	{
		iVar1 = 36;
		iVar2 = 120;
		iVar3 = 255;
		fVar4 = 10f;
		fVar5 = 5f;
		fVar6 = 64f;
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(Var0, iVar1, iVar2, iVar3, fVar4, fVar5, fVar6);
		return;
	}
	if (iParam0 == 134)
	{
		iVar1 = 36;
		iVar2 = 120;
		iVar3 = 255;
		fVar4 = 10f;
		fVar5 = 5f;
		fVar6 = 64f;
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(Var0, iVar1, iVar2, iVar3, fVar4, fVar5, fVar6);
		return;
	}
	if (iParam0 == 12)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(Var0, iVar1, iVar2, iVar3, fVar4, fVar5, fVar6);
		return;
	}
	if (iParam0 == 21)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(Var0, iVar1, iVar2, iVar3, fVar4, fVar5, fVar6);
		return;
	}
	iVar1 = 36;
	iVar2 = 120;
	iVar3 = 255;
	fVar4 = 10f;
	fVar5 = 5f;
	fVar6 = 64f;
	GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(Var0, iVar1, iVar2, iVar3, fVar4, fVar5, fVar6);
}

int func_920(int iParam0)//Position - 0x4DC432
{
	return Global_2621865[iParam0 /*26*/].f_6;
}

int func_921(int iParam0)//Position - 0x4DC444
{
	if (BitTest(Global_2621865[iParam0 /*26*/].f_12, 9))
	{
		return 0;
	}
	return 1;
}

bool func_922()//Position - 0x4DC461
{
	return Global_2621837.f_3;
}

int func_923(int iParam0)//Position - 0x4DCA43
{
	if (BitTest(Global_2621865[iParam0 /*26*/].f_13, 1))
	{
		return 0;
	}
	if (BitTest(Global_2621865[iParam0 /*26*/].f_13, 2))
	{
		return 1;
	}
	if (BitTest(Global_2621865[iParam0 /*26*/].f_13, 3))
	{
		return 2;
	}
	return -1;
}

bool func_924()//Position - 0x4DCABF
{
	return Global_1573131.f_11;
}

var func_925()//Position - 0x4DCDA7
{
	return Global_2621837.f_8;
}

bool func_926()//Position - 0x4DCDB5
{
	return Global_2621837.f_2;
}

bool func_927(int iParam0)//Position - 0x4DCE4A
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 10);
}

int func_928(bool bParam0)//Position - 0x4DCE97
{
	if (bParam0)
	{
	}
	return Global_2714762.f_9;
}

bool func_929(int iParam0)//Position - 0x4DD21B
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_12, 20);
}

int func_930()//Position - 0x4DD267
{
	if (Global_2653167.f_9 == 0)
	{
		return 0;
	}
	if (MISC::GET_GAME_TIMER() > Global_2653167.f_9)
	{
		Global_2653167.f_9 = 0;
		return 0;
	}
	return 1;
}

void func_931(int iParam0)//Position - 0x4DD36E
{
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 10);
}

void func_932(int iParam0)//Position - 0x4DD386
{
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 10);
}

bool func_933(int iParam0)//Position - 0x4DD39E
{
	return BitTest(Global_2621865[iParam0 /*26*/].f_13, 10);
}

int func_934(int iParam0)//Position - 0x4DD53C
{
	switch (iParam0)
	{
		case 0:
			return 9120;
		case 1:
			return 9121;
		case 2:
			return 9122;
		default:
	}
	return 9116;
}

int func_935(int iParam0)//Position - 0x4DD572
{
	switch (iParam0)
	{
		case 0:
			return 50;
		case 1:
			return 51;
		case 2:
			return 52;
		default:
	}
	return 43;
}

char* func_936(int iParam0)//Position - 0x4DD5A4
{
	switch (iParam0)
	{
		case 1:
			return "Arm_Wrestling_Icon";
		case 4:
			return "Darts_Icon";
		case 22:
			return "Pilot_School_Icon";
		case 8:
			return "Golf_Icon";
		case 14:
			return "Shooting_Range_Icon";
		case 16:
			return "Tennis_Icon";
		case 2:
			return "BaseJump_Icon";
		case 5:
			return "Deathmatch_Marker_256";
		case 18:
			return "TeamDeathmatch_Icon";
		case 17:
			return "VehicleDeathmatch_Icon";
		case 7:
			return "GangAttack_Icon";
		case 3:
			return "Custom_Icon";
		case 15:
			return "Survival_Icon";
		case 12:
			return "Land_Race_Icon";
		case 11:
			return "Sea_Race_Icon";
		case 10:
			return "Air_Race_Icon";
		case 19:
			return "Bike_Race_Icon";
		case 20:
			return "Foot_Race_Icon";
		case 21:
			return "Capture_The_Flag_Icon";
		case 23:
			return "Last_Team_Standing_Icon";
		case 24:
			return "Stunt_Mode_Icon";
		case 25:
			return "Featured_Series";
		case 26:
			return "Adversary_4";
		case 27:
			return "Adversary_8";
		case 28:
			return "Adversary_10";
		case 29:
			return "Adversary_12";
		case 30:
			return "Adversary_16";
		case 31:
			return "Stunt_Premium_Icon";
		case 32:
			return "Special_Vehicle_Race_Series";
		case 33:
			return "Challenge_Series";
		case 34:
			return "Adversary_Bunker";
		case 35:
			return "Transform_Race_Icon";
		case 36:
			return "Target_race";
		case 37:
			return "Hotring_circuit";
		case 38:
			return "Arena_Series" /* GXT: Arena War Series */;
		case 39:
			return "Land_Race_Icon";
		case 40:
			return "Survival_Icon";
		case 41:
			return "King_Of_The_Hill";
		case 42:
			return "King_Of_The_Hill_Teams";
		case 43:
			return "Open_Wheel_Race";
		case 45:
			return "Pursuit_Series";
		case 44:
			return "Street_Race_Series";
		case 46:
			return "Community_Series_Icon";
		case 47:
			return "Cayo_Perico_Icon";
		default:
	}
	return "Off_Road_Race_Icon";
}

var func_937(int iParam0)//Position - 0x4DD820
{
	return Global_2621865[iParam0 /*26*/].f_6.f_3;
}

bool func_938()//Position - 0x4DD834
{
	return Global_1573131.f_13;
}

int func_939(int iParam0)//Position - 0x4DD842
{
	struct<10> Var0;
	var uVar1;
	var uVar2;
	if (!__LIB_3__.func_778())
	{
		return 0;
	}
	Var0 = { __LIB_9__.func_268(iParam0) };
	MemCopy(&uVar1, {__LIB_12__.func_534()}, 8);
	MemCopy(&uVar2, {Var0.f_3}, 8);
	if (!MISC::ARE_STRINGS_EQUAL(&uVar1, &uVar2))
	{
		return 0;
	}
	return 1;
}

void func_940(int iParam0, int iParam1, struct<6> Param2, struct<16> Param3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x4DE167
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_1)
	{
		return;
	}
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/] = iParam1;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_5 = { Param2 };
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_27 = bParam4;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_11 = { Param3 };
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_28 = bParam5;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_29 = iParam6;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_30 = iParam7;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_31 = iParam8;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_32 = iParam9;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_33 = iParam10;
}

void func_941(int iParam0, int iParam1)//Position - 0x4DE601
{
	if (iParam1 != 4)
	{
		if (iParam1 == 2)
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
		}
		else if (iParam1 == 3)
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
		}
		else if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
		}
		else if (iParam1 == 1)
		{
			MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
			MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 17);
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 18);
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 19);
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 20);
	}
}

char* func_942(int iParam0)//Position - 0x4DE773
{
	switch (iParam0)
	{
		case 0:
			return "CLM_ERROR_RANK" /* GXT: Your Rank is too low. */;
		case 1:
			return "CLM_ERROR_TIME" /* GXT: This Job is now closed until */;
		case 2:
			return "CLM_ERROR_WANTED" /* GXT: You have a Wanted Level. */;
		case 3:
			return "CLM_ERROR_CASH" /* GXT: You cannot afford to play. */;
		case 4:
			return "";
		default:
	}
	return "";
}

int func_943(int iParam0)//Position - 0x4DE7CC
{
	bool bVar0;
	if (!__LIB_12__.func_500(iParam0))
	{
		bVar0 = false;
		bVar0 = CLOCK::GET_CLOCK_HOURS();
		while (bVar0 <= 23)
		{
			if (BitTest(Global_2621865[iParam0 /*26*/].f_6.f_4, bVar0))
			{
				return bVar0;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 23)
		{
			if (BitTest(Global_2621865[iParam0 /*26*/].f_6.f_4, bVar0))
			{
				return bVar0;
			}
			bVar0++;
		}
		return bVar0;
	}
	return -1;
}

var func_944(int iParam0)//Position - 0x4DEE23
{
	return Global_2621865[iParam0 /*26*/].f_6.f_1;
}

void func_945(int iParam0)//Position - 0x4DEEA1
{
	Global_1659366[iParam0 /*11*/] = 3;
}

void func_946(int iParam0)//Position - 0x4DEEB2
{
	Global_1659366[iParam0 /*11*/] = 2;
}

bool func_947()//Position - 0x4DF294
{
	return Global_1573131.f_7;
}

int func_948(int iParam0, int iParam1)//Position - 0x4DF679
{
	if (iParam1 == 40)
	{
		return 2;
	}
	if (__LIB_12__.func_472(iParam0))
	{
		return 6;
	}
	if (__LIB_12__.func_519(iParam0))
	{
		return 1;
	}
	if (iParam1 == PLAYER::PLAYER_ID())
	{
		return 5;
	}
	if (iParam1 == 63)
	{
		return 3;
	}
	if (iParam1 == 62)
	{
		return 4;
	}
	return 0;
}

int func_949(int iParam0)//Position - 0x4DF6CA
{
	if (__LIB_12__.func_488(iParam0))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 22);
	return 1;
}

int func_950(int iParam0)//Position - 0x4DF75E
{
	if (!__LIB_12__.func_488(iParam0))
	{
		return 0;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 22);
	return 1;
}

void func_951(int iParam0)//Position - 0x4DF7C2
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	Var0 = { __LIB_12__.func_470(iParam0) };
	fVar1 = Var0.f_2;
	fVar2 = 0f;
	Var0.f_2 = (Var0.f_2 + 2f);
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar2, false, false))
	{
		return;
	}
	fVar3 = (fVar1 - fVar2);
	if (fVar3 < 0.3f && fVar3 > -0.3f)
	{
		return;
	}
	if (fVar3 < -3f)
	{
		return;
	}
}

bool func_952()//Position - 0x4DF82A
{
	return Global_2714762.f_688;
}

void func_953(int iParam0)//Position - 0x4DF934
{
	if (!__LIB_12__.func_496(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 19);
	if (Global_2621540 > 0)
	{
		Global_2621540 = (Global_2621540 - 1);
	}
}

float func_954(int iParam0)//Position - 0x4DFA0A
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false) };
	Var1 = { Global_2621865[iParam0 /*26*/].f_3 };
	fVar2 = 0f;
	Var0.f_2 = (Var0.f_2 - 1f);
	fVar2 = (Var0.f_2 - Var1.f_2);
	if (fVar2 < -1f || fVar2 > 3f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
}

void func_955(int iParam0)//Position - 0x4DFAA9
{
	if (!__LIB_12__.func_475(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 16);
}

void func_956(int iParam0)//Position - 0x4DFBEA
{
	if (!__LIB_12__.func_486(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 25);
}

void func_957(int iParam0)//Position - 0x4DFC0F
{
	if (__LIB_12__.func_486(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 25);
}

void func_958(int iParam0)//Position - 0x4DFC9B
{
	if (!__LIB_12__.func_487(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 24);
}

void func_959(int iParam0)//Position - 0x4DFCC0
{
	if (__LIB_12__.func_487(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_13), 24);
}

void func_960(int iParam0, int iParam1)//Position - 0x4DFF7F
{
	struct<10> Var0;
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		default:
			return;
	}
	Var0 = { __LIB_9__.func_268(iParam0) };
	if (Var0.f_9 == -1)
	{
		return;
	}
	if (__LIB_9__.func_267(&Var0))
	{
		return;
	}
	Global_2621865[iParam0 /*26*/].f_15.f_9 = -1;
}

int func_961(int iParam0)//Position - 0x4DFFDB
{
	return Global_2653067[iParam0];
}

int func_962(int iParam0)//Position - 0x4DFFEB
{
	return Global_1573860[iParam0 /*4*/];
}

void func_963(int iParam0, struct<3> Param1)//Position - 0x4E090F
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_1)
	{
		return;
	}
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_1 = 1;
	Global_1924338[iVar0 /*199*/].f_91[iParam0 /*34*/].f_2 = { Param1 };
}

void func_964(int iParam0)//Position - 0x4E095A
{
	Global_1659366[iParam0 /*11*/] = 5;
}

int func_965()//Position - 0x4E29DB
{
	int iVar0;
	iVar0 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 12000);
	return iVar0;
}

void func_966(int iParam0, int iParam1)//Position - 0x4E3480
{
	struct<75> Var0;
	Var0 = { Global_2653243[iParam0 /*75*/] };
	Global_2653243[iParam0 /*75*/] = { Global_2653243[iParam1 /*75*/] };
	Global_2653243[iParam1 /*75*/] = { Var0 };
}

bool func_967(int iParam0)//Position - 0x4E3719
{
	return Global_2655137[iParam0 /*99*/].f_1;
}

struct<16> func_968(int iParam0)//Position - 0x4E372B
{
	struct<16> Var0;
	if (__LIB_0__.func_53())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2655137[iParam0 /*99*/].f_31)))
		{
			return Global_2655137[iParam0 /*99*/].f_31;
		}
	}
	Var0 = { Global_2655137[iParam0 /*99*/].f_15 };
	return Var0;
}

int func_969(int iParam0)//Position - 0x4E3773
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < Global_1659410)
	{
		if (Global_1659409 >= 12)
		{
			return iVar0;
		}
		if (Global_2654152[iVar1 /*82*/])
		{
			bVar2 = false;
			if (iParam0 == -1)
			{
				bVar2 = true;
			}
			if (!bVar2)
			{
				if (iParam0 == Global_2654152[iVar1 /*82*/].f_54)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!__LIB_9__.func_829(iVar1))
				{
					Global_2653243[Global_1659409 /*75*/].f_5 = 0;
					Global_2653243[Global_1659409 /*75*/] = 4;
					if (Global_2654152[iVar1 /*82*/].f_11)
					{
						Global_2653243[Global_1659409 /*75*/].f_1 = Global_2654152[iVar1 /*82*/].f_9;
						MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 4);
					}
					else
					{
						Global_2653243[Global_1659409 /*75*/].f_1 = Global_2654152[iVar1 /*82*/].f_10;
					}
					Global_2653243[Global_1659409 /*75*/].f_2 = Global_2654152[iVar1 /*82*/].f_13;
					Global_2653243[Global_1659409 /*75*/].f_3 = Global_2654152[iVar1 /*82*/].f_14;
					Global_2653243[Global_1659409 /*75*/].f_4 = Global_2654152[iVar1 /*82*/].f_12;
					Global_2653243[Global_1659409 /*75*/].f_6 = { Global_2654152[iVar1 /*82*/].f_6 };
					Global_2653243[Global_1659409 /*75*/].f_25 = { Global_2654152[iVar1 /*82*/].f_21 };
					Global_2653243[Global_1659409 /*75*/].f_41 = { Global_2654152[iVar1 /*82*/].f_37 };
					Global_2653243[Global_1659409 /*75*/].f_57 = Global_2654152[iVar1 /*82*/].f_15;
					Global_2653243[Global_1659409 /*75*/].f_64 = Global_2654152[iVar1 /*82*/].f_62;
					Global_2653243[Global_1659409 /*75*/].f_65 = Global_2654152[iVar1 /*82*/].f_63;
					Global_2653243[Global_1659409 /*75*/].f_72 = Global_2654152[iVar1 /*82*/].f_75;
					Global_2653243[Global_1659409 /*75*/].f_58 = { Global_2654152[iVar1 /*82*/].f_56 };
					Global_2653243[Global_1659409 /*75*/].f_66 = Global_2654152[iVar1 /*82*/].f_68;
					Global_2653243[Global_1659409 /*75*/].f_67 = Global_2654152[iVar1 /*82*/].f_69;
					Global_2653243[Global_1659409 /*75*/].f_68 = Global_2654152[iVar1 /*82*/].f_70;
					Global_2653243[Global_1659409 /*75*/].f_69 = Global_2654152[iVar1 /*82*/].f_72;
					Global_2653243[Global_1659409 /*75*/].f_70 = Global_2654152[iVar1 /*82*/].f_73;
					Global_2653243[Global_1659409 /*75*/].f_71 = Global_2654152[iVar1 /*82*/].f_74;
					if (!__LIB_9__.func_820(iVar1))
					{
						MISC::SET_BIT(&(Global_2653243[Global_1659409 /*75*/].f_5), 3);
					}
					Global_1659409++;
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_970(int iParam0)//Position - 0x4E3CD8
{
	return Global_2656326[iParam0 /*46*/].f_3;
}

int func_971(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4E4061
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = 0;
	iVar1 = -1;
	Var2 = { Global_1853348[iParam0 /*834*/].f_36.f_10 };
	iVar0 = 0;
	while (iVar0 < Global_1659409)
	{
		iVar1 = Global_2653243[iVar0 /*75*/].f_1;
		if (Global_2653243[iVar0 /*75*/].f_2 == iParam1 && Global_2653243[iVar0 /*75*/].f_4 == iParam2)
		{
			Var3 = { Global_1853348[iVar1 /*834*/].f_36.f_10 };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var3, true) <= 0.3f)
			{
				if (bParam3)
				{
					MISC::SET_BIT(&(Global_2653243[iVar0 /*75*/].f_5), 1);
				}
				if (BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 7))
				{
					MISC::SET_BIT(&(Global_2653243[iVar0 /*75*/].f_5), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_972(int iParam0)//Position - 0x4E4128
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = Global_1853348[iParam0 /*834*/].f_11;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659409)
	{
		iVar2 = Global_2653243[iVar0 /*75*/].f_4;
		if (iVar1 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_973(int iParam0)//Position - 0x4E4170
{
	switch (iParam0)
	{
		case 6:
			return 0;
		default:
	}
	if (__LIB_9__.func_338(0))
	{
		return 0;
	}
	return 1;
}

int func_974(int iParam0, int iParam1, int iParam2)//Position - 0x4E426C
{
	if (Global_1659409 >= 12)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	Global_2653243[Global_1659409 /*75*/] = iParam0;
	Global_2653243[Global_1659409 /*75*/].f_2 = iParam2;
	Global_2653243[Global_1659409 /*75*/].f_3 = -1;
	Global_2653243[Global_1659409 /*75*/].f_1 = iParam1;
	Global_1659409++;
	return 1;
}

int func_975(var uParam0)//Position - 0x4E445C
{
	int iVar0;
	if (!uParam0->f_901 == Global_1659409)
	{
		return 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!(uParam0[iVar0 /*75*/])->f_1 == Global_2653243[iVar0 /*75*/].f_1 || !(uParam0[iVar0 /*75*/])->f_5 == Global_2653243[iVar0 /*75*/].f_5)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_976()//Position - 0x4E44C2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_2653243[iVar0 /*75*/] = 0;
		Global_2653243[iVar0 /*75*/].f_1 = 0;
		Global_2653243[iVar0 /*75*/].f_2 = 0;
		Global_2653243[iVar0 /*75*/].f_3 = -1;
		Global_2653243[iVar0 /*75*/].f_4 = -1;
		Global_2653243[iVar0 /*75*/].f_5 = 0;
		Global_2653243[iVar0 /*75*/].f_6 = { 0f, 0f, 0f };
		StringCopy(&(Global_2653243[iVar0 /*75*/].f_9), "", 64);
		StringCopy(&(Global_2653243[iVar0 /*75*/].f_25), "", 64);
		StringCopy(&(Global_2653243[iVar0 /*75*/].f_41), "", 64);
		Global_2653243[iVar0 /*75*/].f_57 = 0;
		Global_2653243[iVar0 /*75*/].f_66 = 0;
		Global_2653243[iVar0 /*75*/].f_67 = 0;
		Global_2653243[iVar0 /*75*/].f_68 = -1;
		Global_2653243[iVar0 /*75*/].f_69 = 0;
		Global_2653243[iVar0 /*75*/].f_70 = -1;
		Global_2653243[iVar0 /*75*/].f_71 = 0;
		Global_2653243[iVar0 /*75*/].f_73 = 0;
		iVar0++;
	}
	Global_1659409 = 0;
}

void func_977()//Position - 0x4E4E8D
{
	Global_22667 = 1;
}

void func_978()//Position - 0x4E4E99
{
	if (Global_8941[3 /*2811*/][5 /*281*/].f_259 == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", "Phone_SoundSet_Default", true);
	}
}

void func_979(var uParam0)//Position - 0x4E4EC2
{
	Global_22663 = 2;
	Global_22662 = uParam0;
}

int func_980(int iParam0)//Position - 0x4E516E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9493[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_981()//Position - 0x4E519E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::THEFEED_SET_RGBA_PARAMETER_FOR_NEXT_MESSAGE(iVar0, iVar1, iVar2, iVar3);
	iVar4 = 1;
	HUD::THEFEED_SET_FLASH_DURATION_PARAMETER_FOR_NEXT_MESSAGE(iVar4);
	bVar5 = false;
	if (Global_113386.f_14051[Global_20266 /*20*/].f_10 == 1)
	{
		bVar5 = true;
	}
	HUD::THEFEED_SET_VIBRATE_PARAMETER_FOR_NEXT_MESSAGE(bVar5);
}

void func_982(char* sParam0, var uParam1)//Position - 0x4E53A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		StringCopy(uParam1[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0);
	iVar2 = 0;
	iVar3 = 63;
	iVar0 = 0;
	if (iVar1 > 0)
	{
		while (iVar1 >= iVar3 && iVar0 < 8)
		{
			StringCopy(uParam1[iVar0 /*16*/], HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, iVar2, iVar3), 64);
			iVar0++;
			iVar2 = iVar3;
			iVar3 += 63;
		}
		if (iVar0 < 8)
		{
			if (iVar1 > iVar2 && iVar1 < iVar3)
			{
				StringCopy(uParam1[iVar0 /*16*/], HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(sParam0, iVar2, iVar1), 64);
				iVar0++;
			}
		}
	}
}

char* func_983(int iParam0)//Position - 0x4E5902
{
	switch (iParam0)
	{
		case 0:
			return "FMCI_CHCKPNT_N" /* GXT: Scramble */;
		case 1:
			return "FMCI_HDTHD_N" /* GXT: Head-to-Head Race */;
		case 2:
			return "FMCI_SPRINT_N" /* GXT: Sprint */;
		default:
	}
	return "";
}

void func_984()//Position - 0x4E630F
{
	Global_22667 = 0;
}

var func_985()//Position - 0x4E631B
{
	return Global_1659442;
}

var func_986(bool bParam0)//Position - 0x4E76F9
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_11.f_1, 3);
}

var func_987(bool bParam0)//Position - 0x4E7710
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_11.f_1, 2);
}

void func_988(bool bParam0)//Position - 0x4E7AA1
{
	int iVar0;
	if (bParam0)
	{
		if (!MISC::IS_XBOX360_VERSION())
		{
			return;
		}
	}
	if (__LIB_0__.func_53())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < Global_2657487)
	{
		return;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return;
	}
	if (bParam0)
	{
		__LIB_0__.func_151("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		__LIB_0__.func_151("INV_RESTRICT" /* GXT: You have received an Invite to user-generated content which is currently restricted by your control settings. */, -1);
	}
	Global_2657487 = (iVar0 + 1800000);
}

void func_989(int iParam0)//Position - 0x4E845A
{
	Global_2725419 = iParam0;
}

void func_990()//Position - 0x4E84BD
{
	Global_2725858 = 1;
}

void func_991(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x4EBC55
{
	*uParam0 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
	CAM::SET_CAM_PARAMS(*uParam0, Param1, Param2, fParam3, 0, 1, 1, 2);
	CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.25f);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_FAR_CLIP(*uParam0, 500f);
}

void func_992(var uParam0, int iParam1, int iParam2)//Position - 0x4EC0DC
{
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -885.9518f, 223.3702f, 88.5406f };
					uParam0->f_3 = { 26.6167f, 0f, -45.2182f };
					uParam0->f_6 = 49.3611f;
					break;
				case 1:
					*uParam0 = { -1005.929f, 445.3399f, 143.0898f };
					uParam0->f_3 = { 2.6541f, 0.6784f, -131.8131f };
					uParam0->f_6 = 48.691f;
					break;
				case 2:
					*uParam0 = { -680.1154f, 266.1721f, 87.2771f };
					uParam0->f_3 = { 37.4194f, 0f, 53.8767f };
					uParam0->f_6 = 54.6037f;
					break;
				case 3:
					*uParam0 = { -779.2855f, 405.9464f, 106.2266f };
					uParam0->f_3 = { 45.3313f, 0f, -179.6772f };
					uParam0->f_6 = 44.2609f;
					break;
				case 4:
					*uParam0 = { -894.9058f, 157.4258f, 179.9194f };
					uParam0->f_3 = { 1.196f, 0f, -43.6586f };
					uParam0->f_6 = 36.4321f;
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -213.5606f, -1073.0078f, 32.9946f };
					uParam0->f_3 = { 22.7554f, 0f, 28.5746f };
					uParam0->f_6 = 50.0029f;
					break;
				case 1:
					*uParam0 = { -323.6761f, -938.0006f, 33.1388f };
					uParam0->f_3 = { 50.3562f, 0f, -110.0558f };
					uParam0->f_6 = 50.9248f;
					break;
				case 2:
					*uParam0 = { -197.8791f, -1036.0192f, 30.8882f };
					uParam0->f_3 = { 39.0954f, 0f, 51.9377f };
					uParam0->f_6 = 32.7032f;
					break;
				case 3:
					*uParam0 = { -302.5071f, -1045.5717f, 227.9951f };
					uParam0->f_3 = { -54.0979f, 0f, -20.4519f };
					uParam0->f_6 = 35.9315f;
					break;
				case 4:
					*uParam0 = { -282.1573f, -1005.9299f, 232.2077f };
					uParam0->f_3 = { -76.6024f, 0f, 8.6575f };
					uParam0->f_6 = 15.9715f;
					break;
			}
			break;
		case 3:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -1392.0742f, -570.8373f, 31.4774f };
					uParam0->f_3 = { 30.5301f, 0f, 64.2307f };
					uParam0->f_6 = 35.9982f;
					break;
				case 1:
					*uParam0 = { -1548.4984f, -465.9476f, 62.9037f };
					uParam0->f_3 = { 5.9567f, 0f, -121.5631f };
					uParam0->f_6 = 27.5041f;
					break;
				case 2:
					*uParam0 = { -1325.3636f, -538.2483f, 31.2659f };
					uParam0->f_3 = { 13.3032f, 0f, 83.3714f };
					uParam0->f_6 = 36.7475f;
					break;
				case 3:
					*uParam0 = { -1375.7029f, -547.4904f, 29.652f };
					uParam0->f_3 = { 26.5662f, 0f, 91.0091f };
					uParam0->f_6 = 40.2773f;
					break;
				case 4:
					*uParam0 = { -1360.2229f, -538.6799f, 38.6917f };
					uParam0->f_3 = { 10.2413f, -2.8388f, 102.5978f };
					uParam0->f_6 = 53.2355f;
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -961.9043f, -550.012f, 32.5747f };
					uParam0->f_3 = { 28.8097f, 0f, -26.8876f };
					uParam0->f_6 = 50f;
					break;
				case 1:
					*uParam0 = { -944.8992f, -589.884f, 114.2766f };
					uParam0->f_3 = { 9.8026f, 0f, -28.0001f };
					uParam0->f_6 = 39.3835f;
					break;
				case 2:
					*uParam0 = { -1061.914f, -465.8897f, 111.6679f };
					uParam0->f_3 = { 10.0297f, 0f, -95.863f };
					uParam0->f_6 = 37.074f;
					break;
				case 3:
					*uParam0 = { -898.0392f, -399.63f, 39.1545f };
					uParam0->f_3 = { 58.7284f, 0.0897f, -179.1522f };
					uParam0->f_6 = 50f;
					break;
				case 4:
					*uParam0 = { -932.1243f, -471.0513f, 193.7404f };
					uParam0->f_3 = { -74.0834f, 0f, -15.0768f };
					uParam0->f_6 = 41.0466f;
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -67.3495f, -513.4921f, 42.6787f };
					uParam0->f_3 = { 23.7233f, 0f, -151.7019f };
					uParam0->f_6 = 55.5648f;
					break;
				case 1:
					*uParam0 = { -72.4999f, -582.1418f, 39.1127f };
					uParam0->f_3 = { 49.0853f, 0f, -127.3052f };
					uParam0->f_6 = 63.5539f;
					break;
				case 2:
					*uParam0 = { -107.6931f, -603.4216f, 38.2444f };
					uParam0->f_3 = { 33.9707f, 0f, -92.9207f };
					uParam0->f_6 = 47.4136f;
					break;
				case 3:
					*uParam0 = { -61.3588f, -680.9072f, 40.2634f };
					uParam0->f_3 = { 25.5856f, 0f, 4.5153f };
					uParam0->f_6 = 60.2176f;
					break;
				case 4:
					*uParam0 = { -70.9133f, -561.0882f, 131.3551f };
					uParam0->f_3 = { -58.5274f, 0f, -145.3088f };
					uParam0->f_6 = 44.7537f;
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -960.2891f, -472.7867f, 39.0439f };
					uParam0->f_3 = { 24.7986f, 0.0409f, -21.4827f };
					uParam0->f_6 = 52.0185f;
					break;
				case 1:
					*uParam0 = { -948.9227f, -417.8185f, 38.2592f };
					uParam0->f_3 = { 40.3772f, 0f, -15.5227f };
					uParam0->f_6 = 67.7998f;
					break;
				case 2:
					*uParam0 = { -892.0462f, -394.0205f, 141.2545f };
					uParam0->f_3 = { -52.4628f, 0f, 60.5147f };
					uParam0->f_6 = 75.2894f;
					break;
				case 3:
					*uParam0 = { -928.1372f, -428.1431f, 124.677f };
					uParam0->f_3 = { -1.9624f, -0.2152f, -14.2648f };
					uParam0->f_6 = 54.9758f;
					break;
				case 4:
					*uParam0 = { -905.6004f, -293.2657f, 41.9486f };
					uParam0->f_3 = { 43.2627f, 3.8988f, 175.5304f };
					uParam0->f_6 = 33.937f;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -667.2404f, -25.1369f, 43.1678f };
					uParam0->f_3 = { 21.8261f, 0f, -39.9922f };
					uParam0->f_6 = 48.3545f;
					break;
				case 1:
					*uParam0 = { -667.8553f, -28.9006f, 41.2252f };
					uParam0->f_3 = { 22.8893f, 0f, -52.7611f };
					uParam0->f_6 = 54.0359f;
					break;
				case 2:
					*uParam0 = { -610.4257f, 204.0192f, 100.9878f };
					uParam0->f_3 = { -5.2361f, 0f, -165.0898f };
					uParam0->f_6 = 38.4484f;
					break;
				case 3:
					*uParam0 = { -545.654f, -41.3291f, 74.0575f };
					uParam0->f_3 = { 2.8113f, 0f, 44.689f };
					uParam0->f_6 = 62.0178f;
					break;
				case 4:
					*uParam0 = { -586.9001f, -92.5411f, 61.7151f };
					uParam0->f_3 = { 4.1604f, 0f, 4.4756f };
					uParam0->f_6 = 46.1658f;
					break;
			}
			break;
		case 58:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -197.7389f, 510.5206f, 136.3903f };
					uParam0->f_3 = { 4.4541f, 0f, -130.5121f };
					uParam0->f_6 = 50.4296f;
					break;
				case 1:
					*uParam0 = { -169.1212f, 527.376f, 142.9745f };
					uParam0->f_3 = { -6.3103f, 0f, 164.9361f };
					uParam0->f_6 = 32.4097f;
					break;
				case 2:
					*uParam0 = { -169.2143f, 518.2604f, 139.0207f };
					uParam0->f_3 = { -4.6553f, 0f, 161.8068f };
					uParam0->f_6 = 47.2748f;
					break;
				case 3:
					*uParam0 = { -207.4332f, 510.9664f, 134.9146f };
					uParam0->f_3 = { 5.9677f, 0f, -121.2417f };
					uParam0->f_6 = 33.5913f;
					break;
				case 4:
					*uParam0 = { -168.7606f, 517.1948f, 144.7751f };
					uParam0->f_3 = { -24.9315f, 0f, 159.1448f };
					uParam0->f_6 = 45.9462f;
					break;
			}
			break;
		case 59:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 349.7426f, 463.4214f, 150.5502f };
					uParam0->f_3 = { -2.7041f, 0f, 161.0581f };
					uParam0->f_6 = 35.5099f;
					break;
				case 1:
					*uParam0 = { 369.4083f, 446.0274f, 149.2577f };
					uParam0->f_3 = { -6.2912f, 0f, 118.4015f };
					uParam0->f_6 = 48.7713f;
					break;
				case 2:
					*uParam0 = { 369.3146f, 439.4409f, 145.6846f };
					uParam0->f_3 = { 5.6182f, 0f, 97.9462f };
					uParam0->f_6 = 43.3638f;
					break;
				case 3:
					*uParam0 = { 349.6898f, 458.571f, 148.8095f };
					uParam0->f_3 = { 6.2431f, 0f, 169.6303f };
					uParam0->f_6 = 52.1804f;
					break;
				case 4:
					*uParam0 = { 364.7197f, 459.9904f, 155.0079f };
					uParam0->f_3 = { -11.3527f, 0f, 142.9213f };
					uParam0->f_6 = 41.522f;
					break;
			}
			break;
		case 60:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -728.8906f, 604.4725f, 145.8867f };
					uParam0->f_3 = { -5.1049f, 0f, 58.7266f };
					uParam0->f_6 = 43.6559f;
					break;
				case 1:
					*uParam0 = { -742.6712f, 642.7081f, 147.123f };
					uParam0->f_3 = { -1.8667f, 0f, 143.9352f };
					uParam0->f_6 = 45.2768f;
					break;
				case 2:
					*uParam0 = { -736.4854f, 629.4451f, 151.568f };
					uParam0->f_3 = { -19.0573f, 0f, 118.6126f };
					uParam0->f_6 = 52.8655f;
					break;
				case 3:
					*uParam0 = { -750.1407f, 635.4058f, 143.2065f };
					uParam0->f_3 = { 7.281f, 0f, 150.2378f };
					uParam0->f_6 = 56.8287f;
					break;
				case 4:
					*uParam0 = { -741.3972f, 608.1267f, 145.6561f };
					uParam0->f_3 = { -4.0551f, 0f, 65.9835f };
					uParam0->f_6 = 58.8565f;
					break;
			}
			break;
		case 61:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -717.0034f, 600.6978f, 147.893f };
					uParam0->f_3 = { -4.9085f, 0f, -98.586f };
					uParam0->f_6 = 32.2276f;
					break;
				case 1:
					*uParam0 = { -701.1855f, 600.7932f, 143.6584f };
					uParam0->f_3 = { 7.7196f, 0f, -113.1052f };
					uParam0->f_6 = 49.7649f;
					break;
				case 2:
					*uParam0 = { -701.0754f, 605.7044f, 149.8881f };
					uParam0->f_3 = { -13.0822f, 0f, -127.8861f };
					uParam0->f_6 = 47.8507f;
					break;
				case 3:
					*uParam0 = { -689.851f, 613.3149f, 144.5428f };
					uParam0->f_3 = { 2.7851f, 0f, -159.4652f };
					uParam0->f_6 = 36.3593f;
					break;
				case 4:
					*uParam0 = { -684.5708f, 616.9944f, 146.6868f };
					uParam0->f_3 = { -1.7926f, 0f, -174.1436f };
					uParam0->f_6 = 41.2348f;
					break;
			}
			break;
		case 62:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 130.9311f, 583.0837f, 190.7715f };
					uParam0->f_3 = { -8.6044f, 0f, 169.1267f };
					uParam0->f_6 = 54.4566f;
					break;
				case 1:
					*uParam0 = { 111.3322f, 576.2406f, 183.0462f };
					uParam0->f_3 = { 13.1423f, 0f, -136.5486f };
					uParam0->f_6 = 44.7519f;
					break;
				case 2:
					*uParam0 = { 123.3129f, 580.7582f, 185.1801f };
					uParam0->f_3 = { 6.9979f, 0f, -175.0756f };
					uParam0->f_6 = 50.0517f;
					break;
				case 3:
					*uParam0 = { 140.2376f, 575.8712f, 183.975f };
					uParam0->f_3 = { 7.5347f, 0f, 125.2426f };
					uParam0->f_6 = 45.2281f;
					break;
				case 4:
					*uParam0 = { 132.543f, 586.0762f, 189.4462f };
					uParam0->f_3 = { -8.4016f, 0f, 162.3881f };
					uParam0->f_6 = 31.4711f;
					break;
			}
			break;
		case 63:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6597f, 674.514f, 147.0296f };
					uParam0->f_3 = { -2.4999f, 0f, 129.3025f };
					uParam0->f_6 = 33.2745f;
					break;
				case 1:
					*uParam0 = { -536.9955f, 669.2134f, 144.4017f };
					uParam0->f_3 = { 10.3434f, 0f, 110.239f };
					uParam0->f_6 = 34.9284f;
					break;
				case 2:
					*uParam0 = { -571.9711f, 682.6545f, 150.4516f };
					uParam0->f_3 = { -10.9494f, 0f, -144.6349f };
					uParam0->f_6 = 41.6942f;
					break;
				case 3:
					*uParam0 = { -529.8699f, 672.4476f, 143.8666f };
					uParam0->f_3 = { 5.4286f, 0f, 107.2091f };
					uParam0->f_6 = 31.2494f;
					break;
				case 4:
					*uParam0 = { -524.9136f, 665.4783f, 158.24f };
					uParam0->f_3 = { -20.6896f, 0f, 102.291f };
					uParam0->f_6 = 26.0316f;
					break;
			}
			break;
		case 64:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -714.4224f, 598.4947f, 144.1234f };
					uParam0->f_3 = { 5.9852f, 0f, 94.4228f };
					uParam0->f_6 = 45.565f;
					break;
				case 1:
					*uParam0 = { -738.5571f, 612.7238f, 142.0696f };
					uParam0->f_3 = { 14.136f, 0.6588f, 169.283f };
					uParam0->f_6 = 54.2471f;
					break;
				case 2:
					*uParam0 = { -718.2198f, 608.2428f, 152.5514f };
					uParam0->f_3 = { -19.1555f, 0.6588f, 128.9267f };
					uParam0->f_6 = 40.0876f;
					break;
				case 3:
					*uParam0 = { -742.6341f, 622.4393f, 144.8027f };
					uParam0->f_3 = { -0.3429f, 0f, -173.5023f };
					uParam0->f_6 = 41.1613f;
					break;
				case 4:
					*uParam0 = { -737.188f, 616.2004f, 148.5f };
					uParam0->f_3 = { -7.1895f, 0f, -171.5297f };
					uParam0->f_6 = 40.1556f;
					break;
					break;
			}
			break;
		case 65:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -846.7444f, 711.5901f, 151.8802f };
					uParam0->f_3 = { -5.2972f, 0f, 145.8721f };
					uParam0->f_6 = 40.4533f;
					break;
				case 1:
					*uParam0 = { -875.7339f, 710.2248f, 152.0264f };
					uParam0->f_3 = { -0.8038f, 0f, -139.0049f };
					uParam0->f_6 = 43.0582f;
					break;
				case 2:
					*uParam0 = { -861.1381f, 718.2349f, 166.3458f };
					uParam0->f_3 = { -34.0003f, 0f, -166.629f };
					uParam0->f_6 = 47.9323f;
					break;
				case 3:
					*uParam0 = { -861.1381f, 718.2349f, 166.3458f };
					uParam0->f_3 = { -34.0003f, 0f, -166.629f };
					uParam0->f_6 = 47.9323f;
					break;
				case 4:
					*uParam0 = { -893.9624f, 715.9857f, 153.2935f };
					uParam0->f_3 = { -4.2714f, 0f, -116.7937f };
					uParam0->f_6 = 28.0439f;
					break;
			}
			break;
		case 66:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -1300.0275f, 465.0517f, 101.3412f };
					uParam0->f_3 = { -10.5096f, 0f, -152.1912f };
					uParam0->f_6 = 44.4357f;
					break;
				case 1:
					*uParam0 = { -1282.027f, 465.9779f, 95.7958f };
					uParam0->f_3 = { 17.283f, 0f, 152.5088f };
					uParam0->f_6 = 53.4171f;
					break;
				case 2:
					*uParam0 = { -1276.7308f, 461.4053f, 96.401f };
					uParam0->f_3 = { 8.1526f, 0f, 136.4044f };
					uParam0->f_6 = 50f;
					break;
				case 3:
					*uParam0 = { -1273.4889f, 460.8777f, 102.1842f };
					uParam0->f_3 = { -24.7807f, 0f, 135.9527f };
					uParam0->f_6 = 50f;
					break;
				case 4:
					*uParam0 = { -1304.7279f, 468.4829f, 102.4148f };
					uParam0->f_3 = { -10.122f, 0f, -145.0509f };
					uParam0->f_6 = 39.8609f;
					break;
			}
			break;
		case 67:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 384.7624f, 440.3207f, 145.0527f };
					uParam0->f_3 = { -1.9896f, 0f, 144.6732f };
					uParam0->f_6 = 48.4143f;
					break;
				case 1:
					*uParam0 = { 365.7408f, 443.1193f, 145.9301f };
					uParam0->f_3 = { 0.1767f, 0f, -162.6344f };
					uParam0->f_6 = 43.6114f;
					break;
				case 2:
					*uParam0 = { 386.8551f, 450.5209f, 148.9287f };
					uParam0->f_3 = { -5.2061f, 0f, 151.8171f };
					uParam0->f_6 = 29.5462f;
					break;
				case 3:
					*uParam0 = { 357.9258f, 451.9459f, 145.8073f };
					uParam0->f_3 = { 0.652f, 0f, -149.457f };
					uParam0->f_6 = 33.9579f;
					break;
				case 4:
					*uParam0 = { 393.1492f, 444.4349f, 151.6931f };
					uParam0->f_3 = { -13.4973f, 0f, 148.1239f };
					uParam0->f_6 = 50f;
					break;
			}
			break;
		case 68:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -1584.1599f, -627.3773f, 100.8102f };
					uParam0->f_3 = { 2.1506f, 0f, 0.071f };
					uParam0->f_6 = 55.535f;
					break;
				case 1:
					*uParam0 = { -1643.2924f, -580.6568f, 101.245f };
					uParam0->f_3 = { -3.349f, 0f, -83.8367f };
					uParam0->f_6 = 41.6441f;
					break;
				case 2:
					*uParam0 = { -1662.2368f, -576.6899f, 33.5333f };
					uParam0->f_3 = { 33.7445f, 0f, -92.6563f };
					uParam0->f_6 = 33.1968f;
					break;
				case 3:
					*uParam0 = { -1623.911f, -675.9907f, 77.093f };
					uParam0->f_3 = { 6.6353f, 0f, -26.9933f };
					uParam0->f_6 = 33.1968f;
					break;
				case 4:
					*uParam0 = { -1640.9473f, -584.2517f, 123.2783f };
					uParam0->f_3 = { -9.4922f, 0f, -83.882f };
					uParam0->f_6 = 37.9602f;
					break;
			}
			break;
		case 69:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -1319.483f, -525.5394f, 59.4223f };
					uParam0->f_3 = { 3.8675f, 0f, 52.6338f };
					uParam0->f_6 = 55.5659f;
					break;
				case 1:
					*uParam0 = { -1366.5627f, -540.9052f, 41.7059f };
					uParam0->f_3 = { 19.1456f, 0f, -0.523f };
					uParam0->f_6 = 62.4535f;
					break;
				case 2:
					*uParam0 = { -1447.0181f, -477.3477f, 89.4685f };
					uParam0->f_3 = { -7.8524f, 0f, -90.1828f };
					uParam0->f_6 = 45f;
					break;
				case 3:
					*uParam0 = { -1436.4829f, -519.5764f, 46.4599f };
					uParam0->f_3 = { 11.9961f, 0f, -49.6801f };
					uParam0->f_6 = 60.6974f;
					break;
				case 4:
					*uParam0 = { -1413.0717f, -544.0135f, 50.3749f };
					uParam0->f_3 = { 5.7809f, 0f, -29.3278f };
					uParam0->f_6 = 64.5079f;
					break;
			}
			break;
		case 70:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -90.5981f, -639.1288f, 43.0304f };
					uParam0->f_3 = { 21.7355f, 0f, 23.903f };
					uParam0->f_6 = 50f;
					break;
				case 1:
					*uParam0 = { -209.4408f, -637.1819f, 51.2638f };
					uParam0->f_3 = { 28.8177f, 0f, -53.9284f };
					uParam0->f_6 = 69.4782f;
					break;
				case 2:
					*uParam0 = { -291.8475f, -682.1937f, 115.9967f };
					uParam0->f_3 = { -11.4594f, 0f, -59.2777f };
					uParam0->f_6 = 46.6231f;
					break;
				case 3:
					*uParam0 = { -156.8309f, -706.6057f, 43.1322f };
					uParam0->f_3 = { 42.7982f, 0f, -9.9844f };
					uParam0->f_6 = 53.0363f;
					break;
				case 4:
					*uParam0 = { -21.7145f, -552.9631f, 178.1255f };
					uParam0->f_3 = { -8.6541f, 0f, 115.174f };
					uParam0->f_6 = 49.6327f;
					break;
			}
			break;
		case 71:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -116.9155f, -876.4891f, 299.0441f };
					uParam0->f_3 = { 1.171f, 0f, -43.7803f };
					uParam0->f_6 = 50f;
					break;
				case 1:
					*uParam0 = { -23.493f, -698.7332f, 261.5253f };
					uParam0->f_3 = { 5.0408f, 0f, 157.9843f };
					uParam0->f_6 = 56.6759f;
					break;
				case 2:
					*uParam0 = { -152.7363f, -747.0823f, 40.5166f };
					uParam0->f_3 = { 37.7232f, 0f, -120.7514f };
					uParam0->f_6 = 71.9701f;
					break;
				case 3:
					*uParam0 = { -9.5656f, -784.3034f, 323.6057f };
					uParam0->f_3 = { -18.6225f, 0f, 108.7237f };
					uParam0->f_6 = 52.5694f;
					break;
				case 4:
					*uParam0 = { -109.0389f, -899.1192f, 358.453f };
					uParam0->f_3 = { -35.1415f, 0f, -23.7808f };
					uParam0->f_6 = 38.9297f;
					break;
			}
			break;
	}
}

int func_993()//Position - 0x4EDB66
{
	return Global_1937518.f_3;
}

void func_994()//Position - 0x4EDC9F
{
	struct<35> Var0;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_24 = -1;
	Global_2656879 = { Var0 };
	Global_2656879.f_21 = { 0f, 0f, 0f };
	Global_2656879.f_25 = MISC::GET_GAME_TIMER();
}

bool func_995()//Position - 0x4EDCDD
{
	return Global_2656879.f_20;
}

void func_996()//Position - 0x4EE83F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659410)
	{
		if (Global_2654152[iVar0 /*82*/].f_54 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_2654152[iVar0 /*82*/].f_54);
			Global_2654152[iVar0 /*82*/].f_54 = -1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1659438)
	{
		if (Global_2655137[iVar0 /*99*/].f_92 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_2655137[iVar0 /*99*/].f_92);
			Global_2655137[iVar0 /*99*/].f_92 = -1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1659440)
	{
		if (Global_2656326[iVar0 /*46*/].f_26 != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(Global_2656326[iVar0 /*46*/].f_26);
			Global_2656326[iVar0 /*46*/].f_26 = -1;
		}
		iVar0++;
	}
}

bool func_997()//Position - 0x4EEA7C
{
	return Global_2656879.f_1 != 0;
}

void func_998()//Position - 0x4EEC2D
{
	Global_2653202.f_3 = 0;
}

void func_999()//Position - 0x4EEC3C
{
	Global_2653202.f_1 = 0;
}
