namespace __LIB_29__ {
	
int func_0(int iParam0)//Position - 0x15F1C3
{
	if (__LIB_3__::func_154(iParam0) || func_4343(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x160105
{
	if (__LIB_2__::func_399() == 2)
	{
		StringCopy(sParam1, "CLUB_TITLE" /* GXT: NIGHTCLUB */, 64);
	}
	else
	{
		StringCopy(sParam1, "HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */, 64);
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_2(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x167D9C
{
	if (__LIB_3__::func_165() || func_4478())
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -12f, 0.3f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
			case 1:
				*uParam2 = { -11f, 1.35f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 6f, 0.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 1:
				*uParam2 = { 5f, 1.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 2:
				*uParam2 = { 5f, -0.65f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 3:
				*uParam2 = { 3f, 1.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 4:
				*uParam2 = { 3f, -0.65f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			}
	}
	return 0;
}

void func_3(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x16834B
{
	switch (iParam0)
	{
		case 101:
			StringCopy(sParam1, "CHR17_TITLE" /* GXT: AVENGER */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_4(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x17EA26
{
	switch (iParam0)
	{
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			StringCopy(sParam1, "BASE_TITLE" /* GXT: FACILITY */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_5()//Position - 0x181A09
{
	if (((((((((__LIB_0__::func_663() || __LIB_1__::func_240()) || __LIB_1__::func_239()) || __LIB_0__::func_706()) || (__LIB_1__::func_307() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_4770() && !func_4769())) || Global_2656879) || Global_2656879.f_1 != 0) || Global_2656953 != 0) || (__LIB_0__::func_902() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5)//Position - 0x184577
{
	if ((__LIB_3__::func_165() || func_4843()) || __LIB_3__::func_184())
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -12f, 0.3f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
			case 1:
				*uParam2 = { -11f, 1.35f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
		}
	}
	else if ((!bParam4 || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2"))) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0))))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 7.6212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 1:
				*uParam2 = { 7.6212f, -1.1362f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 2:
				*uParam2 = { 6.1212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 3:
				*uParam2 = { 6.1212f, -1.2358f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 4:
				*uParam2 = { 4.6212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 5:
				*uParam2 = { 3.6212f, -1.3359f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 6:
				*uParam2 = { 3.1212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 7:
				*uParam2 = { 1.4212f, -1.1362f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 8:
				*uParam2 = { 1.4212f, 2.2642f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 9:
				*uParam2 = { 0.5212f, 1.2642f, 0.8149f };
				*uParam3 = 90f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 5.251f, 0.4458f, 0.1f };
				*uParam3 = 90f;
				return 1;
				break;
			}
	}
	return 0;
}

void func_7(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x18531F
{
	switch (iParam0)
	{
		case 88:
			StringCopy(sParam1, "CHR17_TITLE" /* GXT: AVENGER */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_8(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x192D7D
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			StringCopy(sParam1, "HANGAR_TITLE" /* GXT: HANGAR */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_9(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1AFFC7
{
	StringCopy(sParam1, "BUNKER_TITLE" /* GXT: BUNKER */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) && func_91(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_10(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x208585
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		case 3:
			return 6;
		case 1:
		case 4:
		case 5:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

void func_11(int iParam0)//Position - 0xABBD
{
	Local_134.f_0 = iParam0;
}

int func_12(int iParam0)//Position - 0xBA346
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_1592(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1)//Position - 0x138B8D
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_308(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_1592(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_0__::func_812(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_14(bool bParam0)//Position - 0x1FFF04
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && PLAYER::PLAYER_ID() != iVar0) && __LIB_3__::func_898(PLAYER::PLAYER_ID(), iVar0)) && !__LIB_1__::func_155(iVar0, 1, 0))
			{
				iVar2++;
			}
			iVar1++;
		}
		return iVar2 >= 2;
	}
	return __LIB_3__::func_965(PLAYER::PLAYER_ID()) >= 2;
}

int func_15(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x87C
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(iParam4, Param2, bParam6, iParam1));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, bParam5);
		ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(*uParam0), fParam3);
		OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(*uParam0), bParam7);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_OBJ(*uParam0), !bParam8);
		ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		return 1;
	}
	return 0;
}

void func_16(int iParam0)//Position - 0x38034
{
	MISC::CLEAR_BIT(&uLocal_172, iParam0);
}

bool func_17(int iParam0)//Position - 0x4AA81
{
	return BitTest(uLocal_172, iParam0);
}

int func_18(int iParam0)//Position - 0xB4507
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_1561(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_19()//Position - 0x111513
{
	if (__LIB_0__::func_649(&Global_1578987) && !func_22(&Global_1578987, 300000, 0))
	{
		return 1;
	}
	return 0;
}

int func_20(var uParam0, int iParam1)//Position - 0x135E98
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_308(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_1561(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_0__::func_812(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_21(int iParam0, int iParam1)//Position - 0x206906
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (__LIB_1__::func_346(iParam1) && func_6533(iParam1))
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

bool func_22(int iParam0, bool bParam1)//Position - 0x207068
{
	if (bParam1)
	{
		return __LIB_0__::func_137(15384, -1);
	}
	return __LIB_0__::func_137(func_6543(iParam0), -1);
}

bool func_23(int iParam0)//Position - 0x1FCC
{
	return __LIB_1__::func_266(func_95(iParam0), 0);
}

int func_24()//Position - 0x3C559
{
	return Global_262145.f_13069 /* Tunable: GB_SMASHANDGRAB_WANTED_CAP */;
}

int func_25(var uParam0, var uParam1)//Position - 0x111A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_26()//Position - 0xB95AC
{
	if ((!__LIB_0__::func_706() && !func_1849()) && Global_2715698)
	{
		Global_4718592.f_116524 = 0;
	}
}

void func_27(int iParam0)//Position - 0x3FCB1
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_201[iVar0]), iVar1);
}

bool func_28(int iParam0)//Position - 0x3FD35
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_201[iVar0], iVar1);
}

int func_29(int iParam0, int iParam1)//Position - 0x40CB7
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_30(int iParam0)//Position - 0x118754
{
	if (iParam0 == __LIB_0__::func_160() || !func_3388(iParam0))
	{
		return 6;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_408.f_4;
}

int func_31(int iParam0, int iParam1)//Position - 0x137BCF
{
	if (((((((iParam1 == joaat("speedo4") || iParam1 == joaat("mule4")) || iParam1 == joaat("pounder2")) || iParam1 == __LIB_1__::func_391()) || __LIB_1__::func_177(iParam1)) || __LIB_1__::func_392(iParam1)) || func_3692(iParam1)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam1))
	{
		return 0;
	}
	return 1;
}

int func_32(bool bParam0, bool bParam1)//Position - 0x5D19
{
	int iVar0;
	if (bParam0 != __LIB_0__::func_160() && bParam1 != __LIB_0__::func_160())
	{
		iVar0 = __LIB_0__::func_603(bParam0);
		if (iVar0 != __LIB_0__::func_160())
		{
			return iVar0 == __LIB_0__::func_603(bParam1);
		}
	}
	return 0;
}

int func_33(var uParam0, int iParam1)//Position - 0x371C6
{
	int iVar0;
	iVar0 = __LIB_1__::func_556(func_580(uParam0), iParam1, 0);
	return iVar0;
}

bool func_34(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x4F58F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_35()//Position - 0x5A95F
{
	return Local_124.f_0;
}

int func_36(int iParam0)//Position - 0x133C
{
	switch (iParam0)
	{
		case 23:
			return 1;
		case 20:
			return 5;
		case 15:
			return 2;
		case 24:
			return 2;
		case 21:
			return 3;
		case 22:
			return 5;
		case 16:
			return 5;
		case 17:
			return 5;
		case 25:
			return 5;
		default:
	}
	return 1;
}

float func_37()//Position - 0x1834
{
	return 600f;
}

int func_38(int iParam0)//Position - 0x7DA5
{
	switch (iParam0)
	{
		case 0:
			return 18086;
		case 1:
			return 18087;
		case 2:
			return 18088;
		case 3:
			return 18089;
		default:
	}
	return 18086;
}

struct<23> func_39()//Position - 0xAA6F
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_234;
}

int func_40(int iParam0)//Position - 0xFE42
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("pyro"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("nokota"):
		case joaat("molotok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("havok"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return 1;
			break;
	}
	return 0;
}

Vector3 func_41(int iParam0, int iParam1, bool bParam2)//Position - 0x2A42D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1733.5162f, 3320.3188f, 40.2235f;
				case 1:
					return 1733.5162f, 3320.3188f, 40.2235f;
				case 2:
					return 1725.2155f, 3312.6453f, 40.2235f;
				case 3:
					return 1725.2155f, 3312.6453f, 40.2235f;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2133.585f, 4778.6807f, 39.9703f;
				case 1:
					return 2133.585f, 4778.6807f, 39.9703f;
				case 2:
					return 2131.6846f, 4793.2812f, 40.1269f;
				case 3:
					return 2131.6846f, 4793.2812f, 40.1269f;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -680.2657f, 74.655f, 68.6856f;
				case 1:
					return -680.2657f, 74.655f, 68.6856f;
				case 2:
					return -676.298f, 101.511f, 54.855f;
				case 3:
					return -676.298f, 101.511f, 54.855f;
				default:
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 744.2346f, -3176.6636f, 4.9005f;
				case 1:
					return 744.2346f, -3176.6636f, 4.9005f;
				case 2:
					return 735.2852f, -3166.1895f, 4.9005f;
				case 3:
					return 735.2852f, -3166.1895f, 4.9005f;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return 2002.1001f, 4712.492f, 40.6149f;
				case 1:
					return 2002.1001f, 4712.492f, 40.6149f;
				case 2:
					return 1988.9009f, 4705.6772f, 40.5671f;
				case 3:
					return 1988.9009f, 4705.6772f, 40.5671f;
				default:
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return 2408.4583f, 3324.275f, 46.6277f;
				case 1:
					return 2408.4583f, 3324.275f, 46.6277f;
				case 2:
					return 2411.6665f, 3336.4106f, 45.9022f;
				case 3:
					return 2411.6665f, 3336.4106f, 45.9022f;
				default:
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return -3181.753f, 3012.095f, -41.03f;
				case 1:
					return -3176.1108f, 3038.2063f, -36.0347f;
				case 2:
					return -3185.6123f, 3056.5857f, -41.0703f;
				case 3:
					return -3199.9934f, 3034.8774f, -37.7143f;
				default:
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return 3901.1228f, 3055.8547f, -26.333f;
				case 1:
					return 3891.9363f, 3045.58f, -22.121f;
				case 2:
					return 3933.637f, 3015.319f, -40.221f;
				case 3:
					return 3916.321f, 3052.385f, -30.754f;
				default:
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return 3401.1912f, 6334.494f, -59.0909f;
				case 1:
					return 3398.5493f, 6316.635f, -52.3259f;
				case 2:
					return 3424.207f, 6320.563f, -64.44f;
				case 3:
					return 3390.3345f, 6333.845f, -56.731f;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1091.1672f, 2307.5627f, 44.513f;
				case 1:
					return 1091.1672f, 2307.5627f, 44.513f;
				case 2:
					return 1081.6643f, 2300.5225f, 44.5138f;
				case 3:
					return 1081.6643f, 2300.5225f, 44.5138f;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2736.5688f, 1416.5463f, 23.471f;
				case 1:
					return 2736.5688f, 1416.5463f, 23.471f;
				case 2:
					return 2723.47f, 1420.855f, 23.481f;
				case 3:
					return 2723.47f, 1420.855f, 23.481f;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1567.784f, 100.107f, 56.924f;
				case 1:
					return -1567.784f, 100.107f, 56.924f;
				case 2:
					return -1473.618f, 151.295f, 53.857f;
				case 3:
					return -1473.618f, 151.295f, 53.857f;
				default:
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					return 2578.2488f, 6182.8936f, 162.8385f;
				case 1:
					return 2541.9963f, 6146.477f, 157.9084f;
				case 2:
					return 2604.1382f, 6159.505f, 170.5552f;
				case 3:
					return 2514.8909f, 6139.322f, 158.3921f;
				case 4:
					return 2575.6704f, 6204.9824f, 155.3048f;
				case 5:
					return 2584.5884f, 6142.282f, 160.7758f;
				case 6:
					return 2492.0808f, 6106.285f, 173.9649f;
				case 7:
					return 2576.01f, 6133.0854f, 169.4876f;
				default:
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					return -401.8941f, 5843.5874f, 45.45f;
				case 1:
					return -456.1789f, 5750.731f, 66.1382f;
				case 2:
					return -469.9607f, 5810.1777f, 44.3801f;
				case 3:
					return -437.234f, 5861.1865f, 36.8436f;
				case 4:
					return -448.1917f, 5807.2085f, 49.988f;
				case 5:
					return -422.1481f, 5770.3457f, 57.1516f;
				case 6:
					return -460.2819f, 5780.0073f, 52.7017f;
				case 7:
					return -428.5784f, 5843.096f, 44.3902f;
				default:
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 2815.339f, -1462.8577f, 8.9045f;
				case 1:
					return 2837.545f, -1557.0084f, -1.7513f;
				case 2:
					return 2765.393f, -1587.7749f, 1.2766f;
				case 3:
					return 2754.6213f, -1465.6897f, 0.8046f;
				case 4:
					return 2842.061f, -1513.066f, 1.2421f;
				case 5:
					return 2762.3472f, -1548.3162f, 0.3614f;
				case 6:
					return 2747.598f, -1593.2408f, 3.5502f;
				case 7:
					return 2809.7202f, -1491.854f, 9.8297f;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 3576.591f, 3656.36f, 32.899f;
				case 1:
					return 3576.591f, 3656.36f, 32.899f;
				case 2:
					return 3573.451f, 3667.0017f, 32.8886f;
				case 3:
					return 3573.451f, 3667.0017f, 32.8886f;
				default:
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1673.2805f, 2607.976f, 44.5649f;
				case 1:
					return 1673.2805f, 2607.976f, 44.5649f;
				case 2:
					return 1673.4609f, 2601.0017f, 44.5649f;
				case 3:
					return 1673.4609f, 2601.0017f, 44.5649f;
				default:
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1951.61f, 3335.502f, 31.96f;
				case 1:
					return -1951.61f, 3335.502f, 31.96f;
				case 2:
					return -1955.774f, 3324.837f, 31.96f;
				case 3:
					return -1955.774f, 3324.837f, 31.96f;
				default:
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 0:
					return -1937.031f, 479.904f, 101.691f;
				case 1:
					return -1937.031f, 479.904f, 101.691f;
				case 2:
					return -1952.552f, 477.158f, 101.691f;
				case 3:
					return -1952.552f, 477.158f, 101.691f;
				default:
			}
			break;
		case 49:
			switch (iParam1)
			{
				case 0:
					return -786.114f, 866.828f, 202.172f;
				case 1:
					return -786.114f, 866.828f, 202.172f;
				case 2:
					return -787.961f, 866.511f, 202.171f;
				case 3:
					return -787.961f, 866.511f, 202.171f;
				default:
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 0:
					return 198.883f, 108.968f, 105.07f;
				case 1:
					return 198.883f, 108.968f, 105.07f;
				case 2:
					return 210.382f, 107.157f, 105.07f;
				case 3:
					return 210.382f, 107.157f, 105.07f;
				default:
			}
			break;
		case 33:
		case 34:
		case 35:
			return 0f, 0f, 0f;
		case 42:
		case 43:
		case 44:
			return 0f, 0f, 0f;
		case 39:
		case 40:
		case 41:
			return 0f, 0f, 0f;
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
			return 0f, 0f, 0f;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 0f, 0f, 0f;
		case 45:
		case 46:
		case 47:
			return 0f, 0f, 0f;
		case 51:
			switch (iParam1)
			{
				case 0:
					return -1788.0525f, -842.3671f, 6.8088f;
				default:
			}
			break;
		case 52:
			switch (iParam1)
			{
				case 0:
					return 607.5912f, -545.4429f, 14.2422f;
				default:
			}
			break;
		case 53:
			switch (iParam1)
			{
				case 0:
					return 1750.3967f, -1551.8258f, 111.6305f;
				default:
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 0:
					return -3283.8772f, 998.4238f, 2.6219f;
				default:
			}
			break;
		case 55:
			switch (iParam1)
			{
				case 0:
					return 2517.474f, 1030.263f, 76.854f;
				default:
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 0:
					return 2437.9949f, 1461.5397f, 36.8019f;
				default:
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1369.4f, 1412.809f, 102.5004f;
				default:
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 0:
					return 321.9248f, 2423.0657f, 47.4936f;
				default:
			}
			break;
		case 59:
			switch (iParam1)
			{
				case 0:
					return 1182.1031f, 3078.3088f, 39.9078f;
				default:
			}
			break;
		case 60:
			switch (iParam1)
			{
				case 0:
					return 107.2016f, 3651.5603f, 38.5678f;
				default:
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 0:
					return 1005.6583f, 4346.605f, 42.8017f;
				default:
			}
			break;
		case 62:
			switch (iParam1)
			{
				case 0:
					return 2017.981f, 4789.238f, 40.8519f;
				default:
			}
			break;
		case 63:
			switch (iParam1)
			{
				case 0:
					return 2650.9424f, 4225.5522f, 42.4054f;
				default:
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return 758.5976f, 6591.7734f, 1.3513f;
				default:
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 0:
					return -341.3064f, 6469.665f, 1.3353f;
				default:
			}
			break;
	}
	if (!bParam2)
	{
	}
	return 0f, 0f, 0f;
}

Vector3 func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2CDFE
{
	switch (iParam2)
	{
		case 12:
			switch (iParam1)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1743.856f, 3296.61f, 40.117f;
						case 1:
							return 1721.797f, 3304.43f, 40.223f;
						case 2:
							return 1721.607f, 3320.017f, 40.223f;
						case 3:
							return 1739.903f, 3310.823f, 40.223f;
						case 4:
							return 1739.029f, 3311.913f, 40.223f;
						case 5:
							return 1728.027f, 3313.413f, 40.223f;
						case 6:
							return 1728.622f, 3314.655f, 40.223f;
						case 7:
							return 1728.319f, 3296.102f, 40.223f;
						case 8:
							return 1728.999f, 3297.426f, 40.223f;
						case 9:
							return 1716.8959f, 3317.1418f, 40.2235f;
						case 10:
							return 1724.4331f, 3287.9612f, 40.1522f;
						case 11:
							return 1724.5315f, 3289.6213f, 40.1871f;
						case 12:
							return 1756.3555f, 3297.5012f, 40.154f;
						case 13:
							return 1757.8159f, 3297.6514f, 40.1514f;
						case 14:
							return 1727.0168f, 3326.0593f, 40.2235f;
						case 15:
							return 1736.5751f, 3328.026f, 40.2235f;
						default:
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 2138.027f, 4795.798f, 40.111f;
						case 1:
							return 2124.896f, 4785.83f, 39.97f;
						case 2:
							return 2125.711f, 4786.782f, 39.97f;
						case 3:
							return 2136.816f, 4785.323f, 39.97f;
						case 4:
							return 2135.83f, 4786.41f, 39.97f;
						case 5:
							return 2126f, 4775.52f, 39.97f;
						case 6:
							return 2137.563f, 4775.1f, 39.97f;
						case 7:
							return 2138.546f, 4776.208f, 39.97f;
						case 8:
							return 2145.823f, 4775.587f, 39.998f;
						case 9:
							return 2142.65f, 4786.065f, 39.97f;
						case 10:
							return 2145.5415f, 4793.8145f, 40.1418f;
						case 11:
							return 2146.8486f, 4794.527f, 40.1416f;
						case 12:
							return 2116.4878f, 4784.138f, 40.0225f;
						case 13:
							return 2143.0986f, 4777.269f, 39.9703f;
						case 14:
							return 2128.042f, 4769.7456f, 39.9703f;
						case 15:
							return 2137.144f, 4770.1353f, 40.0288f;
						default:
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -681.991f, 72.33f, 68.686f;
						case 1:
							return -701.956f, 65.44f, 68.686f;
						case 2:
							return -685.388f, 59.906f, 68.686f;
						case 3:
							return -680.096f, 101.055f, 54.855f;
						case 4:
							return -683.356f, 72.042f, 68.686f;
						case 5:
							return -680.307f, 102.354f, 54.855f;
						case 6:
							return -681.42f, 82.988f, 68.686f;
						case 7:
							return -697.754f, 57.821f, 68.686f;
						case 8:
							return -708.57f, 73.349f, 68.686f;
						case 9:
							return -708.576f, 72.288f, 68.686f;
						case 10:
							return -690.4533f, 76.3671f, 54.8554f;
						case 11:
							return -697.0634f, 71.039f, 58.8734f;
						case 12:
							return -666.7314f, 98.2226f, 54.8554f;
						case 13:
							return -670.3982f, 92.1167f, 54.8554f;
						case 14:
							return -711.2704f, 56.4375f, 68.6856f;
						case 15:
							return -696.6024f, 56.8736f, 68.6856f;
						default:
					}
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 6:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						default:
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 27:
					switch (iParam0)
					{
						case 6:
							return -3244.1345f, 3020.2588f, 1f;
						case 7:
							return -3244.7468f, 3018.8955f, 1f;
						case 11:
							return -2.5f, -14.2f, 1.2f;
						case 12:
							return 3.2f, -10.45f, 0.7f;
						case 13:
							return -2.4f, -6.7f, 3.1f;
						case 14:
							return -1.6f, 11.5f, 1.3f;
						case 15:
							return 2.2f, 7.15f, 3.1f;
						case 16:
							return -2.5f, -14.2f, 1.2f;
						case 17:
							return 3.2f, -10.45f, 0.7f;
						case 18:
							return -2.4f, -6.7f, 3.1f;
						case 19:
							return -1.6f, 11.5f, 1.3f;
						case 20:
							return 2.2f, 7.15f, 3.1f;
						default:
					}
					break;
				case 28:
					switch (iParam0)
					{
						case 6:
							return 3853.1433f, 3044.2876f, 1f;
						case 7:
							return 3852.5837f, 3042.889f, 1f;
						case 11:
							return -2.5f, -14.2f, 1.2f;
						case 12:
							return 3.2f, -10.45f, 0.7f;
						case 13:
							return -2.4f, -6.7f, 3.1f;
						case 14:
							return -1.6f, 11.5f, 1.3f;
						case 15:
							return 2.2f, 7.15f, 3.1f;
						case 16:
							return -2.5f, -14.2f, 1.2f;
						case 17:
							return 3.2f, -10.45f, 0.7f;
						case 18:
							return -2.4f, -6.7f, 3.1f;
						case 19:
							return -1.6f, 11.5f, 1.3f;
						case 20:
							return 2.2f, 7.15f, 3.1f;
						default:
					}
					break;
				case 29:
					switch (iParam0)
					{
						case 6:
							return 3363.8655f, 6295.7754f, 1f;
						case 7:
							return 3365.067f, 6296.5205f, 1f;
						case 11:
							return -2.5f, -14.2f, 1.2f;
						case 12:
							return 3.2f, -10.45f, 0.7f;
						case 13:
							return -2.4f, -6.7f, 3.1f;
						case 14:
							return -1.6f, 11.5f, 1.3f;
						case 15:
							return 2.2f, 7.15f, 3.1f;
						case 16:
							return -2.5f, -14.2f, 1.2f;
						case 17:
							return 3.2f, -10.45f, 0.7f;
						case 18:
							return -2.4f, -6.7f, 3.1f;
						case 19:
							return -1.6f, 11.5f, 1.3f;
						case 20:
							return 2.2f, 7.15f, 3.1f;
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 30:
					switch (iParam0)
					{
						case 0:
							return 2573.1538f, 6181.2007f, 162.424f;
						case 1:
							return 2572.915f, 6175.194f, 162.9417f;
						case 2:
							return 2579.1562f, 6174.752f, 163.3838f;
						case 3:
							return 2562.8848f, 6177.633f, 162.5126f;
						default:
					}
					break;
				case 31:
					switch (iParam0)
					{
						case 0:
							return -399.4203f, 5842.636f, 45.4566f;
						case 1:
							return -408.8625f, 5813.502f, 53.2642f;
						case 2:
							return -401.2626f, 5811.197f, 53.2378f;
						case 3:
							return -407.1889f, 5802.803f, 54.5755f;
						default:
					}
					break;
				case 32:
					switch (iParam0)
					{
						case 0:
							return 2817.8054f, -1461.092f, 9.0637f;
						case 1:
							return 2786.5566f, -1505.1354f, 7.6518f;
						case 2:
							return 2799.5942f, -1517.7476f, 6.9735f;
						case 3:
							return 2805.5874f, -1510.6223f, 8.2916f;
						default:
					}
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1093.78f, 2140.327f, 56.695f;
						case 1:
							return 1130.813f, 2124.792f, 54.556f;
						case 2:
							return 1127.52f, 2101.5f, 54.772f;
						case 3:
							return 1113.373f, 2182.493f, 44.535f;
						case 4:
							return 1112.533f, 2183.417f, 44.568f;
						case 5:
							return 1075.16f, 2193.236f, 47.259f;
						case 6:
							return 1135.335f, 2191.693f, 78.33f;
						case 7:
							return 1123.011f, 2126.863f, 78.272f;
						case 8:
							return 1145.076f, 2102.481f, 54.8f;
						case 9:
							return 1108.083f, 2209.375f, 47.907f;
						case 10:
							return 1100.402f, 2161.894f, 52.415f;
						case 11:
							return 1131.636f, 2179.651f, 47.966f;
						case 12:
							return 1101.571f, 2096.392f, 53.158f;
						case 13:
							return 1126.184f, 2100.957f, 54.772f;
						case 14:
							return 1163.853f, 2129.017f, 54.211f;
						default:
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 2715.271f, 1480.323f, 43.561f;
						case 1:
							return 2733.868f, 1424.111f, 23.489f;
						case 2:
							return 2732.957f, 1424.497f, 23.489f;
						case 3:
							return 2716.831f, 1502.566f, 41.253f;
						case 4:
							return 2715.288f, 1462.307f, 23.501f;
						case 5:
							return 2716.252f, 1462.303f, 23.501f;
						case 6:
							return 2722.413f, 1510.587f, 43.561f;
						case 7:
							return 2741.34f, 1556.582f, 39.338f;
						case 8:
							return 2719.455f, 1539.602f, 49.536f;
						case 9:
							return 2729.297f, 1529.243f, 39.337f;
						case 10:
							return 2733.219f, 1580.919f, 65.543f;
						case 11:
							return 2729.475f, 1574.6906f, 49.5362f;
						case 12:
							return 2740.005f, 1543.623f, 49.692f;
						case 13:
							return 2749.464f, 1445.561f, 23.489f;
						case 14:
							return 2764.94f, 1441.234f, 23.449f;
						default:
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -1558.803f, 108.016f, 55.78f;
						case 1:
							return -1560.034f, 108.345f, 55.78f;
						case 2:
							return -1547.337f, 115.781f, 55.78f;
						case 3:
							return -1584.318f, 81.096f, 58.21f;
						case 4:
							return -1538.719f, 126.825f, 55.78f;
						case 5:
							return -1537.634f, 122.583f, 63.544f;
						case 6:
							return -1525.2184f, 75.4085f, 60.314f;
						case 7:
							return -1570.808f, 114.973f, 58.179f;
						case 8:
							return -1541.0206f, 66.5022f, 56.5391f;
						case 9:
							return -1570.878f, 126.969f, 57.281f;
						case 10:
							return -1541.314f, 65.5921f, 56.5391f;
						case 11:
							return -1583.789f, 82.004f, 58.21f;
						case 12:
							return -1552.523f, 84.412f, 60.313f;
						case 13:
							return -1575.14f, 94.819f, 57.568f;
						case 14:
							return -1499.468f, 102.278f, 54.574f;
						default:
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 24:
					switch (iParam0)
					{
						case 0:
							return 1292.865f, -3333.497f, 4.904f;
						case 1:
							return 1292.024f, -3335.079f, 4.903f;
						case 2:
							return 1269.8988f, -3327.7295f, 4.9016f;
						case 3:
							return 1245.584f, -3332.266f, 5.029f;
						case 4:
							return 1274.381f, -3245.824f, 7.712f;
						case 5:
							return 1289.874f, -3301.747f, 23.393f;
						case 6:
							return 1277.907f, -3258.96f, 7.712f;
						case 7:
							return 1296.452f, -3266.749f, 4.907f;
						case 8:
							return 1295.1f, -3267.391f, 4.907f;
						case 9:
							return 1288.6592f, -3234.7737f, 4.9046f;
						case 10:
							return 1286.9646f, -3234.1013f, 4.9039f;
						case 11:
							return 1244.97f, -3267.945f, 4.684f;
						case 12:
							return 1246.036f, -3284.022f, 5.029f;
						case 13:
							return 1277.752f, -3270.18f, 4.902f;
						case 14:
							return 1271.685f, -3316.92f, 4.902f;
						default:
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							return 2334.589f, 4860.638f, 51.164f;
						case 1:
							return 2311.195f, 4884.191f, 51.17f;
						case 2:
							return 2333.878f, 4890.064f, 40.811f;
						case 3:
							return 2333.304f, 4891.508f, 40.813f;
						case 4:
							return 2253.415f, 4941.463f, 40.216f;
						case 5:
							return 2279.546f, 4914.087f, 40.034f;
						case 6:
							return 2270.767f, 4966.59f, 40.729f;
						case 7:
							return 2293.625f, 4933.867f, 40.421f;
						case 8:
							return 2280.246f, 4947.119f, 40.331f;
						case 9:
							return 2267.735f, 4853.688f, 39.671f;
						case 10:
							return 2266.428f, 4853.894f, 39.669f;
						case 11:
							return 2324.546f, 4928.312f, 40.512f;
						case 12:
							return 2305.976f, 4863.044f, 40.808f;
						case 13:
							return 2305.573f, 4864.413f, 40.808f;
						case 14:
							return 2256.129f, 4957.866f, 43.373f;
						default:
					}
					break;
				case 26:
					switch (iParam0)
					{
						case 0:
							return 2357.072f, 3072.47f, 47.166f;
						case 1:
							return 2400.932f, 3127.196f, 51.046f;
						case 2:
							return 2372.066f, 3061.218f, 49.938f;
						case 3:
							return 2375.476f, 3030.531f, 52.678f;
						case 4:
							return 2403.087f, 3101.762f, 47.153f;
						case 5:
							return 2427.642f, 3112.139f, 47.176f;
						case 6:
							return 2366.285f, 3115.281f, 47.326f;
						case 7:
							return 2366.598f, 3116.801f, 47.389f;
						case 8:
							return 2440.723f, 3106.481f, 46.569f;
						case 9:
							return 2439.382f, 3107.084f, 46.77f;
						case 10:
							return 2415.866f, 3133.103f, 47.174f;
						case 11:
							return 2414.316f, 3131.963f, 47.166f;
						case 12:
							return 2411.899f, 3043.151f, 47.152f;
						case 13:
							return 2380.094f, 3040.832f, 47.153f;
						case 14:
							return 2356.214f, 3043.366f, 47.152f;
						default:
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 39:
					switch (iParam0)
					{
						case 0:
							return -180.8231f, -992.3263f, 253.357f;
						case 1:
							return -160.3267f, -989.1707f, 253.1315f;
						case 2:
							return -171.43f, -963.765f, 253.357f;
						case 3:
							return -162.1393f, -993.4059f, 253.1315f;
						case 4:
							return -161.374f, -994.5391f, 253.1315f;
						case 5:
							return -176.8964f, -1005.3085f, 253.1315f;
						case 6:
							return -159.4269f, -1014.7977f, 253.1315f;
						case 7:
							return -160.9709f, -1015.3647f, 253.1315f;
						case 8:
							return -142.074f, -966.156f, 253.131f;
						case 9:
							return -142.934f, -964.597f, 253.131f;
						case 10:
							return -151.773f, -942.141f, 253.131f;
						case 11:
							return -152.801f, -960.127f, 253.131f;
						case 12:
							return -143.803f, -974.004f, 253.131f;
						case 13:
							return -152.268f, -1004.254f, 253.131f;
						case 14:
							return -147.1f, -994.49f, 260.852f;
						case 15:
							return -152.819f, -985.958f, 253.131f;
						case 16:
							return -148.619f, -951.681f, 253.131f;
						case 17:
							return -147.133f, -951.752f, 253.131f;
						case 18:
							return -170.741f, -980.019f, 253.131f;
						case 19:
							return -154.076f, -984.87f, 253.131f;
						default:
					}
					break;
				case 40:
					switch (iParam0)
					{
						case 0:
							return 449.462f, -262.52f, 70.238f;
						case 1:
							return 442.651f, -261.782f, 70.247f;
						case 2:
							return 423.16f, -259.255f, 70.25f;
						case 3:
							return 422.516f, -258.425f, 70.251f;
						case 4:
							return 414.287f, -236.019f, 73.251f;
						case 5:
							return 442.547f, -260.569f, 70.247f;
						case 6:
							return 453.584f, -259.089f, 73.807f;
						case 7:
							return 401.521f, -242.696f, 73.252f;
						case 8:
							return 439.391f, -268.246f, 70.245f;
						case 9:
							return 431.611f, -266.863f, 70.249f;
						case 10:
							return 407.7993f, -248.8011f, 71.4987f;
						case 11:
							return 446.305f, -267.281f, 70.238f;
						case 12:
							return 447.542f, -266.996f, 70.238f;
						case 13:
							return 412.912f, -236.345f, 73.251f;
						case 14:
							return 446.86f, -272.326f, 73.807f;
						case 15:
							return 402.363f, -243.797f, 73.252f;
						case 16:
							return 421.379f, -249.522f, 73.251f;
						case 17:
							return 406.669f, -258.085f, 70.24f;
						case 18:
							return 430.744f, -253.762f, 70.253f;
						case 19:
							return 399.449f, -248.934f, 73.252f;
						default:
					}
					break;
				case 41:
					switch (iParam0)
					{
						case 0:
							return 273.69f, 218.698f, 136.757f;
						case 1:
							return 275.351f, 219.248f, 136.757f;
						case 2:
							return 306.293f, 294.227f, 131.091f;
						case 3:
							return 300.332f, 268.405f, 131.091f;
						case 4:
							return 284.686f, 283.326f, 131.091f;
						case 5:
							return 283.728f, 284.528f, 131.091f;
						case 6:
							return 254.6654f, 265.5165f, 136.7574f;
						case 7:
							return 282.549f, 294.187f, 131.091f;
						case 8:
							return 260.601f, 256.865f, 136.757f;
						case 9:
							return 258.817f, 256.414f, 136.757f;
						case 10:
							return 261.207f, 212.967f, 136.757f;
						case 11:
							return 275.37f, 265.657f, 136.757f;
						case 12:
							return 290.703f, 247.523f, 122.819f;
						case 13:
							return 289.878f, 249.024f, 122.819f;
						case 14:
							return 283.138f, 240.139f, 127.398f;
						case 15:
							return 277.176f, 201.076f, 136.757f;
						case 16:
							return 261.957f, 251.711f, 136.757f;
						case 17:
							return 286.243f, 228.271f, 136.757f;
						case 18:
							return 296.809f, 305.152f, 131.091f;
						case 19:
							return 304.936f, 293.503f, 131.091f;
						default:
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 48:
					switch (iParam4)
					{
						case 0:
							switch (iParam0)
							{
								case 0:
									return 993.839f, 63.433f, 103.018f;
								case 1:
									return 995.801f, 54.904f, 103.018f;
								case 2:
									return 988.85f, 68.939f, 106.768f;
								case 3:
									return 998.417f, 62.456f, 103.018f;
								case 4:
									return 982.644f, 66.508f, 106.768f;
								case 5:
									return 986.096f, 61.713f, 106.768f;
								case 6:
									return 988.643f, 70.51f, 106.768f;
								case 7:
									return 986.19f, 54.502f, 103.018f;
								case 8:
									return 996.02f, 56.262f, 103.018f;
								case 9:
									return 990.249f, 50.845f, 103.018f;
								default:
							}
							break;
						case 1:
							switch (iParam0)
							{
								case 0:
									return -1002.324f, -760.707f, 78.858f;
								case 1:
									return -1001.445f, -759.305f, 78.858f;
								case 2:
									return -1008.288f, -757.25f, 78.858f;
								case 3:
									return -1014.908f, -754.371f, 78.857f;
								case 4:
									return -1013.581f, -753.655f, 78.857f;
								case 5:
									return -1005.01f, -741.265f, 75.537f;
								case 6:
									return -1013.19f, -738.327f, 75.537f;
								case 7:
									return -1000.486f, -733.255f, 75.537f;
								case 8:
									return -998.99f, -734.27f, 75.537f;
								case 9:
									return -993.651f, -748.135f, 75.537f;
								default:
							}
							break;
						case 2:
							switch (iParam0)
							{
								case 0:
									return -773.1f, 780.86f, 212.963f;
								case 1:
									return -759.681f, 788.601f, 213.576f;
								case 2:
									return -758.178f, 788.205f, 213.576f;
								case 3:
									return -771.967f, 769.721f, 212.199f;
								case 4:
									return -735.372f, 786.294f, 212.199f;
								case 5:
									return -735.52f, 784.694f, 212.199f;
								case 6:
									return -752.624f, 797.015f, 219.145f;
								case 7:
									return -751.734f, 770.025f, 212.199f;
								case 8:
									return -778.527f, 783.835f, 212.962f;
								case 9:
									return -762.157f, 769.609f, 212.199f;
								default:
							}
							break;
						case 3:
							switch (iParam0)
							{
								case 0:
									return 768.73f, -1703.733f, 43.147f;
								case 1:
									return 769.303f, -1705.188f, 43.147f;
								case 2:
									return 781.62f, -1718.228f, 43.147f;
								case 3:
									return 782.896f, -1717.428f, 43.147f;
								case 4:
									return 784.584f, -1693.391f, 43.147f;
								case 5:
									return 782.455f, -1703.404f, 43.147f;
								case 6:
									return 787.975f, -1708.351f, 43.147f;
								case 7:
									return 765.399f, -1709.103f, 43.147f;
								case 8:
									return 779.672f, -1711.359f, 43.147f;
								case 9:
									return 784.57f, -1694.791f, 43.147f;
								default:
							}
							break;
						case 4:
							switch (iParam0)
							{
								case 0:
									return -2210.406f, 269.121f, 197.109f;
								case 1:
									return -2211.011f, 267.504f, 197.109f;
								case 2:
									return -2213.194f, 255.374f, 197.109f;
								case 3:
									return -2212.134f, 254.583f, 197.109f;
								case 4:
									return -2205.039f, 268.154f, 197.109f;
								case 5:
									return -2203.703f, 260.786f, 197.109f;
								case 6:
									return -2216.626f, 270.564f, 197.109f;
								case 7:
									return -2211.247f, 277.544f, 197.109f;
								case 8:
									return -2218.306f, 262.595f, 197.109f;
								case 9:
									return -2209.449f, 258.3f, 197.109f;
								default:
							}
							break;
					}
					break;
				case 49:
					switch (iParam4)
					{
						case 0:
							switch (iParam0)
							{
								case 0:
									return 36.335f, 160.14f, 125.216f;
								case 1:
									return 36.81f, 161.489f, 125.216f;
								case 2:
									return 40.953f, 178.207f, 125.216f;
								case 3:
									return 42.204f, 178.419f, 125.216f;
								case 4:
									return 32.215f, 173.353f, 125.216f;
								case 5:
									return 43.557f, 160.005f, 125.216f;
								case 6:
									return 44.03f, 169.237f, 125.216f;
								case 7:
									return 51.268f, 163.151f, 125.297f;
								case 8:
									return 33.452f, 172.868f, 125.216f;
								case 9:
									return 35.957f, 167.011f, 125.216f;
								default:
							}
							break;
						case 1:
							switch (iParam0)
							{
								case 0:
									return 61.077f, -1019.272f, 78.78f;
								case 1:
									return 52.406f, -1016.374f, 82.406f;
								case 2:
									return 61.914f, -1017.994f, 78.787f;
								case 3:
									return 59.311f, -1010.107f, 78.82f;
								case 4:
									return 68.599f, -1023.203f, 78.769f;
								case 5:
									return 61.914f, -1029.657f, 78.748f;
								case 6:
									return 63.109f, -1029.76f, 78.75f;
								case 7:
									return 53.874f, -1023.26f, 78.746f;
								case 8:
									return 55.604f, -1017.201f, 78.771f;
								case 9:
									return 53.067f, -1022.341f, 78.745f;
								default:
							}
							break;
						case 2:
							switch (iParam0)
							{
								case 0:
									return -1660.653f, -525.339f, 74.057f;
								case 1:
									return -1659.457f, -524.319f, 74.057f;
								case 2:
									return -1653.834f, -521.179f, 74.058f;
								case 3:
									return -1649.052f, -517.647f, 77.507f;
								case 4:
									return -1647.756f, -509.018f, 77.507f;
								case 5:
									return -1636.601f, -516.388f, 74.058f;
								case 6:
									return -1637.474f, -517.626f, 74.058f;
								case 7:
									return -1647.528f, -525.36f, 74.058f;
								case 8:
									return -1633.922f, -506.23f, 74.059f;
								case 9:
									return -1633.56f, -508.089f, 74.059f;
								default:
							}
							break;
						case 3:
							switch (iParam0)
							{
								case 0:
									return -28.885f, -608.424f, 111.004f;
								case 1:
									return -27.785f, -607.235f, 111.004f;
								case 2:
									return -39.118f, -605.699f, 111.004f;
								case 3:
									return -37.083f, -589.025f, 105.328f;
								case 4:
									return -29.833f, -595.688f, 105.328f;
								case 5:
									return -23.787f, -593.053f, 105.328f;
								case 6:
									return -23.517f, -594.444f, 105.328f;
								case 7:
									return -31.017f, -582.113f, 105.328f;
								case 8:
									return -29.931f, -581.349f, 105.328f;
								case 9:
									return -20.856f, -585.15f, 105.328f;
								default:
							}
							break;
						case 4:
							switch (iParam0)
							{
								case 0:
									return -712.716f, 699.536f, 169.036f;
								case 1:
									return -711.212f, 700.331f, 169.036f;
								case 2:
									return -703.363f, 692.511f, 169.036f;
								case 3:
									return -704.323f, 683.645f, 157.587f;
								case 4:
									return -704.507f, 682.016f, 157.587f;
								case 5:
									return -713.181f, 679.291f, 157.587f;
								case 6:
									return -708.112f, 672.476f, 157.587f;
								case 7:
									return -712.499f, 690.301f, 157.636f;
								case 8:
									return -713.866f, 691.405f, 157.636f;
								case 9:
									return -696.879f, 679.535f, 157.587f;
								default:
							}
							break;
					}
					break;
				case 50:
					switch (iParam4)
					{
						case 0:
							switch (iParam0)
							{
								case 0:
									return -640.537f, 322.246f, 139.152f;
								case 1:
									return -639.763f, 320.936f, 139.152f;
								case 2:
									return -653.326f, 317.202f, 139.152f;
								case 3:
									return -652.302f, 318.385f, 139.152f;
								case 4:
									return -661.12f, 312.304f, 139.152f;
								case 5:
									return -642.867f, 309.892f, 139.152f;
								case 6:
									return -645.223f, 316.689f, 139.152f;
								case 7:
									return -661.157f, 320.958f, 139.152f;
								case 8:
									return -661.545f, 322.142f, 139.152f;
								case 9:
									return -648.312f, 324.596f, 139.152f;
								default:
							}
							break;
						case 1:
							switch (iParam0)
							{
								case 0:
									return -235.761f, -836.681f, 124.257f;
								case 1:
									return -235.048f, -837.794f, 124.257f;
								case 2:
									return -218.439f, -837.915f, 124.257f;
								case 3:
									return -228.814f, -843.418f, 127.891f;
								case 4:
									return -229.3f, -844.788f, 127.891f;
								case 5:
									return -225.591f, -841.045f, 124.257f;
								case 6:
									return -219.375f, -830.123f, 125.793f;
								case 7:
									return -226.836f, -824.629f, 125.793f;
								case 8:
									return -226.003f, -835.978f, 124.257f;
								case 9:
									return -227.487f, -835.91f, 124.257f;
								default:
							}
							break;
						case 2:
							switch (iParam0)
							{
								case 0:
									return 767.098f, -1778.02f, 52.292f;
								case 1:
									return 767.94f, -1776.889f, 52.292f;
								case 2:
									return 753.899f, -1778.207f, 48.292f;
								case 3:
									return 753.349f, -1785.912f, 48.292f;
								case 4:
									return 765.624f, -1785.842f, 48.292f;
								case 5:
									return 762.323f, -1789.169f, 48.292f;
								case 6:
									return 761.597f, -1787.714f, 48.292f;
								case 7:
									return 764.846f, -1772.592f, 52.292f;
								case 8:
									return 757.193f, -1797.583f, 48.292f;
								case 9:
									return 757.355f, -1795.989f, 48.292f;
								default:
							}
							break;
						case 3:
							switch (iParam0)
							{
								case 0:
									return -817.849f, -716.638f, 123.238f;
								case 1:
									return -817.143f, -715.266f, 123.238f;
								case 2:
									return -818.986f, -709.256f, 123.238f;
								case 3:
									return -823.145f, -701.355f, 120.273f;
								case 4:
									return -820.585f, -722.424f, 120.273f;
								case 5:
									return -826.581f, -727.254f, 120.273f;
								case 6:
									return -836.386f, -720.485f, 120.273f;
								case 7:
									return -830.627f, -717.602f, 120.272f;
								case 8:
									return -829.2f, -717.849f, 120.272f;
								case 9:
									return -829.929f, -722.261f, 120.273f;
								default:
							}
							break;
						case 4:
							switch (iParam0)
							{
								case 0:
									return 304.545f, 121.992f, 144.169f;
								case 1:
									return 307.53f, 118.299f, 144.169f;
								case 2:
									return 303.579f, 112.923f, 144.169f;
								case 3:
									return 311.11f, 111.17f, 144.169f;
								case 4:
									return 312.107f, 112.245f, 144.169f;
								case 5:
									return 318.931f, 107.032f, 144.169f;
								case 6:
									return 306.023f, 130.031f, 144.169f;
								case 7:
									return 307.452f, 129.553f, 144.169f;
								case 8:
									return 312.966f, 123.354f, 144.169f;
								case 9:
									return 326.782f, 104.762f, 144.169f;
								default:
							}
							break;
					}
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 402:
					switch (iParam0)
					{
						case 0:
							return -1241.245f, -860.886f, 64.331f;
						case 1:
							return -1247.167f, -852.088f, 67.858f;
						case 2:
							return -1243.597f, -847.413f, 76.72f;
						case 3:
							return -1234.752f, -844.044f, 76.537f;
						case 4:
							return -1238.958f, -849.562f, 84.096f;
						case 5:
							return -1253.948f, -840.236f, 64.331f;
						case 6:
							return -1253.731f, -841.355f, 64.331f;
						case 7:
							return -1259.925f, -828.494f, 64.331f;
						case 8:
							return -1248.383f, -831.564f, 64.331f;
						case 9:
							return -1259.494f, -842.032f, 64.331f;
						default:
					}
					break;
				case 403:
					switch (iParam0)
					{
						case 0:
							return 221.5159f, -3177.2446f, 39.5351f;
						case 1:
							return 229.0691f, -3159.9866f, 49.0724f;
						case 2:
							return 257.9539f, -3167.6272f, 43.7787f;
						case 3:
							return 238.3749f, -3193.6406f, 39.5346f;
						case 4:
							return 195.9496f, -3165.034f, 42.2666f;
						case 5:
							return 193.1859f, -3187.7744f, 42.3897f;
						case 6:
							return 224.9519f, -3155.6655f, 64.0225f;
						case 7:
							return 263.1786f, -3176.3186f, 42.2673f;
						case 8:
							return 225.5325f, -3193.258f, 39.5357f;
						case 9:
							return 224.0226f, -3191.8992f, 39.5358f;
						default:
					}
					break;
				case 404:
					switch (iParam0)
					{
						case 0:
							return -148.012f, -1291.253f, 49.298f;
						case 1:
							return -143.001f, -1286.551f, 46.898f;
						case 2:
							return -135.593f, -1256.901f, 47.884f;
						case 3:
							return -138.819f, -1270.81f, 46.898f;
						case 4:
							return -151.248f, -1270.13f, 46.898f;
						case 5:
							return -153.862f, -1278.051f, 46.898f;
						case 6:
							return -153.746f, -1279.399f, 46.898f;
						case 7:
							return -122.897f, -1259.813f, 49.632f;
						case 8:
							return -142.455f, -1291.391f, 51.208f;
						case 9:
							return -130.425f, -1283.501f, 46.898f;
						default:
					}
					break;
				case 405:
					switch (iParam0)
					{
						case 0:
							return 911.642f, -1703.261f, 56.134f;
						case 1:
							return 904.0347f, -1698.9255f, 50.135f;
						case 2:
							return 918.6627f, -1681.3534f, 50.1266f;
						case 3:
							return 919.484f, -1667.931f, 50.128f;
						case 4:
							return 909.869f, -1688.646f, 50.131f;
						case 5:
							return 911.682f, -1688.183f, 50.134f;
						case 6:
							return 905.2239f, -1667.8531f, 50.1239f;
						case 7:
							return 902.225f, -1688.5007f, 50.128f;
						case 8:
							return 917.1311f, -1698.5657f, 50.1266f;
						case 9:
							return 902.419f, -1679.301f, 50.127f;
						default:
					}
					break;
				case 406:
					switch (iParam0)
					{
						case 0:
							return 919.419f, -936.738f, 58.092f;
						case 1:
							return 921.712f, -922.279f, 58.091f;
						case 2:
							return 931.61f, -915.985f, 67.983f;
						case 3:
							return 941.124f, -923.67f, 67.983f;
						case 4:
							return 945.923f, -939.461f, 58.092f;
						case 5:
							return 945.552f, -938.02f, 58.092f;
						case 6:
							return 953.141f, -915.568f, 58.089f;
						case 7:
							return 960.675f, -942.48f, 58.092f;
						case 8:
							return 943.229f, -948.066f, 58.093f;
						case 9:
							return 932.96f, -948.169f, 58.093f;
						default:
					}
					break;
				case 407:
					switch (iParam0)
					{
						case 0:
							return 86.375f, -356.298f, 66.202f;
						case 1:
							return 87.344f, -355.182f, 66.202f;
						case 2:
							return 77.099f, -344.416f, 66.202f;
						case 3:
							return 78.125f, -344.341f, 66.202f;
						case 4:
							return 91.412f, -344.504f, 74.567f;
						case 5:
							return 84.404f, -342.019f, 74.567f;
						case 6:
							return 95.296f, -332.612f, 74.567f;
						case 7:
							return 70.619f, -353.066f, 66.202f;
						case 8:
							return 91.625f, -350.223f, 66.202f;
						case 9:
							return 86.585f, -328.404f, 74.566f;
						default:
					}
					break;
				case 408:
					switch (iParam0)
					{
						case 0:
							return -1554.797f, 206.311f, 74.501f;
						case 1:
							return -1571.788f, 232.051f, 74.501f;
						case 2:
							return -1602.064f, 208.697f, 74.501f;
						case 3:
							return -1580.378f, 185.462f, 74.501f;
						case 4:
							return -1557.9297f, 220.2588f, 73.3379f;
						case 5:
							return -1592.2454f, 191.2693f, 73.3379f;
						case 6:
							return -1570.87f, 209.645f, 73.338f;
						case 7:
							return -1569.802f, 210.321f, 73.338f;
						case 8:
							return -1569.4164f, 195.1552f, 74.5253f;
						case 9:
							return -1587.017f, 223.812f, 73.338f;
						default:
					}
					break;
				case 409:
					switch (iParam0)
					{
						case 0:
							return -2257.5444f, 404.0342f, 187.6023f;
						case 1:
							return -2274.2856f, 388.3651f, 187.6023f;
						case 2:
							return -2249.034f, 359.261f, 187.602f;
						case 3:
							return -2269.908f, 369.777f, 187.602f;
						case 4:
							return -2269.989f, 371.03f, 187.602f;
						case 5:
							return -2260.069f, 347.714f, 191.602f;
						case 6:
							return -2267.69f, 359.853f, 191.601f;
						case 7:
							return -2280.99f, 364.928f, 191.601f;
						case 8:
							return -2249.967f, 385.757f, 187.602f;
						case 9:
							return -2263.6326f, 380.5144f, 187.6023f;
						default:
					}
					break;
				case 410:
					switch (iParam0)
					{
						case 0:
							return -729.534f, -225.252f, 47.519f;
						case 1:
							return -737.255f, -228.409f, 47.519f;
						case 2:
							return -760.615f, -222.628f, 52.093f;
						case 3:
							return -753.98f, -233.379f, 50.103f;
						case 4:
							return -746.828f, -227.364f, 50.719f;
						case 5:
							return -751.093f, -217.187f, 52.093f;
						case 6:
							return -748.817f, -217.257f, 47.519f;
						case 7:
							return -736.502f, -213.17f, 47.519f;
						case 8:
							return -743.071f, -227.339f, 47.519f;
						case 9:
							return -741.929f, -227f, 47.519f;
						default:
					}
					break;
				case 411:
					switch (iParam0)
					{
						case 0:
							return 43.438f, -1770.503f, 46.7003f;
						case 1:
							return 41.8568f, -1770.1423f, 46.7003f;
						case 2:
							return 57.698f, -1756.6964f, 46.7003f;
						case 3:
							return 55.3729f, -1781.2354f, 46.7003f;
						case 4:
							return 44.882f, -1794.009f, 46.7f;
						case 5:
							return 38.2896f, -1762.8362f, 46.7003f;
						case 6:
							return 43.1372f, -1755.6052f, 46.7003f;
						case 7:
							return 66.513f, -1766.5549f, 46.7003f;
						case 8:
							return 25.3873f, -1778.477f, 46.7003f;
						case 9:
							return 35.9339f, -1788.0292f, 46.7003f;
						default:
					}
					break;
				case 412:
					switch (iParam0)
					{
						case 0:
							return 807.3306f, -2506.7488f, 43.5287f;
						case 1:
							return 805.1691f, -2530.161f, 43.6459f;
						case 2:
							return 852.704f, -2527.866f, 39.525f;
						case 3:
							return 853.969f, -2527.156f, 39.525f;
						case 4:
							return 829.8645f, -2530.7913f, 39.5252f;
						case 5:
							return 815.3445f, -2511.8596f, 39.5252f;
						case 6:
							return 858.334f, -2535.013f, 51.304f;
						case 7:
							return 859.411f, -2512.627f, 51.302f;
						case 8:
							return 842.6375f, -2525.0676f, 39.5252f;
						case 9:
							return 845.27f, -2506.093f, 45.629f;
						default:
					}
					break;
				case 413:
					switch (iParam0)
					{
						case 0:
							return -415.953f, -351.547f, 75.803f;
						case 1:
							return -412.4012f, -331.443f, 74.5519f;
						case 2:
							return -378.2829f, -362.256f, 75.8033f;
						case 3:
							return -369.0065f, -352.5716f, 75.8033f;
						case 4:
							return -410.68f, -318.127f, 75.803f;
						case 5:
							return -394.736f, -327.926f, 74.552f;
						case 6:
							return -398.1195f, -358.1539f, 74.5519f;
						case 7:
							return -371.8193f, -342.3575f, 75.8033f;
						case 8:
							return -393.98f, -347.8469f, 69.9677f;
						case 9:
							return -392.8957f, -346.4381f, 69.9677f;
						default:
					}
					break;
				case 414:
					switch (iParam0)
					{
						case 0:
							return 84.682f, -926.144f, 84.289f;
						case 1:
							return 84.475f, -924.801f, 84.289f;
						case 2:
							return 68.6492f, -933.1027f, 86.6149f;
						case 3:
							return 70.033f, -913.386f, 90.224f;
						case 4:
							return 59.523f, -909.808f, 90.224f;
						case 5:
							return 73.2373f, -882.8674f, 87.2874f;
						case 6:
							return 40.3994f, -953.5738f, 86.6149f;
						case 7:
							return 114.4019f, -910.8043f, 86.6149f;
						case 8:
							return 84.1356f, -964.3251f, 87.2874f;
						case 9:
							return 55.887f, -922.111f, 90.224f;
						default:
					}
					break;
				case 415:
					switch (iParam0)
					{
						case 0:
							return 200.262f, 249.817f, 140.478f;
						case 1:
							return 193.757f, 256.771f, 140.478f;
						case 2:
							return 192.993f, 257.908f, 140.478f;
						case 3:
							return 178.7133f, 241.7415f, 140.478f;
						case 4:
							return 195.7806f, 265.6559f, 140.478f;
						case 5:
							return 210.8017f, 280.0156f, 140.478f;
						case 6:
							return 196.6735f, 278.4822f, 144.2149f;
						case 7:
							return 193.1881f, 218.8174f, 142.9514f;
						case 8:
							return 167.5761f, 232.6193f, 140.478f;
						case 9:
							return 178.8973f, 264.8475f, 140.6698f;
						default:
					}
					break;
				case 416:
					switch (iParam0)
					{
						case 0:
							return 1233.3771f, -2992.5781f, 11.1643f;
						case 1:
							return 1234.2971f, -2991.5215f, 11.1643f;
						case 2:
							return 1252.4178f, -2976.916f, 14.0164f;
						case 3:
							return 1229.1168f, -2973.5205f, 14.0068f;
						case 4:
							return 1228.2269f, -2999.2625f, 11.1892f;
						case 5:
							return 1252.7341f, -2989.4634f, 11.1892f;
						case 6:
							return 1220.3927f, -2950.7197f, 23.3933f;
						case 7:
							return 1220.5634f, -2943.979f, 19.2356f;
						case 8:
							return 1242.5059f, -2972.609f, 13.985f;
						case 9:
							return 1249.1902f, -2999.9133f, 11.1643f;
						default:
					}
					break;
				case 417:
					switch (iParam0)
					{
						case 0:
							return -150.046f, 6181.678f, 39.164f;
						case 1:
							return -136.614f, 6196.408f, 41.745f;
						case 2:
							return -133.296f, 6182.882f, 39.165f;
						case 3:
							return -134.872f, 6183.476f, 39.165f;
						case 4:
							return -132.998f, 6157.5f, 39.165f;
						case 5:
							return -118.243f, 6172.255f, 39.166f;
						case 6:
							return -117.977f, 6186.227f, 41.745f;
						case 7:
							return -150.263f, 6159.284f, 45.033f;
						case 8:
							return -169.051f, 6179.5f, 42.015f;
						case 9:
							return -126.2756f, 6206.033f, 39.1642f;
						default:
					}
					break;
				case 418:
					switch (iParam0)
					{
						case 0:
							return 2752.159f, 3480.292f, 72.704f;
						case 1:
							return 2740.582f, 3453.213f, 72.704f;
						case 2:
							return 2734.345f, 3439.861f, 72.704f;
						case 3:
							return 2722.463f, 3476.89f, 72.704f;
						case 4:
							return 2736.82f, 3506.878f, 72.704f;
						case 5:
							return 2758.378f, 3498.612f, 72.704f;
						case 6:
							return 2736.846f, 3468.056f, 72.704f;
						case 7:
							return 2738.566f, 3468.158f, 72.704f;
						case 8:
							return 2720.782f, 3444.382f, 72.704f;
						case 9:
							return 2750.839f, 3510.972f, 72.704f;
						default:
					}
					break;
				case 419:
					switch (iParam0)
					{
						case 0:
							return 1717.582f, 4779.564f, 46.58f;
						case 1:
							return 1718.059f, 4778.125f, 46.58f;
						case 2:
							return 1715.728f, 4817.185f, 57.53f;
						case 3:
							return 1697.657f, 4774.696f, 46.592f;
						case 4:
							return 1699.47f, 4788.449f, 46.591f;
						case 5:
							return 1724.283f, 4787.652f, 46.576f;
						case 6:
							return 1722.795f, 4762.071f, 46.577f;
						case 7:
							return 1724.246f, 4777.154f, 46.576f;
						case 8:
							return 1713.765f, 4788.574f, 46.583f;
						case 9:
							return 1710.54f, 4762.273f, 46.585f;
						default:
					}
					break;
				case 420:
					switch (iParam0)
					{
						case 0:
							return 594.778f, 2759.065f, 50.145f;
						case 1:
							return 593.665f, 2757.867f, 50.145f;
						case 2:
							return 615.973f, 2746.374f, 47.529f;
						case 3:
							return 599.403f, 2768.54f, 50.145f;
						case 4:
							return 609.388f, 2782.184f, 47.529f;
						case 5:
							return 587.214f, 2775.984f, 50.145f;
						case 6:
							return 574.057f, 2788.009f, 47.529f;
						case 7:
							return 581.445f, 2765.342f, 50.145f;
						case 8:
							return 576.375f, 2744.06f, 47.529f;
						case 9:
							return 593.983f, 2745.489f, 50.145f;
						default:
					}
					break;
				case 421:
					switch (iParam0)
					{
						case 0:
							return 740.717f, 1272.862f, 382.171f;
						case 1:
							return 717.544f, 1294.909f, 362.335f;
						case 2:
							return 742.716f, 1269.462f, 382.171f;
						case 3:
							return 756.13f, 1315.819f, 361.897f;
						case 4:
							return 739.411f, 1286.967f, 359.297f;
						case 5:
							return 738.328f, 1286.427f, 359.297f;
						case 6:
							return 755.07f, 1286.479f, 359.297f;
						case 7:
							return 733.575f, 1270.793f, 359.296f;
						case 8:
							return 721.345f, 1280.248f, 359.296f;
						case 9:
							return 756.485f, 1295.423f, 365.642f;
						default:
					}
					break;
				case 422:
					switch (iParam0)
					{
						case 0:
							return -1121.49f, 2709.752f, 22.841f;
						case 1:
							return -1129.793f, 2702.539f, 21.727f;
						case 2:
							return -1105.192f, 2702.184f, 22.841f;
						case 3:
							return -1104.785f, 2703.869f, 22.841f;
						case 4:
							return -1123.891f, 2683.237f, 22.862f;
						case 5:
							return -1108.987f, 2695.732f, 22.841f;
						case 6:
							return -1108.028f, 2720.478f, 21.987f;
						case 7:
							return -1094.767f, 2714.759f, 22.892f;
						case 8:
							return -1110.711f, 2711.278f, 22.841f;
						case 9:
							return -1133.49f, 2683.898f, 22.862f;
						default:
					}
					break;
				case 423:
					switch (iParam0)
					{
						case 0:
							return 1512.0715f, 3578.0125f, 41.1119f;
						case 1:
							return 1520.8658f, 3569.8887f, 41.1119f;
						case 2:
							return 1536.5065f, 3579.2239f, 40.9293f;
						case 3:
							return 1505.981f, 3589.0903f, 37.9928f;
						case 4:
							return 1495.3202f, 3591.0564f, 37.9223f;
						case 5:
							return 1502.4833f, 3577.8499f, 41.1119f;
						case 6:
							return 1527.5436f, 3582.1616f, 41.0019f;
						case 7:
							return 1512.2028f, 3579.5725f, 41.105f;
						case 8:
							return 1523.7448f, 3589.833f, 41.1119f;
						case 9:
							return 1509.0139f, 3566.4512f, 41.1167f;
						default:
					}
					break;
				case 424:
					switch (iParam0)
					{
						case 0:
							return -1584.4879f, 767.3894f, 193.7737f;
						case 1:
							return -1594.2323f, 754.8381f, 188.1942f;
						case 2:
							return -1596.0197f, 755.4628f, 188.2431f;
						case 3:
							return -1606.0719f, 778.0377f, 188.2431f;
						case 4:
							return -1617.6896f, 769.1016f, 188.2431f;
						case 5:
							return -1591.1614f, 784.3525f, 188.1931f;
						case 6:
							return -1610.7322f, 746.0071f, 188.1942f;
						case 7:
							return -1568.5365f, 792.207f, 192.723f;
						case 8:
							return -1612.5568f, 775.4239f, 188.2431f;
						case 9:
							return -1615.63f, 756.1089f, 188.2431f;
						default:
					}
					break;
				case 425:
					switch (iParam0)
					{
						case 0:
							return 256.222f, 3614.633f, 32.806f;
						case 1:
							return 257.008f, 3613.408f, 32.875f;
						case 2:
							return 242.458f, 3579.493f, 32.951f;
						case 3:
							return 272.806f, 3595.479f, 33.478f;
						case 4:
							return 276.335f, 3614.891f, 32.353f;
						case 5:
							return 264.696f, 3629.104f, 32.694f;
						case 6:
							return 242.277f, 3627.259f, 32.267f;
						case 7:
							return 230.278f, 3608.565f, 31.984f;
						case 8:
							return 246.411f, 3600.292f, 33.157f;
						case 9:
							return 254.944f, 3587.252f, 33.367f;
						default:
					}
					break;
				case 426:
					switch (iParam0)
					{
						case 0:
							return 163.163f, 7351.401f, 10.181f;
						case 1:
							return 163.161f, 7352.593f, 10.372f;
						case 2:
							return 139.341f, 7364.27f, 10.984f;
						case 3:
							return 124.156f, 7344.552f, 7.191f;
						case 4:
							return 150.251f, 7345.709f, 9.436f;
						case 5:
							return 161.094f, 7362.242f, 11.316f;
						case 6:
							return 180.912f, 7349.258f, 9.38f;
						case 7:
							return 165.447f, 7394.631f, 12.233f;
						case 8:
							return 179.553f, 7370.326f, 10.257f;
						case 9:
							return 151.678f, 7323.988f, 7.247f;
						default:
					}
					break;
				case 427:
					switch (iParam0)
					{
						case 0:
							return 2942.871f, 781.635f, 25.272f;
						case 1:
							return 2940.356f, 781.629f, 25.387f;
						case 2:
							return 2933.516f, 750.95f, 20.379f;
						case 3:
							return 2955.591f, 775.511f, 22.517f;
						case 4:
							return 2969.784f, 802.148f, 22.618f;
						case 5:
							return 2950.667f, 817.028f, 21.971f;
						case 6:
							return 2934.556f, 802.034f, 23.771f;
						case 7:
							return 2912.823f, 790.946f, 24.669f;
						case 8:
							return 2911.894f, 767.518f, 21.263f;
						case 9:
							return 2974.739f, 818.787f, 19.359f;
						default:
					}
					break;
				case 428:
					switch (iParam0)
					{
						case 0:
							return 3630.813f, 5684.452f, 6.813f;
						case 1:
							return 3664.851f, 5640.506f, 10.001f;
						case 2:
							return 3673.71f, 5654.524f, 9.056f;
						case 3:
							return 3610.174f, 5693.59f, 4.565f;
						case 4:
							return 3658.0098f, 5659.6875f, 9.5492f;
						case 5:
							return 3632.1897f, 5662.7036f, 7.2817f;
						case 6:
							return 3633.7815f, 5662.2163f, 7.4439f;
						case 7:
							return 3618.0222f, 5671.42f, 5.7899f;
						case 8:
							return 3597.4146f, 5685.089f, 2.8724f;
						case 9:
							return 3605.3198f, 5668.0527f, 3.215f;
						default:
					}
					break;
				case 429:
					switch (iParam0)
					{
						case 0:
							return 2372.771f, 6623.114f, 2.038f;
						case 1:
							return 2371.609f, 6621.93f, 2.098f;
						case 2:
							return 2366.833f, 6597.827f, 0.581f;
						case 3:
							return 2342.019f, 6615.392f, 15.928f;
						case 4:
							return 2424.178f, 6599.494f, 30.803f;
						case 5:
							return 2365.531f, 6660.948f, 0.821f;
						case 6:
							return 2399.299f, 6634.823f, 7.39f;
						case 7:
							return 2421.907f, 6631.215f, 6.78f;
						case 8:
							return 2382.496f, 6635.962f, 1.441f;
						case 9:
							return 2345.318f, 6641.109f, 4.503f;
						default:
					}
					break;
				case 430:
					switch (iParam0)
					{
						case 0:
							return -2583.97f, 1884.84f, 170.491f;
						case 1:
							return -2584.697f, 1886.401f, 170.491f;
						case 2:
							return -2602.462f, 1880.01f, 170.493f;
						case 3:
							return -2591.284f, 1868.077f, 170.493f;
						case 4:
							return -2572.898f, 1883.877f, 170.493f;
						case 5:
							return -2604.554f, 1923.368f, 171.597f;
						case 6:
							return -2585.322f, 1927.504f, 170.493f;
						case 7:
							return -2581.819f, 1897.202f, 170.492f;
						case 8:
							return -2601.19f, 1895.46f, 170.493f;
						case 9:
							return -2597.702f, 1933.286f, 169.724f;
						default:
					}
					break;
				case 431:
					switch (iParam0)
					{
						case 0:
							return -498.231f, 5258.766f, 91.663f;
						case 1:
							return -521.255f, 5258.972f, 79.6f;
						case 2:
							return -510.748f, 5261.952f, 79.61f;
						case 3:
							return -489.685f, 5264.702f, 85.886f;
						case 4:
							return -496.121f, 5248.5f, 85.786f;
						case 5:
							return -484.816f, 5278.177f, 85.864f;
						case 6:
							return -488.331f, 5308.872f, 88.648f;
						case 7:
							return -512.604f, 5303.447f, 79.245f;
						case 8:
							return -537.641f, 5289.355f, 89.651f;
						case 9:
							return -504.673f, 5292.419f, 81.735f;
						default:
					}
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 552:
					return -230.146f, -2452.379f, 5.001f;
				case 553:
					return 612.522f, -846.216f, 9.914f;
				case 554:
					return 2910.9844f, 764.6005f, 20.4908f;
				case 555:
					return -175.19f, 2859.292f, 31.094f;
				case 556:
					return -1407.526f, 2630.187f, 0.668f;
				case 557:
					return -2663.942f, 2604.504f, 0.522f;
				case 558:
					return -1949.003f, 4581.405f, 1.629f;
				case 559:
					return -508.959f, 4411.951f, 30.783f;
				case 560:
					return 798.803f, -2640.987f, 0.473f;
				case 561:
					return 2267.064f, 2042.688f, 127.747f;
				case 562:
					return 1665.6f, -1632.792f, 111.354f;
				case 563:
					return -1855.706f, -333.456f, 56.077f;
				case 564:
					return 1981.771f, 712.412f, 164.102f;
				case 565:
					return -26.196f, 657.567f, 197.29f;
				case 566:
					return -211.495f, -1807.962f, 0.462f;
				case 567:
					return 320.958f, 2209.022f, 74.752f;
				case 568:
					return 1969.188f, 5042.96f, 40.054f;
				case 569:
					return 2031.294f, 2938.945f, 46.798f;
				case 570:
					return 80.408f, 7078.622f, 0.972f;
				case 571:
					return 3855.785f, 4366.424f, 5.576f;
				case 572:
					return 2916.943f, 5310.497f, 95.144f;
				case 573:
					return 202.0375f, -733.0214f, 46.077f;
				case 574:
					return 709.681f, 4110.024f, 30.527f;
				case 575:
					return 1090.697f, 62.845f, 79.891f;
				case 576:
					return -2829.169f, 1420.082f, 99.907f;
				case 577:
					return -1376.045f, 5351.492f, 1.917f;
				case 578:
					return -1342.771f, -1431.628f, 3.315f;
				case 579:
					return 2468.307f, 3769.068f, 40.429f;
				case 580:
					return -965.251f, -974.511f, 2.857f;
				case 581:
					return 630.514f, 630.29f, 127.911f;
				case 582:
					return -1045.175f, 924.075f, 168.55f;
				case 583:
					return -1185.334f, 45.454f, 52.047f;
				case 584:
					return 1450.326f, 6347.386f, 22.783f;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 11:
					switch (iParam0)
					{
						case 0:
							return 3554.969f, 3656.62f, 32.889f;
						case 1:
							return 3554.421f, 3658.565f, 32.889f;
						case 2:
							return 3546.928f, 3673.249f, 35.177f;
						case 3:
							return 3570.44f, 3677.338f, 40.007f;
						case 4:
							return 3564.608f, 3668.072f, 32.927f;
						case 5:
							return 3584.5146f, 3696.2656f, 35.6428f;
						case 6:
							return 3541.938f, 3670.831f, 32.889f;
						case 7:
							return 3555.623f, 3649.024f, 45.033f;
						case 8:
							return 3615.5022f, 3705.7405f, 42.4911f;
						case 9:
							return 3537.7185f, 3714.2944f, 35.6426f;
						case 10:
							return 3527.66f, 3737.2776f, 35.7308f;
						case 11:
							return 3577.148f, 3658.646f, 32.899f;
						case 12:
							return 3559.525f, 3646.379f, 40.34f;
						case 13:
							return 3540.801f, 3658.951f, 32.889f;
						case 14:
							return 3584.188f, 3681.268f, 40.007f;
						default:
					}
					break;
				case 12:
					switch (iParam0)
					{
						case 0:
							return 1803.6864f, 2610.1611f, 44.5703f;
						case 1:
							return 1803.02f, 2610.914f, 44.572f;
						case 2:
							return 1816.4915f, 2602.6572f, 44.5967f;
						case 3:
							return 1703.291f, 2610.092f, 44.565f;
						case 4:
							return 1678.1202f, 2607.7178f, 44.5649f;
						case 5:
							return 1718.6387f, 2615.9607f, 44.5649f;
						case 6:
							return 1721.7976f, 2595.4514f, 54.448f;
						case 7:
							return 1748.209f, 2613.931f, 54.448f;
						case 8:
							return 1758.906f, 2615.033f, 44.565f;
						case 9:
							return 1757.887f, 2614.084f, 44.565f;
						case 10:
							return 1776.056f, 2600.167f, 44.565f;
						case 11:
							return 1758.8451f, 2599.0312f, 54.4479f;
						case 12:
							return 1732.3331f, 2603.1353f, 44.5649f;
						case 13:
							return 1732.5511f, 2604.1782f, 44.5649f;
						case 14:
							return 1656.778f, 2601.661f, 44.565f;
						case 15:
							return 1655.2925f, 2601.1982f, 44.5649f;
						default:
					}
					break;
				case 13:
					switch (iParam0)
					{
						case 0:
							return -1977.756f, 3295.155f, 39.216f;
						case 1:
							return -1932.189f, 3343.387f, 39.227f;
						case 2:
							return -1936.34f, 3332.095f, 34.416f;
						case 3:
							return -1956.428f, 3298.485f, 31.96f;
						case 4:
							return -1952.4753f, 3331.7998f, 31.9602f;
						case 5:
							return -1953.7706f, 3333.0857f, 31.9602f;
						case 6:
							return -1970.2975f, 3319.267f, 31.9603f;
						case 7:
							return -1970.1691f, 3321.631f, 31.9603f;
						case 8:
							return -1960.415f, 3356.9502f, 31.9603f;
						case 9:
							return -1962.6656f, 3312.2817f, 31.9602f;
						case 10:
							return -1946.528f, 3313.016f, 31.96f;
						case 11:
							return -1921.968f, 3346.394f, 39.161f;
						case 12:
							return -1946.1185f, 3357.3948f, 31.9371f;
						case 13:
							return -1975.679f, 3343.3333f, 32.0184f;
						case 14:
							return -1981.7f, 3304.792f, 39.161f;
						default:
					}
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 51:
					switch (iParam0)
					{
						case 0:
							return -1790.93f, -850.3152f, 6.7606f;
						case 1:
							return -1789.3066f, -851.5523f, 6.8008f;
						default:
					}
					break;
				case 52:
					switch (iParam0)
					{
						case 0:
							return 612.6701f, -542.7713f, 14.2353f;
						case 1:
							return 614.1082f, -542.3696f, 14.2096f;
						default:
					}
					break;
				case 53:
					switch (iParam0)
					{
						case 0:
							return 1744.527f, -1552.651f, 111.641f;
						case 1:
							return 1744.609f, -1553.903f, 111.645f;
						default:
					}
					break;
				case 54:
					switch (iParam0)
					{
						case 0:
							return -3286.9302f, 994.4673f, 2.4803f;
						case 1:
							return -3288.4001f, 994.0409f, 2.3186f;
						default:
					}
					break;
				case 55:
					switch (iParam0)
					{
						case 0:
							return 2525.7617f, 1027.0326f, 76.432f;
						case 1:
							return 2526.5225f, 1025.3094f, 76.4609f;
						default:
					}
					break;
				case 56:
					switch (iParam0)
					{
						case 0:
							return 2432.6914f, 1466.1274f, 37.3969f;
						case 1:
							return 2432.2397f, 1464.6962f, 37.513f;
						default:
					}
					break;
				case 57:
					switch (iParam0)
					{
						case 0:
							return 1362.6135f, 1411.7999f, 102.3359f;
						case 1:
							return 1363.9839f, 1411.3595f, 102.3687f;
						default:
					}
					break;
				case 58:
					switch (iParam0)
					{
						case 0:
							return 315.1063f, 2424.0776f, 47.2845f;
						case 1:
							return 316.2569f, 2424.4243f, 47.3108f;
						default:
					}
					break;
				case 59:
					switch (iParam0)
					{
						case 0:
							return 1191.4181f, 3078.1978f, 39.9078f;
						case 1:
							return 1192.7694f, 3078.74f, 39.9078f;
						default:
					}
					break;
				case 60:
					switch (iParam0)
					{
						case 0:
							return 107.5576f, 3655.8435f, 38.7549f;
						case 1:
							return 108.8687f, 3656.7449f, 38.7072f;
						default:
					}
					break;
				case 61:
					switch (iParam0)
					{
						case 0:
							return 1006.0247f, 4355.015f, 42.917f;
						case 1:
							return 1006.497f, 4356.051f, 42.8266f;
						default:
					}
					break;
				case 62:
					switch (iParam0)
					{
						case 0:
							return 2025.517f, 4787.821f, 40.7012f;
						case 1:
							return 2026.6233f, 4788.78f, 40.7303f;
						default:
					}
					break;
				case 63:
					switch (iParam0)
					{
						case 0:
							return 2653.9087f, 4232.7793f, 42.3191f;
						case 1:
							return 2655.4548f, 4232.901f, 42.2673f;
						default:
					}
					break;
				case 64:
					switch (iParam0)
					{
						case 0:
							return 758.6412f, 6588.3745f, 1.3421f;
						case 1:
							return 759.8186f, 6587.423f, 1.3243f;
						default:
					}
					break;
				case 65:
					switch (iParam0)
					{
						case 0:
							return -335.4713f, 6464.469f, 1.0265f;
						case 1:
							return -336.8973f, 6464.6035f, 1.0551f;
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_43(int iParam0, int iParam1)//Position - 0x44757
{
	switch (iParam1)
	{
		case joaat("insurgent2"):
			switch (iParam0)
			{
				case joaat("hei_prop_heist_transponder"):
					return 0.45f, -2.7f, 1.62f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_44(int iParam0)//Position - 0x44791
{
	switch (iParam0)
	{
		case joaat("insurgent2"):
			return joaat("hei_prop_heist_transponder");
		default:
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x447AF
{
	switch (iParam0)
	{
		case joaat("insurgent2"):
			return 1;
		default:
	}
	return 0;
}

var func_46()//Position - 0x4C20E
{
	return Global_4535597;
}

int func_47(int iParam0)//Position - 0x7DE77
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_22754 /* Tunable: 1563114472 */;
		case 1:
			return Global_262145.f_22755 /* Tunable: SMUG_STEAL_COLLECTION_BONUS */;
		case 2:
			return Global_262145.f_22756 /* Tunable: SMUG_STEAL_NO_RESPAWN_BONUS */;
		case 3:
			return Global_262145.f_22757 /* Tunable: SMUG_STEAL_RECOVERY_BONUS */;
		case 4:
			return Global_262145.f_22758 /* Tunable: SMUG_STEAL_CARRIER_DELIVERY_BONUS */;
		case 5:
			return Global_262145.f_22759 /* Tunable: SMUG_STEAL_SUPPORTER_BONUS */;
		case 6:
			return Global_262145.f_22760 /* Tunable: -1252391406 */;
		default:
	}
	return 0;
}

struct<4> func_48()//Position - 0x7F076
{
	struct<4> Var0;
	StringCopy(&Var0, "SMTXT_RV_", 16);
	StringIntConCat(&Var0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 16);
	return Var0;
}

int func_49(bool bParam0)//Position - 0x8FA71
{
	return 568;
}

void func_50(struct<3> Param0)//Position - 0x90BCE
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	Param0.f_2 = (Param0.f_2 - 0.2f);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 1f, 1f, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

bool func_51()//Position - 0x9A91B
{
	return PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/);
}

int func_52()//Position - 0xFADD6
{
	return 2359332;
}

int func_53(int iParam0)//Position - 0xFE6A5
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("cuban800"):
		case joaat("volatol"):
			return 1;
			break;
	}
	return 0;
}

int func_54(int iParam0)//Position - 0xFE6D8
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("avenger"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_55()//Position - 0x133444
{
	return Global_262145.f_22823 /* Tunable: SMUG_SELL_HISTORY_LIST */;
}

int func_56()//Position - 0x133453
{
	return Global_262145.f_22733 /* Tunable: -1676961419 */;
}

void func_57(int iParam0)//Position - 0x1351A9
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_179[iVar0]), iVar1);
}

bool func_58(int iParam0)//Position - 0x13526A
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_179[iVar0], iVar1);
}

int func_59(int iParam0)//Position - 0x137525
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1375CA
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("blimp3"):
		case joaat("alkonost"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return 1;
			break;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x1377E4
{
	switch (iParam0)
	{
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
			return 1;
			break;
	}
	return 0;
}

var func_62()//Position - 0x137807
{
	return Global_2815059.f_4656;
}

int func_63(int iParam0)//Position - 0x137816
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("mogul"):
		case joaat("pyro"):
		case joaat("avenger"):
			return 1;
			break;
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x13C94C
{
	switch (iParam0)
	{
		case 0:
			return joaat("sm_prop_smug_crate_s_bones");
		case 1:
			return joaat("sm_prop_smug_crate_s_antiques");
		case 2:
			return joaat("sm_prop_smug_crate_s_hazard");
		case 3:
			return joaat("sm_prop_smug_crate_s_fake");
		case 4:
			return joaat("sm_prop_smug_crate_s_jewellery");
		case 5:
			return joaat("sm_prop_smug_crate_s_medical");
		case 6:
			return joaat("sm_prop_smug_crate_s_narc");
		case 7:
			return joaat("sm_prop_smug_crate_s_tobacco");
		default:
	}
	return joaat("ex_prop_adv_case_sm");
}

void func_65()//Position - 0x13CED6
{
	Global_2815059.f_4636 = 0;
	Global_2815059.f_4637 = 0;
	Global_2815059.f_4638 = 0;
	Global_2815059.f_4639 = 0;
	Global_2815059.f_4640 = 0;
}

int func_66(int iParam0, bool bParam1, bool bParam2)//Position - 0x144D63
{
	if (bParam2)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		case 1:
			return 7;
		case 4:
		case 3:
		case 5:
		case 6:
		case 7:
		case 8:
			if (bParam1)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

void func_67(int iParam0)//Position - 0x28F
{
	MISC::CLEAR_BIT(&(Local_184.f_1), iParam0);
}

void func_68(int iParam0)//Position - 0x2A1
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_184.f_1), iParam0);
}

bool func_69(int iParam0)//Position - 0x2BE
{
	return BitTest(Local_184.f_1, iParam0);
}

int func_70()//Position - 0x2F0
{
	return Local_184.f_10;
}

void func_71(int iParam0)//Position - 0x34FB
{
	Local_184.f_0 = iParam0;
}

bool func_72(var uParam0)//Position - 0x35C7D
{
	return BitTest(uLocal_174, uParam0);
}

void func_73(bool bParam0, int iParam1)//Position - 0x3B5D3
{
	struct<3> Var0;
	Var0.f_0 = -523459633;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

void func_74(int iParam0, int iParam1)//Position - 0x3D1E8
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	fVar7 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var1.f_2 - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	HUD::GET_HUD_COLOUR(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, true, true, 2, false, 0, 0, false);
}

int func_75()//Position - 0x4CEFE
{
	return Local_184.f_0;
}

void func_76()//Position - 0x20401B
{
	iLocal_175 = -1;
}

void func_77(int iParam0, int iParam1, struct<3> Param2)//Position - 0x2107
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
			break;
		case 1:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
			break;
		case 2:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 5f, false, false);
			break;
	}
}

int func_78()//Position - 0x53EB
{
	return Local_342.f_6;
}

void func_79(int iParam0)//Position - 0x53F8
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_342.f_5 = iParam0;
}

int func_80()//Position - 0x5412
{
	return Local_342.f_5;
}

void func_81(int iParam0)//Position - 0x828B
{
	Local_342.f_0 = iParam0;
}

void func_82(int iParam0)//Position - 0x3B504
{
	MISC::SET_BIT(&uLocal_150, iParam0);
}

int func_83()//Position - 0x4ACFD
{
	return Local_342.f_0;
}

int func_84(int iParam0)//Position - 0x201B3E
{
	switch (iParam0)
	{
		case 239:
			return Global_262145.f_24670 /* Tunable: -1203647122 */;
			break;
		case 240:
			return Global_262145.f_24671 /* Tunable: -1963126951 */;
			break;
	}
	return 0;
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2067C5
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		case 3:
			return 6;
		case 1:
		case 5:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

void func_86(int iParam0, int iParam1)//Position - 0xADE
{
	struct<3> Var0;
	Var0.f_0 = 65268844;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

void func_87(int iParam0)//Position - 0xBE9
{
	Local_93.f_0 = iParam0;
}

int func_88(int iParam0, int iParam1)//Position - 0x32CA2
{
	int iVar0;
	if (iParam0 != __LIB_0__::func_160() && iParam1 != __LIB_0__::func_160())
	{
		iVar0 = __LIB_2__::func_191(iParam0);
		if (iVar0 != __LIB_0__::func_160())
		{
			return iVar0 == __LIB_2__::func_191(iParam1);
		}
	}
	return 0;
}

int func_89()//Position - 0x39077
{
	return Local_93.f_0;
}

void func_90(int iParam0)//Position - 0x338
{
	MISC::CLEAR_BIT(&(Local_301.f_1), iParam0);
}

void func_91(int iParam0)//Position - 0x34B
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_301.f_1), iParam0);
}

bool func_92(int iParam0)//Position - 0x369
{
	return BitTest(Local_301.f_1, iParam0);
}

bool func_93(int iParam0, int iParam1)//Position - 0x39A
{
	return BitTest(Local_302[iParam0 /*3*/].f_1, iParam1);
}

var func_94(var uParam0, int iParam1)//Position - 0x14B2C
{
	return uParam0->f_262[iParam1];
}

void func_95(int iParam0)//Position - 0x14F3A
{
	Local_301.f_0 = iParam0;
}

void func_96(int iParam0)//Position - 0x151E8
{
	MISC::SET_BIT(&(Local_302[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), iParam0);
}

void func_97(int iParam0)//Position - 0x46ADF
{
	if (HUD::DOES_BLIP_EXIST(Local_174[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_174[iParam0]));
	}
}

void func_98(int iParam0)//Position - 0x49AC5
{
	MISC::SET_BIT(&uLocal_294, iParam0);
}

bool func_99(var uParam0)//Position - 0x49D3F
{
	return BitTest(uLocal_294, uParam0);
}

void func_100(int iParam0, int iParam1)//Position - 0x49DCD
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	HUD::GET_HUD_COLOUR(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	fVar7 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var1.f_2 - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, true, true, 2, false, 0, 0, false);
}

void func_101(int iParam0)//Position - 0x4EC63
{
	MISC::SET_BIT(&uLocal_293, iParam0);
}

bool func_102(int iParam0)//Position - 0x59D20
{
	return BitTest(uLocal_293, iParam0);
}

void func_103(int iParam0, int iParam1)//Position - 0x5A83B
{
	Local_302[iParam0 /*3*/] = iParam1;
}

int func_104()//Position - 0x5A8A7
{
	return Local_301.f_0;
}

int func_105(int iParam0)//Position - 0x5A8B2
{
	return Local_302[iParam0 /*3*/];
}

int func_106(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x20B1C1
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		case 3:
			return 6;
		case 4:
			return 2;
		case 1:
		case 5:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

Vector3 func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x18A3
{
	switch (iParam1)
	{
		case 0:
			return -1238.8511f, -1400.535f, 3.2165f;
		case 1:
			return -1014.2174f, -533.1254f, 35.2295f;
		case 2:
			return -20.5298f, -1271.142f, 28.273f;
		case 3:
			return 1284.595f, -2562.1226f, 43.0983f;
		case 4:
			return 450.3504f, -1230.4711f, 29.034f;
		case 5:
			return 96.6945f, 63.2934f, 72.4168f;
		case 11:
			return 1121.2118f, 239.838f, 79.8556f;
		case 12:
			return -3054.2773f, 608.0347f, 6.2058f;
		case 13:
			return -2955.04f, 402.565f, 14.059f;
		case 14:
			return 1220.405f, 1870.591f, 77.908f;
		case 15:
			return 1110.4274f, -1262.8817f, 19.3388f;
		case 16:
			return -1307.914f, -1258.692f, 3.536f;
		case 17:
			return -172.4439f, -41.4259f, 51.3666f;
		case 18:
			return -500.5161f, -64.1044f, 38.8799f;
		case 19:
			return 1141.1024f, -1319.1995f, 33.6567f;
		case 20:
			return -1567.8386f, -239.2559f, 48.4769f;
		case 21:
			return -1033.6527f, -2216.249f, 7.9812f;
		case 22:
			return 491.1942f, -2136.7896f, 4.9175f;
		case 23:
			return 2548.7385f, 341.2728f, 107.4612f;
		case 24:
			return -480.7506f, -450.5746f, 33.2013f;
		case 45:
			return 187.2586f, 1246.9894f, 224.4599f;
		case 46:
			return 1881.0984f, -1032.1796f, 77.8668f;
		case 47:
			return -803.2568f, 884.084f, 202.1938f;
		case 48:
			return -2334.7673f, 263.5585f, 168.6021f;
		case 49:
			return 822.6735f, -2979.9612f, 5.0207f;
		case 6:
			return 1511.7168f, -2098.7117f, 75.777f;
		case 7:
			return 777.491f, 1287.714f, 359.297f;
		case 8:
			return -1715.441f, -1134.02f, 12.075f;
		case 9:
			return -1832.078f, -2805.618f, 12.944f;
		case 10:
			return 848.653f, -3209.231f, 4.901f;
		case 30:
			return 979.195f, -127.704f, 72.938f;
		case 31:
			return 977.524f, -1824.118f, 30.159f;
		case 32:
			return -680.7855f, -879.4637f, 23.4991f;
		case 33:
			return -1578.277f, -85.852f, 53.134f;
		case 34:
			return -145.437f, -956.396f, 20.277f;
		case 40:
			return -53.0294f, -1418.961f, 28.328f;
		case 41:
			return 85.7264f, -824.765f, 30.0518f;
		case 42:
			return -892.1681f, 132.276f, 58.3107f;
		case 43:
			return 192.946f, 61.563f, 82.601f;
		case 44:
			return -703.855f, -1137.8f, 9.613f;
		case 50:
			return 370.895f, 793.555f, 186.567f;
		case 51:
			return 348.939f, -1098.917f, 28.413f;
		case 52:
			return -138.215f, 984.602f, 235.012f;
		case 53:
			return -3188.038f, 1209.957f, 8.607f;
		case 54:
			return 1220.717f, -3000.777f, 4.865f;
		case 25:
			return -575.8843f, -133.6788f, 34.8194f;
		case 26:
			return 385.3026f, -1633.9333f, 28.2919f;
		case 27:
			return -1079.7545f, -883.9249f, 3.6029f;
		case 28:
			return 851.1126f, -1403.54f, 25.1226f;
		case 29:
			return -1307.5834f, -1527.4987f, 3.3451f;
		case 55:
			return -690.8977f, -611.4503f, 31.1423f;
		case 56:
			return -1776.953f, -252.487f, 48.395f;
		case 57:
			return -1327.994f, 350.675f, 62.719f;
		case 58:
			return -523.9545f, -249.077f, 34.7553f;
		case 59:
			return 291.944f, 195.6205f, 103.3726f;
		case 60:
			return 717.497f, -3858.922f, 0f;
		case 61:
			return 1983.776f, -3537.736f, -0.187f;
		case 62:
			return -2529.737f, -3526.052f, 0.375f;
		case 63:
			return 58.069f, -4048.858f, 0f;
		case 64:
			return -2531.218f, -1086.706f, 0.937f;
		case 65:
			return -1941.622f, 552.935f, 113.828f;
		case 66:
			return -1906.07f, 407.094f, 95.296f;
		case 67:
			return -927.281f, 15.811f, 46.715f;
		case 68:
			return -912.7903f, 197.7262f, 68.5015f;
		case 69:
			return 174.7607f, 470.654f, 140.9125f;
		case 70:
			return 1359.9131f, -616.0952f, 73.3379f;
		case 71:
			return -57.7033f, 350.6998f, 111.3981f;
		case 72:
			return -1861.5164f, -352.017f, 48.2682f;
		case 73:
			return -3016.0696f, 84.5069f, 10.6081f;
		case 74:
			return -2987.9639f, 724.8108f, 27.4969f;
		case 75:
			return -771.3334f, 670.0757f, 144.2118f;
		case 76:
			return -454.1442f, 372.409f, 103.7792f;
		case 77:
			return 135.73f, -1050.535f, 28.153f;
		case 78:
			return 2574.989f, 312.4306f, 107.4582f;
		case 79:
			return -934.2631f, -1302.4857f, 4.0192f;
		case 80:
			return 2392.2463f, 3336.2092f, 46.4009f;
		case 81:
			return 1924.4525f, 587.054f, 174.5436f;
		case 82:
			return -58.1016f, 1957.1812f, 189.1861f;
		case 83:
			return 846.9136f, -193.0723f, 71.5706f;
		case 84:
			return 258.8692f, 2591.7092f, 43.9541f;
		case 85:
			return 894.5007f, 3610.7263f, 31.8242f;
		case 86:
			return 652.677f, 3004.282f, 42.29f;
		case 87:
			return -1717.4796f, -1010.28f, 4.5209f;
		case 88:
			return 2151.2249f, 2119.6667f, 125.7974f;
		case 112:
			switch (iParam0)
			{
				case 0:
					return -273.9349f, 312.7653f, 92.2546f;
				default:
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 0:
					return 706.1184f, 609.7703f, 127.9112f;
				default:
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 0:
					return 2671.682f, 1714.2489f, 23.4882f;
				default:
			}
			break;
		case 89:
			return -1578.4532f, -1003.0469f, 12.0174f;
		case 90:
			return -574.5117f, 5377.569f, 69.2431f;
		case 91:
			return -397.6673f, 1235.4918f, 324.6416f;
		case 92:
			return 3330.9995f, 5171.1807f, 17.3451f;
		case 93:
			return -933.4341f, -2432.767f, 12.8374f;
		case 94:
			return -685.5545f, 5833.894f, 16.3313f;
		case 95:
			return -14.3309f, 6327.4673f, 30.2302f;
		case 96:
			return 2547.2905f, 2613.1821f, 36.9449f;
		case 97:
			return 2018.8721f, 3066.882f, 46.0579f;
		case 98:
			return 2499.774f, 3728.104f, 42.0005f;
		case 99:
			return 287.3807f, -901.2227f, 27.9538f;
		case 100:
			return -1344.614f, 131.7328f, 55.2393f;
		case 101:
			return -1285.7777f, -1400.9987f, 3.412f;
		case 102:
			return -1587.9679f, 2096.3389f, 68.0351f;
		case 103:
			switch (iParam0)
			{
				case 0:
					return -1143.732f, -1167.793f, 1.622f;
				default:
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 0:
					return 952.6328f, -205.477f, 72.0406f;
				default:
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 0:
					return 558.0351f, 2655.6926f, 41.1754f;
				default:
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 0:
					return -675.5007f, 902.179f, 229.5803f;
				case 1:
					return -675.5007f, 902.179f, 229.5803f;
				case 2:
					return -675.5007f, 902.179f, 229.5803f;
				case 3:
					return -675.5007f, 902.179f, 229.5803f;
				default:
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 0:
					return -169.475f, 919.922f, 234.656f;
				case 1:
					return -169.475f, 919.922f, 234.656f;
				case 2:
					return -169.475f, 919.922f, 234.656f;
				case 3:
					return -169.475f, 919.922f, 234.656f;
				default:
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 0:
					return -1461.9225f, -39.8372f, 53.6671f;
				case 1:
					return -1461.9225f, -39.8372f, 53.6671f;
				case 2:
					return -1461.9225f, -39.8372f, 53.6671f;
				case 3:
					return -1461.9225f, -39.8372f, 53.6671f;
				default:
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 0:
					return -1516.1827f, 1704.2878f, 94.8559f;
				case 1:
					return -1516.1827f, 1704.2878f, 94.8559f;
				case 2:
					return -1516.1827f, 1704.2878f, 94.8559f;
				case 3:
					return -1516.1827f, 1704.2878f, 94.8559f;
				default:
			}
			break;
		case 110:
			switch (iParam0)
			{
				case 0:
					return 660.2618f, 1738.9916f, 188.4902f;
				case 1:
					return 660.2618f, 1738.9916f, 188.4902f;
				case 2:
					return 660.2618f, 1738.9916f, 188.4902f;
				case 3:
					return 660.2618f, 1738.9916f, 188.4902f;
				default:
			}
			break;
		case 111:
			switch (iParam0)
			{
				case 0:
					return 382.0968f, 4404.0654f, 61.3883f;
				case 1:
					return 382.0968f, 4404.0654f, 61.3883f;
				case 2:
					return 382.0968f, 4404.0654f, 61.3883f;
				case 3:
					return 382.0968f, 4404.0654f, 61.3883f;
				default:
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 0:
					return -1952.044f, 331.519f, 89.091f;
				case 1:
					return -1952.044f, 331.519f, 89.091f;
				case 2:
					return -1952.044f, 331.519f, 89.091f;
				case 3:
					return -1952.044f, 331.519f, 89.091f;
				default:
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 0:
					return 208.102f, 3103.524f, 41.157f;
				case 1:
					return 208.102f, 3103.524f, 41.157f;
				case 2:
					return 208.102f, 3103.524f, 41.157f;
				case 3:
					return 208.102f, 3103.524f, 41.157f;
				default:
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 0:
					return 2675.721f, 3133.303f, 49.904f;
				case 1:
					return 2675.721f, 3133.303f, 49.904f;
				case 2:
					return 2675.721f, 3133.303f, 49.904f;
				case 3:
					return 2675.721f, 3133.303f, 49.904f;
				default:
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 0:
					return 1129.2769f, 203.8488f, 80.9764f;
				case 1:
					return 1129.2769f, 203.8488f, 80.9764f;
				case 2:
					return 1129.2769f, 203.8488f, 80.9764f;
				case 3:
					return 1129.2769f, 203.8488f, 80.9764f;
				default:
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 0:
					return 1376.6208f, 3087.8835f, 39.5342f;
				case 1:
					return 1376.6208f, 3087.8835f, 39.5342f;
				case 2:
					return 1376.6208f, 3087.8835f, 39.5342f;
				case 3:
					return 1376.6208f, 3087.8835f, 39.5342f;
				default:
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 0:
					return -1189.2511f, -2302.3809f, 12.9446f;
				case 1:
					return -1189.2511f, -2302.3809f, 12.9446f;
				case 2:
					return -1189.2511f, -2302.3809f, 12.9446f;
				case 3:
					return -1189.2511f, -2302.3809f, 12.9446f;
				default:
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 0:
					return 3628.521f, 2592.892f, 4.37f;
				case 1:
					return 3628.521f, 2592.892f, 4.37f;
				case 2:
					return 3628.521f, 2592.892f, 4.37f;
				case 3:
					return 3628.521f, 2592.892f, 4.37f;
				default:
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 0:
					return -2313.283f, 5172.768f, 4.37f;
				case 1:
					return -2313.283f, 5172.768f, 4.37f;
				case 2:
					return -2313.283f, 5172.768f, 4.37f;
				case 3:
					return -2313.283f, 5172.768f, 4.37f;
				default:
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 0:
					return -3464.7856f, 2609.2112f, 4.3704f;
				case 1:
					return -3464.7856f, 2609.2112f, 4.3704f;
				case 2:
					return -3464.7856f, 2609.2112f, 4.3704f;
				case 3:
					return -3464.7856f, 2609.2112f, 4.3704f;
				default:
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 0:
					return 845.264f, -565.879f, 56.713f;
				case 1:
					return 845.264f, -565.879f, 56.713f;
				case 2:
					return 845.264f, -565.879f, 56.713f;
				case 3:
					return 845.264f, -565.879f, 56.713f;
				default:
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 0:
					return -920.1111f, 808.8036f, 183.3184f;
				case 1:
					return -920.1111f, 808.8036f, 183.3184f;
				case 2:
					return -920.1111f, 808.8036f, 183.3184f;
				case 3:
					return -920.1111f, 808.8036f, 183.3184f;
				default:
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 0:
					return -3184.4739f, 1290.4387f, 13.4301f;
				case 1:
					return -3184.4739f, 1290.4387f, 13.4301f;
				case 2:
					return -3184.4739f, 1290.4387f, 13.4301f;
				case 3:
					return -3184.4739f, 1290.4387f, 13.4301f;
				default:
			}
			break;
		case 130:
			return -1574.4799f, 406.5338f, 106.7498f;
		case 131:
			return -2759.151f, 2712.18f, 1.384f;
		case 132:
			return 795.6692f, 1208.8247f, 338.848f;
		case 133:
			return -1581.985f, 5159.334f, 18.618f;
		case 134:
			return 3266.2703f, 5154.4863f, 18.7962f;
		case 135:
			return 1628.3256f, 3875.377f, 32.5581f;
	}
	if (!bParam2)
	{
	}
	return 0f, 0f, 0f;
}

bool func_108()//Position - 0x49FC
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_331 != 2000;
}

Vector3 func_109(int iParam0, int iParam1)//Position - 0x4BF7
{
	switch (iParam0)
	{
		case 133:
			switch (iParam1)
			{
				case 0:
					return -1570.384f, 5155.501f, 18.843f;
				case 1:
					return -705.2631f, -979.1364f, 19.3897f;
				default:
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 0:
					return 3264.253f, 5142.5405f, 18.5579f;
				case 1:
					return 1037.3019f, 196.3292f, 79.8559f;
				default:
			}
			break;
		case 135:
			switch (iParam1)
			{
				case 0:
					return 1638.313f, 3881.0283f, 32.776f;
				case 1:
					return -1676.6682f, 71.1611f, 62.9372f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_110(int iParam0, int iParam1, int iParam2)//Position - 0x4CC9
{
	switch (iParam0)
	{
		case 124:
			switch (iParam1)
			{
				case 0:
					return 849.4644f, -568.0468f, 56.7129f;
				case 1:
					switch (iParam2)
					{
						case 0:
							return -1026.6382f, -1135.9514f, 1.1783f;
						case 1:
							return 491.0109f, -1455.8951f, 28.2348f;
						case 2:
							return -576.7303f, -998.832f, 21.1781f;
						default:
					}
					break;
			}
			break;
		case 125:
			switch (iParam1)
			{
				case 0:
					return -916.8128f, 808.9061f, 183.336f;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 404.3431f, -1501.8109f, 28.2858f;
						case 1:
							return -573.2288f, -1111.9377f, 21.1782f;
						case 2:
							return -1045.5194f, -1015.9152f, 1.1504f;
						default:
					}
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 0:
					return -3176.3044f, 1299.434f, 13.5443f;
				case 1:
					switch (iParam2)
					{
						case 0:
							return -608.0881f, -1000.5045f, 20.7864f;
						case 1:
							return -977.3376f, -1201.6111f, 3.6606f;
						case 2:
							return 474.3288f, -1571.5452f, 28.1238f;
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_111(int iParam0, int iParam1)//Position - 0x4E5B
{
	switch (iParam0)
	{
		case 127:
			switch (iParam1)
			{
				case 0:
					return 477.252f, -1106.339f, 42.076f;
				case 1:
					return 1055.842f, -385.995f, 66.858f;
				case 2:
					return 299.319f, -196.988f, 60.57f;
				case 3:
					return 2556.863f, -371.281f, 91.993f;
				case 4:
					return 2583.172f, 428.004f, 107.456f;
				case 5:
					return 1402.675f, 2162.313f, 97.024f;
				case 6:
					return 2550.847f, 1613.197f, 28.791f;
				case 7:
					return 1224.952f, 1267.985f, 142.678f;
				case 8:
					return 1962.797f, -913.826f, 78.071f;
				case 9:
					return 1569.648f, 933.153f, 76.855f;
				case 10:
					return 2458.562f, 882.542f, 89.742f;
				default:
			}
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return 533.174f, -24.249f, 90.173f;
				case 1:
					return 95f, -218.977f, 53.491f;
				case 2:
					return 1869.691f, 2667.626f, 44.672f;
				case 3:
					return 2703.095f, 1355.012f, 23.524f;
				case 4:
					return 808.684f, 2180.528f, 51.308f;
				case 5:
					return 236.413f, 1141.542f, 224.485f;
				case 6:
					return 1806.653f, 2324.512f, 55.792f;
				case 7:
					return 1644.74f, -960.112f, 62.465f;
				case 8:
					return 191.566f, 2564.816f, 48.709f;
				case 9:
					return 1283.956f, 1543.227f, 95.213f;
				case 10:
					return 1106.165f, -250.748f, 68.193f;
				default:
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					return -1128.25f, -841.543f, 18.316f;
				case 1:
					return -835.698f, 107.16f, 53.664f;
				case 2:
					return -3030.981f, 548.948f, 6.503f;
				case 3:
					return -1906.358f, 2004.431f, 140.838f;
				case 4:
					return -1156.587f, 2675.232f, 17.0939f;
				case 5:
					return 226.793f, 680.934f, 188.488f;
				case 6:
					return -553.514f, 1870.459f, 209.911f;
				case 7:
					return -1498.919f, 1488.2f, 115.697f;
				case 8:
					return -2003.024f, -464.548f, 10.515f;
				case 9:
					return -1093.791f, 678.953f, 141.976f;
				case 10:
					return -2164.349f, 1019.391f, 188.544f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_112(int iParam0, int iParam1)//Position - 0x51B5
{
	switch (iParam0)
	{
		case 86:
			switch (iParam1)
			{
				case 0:
					return 635.533f, 3000.991f, 41.762f;
				case 1:
					return 645.075f, 2991.293f, 40.95f;
				default:
			}
			break;
		case 87:
			switch (iParam1)
			{
				case 0:
					return -1706.3119f, -1010.5488f, 4.6804f;
				case 1:
					return -1702.3584f, -999.7464f, 5.3206f;
				default:
			}
			break;
		case 88:
			switch (iParam1)
			{
				case 0:
					return 2170.647f, 2113.055f, 124.4414f;
				case 1:
					return 2166.9226f, 2119.1636f, 124.4554f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_113(int iParam0, int iParam1)//Position - 0x5287
{
	switch (iParam0)
	{
		case 121:
			switch (iParam1)
			{
				case 0:
					return 2444.009f, -382.5055f, 91.9927f;
				case 1:
					return 3660.417f, 2593.988f, -0.375f;
				case 2:
					return 3625.326f, 2556.492f, 4.37f;
				case 3:
					return 3631.033f, 2598.103f, 4.37f;
				default:
			}
			break;
		case 122:
			switch (iParam1)
			{
				case 0:
					return -2281.5413f, 3424.4717f, 31.0013f;
				case 1:
					return -2313.651f, 5168.825f, 4.37f;
				case 2:
					return -2297.258f, 5195.212f, 4.37f;
				case 3:
					return -2320.4019f, 5208.223f, 0.1875f;
				default:
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 0:
					return 3631.675f, 3761.38f, 27.516f;
				case 1:
					return -3474.1826f, 2646.8777f, 0.5624f;
				case 2:
					return -3463.4565f, 2604.418f, 4.3703f;
				case 3:
					return -3467.829f, 2620.6748f, 4.3704f;
				case 4:
					return -3433.4885f, 2612.7568f, 4.3704f;
				case 5:
					return -3429.2192f, 2609.003f, 4.3704f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_114(int iParam0, int iParam1)//Position - 0x5419
{
	switch (iParam0)
	{
		case 118:
			switch (iParam1)
			{
				case 0:
					return 1130.6866f, 223.0034f, 80.9439f;
				case 1:
					return 1146.3226f, 232.7237f, 80.9346f;
				case 2:
					return 1114.3075f, 196.9373f, 80.9486f;
				case 3:
					return 1113.9285f, 179.9008f, 80.9568f;
				case 4:
					return 1099.2928f, 172.1731f, 80.9344f;
				case 5:
					return 1156.3878f, 260.556f, 80.8966f;
				case 6:
					return 1167.6595f, 266.7008f, 80.9102f;
				default:
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 0:
					return 1389.6643f, 3101.4478f, 39.4464f;
				case 1:
					return 1409.1249f, 3096.472f, 39.4387f;
				case 2:
					return 1417.8676f, 3108.893f, 39.5279f;
				case 3:
					return 1358.4791f, 3093.0447f, 39.5342f;
				case 4:
					return 1342.7312f, 3080.17f, 39.5342f;
				case 5:
					return 1442.6552f, 3108.1177f, 39.5342f;
				case 6:
					return 1453.9589f, 3118.6282f, 39.5341f;
				default:
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return -1188.0989f, -2314.389f, 12.9446f;
				case 1:
					return -1195.6813f, -2339.4863f, 12.9446f;
				case 2:
					return -1181.4142f, -2339.9421f, 12.9445f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_115(int iParam0, int iParam1)//Position - 0x55F3
{
	switch (iParam0)
	{
		case 115:
			switch (iParam1)
			{
				case 0:
					return -1943.501f, 334.375f, 88.807f;
				case 1:
					return -1937.971f, 331.371f, 88.491f;
				case 2:
					return -1935.074f, 334.821f, 124.912f;
				default:
			}
			break;
		case 116:
			switch (iParam1)
			{
				case 0:
					return 199.552f, 3107.217f, 41.128f;
				case 1:
					return 203.944f, 3111.003f, 41.141f;
				case 2:
					return 198.784f, 3107.195f, 73.166f;
				default:
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 0:
					return 2675.4634f, 3121.0852f, 48.9864f;
				case 1:
					return 2670.341f, 3121.404f, 49.265f;
				case 2:
					return 2675.895f, 3123.923f, 82.307f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_116(int iParam0, int iParam1)//Position - 0x570D
{
	switch (iParam0)
	{
		case 112:
			switch (iParam1)
			{
				case 0:
					return -270.289f, 316.387f, 92.255f;
				case 1:
					return -283.972f, 312.927f, 92.255f;
				case 2:
					return -279.297f, 312.713f, 92.276f;
				case 3:
					return -284.427f, 322.459f, 92.255f;
				case 4:
					return -276.055f, 322.5f, 92.255f;
				case 5:
					return -271.185f, 321.929f, 92.255f;
				case 6:
					return -280.462f, 322.706f, 92.255f;
				default:
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 0:
					return 709.7698f, 604.7242f, 127.9112f;
				case 1:
					return 697.4459f, 601.9264f, 127.9112f;
				case 2:
					return 701.5485f, 600.1556f, 127.9112f;
				case 3:
					return 697.3605f, 612.7161f, 127.9112f;
				case 4:
					return 706.6976f, 599.9281f, 127.9112f;
				case 5:
					return 693.1447f, 603.339f, 127.9112f;
				case 6:
					return 701.2253f, 611.4911f, 127.9112f;
				default:
			}
			break;
		case 114:
			switch (iParam1)
			{
				case 0:
					return 2664.4246f, 1716.635f, 23.4882f;
				case 1:
					return 2672.219f, 1699.4161f, 23.4882f;
				case 2:
					return 2672.5408f, 1708.6907f, 23.4882f;
				case 3:
					return 2661.954f, 1701.2286f, 23.4882f;
				case 4:
					return 2661.3533f, 1711.1208f, 23.4882f;
				case 5:
					return 2672.2634f, 1704.5321f, 23.4882f;
				case 6:
					return 2661.5522f, 1705.764f, 23.4883f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_117(int iParam0, int iParam1)//Position - 0x5947
{
	switch (iParam0)
	{
		case 109:
			switch (iParam1)
			{
				case 0:
					return -1514.4651f, 1710.3467f, 94.0213f;
				case 1:
					return -1515.442f, 1712.8978f, 93.7086f;
				default:
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 0:
					return 665.7558f, 1733.6609f, 187.5157f;
				case 1:
					return 654.3006f, 1744.2687f, 189.3546f;
				default:
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 0:
					return 386.0512f, 4397.2065f, 61.445f;
				case 1:
					return 378.5578f, 4411.2725f, 61.4051f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_118(int iParam0, int iParam1)//Position - 0x5A19
{
	switch (iParam0)
	{
		case 103:
			switch (iParam1)
			{
				case 0:
					return -1136.0717f, -1182.7775f, 1.2826f;
				case 1:
					return -1148.773f, -1155.9648f, 1.7916f;
				default:
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 965.515f, -200.6211f, 72.2084f;
				case 1:
					return 974.691f, -187.968f, 71.57f;
				default:
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					return 540.905f, 2653.172f, 41.238f;
				case 1:
					return 565.684f, 2661.919f, 41.087f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_119(int iParam0)//Position - 0x8175
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1892703[iParam0 /*599*/].f_10.f_187[iVar0] != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_120(int iParam0)//Position - 0x848F
{
	switch (iParam0)
	{
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
			return 1;
		default:
	}
	return 0;
}

struct<6> func_121(int iParam0)//Position - 0x9095
{
	return Global_1892703[iParam0 /*599*/].f_10.f_187;
}

int func_122(int iParam0)//Position - 0x2E27D
{
	switch (iParam0)
	{
		case 22:
			return joaat("police3");
		case 23:
			return joaat("police3");
		case 24:
			return joaat("police3");
		case 25:
			return joaat("hexer");
		case 26:
			return joaat("frogger");
		case 29:
			return joaat("mule");
		case 30:
			return joaat("benson");
		case 27:
			return joaat("valkyrie");
		case 34:
			return joaat("marquis");
		case 6:
			return joaat("sheriff2");
		case 3:
			return joaat("policeb");
		case 10:
			return joaat("buccaneer2");
		case 11:
			return joaat("police3");
		case 14:
			return joaat("sultanrs");
		case 4:
			return joaat("sadler");
		case 15:
			return joaat("sadler");
		default:
	}
	return joaat("huntley");
}

Vector3 func_123(int iParam0, int iParam1, bool bParam2)//Position - 0x3CDC9
{
	switch (iParam1)
	{
		case 65:
			switch (iParam0)
			{
				case 0:
					return -1937.753f, 551.177f, 113.828f;
				case 1:
					return -1947.278f, 535.341f, 113.822f;
				case 2:
					return -1940.821f, 541.269f, 118.451f;
				case 3:
					return -1942.039f, 557.905f, 113.828f;
				case 4:
					return -1941.307f, 557.041f, 113.828f;
				case 5:
					return -1942.057f, 569.721f, 115.601f;
				default:
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 0:
					return -1941.134f, 404.374f, 95.507f;
				case 1:
					return -1931.321f, 398.51f, 95.507f;
				case 2:
					return -1929.48f, 409.056f, 95.507f;
				case 3:
					return -1928.726f, 410.175f, 95.507f;
				case 4:
					return -1910.113f, 408.732f, 95.296f;
				case 5:
					return -1923.162f, 385.092f, 95.508f;
				default:
			}
			break;
		case 67:
			switch (iParam0)
			{
				case 0:
					return -925.648f, 25.985f, 47.01f;
				case 1:
					return -917.608f, 14.746f, 46.719f;
				case 2:
					return -925.342f, 14.412f, 46.714f;
				case 3:
					return -926.01f, 13.269f, 46.719f;
				case 4:
					return -922.111f, 10.618f, 46.719f;
				case 5:
					return -927.49f, 19.514f, 46.815f;
				default:
			}
			break;
		case 68:
			switch (iParam0)
			{
				case 0:
					return -905.8419f, 168.4072f, 68.4464f;
				case 1:
					return -902.696f, 191.0429f, 68.446f;
				case 2:
					return -910.0559f, 194.771f, 68.4516f;
				case 3:
					return -910.5085f, 194.1056f, 68.4492f;
				case 4:
					return -915.1824f, 183.4144f, 68.337f;
				case 5:
					return -913.1318f, 178.6038f, 68.4454f;
				default:
			}
			break;
		case 69:
			switch (iParam0)
			{
				case 0:
					return 163.0051f, 480.4974f, 141.2676f;
				case 1:
					return 169.1441f, 479.9424f, 140.9772f;
				case 2:
					return 170.0896f, 480.7967f, 141.0864f;
				case 3:
					return 174.2643f, 466.4623f, 140.9125f;
				case 4:
					return 173.3651f, 472.6208f, 140.9125f;
				case 5:
					return 172.5974f, 473.1866f, 140.9125f;
				default:
			}
			break;
		case 70:
			switch (iParam0)
			{
				case 0:
					return 1367.2983f, -605.0978f, 73.716f;
				case 1:
					return 1359.65f, -607.9451f, 73.3379f;
				case 2:
					return 1360.589f, -608.9462f, 73.3379f;
				case 3:
					return 1367.7709f, -603.6301f, 73.3388f;
				case 4:
					return 1366.6538f, -602.7924f, 73.3388f;
				case 5:
					return 1358.1904f, -616.1752f, 73.3379f;
				default:
			}
			break;
		case 71:
			switch (iParam0)
			{
				case 0:
					return -50.186f, 346.2866f, 111.3375f;
				case 1:
					return -52.3969f, 355.4828f, 112.0614f;
				case 2:
					return -52.0328f, 354.2775f, 112.0614f;
				case 3:
					return -54.6724f, 349.5933f, 111.4165f;
				case 4:
					return -56.976f, 354.0209f, 111.4439f;
				case 5:
					return -58.1797f, 347.5182f, 111.2426f;
				default:
			}
			break;
		case 72:
			switch (iParam0)
			{
				case 0:
					return -1860.2074f, -345.498f, 48.8427f;
				case 1:
					return -1855.9523f, -348.9401f, 48.8427f;
				case 2:
					return -1865.2953f, -361.8818f, 48.2938f;
				case 3:
					return -1865.5106f, -360.8017f, 48.2958f;
				case 4:
					return -1867.8228f, -345.9092f, 48.2585f;
				case 5:
					return -1851.8743f, -356.2866f, 48.3874f;
				default:
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 0:
					return -3022.7227f, 79.6407f, 10.6081f;
				case 1:
					return -3022.6292f, 80.7372f, 10.6081f;
				case 2:
					return -3009.4268f, 85.0974f, 10.6881f;
				case 3:
					return -3010.6377f, 80.1638f, 10.6732f;
				case 4:
					return -3025.2341f, 90.0366f, 11.3462f;
				case 5:
					return -3011.6956f, 80.6578f, 10.672f;
				default:
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 0:
					return -2997.1216f, 722.0356f, 27.4969f;
				case 1:
					return -2996.5737f, 720.4412f, 27.4969f;
				case 2:
					return -2987.689f, 721.772f, 27.4969f;
				case 3:
					return -2991.6362f, 731.0148f, 27.4969f;
				case 4:
					return -2977.492f, 709.1384f, 27.2086f;
				case 5:
					return -2977.5671f, 735.1654f, 28.3781f;
				default:
			}
			break;
		case 75:
			switch (iParam0)
			{
				case 0:
					return -767.9756f, 668.0202f, 143.8194f;
				case 1:
					return -759.2245f, 658.6893f, 142.0476f;
				case 2:
					return -761.7543f, 671.8568f, 142.4674f;
				case 3:
					return -758.093f, 640.5367f, 144.5014f;
				case 4:
					return -766.9224f, 668.2573f, 143.5983f;
				case 5:
					return -767.5164f, 656.9524f, 144.5017f;
				default:
			}
			break;
		case 76:
			switch (iParam0)
			{
				case 0:
					return -452.1916f, 398.3782f, 103.7791f;
				case 1:
					return -456.3979f, 392.1273f, 107.8636f;
				case 2:
					return -451.6456f, 375.2693f, 107.8737f;
				case 3:
					return -456.7192f, 375.1091f, 103.7792f;
				case 4:
					return -457.8808f, 374.5711f, 103.7792f;
				case 5:
					return -452.1367f, 366.3934f, 103.7797f;
				default:
			}
			break;
		case 77:
			switch (iParam0)
			{
				case 0:
					return 145.969f, -1058.883f, 29.191f;
				case 1:
					return 132.474f, -1051.78f, 28.152f;
				case 2:
					return 130.672f, -1056.355f, 28.192f;
				case 3:
					return 130.736f, -1055.362f, 28.192f;
				case 4:
					return 132.946f, -1052.886f, 28.158f;
				case 5:
					return 138.694f, -1048.543f, 28.152f;
				default:
			}
			break;
		case 78:
			switch (iParam0)
			{
				case 0:
					return 2578.3928f, 313.5237f, 107.6038f;
				case 1:
					return 2571.405f, 304.1512f, 107.6078f;
				case 2:
					return 2574.9912f, 308.5529f, 107.6082f;
				case 3:
					return 2573.9783f, 308.3747f, 107.6083f;
				case 4:
					return 2579.2075f, 313.9954f, 107.5982f;
				case 5:
					return 2573.4233f, 315.4253f, 107.4599f;
				default:
			}
			break;
		case 79:
			switch (iParam0)
			{
				case 0:
					return -935.1989f, -1298.4917f, 4.0217f;
				case 1:
					return -936.5215f, -1299.1008f, 4.0216f;
				case 2:
					return -932.613f, -1301.8048f, 4.0192f;
				case 3:
					return -936.2961f, -1310.5758f, 5.2001f;
				case 4:
					return -931.6871f, -1306.8516f, 4.2007f;
				case 5:
					return -931.5938f, -1301.2942f, 4.0193f;
				default:
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 0:
					return 2395.0496f, 3332.6309f, 46.5624f;
				case 1:
					return 2392.0405f, 3330.1296f, 46.5812f;
				case 2:
					return 2392.3176f, 3342.391f, 46.3341f;
				case 3:
					return 2393.4114f, 3342.0474f, 46.3468f;
				case 4:
					return 2393.5134f, 3320.9802f, 46.8053f;
				case 5:
					return 2394.4563f, 3321.3728f, 46.7164f;
				default:
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 0:
					return 1927.6028f, 591.11f, 177.8691f;
				case 1:
					return 1918.8696f, 585.3329f, 175.3723f;
				case 2:
					return 1919.3514f, 586.2944f, 175.3723f;
				case 3:
					return 1919.7319f, 585.2935f, 175.3723f;
				case 4:
					return 1927.6736f, 588.7889f, 174.581f;
				case 5:
					return 1928.7024f, 588.8447f, 174.6432f;
				default:
			}
			break;
		case 82:
			switch (iParam0)
			{
				case 0:
					return -68.2331f, 1958.4916f, 189.1861f;
				case 1:
					return -67.5748f, 1956.8214f, 189.1696f;
				case 2:
					return -55.1604f, 1951.2144f, 189.1861f;
				case 3:
					return -55.4533f, 1949.794f, 189.1861f;
				case 4:
					return -52.4073f, 1957.2297f, 189.1958f;
				case 5:
					return -53.3596f, 1943.5465f, 189.1861f;
				default:
			}
			break;
		case 83:
			switch (iParam0)
			{
				case 0:
					return 848.0658f, -195.0777f, 71.4405f;
				case 1:
					return 840.7052f, -191.0631f, 71.6683f;
				case 2:
					return 851.2209f, -195.6778f, 71.4783f;
				case 3:
					return 844.9911f, -192.0527f, 71.6333f;
				case 4:
					return 846.0248f, -191.3392f, 71.6795f;
				case 5:
					return 845.1398f, -191.1621f, 71.6726f;
				default:
			}
			break;
		case 84:
			switch (iParam0)
			{
				case 0:
					return 255.4052f, 2582.999f, 44.0523f;
				case 1:
					return 252.4516f, 2596.109f, 43.8833f;
				case 2:
					return 252.9127f, 2596.996f, 43.8075f;
				case 3:
					return 258.4397f, 2585.0662f, 43.9541f;
				case 4:
					return 259.911f, 2585.0923f, 43.9541f;
				case 5:
					return 256.5538f, 2579.478f, 44.2158f;
				default:
			}
			break;
		case 85:
			switch (iParam0)
			{
				case 0:
					return 893.3776f, 3607.7708f, 31.8242f;
				case 1:
					return 894.0109f, 3607.0056f, 31.8242f;
				case 2:
					return 898.5522f, 3606.865f, 31.8242f;
				case 3:
					return 899.1494f, 3610.439f, 31.8231f;
				case 4:
					return 899.8152f, 3611.3281f, 31.8202f;
				case 5:
					return 899.2398f, 3602.449f, 31.8167f;
				default:
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 0:
					return -273.0223f, 319.8844f, 92.2546f;
				case 1:
					return -278.181f, 316.107f, 92.255f;
				case 2:
					return -282.446f, 321.895f, 92.255f;
				case 3:
					return -277.717f, 321.213f, 92.255f;
				case 4:
					return -271.31f, 316.973f, 93.116f;
				case 5:
					return -284.527f, 312.828f, 93.002f;
				case 6:
					return -275.772f, 316.677f, 92.255f;
				case 7:
					return -273.8383f, 320.8651f, 92.2546f;
				case 8:
					return -279.2325f, 316.2921f, 92.2546f;
				case 9:
					return -285.5069f, 313.722f, 92.2546f;
				default:
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 0:
					return 709.11f, 604.569f, 128.72f;
				case 1:
					return 697.2184f, 612.5048f, 129.1056f;
				case 2:
					return 698.79f, 604.449f, 127.911f;
				case 3:
					return 706.6071f, 606.7073f, 127.9112f;
				case 4:
					return 703.8287f, 600.837f, 127.9112f;
				case 5:
					return 695.034f, 606.272f, 127.911f;
				case 6:
					return 697.507f, 609.524f, 127.911f;
				case 7:
					return 703.8964f, 601.8752f, 127.9112f;
				case 8:
					return 695.8278f, 605.2343f, 127.9112f;
				case 9:
					return 708.8119f, 603.1491f, 127.9112f;
				default:
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 0:
					return 2662.155f, 1700.49f, 24.607f;
				case 1:
					return 2669.702f, 1708.377f, 23.488f;
				case 2:
					return 2665.087f, 1715.547f, 24.285f;
				case 3:
					return 2669.029f, 1702.4f, 23.488f;
				case 4:
					return 2662.154f, 1707.615f, 23.488f;
				case 5:
					return 2668.958f, 1701.063f, 23.488f;
				case 6:
					return 2666.891f, 1711.055f, 23.488f;
				case 7:
					return 2673.557f, 1711.971f, 23.488f;
				case 8:
					return 2666.0269f, 1710.0361f, 23.4882f;
				case 9:
					return 2666.5776f, 1715.792f, 23.4882f;
				default:
			}
			break;
		case 86:
			switch (iParam0)
			{
				case 0:
					return 649.336f, 2998.342f, 41.804f;
				case 1:
					return 642.158f, 2995.145f, 41.361f;
				case 2:
					return 636.292f, 2994.764f, 41.268f;
				case 3:
					return 646.082f, 2993.847f, 41.235f;
				case 4:
					return 650.889f, 3001.284f, 42.085f;
				case 5:
					return 635.496f, 2994.866f, 41.279f;
				case 6:
					return 647.772f, 3000.114f, 41.93f;
				case 7:
					return 637.251f, 3000.727f, 41.814f;
				case 8:
					return 650.789f, 2997.169f, 41.747f;
				case 9:
					return 642.81f, 3001.113f, 41.989f;
				case 10:
					return 640.308f, 3004.128f, 42.161f;
				case 11:
					return 642.337f, 3002.467f, 42.087f;
				default:
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 0:
					return -1715.2268f, -1007.8721f, 4.7011f;
				case 1:
					return -1711.8479f, -1005.6998f, 4.9643f;
				case 2:
					return -1711.5662f, -1008.014f, 4.8219f;
				case 3:
					return -1710.6838f, -1006.2499f, 5.0235f;
				case 4:
					return -1712.0555f, -1003.9462f, 5.0386f;
				case 5:
					return -1710.3049f, -1001.8951f, 5.0695f;
				case 6:
					return -1700.6848f, -1003.8896f, 5.6862f;
				case 7:
					return -1704.7749f, -1000.4743f, 5.2683f;
				case 8:
					return -1710.8077f, -1004.6555f, 5.1099f;
				case 9:
					return -1704.025f, -1001.078f, 5.3036f;
				case 10:
					return -1705.883f, -1007.6612f, 4.9986f;
				case 11:
					return -1700.49f, -1005.283f, 5.6771f;
				default:
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 0:
					return 2152.9763f, 2117.2468f, 125.8856f;
				case 1:
					return 2155.396f, 2114.26f, 125.8098f;
				case 2:
					return 2155.212f, 2112.9321f, 125.6696f;
				case 3:
					return 2157.1377f, 2115.2134f, 125.6957f;
				case 4:
					return 2159.64f, 2112.2153f, 125.417f;
				case 5:
					return 2160.632f, 2121.5532f, 124.9161f;
				case 6:
					return 2161.7124f, 2122.1987f, 124.8315f;
				case 7:
					return 2165.2515f, 2118.4382f, 124.5598f;
				case 8:
					return 2155.6025f, 2124.8281f, 125.0547f;
				case 9:
					return 2166.9382f, 2110.2139f, 124.9367f;
				case 10:
					return 2167.9333f, 2110.397f, 124.9073f;
				case 11:
					return 2164.1453f, 2112.987f, 125.02f;
				default:
			}
			break;
		case 103:
			switch (iParam0)
			{
				case 0:
					return -1146.3749f, -1172.9014f, 1.4893f;
				case 1:
					return -1144.069f, -1169.709f, 3.533f;
				case 2:
					return -1140.2251f, -1172.0139f, 1.5784f;
				case 3:
					return -1147.1654f, -1161.5409f, 1.6569f;
				case 4:
					return -1140.9022f, -1183.7977f, 1.385f;
				case 5:
					return -1141.132f, -1167.443f, 1.711f;
				case 6:
					return -1145.2642f, -1173.3601f, 1.4786f;
				case 7:
					return -1139.2373f, -1176.9977f, 1.3917f;
				default:
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 0:
					return 953.6479f, -204.1889f, 74.166f;
				case 1:
					return 956.6158f, -196.902f, 72.2033f;
				case 2:
					return 958.9997f, -204.0573f, 72.0818f;
				case 3:
					return 969.122f, -189.37f, 71.927f;
				case 4:
					return 954.3331f, -206.8696f, 72.1801f;
				case 5:
					return 958.4577f, -208.1497f, 72.1518f;
				case 6:
					return 964.1173f, -200.7398f, 72.2084f;
				case 7:
					return 957.685f, -196.56f, 72.197f;
				default:
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 0:
					return 558.2379f, 2655.9038f, 43.664f;
				case 1:
					return 555.849f, 2662.947f, 41.1946f;
				case 2:
					return 551.1808f, 2655.7087f, 41.2224f;
				case 3:
					return 545.8378f, 2653.0283f, 41.2635f;
				case 4:
					return 561.2404f, 2662.077f, 41.1515f;
				case 5:
					return 557.0541f, 2663.604f, 41.1861f;
				case 6:
					return 551.2675f, 2654.5774f, 41.2248f;
				case 7:
					return 559.0604f, 2653.3938f, 41.1704f;
				default:
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 0:
					return -652.3525f, 852.2115f, 228.349f;
				case 1:
					return -666.2363f, 878.6399f, 224.1475f;
				case 2:
					return -652.7689f, 854.5261f, 224.1475f;
				case 3:
					return -681.291f, 851.5529f, 224.2427f;
				case 4:
					return -637.4902f, 867.1923f, 219.257f;
				case 5:
					return -673.9535f, 887.7119f, 228.349f;
				case 6:
					return -661.5499f, 869.4652f, 228.349f;
				case 7:
					return -668.4638f, 845.9899f, 224.0524f;
				case 8:
					return -666.5537f, 865.3787f, 224.0524f;
				case 9:
					return -667.1071f, 861.8423f, 224.0524f;
				case 10:
					return -668.0854f, 862.51f, 224.0524f;
				case 11:
					return -668.0035f, 865.0509f, 224.0524f;
				case 12:
					return -668.6204f, 864.0488f, 224.0524f;
				case 13:
					return -670.1268f, 862.7797f, 224.0524f;
				default:
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 0:
					return -157.5752f, 878.0969f, 236.7738f;
				case 1:
					return -143.2587f, 885.2622f, 238.0254f;
				case 2:
					return -138.5931f, 856.5801f, 231.2324f;
				case 3:
					return -178.1631f, 897.2595f, 232.4649f;
				case 4:
					return -179.6147f, 896.8501f, 232.4649f;
				case 5:
					return -172.6176f, 864.907f, 231.6994f;
				case 6:
					return -176.5998f, 857.8193f, 231.2334f;
				case 7:
					return -138.7957f, 907.7676f, 234.8072f;
				case 8:
					return -138.4215f, 867.0332f, 231.696f;
				case 9:
					return -135.3767f, 871.2449f, 231.6916f;
				case 10:
					return -134.3853f, 870.9055f, 231.691f;
				case 11:
					return -135.2301f, 870.128f, 231.692f;
				case 12:
					return -138.6867f, 871.3361f, 231.6941f;
				case 13:
					return -136.1752f, 870.6535f, 231.6926f;
				default:
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 0:
					return -1499.5693f, -66.2991f, 53.6118f;
				case 1:
					return -1504.042f, -39.432f, 53.548f;
				case 2:
					return -1475.1829f, -51.7118f, 53.6389f;
				case 3:
					return -1490.7317f, -34.2899f, 55.8493f;
				case 4:
					return -1479.0262f, -68.1041f, 53.6347f;
				case 5:
					return -1487.0321f, -21.5549f, 53.6533f;
				case 6:
					return -1501.6232f, -29.3779f, 53.6389f;
				case 7:
					return -1485.8009f, -77.3903f, 53.615f;
				case 8:
					return -1508.5519f, -74.4106f, 53.6967f;
				case 9:
					return -1508.7714f, -72.8027f, 53.6967f;
				case 10:
					return -1496.9905f, -81.6826f, 53.6967f;
				case 11:
					return -1495.8994f, -81.8681f, 53.6967f;
				case 12:
					return -1496.1489f, -80.6441f, 53.6967f;
				case 13:
					return -1493.7054f, -80.9586f, 53.6967f;
				default:
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 0:
					return -1515.9043f, 1709.6113f, 94.1469f;
				case 1:
					return -1515.1783f, 1699.3124f, 95.5635f;
				case 2:
					return -1516.4375f, 1699.9996f, 95.467f;
				default:
			}
			break;
		case 110:
			switch (iParam0)
			{
				case 0:
					return 657.392f, 1742.371f, 188.9226f;
				case 1:
					return 663.9827f, 1735.2357f, 187.7759f;
				case 2:
					return 663.7692f, 1736.2721f, 187.8712f;
				default:
			}
			break;
		case 111:
			switch (iParam0)
			{
				case 0:
					return 384.4076f, 4400.721f, 61.4022f;
				case 1:
					return 383.7181f, 4407.873f, 61.4224f;
				case 2:
					return 384.0899f, 4406.87f, 61.4048f;
				default:
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 0:
					return -1948.444f, 330.5879f, 91.004f;
				case 1:
					return -1930.0577f, 335.685f, 89.5551f;
				case 2:
					return -1929.403f, 335.973f, 89.7664f;
				case 3:
					return -1919.1111f, 333.1223f, 88.9749f;
				case 4:
					return -1919.0419f, 333.8403f, 89.4121f;
				case 5:
					return -1921.4275f, 336.6141f, 144.3722f;
				default:
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 0:
					return 209.1499f, 3103.3015f, 43.636f;
				case 1:
					return 193.4484f, 3109.709f, 42.3494f;
				case 2:
					return 193.5149f, 3109.1873f, 42.4815f;
				case 3:
					return 180.7627f, 3109.7964f, 42.6833f;
				case 4:
					return 180.7839f, 3109.7512f, 42.6842f;
				case 5:
					return 189.7674f, 3111.568f, 83.5649f;
				default:
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 0:
					return 2590.4714f, 5333.4077f, 46.0219f;
				case 1:
					return 2598.506f, 5315.853f, 45.2228f;
				case 2:
					return 2598.3342f, 5315.689f, 45.217f;
				case 3:
					return 2600.379f, 5303.7705f, 44.874f;
				case 4:
					return 2600.658f, 5302.944f, 45.2206f;
				case 5:
					return 2596.1995f, 5315.0835f, 98.3255f;
				default:
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 0:
					return 1129.4047f, 203.2016f, 83.497f;
				case 1:
					return 1114.5917f, 196.0163f, 83.416f;
				case 2:
					return 1146.5887f, 233.552f, 82.9602f;
				case 3:
					return 1131.1482f, 223.7259f, 82.6778f;
				case 4:
					return 1145.815f, 256.34f, 81.191f;
				case 5:
					return 1145.323f, 255.105f, 81.191f;
				case 6:
					return 1161.202f, 245.634f, 81.191f;
				case 7:
					return 1163.045f, 247.16f, 81.191f;
				case 8:
					return 1142.5405f, 250.8695f, 81.191f;
				case 9:
					return 1158.3647f, 240.6051f, 81.191f;
				case 10:
					return 1156.573f, 276.8043f, 81.0575f;
				case 11:
					return 1169.6179f, 286.4265f, 81.1904f;
				case 12:
					return 1163.513f, 284.054f, 80.991f;
				case 13:
					return 1162.618f, 283.404f, 80.993f;
				default:
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 0:
					return 1377.2712f, 3088.7673f, 41.4123f;
				case 1:
					return 1390.4034f, 3101.6807f, 41.8812f;
				case 2:
					return 1409.8611f, 3096.8057f, 41.6465f;
				case 3:
					return 1418.2019f, 3109.041f, 42.0101f;
				case 4:
					return 1439.5632f, 3129.325f, 40.0567f;
				case 5:
					return 1438.6034f, 3130.1777f, 40.1091f;
				case 6:
					return 1437.8088f, 3099.3909f, 39.5341f;
				case 7:
					return 1439.3616f, 3099.3804f, 39.5341f;
				case 8:
					return 1435.9419f, 3122.1748f, 39.5341f;
				case 9:
					return 1423.3105f, 3118.3477f, 39.5341f;
				case 10:
					return 1434.121f, 3120.602f, 39.5342f;
				case 11:
					return 1431.453f, 3097.452f, 39.5342f;
				case 12:
					return 1443.6392f, 3126.1047f, 39.5341f;
				case 13:
					return 1445.8448f, 3127.4656f, 39.5341f;
				default:
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 0:
					return -1190.2097f, -2302.6123f, 15.4232f;
				case 1:
					return -1189.4902f, -2314.9548f, 15.1438f;
				case 2:
					return -1195.4885f, -2338.8743f, 15.4339f;
				case 3:
					return -1181.721f, -2339.91f, 15.4339f;
				case 4:
					return -1173.2019f, -2307.5757f, 12.9814f;
				case 5:
					return -1172.5616f, -2308.923f, 12.9814f;
				case 6:
					return -1168.2205f, -2290.3833f, 12.9445f;
				case 7:
					return -1175.0223f, -2301.6514f, 12.9446f;
				case 8:
					return -1185.5951f, -2285.3464f, 12.9445f;
				case 9:
					return -1176.019f, -2303.624f, 12.9446f;
				case 10:
					return -1191.3301f, -2295.4846f, 12.9446f;
				case 11:
					return -1184.8862f, -2284.3281f, 12.9446f;
				case 12:
					return -1171.1827f, -2295.2053f, 12.9446f;
				case 13:
					return -1192.1475f, -2297.691f, 12.9446f;
				default:
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 0:
					return 3639.433f, 2561.794f, 7.031f;
				case 1:
					return 3623.955f, 2560.391f, 4.37f;
				case 2:
					return 3625.291f, 2560.628f, 4.37f;
				case 3:
					return 3623.212f, 2583.869f, 7.001f;
				case 4:
					return 3627.112f, 2591.18f, 4.37f;
				case 5:
					return 3635.2f, 2598.042f, 4.37f;
				case 6:
					return 2443.8213f, -372.8282f, 91.9927f;
				case 7:
					return 2456.8228f, -383.4849f, 92.3256f;
				case 8:
					return 2446.5713f, -393.9896f, 91.9927f;
				case 9:
					return 2456.9443f, -384.7035f, 92.3256f;
				default:
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 0:
					return -2307.87f, 5167.681f, 4.37f;
				case 1:
					return -2308.978f, 5169.157f, 4.37f;
				case 2:
					return -2296.067f, 5191.929f, 4.37f;
				case 3:
					return -2298.104f, 5197.071f, 4.37f;
				case 4:
					return -2284.741f, 5188.896f, 7.168f;
				case 5:
					return -2316.0654f, 5179.5664f, 4.3704f;
				case 6:
					return -2272.941f, 3433.512f, 31.141f;
				case 7:
					return -2272.39f, 3434.778f, 31.163f;
				case 8:
					return -2274.525f, 3435.617f, 31.121f;
				case 9:
					return -2283.286f, 3429.337f, 30.852f;
				default:
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 0:
					return -3464.976f, 2615.378f, 4.371f;
				case 1:
					return -3465.908f, 2614.281f, 4.37f;
				case 2:
					return -3435.258f, 2614.985f, 4.37f;
				case 3:
					return -3444.4385f, 2615.9172f, 4.3704f;
				case 4:
					return -3444.2583f, 2617.3022f, 4.3706f;
				case 5:
					return -3464.169f, 2606.2524f, 4.3703f;
				case 6:
					return 3640.027f, 3748.171f, 27.516f;
				case 7:
					return 3639.825f, 3749.372f, 27.516f;
				case 8:
					return 3644.634f, 3753.456f, 27.516f;
				case 9:
					return 3636.038f, 3758.385f, 27.526f;
				default:
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 0:
					return 843.7468f, -569.6199f, 56.7129f;
				case 1:
					return 844.7662f, -569.5567f, 56.7129f;
				case 2:
					return 844.551f, -570.6559f, 56.7205f;
				case 3:
					return 840.2903f, -576.6917f, 56.1228f;
				case 4:
					return 849.1538f, -564.7379f, 56.7129f;
				case 5:
					return 852.2469f, -566.6097f, 56.7129f;
				case 6:
					return 853.2767f, -567.3681f, 56.7278f;
				case 7:
					return 850.9171f, -557.7505f, 56.7129f;
				case 8:
					return 844.3807f, -563.3856f, 56.8389f;
				case 9:
					return -1026.0924f, -1135.1073f, 2.196f;
				default:
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 0:
					return -929.0416f, 809.9677f, 186.8587f;
				case 1:
					return -940.8338f, 803.926f, 183.781f;
				case 2:
					return -941.0332f, 802.8611f, 183.781f;
				case 3:
					return -916.307f, 806.2703f, 183.3381f;
				case 4:
					return -915.8615f, 805.3514f, 183.4227f;
				case 5:
					return -931.3373f, 803.9482f, 183.781f;
				case 6:
					return -944.587f, 798.567f, 180.5586f;
				case 7:
					return -930.9679f, 812.939f, 186.8587f;
				case 8:
					return -920.0079f, 804.9675f, 183.1238f;
				case 9:
					return 403.3865f, -1501.7374f, 29.3046f;
				default:
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 0:
					return -3190.7773f, 1297.712f, 18.0724f;
				case 1:
					return -3183.0183f, 1292.2537f, 13.5283f;
				case 2:
					return -3176.7725f, 1308.8727f, 13.5913f;
				case 3:
					return -3173.6243f, 1298.4901f, 13.5519f;
				case 4:
					return -3176.256f, 1303.451f, 13.5873f;
				case 5:
					return -3181.9182f, 1292.7751f, 13.5497f;
				case 6:
					return -3174.6392f, 1297.3826f, 13.5167f;
				case 7:
					return -3180.7327f, 1288.7812f, 13.1484f;
				case 8:
					return -3174.2898f, 1303.4716f, 13.5879f;
				case 9:
					return -608.6822f, -1000.8253f, 21.9848f;
				default:
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 0:
					return 470.748f, -1105.223f, 42.076f;
				case 1:
					return 469.981f, -1106.353f, 42.076f;
				case 2:
					return 476.6097f, -1104.0577f, 42.0756f;
				case 3:
					return 475.6701f, -1114.3582f, 42.0757f;
				case 4:
					return 480.5066f, -1111.5201f, 42.0757f;
				case 5:
					return 479.4904f, -1110.5442f, 42.0757f;
				default:
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 0:
					return 527.218f, -21.8702f, 90.1718f;
				case 1:
					return 537.5334f, -15.5713f, 90.1733f;
				case 2:
					return 535.7245f, -15.7051f, 90.173f;
				case 3:
					return 527.244f, -23.3675f, 90.1718f;
				case 4:
					return 530.6858f, -26.2264f, 90.1724f;
				case 5:
					return 531.0799f, -35.0518f, 90.1722f;
				default:
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 0:
					return -1126.5211f, -835.8417f, 18.316f;
				case 1:
					return -1129.8866f, -844.9564f, 18.317f;
				case 2:
					return -1127.8405f, -835.6296f, 18.3159f;
				case 3:
					return -1129.8502f, -846.3411f, 18.3171f;
				case 4:
					return -1129.7075f, -839.9291f, 18.3165f;
				case 5:
					return -1124.6447f, -842.7184f, 18.3161f;
				default:
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 0:
					return -1570.8353f, 426.5624f, 107.5416f;
				case 1:
					return -1578.6234f, 428.1209f, 107.1952f;
				case 2:
					return -1581.8245f, 420.5602f, 106.8435f;
				case 3:
					return -1580.8724f, 420.3125f, 106.7728f;
				case 4:
					return -1579.1565f, 412.5116f, 106.4982f;
				case 5:
					return -1572.7946f, 414.0094f, 106.3319f;
				case 6:
					return -1575.7792f, 413.9764f, 106.2674f;
				case 7:
					return -1578.2765f, 413.6248f, 106.5239f;
				case 8:
					return -1571.7692f, 415.2841f, 106.5546f;
				case 9:
					return -1577.1085f, 414.0846f, 106.4759f;
				case 10:
					return -1574.6554f, 414.2418f, 106.2825f;
				case 11:
					return -1570.8925f, 413.1858f, 106.5285f;
				case 12:
					return -1580.2716f, 412.2874f, 106.5173f;
				case 13:
					return -1579.726f, 413.6505f, 106.5118f;
				case 14:
					return -1576.6023f, 415.2334f, 106.4178f;
				case 15:
					return -1575.3254f, 415.4455f, 106.3253f;
				case 16:
					return -1583.8422f, 411.6516f, 106.035f;
				default:
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 0:
					return -2761.3271f, 2739.279f, 1.3103f;
				case 1:
					return -2753.1057f, 2732.4314f, 1.2814f;
				case 2:
					return -2764.0151f, 2726.823f, 1.2677f;
				case 3:
					return -2763.1082f, 2726.3586f, 1.3101f;
				case 4:
					return -2755.719f, 2719.701f, 1.272f;
				case 5:
					return -2757.12f, 2720.708f, 1.271f;
				case 6:
					return -2759.494f, 2721.084f, 1.283f;
				case 7:
					return -2763.68f, 2719.085f, 1.234f;
				case 8:
					return -2763.448f, 2720.102f, 1.273f;
				case 9:
					return -2757.458f, 2721.813f, 1.295f;
				case 10:
					return -2754.094f, 2718.606f, 1.187f;
				case 11:
					return -2758.316f, 2721.178f, 1.275f;
				case 12:
					return -2761.531f, 2720.028f, 1.255f;
				case 13:
					return -2760.61f, 2721.282f, 1.303f;
				case 14:
					return -2762.06f, 2721.104f, 1.309f;
				case 15:
					return -2756.017f, 2721.175f, 1.283f;
				case 16:
					return -2766.6536f, 2719.6777f, 1.2529f;
				default:
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 0:
					return 808.367f, 1235.1537f, 343.4774f;
				case 1:
					return 809.7645f, 1226.0165f, 342.7602f;
				case 2:
					return 798.105f, 1224.8517f, 340.398f;
				case 3:
					return 798.9963f, 1224.3533f, 340.348f;
				case 4:
					return 800.566f, 1215.8699f, 339.3655f;
				case 5:
					return 798.4499f, 1217.2655f, 339.2225f;
				case 6:
					return 798.3521f, 1218.4226f, 339.3551f;
				case 7:
					return 801.1094f, 1214.1862f, 339.324f;
				case 8:
					return 799.4929f, 1217.3119f, 339.4055f;
				case 9:
					return 794.9962f, 1216.3479f, 338.5134f;
				case 10:
					return 800.5606f, 1217.0945f, 339.5327f;
				case 11:
					return 795.7781f, 1218.1464f, 338.8055f;
				case 12:
					return 801.6625f, 1215.4916f, 339.528f;
				case 13:
					return 797.196f, 1217.863f, 339.0759f;
				case 14:
					return 796.83f, 1219.1575f, 339.1925f;
				case 15:
					return 802.0162f, 1217.3898f, 339.8019f;
				case 16:
					return 805.5632f, 1218.6964f, 340.4825f;
				default:
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 0:
					return -1579.848f, 5156.63f, 18.698f;
				case 1:
					return -1580.473f, 5149.196f, 18.851f;
				case 2:
					return -1570.4631f, 5147.3276f, 18.9809f;
				case 3:
					return -1571.21f, 5150.264f, 18.894f;
				case 4:
					return -1582.9f, 5149.682f, 18.781f;
				case 5:
					return -1580.557f, 5144.498f, 19.059f;
				case 6:
					return -1580.487f, 5145.7646f, 18.9271f;
				case 7:
					return -1569.5951f, 5146.312f, 19.0663f;
				case 8:
					return -1569.455f, 5148.33f, 18.845f;
				case 9:
					return -1581.692f, 5149.672f, 18.809f;
				case 10:
					return -1570.087f, 5149.997f, 18.885f;
				default:
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 0:
					return 3264.3713f, 5154.2915f, 18.6431f;
				case 1:
					return 3259.7173f, 5142.7104f, 18.5584f;
				case 2:
					return 3256.3757f, 5140.7427f, 18.5626f;
				case 3:
					return 3253.7559f, 5151.797f, 18.593f;
				case 4:
					return 3252.531f, 5153.392f, 18.6108f;
				case 5:
					return 3247.6157f, 5149.175f, 18.9621f;
				case 6:
					return 3258.7405f, 5140.369f, 18.5697f;
				case 7:
					return 3254.7952f, 5139.7017f, 18.6135f;
				case 8:
					return 3258.6396f, 5141.7837f, 18.5421f;
				case 9:
					return 3251.9573f, 5151.324f, 18.58f;
				case 10:
					return 3249.5676f, 5149.0444f, 18.6121f;
				default:
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 0:
					return 1630.2219f, 3874.0671f, 32.6957f;
				case 1:
					return 1640.0736f, 3878.6194f, 32.9978f;
				case 2:
					return 1645.1693f, 3879.4268f, 33.0693f;
				case 3:
					return 1636.574f, 3867.9668f, 33.2132f;
				case 4:
					return 1637.8336f, 3869.2866f, 33.216f;
				case 5:
					return 1640.7179f, 3867.3726f, 33.3973f;
				case 6:
					return 1646.1235f, 3877.7485f, 33.2124f;
				case 7:
					return 1641.8341f, 3879.3367f, 33.0034f;
				case 8:
					return 1643.5634f, 3878.9148f, 33.0718f;
				case 9:
					return 1638.99f, 3867.8728f, 33.3116f;
				case 10:
					return 1636.0823f, 3869.9177f, 33.1247f;
				default:
			}
			break;
	}
	if (!bParam2)
	{
	}
	return 0f, 0f, 0f;
}

void func_124(int iParam0)//Position - 0x45FFC
{
	struct<3> Var0;
	Var0.f_0 = 936492486;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_125(int iParam0)//Position - 0x48319
{
	switch (iParam0)
	{
		case 45:
			return 0;
		case 46:
			return 1;
		case 47:
			return 2;
		default:
	}
	return -1;
}

var func_126()//Position - 0x49708
{
	return Global_1957718;
}

char* func_127(int iParam0)//Position - 0x7CFCB
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return "VEX_DPO_B_BUYER" /* GXT: Buyer */;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return "VEX_DPO_B_POLIC" /* GXT: Police Station */;
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
			return "VEX_DPO_B_WHOUS" /* GXT: Warehouse */;
		case 46:
		case 47:
		case 48:
			return "VEX_DPO_B_SCRAP" /* GXT: Scrapyard */;
		default:
	}
	return "INVALID";
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xEC58C
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_1361(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_129(var uParam0, int iParam1)//Position - 0x12AD29
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_308(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_1361(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_0__::func_812(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_130(bool bParam0)//Position - 0x1CE7FB
{
	if (bParam0)
	{
		return 523;
	}
	return 523;
}

void func_131()//Position - 0x1CF9A3
{
	if (HUD::DOES_BLIP_EXIST(iLocal_216))
	{
		HUD::REMOVE_BLIP(&iLocal_216);
	}
}

void func_132()//Position - 0x1D04AC
{
	if (HUD::DOES_BLIP_EXIST(iLocal_218))
	{
		HUD::REMOVE_BLIP(&iLocal_218);
	}
}

int func_133(int iParam0)//Position - 0x1D068B
{
	switch (iParam0)
	{
		case 6:
			return 1;
		default:
	}
	return 0;
}

void func_134(int iParam0)//Position - 0x1E0B66
{
	if (__LIB_0__::func_649(&(iParam0->f_35)))
	{
		__LIB_0__::func_579(&(iParam0->f_35));
	}
	if (__LIB_0__::func_649(&(iParam0->f_37)))
	{
		__LIB_0__::func_579(&(iParam0->f_37));
	}
	if (__LIB_0__::func_649(&(iParam0->f_39)))
	{
		__LIB_0__::func_579(&(iParam0->f_39));
	}
}

int func_135(var uParam0, bool bParam1)//Position - 0x1E0BEE
{
	if (!__LIB_0__::func_649(&(uParam0->f_39)))
	{
		__LIB_0__::func_580(&(uParam0->f_39), 0, 0);
	}
	else if (__LIB_1__::func_295(&(uParam0->f_39), 0, 0) >= __LIB_0__::func_138(bParam1, 4000, 2000))
	{
		return 1;
	}
	return 0;
}

bool func_136(var uParam0, int iParam1)//Position - 0x1E0C79
{
	return BitTest(uParam0->f_17[iParam1], 0);
}

void func_137()//Position - 0x1E1396
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 66 /*INPUT_VEH_GUN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 67 /*INPUT_VEH_GUN_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
}

int func_138(var uParam0)//Position - 0x1E1413
{
	if (!Global_2825429)
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) != joaat("polmav"))
		{
			return 0;
		}
	}
	if (!uParam0->f_45)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
		{
			uParam0->f_45 = 1;
		}
	}
	return uParam0->f_45;
}

void func_139(int iParam0, int iParam1)//Position - 0x1E14CA
{
	if (!BitTest(iParam0->f_17[iParam1], 1))
	{
		MISC::SET_BIT(&(iParam0->f_17[iParam1]), 1);
	}
}

bool func_140(int iParam0, int iParam1)//Position - 0x1E14ED
{
	return BitTest(iParam0->f_17[iParam1], 1);
}

float func_141()//Position - 0x207023
{
	return Global_262145.f_19709 /* Tunable: 796142052 */;
}

int func_142(int iParam0, int iParam1)//Position - 0x2071EF
{
	if (__LIB_9__::func_842(iParam0))
	{
		switch (__LIB_9__::func_846(iParam1))
		{
			case 1:
				return Global_262145.f_19456 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER3_EASY */;
			case 2:
				return Global_262145.f_19455 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER3_MEDIUM */;
			case 3:
				return Global_262145.f_19454 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER3_HARD */;
			default:
		}
	}
	else if (__LIB_9__::func_845(iParam0))
	{
		switch (__LIB_9__::func_846(iParam1))
		{
			case 1:
				return Global_262145.f_19453 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER2_EASY */;
			case 2:
				return Global_262145.f_19452 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER2_MEDIUM */;
			case 3:
				return Global_262145.f_19451 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER2_HARD */;
			default:
		}
	}
	else
	{
		switch (__LIB_9__::func_846(iParam1))
		{
			case 1:
				return Global_262145.f_19450 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER1_EASY */;
			case 2:
				return Global_262145.f_19449 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER1_MEDIUM */;
			case 3:
				return Global_262145.f_19448 /* Tunable: IMPEXP_SELL_REDUCTION_BUYER1_HARD */;
			}
		default:
	}
	return 1000;
}

float func_143()//Position - 0x2072C3
{
	return Global_262145.f_19447 /* Tunable: IMPEXP_SELL_DAMAGE_PERCENTAGE */;
}

int func_144(int iParam0)//Position - 0x2075CF
{
	switch (__LIB_9__::func_846(iParam0))
	{
		case 3:
			return Global_262145.f_19706 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_HARD */;
		case 2:
			return Global_262145.f_19707 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_MEDIUM */;
		case 1:
			return Global_262145.f_19708 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_EASY */;
		default:
	}
	return Global_262145.f_19708 /* Tunable: IMPEXP_STEAL_REDUCTION_CAP_EASY */;
}

int func_145(int iParam0, int iParam1)//Position - 0x207619
{
	int iVar0;
	switch (__LIB_9__::func_846(iParam0))
	{
		case 1:
			if (iParam1 >= 1)
			{
				iVar0 = (iVar0 + Global_262145.f_19716 /* Tunable: -1010391742 */);
			}
			if (iParam1 >= 2)
			{
				iVar0 = (iVar0 + Global_262145.f_19717 /* Tunable: 204633964 */);
			}
			if (iParam1 >= 3)
			{
				iVar0 = (iVar0 + Global_262145.f_19718 /* Tunable: 846319261 */);
			}
			break;
		case 2:
			if (iParam1 >= 1)
			{
				iVar0 = (iVar0 + Global_262145.f_19713 /* Tunable: 2141591294 */);
			}
			if (iParam1 >= 2)
			{
				iVar0 = (iVar0 + Global_262145.f_19714 /* Tunable: 215477152 */);
			}
			if (iParam1 >= 3)
			{
				iVar0 = (iVar0 + Global_262145.f_19715 /* Tunable: -2075995707 */);
			}
			break;
		case 3:
			if (iParam1 >= 1)
			{
				iVar0 = (iVar0 + Global_262145.f_19710 /* Tunable: -1996333876 */);
			}
			if (iParam1 >= 2)
			{
				iVar0 = (iVar0 + Global_262145.f_19711 /* Tunable: 195700460 */);
			}
			if (iParam1 >= 3)
			{
				iVar0 = (iVar0 + Global_262145.f_19712 /* Tunable: -2001539927 */);
			}
			break;
	}
	return iVar0;
}

int func_146(int iParam0)//Position - 0x2076EB
{
	switch (__LIB_9__::func_846(iParam0))
	{
		case 1:
			return Global_262145.f_19705 /* Tunable: IMPEXP_STEAL_REDUCTION_EASY */;
		case 2:
			return Global_262145.f_19704 /* Tunable: IMPEXP_STEAL_REDUCTION_MEDIUM */;
		case 3:
			return Global_262145.f_19703 /* Tunable: IMPEXP_STEAL_REDUCTION_HARD */;
		default:
	}
	return Global_262145.f_19705 /* Tunable: IMPEXP_STEAL_REDUCTION_EASY */;
}

float func_147()//Position - 0x207735
{
	return Global_262145.f_19702 /* Tunable: IMPEXP_STEAL_DAMAGE_PERCENTAGE */;
}

void func_148(int iParam0)//Position - 0x3504F
{
	MISC::CLEAR_BIT(&uLocal_169, iParam0);
}

bool func_149(int iParam0)//Position - 0x3506E
{
	return BitTest(uLocal_169, iParam0);
}

void func_150(int iParam0)//Position - 0x38D83
{
	MISC::CLEAR_BIT(&uLocal_168, iParam0);
}

bool func_151(char* sParam0, int iParam1)//Position - 0x3A737
{
	if (!__LIB_1__::func_273())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	return iParam1 == Global_1574757.f_52;
}

bool func_152(int iParam0)//Position - 0x46057
{
	return BitTest(uLocal_168, iParam0);
}

int func_153(var uParam0, int iParam1)//Position - 0x48861
{
	if (iParam1 == 0)
	{
		if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
		{
			return uParam0->f_10;
		}
	}
	return uParam0->f_11;
}

float func_154(var uParam0)//Position - 0x48B1C
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = SYSTEM::TO_FLOAT(__LIB_1__::func_295(&(uParam0->f_4), 0, 0));
	fVar1 = SYSTEM::TO_FLOAT(uParam0->f_7);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_155(var uParam0)//Position - 0x48B83
{
	if (uParam0->f_15 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_15);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_15);
		uParam0->f_15 = -1;
	}
	if (uParam0->f_18 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_18);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_18);
		uParam0->f_18 = -1;
	}
	if (uParam0->f_19 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_19);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_19);
		uParam0->f_19 = -1;
	}
	if (uParam0->f_20 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_20);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_20);
		uParam0->f_20 = -1;
	}
}

void func_156(var uParam0)//Position - 0x48C77
{
	if (!__LIB_15__::func_817(uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_1), 0);
	}
}

bool func_157(var uParam0)//Position - 0x4922D
{
	return NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0);
}

bool func_158(var uParam0)//Position - 0x4924A
{
	return BitTest(uParam0->f_1, 2);
}

int func_159(int iParam0)//Position - 0x37EA5
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && __LIB_3__::func_154(__LIB_19__::func_800(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x4D724
{
	if (__LIB_1__::func_330(iParam0))
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2824571.f_88))
		{
			return Global_2824571.f_45[iParam0];
		}
	}
	return 0;
}

void func_161(char* sParam0)//Position - 0x407
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sParam0);
}

char* func_162(int iParam0)//Position - 0x4A4
{
	switch (iParam0)
	{
		case 0:
			return "dlc_ch_arcade_machine_in_use_scene";
		case 1:
			return "dlc_ch_am_dg_in_menus_scene";
		case 2:
			return "dlc_ch_am_dg_in_gameplay_scene";
		default:
	}
	switch (iParam0)
	{
		case 3:
			return "dlc_ch_arcade_machine_in_use_scene";
		case 4:
			return "dlc_ch_am_rc_in_menus_scene";
		case 5:
			return "dlc_ch_am_rc_in_gameplay_scene";
		case 6:
			return "dlc_ch_am_ws_level_up_scene";
		case 7:
			return "dlc_ch_am_ws_in_menus_scene";
		case 8:
			return "dlc_ch_am_ws_in_gameplay_scene";
		default:
	}
	switch (iParam0)
	{
		case 6:
			return "dlc_ch_am_ws_level_up_scene";
		default:
	}
	switch (iParam0)
	{
		case 9:
			return "dlc_sum20_am_qub3d_in_menus_scene";
		case 10:
			return "dlc_sum20_am_qub3d_in_gameplay_scene";
		default:
	}
	return "";
}

bool func_163(var uParam0, var uParam1)//Position - 0x563
{
	return BitTest(*uParam0, uParam1);
}

void func_164(int iParam0)//Position - 0x5BB
{
	if (Local_134.f_19[iParam0] != -1)
	{
		AUDIO::STOP_SOUND(Local_134.f_19[iParam0]);
	}
}

void func_165(char* sParam0)//Position - 0x646
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

bool func_166(int iParam0)//Position - 0x448A
{
	return AUDIO::HAS_SOUND_FINISHED(Local_134.f_19[iParam0]);
}

void func_167(int iParam0, char* sParam1, float fParam2)//Position - 0x44C8
{
	AUDIO::SET_VARIABLE_ON_SOUND(Local_134.f_19[iParam0], sParam1, fParam2);
}

char* func_168(int iParam0)//Position - 0x4519
{
	switch (Local_134.f_0)
	{
		case 2:
			return "DLC_H3_Arc_Mac_Degen_DotF_Sounds";
		case 3:
			return "DLC_H3_Arc_Mac_Degen_MP_Sounds";
		case 4:
			return "DLC_H3_Arc_Mac_Degen_Pen_Sounds";
		case 6:
			return "DLC_H3_ArcMac_BR2_Frontend_Sounds";
		case 7:
			switch (iParam0)
			{
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
				case 35:
				case 441:
					return "DLC_H3_ArcMac_Wiz_Boss_Amazon_Sounds";
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
					return "DLC_H3_ArcMac_Wiz_Boss_Dark_Knight_Sounds";
				case 46:
				case 47:
				case 48:
				case 49:
				case 460:
				case 50:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
					return "DLC_H3_ArcMac_Wiz_Boss_Spider_Sounds";
				case 56:
				case 57:
				case 58:
				case 59:
				case 60:
				case 61:
				case 62:
				case 63:
				case 64:
					return "DLC_H3_ArcMac_Wiz_Boss_Wizard_Sounds";
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
					return "DLC_H3_ArcMac_Wiz_Boss_Wizard_Vocals_Sounds";
				case 70:
				case 71:
				case 72:
				case 73:
				case 74:
				case 75:
					return "DLC_H3_ArcMac_Wiz_Enemy_Bat_Sounds";
				case 76:
					return "DLC_H3_ArcMac_Wiz_Enemy_Boulder_Sounds";
				case 77:
				case 78:
				case 79:
				case 80:
				case 81:
				case 82:
					return "DLC_H3_ArcMac_Wiz_Enemy_Fairy_Sounds";
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
					return "DLC_H3_ArcMac_Wiz_Enemy_Goblin_Crossbow_Sounds";
				case 88:
				case 89:
				case 90:
				case 91:
				case 92:
					return "DLC_H3_ArcMac_Wiz_Enemy_Goblin_Spear_Sounds";
				case 93:
				case 94:
				case 95:
				case 96:
				case 97:
					return "DLC_H3_ArcMac_Wiz_Enemy_Goblin_Sword_Sounds";
				case 98:
				case 99:
				case 100:
				case 101:
				case 102:
				case 103:
				case 104:
					return "DLC_H3_ArcMac_Wiz_Enemy_Leprechaun_Sounds";
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
					return "DLC_H3_ArcMac_Wiz_Enemy_Ogre_Axe_Sounds";
				case 110:
				case 111:
				case 112:
				case 113:
				case 114:
					return "DLC_H3_ArcMac_Wiz_Enemy_Ogre_Sounds";
				case 115:
				case 116:
				case 117:
				case 118:
				case 119:
					return "DLC_H3_ArcMac_Wiz_Enemy_Skeleton_Caster_Sounds";
				case 120:
				case 121:
				case 122:
				case 123:
				case 124:
					return "DLC_H3_ArcMac_Wiz_Enemy_Skeleton_Spear_Sounds";
				case 125:
				case 126:
				case 127:
				case 128:
				case 129:
					return "DLC_H3_ArcMac_Wiz_Enemy_Skeleton_Sword_Sounds";
				case 130:
				case 131:
				case 132:
				case 133:
					return "DLC_H3_ArcMac_Wiz_Enemy_Slime_Sounds";
				case 134:
				case 135:
					return "DLC_H3_ArcMac_Wiz_Enemy_Snake_Sounds";
				case 136:
				case 137:
				case 138:
				case 139:
				case 140:
					return "DLC_H3_ArcMac_Wiz_Enemy_Spider_Sounds";
				case 141:
				case 142:
				case 143:
				case 144:
				case 145:
					return "DLC_H3_ArcMac_Wiz_Enemy_Unicorn_Sounds";
				case 146:
				case 147:
				case 148:
				case 149:
				case 442:
				case 443:
				case 444:
				case 445:
					return "DLC_H3_ArcMac_Wiz_Environment_Sounds";
				case 150:
				case 440:
				case 151:
				case 152:
				case 153:
				case 154:
				case 155:
				case 156:
				case 157:
				case 158:
				case 159:
				case 160:
				case 161:
					return "DLC_H3_ArcMac_Wiz_Frontend_Sounds";
				case 162:
				case 163:
				case 164:
				case 165:
				case 166:
				case 167:
				case 168:
				case 169:
				case 170:
				case 171:
				case 172:
				case 173:
				case 174:
				case 175:
				case 176:
				case 177:
				case 178:
				case 179:
				case 180:
				case 181:
				case 182:
				case 183:
				case 184:
					return "DLC_H3_ArcMac_Wiz_Player_Level_1_Sounds";
				default:
			}
			switch (iParam0)
			{
				case 200:
				case 201:
				case 202:
				case 203:
				case 204:
				case 205:
				case 206:
				case 207:
				case 208:
				case 209:
				case 210:
				case 211:
				case 212:
				case 213:
				case 214:
				case 215:
				case 216:
				case 217:
				case 218:
				case 219:
				case 220:
				case 221:
				case 222:
					return "DLC_H3_ArcMac_Wiz_Player_Level_2_Sounds";
				case 223:
				case 224:
				case 225:
				case 226:
				case 227:
				case 228:
				case 229:
				case 230:
				case 231:
				case 232:
				case 233:
				case 234:
				case 235:
				case 236:
				case 237:
				case 238:
				case 239:
				case 240:
				case 241:
				case 242:
				case 243:
				case 244:
				case 245:
					return "DLC_H3_ArcMac_Wiz_Player_Level_3_Sounds";
				case 185:
				case 186:
				case 187:
				case 188:
				case 189:
				case 190:
				case 191:
				case 192:
				case 193:
				case 194:
				case 195:
				case 196:
				case 197:
				case 198:
				case 199:
					return "DLC_H3_ArcMac_Wiz_Player_Vocals_Level_1_Sounds";
				case 424:
				case 425:
				case 426:
				case 427:
				case 428:
				case 429:
				case 430:
				case 431:
					return "DLC_H3_ArcMac_Wiz_Player_Vocals_Level_2_Sounds";
				case 432:
				case 433:
				case 434:
				case 435:
				case 436:
				case 437:
				case 438:
				case 439:
					return "DLC_H3_ArcMac_Wiz_Player_Vocals_Level_3_Sounds";
				case 246:
				case 247:
				case 248:
				case 249:
				case 250:
				case 251:
				case 252:
				case 253:
				case 254:
					return "DLC_H3_ArcMac_Wiz_Speech_Bubble_Sounds";
				case 470:
				case 471:
				case 472:
				case 473:
				case 474:
				case 475:
				case 476:
					return "DLC_H3_ArcMac_Wiz_Slideshow";
				case 477:
				case 478:
				case 479:
				case 480:
				case 481:
				case 486:
				case 487:
					return "DLC_H3_ArcMac_Wiz_Frontend_Sounds";
				case 482:
				case 483:
				case 484:
				case 485:
					return "DLC_H3_ArcMac_Wiz_Slideshow_End";
				default:
			}
			break;
		case 8:
		case 9:
		case 10:
			switch (iParam0)
			{
				case 356:
				case 357:
				case 360:
				case 361:
				case 362:
				case 363:
				case 364:
				case 365:
				case 366:
				case 367:
				case 368:
				case 369:
				case 370:
				case 371:
				case 355:
				case 372:
				case 373:
				case 374:
				case 375:
				case 376:
				case 377:
					return "DLC_H3_RaceNChase_Frontend_Sounds";
				case 378:
				case 379:
				case 380:
				case 381:
				case 382:
				case 383:
				case 384:
				case 385:
				case 386:
					return "DLC_H3_RaceNChase_RadioPreview";
				case 387:
				case 388:
				case 389:
				case 390:
				case 391:
				case 392:
				case 393:
					return "DLC_H3_RaceNChase_Collision_Sounds";
				case 394:
				case 395:
				case 396:
				case 397:
				case 398:
				case 399:
				case 400:
					return "DLC_H3_RaceNChase_Car_Sounds";
				case 401:
				case 402:
				case 403:
				case 404:
				case 405:
				case 406:
				case 407:
					return "DLC_H3_RaceNChase_Bike_Sounds";
				case 408:
				case 409:
				case 410:
				case 411:
				case 412:
				case 413:
				case 414:
					return "DLC_H3_RaceNChase_Truck_Sounds";
				case 358:
				case 359:
					return "DLC_H3_RaceNChase_Vehicles_Sounds";
				case 415:
				case 416:
				case 417:
				case 418:
				case 419:
				case 420:
				case 421:
				case 422:
				case 423:
					return "DLC_H3_RaceNChase_Ambience_Sounds";
				default:
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 255:
				case 256:
				case 257:
				case 258:
				case 259:
				case 260:
				case 261:
				case 262:
				case 263:
				case 264:
				case 265:
				case 266:
				case 267:
				case 268:
					return "DLC_H3_SpaceMonkey3_FrontEnd_Sounds";
				case 269:
				case 270:
				case 271:
				case 272:
				case 273:
				case 274:
				case 281:
				case 275:
				case 276:
				case 277:
				case 278:
				case 280:
				case 279:
				case 282:
				case 446:
				case 447:
				case 448:
					return "DLC_H3_SpaceMonkey3_Player_Weapons_Sounds";
				case 283:
				case 284:
				case 285:
				case 286:
					return "DLC_H3_SpaceMonkey3_Enemy_Weapons_Sounds";
				case 287:
				case 291:
				case 288:
				case 289:
				case 290:
				case 292:
				case 293:
				case 294:
				case 295:
				case 296:
				case 297:
				case 298:
				case 449:
					return "DLC_H3_SpaceMonkey3_Damage_Sounds";
				case 299:
				case 300:
				case 301:
				case 302:
				case 303:
				case 304:
				case 305:
				case 306:
				case 307:
				case 308:
				case 309:
				case 310:
				case 311:
				case 312:
				case 313:
				case 314:
				case 315:
				case 316:
				case 450:
					return "DLC_H3_SpaceMonkey3_Pickup_Sounds";
				case 317:
				case 318:
				case 319:
				case 320:
				case 321:
				case 322:
				case 451:
				case 452:
				case 453:
					return "DLC_H3_SpaceMonkey3_Boss_BananaBread_Sounds";
				case 323:
				case 324:
				case 325:
				case 326:
				case 327:
				case 328:
				case 329:
				case 330:
				case 454:
				case 455:
					return "DLC_H3_SpaceMonkey3_Boss_DrDank_Sounds";
				case 331:
				case 332:
				case 333:
				case 334:
				case 335:
				case 336:
				case 337:
				case 338:
				case 339:
				case 340:
				case 341:
				case 456:
					return "DLC_H3_SpaceMonkey3_Boss_Gran_Sounds";
				case 342:
				case 343:
				case 344:
				case 345:
				case 346:
				case 457:
				case 458:
					return "DLC_H3_SpaceMonkey3_Boss_MajorBanana_Sounds";
				case 347:
				case 348:
				case 349:
				case 350:
				case 351:
				case 352:
				case 459:
					return "DLC_H3_SpaceMonkey3_Boss_MistaSmoothie_Sounds";
				case 353:
				case 354:
					return "DLC_H3_SpaceMonkey3_Enemy_Actions_Sounds";
				case 461:
				case 462:
				case 463:
				case 464:
				case 465:
				case 466:
				case 467:
				case 468:
					return "DLC_H3_SpaceMonkey3_Monkey_Vocal_Sounds";
				default:
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 488:
				case 489:
				case 490:
					return "sum20_am_Qub3d_sounds";
				default:
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 491:
				case 492:
				case 493:
					return "DLC_TUNER_AM_CH_Frontend_Sounds";
				default:
			}
			break;
	}
	return "";
}

char* func_169(int iParam0)//Position - 0x5224
{
	switch (iParam0)
	{
		case 0:
			return "BOOT_SCREEN";
		case 1:
			return "BOOT_SCREEN_STAR";
		case 2:
			return "EXPLODE";
		case 3:
			return "ARP1";
		case 4:
			return "BUZZER";
		case 5:
			return "1POINT";
		case 6:
			return "MUSIC_MAIN_LOOP";
		case 469:
			return "MUSIC_MAIN_LOOP_UW";
		case 7:
			return "MUSIC_FAIL";
		case 8:
			return "ATTRACT_LOOP";
		case 9:
			return "ZAP1";
		case 10:
			return "THRUST" /* GXT: Thrust */;
		case 11:
			return "ZAP2";
		case 12:
			return "WARN";
		case 13:
			return "HIGH_SCORE_LETTER_CHANGE";
		case 14:
			return "HIGH_SCORE_LETTER_SET";
		case 15:
			return "HIGH_SCORE_STORE";
		case 16:
			return "KICK_MACHINE";
		case 17:
			return "JUMP";
		case 18:
			return "SWING";
		case 20:
			return "TICKY_FLY_LOOP";
		case 21:
			return "GENERATE";
		case 22:
			return "MUSIC_MENU_LOOP";
		case 23:
			return "MENU_NAV";
		case 24:
			return "MENU_SELECT";
		case 25:
			return "MENU_BACK";
		case 19:
			return "SWING_B";
		case 26:
			return "Score_Letter_Change";
		case 27:
			return "Score_Letter_Select";
		case 28:
			return "Score_Entered";
		default:
	}
	switch (iParam0)
	{
		case 29:
			return "Aggro";
		case 30:
			return "Attack_Thrust";
		case 31:
			return "Attack_Stab";
		case 32:
			return "Attck_Jump";
		case 33:
			return "Death";
		case 34:
			return "Pain";
		case 35:
			return "Bodyfall";
		case 441:
			return "Jump_Land";
		case 36:
			return "Aggro";
		case 37:
			return "Knockback";
		case 38:
			return "Attack_Vocal";
		case 39:
			return "Attack_Slash";
		case 40:
			return "Attack_Slam";
		case 41:
			return "Death";
		case 42:
			return "Pain";
		case 43:
			return "Draw_Sword";
		case 44:
			return "Stand_Up";
		case 45:
			return "Bodyfall";
		case 46:
			return "Aggro";
		case 47:
			return "Attack_Hit";
		case 48:
			return "Attack_Spit";
		case 49:
			return "Death";
		case 460:
			return "Death_Final";
		case 50:
			return "Pain";
		case 51:
			return "Ceiling_Climb_Loop";
		case 52:
			return "Attack_Drop";
		case 53:
			return "Attack_Drop_Land";
		case 54:
			return "Climb_Up";
		case 55:
			return "Climb_Down";
		case 56:
			return "Death_Blasts";
		case 57:
			return "Death_Final";
		case 58:
			return "Magic_Cast_Spell";
		case 59:
			return "Magic_Fire_First";
		case 60:
			return "Magic_Fire_Flames";
		case 61:
			return "Magic_Flame_Pillar";
		case 62:
			return "Magic_Flame_Pillar_Short";
		case 63:
			return "Magic_Teleport_In";
		case 64:
			return "Magic_Teleport_Out";
		case 65:
			return "Dialog";
		case 66:
			return "Game_Over";
		case 67:
			return "Hurt";
		case 68:
			return "Killed";
		case 69:
			return "Pain";
		case 70:
			return "Aggro";
		case 71:
			return "Attack";
		case 72:
			return "Death";
		case 73:
			return "Pain";
		case 74:
			return "Dash";
		case 75:
			return "Bodyfall";
		case 76:
			return "Bouncing";
		case 77:
			return "Aggro";
		case 78:
			return "Attack";
		case 79:
			return "Death";
		case 80:
			return "Pain";
		case 81:
			return "Dash";
		case 82:
			return "Bodyfall";
		case 83:
			return "Aggro";
		case 84:
			return "Attack";
		case 85:
			return "Death";
		case 86:
			return "Pain";
		case 87:
			return "Bodyfall";
		case 88:
			return "Aggro";
		case 89:
			return "Attack";
		case 90:
			return "Death";
		case 91:
			return "Pain";
		case 92:
			return "Bodyfall";
		case 93:
			return "Aggro";
		case 94:
			return "Attack";
		case 95:
			return "Death";
		case 96:
			return "Pain";
		case 97:
			return "Bodyfall";
		case 98:
			return "Aggro";
		case 99:
			return "Attack";
		case 100:
			return "Coin_Attack";
		case 101:
			return "Death";
		case 102:
			return "Jump_Land";
		case 103:
			return "Pain";
		case 104:
			return "Bodyfall";
		case 105:
			return "Aggro";
		case 106:
			return "Attack";
		case 107:
			return "Death";
		case 108:
			return "Pain";
		case 109:
			return "Bodyfall";
		case 110:
			return "Aggro";
		case 111:
			return "Attack";
		case 112:
			return "Death";
		case 113:
			return "Pain";
		case 114:
			return "Bodyfall";
		case 115:
			return "Aggro";
		case 116:
			return "Attack";
		case 117:
			return "Death";
		case 118:
			return "Pain";
		case 119:
			return "Bodyfall";
		case 120:
			return "Aggro";
		case 121:
			return "Attack";
		case 122:
			return "Death";
		case 123:
			return "Pain";
		case 124:
			return "Bodyfall";
		case 125:
			return "Aggro";
		case 126:
			return "Attack";
		case 127:
			return "Death";
		case 128:
			return "Pain";
		case 129:
			return "Bodyfall";
		case 130:
			return "Attack";
		case 131:
			return "Death";
		case 132:
			return "Pain";
		case 133:
			return "Aggro";
		case 134:
			return "Death";
		case 135:
			return "Aggro";
		case 136:
			return "Aggro";
		case 137:
			return "Attack";
		case 138:
			return "Death";
		case 139:
			return "Pain";
		case 140:
			return "Bodyfall";
		case 141:
			return "Aggro";
		case 142:
			return "Attack";
		case 143:
			return "Jump";
		case 144:
			return "Death";
		case 145:
			return "Pain";
		case 146:
			return "Spike_Up";
		case 147:
			return "Spike_Down";
		case 148:
			return "Stalagtite_Crack";
		case 149:
			return "Stalagtite_Land";
		case 150:
			return "Intro_Thunder";
		case 440:
			return "Intro_Thunder_Double";
		case 151:
			return "Pickup_HP";
		case 152:
			return "Pickup_MP";
		case 153:
			return "Pickup_Treasure";
		case 154:
			return "Stage_Continue";
		case 155:
			return "Stage_Start_Sword_Hit";
		case 156:
			return "Stage_Start_Sword_Shing";
		case 157:
			return "Frontend_Select";
		case 158:
			return "Frontend_Nav";
		case 159:
			return "Highscore_Letter_Change";
		case 160:
			return "Highscore_Letter_Lock";
		case 161:
			return "Highscore_Done";
		case 162:
			return "Walk_Loop";
		case 163:
			return "Attack_Boss_Final_Hit";
		case 164:
			return "Attack_Dash_Swipe";
		case 165:
			return "Attack_Dash_Hit";
		case 166:
			return "Attack_Long_Swipe";
		case 167:
			return "Attack_Long_Hit";
		case 168:
			return "Attack_Short_Swipe";
		case 169:
			return "Attack_Short_Hit";
		case 170:
			return "Attack_Kick_Swipe";
		case 171:
			return "Attack_Kick_Hit";
		case 172:
			return "Attack_Jump_Kick_Swipe";
		case 173:
			return "Attack_Jump_Kick_Hit";
		case 174:
			return "Jump_Land";
		case 175:
			return "Body_Fall";
		case 176:
			return "Level_Up_Fullscreen";
		case 177:
			return "Level_Up_IG";
		case 178:
			return "Level_Up_Sword";
		case 179:
			return "Magic_Draw_Sword";
		case 180:
			return "Magic_Nuke_Cast";
		case 181:
			return "Magic_Nuke_Small_Blast";
		case 182:
			return "Weapon_Deflect_Arrow";
		case 183:
			return "Weapon_Deflect_Fireball";
		case 184:
			return "Hit_By_Enemy";
		case 185:
			return "Melee";
		case 186:
			return "Hurt";
		case 187:
			return "Jump";
		case 188:
			return "Knocked_Down";
		case 189:
			return "Death";
		case 190:
			return "Fall_To_Death";
		case 191:
			return "Magic_Screen_Nuke";
		case 192:
			return "Level_Up";
		case 193:
			return "Generic_Looking_At_Map";
		case 194:
			return "Level_Begin";
		case 195:
			return "Naming_Location_On_Map_Village";
		case 196:
			return "Naming_Location_On_Map_Forest";
		case 197:
			return "Naming_Location_On_Map_Swamp";
		case 198:
			return "Naming_Location_On_Map_Cave";
		case 199:
			return "Naming_Location_On_Map_Wizard_Tower";
		default:
	}
	switch (iParam0)
	{
		case 200:
			return "Walk_Loop";
		case 201:
			return "Attack_Boss_Final_Hit";
		case 202:
			return "Attack_Dash_Swipe";
		case 203:
			return "Attack_Dash_Hit";
		case 204:
			return "Attack_Long_Swipe";
		case 205:
			return "Attack_Long_Hit";
		case 206:
			return "Attack_Short_Swipe";
		case 207:
			return "Attack_Short_Hit";
		case 208:
			return "Attack_Kick_Swipe";
		case 209:
			return "Attack_Kick_Hit";
		case 210:
			return "Attack_Jump_Kick_Swipe";
		case 211:
			return "Attack_Jump_Kick_Hit";
		case 212:
			return "Jump_Land";
		case 213:
			return "Body_Fall";
		case 214:
			return "Level_Up_Fullscreen";
		case 215:
			return "Level_Up_IG";
		case 216:
			return "Level_Up_Sword";
		case 217:
			return "Magic_Draw_Sword";
		case 218:
			return "Magic_Nuke_Cast";
		case 219:
			return "Magic_Nuke_Small_Blast";
		case 220:
			return "Weapon_Deflect_Arrow";
		case 221:
			return "Weapon_Deflect_Fireball";
		case 222:
			return "Hit_By_Enemy";
		case 223:
			return "Walk_Loop";
		case 224:
			return "Attack_Boss_Final_Hit";
		case 225:
			return "Attack_Dash_Swipe";
		case 226:
			return "Attack_Dash_Hit";
		case 227:
			return "Attack_Long_Swipe";
		case 228:
			return "Attack_Long_Hit";
		case 229:
			return "Attack_Short_Swipe";
		case 230:
			return "Attack_Short_Hit";
		case 231:
			return "Attack_Kick_Swipe";
		case 232:
			return "Attack_Kick_Hit";
		case 233:
			return "Attack_Jump_Kick_Swipe";
		case 234:
			return "Attack_Jump_Kick_Hit";
		case 235:
			return "Jump_Land";
		case 236:
			return "Body_Fall";
		case 237:
			return "Level_Up_Fullscreen";
		case 238:
			return "Level_Up_IG";
		case 239:
			return "Level_Up_Sword";
		case 240:
			return "Magic_Draw_Sword";
		case 241:
			return "Magic_Nuke_Cast";
		case 242:
			return "Magic_Nuke_Small_Blast";
		case 243:
			return "Weapon_Deflect_Arrow";
		case 244:
			return "Weapon_Deflect_Fireball";
		case 245:
			return "Hit_By_Enemy";
		case 246:
			return "Thog";
		case 247:
			return "Grog";
		case 248:
			return "Wizard";
		case 249:
			return "Man_01";
		case 250:
			return "Man_02";
		case 251:
			return "Woman_01";
		case 252:
			return "Woman_02";
		case 253:
			return "Woman_03";
		case 254:
			return "Woman_04";
		case 424:
			return "Melee";
		case 425:
			return "Hurt";
		case 426:
			return "Jump";
		case 427:
			return "Knocked_Down";
		case 428:
			return "Death";
		case 429:
			return "Fall_To_Death";
		case 430:
			return "Magic_Screen_Nuke";
		case 431:
			return "Level_Up";
		case 432:
			return "Melee";
		case 433:
			return "Hurt";
		case 434:
			return "Jump";
		case 435:
			return "Knocked_Down";
		case 436:
			return "Death";
		case 437:
			return "Fall_To_Death";
		case 438:
			return "Magic_Screen_Nuke";
		case 439:
			return "Level_Up";
		case 442:
			return "Ambience_Loop_Forest";
		case 443:
			return "Ambience_Loop_Swamp";
		case 444:
			return "Ambience_Loop_Caves";
		case 445:
			return "Ambience_Loop_Castle";
		case 470:
			return "01";
		case 471:
			return "02";
		case 472:
			return "03";
		case 473:
			return "04";
		case 474:
			return "05";
		case 475:
			return "06";
		case 476:
			return "07";
		case 477:
			return "Pickup_HP_Big";
		case 478:
			return "Pickup_MP_Big";
		case 479:
			return "Mana_Full";
		case 480:
			return "Mana_Empty";
		case 481:
			return "Extra_Life";
		case 482:
			return "01";
		case 483:
			return "02";
		case 484:
			return "03";
		case 485:
			return "04";
		case 486:
			return "Score_Count";
		case 487:
			return "Score_Count_Complete";
		default:
	}
	switch (iParam0)
	{
		case 255:
			return "FE_SpeechBubble_Appear_Synth";
		case 256:
			return "FE_SpeechBubble_Disappear_Synth";
		case 257:
			return "FE_SpeechBubble_Appear_Sweep";
		case 258:
			return "FE_SpeechBubble_Disappear_Sweep";
		case 259:
			return "FE_Scorecount_Loop";
		case 260:
			return "FE_Scorecount_Final";
		case 261:
			return "FE_Score_Letter_Change_L";
		case 262:
			return "FE_Score_Letter_Change_R";
		case 263:
			return "FE_Score_Letter_Select";
		case 264:
			return "FE_Score_Entered";
		case 265:
			return "FE_Score_Change_Page";
		case 266:
			return "FE_Pressed_Start";
		case 267:
			return "FE_Navigate_Menu";
		case 268:
			return "FE_GameOver";
		case 269:
			return "Weap_Player_Default";
		case 270:
			return "Weap_Player_Double";
		case 271:
			return "Weap_Player_Triple";
		case 272:
			return "Weap_Player_Rocket";
		case 273:
			return "Weap_Player_Scatter";
		case 274:
			return "Weap_Player_Beam";
		case 281:
			return "Weap_Player_Rocket_Explode";
		case 275:
			return "Ability_Player_Activate_Nuke";
		case 276:
			return "Ability_Player_Activate_Stun";
		case 277:
			return "Ability_Player_Activate_Decoy";
		case 278:
			return "Ability_Player_Decoy_Loop";
		case 280:
			return "Abilty_Player_Activate_Repulse";
		case 279:
			return "Ability_Player_Deactivate_Decoy";
		case 282:
			return "Ability_Player_Deactivate_Stun";
		case 283:
			return "Weap_Enemy_Default";
		case 284:
			return "Weap_Enemy_Triple";
		case 285:
			return "Weap_Enemy_Scatter";
		case 286:
			return "Weap_Enemy_UFO_Scatter";
		case 287:
			return "Exp_Enemy_Destroyed_Default";
		case 288:
			return "Enemy_Damaged_Default";
		case 289:
			return "Player_Damaged_Default";
		case 290:
			return "Repulse_Reflect";
		case 291:
			return "Exp_Player_Destroyed";
		case 292:
			return "Player_Defeated";
		case 293:
			return "Damage_Banana_Astronaut";
		case 294:
			return "Damage_UFO";
		case 295:
			return "Damage_Spaceship";
		case 296:
			return "Exp_Banana_Astronaut";
		case 297:
			return "Exp_UFO";
		case 298:
			return "Exp_Spaceship";
		case 299:
			return "Pickup_Repulse";
		case 300:
			return "Pickup_Explosion";
		case 301:
			return "Pickup_Stun";
		case 302:
			return "Pickup_Nuke";
		case 303:
			return "Pickup_Decoy";
		case 304:
			return "Pickup_Shard";
		case 305:
			return "Pickup_Extra_Life";
		case 306:
			return "Pickup_Health";
		case 307:
			return "Pickup_Invincibility";
		case 308:
			return "Pickup_Unavailable";
		case 309:
			return "Pickup_Weap_Double";
		case 310:
			return "Pickup_Weap_Triple";
		case 311:
			return "Pickup_Weap_Rocket";
		case 312:
			return "Pickup_Weap_Scatter";
		case 313:
			return "Pickup_Weap_Bolt";
		case 314:
			return "Pickup_Weap_Beam";
		case 315:
			return "Pickup_Weap_DuelArchBeam";
		case 316:
			return "Pickup_Weap_Wave";
		case 317:
			return "Attack_Default";
		case 318:
			return "Attack_Special";
		case 319:
			return "Damage_BananaChip";
		case 320:
			return "Damage_Default";
		case 321:
			return "Speak";
		case 322:
			return "Died";
		case 323:
			return "Attack_Default";
		case 324:
			return "Attack_Special";
		case 325:
			return "Attack_Rockets_Charge";
		case 326:
			return "Attack_Rockets";
		case 327:
			return "Damage_CrackWindow";
		case 328:
			return "Damage_Default";
		case 329:
			return "Speak";
		case 330:
			return "Died";
		case 331:
			return "Attack_EyeLaser";
		case 332:
			return "Attack_EyeLaser_Charge_Loop";
		case 333:
			return "Attack_Scatter";
		case 334:
			return "Attack_Wig_Scatter";
		case 335:
			return "Attack_Wig_Beam";
		case 336:
			return "Damage_BreakGlasses";
		case 337:
			return "Damage_LostGlasses";
		case 338:
			return "Damage_LoseWig";
		case 339:
			return "Damage_Default";
		case 340:
			return "Speak";
		case 341:
			return "Died";
		case 342:
			return "Attack_Default";
		case 343:
			return "Attack_Special";
		case 344:
			return "Damage_Default";
		case 345:
			return "Speak";
		case 346:
			return "Died";
		case 347:
			return "Attack_Default";
		case 348:
			return "Attack_Special";
		case 349:
			return "Damage_Default";
		case 350:
			return "Speak";
		case 351:
			return "Died";
		case 352:
			return "Exp_Apple";
		case 353:
			return "Flyby_UFO";
		case 354:
			return "Flyby_Kamikaze";
		default:
	}
	switch (iParam0)
	{
		case 378:
			return "Afterburn";
		case 379:
			return "Hot_pursuit";
		case 380:
			return "Ls_Nights";
		case 381:
			return "Overdrive";
		case 382:
			return "Red_velvet";
		case 383:
			return "Renegade";
		case 384:
			return "Turbo_BOOST";
		case 385:
			return "Undercover";
		case 386:
			return "Vice_Lights";
		case 356:
			return "fe_checkpoint_reached";
		case 357:
			return "fe_begin_race_go";
		case 360:
			return "fe_begin_race_countdown_3";
		case 361:
			return "fe_begin_race_countdown_2";
		case 362:
			return "fe_time_countdown";
		case 363:
			return "fe_time_10_secs_remaining";
		case 364:
			return "fe_took_lead";
		case 365:
			return "fe_lost_lead";
		case 366:
			return "fe_win_game";
		case 367:
			return "fe_lose_game";
		case 368:
			return "fe_enter_character_select_character_L";
		case 369:
			return "fe_enter_character_select_character_R";
		case 370:
			return "fe_enter_character_letter_entered";
		case 371:
			return "fe_enter_character_score";
		case 355:
			return "fe_navigate_menu";
		case 372:
			return "fe_change_station";
		case 373:
			return "fe_pressed_select";
		case 374:
			return "fe_pressed_start";
		case 375:
			return "fe_title_waves";
		case 376:
			return "fe_title_seagulls";
		case 377:
			return "fe_title_dog_bark";
		case 358:
			return "veh_roadnoise_dirt_loop";
		case 387:
			return "crash_generic";
		case 359:
			return "veh_shift_gear";
		case 388:
			return "crash_land";
		case 389:
			return "collision_dogbark_swtnr";
		case 390:
			return "collision_meow_swtnr";
		case 391:
			return "collision_generic";
		case 392:
			return "collision_ped";
		case 393:
			return "collision_bigfoot";
		case 415:
			return "ambience_horn_by";
		case 416:
			return "ambience_crowd_loop";
		case 417:
			return "ambience_flyby_doppler_loop";
		case 418:
			return "ambience_ufo_loop_by";
		case 419:
			return "ambience_bigfoot_by";
		case 420:
			return "ambience_cougar_by";
		case 421:
			return "ambience_ghost_by_loop";
		case 422:
			return "ambience_bicycle_by";
		case 394:
			return "car_engine_loop";
		case 395:
			return "car_engine_start";
		case 396:
			return "car_skid_01_loop";
		case 397:
			return "car_skid_02_loop";
		case 398:
			return "car_boost_start";
		case 399:
			return "car_boost_loop";
		case 400:
			return "car_brake_loop";
		case 401:
			return "bike_engine_loop";
		case 402:
			return "bike_engine_start";
		case 403:
			return "bike_skid_01_loop";
		case 404:
			return "bike_skid_02_loop";
		case 405:
			return "bike_boost_start";
		case 406:
			return "bike_boost_loop";
		case 407:
			return "bike_brake_loop";
		case 408:
			return "truck_engine_loop";
		case 409:
			return "truck_engine_start";
		case 410:
			return "truck_skid_01_loop";
		case 411:
			return "truck_skid_02_loop";
		case 412:
			return "truck_boost_start";
		case 413:
			return "truck_boost_loop";
		case 414:
			return "truck_brake_loop";
		case 423:
			return "ambience_wind_loop";
		default:
	}
	switch (iParam0)
	{
		case 446:
			return "Ability_Player_Deactivate_Repulse";
		case 447:
			return "Ability_Player_Activate_Shield";
		case 448:
			return "Ability_Player_Deactivate_Shield";
		case 449:
			return "Player_Damaged_Shield";
		case 450:
			return "Pickup_Shield";
		case 451:
			return "Split";
		case 452:
			return "Assemble";
		case 453:
			return "Speak_Defeat";
		case 454:
			return "Speak_Defeat";
		case 455:
			return "Attack_Minigun";
		case 456:
			return "Speak_Defeat";
		case 457:
			return "Speak_Defeat";
		case 458:
			return "ChestBurst";
		case 459:
			return "Speak_Defeat";
		case 461:
			return "Fire";
		case 462:
			return "Kill_Streak";
		case 463:
			return "Stage_Select";
		case 464:
			return "Collect_Powerup";
		case 465:
			return "Extra_Life";
		case 466:
			return "Screech_High";
		case 467:
			return "Screech_Med";
		case 468:
			return "Screech_Low";
		default:
	}
	switch (iParam0)
	{
		case 490:
			return "USE_POWERUP";
		case 489:
			return "Menu_Select";
		case 488:
			return "Menu_Navigate";
		default:
	}
	switch (iParam0)
	{
		case 491:
			return "Score_Letter_Change";
		case 492:
			return "Score_Letter_Select";
		case 493:
			return "Score_Entered";
		default:
	}
	switch (iParam0)
	{
		case 494:
			return "";
		default:
	}
	return "";
}

void func_170(var uParam0, int iParam1, int iParam2)//Position - 0x93BF
{
	struct<3> Var0;
	Var0.f_1 = -1;
	Var0.f_0 = (*uParam0)[iParam1 /*3*/];
	Var0.f_2 = (uParam0[iParam1 /*3*/])->f_2;
	Var0.f_1 = (uParam0[iParam1 /*3*/])->f_1;
	(*uParam0)[iParam1 /*3*/] = (*uParam0)[iParam2 /*3*/];
	(uParam0[iParam1 /*3*/])->f_2 = (uParam0[iParam2 /*3*/])->f_2;
	(uParam0[iParam1 /*3*/])->f_1 = (uParam0[iParam2 /*3*/])->f_1;
	(*uParam0)[iParam2 /*3*/] = Var0.f_0;
	(uParam0[iParam2 /*3*/])->f_2 = Var0.f_2;
	(uParam0[iParam2 /*3*/])->f_1 = Var0.f_1;
}

int func_171(var uParam0, int iParam1)//Position - 0xA13C
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 5);
	iVar1 = (iParam1 % 5) * 6;
	if (iVar0 >= *uParam0)
	{
		return 0;
	}
	return MISC::GET_BITS_IN_RANGE((*uParam0)[iVar0], iVar1, iVar1 + 5);
}

void func_172(var uParam0, int iParam1)//Position - 0x10647
{
	uParam0->f_45 = iParam1;
}

void func_173(var uParam0, int iParam1)//Position - 0x10713
{
	uParam0->f_46 = iParam1;
}

int func_174(var uParam0)//Position - 0x129FA
{
	return uParam0->f_46;
}

void func_175(int iParam0, int iParam1, int iParam2)//Position - 0x12DAB
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 5);
	if (iVar0 >= *iParam2)
	{
		return;
	}
	iVar1 = (iParam1 % 5) * 6;
	MISC::SET_BITS_IN_RANGE(iParam2[iVar0], iVar1, iVar1 + 5, (2 + iParam0));
}

var func_176(int iParam0)//Position - 0x12DE0
{
	return SYSTEM::FLOOR(SYSTEM::LOG10(SYSTEM::TO_FLOAT(iParam0))) + 1;
}

void func_177(int iParam0)//Position - 0x223D4
{
	int iVar0;
	Local_134.f_0 = iParam0;
	iVar0 = 0;
	while (iVar0 < 494)
	{
		Local_134.f_19[iVar0] = -1;
		iVar0++;
	}
}

void func_178(int iParam0, int iParam1)//Position - 0x232D2
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1086643333;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	iVar1 = __LIB_0__::func_679(iParam0);
	if (!iVar1 == 0 && __LIB_0__::func_154(iParam0, 0, 1))
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

void func_179(struct<21> Param0)//Position - 0x832AD
{
	Param0 = { Param0 };
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
}

int func_180()//Position - 0x75411
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		return 0;
	}
	return 1;
}

float func_181(var uParam0)//Position - 0x82BA6
{
	return uParam0->f_14;
}

char* func_182()//Position - 0x873E1
{
	return "MINI@GOLF";
}

char* func_183()//Position - 0x873EE
{
	return "MINI@GOLFAI";
}

void func_184(var uParam0, int iParam1, int iParam2)//Position - 0x9569A
{
	if (__LIB_0__::func_516(&(uParam0->f_1)))
	{
		__LIB_1__::func_37(&(uParam0->f_1));
	}
	if (__LIB_0__::func_516(&(uParam0->f_4)))
	{
		__LIB_1__::func_37(&(uParam0->f_4));
	}
	__LIB_1__::func_899(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_185(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x9EB47
{
	Global_23150.f_8778 = iParam4;
	Global_23150.f_8774 = uParam0;
	Global_23150.f_8775 = uParam1;
	Global_23150.f_8776 = uParam2;
	Global_23150.f_8777 = uParam3;
}

void func_186(var uParam0, int iParam1)//Position - 0x9F884
{
	uParam0->f_29 = iParam1;
}

float func_187(int iParam0)//Position - 0x157A
{
	switch (iParam0)
	{
		case 0:
			return 11.26f;
			break;
		case 1:
			return 10.38f;
			break;
		case 2:
			return 13.4f;
			break;
		case 3:
			return 8.94f;
			break;
		case 4:
			return 12.8f;
			break;
		case 5:
			return 9.42f;
			break;
		case 6:
			return 9.42f;
			break;
		case 7:
			return 15f;
			break;
		case 8:
			return 11.69f;
			break;
	}
	return 0f;
}

Vector3 func_188(int iParam0)//Position - 0x1623
{
	switch (iParam0)
	{
		case 0:
			return -1370.93f, 173.98f, 57.01f;
			break;
		case 1:
			return -1107.26f, 157.15f, 62.04f;
			break;
		case 2:
			return -1312.97f, 125.64f, 56.39f;
			break;
		case 3:
			return -1218.56f, 107.48f, 57.04f;
			break;
		case 4:
			return -1098.15f, 69.5f, 53.09f;
			break;
		case 5:
			return -987.7f, -105.42f, 39.59f;
			break;
		case 6:
			return -1117.793f, -104.069f, 40.8406f;
			break;
		case 7:
			return -1272.63f, 38.4f, 48.75f;
			break;
		case 8:
			return -1138.3812f, 0.60467f, 47.98225f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_189(var uParam0, int iParam1)//Position - 0x1BE5
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0;
	}
	return (uParam0[iParam1 /*3*/])->f_1;
}

int func_190(var uParam0)//Position - 0x1C39
{
	return uParam0->f_18;
}

float func_191(var uParam0)//Position - 0x1C93
{
	return uParam0->f_13;
}

void func_192(var uParam0)//Position - 0x1C9F
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
		OBJECT::DELETE_OBJECT(&(uParam0->f_4));
	}
}

bool func_193(var uParam0, int iParam1)//Position - 0x1CFD
{
	return (uParam0->f_22 && iParam1) != 0;
}

Vector3 func_194(var uParam0, int iParam1)//Position - 0x1D0E
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam1)
	{
		case 0:
			return -1114.121f, 220.789f, 63.78f;
			break;
		case 1:
			return -1322.07f, 158.77f, 56.69f;
			break;
		case 2:
			return -1237.419f, 112.988f, 56.086f;
			break;
		case 3:
			return -1096.541f, 7.848f, 49.63f;
			break;
		case 4:
			return -957.386f, -90.412f, 39.161f;
			break;
		case 5:
			return -1103.516f, -115.163f, 40.444f;
			break;
		case 6:
			return -1290.633f, 2.771f, 49.219f;
			break;
		case 7:
			return -1034.944f, -83.144f, 42.919f;
			break;
		case 8:
			return -1294.775f, 83.51f, 53.804f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_195(var uParam0, int iParam1)//Position - 0x2025
{
	uParam0->f_18 = iParam1;
}

void func_196(var uParam0, var uParam1)//Position - 0x2033
{
	uParam0->f_13 = uParam1;
}

float func_197(var uParam0, int iParam1)//Position - 0x2041
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f;
	}
	return (*uParam0)[iParam1 /*3*/];
}

void func_198(var uParam0, struct<3> Param1)//Position - 0x2067
{
	uParam0->f_7 = { Param1 };
}

void func_199(var uParam0, struct<3> Param1)//Position - 0x2079
{
	uParam0->f_10 = { Param1 };
}

void func_200(var uParam0, struct<3> Param1)//Position - 0x208B
{
	uParam0->f_25 = { Param1 };
}

int func_201(var uParam0)//Position - 0x2122
{
	return uParam0->f_28;
}

void func_202(int iParam0)//Position - 0x213C
{
	Global_112414 = iParam0;
}

void func_203(var uParam0, int iParam1)//Position - 0x2177
{
	uParam0->f_22 = (uParam0->f_22 || iParam1);
}

int func_204(int iParam0)//Position - 0x2D6C
{
	if (iParam0 == 0 || iParam0 == 2)
	{
		return -1;
	}
	return 0;
}

var func_205(var uParam0)//Position - 0x2DDC
{
	return uParam0->f_24;
}

void func_206(var uParam0, var uParam1)//Position - 0x2F12
{
	uParam0->f_16 = uParam1;
}

void func_207(var uParam0)//Position - 0x2F36
{
	uParam0->f_25 = { uParam0->f_28 };
}

void func_208(int iParam0, struct<2> Param1, Vector3 vParam2, struct<2> Param3, var uParam4)//Position - 0x333B
{
	struct<3> Var0;
	Var0 = { __LIB_0__::func_79(Vector(0f, Param3.f_1, Param3.f_0) - Vector(0f, Param1.f_1, Param1.f_0)) * Vector(9f, 9f, 9f) };
	ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 0, Var0, 0f, 0f, 0f, 0, false, false, true, false, true);
}

var func_209(var uParam0)//Position - 0x3418
{
	return uParam0->f_33;
}

int func_210(int iParam0)//Position - 0x34DE
{
	switch (iParam0)
	{
		case -461750719:
		case 930824497:
			return 4;
		case 581794674:
		case -2041329971:
		case -309121453:
		case 555004797:
		case -1885547121:
		case -1915425863:
			return 9;
			break;
		case -2073312001:
		case 627123000:
			return 8;
			break;
		case 1187676648:
		case 282940568:
		case 951832588:
		case -840216541:
		case 510490462:
			return 1;
			break;
		case 1333033863:
			return 2;
			break;
		case -1286696947:
			return 3;
			break;
		case -1595148316:
			return 0;
			break;
		case 435688960:
			return 7;
			break;
	}
	return -1;
}

int func_211(var uParam0, int iParam1)//Position - 0x3636
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0;
	}
	return (uParam0[iParam1 /*3*/])->f_2;
}

void func_212(var uParam0)//Position - 0x365E
{
	*uParam0 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	uParam0->f_6 = 0f;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
}

bool func_213(int iParam0)//Position - 0x3F70
{
	return ENTITY::GET_ENTITY_SPEED(iParam0) < 6f;
}

void func_214(var uParam0)//Position - 0x3F80
{
	struct<3> Var0;
	struct<3> Var1;
	if (uParam0->f_5 == 0f && uParam0->f_6 == 0f)
	{
		return;
	}
	Var0 = { __LIB_0__::func_79(uParam0->f_5, uParam0->f_6, 0f) * Vector(25f, 25f, 25f) * FtoV(MISC::GET_FRAME_TIME()) };
	Var1 = { -Var0 };
	if (MISC::ABSF(uParam0->f_5) < MISC::ABSF(Var0.f_0))
	{
		uParam0->f_5 = 0f;
	}
	else
	{
		uParam0->f_5 = (uParam0->f_5 + Var1.f_0);
	}
	if (MISC::ABSF(uParam0->f_6) < MISC::ABSF(Var0.f_1))
	{
		uParam0->f_6 = 0f;
	}
	else
	{
		uParam0->f_6 = (uParam0->f_6 + Var1.f_1);
	}
}

int func_215(var uParam0, int iParam1)//Position - 0x4251
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 1;
	}
	return (*uParam0)[iParam1];
}

int func_216(var uParam0, int iParam1)//Position - 0x4E2E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_15)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_217(var uParam0, int iParam1)//Position - 0x4E7E
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0f;
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return 0.25f;
			break;
		case 2:
			return 0.25f;
			break;
		case 3:
			return 0.25f;
			break;
		case 4:
			return 0.25f;
			break;
		case 5:
			return 0.25f;
			break;
		case 6:
			return 0.5f;
			break;
		case 7:
			return 0.5f;
			break;
		case 8:
			return 0.5f;
			break;
		case 9:
			return 0.6f;
			break;
		case 10:
			return 0.6f;
			break;
		case 11:
			return 0.7f;
			break;
		case 12:
			return 0.7f;
			break;
		case 13:
			return 0.8f;
			break;
		case 14:
			return 1f;
			break;
		case 15:
			return 1f;
			break;
		case 16:
			return 1f;
			break;
		case 17:
			return 1f;
			break;
		case 18:
			return 1f;
			break;
		case 19:
			return 0.1f;
			break;
	}
	return 0f;
}

float func_218(var uParam0, int iParam1)//Position - 0x4FD9
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0f;
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return 13.5f;
			break;
		case 2:
			return 13.75f;
			break;
		case 3:
			return 16f;
			break;
		case 4:
			return 18f;
			break;
		case 5:
			return 21f;
			break;
		case 6:
			return 17f;
			break;
		case 7:
			return 20f;
			break;
		case 8:
			return 23f;
			break;
		case 9:
			return 26f;
			break;
		case 10:
			return 29f;
			break;
		case 11:
			return 30f;
			break;
		case 12:
			return 37f;
			break;
		case 13:
			return 41f;
			break;
		case 14:
			return 45f;
			break;
		case 15:
			return 50f;
			break;
		case 16:
			return 55f;
			break;
		case 17:
			return 60f;
			break;
		case 18:
			return 64f;
			break;
		case 19:
			return 5f;
			break;
	}
	return 0f;
}

float func_219(float fParam0, float fParam1)//Position - 0x515A
{
	float fVar0;
	fVar0 = SYSTEM::SIN(MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 1f);
	}
	else
	{
		fVar0 = (fVar0 - 1f);
	}
	return (fParam0 + (fVar0 * fParam1));
}

float func_220(int iParam0)//Position - 0x54C3
{
	switch (iParam0)
	{
		case 2:
		case 5:
			return 1f;
			break;
		case 4:
		case 1:
			return 0.95f;
			break;
		case 0:
		case 7:
		case -1:
			return 0.75f;
			break;
		case 3:
			return 1f;
			break;
		default:
			return 1f;
			break;
	}
	return 1f;
}

float func_221(var uParam0, int iParam1)//Position - 0x552E
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0f;
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return (220f / 1.85f);
			break;
		case 2:
			return (210f / 1.85f);
			break;
		case 3:
			return (200f / 1.85f);
			break;
		case 4:
			return (190f / 1.85f);
			break;
		case 5:
			return (180f / 1.85f);
			break;
		case 6:
			return (180f / 1.85f);
			break;
		case 7:
			return (170f / 1.85f);
			break;
		case 8:
			return (160f / 1.85f);
			break;
		case 9:
			return (150f / 1.85f);
			break;
		case 10:
			return (140f / 1.85f);
			break;
		case 11:
			return (130f / 1.85f);
			break;
		case 12:
			return (120f / 1.85f);
			break;
		case 13:
			return (110f / 1.85f);
			break;
		case 14:
			return (100f / 1.85f);
			break;
		case 15:
			return (85f / 1.85f);
			break;
		case 16:
			return (75f / 1.85f);
			break;
		case 17:
			return (65f / 1.85f);
			break;
		case 18:
			return (40f / 1.85f);
			break;
		case 19:
			return (30f / 1.85f);
			break;
	}
	return 0f;
}

void func_222(var uParam0, float fParam1)//Position - 0x5E47
{
	uParam0->f_14 = (uParam0->f_14 + fParam1);
}

void func_223(var uParam0, float fParam1)//Position - 0x5E91
{
	uParam0->f_15 = fParam1;
}

Vector3 func_224(struct<3> Param0, struct<3> Param1)//Position - 0x66C9
{
	struct<3> Var0;
	Var0 = { Param1 * FtoV(__LIB_0__::func_156(Param0, Param1)) };
	return Var0;
}

int func_225(var uParam0)//Position - 0x6B4F
{
	int iVar0;
	iVar0 = __LIB_0__::func_754(uParam0);
	if (((iVar0 == 5 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

float func_226(int iParam0)//Position - 0x6EA7
{
	switch (iParam0)
	{
		case 0:
			return 1f;
			break;
		case 3:
			return (0.5075f / 0.5575f);
			break;
		case 2:
			return (0.558f / 0.5575f);
			break;
		case 5:
			return (0.53f / 0.5575f);
			break;
		case 7:
		case 4:
			return (0.36f / 0.5575f);
			break;
		case 6:
			return (0.79f / 0.5575f);
			break;
		case 1:
			return (0.575f / 0.5575f);
			break;
	}
	return 1f;
}

float func_227(var uParam0, int iParam1)//Position - 0x70F9
{
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return 105.8f;
			break;
		case 3:
			return 100.5f;
			break;
		case 5:
			return 97.3f;
			break;
		case 7:
			return 90.2f;
			break;
		case 8:
			return 87f;
			break;
		case 9:
			return 83f;
			break;
		case 10:
			return 79.9f;
			break;
		case 11:
			return 73.5f;
			break;
		case 12:
			return 68f;
			break;
		case 13:
			return 59.1f;
			break;
		case 14:
			return 52.5f;
			break;
		case 16:
			return 30.9f;
			break;
		case 17:
			return 21.8f;
			break;
		default:
			break;
	}
	return 0f;
}

void func_228(int iParam0, bool bParam1)//Position - 0x71ED
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, bParam1);
}

Vector3 func_229(int iParam0, int iParam1)//Position - 0x7532
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return 0f, 0f, 0f;
}

void func_230(var uParam0, int iParam1)//Position - 0x7550
{
	if (uParam0->f_4 == iParam1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_4));
	}
	uParam0->f_4 = iParam1;
}

int func_231(var uParam0, int iParam1)//Position - 0x76F0
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return joaat("prop_golf_driver");
	}
	switch ((*uParam0)[iParam1])
	{
		case 1:
			return joaat("prop_golf_wood_01");
			break;
		case 2:
			return joaat("prop_golf_wood_01");
			break;
		case 3:
			return joaat("prop_golf_wood_01");
			break;
		case 4:
			return joaat("prop_golf_wood_01");
			break;
		case 5:
			return joaat("prop_golf_wood_01");
			break;
		case 6:
			return joaat("prop_golf_iron_01");
			break;
		case 7:
			return joaat("prop_golf_iron_01");
			break;
		case 8:
			return joaat("prop_golf_iron_01");
			break;
		case 9:
			return joaat("prop_golf_iron_01");
			break;
		case 10:
			return joaat("prop_golf_iron_01");
			break;
		case 11:
			return joaat("prop_golf_iron_01");
			break;
		case 12:
			return joaat("prop_golf_iron_01");
			break;
		case 13:
			return joaat("prop_golf_iron_01");
			break;
		case 14:
			return joaat("prop_golf_pitcher_01");
			break;
		case 15:
			return joaat("prop_golf_pitcher_01");
			break;
		case 16:
			return joaat("prop_golf_pitcher_01");
			break;
		case 17:
			return joaat("prop_golf_pitcher_01");
			break;
		case 18:
			return joaat("prop_golf_pitcher_01");
			break;
		case 19:
			return joaat("prop_golf_putter_01");
			break;
	}
	return joaat("prop_golf_driver");
}

Vector3 func_232(int iParam0)//Position - 0x82A9
{
	if (iParam0 <= 5)
	{
		return 0.11f, -1.08f, 0f;
	}
	if (iParam0 <= 13)
	{
		return 0.11f, -0.81f, 0f;
	}
	if (iParam0 != 19)
	{
		return 0.03f, -0.75f, 0f;
	}
	return 0.1f, -0.55f, 0f;
}

void func_233(var uParam0, var uParam1)//Position - 0x8303
{
	uParam0->f_14 = uParam1;
}

float func_234()//Position - 0x852E
{
	return 0.935f;
}

void func_235(var uParam0, var uParam1)//Position - 0x86B1
{
	uParam0->f_17 = uParam1;
}

void func_236(var uParam0, var uParam1)//Position - 0x86D7
{
	uParam0->f_19 = uParam1;
}

Vector3 func_237(var uParam0, int iParam1)//Position - 0x8802
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam1)
	{
		case 0:
			return -1252.9742f, 182.4325f, 61.3071f;
			break;
		case 1:
			return -1222.2045f, 150.2919f, 58.7062f;
			break;
		case 2:
			return -1240.0823f, 105.7823f, 55.6871f;
			break;
		case 3:
			return -1132.4873f, 74.15947f, 55.23262f;
			break;
		case 4:
			return -1022.11084f, -34.77494f, 44.37743f;
			break;
		case 5:
			return -1100.057f, -114.27702f, 40.5368f;
			break;
		case 6:
			return -1225.2073f, -54.2714f, 44.1932f;
			break;
		case 7:
			return -1159.322f, -26.5465f, 44.7971f;
			break;
		case 8:
			return -1177.1937f, 34.219f, 50.8363f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_238(var uParam0, int iParam1)//Position - 0x8DB7
{
	uParam0->f_22 = (uParam0->f_22 - (uParam0->f_22 && iParam1));
}

Vector3 func_239(var uParam0, int iParam1, int iParam2)//Position - 0x8EDD
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return -1369.2075f, 166.1965f, 57.013f;
					break;
				case 1:
					return -1367.2594f, 166.6778f, 57.013f;
					break;
				case 2:
					return -1370.8029f, 167.6664f, 57.013f;
					break;
				case 3:
					return -1371.5073f, 169.5609f, 57.013f;
					break;
				case 4:
					return -1370.8456f, 164.1834f, 56.89f;
					break;
				case 5:
					return -1367.9016f, 164.2965f, 56.869f;
					break;
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 0:
					return -1101.0491f, 156.1904f, 62.0401f;
					break;
				case 1:
					return -1100.905f, 159.2561f, 62.0415f;
					break;
				case 2:
					return -1102.7826f, 161.6288f, 62.0412f;
					break;
				case 3:
					return -1105.9637f, 161.2863f, 62.0406f;
					break;
				case 4:
					return -1104.4509f, 163.5161f, 62.0095f;
					break;
				case 5:
					return -1099.934f, 161.6773f, 62.0185f;
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 0:
					return -1317.0281f, 128.0565f, 56.4377f;
					break;
				case 1:
					return -1315.4363f, 129.9425f, 56.6243f;
					break;
				case 2:
					return -1313.4515f, 131.9924f, 56.8265f;
					break;
				case 3:
					return -1317.2489f, 133.3213f, 56.705f;
					break;
				case 4:
					return -1318.786f, 131.5965f, 56.4503f;
					break;
				case 5:
					return -1320.1383f, 129.2562f, 56.324f;
					break;
			}
			break;
		case 3:
			switch (iParam2)
			{
				case 0:
					return -1218.8939f, 110.6482f, 57.08f;
					break;
				case 1:
					return -1222.2432f, 110.2088f, 57.08f;
					break;
				case 2:
					return -1220f, 111.91f, 58.0703f;
					break;
				case 3:
					return -1221.2565f, 101.3278f, 57.08f;
					break;
				case 4:
					return -1223.2966f, 103.1185f, 56.813f;
					break;
				case 5:
					return -1216.3892f, 115.3967f, 57.1354f;
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					return -1104.6074f, 70.6124f, 53.212f;
					break;
				case 1:
					return -1101.698f, 73.7137f, 53.1993f;
					break;
				case 2:
					return -1103.9f, 72.917f, 54.3f;
					break;
				case 3:
					return -1100.4252f, 75.0875f, 54.3712f;
					break;
				case 4:
					return -1108.5879f, 72.7163f, 53.4783f;
					break;
				case 5:
					return -1107.1752f, 68.8603f, 53.2257f;
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 0:
					return -984.8632f, -108.5439f, 39.5642f;
					break;
				case 1:
					return -982.4098f, -106.4736f, 39.5732f;
					break;
				case 2:
					return -981.2261f, -103.0422f, 39.5779f;
					break;
				case 3:
					return -981.8594f, -100.6231f, 39.5813f;
					break;
				case 4:
					return -978.5359f, -100.5075f, 39.5193f;
					break;
				case 5:
					return -981.4874f, -109.4747f, 39.2195f;
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 0:
					return -1113.8646f, -100.3123f, 40.905f;
					break;
				case 1:
					return -1111.5592f, -104.7822f, 40.8405f;
					break;
				case 2:
					return -1113.2805f, -107.0443f, 40.8405f;
					break;
				case 3:
					return -1116.9398f, -109.7583f, 40.8608f;
					break;
				case 4:
					return -1110.02f, -108.1524f, 40.7427f;
					break;
				case 5:
					return -1112.815f, -103.1259f, 40.8406f;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 0:
					return -1277.2773f, 36.1405f, 48.9194f;
					break;
				case 1:
					return -1277.3438f, 39.2424f, 49.1028f;
					break;
				case 2:
					return -1275.5933f, 41.3619f, 49.0876f;
					break;
				case 3:
					return -1271.2444f, 43.9149f, 48.9679f;
					break;
				case 4:
					return -1279.0214f, 42.0418f, 49.3157f;
					break;
				case 5:
					return -1281.1838f, 37.6356f, 49.3165f;
					break;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 0:
					return -1138.5895f, -5.6756f, 47.9822f;
					break;
				case 1:
					return -1136.4796f, -5.8462f, 47.9822f;
					break;
				case 2:
					return -1134.6447f, -4.3631f, 47.9822f;
					break;
				case 3:
					return -1133.712f, -2.4897f, 47.9822f;
					break;
				case 4:
					return -1133.8031f, -7.843f, 47.9822f;
					break;
				case 5:
					return -1137.6029f, -9.0347f, 47.8107f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_240(var uParam0, int iParam1, int iParam2)//Position - 0x95A2
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return -1121.4823f, 210.4423f, 63.9292f;
					break;
				case 1:
					return -1111.8832f, 211.2035f, 63.844f;
					break;
				case 2:
					return -1109.5812f, 220.781f, 63.9314f;
					break;
				case 3:
					return -1117.7329f, 231.4756f, 64.5959f;
					break;
				case 4:
					return -1124.8193f, 232.4564f, 65.106f;
					break;
				case 5:
					return -1114.6022f, 228.6924f, 64.1294f;
					break;
				case 6:
					return -1124.3363f, 220.1641f, 64.0189f;
					break;
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 0:
					return -1324.6469f, 150.2405f, 56.9512f;
					break;
				case 1:
					return -1332.147f, 152.7218f, 56.9449f;
					break;
				case 2:
					return -1340.3395f, 165.985f, 57.0015f;
					break;
				case 3:
					return -1330.3406f, 172.5728f, 57.0822f;
					break;
				case 4:
					return -1325.275f, 173.1006f, 57.1633f;
					break;
				case 5:
					return -1337.177f, 158.5159f, 56.9107f;
					break;
				case 6:
					return -1320.5304f, 169.4781f, 56.8531f;
					break;
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 0:
					return -1230.481f, 103.0481f, 55.7491f;
					break;
				case 1:
					return -1234.8417f, 95.7965f, 55.6671f;
					break;
				case 2:
					return -1243.4578f, 95.5196f, 55.5717f;
					break;
				case 3:
					return -1245.1464f, 112.5895f, 55.9974f;
					break;
				case 4:
					return -1239.073f, 119.9953f, 56.4275f;
					break;
				case 5:
					return -1232.4279f, 116.2665f, 56.6504f;
					break;
				case 6:
					return -1235.9989f, 119.75f, 56.425f;
					break;
			}
			break;
		case 3:
			switch (iParam2)
			{
				case 0:
					return -1101.0415f, 27.2703f, 50.1697f;
					break;
				case 1:
					return -1094.1313f, 23.785f, 50.087f;
					break;
				case 2:
					return -1087.6356f, 20.9966f, 50.0321f;
					break;
				case 3:
					return -1080.5242f, 13.8964f, 49.734f;
					break;
				case 4:
					return -1086.1053f, 4.0804f, 49.7967f;
					break;
				case 5:
					return -1097.654f, -1.5694f, 50.0125f;
					break;
				case 6:
					return -1108.6144f, -4.9012f, 49.6852f;
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					return -949.3773f, -93.7449f, 39.525f;
					break;
				case 1:
					return -965.4772f, -92.9853f, 39.3605f;
					break;
				case 2:
					return -965.3192f, -101.431f, 39.4042f;
					break;
				case 3:
					return -952.4808f, -99.1808f, 39.5487f;
					break;
				case 4:
					return -958.345f, -103.7673f, 39.334f;
					break;
				case 5:
					return -949.268f, -87.9874f, 39.3694f;
					break;
				case 6:
					return -951.558f, -85.9542f, 39.2469f;
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 0:
					return -1098.2764f, -107.6579f, 40.5369f;
					break;
				case 1:
					return -1106.573f, -106.9375f, 40.696f;
					break;
				case 2:
					return -1111.6543f, -121.3032f, 40.7039f;
					break;
				case 3:
					return -1102.0128f, -127.7622f, 40.69f;
					break;
				case 4:
					return -1092.9447f, -115.8245f, 40.5376f;
					break;
				case 5:
					return -1094.2567f, -122.7798f, 40.552f;
					break;
				case 6:
					return -1092.9913f, -118.4603f, 40.5422f;
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 0:
					return -1294.8875f, 10.1593f, 50.3758f;
					break;
				case 1:
					return -1288.8715f, 14.8418f, 49.8751f;
					break;
				case 2:
					return -1276.2704f, 11.8301f, 48.5562f;
					break;
				case 3:
					return -1283.1622f, -6.8256f, 48.6238f;
					break;
				case 4:
					return -1275.6063f, -2.029f, 48.0408f;
					break;
				case 5:
					return -1273.712f, 5.2094f, 48.184f;
					break;
				case 6:
					return -1293.3835f, 0.3131f, 49.4842f;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 0:
					return -1041.6849f, -75.4766f, 43.0439f;
					break;
				case 1:
					return -1030.3097f, -76.6724f, 43.2806f;
					break;
				case 2:
					return -1029.7913f, -88.4011f, 43.1511f;
					break;
				case 3:
					return -1041.5754f, -92.4546f, 42.8253f;
					break;
				case 4:
					return -1050.466f, -93.7612f, 42.5099f;
					break;
				case 5:
					return -1050.863f, -84.3568f, 42.5056f;
					break;
				case 6:
					return -1048.343f, -82.4877f, 42.5625f;
					break;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 0:
					return -1284.5513f, 76.0288f, 53.9062f;
					break;
				case 1:
					return -1282.6757f, 86.4323f, 53.9098f;
					break;
				case 2:
					return -1299.27f, 80.8423f, 53.911f;
					break;
				case 3:
					return -1299.1049f, 87.1486f, 53.9145f;
					break;
				case 4:
					return -1290.0995f, 74.7491f, 53.9426f;
					break;
				case 5:
					return -1292.3124f, 90.6955f, 53.9123f;
					break;
				case 6:
					return -1291.1971f, 89.2305f, 53.9061f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_241(var uParam0)//Position - 0xA6D3
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_5));
	}
}

void func_242(int iParam0)//Position - 0xAE79
{
	Global_112414.f_1 = (Global_112414.f_1 || iParam0);
}

void func_243(int iParam0)//Position - 0xB584
{
	Global_112414.f_1 = (Global_112414.f_1 - (Global_112414.f_1 && iParam0));
}

void func_244(var uParam0, int iParam1)//Position - 0x953
{
	uParam0->f_157 = iParam1;
}

void func_245(var uParam0, int iParam1)//Position - 0x961
{
	uParam0->f_158 = iParam1;
}

void func_246(var uParam0, struct<3> Param1)//Position - 0x96F
{
	__LIB_29__::func_200(&(uParam0->f_15[uParam0->f_157 /*34*/]), Param1);
}

void func_247(var uParam0, int iParam1, bool bParam2)//Position - 0x9BF
{
	if (bParam2)
	{
	}
	*uParam0 = iParam1;
}

int func_248(var uParam0, int iParam1, int iParam2)//Position - 0xA48
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0;
	}
	return __LIB_29__::func_193(&(uParam0->f_15[iParam1 /*34*/]), iParam2);
}

int func_249(var uParam0)//Position - 0xA82
{
	if (uParam0->f_157 < 0)
	{
		return -1;
	}
	return __LIB_0__::func_348(&(uParam0->f_15[uParam0->f_157 /*34*/]));
}

var func_250(var uParam0, int iParam1)//Position - 0x14ED
{
	return uParam0->f_152[iParam1];
}

int func_251(var uParam0, int iParam1)//Position - 0x14FD
{
	return uParam0->f_15[iParam1 /*34*/].f_31;
}

void func_252(var uParam0, int iParam1)//Position - 0x2490
{
	__LIB_29__::func_195(&(uParam0->f_15[uParam0->f_157 /*34*/]), (__LIB_29__::func_190(&(uParam0->f_15[uParam0->f_157 /*34*/])) + iParam1));
}

void func_253(var uParam0)//Position - 0x25C4
{
	uParam0->f_23 = uParam0->f_24;
}

void func_254(var uParam0, float fParam1)//Position - 0x25D4
{
	__LIB_29__::func_196(&(uParam0->f_15[uParam0->f_157 /*34*/]), fParam1);
}

int func_255(var uParam0)//Position - 0x25EC
{
	return __LIB_0__::func_649(&(uParam0->f_15[uParam0->f_157 /*34*/]));
}

int func_256(var uParam0)//Position - 0x4E57
{
	return __LIB_15__::func_763(&(uParam0->f_15[uParam0->f_157 /*34*/]));
}

bool func_257(var uParam0, int iParam1)//Position - 0x59A1
{
	return __LIB_29__::func_193(&(uParam0->f_15[uParam0->f_157 /*34*/]), iParam1);
}

float func_258(int iParam0, int iParam1, bool bParam2)//Position - 0x5D32
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
	if (bParam2)
	{
		return SYSTEM::VDIST2(Var0, Var1);
	}
	return (SYSTEM::POW((Var0.f_0 - Var1.f_0), 2f) + SYSTEM::POW((Var0.f_1 - Var1.f_1), 2f));
}

Vector3 func_259(struct<3> Param0, struct<3> Param1)//Position - 0x64E3
{
	struct<3> Var0;
	Var0 = { Param0 - __LIB_29__::func_224(Param0, Param1) };
	return Var0;
}

void func_260(var uParam0, int iParam1)//Position - 0x6962
{
	__LIB_9__::func_1(&(uParam0->f_15[uParam0->f_157 /*34*/]), iParam1);
}

int func_261(struct<3> Param0, struct<2> Param1, var uParam2, var* uParam3, float* fParam4)//Position - 0x6C01
{
	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, uParam3, fParam4, 1, 3f, 0f))
	{
		return 0;
	}
	if (MISC::ABSF((MISC::GET_HEADING_FROM_VECTOR_2D((Param1.f_0 - Param0.f_0), (Param1.f_1 - Param0.f_1)) - *fParam4)) > 90f)
	{
		*fParam4 = (*fParam4 + 180f);
	}
	return 1;
}

void func_262(var uParam0, struct<3> Param1)//Position - 0x6D72
{
	__LIB_29__::func_199(&(uParam0->f_15[uParam0->f_157 /*34*/]), Param1);
}

int func_263(struct<3> Param0, float fParam1)//Position - 0x8877
{
	int iVar0;
	if (__LIB_0__::func_394(Param0, 0f, 0f, 0f, 1056964608, 0))
	{
		return 0;
	}
	iVar0 = OBJECT::CREATE_OBJECT(joaat("prop_golf_ball"), Param0, true, true, false);
	OBJECT::SET_OBJECT_IS_SPECIAL_GOLFBALL(iVar0, true);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, false);
	ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
	if (bLocal_0)
	{
	}
	return iVar0;
}

int func_264(var* uParam0, float fParam1, float fParam2)//Position - 0x89C4
{
	float fVar0;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0 + Vector(fParam2, 0f, 0f), &fVar0, false, false))
	{
		if (MISC::ABSF((uParam0->f_2 - fVar0)) < fParam1)
		{
			uParam0->f_2 = fVar0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_265(var uParam0)//Position - 0x943E
{
	return uParam0->f_157;
}

int func_266(var uParam0)//Position - 0x9C81
{
	return uParam0->f_156;
}

void func_267(var uParam0, int iParam1, int iParam2)//Position - 0x9D7E
{
	uParam0->f_152[iParam2] = iParam1;
}

int func_268(int iParam0, float fParam1)//Position - 0x9E82
{
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fParam1)
	{
		*iParam0 = 4;
		return joaat("A_M_Y_Golfer_01");
	}
	*iParam0 = 5;
	return joaat("A_F_Y_Golfer_01");
}

void func_269(var uParam0, int iParam1)//Position - 0x9F2F
{
	uParam0->f_165 = iParam1;
}

void func_270(var uParam0, int iParam1, int iParam2)//Position - 0x9F3D
{
	uParam0->f_167[iParam2] = iParam1;
}

void func_271(var uParam0, var uParam1)//Position - 0x9F4F
{
	uParam0->f_156 = uParam1;
}

bool func_272(int iParam0)//Position - 0x9F5D
{
	return (Global_112414.f_1 && iParam0) != 0;
}

int func_273(var uParam0)//Position - 0x9F98
{
	return uParam0->f_158;
}

bool func_274(int iParam0)//Position - 0x9FA4
{
	return (iParam0 > 6 && iParam0 < 18);
}

void func_275(var uParam0)//Position - 0xA3C8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = __LIB_29__::func_211(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar1);
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		iVar0++;
	}
}

int func_276(var uParam0, int iParam1)//Position - 0x2310
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return 0;
	}
	return uParam0->f_1[iParam1 /*4*/];
}

void func_277(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x2F09
{
	if (iParam3 < 0)
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1) == 0)
	{
		return;
	}
	uParam0->f_2[iParam3] = sParam1;
	switch (iParam3)
	{
		case 0:
			uParam0->f_11[0] = sParam2;
			uParam0->f_11[1] = 0;
			uParam0->f_11[2] = 0;
			uParam0->f_11[3] = 0;
			uParam0->f_44[0] = iParam4;
			uParam0->f_44[1] = 363;
			uParam0->f_44[2] = 363;
			uParam0->f_44[3] = 363;
			break;
		case 1:
			uParam0->f_11[4] = sParam2;
			uParam0->f_11[5] = 0;
			uParam0->f_11[6] = 0;
			uParam0->f_11[7] = 0;
			uParam0->f_44[4] = iParam4;
			uParam0->f_44[5] = 363;
			uParam0->f_44[6] = 363;
			uParam0->f_44[7] = 363;
			break;
		case 2:
			uParam0->f_11[8] = sParam2;
			uParam0->f_11[9] = 0;
			uParam0->f_11[10] = 0;
			uParam0->f_11[11] = 0;
			uParam0->f_44[8] = iParam4;
			uParam0->f_44[9] = 363;
			uParam0->f_44[10] = 363;
			uParam0->f_44[11] = 363;
			break;
		case 3:
			uParam0->f_11[12] = sParam2;
			uParam0->f_11[13] = 0;
			uParam0->f_11[14] = 0;
			uParam0->f_11[15] = 0;
			uParam0->f_44[12] = iParam4;
			uParam0->f_44[13] = 363;
			uParam0->f_44[14] = 363;
			uParam0->f_44[15] = 363;
			break;
		case 4:
			uParam0->f_11[16] = sParam2;
			uParam0->f_11[17] = 0;
			uParam0->f_11[18] = 0;
			uParam0->f_11[19] = 0;
			uParam0->f_44[16] = iParam4;
			uParam0->f_44[17] = 363;
			uParam0->f_44[18] = 363;
			uParam0->f_44[19] = 363;
			break;
		case 5:
			uParam0->f_11[20] = sParam2;
			uParam0->f_11[21] = 0;
			uParam0->f_11[22] = 0;
			uParam0->f_11[23] = 0;
			uParam0->f_44[20] = iParam4;
			uParam0->f_44[21] = 363;
			uParam0->f_44[22] = 363;
			uParam0->f_44[23] = 363;
			break;
		case 6:
			uParam0->f_11[24] = sParam2;
			uParam0->f_11[25] = 0;
			uParam0->f_11[26] = 0;
			uParam0->f_11[27] = 0;
			uParam0->f_44[24] = iParam4;
			uParam0->f_44[25] = 363;
			uParam0->f_44[26] = 363;
			uParam0->f_44[27] = 363;
			break;
		case 7:
			uParam0->f_11[28] = sParam2;
			uParam0->f_11[29] = 0;
			uParam0->f_11[30] = 0;
			uParam0->f_11[31] = 0;
			uParam0->f_44[28] = iParam4;
			uParam0->f_44[29] = 363;
			uParam0->f_44[30] = 363;
			uParam0->f_44[31] = 363;
			break;
	}
}

bool func_278(int* iParam0, int iParam1)//Position - 0x6D967
{
	return (iParam0->f_531 && iParam1) != 0;
}

void func_279(int* iParam0, int iParam1)//Position - 0x6E2A6
{
	iParam0->f_531 = (iParam0->f_531 - (iParam0->f_531 && iParam1));
}

struct<8> func_280(struct<3> Param0)//Position - 0x6E330
{
	struct<8> Var0;
	StringCopy(&Var0, "<< ", 32);
	StringIntConCat(&Var0, SYSTEM::CEIL(Param0.f_0), 32);
	StringConCat(&Var0, ", ", 32);
	StringIntConCat(&Var0, SYSTEM::CEIL(Param0.f_1), 32);
	StringConCat(&Var0, ", ", 32);
	StringIntConCat(&Var0, SYSTEM::CEIL(Param0.f_2), 32);
	StringConCat(&Var0, " >>", 32);
	return Var0;
}

Vector3 func_281(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x6E3C7
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				*uParam2 = { 4.6807f, 0f, 98.5813f };
				*fParam3 = 40.5269f;
				return -1094.3793f, 158.8722f, 63.4781f;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = { 3.2454f, 0f, 98.5813f };
				*fParam3 = 40.5269f;
				return -1095.311f, 158.7316f, 63.5552f;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = { -3.3433f, 0f, 78.1312f };
				*fParam3 = 37.5666f;
				return -1165.5881f, 136.7941f, 71.5705f;
			}
			else if (iParam1 == 3)
			{
				*uParam2 = { -3.4177f, 0f, 89.8306f };
				*fParam3 = 37.5666f;
				return -1168.8252f, 147.0191f, 71.3499f;
			}
			else if (iParam1 == 4)
			{
				*uParam2 = { 3.7196f, 0f, -113.3335f };
				*fParam3 = 35.4314f;
				return -1335.8735f, 169.6272f, 59.6483f;
			}
			else
			{
				*uParam2 = { 3.7196f, 0f, -113.3335f };
				*fParam3 = 35.4314f;
				return -1333.84f, 168.8565f, 59.7896f;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				*uParam2 = { 4.4568f, 0f, -87.8237f };
				*fParam3 = 45.9116f;
				return -1322.8126f, 126.5154f, 57.9224f;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = { 4.4568f, 0f, -87.8237f };
				*fParam3 = 45.9116f;
				return -1321.8717f, 126.5511f, 57.9958f;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = { 5.1447f, 0f, 33.2004f };
				*fParam3 = 45.9116f;
				return -1251.6779f, 94.2465f, 57.9286f;
			}
			else if (iParam1 == 3)
			{
				*uParam2 = { 5.1447f, 0f, 33.2004f };
				*fParam3 = 45.9116f;
				return -1249.621f, 95.5924f, 57.9286f;
			}
			else if (iParam1 == 4)
			{
				*uParam2 = { -0.4914f, 0f, -174.7261f };
				*fParam3 = 45.9116f;
				return -1241.1838f, 120.3595f, 58.2548f;
			}
			else
			{
				*uParam2 = { -0.4914f, 0f, -174.7261f };
				*fParam3 = 45.9116f;
				return -1241.0734f, 119.1704f, 58.2447f;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				*uParam2 = { -0.7562f, 0f, -124.5854f };
				*fParam3 = 38.4834f;
				return -1228.7203f, 114.3806f, 58.9171f;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = { -0.7562f, 0f, -124.5854f };
				*fParam3 = 38.4834f;
				return -1227.9462f, 113.8469f, 58.9047f;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = { -0.02f, 0f, 64.9655f };
				*fParam3 = 34.9358f;
				return -1097.9763f, 46.7093f, 59.8762f;
			}
			else if (iParam1 == 3)
			{
				*uParam2 = { 0.3494f, 0f, 73.9477f };
				*fParam3 = 34.9358f;
				return -1097.326f, 52.7992f, 59.8767f;
			}
			else if (iParam1 == 4)
			{
				*uParam2 = { -0.8136f, 0f, -81.5381f };
				*fParam3 = 34.9358f;
				return -1104.9528f, 4.2624f, 51.5391f;
			}
			else
			{
				*uParam2 = { -0.8136f, 0f, -81.5381f };
				*fParam3 = 34.9358f;
				return -1103.7354f, 4.4436f, 51.5216f;
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				*uParam2 = { -0.6096f, 0f, -170.001f };
				*fParam3 = 44.7168f;
				return -1095.6362f, 80.3156f, 55.6221f;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = { -0.6096f, 0f, -170.001f };
				*fParam3 = 44.7168f;
				return -1095.5004f, 79.5601f, 55.6139f;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = { -3.0396f, 0f, -138.2854f };
				*fParam3 = 39.9005f;
				return -1082.9509f, 28.7458f, 55.7276f;
			}
			else if (iParam1 == 3)
			{
				*uParam2 = { -3.0396f, 0f, -138.2854f };
				*fParam3 = 39.9005f;
				return -1081.2046f, 26.7871f, 55.5883f;
			}
			else if (iParam1 == 4)
			{
				*uParam2 = { 4.9468f, 0f, 30.4095f };
				*fParam3 = 39.9005f;
				return -952.7022f, -109.9683f, 42.3249f;
			}
			else
			{
				*uParam2 = { 4.9468f, 0f, 30.4095f };
				*fParam3 = 39.9005f;
				return -951.5651f, -109.3009f, 42.3249f;
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				*uParam2 = { 2.4594f, 0f, 87.7383f };
				*fParam3 = 50.8481f;
				return -977.3425f, -103.2089f, 40.9894f;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = { 2.4594f, 0f, 87.7383f };
				*fParam3 = 50.8481f;
				return -978.0359f, -103.1816f, 41.0192f;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = { -2.1647f, 0f, -65.6143f };
				*fParam3 = 41.7968f;
				return -1078.7642f, -131.8416f, 45.7591f;
			}
			else if (iParam1 == 3)
			{
				*uParam2 = { -2.1647f, 0f, -65.6143f };
				*fParam3 = 41.7968f;
				return -1079.3359f, -130.5815f, 45.7591f;
			}
			else if (iParam1 == 4)
			{
				*uParam2 = { 1.3729f, 0f, -119.3426f };
				*fParam3 = 41.7968f;
				return -1108.5283f, -109.6968f, 42.3521f;
			}
			else
			{
				*uParam2 = { 1.3729f, 0f, -119.3426f };
				*fParam3 = 41.7968f;
				return -1107.8715f, -110.0659f, 42.3702f;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				*uParam2 = { 1.8288f, 0f, 55.9156f };
				*fParam3 = 49.0568f;
				return -1107.509f, -109.7506f, 43.3216f;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = { 1.8288f, 0f, 55.9156f };
				*fParam3 = 49.0568f;
				return -1108.1251f, -109.3343f, 43.3453f;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = { 2.7417f, 0f, 64.1222f };
				*fParam3 = 49.0568f;
				return -1154.3723f, -73.2358f, 48.3704f;
			}
			else if (iParam1 == 3)
			{
				*uParam2 = { 2.7417f, 0f, 64.1222f };
				*fParam3 = 49.0568f;
				return -1155.0842f, -74.7036f, 48.3704f;
			}
			else if (iParam1 == 4)
			{
				*uParam2 = { -2.1787f, 0f, -142.5463f };
				*fParam3 = 43.7116f;
				return -1297.5459f, 19.3382f, 52.594f;
			}
			else
			{
				*uParam2 = { -2.1787f, 0f, -142.5463f };
				*fParam3 = 43.7116f;
				return -1296.7295f, 18.2717f, 52.5428f;
			}
			break;
		case 6:
			if (iParam1 == 0)
			{
				*uParam2 = { -3.8509f, 0f, -129.3497f };
				*fParam3 = 48.3305f;
				return -1281.2493f, 45.1062f, 52.0434f;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = { -3.8509f, 0f, -129.3497f };
				*fParam3 = 48.3305f;
				return -1280.5311f, 44.5174f, 51.9809f;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = { 4.4008f, 0f, 67.0328f };
				*fParam3 = 39.9305f;
				return -1085.599f, -62.8286f, 48.9953f;
			}
			else if (iParam1 == 3)
			{
				*uParam2 = { 4.4008f, 0f, 63.0801f };
				*fParam3 = 39.9305f;
				return -1087.0726f, -66.1035f, 48.9953f;
			}
			else if (iParam1 == 4)
			{
				*uParam2 = { 1.5572f, 0f, 47.0931f };
				*fParam3 = 39.9305f;
				return -1032.4058f, -86.9101f, 43.9735f;
			}
			else
			{
				*uParam2 = { 1.5572f, 0f, 47.0931f };
				*fParam3 = 39.9305f;
				return -1032.9202f, -86.4627f, 43.9919f;
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				*uParam2 = { -0.9458f, 0f, 63.0482f };
				*fParam3 = 43.6572f;
				return -1125.9897f, -5.9281f, 50.1341f;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = { -0.9458f, 0f, 63.0482f };
				*fParam3 = 43.6572f;
				return -1126.6157f, -5.6096f, 50.1225f;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = { -0.6997f, 0f, -117.3206f };
				*fParam3 = 46.3961f;
				return -1268.4615f, 86.2135f, 60.3628f;
			}
			else if (iParam1 == 3)
			{
				*uParam2 = { -0.6997f, 0f, -117.3206f };
				*fParam3 = 46.3961f;
				return -1264.1373f, 83.9794f, 60.3033f;
			}
			else if (iParam1 == 4)
			{
				*uParam2 = { 0.561f, 0f, 110.863f };
				*fParam3 = 37.8122f;
				return -1274.6261f, 85.7493f, 55.9815f;
			}
			else
			{
				*uParam2 = { 0.561f, 0f, 110.863f };
				*fParam3 = 37.8122f;
				return -1276.2941f, 85.1135f, 55.999f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_282(var uParam0)//Position - 0x6ED3C
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_283(var uParam0, var uParam1, bool bParam2)//Position - 0x6EDC7
{
	if (bParam2)
	{
	}
	*uParam0 = uParam1;
}

void func_284(int* iParam0, int iParam1)//Position - 0x6EDD9
{
	iParam0->f_115 = (iParam0->f_115 - (iParam0->f_115 && iParam1));
}

void func_285(int iParam0)//Position - 0x6EF58
{
	if (iParam0 == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "GOLF_HUD_HOLE_IN_ONE_MASTER", 0, true);
	}
	else if (iParam0 == 2 || iParam0 == 3)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "GOLF_EAGLE", "HUD_AWARDS", true);
	}
	else if (iParam0 == 4)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "GOLF_BIRDIE", "HUD_AWARDS", true);
	}
	else if ((iParam0 == 15 || iParam0 == 13) || iParam0 == 14)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "GOLF_NEW_RECORD", "HUD_AWARDS", true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
	}
}

void func_286(bool bParam0, int iParam1)//Position - 0x6F576
{
	if (MISC::IS_PC_VERSION())
	{
		if (bParam0)
		{
			if (iParam1 != 363)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		}
	}
}

void func_287(int* iParam0, int iParam1)//Position - 0x6F82F
{
	iParam0->f_115 = (iParam0->f_115 || iParam1);
}

void func_288(int* iParam0, int iParam1)//Position - 0x6F9CE
{
	iParam0->f_120 = (iParam0->f_120 || iParam1);
}

bool func_289(int* iParam0, int iParam1)//Position - 0x6F9E1
{
	return (iParam0->f_120 && iParam1) != 0;
}

int func_290(var uParam0, int iParam1)//Position - 0x6F9F2
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return 0;
	}
	return uParam0->f_1[iParam1 /*4*/].f_3;
}

Vector3 func_291(int iParam0)//Position - 0x701CA
{
	switch (iParam0)
	{
		case 0:
			return -1114.121f, 220.789f, 63.78f;
			break;
		case 1:
			return -1322.07f, 158.77f, 56.69f;
			break;
		case 2:
			return -1237.419f, 112.988f, 56.086f;
			break;
		case 3:
			return -1096.541f, 7.848f, 49.63f;
			break;
		case 4:
			return -957.386f, -90.412f, 39.161f;
			break;
		case 5:
			return -1103.516f, -115.163f, 40.444f;
			break;
		case 6:
			return -1290.632f, 2.754f, 49.217f;
			break;
		case 7:
			return -1034.944f, -83.144f, 42.919f;
			break;
		case 8:
			return -1294.775f, 83.51f, 53.804f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_292(int iParam0, float fParam1, float fParam2)//Position - 0x704CE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SWING_METER_SET_FILL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

struct<4> func_293(int iParam0, int iParam1, var uParam2)//Position - 0x71B13
{
	struct<4> Var0;
	if (iParam0 != iParam1)
	{
		if (iParam0 < iParam1)
		{
			*uParam2 = 18;
			StringCopy(&Var0, "-", 16);
		}
		else
		{
			*uParam2 = 6;
			StringCopy(&Var0, "+", 16);
		}
		StringIntConCat(&Var0, MISC::ABSI((iParam0 - iParam1)), 16);
	}
	else
	{
		*uParam2 = 2;
		StringCopy(&Var0, "E", 16);
	}
	return Var0;
}

int func_294(int iParam0, int iParam1, int iParam2)//Position - 0x71B68
{
	int iVar0;
	if (iParam2 == iParam1)
	{
		return 0;
	}
	iVar0 = 64;
	iVar0 = SYSTEM::SHIFT_LEFT(iVar0, iParam0 * 2);
	if (iParam1 == 1)
	{
	}
	else if (iParam1 < iParam2)
	{
		iVar0 = SYSTEM::SHIFT_LEFT(iVar0, 1);
	}
	else
	{
		iVar0 = (iVar0 || SYSTEM::SHIFT_LEFT(iVar0, 1));
	}
	return iVar0;
}

bool func_295(var uParam0, int iParam1)//Position - 0x71BB5
{
	return (uParam0->f_640 <= iParam1 && iParam1 <= uParam0->f_641);
}

void func_296(var uParam0)//Position - 0x71F55
{
	if (__LIB_29__::func_193(uParam0, 128))
	{
		STREAMING::CLEAR_FOCUS();
		__LIB_29__::func_238(uParam0, 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (STREAMING::IS_ENTITY_FOCUS(uParam0->f_3))
		{
			STREAMING::CLEAR_FOCUS();
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_3));
		}
	}
	uParam0->f_3 = 0;
}

void func_297(var uParam0, int iParam1)//Position - 0x7303A
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*3*/])->f_2))
	{
		OBJECT::DELETE_OBJECT(&((uParam0[iParam1 /*3*/])->f_2));
	}
}

void func_298(var uParam0)//Position - 0x731B6
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_6));
	}
}

void func_299(int iParam0)//Position - 0x731D1
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(Var1 + Vector(1f, 0f, 0f), &fVar0, &Var2))
		{
			Var1.f_2 = (fVar0 + 0.005f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var1, true, false, false, true);
			fVar4 = SYSTEM::SQRT(((Var2.f_0 * Var2.f_0) + (Var2.f_2 * Var2.f_2)));
			fVar5 = SYSTEM::SQRT(((Var2.f_1 * Var2.f_1) + (Var2.f_2 * Var2.f_2)));
			Var3.f_0 = (90f - MISC::ASIN((Var2.f_2 / fVar4)));
			Var3.f_1 = (90f - MISC::ASIN((Var2.f_2 / fVar5)));
			ENTITY::SET_ENTITY_ROTATION(iParam0, Var3, 2, true);
		}
	}
}

int func_300(var uParam0, int iParam1)//Position - 0x73360
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return -1;
	}
	return __LIB_6__::func_215(&(uParam0->f_15[iParam1 /*74*/]));
}

int func_301(int iParam0, int iParam1)//Position - 0x73991
{
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		if (CAM::IS_CAM_INTERPOLATING(iParam0))
		{
			return 1;
		}
		if (iParam1 && CAM::IS_CAM_RENDERING(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_302(int iParam0, int iParam1)//Position - 0x75DCD
{
	var uVar0;
	if (iParam1 != 0)
	{
		uVar0 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1286[iParam0];
	}
	else
	{
		uVar0 = Global_113386.f_18979[0 /*19*/][iParam0 /*2*/].f_1;
	}
	return uVar0;
}

float func_303(int iParam0)//Position - 0x75E4E
{
	var uVar0;
	if (iParam0 != 0)
	{
		uVar0 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1298;
	}
	else
	{
		uVar0 = Global_113386.f_18979.f_34;
	}
	return uVar0;
}

float func_304(int iParam0)//Position - 0x75E7F
{
	var uVar0;
	if (iParam0 != 0)
	{
		uVar0 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1297;
	}
	else
	{
		uVar0 = Global_113386.f_18979.f_33;
	}
	return uVar0;
}

bool func_305(int* iParam0)//Position - 0x7649C
{
	return (iParam0->f_640 == 0 && iParam0->f_641 == 8);
}

int func_306(int iParam0)//Position - 0x764B8
{
	var uVar0;
	if (iParam0 != 0)
	{
		uVar0 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1296;
	}
	else
	{
		uVar0 = Global_113386.f_18979.f_28;
	}
	return uVar0;
}

void func_307(int* iParam0, int iParam1)//Position - 0x7674D
{
	iParam0->f_119 = (iParam0->f_119 - (iParam0->f_119 && iParam1));
}

void func_308(int* iParam0, int iParam1)//Position - 0x76765
{
	iParam0->f_123 = (iParam0->f_123 - (iParam0->f_123 && iParam1));
}

void func_309(int* iParam0, int iParam1)//Position - 0x769A8
{
	iParam0->f_637 = iParam1;
}

bool func_310(int* iParam0)//Position - 0x769B7
{
	return iParam0->f_637;
}

void func_311(int* iParam0, int iParam1)//Position - 0x76C2D
{
	iParam0->f_123 = (iParam0->f_123 || iParam1);
}

bool func_312(int* iParam0, int iParam1)//Position - 0x76C40
{
	return (iParam0->f_123 && iParam1) != 0;
}

int func_313(int iParam0)//Position - 0x76FE8
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		case 1:
			return 4;
			break;
		case 2:
			return 3;
			break;
		case 3:
			return 4;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 3;
			break;
		case 6:
			return 4;
			break;
		case 7:
			return 5;
			break;
		case 8:
			return 4;
			break;
	}
	return 0;
}

int func_314(var uParam0, int iParam1)//Position - 0x77289
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_15)
	{
		return 0;
	}
	return __LIB_0__::func_649(&(uParam0->f_15[iParam1 /*74*/]));
}

Vector3 func_315(var uParam0, int iParam1)//Position - 0x776FE
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_43)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_43[iParam1 /*3*/];
}

Vector3 func_316(var uParam0, int iParam1)//Position - 0x7772A
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_30)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_30[iParam1 /*3*/];
}

int func_317(var uParam0, int iParam1)//Position - 0x777AA
{
	return uParam0->f_15[iParam1 /*74*/].f_31;
}

int func_318(var uParam0)//Position - 0x778FB
{
	return uParam0->f_29;
}

void func_319(var uParam0, int iParam1)//Position - 0x79B46
{
	uParam0->f_38 = (uParam0->f_38 + iParam1);
}

float func_320(float fParam0)//Position - 0x79BDC
{
	return (fParam0 * 1.0936133f);
}

void func_321(int iParam0, bool bParam1, float fParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x79C70
{
	if (MISC::IS_STRING_NULL(sParam4))
	{
		sParam4 = "";
	}
	if (MISC::IS_STRING_NULL(sParam5))
	{
		sParam5 = "";
	}
	if (MISC::IS_STRING_NULL(sParam6))
	{
		sParam6 = "";
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam3);
	__LIB_0__::func_478(sParam4);
	__LIB_0__::func_478(sParam5);
	__LIB_0__::func_478(sParam6);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_322(char* sParam0, char* sParam1)//Position - 0x7A8CA
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "mini@golfreactions@michael@putter"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_01_michael"))
		{
			return "react_lose_putter_01_michael_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_02_michael"))
		{
			return "react_lose_putter_02_michael_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_03_michael"))
		{
			return "react_lose_putter_03_michael_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_01_michael"))
		{
			return "react_win_putter_01_michael_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_02_michael"))
		{
			return "react_win_putter_02_michael_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_03_michael"))
		{
			return "react_win_putter_03_michael_cam";
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "mini@golfreactions@michael@clubs"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_01_michael"))
		{
			return "react_lose_club_01_michael_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_02_michael"))
		{
			return "react_lose_club_02_michael_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_03_michael"))
		{
			return "react_lose_club_03_michael_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_01_michael"))
		{
			return "react_win_club_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_02_michael"))
		{
			return "react_win_club_02_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_03_michael"))
		{
			return "react_win_club_03_cam";
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "mini@golfreactions@franklin@putter"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_01_franklin_frank"))
		{
			return "react_lose_putter_01_franklin_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_02_franklin_frank"))
		{
			return "react_lose_putter_02_franklin_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_03_franklin_frank"))
		{
			return "react_lose_putter_03_franklin_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_01_franklin_frank"))
		{
			return "react_win_putter_01_franklin_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_02_franklin_frank"))
		{
			return "react_win_putter_02_franklin_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_03_franklin_frank"))
		{
			return "react_win_putter_03_franklin_cam";
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "mini@golfreactions@franklin@clubs"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_01_franklin"))
		{
			return "react_lose_club_01_franklin_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_02_franklin"))
		{
			return "react_lose_club_02_franklin_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_03_franklin"))
		{
			return "react_lose_club_03_franklin_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_01_franklin"))
		{
			return "react_win_club_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_02_franklin"))
		{
			return "react_win_club_02_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_03_franklin"))
		{
			return "react_win_club_03_cam";
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "mini@golfreactions@trevor@clubs"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_01_trevor"))
		{
			return "react_lose_putter_01_trevor_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_02_trevor"))
		{
			return "react_lose_putter_02_trevor_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_putter_03_trevor"))
		{
			return "react_lose_putter_03_trevor_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_01_trevor"))
		{
			return "react_win_putter_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_02_trevor"))
		{
			return "react_win_putter_02_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_putter_03_trevor"))
		{
			return "react_win_putter_03_cam";
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "mini@golfreactions@trevor@clubs"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_01_trevor"))
		{
			return "react_lose_club_01_trevor_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_02_trevor"))
		{
			return "react_lose_club_02_trevor_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_lose_club_03_trevor"))
		{
			return "react_lose_club_03_trevor_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_01_trevor"))
		{
			return "react_win_club_01_trevor_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_02_trevor"))
		{
			return "react_win_club_02_trevor_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "react_win_club_03_trevor"))
		{
			return "react_win_club_03_trevor_cam";
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "mini@golfreactions@generic@"))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam1, "putt_react_bad_01"))
		{
			return "putt_react_bad_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "putt_react_bad_02"))
		{
			return "putt_react_bad_02_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "putt_react_bad_03"))
		{
			return "putt_react_bad_03_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "putt_react_good_01"))
		{
			return "putt_react_good_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "putt_react_good_02"))
		{
			return "putt_react_good_02_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "putt_react_good_03"))
		{
			return "putt_react_good_03_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "swing_react_bad_01"))
		{
			return "swing_react_bad_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "swing_react_bad_02"))
		{
			return "swing_react_bad_02_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "swing_react_good_01"))
		{
			return "swing_react_good_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "swing_react_good_02"))
		{
			return "swing_react_good_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "wedge_react_bad_01"))
		{
			return "wedge_react_bad_01_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "wedge_react_bad_02"))
		{
			return "wedge_react_bad_02_cam";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "wedge_swing_good_01"))
		{
			return "wedge_react_good_01_cam";
		}
	}
	return "";
}

void func_323(var uParam0)//Position - 0x7AFEC
{
	if (uParam0->f_24 == 3)
	{
	}
	else if (uParam0->f_24 == -1)
	{
	}
	else if (uParam0->f_24 == 7)
	{
	}
	else if (uParam0->f_24 == 8)
	{
	}
	else if (uParam0->f_24 == 0)
	{
	}
	else if (uParam0->f_24 == 1)
	{
	}
	else if (uParam0->f_24 == 4)
	{
	}
	else if (uParam0->f_24 == 2)
	{
	}
	else if (uParam0->f_24 == 5)
	{
	}
	else if (uParam0->f_24 == 9)
	{
	}
	uParam0->f_23 = uParam0->f_24;
}

bool func_324(struct<2> Param0, var uParam1, int iParam2)//Position - 0x7B5FB
{
	struct<3> Var0;
	struct<3> Var1;
	switch (iParam2)
	{
		case 0:
			Var0 = { -1368.5212f, 172.21158f, 57.01312f };
			Var1 = { -1125.1455f, 199.77325f, 63.89479f };
			break;
		case 1:
			Var0 = { -1134.1769f, 149.05234f, 62.00032f };
			Var1 = { -1319.2616f, 166.3851f, 56.82042f };
			break;
		case 2:
			Var0 = { -1307.9255f, 127.87812f, 56.64053f };
			Var1 = { -1247.8582f, 102.13271f, 55.64892f };
			break;
		case 3:
			Var0 = { -1207.6172f, 104.42262f, 57.04683f };
			Var1 = { -1103.428f, 36.12697f, 50.59733f };
			break;
		case 4:
			Var0 = { -1093.3787f, 62.70148f, 52.66673f };
			Var1 = { -959.64417f, -101.13708f, 39.40543f };
			break;
		case 5:
			Var0 = { -989.712f, -110.51187f, 39.60591f };
			Var1 = { -1092.8246f, -116.18317f, 40.53841f };
			break;
		case 6:
			Var0 = { -1126.4089f, -101.06005f, 40.8463f };
			Var1 = { -1283.5859f, -21.47935f, 47.85569f };
			break;
		case 7:
			Var0 = { -1266.4098f, 35.08315f, 48.37233f };
			Var1 = { -1047.605f, -93.48099f, 42.56837f };
			break;
		case 8:
			Var0 = { -1137.1295f, 7.77768f, 48.13606f };
			Var1 = { -1276.8528f, 94.2132f, 53.7703f };
			break;
	}
	return (((Var1.f_0 - Var0.f_0) * (Param0.f_1 - Var0.f_1)) - ((Var1.f_1 - Var0.f_1) * (Param0.f_0 - Var0.f_0))) < 0f;
}

int func_325(struct<3> Param0)//Position - 0x7B8E1
{
	if (((((((SYSTEM::VDIST2(Param0, -1283.3811f, 80.55217f, 53.905674f) < (30.5f * 30.5f) || SYSTEM::VDIST2(Param0, -1252.5955f, 70.568245f, 51.245884f) < (31f * 31f)) || SYSTEM::VDIST2(Param0, -1229.6606f, 60.067318f, 51.890144f) < (31f * 31f)) || SYSTEM::VDIST2(Param0, -1215.0654f, 50.102516f, 51.799274f) < (33f * 33f)) || SYSTEM::VDIST2(Param0, -1181.4375f, 28.372972f, 50.825546f) < (37.5f * 37.5f)) || SYSTEM::VDIST2(Param0, -1167.5991f, 15.932876f, 49.16326f) < (37.5f * 37.5f)) || SYSTEM::VDIST2(Param0, -1151.0776f, 9.428267f, 48.30155f) < (35f * 35f)) || SYSTEM::VDIST2(Param0, -1187.1747f, 60.732788f, 53.639885f) < (9f * 9f))
	{
		return 0;
	}
	return 1;
}

int func_326(struct<3> Param0)//Position - 0x7BA33
{
	if (((((((((((((((SYSTEM::VDIST2(Param0, -1262.2653f, 30.905869f, 47.800354f) < (23.5f * 23.5f) || SYSTEM::VDIST2(Param0, -1238.0144f, 20.013653f, 46.685284f) < (31.5f * 31.5f)) || SYSTEM::VDIST2(Param0, -1207.6115f, -1.210448f, 46.65575f) < (36.25f * 36.25f)) || SYSTEM::VDIST2(Param0, -1176.8757f, -18.25381f, 45.277035f) < (36.25f * 36.25f)) || SYSTEM::VDIST2(Param0, -1159.9237f, -21.481136f, 45.18527f) < (25.25f * 25.25f)) || SYSTEM::VDIST2(Param0, -1150.8055f, -33.96546f, 44.683826f) < (26.75f * 26.75f)) || SYSTEM::VDIST2(Param0, -1137.1497f, -43.70882f, 44.634342f) < (26.75f * 26.75f)) || SYSTEM::VDIST2(Param0, -1142.3267f, -47.365517f, 44.363075f) < (30f * 30f)) || SYSTEM::VDIST2(Param0, -1139.1334f, -47.338657f, 44.39388f) < (32f * 32f)) || SYSTEM::VDIST2(Param0, -1123.0103f, -54.36808f, 43.90327f) < (32f * 32f)) || SYSTEM::VDIST2(Param0, -1105.071f, -64.81659f, 43.047184f) < (32f * 32f)) || SYSTEM::VDIST2(Param0, -1088.1053f, -68.64159f, 42.17559f) < (32f * 32f)) || SYSTEM::VDIST2(Param0, -1077.9634f, -71.280106f, 42.958477f) < (32f * 32f)) || SYSTEM::VDIST2(Param0, -1067.0763f, -77.985f, 42.574677f) < (32f * 32f)) || SYSTEM::VDIST2(Param0, -1053.7423f, -83.321754f, 42.58896f) < (32f * 32f)) || SYSTEM::VDIST2(Param0, -1041.1979f, -87.2557f, 42.836494f) < (30f * 30f))
	{
		return 0;
	}
	return 1;
}

int func_327(struct<3> Param0)//Position - 0x7BCCD
{
	if (((((((SYSTEM::VDIST2(Param0, -1136.2417f, -95.06858f, 41.302517f) < (28.25f * 28.25f) || SYSTEM::VDIST2(Param0, -1165.4347f, -81.74862f, 44.06945f) < (37f * 37f)) || SYSTEM::VDIST2(Param0, -1191.7983f, -60.593716f, 43.36213f) < (37f * 37f)) || SYSTEM::VDIST2(Param0, -1209.493f, -45.690117f, 43.19042f) < (37f * 37f)) || SYSTEM::VDIST2(Param0, -1222.7806f, -37.27245f, 44.954025f) < (37f * 37f)) || SYSTEM::VDIST2(Param0, -1233.6812f, -29.527641f, 42.59613f) < (40f * 40f)) || SYSTEM::VDIST2(Param0, -1254.5319f, -18.875807f, 46.362934f) < (40f * 40f)) || SYSTEM::VDIST2(Param0, -1291.9644f, -1.428747f, 49.29616f) < (40f * 40f))
	{
		return 0;
	}
	return 1;
}

int func_328(struct<3> Param0)//Position - 0x7BE1F
{
	if ((((SYSTEM::VDIST2(Param0, -989.4491f, -122.88058f, 39.029953f) < (25.25f * 25.25f) || SYSTEM::VDIST2(Param0, -1018.1705f, -117.23991f, 40.538963f) < (25.25f * 25.25f)) || SYSTEM::VDIST2(Param0, -1045.5242f, -123.05896f, 40.773052f) < (28f * 28f)) || SYSTEM::VDIST2(Param0, -1072.8293f, -123.25536f, 40.2801f) < (42f * 42f)) || SYSTEM::VDIST2(Param0, -1094.7015f, -125.87067f, 40.66322f) < (42f * 42f))
	{
		return 0;
	}
	return 1;
}

int func_329(struct<3> Param0)//Position - 0x7BEF6
{
	if (((((((((((SYSTEM::VDIST2(Param0, -946.038f, -84.43751f, 39.088943f) < (29.75f * 29.75f) || SYSTEM::VDIST2(Param0, -969.9369f, -67.45364f, 40.620064f) < (29.75f * 29.75f)) || SYSTEM::VDIST2(Param0, -990.43317f, -51.773438f, 41.65581f) < (35.75f * 29.75f)) || SYSTEM::VDIST2(Param0, -1006.6395f, -20.229515f, 45.67778f) < (48f * 48f)) || SYSTEM::VDIST2(Param0, -1030.7417f, 10.294682f, 49.258698f) < (48f * 48f)) || SYSTEM::VDIST2(Param0, -1074.0447f, 49.566372f, 50.12212f) < (29.75f * 29.75f)) || SYSTEM::VDIST2(Param0, -1081.7299f, 57.717678f, 50.813744f) < (29.75f * 29.75f)) || SYSTEM::VDIST2(Param0, -1059.0913f, 48.760387f, 49.809143f) < (29.75f * 29.75f)) || SYSTEM::VDIST2(Param0, -1037.4043f, 37.183304f, 45.01267f) < (29.75f * 29.75f)) || SYSTEM::VDIST2(Param0, -987.92706f, 12.216481f, 51.47941f) < (58.25f * 58.25f)) || SYSTEM::VDIST2(Param0, -923.3143f, -55.92058f, 38.37607f) < (58.25f * 58.25f)) || SYSTEM::VDIST2(Param0, -939.21606f, -106.79802f, 41.728218f) < (30.75f * 30.75f))
	{
		return 0;
	}
	return 1;
}

int func_330(struct<3> Param0)//Position - 0x7C0EE
{
	if (((((((((((((SYSTEM::VDIST2(Param0, -1221.06f, 98.5996f, 57.8836f) < (20.9f * 20.9f) || SYSTEM::VDIST2(Param0, -1200.08f, 92.5423f, 57.6517f) < (27.65f * 27.65f)) || SYSTEM::VDIST2(Param0, -1178.72f, 83.8707f, 60.6101f) < (32.525f * 32.525f)) || SYSTEM::VDIST2(Param0, -1149.67f, 68.5744f, 57.3165f) < (36.62f * 36.62f)) || SYSTEM::VDIST2(Param0, -1138.01f, 55.2482f, 54.4325f) < (33.52f * 33.52f)) || SYSTEM::VDIST2(Param0, -1125.44f, 41.863f, 51.9212f) < (29.825f * 29.825f)) || SYSTEM::VDIST2(Param0, -1121.19f, 35.1585f, 51.5821f) < (30.425f * 30.425f)) || SYSTEM::VDIST2(Param0, -1101.69f, 12.5718f, 50.1535f) < (34.025f * 34.025f)) || SYSTEM::VDIST2(Param0, -1116.93f, 0.466945f, 49.0627f) < (18.575f * 18.575f)) || SYSTEM::VDIST2(Param0, -1155.4375f, 92.815f, 56.99f) < (14.5f * 14.5f)) || SYSTEM::VDIST2(Param0, -1095.9377f, 42.5799f, 50.345f) < (11.12f * 11.12f)) || SYSTEM::VDIST2(Param0, -1105.0049f, 50.75577f, 51.6625f) < (14.7f * 14.7f)) || SYSTEM::VDIST2(Param0, -1093.2511f, 36.75171f, 49.51097f) < (11.49f * 11.49f)) || SYSTEM::VDIST2(Param0, -1112.3789f, 61.12305f, 52.97316f) < (10.85f * 10.85f))
	{
		return 0;
	}
	return 1;
}

int func_331(struct<3> Param0)//Position - 0x7C336
{
	if ((((((SYSTEM::VDIST2(Param0, -1304.9606f, 167.75325f, 57.58253f) < (6.25f * 6.25f) || SYSTEM::VDIST2(Param0, -1234.8796f, 162.84953f, 59.07859f) < (11f * 11f)) || SYSTEM::VDIST2(Param0, -1241.9308f, 103.196625f, 55.61257f) < (36f * 36f)) || SYSTEM::VDIST2(Param0, -1255.2334f, 110.28992f, 55.627853f) < (36f * 36f)) || SYSTEM::VDIST2(Param0, -1274.2787f, 119.10796f, 56.414837f) < (28f * 28f)) || SYSTEM::VDIST2(Param0, -1293.0032f, 121.77718f, 56.083878f) < (23f * 23f)) || SYSTEM::VDIST2(Param0, -1302.7052f, 124.26931f, 56.271282f) < (23f * 23f))
	{
		return 0;
	}
	return 1;
}

int func_332(struct<3> Param0)//Position - 0x7C45F
{
	if ((((((((((((((SYSTEM::VDIST2(Param0, -1327.7368f, 159.32567f, 56.804813f) < (20f * 20f) || SYSTEM::VDIST2(Param0, -1313.003f, 151.44281f, 57.082485f) < (20f * 20f)) || SYSTEM::VDIST2(Param0, -1300.2255f, 150.73505f, 57.934685f) < (18.75f * 18.75f)) || SYSTEM::VDIST2(Param0, -1314.3357f, 159.9026f, 56.821346f) < (18.75f * 18.75f)) || SYSTEM::VDIST2(Param0, -1291.734f, 162.25293f, 57.521557f) < (18.75f * 18.75f)) || SYSTEM::VDIST2(Param0, -1273.5385f, 163.71556f, 57.99153f) < (18.75f * 18.75f)) || SYSTEM::VDIST2(Param0, -1255.3575f, 159.83023f, 57.953476f) < (22.75f * 22.75f)) || SYSTEM::VDIST2(Param0, -1260.9087f, 144.87056f, 57.691547f) < (22.75f * 22.75f)) || SYSTEM::VDIST2(Param0, -1244.6907f, 145.63866f, 57.71403f) < (22.75f * 22.75f)) || SYSTEM::VDIST2(Param0, -1222.357f, 145.15588f, 58.442333f) < (33.5f * 33.5f)) || SYSTEM::VDIST2(Param0, -1195.7145f, 138.88812f, 59.483425f) < (38.5f * 38.5f)) || SYSTEM::VDIST2(Param0, -1161.0116f, 149.754f, 61.720253f) < (38.5f * 38.5f)) || SYSTEM::VDIST2(Param0, -1118.562f, 155.97157f, 61.498318f) < (38.5f * 38.5f)) || SYSTEM::VDIST2(Param0, -1234.8796f, 162.84953f, 59.07859f) < (15f * 15f)) || SYSTEM::VDIST2(Param0, -1304.9606f, 167.75325f, 57.58253f) < (10.25f * 10.25f))
	{
		return 0;
	}
	return 1;
}

bool func_333(int iParam0)//Position - 0x7C6D0
{
	return (iParam0 == 9 || iParam0 == 1);
}

void func_334(var uParam0, int iParam1, int iParam2)//Position - 0x7C7EA
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return;
	}
	uParam0->f_1[iParam1 /*4*/] = (uParam0->f_1[iParam1 /*4*/] + iParam2);
}

int func_335(float fParam0, float fParam1, float fParam2)//Position - 0x7DF32
{
	float fVar0;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(*fParam0 + Vector(fParam2, 0f, 0f), &fVar0, false, false))
	{
		if (MISC::ABSF((fParam0->f_2 - fVar0)) < fParam1)
		{
			fParam0->f_2 = fVar0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_336(int iParam0, var uParam1)//Position - 0x7DF71
{
	float fVar0;
	bool bVar1;
	struct<3> Var2;
	fVar0 = 0f;
	bVar1 = false;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, false, false))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		uParam1->f_561++;
		if (uParam1->f_561 > 1)
		{
			bVar1 = true;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(0f, 0.1f, 0.1f), &fVar0, false, false))
			{
				if ((Var2.f_2 - fVar0) > 1f)
				{
					bVar1 = false;
				}
			}
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var2 + Vector(0.05f, 0f, 0f), &(Var2.f_2), false, false) && bVar1)
			{
				ENTITY::SET_ENTITY_COORDS(iParam0, Var2, true, false, false, true);
				bVar1 = false;
			}
			else if (bVar1)
			{
			}
		}
	}
	else
	{
		uParam1->f_561 = 0;
		uParam1->f_562 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	return bVar1;
}

float func_337(float fParam0)//Position - 0x7E187
{
	return (fParam0 * 0.3048f);
}

float func_338(float fParam0)//Position - 0x7E197
{
	return (fParam0 / 1.0936133f);
}

void func_339(struct<3> Param0, struct<3> Param1, var uParam2)//Position - 0x7E746
{
	struct<3> Var0;
	Var0 = { Param1 - Param0 };
	*uParam2 = MISC::ATAN((Var0.f_2 / SYSTEM::SQRT(((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)))));
	uParam2->f_2 = -MISC::ATAN((Var0.f_0 / Var0.f_1));
	if (Var0.f_1 < 0f)
	{
		if (Var0.f_0 < 0f)
		{
			uParam2->f_2 = (uParam2->f_2 + 180f);
		}
		else
		{
			uParam2->f_2 = (uParam2->f_2 - 180f);
		}
	}
}

void func_340(int iParam0, var uParam1, var uParam2)//Position - 0x7E8D9
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1127.2665f, -20.2238f, 65.8451f };
			*uParam2 = { -21.5872f, 0f, 34.5271f };
			break;
		case 1:
			*uParam1 = { -1172.8208f, 33.7858f, 62.5583f };
			*uParam2 = { -6.6738f, 0f, 56.489f };
			break;
		case 2:
			*uParam1 = { -1212.7775f, 62.3151f, 72.1999f };
			*uParam2 = { -26.5597f, 0f, 70.598f };
			break;
		case 3:
			*uParam1 = { -1258.053f, 92.951f, 71.2632f };
			*uParam2 = { -22.4006f, 0f, 100.3488f };
			break;
	}
}

void func_341(int iParam0, var uParam1, var uParam2)//Position - 0x7E994
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1241.226f, 18.3065f, 60.5586f };
			*uParam2 = { -11.2652f, 0f, -117.0898f };
			break;
		case 1:
			*uParam1 = { -1202.9443f, -15.993f, 55.8415f };
			*uParam2 = { -8.8412f, 0f, -107.6249f };
			break;
		case 2:
			*uParam1 = { -1156.3354f, -28.2037f, 57.1487f };
			*uParam2 = { -20.3684f, -0.007f, -127.7787f };
			break;
		case 3:
			*uParam1 = { -1113.6414f, -82.6089f, 56.207f };
			*uParam2 = { -19.9821f, 0f, -99.4635f };
			break;
		case 4:
			*uParam1 = { -1057.5558f, -98.8819f, 62.697f };
			*uParam2 = { -43.862f, 0f, -53.494f };
			break;
	}
}

void func_342(int iParam0, var uParam1, var uParam2)//Position - 0x7EA7E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1136.5591f, -94.7377f, 45.8988f };
			*uParam2 = { -3.2122f, 0f, 63.8833f };
			break;
		case 1:
			*uParam1 = { -1171.7223f, -79.062f, 52.6703f };
			*uParam2 = { -15.8985f, 0f, 53.0819f };
			break;
		case 2:
			*uParam1 = { -1201.0748f, -73.5546f, 56.2329f };
			*uParam2 = { -12.3795f, 0f, 33.9216f };
			break;
		case 3:
			*uParam1 = { -1227.6796f, -47.7722f, 61.0299f };
			*uParam2 = { -25.4619f, 0f, 51.7201f };
			break;
		case 4:
			*uParam1 = { -1261.487f, -21.2802f, 60.1234f };
			*uParam2 = { -20.4131f, 0f, 38.349f };
			break;
	}
}

void func_343(int iParam0, var uParam1, var uParam2)//Position - 0x7EB64
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1018.8165f, -117.0517f, 52.8287f };
			*uParam2 = { -29.9027f, 0f, 86.7974f };
			break;
		case 1:
			*uParam1 = { -1069.7557f, -113.5879f, 60.8817f };
			*uParam2 = { -36.7612f, 0f, 82.3421f };
			break;
	}
}

void func_344(int iParam0, var uParam1, var uParam2)//Position - 0x7EBC9
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1054.8104f, 41.1086f, 69.7104f };
			*uParam2 = { -24.8931f, 0f, -157.7285f };
			break;
		case 1:
			*uParam1 = { -1025.4761f, 7.3602f, 65.0285f };
			*uParam2 = { -22.638f, 0f, 179.0858f };
			break;
		case 2:
			*uParam1 = { -1041.0343f, -45.9046f, 62.6625f };
			*uParam2 = { -27.741f, 0f, -103.5129f };
			break;
		case 3:
			*uParam1 = { -999.8635f, -66.2741f, 65.9639f };
			*uParam2 = { -38.8941f, 0f, -110.9679f };
			break;
	}
}

void func_345(int iParam0, var uParam1, var uParam2)//Position - 0x7EC84
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1174.7363f, 103.7762f, 65.5594f };
			*uParam2 = { -8.6982f, 0f, -137.054f };
			break;
		case 1:
			*uParam1 = { -1119.5093f, 42.8915f, 65.5874f };
			*uParam2 = { -23.2281f, 0f, -148.3643f };
			break;
	}
}

void func_346(int iParam0, var uParam1, var uParam2)//Position - 0x7ECE9
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1291.3287f, 106.4161f, 63.9952f };
			*uParam2 = { -16.606f, 0f, -74.3135f };
			break;
		case 1:
			*uParam1 = { -1264.4171f, 94.7818f, 68.7728f };
			*uParam2 = { -25.2876f, 0f, -67.0479f };
			break;
	}
}

void func_347(int iParam0, var uParam1, var uParam2)//Position - 0x7ED4E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1151.7957f, 140.7695f, 72.0727f };
			*uParam2 = { -20.6667f, 0f, 72.5055f };
			break;
		case 1:
			*uParam1 = { -1214.8385f, 154.1587f, 65.2884f };
			*uParam2 = { -4.3005f, 0f, 77.3166f };
			break;
		case 2:
			*uParam1 = { -1247.2153f, 161.2281f, 67.377f };
			*uParam2 = { -12.6665f, 0f, 78.4986f };
			break;
		case 3:
			*uParam1 = { -1301.7051f, 167.4967f, 70.6909f };
			*uParam2 = { -34.7268f, 0f, 101.4268f };
			break;
	}
}

void func_348(int iParam0, var uParam1, var uParam2)//Position - 0x7EE09
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1320.7644f, 183.6616f, 67.9775f };
			*uParam2 = { -23.3201f, 0f, -89.2365f };
			break;
		case 1:
			*uParam1 = { -1260.757f, 181.4989f, 73.9749f };
			*uParam2 = { -18.9391f, 0f, -83.2668f };
			break;
		case 2:
			*uParam1 = { -1197.6821f, 177.2393f, 72.5978f };
			*uParam2 = { -11.556f, 0f, -55.3467f };
			break;
		case 3:
			*uParam1 = { -1134.2712f, 212.966f, 73.2606f };
			*uParam2 = { -37.0222f, 0f, -55.6838f };
			break;
	}
}

int func_349(int iParam0)//Position - 0x7EEC4
{
	switch (iParam0)
	{
		case 0:
			return 4;
			break;
		case 1:
			return 4;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 2;
			break;
		case 6:
			return 5;
			break;
		case 7:
			return 5;
			break;
		case 8:
			return 4;
			break;
	}
	return 0;
}

int func_350(struct<3> Param0)//Position - 0x7EF49
{
	float fVar0;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &fVar0, false, false))
	{
		return 1;
	}
	if (WATER::GET_WATER_HEIGHT(Param0 + Vector(50f, 0f, 0f), &fVar0))
	{
		return fVar0 > Param0.f_2;
	}
	return 0;
}

void func_351(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, char* sParam6, int iParam7, char* sParam8, int iParam9, float fParam10, int iParam11, bool bParam12)//Position - 0x7F25B
{
	int iVar0;
	iVar0 = iParam7;
	if (iParam3 == -1)
	{
		iParam3 = 6;
	}
	iParam3 += 2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_SWING_DISPLAY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	__LIB_0__::func_478(sParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("GOLF_WIND_PLUS");
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	__LIB_0__::func_478(sParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	__LIB_0__::func_478(sParam8);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam12);
	__LIB_0__::func_478("GOLF_SPIN");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam10);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SHOT_NUM");
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam11);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

struct<6> func_352(int iParam0)//Position - 0x7F309
{
	struct<6> Var0;
	StringCopy(&Var0, "SWING_", 24);
	switch (iParam0)
	{
		case 0:
			StringConCat(&Var0, "NORMAL", 24);
			break;
		case 1:
			StringConCat(&Var0, "POWER", 24);
			break;
		case 3:
			StringConCat(&Var0, "APPROACH", 24);
			break;
		case 2:
			StringConCat(&Var0, "PUNCH", 24);
			break;
		case 5:
		case 7:
			StringConCat(&Var0, "GREEN" /* GXT: Green */, 24);
			break;
		case 4:
			StringConCat(&Var0, "GREEN_S", 24);
			break;
		case 6:
			StringConCat(&Var0, "GREEN_L", 24);
			break;
	}
	return Var0;
}

struct<6> func_353(int iParam0)//Position - 0x7F3A9
{
	struct<6> Var0;
	StringCopy(&Var0, "CLUB_", 24);
	StringIntConCat(&Var0, iParam0, 24);
	return Var0;
}

struct<6> func_354(int iParam0)//Position - 0x7F3C4
{
	struct<6> Var0;
	StringCopy(&Var0, "LIE_", 24);
	switch (iParam0)
	{
		case 5:
			StringConCat(&Var0, "TEE", 24);
			break;
		case 2:
			StringConCat(&Var0, "FAIRWAY", 24);
			break;
		case 4:
			StringConCat(&Var0, "ROUGH", 24);
			break;
		case 0:
			StringConCat(&Var0, "BUNKER", 24);
			break;
		case 3:
			StringConCat(&Var0, "GREEN" /* GXT: Green */, 24);
			break;
		case 1:
			StringConCat(&Var0, "PATH", 24);
			break;
		case 7:
			StringConCat(&Var0, "WATER", 24);
			break;
		default:
			StringConCat(&Var0, "UNKNOWN", 24);
			break;
	}
	return Var0;
}

var func_355(var uParam0)//Position - 0x7F4A5
{
	return uParam0->f_16;
}

void func_356(int iParam0, char* sParam1, float fParam2, float fParam3)//Position - 0x7F4F2
{
	if (MISC::IS_STRING_NULL(sParam1))
	{
		sParam1 = "";
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	fParam2 = (fParam2 * fParam3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_STRENGTH");
	__LIB_0__::func_478(sParam1);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRENGTH_PER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::CEIL(fParam2));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_357(var uParam0, int iParam1, int iParam2)//Position - 0x7FA74
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return;
	}
	uParam0->f_1[iParam1 /*4*/].f_3 = (uParam0->f_1[iParam1 /*4*/].f_3 + iParam2);
}

void func_358(var uParam0, int iParam1)//Position - 0x7FAAA
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return;
	}
	uParam0->f_1[iParam1 /*4*/].f_2 = 1;
}

int func_359(var uParam0, int iParam1)//Position - 0x7FAD4
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return 0;
	}
	return uParam0->f_1[iParam1 /*4*/].f_2;
}

void func_360(var uParam0, int iParam1)//Position - 0x7FAFE
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return;
	}
	uParam0->f_1[iParam1 /*4*/].f_1 = 1;
}

int func_361(struct<3> Param0, int iParam1)//Position - 0x7FB28
{
	switch (iParam1)
	{
		case 0:
			return (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1343.4147f, 181.18239f, 57.333588f, -1251.2761f, 187.56505f, 63.27087f, 20.5f, false, false) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1250.1304f, 183.4166f, 61.826935f, -1135.7305f, 210.23721f, 65.00552f, 34.25f, false, false));
			break;
		case 1:
			return (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1158.626f, 148.44534f, 61.671444f, -1252.3062f, 148.07011f, 58.765175f, 43.75f, false, false) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1252.3429f, 162.8867f, 66.23121f, -1312.435f, 159.27255f, 57.93302f, 27.25f, false, false));
			break;
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1306.3007f, 126.59515f, 64.51172f, -1248.8966f, 105.22775f, 56.55264f, 27.25f, false, false);
			break;
		case 3:
			return (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1228.7952f, 98.25659f, 64.04681f, -1127.4048f, 70.77743f, 55.55414f, 33.25f, false, false) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1139.1938f, 78.43003f, 55.897522f, -1089.5217f, -8.462549f, 47.662827f, 50f, false, false));
			break;
		case 4:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1056.7611f, 4.600485f, 56.479935f, -972.46234f, -79.60284f, 40.800972f, 33.25f, false, false);
			break;
		case 5:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1001.10693f, -113.40902f, 48.136395f, -1082.2203f, -116.03849f, 41.546932f, 33.25f, false, false);
			break;
		case 6:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1123.556f, -97.21224f, 48.86689f, -1283.7896f, -21.737469f, 48.840378f, 33.25f, false, false);
			break;
		case 7:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1272.0272f, 36.36215f, 56.68197f, -1059.0072f, -81.266525f, 43.529655f, 39.5f, false, false);
			break;
		case 8:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1128.409f, -3.124314f, 56.171017f, -1252.3439f, 79.264534f, 52.995228f, 37f, false, false);
			break;
	}
	return 0;
}

int func_362(var uParam0, int iParam1)//Position - 0x7FDD2
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return 0;
	}
	return uParam0->f_1[iParam1 /*4*/].f_1;
}

void func_363(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7FF2F
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 128f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 128f));
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 400f));
		*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 400f));
		if (PAD::IS_MOUSE_LOOK_INVERTED())
		{
			*uParam3 = (*uParam3 * -1);
		}
		if (PAD::IS_LOOK_INVERTED())
		{
			*uParam3 = (*uParam3 * -1);
		}
	}
	else
	{
		*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 128f));
		*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 128f));
	}
}

int func_364(int iParam0)//Position - 0x807A1
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	iVar0 = SHAPETEST::START_SHAPE_TEST_BOUND(iParam0, 256, 4);
	if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar0, &iVar1, &uVar2, &uVar3, &uVar4) != 2)
	{
	}
	if (iVar1 != 0)
	{
		return 1;
	}
	return 0;
}

float func_365(int iParam0)//Position - 0x8204C
{
	switch (iParam0)
	{
		case 0:
			return 0.75f;
			break;
		case 3:
			return 1f;
			break;
		case 2:
			return 1f;
			break;
		case 5:
		case 4:
		case 6:
		case 7:
			return 1f;
			break;
		case 1:
			return 0.5f;
			break;
	}
	return 1f;
}

void func_366(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x825B7
{
	uParam0->f_77[iParam1] = iParam3;
	uParam0->f_11[iParam1] = sParam2;
}

void func_367(int* iParam0, var uParam1)//Position - 0x82820
{
	iParam0->f_636 = uParam1;
}

int func_368(int iParam0)//Position - 0x82869
{
	if ((iParam0 == 2 || iParam0 == 4) || iParam0 == 3)
	{
		return 1;
	}
	return 0;
}

void func_369(int* iParam0)//Position - 0x828BA
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/) && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		AUDIO::PLAY_SOUND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", false, 0, true);
		iParam0->f_571++;
		iParam0->f_575 = 1;
		if (iParam0->f_571 == 2 && !iParam0->f_584)
		{
			iParam0->f_571++;
		}
		if (iParam0->f_571 >= 3)
		{
			iParam0->f_571 = 0;
		}
	}
}

int func_370(int* iParam0)//Position - 0x82A50
{
	return iParam0->f_636;
}

void func_371(struct<3> Param0, int iParam1)//Position - 0x82A5D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar4 = 20f;
	fVar5 = 0.08f;
	switch (iParam1)
	{
		case 0:
			Var0 = { -1120.569f, 222.185f, 64.814f };
			Var1 = { -0.712f, 0.7f, 0f };
			Var2 = { 14.92f, 24.48f, -0.63f };
			fVar3 = 42f;
			break;
		case 1:
			Var0 = { -1326.193f, 162.31f, 56.974f };
			Var1 = { -0.771f, 0.636f, 0.003f };
			Var2 = { 19.48f, 24.34f, -0.63f };
			fVar3 = 42f;
			break;
		case 2:
			Var0 = { -1238.702f, 106.882f, 56.462f };
			Var1 = { 0.177f, 0.982f, 0.06f };
			Var2 = { 15.72f, 27.98f, 0.1f };
			fVar3 = 42f;
			break;
		case 3:
			Var0 = { -1099.278f, 10.541f, 50.81f };
			Var1 = { -0.993f, 0.11f, -0.046f };
			Var2 = { 33.05f, 36.35f, -0.63f };
			fVar3 = 65f;
			break;
		case 4:
			Var0 = { -965.273f, -82.437f, 41.041f };
			Var1 = { 0.549f, -0.835f, -0.031f };
			Var2 = { 20.47f, 42.54f, -0.63f };
			fVar3 = 42f;
			break;
		case 5:
			Var0 = { -1102.084f, -116.732f, 40.891f };
			Var1 = { -0.485f, -0.875f, -0.006f };
			Var2 = { 18.56f, 20f, -0.63f };
			fVar3 = 42f;
			break;
		case 6:
			Var0 = { -1284.205f, 4.114f, 49.654f };
			Var1 = { -0.997f, -0.018f, 0.076f };
			Var2 = { 19.01f, 20f, 0.7f };
			fVar3 = 42f;
			break;
		case 7:
			Var0 = { -1041.863f, -84.943f, 43.14f };
			Var1 = { 0.799f, 0.6f, 0.033f };
			Var2 = { 18.69f, 24.09f, 0.68f };
			fVar3 = 42f;
			break;
		case 8:
			Var0 = { -1289.969f, 83.574f, 54.183f };
			Var1 = { -1f, 0.004f, 0.005f };
			Var2 = { 19.01f, 20f, -0.63f };
			fVar3 = 42f;
			break;
	}
	Var0.f_2 = (Param0.f_2 + 0.5f);
	GRAPHICS::TERRAINGRID_ACTIVATE(true);
	GRAPHICS::TERRAINGRID_SET_PARAMS(Var0, Var1, Var2.f_0, Var2.f_1, Var2.f_2, fVar3, fVar4, Param0.f_2, fVar5);
	GRAPHICS::TERRAINGRID_SET_COLOURS(255, 0, 0, 64, 255, 255, 255, 5, 255, 255, 0, 64);
}

char* func_372()//Position - 0x82E1E
{
	return "GolfPutting";
}

void func_373(int* iParam0, int iParam1)//Position - 0x854C6
{
	iParam0->f_121 = (iParam0->f_121 || iParam1);
}

void func_374(var uParam0, int iParam1)//Position - 0x855B1
{
	uParam0->f_19 = (uParam0->f_19 + iParam1);
}

char* func_375(int iParam0)//Position - 0x8568B
{
	if (iParam0 <= 5)
	{
		return "Wood";
	}
	else if (iParam0 > 5 && iParam0 <= 13)
	{
		return "Iron";
	}
	else if (iParam0 > 13 && iParam0 <= 18)
	{
		return "Wedge";
	}
	else if (iParam0 == 19)
	{
		return "Putt";
	}
	return "";
}

void func_376(var uParam0, int iParam1)//Position - 0x8587D
{
	uParam0->f_17 = (uParam0->f_17 + iParam1);
}

int func_377(struct<3> Param0, float fParam1, struct<3> Param2)//Position - 0x864C0
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Param2) };
	Var1 = { 0.5f, 0.5f, 1f };
	GRAPHICS::DRAW_DEBUG_BOX(Var0 - Var1 * Vector(0.5f, 0.5f, 0.5f), Var0 + Var1 * Vector(0.5f, 0.5f, 0.5f), 0, 255, 10, 255);
	iVar2 = SHAPETEST::START_SHAPE_TEST_BOX(Var0, Var1, 0f, 0f, 0f, 2, 21, PLAYER::PLAYER_PED_ID(), 4);
	if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iVar2, &iVar3, &uVar4, &uVar5, &uVar7, &uVar6) != 2)
	{
	}
	if (iVar3 != 0)
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0)//Position - 0x8676B
{
	switch (iParam0)
	{
		case 9:
			return 1000;
			break;
		case 1:
			return 1300;
			break;
		case 2:
			return 2500;
			break;
		case 3:
			return 1200;
			break;
		case 4:
			return 2000;
			break;
		case 5:
			return 1800;
			break;
		case 6:
			return 2000;
			break;
		case 7:
			return 1800;
			break;
		case 8:
			return 2100;
			break;
	}
	return 1000;
}

char* func_379(int iParam0)//Position - 0x86804
{
	switch (iParam0)
	{
		case 0:
			return "hole_01_cam";
			break;
		case 1:
			return "hole_02_cam";
			break;
		case 2:
			return "hole_03_cam";
			break;
		case 3:
			return "hole_04_cam";
			break;
		case 4:
			return "hole_05_cam";
			break;
		case 5:
			return "hole_06_cam";
			break;
		case 6:
			return "hole_07_cam";
			break;
		case 7:
			return "hole_08_cam";
			break;
		case 8:
			return "hole_09_cam";
			break;
	}
	return "";
}

char* func_380()//Position - 0x868AF
{
	return "mini@golfhole_preview";
}

void func_381(int iParam0, var uParam1, var uParam2)//Position - 0x868BC
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1374f, 172.6f, 0f };
			*uParam2 = { -1141.4f, 208.2f, 0f };
			break;
		case 1:
			*uParam1 = { -1102.9f, 157.2f, 0f };
			*uParam2 = { -1304.2f, 168.9f, 0f };
			break;
		case 2:
			*uParam1 = { -1313.6f, 128.3f, 0f };
			*uParam2 = { -1238.7f, 83.6f, 0f };
			break;
		case 3:
			*uParam1 = { -1219.8f, 107.9f, 0f };
			*uParam2 = { -1109.8f, 28.7f, 0f };
			break;
		case 4:
			*uParam1 = { -1101.3f, 70.3f, 0f };
			*uParam2 = { -974.4f, -73.3f, 0f };
			break;
		case 5:
			*uParam1 = { -983.8f, -103.7f, 0f };
			*uParam2 = { -1075.9f, -109.8f, 0f };
			break;
		case 6:
			*uParam1 = { -1115.6f, -104.6f, 0f };
			*uParam2 = { -1268.7f, -7.2f, 0f };
			break;
		case 7:
			*uParam1 = { -1275.3f, 41.2f, 0f };
			*uParam2 = { -1059f, -88.8f, 0f };
			break;
		case 8:
			*uParam1 = { -1137f, -1.5f, 0f };
			*uParam2 = { -1276.7f, 91.8f, 0f };
			break;
	}
}

float func_382(float fParam0)//Position - 0x87355
{
	return (fParam0 * 2.54f);
}

void func_383(int* iParam0)//Position - 0x8749B
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_636))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_636));
	}
}

char* func_384(bool bParam0)//Position - 0x876D4
{
	if (bParam0)
	{
		return "amb@world_human_golf_player@male@base";
	}
	return "amb@world_human_golf_player@male@idle_a";
}

bool func_385(var uParam0, int iParam1)//Position - 0x87A54
{
	return (uParam0->f_121 && iParam1) != 0;
}

int func_386(int iParam0)//Position - 0x88222
{
	if (((iParam0 == 2 || iParam0 == 4) || iParam0 == 3) || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

float func_387(int iParam0)//Position - 0x88254
{
	if (iParam0 == 0)
	{
		return 15f;
	}
	else if (iParam0 == 1)
	{
		return -15f;
	}
	else if (iParam0 == 2)
	{
		return 30f;
	}
	else if (iParam0 == 3)
	{
		return -30f;
	}
	return 0f;
}

bool func_388(struct<3> Param0, int iParam1, var uParam2, int iParam3)//Position - 0x8829E
{
	*uParam2 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 4:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1025.0541f, 35.63463f, 49.51666f, -1063.491f, -0.983391f, 49.58419f, 14f, false, false))
			{
				switch (iParam3)
				{
					case 0:
						*uParam2 = { -1053.8479f, 6.4804f, 50.0762f };
						break;
					case 1:
						*uParam2 = { -1013.1949f, 34.3117f, 49.6766f };
						break;
					case 2:
						*uParam2 = { -1010.7953f, 30.7865f, 49.542f };
						break;
					case 3:
						*uParam2 = { -1009.6174f, 28.4031f, 49.4536f };
						break;
					case 4:
						*uParam2 = { -1007.7808f, 31.3775f, 49.5029f };
						break;
					case 5:
						*uParam2 = { -1008.8806f, 33.5182f, 49.5793f };
						break;
					}
			}
	}
	return !__LIB_0__::func_86(*uParam2);
}

bool func_389(struct<3> Param0, int iParam1, var uParam2, int iParam3)//Position - 0x883A2
{
	*uParam2 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1249.8282f, 188.86685f, 63.771088f, -1234.0035f, 191.45448f, 63.60073f, 15.5f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1245.3962f, 177.212f, 60.7943f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1248.5626f, 177.2773f, 60.755f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1241.0245f, 174.8023f, 60.7391f };
				}
				else
				{
					*uParam2 = { -1244.9492f, 174.9718f, 60.4628f };
				}
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1218.8427f, 195.19624f, 65.02537f, -1236.062f, 192.20045f, 63.54957f, 15.5f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1226.7131f, 180.4805f, 62.4568f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1229.9747f, 180.3678f, 62.409f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1228.1005f, 178.8995f, 62.2322f };
				}
				else
				{
					*uParam2 = { -1224.812f, 179.1062f, 62.3527f };
				}
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1128.3456f, 200.67926f, 63.879005f, -1124.4639f, 218.24174f, 64.95401f, 8.5f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1133.4523f, 214.3222f, 63.9877f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1133.9468f, 212.6187f, 63.9865f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1135.0956f, 214.6792f, 64.0555f };
				}
				else
				{
					*uParam2 = { -1134.0245f, 216.451f, 64.0271f };
				}
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1124.2286f, 206.0065f, 63.737614f, -1112.9108f, 205.86542f, 64.8558f, 13f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1117.0522f, 197.3494f, 63.5884f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1119.303f, 197.49f, 63.5835f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1118.4226f, 195.8079f, 63.553f };
				}
				else
				{
					*uParam2 = { -1116.7025f, 195.9991f, 63.6064f };
				}
			}
			break;
		case 1:
			if (__LIB_9__::func_423(Param0, -1221.4803f, 136.97223f, 57.883053f, 12.25f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1210.6311f, 145.2679f, 58.9165f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1209.8438f, 143.8164f, 58.8644f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1208.9712f, 142.6966f, 58.8439f };
				}
				else
				{
					*uParam2 = { -1208.7344f, 144.429f, 58.9932f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1307.9944f, 148.2658f, 57.013622f, 12.25f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1298.0403f, 158.6725f, 57.49f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1296.9418f, 160.0557f, 57.4344f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1300.7107f, 161.1427f, 57.3667f };
				}
				else
				{
					*uParam2 = { -1299.6464f, 163.088f, 57.4339f };
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_423(Param0, -1249.7972f, 120.94847f, 55.954487f, 10.25f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1261.0046f, 112.5053f, 55.7922f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1259.0416f, 111.0428f, 55.7076f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1261.3955f, 110.6866f, 55.7104f };
				}
				else
				{
					*uParam2 = { -1262.2742f, 114.0666f, 55.8884f };
				}
			}
			break;
		case 3:
			if (__LIB_9__::func_423(Param0, -1148.605f, 90.54533f, 56.79255f, 9f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1160.4265f, 89.4942f, 57.1402f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1160.5393f, 91.2892f, 57.1851f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1160.3037f, 93.5336f, 57.3266f };
				}
				else
				{
					*uParam2 = { -1159.3896f, 95.3945f, 57.3836f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1123.9172f, 62.398174f, 54.09763f, 12.25f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1128.726f, 74.4978f, 55.1694f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1132.3936f, 74.8003f, 55.3063f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1135.1388f, 73.6844f, 55.33f };
				}
				else
				{
					*uParam2 = { -1135.5647f, 71.0212f, 55.0845f };
				}
			}
			break;
		case 4:
			if (__LIB_9__::func_423(Param0, -1022.97314f, 9.365685f, 48.729454f, 10f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1029.7274f, 20.6269f, 49.6834f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1027.7196f, 21.4991f, 49.6488f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1031.913f, 18.7379f, 49.6796f };
				}
				else
				{
					*uParam2 = { -1033.0242f, 16.8601f, 49.6274f };
				}
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -990.9769f, -12.22463f, 45.47527f, -1014.5606f, -2.282516f, 48.512466f, 18.25f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -992.1171f, -0.4806f, 47.2586f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -990.9562f, -3.1426f, 46.9676f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -990.7891f, -4.6779f, 46.7283f };
				}
				else
				{
					*uParam2 = { -990.6757f, -1.6019f, 47.218f };
				}
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1002.7027f, -19.814455f, 45.336033f, -1013.57263f, -35.536903f, 45.56096f, 16.25f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1014.7323f, -16.9885f, 46.0129f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1016.0983f, -18.4531f, 45.9076f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1017.3691f, -20.0257f, 45.7855f };
				}
				else
				{
					*uParam2 = { -1018.2857f, -21.7339f, 45.6093f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1014.0701f, -38.88825f, 44.127777f, 3.75f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1019.7245f, -32.4241f, 44.6345f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1021.8109f, -34.9325f, 44.3734f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1022.8051f, -37.8995f, 44.0943f };
				}
				else
				{
					*uParam2 = { -1023.685f, -36.2095f, 44.2471f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -974.33545f, -87.08588f, 39.36538f, 12.5f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -986.5154f, -79.0639f, 40.3237f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -987.26f, -81.1786f, 40.4433f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -987.3561f, -83.2422f, 40.5134f };
				}
				else
				{
					*uParam2 = { -987.2036f, -85.4018f, 40.5124f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -956.215f, -73.61868f, 39.467106f, 11.25f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -965.3108f, -62.4259f, 40.834f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -966.5059f, -63.5912f, 40.8414f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -967.5871f, -64.9728f, 40.7888f };
				}
				else
				{
					*uParam2 = { -968.6852f, -62.253f, 41.0284f };
				}
			}
			break;
		case 5:
			if (__LIB_9__::func_423(Param0, -1047.7039f, -99.8536f, 41.880566f, 7.5f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1037.8843f, -103.3558f, 41.6942f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1037.339f, -101.2052f, 41.9289f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1037.392f, -98.659f, 42.1714f };
				}
				else
				{
					*uParam2 = { -1038.0197f, -105.0445f, 41.4403f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1088.4696f, -108.75059f, 40.327614f, 10f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1077.0906f, -102.678f, 40.9184f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1076.3594f, -105.3632f, 40.8033f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1075.4891f, -107.4368f, 40.7636f };
				}
				else
				{
					*uParam2 = { -1075.1426f, -109.1178f, 40.7142f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1087.139f, -125.95556f, 39.887203f, 9.5f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1075.6034f, -127.5685f, 40.1276f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1076.0428f, -128.7151f, 40.09f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1076.6813f, -130.3401f, 40.0376f };
				}
				else
				{
					*uParam2 = { -1077.3766f, -132.3562f, 39.9749f };
				}
			}
			break;
		case 6:
			if (__LIB_9__::func_423(Param0, -1275.2303f, -13.947482f, 47.105656f, 13f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1265.8893f, -27.2585f, 46.6329f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1269.1022f, -28.6319f, 46.76f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1272.0457f, -29.1311f, 46.8971f };
				}
				else
				{
					*uParam2 = { -1274.3591f, -29.081f, 47.0307f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1300.1418f, 16.41488f, 50.347145f, 11f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1303.5238f, 29.1151f, 51.6491f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1306.367f, 28.4745f, 51.8943f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1309.0829f, 27.1428f, 52.136f };
				}
				else
				{
					*uParam2 = { -1311.1244f, 25.4314f, 52.3217f };
				}
			}
			break;
		case 7:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1153.7592f, 5.592854f, 49.25827f, -1193.2933f, -3.027822f, 47.537586f, 16f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1174.0311f, 13.0789f, 48.921f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1176.1425f, 12.0404f, 48.8421f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1177.7793f, 12.7224f, 48.8837f };
				}
				else
				{
					*uParam2 = { -1177.7153f, 11.1655f, 48.7797f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1096.5605f, -79.871956f, 43.651833f, 11f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1109.0933f, -76.4043f, 42.4111f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1108.5151f, -74.3624f, 42.3498f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1107.7117f, -72.2814f, 42.2795f };
				}
				else
				{
					*uParam2 = { -1106.5951f, -70.5346f, 42.2694f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1055.6727f, -77.093796f, 43.748905f, 13.25f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1060.041f, -65.1439f, 43.2142f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1057.8276f, -64.7564f, 43.1777f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1055.5619f, -63.9114f, 43.1779f };
				}
				else
				{
					*uParam2 = { -1065.857f, -67.254f, 43.2841f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1047.4744f, -100.36991f, 43.101807f, 7.25f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1054.9695f, -106.0665f, 41.2801f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1053.6267f, -106.6474f, 41.373f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1052.3851f, -107.0745f, 41.4528f };
				}
				else
				{
					*uParam2 = { -1051.1041f, -107.5534f, 41.4978f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1024.673f, -84.07045f, 43.897423f, 6.5f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1019.6564f, -91.2034f, 42.1369f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1018.5802f, -89.0888f, 42.2369f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1017.7621f, -86.8312f, 42.2233f };
				}
				else
				{
					*uParam2 = { -1017.4727f, -84.2646f, 42.2985f };
				}
			}
			break;
		case 8:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1153.7592f, 5.592854f, 49.25827f, -1193.2933f, -3.027822f, 47.537586f, 16f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1169.097f, -7.196f, 46.4323f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1167.2222f, -7.1338f, 46.4319f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1164.85f, -7.2801f, 46.4345f };
				}
				else
				{
					*uParam2 = { -1162.7856f, -7.8826f, 46.4761f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1267.6012f, 67.51432f, 52.510513f, 6.75f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1261.2919f, 61.7125f, 50.4284f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1259.6598f, 63.7194f, 50.5575f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1258.2268f, 65.9119f, 50.6718f };
				}
				else
				{
					*uParam2 = { -1258.2637f, 68.0789f, 50.8772f };
				}
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1273.7953f, 67.98034f, 54.25151f, -1287.2177f, 66.19893f, 53.76926f, 16f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1269.3099f, 73.8897f, 52.1591f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1269.9092f, 75.9058f, 52.3567f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1267.6621f, 73.8826f, 52.0383f };
				}
				else
				{
					*uParam2 = { -1268.6478f, 76.1384f, 52.2743f };
				}
			}
			else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1287.9976f, 72.037735f, 55.717316f, -1299.0497f, 67.99752f, 54.09443f, 9.5f, false, false))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1304.0128f, 71.0417f, 53.2779f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1303.5636f, 69.7113f, 53.2013f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1303.674f, 67.6263f, 52.9456f };
				}
				else
				{
					*uParam2 = { -1303.1334f, 65.3647f, 52.5448f };
				}
			}
			else if (__LIB_9__::func_423(Param0, -1283.16f, 90.42681f, 55.650764f, 8f, 1))
			{
				if (iParam3 == 0)
				{
					*uParam2 = { -1292.8694f, 99.573f, 54.4191f };
				}
				else if (iParam3 == 1)
				{
					*uParam2 = { -1290.1041f, 100.9091f, 54.5348f };
				}
				else if (iParam3 == 2)
				{
					*uParam2 = { -1288.1364f, 101.3769f, 54.5255f };
				}
				else
				{
					*uParam2 = { -1285.9658f, 101.4354f, 54.5018f };
				}
			}
			break;
	}
	return !__LIB_0__::func_86(*uParam2);
}

int func_390(struct<3> Param0, int iParam1)//Position - 0x89C3B
{
	switch (iParam1)
	{
		case 0:
			return SYSTEM::VDIST2(Param0, -1118.9744f, 216.7396f, 62.148014f) < (8.75f * 8.75f);
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 0;
			break;
		case 3:
			return SYSTEM::VDIST2(Param0, -1098.52f, 10.75f, 49.73f) < (25f * 25f);
			break;
		case 4:
			return 0;
			break;
		case 5:
			return 0;
			break;
		case 6:
			return 0;
			break;
		case 7:
			return 0;
			break;
		case 8:
			return 0;
			break;
	}
	return 0;
}

void func_391(int* iParam0)//Position - 0x8A953
{
	iParam0->f_572 = 0;
	if (CAM::DOES_CAM_EXIST(iParam0->f_541))
	{
		CAM::DESTROY_CAM(iParam0->f_541, false);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_542))
	{
		CAM::DESTROY_CAM(iParam0->f_542, false);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_543))
	{
		CAM::DESTROY_CAM(iParam0->f_543, false);
	}
}

void func_392(var uParam0, int iParam1)//Position - 0x8AB28
{
	uParam0->f_1[iParam1 /*4*/].f_1 = 0;
	uParam0->f_1[iParam1 /*4*/].f_2 = 0;
	uParam0->f_1[iParam1 /*4*/].f_3 = 0;
	uParam0->f_1[iParam1 /*4*/] = 0;
}

void func_393(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x8B3C5
{
	switch (iParam0)
	{
		case 1:
			*uParam3 = 0.07f;
			*uParam1 = 1f;
			*uParam2 = 1.585f;
			break;
		case 3:
			*uParam3 = 0.08f;
			*uParam1 = 1f;
			*uParam2 = 1.585f;
			break;
		case 5:
			*uParam3 = 0.08f;
			*uParam1 = 1.035f;
			*uParam2 = 1.591f;
			break;
		case 7:
			*uParam3 = 0.08f;
			*uParam1 = 1.075f;
			*uParam2 = 1.65f;
			break;
		case 8:
			*uParam3 = 0.085f;
			*uParam1 = 1.075f;
			*uParam2 = 1.66f;
			break;
		case 9:
			*uParam3 = 0.085f;
			*uParam1 = 1.12f;
			*uParam2 = 1.67f;
			break;
		case 10:
			*uParam3 = 0.085f;
			*uParam1 = 1.135f;
			*uParam2 = 1.674f;
			break;
		case 11:
			*uParam3 = 0.09f;
			*uParam1 = 1.174f;
			*uParam2 = 1.69f;
			break;
		case 12:
			*uParam3 = 0.095f;
			*uParam1 = 1.215f;
			*uParam2 = 1.72f;
			break;
		case 13:
			*uParam3 = 0.097f;
			*uParam1 = 1.245f;
			*uParam2 = 1.73f;
			break;
		case 14:
			*uParam3 = 0.1f;
			*uParam1 = 1.265f;
			*uParam2 = 1.73f;
			break;
		case 16:
			*uParam3 = 0.1f;
			*uParam1 = 1.414f;
			*uParam2 = 1.73f;
			break;
		case 17:
			*uParam3 = 0.085f;
			*uParam1 = 1.485f;
			*uParam2 = 1.73f;
			break;
		case 19:
			*uParam3 = 0f;
			*uParam1 = 1f;
			*uParam2 = 1f;
			break;
		default:
			break;
	}
}

void func_394(var uParam0)//Position - 0x8B738
{
	uParam0->f_28 = { uParam0->f_25 };
}

void func_395(var uParam0)//Position - 0x8B74C
{
	if (uParam0->f_23 == 3)
	{
	}
	else if (uParam0->f_23 == -1)
	{
	}
	else if (uParam0->f_23 == 7)
	{
	}
	else if (uParam0->f_23 == 8)
	{
	}
	else if (uParam0->f_23 == 0)
	{
	}
	else if (uParam0->f_23 == 1)
	{
	}
	else if (uParam0->f_23 == 4)
	{
	}
	else if (uParam0->f_23 == 2)
	{
	}
	else if (uParam0->f_23 == 5)
	{
	}
	else if (uParam0->f_23 == 9)
	{
	}
	uParam0->f_24 = uParam0->f_23;
}

void func_396(int iParam0)//Position - 0x8C930
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iParam0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 332, false);
	}
}

void func_397(int* iParam0, int iParam1)//Position - 0x8CA2C
{
	iParam0->f_120 = (iParam0->f_120 - (iParam0->f_120 && iParam1));
}

int func_398(var uParam0)//Position - 0x8CB1D
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(__LIB_5__::func_825(uParam0)))
	{
		return 0;
	}
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(__LIB_5__::func_825(uParam0), true), __LIB_4__::func_586(uParam0));
	if ((fVar0 < (4f * 4f) || __LIB_29__::func_193(uParam0, 512)) && ((!PED::IS_PED_RAGDOLL(__LIB_5__::func_825(uParam0)) && !ENTITY::IS_ENTITY_IN_AIR(__LIB_5__::func_825(uParam0))) && !TASK::IS_PED_GETTING_UP(__LIB_5__::func_825(uParam0))))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(__LIB_5__::func_825(uParam0), false))
	{
		if (fVar0 < (12f * 12f))
		{
			return 1;
		}
	}
	return 0;
}

void func_399(int iParam0, bool bParam1, int iParam2)//Position - 0x8CBEA
{
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), bParam1);
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_GOLFCLUB"), false) && iParam2)
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, joaat("WEAPON_GOLFCLUB"));
	}
}

int func_400(struct<3> Param0)//Position - 0x8CC20
{
	if (((((((((((SYSTEM::VDIST2(Param0, -1365.7279f, 174.31537f, 57.01312f) < (20.75f * 20.75f) || SYSTEM::VDIST2(Param0, -1351.8052f, 179.00304f, 57.291412f) < (25.75f * 25.75f)) || SYSTEM::VDIST2(Param0, -1338.6167f, 182.51062f, 57.515053f) < (25.75f * 25.75f)) || SYSTEM::VDIST2(Param0, -1320.9374f, 184.8574f, 57.82013f) < (25.75f * 25.75f)) || SYSTEM::VDIST2(Param0, -1303.4974f, 185.03795f, 58.282097f) < (25.75f * 25.75f)) || SYSTEM::VDIST2(Param0, -1287.778f, 186.67972f, 58.92799f) < (25.75f * 25.75f)) || SYSTEM::VDIST2(Param0, -1276.0924f, 187.6004f, 59.52738f) < (25.75f * 25.75f)) || SYSTEM::VDIST2(Param0, -1256.2947f, 188.98596f, 61.28985f) < (25f * 25f)) || SYSTEM::VDIST2(Param0, -1235.7712f, 189.36678f, 62.402626f) < (29.5f * 29.5f)) || SYSTEM::VDIST2(Param0, -1217.6161f, 191.28922f, 63.778843f) < (33.5f * 33.5f)) || SYSTEM::VDIST2(Param0, -1189.6769f, 198.54466f, 64.96094f) < (45f * 45f)) || SYSTEM::VDIST2(Param0, -1147.4658f, 215.92424f, 64.519f) < (49.75f * 49.75f))
	{
		return 0;
	}
	return 1;
}

int func_401()//Position - 0x8D9D0
{
	return Global_112414;
}

bool func_402(var uParam0)//Position - 0x8EAC4
{
	if (uParam0->f_578 < 0)
	{
		return 0;
	}
	return PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uParam0->f_578);
}

void func_403(var uParam0, int iParam1)//Position - 0x8EF23
{
	uParam0->f_119 = (uParam0->f_119 || iParam1);
}

bool func_404(var uParam0, int iParam1)//Position - 0x8EF36
{
	return (uParam0->f_119 && iParam1) != 0;
}

int func_405(int iParam0)//Position - 0x8F0BD
{
	if (iParam0 == 0)
	{
		return 45;
	}
	if (iParam0 == 1)
	{
		return 46;
	}
	if (iParam0 == 2)
	{
		return 47;
	}
	return 48;
}

int func_406(int* iParam0, int iParam1)//Position - 0x8F0F1
{
	return iParam0->f_628[iParam1];
}

int func_407(var uParam0, int iParam1)//Position - 0x8F7A0
{
	if (iParam1 < 0 || iParam1 >= *uParam0)
	{
		return -1;
	}
	return (uParam0[iParam1 /*40*/])->f_39;
}

void func_408(int* iParam0, int iParam1)//Position - 0x8F84A
{
	iParam0->f_118 = (iParam0->f_118 - (iParam0->f_118 && iParam1));
}

void func_409(int iParam0, int iParam1)//Position - 0x8FCB8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "CLEAR_PLAYERCARD_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "CLEAR_SCOREBOARD_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_410(int iParam0)//Position - 0x9BE93
{
	if (iParam0 == 0)
	{
		return 146;
	}
	if (iParam0 == 1)
	{
		return 147;
	}
	if (iParam0 == 2)
	{
		return 148;
	}
	return 149;
}

void func_411(var uParam0, int iParam1, int iParam2)//Position - 0x9C1F8
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_28)
	{
		return;
	}
	(uParam0[iParam1 /*3*/])->f_2 = iParam2;
}

void func_412(int* iParam0, int iParam1)//Position - 0x9C28A
{
	iParam0->f_118 = (iParam0->f_118 || iParam1);
}

void func_413(int* iParam0)//Position - 0x9C29D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COURSE_PAR");
	__LIB_0__::func_478("PAR_5");
	__LIB_0__::func_478("PAR_4");
	__LIB_0__::func_478("PAR_3");
	__LIB_0__::func_478("PAR_4");
	__LIB_0__::func_478("PAR_4");
	__LIB_0__::func_478("PAR_3");
	__LIB_0__::func_478("PAR_4");
	__LIB_0__::func_478("PAR_5");
	__LIB_0__::func_478("PAR_4");
	__LIB_0__::func_478("PAR_TOTAL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_414(int* iParam0)//Position - 0x9C310
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_SCOREBOARD_TITLE");
	__LIB_0__::func_478("TITLE_STANDING");
	__LIB_0__::func_478("HOLE_ALLCAPS");
	__LIB_0__::func_478("PAR_ALLCAPS");
	__LIB_0__::func_478("SCORE_ALLCAPS");
	__LIB_0__::func_478("SCORE_HOLEINONE");
	__LIB_0__::func_478("SCORE_BELOW_PAR");
	__LIB_0__::func_478("SCORE_ABOVE_PAR");
	__LIB_0__::func_478("HOLE_1");
	__LIB_0__::func_478("HOLE_2");
	__LIB_0__::func_478("HOLE_3");
	__LIB_0__::func_478("HOLE_4");
	__LIB_0__::func_478("HOLE_5");
	__LIB_0__::func_478("HOLE_6");
	__LIB_0__::func_478("HOLE_7");
	__LIB_0__::func_478("HOLE_8");
	__LIB_0__::func_478("HOLE_9");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_415()//Position - 0x9C636
{
	if (STREAMING::IS_IPL_ACTIVE("GolfFlags"))
	{
		STREAMING::REMOVE_IPL("GolfFlags");
	}
}

bool func_416(int* iParam0, int iParam1)//Position - 0x9CA70
{
	return (iParam0->f_118 && iParam1) != 0;
}

void func_417(var uParam0, int iParam1, int iParam2)//Position - 0x9CD18
{
	if (iParam1 < 0 || iParam1 >= *uParam0)
	{
		return;
	}
	(*uParam0)[iParam1 /*40*/] = iParam2;
}

Vector3 func_418(var uParam0)//Position - 0x9D33E
{
	return -1175f, 40f, 57f;
}

int func_419(int iParam0)//Position - 0x9E304
{
	var uVar0;
	if (iParam0 != 0)
	{
		uVar0 = Global_113386.f_18979.f_26;
	}
	else
	{
		uVar0 = Global_113386.f_18979.f_25;
	}
	return uVar0;
}

void func_420(var uParam0)//Position - 0x9E412
{
	uParam0->f_124.f_11 = { 0.025f, 0.3f, 0.025f };
	uParam0->f_124.f_14 = { 255f, 255f, 255f };
	uParam0->f_124.f_17 = { 255f, 255f, 255f };
	uParam0->f_124.f_20 = { 255f, 255f, 255f };
	uParam0->f_124.f_23 = { 100f, 100f, 100f };
	uParam0->f_124.f_26 = 8;
	uParam0->f_124.f_27 = 10;
	uParam0->f_124.f_29 = 1f;
	uParam0->f_124.f_30 = 1f;
	uParam0->f_124.f_31 = 1f;
	uParam0->f_124.f_32 = 1f;
	uParam0->f_124.f_33 = 0.3f;
	GRAPHICS::GOLF_TRAIL_SET_RADIUS(uParam0->f_124.f_11, uParam0->f_124.f_11.f_1, uParam0->f_124.f_11.f_2);
	GRAPHICS::GOLF_TRAIL_SET_COLOUR(SYSTEM::FLOOR(uParam0->f_124.f_14), SYSTEM::FLOOR(uParam0->f_124.f_14.f_1), SYSTEM::FLOOR(uParam0->f_124.f_14.f_2), SYSTEM::FLOOR(uParam0->f_124.f_23), SYSTEM::FLOOR(uParam0->f_124.f_17), SYSTEM::FLOOR(uParam0->f_124.f_17.f_1), SYSTEM::FLOOR(uParam0->f_124.f_17.f_2), SYSTEM::FLOOR(uParam0->f_124.f_23.f_1), SYSTEM::FLOOR(uParam0->f_124.f_20), SYSTEM::FLOOR(uParam0->f_124.f_20.f_1), SYSTEM::FLOOR(uParam0->f_124.f_20.f_2), SYSTEM::FLOOR(uParam0->f_124.f_23.f_2));
	GRAPHICS::GOLF_TRAIL_SET_SHADER_PARAMS(uParam0->f_124.f_29, uParam0->f_124.f_30, uParam0->f_124.f_31, uParam0->f_124.f_32, uParam0->f_124.f_33);
}

void func_421(int* iParam0, int iParam1)//Position - 0x9E9B1
{
	iParam0->f_531 = (iParam0->f_531 || iParam1);
}

int func_422(var uParam0, int iParam1)//Position - 0xCD08F
{
	if (iParam1 < 0 || iParam1 >= *uParam0)
	{
		return 0;
	}
	return (uParam0[iParam1 /*40*/])->f_38;
}

void func_423(var uParam0)//Position - 0xCD14D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
	}
}

void func_424()//Position - 0xCD2C9
{
	if (!STREAMING::IS_IPL_ACTIVE("GolfFlags"))
	{
		STREAMING::REQUEST_IPL("GolfFlags");
	}
}

bool func_425(int iParam0)//Position - 0xCD345
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar0 = __LIB_0__::func_5();
	}
	return Global_1575038[iVar0];
}

int func_426(int iParam0)//Position - 0x2B94
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		return BitTest(Global_113386.f_26434.f_2, iVar0);
	}
	return 0;
}

int func_427(int iParam0)//Position - 0x2BC4
{
	if ((iParam0 == -1 || iParam0 == 13) || iParam0 == 9)
	{
		return 0;
	}
	return 1;
}

bool func_428(var uParam0, var uParam1)//Position - 0x336A
{
	return (uParam0 && uParam1) != 0;
}

void func_429(char* sParam0)//Position - 0x193C
{
	int iVar0;
	iVar0 = iLocal_220 + 1;
	*sParam0 = { Local_202 };
	StringConCat(sParam0, "@", 64);
	StringConCat(sParam0, "CONVO_", 64);
	StringIntConCat(sParam0, iVar0, 64);
	StringConCat(sParam0, "@", 64);
	StringConCat(sParam0, "CONVO_", 64);
	StringIntConCat(sParam0, iVar0, 64);
}

void func_430(int iParam0, char* sParam1)//Position - 0x1980
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "A", 16);
			break;
		case 1:
			StringCopy(sParam1, "B", 16);
			break;
		case 2:
			StringCopy(sParam1, "C", 16);
			break;
		case 3:
			StringCopy(sParam1, "D", 16);
			break;
		case 4:
			StringCopy(sParam1, "E", 16);
			break;
		case 5:
			StringCopy(sParam1, "F", 16);
			break;
		case 6:
			StringCopy(sParam1, "G", 16);
			break;
		case 7:
			StringCopy(sParam1, "H", 16);
			break;
		case 8:
			StringCopy(sParam1, "I", 16);
			break;
		case 9:
			StringCopy(sParam1, "J", 16);
			break;
		case 10:
			StringCopy(sParam1, "K", 16);
			break;
		case 11:
			StringCopy(sParam1, "L", 16);
			break;
		case 12:
			StringCopy(sParam1, "M", 16);
			break;
		case 13:
			StringCopy(sParam1, "N", 16);
			break;
		case 14:
			StringCopy(sParam1, "O", 16);
			break;
		case 15:
			StringCopy(sParam1, "P", 16);
			break;
		case 16:
			StringCopy(sParam1, "Q", 16);
			break;
		case 17:
			StringCopy(sParam1, "R", 16);
			break;
		case 18:
			StringCopy(sParam1, "S", 16);
			break;
		case 19:
			StringCopy(sParam1, "T", 16);
			break;
		case 20:
			StringCopy(sParam1, "U", 16);
			break;
		case 21:
			StringCopy(sParam1, "V", 16);
			break;
		case 22:
			StringCopy(sParam1, "W", 16);
			break;
		case 23:
			StringCopy(sParam1, "X", 16);
			break;
		case 24:
			StringCopy(sParam1, "Y", 16);
			break;
		case 25:
			StringCopy(sParam1, "Z", 16);
			break;
	}
}

void func_431(char* sParam0)//Position - 0x1BA8
{
	MemCopy(sParam0, {Local_204}, 4);
	StringConCat(sParam0, "_CONV_", 16);
	StringIntConCat(sParam0, iLocal_220 + 1, 16);
}

void func_432()//Position - 0x1BC9
{
	iLocal_220 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_219);
}

void func_433()//Position - 0x2456
{
	STREAMING::REMOVE_ANIM_DICT(&Local_254);
}

bool func_434()//Position - 0x25FA
{
	bool bVar0;
	bVar0 = STREAMING::HAS_ANIM_DICT_LOADED(&Local_254);
	return bVar0;
}

int func_435()//Position - 0x262F
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_208, joaat("SCRIPT_TASK_PLAY_ANIM")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_208, joaat("SCRIPT_TASK_PLAY_ANIM")) != 0)
	{
		return 0;
	}
	return 1;
}

void func_436(char* sParam0)//Position - 0x26CE
{
	StringCopy(sParam0, "MONOLOGUE_", 16);
	StringIntConCat(sParam0, Global_113331[iLocal_217] + 1, 16);
}

char* func_437(int iParam0)//Position - 0x2AAA
{
	switch (iParam0)
	{
		case 0:
			return "CM_SPEAND" /* GXT: Andy Moon */;
			break;
		case 1:
			return "CM_SPEBAY" /* GXT: Baygor */;
			break;
		case 2:
			return "CM_SPEBIL" /* GXT: Bill Binder */;
			break;
		case 3:
			return "CM_SPECLI" /* GXT: Clinton */;
			break;
		case 4:
			return "CM_SPEGRI" /* GXT: Griff */;
			break;
		case 5:
			return "CM_SPEJAN" /* GXT: Jane */;
			break;
		case 6:
			return "CM_SPEJER" /* GXT: Jerome */;
			break;
		case 7:
			return "CM_SPEJES" /* GXT: Jesse */;
			break;
		case 8:
			return "CM_SPEMAN" /* GXT: Mani */;
			break;
		case 9:
			return "CM_SPEMIM" /* GXT: Mime */;
			break;
		case 10:
			return "CM_SPEPAM" /* GXT: Pamela Drake */;
			break;
		case 11:
			return "CM_SPEIMP" /* GXT: Impotent Rage */;
			break;
		case 12:
			return "CM_SPEZOM" /* GXT: Zombie */;
			break;
	}
	return "ERROR!";
}

int func_438(int iParam0)//Position - 0x2C0B
{
	switch (iParam0)
	{
		case joaat("gpb_andymoon"):
			return 0;
			break;
		case joaat("gpb_baygor"):
			return 1;
			break;
		case joaat("gpb_billbinder"):
			return 2;
			break;
		case joaat("gpb_clinton"):
			return 3;
			break;
		case joaat("gpb_griff"):
			return 4;
			break;
		case joaat("gpb_jane"):
			return 5;
			break;
		case joaat("gpb_jerome"):
			return 6;
			break;
		case joaat("gpb_jesse"):
			return 7;
			break;
		case joaat("gpb_mani"):
			return 8;
			break;
		case joaat("gpb_mime"):
			return 9;
			break;
		case joaat("gpb_pameladrake"):
			return 10;
			break;
		case joaat("gpb_superhero"):
			return 11;
			break;
		case joaat("gpb_zombie"):
			return 12;
			break;
	}
	return -1;
}

void func_439(int* iParam0)//Position - 0x2CC9
{
	if (iLocal_276 == 1)
	{
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
}

int func_440()//Position - 0x2FA3
{
	if (iLocal_216 == 24 || iLocal_216 == 25)
	{
		return 1;
	}
	return 0;
}

void func_441()//Position - 0x2FC3
{
	if (iLocal_211 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_211))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_211);
		}
		iLocal_211 = -1;
	}
}

int func_442(int iParam0, bool bParam1)//Position - 0x30A1
{
	if (!__LIB_29__::func_427(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		default:
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_443(int iParam0, bool bParam1)//Position - 0x3165
{
	if (iParam0 == 1)
	{
		TASK::TASK_PLAY_ANIM(iLocal_208, &cLocal_234, &Local_203, 2f, -2f, -1, 0, 0f, false, false, false);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iLocal_208, &cLocal_234, &Local_203, 1000f, 1000f, -1, 0, 0f, false, false, false);
	}
	Local_252 = { Local_203 };
	if (bParam1)
	{
		if (!PED::IS_PED_INJURED(iLocal_208) && !PED::IS_PED_DEAD_OR_DYING(iLocal_208, true))
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_208, false, false);
		}
	}
}

int func_444(char* sParam0)//Position - 0x3385
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_AndyMoon"))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Baygor"))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_BillBinder"))
	{
		return 4;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Clinton"))
	{
		return 8;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Griff"))
	{
		return 16;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jane"))
	{
		return 64;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jerome"))
	{
		return 128;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Jesse"))
	{
		return 256;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Mani"))
	{
		return 512;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Mime"))
	{
		return 1024;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_PamelaDrake"))
	{
		return 2048;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Superhero"))
	{
		return 4096;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "gpb_Zombie"))
	{
		return 8192;
	}
	return 0;
}

void func_445()//Position - 0x35E4
{
	if (iLocal_211 == -1)
	{
		iLocal_211 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_210, 2f, 2f, 2f, 0f, false, 1);
	}
}

void func_446(char* sParam0)//Position - 0x25C2
{
	__LIB_29__::func_430(iLocal_223, sParam0);
}

void func_447()//Position - 0x3513
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
	{
		OBJECT::DELETE_OBJECT(&iLocal_277);
	}
}

void func_448(char* sParam0)//Position - 0x161E
{
	StringCopy(sParam0, "", 64);
}

void func_449()//Position - 0x1515
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_208, false))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_208, 0f);
	}
}

int func_450(int iParam0)//Position - 0xA67C
{
	int iVar0;
	struct<2> Var1;
	switch (iParam0)
	{
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_ASSAULTSMG"):
			return 1;
			break;
	}
	iVar0 = 0;
	while (iVar0 < FILES::GET_NUM_DLC_WEAPONS())
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_451(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB71C
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

void func_452(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10F1A
{
	StringCopy(sParam0, sParam1, 16);
	StringCopy(&(sParam0->f_4), sParam2, 16);
	sParam0->f_8 = iParam3;
	sParam0->f_9 = iParam4;
	sParam0->f_10 = iParam5;
}

int func_453(int iParam0)//Position - 0x171A8
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return 1;
			break;
	}
	return 0;
}

int func_454(int iParam0, int iParam1)//Position - 0x20F42
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("GADGET_PARACHUTE"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_BULLPUPSHOTGUN"):
		case joaat("WEAPON_GUSENBERG"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_BULLPUPRIFLE"):
		case joaat("WEAPON_MUSKET"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_HEAVYSHOTGUN"):
		case joaat("WEAPON_COMBATPDW"):
		case joaat("WEAPON_MARKSMANPISTOL"):
		case joaat("WEAPON_RAILGUN"):
		case joaat("WEAPON_HOMINGLAUNCHER"):
		case joaat("WEAPON_PETROLCAN"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_VINTAGEPISTOL"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_MACHINEPISTOL"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNIFE"):
			iVar0 = 1;
			break;
	}
	if (iParam1 == 3)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_455(int iParam0, int iParam1)//Position - 0xB6379
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
	{
		if (iParam1 && __LIB_12__::func_605(iParam0) != 0)
		{
			iVar2 = WEAPON::GET_PED_ORIGINAL_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0);
			if (WEAPON::GET_MAX_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar2, &iVar0))
			{
				if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar2) >= iVar0)
				{
					iVar1 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, &iVar0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) >= iVar0)
				{
					iVar1 = 1;
				}
			}
		}
	}
	return iVar1;
}

void func_456(int iParam0)//Position - 0x1B16
{
	Local_146.f_0 = iParam0;
}

bool func_457()//Position - 0x217F
{
	return (Local_134.f_0 || Local_134.f_6 > NETWORK::GET_NETWORK_TIME());
}

bool func_458(int iParam0)//Position - 0x25C9
{
	return Local_138.f_1[iParam0];
}

int func_459(int iParam0)//Position - 0x25D9
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 5;
			break;
		case 3:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

char* func_460()//Position - 0x63167
{
	return "FONT_";
}

struct<2> func_461()//Position - 0x63280
{
	return __LIB_3__::func_990(24f, 48f);
}

struct<2> func_462()//Position - 0x63296
{
	return __LIB_3__::func_990(1220f, 350f);
}

struct<2> func_463()//Position - 0x63562
{
	return __LIB_3__::func_990(750f, 350f);
}

struct<2> func_464()//Position - 0x63756
{
	return __LIB_3__::func_990(600f, 350f);
}

struct<4> func_465()//Position - 0x637DE
{
	struct<4> Var0;
	Var0.f_3 = 255;
	__LIB_11__::func_94(&Var0, 255, 255, 255, 255);
	return Var0;
}

struct<2> func_466()//Position - 0x63816
{
	return __LIB_3__::func_990(960f, 200f);
}

struct<2> func_467()//Position - 0x63844
{
	return __LIB_3__::func_990(24f, (48f * 1.1f));
}

bool func_468()//Position - 0x63FB3
{
	return __LIB_3__::func_772(PLAYER::PLAYER_ID()) <= 0;
}

bool func_469(float fParam0, var uParam1, float fParam2)//Position - 0x67E9A
{
	float fVar0;
	float fVar1;
	fVar0 = (250f + fParam2);
	fVar1 = (1605f - fParam2);
	return (fParam0 > fVar0 && fParam0 < fVar1);
}

int func_470(int iParam0)//Position - 0x69196
{
	return Local_138.f_66[iParam0];
}

int func_471(int iParam0)//Position - 0x691CD
{
	return Local_138.f_54[iParam0];
}

int func_472(int iParam0, float fParam1, float fParam2)//Position - 0x6DC64
{
	GRAPHICS::DRAW_BINK_MOVIE(iParam0, 0.5f, 0.5f, fParam1, fParam2, 0f, 255, 255, 255, 255);
	if (GRAPHICS::GET_BINK_MOVIE_TIME(iParam0) >= 99f)
	{
		GRAPHICS::STOP_BINK_MOVIE(iParam0);
		GRAPHICS::RELEASE_BINK_MOVIE(iParam0);
		return 1;
	}
	return 0;
}

void func_473(int iParam0, int iParam1, var uParam2)//Position - 0x6EDAE
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iParam1 - 1);
	while (iVar0 >= 0)
	{
		(*uParam2)[iVar1] = ((iParam0 / SYSTEM::ROUND(SYSTEM::POW(10f, SYSTEM::TO_FLOAT(iVar0)))) % 10);
		iVar1++;
		iVar0 = (iVar0 + -1);
	}
}

int func_474(int iParam0)//Position - 0x73504
{
	return Local_138.f_48[iParam0];
}

int func_475(int iParam0)//Position - 0x76A5A
{
	if (iParam0 == 3)
	{
		return 1;
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x78CAC
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
		default:
	}
	return -1;
}

void func_477(int iParam0, var uParam1)//Position - 0x7BA79
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1086643333;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	iVar1 = __LIB_0__::func_679(iParam0);
	if (!iVar1 == 0 && __LIB_0__::func_154(iParam0, 0, 1))
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_478(var uParam0, int iParam1)//Position - 0x7BBD0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((uParam0[iVar0 /*3*/])->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

void func_479()//Position - 0x7BD18
{
	Local_134.f_0 = 0;
}

int func_480()//Position - 0x7C561
{
	return Local_146.f_0;
}

var func_481()//Position - 0x3B5D9
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_1;
}

int func_482(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)//Position - 0x5E1F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 == 1)
	{
		__LIB_11__::func_404(&iVar0, &iVar1);
		iVar2 = (iParam2 - 1);
		while (iVar2 >= iVar0)
		{
			if (__LIB_11__::func_427(uParam0, Global_4538470[iVar2]))
			{
				*uParam3 = iVar2;
				return 1;
			}
			iVar2 = (iVar2 + -1);
		}
		if (bParam4)
		{
			iVar2 = iVar1;
			while (iVar2 >= iParam2 + 1)
			{
				if (__LIB_11__::func_427(uParam0, Global_4538470[iVar2]))
				{
					*uParam3 = iVar2;
					return 1;
				}
				iVar2 = (iVar2 + -1);
			}
		}
	}
	else
	{
		iVar3 = (iParam2 - 1);
		while (iVar3 >= 0)
		{
			if (iVar3 < 125 && (*uParam0)[iVar3] != -99)
			{
				*uParam3 = iVar3;
				return 1;
			}
			iVar3 = (iVar3 + -1);
		}
		if (bParam4)
		{
			iVar3 = (uParam0->f_252 - 1);
			while (iVar3 >= iParam2 + 1)
			{
				if (iVar3 < 125 && (*uParam0)[iVar3] != -99)
				{
					*uParam3 = iVar3;
					return 1;
				}
				iVar3 = (iVar3 + -1);
			}
		}
	}
	return 0;
}

int func_483(int iParam0, var uParam1, var uParam2)//Position - 0x7EBAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	*uParam1 = 0;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, iVar1);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOODED_JACKET"), 0))
	{
		*uParam1 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOOD_UP"), 0);
		*uParam2 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOOD_TUCKED"), 0);
		return 1;
	}
	return 0;
}

int func_484(int iParam0, char* sParam1)//Position - 0x97E9B
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam1);
	switch (iParam0)
	{
		case 256:
			switch (iVar0)
			{
				case joaat("CLO_H4M_DECL_38"):
					return 1;
					break;
				case joaat("CLO_H4M_DECL_36"):
					return 2;
					break;
				case joaat("CLO_H4M_DECL_34"):
					return 3;
					break;
				case joaat("CLO_H4M_DECL_35"):
					return 4;
					break;
				case joaat("CLO_H4M_DECL_37"):
					return 5;
					break;
				case joaat("CLO_H4M_DECL_43"):
					return 6;
					break;
				case joaat("CLO_H4M_DECL_41"):
					return 7;
					break;
				case joaat("CLO_H4M_DECL_39"):
					return 8;
					break;
				case joaat("CLO_H4M_U_7_5"):
					return 9;
					break;
				case joaat("CLO_H4M_U_7_6"):
					return 10;
					break;
				case joaat("CLO_H4M_U_7_7"):
					return 11;
					break;
				case joaat("CLO_H4M_U_7_8"):
					return 12;
					break;
				case joaat("CLO_H4M_U_7_9"):
					return 13;
					break;
			}
			switch (iVar0)
			{
				case joaat("CLO_H4F_DECL_38"):
					return 1;
					break;
				case joaat("CLO_H4F_DECL_36"):
					return 2;
					break;
				case joaat("CLO_H4F_DECL_34"):
					return 3;
					break;
				case joaat("CLO_H4F_DECL_35"):
					return 4;
					break;
				case joaat("CLO_H4F_DECL_37"):
					return 5;
					break;
				case joaat("CLO_H4F_DECL_43"):
					return 6;
					break;
				case joaat("CLO_H4F_DECL_41"):
					return 7;
					break;
				case joaat("CLO_H4F_DECL_39"):
					return 8;
					break;
				case joaat("CLO_H4F_U_6_5"):
					return 9;
					break;
				case joaat("CLO_H4F_U_6_6"):
					return 10;
					break;
				case joaat("CLO_H4F_U_6_7"):
					return 11;
					break;
				case joaat("CLO_H4F_U_6_8"):
					return 12;
					break;
				case joaat("CLO_H4F_U_6_9"):
					return 13;
					break;
			}
			break;
		case 257:
			switch (iVar0)
			{
				case joaat("CLO_H4M_PH_1_5"):
					return 1;
					break;
				case joaat("CLO_H4M_PH_1_6"):
					return 2;
					break;
				case joaat("CLO_H4M_PH_1_7"):
					return 3;
					break;
				case joaat("CLO_H4M_PH_2_5"):
					return 4;
					break;
				case joaat("CLO_H4M_PH_2_6"):
					return 5;
					break;
				case joaat("CLO_H4M_PH_2_7"):
					return 6;
					break;
			}
			switch (iVar0)
			{
				case joaat("CLO_H4F_PH_1_5"):
					return 1;
					break;
				case joaat("CLO_H4F_PH_1_6"):
					return 2;
					break;
				case joaat("CLO_H4F_PH_1_7"):
					return 3;
					break;
				case joaat("CLO_H4F_PH_2_5"):
					return 4;
					break;
				case joaat("CLO_H4F_PH_2_6"):
					return 5;
					break;
				case joaat("CLO_H4F_PH_2_7"):
					return 6;
					break;
			}
			break;
	}
	return 0;
}

int func_485(char* sParam0)//Position - 0x980EA
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_FXM_DECL_0"):
		case joaat("CLO_FXF_DECL_0"):
		case joaat("CLO_FXM_D_6_0"):
		case joaat("CLO_FXM_D_7_0"):
		case joaat("CLO_FXF_D_8_0"):
		case joaat("CLO_FXF_D_9_0"):
			return 1;
			break;
	}
	return 0;
}

int func_486(int iParam0)//Position - 0xA5595
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
			break;
	}
	return 0;
}

void func_487(int iParam0, int iParam1)//Position - 0x8029
{
	if (iParam1 == -1)
	{
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Local_125[iParam0 /*3*/].f_2)
		{
			Local_125[iParam0 /*3*/].f_2 = 0;
			Local_125[iParam0 /*3*/].f_1 = 0;
		}
	}
}

void func_488(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x385B1
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("Player_Zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("Player_One"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("Player_Two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var3);
						FILES::GET_SHOP_PED_COMPONENT(Var2.f_0, &Var3);
						if (Var2.f_0 != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[__LIB_0__::func_33(Var2.f_2)] = Var2.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[__LIB_0__::func_33(Var2.f_2)] = func_118(iParam1, Var2.f_0, __LIB_0__::func_33(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[__LIB_0__::func_33(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

void func_489(var uParam0, int iParam1)//Position - 0x3E87D
{
	if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_526))
		{
			uParam0->f_526 = OBJECT::CREATE_OBJECT(joaat("p_cs_scissors_s"), uParam0->f_12.f_6, false, false, false);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_526))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_526));
	}
}

var func_490(var uParam0, int iParam1)//Position - 0x3E8C9
{
	if (iParam1 == 1)
	{
		return uParam0->f_446.f_15;
	}
	return uParam0->f_12.f_15;
}

Vector3 func_491(var uParam0, int iParam1)//Position - 0x3E8EA
{
	if (iParam1 == 1)
	{
		return uParam0->f_446.f_6;
	}
	return uParam0->f_12.f_6;
}

var func_492(var uParam0, int iParam1)//Position - 0x3E90F
{
	if (iParam1 == 1)
	{
		return uParam0->f_446;
	}
	return uParam0->f_12;
}

int func_493(var uParam0)//Position - 0x3F9AC
{
	if (uParam0->f_638 && uParam0->f_525 == 6)
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x46281
{
	switch (iParam0)
	{
		case 2086722024:
			return 0;
			break;
		case -1911587515:
			return 1;
			break;
		case -1882357567:
			return 2;
			break;
		case -969019995:
			return 3;
			break;
		case -411291615:
			return 4;
			break;
		case -82979004:
			return 5;
			break;
		case 218692410:
			return 6;
			break;
		case 511680047:
			return 7;
			break;
		case 558867407:
			return 8;
			break;
		case 808796570:
			return 9;
			break;
		case -1605550121:
			return 10;
			break;
		case -1378886948:
			return 11;
			break;
		case -1142819072:
			return 12;
			break;
		case -899836937:
			return 13;
			break;
		case 1454746793:
			return 14;
			break;
		case 1677117227:
			return 15;
			break;
		case 1931240822:
			return 16;
			break;
		case -2125331999:
			return 17;
			break;
		case -2146762937:
			return 18;
			break;
		case -1919575460:
			return 19;
			break;
		case 1867669166:
			return 20;
			break;
		case 1562425931:
			return 21;
			break;
		case 1271240597:
			return 22;
			break;
		case -43115055:
			return 23;
			break;
		case -1731373935:
			return 24;
			break;
		case -1422100113:
			return 25;
			break;
		case -463508556:
			return 26;
			break;
		case -963301344:
			return 27;
			break;
		case 2063210751:
			return 28;
			break;
		case -2003094463:
			return 29;
			break;
		case -1888632346:
			return 30;
			break;
		case -1384776202:
			return 31;
			break;
		case 1107568404:
			return 32;
			break;
		case -412069578:
			return 33;
			break;
		case 1236833733:
			return 34;
			break;
		case 2004250944:
			return 35;
			break;
		case 544883529:
			return 36;
			break;
		case 1446293181:
			return 37;
			break;
		case -1964074960:
			return 38;
			break;
		case -1565538382:
			return 39;
			break;
		case 1752814407:
			return 40;
			break;
		case -1662501853:
			return 41;
			break;
		case -1216122527:
			return 42;
			break;
		case 1668958248:
			return 43;
			break;
		case 813687348:
			return 44;
			break;
		case 1121027799:
			return 45;
			break;
		case -1437018652:
			return 46;
			break;
		case -1133250022:
			return 47;
			break;
		case 1974922401:
			return 48;
			break;
		case -1751830435:
			return 49;
			break;
		case -737105609:
			return 50;
			break;
		case -1044282215:
			return 51;
			break;
		case 128880754:
			return 52;
			break;
		case -1214833480:
			return 53;
			break;
		case -853522486:
			return 54;
			break;
		case -1811655273:
			return 55;
			break;
		case -1040961166:
			return 56;
			break;
		case 1888456366:
			return 57;
			break;
		case -1639552485:
			return 58;
			break;
		case 1348226632:
			return 59;
			break;
		case 2125933309:
			return 60;
			break;
		case 754026355:
			return 61;
			break;
		case 1526948758:
			return 62;
			break;
		case -902969915:
			return 63;
			break;
		case -69457631:
			return 64;
			break;
		case -312701918:
			return 65;
			break;
		case 824579000:
			return 66;
			break;
		case 585856831:
			return 67;
			break;
		case 1226458016:
			return 68;
			break;
		case 987998003:
			return 69;
			break;
		case 1819413071:
			return 70;
			break;
		case 1583246888:
			return 71;
			break;
		case -1577847470:
			return 72;
			break;
		case -2026650806:
			return 73;
			break;
		case -1429665160:
			return 74;
			break;
		case -1185994876:
			return 75;
			break;
		case -2142554759:
			return 76;
			break;
		case -589631845:
			return 77;
			break;
		case -1637322333:
			return 78;
			break;
		case -1876568802:
			return 79;
			break;
		case -851292326:
			return 80;
			break;
		case 1859818120:
			return 81;
			break;
		case -1515880415:
			return 82;
			break;
		case -432930795:
			return 83;
			break;
		case 796201630:
			return 84;
			break;
		case 1170095920:
			return 85;
			break;
		case 1259981287:
			return 86;
			break;
		case 1632499279:
			return 87;
			break;
		case -1208917743:
			return 88;
			break;
		case -1245356871:
			return 89;
			break;
		case -567923298:
			return 90;
			break;
		case -932249040:
			return 91;
			break;
		case -221587773:
			return 92;
			break;
		case -845116305:
			return 93;
			break;
		case 381918900:
			return 94;
			break;
		case 83032851:
			return 95;
			break;
		case 705709389:
			return 96;
			break;
		case 410559006:
			return 97;
			break;
		case -850926612:
			return 98;
			break;
		case -1093056753:
			return 99;
			break;
		case 1258643301:
			return 100;
			break;
		case 865874067:
			return 101;
			break;
		case 627151902:
			return 102;
			break;
		case -2142352902:
			return 103;
			break;
		case -407070503:
			return 104;
			break;
		case 1502608510:
			return 105;
			break;
		case 827528886:
			return 106;
			break;
		case -781461791:
			return 107;
			break;
		case -474875027:
			return 108;
			break;
		case -1242030086:
			return 109;
			break;
		case 137348200:
			return 110;
			break;
		case -2121779449:
			return 111;
			break;
		case 1876005786:
			return 112;
			break;
		case -1641844675:
			return 113;
			break;
		case -1939452733:
			return 114;
			break;
		case 1595175476:
			return 115;
			break;
		case 1888141884:
			return 116;
			break;
		case 859096981:
			return 117;
			break;
		case 551756530:
			return 118;
			break;
		case 1439272126:
			return 119;
			break;
		case 1158474565:
			return 120;
			break;
		case -109358053:
			return 121;
			break;
		case -406605652:
			return 122;
			break;
		case 509746672:
			return 123;
			break;
		case 244809299:
			return 124;
			break;
		case -651750537:
			return 125;
			break;
		case 1816410231:
			return 126;
			break;
		case -2059015562:
			return 127;
			break;
		case 1945094090:
			return 128;
			break;
		case -1458261485:
			return 129;
			break;
		case -1755738467:
			return 130;
			break;
		case -846234872:
			return 131;
			break;
		case -1144170620:
			return 132;
			break;
		case -251641367:
			return 133;
			break;
		case -566158229:
			return 134;
			break;
		case -859506285:
			return 135;
			break;
		case 1823490339:
			return 136;
			break;
		case -2074414980:
			return 137;
			break;
		case 748741188:
			return 138;
			break;
		case 664000554:
			return 139;
			break;
		case 374125980:
			return 140;
			break;
		case 1933864846:
			return 141;
			break;
		case 1620822589:
			return 142;
			break;
		case 1304536201:
			return 143;
			break;
		case 1024459558:
			return 144;
			break;
		case -1167196704:
			return 145;
			break;
		case -1484564469:
			return 146;
			break;
		case -1728267522:
			return 147;
			break;
		case -2059818253:
			return 148;
			break;
		case 1995902574:
			return 149;
			break;
		case 1639965688:
			return 150;
			break;
		case 1397114629:
			return 151;
			break;
		case -1985437042:
			return 152;
			break;
		case 2060125395:
			return 153;
			break;
		case 1845619521:
			return 154;
			break;
		case 1352314995:
			return 155;
			break;
		case 1121916156:
			return 156;
			break;
		case 890173784:
			return 157;
			break;
		case 646995035:
			return 158;
			break;
		case 885782742:
			return 159;
			break;
		case 645225513:
			return 160;
			break;
		case 173548527:
			return 161;
			break;
		case -421803070:
			return 162;
			break;
		case 1299978497:
			return 163;
			break;
		case 1529427035:
			return 164;
			break;
		case 342566624:
			return 165;
			break;
		case 575062679:
			return 166;
			break;
		case -2035840169:
			return 167;
			break;
		case -1807833467:
			return 168;
			break;
		case 1762447394:
			return 169;
			break;
		case 2001923246:
			return 170;
			break;
		case 178590600:
			return 171;
			break;
		case 1262851572:
			return 172;
			break;
		case 537411450:
			return 173;
			break;
		case 785046783:
			return 174;
			break;
		case -2080536733:
			return 175;
			break;
		case -1640317987:
			return 176;
			break;
		case 1737477768:
			return 177;
			break;
		case 162597385:
			return 178;
			break;
		case 223154493:
			return 179;
			break;
		case 2140763608:
			return 180;
			break;
		case 1886967703:
			return 181;
			break;
		case 1237289509:
			return 182;
			break;
		case -1236704457:
			return 183;
			break;
		case -1467824214:
			return 184;
			break;
		case -1595623314:
			return 185;
			break;
		case -1829299053:
			return 186;
			break;
		case -1581270496:
			return 187;
			break;
		case -736238561:
			return 188;
			break;
	}
	switch (iParam0)
	{
		case 1479840145:
			return 189;
			break;
		case 356387741:
			return 190;
			break;
		case 653766416:
			return 191;
			break;
		case -1922761743:
			return 192;
			break;
		case -1625383068:
			return 193;
			break;
		case 1758409414:
			return 194;
			break;
		case 2048251219:
			return 195;
			break;
		case -1001100849:
			return 196;
			break;
		case -711848886:
			return 197;
			break;
		case -1614503760:
			return 198;
			break;
		case -1060874703:
			return 199;
			break;
		case -1669067343:
			return 200;
			break;
		case -1505615571:
			return 201;
			break;
		case -136756130:
			return 202;
			break;
		case 1503430607:
			return 203;
			break;
		case 1909897283:
			return 204;
			break;
		case -1005003578:
			return 205;
			break;
		case -734266100:
			return 206;
			break;
		case 1360852708:
			return 207;
			break;
		case 729066388:
			return 208;
			break;
		case 914374215:
			return 209;
			break;
		case 558502875:
			return 210;
			break;
		case -1591241840:
			return 211;
			break;
		case -1827014795:
			return 212;
			break;
		case -876282585:
			return 213;
			break;
		case -1180870440:
			return 214;
			break;
		case -1502662020:
			return 215;
			break;
		case -1785163569:
			return 216;
			break;
		case 80113449:
			return 217;
			break;
		case -216740922:
			return 218;
			break;
		case -533027310:
			return 219;
			break;
		case -829553991:
			return 220;
			break;
		case -531257788:
			return 221;
			break;
		case -827784469:
			return 222;
			break;
		case 744660972:
			return 223;
			break;
		case 899625573:
			return 224;
			break;
		case 266299110:
			return 225;
			break;
		case -1641282671:
			return 226;
			break;
		case -195383331:
			return 227;
			break;
		case 33245982:
			return 228;
			break;
		case -686033552:
			return 229;
			break;
		case 1700172263:
			return 230;
			break;
		case -1163314037:
			return 231;
			break;
		case -939239615:
			return 232;
			break;
		case -1579861681:
			return 233;
			break;
		case -1237032403:
			return 234;
			break;
		case 1942740285:
			return 235;
			break;
		case 558544952:
			return 236;
			break;
		case 1335891174:
			return 237;
			break;
		case 2129064819:
			return 238;
			break;
		case -699850186:
			return 239;
			break;
		case -864874870:
			return 240;
			break;
		case 333978995:
			return 241;
			break;
		case 1109522918:
			return 242;
			break;
		case -635535959:
			return 243;
			break;
		case -966961625:
			return 244;
			break;
		case -595983772:
			return 245;
			break;
		case 1319397047:
			return 246;
			break;
		case 15059771:
			return 247;
			break;
		case -679880450:
			return 248;
			break;
		case -1968193685:
			return 249;
			break;
		case 1656811402:
			return 250;
			break;
		case 1409143300:
			return 251;
			break;
		case 1047930613:
			return 252;
			break;
		case 834145657:
			return 253;
			break;
		case 1301103915:
			return 254;
			break;
		case 5679807:
			return 255;
			break;
		case 1241824794:
			return 256;
			break;
		case 1558963176:
			return 257;
			break;
		case 1466156191:
			return 258;
			break;
		case 1713299989:
			return 259;
			break;
		case 1415036551:
			return 260;
			break;
		case 1153834856:
			return 261;
			break;
		case 1360836629:
			return 262;
			break;
		case -1622780825:
			return 263;
			break;
		case -1374686726:
			return 264;
			break;
		case 2040629534:
			return 265;
			break;
		case -1973146973:
			return 266;
			break;
		case -657864855:
			return 267;
			break;
		case 1377860065:
			return 268;
			break;
		case 113042203:
			return 269;
			break;
		case -712703828:
			return 270;
			break;
		case 200109448:
			return 271;
			break;
		case -705035870:
			return 272;
			break;
		case -1340787251:
			return 273;
			break;
		case -107624231:
			return 274;
			break;
		case -784730090:
			return 275;
			break;
		case -1628925068:
			return 276;
			break;
		case 1496156159:
			return 277;
			break;
		case -1247690782:
			return 278;
			break;
		case -1569777283:
			return 279;
			break;
		case 1939083358:
			return 280;
			break;
		case -2050050861:
			return 281;
			break;
		case -1086019650:
			return 282;
			break;
		case -796734918:
			return 283;
			break;
		case -2051001154:
			return 284;
			break;
		case -1753327558:
			return 285;
			break;
		case -778482577:
			return 286;
			break;
		case -487919854:
			return 287;
			break;
		case 1063167984:
			return 288;
			break;
		case 1352190564:
			return 289;
			break;
		case 1918883225:
			return 290;
			break;
		case 2140499972:
			return 291;
			break;
		case -1622298764:
			return 292;
			break;
		case -1384887359:
			return 293;
			break;
		case -1451684059:
			return 294;
			break;
		case -675288142:
			return 295;
			break;
		case -984234274:
			return 296;
			break;
		case -258728614:
			return 297;
			break;
		case 516356543:
			return 298;
			break;
		case 200791073:
			return 299;
			break;
		case 976334996:
			return 300;
			break;
		case 743642327:
			return 301;
			break;
		case 1511583842:
			return 302;
			break;
		case 1238290382:
			return 303;
			break;
		case -587327163:
			return 304;
			break;
		case -1009457421:
			return 305;
			break;
		case 1852062739:
			return 306;
			break;
		case 1561958782:
			return 307;
			break;
		case -1779135693:
			return 308;
			break;
		case 2022396001:
			return 309;
			break;
		case -1277868344:
			return 310;
			break;
		case -1046224283:
			return 311;
			break;
		case -1992232544:
			return 312;
			break;
		case -1511904542:
			return 313;
			break;
		case 338954980:
			return 314;
			break;
		case 644853595:
			return 315;
			break;
		case 928043293:
			return 316;
			break;
		case 1233483142:
			return 317;
			break;
		case 455547074:
			return 318;
			break;
		case 753187901:
			return 319;
			break;
		case -1381379572:
			return 320;
			break;
		case -978746865:
			return 321;
			break;
		case 946792344:
			return 322;
			break;
		case -366195948:
			return 323;
			break;
		case -722394978:
			return 324;
			break;
		case 216207489:
			return 325;
			break;
		case 2124706822:
			return 326;
			break;
		case 832559610:
			return 327;
			break;
		case -791212145:
			return 328;
			break;
		case 1426003941:
			return 329;
			break;
		case -2062125037:
			return 330;
			break;
		case 2002508958:
			return 331;
			break;
		case -1983118982:
			return 332;
			break;
		case 825938009:
			return 333;
			break;
		case 1670231294:
			return 334;
			break;
		case 1439144306:
			return 335;
			break;
		case -2008613264:
			return 336;
			break;
		case 137657929:
			return 337;
			break;
		case 850282205:
			return 338;
			break;
	}
	switch (iParam0)
	{
		case 964358912:
			return 339;
			break;
		case -1735315153:
			return 340;
			break;
		case -2034102895:
			return 341;
			break;
		case 1999400550:
			return 342;
			break;
		case 1839705233:
			return 343;
			break;
		case 1466269709:
			return 344;
			break;
		case -469722811:
			return 345;
			break;
		case -692060480:
			return 346;
			break;
		case 1034427337:
			return 347;
			break;
		case 773946556:
			return 348;
			break;
		case 332646433:
			return 349;
			break;
		case 101002372:
			return 350;
			break;
		case -259915394:
			return 351;
			break;
		case -491231765:
			return 352;
			break;
		case 1624727807:
			return 353;
			break;
		case 1920336964:
			return 354;
			break;
		case -1998999285:
			return 355;
			break;
		case -1691200068:
			return 356;
			break;
		case -1249146258:
			return 357;
			break;
		case -942723339:
			return 358;
			break;
		case -693318480:
			return 359;
			break;
		case -465836082:
			return 360;
			break;
		case -214792773:
			return 361;
			break;
		case 209893467:
			return 362;
			break;
		case -163640692:
			return 363;
			break;
		case 2012777989:
			return 364;
			break;
		case 1782084221:
			return 365;
			break;
		case 1532613824:
			return 366;
			break;
		case 1318894406:
			return 367;
			break;
		case -818529153:
			return 368;
			break;
		case -1578376725:
			return 369;
			break;
		case -1832828010:
			return 370;
			break;
		case -2072074479:
			return 371;
			break;
		case 107719401:
			return 372;
			break;
		case 1090494188:
			return 373;
			break;
		case -1065738777:
			return 374;
			break;
		case -841762662:
			return 375;
			break;
		case -1694870808:
			return 376;
			break;
		case 689718031:
			return 377;
			break;
		case 1188920977:
			return 378;
			break;
		case 1425414854:
			return 379;
			break;
		case 1680914747:
			return 380;
			break;
		case -1397044638:
			return 381;
			break;
		case -1202658930:
			return 382;
			break;
		case -2077294849:
			return 383;
			break;
		case 1871566269:
			return 384;
			break;
		case -638735717:
			return 385;
			break;
		case -885912284:
			return 386;
			break;
		case 911795056:
			return 387;
			break;
		case 680937451:
			return 388;
			break;
		case -1507671294:
			return 389;
			break;
		case -1734596619:
			return 390;
			break;
		case -1832969157:
			return 391;
			break;
		case -53415839:
			return 392;
			break;
		case 646954998:
			return 393;
			break;
		case -404995440:
			return 394;
			break;
		case -92411949:
			return 395;
			break;
		case -894465993:
			return 396;
			break;
		case 1287195724:
			return 397;
			break;
		case 790876446:
			return 398;
			break;
		case 1070035557:
			return 399;
			break;
		case 301242048:
			return 400;
			break;
		case 1741013601:
			return 401;
			break;
		case 2044421772:
			return 402;
			break;
		case -1643561644:
			return 403;
			break;
		case -2018242390:
			return 404;
			break;
		case 561169449:
			return 405;
			break;
		case 444970575:
			return 406;
			break;
		case 1702284027:
			return 407;
			break;
		case -514538827:
			return 408;
			break;
		case -807559225:
			return 409;
			break;
		case -1056910526:
			return 410;
			break;
		case -1286391833:
			return 411;
			break;
		case 1010978731:
			return 412;
			break;
		case -278296374:
			return 413;
			break;
		case 1628302349:
			return 414;
			break;
		case 1422447491:
			return 415;
			break;
		case 1174910465:
			return 416;
			break;
		case 907351580:
			return 417;
			break;
		case -1471350134:
			return 418;
			break;
		case 492573151:
			return 419;
			break;
		case -1903922134:
			return 420;
			break;
		case 2146031349:
			return 421;
			break;
		case 1931984241:
			return 422;
			break;
		case 1432846833:
			return 423;
			break;
		case -953555596:
			return 423;
			break;
		case -1233304549:
			return 423;
			break;
		case -1700569289:
			return 424;
			break;
		case 1799422067:
			return 425;
			break;
		case -1452856849:
			return 426;
			break;
		case -1678668028:
			return 427;
			break;
		case -297200608:
			return 428;
			break;
		case 1917066264:
			return 429;
			break;
		case -2114733193:
			return 430;
			break;
		case 1601646962:
			return 431;
			break;
		case 1361941727:
			return 432;
			break;
		case 1796589743:
			return 433;
			break;
		case -1668568166:
			return 434;
			break;
		case -1908470015:
			return 435;
			break;
		case -1204722971:
			return 436;
			break;
		case -1444166054:
			return 437;
			break;
		case -1083477643:
			return 438;
			break;
		case -1319381674:
			return 439;
			break;
		case -866579660:
			return 440;
			break;
		case -151756966:
			return 441;
			break;
		case 423011294:
			return 442;
			break;
		case 159450227:
			return 443;
			break;
		case 1002989825:
			return 444;
			break;
		case 773705132:
			return 445;
			break;
		case 1020488435:
			return 446;
			break;
		case 778620446:
			return 447;
			break;
		case 1962433344:
			return 448;
			break;
		case 1733476341:
			return 449;
			break;
		case -2020802455:
			return 450;
			break;
		case 770231294:
			return 451;
			break;
		case 1612460136:
			return 452;
			break;
		case 1309412424:
			return 453;
			break;
		case 832559610:
			return 455;
			break;
		case 592919913:
			return 456;
			break;
		case 2030987546:
			return 457;
			break;
		case -1750454803:
			return 458;
			break;
		case -2133000109:
			return 459;
			break;
		case 238099193:
			return 460;
			break;
		case -1737118:
			return 461;
			break;
		case -359443522:
			return 462;
			break;
		case -598689991:
			return 463;
			break;
		case 618809439:
			return 464;
			break;
		case 388017372:
			return 465;
			break;
		case 66225792:
			return 466;
			break;
		case -214047465:
			return 467;
			break;
		case -1287625671:
			return 468;
			break;
		case -1643038245:
			return 469;
			break;
		case 424882269:
			return 470;
			break;
		case -343911240:
			return 471;
			break;
		case -53479593:
			return 472;
			break;
		case -956003391:
			return 473;
			break;
		case 1651163783:
			return 474;
			break;
		case 1959028538:
			return 475;
			break;
		case 1576286618:
			return 476;
			break;
		case 809918015:
			return 477;
			break;
		case -699848470:
			return 478;
			break;
		case -938963863:
			return 479;
			break;
		case -1396746805:
			return 480;
			break;
		case -617521066:
			return 481;
			break;
		case -1537104552:
			return 482;
			break;
		case -1438584459:
			return 483;
			break;
		case -1184165951:
			return 484;
			break;
		case -951538820:
			return 485;
			break;
		case -1796389178:
			return 486;
			break;
		case -1564482965:
			return 487;
			break;
		case 571695376:
			return 488;
			break;
		case -1350988574:
			return 489;
			break;
		case -527667449:
			return 490;
			break;
		case 990258165:
			return 491;
			break;
		case 1290804003:
			return 492;
			break;
		case 1059618708:
			return 493;
			break;
		case 234888640:
			return 494;
			break;
		case -89557357:
			return 495;
			break;
		case 697291999:
			return 496;
			break;
		case 389820472:
			return 497;
			break;
		case 1917084907:
			return 498;
			break;
		case 1551055177:
			return 499;
			break;
		case -1765855776:
			return 500;
			break;
		case -848116519:
			return 501;
			break;
		case 2129418862:
			return 502;
			break;
	}
	switch (iParam0)
	{
		case 741836376:
			return 503;
			break;
		case -173729484:
			return 504;
			break;
		case 668204433:
			return 505;
			break;
		case -2128891869:
			return 506;
			break;
		case 1936790734:
			return 507;
			break;
		case 1555523415:
			return 508;
			break;
		case 1310804523:
			return 509;
			break;
		case 205374789:
			return 510;
			break;
		case -1187045551:
			return 511;
			break;
		case -948126772:
			return 512;
			break;
		case -1800186310:
			return 513;
			break;
		case -1562774905:
			return 514;
			break;
		case -266826481:
			return 515;
			break;
		case -35510110:
			return 516;
			break;
		case -2095774068:
			return 517;
			break;
		case 628050754:
			return 518;
			break;
		case 389656279:
			return 519;
			break;
		case 1209274507:
			return 520;
			break;
		case 971338798:
			return 521;
			break;
		case -1219727614:
			return 522;
			break;
		case -980481145:
			return 523;
			break;
		case 1677446030:
			return 524;
			break;
		case -1779191939:
			return 525;
			break;
		case 260481701:
			return 526;
			break;
		case 21562922:
			return 527;
			break;
		case 812901503:
			return 528;
			break;
		case 1527134627:
			return 529;
			break;
		case -32047166:
			return 530;
			break;
		case -1011699139:
			return 531;
			break;
		case -1901069835:
			return 532;
			break;
	}
	switch (iParam0)
	{
		case 367580840:
			return 533;
			break;
		case 675150674:
			return 534;
			break;
		case 1534956433:
			return 535;
			break;
		case 1831614190:
			return 536;
			break;
	}
	return -1;
}

bool func_495()//Position - 0x48FDD
{
	return DLC::IS_DLC_PRESENT(joaat("mpchristmas2017"));
}

int func_496(var uParam0)//Position - 0x4902E
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_159(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 2538;
				break;
			case 1:
				return 2539;
				break;
			case 2:
				return 2540;
				break;
			case 3:
				return 2541;
				break;
			case 4:
				return 2542;
				break;
			case 5:
				return 2543;
				break;
			case 6:
				return 2544;
				break;
			case 7:
				return 2545;
				break;
			case 8:
				return 2546;
				break;
			case 9:
				return 2547;
				break;
			case 10:
				return 2548;
				break;
		}
	}
	return 13122;
}

bool func_497()//Position - 0x49124
{
	return DLC::IS_DLC_PRESENT(joaat("mphalloween"));
}

bool func_498()//Position - 0x49146
{
	return DLC::IS_DLC_PRESENT(joaat("mpsecurity"));
}

bool func_499()//Position - 0x49157
{
	return DLC::IS_DLC_PRESENT(joaat("mptuner"));
}

bool func_500()//Position - 0x49168
{
	return DLC::IS_DLC_PRESENT(joaat("mpbiker"));
}

int func_501(int iParam0, int iParam1)//Position - 0x491AC
{
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return 43;
				break;
			case 7:
				return 30;
				break;
			case 8:
				return 35;
				break;
			case 9:
				return 18;
				break;
			case 10:
				return 32;
				break;
			case 11:
				return 93;
				break;
			case 14:
				return 26;
				break;
			case 15:
				return 11;
				break;
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return 45;
				break;
			case 8:
				return 35;
				break;
			case 10:
				return 32;
				break;
			case 11:
				return 93;
				break;
			case 13:
				return 8;
				break;
			case 14:
				return 26;
				break;
			case 15:
				return 11;
				break;
			}
	}
	return 0;
}

int func_502()//Position - 0x4936B
{
	if (__LIB_0__::func_262() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3607, -1)))
	{
		return 1;
	}
	return 0;
}

int func_503()//Position - 0x49447
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		return 30;
	}
	return 19;
}

int func_504(int iParam0, int iParam1)//Position - 0x4B680
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam1 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_505(char* sParam0)//Position - 0x4B69E
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return -2;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case joaat("CLO_SBM_H_0_0"):
		case joaat("CLO_SBM_H_1_0"):
			return 0;
			break;
		case joaat("CLO_SBF_H_0_0"):
		case joaat("CLO_SBF_H_1_0"):
			return 1;
			break;
		case joaat("CLO_FXM_H_0_0"):
			return 2;
			break;
		case joaat("CLO_FXF_H_0_0"):
			return 3;
			break;
		case joaat("CLO_TRM_H_0_0"):
			return 4;
			break;
		case joaat("CLO_TRF_H_0_0"):
			return 5;
			break;
		case joaat("CLO_VWM_H_0_0"):
			return 6;
			break;
		case joaat("CLO_VWF_H_0_0"):
			return 7;
			break;
		case joaat("CLO_GRM_H_0_0"):
		case joaat("CLO_GRM_H_1_0"):
			return 8;
			break;
		case joaat("CLO_GRF_H_0_0"):
		case joaat("CLO_GRF_H_1_0"):
			return 9;
			break;
		case joaat("CLO_BIM_H_0_0"):
		case joaat("CLO_BIM_H_1_0"):
		case joaat("CLO_BIM_H_2_0"):
		case joaat("CLO_BIM_H_3_0"):
		case joaat("CLO_BIM_H_4_0"):
		case joaat("CLO_BIM_H_5_0"):
			return 10;
			break;
		case joaat("CLO_BIF_H_0_0"):
		case joaat("CLO_BIF_H_1_0"):
		case joaat("CLO_BIF_H_2_0"):
		case joaat("CLO_BIF_H_3_0"):
		case joaat("CLO_BIF_H_4_0"):
		case joaat("CLO_BIF_H_5_0"):
		case joaat("CLO_BIF_H_6_0"):
			return 11;
			break;
		case joaat("CLO_S1M_H_0_0"):
		case joaat("CLO_S1M_H_1_0"):
		case joaat("CLO_S1M_H_2_0"):
		case joaat("CLO_S1M_H_3_0"):
		case joaat("CLO_S2M_H_0_0"):
		case joaat("CLO_S2M_H_1_0"):
		case joaat("CLO_S2M_H_2_0"):
			return 12;
			break;
		case joaat("CLO_S1F_H_0_0"):
		case joaat("CLO_S1F_H_1_0"):
		case joaat("CLO_S1F_H_2_0"):
		case joaat("CLO_S1F_H_3_0"):
		case joaat("CLO_S2F_H_0_0"):
		case joaat("CLO_S2F_H_1_0"):
		case joaat("CLO_S2F_H_2_0"):
			return 13;
			break;
		case joaat("CLO_IND_H_0_0"):
		case joaat("CLO_IND_H_0_1"):
		case joaat("CLO_IND_H_0_2"):
		case joaat("CLO_IND_H_0_3"):
		case joaat("CLO_IND_H_0_4"):
		case joaat("CLO_INDF_H_0_0"):
		case joaat("CLO_INDF_H_0_1"):
		case joaat("CLO_INDF_H_0_2"):
		case joaat("CLO_INDF_H_0_3"):
		case joaat("CLO_INDF_H_0_4"):
			return 14;
			break;
		case joaat("CLO_HP_HR_0_0"):
		case joaat("CLO_HP_HR_0_1"):
		case joaat("CLO_HP_HR_0_2"):
		case joaat("CLO_HP_HR_0_3"):
		case joaat("CLO_HP_HR_0_4"):
			return 15;
			break;
		case joaat("CLO_HP_HR_1_0"):
		case joaat("CLO_HP_HR_1_1"):
		case joaat("CLO_HP_HR_1_2"):
		case joaat("CLO_HP_HR_1_3"):
		case joaat("CLO_HP_HR_1_4"):
			return 16;
			break;
		case joaat("CLO_HP_F_HR_0_0"):
		case joaat("CLO_HP_F_HR_0_1"):
		case joaat("CLO_HP_F_HR_0_2"):
		case joaat("CLO_HP_F_HR_0_3"):
		case joaat("CLO_HP_F_HR_0_4"):
			return 17;
			break;
		case joaat("CLO_HP_F_HR_1_0"):
		case joaat("CLO_HP_F_HR_1_1"):
		case joaat("CLO_HP_F_HR_1_2"):
		case joaat("CLO_HP_F_HR_1_3"):
		case joaat("CLO_HP_F_HR_1_4"):
			return 18;
			break;
		case joaat("CLO_BUS_H_0_0"):
		case joaat("CLO_BUS_H_0_1"):
		case joaat("CLO_BUS_H_0_2"):
		case joaat("CLO_BUS_H_0_3"):
		case joaat("CLO_BUS_H_0_4"):
			return 19;
			break;
		case joaat("CLO_BUS_H_1_0"):
		case joaat("CLO_BUS_H_1_1"):
		case joaat("CLO_BUS_H_1_2"):
		case joaat("CLO_BUS_H_1_3"):
		case joaat("CLO_BUS_H_1_4"):
			return 20;
			break;
		case joaat("CLO_BUS_F_H_0_0"):
		case joaat("CLO_BUS_F_H_0_1"):
		case joaat("CLO_BUS_F_H_0_2"):
		case joaat("CLO_BUS_F_H_0_3"):
		case joaat("CLO_BUS_F_H_0_4"):
			return 21;
			break;
		case joaat("CLO_BUS_F_H_1_0"):
		case joaat("CLO_BUS_F_H_1_1"):
		case joaat("CLO_BUS_F_H_1_2"):
		case joaat("CLO_BUS_F_H_1_3"):
		case joaat("CLO_BUS_F_H_1_4"):
			return 22;
			break;
		case joaat("CLO_VALF_H_0_0"):
		case joaat("CLO_VALF_H_0_1"):
		case joaat("CLO_VALF_H_0_2"):
		case joaat("CLO_VALF_H_0_3"):
		case joaat("CLO_VALF_H_0_4"):
		case joaat("CLO_VALF_H_0_5"):
			return 23;
			break;
		case joaat("CLO_BBF_H_00"):
		case joaat("CLO_BBF_H_01"):
		case joaat("CLO_BBF_H_02"):
		case joaat("CLO_BBF_H_03"):
		case joaat("CLO_BBF_H_04"):
			return 24;
			break;
		case joaat("CLO_BBF_H_05"):
		case joaat("CLO_BBF_H_06"):
		case joaat("CLO_BBF_H_07"):
		case joaat("CLO_BBF_H_08"):
		case joaat("CLO_BBF_H_09"):
			return 25;
			break;
		case joaat("CLO_BBM_H_00"):
		case joaat("CLO_BBM_H_01"):
		case joaat("CLO_BBM_H_02"):
		case joaat("CLO_BBM_H_03"):
		case joaat("CLO_BBM_H_04"):
			return 26;
			break;
		case joaat("CLO_BBM_H_05"):
		case joaat("CLO_BBM_H_06"):
		case joaat("CLO_BBM_H_07"):
		case joaat("CLO_BBM_H_08"):
		case joaat("CLO_BBM_H_09"):
			return 27;
			break;
		case joaat("CC_M_HS_0"):
			return 28;
		case joaat("CC_M_HS_1"):
			return 29;
		case joaat("CC_M_HS_2"):
			return 30;
		case joaat("CC_M_HS_3"):
			return 31;
		case joaat("CC_M_HS_4"):
			return 32;
		case joaat("CC_M_HS_5"):
			return 33;
		case joaat("CC_M_HS_6"):
			return 34;
		case joaat("CC_M_HS_7"):
			return 35;
		case joaat("CC_M_HS_8"):
			return 36;
		case joaat("CC_M_HS_9"):
			return 37;
		case joaat("CC_M_HS_10"):
			return 38;
		case joaat("CC_M_HS_11"):
			return 39;
		case joaat("CC_M_HS_12"):
			return 40;
		case joaat("CC_M_HS_13"):
			return 41;
		case joaat("CC_M_HS_14"):
			return 42;
		case joaat("CC_M_HS_15"):
			return 43;
		case joaat("CC_F_HS_0"):
			return 44;
		case joaat("CC_F_HS_1"):
			return 45;
		case joaat("CC_F_HS_2"):
			return 46;
		case joaat("CC_F_HS_3"):
			return 47;
		case joaat("CC_F_HS_4"):
			return 48;
		case joaat("CC_F_HS_5"):
			return 49;
		case joaat("CC_F_HS_6"):
			return 50;
		case joaat("CC_F_HS_7"):
			return 51;
		case joaat("CC_F_HS_8"):
			return 52;
		case joaat("CC_F_HS_9"):
			return 53;
		case joaat("CC_F_HS_10"):
			return 54;
		case joaat("CC_F_HS_11"):
			return 55;
		case joaat("CC_F_HS_12"):
			return 56;
		case joaat("CC_F_HS_13"):
			return 57;
		case joaat("CC_F_HS_14"):
			return 58;
		case joaat("CC_F_HS_15"):
			return 59;
	}
	return -2;
}

int func_506(int iParam0)//Position - 0x562FD
{
	switch (iParam0)
	{
		case 0:
			return 29;
		case 1:
			return 28;
		case 2:
			return 30;
		case 3:
			return 31;
		case 4:
			return 32;
		case 5:
			return 33;
		case 6:
			return 34;
		case 7:
			return 35;
		case 8:
			return 36;
		case 9:
			return 37;
		case 10:
			return 38;
		case 11:
			return 39;
		case 12:
			return 40;
		case 13:
			return 41;
		case 14:
			return 42;
		case 15:
			return 43;
		case 16:
			return 44;
		case 17:
			return 45;
		case 18:
			return 46;
		case 19:
			return 47;
		case 20:
			return 48;
		case 21:
			return 49;
		case 22:
			return 50;
		case 23:
			return 51;
		case 24:
			return 52;
		case 25:
			return 53;
		case 26:
			return 54;
		case 27:
			return 55;
		case 28:
			return 56;
		case 29:
			return 57;
		case 30:
			return 58;
		case 31:
			return 59;
		case 32:
			return 60;
		case 33:
			return 91;
		case 34:
			return 92;
		case 35:
			return 93;
		case 36:
			return 94;
		case 37:
			return 95;
		case 38:
			return 96;
		case 39:
			return 97;
		case 40:
			return 98;
		case 41:
			return 99;
		case 42:
			return 100;
		case 43:
			return 101;
		case 44:
			return 102;
		case 45:
			return 103;
		case 46:
			return 104;
		case 47:
			return 105;
		case 48:
			return 106;
		case 49:
			return 107;
		case 50:
			return 108;
		case 51:
			return 109;
		case 52:
			return 110;
		case 53:
			return 111;
		case 54:
			return 112;
		case 55:
			return 113;
		case 56:
			return 114;
		case 57:
			return 115;
		case 58:
			return 116;
		case 59:
			return 117;
		case 60:
			return 118;
		case 61:
			return 119;
		case 62:
			return 120;
		case 63:
			return 121;
		case 64:
			return 122;
		case 65:
			return 149;
		case 66:
			return 150;
		case 67:
			return 151;
		case 68:
			return 152;
		case 69:
			return 153;
		case 70:
			return 154;
		case 71:
			return 155;
		case 72:
			return 156;
		case 73:
			return 157;
		case 74:
			return 158;
		case 75:
			return 159;
		case 76:
			return 160;
		case 77:
			return 161;
		case 78:
			return 162;
		case 79:
			return 163;
		case 80:
			return 164;
		case 81:
			return 165;
		case 82:
			return 166;
		case 83:
			return 167;
		case 84:
			return 168;
		case 85:
			return 169;
		case 86:
			return 170;
		case 87:
			return 171;
		default:
	}
	return 29;
}

int func_507(int iParam0)//Position - 0x56CF1
{
	switch (iParam0)
	{
		case 0:
			return 61;
		case 1:
			return 69;
		case 2:
			return 63;
		case 3:
			return 64;
		case 4:
			return 65;
		case 5:
			return 66;
		case 6:
			return 67;
		case 7:
			return 68;
		case 8:
			return 69;
		case 9:
			return 70;
		case 10:
			return 71;
		case 11:
			return 72;
		case 12:
			return 73;
		case 13:
			return 74;
		case 14:
			return 75;
		case 15:
			return 76;
		case 16:
			return 77;
		case 17:
			return 78;
		case 18:
			return 79;
		case 19:
			return 80;
		case 20:
			return 80;
		case 27:
			return 81;
		case 28:
			return 82;
		case 29:
			return 83;
		case 30:
			return 84;
		case 31:
			return 85;
		case 32:
			return 86;
		case 33:
			return 87;
		case 36:
			return 88;
		case 34:
			return 89;
		case 35:
			return 90;
		default:
	}
	return 61;
}

int func_508(char* sParam0, int iParam1, int iParam2)//Position - 0x57636
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 6:
			if (Global_262145.f_15292 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_HAIR */)
			{
				return 1;
			}
			break;
		case 7:
			if (Global_262145.f_15293 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_BEARD */)
			{
				return 1;
			}
			break;
		case 8:
			if (Global_262145.f_15294 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_EYEBROWS */)
			{
				return 1;
			}
			break;
		case 9:
			if (Global_262145.f_15295 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_CHEST */)
			{
				return 1;
			}
			break;
		case 10:
			if (Global_262145.f_15296 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_CONTACTS */)
			{
				return 1;
			}
			break;
		case 11:
			if (Global_262145.f_15297 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_FACEPAINT */)
			{
				return 1;
			}
			break;
		case 13:
			if (Global_262145.f_15298 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_MAKEUP */)
			{
				return 1;
			}
			if (Global_262145.f_15299 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_MAKEUP_BLUSHER */)
			{
				return 1;
			}
			break;
		case 14:
			if (Global_262145.f_15298 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_MAKEUP */)
			{
				return 1;
			}
			if (Global_262145.f_15300 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_MAKEUP_EYE */)
			{
				return 1;
			}
			break;
		case 15:
			if (Global_262145.f_15298 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_MAKEUP */)
			{
				return 1;
			}
			if (Global_262145.f_15301 /* Tunable: SHOULD_ITEM_BE_DISCOUNTED_HME_NGMP_MAKEUP_LIPSTICK */)
			{
				return 1;
			}
			break;
	}
	iVar1 = MISC::GET_HASH_KEY(sParam0);
	iVar0 = 0;
	while (iVar0 < Global_262145.f_15302)
	{
		if (Global_262145.f_15302[iVar0] != 0)
		{
			if (iVar1 == Global_262145.f_15302[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_509(int iParam0, int iParam1)//Position - 0x59C2E
{
	switch (iParam0)
	{
		case 6:
			return joaat("CATEGORY_INVENTORY_HAIR");
			break;
		case 7:
			return joaat("CATEGORY_INVENTORY_BEARD");
			break;
		case 8:
			return joaat("CATEGORY_INVENTORY_EYEBROWS");
			break;
		case 9:
			return joaat("CATEGORY_INVENTORY_CHEST_HAIR");
			break;
		case 10:
			return joaat("CATEGORY_INVENTORY_CONTACTS");
			break;
		case 11:
			if (iParam1 == 4)
			{
				return joaat("CATEGORY_INVENTORY_FACEPAINT");
			}
			else if (iParam1 == 5)
			{
				return joaat("CATEGORY_INVENTORY_BLUSHER");
			}
			break;
		case 13:
			return joaat("CATEGORY_INVENTORY_BLUSHER");
			break;
		case 14:
			return joaat("CATEGORY_INVENTORY_MKUP");
			break;
		case 15:
			return joaat("CATEGORY_INVENTORY_LIPSTICK");
			break;
		default:
			break;
	}
	return joaat("CATEGORY_INVENTORY_HAIR");
}

int func_510(int iParam0, int iParam1)//Position - 0x5A048
{
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return PED::GET_NUM_PED_HAIR_TINTS();
				break;
			case 7:
				return PED::GET_NUM_PED_HAIR_TINTS();
				break;
			case 8:
				return PED::GET_NUM_PED_HAIR_TINTS();
				break;
			case 9:
				return PED::GET_NUM_PED_HAIR_TINTS();
				break;
			case 10:
				return 0;
				break;
			case 11:
				return PED::GET_NUM_PED_MAKEUP_TINTS();
				break;
			case 14:
				return 0;
				break;
			case 15:
				return PED::GET_NUM_PED_MAKEUP_TINTS();
				break;
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return PED::GET_NUM_PED_HAIR_TINTS();
				break;
			case 8:
				return PED::GET_NUM_PED_HAIR_TINTS();
				break;
			case 10:
				return 0;
				break;
			case 11:
				return PED::GET_NUM_PED_MAKEUP_TINTS();
				break;
			case 13:
				return PED::GET_NUM_PED_MAKEUP_TINTS();
				break;
			case 14:
				return 0;
				break;
			case 15:
				return PED::GET_NUM_PED_MAKEUP_TINTS();
				break;
			}
	}
	return 0;
}

int func_511(int iParam0, int iParam1, int iParam2)//Position - 0x5A15A
{
	if (((iParam0 == 6 || iParam0 == 7) || iParam0 == 9) || iParam0 == 8)
	{
		if (iParam2 == 50)
		{
			if (!PED::IS_PED_HAIR_TINT_FOR_CREATOR(iParam1))
			{
				return 0;
			}
		}
		if (!PED::IS_PED_HAIR_TINT_FOR_BARBER(iParam1))
		{
			return 0;
		}
	}
	else if (iParam0 == 15)
	{
		if (iParam2 == 50)
		{
			if (!PED::IS_PED_LIPSTICK_TINT_FOR_CREATOR(iParam1))
			{
				return 0;
			}
		}
		if (!PED::IS_PED_LIPSTICK_TINT_FOR_BARBER(iParam1))
		{
			return 0;
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam2 == 50)
		{
			if (!PED::IS_PED_BLUSH_TINT_FOR_CREATOR(iParam1))
			{
				return 0;
			}
		}
		if (!PED::IS_PED_BLUSH_TINT_FOR_BARBER(iParam1))
		{
			return 0;
		}
	}
	else if (iParam0 == 11)
	{
		if (!PED::IS_PED_BLUSH_FACEPAINT_TINT_FOR_BARBER(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_512(int iParam0, int iParam1)//Position - 0x5A2C1
{
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 0)
		{
			return -1;
		}
		return 0;
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 0)
		{
			return -1;
		}
		return 0;
	}
	return -1;
}

void func_513(var uParam0)//Position - 0x5B3DE
{
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SET_TITLE"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_TITLE"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_514(int iParam0, bool bParam1)//Position - 0x5C39E
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				return "HAIR_NG_T0";
			}
			else
			{
				return "HAIR_NG_O0";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "HAIR_NG_T1";
			}
			else
			{
				return "HAIR_NG_O1";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "HAIR_NG_T2";
			}
			else
			{
				return "HAIR_NG_O2";
			}
			break;
		case 8:
			if (bParam1)
			{
				return "HAIR_NG_T3";
			}
			else
			{
				return "HAIR_NG_O3";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "HAIR_NG_T4";
			}
			else
			{
				return "HAIR_NG_O4";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "HAIR_NG_T5";
			}
			else
			{
				return "HAIR_NG_O5";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "HAIR_NG_T6";
			}
			else
			{
				return "HAIR_NG_O6";
			}
			break;
		case 12:
			if (bParam1)
			{
				return "HAIR_NG_T7";
			}
			else
			{
				return "HAIR_NG_O7";
			}
			break;
		case 13:
			if (bParam1)
			{
				return "HAIR_NG_T8";
			}
			else
			{
				return "HAIR_NG_O8";
			}
			break;
		case 14:
			if (bParam1)
			{
				return "HAIR_NG_T9";
			}
			else
			{
				return "HAIR_NG_O9";
			}
			break;
		case 15:
			if (bParam1)
			{
				return "HAIR_NG_T10";
			}
			else
			{
				return "HAIR_NG_O10";
			}
			break;
	}
	return "";
}

void func_515(int iParam0, int iParam1)//Position - 0x5CE37
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 10:
			if (*iParam1 != 1)
			{
				*iParam1 = 1;
			}
			break;
		case 5:
		case 8:
			if (*iParam1 != 2)
			{
				*iParam1 = 2;
			}
			break;
		default:
			if (*iParam1 != 0)
			{
				*iParam1 = 0;
			}
			break;
	}
}

bool func_516(int iParam0, int iParam1, int iParam2)//Position - 0x5CE8E
{
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (!MISC::ARE_STRINGS_EQUAL("CC_M_HS", HUD::GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(&(iParam2->f_1), HUD::GET_LENGTH_OF_LITERAL_STRING("CC_M_HS"))))
				{
					return 1;
				}
				break;
			case 7:
				if (iParam2->f_10 >= 81 && iParam2->f_10 <= 90)
				{
					return 1;
				}
				break;
			case 11:
				if (iParam2->f_10 == 92)
				{
					return 1;
				}
				if (iParam2->f_10 >= 93 && iParam2->f_10 <= 122)
				{
					return 1;
				}
				if (iParam2->f_10 >= 123 && iParam2->f_10 <= 148)
				{
					return 1;
				}
				if (iParam2->f_10 >= 149 && iParam2->f_10 <= 157)
				{
					return 1;
				}
				if (iParam2->f_10 >= 158 && iParam2->f_10 <= 171)
				{
					return 1;
				}
				break;
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (!MISC::ARE_STRINGS_EQUAL("CC_F_HS", HUD::GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(&(iParam2->f_1), HUD::GET_LENGTH_OF_LITERAL_STRING("CC_F_HS"))))
				{
					return 1;
				}
				break;
			case 11:
				if (iParam2->f_10 == 92)
				{
					return 1;
				}
				if (iParam2->f_10 >= 93 && iParam2->f_10 <= 122)
				{
					return 1;
				}
				if (iParam2->f_10 >= 123 && iParam2->f_10 <= 148)
				{
					return 1;
				}
				if (iParam2->f_10 >= 149 && iParam2->f_10 <= 157)
				{
					return 1;
				}
				if (iParam2->f_10 >= 158 && iParam2->f_10 <= 171)
				{
					return 1;
				}
				break;
			}
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_10__::func_175(&(iParam2->f_1), 0));
}

int func_517(int iParam0)//Position - 0x5D080
{
	switch (iParam0)
	{
		case 0:
			return 13;
			break;
		case 1:
			return 14;
			break;
		case 2:
			return 15;
			break;
	}
	return -1;
}

int func_518(int iParam0, int iParam1, int iParam2)//Position - 0x5D11F
{
	if (iParam2 == 50)
	{
		switch (iParam1)
		{
			case 9:
				return 0;
				break;
			case 10:
				return 0;
				break;
			case 11:
				return 0;
				break;
			}
	}
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam1)
		{
			case 5:
				return 1;
				break;
			case 6:
				return 1;
				break;
			case 7:
				return 1;
				break;
			case 8:
				return 1;
				break;
			case 9:
				return 1;
				break;
			case 10:
				return 1;
				break;
			case 11:
				return 1;
				break;
			case 12:
				return 1;
				break;
			case 13:
				return 0;
				break;
			case 14:
				return 1;
				break;
			case 15:
				return 1;
				break;
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		switch (iParam1)
		{
			case 5:
				return 1;
				break;
			case 6:
				return 1;
				break;
			case 7:
				return 0;
				break;
			case 8:
				return 1;
				break;
			case 9:
				return 0;
				break;
			case 10:
				return 1;
				break;
			case 11:
				return 1;
				break;
			case 12:
				return 1;
				break;
			case 13:
				return 1;
				break;
			case 14:
				return 1;
				break;
			case 15:
				return 1;
				break;
			}
	}
	return 0;
}

int func_519(int iParam0)//Position - 0x5D2A0
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		case 1:
			return 7;
			break;
		case 2:
			return 8;
			break;
		case 3:
			return 9;
			break;
		case 4:
			return 10;
			break;
		case 5:
			return 11;
			break;
		case 6:
			return 12;
			break;
	}
	return -1;
}

int func_520(char* sParam0, int iParam1)//Position - 0x5E9DA
{
	if (iParam1 >= 19 + 1)
	{
		if (iParam1 >= 27 && iParam1 <= 36)
		{
			StringCopy(sParam0, "BRD_HP_", 16);
			StringIntConCat(sParam0, (iParam1 - 27), 16);
			return 1;
		}
	}
	return 0;
}

int func_521(int iParam0)//Position - 0x5EA13
{
	if (iParam0 >= 19 + 1)
	{
		if (iParam0 >= 27 && iParam0 <= 36)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_522(var uParam0, int iParam1)//Position - 0x601CC
{
	if (uParam0->f_525 == 1 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_4537616[iParam1] == uParam0->f_272)
		{
			return 1;
		}
	}
	else if (Global_4537616[iParam1] == uParam0->f_273)
	{
		return 1;
	}
	return 0;
}

int func_523(var uParam0, int iParam1, int iParam2)//Position - 0x64228
{
	if (iParam1 == 1)
	{
		if (__LIB_11__::func_427(uParam0, iParam2))
		{
			return 1;
		}
	}
	else if ((*uParam0)[iParam2] != -99)
	{
		return 1;
	}
	return 0;
}

var func_524(int iParam0, int iParam1)//Position - 0x64E2F
{
	var uVar0;
	uVar0 = (SYSTEM::SHIFT_LEFT(iParam0, 16) || iParam1);
	return uVar0;
}

int func_525(int iParam0, int iParam1)//Position - 0x834EE
{
	switch (iParam0)
	{
		case 6:
			return joaat("CATEGORY_HAIR");
			break;
		case 7:
			return joaat("CATEGORY_BEARD");
			break;
		case 8:
			return joaat("CATEGORY_EYEBROWS");
			break;
		case 9:
			return joaat("CATEGORY_CHEST_HAIR");
			break;
		case 10:
			return joaat("CATEGORY_CONTACTS");
			break;
		case 11:
			if (iParam1 == 4)
			{
				return joaat("CATEGORY_FACEPAINT");
			}
			else if (iParam1 == 5)
			{
				return joaat("CATEGORY_BLUSHER");
			}
			break;
		case 13:
			return joaat("CATEGORY_BLUSHER");
			break;
		case 14:
			return joaat("CATEGORY_MKUP");
			break;
		case 15:
			return joaat("CATEGORY_LIPSTICK");
			break;
		default:
			break;
	}
	return joaat("CATEGORY_HAIR");
}

void func_526(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)//Position - 0x83634
{
	uParam0->f_9 = 1;
	if (iParam3 == 7)
	{
		uParam0->f_9 = 2;
	}
	*uParam0 = iParam1;
	StringCopy(&(uParam0->f_1), sParam2, 16);
	uParam0->f_5 = iParam3;
	uParam0->f_6 = iParam4;
	uParam0->f_7 = fParam5;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = iParam7;
}

void func_527(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x83677
{
	uParam0->f_9 = 0;
	*uParam0 = iParam1;
	StringCopy(&(uParam0->f_1), sParam2, 16);
	uParam0->f_8 = iParam3;
	uParam0->f_6 = iParam3;
	uParam0->f_10 = -1;
	uParam0->f_11 = iParam4;
}

int func_528(int iParam0)//Position - 0x836A8
{
	if (iParam0 == 50)
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0)//Position - 0x95E85
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return iParam0;
	}
	if (!__LIB_3__::func_660())
	{
		return iParam0;
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		case 27:
			return 1;
		case 28:
			return 2;
		case 29:
			return 3;
		case 30:
			return 4;
		case 31:
			return 5;
		case 32:
			return 6;
		case 33:
			return 7;
		case 34:
			return 8;
		case 35:
			return 9;
		case 36:
			return 10;
		case 1:
			return 11;
		case 2:
			return 12;
		case 3:
			return 13;
		case 4:
			return 14;
		case 5:
			return 15;
		case 6:
			return 16;
		case 7:
			return 17;
		case 8:
			return 18;
		case 9:
			return 19;
		case 10:
			return 20;
		case 11:
			return 21;
		case 12:
			return 22;
		case 13:
			return 23;
		case 14:
			return 24;
		case 15:
			return 25;
		case 16:
			return 26;
		case 17:
			return 27;
		case 18:
			return 28;
		case 19:
			return 29;
		default:
	}
	return -1;
}

void func_530(int iParam0, char* sParam1)//Position - 0x96187
{
	StringCopy(sParam1, "HAIR_GROUP", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "HAIR_GROUP_SB_MO", 16);
			break;
		case 1:
			StringCopy(sParam1, "HAIR_GROUP_SB_FO", 16);
			break;
		case 2:
			StringCopy(sParam1, "HAIR_GROUP_FX_MO", 16);
			break;
		case 3:
			StringCopy(sParam1, "HAIR_GROUP_FX_FO", 16);
			break;
		case 4:
			StringCopy(sParam1, "HAIR_GROUP_AF_MO", 16);
			break;
		case 5:
			StringCopy(sParam1, "HAIR_GROUP_AF_FO", 16);
			break;
		case 6:
			StringCopy(sParam1, "HAIR_GROUP_VW_M0", 16);
			break;
		case 7:
			StringCopy(sParam1, "HAIR_GROUP_VW_F0", 16);
			break;
		case 8:
			StringCopy(sParam1, "HAIR_GROUP_GR_M0", 16);
			break;
		case 9:
			StringCopy(sParam1, "HAIR_GROUP_GR_F0", 16);
			break;
		case 10:
			StringCopy(sParam1, "HAIR_GROUP_BIK_M0", 16);
			break;
		case 11:
			StringCopy(sParam1, "HAIR_GROUP_BIK_F0", 16);
			break;
		case 12:
			StringCopy(sParam1, "HAIR_GROUP_LOW_M0", 16);
			break;
		case 13:
			StringCopy(sParam1, "HAIR_GROUP_LOW_F0", 16);
			break;
		case 14:
			StringCopy(sParam1, "HAIR_GROUP_IND1" /* GXT: Mullet */, 16);
			break;
		case 15:
			StringCopy(sParam1, "HAIR_GROUP_HIP1" /* GXT: Long Slicked */, 16);
			break;
		case 16:
			StringCopy(sParam1, "HAIR_GROUP_HIP2" /* GXT: Hipster Youth */, 16);
			break;
		case 17:
			StringCopy(sParam1, "HAIR_GROUP_HIP3" /* GXT: Big Bangs */, 16);
			break;
		case 18:
			StringCopy(sParam1, "HAIR_GROUP_HIP4" /* GXT: Braided Top Knot */, 16);
			break;
		case 19:
			StringCopy(sParam1, "HAIR_GROUP_BUS1" /* GXT: Short Side Part */, 16);
			break;
		case 20:
			StringCopy(sParam1, "HAIR_GROUP_BUS2" /* GXT: High Slicked Sides */, 16);
			break;
		case 21:
			StringCopy(sParam1, "HAIR_GROUP_BUS3" /* GXT: Tight Bun */, 16);
			break;
		case 22:
			StringCopy(sParam1, "HAIR_GROUP_BUS4" /* GXT: Twisted Bob */, 16);
			break;
		case 23:
			StringCopy(sParam1, "HAIR_GROUP_VAL1" /* GXT: Flapper Bob */, 16);
			break;
		case 24:
			StringCopy(sParam1, "HAIR_GROUP_BCH1" /* GXT: Pin Up Girl */, 16);
			break;
		case 25:
			StringCopy(sParam1, "HAIR_GROUP_BCH2" /* GXT: Messy Bun */, 16);
			break;
		case 26:
			StringCopy(sParam1, "HAIR_GROUP_BCH3" /* GXT: Shaggy */, 16);
			break;
		case 27:
			StringCopy(sParam1, "HAIR_GROUP_BCH4" /* GXT: Surfer */, 16);
			break;
		case 28:
			StringCopy(sParam1, "HAIR_GROUP_M0" /* GXT: Shaven */, 16);
			break;
		case 29:
			StringCopy(sParam1, "HAIR_GROUP_M1" /* GXT: Buzzcut */, 16);
			break;
		case 30:
			StringCopy(sParam1, "HAIR_GROUP_M2" /* GXT: Faux Hawk */, 16);
			break;
		case 31:
			StringCopy(sParam1, "HAIR_GROUP_M3" /* GXT: Hipster Shaved */, 16);
			break;
		case 32:
			StringCopy(sParam1, "HAIR_GROUP_M4" /* GXT: Side Parting Spiked */, 16);
			break;
		case 33:
			StringCopy(sParam1, "HAIR_GROUP_M5" /* GXT: Shorter Cut */, 16);
			break;
		case 34:
			StringCopy(sParam1, "HAIR_GROUP_M6" /* GXT: Biker */, 16);
			break;
		case 35:
			StringCopy(sParam1, "HAIR_GROUP_M7" /* GXT: Ponytail */, 16);
			break;
		case 36:
			StringCopy(sParam1, "HAIR_GROUP_M8" /* GXT: Cornrows */, 16);
			break;
		case 37:
			StringCopy(sParam1, "HAIR_GROUP_M9" /* GXT: Slicked */, 16);
			break;
		case 38:
			StringCopy(sParam1, "HAIR_GROUP_M10" /* GXT: Short Brushed */, 16);
			break;
		case 39:
			StringCopy(sParam1, "HAIR_GROUP_M11" /* GXT: Spikey */, 16);
			break;
		case 40:
			StringCopy(sParam1, "HAIR_GROUP_M12" /* GXT: Caesar */, 16);
			break;
		case 41:
			StringCopy(sParam1, "HAIR_GROUP_M13" /* GXT: Chopped */, 16);
			break;
		case 42:
			StringCopy(sParam1, "HAIR_GROUP_M14" /* GXT: Dreads */, 16);
			break;
		case 43:
			StringCopy(sParam1, "HAIR_GROUP_M15" /* GXT: Long Hair */, 16);
			break;
		case 44:
			StringCopy(sParam1, "HAIR_GROUP_F0" /* GXT: Shaven */, 16);
			break;
		case 45:
			StringCopy(sParam1, "HAIR_GROUP_F1" /* GXT: Short */, 16);
			break;
		case 46:
			StringCopy(sParam1, "HAIR_GROUP_F2" /* GXT: Layered Bob */, 16);
			break;
		case 47:
			StringCopy(sParam1, "HAIR_GROUP_F3" /* GXT: Pigtails */, 16);
			break;
		case 48:
			StringCopy(sParam1, "HAIR_GROUP_F4" /* GXT: Ponytail */, 16);
			break;
		case 49:
			StringCopy(sParam1, "HAIR_GROUP_F5" /* GXT: Braided Mohawk */, 16);
			break;
		case 50:
			StringCopy(sParam1, "HAIR_GROUP_F6" /* GXT: Braids */, 16);
			break;
		case 51:
			StringCopy(sParam1, "HAIR_GROUP_F7" /* GXT: Bob */, 16);
			break;
		case 52:
			StringCopy(sParam1, "HAIR_GROUP_F8" /* GXT: Faux Hawk */, 16);
			break;
		case 53:
			StringCopy(sParam1, "HAIR_GROUP_F9" /* GXT: French Twist */, 16);
			break;
		case 54:
			StringCopy(sParam1, "HAIR_GROUP_F10" /* GXT: Long Bob */, 16);
			break;
		case 55:
			StringCopy(sParam1, "HAIR_GROUP_F11" /* GXT: Loose Tied */, 16);
			break;
		case 56:
			StringCopy(sParam1, "HAIR_GROUP_F12" /* GXT: Pixie */, 16);
			break;
		case 57:
			StringCopy(sParam1, "HAIR_GROUP_F13" /* GXT: Shaved Bangs */, 16);
			break;
		case 58:
			StringCopy(sParam1, "HAIR_GROUP_F14" /* GXT: Top Knot */, 16);
			break;
		case 59:
			StringCopy(sParam1, "HAIR_GROUP_F15" /* GXT: Wavy Bob */, 16);
			break;
	}
}

bool func_531(int iParam0)//Position - 0x965D7
{
	return iParam0 >= 5;
}

int func_532()//Position - 0x965E3
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_3() == 0)
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_F_Freemode_01") || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_M_Freemode_01"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_533()//Position - 0x96629
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_0__::func_3() == 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_M_Freemode_01"))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

float func_534(var uParam0, var uParam1)//Position - 0x96668
{
	float fVar0;
	fVar0 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(*uParam1);
		if (*uParam0 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam0))
			{
				fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam0);
			}
			else
			{
				fVar0 = 1f;
			}
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam0))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam0);
	}
	else
	{
		fVar0 = 1f;
	}
	return fVar0;
}

void func_535(var uParam0)//Position - 0x9694B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_531);
	}
}

void func_536(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, float fParam5)//Position - 0x96963
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iParam1, uParam0->f_531, uParam0->f_486, sParam2, fParam4, fParam5, iParam3);
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1);
		}
	}
}

void func_537(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, float fParam5)//Position - 0x969A8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(iParam1, uParam0->f_531, uParam0->f_486, sParam2, fParam4, fParam5, iParam3, 0, 1000f, 0);
		}
	}
}

void func_538(var uParam0)//Position - 0x96A22
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_529 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_531);
		if (uParam0->f_529 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_529))
			{
				NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_531);
			}
		}
	}
}

char* func_539(char* sParam0)//Position - 0x96A5D
{
	char* sVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_base"))
		{
			sVar0 = "scissors_base";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_enterchair"))
		{
			sVar0 = "scissors_enterchair";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_exitchair"))
		{
			sVar0 = "scissors_exitchair";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_a"))
		{
			sVar0 = "scissors_idle_a";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_b"))
		{
			sVar0 = "scissors_idle_b";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_c"))
		{
			sVar0 = "scissors_idle_c";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_hair_cut_a"))
		{
			sVar0 = "scissors_hair_cut_a";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_hair_cut_b"))
		{
			sVar0 = "scissors_hair_cut_b";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_intro"))
		{
			sVar0 = "scissors_intro";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_tutorial"))
		{
			sVar0 = "scissors_tutorial";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_tutorial_base"))
		{
			sVar0 = "scissors_tutorial_base";
		}
	}
	return sVar0;
}

int func_540(var uParam0)//Position - 0x96C2D
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_541(var uParam0)//Position - 0x994D0
{
	uParam0->f_640.f_68 = __LIB_29__::func_481();
}

int func_542(var uParam0)//Position - 0x9979B
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_486))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT(uParam0->f_486);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_486))
	{
		return 0;
	}
	return 1;
}

void func_543(int iParam0, var uParam1)//Position - 0x997FC
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Local_125[iParam0 /*3*/].f_2)
		{
			Local_125[iParam0 /*3*/].f_1 = uParam1;
			Local_125[iParam0 /*3*/].f_2 = 1;
		}
	}
}

void func_544(int iParam0, var uParam1)//Position - 0x9982A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(Global_1853348[iParam0 /*834*/].f_833, 4))
		{
			Global_1853348[iParam0 /*834*/].f_203 = uParam1;
			MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_833), 4);
		}
	}
}

int func_545(int iParam0, int iParam1, bool bParam2)//Position - 0x99AEA
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = (Local_66.f_4[iParam1] - 1);
	if (iVar0 == iParam0)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iVar0 == -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_546(int iParam0)//Position - 0x9B18C
{
	switch (iParam0)
	{
		case 5:
			return 0;
			break;
		case 6:
			return 0;
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
			return 6;
			break;
		case 13:
			return 0;
			break;
		case 14:
			return 1;
			break;
		case 15:
			return 2;
			break;
	}
	return -1;
}

int func_547(bool bParam0)//Position - 0x9B2B5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_66.f_1))
			{
				return 1;
			}
			else if (bParam0)
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_66.f_1);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_548(int iParam0)//Position - 0x9D4FC
{
	switch (iParam0)
	{
		case 6:
			return "SHOP_L_SEAT" /* GXT: Walk up to a seat to browse hairstyles. */;
			break;
		case 7:
			return "SHOP_L_SEAT" /* GXT: Walk up to a seat to browse hairstyles. */;
			break;
		case 9:
			return "SHOP_L_WEAP" /* GXT: Walk up to the counter to browse weapons. */;
			break;
	}
	return "SHOP_L_ITEMS" /* GXT: Items */;
}

int func_549(var uParam0, int iParam1)//Position - 0x9DDD3
{
	if (!uParam0->f_496)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			return 0;
		}
		uParam0->f_496 = 1;
	}
	if (!uParam0->f_497)
	{
		if (iParam1 && uParam0->f_523 == 50)
		{
			return 1;
		}
		if (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK(&(uParam0->f_560), false, -1))
		{
			return 0;
		}
		uParam0->f_497 = 1;
		uParam0->f_557 = AUDIO::GET_SOUND_ID();
		uParam0->f_558 = AUDIO::GET_SOUND_ID();
		uParam0->f_559 = AUDIO::GET_SOUND_ID();
	}
	return 1;
}

void func_550(var uParam0, int iParam1, int iParam2)//Position - 0x9E183
{
	if (iParam1 == 1)
	{
		uParam0->f_555 = iParam2;
	}
	else
	{
		uParam0->f_554 = iParam2;
	}
}

bool func_551(var uParam0, int iParam1)//Position - 0x9E1A2
{
	if (iParam1 == 1)
	{
		return uParam0->f_555;
	}
	return uParam0->f_554;
}

bool func_552(var uParam0)//Position - 0xA0599
{
	return uParam0->f_105;
}

void func_553(var uParam0)//Position - 0xA0652
{
	if (uParam0->f_496)
	{
		STREAMING::REMOVE_PTFX_ASSET();
		uParam0->f_496 = 0;
	}
	if (uParam0->f_497)
	{
		AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
		uParam0->f_497 = 0;
	}
}

void func_554(int* iParam0, struct<3> Param1)//Position - 0xA27D2
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if ((PED::IS_PED_INJURED(*iParam0) || PED::IS_PED_FLEEING(*iParam0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, true), Param1, true) > 10f)
		{
			__LIB_10__::func_18("Marking previous shop ped as no longer needed", -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_10__::func_18("Deleting previous shop ped.", -1);
		PED::DELETE_PED(iParam0);
	}
}

void func_555(var uParam0, int iParam1, struct<3> Param2, float fParam3, struct<3> Param4, float fParam5)//Position - 0xA2AAC
{
	uParam0->f_3 = iParam1;
	uParam0->f_6 = { Param2 };
	uParam0->f_15 = fParam3;
	uParam0->f_22 = { Param4 };
	uParam0->f_25 = fParam5;
}

void func_556(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA2ADA
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_9 = iParam4;
}

void func_557()//Position - 0xA2E9D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_140);
		if (((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && __LIB_0__::func_154(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1), 1, 1)) && Local_125[iLocal_140 /*3*/].f_2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1)))
		{
			iVar0 = (Local_66.f_4[Local_125[iLocal_140 /*3*/].f_1] - 1);
			if (iVar0 == iLocal_140)
			{
				return;
			}
			else if (iVar0 == -1)
			{
				Local_66.f_4[Local_125[iLocal_140 /*3*/].f_1] = iLocal_140 + 1;
				MISC::SET_BIT(&(Local_66.f_2), iLocal_140);
				return;
			}
			else if ((!__LIB_0__::func_154(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1) || !Local_125[iVar0 /*3*/].f_2) || Local_125[iVar0 /*3*/].f_1 != Local_125[iLocal_140 /*3*/].f_1)
			{
				Local_66.f_4[Local_125[iLocal_140 /*3*/].f_1] = iLocal_140 + 1;
				MISC::SET_BIT(&(Local_66.f_2), iLocal_140);
				return;
			}
		}
		else if (BitTest(Local_66.f_2, iLocal_140))
		{
			iVar2 = 0;
			while (iVar2 < 58)
			{
				if (Local_66.f_4[iVar2] == iLocal_140 + 1)
				{
					Local_66.f_4[iVar2] = 0;
				}
				iVar2++;
			}
			MISC::CLEAR_BIT(&(Local_66.f_2), iLocal_140);
		}
	}
	iLocal_140++;
	if (iLocal_140 >= 32)
	{
		iLocal_140 = 0;
	}
}

void func_558(var uParam0)//Position - 0xA3880
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (uParam0->f_591)
			{
				if (uParam0->f_11 != 4 || uParam0->f_116.f_31 > 6)
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()))
					{
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
						uParam0->f_591 = 0;
					}
				}
			}
			else if (uParam0->f_11 == 4 && uParam0->f_116.f_31 <= 6)
			{
				uParam0->f_591 = 1;
			}
		}
	}
	else
	{
		uParam0->f_591 = 0;
	}
}

void func_559(var uParam0)//Position - 0xA6073
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_0))
		{
			*uParam0 = NETWORK::NET_TO_PED(Local_66.f_0);
			uParam0->f_26 = 1;
		}
		else
		{
			*uParam0 = 0;
		}
		uParam0->f_27 = Local_66.f_3;
	}
}

void func_560(var uParam0)//Position - 0xA66A0
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_486))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_486);
	}
}

bool func_561(int iParam0)//Position - 0x1FE5
{
	return BitTest(Global_113386.f_1.f_116, iParam0);
}

char* func_562(int iParam0)//Position - 0x24CD
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS" /* GXT: Gustavo Mota */;
			break;
		case 2:
			return "HC_N_KAR" /* GXT: Karl Abolaji */;
			break;
		case 10:
			return "HC_N_PAC" /* GXT: Packie McReary */;
			break;
		case 11:
			return "HC_N_CHE" /* GXT: Chef */;
			break;
		case 3:
			return "HC_N_HUG" /* GXT: Hugh Welsh */;
			break;
		case 4:
			return "HC_N_NOR" /* GXT: Norm Richards */;
			break;
		case 5:
			return "HC_N_DAR" /* GXT: Daryl Johns */;
			break;
		case 6:
			return "HC_N_PAI" /* GXT: Paige Harris */;
			break;
		case 7:
			return "HC_N_CHR" /* GXT: Christian Feltz */;
			break;
		case 12:
			return "HC_N_RIC" /* GXT: Rickie Lukens */;
			break;
		case 8:
			return "HC_N_EDD" /* GXT: Eddie Toh */;
			break;
		case 13:
			return "HC_N_TAL" /* GXT: Taliana Martinez */;
			break;
		case 9:
			return "HC_N_KRM" /* GXT: Karim Denz */;
			break;
	}
	return "ERROR!";
}

int func_563(int iParam0)//Position - 0x271D
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		case 1:
			return 3;
			break;
		case 2:
			return 4;
			break;
		case 3:
			return 5;
			break;
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_564()//Position - 0x1D7
{
	int iVar0;
	if (Global_78579)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_96661.f_8 = (Global_96661.f_8 + iVar0);
}

void func_565(var uParam0)//Position - 0x219
{
	if (BitTest(Global_96449, *uParam0))
	{
		if (BitTest(uParam0->f_449, 1))
		{
			MISC::SET_BIT(&(uParam0->f_449), 15);
			MISC::SET_BIT(&(uParam0->f_449), 16);
			MISC::SET_BIT(&(uParam0->f_449), 14);
			MISC::CLEAR_BIT(&Global_96449, *uParam0);
		}
	}
}

void func_566(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x1336
{
	if (uParam0->f_483 == 3)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Param2))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { Param1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { Param2 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam3;
		uParam0->f_483++;
	}
}

void func_567(var uParam0, struct<3> Param1, float fParam2)//Position - 0x13DB
{
	uParam0->f_11 = { Param1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

void func_568(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x14DF
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_569(int iParam0, int iParam1)//Position - 0x154A
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				case 1:
					return 1;
					break;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				case 1:
					return 4;
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				case 1:
					return 7;
					break;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				case 1:
					return 9;
					break;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_570(int iParam0, int iParam1)//Position - 0x18EE
{
	return BitTest(Global_113386.f_1.f_120[iParam0], iParam1);
}

void func_571(var uParam0)//Position - 0x1905
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_LABELS");
	__LIB_0__::func_478("H_CRW_NAME" /* GXT: Name */);
	__LIB_0__::func_478("H_CRW_TYPE" /* GXT: Expertise */);
	__LIB_0__::func_478("H_CRW_SKILLS" /* GXT: Skills */);
	switch (*uParam0)
	{
		case 0:
			__LIB_0__::func_478("H_LBL_JWL" /* GXT: JEWEL STORE */);
			break;
		case 1:
			__LIB_0__::func_478("H_LBL_DOC" /* GXT: LS PORT */);
			break;
		case 2:
			__LIB_0__::func_478("H_LBL_RUR" /* GXT: PALETO */);
			break;
		case 3:
			__LIB_0__::func_478("H_LBL_AGN" /* GXT: BUREAU */);
			break;
		case 4:
			__LIB_0__::func_478("H_LBL_FA" /* GXT: BIG SCORE A */);
			__LIB_0__::func_478("H_LBL_FB" /* GXT: BIG SCORE B */);
			break;
	}
	if (*uParam0 != 1)
	{
		__LIB_0__::func_478("H_LBL_CRW" /* GXT: CREW */);
	}
	__LIB_0__::func_478("H_LBL_TODO" /* GXT: TODO */);
	if (*uParam0 != 2)
	{
		__LIB_0__::func_478("H_LBL_APP" /* GXT: APPROACH */);
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_0__::func_478("H_LBL_J1" /* GXT: CCTV */);
			__LIB_0__::func_478("H_LBL_J2" /* GXT: VENT */);
			__LIB_0__::func_478("H_LBL_J3" /* GXT: ALARM */);
			__LIB_0__::func_478("H_LBL_J4" /* GXT: TUNNEL */);
			__LIB_0__::func_478("HC_J_IMPACT" /* GXT: LOUD */);
			__LIB_0__::func_478("HC_J_STEALTH" /* GXT: SMART */);
			break;
		case 1:
			__LIB_0__::func_478("HC_D_BLOW_UP" /* GXT: FREIGHTER */);
			__LIB_0__::func_478("HC_D_DEEP_SEA" /* GXT: OFFSHORE */);
			break;
		case 2:
			__LIB_0__::func_478("H_LBL_R1" /* GXT: plan A */);
			__LIB_0__::func_478("H_LBL_R2" /* GXT: plan B? */);
			__LIB_0__::func_478("H_LBL_R3" /* GXT: 67 secs */);
			__LIB_0__::func_478("H_LBL_R4" /* GXT: 8+ Cops */);
			__LIB_0__::func_478("H_LBL_R5" /* GXT: 4 Cars */);
			__LIB_0__::func_478("H_LBL_R6" /* GXT: Banker's wife */);
			__LIB_0__::func_478("H_LBL_R7" /* GXT: $$$ */);
			__LIB_0__::func_478("H_LBL_R8" /* GXT: Need military grade hardware */);
			__LIB_0__::func_478("H_LBL_R9" /* GXT: 8/10 Smash it! */);
			__LIB_0__::func_478("H_LBL_R10" /* GXT: Military Hardware Route */);
			__LIB_0__::func_478("H_LBL_R11" /* GXT: Every 2 or 3hrs */);
			__LIB_0__::func_478("H_LBL_R12" /* GXT: BOAT */);
			break;
		case 3:
			__LIB_0__::func_478("H_LBL_A1" /* GXT: Davis fire station */);
			__LIB_0__::func_478("H_LBL_A2" /* GXT: floor 53 */);
			__LIB_0__::func_478("H_LBL_A3" /* GXT: Bomb */);
			__LIB_0__::func_478("H_LBL_A4" /* GXT: Drive 10 */);
			__LIB_0__::func_478("H_LBL_A5" /* GXT: 83QSL722 */);
			__LIB_0__::func_478("HC_A_FIRETRUCK" /* GXT: FIRE CREW */);
			__LIB_0__::func_478("HC_A_HELICOPTER" /* GXT: ROOF ENTRY */);
			break;
		case 4:
			__LIB_0__::func_478("H_LBL_F1" /* GXT: DROP-OFF */);
			__LIB_0__::func_478("H_LBL_F2" /* GXT: HOLE */);
			__LIB_0__::func_478("H_LBL_F3" /* GXT: SECURITY */);
			__LIB_0__::func_478("H_LBL_F4" /* GXT: GETAWAY */);
			__LIB_0__::func_478("H_LBL_F5" /* GXT: TUNNEL AMBUSH */);
			__LIB_0__::func_478("HC_F_TRAFFCONT" /* GXT: SUBTLE */);
			__LIB_0__::func_478("HC_F_HELI" /* GXT: OBVIOUS */);
			break;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_572(var uParam0)//Position - 0x1B07
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_573(int iParam0)//Position - 0x1E2E
{
	return BitTest(Global_113386.f_1.f_118, iParam0);
}

var func_574(int iParam0)//Position - 0x1FA0
{
	return Global_96316[iParam0 /*5*/].f_1;
}

char* func_575(int iParam0, int iParam1)//Position - 0x20C0
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1" /* GXT: Max Health */;
					break;
				case 1:
					return "HC_STA_G2" /* GXT: Accuracy */;
					break;
				case 2:
					return "HC_STA_G3" /* GXT: Shoot Rate */;
					break;
				case 3:
					return "HC_STA_G4" /* GXT: Weapon Choice */;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1" /* GXT: Sys Knowledge */;
					break;
				case 1:
					return "HC_STA_H2" /* GXT: Decryption Skill */;
					break;
				case 2:
					return "HC_STA_H3" /* GXT: Access Speed */;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1" /* GXT: Driving Skill */;
					break;
				case 1:
					return "HC_STA_D2" /* GXT: Composure */;
					break;
				case 2:
					return "HC_STA_D3" /* GXT: Vehicle Choice */;
					break;
			}
			break;
	}
	return "ERROR!";
}

char* func_576(int iParam0)//Position - 0x22D2
{
	switch (Global_96316[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G" /* GXT: Gunman */;
			break;
		case 2:
			return "HC_TYPE_H" /* GXT: Hacker */;
			break;
		case 3:
			return "HC_TYPE_D" /* GXT: Driver */;
			break;
	}
	return "ERROR!";
}

void func_577(var uParam0, int iParam1)//Position - 0x240C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_578(var uParam0)//Position - 0x2509
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	HUD::CLEAR_HELP(false);
}

void func_579(int iParam0)//Position - 0x57C1
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_113386.f_9085.f_99.f_205[7];
			if (iVar0 == 1)
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_JEWEL_STEALTH"), false, true);
			}
			break;
		case 1:
			iVar0 = Global_113386.f_9085.f_99.f_205[8];
			if (iVar0 == 3)
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_DOCKS_SINK_SHIP"), false, true);
			}
			break;
		case 3:
			iVar0 = Global_113386.f_9085.f_99.f_205[10];
			if (iVar0 == 6)
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BUREAU_FIRECREW"), false, true);
			}
			break;
		case 4:
			iVar0 = Global_113386.f_9085.f_99.f_205[11];
			if (iVar0 == 8)
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), true, true);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("SP_HEIST_CHOSE_BIGS_TRAFFIC"), false, true);
			}
			break;
	}
}

void func_580(int iParam0)//Position - 0x5D01
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 0);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 1);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 2);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 3);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 4);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 5);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 6);
			break;
		case 2:
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 7);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 8);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 9);
			break;
		case 3:
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 10);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 11);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 12);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 13);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 14);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 15);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 16);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 17);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 18);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 19);
			MISC::CLEAR_BIT(&(Global_113386.f_1.f_117), 20);
			break;
	}
}

void func_581()//Position - 0x60B2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		__LIB_9__::func_608(iVar0);
		iVar0++;
	}
	Global_113386.f_20410.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_582(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x612E
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = uParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_583(var uParam0)//Position - 0x79328
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_413 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_413));
	}
	if (uParam0->f_414 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_414));
	}
	HUD::CLEAR_ADDITIONAL_TEXT(5, false);
	MISC::CLEAR_BIT(&Global_96451, *uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
}

void func_584(var uParam0)//Position - 0x793D9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_33)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_428[iVar0]));
		}
		iVar0++;
	}
}

void func_585(var uParam0)//Position - 0x794E6
{
	if (!AUDIO::HAS_LOADED_SP_DATA_SET())
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_272), 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1);
	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_413 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_268));
	uParam0->f_414 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	MISC::SET_BIT(&Global_96449, *uParam0);
	MISC::SET_BIT(&(uParam0->f_449), 0);
}

void func_586(var uParam0)//Position - 0x79773
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_117)
	{
		uVar2 = uParam0->f_1.f_186[iVar0];
		bVar3 = BitTest(Global_113386.f_1.f_120[iVar1], uVar2);
		if (uParam0->f_1.f_141[iVar0 /*2*/] == 0 && uParam0->f_1.f_141[iVar0 /*2*/].f_1 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[iVar0 /*2*/].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar0++;
	}
}

int func_587(var uParam0)//Position - 0x79992
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_413))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_414))
	{
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(5))
	{
		return 0;
	}
	if (AUDIO::HAS_LOADED_SP_DATA_SET())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	MISC::SET_BIT(&Global_96451, *uParam0);
	return 1;
}

void func_588(var uParam0)//Position - 0x79CF8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_589(var uParam0, int iParam1)//Position - 0x79DBF
{
	struct<3> Var0;
	float fVar1;
	*uParam0 = iParam1;
	Var0 = { Global_96387[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_96387[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { Var0 };
	uParam0->f_404 = fVar1;
	uParam0->f_405 = { Var0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar1))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar1)))) };
	uParam0->f_408 = { -0.85f, 0f, fVar1 };
	MISC::SET_BIT(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 1);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
}

void func_590(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x7A034
{
	struct<2> Var0;
	if (uParam0->f_369 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			MISC::SET_BIT(&(uParam0->f_370), uParam0->f_369);
		}
		uParam0->f_369++;
	}
}

void func_591(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x7A0AD
{
	struct<8> Var0;
	if (uParam0->f_209 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		MemCopy(&(uParam0->f_211[uParam0->f_209 /*4*/]), {Var0}, 4);
		uParam0->f_209++;
	}
}

void func_592(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7A0FD
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117++;
	}
}

void func_593(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)//Position - 0x7A14D
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { Var0 };
	uParam0->f_20[1 /*4*/] = { Var1 };
	uParam0->f_108[0 /*4*/] = { Var2 };
	uParam0->f_108[1 /*4*/] = { Var3 };
	uParam0->f_280[1 /*2*/] = { Var4 };
	uParam0->f_280[2 /*2*/] = { Var5 };
	uParam0->f_280[0 /*2*/] = { Var6 };
	uParam0->f_280[3 /*2*/] = { Var7 };
}

void func_594(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x7A1F1
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
}

void func_595(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x7A20B
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
}

void func_596(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, struct<3> Param11, struct<3> Param12)//Position - 0x7A2D9
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_268), sParam2, 16);
	StringCopy(&(uParam0->f_272), sParam3, 16);
	StringCopy(&(uParam0->f_276), sParam4, 8);
	StringCopy(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { Param11 };
	uParam0->f_397 = { Param12 };
}

char* func_597(int iParam0)//Position - 0x228C
{
	return __LIB_29__::func_575(2, iParam0);
}

char* func_598(int iParam0)//Position - 0x232B
{
	return __LIB_29__::func_575(1, iParam0);
}

void func_599(var uParam0, int iParam1, bool bParam2)//Position - 0x2493
{
	int iVar0;
	if (!BitTest(Global_96470[iParam1 /*19*/].f_18, bParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(Global_96470[iParam1 /*19*/].f_7[bParam2 /*2*/]), ""))
		{
			__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, Global_96470[iParam1 /*19*/].f_7[bParam2 /*2*/], 1);
			MISC::SET_BIT(&(Global_96470[iParam1 /*19*/].f_18), bParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_96470[iParam1 /*19*/].f_7[bParam2 /*2*/]), &(Global_96470[iVar0 /*19*/].f_7[bParam2 /*2*/])))
				{
					MISC::SET_BIT(&(Global_96470[iVar0 /*19*/].f_18), bParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_600(var uParam0, int iParam1)//Position - 0x4EEB
{
	if (!__LIB_0__::func_75())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (BitTest(Global_113386.f_1.f_119, 14))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[14 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							__LIB_29__::func_566(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 14);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 13:
					if (BitTest(Global_113386.f_1.f_119, 16))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[16 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							__LIB_29__::func_566(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 16);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 12:
					if (BitTest(Global_113386.f_1.f_119, 15))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[15 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							__LIB_29__::func_566(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 15);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				case 11:
					if (BitTest(Global_113386.f_1.f_119, 17))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[17 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							__LIB_29__::func_566(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113386.f_1.f_119), 17);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_601(var uParam0, bool bParam1)//Position - 0x50F7
{
	if (!BitTest(uParam0->f_463, bParam1))
	{
		if (!BitTest(Global_113386.f_1.f_119, bParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_304[bParam1 /*2*/]), ""))
			{
				__LIB_29__::func_566(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[bParam1 /*2*/], 1);
				MISC::SET_BIT(&(Global_113386.f_1.f_119), bParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (bParam1)
					{
						case 1:
							if (BitTest(Global_113386.f_1.f_117, 0))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 10:
							if (BitTest(Global_113386.f_1.f_117, 1))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				case 3:
					switch (bParam1)
					{
						case 12:
							if (BitTest(Global_113386.f_1.f_117, 3))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							}
							break;
						case 9:
							if (BitTest(Global_113386.f_1.f_117, 6))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							}
							break;
						case 1:
							if (BitTest(Global_113386.f_1.f_117, 0))
							{
								if (BitTest(Global_113386.f_1.f_117, 7))
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113386.f_1.f_117, 7))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						case 10:
							if (BitTest(Global_113386.f_1.f_117, 1))
							{
								if (BitTest(Global_113386.f_1.f_117, 8))
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113386.f_1.f_117, 8))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							}
							break;
						case 6:
							if (BitTest(Global_113386.f_1.f_117, 4))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 7:
							if (BitTest(Global_113386.f_1.f_117, 2))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
						case 8:
							if (BitTest(Global_113386.f_1.f_117, 5))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							}
							break;
					}
					break;
				case 4:
					switch (bParam1)
					{
						case 12:
							if (BitTest(Global_113386.f_1.f_117, 15))
							{
								if (BitTest(Global_113386.f_1.f_117, 3))
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
								}
							}
							break;
						case 7:
							if (BitTest(Global_113386.f_1.f_117, 2))
							{
								if (BitTest(Global_113386.f_1.f_117, 14))
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
								}
							}
							else if (BitTest(Global_113386.f_1.f_117, 14))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							}
							break;
						case 9:
							if (BitTest(Global_113386.f_1.f_117, 18))
							{
								if (BitTest(Global_113386.f_1.f_117, 6))
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
								}
							}
							break;
						case 4:
							if (BitTest(Global_113386.f_1.f_117, 17))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						case 5:
							if (BitTest(Global_113386.f_1.f_117, 12))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							}
							break;
						case 1:
							if (BitTest(Global_113386.f_1.f_117, 10))
							{
								if (BitTest(Global_113386.f_1.f_117, 0))
								{
									if (BitTest(Global_113386.f_1.f_117, 7))
									{
										__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 10:
							if (BitTest(Global_113386.f_1.f_117, 11))
							{
								if (BitTest(Global_113386.f_1.f_117, 1))
								{
									if (BitTest(Global_113386.f_1.f_117, 8))
									{
										__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									}
									else
									{
										__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
									}
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 3:
							if (BitTest(Global_113386.f_1.f_117, 13))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
						case 6:
							if (BitTest(Global_113386.f_1.f_117, 19))
							{
								if (BitTest(Global_113386.f_1.f_117, 4))
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 8:
							if (BitTest(Global_113386.f_1.f_117, 16))
							{
								if (BitTest(Global_113386.f_1.f_117, 5))
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								}
								else
								{
									__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
								}
							}
							break;
						case 13:
							if (BitTest(Global_113386.f_1.f_117, 20))
							{
								__LIB_29__::func_566(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		MISC::SET_BIT(&(uParam0->f_463), bParam1);
	}
}

char* func_602(int iParam0)//Position - 0x7750
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE" /* GXT: Chef */;
			break;
		case 1:
			return "CM_HSTCHR" /* GXT: Christian Feltz */;
			break;
		case 2:
			return "CM_HSTDAR" /* GXT: Daryl Johns */;
			break;
		case 3:
			return "CM_HSTEDD" /* GXT: Eddie Toh */;
			break;
		case 4:
			return "CM_HSTGUS" /* GXT: Gustavo Mota */;
			break;
		case 5:
			return "CM_HSTHUG" /* GXT: Hugh Welsh */;
			break;
		case 6:
			return "CM_HSTKRM" /* GXT: Karim Denz */;
			break;
		case 7:
			return "CM_HSTKAR" /* GXT: Karl Abolaji */;
			break;
		case 8:
			return "CM_HSTNOR" /* GXT: Norm Richards */;
			break;
		case 9:
			return "CM_HSTPAC" /* GXT: Packie McReary */;
			break;
		case 10:
			return "CM_HSTPAI" /* GXT: Paige Harris */;
			break;
		case 11:
			return "CM_HSTRIC" /* GXT: Rickie Lukens */;
			break;
		case 12:
			return "CM_HSTTAL" /* GXT: Taliana Martinez */;
			break;
	}
	return "ERROR!";
}

int func_603(int iParam0)//Position - 0x7833
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return BitTest(Global_113386.f_26434.f_1, iParam0);
	}
	return 0;
}

void func_604(int iParam0, bool bParam1)//Position - 0x1139C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_78315 == iParam0)
		{
			Global_78316 = iParam0;
		}
	}
	else if (Global_78316 == iParam0)
	{
		Global_78316 = -1;
	}
}

Vector3 func_605(var uParam0, var uParam1)//Position - 0x21DA3
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	__LIB_29__::func_568(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_404;
	Var7 = { uParam0->f_401 };
	Var7 = { Var7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return Var7;
}

void func_606(var uParam0)//Position - 0x21EFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_209)
	{
		if (__LIB_29__::func_570(iVar0, uParam0->f_1.f_248[iVar2]))
		{
			iVar3 = 0;
			if (__LIB_29__::func_570(iVar0, uParam0->f_1.f_258[iVar2]))
			{
				iVar3 = 1;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			__LIB_0__::func_478(&(uParam0->f_1.f_211[iVar2 /*4*/]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar1++;
		}
		iVar2++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (__LIB_29__::func_570(*uParam0, uParam0->f_1.f_210))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_607(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22A58
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33++;
	}
}

void func_608(var uParam0, int iParam1, char* sParam2)//Position - 0x22B3C
{
	struct<2> Var0;
	StringCopy(&Var0, sParam2, 8);
	if (MISC::ARE_STRINGS_EQUAL(sParam2, ""))
	{
		return;
	}
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
}

void func_609(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x22B67
{
	struct<2> Var0;
	struct<2> Var1;
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { Var0 };
	if (!MISC::ARE_STRINGS_EQUAL(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { Var1 };
				break;
			case 13:
				uParam0->f_304[16 /*2*/] = { Var1 };
				break;
			case 12:
				uParam0->f_304[15 /*2*/] = { Var1 };
				break;
			case 11:
				uParam0->f_304[17 /*2*/] = { Var1 };
				break;
			default:
				break;
			}
	}
}

int func_610(int iParam0, int iParam1)//Position - 0xCF50
{
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1975224[iParam0 /*53*/].f_5.f_1, 0);
			case 1:
				return BitTest(Global_1975224[iParam0 /*53*/].f_5.f_1, 3);
			case 2:
				return BitTest(Global_1975224[iParam0 /*53*/].f_5.f_1, 4);
			case 3:
				return BitTest(Global_1975224[iParam0 /*53*/].f_5.f_1, 2);
			}
		default:
	}
	return 0;
}

int func_611(int iParam0)//Position - 0xD2EF
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 15);
	}
	return 0;
}

int func_612(int iParam0)//Position - 0xD384
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 7);
	}
	return 0;
}

int func_613(int iParam0)//Position - 0xD3A2
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 6);
	}
	return 0;
}

int func_614(int iParam0)//Position - 0xD3C0
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 5);
	}
	return 0;
}

int func_615(int iParam0)//Position - 0xD3DE
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 4);
	}
	return 0;
}

int func_616(int iParam0)//Position - 0xD472
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 3);
	}
	return 0;
}

int func_617(int iParam0)//Position - 0xD490
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 2);
	}
	return 0;
}

int func_618(int iParam0)//Position - 0xD4AE
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 1);
	}
	return 0;
}

int func_619(int iParam0)//Position - 0xD4CC
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 0);
	}
	return 0;
}

int func_620(int iParam0)//Position - 0xD560
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 11);
	}
	return 0;
}

int func_621(int iParam0)//Position - 0xD57F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 10);
	}
	return 0;
}

int func_622(int iParam0)//Position - 0xD59E
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 9);
	}
	return 0;
}

int func_623(int iParam0)//Position - 0xD5BD
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 8);
	}
	return 0;
}

int func_624(int iParam0)//Position - 0xD5DC
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 16);
	}
	return 0;
}

int func_625(int iParam0)//Position - 0xD612
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5, 14);
	}
	return 0;
}

bool func_626(var uParam0)//Position - 0xE30A
{
	return uParam0->f_707;
}

void func_627(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0xE7D4
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = uParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = uParam3;
	uParam0->f_18 = uParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

char* func_628(var uParam0)//Position - 0xF25C
{
	return "HS4_PAVEL";
}

char* func_629(var uParam0)//Position - 0xF271
{
	return "HS4PAAU";
}

void func_630(var uParam0)//Position - 0xF5E9
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_631(int iParam0, bool bParam1)//Position - 0x10C6A
{
	var uVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	if (bParam1)
	{
		uVar0[0] = Global_262145.f_29754[iParam0];
		uVar0[1] = Global_262145.f_29779[iParam0];
		uVar0[2] = Global_262145.f_29804[iParam0];
		uVar0[3] = Global_262145.f_29829[iParam0];
	}
	else
	{
		uVar0[0] = Global_262145.f_29854[iParam0];
		uVar0[1] = Global_262145.f_29863[iParam0];
		uVar0[2] = Global_262145.f_29872[iParam0];
		uVar0[3] = Global_262145.f_29881[iParam0];
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		fVar1 = (fVar1 + uVar0[iVar4]);
		iVar4++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		fVar2 = (fVar2 + uVar0[iVar4]);
		if (fVar3 < fVar2)
		{
			iVar5 = iVar4;
			return iVar5;
		}
		iVar4++;
	}
	return -1;
}

int func_632()//Position - 0x10E67
{
	if (Global_262145.f_29909 /* Tunable: H4_TARGET_WEIGHTING_POSIX_TIME */ == -1)
	{
		return 0;
	}
	if (BitTest(Global_1976921.f_10, 21))
	{
		return 0;
	}
	return 1;
}

int func_633(int iParam0)//Position - 0x1109D
{
	if (iParam0 == -1 || iParam0 == 11)
	{
		return 0;
	}
	return Global_262145.f_29921[iParam0];
}

void func_634(int iParam0, int iParam1)//Position - 0x1D8D6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_CURRENT_SELECTION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_635(int iParam0)//Position - 0x1EAF5
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_1, 12);
	}
	return 0;
}

int func_636(int iParam0)//Position - 0x1EF30
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_10.f_23;
	}
	return 0;
}

int func_637(int iParam0)//Position - 0x1EF50
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_10.f_22;
	}
	return 0;
}

int func_638(int iParam0)//Position - 0x1EF70
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_10.f_21;
	}
	return 0;
}

int func_639(int iParam0)//Position - 0x1EF90
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_10.f_20;
	}
	return 0;
}

int func_640(int iParam0)//Position - 0x1EFB0
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_10.f_19;
	}
	return 0;
}

float func_641(int iParam0)//Position - 0x1F00A
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_29976 /* Tunable: 1808919381 */;
		case 2:
			return Global_262145.f_29977 /* Tunable: 1759346392 */;
		default:
	}
	return 1f;
}

int func_642(int iParam0)//Position - 0x1F051
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_29970 /* Tunable: IH_PRIMARY_TARGET_VALUE_TEQUILA */;
		case 1:
			return Global_262145.f_29971 /* Tunable: IH_PRIMARY_TARGET_VALUE_PEARL_NECKLACE */;
		case 2:
			return Global_262145.f_29972 /* Tunable: IH_PRIMARY_TARGET_VALUE_BEARER_BONDS */;
		case 3:
			return Global_262145.f_29973 /* Tunable: IH_PRIMARY_TARGET_VALUE_PINK_DIAMOND */;
		case 4:
			return Global_262145.f_29974 /* Tunable: IH_PRIMARY_TARGET_VALUE_MADRAZO_FILES */;
		case 5:
			return Global_262145.f_29975 /* Tunable: IH_PRIMARY_TARGET_VALUE_SAPPHIRE_PANTHER_STATUE */;
		default:
	}
	return 0;
}

Vector3 func_643(int iParam0)//Position - 0x1F3F3
{
	switch (iParam0)
	{
		case 1:
			return 4527.591f, -4526.633f, 3.211f;
		case 2:
			return 5152.974f, -4619.487f, 1.752f;
		case 3:
			return 5155.974f, -5132.699f, 1.312f;
		case 4:
			return 4900.456f, -5210.057f, 1.512f;
		case 5:
			return 4970.79f, -5695.73f, 18.888f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_644(int iParam0)//Position - 0x1F47D
{
	if (iParam0 != -1)
	{
		return Global_1975224[iParam0 /*53*/].f_5.f_34;
	}
	return 0;
}

Vector3 func_645(int iParam0)//Position - 0x1F83D
{
	switch (iParam0)
	{
		case 0:
			return 4534.709f, -4543.447f, 4.53f;
		case 1:
			return 4523.664f, -4511.79f, 4.184f;
		case 2:
			return 4076.849f, -4667.305f, 4.163f;
		case 3:
			return 4505.6f, -4653.089f, 10.456f;
		case 4:
			return 4805.025f, -4315.458f, 6.514f;
		case 5:
			return 5180.197f, -4670.979f, 6.231f;
		case 6:
			return 5098.02f, -4621.306f, 2.594f;
		case 7:
			return 5070.327f, -4638.299f, 2.902f;
		case 8:
			return 4955.743f, -5181.93f, 4.512f;
		case 9:
			return 5216.539f, -5126.448f, 5.984f;
		case 10:
			return 4879.029f, -5112.622f, 1.995f;
		case 11:
			return 4901.985f, -5348.011f, 9.409f;
		case 12:
			return 5362.94f, -5437.508f, 48.491f;
		case 13:
			return 5466.287f, -5232.051f, 27.065f;
		case 14:
			return 4754.99f, -5541.311f, 18.056f;
		case 15:
			return 5326.267f, -5266.071f, 32.237f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_646(int iParam0)//Position - 0x1FA21
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 15);
			return 15;
		}
	}
	return -1;
}

int func_647(int iParam0)//Position - 0x1FA93
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 11);
			return 11;
		}
	}
	return -1;
}

int func_648(int iParam0)//Position - 0x1FB05
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 7);
			return 7;
		}
	}
	return -1;
}

int func_649(int iParam0)//Position - 0x1FB6F
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_5, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_650(int iParam0)//Position - 0x1FBD9
{
	switch (iParam0)
	{
		case 0:
			return 5163.384f, -4995.56f, 11.682f;
		case 1:
			return 4765.362f, -4778.338f, 2.781f;
		case 2:
			return 4502.198f, -4523.357f, 3.396f;
		case 3:
			return 4528.522f, -4536.311f, 6.558f;
		case 4:
			return 5098.933f, -4609.03f, 1.369f;
		case 5:
			return 5060.167f, -4589.7f, 1.9f;
		case 6:
			return 5148.113f, -4616.131f, 1.387f;
		case 7:
			return 5170.703f, -4675.337f, 1.439f;
		case 8:
			return 5116.664f, -5130.588f, 1.143f;
		case 9:
			return 5002.533f, -5125.336f, 1.955f;
		case 10:
			return 4949.935f, -5321.81f, 7.085f;
		case 11:
			return 5012.355f, -5203.456f, 1.516f;
		case 12:
			return 4923.873f, -5273.464f, 4.65f;
		case 13:
			return 5263.995f, -5435.548f, 64.881f;
		case 14:
			return 4886.995f, -5454.333f, 29.731f;
		case 15:
			return 5106.183f, -5524.682f, 53.239f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_651(int iParam0)//Position - 0x1FDBD
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 15);
			return 15;
		}
	}
	return -1;
}

int func_652(int iParam0)//Position - 0x1FE2F
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 11);
			return 11;
		}
	}
	return -1;
}

int func_653(int iParam0)//Position - 0x1FEA1
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 7);
			return 7;
		}
	}
	return -1;
}

int func_654(int iParam0)//Position - 0x1FF0B
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_4, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_655(int iParam0)//Position - 0x1FF75
{
	switch (iParam0)
	{
		case 0:
			return 4896.678f, -4791.297f, 2.59f;
		case 1:
			return 4529.568f, -4703.347f, 3.134f;
		case 2:
			return 4493.661f, -4733.618f, 10.01f;
		case 3:
			return 3895.499f, -4695.022f, 5.547f;
		case 4:
			return 5103.035f, -4681.288f, 7.702f;
		case 5:
			return 5130.433f, -4610.441f, 11.724f;
		case 6:
			return 5109.232f, -4578.338f, 28.711f;
		case 7:
			return 4879.964f, -4487.782f, 9.922f;
		case 8:
			return 4901.395f, -5331.422f, 28.64f;
		case 9:
			return 4862.909f, -5158.419f, 2.283f;
		case 10:
			return 5124.89f, -5097.902f, 2.192f;
		case 11:
			return 4867.519f, -4642.129f, 13.571f;
		case 12:
			return 5568.438f, -5185.942f, 10.22f;
		case 13:
			return 5406.297f, -5170.91f, 31.198f;
		case 14:
			return 5265.993f, -5430.593f, 140.566f;
		case 15:
			return 5611.286f, -5654.516f, 9.051f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_656(int iParam0)//Position - 0x2015C
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 12))
		{
			return 12;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 13))
		{
			return 13;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 14))
		{
			return 14;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 15);
			return 15;
		}
	}
	return -1;
}

int func_657(int iParam0)//Position - 0x201CE
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 8))
		{
			return 8;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 9))
		{
			return 9;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 10))
		{
			return 10;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 11);
			return 11;
		}
	}
	return -1;
}

int func_658(int iParam0)//Position - 0x20240
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 4))
		{
			return 4;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 5))
		{
			return 5;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 6))
		{
			return 6;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 7);
			return 7;
		}
	}
	return -1;
}

int func_659(int iParam0)//Position - 0x202AA
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 0))
		{
			return 0;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 2))
		{
			return 2;
		}
		else
		{
			BitTest(Global_1975224[iParam0 /*53*/].f_5.f_3, 3);
			return 3;
		}
	}
	return -1;
}

Vector3 func_660(int iParam0)//Position - 0x20314
{
	switch (iParam0)
	{
		case 0:
			return 5081.14f, -5758.794f, 15.981f;
		case 1:
			return 5027.032f, -5738.977f, 18.027f;
		case 2:
			return 5008.773f, -5783.208f, 17.99f;
		case 3:
			return 5014.587f, -5751.069f, 29.006f;
		case 4:
			return 5004.83f, -5755.521f, 29.006f;
		case 5:
			return 4995.553f, -5748.032f, 15.002f;
		case 6:
			return 4997.112f, -5745.52f, 15.001f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_661(int iParam0, int iParam1)//Position - 0x203CE
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_18, iParam1);
	}
	return 0;
}

int func_662(int iParam0, int iParam1)//Position - 0x203F1
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_17, iParam1);
	}
	return 0;
}

Vector3 func_663(bool bParam0)//Position - 0x20414
{
	switch (bParam0)
	{
		case 0:
			return 5081.753f, -5754.63f, 15.764f;
		case 1:
			return 5082.945f, -5758.447f, 15.765f;
		case 2:
			return 5029.346f, -5733.933f, 17.81f;
		case 3:
			return 5029.777f, -5737.731f, 17.808f;
		case 4:
			return 5012.031f, -5788.325f, 17.773f;
		case 5:
			return 5006.233f, -5785.789f, 17.771f;
		case 6:
			return 4998.106f, -5752.379f, 14.783f;
		case 7:
			return 5003.947f, -5748.77f, 14.787f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_664(int iParam0, bool bParam1)//Position - 0x204E6
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_665(int iParam0, bool bParam1)//Position - 0x205E2
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_9, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_10, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_11, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_12, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_666(bool bParam0)//Position - 0x20697
{
	switch (bParam0)
	{
		case 0:
			return 4447.822f, -4442.135f, 7.175f;
		case 1:
			return 4448.821f, -4444.858f, 7.182f;
		case 2:
			return 4435.688f, -4446.595f, 4.25f;
		case 3:
			return 4438.332f, -4445.811f, 4.267f;
		case 4:
			return 4506.064f, -4555.47f, 4.095f;
		case 5:
			return 4503.678f, -4556.323f, 4.096f;
		case 6:
			return 5064.635f, -4589.759f, 2.801f;
		case 7:
			return 5067.557f, -4590.849f, 2.795f;
		case 8:
			return 5092.602f, -4680.137f, 2.35f;
		case 9:
			return 5093.195f, -4683.354f, 2.35f;
		case 10:
			return 5091.02f, -4685.678f, 2.351f;
		case 11:
			return 5136.102f, -4613.863f, 2.401f;
		case 12:
			return 5131.834f, -4612.648f, 2.404f;
		case 13:
			return 5329.472f, -5272.372f, 33.13f;
		case 14:
			return 5328.096f, -5270.587f, 33.129f;
		case 15:
			return 5196.664f, -5133.933f, 3.284f;
		case 16:
			return 5196.121f, -5136.333f, 3.285f;
		case 17:
			return 5000.313f, -5163.344f, 2.697f;
		case 18:
			return 5001.3f, -5165.434f, 2.697f;
		case 19:
			return 4959.845f, -5107.064f, 2.911f;
		case 20:
			return 4962.675f, -5106.771f, 2.913f;
		case 21:
			return 4963.856f, -5109.32f, 2.912f;
		case 22:
			return 4926.316f, -5244.514f, 2.461f;
		case 23:
			return 4924.385f, -5245.882f, 2.461f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_667(int iParam0, bool bParam1)//Position - 0x2095C
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 0;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 2;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 3;
		}
	}
	return -1;
}

int func_668(int iParam0, bool bParam1)//Position - 0x20A58
{
	if (iParam0 != -1)
	{
		if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_1, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_2, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_3, bParam1))
		{
			return 1;
		}
		else if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_4, bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_669(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x218FA
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	if (iParam0 != -1)
	{
		switch (iParam1)
		{
			case 0:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_1, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_9, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			case 1:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_2, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_10, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			case 2:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_3, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_11, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			case 3:
				if (!bParam3)
				{
					bVar1 = false;
					while (bVar1 < 24)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_4, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				if (!bParam2)
				{
					bVar1 = false;
					while (bVar1 < 8)
					{
						if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_12, bVar1))
						{
							iVar0++;
						}
						bVar1++;
					}
				}
				break;
			case 4:
				bVar1 = false;
				while (bVar1 < 7)
				{
					if (BitTest(Global_1975224[iParam0 /*53*/].f_5.f_10.f_17, bVar1))
					{
						iVar0++;
					}
					bVar1++;
				}
				break;
			}
	}
	return iVar0;
}

void func_670(var uParam0)//Position - 0x2314E
{
	struct<14> Var0;
	*uParam0 = { Var0 };
}

void func_671(var uParam0)//Position - 0x23183
{
	struct<9> Var0;
	*uParam0 = { Var0 };
}

char* func_672(int iParam0)//Position - 0x17F2
{
	switch (iParam0)
	{
		case 1:
			return "DLC_GR_MOC_Turret_Sounds";
		case 2:
			return "dlc_xm_avngr_turret_Sounds";
		case 3:
			return "DLC_XM17_IAA_Finale_Remote_Turrets_Sounds";
		case 4:
			return "";
		default:
	}
	return "INVALID_TURRET_FIRE_SOUNDS";
}

void func_673(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x6438
{
	HUD::SET_TEXT_SCALE(fParam3, fParam3);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, 150);
	if (bParam4)
	{
		HUD::SET_TEXT_DROPSHADOW(5, 0, 0, 0, 255);
	}
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(0);
}

bool func_674()//Position - 0x85C5
{
	return BitTest(Global_2815059.f_1797, 11);
}

void func_675(var uParam0, int iParam1)//Position - 0x893B
{
	uParam0->f_51 = iParam1;
}

int func_676(var uParam0)//Position - 0xACA3
{
	if (uParam0->f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_677()//Position - 0xB688
{
	if (Global_2825430)
	{
		return 1;
	}
	return 0;
}

void func_678()//Position - 0x272F9
{
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_679()//Position - 0x2EBAF
{
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(500);
	}
}

void func_680()//Position - 0x2720D
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

int func_681(var uParam0, float fParam1)//Position - 0x2AC3C
{
	float fVar0;
	fVar0 = 0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, &fVar0, false, false))
	{
		uParam0->f_2 = fVar0;
		uParam0->f_2 = (uParam0->f_2 + fParam1);
		return 1;
	}
	return 0;
}

void func_682(var uParam0, int iParam1)//Position - 0x2C270
{
	uParam0->f_7 = iParam1;
}

var func_683(int iParam0)//Position - 0x38D2B
{
	return Global_55405.f_25[iParam0];
}

int func_684()//Position - 0x38D3C
{
	return Global_55405.f_24;
}

bool func_685()//Position - 0x38D49
{
	return Global_55405.f_24 > 0;
}

int func_686()//Position - 0x1870
{
	return iLocal_325;
}

bool func_687()//Position - 0xC9CA
{
	return NETWORK::NETWORK_IS_SIGNED_ONLINE();
}

int func_688(float fParam0)//Position - 0x787DE
{
	if (fParam0 > 180f)
	{
		return 3500;
	}
	else if (fParam0 > 120f)
	{
		return 2500;
	}
	else if (fParam0 > 50f)
	{
		return 2000;
	}
	return 1000;
}

int func_689()//Position - 0x7A55C
{
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 38 /*INPUT_PICKUP*/))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_690(int iParam0)//Position - 0x7DE56
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "doe_elk"))
		{
			return DECORATOR::DECOR_GET_BOOL(iParam0, "doe_elk");
		}
	}
	return 0;
}

int func_691(int iParam0)//Position - 0x7E296
{
	if (__LIB_0__::func_43(iParam0))
	{
		if ((Global_113386.f_9085 || Global_3) || __LIB_0__::func_2(0))
		{
			return Global_113386.f_2363.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_692(int iParam0)//Position - 0x8133D
{
	switch (iParam0)
	{
		case 31086:
		case 65079:
			return 1;
			break;
		case 39317:
		case 24532:
			return 2;
			break;
		case 45509:
		case 40269:
		case 24818:
		case 24816:
		case 64729:
		case 10706:
			return 3;
			break;
		case 61163:
		case 26610:
		case 4089:
		case 18905:
		case 37709:
		case 36029:
		case 28252:
		case 58866:
		case 64016:
		case 57005:
		case 7966:
		case 6286:
			return 4;
			break;
		case 63931:
		case 14201:
		case 2108:
		case 7531:
		case 2718:
		case 65245:
		case 36864:
		case 52301:
		case 20781:
		case 45631:
		case 38142:
		case 35502:
			return 7;
			break;
		case 11816:
		case 58271:
		case 51826:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
			return 6;
			break;
		case 0:
		case 57597:
		case 23553:
		case 24817:
		case 17916:
		case 53251:
			return 5;
			break;
	}
	return 5;
}

void func_693(char* sParam0)//Position - 0x83124
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar0 /*104*/]), sParam0))
			{
				HUD::THEFEED_REMOVE_ITEM(Global_113386.f_14141[iVar0 /*104*/].f_16);
			}
		}
		iVar0++;
	}
}

void func_694(int iParam0)//Position - 0x84897
{
	__LIB_0__::func_55();
	Global_78574 = iParam0;
	Global_78573 = 0;
	Global_78576 = 3;
}

void func_695(var uParam0, var uParam1, var uParam2)//Position - 0xB99
{
	if (*uParam0 != -1)
	{
		if (HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0))
		{
			HUD::SET_MP_GAMER_TAG_VISIBILITY(*uParam0, 0, false, 0);
			HUD::REMOVE_MP_GAMER_TAG(*uParam0);
			*uParam1 = 0;
			*uParam2 = 0;
			*uParam0 = -1;
		}
	}
}

int func_696()//Position - 0xDBB
{
	return Global_2726836;
}

bool func_697()//Position - 0x2BB8
{
	return Global_2715699.f_6503;
}

bool func_698()//Position - 0x3A2A
{
	return Global_2715699.f_6502;
}

bool func_699()//Position - 0x4B77
{
	return Global_2715699.f_6501;
}

bool func_700()//Position - 0x6974
{
	return Global_2715699.f_6322;
}

void func_701()//Position - 0x12FCA
{
	Global_2725857 = 1;
}

bool func_702()//Position - 0x12FD7
{
	return Global_2725857;
}

bool func_703()//Position - 0x12FE3
{
	return Global_2725858;
}

bool func_704()//Position - 0x13081
{
	return Global_1931975.f_1766;
}

float func_705(int iParam0)//Position - 0x192C7
{
	int iVar0;
	var uVar1;
	iVar0 = iParam0;
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_706(int iParam0)//Position - 0x1A937
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 3;
			break;
		case 3:
			return 4;
			break;
		case 4:
			return 5;
			break;
		case 5:
			return 6;
			break;
		case 6:
			return 7;
			break;
		case 7:
			return 8;
			break;
		case 8:
			return 9;
			break;
		case 9:
			return 10;
			break;
		case 10:
			return 11;
			break;
		case 11:
			return 12;
			break;
	}
	return 1;
}

int func_707()//Position - 0x1E764
{
	return Global_1574589.f_1;
}

bool func_708()//Position - 0x81163
{
	return Global_2725361;
}

void func_709()//Position - 0x81EC0
{
	Global_2714762.f_732 = 0;
}

void func_710()//Position - 0x81EE4
{
	Global_2714762.f_728 = 0;
}

var func_711()//Position - 0x81EF4
{
	return Global_2714762.f_727;
}

void func_712()//Position - 0x81F12
{
	Global_2714762.f_718 = 1;
}

void func_713(int iParam0)//Position - 0x81F5A
{
	Global_2727818 = iParam0;
}

void func_714(int iParam0)//Position - 0x85810
{
	Global_2727754 = iParam0;
}

bool func_715()//Position - 0x85D14
{
	return Global_2727724;
}

bool func_716()//Position - 0x87EDE
{
	return Global_2714762.f_718;
}

var func_717()//Position - 0x87F1A
{
	return Global_1574931;
}

void func_718(int iParam0)//Position - 0x87F46
{
	Global_1574589.f_1 = iParam0;
}

void func_719()//Position - 0x87F56
{
	Global_2714762.f_701 = 0;
}

var func_720()//Position - 0x87F92
{
	return Global_2714762.f_701;
}

int func_721(int iParam0)//Position - 0x8803F
{
	bool bVar0;
	if (__LIB_0__::func_53())
	{
		bVar0 = NETWORK::NETWORK_CHECK_PRIVILEGES(0, 512, iParam0);
		NETWORK::NETWORK_SET_PRIVILEGE_CHECK_RESULT_NOT_NEEDED();
		return bVar0;
	}
	return 1;
}

void func_722(int iParam0)//Position - 0x88DAC
{
	Global_2676212 = iParam0;
}

void func_723()//Position - 0x88DBA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_2725297[iVar0] = 0;
		Global_2725308[iVar0] = 77061038;
		iVar0++;
	}
}

int func_724()//Position - 0x88DEB
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] != 0)
		{
			Global_1577843 = iVar1;
			iVar0 = 1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_725(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x89438
{
	struct<35> Var0;
	struct<13> Var1;
	if (PLAYER::IS_PLAYER_ONLINE() && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Var1 = { __LIB_0__::func_604(iParam0) };
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1))
		{
			NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var0, 35, &Var1);
			*uParam1 = Var0.f_32;
			*uParam2 = Var0.f_33;
			*uParam3 = Var0.f_34;
			return 1;
		}
	}
	return 0;
}

bool func_726(int iParam0)//Position - 0x5D3
{
	return BitTest(Global_113386.f_9085.f_99.f_219[0], iParam0);
}

void func_727()//Position - 0x1011
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	if (34 > 60)
	{
	}
	iVar2 = 0;
	while (iVar2 < 34)
	{
		if (iVar2 <= 31)
		{
			iVar0 = 9;
			bVar1 = iVar2;
		}
		else
		{
			iVar0 = 10;
			bVar1 = (iVar2 - 32);
		}
		if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_94620[iVar2 /*18*/])))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_94620[iVar2 /*18*/].f_17) > 0)
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_94620[iVar2 /*18*/]));
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
			}
		}
		iVar2++;
	}
	bVar3 = false;
	while (!bVar3)
	{
		bVar3 = true;
		iVar2 = 0;
		while (iVar2 < 34)
		{
			if (iVar2 <= 31)
			{
				iVar0 = 9;
				bVar1 = iVar2;
			}
			else
			{
				iVar0 = 10;
				bVar1 = (iVar2 - 32);
			}
			if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_94620[iVar2 /*18*/].f_17) == 0)
				{
					if (!SCRIPT::HAS_SCRIPT_LOADED(&(Global_94620[iVar2 /*18*/])))
					{
						bVar3 = false;
					}
					else
					{
						SYSTEM::START_NEW_SCRIPT(&(Global_94620[iVar2 /*18*/]), Global_94620[iVar2 /*18*/].f_16);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_94620[iVar2 /*18*/]));
					}
				}
			}
			iVar2++;
		}
		SYSTEM::WAIT(0);
	}
}

void func_728(var uParam0)//Position - 0x1AAA
{
	if (uParam0->f_3 == 5)
	{
		if ((uParam0->f_4 - MISC::GET_GAME_TIMER()) > 6000)
		{
			uParam0->f_4 = MISC::GET_GAME_TIMER() + 6000;
		}
	}
}

void func_729(int iParam0)//Position - 0x861D8
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_96316[iParam0 /*5*/].f_4);
}

void func_730(int iParam0)//Position - 0x982CB
{
	switch (iParam0)
	{
		case 0:
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, false);
			break;
		case 1:
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 0, false);
			break;
		case 2:
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, false);
			break;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
}

void func_731(struct<3> Param0, float fParam1)//Position - 0xA5429
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, Param0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
			}
		}
	}
}

var func_732(int iParam0)//Position - 0xA7890
{
	return BitTest(Global_96451, iParam0);
}

void func_733(bool bParam0, bool bParam1)//Position - 0xA90A9
{
	if (bParam1)
	{
		if (!BitTest(Global_96450, bParam0))
		{
			MISC::SET_BIT(&Global_96450, bParam0);
		}
	}
	else if (BitTest(Global_96450, bParam0))
	{
		MISC::CLEAR_BIT(&Global_96450, bParam0);
	}
}

int func_734(var uParam0, int iParam1)//Position - 0xF05B
{
	int iVar0;
	int iVar1;
	if (!INTERIOR::IS_VALID_INTERIOR(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_763[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_763[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_735()//Position - 0x15800
{
	Global_94619 = 1;
}

int func_736(var uParam0, char* sParam1, int iParam2)//Position - 0x158AD
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_1007 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(sParam1, iParam2);
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_737(var uParam0)//Position - 0x5B8C
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_738(var uParam0)//Position - 0x5BA3
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_739(var uParam0)//Position - 0xC861
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

int func_740(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x133DB
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

void func_741(var uParam0, int iParam1, int iParam2)//Position - 0x14B20
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

void func_742(var uParam0)//Position - 0x14C10
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

int func_743(var uParam0, int iParam1, char* sParam2)//Position - 0x14D31
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

int func_744(int iParam0)//Position - 0x7725F
{
	if (!__LIB_0__::func_43(iParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_2__::func_108(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

Vector3 func_745()//Position - 0x29606
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar0, iVar1) };
		Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(iVar0), 0.35f, 0f, -0.15f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &uVar4, false, false);
		Var3 = { Var2.f_0, Var2.f_1, uVar4 };
	}
	return Var3;
}

int func_746()//Position - 0x22DDE
{
	if ((__LIB_0__::func_3() == -1 || __LIB_0__::func_3() == 999) && !func_190() == 0)
	{
		return 1;
	}
	return 0;
}

void func_747(int iParam0)//Position - 0x168B
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_HEADTRACKING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam0);
		}
	}
}

void func_748(int iParam0, bool bParam1)//Position - 0x21E2A
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == PED::GET_VEHICLE_PED_IS_IN(iParam0, false))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!PED::IS_PED_HEADTRACKING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			if (!bVar0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iParam0))
			{
				TASK::TASK_CLEAR_LOOK_AT(iParam0);
			}
		}
	}
}

void func_749(int* iParam0, bool bParam1)//Position - 0x262E3
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
		}
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

int func_750(int iParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, bool bParam5)//Position - 0x2F126
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		fVar2 = SYSTEM::VDIST(Var1, Param1);
		fVar3 = SYSTEM::VDIST(Var0, Param1);
		if (fVar2 < fParam2)
		{
			if ((fVar3 < fVar2 || !bParam5) && fVar3 < fParam3)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
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
	}
	return 0;
}

void func_751(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3911E
{
	PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam2);
	PED::SET_PED_COMBAT_ABILITY(*uParam0, iParam3);
	PED::SET_PED_COMBAT_RANGE(*uParam0, iParam4);
	PED::SET_PED_ACCURACY(*uParam0, iParam1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, iParam5);
}

void func_752(bool bParam0, int iParam1)//Position - 0x42857
{
	if (!__LIB_0__::func_317(bParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_26__::func_508(bParam0, iParam1));
	}
	else if (bParam0 != 145)
	{
	}
}

int func_753(int iParam0, bool bParam1)//Position - 0x59A8E
{
	if (bParam1)
	{
		if ((iParam0 == joaat("Player_Zero") || iParam0 == joaat("Player_One")) || iParam0 == joaat("Player_Two"))
		{
			return 1;
		}
	}
	else if ((((iParam0 == joaat("Player_Zero") || iParam0 == joaat("Player_One")) || iParam0 == joaat("Player_Two")) || iParam0 == joaat("MP_M_Freemode_01")) || iParam0 == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

struct<16> func_754(int iParam0, int iParam1, int iParam2)//Position - 0x3504
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	char cVar3[32];
	iVar0 = Global_2868353[iParam0 /*3*/][__LIB_0__::func_330(iParam2)];
	iVar1 = Global_2868353[iParam1 /*3*/][__LIB_0__::func_330(iParam2)];
	StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
	StringCopy(&cVar3, STATS::STAT_GET_STRING(iVar1, -1), 32);
	StringConCat(&Var2, &cVar3, 64);
	return Var2;
}

void func_755(bool bParam0)//Position - 0x44E9
{
	__LIB_6__::func_796(424, bParam0, -1, 1);
}

int func_756(int iParam0)//Position - 0xDAAE
{
	if (Global_78315 == iParam0)
	{
		if (Global_78316 == -1)
		{
			if (Global_78314 < MISC::GET_FRAME_COUNT())
			{
				return 1;
			}
		}
	}
	else if (Global_78316 == iParam0)
	{
		return 2;
	}
	return 0;
}

int func_757(int iParam0)//Position - 0x32E
{
	while (!Global_112473[*iParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_758(int iParam0)//Position - 0xA921
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

int func_759(int iParam0)//Position - 0xAA69
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

int func_760(int iParam0)//Position - 0xB2B3
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_761(int iParam0)//Position - 0xBC35
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return 1;
			break;
	}
	return 0;
}

int func_762(var uParam0)//Position - 0xC4C3
{
	float fVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_763(int iParam0, int iParam1)//Position - 0xD8E8
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
		*iParam0 = Global_78301[Global_78312 /*2*/];
		Global_78312++;
		Global_78313 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

void func_764(int iParam0)//Position - 0xD9A9
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_78316 == *iParam0)
	{
		__LIB_29__::func_604(*iParam0, 0);
	}
	if (Global_78315 == *iParam0)
	{
		Global_78315 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_78312)
	{
		if (Global_78301[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_78312 - 2))
	{
		Global_78301[iVar2 /*2*/] = Global_78301[iVar2 + 1 /*2*/];
		Global_78301[iVar2 /*2*/].f_1 = Global_78301[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_78301[(Global_78312 - 1) /*2*/] = -1;
	Global_78301[(Global_78312 - 1) /*2*/].f_1 = 3;
	Global_78312 = (Global_78312 - 1);
	Global_78313 = 1;
	Global_78314 = MISC::GET_FRAME_COUNT();
	*iParam0 = -1;
}

int func_765(int iParam0)//Position - 0xE081
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_766(var uParam0)//Position - 0xE0A1
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_767(int iParam0)//Position - 0xE937
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_768()//Position - 0xECAB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_769(int iParam0, int iParam1)//Position - 0xEE01
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_770(int iParam0)//Position - 0xF1DA
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_771(int iParam0)//Position - 0xF224
{
	int iVar0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0f, false, false, false);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

int func_772()//Position - 0xF674
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-564f, -1758.1f, 16.5f, -419.31f, -1649f, 23f, false, true, true, true);
}

int func_773(var uParam0)//Position - 0xF7DA
{
	uParam0->f_16 = 3;
	uParam0->f_17[0 /*3*/] = { 237.65f, -385.41f, 44.4f };
	uParam0->f_27 = 1;
	return 1;
}

int func_774(int iParam0)//Position - 0x10E9B
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 2);
}

int func_775(int iParam0)//Position - 0x10EC6
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 0);
}

int func_776(int iParam0)//Position - 0x10EF1
{
	if (__LIB_0__::func_567(iParam0))
	{
		return 0;
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_777(var uParam0)//Position - 0x11447
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_778()//Position - 0x1147A
{
	__LIB_0__::func_135("Running start routines.");
	Global_113104++;
}

void func_779(var uParam0)//Position - 0xA66
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_780(int iParam0)//Position - 0xECB
{
	var uVar0;
	char cVar1[24];
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || __LIB_0__::func_52())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

char* func_781(int iParam0)//Position - 0x7279
{
	return "EXT1HELIPILOT";
}

char* func_782(int iParam0)//Position - 0xC8D
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		case 1:
			return "MGDT";
			break;
		case 2:
			return "MGGF";
			break;
		case 3:
			return "OJHU";
			break;
		case 4:
			return "MGOR";
			break;
		case 5:
			return "MGPS";
			break;
		case 6:
			return "MGRP";
			break;
		case 7:
			return "MGSEA";
			break;
		case 8:
			return "MGSTR";
			break;
		case 9:
			return "MGSC";
			break;
		case 10:
			return "MGSP";
			break;
		case 11:
			return "MGSRm";
			break;
		case 12:
			return "OJTX";
			break;
		case 13:
			return "MGTN";
			break;
		case 14:
			return "OJTW";
			break;
		case 15:
			return "OJDA";
			break;
		case 16:
			return "OJDG";
			break;
		case 17:
			return "MGTR";
			break;
		case 18:
			return "MGYG";
			break;
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

Vector3 func_783(int iParam0)//Position - 0x1A3A
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		case 1:
			return 1208.2003f, 174.3914f, 80.1245f;
		case 2:
			return 2463.7935f, 1509.9562f, 35.0349f;
		case 3:
			return -274.6549f, 6633.8984f, 7.1166f;
		case 4:
			return -92.35f, -854.3f, 39.571f;
		case 5:
			return -120.92f, -976.05f, 295.49f;
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		case 9:
			return -1367.5952f, 4381.9434f, 41.132f;
		case 10:
			return 2517.9312f, 4971.7524f, 44.7082f;
		case 11:
			return 1054.5343f, -179.6562f, 70.3066f;
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_784(int iParam0)//Position - 0x217F
{
	switch (iParam0)
	{
		case 0:
			return -1143.5859f, -1859.747f, 208.3878f;
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		case 2:
			return 2041.2306f, 1978.9803f, 585.9358f;
		case 3:
			return 405.2326f, 5705.8867f, 697.2318f;
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		case 6:
			return -1237.4655f, 4526.6606f, 181.7929f;
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		case 9:
			return -1286.9258f, 3660.2034f, 1076.051f;
		case 10:
			return 1022.1777f, 3975.7383f, 1362.5334f;
		case 11:
			return 1608.5526f, -434.5186f, 1321.9155f;
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_785(int iParam0)//Position - 0x2960
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

bool func_786()//Position - 0x2D1C
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_787()//Position - 0x35E8
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_788(int iParam0)//Position - 0x3A1F
{
	iLocal_59 = iParam0;
}

int func_789(int iParam0)//Position - 0x3ED5
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

bool func_790(int iParam0)//Position - 0x4033
{
	return Global_112473[iParam0 /*10*/].f_1;
}

int func_791(int iParam0)//Position - 0x4094
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

int func_792()//Position - 0xE849
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-1495.4958f, 519.46063f, 100.8889f, -1429.1115f, 468.1972f, 120.9696f, false, true, true, true);
}

void func_793(bool bParam0)//Position - 0xEAB1
{
	PATHFIND::SET_ROADS_IN_AREA(-1594.8999f, 457.8715f, -100f, -1366.7844f, 635.579f, 900f, bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1473.5175f, 508f, 115.601f, -1471.0171f, 514.829f, 120f, bParam0, true);
}

int func_794(var uParam0)//Position - 0x13765
{
	if (__LIB_10__::func_715(uParam0))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			STREAMING::REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

int func_795()//Position - 0x33D82
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-722.7994f, 14.8417f, 37.4501f, -661.751f, 56.4227f, 42.8989f, false, true, true, true);
}

int func_796(var uParam0)//Position - 0x3442E
{
	uParam0->f_16 = 5;
	uParam0->f_17[0 /*3*/] = { 513.48f, 3081.22f, 38.84f };
	uParam0->f_17[1 /*3*/] = { 530.53f, 3073f, 44.13f };
	uParam0->f_24 = 9.25f;
	uParam0->f_27 = 0;
	StringCopy(&(uParam0->f_9), "EP_7_RCM", 24);
	return 1;
}

int func_797()//Position - 0xF15E
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(744.7144f, 1254.7257f, 357.0291f, 847.8754f, 1342.2434f, 370.0352f, false, true, true, true);
}

int func_798()//Position - 0xF9C5
{
	int iVar0;
	iVar0 = 0;
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.71484f, 1270.1383f, 359.28552f, 6f, joaat("prop_facgate_03_l"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_l"), 801.71484f, 1270.1383f, 359.28552f, true, 0f, false);
		iVar0++;
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9195f, 1280.9197f, 360.72723f, 6f, joaat("prop_facgate_03_r"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_r"), 802.9195f, 1280.9197f, 360.72723f, true, 0f, false);
		iVar0++;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_799(bool bParam0)//Position - 0x2AFB
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_800(int iParam0)//Position - 0x2A65
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			__LIB_10__::func_604(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		__LIB_7__::func_249(&iLocal_60);
		iLocal_59 = 9;
	}
}

int func_801(bool bParam0, bool bParam1)//Position - 0xFE7E
{
	int iVar0;
	iVar0 = 0;
	if (bParam0)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1502457334, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1502457334, 3, false, true);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1994188940, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1994188940, 3, false, true);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_802(bool bParam0, bool bParam1)//Position - 0xFEEC
{
	int iVar0;
	iVar0 = 0;
	if (bParam0)
	{
		ENTITY::CREATE_FORCED_OBJECT(-1107.01f, 289.38f, 64.76f, 5f, joaat("prop_lrggate_01c_l"), false);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(904342475, 1f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, false, true);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		ENTITY::CREATE_FORCED_OBJECT(-1101.62f, 290.36f, 64.76f, 5f, joaat("prop_lrggate_01c_r"), false);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-795418380, -0.9f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-795418380, 4, false, true);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_803(bool bParam0, bool bParam1)//Position - 0x105E8
{
	int iVar0;
	iVar0 = 0;
	if (bParam0)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(904342475, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, false, true);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (bParam1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-795418380, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(904342475, 4, false, true);
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iVar0 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_804(struct<2> Param0, float fParam1, struct<2> Param2, Vector3 vParam3, float fParam4)//Position - 0xD93F
{
	if (fParam4 < 0f)
	{
		fParam4 = 0f;
	}
	if (MISC::ABSF((Param0.f_0 - Param2.f_0)) <= fParam4)
	{
		if (MISC::ABSF((Param0.f_1 - Param2.f_1)) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_805()//Position - 0xECC9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_806(int iParam0, int iParam1)//Position - 0xEE1F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_807()//Position - 0x203C
{
	iLocal_46++;
}

void func_808(int iParam0)//Position - 0x27F9
{
	if (iParam0 != 263)
	{
		__LIB_10__::func_604(iParam0, 1, 0);
	}
}

void func_809(struct<3> Param0)//Position - 0x58C
{
	Global_1574589.f_6 = { Param0 };
}

int func_810(int iParam0)//Position - 0xA288
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		case 2:
			iVar0 = joaat("ninef");
			break;
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_811(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0xA2DD
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.12622f, -1896.2614f, 20.683289f };
			*uParam2 = { -295.06534f, -1405.5297f, 35.314598f };
			*fParam3 = 300f;
			break;
		case 1:
			*uParam1 = { 273.18497f, 335.29688f, 105.57044f };
			*uParam2 = { 412.28766f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		case 2:
			*uParam1 = { -823.7157f, -2588.0005f, 13.769104f };
			*uParam2 = { -801.33563f, -2464.0066f, 12.429126f };
			*fParam3 = 30f;
			break;
		case 3:
			*uParam1 = { 791.82574f, -1423.8627f, 24.179544f };
			*uParam2 = { 783.167f, -1015.648f, 50.241344f };
			*fParam3 = 200f;
			break;
		case 4:
			*uParam1 = { -1084.0304f, -1165.7235f, 0.150211f };
			*uParam2 = { -1029.2129f, -1134.5809f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

void func_812(var uParam0, bool bParam1, int iParam2)//Position - 0x1E702
{
	int iVar0;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (bParam1)
		{
			MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iVar0);
		}
		else
		{
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("npcphone", false);
				HUD::LINK_NAMED_RENDERTARGET(joaat("prop_npc_phone"));
			}
			iVar0 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("npcphone");
		}
		HUD::SET_TEXT_RENDER_ID(iVar0);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
	}
}

int func_813(var uParam0)//Position - 0x1E7A8
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		return 1;
	}
	return 0;
}

int func_814(int iParam0)//Position - 0x287D
{
	return 0;
	return 1;
}

int func_815()//Position - 0x33DE
{
	struct<3> Var0;
	float fVar1;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar1 = SYSTEM::VDIST2(Var0, Local_56);
	if (fVar1 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar1 < (80f * 80f))
	{
		if (CAM::IS_SPHERE_VISIBLE(Local_56, 5f))
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

void func_816(int iParam0, bool bParam1)//Position - 0xD3A
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 13))
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 13);
	}
}

void func_817(int iParam0)//Position - 0x2373
{
	iLocal_67 = iParam0;
}

void func_818(int iParam0)//Position - 0xD3BF
{
	if (iParam0 != -1)
	{
		Global_32020[iParam0 /*11*/].f_5 = 0;
		if (Global_32020[iParam0 /*11*/].f_2 && Global_32020[iParam0 /*11*/].f_7 == 0)
		{
			Global_32020[iParam0 /*11*/].f_7 = 1;
		}
		Global_32020[iParam0 /*11*/].f_8 = 0;
	}
}

void func_819(var uParam0, int iParam1)//Position - 0x19819
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				if (uParam0->f_763[iVar0 /*5*/].f_1)
				{
					INTERIOR::UNPIN_INTERIOR(iParam1);
					__LIB_11__::func_694(&(uParam0->f_763[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_763[iVar0 /*5*/].f_2 = 1;
					uParam0->f_1007 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

int func_820(var uParam0, char* sParam1)//Position - 0x1CFF1
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_904)
	{
		if (uParam0->f_904[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_904[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_904[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_904[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE(sParam1);
		uParam0->f_904[iVar1 /*5*/] = 1;
		uParam0->f_904[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_904[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_821(var uParam0, char* sParam1)//Position - 0x3D4D7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_904)
	{
		if (uParam0->f_904[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_904[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_904[iVar0 /*5*/].f_1)
				{
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(sParam1);
					__LIB_11__::func_694(&(uParam0->f_904[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_904[iVar0 /*5*/].f_2 = 1;
					uParam0->f_1007 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

int func_822(int iParam0)//Position - 0x485A8
{
	if ((iParam0 == 1 || iParam0 == 4) || iParam0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_823(int iParam0)//Position - 0x91411
{
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
	}
	else
	{
		Global_113386.f_14051[iParam0 /*20*/].f_18 = 0;
		Global_113386.f_14051[iParam0 /*20*/].f_17 = 0;
	}
}

void func_824()//Position - 0x9B1CA
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 > (Global_60327 + 120000) || Global_60327 == -1)
	{
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			Global_63139 = 1;
			return;
		}
		if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			Global_63139 = 1;
			return;
		}
		if (!Global_60326)
		{
			if (STATS::STAT_COMMUNITY_START_SYNCH())
			{
				Global_60327 = iVar0;
				Global_60326 = 1;
			}
		}
	}
}

void func_825(int iParam0, bool bParam1)//Position - 0x4B2
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_113386.f_24995), iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_24995), iVar0);
		}
	}
	else
	{
		iVar0 = (iVar0 - 31);
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_113386.f_24995.f_1), iVar0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_24995.f_1), iVar0);
		}
	}
}

Vector3 func_826(int iParam0, int iParam1)//Position - 0x1D65
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.2743f, -3026.2754f, 4.90197f;
			}
			else
			{
				return 1026.7053f, -3026.0515f, 13.3323f;
			}
			break;
		case 1:
			if (iParam1 == 1)
			{
				return -1040.9789f, -2743.5093f, 12.94983f;
			}
			else
			{
				return -1048.6035f, -2734.218f, 12.8895f;
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.3145f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.5112f, 7.74f;
			}
			break;
		case 3:
			return -917.6909f, -2527.3843f, 22.3218f;
			break;
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				return 1509.7421f, -2126.0376f, 75.21973f;
			}
			else
			{
				return 1509.0994f, -2120.551f, 75.61f;
			}
			break;
		case 6:
			return 76.0032f, -1970.4752f, 20.1302f;
			break;
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.6144f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				return -1377.7656f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.4912f, -1404.3735f, 1.7273f;
			}
			break;
		case 9:
			return 2864.8079f, -1372.8402f, 1.3151f;
			break;
		case 10:
			return -1035.8115f, -1273.0769f, 0.8919f;
			break;
		case 11:
			return -1821.1364f, -1201.3599f, 18.1698f;
			break;
		case 12:
			return 643.0116f, -1035.6504f, 35.8891f;
			break;
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		case 14:
			if (iParam1 == 1)
			{
				return -1243.1036f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.7655f, -506.7138f, 37.6019f;
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		case 16:
			return 1095.9534f, -210.4642f, 54.9477f;
			break;
		case 17:
			return -1724.5217f, -196f, 57.2387f;
			break;
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		case 19:
			if (iParam1 == 1)
			{
				return -3020.4749f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				return -347.52768f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		case 21:
			return 1052.2484f, 167.611f, 87.7406f;
			break;
		case 22:
			return -2303.7976f, 217.4301f, 166.6017f;
			break;
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.6713f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.9277f, 344.3322f;
			}
			break;
		case 25:
			return -1548.7627f, 1380.1727f, 125.3728f;
			break;
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.1292f, 356.613f;
			}
			break;
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.9883f, 1.1327f;
			}
			else
			{
				return 3063.5828f, 2212.63f, 2.5863f;
			}
			break;
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.1155f, 48.43f;
			}
			break;
		case 32:
			if (iParam1 == 1)
			{
				return -2380.2124f, 2655.1758f, 0.832f;
			}
			else
			{
				return -2379.9482f, 2656.9534f, 1.4906f;
			}
			break;
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		case 34:
			return -289.0195f, 2848.8533f, 53.331f;
			break;
		case 35:
			if (iParam1 == 1)
			{
				return 288.84085f, 2871.9116f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.7102f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.4507f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		case 40:
			return 1336.7367f, 4307.1997f, 37.1325f;
			break;
		case 41:
			if (iParam1 == 1)
			{
				return -1007.10284f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		case 43:
			if (iParam1 == 1)
			{
				return 3366.0986f, 5182.4614f, 0.68317f;
			}
			else
			{
				return 3436.4526f, 5176.911f, 6.386f;
			}
			break;
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		case 45:
			return 444.6518f, 5571.7812f, 780.1888f;
			break;
		case 46:
			return -402.9948f, 6319.2793f, 31.2256f;
			break;
		case 47:
			return 1439.5989f, 6335.2075f, 22.9485f;
			break;
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.2656f, 12.95773f;
			}
			else
			{
				return 1469.6321f, 6552.1743f, 13.6854f;
			}
			break;
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.8877f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.1978f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_827(int iParam0)//Position - 0x1023
{
	switch (iParam0)
	{
		case joaat("swift2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
			return 1;
			break;
	}
	return 0;
}

int func_828(int iParam0)//Position - 0x1171
{
	switch (iParam0)
	{
		case joaat("luxor2"):
		case joaat("nimbus"):
			return 1;
			break;
	}
	return 0;
}

int func_829(var uParam0)//Position - 0x26FB
{
	struct<13> Var0[1];
	int iVar1;
	if (!Global_2821909.f_56)
	{
		Global_2821909.f_57 = 0;
		Var0[0 /*13*/] = { *uParam0 };
		Global_2821909.f_58 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 1);
		Global_2821909.f_56 = 1;
		return 0;
	}
	else if (!Global_2821909.f_57)
	{
		iVar1 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Global_2821909.f_58, &(Global_2821909.f_39), 1);
		if (iVar1 == 0)
		{
		}
		else if (iVar1 == -1)
		{
			Global_2821909.f_39[0 /*16*/] = { Global_2821909.f_4 };
		}
		else
		{
			return 0;
		}
	}
	Global_2821909.f_57 = 1;
	return 1;
}

int func_830(int iParam0)//Position - 0x6EC6B
{
	if ((iParam0 == joaat("Player_Zero") || iParam0 == joaat("Player_One")) || iParam0 == joaat("Player_Two"))
	{
		return 1;
	}
	return 0;
}

void func_831()//Position - 0x6F0E5
{
	Global_44257[0 /*12*/] = 15;
	Global_44257[0 /*12*/].f_1 = 16;
	Global_44257[0 /*12*/].f_2 = 4;
	Global_44257[0 /*12*/].f_3 = 0;
	Global_44257[0 /*12*/].f_10 = 1;
	Global_44257[0 /*12*/].f_11 = 0;
	Global_44257[0 /*12*/].f_4 = 0;
	Global_44257[1 /*12*/] = 17;
	Global_44257[1 /*12*/].f_1 = 16;
	Global_44257[1 /*12*/].f_2 = 4;
	Global_44257[1 /*12*/].f_3 = 0;
	Global_44257[1 /*12*/].f_10 = 1;
	Global_44257[1 /*12*/].f_11 = 0;
	Global_44257[1 /*12*/].f_4 = 0;
	Global_44257[2 /*12*/] = 18;
	Global_44257[2 /*12*/].f_1 = 16;
	Global_44257[2 /*12*/].f_2 = 4;
	Global_44257[2 /*12*/].f_3 = 0;
	Global_44257[2 /*12*/].f_10 = 1;
	Global_44257[2 /*12*/].f_11 = 0;
	Global_44257[2 /*12*/].f_4 = 0;
	Global_44257[3 /*12*/] = 19;
	Global_44257[3 /*12*/].f_1 = 16;
	Global_44257[3 /*12*/].f_2 = 4;
	Global_44257[3 /*12*/].f_3 = 0;
	Global_44257[3 /*12*/].f_10 = 1;
	Global_44257[3 /*12*/].f_11 = 0;
	Global_44257[3 /*12*/].f_4 = 0;
	Global_44257[4 /*12*/] = 20;
	Global_44257[4 /*12*/].f_1 = 16;
	Global_44257[4 /*12*/].f_2 = 4;
	Global_44257[4 /*12*/].f_3 = 0;
	Global_44257[4 /*12*/].f_10 = 1;
	Global_44257[4 /*12*/].f_11 = 0;
	Global_44257[4 /*12*/].f_4 = 0;
	Global_44257[5 /*12*/] = 21;
	Global_44257[5 /*12*/].f_1 = 16;
	Global_44257[5 /*12*/].f_2 = 4;
	Global_44257[5 /*12*/].f_3 = 0;
	Global_44257[5 /*12*/].f_10 = 1;
	Global_44257[5 /*12*/].f_11 = 0;
	Global_44257[5 /*12*/].f_4 = 0;
	Global_44257[6 /*12*/] = 22;
	Global_44257[6 /*12*/].f_1 = 16;
	Global_44257[6 /*12*/].f_2 = 4;
	Global_44257[6 /*12*/].f_3 = 0;
	Global_44257[6 /*12*/].f_10 = 0;
	Global_44257[6 /*12*/].f_11 = 0;
	Global_44257[6 /*12*/].f_4 = 0;
	Global_44257[7 /*12*/] = 23;
	Global_44257[7 /*12*/].f_1 = 24;
	Global_44257[7 /*12*/].f_2 = 4;
	Global_44257[7 /*12*/].f_3 = 0;
	Global_44257[7 /*12*/].f_10 = 0;
	Global_44257[7 /*12*/].f_11 = 0;
	Global_44257[7 /*12*/].f_4 = 0;
	Global_44257[8 /*12*/] = 25;
	Global_44257[8 /*12*/].f_1 = 26;
	Global_44257[8 /*12*/].f_2 = 4;
	Global_44257[8 /*12*/].f_3 = 0;
	Global_44257[8 /*12*/].f_10 = 0;
	Global_44257[8 /*12*/].f_11 = 0;
	Global_44257[8 /*12*/].f_4 = 0;
	Global_44257[9 /*12*/] = 27;
	Global_44257[9 /*12*/].f_1 = 28;
	Global_44257[9 /*12*/].f_2 = 4;
	Global_44257[9 /*12*/].f_3 = 0;
	Global_44257[9 /*12*/].f_10 = 0;
	Global_44257[9 /*12*/].f_11 = 0;
	Global_44257[9 /*12*/].f_4 = 0;
	Global_44257[10 /*12*/] = 32;
	Global_44257[10 /*12*/].f_1 = 33;
	Global_44257[10 /*12*/].f_2 = 5;
	Global_44257[10 /*12*/].f_3 = 0;
	Global_44257[10 /*12*/].f_10 = 0;
	Global_44257[10 /*12*/].f_11 = 0;
	Global_44257[10 /*12*/].f_4 = 0;
	Global_44257[11 /*12*/] = 34;
	Global_44257[11 /*12*/].f_1 = 35;
	Global_44257[11 /*12*/].f_2 = 5;
	Global_44257[11 /*12*/].f_3 = 0;
	Global_44257[11 /*12*/].f_10 = 0;
	Global_44257[11 /*12*/].f_11 = 0;
	Global_44257[11 /*12*/].f_4 = 0;
	Global_44257[12 /*12*/] = 42;
	Global_44257[12 /*12*/].f_1 = 43;
	Global_44257[12 /*12*/].f_2 = 7;
	Global_44257[12 /*12*/].f_3 = 1;
	Global_44257[12 /*12*/].f_10 = 0;
	Global_44257[12 /*12*/].f_11 = 0;
	Global_44257[12 /*12*/].f_4 = 0;
	Global_44257[13 /*12*/] = 44;
	Global_44257[13 /*12*/].f_1 = 45;
	Global_44257[13 /*12*/].f_2 = 7;
	Global_44257[13 /*12*/].f_3 = 1;
	Global_44257[13 /*12*/].f_10 = 0;
	Global_44257[13 /*12*/].f_11 = 0;
	Global_44257[13 /*12*/].f_4 = 0;
	Global_44257[14 /*12*/] = 46;
	Global_44257[14 /*12*/].f_1 = 47;
	Global_44257[14 /*12*/].f_2 = 7;
	Global_44257[14 /*12*/].f_3 = 1;
	Global_44257[14 /*12*/].f_10 = 0;
	Global_44257[14 /*12*/].f_11 = 0;
	Global_44257[14 /*12*/].f_4 = 0;
	Global_44257[15 /*12*/] = 48;
	Global_44257[15 /*12*/].f_1 = 49;
	Global_44257[15 /*12*/].f_2 = 7;
	Global_44257[15 /*12*/].f_3 = 1;
	Global_44257[15 /*12*/].f_10 = 0;
	Global_44257[15 /*12*/].f_11 = 0;
	Global_44257[15 /*12*/].f_4 = 0;
	Global_44257[16 /*12*/] = 50;
	Global_44257[16 /*12*/].f_1 = 51;
	Global_44257[16 /*12*/].f_2 = 4;
	Global_44257[16 /*12*/].f_3 = 0;
	Global_44257[16 /*12*/].f_10 = 0;
	Global_44257[16 /*12*/].f_11 = 0;
	Global_44257[16 /*12*/].f_4 = 0;
	Global_44257[17 /*12*/] = 61;
	Global_44257[17 /*12*/].f_1 = 62;
	Global_44257[17 /*12*/].f_2 = 8;
	Global_44257[17 /*12*/].f_3 = 0;
	Global_44257[17 /*12*/].f_10 = 1;
	Global_44257[17 /*12*/].f_11 = 0;
	Global_44257[17 /*12*/].f_4 = 0;
	Global_44257[18 /*12*/] = 63;
	Global_44257[18 /*12*/].f_1 = 64;
	Global_44257[18 /*12*/].f_2 = 9;
	Global_44257[18 /*12*/].f_3 = 1;
	Global_44257[18 /*12*/].f_10 = 1;
	Global_44257[18 /*12*/].f_11 = 0;
	Global_44257[18 /*12*/].f_4 = 0;
	Global_44257[19 /*12*/] = 61;
	Global_44257[19 /*12*/].f_1 = 65;
	Global_44257[19 /*12*/].f_2 = 8;
	Global_44257[19 /*12*/].f_3 = 0;
	Global_44257[19 /*12*/].f_10 = 1;
	Global_44257[19 /*12*/].f_11 = 0;
	Global_44257[19 /*12*/].f_4 = 0;
	Global_44257[20 /*12*/] = 61;
	Global_44257[20 /*12*/].f_1 = 66;
	Global_44257[20 /*12*/].f_2 = 8;
	Global_44257[20 /*12*/].f_3 = 0;
	Global_44257[20 /*12*/].f_10 = 1;
	Global_44257[20 /*12*/].f_11 = 0;
	Global_44257[20 /*12*/].f_4 = 0;
	Global_44257[21 /*12*/] = 61;
	Global_44257[21 /*12*/].f_1 = 67;
	Global_44257[21 /*12*/].f_2 = 8;
	Global_44257[21 /*12*/].f_3 = 0;
	Global_44257[21 /*12*/].f_10 = 1;
	Global_44257[21 /*12*/].f_11 = 0;
	Global_44257[21 /*12*/].f_4 = 0;
	Global_44257[22 /*12*/] = 61;
	Global_44257[22 /*12*/].f_1 = 68;
	Global_44257[22 /*12*/].f_2 = 8;
	Global_44257[22 /*12*/].f_3 = 0;
	Global_44257[22 /*12*/].f_10 = 0;
	Global_44257[22 /*12*/].f_11 = 0;
	Global_44257[22 /*12*/].f_4 = 0;
	Global_44257[23 /*12*/] = 69;
	Global_44257[23 /*12*/].f_1 = 70;
	Global_44257[23 /*12*/].f_2 = 10;
	Global_44257[23 /*12*/].f_3 = 2;
	Global_44257[23 /*12*/].f_10 = 1;
	Global_44257[23 /*12*/].f_11 = 0;
	Global_44257[23 /*12*/].f_4 = 0;
	Global_44257[24 /*12*/] = 63;
	Global_44257[24 /*12*/].f_1 = 74;
	Global_44257[24 /*12*/].f_2 = 9;
	Global_44257[24 /*12*/].f_3 = 1;
	Global_44257[24 /*12*/].f_10 = 1;
	Global_44257[24 /*12*/].f_11 = 0;
	Global_44257[24 /*12*/].f_4 = 0;
	Global_44257[25 /*12*/] = 63;
	Global_44257[25 /*12*/].f_1 = 75;
	Global_44257[25 /*12*/].f_2 = 9;
	Global_44257[25 /*12*/].f_3 = 1;
	Global_44257[25 /*12*/].f_10 = 1;
	Global_44257[25 /*12*/].f_11 = 0;
	Global_44257[25 /*12*/].f_4 = 0;
	Global_44257[26 /*12*/] = 63;
	Global_44257[26 /*12*/].f_1 = 76;
	Global_44257[26 /*12*/].f_2 = 9;
	Global_44257[26 /*12*/].f_3 = 1;
	Global_44257[26 /*12*/].f_10 = 1;
	Global_44257[26 /*12*/].f_11 = 0;
	Global_44257[26 /*12*/].f_4 = 0;
	Global_44257[27 /*12*/] = 63;
	Global_44257[27 /*12*/].f_1 = 77;
	Global_44257[27 /*12*/].f_2 = 9;
	Global_44257[27 /*12*/].f_3 = 1;
	Global_44257[27 /*12*/].f_10 = 0;
	Global_44257[27 /*12*/].f_11 = 0;
	Global_44257[27 /*12*/].f_4 = 0;
	Global_44257[28 /*12*/] = 69;
	Global_44257[28 /*12*/].f_1 = 73;
	Global_44257[28 /*12*/].f_2 = 10;
	Global_44257[28 /*12*/].f_3 = 2;
	Global_44257[28 /*12*/].f_10 = 1;
	Global_44257[28 /*12*/].f_11 = 0;
	Global_44257[28 /*12*/].f_4 = 0;
	Global_44257[29 /*12*/] = 69;
	Global_44257[29 /*12*/].f_1 = 72;
	Global_44257[29 /*12*/].f_2 = 10;
	Global_44257[29 /*12*/].f_3 = 2;
	Global_44257[29 /*12*/].f_10 = 1;
	Global_44257[29 /*12*/].f_11 = 0;
	Global_44257[29 /*12*/].f_4 = 0;
	Global_44257[30 /*12*/] = 69;
	Global_44257[30 /*12*/].f_1 = 71;
	Global_44257[30 /*12*/].f_2 = 10;
	Global_44257[30 /*12*/].f_3 = 2;
	Global_44257[30 /*12*/].f_10 = 0;
	Global_44257[30 /*12*/].f_11 = 0;
	Global_44257[30 /*12*/].f_4 = 0;
	Global_44257[31 /*12*/] = 90;
	Global_44257[31 /*12*/].f_1 = 91;
	Global_44257[31 /*12*/].f_2 = 11;
	Global_44257[31 /*12*/].f_3 = 1;
	Global_44257[31 /*12*/].f_10 = 0;
	Global_44257[31 /*12*/].f_11 = 0;
	Global_44257[31 /*12*/].f_4 = 0;
	Global_44257[32 /*12*/] = 90;
	Global_44257[32 /*12*/].f_1 = 92;
	Global_44257[32 /*12*/].f_2 = 11;
	Global_44257[32 /*12*/].f_3 = 0;
	Global_44257[32 /*12*/].f_10 = 0;
	Global_44257[32 /*12*/].f_11 = 0;
	Global_44257[32 /*12*/].f_4 = 0;
	Global_44257[33 /*12*/] = 90;
	Global_44257[33 /*12*/].f_1 = 93;
	Global_44257[33 /*12*/].f_2 = 11;
	Global_44257[33 /*12*/].f_3 = 2;
	Global_44257[33 /*12*/].f_10 = 0;
	Global_44257[33 /*12*/].f_11 = 0;
	Global_44257[33 /*12*/].f_4 = 0;
	Global_44257[34 /*12*/] = 94;
	Global_44257[34 /*12*/].f_1 = 95;
	Global_44257[34 /*12*/].f_2 = 13;
	Global_44257[34 /*12*/].f_3 = 0;
	Global_44257[34 /*12*/].f_10 = 0;
	Global_44257[34 /*12*/].f_11 = 0;
	Global_44257[34 /*12*/].f_4 = 0;
	Global_44257[35 /*12*/] = 94;
	Global_44257[35 /*12*/].f_1 = 96;
	Global_44257[35 /*12*/].f_2 = 13;
	Global_44257[35 /*12*/].f_3 = 1;
	Global_44257[35 /*12*/].f_10 = 0;
	Global_44257[35 /*12*/].f_11 = 0;
	Global_44257[35 /*12*/].f_4 = 0;
	Global_44257[36 /*12*/] = 94;
	Global_44257[36 /*12*/].f_1 = 97;
	Global_44257[36 /*12*/].f_2 = 13;
	Global_44257[36 /*12*/].f_3 = 2;
	Global_44257[36 /*12*/].f_10 = 0;
	Global_44257[36 /*12*/].f_11 = 0;
	Global_44257[36 /*12*/].f_4 = 0;
	Global_44257[37 /*12*/] = 94;
	Global_44257[37 /*12*/].f_1 = 98;
	Global_44257[37 /*12*/].f_2 = 14;
	Global_44257[37 /*12*/].f_3 = 0;
	Global_44257[37 /*12*/].f_10 = 0;
	Global_44257[37 /*12*/].f_11 = 0;
	Global_44257[37 /*12*/].f_4 = 0;
	Global_44257[38 /*12*/] = 94;
	Global_44257[38 /*12*/].f_1 = 99;
	Global_44257[38 /*12*/].f_2 = 14;
	Global_44257[38 /*12*/].f_3 = 1;
	Global_44257[38 /*12*/].f_10 = 0;
	Global_44257[38 /*12*/].f_11 = 0;
	Global_44257[38 /*12*/].f_4 = 0;
	Global_44257[39 /*12*/] = 94;
	Global_44257[39 /*12*/].f_1 = 100;
	Global_44257[39 /*12*/].f_2 = 14;
	Global_44257[39 /*12*/].f_3 = 2;
	Global_44257[39 /*12*/].f_10 = 0;
	Global_44257[39 /*12*/].f_11 = 0;
	Global_44257[39 /*12*/].f_4 = 0;
	Global_44257[40 /*12*/] = 94;
	Global_44257[40 /*12*/].f_1 = 101;
	Global_44257[40 /*12*/].f_2 = 12;
	Global_44257[40 /*12*/].f_3 = 0;
	Global_44257[40 /*12*/].f_10 = 0;
	Global_44257[40 /*12*/].f_11 = 0;
	Global_44257[40 /*12*/].f_4 = 0;
	Global_44257[41 /*12*/] = 94;
	Global_44257[41 /*12*/].f_1 = 102;
	Global_44257[41 /*12*/].f_2 = 12;
	Global_44257[41 /*12*/].f_3 = 1;
	Global_44257[41 /*12*/].f_10 = 0;
	Global_44257[41 /*12*/].f_11 = 0;
	Global_44257[41 /*12*/].f_4 = 0;
	Global_44257[42 /*12*/] = 94;
	Global_44257[42 /*12*/].f_1 = 103;
	Global_44257[42 /*12*/].f_2 = 12;
	Global_44257[42 /*12*/].f_3 = 2;
	Global_44257[42 /*12*/].f_10 = 0;
	Global_44257[42 /*12*/].f_11 = 0;
	Global_44257[42 /*12*/].f_4 = 0;
	Global_44257[43 /*12*/] = 104;
	Global_44257[43 /*12*/].f_1 = 105;
	Global_44257[43 /*12*/].f_2 = 7;
	Global_44257[43 /*12*/].f_3 = 0;
	Global_44257[43 /*12*/].f_10 = 1;
	Global_44257[43 /*12*/].f_11 = 0;
	Global_44257[43 /*12*/].f_4 = 0;
	Global_44257[44 /*12*/] = 108;
	Global_44257[44 /*12*/].f_1 = 109;
	Global_44257[44 /*12*/].f_2 = 15;
	Global_44257[44 /*12*/].f_3 = 0;
	Global_44257[44 /*12*/].f_10 = 1;
	Global_44257[44 /*12*/].f_11 = 0;
	Global_44257[44 /*12*/].f_4 = 0;
	Global_44257[45 /*12*/] = 110;
	Global_44257[45 /*12*/].f_1 = 111;
	Global_44257[45 /*12*/].f_2 = 15;
	Global_44257[45 /*12*/].f_3 = 0;
	Global_44257[45 /*12*/].f_10 = 1;
	Global_44257[45 /*12*/].f_11 = 0;
	Global_44257[45 /*12*/].f_4 = 0;
	Global_44257[46 /*12*/] = 112;
	Global_44257[46 /*12*/].f_1 = 113;
	Global_44257[46 /*12*/].f_2 = 15;
	Global_44257[46 /*12*/].f_3 = 0;
	Global_44257[46 /*12*/].f_10 = 1;
	Global_44257[46 /*12*/].f_11 = 0;
	Global_44257[46 /*12*/].f_4 = 0;
	Global_44257[47 /*12*/] = 117;
	Global_44257[47 /*12*/].f_1 = 118;
	Global_44257[47 /*12*/].f_2 = 16;
	Global_44257[47 /*12*/].f_3 = 0;
	Global_44257[47 /*12*/].f_10 = 1;
	Global_44257[47 /*12*/].f_11 = 0;
	Global_44257[47 /*12*/].f_4 = 0;
	Global_44257[48 /*12*/] = 119;
	Global_44257[48 /*12*/].f_1 = 120;
	Global_44257[48 /*12*/].f_2 = 16;
	Global_44257[48 /*12*/].f_3 = 0;
	Global_44257[48 /*12*/].f_10 = 1;
	Global_44257[48 /*12*/].f_11 = 0;
	Global_44257[48 /*12*/].f_4 = 0;
	Global_44257[49 /*12*/] = 131;
	Global_44257[49 /*12*/].f_1 = 132;
	Global_44257[49 /*12*/].f_2 = 16;
	Global_44257[49 /*12*/].f_3 = 0;
	Global_44257[49 /*12*/].f_10 = 1;
	Global_44257[49 /*12*/].f_11 = 0;
	Global_44257[49 /*12*/].f_4 = 0;
	Global_44257[50 /*12*/] = 129;
	Global_44257[50 /*12*/].f_1 = 130;
	Global_44257[50 /*12*/].f_2 = 16;
	Global_44257[50 /*12*/].f_3 = 0;
	Global_44257[50 /*12*/].f_10 = 0;
	Global_44257[50 /*12*/].f_11 = 0;
	Global_44257[50 /*12*/].f_4 = 0;
	Global_44257[51 /*12*/] = 127;
	Global_44257[51 /*12*/].f_1 = 128;
	Global_44257[51 /*12*/].f_2 = 16;
	Global_44257[51 /*12*/].f_3 = 0;
	Global_44257[51 /*12*/].f_10 = 1;
	Global_44257[51 /*12*/].f_11 = 0;
	Global_44257[51 /*12*/].f_4 = 0;
	Global_44257[52 /*12*/] = 125;
	Global_44257[52 /*12*/].f_1 = 126;
	Global_44257[52 /*12*/].f_2 = 16;
	Global_44257[52 /*12*/].f_3 = 0;
	Global_44257[52 /*12*/].f_10 = 1;
	Global_44257[52 /*12*/].f_11 = 0;
	Global_44257[52 /*12*/].f_4 = 0;
	Global_44257[53 /*12*/] = 123;
	Global_44257[53 /*12*/].f_1 = 124;
	Global_44257[53 /*12*/].f_2 = 16;
	Global_44257[53 /*12*/].f_3 = 0;
	Global_44257[53 /*12*/].f_10 = 1;
	Global_44257[53 /*12*/].f_11 = 0;
	Global_44257[53 /*12*/].f_4 = 0;
	Global_44257[54 /*12*/] = 121;
	Global_44257[54 /*12*/].f_1 = 122;
	Global_44257[54 /*12*/].f_2 = 16;
	Global_44257[54 /*12*/].f_3 = 0;
	Global_44257[54 /*12*/].f_10 = 1;
	Global_44257[54 /*12*/].f_11 = 0;
	Global_44257[54 /*12*/].f_4 = 0;
	Global_44257[55 /*12*/] = 133;
	Global_44257[55 /*12*/].f_1 = 134;
	Global_44257[55 /*12*/].f_2 = 12;
	Global_44257[55 /*12*/].f_3 = 0;
	Global_44257[55 /*12*/].f_10 = 0;
	Global_44257[55 /*12*/].f_11 = 0;
	Global_44257[55 /*12*/].f_4 = 0;
	Global_44257[56 /*12*/] = 135;
	Global_44257[56 /*12*/].f_1 = 136;
	Global_44257[56 /*12*/].f_2 = 14;
	Global_44257[56 /*12*/].f_3 = 0;
	Global_44257[56 /*12*/].f_10 = 0;
	Global_44257[56 /*12*/].f_11 = 0;
	Global_44257[56 /*12*/].f_4 = 0;
	Global_44257[57 /*12*/] = 137;
	Global_44257[57 /*12*/].f_1 = 138;
	Global_44257[57 /*12*/].f_2 = 12;
	Global_44257[57 /*12*/].f_3 = 0;
	Global_44257[57 /*12*/].f_10 = 0;
	Global_44257[57 /*12*/].f_11 = 0;
	Global_44257[57 /*12*/].f_4 = 0;
	Global_44257[58 /*12*/] = 133;
	Global_44257[58 /*12*/].f_1 = 139;
	Global_44257[58 /*12*/].f_2 = 12;
	Global_44257[58 /*12*/].f_3 = 1;
	Global_44257[58 /*12*/].f_10 = 0;
	Global_44257[58 /*12*/].f_11 = 0;
	Global_44257[58 /*12*/].f_4 = 0;
	Global_44257[59 /*12*/] = 133;
	Global_44257[59 /*12*/].f_1 = 140;
	Global_44257[59 /*12*/].f_2 = 12;
	Global_44257[59 /*12*/].f_3 = 2;
	Global_44257[59 /*12*/].f_10 = 0;
	Global_44257[59 /*12*/].f_11 = 0;
	Global_44257[59 /*12*/].f_4 = 0;
	Global_44257[60 /*12*/] = 135;
	Global_44257[60 /*12*/].f_1 = 136;
	Global_44257[60 /*12*/].f_2 = 14;
	Global_44257[60 /*12*/].f_3 = 1;
	Global_44257[60 /*12*/].f_10 = 0;
	Global_44257[60 /*12*/].f_11 = 0;
	Global_44257[60 /*12*/].f_4 = 0;
	Global_44257[61 /*12*/] = 135;
	Global_44257[61 /*12*/].f_1 = 136;
	Global_44257[61 /*12*/].f_2 = 14;
	Global_44257[61 /*12*/].f_3 = 2;
	Global_44257[61 /*12*/].f_10 = 0;
	Global_44257[61 /*12*/].f_11 = 0;
	Global_44257[61 /*12*/].f_4 = 0;
	Global_44257[62 /*12*/] = 137;
	Global_44257[62 /*12*/].f_1 = 141;
	Global_44257[62 /*12*/].f_2 = 12;
	Global_44257[62 /*12*/].f_3 = 1;
	Global_44257[62 /*12*/].f_10 = 0;
	Global_44257[62 /*12*/].f_11 = 0;
	Global_44257[62 /*12*/].f_4 = 0;
	Global_44257[63 /*12*/] = 137;
	Global_44257[63 /*12*/].f_1 = 138;
	Global_44257[63 /*12*/].f_2 = 12;
	Global_44257[63 /*12*/].f_3 = 2;
	Global_44257[63 /*12*/].f_10 = 0;
	Global_44257[63 /*12*/].f_11 = 0;
	Global_44257[63 /*12*/].f_4 = 0;
	Global_44257[64 /*12*/] = 148;
	Global_44257[64 /*12*/].f_1 = 149;
	Global_44257[64 /*12*/].f_2 = 7;
	Global_44257[64 /*12*/].f_3 = 0;
	Global_44257[64 /*12*/].f_10 = 0;
	Global_44257[64 /*12*/].f_11 = 0;
	Global_44257[64 /*12*/].f_4 = 0;
	Global_44257[65 /*12*/] = 148;
	Global_44257[65 /*12*/].f_1 = 151;
	Global_44257[65 /*12*/].f_2 = 7;
	Global_44257[65 /*12*/].f_3 = 0;
	Global_44257[65 /*12*/].f_10 = 0;
	Global_44257[65 /*12*/].f_11 = 0;
	Global_44257[65 /*12*/].f_4 = 0;
	Global_44257[66 /*12*/] = 148;
	Global_44257[66 /*12*/].f_1 = 150;
	Global_44257[66 /*12*/].f_2 = 7;
	Global_44257[66 /*12*/].f_3 = 0;
	Global_44257[66 /*12*/].f_10 = 0;
	Global_44257[66 /*12*/].f_11 = 0;
	Global_44257[66 /*12*/].f_4 = 0;
	Global_44257[67 /*12*/] = 155;
	Global_44257[67 /*12*/].f_1 = 156;
	Global_44257[67 /*12*/].f_2 = 63;
	Global_44257[67 /*12*/].f_3 = 2;
	Global_44257[67 /*12*/].f_10 = 0;
	Global_44257[67 /*12*/].f_11 = 0;
	Global_44257[67 /*12*/].f_4 = 0;
	Global_44257[68 /*12*/] = 125;
	Global_44257[68 /*12*/].f_1 = 160;
	Global_44257[68 /*12*/].f_2 = 16;
	Global_44257[68 /*12*/].f_3 = 0;
	Global_44257[68 /*12*/].f_10 = 1;
	Global_44257[68 /*12*/].f_11 = 0;
	Global_44257[68 /*12*/].f_4 = 0;
	Global_44257[69 /*12*/] = 161;
	Global_44257[69 /*12*/].f_1 = 162;
	Global_44257[69 /*12*/].f_2 = 64;
	Global_44257[69 /*12*/].f_3 = 2;
	Global_44257[69 /*12*/].f_10 = 0;
	Global_44257[69 /*12*/].f_11 = 0;
	Global_44257[69 /*12*/].f_4 = 0;
	Global_44257[70 /*12*/] = 161;
	Global_44257[70 /*12*/].f_1 = 162;
	Global_44257[70 /*12*/].f_2 = 64;
	Global_44257[70 /*12*/].f_3 = 1;
	Global_44257[70 /*12*/].f_10 = 0;
	Global_44257[70 /*12*/].f_11 = 0;
	Global_44257[70 /*12*/].f_4 = 0;
	Global_44257[71 /*12*/] = 161;
	Global_44257[71 /*12*/].f_1 = 162;
	Global_44257[71 /*12*/].f_2 = 64;
	Global_44257[71 /*12*/].f_3 = 2;
	Global_44257[71 /*12*/].f_10 = 0;
	Global_44257[71 /*12*/].f_11 = 0;
	Global_44257[71 /*12*/].f_4 = 0;
	Global_44257[72 /*12*/] = 166;
	Global_44257[72 /*12*/].f_1 = 16;
	Global_44257[72 /*12*/].f_2 = 21;
	Global_44257[72 /*12*/].f_3 = 0;
	Global_44257[72 /*12*/].f_10 = 0;
	Global_44257[72 /*12*/].f_11 = 0;
	Global_44257[72 /*12*/].f_4 = 0;
	Global_44257[73 /*12*/] = 166;
	Global_44257[73 /*12*/].f_1 = 16;
	Global_44257[73 /*12*/].f_2 = 21;
	Global_44257[73 /*12*/].f_3 = 1;
	Global_44257[73 /*12*/].f_10 = 0;
	Global_44257[73 /*12*/].f_11 = 0;
	Global_44257[73 /*12*/].f_4 = 0;
	Global_44257[74 /*12*/] = 166;
	Global_44257[74 /*12*/].f_1 = 16;
	Global_44257[74 /*12*/].f_2 = 21;
	Global_44257[74 /*12*/].f_3 = 2;
	Global_44257[74 /*12*/].f_10 = 0;
	Global_44257[74 /*12*/].f_11 = 0;
	Global_44257[74 /*12*/].f_4 = 0;
	Global_44257[75 /*12*/] = 167;
	Global_44257[75 /*12*/].f_1 = 16;
	Global_44257[75 /*12*/].f_2 = 6;
	Global_44257[75 /*12*/].f_3 = 2;
	Global_44257[75 /*12*/].f_10 = 0;
	Global_44257[75 /*12*/].f_11 = 0;
	Global_44257[75 /*12*/].f_4 = 0;
	Global_44257[76 /*12*/] = 168;
	Global_44257[76 /*12*/].f_1 = 16;
	Global_44257[76 /*12*/].f_2 = 6;
	Global_44257[76 /*12*/].f_3 = 2;
	Global_44257[76 /*12*/].f_10 = 0;
	Global_44257[76 /*12*/].f_11 = 0;
	Global_44257[76 /*12*/].f_4 = 0;
	Global_44257[77 /*12*/] = 169;
	Global_44257[77 /*12*/].f_1 = 16;
	Global_44257[77 /*12*/].f_2 = 6;
	Global_44257[77 /*12*/].f_3 = 2;
	Global_44257[77 /*12*/].f_10 = 0;
	Global_44257[77 /*12*/].f_11 = 0;
	Global_44257[77 /*12*/].f_4 = 0;
	Global_44257[78 /*12*/] = 170;
	Global_44257[78 /*12*/].f_1 = 16;
	Global_44257[78 /*12*/].f_2 = 6;
	Global_44257[78 /*12*/].f_3 = 2;
	Global_44257[78 /*12*/].f_10 = 0;
	Global_44257[78 /*12*/].f_11 = 0;
	Global_44257[78 /*12*/].f_4 = 0;
	Global_44257[79 /*12*/] = 171;
	Global_44257[79 /*12*/].f_1 = 16;
	Global_44257[79 /*12*/].f_2 = 6;
	Global_44257[79 /*12*/].f_3 = 2;
	Global_44257[79 /*12*/].f_10 = 0;
	Global_44257[79 /*12*/].f_11 = 0;
	Global_44257[79 /*12*/].f_4 = 0;
	Global_44257[80 /*12*/] = 172;
	Global_44257[80 /*12*/].f_1 = 173;
	Global_44257[80 /*12*/].f_2 = 6;
	Global_44257[80 /*12*/].f_3 = 2;
	Global_44257[80 /*12*/].f_10 = 0;
	Global_44257[80 /*12*/].f_11 = 0;
	Global_44257[80 /*12*/].f_4 = 0;
	Global_44257[81 /*12*/] = 174;
	Global_44257[81 /*12*/].f_1 = 175;
	Global_44257[81 /*12*/].f_2 = 6;
	Global_44257[81 /*12*/].f_3 = 2;
	Global_44257[81 /*12*/].f_10 = 0;
	Global_44257[81 /*12*/].f_11 = 0;
	Global_44257[81 /*12*/].f_4 = 0;
	Global_44257[82 /*12*/] = 176;
	Global_44257[82 /*12*/].f_1 = 177;
	Global_44257[82 /*12*/].f_2 = 6;
	Global_44257[82 /*12*/].f_3 = 2;
	Global_44257[82 /*12*/].f_10 = 0;
	Global_44257[82 /*12*/].f_11 = 0;
	Global_44257[82 /*12*/].f_4 = 0;
	Global_44257[83 /*12*/] = 178;
	Global_44257[83 /*12*/].f_1 = 179;
	Global_44257[83 /*12*/].f_2 = 6;
	Global_44257[83 /*12*/].f_3 = 2;
	Global_44257[83 /*12*/].f_10 = 0;
	Global_44257[83 /*12*/].f_11 = 0;
	Global_44257[83 /*12*/].f_4 = 0;
	Global_44257[84 /*12*/] = 180;
	Global_44257[84 /*12*/].f_1 = 181;
	Global_44257[84 /*12*/].f_2 = 4;
	Global_44257[84 /*12*/].f_3 = 0;
	Global_44257[84 /*12*/].f_10 = 0;
	Global_44257[84 /*12*/].f_11 = 3000;
	Global_44257[84 /*12*/].f_4 = 0;
	Global_44257[85 /*12*/] = 185;
	Global_44257[85 /*12*/].f_1 = 186;
	Global_44257[85 /*12*/].f_2 = 22;
	Global_44257[85 /*12*/].f_3 = 0;
	Global_44257[85 /*12*/].f_10 = 0;
	Global_44257[85 /*12*/].f_11 = 0;
	Global_44257[85 /*12*/].f_4 = 0;
	Global_44257[86 /*12*/] = 193;
	Global_44257[86 /*12*/].f_1 = 194;
	Global_44257[86 /*12*/].f_2 = 24;
	Global_44257[86 /*12*/].f_3 = 0;
	Global_44257[86 /*12*/].f_10 = 1;
	Global_44257[86 /*12*/].f_11 = 0;
	Global_44257[86 /*12*/].f_4 = 1;
	Global_44257[86 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[86 /*12*/].f_5[0 /*4*/].f_1 = 87;
	Global_44257[86 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[86 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[87 /*12*/] = 195;
	Global_44257[87 /*12*/].f_1 = 196;
	Global_44257[87 /*12*/].f_2 = 0;
	Global_44257[87 /*12*/].f_3 = 24;
	Global_44257[87 /*12*/].f_10 = 0;
	Global_44257[87 /*12*/].f_11 = 0;
	Global_44257[87 /*12*/].f_4 = 1;
	Global_44257[87 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[87 /*12*/].f_5[0 /*4*/].f_1 = 88;
	Global_44257[87 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[87 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[88 /*12*/] = 197;
	Global_44257[88 /*12*/].f_1 = 198;
	Global_44257[88 /*12*/].f_2 = 24;
	Global_44257[88 /*12*/].f_3 = 0;
	Global_44257[88 /*12*/].f_10 = 0;
	Global_44257[88 /*12*/].f_11 = 120000;
	Global_44257[88 /*12*/].f_4 = 0;
	Global_44257[89 /*12*/] = 200;
	Global_44257[89 /*12*/].f_1 = 201;
	Global_44257[89 /*12*/].f_2 = 24;
	Global_44257[89 /*12*/].f_3 = 0;
	Global_44257[89 /*12*/].f_10 = 1;
	Global_44257[89 /*12*/].f_11 = 0;
	Global_44257[89 /*12*/].f_4 = 1;
	Global_44257[89 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[89 /*12*/].f_5[0 /*4*/].f_1 = 90;
	Global_44257[89 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[89 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[90 /*12*/] = 202;
	Global_44257[90 /*12*/].f_1 = 203;
	Global_44257[90 /*12*/].f_2 = 0;
	Global_44257[90 /*12*/].f_3 = 24;
	Global_44257[90 /*12*/].f_10 = 0;
	Global_44257[90 /*12*/].f_11 = 0;
	Global_44257[90 /*12*/].f_4 = 1;
	Global_44257[90 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[90 /*12*/].f_5[0 /*4*/].f_1 = 91;
	Global_44257[90 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[90 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[91 /*12*/] = 204;
	Global_44257[91 /*12*/].f_1 = 205;
	Global_44257[91 /*12*/].f_2 = 24;
	Global_44257[91 /*12*/].f_3 = 0;
	Global_44257[91 /*12*/].f_10 = 0;
	Global_44257[91 /*12*/].f_11 = 120000;
	Global_44257[91 /*12*/].f_4 = 0;
	Global_44257[92 /*12*/] = 209;
	Global_44257[92 /*12*/].f_1 = 210;
	Global_44257[92 /*12*/].f_2 = 25;
	Global_44257[92 /*12*/].f_3 = 0;
	Global_44257[92 /*12*/].f_10 = 1;
	Global_44257[92 /*12*/].f_11 = 0;
	Global_44257[92 /*12*/].f_4 = 1;
	Global_44257[92 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[92 /*12*/].f_5[0 /*4*/].f_1 = 93;
	Global_44257[92 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[92 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[93 /*12*/] = 211;
	Global_44257[93 /*12*/].f_1 = 212;
	Global_44257[93 /*12*/].f_2 = 0;
	Global_44257[93 /*12*/].f_3 = 25;
	Global_44257[93 /*12*/].f_10 = 0;
	Global_44257[93 /*12*/].f_11 = 0;
	Global_44257[93 /*12*/].f_4 = 1;
	Global_44257[93 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[93 /*12*/].f_5[0 /*4*/].f_1 = 94;
	Global_44257[93 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[93 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[94 /*12*/] = 213;
	Global_44257[94 /*12*/].f_1 = 214;
	Global_44257[94 /*12*/].f_2 = 25;
	Global_44257[94 /*12*/].f_3 = 0;
	Global_44257[94 /*12*/].f_10 = 1;
	Global_44257[94 /*12*/].f_11 = 60000;
	Global_44257[94 /*12*/].f_4 = 1;
	Global_44257[94 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[94 /*12*/].f_5[0 /*4*/].f_1 = 95;
	Global_44257[94 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[94 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[95 /*12*/] = 215;
	Global_44257[95 /*12*/].f_1 = 216;
	Global_44257[95 /*12*/].f_2 = 0;
	Global_44257[95 /*12*/].f_3 = 25;
	Global_44257[95 /*12*/].f_10 = 0;
	Global_44257[95 /*12*/].f_11 = 0;
	Global_44257[95 /*12*/].f_4 = 1;
	Global_44257[95 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[95 /*12*/].f_5[0 /*4*/].f_1 = 96;
	Global_44257[95 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[95 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[96 /*12*/] = 217;
	Global_44257[96 /*12*/].f_1 = 218;
	Global_44257[96 /*12*/].f_2 = 25;
	Global_44257[96 /*12*/].f_3 = 0;
	Global_44257[96 /*12*/].f_10 = 0;
	Global_44257[96 /*12*/].f_11 = 60000;
	Global_44257[96 /*12*/].f_4 = 0;
	Global_44257[97 /*12*/] = 222;
	Global_44257[97 /*12*/].f_1 = 223;
	Global_44257[97 /*12*/].f_2 = 26;
	Global_44257[97 /*12*/].f_3 = 0;
	Global_44257[97 /*12*/].f_10 = 1;
	Global_44257[97 /*12*/].f_11 = 0;
	Global_44257[97 /*12*/].f_4 = 1;
	Global_44257[97 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[97 /*12*/].f_5[0 /*4*/].f_1 = 98;
	Global_44257[97 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[97 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[98 /*12*/] = 224;
	Global_44257[98 /*12*/].f_1 = 225;
	Global_44257[98 /*12*/].f_2 = 0;
	Global_44257[98 /*12*/].f_3 = 26;
	Global_44257[98 /*12*/].f_10 = 0;
	Global_44257[98 /*12*/].f_11 = 0;
	Global_44257[98 /*12*/].f_4 = 0;
	Global_44257[99 /*12*/] = 229;
	Global_44257[99 /*12*/].f_1 = 230;
	Global_44257[99 /*12*/].f_2 = 27;
	Global_44257[99 /*12*/].f_3 = 0;
	Global_44257[99 /*12*/].f_10 = 1;
	Global_44257[99 /*12*/].f_11 = 0;
	Global_44257[99 /*12*/].f_4 = 1;
	Global_44257[99 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[99 /*12*/].f_5[0 /*4*/].f_1 = 100;
	Global_44257[99 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[99 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[100 /*12*/] = 231;
	Global_44257[100 /*12*/].f_1 = 232;
	Global_44257[100 /*12*/].f_2 = 0;
	Global_44257[100 /*12*/].f_3 = 27;
	Global_44257[100 /*12*/].f_10 = 0;
	Global_44257[100 /*12*/].f_11 = 0;
	Global_44257[100 /*12*/].f_4 = 0;
	Global_44257[101 /*12*/] = 236;
	Global_44257[101 /*12*/].f_1 = 237;
	Global_44257[101 /*12*/].f_2 = 28;
	Global_44257[101 /*12*/].f_3 = 0;
	Global_44257[101 /*12*/].f_10 = 0;
	Global_44257[101 /*12*/].f_11 = 0;
	Global_44257[101 /*12*/].f_4 = 0;
	Global_44257[102 /*12*/] = 238;
	Global_44257[102 /*12*/].f_1 = 239;
	Global_44257[102 /*12*/].f_2 = 26;
	Global_44257[102 /*12*/].f_3 = 0;
	Global_44257[102 /*12*/].f_10 = 1;
	Global_44257[102 /*12*/].f_11 = 0;
	Global_44257[102 /*12*/].f_4 = 1;
	Global_44257[102 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[102 /*12*/].f_5[0 /*4*/].f_1 = 103;
	Global_44257[102 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[102 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[103 /*12*/] = 240;
	Global_44257[103 /*12*/].f_1 = 241;
	Global_44257[103 /*12*/].f_2 = 0;
	Global_44257[103 /*12*/].f_3 = 26;
	Global_44257[103 /*12*/].f_10 = 0;
	Global_44257[103 /*12*/].f_11 = 0;
	Global_44257[103 /*12*/].f_4 = 0;
	Global_44257[104 /*12*/] = 245;
	Global_44257[104 /*12*/].f_1 = 246;
	Global_44257[104 /*12*/].f_2 = 29;
	Global_44257[104 /*12*/].f_3 = 0;
	Global_44257[104 /*12*/].f_10 = 1;
	Global_44257[104 /*12*/].f_11 = 0;
	Global_44257[104 /*12*/].f_4 = 1;
	Global_44257[104 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[104 /*12*/].f_5[0 /*4*/].f_1 = 105;
	Global_44257[104 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[104 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[105 /*12*/] = 247;
	Global_44257[105 /*12*/].f_1 = 248;
	Global_44257[105 /*12*/].f_2 = 0;
	Global_44257[105 /*12*/].f_3 = 29;
	Global_44257[105 /*12*/].f_10 = 0;
	Global_44257[105 /*12*/].f_11 = 0;
	Global_44257[105 /*12*/].f_4 = 0;
	Global_44257[106 /*12*/] = 252;
	Global_44257[106 /*12*/].f_1 = 253;
	Global_44257[106 /*12*/].f_2 = 30;
	Global_44257[106 /*12*/].f_3 = 1;
	Global_44257[106 /*12*/].f_10 = 1;
	Global_44257[106 /*12*/].f_11 = 120000;
	Global_44257[106 /*12*/].f_4 = 1;
	Global_44257[106 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[106 /*12*/].f_5[0 /*4*/].f_1 = 107;
	Global_44257[106 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[106 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[107 /*12*/] = 254;
	Global_44257[107 /*12*/].f_1 = 255;
	Global_44257[107 /*12*/].f_2 = 1;
	Global_44257[107 /*12*/].f_3 = 30;
	Global_44257[107 /*12*/].f_10 = 0;
	Global_44257[107 /*12*/].f_11 = 0;
	Global_44257[107 /*12*/].f_4 = 1;
	Global_44257[107 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[107 /*12*/].f_5[0 /*4*/].f_1 = 108;
	Global_44257[107 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[107 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[108 /*12*/] = 256;
	Global_44257[108 /*12*/].f_1 = 257;
	Global_44257[108 /*12*/].f_2 = 30;
	Global_44257[108 /*12*/].f_3 = 1;
	Global_44257[108 /*12*/].f_10 = 1;
	Global_44257[108 /*12*/].f_11 = 120000;
	Global_44257[108 /*12*/].f_4 = 1;
	Global_44257[108 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[108 /*12*/].f_5[0 /*4*/].f_1 = 109;
	Global_44257[108 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[108 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[109 /*12*/] = 258;
	Global_44257[109 /*12*/].f_1 = 259;
	Global_44257[109 /*12*/].f_2 = 1;
	Global_44257[109 /*12*/].f_3 = 30;
	Global_44257[109 /*12*/].f_10 = 0;
	Global_44257[109 /*12*/].f_11 = 0;
	Global_44257[109 /*12*/].f_4 = 1;
	Global_44257[109 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[109 /*12*/].f_5[0 /*4*/].f_1 = 110;
	Global_44257[109 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[109 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[110 /*12*/] = 260;
	Global_44257[110 /*12*/].f_1 = 261;
	Global_44257[110 /*12*/].f_2 = 30;
	Global_44257[110 /*12*/].f_3 = 1;
	Global_44257[110 /*12*/].f_10 = 0;
	Global_44257[110 /*12*/].f_11 = 60000;
	Global_44257[110 /*12*/].f_4 = 0;
	Global_44257[111 /*12*/] = 265;
	Global_44257[111 /*12*/].f_1 = 266;
	Global_44257[111 /*12*/].f_2 = 31;
	Global_44257[111 /*12*/].f_3 = 1;
	Global_44257[111 /*12*/].f_10 = 1;
	Global_44257[111 /*12*/].f_11 = 0;
	Global_44257[111 /*12*/].f_4 = 1;
	Global_44257[111 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[111 /*12*/].f_5[0 /*4*/].f_1 = 112;
	Global_44257[111 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[111 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[112 /*12*/] = 267;
	Global_44257[112 /*12*/].f_1 = 268;
	Global_44257[112 /*12*/].f_2 = 1;
	Global_44257[112 /*12*/].f_3 = 31;
	Global_44257[112 /*12*/].f_10 = 0;
	Global_44257[112 /*12*/].f_11 = 0;
	Global_44257[112 /*12*/].f_4 = 0;
	Global_44257[113 /*12*/] = 272;
	Global_44257[113 /*12*/].f_1 = 273;
	Global_44257[113 /*12*/].f_2 = 32;
	Global_44257[113 /*12*/].f_3 = 1;
	Global_44257[113 /*12*/].f_10 = 1;
	Global_44257[113 /*12*/].f_11 = 0;
	Global_44257[113 /*12*/].f_4 = 1;
	Global_44257[113 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[113 /*12*/].f_5[0 /*4*/].f_1 = 114;
	Global_44257[113 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[113 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[114 /*12*/] = 274;
	Global_44257[114 /*12*/].f_1 = 275;
	Global_44257[114 /*12*/].f_2 = 1;
	Global_44257[114 /*12*/].f_3 = 32;
	Global_44257[114 /*12*/].f_10 = 0;
	Global_44257[114 /*12*/].f_11 = 0;
	Global_44257[114 /*12*/].f_4 = 1;
	Global_44257[114 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[114 /*12*/].f_5[0 /*4*/].f_1 = 115;
	Global_44257[114 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[114 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[115 /*12*/] = 276;
	Global_44257[115 /*12*/].f_1 = 277;
	Global_44257[115 /*12*/].f_2 = 32;
	Global_44257[115 /*12*/].f_3 = 1;
	Global_44257[115 /*12*/].f_10 = 0;
	Global_44257[115 /*12*/].f_11 = 30000;
	Global_44257[115 /*12*/].f_4 = 0;
	Global_44257[116 /*12*/] = 278;
	Global_44257[116 /*12*/].f_1 = 279;
	Global_44257[116 /*12*/].f_2 = 32;
	Global_44257[116 /*12*/].f_3 = 1;
	Global_44257[116 /*12*/].f_10 = 1;
	Global_44257[116 /*12*/].f_11 = 0;
	Global_44257[116 /*12*/].f_4 = 1;
	Global_44257[116 /*12*/].f_5[0 /*4*/] = 282;
	Global_44257[116 /*12*/].f_5[0 /*4*/].f_1 = 117;
	Global_44257[116 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[116 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[117 /*12*/] = 280;
	Global_44257[117 /*12*/].f_1 = 281;
	Global_44257[117 /*12*/].f_2 = 1;
	Global_44257[117 /*12*/].f_3 = 32;
	Global_44257[117 /*12*/].f_10 = 0;
	Global_44257[117 /*12*/].f_11 = 0;
	Global_44257[117 /*12*/].f_4 = 0;
	Global_44257[118 /*12*/] = 283;
	Global_44257[118 /*12*/].f_1 = 284;
	Global_44257[118 /*12*/].f_2 = 32;
	Global_44257[118 /*12*/].f_3 = 1;
	Global_44257[118 /*12*/].f_10 = 1;
	Global_44257[118 /*12*/].f_11 = 0;
	Global_44257[118 /*12*/].f_4 = 1;
	Global_44257[118 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[118 /*12*/].f_5[0 /*4*/].f_1 = 119;
	Global_44257[118 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[118 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[119 /*12*/] = 285;
	Global_44257[119 /*12*/].f_1 = 286;
	Global_44257[119 /*12*/].f_2 = 1;
	Global_44257[119 /*12*/].f_3 = 32;
	Global_44257[119 /*12*/].f_10 = 0;
	Global_44257[119 /*12*/].f_11 = 0;
	Global_44257[119 /*12*/].f_4 = 0;
	Global_44257[120 /*12*/] = 287;
	Global_44257[120 /*12*/].f_1 = 288;
	Global_44257[120 /*12*/].f_2 = 32;
	Global_44257[120 /*12*/].f_3 = 1;
	Global_44257[120 /*12*/].f_10 = 1;
	Global_44257[120 /*12*/].f_11 = 0;
	Global_44257[120 /*12*/].f_4 = 1;
	Global_44257[120 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[120 /*12*/].f_5[0 /*4*/].f_1 = 121;
	Global_44257[120 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[120 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[121 /*12*/] = 289;
	Global_44257[121 /*12*/].f_1 = 290;
	Global_44257[121 /*12*/].f_2 = 1;
	Global_44257[121 /*12*/].f_3 = 32;
	Global_44257[121 /*12*/].f_10 = 0;
	Global_44257[121 /*12*/].f_11 = 0;
	Global_44257[121 /*12*/].f_4 = 1;
	Global_44257[121 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[121 /*12*/].f_5[0 /*4*/].f_1 = 122;
	Global_44257[121 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[121 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[122 /*12*/] = 291;
	Global_44257[122 /*12*/].f_1 = 292;
	Global_44257[122 /*12*/].f_2 = 32;
	Global_44257[122 /*12*/].f_3 = 1;
	Global_44257[122 /*12*/].f_10 = 1;
	Global_44257[122 /*12*/].f_11 = 30000;
	Global_44257[122 /*12*/].f_4 = 1;
	Global_44257[122 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[122 /*12*/].f_5[0 /*4*/].f_1 = 123;
	Global_44257[122 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[122 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[123 /*12*/] = 293;
	Global_44257[123 /*12*/].f_1 = 294;
	Global_44257[123 /*12*/].f_2 = 1;
	Global_44257[123 /*12*/].f_3 = 32;
	Global_44257[123 /*12*/].f_10 = 0;
	Global_44257[123 /*12*/].f_11 = 0;
	Global_44257[123 /*12*/].f_4 = 0;
	Global_44257[124 /*12*/] = 295;
	Global_44257[124 /*12*/].f_1 = 296;
	Global_44257[124 /*12*/].f_2 = 27;
	Global_44257[124 /*12*/].f_3 = 1;
	Global_44257[124 /*12*/].f_10 = 1;
	Global_44257[124 /*12*/].f_11 = 0;
	Global_44257[124 /*12*/].f_4 = 1;
	Global_44257[124 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[124 /*12*/].f_5[0 /*4*/].f_1 = 125;
	Global_44257[124 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[124 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[125 /*12*/] = 297;
	Global_44257[125 /*12*/].f_1 = 298;
	Global_44257[125 /*12*/].f_2 = 1;
	Global_44257[125 /*12*/].f_3 = 27;
	Global_44257[125 /*12*/].f_10 = 0;
	Global_44257[125 /*12*/].f_11 = 0;
	Global_44257[125 /*12*/].f_4 = 0;
	Global_44257[126 /*12*/] = 299;
	Global_44257[126 /*12*/].f_1 = 300;
	Global_44257[126 /*12*/].f_2 = 2;
	Global_44257[126 /*12*/].f_3 = 1;
	Global_44257[126 /*12*/].f_10 = 1;
	Global_44257[126 /*12*/].f_11 = 0;
	Global_44257[126 /*12*/].f_4 = 1;
	Global_44257[126 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[126 /*12*/].f_5[0 /*4*/].f_1 = 127;
	Global_44257[126 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[126 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[127 /*12*/] = 301;
	Global_44257[127 /*12*/].f_1 = 302;
	Global_44257[127 /*12*/].f_2 = 1;
	Global_44257[127 /*12*/].f_3 = 2;
	Global_44257[127 /*12*/].f_10 = 0;
	Global_44257[127 /*12*/].f_11 = 0;
	Global_44257[127 /*12*/].f_4 = 1;
	Global_44257[127 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[127 /*12*/].f_5[0 /*4*/].f_1 = 128;
	Global_44257[127 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[127 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[128 /*12*/] = 303;
	Global_44257[128 /*12*/].f_1 = 304;
	Global_44257[128 /*12*/].f_2 = 2;
	Global_44257[128 /*12*/].f_3 = 1;
	Global_44257[128 /*12*/].f_10 = 1;
	Global_44257[128 /*12*/].f_11 = 60000;
	Global_44257[128 /*12*/].f_4 = 1;
	Global_44257[128 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[128 /*12*/].f_5[0 /*4*/].f_1 = 129;
	Global_44257[128 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[128 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[129 /*12*/] = 305;
	Global_44257[129 /*12*/].f_1 = 306;
	Global_44257[129 /*12*/].f_2 = 1;
	Global_44257[129 /*12*/].f_3 = 2;
	Global_44257[129 /*12*/].f_10 = 0;
	Global_44257[129 /*12*/].f_11 = 0;
	Global_44257[129 /*12*/].f_4 = 1;
	Global_44257[129 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[129 /*12*/].f_5[0 /*4*/].f_1 = 130;
	Global_44257[129 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[129 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[130 /*12*/] = 307;
	Global_44257[130 /*12*/].f_1 = 308;
	Global_44257[130 /*12*/].f_2 = 2;
	Global_44257[130 /*12*/].f_3 = 1;
	Global_44257[130 /*12*/].f_10 = 0;
	Global_44257[130 /*12*/].f_11 = 30000;
	Global_44257[130 /*12*/].f_4 = 0;
	Global_44257[131 /*12*/] = 309;
	Global_44257[131 /*12*/].f_1 = 310;
	Global_44257[131 /*12*/].f_2 = 0;
	Global_44257[131 /*12*/].f_3 = 1;
	Global_44257[131 /*12*/].f_10 = 1;
	Global_44257[131 /*12*/].f_11 = 0;
	Global_44257[131 /*12*/].f_4 = 1;
	Global_44257[131 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[131 /*12*/].f_5[0 /*4*/].f_1 = 132;
	Global_44257[131 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[131 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[132 /*12*/] = 311;
	Global_44257[132 /*12*/].f_1 = 312;
	Global_44257[132 /*12*/].f_2 = 1;
	Global_44257[132 /*12*/].f_3 = 0;
	Global_44257[132 /*12*/].f_10 = 0;
	Global_44257[132 /*12*/].f_11 = 0;
	Global_44257[132 /*12*/].f_4 = 1;
	Global_44257[132 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[132 /*12*/].f_5[0 /*4*/].f_1 = 133;
	Global_44257[132 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[132 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[133 /*12*/] = 313;
	Global_44257[133 /*12*/].f_1 = 314;
	Global_44257[133 /*12*/].f_2 = 0;
	Global_44257[133 /*12*/].f_3 = 1;
	Global_44257[133 /*12*/].f_10 = 0;
	Global_44257[133 /*12*/].f_11 = 25000;
	Global_44257[133 /*12*/].f_4 = 0;
	Global_44257[134 /*12*/] = 315;
	Global_44257[134 /*12*/].f_1 = 316;
	Global_44257[134 /*12*/].f_2 = 0;
	Global_44257[134 /*12*/].f_3 = 1;
	Global_44257[134 /*12*/].f_10 = 1;
	Global_44257[134 /*12*/].f_11 = 0;
	Global_44257[134 /*12*/].f_4 = 1;
	Global_44257[134 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[134 /*12*/].f_5[0 /*4*/].f_1 = 135;
	Global_44257[134 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[134 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[135 /*12*/] = 317;
	Global_44257[135 /*12*/].f_1 = 318;
	Global_44257[135 /*12*/].f_2 = 1;
	Global_44257[135 /*12*/].f_3 = 0;
	Global_44257[135 /*12*/].f_10 = 0;
	Global_44257[135 /*12*/].f_11 = 0;
	Global_44257[135 /*12*/].f_4 = 0;
	Global_44257[136 /*12*/] = 322;
	Global_44257[136 /*12*/].f_1 = 323;
	Global_44257[136 /*12*/].f_2 = 33;
	Global_44257[136 /*12*/].f_3 = 2;
	Global_44257[136 /*12*/].f_10 = 1;
	Global_44257[136 /*12*/].f_11 = 0;
	Global_44257[136 /*12*/].f_4 = 1;
	Global_44257[136 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[136 /*12*/].f_5[0 /*4*/].f_1 = 137;
	Global_44257[136 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[136 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[137 /*12*/] = 324;
	Global_44257[137 /*12*/].f_1 = 325;
	Global_44257[137 /*12*/].f_2 = 2;
	Global_44257[137 /*12*/].f_3 = 33;
	Global_44257[137 /*12*/].f_10 = 0;
	Global_44257[137 /*12*/].f_11 = 0;
	Global_44257[137 /*12*/].f_4 = 0;
	Global_44257[138 /*12*/] = 326;
	Global_44257[138 /*12*/].f_1 = 327;
	Global_44257[138 /*12*/].f_2 = 33;
	Global_44257[138 /*12*/].f_3 = 2;
	Global_44257[138 /*12*/].f_10 = 1;
	Global_44257[138 /*12*/].f_11 = 0;
	Global_44257[138 /*12*/].f_4 = 1;
	Global_44257[138 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[138 /*12*/].f_5[0 /*4*/].f_1 = 139;
	Global_44257[138 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[138 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[139 /*12*/] = 328;
	Global_44257[139 /*12*/].f_1 = 329;
	Global_44257[139 /*12*/].f_2 = 2;
	Global_44257[139 /*12*/].f_3 = 33;
	Global_44257[139 /*12*/].f_10 = 0;
	Global_44257[139 /*12*/].f_11 = 0;
	Global_44257[139 /*12*/].f_4 = 1;
	Global_44257[139 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[139 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_44257[139 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[139 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[140 /*12*/] = 330;
	Global_44257[140 /*12*/].f_1 = 331;
	Global_44257[140 /*12*/].f_2 = 2;
	Global_44257[140 /*12*/].f_3 = 33;
	Global_44257[140 /*12*/].f_10 = 0;
	Global_44257[140 /*12*/].f_11 = 0;
	Global_44257[140 /*12*/].f_4 = 0;
	Global_44257[141 /*12*/] = 332;
	Global_44257[141 /*12*/].f_1 = 333;
	Global_44257[141 /*12*/].f_2 = 29;
	Global_44257[141 /*12*/].f_3 = 2;
	Global_44257[141 /*12*/].f_10 = 0;
	Global_44257[141 /*12*/].f_11 = 0;
	Global_44257[141 /*12*/].f_4 = 1;
	Global_44257[141 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[141 /*12*/].f_5[0 /*4*/].f_1 = 142;
	Global_44257[141 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[141 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[142 /*12*/] = 334;
	Global_44257[142 /*12*/].f_1 = 335;
	Global_44257[142 /*12*/].f_2 = 2;
	Global_44257[142 /*12*/].f_3 = 29;
	Global_44257[142 /*12*/].f_10 = 0;
	Global_44257[142 /*12*/].f_11 = 0;
	Global_44257[142 /*12*/].f_4 = 0;
	Global_44257[143 /*12*/] = 336;
	Global_44257[143 /*12*/].f_1 = 337;
	Global_44257[143 /*12*/].f_2 = 3;
	Global_44257[143 /*12*/].f_3 = 2;
	Global_44257[143 /*12*/].f_10 = 0;
	Global_44257[143 /*12*/].f_11 = 0;
	Global_44257[143 /*12*/].f_4 = 1;
	Global_44257[143 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[143 /*12*/].f_5[0 /*4*/].f_1 = 144;
	Global_44257[143 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[143 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[144 /*12*/] = 338;
	Global_44257[144 /*12*/].f_1 = 339;
	Global_44257[144 /*12*/].f_2 = 2;
	Global_44257[144 /*12*/].f_3 = 3;
	Global_44257[144 /*12*/].f_10 = 0;
	Global_44257[144 /*12*/].f_11 = 0;
	Global_44257[144 /*12*/].f_4 = 0;
	Global_44257[145 /*12*/] = 343;
	Global_44257[145 /*12*/].f_1 = 344;
	Global_44257[145 /*12*/].f_2 = 34;
	Global_44257[145 /*12*/].f_3 = 2;
	Global_44257[145 /*12*/].f_10 = 0;
	Global_44257[145 /*12*/].f_11 = 0;
	Global_44257[145 /*12*/].f_4 = 1;
	Global_44257[145 /*12*/].f_5[0 /*4*/] = 199;
	Global_44257[145 /*12*/].f_5[0 /*4*/].f_1 = 146;
	Global_44257[145 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[145 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[146 /*12*/] = 345;
	Global_44257[146 /*12*/].f_1 = 346;
	Global_44257[146 /*12*/].f_2 = 2;
	Global_44257[146 /*12*/].f_3 = 34;
	Global_44257[146 /*12*/].f_10 = 0;
	Global_44257[146 /*12*/].f_11 = 0;
	Global_44257[146 /*12*/].f_4 = 0;
	Global_44257[147 /*12*/] = 319;
	Global_44257[147 /*12*/].f_1 = 347;
	Global_44257[147 /*12*/].f_2 = 26;
	Global_44257[147 /*12*/].f_3 = 2;
	Global_44257[147 /*12*/].f_10 = 0;
	Global_44257[147 /*12*/].f_11 = 0;
	Global_44257[147 /*12*/].f_4 = 0;
	Global_44257[148 /*12*/] = 351;
	Global_44257[148 /*12*/].f_1 = 352;
	Global_44257[148 /*12*/].f_2 = 35;
	Global_44257[148 /*12*/].f_3 = 2;
	Global_44257[148 /*12*/].f_10 = 0;
	Global_44257[148 /*12*/].f_11 = 0;
	Global_44257[148 /*12*/].f_4 = 0;
	Global_44257[149 /*12*/] = 351;
	Global_44257[149 /*12*/].f_1 = 352;
	Global_44257[149 /*12*/].f_2 = 35;
	Global_44257[149 /*12*/].f_3 = 0;
	Global_44257[149 /*12*/].f_10 = 0;
	Global_44257[149 /*12*/].f_11 = 0;
	Global_44257[149 /*12*/].f_4 = 0;
	Global_44257[150 /*12*/] = 351;
	Global_44257[150 /*12*/].f_1 = 352;
	Global_44257[150 /*12*/].f_2 = 35;
	Global_44257[150 /*12*/].f_3 = 1;
	Global_44257[150 /*12*/].f_10 = 0;
	Global_44257[150 /*12*/].f_11 = 0;
	Global_44257[150 /*12*/].f_4 = 0;
	Global_44257[151 /*12*/] = 355;
	Global_44257[151 /*12*/].f_1 = 356;
	Global_44257[151 /*12*/].f_2 = 36;
	Global_44257[151 /*12*/].f_3 = 2;
	Global_44257[151 /*12*/].f_10 = 0;
	Global_44257[151 /*12*/].f_11 = 0;
	Global_44257[151 /*12*/].f_4 = 0;
	Global_44257[152 /*12*/] = 355;
	Global_44257[152 /*12*/].f_1 = 356;
	Global_44257[152 /*12*/].f_2 = 36;
	Global_44257[152 /*12*/].f_3 = 0;
	Global_44257[152 /*12*/].f_10 = 0;
	Global_44257[152 /*12*/].f_11 = 0;
	Global_44257[152 /*12*/].f_4 = 0;
	Global_44257[153 /*12*/] = 355;
	Global_44257[153 /*12*/].f_1 = 356;
	Global_44257[153 /*12*/].f_2 = 36;
	Global_44257[153 /*12*/].f_3 = 1;
	Global_44257[153 /*12*/].f_10 = 0;
	Global_44257[153 /*12*/].f_11 = 0;
	Global_44257[153 /*12*/].f_4 = 0;
	Global_44257[154 /*12*/] = 363;
	Global_44257[154 /*12*/].f_1 = 364;
	Global_44257[154 /*12*/].f_2 = 38;
	Global_44257[154 /*12*/].f_3 = 2;
	Global_44257[154 /*12*/].f_10 = 0;
	Global_44257[154 /*12*/].f_11 = 0;
	Global_44257[154 /*12*/].f_4 = 0;
	Global_44257[155 /*12*/] = 365;
	Global_44257[155 /*12*/].f_1 = 366;
	Global_44257[155 /*12*/].f_2 = 11;
	Global_44257[155 /*12*/].f_3 = 0;
	Global_44257[155 /*12*/].f_10 = 0;
	Global_44257[155 /*12*/].f_11 = 0;
	Global_44257[155 /*12*/].f_4 = 0;
	Global_44257[156 /*12*/] = 365;
	Global_44257[156 /*12*/].f_1 = 366;
	Global_44257[156 /*12*/].f_2 = 11;
	Global_44257[156 /*12*/].f_3 = 1;
	Global_44257[156 /*12*/].f_10 = 0;
	Global_44257[156 /*12*/].f_11 = 0;
	Global_44257[156 /*12*/].f_4 = 0;
	Global_44257[157 /*12*/] = 365;
	Global_44257[157 /*12*/].f_1 = 366;
	Global_44257[157 /*12*/].f_2 = 11;
	Global_44257[157 /*12*/].f_3 = 2;
	Global_44257[157 /*12*/].f_10 = 0;
	Global_44257[157 /*12*/].f_11 = 0;
	Global_44257[157 /*12*/].f_4 = 0;
	Global_44257[158 /*12*/] = 367;
	Global_44257[158 /*12*/].f_1 = 368;
	Global_44257[158 /*12*/].f_2 = 29;
	Global_44257[158 /*12*/].f_3 = 2;
	Global_44257[158 /*12*/].f_10 = 0;
	Global_44257[158 /*12*/].f_11 = 0;
	Global_44257[158 /*12*/].f_4 = 0;
	Global_44257[159 /*12*/] = 372;
	Global_44257[159 /*12*/].f_1 = 373;
	Global_44257[159 /*12*/].f_2 = 39;
	Global_44257[159 /*12*/].f_3 = 0;
	Global_44257[159 /*12*/].f_10 = 0;
	Global_44257[159 /*12*/].f_11 = 0;
	Global_44257[159 /*12*/].f_4 = 0;
	Global_44257[160 /*12*/] = 374;
	Global_44257[160 /*12*/].f_1 = 375;
	Global_44257[160 /*12*/].f_2 = 39;
	Global_44257[160 /*12*/].f_3 = 1;
	Global_44257[160 /*12*/].f_10 = 0;
	Global_44257[160 /*12*/].f_11 = 0;
	Global_44257[160 /*12*/].f_4 = 0;
	Global_44257[161 /*12*/] = 417;
	Global_44257[161 /*12*/].f_1 = 418;
	Global_44257[161 /*12*/].f_2 = 40;
	Global_44257[161 /*12*/].f_3 = 1;
	Global_44257[161 /*12*/].f_10 = 0;
	Global_44257[161 /*12*/].f_11 = 0;
	Global_44257[161 /*12*/].f_4 = 0;
	Global_44257[162 /*12*/] = 419;
	Global_44257[162 /*12*/].f_1 = 420;
	Global_44257[162 /*12*/].f_2 = 43;
	Global_44257[162 /*12*/].f_3 = 0;
	Global_44257[162 /*12*/].f_10 = 0;
	Global_44257[162 /*12*/].f_11 = 0;
	Global_44257[162 /*12*/].f_4 = 0;
	Global_44257[163 /*12*/] = 421;
	Global_44257[163 /*12*/].f_1 = 422;
	Global_44257[163 /*12*/].f_2 = 43;
	Global_44257[163 /*12*/].f_3 = 2;
	Global_44257[163 /*12*/].f_10 = 0;
	Global_44257[163 /*12*/].f_11 = 0;
	Global_44257[163 /*12*/].f_4 = 0;
	Global_44257[164 /*12*/] = 423;
	Global_44257[164 /*12*/].f_1 = 424;
	Global_44257[164 /*12*/].f_2 = 43;
	Global_44257[164 /*12*/].f_3 = 1;
	Global_44257[164 /*12*/].f_10 = 0;
	Global_44257[164 /*12*/].f_11 = 0;
	Global_44257[164 /*12*/].f_4 = 0;
	Global_44257[165 /*12*/] = 425;
	Global_44257[165 /*12*/].f_1 = 426;
	Global_44257[165 /*12*/].f_2 = 44;
	Global_44257[165 /*12*/].f_3 = 1;
	Global_44257[165 /*12*/].f_10 = 0;
	Global_44257[165 /*12*/].f_11 = 0;
	Global_44257[165 /*12*/].f_4 = 0;
	Global_44257[166 /*12*/] = 427;
	Global_44257[166 /*12*/].f_1 = 428;
	Global_44257[166 /*12*/].f_2 = 45;
	Global_44257[166 /*12*/].f_3 = 0;
	Global_44257[166 /*12*/].f_10 = 0;
	Global_44257[166 /*12*/].f_11 = 0;
	Global_44257[166 /*12*/].f_4 = 0;
	Global_44257[167 /*12*/] = 429;
	Global_44257[167 /*12*/].f_1 = 430;
	Global_44257[167 /*12*/].f_2 = 46;
	Global_44257[167 /*12*/].f_3 = 0;
	Global_44257[167 /*12*/].f_10 = 0;
	Global_44257[167 /*12*/].f_11 = 0;
	Global_44257[167 /*12*/].f_4 = 0;
	Global_44257[168 /*12*/] = 431;
	Global_44257[168 /*12*/].f_1 = 432;
	Global_44257[168 /*12*/].f_2 = 49;
	Global_44257[168 /*12*/].f_3 = 0;
	Global_44257[168 /*12*/].f_10 = 0;
	Global_44257[168 /*12*/].f_11 = 0;
	Global_44257[168 /*12*/].f_4 = 0;
	Global_44257[169 /*12*/] = 433;
	Global_44257[169 /*12*/].f_1 = 434;
	Global_44257[169 /*12*/].f_2 = 49;
	Global_44257[169 /*12*/].f_3 = 2;
	Global_44257[169 /*12*/].f_10 = 0;
	Global_44257[169 /*12*/].f_11 = 0;
	Global_44257[169 /*12*/].f_4 = 0;
	Global_44257[170 /*12*/] = 435;
	Global_44257[170 /*12*/].f_1 = 436;
	Global_44257[170 /*12*/].f_2 = 49;
	Global_44257[170 /*12*/].f_3 = 1;
	Global_44257[170 /*12*/].f_10 = 0;
	Global_44257[170 /*12*/].f_11 = 0;
	Global_44257[170 /*12*/].f_4 = 0;
	Global_44257[171 /*12*/] = 437;
	Global_44257[171 /*12*/].f_1 = 438;
	Global_44257[171 /*12*/].f_2 = 50;
	Global_44257[171 /*12*/].f_3 = 1;
	Global_44257[171 /*12*/].f_10 = 0;
	Global_44257[171 /*12*/].f_11 = 0;
	Global_44257[171 /*12*/].f_4 = 0;
	Global_44257[172 /*12*/] = 439;
	Global_44257[172 /*12*/].f_1 = 440;
	Global_44257[172 /*12*/].f_2 = 51;
	Global_44257[172 /*12*/].f_3 = 0;
	Global_44257[172 /*12*/].f_10 = 0;
	Global_44257[172 /*12*/].f_11 = 0;
	Global_44257[172 /*12*/].f_4 = 0;
	Global_44257[173 /*12*/] = 441;
	Global_44257[173 /*12*/].f_1 = 442;
	Global_44257[173 /*12*/].f_2 = 51;
	Global_44257[173 /*12*/].f_3 = 2;
	Global_44257[173 /*12*/].f_10 = 0;
	Global_44257[173 /*12*/].f_11 = 0;
	Global_44257[173 /*12*/].f_4 = 0;
	Global_44257[174 /*12*/] = 443;
	Global_44257[174 /*12*/].f_1 = 444;
	Global_44257[174 /*12*/].f_2 = 51;
	Global_44257[174 /*12*/].f_3 = 1;
	Global_44257[174 /*12*/].f_10 = 0;
	Global_44257[174 /*12*/].f_11 = 0;
	Global_44257[174 /*12*/].f_4 = 0;
	Global_44257[175 /*12*/] = 445;
	Global_44257[175 /*12*/].f_1 = 446;
	Global_44257[175 /*12*/].f_2 = 52;
	Global_44257[175 /*12*/].f_3 = 0;
	Global_44257[175 /*12*/].f_10 = 0;
	Global_44257[175 /*12*/].f_11 = 0;
	Global_44257[175 /*12*/].f_4 = 0;
	Global_44257[176 /*12*/] = 447;
	Global_44257[176 /*12*/].f_1 = 448;
	Global_44257[176 /*12*/].f_2 = 52;
	Global_44257[176 /*12*/].f_3 = 2;
	Global_44257[176 /*12*/].f_10 = 0;
	Global_44257[176 /*12*/].f_11 = 0;
	Global_44257[176 /*12*/].f_4 = 0;
	Global_44257[177 /*12*/] = 449;
	Global_44257[177 /*12*/].f_1 = 450;
	Global_44257[177 /*12*/].f_2 = 52;
	Global_44257[177 /*12*/].f_3 = 1;
	Global_44257[177 /*12*/].f_10 = 0;
	Global_44257[177 /*12*/].f_11 = 0;
	Global_44257[177 /*12*/].f_4 = 0;
	Global_44257[178 /*12*/] = 451;
	Global_44257[178 /*12*/].f_1 = 452;
	Global_44257[178 /*12*/].f_2 = 53;
	Global_44257[178 /*12*/].f_3 = 2;
	Global_44257[178 /*12*/].f_10 = 0;
	Global_44257[178 /*12*/].f_11 = 0;
	Global_44257[178 /*12*/].f_4 = 0;
	Global_44257[179 /*12*/] = 453;
	Global_44257[179 /*12*/].f_1 = 454;
	Global_44257[179 /*12*/].f_2 = 53;
	Global_44257[179 /*12*/].f_3 = 0;
	Global_44257[179 /*12*/].f_10 = 0;
	Global_44257[179 /*12*/].f_11 = 0;
	Global_44257[179 /*12*/].f_4 = 0;
	Global_44257[180 /*12*/] = 455;
	Global_44257[180 /*12*/].f_1 = 456;
	Global_44257[180 /*12*/].f_2 = 53;
	Global_44257[180 /*12*/].f_3 = 1;
	Global_44257[180 /*12*/].f_10 = 0;
	Global_44257[180 /*12*/].f_11 = 0;
	Global_44257[180 /*12*/].f_4 = 0;
	Global_44257[181 /*12*/] = 457;
	Global_44257[181 /*12*/].f_1 = 458;
	Global_44257[181 /*12*/].f_2 = 4;
	Global_44257[181 /*12*/].f_3 = 0;
	Global_44257[181 /*12*/].f_10 = 0;
	Global_44257[181 /*12*/].f_11 = 0;
	Global_44257[181 /*12*/].f_4 = 0;
	Global_44257[182 /*12*/] = 459;
	Global_44257[182 /*12*/].f_1 = 460;
	Global_44257[182 /*12*/].f_2 = 37;
	Global_44257[182 /*12*/].f_3 = 0;
	Global_44257[182 /*12*/].f_10 = 0;
	Global_44257[182 /*12*/].f_11 = 0;
	Global_44257[182 /*12*/].f_4 = 0;
	Global_44257[183 /*12*/] = 461;
	Global_44257[183 /*12*/].f_1 = 462;
	Global_44257[183 /*12*/].f_2 = 37;
	Global_44257[183 /*12*/].f_3 = 2;
	Global_44257[183 /*12*/].f_10 = 0;
	Global_44257[183 /*12*/].f_11 = 0;
	Global_44257[183 /*12*/].f_4 = 0;
	Global_44257[184 /*12*/] = 463;
	Global_44257[184 /*12*/].f_1 = 464;
	Global_44257[184 /*12*/].f_2 = 37;
	Global_44257[184 /*12*/].f_3 = 1;
	Global_44257[184 /*12*/].f_10 = 0;
	Global_44257[184 /*12*/].f_11 = 0;
	Global_44257[184 /*12*/].f_4 = 0;
	Global_44257[185 /*12*/] = 471;
	Global_44257[185 /*12*/].f_1 = 472;
	Global_44257[185 /*12*/].f_2 = 54;
	Global_44257[185 /*12*/].f_3 = 1;
	Global_44257[185 /*12*/].f_10 = 0;
	Global_44257[185 /*12*/].f_11 = 0;
	Global_44257[185 /*12*/].f_4 = 0;
	Global_44257[186 /*12*/] = 473;
	Global_44257[186 /*12*/].f_1 = 474;
	Global_44257[186 /*12*/].f_2 = 54;
	Global_44257[186 /*12*/].f_3 = 0;
	Global_44257[186 /*12*/].f_10 = 0;
	Global_44257[186 /*12*/].f_11 = 0;
	Global_44257[186 /*12*/].f_4 = 0;
	Global_44257[187 /*12*/] = 475;
	Global_44257[187 /*12*/].f_1 = 476;
	Global_44257[187 /*12*/].f_2 = 55;
	Global_44257[187 /*12*/].f_3 = 1;
	Global_44257[187 /*12*/].f_10 = 0;
	Global_44257[187 /*12*/].f_11 = 0;
	Global_44257[187 /*12*/].f_4 = 0;
	Global_44257[188 /*12*/] = 477;
	Global_44257[188 /*12*/].f_1 = 478;
	Global_44257[188 /*12*/].f_2 = 54;
	Global_44257[188 /*12*/].f_3 = 2;
	Global_44257[188 /*12*/].f_10 = 0;
	Global_44257[188 /*12*/].f_11 = 0;
	Global_44257[188 /*12*/].f_4 = 0;
	Global_44257[189 /*12*/] = 479;
	Global_44257[189 /*12*/].f_1 = 480;
	Global_44257[189 /*12*/].f_2 = 55;
	Global_44257[189 /*12*/].f_3 = 0;
	Global_44257[189 /*12*/].f_10 = 0;
	Global_44257[189 /*12*/].f_11 = 0;
	Global_44257[189 /*12*/].f_4 = 0;
	Global_44257[190 /*12*/] = 481;
	Global_44257[190 /*12*/].f_1 = 482;
	Global_44257[190 /*12*/].f_2 = 55;
	Global_44257[190 /*12*/].f_3 = 2;
	Global_44257[190 /*12*/].f_10 = 0;
	Global_44257[190 /*12*/].f_11 = 0;
	Global_44257[190 /*12*/].f_4 = 0;
	Global_44257[191 /*12*/] = 483;
	Global_44257[191 /*12*/].f_1 = 484;
	Global_44257[191 /*12*/].f_2 = 12;
	Global_44257[191 /*12*/].f_3 = 0;
	Global_44257[191 /*12*/].f_10 = 0;
	Global_44257[191 /*12*/].f_11 = 0;
	Global_44257[191 /*12*/].f_4 = 0;
	Global_44257[192 /*12*/] = 485;
	Global_44257[192 /*12*/].f_1 = 486;
	Global_44257[192 /*12*/].f_2 = 12;
	Global_44257[192 /*12*/].f_3 = 1;
	Global_44257[192 /*12*/].f_10 = 0;
	Global_44257[192 /*12*/].f_11 = 0;
	Global_44257[192 /*12*/].f_4 = 0;
	Global_44257[193 /*12*/] = 487;
	Global_44257[193 /*12*/].f_1 = 488;
	Global_44257[193 /*12*/].f_2 = 12;
	Global_44257[193 /*12*/].f_3 = 2;
	Global_44257[193 /*12*/].f_10 = 0;
	Global_44257[193 /*12*/].f_11 = 0;
	Global_44257[193 /*12*/].f_4 = 0;
	Global_44257[194 /*12*/] = 510;
	Global_44257[194 /*12*/].f_1 = 511;
	Global_44257[194 /*12*/].f_2 = 56;
	Global_44257[194 /*12*/].f_3 = 0;
	Global_44257[194 /*12*/].f_10 = 0;
	Global_44257[194 /*12*/].f_11 = 0;
	Global_44257[194 /*12*/].f_4 = 0;
	Global_44257[195 /*12*/] = 512;
	Global_44257[195 /*12*/].f_1 = 513;
	Global_44257[195 /*12*/].f_2 = 56;
	Global_44257[195 /*12*/].f_3 = 0;
	Global_44257[195 /*12*/].f_10 = 0;
	Global_44257[195 /*12*/].f_11 = 0;
	Global_44257[195 /*12*/].f_4 = 0;
	Global_44257[196 /*12*/] = 514;
	Global_44257[196 /*12*/].f_1 = 515;
	Global_44257[196 /*12*/].f_2 = 56;
	Global_44257[196 /*12*/].f_3 = 0;
	Global_44257[196 /*12*/].f_10 = 0;
	Global_44257[196 /*12*/].f_11 = 0;
	Global_44257[196 /*12*/].f_4 = 0;
	Global_44257[197 /*12*/] = 516;
	Global_44257[197 /*12*/].f_1 = 517;
	Global_44257[197 /*12*/].f_2 = 56;
	Global_44257[197 /*12*/].f_3 = 0;
	Global_44257[197 /*12*/].f_10 = 0;
	Global_44257[197 /*12*/].f_11 = 0;
	Global_44257[197 /*12*/].f_4 = 0;
	Global_44257[198 /*12*/] = 518;
	Global_44257[198 /*12*/].f_1 = 519;
	Global_44257[198 /*12*/].f_2 = 56;
	Global_44257[198 /*12*/].f_3 = 0;
	Global_44257[198 /*12*/].f_10 = 0;
	Global_44257[198 /*12*/].f_11 = 0;
	Global_44257[198 /*12*/].f_4 = 0;
	Global_44257[199 /*12*/] = 520;
	Global_44257[199 /*12*/].f_1 = 521;
	Global_44257[199 /*12*/].f_2 = 57;
	Global_44257[199 /*12*/].f_3 = 0;
	Global_44257[199 /*12*/].f_10 = 1;
	Global_44257[199 /*12*/].f_11 = 60000;
	Global_44257[199 /*12*/].f_4 = 1;
	Global_44257[199 /*12*/].f_5[0 /*4*/] = 536;
	Global_44257[199 /*12*/].f_5[0 /*4*/].f_1 = 200;
	Global_44257[199 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[199 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[200 /*12*/] = 522;
	Global_44257[200 /*12*/].f_1 = 523;
	Global_44257[200 /*12*/].f_2 = 0;
	Global_44257[200 /*12*/].f_3 = 57;
	Global_44257[200 /*12*/].f_10 = 0;
	Global_44257[200 /*12*/].f_11 = 0;
	Global_44257[200 /*12*/].f_4 = 1;
	Global_44257[200 /*12*/].f_5[0 /*4*/] = 537;
	Global_44257[200 /*12*/].f_5[0 /*4*/].f_1 = 201;
	Global_44257[200 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[200 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[201 /*12*/] = 524;
	Global_44257[201 /*12*/].f_1 = 525;
	Global_44257[201 /*12*/].f_2 = 57;
	Global_44257[201 /*12*/].f_3 = 0;
	Global_44257[201 /*12*/].f_10 = 1;
	Global_44257[201 /*12*/].f_11 = 60000;
	Global_44257[201 /*12*/].f_4 = 1;
	Global_44257[201 /*12*/].f_5[0 /*4*/] = 538;
	Global_44257[201 /*12*/].f_5[0 /*4*/].f_1 = 202;
	Global_44257[201 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[201 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[202 /*12*/] = 526;
	Global_44257[202 /*12*/].f_1 = 527;
	Global_44257[202 /*12*/].f_2 = 0;
	Global_44257[202 /*12*/].f_3 = 57;
	Global_44257[202 /*12*/].f_10 = 0;
	Global_44257[202 /*12*/].f_11 = 0;
	Global_44257[202 /*12*/].f_4 = 1;
	Global_44257[202 /*12*/].f_5[0 /*4*/] = 539;
	Global_44257[202 /*12*/].f_5[0 /*4*/].f_1 = 203;
	Global_44257[202 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[202 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[203 /*12*/] = 528;
	Global_44257[203 /*12*/].f_1 = 529;
	Global_44257[203 /*12*/].f_2 = 57;
	Global_44257[203 /*12*/].f_3 = 0;
	Global_44257[203 /*12*/].f_10 = 1;
	Global_44257[203 /*12*/].f_11 = 60000;
	Global_44257[203 /*12*/].f_4 = 1;
	Global_44257[203 /*12*/].f_5[0 /*4*/] = 540;
	Global_44257[203 /*12*/].f_5[0 /*4*/].f_1 = 204;
	Global_44257[203 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[203 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[204 /*12*/] = 530;
	Global_44257[204 /*12*/].f_1 = 531;
	Global_44257[204 /*12*/].f_2 = 0;
	Global_44257[204 /*12*/].f_3 = 57;
	Global_44257[204 /*12*/].f_10 = 0;
	Global_44257[204 /*12*/].f_11 = 0;
	Global_44257[204 /*12*/].f_4 = 1;
	Global_44257[204 /*12*/].f_5[0 /*4*/] = 541;
	Global_44257[204 /*12*/].f_5[0 /*4*/].f_1 = 205;
	Global_44257[204 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[204 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[205 /*12*/] = 532;
	Global_44257[205 /*12*/].f_1 = 533;
	Global_44257[205 /*12*/].f_2 = 57;
	Global_44257[205 /*12*/].f_3 = 0;
	Global_44257[205 /*12*/].f_10 = 1;
	Global_44257[205 /*12*/].f_11 = 60000;
	Global_44257[205 /*12*/].f_4 = 1;
	Global_44257[205 /*12*/].f_5[0 /*4*/] = 542;
	Global_44257[205 /*12*/].f_5[0 /*4*/].f_1 = 206;
	Global_44257[205 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[205 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[206 /*12*/] = 534;
	Global_44257[206 /*12*/].f_1 = 535;
	Global_44257[206 /*12*/].f_2 = 0;
	Global_44257[206 /*12*/].f_3 = 57;
	Global_44257[206 /*12*/].f_10 = 0;
	Global_44257[206 /*12*/].f_11 = 0;
	Global_44257[206 /*12*/].f_4 = 0;
	Global_44257[207 /*12*/] = 543;
	Global_44257[207 /*12*/].f_1 = 544;
	Global_44257[207 /*12*/].f_2 = 58;
	Global_44257[207 /*12*/].f_3 = 0;
	Global_44257[207 /*12*/].f_10 = 1;
	Global_44257[207 /*12*/].f_11 = 60000;
	Global_44257[207 /*12*/].f_4 = 1;
	Global_44257[207 /*12*/].f_5[0 /*4*/] = 557;
	Global_44257[207 /*12*/].f_5[0 /*4*/].f_1 = 208;
	Global_44257[207 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[207 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[208 /*12*/] = 545;
	Global_44257[208 /*12*/].f_1 = 546;
	Global_44257[208 /*12*/].f_2 = 0;
	Global_44257[208 /*12*/].f_3 = 58;
	Global_44257[208 /*12*/].f_10 = 0;
	Global_44257[208 /*12*/].f_11 = 0;
	Global_44257[208 /*12*/].f_4 = 1;
	Global_44257[208 /*12*/].f_5[0 /*4*/] = 558;
	Global_44257[208 /*12*/].f_5[0 /*4*/].f_1 = 209;
	Global_44257[208 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[208 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[209 /*12*/] = 547;
	Global_44257[209 /*12*/].f_1 = 548;
	Global_44257[209 /*12*/].f_2 = 58;
	Global_44257[209 /*12*/].f_3 = 0;
	Global_44257[209 /*12*/].f_10 = 1;
	Global_44257[209 /*12*/].f_11 = 60000;
	Global_44257[209 /*12*/].f_4 = 1;
	Global_44257[209 /*12*/].f_5[0 /*4*/] = 559;
	Global_44257[209 /*12*/].f_5[0 /*4*/].f_1 = 210;
	Global_44257[209 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[209 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[210 /*12*/] = 549;
	Global_44257[210 /*12*/].f_1 = 550;
	Global_44257[210 /*12*/].f_2 = 0;
	Global_44257[210 /*12*/].f_3 = 58;
	Global_44257[210 /*12*/].f_10 = 0;
	Global_44257[210 /*12*/].f_11 = 0;
	Global_44257[210 /*12*/].f_4 = 1;
	Global_44257[210 /*12*/].f_5[0 /*4*/] = 560;
	Global_44257[210 /*12*/].f_5[0 /*4*/].f_1 = 211;
	Global_44257[210 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[210 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[211 /*12*/] = 551;
	Global_44257[211 /*12*/].f_1 = 552;
	Global_44257[211 /*12*/].f_2 = 58;
	Global_44257[211 /*12*/].f_3 = 0;
	Global_44257[211 /*12*/].f_10 = 1;
	Global_44257[211 /*12*/].f_11 = 60000;
	Global_44257[211 /*12*/].f_4 = 1;
	Global_44257[211 /*12*/].f_5[0 /*4*/] = 561;
	Global_44257[211 /*12*/].f_5[0 /*4*/].f_1 = 212;
	Global_44257[211 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[211 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[212 /*12*/] = 553;
	Global_44257[212 /*12*/].f_1 = 554;
	Global_44257[212 /*12*/].f_2 = 0;
	Global_44257[212 /*12*/].f_3 = 58;
	Global_44257[212 /*12*/].f_10 = 0;
	Global_44257[212 /*12*/].f_11 = 0;
	Global_44257[212 /*12*/].f_4 = 1;
	Global_44257[212 /*12*/].f_5[0 /*4*/] = 562;
	Global_44257[212 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_44257[212 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[212 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[213 /*12*/] = 555;
	Global_44257[213 /*12*/].f_1 = 556;
	Global_44257[213 /*12*/].f_2 = 58;
	Global_44257[213 /*12*/].f_3 = 0;
	Global_44257[213 /*12*/].f_10 = 1;
	Global_44257[213 /*12*/].f_11 = 60000;
	Global_44257[213 /*12*/].f_4 = 0;
	Global_44257[214 /*12*/] = 563;
	Global_44257[214 /*12*/].f_1 = 564;
	Global_44257[214 /*12*/].f_2 = 59;
	Global_44257[214 /*12*/].f_3 = 0;
	Global_44257[214 /*12*/].f_10 = 1;
	Global_44257[214 /*12*/].f_11 = 60000;
	Global_44257[214 /*12*/].f_4 = 1;
	Global_44257[214 /*12*/].f_5[0 /*4*/] = 579;
	Global_44257[214 /*12*/].f_5[0 /*4*/].f_1 = 215;
	Global_44257[214 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[214 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[215 /*12*/] = 565;
	Global_44257[215 /*12*/].f_1 = 566;
	Global_44257[215 /*12*/].f_2 = 0;
	Global_44257[215 /*12*/].f_3 = 59;
	Global_44257[215 /*12*/].f_10 = 0;
	Global_44257[215 /*12*/].f_11 = 0;
	Global_44257[215 /*12*/].f_4 = 1;
	Global_44257[215 /*12*/].f_5[0 /*4*/] = 580;
	Global_44257[215 /*12*/].f_5[0 /*4*/].f_1 = 216;
	Global_44257[215 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[215 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[216 /*12*/] = 567;
	Global_44257[216 /*12*/].f_1 = 568;
	Global_44257[216 /*12*/].f_2 = 59;
	Global_44257[216 /*12*/].f_3 = 0;
	Global_44257[216 /*12*/].f_10 = 1;
	Global_44257[216 /*12*/].f_11 = 60000;
	Global_44257[216 /*12*/].f_4 = 1;
	Global_44257[216 /*12*/].f_5[0 /*4*/] = 581;
	Global_44257[216 /*12*/].f_5[0 /*4*/].f_1 = 217;
	Global_44257[216 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[216 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[217 /*12*/] = 569;
	Global_44257[217 /*12*/].f_1 = 570;
	Global_44257[217 /*12*/].f_2 = 0;
	Global_44257[217 /*12*/].f_3 = 59;
	Global_44257[217 /*12*/].f_10 = 0;
	Global_44257[217 /*12*/].f_11 = 0;
	Global_44257[217 /*12*/].f_4 = 1;
	Global_44257[217 /*12*/].f_5[0 /*4*/] = 582;
	Global_44257[217 /*12*/].f_5[0 /*4*/].f_1 = 218;
	Global_44257[217 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[217 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[218 /*12*/] = 571;
	Global_44257[218 /*12*/].f_1 = 572;
	Global_44257[218 /*12*/].f_2 = 59;
	Global_44257[218 /*12*/].f_3 = 0;
	Global_44257[218 /*12*/].f_10 = 1;
	Global_44257[218 /*12*/].f_11 = 60000;
	Global_44257[218 /*12*/].f_4 = 1;
	Global_44257[218 /*12*/].f_5[0 /*4*/] = 583;
	Global_44257[218 /*12*/].f_5[0 /*4*/].f_1 = 219;
	Global_44257[218 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[218 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[219 /*12*/] = 573;
	Global_44257[219 /*12*/].f_1 = 574;
	Global_44257[219 /*12*/].f_2 = 0;
	Global_44257[219 /*12*/].f_3 = 59;
	Global_44257[219 /*12*/].f_10 = 0;
	Global_44257[219 /*12*/].f_11 = 0;
	Global_44257[219 /*12*/].f_4 = 1;
	Global_44257[219 /*12*/].f_5[0 /*4*/] = 584;
	Global_44257[219 /*12*/].f_5[0 /*4*/].f_1 = 220;
	Global_44257[219 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[219 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[220 /*12*/] = 575;
	Global_44257[220 /*12*/].f_1 = 576;
	Global_44257[220 /*12*/].f_2 = 59;
	Global_44257[220 /*12*/].f_3 = 0;
	Global_44257[220 /*12*/].f_10 = 1;
	Global_44257[220 /*12*/].f_11 = 60000;
	Global_44257[220 /*12*/].f_4 = 1;
	Global_44257[220 /*12*/].f_5[0 /*4*/] = 585;
	Global_44257[220 /*12*/].f_5[0 /*4*/].f_1 = 221;
	Global_44257[220 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[220 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[221 /*12*/] = 577;
	Global_44257[221 /*12*/].f_1 = 578;
	Global_44257[221 /*12*/].f_2 = 0;
	Global_44257[221 /*12*/].f_3 = 59;
	Global_44257[221 /*12*/].f_10 = 0;
	Global_44257[221 /*12*/].f_11 = 0;
	Global_44257[221 /*12*/].f_4 = 0;
	Global_44257[222 /*12*/] = 586;
	Global_44257[222 /*12*/].f_1 = 587;
	Global_44257[222 /*12*/].f_2 = 60;
	Global_44257[222 /*12*/].f_3 = 2;
	Global_44257[222 /*12*/].f_10 = 1;
	Global_44257[222 /*12*/].f_11 = 60000;
	Global_44257[222 /*12*/].f_4 = 1;
	Global_44257[222 /*12*/].f_5[0 /*4*/] = 600;
	Global_44257[222 /*12*/].f_5[0 /*4*/].f_1 = 223;
	Global_44257[222 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[222 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[223 /*12*/] = 588;
	Global_44257[223 /*12*/].f_1 = 589;
	Global_44257[223 /*12*/].f_2 = 2;
	Global_44257[223 /*12*/].f_3 = 60;
	Global_44257[223 /*12*/].f_10 = 0;
	Global_44257[223 /*12*/].f_11 = 0;
	Global_44257[223 /*12*/].f_4 = 1;
	Global_44257[223 /*12*/].f_5[0 /*4*/] = 601;
	Global_44257[223 /*12*/].f_5[0 /*4*/].f_1 = 224;
	Global_44257[223 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[223 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[224 /*12*/] = 590;
	Global_44257[224 /*12*/].f_1 = 591;
	Global_44257[224 /*12*/].f_2 = 60;
	Global_44257[224 /*12*/].f_3 = 2;
	Global_44257[224 /*12*/].f_10 = 1;
	Global_44257[224 /*12*/].f_11 = 60000;
	Global_44257[224 /*12*/].f_4 = 1;
	Global_44257[224 /*12*/].f_5[0 /*4*/] = 602;
	Global_44257[224 /*12*/].f_5[0 /*4*/].f_1 = 225;
	Global_44257[224 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[224 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[225 /*12*/] = 592;
	Global_44257[225 /*12*/].f_1 = 593;
	Global_44257[225 /*12*/].f_2 = 2;
	Global_44257[225 /*12*/].f_3 = 60;
	Global_44257[225 /*12*/].f_10 = 0;
	Global_44257[225 /*12*/].f_11 = 0;
	Global_44257[225 /*12*/].f_4 = 1;
	Global_44257[225 /*12*/].f_5[0 /*4*/] = 603;
	Global_44257[225 /*12*/].f_5[0 /*4*/].f_1 = 226;
	Global_44257[225 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[225 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[226 /*12*/] = 594;
	Global_44257[226 /*12*/].f_1 = 595;
	Global_44257[226 /*12*/].f_2 = 60;
	Global_44257[226 /*12*/].f_3 = 2;
	Global_44257[226 /*12*/].f_10 = 1;
	Global_44257[226 /*12*/].f_11 = 60000;
	Global_44257[226 /*12*/].f_4 = 1;
	Global_44257[226 /*12*/].f_5[0 /*4*/] = 604;
	Global_44257[226 /*12*/].f_5[0 /*4*/].f_1 = 227;
	Global_44257[226 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[226 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[227 /*12*/] = 596;
	Global_44257[227 /*12*/].f_1 = 597;
	Global_44257[227 /*12*/].f_2 = 2;
	Global_44257[227 /*12*/].f_3 = 60;
	Global_44257[227 /*12*/].f_10 = 1;
	Global_44257[227 /*12*/].f_11 = 60000;
	Global_44257[227 /*12*/].f_4 = 1;
	Global_44257[227 /*12*/].f_5[0 /*4*/] = 605;
	Global_44257[227 /*12*/].f_5[0 /*4*/].f_1 = 228;
	Global_44257[227 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[227 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[228 /*12*/] = 598;
	Global_44257[228 /*12*/].f_1 = 599;
	Global_44257[228 /*12*/].f_2 = 2;
	Global_44257[228 /*12*/].f_3 = 60;
	Global_44257[228 /*12*/].f_10 = 0;
	Global_44257[228 /*12*/].f_11 = 0;
	Global_44257[228 /*12*/].f_4 = 0;
	Global_44257[229 /*12*/] = 606;
	Global_44257[229 /*12*/].f_1 = 607;
	Global_44257[229 /*12*/].f_2 = 61;
	Global_44257[229 /*12*/].f_3 = 2;
	Global_44257[229 /*12*/].f_10 = 1;
	Global_44257[229 /*12*/].f_11 = 60000;
	Global_44257[229 /*12*/].f_4 = 1;
	Global_44257[229 /*12*/].f_5[0 /*4*/] = 610;
	Global_44257[229 /*12*/].f_5[0 /*4*/].f_1 = 230;
	Global_44257[229 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[229 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[230 /*12*/] = 608;
	Global_44257[230 /*12*/].f_1 = 609;
	Global_44257[230 /*12*/].f_2 = 2;
	Global_44257[230 /*12*/].f_3 = 61;
	Global_44257[230 /*12*/].f_10 = 0;
	Global_44257[230 /*12*/].f_11 = 0;
	Global_44257[230 /*12*/].f_4 = 1;
	Global_44257[230 /*12*/].f_5[0 /*4*/] = 617;
	Global_44257[230 /*12*/].f_5[0 /*4*/].f_1 = 231;
	Global_44257[230 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[230 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[231 /*12*/] = 611;
	Global_44257[231 /*12*/].f_1 = 612;
	Global_44257[231 /*12*/].f_2 = 61;
	Global_44257[231 /*12*/].f_3 = 2;
	Global_44257[231 /*12*/].f_10 = 1;
	Global_44257[231 /*12*/].f_11 = 60000;
	Global_44257[231 /*12*/].f_4 = 1;
	Global_44257[231 /*12*/].f_5[0 /*4*/] = 618;
	Global_44257[231 /*12*/].f_5[0 /*4*/].f_1 = 232;
	Global_44257[231 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[231 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[232 /*12*/] = 613;
	Global_44257[232 /*12*/].f_1 = 614;
	Global_44257[232 /*12*/].f_2 = 2;
	Global_44257[232 /*12*/].f_3 = 61;
	Global_44257[232 /*12*/].f_10 = 0;
	Global_44257[232 /*12*/].f_11 = 0;
	Global_44257[232 /*12*/].f_4 = 1;
	Global_44257[232 /*12*/].f_5[0 /*4*/] = 619;
	Global_44257[232 /*12*/].f_5[0 /*4*/].f_1 = 233;
	Global_44257[232 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[232 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[233 /*12*/] = 615;
	Global_44257[233 /*12*/].f_1 = 616;
	Global_44257[233 /*12*/].f_2 = 61;
	Global_44257[233 /*12*/].f_3 = 2;
	Global_44257[233 /*12*/].f_10 = 1;
	Global_44257[233 /*12*/].f_11 = 60000;
	Global_44257[233 /*12*/].f_4 = 1;
	Global_44257[233 /*12*/].f_5[0 /*4*/] = 622;
	Global_44257[233 /*12*/].f_5[0 /*4*/].f_1 = 234;
	Global_44257[233 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[233 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[234 /*12*/] = 620;
	Global_44257[234 /*12*/].f_1 = 621;
	Global_44257[234 /*12*/].f_2 = 2;
	Global_44257[234 /*12*/].f_3 = 61;
	Global_44257[234 /*12*/].f_10 = 0;
	Global_44257[234 /*12*/].f_11 = 0;
	Global_44257[234 /*12*/].f_4 = 0;
	Global_44257[235 /*12*/] = 623;
	Global_44257[235 /*12*/].f_1 = 624;
	Global_44257[235 /*12*/].f_2 = 62;
	Global_44257[235 /*12*/].f_3 = 2;
	Global_44257[235 /*12*/].f_10 = 1;
	Global_44257[235 /*12*/].f_11 = 60000;
	Global_44257[235 /*12*/].f_4 = 1;
	Global_44257[235 /*12*/].f_5[0 /*4*/] = 635;
	Global_44257[235 /*12*/].f_5[0 /*4*/].f_1 = 236;
	Global_44257[235 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[235 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[236 /*12*/] = 625;
	Global_44257[236 /*12*/].f_1 = 626;
	Global_44257[236 /*12*/].f_2 = 2;
	Global_44257[236 /*12*/].f_3 = 62;
	Global_44257[236 /*12*/].f_10 = 0;
	Global_44257[236 /*12*/].f_11 = 0;
	Global_44257[236 /*12*/].f_4 = 1;
	Global_44257[236 /*12*/].f_5[0 /*4*/] = 636;
	Global_44257[236 /*12*/].f_5[0 /*4*/].f_1 = 237;
	Global_44257[236 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[236 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[237 /*12*/] = 627;
	Global_44257[237 /*12*/].f_1 = 628;
	Global_44257[237 /*12*/].f_2 = 62;
	Global_44257[237 /*12*/].f_3 = 2;
	Global_44257[237 /*12*/].f_10 = 1;
	Global_44257[237 /*12*/].f_11 = 60000;
	Global_44257[237 /*12*/].f_4 = 1;
	Global_44257[237 /*12*/].f_5[0 /*4*/] = 637;
	Global_44257[237 /*12*/].f_5[0 /*4*/].f_1 = 238;
	Global_44257[237 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[237 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[238 /*12*/] = 629;
	Global_44257[238 /*12*/].f_1 = 630;
	Global_44257[238 /*12*/].f_2 = 2;
	Global_44257[238 /*12*/].f_3 = 62;
	Global_44257[238 /*12*/].f_10 = 0;
	Global_44257[238 /*12*/].f_11 = 0;
	Global_44257[238 /*12*/].f_4 = 1;
	Global_44257[238 /*12*/].f_5[0 /*4*/] = 638;
	Global_44257[238 /*12*/].f_5[0 /*4*/].f_1 = 239;
	Global_44257[238 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[238 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[239 /*12*/] = 631;
	Global_44257[239 /*12*/].f_1 = 632;
	Global_44257[239 /*12*/].f_2 = 62;
	Global_44257[239 /*12*/].f_3 = 2;
	Global_44257[239 /*12*/].f_10 = 1;
	Global_44257[239 /*12*/].f_11 = 60000;
	Global_44257[239 /*12*/].f_4 = 1;
	Global_44257[239 /*12*/].f_5[0 /*4*/] = 639;
	Global_44257[239 /*12*/].f_5[0 /*4*/].f_1 = 240;
	Global_44257[239 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_44257[239 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_44257[240 /*12*/] = 633;
	Global_44257[240 /*12*/].f_1 = 634;
	Global_44257[240 /*12*/].f_2 = 2;
	Global_44257[240 /*12*/].f_3 = 62;
	Global_44257[240 /*12*/].f_10 = 0;
	Global_44257[240 /*12*/].f_11 = 0;
	Global_44257[240 /*12*/].f_4 = 0;
	Global_44257[241 /*12*/] = 646;
	Global_44257[241 /*12*/].f_1 = 647;
	Global_44257[241 /*12*/].f_2 = 36;
	Global_44257[241 /*12*/].f_3 = 2;
	Global_44257[241 /*12*/].f_10 = 0;
	Global_44257[241 /*12*/].f_11 = 0;
	Global_44257[241 /*12*/].f_4 = 0;
	Global_44257[242 /*12*/] = 648;
	Global_44257[242 /*12*/].f_1 = 649;
	Global_44257[242 /*12*/].f_2 = 36;
	Global_44257[242 /*12*/].f_3 = 0;
	Global_44257[242 /*12*/].f_10 = 0;
	Global_44257[242 /*12*/].f_11 = 0;
	Global_44257[242 /*12*/].f_4 = 0;
	Global_44257[243 /*12*/] = 650;
	Global_44257[243 /*12*/].f_1 = 651;
	Global_44257[243 /*12*/].f_2 = 36;
	Global_44257[243 /*12*/].f_3 = 1;
	Global_44257[243 /*12*/].f_10 = 0;
	Global_44257[243 /*12*/].f_11 = 0;
	Global_44257[243 /*12*/].f_4 = 0;
	Global_44257[244 /*12*/] = 655;
	Global_44257[244 /*12*/].f_1 = 656;
	Global_44257[244 /*12*/].f_2 = 65;
	Global_44257[244 /*12*/].f_3 = 1;
	Global_44257[244 /*12*/].f_10 = 0;
	Global_44257[244 /*12*/].f_11 = 0;
	Global_44257[244 /*12*/].f_4 = 0;
	Global_44257[245 /*12*/] = 657;
	Global_44257[245 /*12*/].f_1 = 658;
	Global_44257[245 /*12*/].f_2 = 65;
	Global_44257[245 /*12*/].f_3 = 1;
	Global_44257[245 /*12*/].f_10 = 0;
	Global_44257[245 /*12*/].f_11 = 0;
	Global_44257[245 /*12*/].f_4 = 0;
	Global_44257[246 /*12*/] = 659;
	Global_44257[246 /*12*/].f_1 = 660;
	Global_44257[246 /*12*/].f_2 = 65;
	Global_44257[246 /*12*/].f_3 = 1;
	Global_44257[246 /*12*/].f_10 = 0;
	Global_44257[246 /*12*/].f_11 = 0;
	Global_44257[246 /*12*/].f_4 = 0;
	Global_44257[247 /*12*/] = 661;
	Global_44257[247 /*12*/].f_1 = 662;
	Global_44257[247 /*12*/].f_2 = 65;
	Global_44257[247 /*12*/].f_3 = 1;
	Global_44257[247 /*12*/].f_10 = 0;
	Global_44257[247 /*12*/].f_11 = 0;
	Global_44257[247 /*12*/].f_4 = 0;
	Global_44257[248 /*12*/] = 663;
	Global_44257[248 /*12*/].f_1 = 664;
	Global_44257[248 /*12*/].f_2 = 33;
	Global_44257[248 /*12*/].f_3 = 2;
	Global_44257[248 /*12*/].f_10 = 0;
	Global_44257[248 /*12*/].f_11 = 40000;
	Global_44257[248 /*12*/].f_4 = 0;
	Global_44257[249 /*12*/] = 665;
	Global_44257[249 /*12*/].f_1 = 666;
	Global_44257[249 /*12*/].f_2 = 19;
	Global_44257[249 /*12*/].f_3 = 1;
	Global_44257[249 /*12*/].f_10 = 1;
	Global_44257[249 /*12*/].f_11 = 0;
	Global_44257[249 /*12*/].f_4 = 0;
	Global_44257[250 /*12*/] = 667;
	Global_44257[250 /*12*/].f_1 = 668;
	Global_44257[250 /*12*/].f_2 = 19;
	Global_44257[250 /*12*/].f_3 = 1;
	Global_44257[250 /*12*/].f_10 = 1;
	Global_44257[250 /*12*/].f_11 = 0;
	Global_44257[250 /*12*/].f_4 = 0;
	Global_44257[251 /*12*/] = 669;
	Global_44257[251 /*12*/].f_1 = 670;
	Global_44257[251 /*12*/].f_2 = 19;
	Global_44257[251 /*12*/].f_3 = 1;
	Global_44257[251 /*12*/].f_10 = 1;
	Global_44257[251 /*12*/].f_11 = 0;
	Global_44257[251 /*12*/].f_4 = 0;
	Global_44257[252 /*12*/] = 671;
	Global_44257[252 /*12*/].f_1 = 672;
	Global_44257[252 /*12*/].f_2 = 19;
	Global_44257[252 /*12*/].f_3 = 1;
	Global_44257[252 /*12*/].f_10 = 1;
	Global_44257[252 /*12*/].f_11 = 0;
	Global_44257[252 /*12*/].f_4 = 0;
	Global_44257[253 /*12*/] = 673;
	Global_44257[253 /*12*/].f_1 = 674;
	Global_44257[253 /*12*/].f_2 = 19;
	Global_44257[253 /*12*/].f_3 = 1;
	Global_44257[253 /*12*/].f_10 = 1;
	Global_44257[253 /*12*/].f_11 = 0;
	Global_44257[253 /*12*/].f_4 = 0;
	Global_44257[254 /*12*/] = 675;
	Global_44257[254 /*12*/].f_1 = 676;
	Global_44257[254 /*12*/].f_2 = 19;
	Global_44257[254 /*12*/].f_3 = 1;
	Global_44257[254 /*12*/].f_10 = 1;
	Global_44257[254 /*12*/].f_11 = 0;
	Global_44257[254 /*12*/].f_4 = 0;
	Global_44257[255 /*12*/] = 679;
	Global_44257[255 /*12*/].f_1 = 680;
	Global_44257[255 /*12*/].f_2 = 19;
	Global_44257[255 /*12*/].f_3 = 1;
	Global_44257[255 /*12*/].f_10 = 1;
	Global_44257[255 /*12*/].f_11 = 0;
	Global_44257[255 /*12*/].f_4 = 0;
	Global_44257[256 /*12*/] = 677;
	Global_44257[256 /*12*/].f_1 = 678;
	Global_44257[256 /*12*/].f_2 = 19;
	Global_44257[256 /*12*/].f_3 = 1;
	Global_44257[256 /*12*/].f_10 = 1;
	Global_44257[256 /*12*/].f_11 = 0;
	Global_44257[256 /*12*/].f_4 = 0;
	Global_44257[257 /*12*/] = 681;
	Global_44257[257 /*12*/].f_1 = 682;
	Global_44257[257 /*12*/].f_2 = 19;
	Global_44257[257 /*12*/].f_3 = 1;
	Global_44257[257 /*12*/].f_10 = 1;
	Global_44257[257 /*12*/].f_11 = 0;
	Global_44257[257 /*12*/].f_4 = 0;
	Global_44257[258 /*12*/] = 683;
	Global_44257[258 /*12*/].f_1 = 684;
	Global_44257[258 /*12*/].f_2 = 19;
	Global_44257[258 /*12*/].f_3 = 1;
	Global_44257[258 /*12*/].f_10 = 1;
	Global_44257[258 /*12*/].f_11 = 0;
	Global_44257[258 /*12*/].f_4 = 0;
	Global_44257[259 /*12*/] = 685;
	Global_44257[259 /*12*/].f_1 = 686;
	Global_44257[259 /*12*/].f_2 = 19;
	Global_44257[259 /*12*/].f_3 = 1;
	Global_44257[259 /*12*/].f_10 = 1;
	Global_44257[259 /*12*/].f_11 = 0;
	Global_44257[259 /*12*/].f_4 = 0;
	Global_44257[260 /*12*/] = 687;
	Global_44257[260 /*12*/].f_1 = 688;
	Global_44257[260 /*12*/].f_2 = 19;
	Global_44257[260 /*12*/].f_3 = 1;
	Global_44257[260 /*12*/].f_10 = 1;
	Global_44257[260 /*12*/].f_11 = 0;
	Global_44257[260 /*12*/].f_4 = 0;
	Global_44257[261 /*12*/] = 691;
	Global_44257[261 /*12*/].f_1 = 692;
	Global_44257[261 /*12*/].f_2 = 19;
	Global_44257[261 /*12*/].f_3 = 1;
	Global_44257[261 /*12*/].f_10 = 1;
	Global_44257[261 /*12*/].f_11 = 0;
	Global_44257[261 /*12*/].f_4 = 0;
	Global_44257[262 /*12*/] = 689;
	Global_44257[262 /*12*/].f_1 = 690;
	Global_44257[262 /*12*/].f_2 = 19;
	Global_44257[262 /*12*/].f_3 = 1;
	Global_44257[262 /*12*/].f_10 = 1;
	Global_44257[262 /*12*/].f_11 = 0;
	Global_44257[262 /*12*/].f_4 = 0;
	Global_44257[263 /*12*/] = 693;
	Global_44257[263 /*12*/].f_1 = 694;
	Global_44257[263 /*12*/].f_2 = 19;
	Global_44257[263 /*12*/].f_3 = 1;
	Global_44257[263 /*12*/].f_10 = 1;
	Global_44257[263 /*12*/].f_11 = 0;
	Global_44257[263 /*12*/].f_4 = 0;
	Global_44257[264 /*12*/] = 695;
	Global_44257[264 /*12*/].f_1 = 696;
	Global_44257[264 /*12*/].f_2 = 19;
	Global_44257[264 /*12*/].f_3 = 1;
	Global_44257[264 /*12*/].f_10 = 1;
	Global_44257[264 /*12*/].f_11 = 0;
	Global_44257[264 /*12*/].f_4 = 0;
	Global_44257[265 /*12*/] = 697;
	Global_44257[265 /*12*/].f_1 = 698;
	Global_44257[265 /*12*/].f_2 = 19;
	Global_44257[265 /*12*/].f_3 = 1;
	Global_44257[265 /*12*/].f_10 = 1;
	Global_44257[265 /*12*/].f_11 = 0;
	Global_44257[265 /*12*/].f_4 = 0;
	Global_44257[266 /*12*/] = 699;
	Global_44257[266 /*12*/].f_1 = 700;
	Global_44257[266 /*12*/].f_2 = 19;
	Global_44257[266 /*12*/].f_3 = 1;
	Global_44257[266 /*12*/].f_10 = 1;
	Global_44257[266 /*12*/].f_11 = 0;
	Global_44257[266 /*12*/].f_4 = 0;
	Global_44257[267 /*12*/] = 701;
	Global_44257[267 /*12*/].f_1 = 702;
	Global_44257[267 /*12*/].f_2 = 19;
	Global_44257[267 /*12*/].f_3 = 1;
	Global_44257[267 /*12*/].f_10 = 1;
	Global_44257[267 /*12*/].f_11 = 0;
	Global_44257[267 /*12*/].f_4 = 0;
	Global_44257[268 /*12*/] = 703;
	Global_44257[268 /*12*/].f_1 = 704;
	Global_44257[268 /*12*/].f_2 = 19;
	Global_44257[268 /*12*/].f_3 = 1;
	Global_44257[268 /*12*/].f_10 = 1;
	Global_44257[268 /*12*/].f_11 = 0;
	Global_44257[268 /*12*/].f_4 = 0;
	Global_44257[269 /*12*/] = 705;
	Global_44257[269 /*12*/].f_1 = 706;
	Global_44257[269 /*12*/].f_2 = 19;
	Global_44257[269 /*12*/].f_3 = 1;
	Global_44257[269 /*12*/].f_10 = 1;
	Global_44257[269 /*12*/].f_11 = 0;
	Global_44257[269 /*12*/].f_4 = 0;
	Global_44257[270 /*12*/] = 707;
	Global_44257[270 /*12*/].f_1 = 708;
	Global_44257[270 /*12*/].f_2 = 16;
	Global_44257[270 /*12*/].f_3 = 0;
	Global_44257[270 /*12*/].f_10 = 1;
	Global_44257[270 /*12*/].f_11 = 0;
	Global_44257[270 /*12*/].f_4 = 0;
	Global_44257[271 /*12*/] = 709;
	Global_44257[271 /*12*/].f_1 = 710;
	Global_44257[271 /*12*/].f_2 = 16;
	Global_44257[271 /*12*/].f_3 = 0;
	Global_44257[271 /*12*/].f_10 = 1;
	Global_44257[271 /*12*/].f_11 = 0;
	Global_44257[271 /*12*/].f_4 = 0;
	Global_44257[272 /*12*/] = 711;
	Global_44257[272 /*12*/].f_1 = 712;
	Global_44257[272 /*12*/].f_2 = 16;
	Global_44257[272 /*12*/].f_3 = 0;
	Global_44257[272 /*12*/].f_10 = 1;
	Global_44257[272 /*12*/].f_11 = 0;
	Global_44257[272 /*12*/].f_4 = 0;
	Global_44257[273 /*12*/] = 713;
	Global_44257[273 /*12*/].f_1 = 714;
	Global_44257[273 /*12*/].f_2 = 16;
	Global_44257[273 /*12*/].f_3 = 0;
	Global_44257[273 /*12*/].f_10 = 1;
	Global_44257[273 /*12*/].f_11 = 0;
	Global_44257[273 /*12*/].f_4 = 0;
	Global_44257[274 /*12*/] = 715;
	Global_44257[274 /*12*/].f_1 = 716;
	Global_44257[274 /*12*/].f_2 = 16;
	Global_44257[274 /*12*/].f_3 = 0;
	Global_44257[274 /*12*/].f_10 = 1;
	Global_44257[274 /*12*/].f_11 = 0;
	Global_44257[274 /*12*/].f_4 = 0;
	Global_44257[275 /*12*/] = 717;
	Global_44257[275 /*12*/].f_1 = 718;
	Global_44257[275 /*12*/].f_2 = 16;
	Global_44257[275 /*12*/].f_3 = 0;
	Global_44257[275 /*12*/].f_10 = 1;
	Global_44257[275 /*12*/].f_11 = 0;
	Global_44257[275 /*12*/].f_4 = 0;
	Global_44257[276 /*12*/] = 719;
	Global_44257[276 /*12*/].f_1 = 720;
	Global_44257[276 /*12*/].f_2 = 16;
	Global_44257[276 /*12*/].f_3 = 0;
	Global_44257[276 /*12*/].f_10 = 1;
	Global_44257[276 /*12*/].f_11 = 0;
	Global_44257[276 /*12*/].f_4 = 0;
	Global_47582[0 /*46*/].f_45 = 0;
	Global_47582[0 /*46*/].f_31 = 0;
	Global_47582[0 /*46*/].f_42 = 0;
	Global_47582[0 /*46*/].f_43 = 0;
	Global_47582[0 /*46*/].f_2 = 2;
	Global_47582[0 /*46*/].f_3[0] = 0;
	Global_47582[0 /*46*/].f_3[1] = 4;
	Global_47582[0 /*46*/].f_30 = 8;
	Global_47582[0 /*46*/].f_8[0] = 0;
	Global_47582[0 /*46*/].f_8[1] = 1;
	Global_47582[0 /*46*/].f_8[2] = 2;
	Global_47582[0 /*46*/].f_8[3] = 3;
	Global_47582[0 /*46*/].f_8[4] = 4;
	Global_47582[0 /*46*/].f_8[5] = 5;
	Global_47582[0 /*46*/].f_8[6] = 6;
	Global_47582[0 /*46*/].f_8[7] = 9;
	Global_47582[1 /*46*/].f_45 = 0;
	Global_47582[1 /*46*/].f_31 = 0;
	Global_47582[1 /*46*/].f_42 = 0;
	Global_47582[1 /*46*/].f_43 = 0;
	Global_47582[1 /*46*/].f_2 = 3;
	Global_47582[1 /*46*/].f_3[0] = 5;
	Global_47582[1 /*46*/].f_3[1] = 0;
	Global_47582[1 /*46*/].f_3[2] = 4;
	Global_47582[1 /*46*/].f_30 = 3;
	Global_47582[1 /*46*/].f_8[0] = 10;
	Global_47582[1 /*46*/].f_8[1] = 11;
	Global_47582[1 /*46*/].f_8[2] = 16;
	Global_47582[2 /*46*/].f_45 = 0;
	Global_47582[2 /*46*/].f_31 = 0;
	Global_47582[2 /*46*/].f_42 = 0;
	Global_47582[2 /*46*/].f_43 = 0;
	Global_47582[2 /*46*/].f_2 = 2;
	Global_47582[2 /*46*/].f_3[0] = 7;
	Global_47582[2 /*46*/].f_3[1] = 1;
	Global_47582[2 /*46*/].f_30 = 1;
	Global_47582[2 /*46*/].f_8[0] = 12;
	Global_47582[3 /*46*/].f_45 = 0;
	Global_47582[3 /*46*/].f_31 = 0;
	Global_47582[3 /*46*/].f_42 = 0;
	Global_47582[3 /*46*/].f_43 = 0;
	Global_47582[3 /*46*/].f_2 = 2;
	Global_47582[3 /*46*/].f_3[0] = 7;
	Global_47582[3 /*46*/].f_3[1] = 1;
	Global_47582[3 /*46*/].f_30 = 1;
	Global_47582[3 /*46*/].f_8[0] = 14;
	Global_47582[4 /*46*/].f_45 = 0;
	Global_47582[4 /*46*/].f_31 = 0;
	Global_47582[4 /*46*/].f_42 = 0;
	Global_47582[4 /*46*/].f_43 = 0;
	Global_47582[4 /*46*/].f_2 = 2;
	Global_47582[4 /*46*/].f_3[0] = 7;
	Global_47582[4 /*46*/].f_3[1] = 1;
	Global_47582[4 /*46*/].f_30 = 1;
	Global_47582[4 /*46*/].f_8[0] = 13;
	Global_47582[5 /*46*/].f_45 = 0;
	Global_47582[5 /*46*/].f_31 = 0;
	Global_47582[5 /*46*/].f_42 = 0;
	Global_47582[5 /*46*/].f_43 = 0;
	Global_47582[5 /*46*/].f_2 = 2;
	Global_47582[5 /*46*/].f_3[0] = 7;
	Global_47582[5 /*46*/].f_3[1] = 1;
	Global_47582[5 /*46*/].f_30 = 1;
	Global_47582[5 /*46*/].f_8[0] = 15;
	Global_47582[6 /*46*/].f_45 = 0;
	Global_47582[6 /*46*/].f_31 = 0;
	Global_47582[6 /*46*/].f_42 = 0;
	Global_47582[6 /*46*/].f_43 = 0;
	Global_47582[6 /*46*/].f_2 = 2;
	Global_47582[6 /*46*/].f_3[0] = 0;
	Global_47582[6 /*46*/].f_3[1] = 8;
	Global_47582[6 /*46*/].f_30 = 5;
	Global_47582[6 /*46*/].f_8[0] = 17;
	Global_47582[6 /*46*/].f_8[1] = 19;
	Global_47582[6 /*46*/].f_8[2] = 20;
	Global_47582[6 /*46*/].f_8[3] = 21;
	Global_47582[6 /*46*/].f_8[4] = 22;
	Global_47582[7 /*46*/].f_45 = 0;
	Global_47582[7 /*46*/].f_31 = 0;
	Global_47582[7 /*46*/].f_42 = 0;
	Global_47582[7 /*46*/].f_43 = 0;
	Global_47582[7 /*46*/].f_2 = 2;
	Global_47582[7 /*46*/].f_3[0] = 1;
	Global_47582[7 /*46*/].f_3[1] = 9;
	Global_47582[7 /*46*/].f_30 = 5;
	Global_47582[7 /*46*/].f_8[0] = 18;
	Global_47582[7 /*46*/].f_8[1] = 24;
	Global_47582[7 /*46*/].f_8[2] = 25;
	Global_47582[7 /*46*/].f_8[3] = 26;
	Global_47582[7 /*46*/].f_8[4] = 27;
	Global_47582[8 /*46*/].f_45 = 0;
	Global_47582[8 /*46*/].f_31 = 0;
	Global_47582[8 /*46*/].f_42 = 0;
	Global_47582[8 /*46*/].f_43 = 0;
	Global_47582[8 /*46*/].f_2 = 2;
	Global_47582[8 /*46*/].f_3[0] = 2;
	Global_47582[8 /*46*/].f_3[1] = 10;
	Global_47582[8 /*46*/].f_30 = 4;
	Global_47582[8 /*46*/].f_8[0] = 23;
	Global_47582[8 /*46*/].f_8[1] = 28;
	Global_47582[8 /*46*/].f_8[2] = 29;
	Global_47582[8 /*46*/].f_8[3] = 30;
	Global_47582[9 /*46*/].f_45 = 0;
	Global_47582[9 /*46*/].f_31 = 0;
	Global_47582[9 /*46*/].f_42 = 0;
	Global_47582[9 /*46*/].f_43 = 0;
	Global_47582[9 /*46*/].f_2 = 1;
	Global_47582[9 /*46*/].f_3[0] = 11;
	Global_47582[9 /*46*/].f_30 = 3;
	Global_47582[9 /*46*/].f_8[0] = 31;
	Global_47582[9 /*46*/].f_8[1] = 32;
	Global_47582[9 /*46*/].f_8[2] = 33;
	Global_47582[10 /*46*/].f_45 = 0;
	Global_47582[10 /*46*/].f_31 = 0;
	Global_47582[10 /*46*/].f_42 = 0;
	Global_47582[10 /*46*/].f_43 = 0;
	Global_47582[10 /*46*/].f_2 = 1;
	Global_47582[10 /*46*/].f_3[0] = 13;
	Global_47582[10 /*46*/].f_30 = 3;
	Global_47582[10 /*46*/].f_8[0] = 34;
	Global_47582[10 /*46*/].f_8[1] = 35;
	Global_47582[10 /*46*/].f_8[2] = 36;
	Global_47582[11 /*46*/].f_45 = 0;
	Global_47582[11 /*46*/].f_31 = 0;
	Global_47582[11 /*46*/].f_42 = 0;
	Global_47582[11 /*46*/].f_43 = 0;
	Global_47582[11 /*46*/].f_2 = 1;
	Global_47582[11 /*46*/].f_3[0] = 14;
	Global_47582[11 /*46*/].f_30 = 3;
	Global_47582[11 /*46*/].f_8[0] = 37;
	Global_47582[11 /*46*/].f_8[1] = 38;
	Global_47582[11 /*46*/].f_8[2] = 39;
	Global_47582[12 /*46*/].f_45 = 0;
	Global_47582[12 /*46*/].f_31 = 0;
	Global_47582[12 /*46*/].f_42 = 0;
	Global_47582[12 /*46*/].f_43 = 0;
	Global_47582[12 /*46*/].f_2 = 1;
	Global_47582[12 /*46*/].f_3[0] = 12;
	Global_47582[12 /*46*/].f_30 = 6;
	Global_47582[12 /*46*/].f_8[0] = 40;
	Global_47582[12 /*46*/].f_8[1] = 41;
	Global_47582[12 /*46*/].f_8[2] = 42;
	Global_47582[12 /*46*/].f_8[3] = 191;
	Global_47582[12 /*46*/].f_8[4] = 192;
	Global_47582[12 /*46*/].f_8[5] = 193;
	Global_47582[13 /*46*/].f_45 = 0;
	Global_47582[13 /*46*/].f_31 = 0;
	Global_47582[13 /*46*/].f_42 = 0;
	Global_47582[13 /*46*/].f_43 = 0;
	Global_47582[13 /*46*/].f_2 = 2;
	Global_47582[13 /*46*/].f_3[0] = 7;
	Global_47582[13 /*46*/].f_3[1] = 0;
	Global_47582[13 /*46*/].f_30 = 1;
	Global_47582[13 /*46*/].f_8[0] = 43;
	Global_47582[14 /*46*/].f_45 = 0;
	Global_47582[14 /*46*/].f_31 = 0;
	Global_47582[14 /*46*/].f_42 = 0;
	Global_47582[14 /*46*/].f_43 = 0;
	Global_47582[14 /*46*/].f_2 = 4;
	Global_47582[14 /*46*/].f_3[0] = 15;
	Global_47582[14 /*46*/].f_3[1] = 0;
	Global_47582[14 /*46*/].f_3[2] = 1;
	Global_47582[14 /*46*/].f_3[3] = 2;
	Global_47582[14 /*46*/].f_30 = 3;
	Global_47582[14 /*46*/].f_8[0] = 44;
	Global_47582[14 /*46*/].f_8[1] = 45;
	Global_47582[14 /*46*/].f_8[2] = 46;
	Global_47582[15 /*46*/].f_45 = 0;
	Global_47582[15 /*46*/].f_31 = 0;
	Global_47582[15 /*46*/].f_42 = 0;
	Global_47582[15 /*46*/].f_43 = 0;
	Global_47582[15 /*46*/].f_2 = 4;
	Global_47582[15 /*46*/].f_3[0] = 16;
	Global_47582[15 /*46*/].f_3[1] = 0;
	Global_47582[15 /*46*/].f_3[2] = 1;
	Global_47582[15 /*46*/].f_3[3] = 2;
	Global_47582[15 /*46*/].f_30 = 1;
	Global_47582[15 /*46*/].f_8[0] = 47;
	Global_47582[16 /*46*/].f_45 = 0;
	Global_47582[16 /*46*/].f_31 = 0;
	Global_47582[16 /*46*/].f_42 = 0;
	Global_47582[16 /*46*/].f_43 = 0;
	Global_47582[16 /*46*/].f_2 = 4;
	Global_47582[16 /*46*/].f_3[0] = 16;
	Global_47582[16 /*46*/].f_3[1] = 0;
	Global_47582[16 /*46*/].f_3[2] = 1;
	Global_47582[16 /*46*/].f_3[3] = 2;
	Global_47582[16 /*46*/].f_30 = 1;
	Global_47582[16 /*46*/].f_8[0] = 48;
	Global_47582[17 /*46*/].f_45 = 0;
	Global_47582[17 /*46*/].f_31 = 0;
	Global_47582[17 /*46*/].f_42 = 0;
	Global_47582[17 /*46*/].f_43 = 0;
	Global_47582[17 /*46*/].f_2 = 4;
	Global_47582[17 /*46*/].f_3[0] = 0;
	Global_47582[17 /*46*/].f_3[1] = 1;
	Global_47582[17 /*46*/].f_3[2] = 2;
	Global_47582[17 /*46*/].f_3[3] = 16;
	Global_47582[17 /*46*/].f_30 = 1;
	Global_47582[17 /*46*/].f_8[0] = 49;
	Global_47582[18 /*46*/].f_45 = 0;
	Global_47582[18 /*46*/].f_31 = 0;
	Global_47582[18 /*46*/].f_42 = 0;
	Global_47582[18 /*46*/].f_43 = 0;
	Global_47582[18 /*46*/].f_2 = 4;
	Global_47582[18 /*46*/].f_3[0] = 0;
	Global_47582[18 /*46*/].f_3[1] = 1;
	Global_47582[18 /*46*/].f_3[2] = 2;
	Global_47582[18 /*46*/].f_3[3] = 16;
	Global_47582[18 /*46*/].f_30 = 1;
	Global_47582[18 /*46*/].f_8[0] = 50;
	Global_47582[19 /*46*/].f_45 = 0;
	Global_47582[19 /*46*/].f_31 = 0;
	Global_47582[19 /*46*/].f_42 = 0;
	Global_47582[19 /*46*/].f_43 = 0;
	Global_47582[19 /*46*/].f_2 = 4;
	Global_47582[19 /*46*/].f_3[0] = 0;
	Global_47582[19 /*46*/].f_3[1] = 1;
	Global_47582[19 /*46*/].f_3[2] = 2;
	Global_47582[19 /*46*/].f_3[3] = 16;
	Global_47582[19 /*46*/].f_30 = 1;
	Global_47582[19 /*46*/].f_8[0] = 51;
	Global_47582[20 /*46*/].f_45 = 0;
	Global_47582[20 /*46*/].f_31 = 0;
	Global_47582[20 /*46*/].f_42 = 0;
	Global_47582[20 /*46*/].f_43 = 0;
	Global_47582[20 /*46*/].f_2 = 4;
	Global_47582[20 /*46*/].f_3[0] = 0;
	Global_47582[20 /*46*/].f_3[1] = 1;
	Global_47582[20 /*46*/].f_3[2] = 2;
	Global_47582[20 /*46*/].f_3[3] = 16;
	Global_47582[20 /*46*/].f_30 = 1;
	Global_47582[20 /*46*/].f_8[0] = 52;
	Global_47582[21 /*46*/].f_45 = 0;
	Global_47582[21 /*46*/].f_31 = 0;
	Global_47582[21 /*46*/].f_42 = 0;
	Global_47582[21 /*46*/].f_43 = 0;
	Global_47582[21 /*46*/].f_2 = 4;
	Global_47582[21 /*46*/].f_3[0] = 16;
	Global_47582[21 /*46*/].f_3[1] = 0;
	Global_47582[21 /*46*/].f_3[2] = 1;
	Global_47582[21 /*46*/].f_3[3] = 2;
	Global_47582[21 /*46*/].f_30 = 1;
	Global_47582[21 /*46*/].f_8[0] = 53;
	Global_47582[22 /*46*/].f_45 = 0;
	Global_47582[22 /*46*/].f_31 = 0;
	Global_47582[22 /*46*/].f_42 = 0;
	Global_47582[22 /*46*/].f_43 = 0;
	Global_47582[22 /*46*/].f_2 = 4;
	Global_47582[22 /*46*/].f_3[0] = 0;
	Global_47582[22 /*46*/].f_3[1] = 1;
	Global_47582[22 /*46*/].f_3[2] = 2;
	Global_47582[22 /*46*/].f_3[3] = 16;
	Global_47582[22 /*46*/].f_30 = 1;
	Global_47582[22 /*46*/].f_8[0] = 54;
	Global_47582[23 /*46*/].f_45 = 0;
	Global_47582[23 /*46*/].f_31 = 0;
	Global_47582[23 /*46*/].f_42 = 0;
	Global_47582[23 /*46*/].f_43 = 0;
	Global_47582[23 /*46*/].f_2 = 1;
	Global_47582[23 /*46*/].f_3[0] = 12;
	Global_47582[23 /*46*/].f_30 = 3;
	Global_47582[23 /*46*/].f_8[0] = 55;
	Global_47582[23 /*46*/].f_8[1] = 58;
	Global_47582[23 /*46*/].f_8[2] = 59;
	Global_47582[24 /*46*/].f_45 = 0;
	Global_47582[24 /*46*/].f_31 = 0;
	Global_47582[24 /*46*/].f_42 = 0;
	Global_47582[24 /*46*/].f_43 = 0;
	Global_47582[24 /*46*/].f_2 = 1;
	Global_47582[24 /*46*/].f_3[0] = 14;
	Global_47582[24 /*46*/].f_30 = 3;
	Global_47582[24 /*46*/].f_8[0] = 56;
	Global_47582[24 /*46*/].f_8[1] = 60;
	Global_47582[24 /*46*/].f_8[2] = 61;
	Global_47582[25 /*46*/].f_45 = 0;
	Global_47582[25 /*46*/].f_31 = 0;
	Global_47582[25 /*46*/].f_42 = 0;
	Global_47582[25 /*46*/].f_43 = 0;
	Global_47582[25 /*46*/].f_2 = 1;
	Global_47582[25 /*46*/].f_3[0] = 12;
	Global_47582[25 /*46*/].f_30 = 3;
	Global_47582[25 /*46*/].f_8[0] = 57;
	Global_47582[25 /*46*/].f_8[1] = 62;
	Global_47582[25 /*46*/].f_8[2] = 63;
	Global_47582[26 /*46*/].f_45 = 0;
	Global_47582[26 /*46*/].f_31 = 0;
	Global_47582[26 /*46*/].f_42 = 0;
	Global_47582[26 /*46*/].f_43 = 0;
	Global_47582[26 /*46*/].f_2 = 4;
	Global_47582[26 /*46*/].f_3[0] = 1;
	Global_47582[26 /*46*/].f_3[1] = 0;
	Global_47582[26 /*46*/].f_3[2] = 2;
	Global_47582[26 /*46*/].f_3[3] = 20;
	Global_47582[26 /*46*/].f_30 = 1;
	Global_47582[26 /*46*/].f_8[0] = 64;
	Global_47582[27 /*46*/].f_45 = 0;
	Global_47582[27 /*46*/].f_31 = 0;
	Global_47582[27 /*46*/].f_42 = 0;
	Global_47582[27 /*46*/].f_43 = 0;
	Global_47582[27 /*46*/].f_2 = 4;
	Global_47582[27 /*46*/].f_3[0] = 17;
	Global_47582[27 /*46*/].f_3[1] = 0;
	Global_47582[27 /*46*/].f_3[2] = 1;
	Global_47582[27 /*46*/].f_3[3] = 2;
	Global_47582[27 /*46*/].f_30 = 1;
	Global_47582[27 /*46*/].f_8[0] = 66;
	Global_47582[28 /*46*/].f_45 = 0;
	Global_47582[28 /*46*/].f_31 = 0;
	Global_47582[28 /*46*/].f_42 = 0;
	Global_47582[28 /*46*/].f_43 = 0;
	Global_47582[28 /*46*/].f_2 = 4;
	Global_47582[28 /*46*/].f_3[0] = 18;
	Global_47582[28 /*46*/].f_3[1] = 0;
	Global_47582[28 /*46*/].f_3[2] = 1;
	Global_47582[28 /*46*/].f_3[3] = 2;
	Global_47582[28 /*46*/].f_30 = 1;
	Global_47582[28 /*46*/].f_8[0] = 65;
	Global_47582[29 /*46*/].f_45 = 0;
	Global_47582[29 /*46*/].f_31 = 0;
	Global_47582[29 /*46*/].f_42 = 0;
	Global_47582[29 /*46*/].f_43 = 0;
	Global_47582[29 /*46*/].f_2 = 2;
	Global_47582[29 /*46*/].f_3[0] = 2;
	Global_47582[29 /*46*/].f_3[1] = 63;
	Global_47582[29 /*46*/].f_30 = 1;
	Global_47582[29 /*46*/].f_8[0] = 67;
	Global_47582[30 /*46*/].f_45 = 0;
	Global_47582[30 /*46*/].f_31 = 0;
	Global_47582[30 /*46*/].f_42 = 0;
	Global_47582[30 /*46*/].f_43 = 0;
	Global_47582[30 /*46*/].f_2 = 3;
	Global_47582[30 /*46*/].f_3[0] = 0;
	Global_47582[30 /*46*/].f_3[1] = 1;
	Global_47582[30 /*46*/].f_3[2] = 2;
	Global_47582[30 /*46*/].f_30 = 1;
	Global_47582[30 /*46*/].f_8[0] = 68;
	Global_47582[31 /*46*/].f_45 = 0;
	Global_47582[31 /*46*/].f_31 = 0;
	Global_47582[31 /*46*/].f_42 = 0;
	Global_47582[31 /*46*/].f_43 = 0;
	Global_47582[31 /*46*/].f_2 = 2;
	Global_47582[31 /*46*/].f_3[0] = 0;
	Global_47582[31 /*46*/].f_3[1] = 64;
	Global_47582[31 /*46*/].f_30 = 1;
	Global_47582[31 /*46*/].f_8[0] = 69;
	Global_47582[32 /*46*/].f_45 = 0;
	Global_47582[32 /*46*/].f_31 = 0;
	Global_47582[32 /*46*/].f_42 = 0;
	Global_47582[32 /*46*/].f_43 = 0;
	Global_47582[32 /*46*/].f_2 = 2;
	Global_47582[32 /*46*/].f_3[0] = 1;
	Global_47582[32 /*46*/].f_3[1] = 64;
	Global_47582[32 /*46*/].f_30 = 1;
	Global_47582[32 /*46*/].f_8[0] = 70;
	Global_47582[33 /*46*/].f_45 = 0;
	Global_47582[33 /*46*/].f_31 = 0;
	Global_47582[33 /*46*/].f_42 = 0;
	Global_47582[33 /*46*/].f_43 = 0;
	Global_47582[33 /*46*/].f_2 = 2;
	Global_47582[33 /*46*/].f_3[0] = 2;
	Global_47582[33 /*46*/].f_3[1] = 64;
	Global_47582[33 /*46*/].f_30 = 1;
	Global_47582[33 /*46*/].f_8[0] = 71;
	Global_47582[34 /*46*/].f_45 = 0;
	Global_47582[34 /*46*/].f_31 = 0;
	Global_47582[34 /*46*/].f_42 = 0;
	Global_47582[34 /*46*/].f_43 = 0;
	Global_47582[34 /*46*/].f_2 = 1;
	Global_47582[34 /*46*/].f_3[0] = 21;
	Global_47582[34 /*46*/].f_30 = 1;
	Global_47582[34 /*46*/].f_8[0] = 72;
	Global_47582[35 /*46*/].f_45 = 0;
	Global_47582[35 /*46*/].f_31 = 0;
	Global_47582[35 /*46*/].f_42 = 0;
	Global_47582[35 /*46*/].f_43 = 0;
	Global_47582[35 /*46*/].f_2 = 1;
	Global_47582[35 /*46*/].f_3[0] = 21;
	Global_47582[35 /*46*/].f_30 = 1;
	Global_47582[35 /*46*/].f_8[0] = 73;
	Global_47582[36 /*46*/].f_45 = 0;
	Global_47582[36 /*46*/].f_31 = 0;
	Global_47582[36 /*46*/].f_42 = 0;
	Global_47582[36 /*46*/].f_43 = 0;
	Global_47582[36 /*46*/].f_2 = 1;
	Global_47582[36 /*46*/].f_3[0] = 21;
	Global_47582[36 /*46*/].f_30 = 1;
	Global_47582[36 /*46*/].f_8[0] = 74;
	Global_47582[37 /*46*/].f_45 = 0;
	Global_47582[37 /*46*/].f_31 = 0;
	Global_47582[37 /*46*/].f_42 = 0;
	Global_47582[37 /*46*/].f_43 = 0;
	Global_47582[37 /*46*/].f_2 = 2;
	Global_47582[37 /*46*/].f_3[0] = 6;
	Global_47582[37 /*46*/].f_3[1] = 2;
	Global_47582[37 /*46*/].f_30 = 9;
	Global_47582[37 /*46*/].f_8[0] = 75;
	Global_47582[37 /*46*/].f_8[1] = 76;
	Global_47582[37 /*46*/].f_8[2] = 77;
	Global_47582[37 /*46*/].f_8[3] = 78;
	Global_47582[37 /*46*/].f_8[4] = 79;
	Global_47582[37 /*46*/].f_8[5] = 80;
	Global_47582[37 /*46*/].f_8[6] = 81;
	Global_47582[37 /*46*/].f_8[7] = 82;
	Global_47582[37 /*46*/].f_8[8] = 83;
	Global_47582[38 /*46*/].f_45 = 0;
	Global_47582[38 /*46*/].f_31 = 0;
	Global_47582[38 /*46*/].f_42 = 0;
	Global_47582[38 /*46*/].f_43 = 0;
	Global_47582[38 /*46*/].f_2 = 2;
	Global_47582[38 /*46*/].f_3[0] = 0;
	Global_47582[38 /*46*/].f_3[1] = 4;
	Global_47582[38 /*46*/].f_30 = 1;
	Global_47582[38 /*46*/].f_8[0] = 84;
	Global_47582[39 /*46*/].f_45 = 0;
	Global_47582[39 /*46*/].f_31 = 0;
	Global_47582[39 /*46*/].f_42 = 0;
	Global_47582[39 /*46*/].f_43 = 0;
	Global_47582[39 /*46*/].f_2 = 4;
	Global_47582[39 /*46*/].f_3[0] = 22;
	Global_47582[39 /*46*/].f_3[1] = 0;
	Global_47582[39 /*46*/].f_3[2] = 1;
	Global_47582[39 /*46*/].f_3[3] = 2;
	Global_47582[39 /*46*/].f_30 = 1;
	Global_47582[39 /*46*/].f_8[0] = 85;
	Global_47582[40 /*46*/].f_45 = 0;
	Global_47582[40 /*46*/].f_31 = 0;
	Global_47582[40 /*46*/].f_42 = 0;
	Global_47582[40 /*46*/].f_43 = 0;
	Global_47582[40 /*46*/].f_2 = 2;
	Global_47582[40 /*46*/].f_3[0] = 0;
	Global_47582[40 /*46*/].f_3[1] = 24;
	Global_47582[40 /*46*/].f_30 = 3;
	Global_47582[40 /*46*/].f_8[0] = 86;
	Global_47582[40 /*46*/].f_8[1] = 87;
	Global_47582[40 /*46*/].f_8[2] = 88;
	Global_47582[41 /*46*/].f_45 = 0;
	Global_47582[41 /*46*/].f_31 = 0;
	Global_47582[41 /*46*/].f_42 = 0;
	Global_47582[41 /*46*/].f_43 = 0;
	Global_47582[41 /*46*/].f_2 = 2;
	Global_47582[41 /*46*/].f_3[0] = 0;
	Global_47582[41 /*46*/].f_3[1] = 24;
	Global_47582[41 /*46*/].f_30 = 3;
	Global_47582[41 /*46*/].f_8[0] = 89;
	Global_47582[41 /*46*/].f_8[1] = 90;
	Global_47582[41 /*46*/].f_8[2] = 91;
	Global_47582[42 /*46*/].f_45 = 0;
	Global_47582[42 /*46*/].f_31 = 0;
	Global_47582[42 /*46*/].f_42 = 0;
	Global_47582[42 /*46*/].f_43 = 0;
	Global_47582[42 /*46*/].f_2 = 2;
	Global_47582[42 /*46*/].f_3[0] = 0;
	Global_47582[42 /*46*/].f_3[1] = 25;
	Global_47582[42 /*46*/].f_30 = 5;
	Global_47582[42 /*46*/].f_8[0] = 92;
	Global_47582[42 /*46*/].f_8[1] = 93;
	Global_47582[42 /*46*/].f_8[2] = 94;
	Global_47582[42 /*46*/].f_8[3] = 95;
	Global_47582[42 /*46*/].f_8[4] = 96;
	Global_47582[43 /*46*/].f_45 = 0;
	Global_47582[43 /*46*/].f_31 = 0;
	Global_47582[43 /*46*/].f_42 = 0;
	Global_47582[43 /*46*/].f_43 = 0;
	Global_47582[43 /*46*/].f_2 = 2;
	Global_47582[43 /*46*/].f_3[0] = 26;
	Global_47582[43 /*46*/].f_3[1] = 0;
	Global_47582[43 /*46*/].f_30 = 2;
	Global_47582[43 /*46*/].f_8[0] = 97;
	Global_47582[43 /*46*/].f_8[1] = 98;
	Global_47582[44 /*46*/].f_45 = 0;
	Global_47582[44 /*46*/].f_31 = 0;
	Global_47582[44 /*46*/].f_42 = 0;
	Global_47582[44 /*46*/].f_43 = 0;
	Global_47582[44 /*46*/].f_2 = 2;
	Global_47582[44 /*46*/].f_3[0] = 27;
	Global_47582[44 /*46*/].f_3[1] = 0;
	Global_47582[44 /*46*/].f_30 = 2;
	Global_47582[44 /*46*/].f_8[0] = 99;
	Global_47582[44 /*46*/].f_8[1] = 100;
	Global_47582[45 /*46*/].f_45 = 0;
	Global_47582[45 /*46*/].f_31 = 0;
	Global_47582[45 /*46*/].f_42 = 0;
	Global_47582[45 /*46*/].f_43 = 0;
	Global_47582[45 /*46*/].f_2 = 3;
	Global_47582[45 /*46*/].f_3[0] = 0;
	Global_47582[45 /*46*/].f_3[1] = 2;
	Global_47582[45 /*46*/].f_3[2] = 28;
	Global_47582[45 /*46*/].f_30 = 1;
	Global_47582[45 /*46*/].f_8[0] = 101;
	Global_47582[46 /*46*/].f_45 = 0;
	Global_47582[46 /*46*/].f_31 = 0;
	Global_47582[46 /*46*/].f_42 = 0;
	Global_47582[46 /*46*/].f_43 = 0;
	Global_47582[46 /*46*/].f_2 = 2;
	Global_47582[46 /*46*/].f_3[0] = 0;
	Global_47582[46 /*46*/].f_3[1] = 26;
	Global_47582[46 /*46*/].f_30 = 2;
	Global_47582[46 /*46*/].f_8[0] = 102;
	Global_47582[46 /*46*/].f_8[1] = 103;
	Global_47582[47 /*46*/].f_45 = 0;
	Global_47582[47 /*46*/].f_31 = 0;
	Global_47582[47 /*46*/].f_42 = 0;
	Global_47582[47 /*46*/].f_43 = 0;
	Global_47582[47 /*46*/].f_2 = 2;
	Global_47582[47 /*46*/].f_3[0] = 0;
	Global_47582[47 /*46*/].f_3[1] = 29;
	Global_47582[47 /*46*/].f_30 = 2;
	Global_47582[47 /*46*/].f_8[0] = 104;
	Global_47582[47 /*46*/].f_8[1] = 105;
	Global_47582[48 /*46*/].f_45 = 0;
	Global_47582[48 /*46*/].f_31 = 0;
	Global_47582[48 /*46*/].f_42 = 0;
	Global_47582[48 /*46*/].f_43 = 0;
	Global_47582[48 /*46*/].f_2 = 2;
	Global_47582[48 /*46*/].f_3[0] = 1;
	Global_47582[48 /*46*/].f_3[1] = 30;
	Global_47582[48 /*46*/].f_30 = 5;
	Global_47582[48 /*46*/].f_8[0] = 106;
	Global_47582[48 /*46*/].f_8[1] = 107;
	Global_47582[48 /*46*/].f_8[2] = 108;
	Global_47582[48 /*46*/].f_8[3] = 109;
	Global_47582[48 /*46*/].f_8[4] = 110;
	Global_47582[49 /*46*/].f_45 = 0;
	Global_47582[49 /*46*/].f_31 = 0;
	Global_47582[49 /*46*/].f_42 = 0;
	Global_47582[49 /*46*/].f_43 = 0;
	Global_47582[49 /*46*/].f_2 = 2;
	Global_47582[49 /*46*/].f_3[0] = 1;
	Global_47582[49 /*46*/].f_3[1] = 31;
	Global_47582[49 /*46*/].f_30 = 2;
	Global_47582[49 /*46*/].f_8[0] = 111;
	Global_47582[49 /*46*/].f_8[1] = 112;
	Global_47582[50 /*46*/].f_45 = 0;
	Global_47582[50 /*46*/].f_31 = 0;
	Global_47582[50 /*46*/].f_42 = 0;
	Global_47582[50 /*46*/].f_43 = 0;
	Global_47582[50 /*46*/].f_2 = 2;
	Global_47582[50 /*46*/].f_3[0] = 1;
	Global_47582[50 /*46*/].f_3[1] = 32;
	Global_47582[50 /*46*/].f_30 = 3;
	Global_47582[50 /*46*/].f_8[0] = 113;
	Global_47582[50 /*46*/].f_8[1] = 114;
	Global_47582[50 /*46*/].f_8[2] = 115;
	Global_47582[51 /*46*/].f_45 = 0;
	Global_47582[51 /*46*/].f_31 = 0;
	Global_47582[51 /*46*/].f_42 = 0;
	Global_47582[51 /*46*/].f_43 = 0;
	Global_47582[51 /*46*/].f_2 = 2;
	Global_47582[51 /*46*/].f_3[0] = 1;
	Global_47582[51 /*46*/].f_3[1] = 32;
	Global_47582[51 /*46*/].f_30 = 2;
	Global_47582[51 /*46*/].f_8[0] = 116;
	Global_47582[51 /*46*/].f_8[1] = 117;
	Global_47582[52 /*46*/].f_45 = 0;
	Global_47582[52 /*46*/].f_31 = 0;
	Global_47582[52 /*46*/].f_42 = 0;
	Global_47582[52 /*46*/].f_43 = 0;
	Global_47582[52 /*46*/].f_2 = 2;
	Global_47582[52 /*46*/].f_3[0] = 1;
	Global_47582[52 /*46*/].f_3[1] = 32;
	Global_47582[52 /*46*/].f_30 = 2;
	Global_47582[52 /*46*/].f_8[0] = 118;
	Global_47582[52 /*46*/].f_8[1] = 119;
	Global_47582[53 /*46*/].f_45 = 0;
	Global_47582[53 /*46*/].f_31 = 0;
	Global_47582[53 /*46*/].f_42 = 0;
	Global_47582[53 /*46*/].f_43 = 0;
	Global_47582[53 /*46*/].f_2 = 2;
	Global_47582[53 /*46*/].f_3[0] = 1;
	Global_47582[53 /*46*/].f_3[1] = 32;
	Global_47582[53 /*46*/].f_30 = 4;
	Global_47582[53 /*46*/].f_8[0] = 120;
	Global_47582[53 /*46*/].f_8[1] = 121;
	Global_47582[53 /*46*/].f_8[2] = 122;
	Global_47582[53 /*46*/].f_8[3] = 123;
	Global_47582[54 /*46*/].f_45 = 0;
	Global_47582[54 /*46*/].f_31 = 0;
	Global_47582[54 /*46*/].f_42 = 0;
	Global_47582[54 /*46*/].f_43 = 0;
	Global_47582[54 /*46*/].f_2 = 2;
	Global_47582[54 /*46*/].f_3[0] = 1;
	Global_47582[54 /*46*/].f_3[1] = 27;
	Global_47582[54 /*46*/].f_30 = 2;
	Global_47582[54 /*46*/].f_8[0] = 124;
	Global_47582[54 /*46*/].f_8[1] = 125;
	Global_47582[55 /*46*/].f_45 = 0;
	Global_47582[55 /*46*/].f_31 = 0;
	Global_47582[55 /*46*/].f_42 = 0;
	Global_47582[55 /*46*/].f_43 = 0;
	Global_47582[55 /*46*/].f_2 = 2;
	Global_47582[55 /*46*/].f_3[0] = 1;
	Global_47582[55 /*46*/].f_3[1] = 2;
	Global_47582[55 /*46*/].f_30 = 5;
	Global_47582[55 /*46*/].f_8[0] = 126;
	Global_47582[55 /*46*/].f_8[1] = 127;
	Global_47582[55 /*46*/].f_8[2] = 128;
	Global_47582[55 /*46*/].f_8[3] = 129;
	Global_47582[55 /*46*/].f_8[4] = 130;
	Global_47582[56 /*46*/].f_45 = 0;
	Global_47582[56 /*46*/].f_31 = 0;
	Global_47582[56 /*46*/].f_42 = 0;
	Global_47582[56 /*46*/].f_43 = 0;
	Global_47582[56 /*46*/].f_2 = 2;
	Global_47582[56 /*46*/].f_3[0] = 1;
	Global_47582[56 /*46*/].f_3[1] = 0;
	Global_47582[56 /*46*/].f_30 = 3;
	Global_47582[56 /*46*/].f_8[0] = 131;
	Global_47582[56 /*46*/].f_8[1] = 132;
	Global_47582[56 /*46*/].f_8[2] = 133;
	Global_47582[57 /*46*/].f_45 = 0;
	Global_47582[57 /*46*/].f_31 = 0;
	Global_47582[57 /*46*/].f_42 = 0;
	Global_47582[57 /*46*/].f_43 = 0;
	Global_47582[57 /*46*/].f_2 = 2;
	Global_47582[57 /*46*/].f_3[0] = 0;
	Global_47582[57 /*46*/].f_3[1] = 1;
	Global_47582[57 /*46*/].f_30 = 2;
	Global_47582[57 /*46*/].f_8[0] = 134;
	Global_47582[57 /*46*/].f_8[1] = 135;
	Global_47582[58 /*46*/].f_45 = 0;
	Global_47582[58 /*46*/].f_31 = 0;
	Global_47582[58 /*46*/].f_42 = 0;
	Global_47582[58 /*46*/].f_43 = 0;
	Global_47582[58 /*46*/].f_2 = 2;
	Global_47582[58 /*46*/].f_3[0] = 2;
	Global_47582[58 /*46*/].f_3[1] = 33;
	Global_47582[58 /*46*/].f_30 = 2;
	Global_47582[58 /*46*/].f_8[0] = 136;
	Global_47582[58 /*46*/].f_8[1] = 137;
	Global_47582[59 /*46*/].f_45 = 0;
	Global_47582[59 /*46*/].f_31 = 0;
	Global_47582[59 /*46*/].f_42 = 0;
	Global_47582[59 /*46*/].f_43 = 0;
	Global_47582[59 /*46*/].f_2 = 2;
	Global_47582[59 /*46*/].f_3[0] = 2;
	Global_47582[59 /*46*/].f_3[1] = 33;
	Global_47582[59 /*46*/].f_30 = 3;
	Global_47582[59 /*46*/].f_8[0] = 138;
	Global_47582[59 /*46*/].f_8[1] = 139;
	Global_47582[59 /*46*/].f_8[2] = 248;
	Global_47582[60 /*46*/].f_45 = 0;
	Global_47582[60 /*46*/].f_31 = 0;
	Global_47582[60 /*46*/].f_42 = 0;
	Global_47582[60 /*46*/].f_43 = 0;
	Global_47582[60 /*46*/].f_2 = 2;
	Global_47582[60 /*46*/].f_3[0] = 2;
	Global_47582[60 /*46*/].f_3[1] = 33;
	Global_47582[60 /*46*/].f_30 = 1;
	Global_47582[60 /*46*/].f_8[0] = 140;
	Global_47582[61 /*46*/].f_45 = 0;
	Global_47582[61 /*46*/].f_31 = 0;
	Global_47582[61 /*46*/].f_42 = 0;
	Global_47582[61 /*46*/].f_43 = 0;
	Global_47582[61 /*46*/].f_2 = 2;
	Global_47582[61 /*46*/].f_3[0] = 2;
	Global_47582[61 /*46*/].f_3[1] = 29;
	Global_47582[61 /*46*/].f_30 = 2;
	Global_47582[61 /*46*/].f_8[0] = 141;
	Global_47582[61 /*46*/].f_8[1] = 142;
	Global_47582[62 /*46*/].f_45 = 0;
	Global_47582[62 /*46*/].f_31 = 0;
	Global_47582[62 /*46*/].f_42 = 0;
	Global_47582[62 /*46*/].f_43 = 0;
	Global_47582[62 /*46*/].f_2 = 2;
	Global_47582[62 /*46*/].f_3[0] = 3;
	Global_47582[62 /*46*/].f_3[1] = 2;
	Global_47582[62 /*46*/].f_30 = 2;
	Global_47582[62 /*46*/].f_8[0] = 143;
	Global_47582[62 /*46*/].f_8[1] = 144;
	Global_47582[63 /*46*/].f_45 = 0;
	Global_47582[63 /*46*/].f_31 = 0;
	Global_47582[63 /*46*/].f_42 = 0;
	Global_47582[63 /*46*/].f_43 = 0;
	Global_47582[63 /*46*/].f_2 = 2;
	Global_47582[63 /*46*/].f_3[0] = 2;
	Global_47582[63 /*46*/].f_3[1] = 34;
	Global_47582[63 /*46*/].f_30 = 2;
	Global_47582[63 /*46*/].f_8[0] = 145;
	Global_47582[63 /*46*/].f_8[1] = 146;
	Global_47582[64 /*46*/].f_45 = 0;
	Global_47582[64 /*46*/].f_31 = 0;
	Global_47582[64 /*46*/].f_42 = 0;
	Global_47582[64 /*46*/].f_43 = 0;
	Global_47582[64 /*46*/].f_2 = 2;
	Global_47582[64 /*46*/].f_3[0] = 2;
	Global_47582[64 /*46*/].f_3[1] = 26;
	Global_47582[64 /*46*/].f_30 = 1;
	Global_47582[64 /*46*/].f_8[0] = 147;
	Global_47582[65 /*46*/].f_45 = 0;
	Global_47582[65 /*46*/].f_31 = 0;
	Global_47582[65 /*46*/].f_42 = 0;
	Global_47582[65 /*46*/].f_43 = 0;
	Global_47582[65 /*46*/].f_2 = 1;
	Global_47582[65 /*46*/].f_3[0] = 35;
	Global_47582[65 /*46*/].f_30 = 3;
	Global_47582[65 /*46*/].f_8[0] = 148;
	Global_47582[65 /*46*/].f_8[1] = 149;
	Global_47582[65 /*46*/].f_8[2] = 150;
	Global_47582[66 /*46*/].f_45 = 0;
	Global_47582[66 /*46*/].f_31 = 0;
	Global_47582[66 /*46*/].f_42 = 0;
	Global_47582[66 /*46*/].f_43 = 0;
	Global_47582[66 /*46*/].f_2 = 1;
	Global_47582[66 /*46*/].f_3[0] = 36;
	Global_47582[66 /*46*/].f_30 = 3;
	Global_47582[66 /*46*/].f_8[0] = 151;
	Global_47582[66 /*46*/].f_8[1] = 152;
	Global_47582[66 /*46*/].f_8[2] = 153;
	Global_47582[67 /*46*/].f_45 = 0;
	Global_47582[67 /*46*/].f_31 = 0;
	Global_47582[67 /*46*/].f_42 = 0;
	Global_47582[67 /*46*/].f_43 = 0;
	Global_47582[67 /*46*/].f_2 = 2;
	Global_47582[67 /*46*/].f_3[0] = 4;
	Global_47582[67 /*46*/].f_3[1] = 0;
	Global_47582[67 /*46*/].f_30 = 1;
	Global_47582[67 /*46*/].f_8[0] = 7;
	Global_47582[68 /*46*/].f_45 = 0;
	Global_47582[68 /*46*/].f_31 = 0;
	Global_47582[68 /*46*/].f_42 = 0;
	Global_47582[68 /*46*/].f_43 = 0;
	Global_47582[68 /*46*/].f_2 = 2;
	Global_47582[68 /*46*/].f_3[0] = 4;
	Global_47582[68 /*46*/].f_3[1] = 0;
	Global_47582[68 /*46*/].f_30 = 1;
	Global_47582[68 /*46*/].f_8[0] = 8;
	Global_47582[69 /*46*/].f_45 = 0;
	Global_47582[69 /*46*/].f_31 = 0;
	Global_47582[69 /*46*/].f_42 = 0;
	Global_47582[69 /*46*/].f_43 = 0;
	Global_47582[69 /*46*/].f_2 = 2;
	Global_47582[69 /*46*/].f_3[0] = 2;
	Global_47582[69 /*46*/].f_3[1] = 38;
	Global_47582[69 /*46*/].f_30 = 1;
	Global_47582[69 /*46*/].f_8[0] = 154;
	Global_47582[70 /*46*/].f_45 = 0;
	Global_47582[70 /*46*/].f_31 = 0;
	Global_47582[70 /*46*/].f_42 = 0;
	Global_47582[70 /*46*/].f_43 = 0;
	Global_47582[70 /*46*/].f_2 = 1;
	Global_47582[70 /*46*/].f_3[0] = 11;
	Global_47582[70 /*46*/].f_30 = 3;
	Global_47582[70 /*46*/].f_8[0] = 155;
	Global_47582[70 /*46*/].f_8[1] = 156;
	Global_47582[70 /*46*/].f_8[2] = 157;
	Global_47582[71 /*46*/].f_45 = 0;
	Global_47582[71 /*46*/].f_31 = 0;
	Global_47582[71 /*46*/].f_42 = 0;
	Global_47582[71 /*46*/].f_43 = 0;
	Global_47582[71 /*46*/].f_2 = 2;
	Global_47582[71 /*46*/].f_3[0] = 2;
	Global_47582[71 /*46*/].f_3[1] = 29;
	Global_47582[71 /*46*/].f_30 = 1;
	Global_47582[71 /*46*/].f_8[0] = 158;
	Global_47582[72 /*46*/].f_45 = 0;
	Global_47582[72 /*46*/].f_31 = 0;
	Global_47582[72 /*46*/].f_42 = 0;
	Global_47582[72 /*46*/].f_43 = 0;
	Global_47582[72 /*46*/].f_2 = 1;
	Global_47582[72 /*46*/].f_3[0] = 0;
	Global_47582[72 /*46*/].f_30 = 1;
	Global_47582[72 /*46*/].f_8[0] = 159;
	Global_47582[73 /*46*/].f_45 = 0;
	Global_47582[73 /*46*/].f_31 = 0;
	Global_47582[73 /*46*/].f_42 = 0;
	Global_47582[73 /*46*/].f_43 = 0;
	Global_47582[73 /*46*/].f_2 = 1;
	Global_47582[73 /*46*/].f_3[0] = 1;
	Global_47582[73 /*46*/].f_30 = 1;
	Global_47582[73 /*46*/].f_8[0] = 160;
	Global_47582[74 /*46*/].f_45 = 0;
	Global_47582[74 /*46*/].f_31 = 0;
	Global_47582[74 /*46*/].f_42 = 0;
	Global_47582[74 /*46*/].f_43 = 0;
	Global_47582[74 /*46*/].f_2 = 1;
	Global_47582[74 /*46*/].f_3[0] = 1;
	Global_47582[74 /*46*/].f_30 = 1;
	Global_47582[74 /*46*/].f_8[0] = 161;
	Global_47582[75 /*46*/].f_45 = 0;
	Global_47582[75 /*46*/].f_31 = 0;
	Global_47582[75 /*46*/].f_42 = 0;
	Global_47582[75 /*46*/].f_43 = 0;
	Global_47582[75 /*46*/].f_2 = 1;
	Global_47582[75 /*46*/].f_3[0] = 0;
	Global_47582[75 /*46*/].f_30 = 1;
	Global_47582[75 /*46*/].f_8[0] = 162;
	Global_47582[76 /*46*/].f_45 = 0;
	Global_47582[76 /*46*/].f_31 = 0;
	Global_47582[76 /*46*/].f_42 = 0;
	Global_47582[76 /*46*/].f_43 = 0;
	Global_47582[76 /*46*/].f_2 = 1;
	Global_47582[76 /*46*/].f_3[0] = 2;
	Global_47582[76 /*46*/].f_30 = 1;
	Global_47582[76 /*46*/].f_8[0] = 163;
	Global_47582[77 /*46*/].f_45 = 0;
	Global_47582[77 /*46*/].f_31 = 0;
	Global_47582[77 /*46*/].f_42 = 0;
	Global_47582[77 /*46*/].f_43 = 0;
	Global_47582[77 /*46*/].f_2 = 1;
	Global_47582[77 /*46*/].f_3[0] = 1;
	Global_47582[77 /*46*/].f_30 = 1;
	Global_47582[77 /*46*/].f_8[0] = 164;
	Global_47582[78 /*46*/].f_45 = 0;
	Global_47582[78 /*46*/].f_31 = 0;
	Global_47582[78 /*46*/].f_42 = 0;
	Global_47582[78 /*46*/].f_43 = 0;
	Global_47582[78 /*46*/].f_2 = 1;
	Global_47582[78 /*46*/].f_3[0] = 1;
	Global_47582[78 /*46*/].f_30 = 1;
	Global_47582[78 /*46*/].f_8[0] = 165;
	Global_47582[79 /*46*/].f_45 = 0;
	Global_47582[79 /*46*/].f_31 = 0;
	Global_47582[79 /*46*/].f_42 = 0;
	Global_47582[79 /*46*/].f_43 = 0;
	Global_47582[79 /*46*/].f_2 = 1;
	Global_47582[79 /*46*/].f_3[0] = 0;
	Global_47582[79 /*46*/].f_30 = 1;
	Global_47582[79 /*46*/].f_8[0] = 166;
	Global_47582[80 /*46*/].f_45 = 0;
	Global_47582[80 /*46*/].f_31 = 0;
	Global_47582[80 /*46*/].f_42 = 0;
	Global_47582[80 /*46*/].f_43 = 0;
	Global_47582[80 /*46*/].f_2 = 1;
	Global_47582[80 /*46*/].f_3[0] = 0;
	Global_47582[80 /*46*/].f_30 = 1;
	Global_47582[80 /*46*/].f_8[0] = 167;
	Global_47582[81 /*46*/].f_45 = 0;
	Global_47582[81 /*46*/].f_31 = 0;
	Global_47582[81 /*46*/].f_42 = 0;
	Global_47582[81 /*46*/].f_43 = 0;
	Global_47582[81 /*46*/].f_2 = 1;
	Global_47582[81 /*46*/].f_3[0] = 0;
	Global_47582[81 /*46*/].f_30 = 1;
	Global_47582[81 /*46*/].f_8[0] = 168;
	Global_47582[82 /*46*/].f_45 = 0;
	Global_47582[82 /*46*/].f_31 = 0;
	Global_47582[82 /*46*/].f_42 = 0;
	Global_47582[82 /*46*/].f_43 = 0;
	Global_47582[82 /*46*/].f_2 = 1;
	Global_47582[82 /*46*/].f_3[0] = 2;
	Global_47582[82 /*46*/].f_30 = 1;
	Global_47582[82 /*46*/].f_8[0] = 169;
	Global_47582[83 /*46*/].f_45 = 0;
	Global_47582[83 /*46*/].f_31 = 0;
	Global_47582[83 /*46*/].f_42 = 0;
	Global_47582[83 /*46*/].f_43 = 0;
	Global_47582[83 /*46*/].f_2 = 1;
	Global_47582[83 /*46*/].f_3[0] = 1;
	Global_47582[83 /*46*/].f_30 = 1;
	Global_47582[83 /*46*/].f_8[0] = 170;
	Global_47582[84 /*46*/].f_45 = 0;
	Global_47582[84 /*46*/].f_31 = 0;
	Global_47582[84 /*46*/].f_42 = 0;
	Global_47582[84 /*46*/].f_43 = 0;
	Global_47582[84 /*46*/].f_2 = 1;
	Global_47582[84 /*46*/].f_3[0] = 1;
	Global_47582[84 /*46*/].f_30 = 1;
	Global_47582[84 /*46*/].f_8[0] = 171;
	Global_47582[85 /*46*/].f_45 = 0;
	Global_47582[85 /*46*/].f_31 = 0;
	Global_47582[85 /*46*/].f_42 = 0;
	Global_47582[85 /*46*/].f_43 = 0;
	Global_47582[85 /*46*/].f_2 = 1;
	Global_47582[85 /*46*/].f_3[0] = 0;
	Global_47582[85 /*46*/].f_30 = 1;
	Global_47582[85 /*46*/].f_8[0] = 172;
	Global_47582[86 /*46*/].f_45 = 0;
	Global_47582[86 /*46*/].f_31 = 0;
	Global_47582[86 /*46*/].f_42 = 0;
	Global_47582[86 /*46*/].f_43 = 0;
	Global_47582[86 /*46*/].f_2 = 1;
	Global_47582[86 /*46*/].f_3[0] = 2;
	Global_47582[86 /*46*/].f_30 = 1;
	Global_47582[86 /*46*/].f_8[0] = 173;
	Global_47582[87 /*46*/].f_45 = 0;
	Global_47582[87 /*46*/].f_31 = 0;
	Global_47582[87 /*46*/].f_42 = 0;
	Global_47582[87 /*46*/].f_43 = 0;
	Global_47582[87 /*46*/].f_2 = 1;
	Global_47582[87 /*46*/].f_3[0] = 1;
	Global_47582[87 /*46*/].f_30 = 1;
	Global_47582[87 /*46*/].f_8[0] = 174;
	Global_47582[88 /*46*/].f_45 = 0;
	Global_47582[88 /*46*/].f_31 = 0;
	Global_47582[88 /*46*/].f_42 = 0;
	Global_47582[88 /*46*/].f_43 = 0;
	Global_47582[88 /*46*/].f_2 = 1;
	Global_47582[88 /*46*/].f_3[0] = 0;
	Global_47582[88 /*46*/].f_30 = 1;
	Global_47582[88 /*46*/].f_8[0] = 175;
	Global_47582[89 /*46*/].f_45 = 0;
	Global_47582[89 /*46*/].f_31 = 0;
	Global_47582[89 /*46*/].f_42 = 0;
	Global_47582[89 /*46*/].f_43 = 0;
	Global_47582[89 /*46*/].f_2 = 1;
	Global_47582[89 /*46*/].f_3[0] = 2;
	Global_47582[89 /*46*/].f_30 = 1;
	Global_47582[89 /*46*/].f_8[0] = 176;
	Global_47582[90 /*46*/].f_45 = 0;
	Global_47582[90 /*46*/].f_31 = 0;
	Global_47582[90 /*46*/].f_42 = 0;
	Global_47582[90 /*46*/].f_43 = 0;
	Global_47582[90 /*46*/].f_2 = 1;
	Global_47582[90 /*46*/].f_3[0] = 1;
	Global_47582[90 /*46*/].f_30 = 1;
	Global_47582[90 /*46*/].f_8[0] = 177;
	Global_47582[91 /*46*/].f_45 = 0;
	Global_47582[91 /*46*/].f_31 = 0;
	Global_47582[91 /*46*/].f_42 = 0;
	Global_47582[91 /*46*/].f_43 = 0;
	Global_47582[91 /*46*/].f_2 = 1;
	Global_47582[91 /*46*/].f_3[0] = 0;
	Global_47582[91 /*46*/].f_30 = 1;
	Global_47582[91 /*46*/].f_8[0] = 179;
	Global_47582[92 /*46*/].f_45 = 0;
	Global_47582[92 /*46*/].f_31 = 0;
	Global_47582[92 /*46*/].f_42 = 0;
	Global_47582[92 /*46*/].f_43 = 0;
	Global_47582[92 /*46*/].f_2 = 1;
	Global_47582[92 /*46*/].f_3[0] = 2;
	Global_47582[92 /*46*/].f_30 = 1;
	Global_47582[92 /*46*/].f_8[0] = 178;
	Global_47582[93 /*46*/].f_45 = 0;
	Global_47582[93 /*46*/].f_31 = 0;
	Global_47582[93 /*46*/].f_42 = 0;
	Global_47582[93 /*46*/].f_43 = 0;
	Global_47582[93 /*46*/].f_2 = 1;
	Global_47582[93 /*46*/].f_3[0] = 1;
	Global_47582[93 /*46*/].f_30 = 1;
	Global_47582[93 /*46*/].f_8[0] = 180;
	Global_47582[94 /*46*/].f_45 = 0;
	Global_47582[94 /*46*/].f_31 = 0;
	Global_47582[94 /*46*/].f_42 = 0;
	Global_47582[94 /*46*/].f_43 = 0;
	Global_47582[94 /*46*/].f_2 = 2;
	Global_47582[94 /*46*/].f_3[0] = 4;
	Global_47582[94 /*46*/].f_3[1] = 0;
	Global_47582[94 /*46*/].f_30 = 1;
	Global_47582[94 /*46*/].f_8[0] = 181;
	Global_47582[95 /*46*/].f_45 = 0;
	Global_47582[95 /*46*/].f_31 = 0;
	Global_47582[95 /*46*/].f_42 = 0;
	Global_47582[95 /*46*/].f_43 = 0;
	Global_47582[95 /*46*/].f_2 = 1;
	Global_47582[95 /*46*/].f_3[0] = 37;
	Global_47582[95 /*46*/].f_30 = 1;
	Global_47582[95 /*46*/].f_8[0] = 182;
	Global_47582[96 /*46*/].f_45 = 0;
	Global_47582[96 /*46*/].f_31 = 0;
	Global_47582[96 /*46*/].f_42 = 0;
	Global_47582[96 /*46*/].f_43 = 0;
	Global_47582[96 /*46*/].f_2 = 1;
	Global_47582[96 /*46*/].f_3[0] = 37;
	Global_47582[96 /*46*/].f_30 = 1;
	Global_47582[96 /*46*/].f_8[0] = 183;
	Global_47582[97 /*46*/].f_45 = 0;
	Global_47582[97 /*46*/].f_31 = 0;
	Global_47582[97 /*46*/].f_42 = 0;
	Global_47582[97 /*46*/].f_43 = 0;
	Global_47582[97 /*46*/].f_2 = 1;
	Global_47582[97 /*46*/].f_3[0] = 37;
	Global_47582[97 /*46*/].f_30 = 1;
	Global_47582[97 /*46*/].f_8[0] = 184;
	Global_47582[98 /*46*/].f_45 = 0;
	Global_47582[98 /*46*/].f_31 = 0;
	Global_47582[98 /*46*/].f_42 = 0;
	Global_47582[98 /*46*/].f_43 = 0;
	Global_47582[98 /*46*/].f_2 = 1;
	Global_47582[98 /*46*/].f_3[0] = 54;
	Global_47582[98 /*46*/].f_30 = 3;
	Global_47582[98 /*46*/].f_8[0] = 185;
	Global_47582[98 /*46*/].f_8[1] = 186;
	Global_47582[98 /*46*/].f_8[2] = 188;
	Global_47582[99 /*46*/].f_45 = 0;
	Global_47582[99 /*46*/].f_31 = 0;
	Global_47582[99 /*46*/].f_42 = 0;
	Global_47582[99 /*46*/].f_43 = 0;
	Global_47582[99 /*46*/].f_2 = 1;
	Global_47582[99 /*46*/].f_3[0] = 55;
	Global_47582[99 /*46*/].f_30 = 3;
	Global_47582[99 /*46*/].f_8[0] = 187;
	Global_47582[99 /*46*/].f_8[1] = 189;
	Global_47582[99 /*46*/].f_8[2] = 190;
	Global_47582[100 /*46*/].f_45 = 0;
	Global_47582[100 /*46*/].f_31 = 0;
	Global_47582[100 /*46*/].f_42 = 0;
	Global_47582[100 /*46*/].f_43 = 0;
	Global_47582[100 /*46*/].f_2 = 3;
	Global_47582[100 /*46*/].f_3[0] = 56;
	Global_47582[100 /*46*/].f_3[1] = 0;
	Global_47582[100 /*46*/].f_3[2] = 2;
	Global_47582[100 /*46*/].f_30 = 5;
	Global_47582[100 /*46*/].f_8[0] = 194;
	Global_47582[100 /*46*/].f_8[1] = 195;
	Global_47582[100 /*46*/].f_8[2] = 196;
	Global_47582[100 /*46*/].f_8[3] = 197;
	Global_47582[100 /*46*/].f_8[4] = 198;
	Global_47582[101 /*46*/].f_45 = 0;
	Global_47582[101 /*46*/].f_31 = 0;
	Global_47582[101 /*46*/].f_42 = 0;
	Global_47582[101 /*46*/].f_43 = 0;
	Global_47582[101 /*46*/].f_2 = 2;
	Global_47582[101 /*46*/].f_3[0] = 57;
	Global_47582[101 /*46*/].f_3[1] = 0;
	Global_47582[101 /*46*/].f_30 = 8;
	Global_47582[101 /*46*/].f_8[0] = 199;
	Global_47582[101 /*46*/].f_8[1] = 200;
	Global_47582[101 /*46*/].f_8[2] = 201;
	Global_47582[101 /*46*/].f_8[3] = 202;
	Global_47582[101 /*46*/].f_8[4] = 203;
	Global_47582[101 /*46*/].f_8[5] = 204;
	Global_47582[101 /*46*/].f_8[6] = 205;
	Global_47582[101 /*46*/].f_8[7] = 206;
	Global_47582[102 /*46*/].f_45 = 0;
	Global_47582[102 /*46*/].f_31 = 0;
	Global_47582[102 /*46*/].f_42 = 0;
	Global_47582[102 /*46*/].f_43 = 0;
	Global_47582[102 /*46*/].f_2 = 2;
	Global_47582[102 /*46*/].f_3[0] = 58;
	Global_47582[102 /*46*/].f_3[1] = 0;
	Global_47582[102 /*46*/].f_30 = 7;
	Global_47582[102 /*46*/].f_8[0] = 207;
	Global_47582[102 /*46*/].f_8[1] = 208;
	Global_47582[102 /*46*/].f_8[2] = 209;
	Global_47582[102 /*46*/].f_8[3] = 210;
	Global_47582[102 /*46*/].f_8[4] = 211;
	Global_47582[102 /*46*/].f_8[5] = 212;
	Global_47582[102 /*46*/].f_8[6] = 213;
	Global_47582[103 /*46*/].f_45 = 0;
	Global_47582[103 /*46*/].f_31 = 0;
	Global_47582[103 /*46*/].f_42 = 0;
	Global_47582[103 /*46*/].f_43 = 0;
	Global_47582[103 /*46*/].f_2 = 2;
	Global_47582[103 /*46*/].f_3[0] = 59;
	Global_47582[103 /*46*/].f_3[1] = 0;
	Global_47582[103 /*46*/].f_30 = 8;
	Global_47582[103 /*46*/].f_8[0] = 214;
	Global_47582[103 /*46*/].f_8[1] = 215;
	Global_47582[103 /*46*/].f_8[2] = 216;
	Global_47582[103 /*46*/].f_8[3] = 217;
	Global_47582[103 /*46*/].f_8[4] = 218;
	Global_47582[103 /*46*/].f_8[5] = 219;
	Global_47582[103 /*46*/].f_8[6] = 220;
	Global_47582[103 /*46*/].f_8[7] = 221;
	Global_47582[104 /*46*/].f_45 = 0;
	Global_47582[104 /*46*/].f_31 = 0;
	Global_47582[104 /*46*/].f_42 = 0;
	Global_47582[104 /*46*/].f_43 = 0;
	Global_47582[104 /*46*/].f_2 = 2;
	Global_47582[104 /*46*/].f_3[0] = 60;
	Global_47582[104 /*46*/].f_3[1] = 2;
	Global_47582[104 /*46*/].f_30 = 7;
	Global_47582[104 /*46*/].f_8[0] = 222;
	Global_47582[104 /*46*/].f_8[1] = 223;
	Global_47582[104 /*46*/].f_8[2] = 224;
	Global_47582[104 /*46*/].f_8[3] = 225;
	Global_47582[104 /*46*/].f_8[4] = 226;
	Global_47582[104 /*46*/].f_8[5] = 227;
	Global_47582[104 /*46*/].f_8[6] = 228;
	Global_47582[105 /*46*/].f_45 = 0;
	Global_47582[105 /*46*/].f_31 = 0;
	Global_47582[105 /*46*/].f_42 = 0;
	Global_47582[105 /*46*/].f_43 = 0;
	Global_47582[105 /*46*/].f_2 = 2;
	Global_47582[105 /*46*/].f_3[0] = 61;
	Global_47582[105 /*46*/].f_3[1] = 2;
	Global_47582[105 /*46*/].f_30 = 6;
	Global_47582[105 /*46*/].f_8[0] = 229;
	Global_47582[105 /*46*/].f_8[1] = 230;
	Global_47582[105 /*46*/].f_8[2] = 231;
	Global_47582[105 /*46*/].f_8[3] = 232;
	Global_47582[105 /*46*/].f_8[4] = 233;
	Global_47582[105 /*46*/].f_8[5] = 234;
	Global_47582[106 /*46*/].f_45 = 0;
	Global_47582[106 /*46*/].f_31 = 0;
	Global_47582[106 /*46*/].f_42 = 0;
	Global_47582[106 /*46*/].f_43 = 0;
	Global_47582[106 /*46*/].f_2 = 2;
	Global_47582[106 /*46*/].f_3[0] = 62;
	Global_47582[106 /*46*/].f_3[1] = 2;
	Global_47582[106 /*46*/].f_30 = 6;
	Global_47582[106 /*46*/].f_8[0] = 235;
	Global_47582[106 /*46*/].f_8[1] = 236;
	Global_47582[106 /*46*/].f_8[2] = 237;
	Global_47582[106 /*46*/].f_8[3] = 238;
	Global_47582[106 /*46*/].f_8[4] = 239;
	Global_47582[106 /*46*/].f_8[5] = 240;
	Global_47582[107 /*46*/].f_45 = 0;
	Global_47582[107 /*46*/].f_31 = 0;
	Global_47582[107 /*46*/].f_42 = 0;
	Global_47582[107 /*46*/].f_43 = 0;
	Global_47582[107 /*46*/].f_2 = 1;
	Global_47582[107 /*46*/].f_3[0] = 36;
	Global_47582[107 /*46*/].f_30 = 1;
	Global_47582[107 /*46*/].f_8[0] = 241;
	Global_47582[108 /*46*/].f_45 = 0;
	Global_47582[108 /*46*/].f_31 = 0;
	Global_47582[108 /*46*/].f_42 = 0;
	Global_47582[108 /*46*/].f_43 = 0;
	Global_47582[108 /*46*/].f_2 = 1;
	Global_47582[108 /*46*/].f_3[0] = 36;
	Global_47582[108 /*46*/].f_30 = 1;
	Global_47582[108 /*46*/].f_8[0] = 242;
	Global_47582[109 /*46*/].f_45 = 0;
	Global_47582[109 /*46*/].f_31 = 0;
	Global_47582[109 /*46*/].f_42 = 0;
	Global_47582[109 /*46*/].f_43 = 0;
	Global_47582[109 /*46*/].f_2 = 1;
	Global_47582[109 /*46*/].f_3[0] = 36;
	Global_47582[109 /*46*/].f_30 = 1;
	Global_47582[109 /*46*/].f_8[0] = 243;
	Global_47582[110 /*46*/].f_45 = 0;
	Global_47582[110 /*46*/].f_31 = 0;
	Global_47582[110 /*46*/].f_42 = 0;
	Global_47582[110 /*46*/].f_43 = 0;
	Global_47582[110 /*46*/].f_2 = 1;
	Global_47582[110 /*46*/].f_3[0] = 65;
	Global_47582[110 /*46*/].f_30 = 1;
	Global_47582[110 /*46*/].f_8[0] = 244;
	Global_47582[111 /*46*/].f_45 = 0;
	Global_47582[111 /*46*/].f_31 = 0;
	Global_47582[111 /*46*/].f_42 = 0;
	Global_47582[111 /*46*/].f_43 = 0;
	Global_47582[111 /*46*/].f_2 = 1;
	Global_47582[111 /*46*/].f_3[0] = 65;
	Global_47582[111 /*46*/].f_30 = 1;
	Global_47582[111 /*46*/].f_8[0] = 245;
	Global_47582[112 /*46*/].f_45 = 0;
	Global_47582[112 /*46*/].f_31 = 0;
	Global_47582[112 /*46*/].f_42 = 0;
	Global_47582[112 /*46*/].f_43 = 0;
	Global_47582[112 /*46*/].f_2 = 1;
	Global_47582[112 /*46*/].f_3[0] = 65;
	Global_47582[112 /*46*/].f_30 = 1;
	Global_47582[112 /*46*/].f_8[0] = 246;
	Global_47582[113 /*46*/].f_45 = 0;
	Global_47582[113 /*46*/].f_31 = 0;
	Global_47582[113 /*46*/].f_42 = 0;
	Global_47582[113 /*46*/].f_43 = 0;
	Global_47582[113 /*46*/].f_2 = 1;
	Global_47582[113 /*46*/].f_3[0] = 65;
	Global_47582[113 /*46*/].f_30 = 1;
	Global_47582[113 /*46*/].f_8[0] = 247;
	Global_47582[114 /*46*/].f_45 = 0;
	Global_47582[114 /*46*/].f_31 = 0;
	Global_47582[114 /*46*/].f_42 = 0;
	Global_47582[114 /*46*/].f_43 = 0;
	Global_47582[114 /*46*/].f_2 = 2;
	Global_47582[114 /*46*/].f_3[0] = 19;
	Global_47582[114 /*46*/].f_3[1] = 1;
	Global_47582[114 /*46*/].f_30 = 21;
	Global_47582[114 /*46*/].f_8[0] = 249;
	Global_47582[114 /*46*/].f_8[1] = 250;
	Global_47582[114 /*46*/].f_8[2] = 251;
	Global_47582[114 /*46*/].f_8[3] = 252;
	Global_47582[114 /*46*/].f_8[4] = 253;
	Global_47582[114 /*46*/].f_8[5] = 254;
	Global_47582[114 /*46*/].f_8[6] = 255;
	Global_47582[114 /*46*/].f_8[7] = 256;
	Global_47582[114 /*46*/].f_8[8] = 257;
	Global_47582[114 /*46*/].f_8[9] = 258;
	Global_47582[114 /*46*/].f_8[10] = 259;
	Global_47582[114 /*46*/].f_8[11] = 260;
	Global_47582[114 /*46*/].f_8[12] = 261;
	Global_47582[114 /*46*/].f_8[13] = 262;
	Global_47582[114 /*46*/].f_8[14] = 263;
	Global_47582[114 /*46*/].f_8[15] = 264;
	Global_47582[114 /*46*/].f_8[16] = 265;
	Global_47582[114 /*46*/].f_8[17] = 266;
	Global_47582[114 /*46*/].f_8[18] = 267;
	Global_47582[114 /*46*/].f_8[19] = 268;
	Global_47582[114 /*46*/].f_8[20] = 269;
	Global_47582[115 /*46*/].f_45 = 0;
	Global_47582[115 /*46*/].f_31 = 0;
	Global_47582[115 /*46*/].f_42 = 0;
	Global_47582[115 /*46*/].f_43 = 0;
	Global_47582[115 /*46*/].f_2 = 4;
	Global_47582[115 /*46*/].f_3[0] = 0;
	Global_47582[115 /*46*/].f_3[1] = 1;
	Global_47582[115 /*46*/].f_3[2] = 2;
	Global_47582[115 /*46*/].f_3[3] = 16;
	Global_47582[115 /*46*/].f_30 = 1;
	Global_47582[115 /*46*/].f_8[0] = 270;
	Global_47582[116 /*46*/].f_45 = 0;
	Global_47582[116 /*46*/].f_31 = 0;
	Global_47582[116 /*46*/].f_42 = 0;
	Global_47582[116 /*46*/].f_43 = 0;
	Global_47582[116 /*46*/].f_2 = 4;
	Global_47582[116 /*46*/].f_3[0] = 0;
	Global_47582[116 /*46*/].f_3[1] = 1;
	Global_47582[116 /*46*/].f_3[2] = 2;
	Global_47582[116 /*46*/].f_3[3] = 16;
	Global_47582[116 /*46*/].f_30 = 1;
	Global_47582[116 /*46*/].f_8[0] = 271;
	Global_47582[117 /*46*/].f_45 = 0;
	Global_47582[117 /*46*/].f_31 = 0;
	Global_47582[117 /*46*/].f_42 = 0;
	Global_47582[117 /*46*/].f_43 = 0;
	Global_47582[117 /*46*/].f_2 = 4;
	Global_47582[117 /*46*/].f_3[0] = 0;
	Global_47582[117 /*46*/].f_3[1] = 1;
	Global_47582[117 /*46*/].f_3[2] = 2;
	Global_47582[117 /*46*/].f_3[3] = 16;
	Global_47582[117 /*46*/].f_30 = 1;
	Global_47582[117 /*46*/].f_8[0] = 272;
	Global_47582[118 /*46*/].f_45 = 0;
	Global_47582[118 /*46*/].f_31 = 0;
	Global_47582[118 /*46*/].f_42 = 0;
	Global_47582[118 /*46*/].f_43 = 0;
	Global_47582[118 /*46*/].f_2 = 4;
	Global_47582[118 /*46*/].f_3[0] = 0;
	Global_47582[118 /*46*/].f_3[1] = 1;
	Global_47582[118 /*46*/].f_3[2] = 2;
	Global_47582[118 /*46*/].f_3[3] = 16;
	Global_47582[118 /*46*/].f_30 = 1;
	Global_47582[118 /*46*/].f_8[0] = 273;
	Global_47582[119 /*46*/].f_45 = 0;
	Global_47582[119 /*46*/].f_31 = 0;
	Global_47582[119 /*46*/].f_42 = 0;
	Global_47582[119 /*46*/].f_43 = 0;
	Global_47582[119 /*46*/].f_2 = 4;
	Global_47582[119 /*46*/].f_3[0] = 0;
	Global_47582[119 /*46*/].f_3[1] = 1;
	Global_47582[119 /*46*/].f_3[2] = 2;
	Global_47582[119 /*46*/].f_3[3] = 16;
	Global_47582[119 /*46*/].f_30 = 1;
	Global_47582[119 /*46*/].f_8[0] = 274;
	Global_47582[120 /*46*/].f_45 = 0;
	Global_47582[120 /*46*/].f_31 = 0;
	Global_47582[120 /*46*/].f_42 = 0;
	Global_47582[120 /*46*/].f_43 = 0;
	Global_47582[120 /*46*/].f_2 = 4;
	Global_47582[120 /*46*/].f_3[0] = 0;
	Global_47582[120 /*46*/].f_3[1] = 1;
	Global_47582[120 /*46*/].f_3[2] = 2;
	Global_47582[120 /*46*/].f_3[3] = 16;
	Global_47582[120 /*46*/].f_30 = 1;
	Global_47582[120 /*46*/].f_8[0] = 275;
	Global_47582[121 /*46*/].f_45 = 0;
	Global_47582[121 /*46*/].f_31 = 0;
	Global_47582[121 /*46*/].f_42 = 0;
	Global_47582[121 /*46*/].f_43 = 0;
	Global_47582[121 /*46*/].f_2 = 4;
	Global_47582[121 /*46*/].f_3[0] = 0;
	Global_47582[121 /*46*/].f_3[1] = 1;
	Global_47582[121 /*46*/].f_3[2] = 2;
	Global_47582[121 /*46*/].f_3[3] = 16;
	Global_47582[121 /*46*/].f_30 = 1;
	Global_47582[121 /*46*/].f_8[0] = 276;
}

int func_832(int iParam0, int iParam1, int iParam2)//Position - 0x79560
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_833(int iParam0)//Position - 0x7A700
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&(Global_100441.f_20), 15);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
			}
			else
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				}
			}
		}
		else if (BitTest(Global_100441.f_20, 15))
		{
			bVar0 = false;
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar1)))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			MISC::CLEAR_BIT(&(Global_100441.f_20), 15);
		}
	}
}

void func_834(int iParam0)//Position - 0x7AC3D
{
	int iVar0;
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(Global_100441.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&(Global_100441.f_20), 2);
			}
		}
		else if (BitTest(Global_100441.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&(Global_100441.f_20), 2);
		}
	}
}

int func_835(int iParam0)//Position - 0x8715B
{
	char cVar0[16];
	if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 7))
	{
		StringCopy(&cVar0, "FL_CO_", 16);
		StringConCat(&cVar0, &(Global_91229[iParam0 /*34*/].f_8), 16);
		if (iParam0 == 90)
		{
			if (Global_113386.f_9085.f_99.f_205[7] == 2)
			{
				StringConCat(&cVar0, "B", 16);
			}
			else
			{
				StringConCat(&cVar0, "A", 16);
			}
		}
		return MISC::GET_HASH_KEY(&cVar0);
	}
	return joaat("CITIES_PASSED");
}

bool func_836(int iParam0, int iParam1)//Position - 0x8AB3B
{
	var uVar0;
	uVar0 = iParam1;
	return BitTest(Global_2686568[iParam0 /*41*/].f_31, uVar0);
}

var func_837(int iParam0, int iParam1)//Position - 0x8ABBF
{
	var uVar0;
	uVar0 = iParam1;
	return BitTest(Global_2686568[iParam0 /*41*/].f_33, uVar0);
}

var func_838(int iParam0, int iParam1)//Position - 0x8ABD8
{
	var uVar0;
	uVar0 = iParam1;
	return BitTest(Global_2686568[iParam0 /*41*/].f_32, uVar0);
}

bool func_839(int iParam0, int iParam1)//Position - 0x8ABF1
{
	var uVar0;
	uVar0 = iParam1;
	return BitTest(Global_2686568[iParam0 /*41*/].f_37, uVar0);
}

int func_840()//Position - 0x8ADC7
{
	if (MISC::GET_GAME_TIMER() > Global_2654144.f_3)
	{
		return 1;
	}
	return 0;
}

void func_841()//Position - 0x8AE52
{
	int iVar0;
	Global_22669 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1659410)
	{
		if (((!Global_2654152[iVar0 /*82*/].f_4 && Global_2654152[iVar0 /*82*/].f_11) && Global_2654152[iVar0 /*82*/]) && Global_2654152[iVar0 /*82*/].f_2)
		{
			Global_22669 = 1;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1659438)
	{
		if ((!Global_2655137[iVar0 /*99*/].f_5 && Global_2655137[iVar0 /*99*/]) && Global_2655137[iVar0 /*99*/].f_1)
		{
			Global_22669 = 1;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1659440)
	{
		if (((!Global_2656326[iVar0 /*46*/].f_4 && Global_2656326[iVar0 /*46*/].f_7) && Global_2656326[iVar0 /*46*/]) && Global_2656326[iVar0 /*46*/].f_3)
		{
			switch (Global_2656326[iVar0 /*46*/].f_8)
			{
				case 68:
					Global_22669 = 1;
					return;
				}
			default:
		}
		iVar0++;
	}
}

void func_842()//Position - 0x8B6F8
{
	HUD::THEFEED_RESET_ALL_PARAMETERS();
}

void func_843(bool bParam0, int iParam1, char* sParam2)//Position - 0x8B704
{
	if (!bParam0 || (iParam1 != 63 && iParam1 != 62))
	{
		return;
	}
	StringConCat(sParam2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("JL_UNPLAYED" /* GXT:  - NEW */), 64);
}

int func_844(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x8C76B
{
	int iVar0;
	int iVar1;
	if (Global_262145.f_3777 /* Tunable: DISABLE_UGC_PLANNING_CACHE */)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -1;
	}
	if (Global_786550 == 0)
	{
		return -1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return -1;
	}
	iVar0 = MISC::GET_HASH_KEY(&uParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_786550)
	{
		if (Global_786550.f_3082[iVar1 /*13*/].f_3 == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_845()//Position - 0x8D3C5
{
	Global_1659411 = 1;
}

int func_846()//Position - 0x8D4D6
{
	if (Global_2654144.f_7 == 0)
	{
		return 1;
	}
	if (MISC::GET_GAME_TIMER() > Global_2654144.f_7)
	{
		return 1;
	}
	return 0;
}

bool func_847()//Position - 0x8D630
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpjoblistnew")) > 0;
}

int func_848(int iParam0)//Position - 0x8DA74
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(Global_2655137[iParam0 /*99*/].f_91);
	if (iVar0 < 0 || iVar0 >= NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
	{
		return 0;
	}
	return 1;
}

int func_849()//Position - 0x8DE0B
{
	var uVar0;
	if (Global_2656982.f_1)
	{
		return 0;
	}
	uVar0 = Global_2656982.f_24;
	Global_2656982.f_24 = 0;
	return uVar0;
}

int func_850(int iParam0)//Position - 0x8F25C
{
	int iVar0;
	iVar0 = __LIB_0__::func_396(iParam0);
	switch (iVar0)
	{
		case 167:
		case 168:
		case 190:
		case 178:
		case 263:
		case 264:
		case 295:
		case 294:
		case 293:
			return 1;
			break;
	}
	return 0;
}

var func_851(int iParam0)//Position - 0x90499
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 3);
}

bool func_852(int iParam0)//Position - 0x90667
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 26);
}

bool func_853(var uParam0)//Position - 0x916B6
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar0 = (iVar0 - 1);
	if (iVar0 < 0)
	{
		iVar0 = 23;
	}
	return BitTest(uParam0, iVar0);
}

int func_854(var uParam0)//Position - 0x916D9
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	return BitTest(uParam0, iVar0);
}

void func_855()//Position - 0x91C89
{
	int iVar0;
	iVar0 = HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID();
	if (iVar0 == -1)
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1795), 19);
		return;
	}
	if (iVar0 != Global_22662)
	{
		return;
	}
	if (Global_22663 == 2)
	{
		MISC::SET_BIT(&(Global_2815059.f_1795), 19);
	}
}

void func_856(int iParam0, bool bParam1)//Position - 0x949C1
{
	if (bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 20);
	}
	else
	{
		MISC::SET_BIT(&(Global_2621865[iParam0 /*26*/].f_12), 20);
	}
}

int func_857()//Position - 0xA21EE
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		return 0;
	}
	return 0;
}

bool func_858()//Position - 0xA223E
{
	return Global_2656914;
}

void func_859()//Position - 0xA2456
{
	int iVar0;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((!DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Vehicle") && !DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Truck")) && !DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Avenger")) && !DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Hacker_Truck"))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Not_Allow_As_Saved_Veh"))
						{
							DECORATOR::DECOR_SET_INT(iVar0, "Not_Allow_As_Saved_Veh", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
						else if (DECORATOR::DECOR_GET_INT(iVar0, "Not_Allow_As_Saved_Veh") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
						{
							DECORATOR::DECOR_SET_INT(iVar0, "Not_Allow_As_Saved_Veh", 1);
						}
					}
				}
			}
		}
	}
}

void func_860(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xA29C7
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	iVar0 = Global_2653184;
	iVar1 = MISC::GET_HASH_KEY(&uParam0);
	Global_2653184 = iVar1;
	Global_2653184.f_1 = (MISC::GET_GAME_TIMER() + 60000);
	if (iVar0 != 0)
	{
	}
}

int func_861()//Position - 0xA2AB7
{
	int iVar0;
	if (Global_2666816.f_1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (Global_2621865[iVar0 /*26*/] == Global_2666816.f_1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_862(int iParam0, struct<3> Param1, float fParam2)//Position - 0xA2C78
{
	struct<3> Var0;
	float fVar1;
	int iVar2[3];
	int iVar3;
	int iVar4;
	float fVar5[3];
	float fVar6;
	struct<2> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	fVar1 = (fParam2 / 3f);
	iVar2[0] = 5;
	iVar2[1] = 10;
	iVar2[2] = 17;
	if (iParam0 <= iVar2[0])
	{
		iVar3 = 0;
		iVar4 = iParam0;
	}
	else if (iParam0 <= (iVar2[1] + iVar2[0]))
	{
		iVar3 = 1;
		iVar4 = (iParam0 - iVar2[0]);
	}
	else
	{
		iVar3 = 2;
		iVar4 = ((iParam0 - iVar2[1]) - iVar2[0]);
	}
	fVar5[0] = SYSTEM::TO_FLOAT((360 / iVar2[0]));
	fVar5[1] = SYSTEM::TO_FLOAT((360 / iVar2[1]));
	fVar5[2] = SYSTEM::TO_FLOAT((360 / iVar2[2]));
	fVar6 = (fVar5[iVar3] * IntToFloat(iVar4));
	fVar9 = SYSTEM::COS(fVar6);
	fVar10 = SYSTEM::SIN(fVar6);
	Var7.f_0 = ((fVar9 * 0f) - (fVar10 * 1f));
	Var7.f_1 = ((fVar10 * 0f) + (fVar9 * 1f));
	fVar8 = MISC::GET_HEADING_FROM_VECTOR_2D(Var7.f_0, Var7.f_1);
	Var11 = { 0f, (fVar1 * IntToFloat(iVar3 + 1)), 0f };
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param1, fVar8, Var11) };
	return Var0;
}

void func_863(int iParam0, int iParam1)//Position - 0xA3478
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var4;
	Var0 = { __LIB_12__::func_470(iParam0) };
	fVar1 = (__LIB_23__::func_822(iParam0) + 2f);
	uVar2 = __LIB_12__::func_471(iParam0);
	Var3 = { Var0 };
	Var4 = { Var0 };
	Var3.f_0 = (Var3.f_0 - fVar1);
	Var3.f_1 = (Var3.f_1 - fVar1);
	Var3.f_2 = (Var3.f_2 - 2f);
	Var4.f_0 = (Var4.f_0 + fVar1);
	Var4.f_1 = (Var4.f_1 + fVar1);
	Var4.f_2 = (Var4.f_2 + 2f);
	Global_2653177[iParam1 /*2*/].f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(Var3, Var4, false, true, true, true);
	Global_2653177[iParam1 /*2*/] = uVar2;
}

void func_864(int iParam0, int iParam1)//Position - 0xA35C6
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	var uVar3;
	Var0 = { __LIB_12__::func_470(iParam0) };
	fVar1 = (__LIB_23__::func_822(iParam0) + 2f);
	bVar2 = false;
	uVar3 = __LIB_12__::func_471(iParam0);
	Global_1573164[iParam1 /*2*/].f_1 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Var0, fVar1, 0f, bVar2);
	Global_1573164[iParam1 /*2*/] = uVar3;
}

int func_865(int iParam0)//Position - 0xA7B8D
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		case 1:
			return 100;
			break;
		case 2:
			return 101;
			break;
		case 3:
			return 102;
			break;
		case 4:
			return 103;
			break;
		case 5:
			return 104;
			break;
		case 6:
			return 105;
			break;
		case 7:
			return 106;
			break;
		case 8:
			return 107;
			break;
		case 9:
			return 108;
			break;
		case 10:
			return 109;
			break;
		case 11:
			return 110;
			break;
		case 12:
			return 111;
			break;
		case 13:
			return 112;
			break;
		case 14:
			return 113;
			break;
		case 15:
			return 25;
			break;
	}
	return 0;
}

int func_866(int iParam0, int iParam1)//Position - 0xAC295
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TOWI");
					break;
				case 1:
					return joaat("PROP_EARNED_TOWI");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TAXI");
					break;
				case 1:
					return joaat("PROP_EARNED_TAXI");
					break;
				case 2:
					return joaat("PROP_MISSIONS_TAXI");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TRAF");
					break;
				case 1:
					return joaat("PROP_EARNED_TRAF");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_SOCO");
					break;
				case 1:
					return joaat("PROP_EARNED_SOCO");
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CMSH");
					break;
				case 1:
					return joaat("PROP_EARNED_CMSH");
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINV");
					break;
				case 1:
					return joaat("PROP_EARNED_CINV");
					break;
				case 2:
					return joaat("PROP_MISSIONS_CINV");
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CIND");
					break;
				case 1:
					return joaat("PROP_EARNED_CIND");
					break;
				case 2:
					return joaat("PROP_MISSIONS_CIND");
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINM");
					break;
				case 1:
					return joaat("PROP_EARNED_CINM");
					break;
				case 2:
					return joaat("PROP_MISSIONS_CINM");
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_GOLF");
					break;
				case 1:
					return joaat("PROP_EARNED_GOLF");
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CSCR");
					break;
				case 1:
					return joaat("PROP_EARNED_CSCR");
					break;
				case 2:
					return joaat("PROP_MISSIONS_CSCR");
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_WEED");
					break;
				case 1:
					return joaat("PROP_EARNED_WEED");
					break;
				case 2:
					return joaat("PROP_MISSIONS_WEED");
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARTE");
					break;
				case 1:
					return joaat("PROP_EARNED_BARTE");
					break;
				case 2:
					return joaat("PROP_MISSIONS_BARTE");
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARPI");
					break;
				case 1:
					return joaat("PROP_EARNED_BARPI");
					break;
				case 2:
					return joaat("PROP_MISSIONS_BARPI");
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHE");
					break;
				case 1:
					return joaat("PROP_EARNED_BARHE");
					break;
				case 2:
					return joaat("PROP_MISSIONS_BARHE");
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHO");
					break;
				case 1:
					return joaat("PROP_EARNED_BARHO");
					break;
				case 2:
					return joaat("PROP_MISSIONS_BARHO");
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_STRIP");
					break;
				case 1:
					return joaat("PROP_EARNED_STRIP");
					break;
			}
			break;
	}
	return joaat("PROP_BOUGHT_TOWI");
}

struct<10> func_867(int iParam0)//Position - 0xAFFA8
{
	int iVar0;
	struct<10> Var1;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (Global_113386.f_7688.f_765[iVar0 /*10*/] == iParam0)
		{
			return Global_113386.f_7688.f_765[iVar0 /*10*/];
		}
		iVar0++;
	}
	return Var1;
}

struct<14> func_868(int iParam0)//Position - 0xB0085
{
	int iVar0;
	struct<14> Var1;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			return Global_113386.f_7688.f_651[iVar0 /*14*/];
		}
		iVar0++;
	}
	return Var1;
}

struct<15> func_869(int iParam0)//Position - 0xB017C
{
	int iVar0;
	struct<15> Var1;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar0 /*15*/] == iParam0)
		{
			return Global_113386.f_7688[iVar0 /*15*/];
		}
		iVar0++;
	}
	return Var1;
}

int func_870(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xB46F6
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
		Var0.f_3 = __LIB_0__::func_522(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
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
				__LIB_12__::func_132(bVar1);
			}
			bVar1++;
		}
		return 1;
	}
	return 0;
}

void func_871(int iParam0, struct<3> Param1)//Position - 0xB4C19
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.f_0 == Global_32338[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_32338[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_32338[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
	Global_32338[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_38388 = 1;
}

void func_872(int iParam0, char* sParam1)//Position - 0xB4CAD
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_32338[iVar0 /*23*/].f_20), sParam1, 8);
	if (HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_32338[iVar0 /*23*/].f_19, sParam1);
	}
}

void func_873(int iParam0, int iParam1)//Position - 0xB4E99
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	MISC::SET_BITS_IN_RANGE(&(Global_32338[iVar0 /*23*/].f_11), 21, 26, iParam1);
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

int func_874(bool bParam0)//Position - 0xB54F3
{
	switch (bParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
			return 1;
			break;
	}
	return 0;
}

int func_875()//Position - 0xB7AC3
{
	return Global_152259;
}

void func_876()//Position - 0xBA527
{
	MISC::SET_BIT(&(Global_2100721.f_104), 0);
	Global_2100721.f_103 = 0;
	__LIB_0__::func_579(&(Global_2100721.f_105));
}

int func_877(struct<3> Param0, int iParam1)//Position - 0xBBC8A
{
	float fVar0;
	fVar0 = __LIB_17__::func_377(iParam1);
	if (__LIB_1__::func_147(Param0, -1171.28f, -1599.59f, 3.34f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -780.4614f, 156.5187f, 66.4744f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, 487.5186f, -217.7695f, 52.7864f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -1223.908f, 338.3682f, 78.9859f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -1233.088f, 372.8105f, 78.9812f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -1618.487f, 266.4707f, 58.5552f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -1372.016f, -101.2861f, 49.7046f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -2869.991f, 9.229736f, 10.6083f) < fVar0)
	{
		return 1;
	}
	else if (__LIB_1__::func_147(Param0, -939.617f, -1255.732f, 6.9773f) < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_878()//Position - 0xBCC21
{
	if (!__LIB_9__::func_603())
	{
		return 1;
	}
	if (((((__LIB_0__::func_39(6) || __LIB_0__::func_39(7)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(5)) || __LIB_0__::func_39(17)) || __LIB_0__::func_39(18))
	{
		return 1;
	}
	return 0;
}

int func_879(int iParam0)//Position - 0xBDB49
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("GROUP_MELEE"):
			iVar0 = 0;
			break;
		case joaat("GROUP_PISTOL"):
			iVar0 = 1;
			break;
		case joaat("GROUP_SMG"):
			iVar0 = 2;
			break;
		case joaat("GROUP_RIFLE"):
			iVar0 = 3;
			break;
		case joaat("GROUP_MG"):
			iVar0 = 4;
			break;
		case joaat("GROUP_SHOTGUN"):
			iVar0 = 5;
			break;
		case joaat("GROUP_SNIPER"):
			iVar0 = 6;
			break;
		case joaat("GROUP_HEAVY"):
			iVar0 = 7;
			break;
		case joaat("GROUP_THROWN"):
			iVar0 = 8;
			break;
		case joaat("GROUP_RUBBERGUN"):
			iVar0 = 9;
			break;
		case joaat("GROUP_STUNGUN"):
			iVar0 = 10;
			break;
		case joaat("GROUP_FIREEXTINGUISHER"):
			iVar0 = 11;
			break;
		case joaat("GROUP_PETROLCAN"):
			iVar0 = 12;
			break;
		case joaat("GROUP_DIGISCANNER"):
			iVar0 = 14;
			break;
		case joaat("GROUP_NIGHTVISION"):
			iVar0 = 15;
			break;
		case joaat("GROUP_PARACHUTE"):
			iVar0 = 16;
			break;
	}
	return iVar0;
}

void func_880(bool bParam0)//Position - 0xBDFC8
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("se_vw_dlc_casino_exterior_terrace_01", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("se_vw_dlc_casino_exterior_terrace_02", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("se_vw_dlc_casino_exterior_terrace_03", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("se_vw_dlc_casino_exterior_terrace_bar", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("se_vw_dlc_casino_exterior_main_entrance", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_h4_dlc_int_02_h4_Entrance_Doorway", bParam0);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_vw_dlc_casino_terrace_rear", bParam0, false);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_vw_dlc_casino_terrace_inf_pool_trickle_edge", bParam0, false);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_vw_dlc_casino_terrace_inf_pool_main", bParam0, false);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_vw_dlc_casino_terrace_cloth_zone", bParam0, false);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_vw_dlc_casino_terrace_01", bParam0, false);
}

int func_881(int iParam0)//Position - 0xC1A38
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	if (STATS::STAT_GET_INT(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

char* func_882(int iParam0)//Position - 0xD2856
{
	switch (iParam0)
	{
		case 0:
			return "CM_ANIBOAR" /* GXT: Boar */;
			break;
		case 1:
			return "CM_ANICAT" /* GXT: Cat */;
			break;
		case 2:
			return "CM_ANICOW" /* GXT: Cow */;
			break;
		case 3:
			return "CM_ANICOY" /* GXT: Coyote */;
			break;
		case 4:
			return "CM_ANIDEE" /* GXT: Deer */;
			break;
		case 5:
			return "CM_ANIHUS" /* GXT: Husky */;
			break;
		case 6:
			return "CM_ANIMOU" /* GXT: Mountain Lion */;
			break;
		case 7:
			return "CM_ANIPIG" /* GXT: Pig */;
			break;
		case 8:
			return "CM_ANIPOO" /* GXT: Poodle */;
			break;
		case 9:
			return "CM_ANIPUG" /* GXT: Pug */;
			break;
		case 10:
			return "CM_ANIRAB" /* GXT: Rabbit */;
			break;
		case 11:
			return "CM_ANIRET" /* GXT: Retriever */;
			break;
		case 12:
			return "CM_ANIROT" /* GXT: Rottweiler */;
			break;
		case 13:
			return "CM_ANISHE" /* GXT: Shepherd */;
			break;
		case 14:
			return "CM_ANIWES" /* GXT: Westy */;
			break;
		case 15:
			return "CM_ANICHI" /* GXT: Chickenhawk */;
			break;
		case 16:
			return "CM_ANICOR" /* GXT: Cormorant */;
			break;
		case 17:
			return "CM_ANICRO" /* GXT: Crow */;
			break;
		case 18:
			return "CM_ANIHEN" /* GXT: Hen */;
			break;
		case 19:
			return "CM_ANIPGN" /* GXT: Pigeon */;
			break;
		case 20:
			return "CM_ANISEA" /* GXT: Seagull */;
			break;
		case 21:
			return "HAIR_GROUP_E0" /* GXT: Wild Animal */;
			break;
	}
	return "ERROR!";
}

int func_883(int iParam0)//Position - 0xD29E0
{
	switch (iParam0)
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
		case 7:
			return 7;
			break;
		case 8:
			return 8;
			break;
		case 9:
			return 9;
			break;
		case 10:
			return 10;
			break;
		case 11:
			return 11;
			break;
		case 12:
			return 12;
			break;
		case 13:
			return 13;
			break;
		case 14:
			return 14;
			break;
		case 15:
			return 15;
			break;
		case 16:
			return 16;
			break;
		case 17:
			return 17;
			break;
		case 18:
			return 18;
			break;
		case 19:
			return 19;
			break;
		case 20:
			return 20;
			break;
		case 27:
			return 21;
			break;
	}
	return -1;
}

void func_884()//Position - 0xD4360
{
	struct<13> Var0;
	Var0.f_3 = -1;
	Var0.f_12 = -1;
	Global_1659442 = { Var0 };
}

void func_885()//Position - 0xD43AC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		__LIB_11__::func_801(iVar0);
		iVar0++;
	}
	Global_1659438 = 0;
}

void func_886()//Position - 0xD43D5
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		__LIB_9__::func_818(iVar0);
		iVar0++;
	}
	Global_1659410 = 0;
	Global_1659411 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_1659413 = NETWORK::GET_NETWORK_TIME();
	}
	if (!__LIB_3__::func_778() && !__LIB_0__::func_739())
	{
		Global_1659414 = -1;
		__LIB_0__::func_675(&(Global_1659414.f_1));
	}
}

void func_887(bool bParam0)//Position - 0xD4807
{
	if (bParam0)
	{
		if (!Global_1973076)
		{
			Global_1973076 = 1;
		}
	}
	else if (Global_1973076)
	{
		Global_1973076 = 0;
	}
}

void func_888()//Position - 0x1579
{
	Global_2725388 = 0;
}

void func_889(int iParam0)//Position - 0x1594
{
	Global_1575047 = iParam0;
}

void func_890()//Position - 0x6FD0E
{
	Global_2714762.f_702 = 1;
}

void func_891()//Position - 0x6FD2D
{
	MISC::SET_BIT(&Global_2714762, 31);
}

bool func_892()//Position - 0x704CE
{
	return BitTest(Global_2714762, 31);
}

void func_893(int iParam0)//Position - 0x705F9
{
	Global_1574931 = iParam0;
}

void func_894()//Position - 0x721C1
{
	var uVar0;
	Global_2727820 = uVar0;
}

int func_895()//Position - 0x721DD
{
	return Global_1575018;
}

void func_896(int iParam0)//Position - 0x721E9
{
	Global_1575056 = iParam0;
}

void func_897(int iParam0)//Position - 0x723BD
{
	Global_1575027 = iParam0;
}

void func_898(int iParam0)//Position - 0x724E4
{
	Global_2727871 = iParam0;
}

int func_899()//Position - 0x734D0
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (Global_2726837[iVar1] != 0)
		{
			iVar0 = iVar1;
			iVar1 = 6;
		}
		iVar1++;
	}
	return iVar0;
}

void func_900(int iParam0)//Position - 0x75FD7
{
	Global_152259 = iParam0;
}

void func_901(int iParam0)//Position - 0x75FE5
{
	Global_152258 = iParam0;
}

int func_902()//Position - 0x767B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1574538[0] && !STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = STATS::STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(2, &Global_2727222);
			iVar1 = STATS::STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(0, &Global_2727344);
			iVar2 = STATS::STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(1, &Global_2727588);
			iVar3 = STATS::STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(3, &Global_2727466);
			if (((iVar0 == 2 || iVar1 == 2) || iVar2 == 2) || iVar3 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_903()//Position - 0x76840
{
	return Global_2727833;
}

void func_904(int iParam0)//Position - 0x769C4
{
	Global_2726699 = iParam0;
}

void func_905(int iParam0)//Position - 0x769F5
{
	Global_2726712 = iParam0;
}

void func_906(int iParam0)//Position - 0x76A0F
{
	Global_2726717 = iParam0;
}

bool func_907()//Position - 0x76A56
{
	return Global_2725420;
}

char* func_908(int iParam0)//Position - 0x77AEB
{
	char cVar0[16];
	StringCopy(&cVar0, "MONTH_", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	StringConCat(&cVar0, "L", 16);
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar0);
}

char* func_909(int iParam0)//Position - 0x77B11
{
	char cVar0[16];
	StringCopy(&cVar0, "MONTH_", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar0);
}

void func_910(var uParam0, int iParam1)//Position - 0x782BF
{
	uParam0->f_41 = iParam1;
}

int func_911()//Position - 0x78E1B
{
	return Global_2703735.f_60;
}

bool func_912()//Position - 0x85674
{
	return BitTest(Global_2727820, 2);
}

bool func_913(int iParam0)//Position - 0x87698
{
	return Global_1575086[iParam0];
}

void func_914()//Position - 0x882FA
{
	Global_2714762.f_856 = 0;
}

void func_915()//Position - 0x8830A
{
	Global_2714762.f_858 = 0;
}

bool func_916()//Position - 0x8831A
{
	return BitTest(Global_2727820, 0);
}

bool func_917()//Position - 0x8848D
{
	return Global_1574925;
}

void func_918(int iParam0)//Position - 0x88903
{
	Global_2726702 = iParam0;
}

void func_919(int iParam0)//Position - 0x8892D
{
	Global_1575015 = iParam0;
}

int func_920()//Position - 0x89368
{
	struct<13> Var0;
	Var0 = { __LIB_0__::func_593() };
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			return 1;
		}
	}
	return 0;
}

void func_921(int iParam0, int iParam1)//Position - 0x8B707
{
	Global_1577847[iParam1] = iParam0;
}

bool func_922(int iParam0)//Position - 0x8B719
{
	return Global_1577847[iParam0];
}

int func_923(int iParam0)//Position - 0x8BB5C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
		{
			return 1;
		}
	}
	MISC::SET_BIT(&(Global_1940663[1]), 0);
	return 0;
}

void func_924(var uParam0)//Position - 0x8CA64
{
	Global_2715699.f_1.f_2823 = uParam0;
}

void func_925()//Position - 0x8CC23
{
	int iVar0;
	int iVar1;
	MISC::CLEAR_AREA_OF_VEHICLES(0f, 0f, 0f, 99999.9f, false, false, false, false, false, false, 0);
	iVar0 = VEHICLE::GET_ALL_VEHICLES(&Global_1578027);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1578027[iVar1]))
		{
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() == 1 && !NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(Global_1578027[iVar1])) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() == 0)
			{
				if (!ENTITY::GET_ENTITY_POPULATION_TYPE(Global_1578027[iVar1]) == 1)
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1578027[iVar1]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1578027[iVar1], false))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(Global_1578027[iVar1]))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1578027[iVar1], false, true);
							}
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1578027[iVar1], true, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Global_1578027[iVar1], false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1578027[iVar1], true))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1578027[iVar1], false))
					{
						if (VEHICLE::IS_MISSION_TRAIN(Global_1578027[iVar1]))
						{
							VEHICLE::DELETE_MISSION_TRAIN(&(Global_1578027[iVar1]));
						}
						else
						{
							VEHICLE::DELETE_VEHICLE(&(Global_1578027[iVar1]));
						}
					}
				}
			}
		}
		iVar1++;
	}
}

void func_926(int iParam0)//Position - 0x9265F
{
	Global_1575026 = iParam0;
}

void func_927(int iParam0)//Position - 0x927AD
{
	Global_2725397 = iParam0;
}

void func_928()//Position - 0x928BE
{
	Global_2714762.f_832 = 0;
}

void func_929()//Position - 0x928DE
{
	Global_2714762.f_713 = 0;
}

void func_930()//Position - 0x928EE
{
	Global_2714762.f_12 = 0;
}

void func_931()//Position - 0x928FD
{
	Global_2714762.f_13 = -1;
}

void func_932()//Position - 0x9290C
{
	Global_2714762.f_14 = 0;
}

int func_933(int iParam0)//Position - 0x93080
{
	if (MISC::IS_PC_VERSION() == 0)
	{
		if ((iParam0 == PAD::GET_LOCAL_PLAYER_AIM_STATE() || (iParam0 < 2 && PAD::GET_LOCAL_PLAYER_AIM_STATE() < 2)) || (iParam0 >= 2 && PAD::GET_LOCAL_PLAYER_AIM_STATE() >= 2))
		{
			return 1;
		}
	}
	else if ((iParam0 == PAD::GET_LOCAL_PLAYER_GAMEPAD_AIM_STATE() || (iParam0 < 2 && PAD::GET_LOCAL_PLAYER_GAMEPAD_AIM_STATE() < 2)) || (iParam0 >= 2 && PAD::GET_LOCAL_PLAYER_GAMEPAD_AIM_STATE() >= 2))
	{
		return 1;
	}
	return 0;
}

bool func_934()//Position - 0x93180
{
	return Global_2714762.f_785.f_7;
}

struct<16> func_935(int iParam0)//Position - 0x9457D
{
	struct<16> Var0;
	StringCopy(&Var0, "share/gta5/mpchars/", 64);
	StringIntConCat(&Var0, iParam0, 64);
	if (MISC::IS_PROSPERO_VERSION())
	{
		StringConCat(&Var0, "_ps5", 64);
	}
	else if (MISC::IS_SCARLETT_VERSION())
	{
		StringConCat(&Var0, "_xboxsx", 64);
	}
	else if (MISC::IS_ORBIS_VERSION())
	{
		StringConCat(&Var0, "_ps4", 64);
	}
	else if (MISC::IS_DURANGO_VERSION())
	{
		StringConCat(&Var0, "_xboxone", 64);
	}
	else if (MISC::IS_PC_VERSION())
	{
	}
	StringConCat(&Var0, ".dds", 64);
	return Var0;
}

void func_936(int iParam0)//Position - 0x953EE
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_937(int iParam0)//Position - 0x97491
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 1;
	}
	return 0;
}

void func_938(int iParam0)//Position - 0xA06E8
{
	Global_2727798 = iParam0;
}

void func_939(int iParam0)//Position - 0xA1433
{
	Global_2726837[iParam0] = 0;
	StringCopy(&(Global_2726844[iParam0 /*8*/]), "", 32);
	StringCopy(&(Global_2726893[iParam0 /*8*/]), "", 32);
	Global_2726942[iParam0] = 0;
}

void func_940()//Position - 0xA5AE7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_2725297[iVar0] = 0;
		Global_2725308[iVar0] = 77061038;
		iVar0++;
	}
	Global_1577843 = -1;
}

bool func_941(int iParam0)//Position - 0xA6299
{
	return Global_1575086[iParam0 + 1];
}

void func_942(int iParam0, bool bParam1)//Position - 0xA638A
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_COLUMN"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_943(int iParam0, bool bParam1)//Position - 0xA6746
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_CAN_JUMP"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(!bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_944(int iParam0, bool bParam1, bool bParam2)//Position - 0xA676B
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_FOCUS"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_945(int iParam0)//Position - 0xA6A9D
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_946(int iParam0, char* sParam1, bool bParam2, int iParam3, char* sParam4)//Position - 0xA7498
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
		if (iParam3 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
		}
		GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_947(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xA822B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_948(bool bParam0)//Position - 0xAD2E9
{
	if (MISC::IS_PC_VERSION())
	{
		if (bParam0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("LOCK_MOUSE_SUPPORT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER("LOCK_MOUSE_SUPPORT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_949(int iParam0, int iParam1, bool bParam2)//Position - 0xAD638
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_950(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6)//Position - 0xAEA48
{
	char* sVar0;
	sVar0 = "SET_DATA_SLOT";
	if (bParam6)
	{
		sVar0 = "UPDATE_SLOT";
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(sVar0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		__LIB_0__::func_478(sParam3);
		__LIB_0__::func_478(sParam4);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_951(int iParam0, int iParam1)//Position - 0xAED70
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 < 20)
			{
				return 1;
			}
			else if (iParam1 < 40)
			{
				return 2;
			}
			else if (iParam1 < 60)
			{
				return 3;
			}
			else if (iParam1 < 80)
			{
				return 4;
			}
			else
			{
				return 5;
			}
			break;
		case 1:
			if (iParam1 < 20)
			{
				return 6;
			}
			else if (iParam1 < 40)
			{
				return 7;
			}
			else if (iParam1 < 60)
			{
				return 8;
			}
			else if (iParam1 < 80)
			{
				return 9;
			}
			else
			{
				return 10;
			}
			break;
		case 2:
			if (iParam1 < 20)
			{
				return 11;
			}
			else if (iParam1 < 40)
			{
				return 12;
			}
			else if (iParam1 < 60)
			{
				return 13;
			}
			else if (iParam1 < 80)
			{
				return 14;
			}
			else
			{
				return 15;
			}
			break;
		case 3:
			if (iParam1 < 20)
			{
				return 16;
			}
			else if (iParam1 < 40)
			{
				return 17;
			}
			else if (iParam1 < 60)
			{
				return 18;
			}
			else if (iParam1 < 80)
			{
				return 19;
			}
			else
			{
				return 20;
			}
			break;
		case 4:
			if (iParam1 < 20)
			{
				return 21;
			}
			else if (iParam1 < 40)
			{
				return 22;
			}
			else if (iParam1 < 60)
			{
				return 23;
			}
			else if (iParam1 < 80)
			{
				return 24;
			}
			else
			{
				return 25;
			}
			break;
		case 5:
			if (iParam1 < 20)
			{
				return 26;
			}
			else if (iParam1 < 40)
			{
				return 27;
			}
			else if (iParam1 < 60)
			{
				return 28;
			}
			else if (iParam1 < 80)
			{
				return 29;
			}
			else
			{
				return 30;
			}
			break;
		case 6:
			if (iParam1 < 20)
			{
				return 31;
			}
			else if (iParam1 < 40)
			{
				return 32;
			}
			else if (iParam1 < 40)
			{
				return 32;
			}
			else if (iParam1 < 60)
			{
				return 33;
			}
			else if (iParam1 < 80)
			{
				return 34;
			}
			else
			{
				return 35;
			}
			break;
	}
	return 0;
}

var func_952(float fParam0)//Position - 0xB05C3
{
	char cVar0[32];
	StringCopy(&cVar0, "", 32);
	if (fParam0 >= 50f)
	{
		StringCopy(&cVar0, "PCARD_BAD_SPORT" /* GXT: Bad Sport */, 32);
	}
	else if (fParam0 >= 45f)
	{
		StringCopy(&cVar0, "PCARD_DIRTY_PLAYER" /* GXT: Dodgy Player */, 32);
	}
	else
	{
		StringCopy(&cVar0, "PCARD_CLEAN_PLAYER" /* GXT: Clean Player */, 32);
	}
	return __LIB_0__::func_688(&cVar0);
}

int func_953(int iParam0)//Position - 0xB4F34
{
	if (iParam0 == 8)
	{
		return 1;
	}
	if (iParam0 == 9)
	{
		return 1;
	}
	return 0;
}

void func_954(int iParam0)//Position - 0xB4F53
{
	Global_2727796 = iParam0;
}

int func_955(int iParam0)//Position - 0xC3AA2
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		return BitTest(Global_1853348[iVar0 /*834*/].f_205.f_51, 3);
	}
	return 0;
}

void func_956(int iParam0)//Position - 0xC3F70
{
	Global_1575060 = iParam0;
}

void func_957(int iParam0)//Position - 0xC40E8
{
	Global_2727886 = iParam0;
}

void func_958(int iParam0)//Position - 0xC41B5
{
	Global_2727795 = iParam0;
}

void func_959(int iParam0)//Position - 0xC41D1
{
	Global_1574932 = iParam0;
}

void func_960(int iParam0)//Position - 0xC5219
{
	Global_1574926 = iParam0;
}

bool func_961()//Position - 0xC5227
{
	return Global_2725363;
}

bool func_962()//Position - 0xC5233
{
	return Global_1575052;
}

void func_963(int iParam0)//Position - 0xC542F
{
	Global_2727730 = iParam0;
}

void func_964()//Position - 0xC56CE
{
	Global_2723612.f_5 = 1;
}

bool func_965()//Position - 0xC5E42
{
	return Global_2726950;
}

void func_966()//Position - 0xCD162
{
	Global_2671449.f_23 = -1;
	Global_2671449.f_24 = -1;
}

int func_967(var uParam0, int iParam1)//Position - 0xCD239
{
	int iVar0;
	if (iParam1 >= 1 && iParam1 <= 128)
	{
		*uParam0 = { Global_1312193[iParam1 /*1951*/] };
		iVar0 = 0;
		while (iVar0 < 3)
		{
			uParam0->f_3[iVar0 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_3[iVar0 /*3*/] };
			iVar0++;
		}
		uParam0->f_13 = { Global_1312193[iParam1 /*1951*/].f_13 };
		uParam0->f_16 = { Global_1312193[iParam1 /*1951*/].f_16 };
		uParam0->f_20 = { Global_1312193[iParam1 /*1951*/].f_20 };
		uParam0->f_24 = { Global_1312193[iParam1 /*1951*/].f_24 };
		uParam0->f_31 = Global_1312193[iParam1 /*1951*/].f_31;
		uParam0->f_32 = Global_1312193[iParam1 /*1951*/].f_32;
		uParam0->f_33 = Global_1312193[iParam1 /*1951*/].f_33;
		uParam0->f_34 = Global_1312193[iParam1 /*1951*/].f_34;
		uParam0->f_35 = Global_1312193[iParam1 /*1951*/].f_35;
		uParam0->f_36 = Global_1312193[iParam1 /*1951*/].f_36;
		uParam0->f_37 = Global_1312193[iParam1 /*1951*/].f_37;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			uParam0->f_38[iVar0 /*27*/] = { Global_1312193[iParam1 /*1951*/].f_38[iVar0 /*27*/] };
			iVar0++;
		}
		uParam0->f_146 = { Global_1312193[iParam1 /*1951*/].f_146 };
		uParam0->f_1742 = { Global_1312193[iParam1 /*1951*/].f_1742 };
		uParam0->f_1912 = { Global_1312193[iParam1 /*1951*/].f_1912 };
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			uParam0->f_1922[iVar0 /*9*/] = { Global_1312193[iParam1 /*1951*/].f_1922[iVar0 /*9*/] };
			iVar0++;
		}
		return 1;
	}
	return 0;
}

bool func_968()//Position - 0x13067E
{
	return Global_2715699.f_3479.f_21;
}

void func_969(int iParam0, int iParam1)//Position - 0x146C89
{
	Global_2671449.f_23 = iParam0;
	Global_2671449.f_24 = iParam1;
}

Vector3 func_970()//Position - 0x14888B
{
	return Global_2725390;
}

Vector3 func_971()//Position - 0x149711
{
	return Global_2714762.f_765;
}

bool func_972()//Position - 0x149791
{
	return BitTest(Global_2714762, 3);
}

var func_973()//Position - 0x14979F
{
	return Global_2714762.f_758;
}

var func_974()//Position - 0x1497AE
{
	return Global_2714762.f_858;
}

void func_975()//Position - 0x1497BD
{
	MISC::SET_BIT(&(Global_2715699.f_1.f_2809), 30);
}

void func_976()//Position - 0x1497D4
{
	Global_2714762.f_760 = 0;
}

var func_977(int iParam0)//Position - 0x14ABD0
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_96.f_32, 7);
}

var func_978(int iParam0)//Position - 0x14ABE7
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_96.f_32, 8);
}

var func_979(int iParam0)//Position - 0x14ABFF
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 16);
}

void func_980(int iParam0)//Position - 0x14C01E
{
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775 != iParam0)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775 = iParam0;
		Global_1931938 = iParam0;
	}
	StringCopy(&Global_1931932, PLAYER::GET_PLAYER_NAME(iParam0), 24);
}

void func_981()//Position - 0x14C0B2
{
	Global_2714762.f_846 = 0;
}

bool func_982()//Position - 0x14C0D3
{
	return BitTest(Global_2715699.f_1.f_2809, 30);
}

bool func_983()//Position - 0x14C105
{
	return BitTest(Global_2714762, 22);
}

void func_984()//Position - 0x14C114
{
	struct<60> Var0;
	Var0.f_4 = 1;
	Var0.f_5 = 1;
	Var0.f_18 = 1;
	Var0.f_22 = 1125515264;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_26 = -1;
	Global_2671449 = { Var0 };
}

int func_985()//Position - 0x14C29F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(__LIB_0__::func_662()) > 0 && Global_1574666 == 2)
	{
		return 1;
	}
	return 0;
}

void func_986(int iParam0, float fParam1)//Position - 0x14C660
{
	if (fParam1 <= 0f)
	{
		return;
	}
	Global_1641652[iParam0 /*6*/].f_1 = fParam1;
}

int func_987(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14C67E
{
	bool bVar0;
	if (Global_1642434[iParam0 /*6*/].f_1 == -1)
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == -999)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (iParam1 >= Global_1642434[iParam0 /*6*/].f_1)
		{
			return 0;
		}
	}
	*iParam2 = Global_1642434[iParam0 /*6*/].f_2;
	*iParam3 = (*iParam2 + Global_1642434[iParam0 /*6*/].f_1);
	if (!bVar0)
	{
		*iParam2 = (*iParam2 + iParam1);
		*iParam3 = *iParam2 + 1;
	}
	return 1;
}

int func_988(int iParam0)//Position - 0x14C96C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 0;
		default:
	}
	return 0;
}

void func_989()//Position - 0x14C9A6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 210)
	{
		Global_1642434[iVar0 /*6*/] = 0;
		Global_1642434[iVar0 /*6*/].f_1 = -1;
		Global_1642434[iVar0 /*6*/].f_2 = -1;
		Global_1642434[iVar0 /*6*/].f_3 = 3;
		Global_1642434[iVar0 /*6*/].f_4 = 4;
		Global_1642434[iVar0 /*6*/].f_5 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 130)
	{
		Global_1641652[iVar0 /*6*/] = 0;
		Global_1641652[iVar0 /*6*/].f_1 = 0f;
		Global_1641652[iVar0 /*6*/].f_2 = 4;
		Global_1641652[iVar0 /*6*/].f_3 = 9;
		Global_1641652[iVar0 /*6*/].f_4 = 6;
		Global_1641652[iVar0 /*6*/].f_5 = -1;
		iVar0++;
	}
	Global_1642433 = 0;
	iVar0 = 0;
	while (iVar0 < 200)
	{
		Global_1641223[iVar0] = 0;
		iVar0++;
	}
	Global_1641424 = 0;
	iVar0 = 0;
	while (iVar0 < 225)
	{
		Global_1641425[iVar0] = 0;
		iVar0++;
	}
	Global_1641651 = 0;
}

int func_990(float fParam0, float fParam1)//Position - 0x155633
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	fVar0 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	Var1 = { Var1 * Vector(fParam1, fParam1, fParam1) };
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	Var2.f_2 = (Var2.f_2 + fParam0);
	Var3 = { Var2 - Var1 };
	iVar4 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var2, Var3, 0.3f, 273, PLAYER::PLAYER_PED_ID(), 7);
	iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar4, &iVar5, &uVar6, &uVar7, &uVar8);
	if (!iVar5 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_991()//Position - 0x1556F2
{
	return Global_2714762.f_729;
}

void func_992(int iParam0)//Position - 0x155EC2
{
	Global_2727850 = iParam0;
}

int func_993()//Position - 0x1576DC
{
	return Global_2680265;
}

void func_994()//Position - 0x1577C9
{
	Global_2715699.f_2846.f_37 = 0;
}

var func_995()//Position - 0x1577DB
{
	return Global_2714762.f_839;
}

bool func_996()//Position - 0x1577EA
{
	return Global_2726694;
}

int func_997()//Position - 0x157820
{
	return Global_2714762.f_848;
}

bool func_998()//Position - 0x1578E7
{
	return Global_2714762.f_741;
}

bool func_999()//Position - 0x1578F6
{
	return Global_2714762.f_726;
}

}