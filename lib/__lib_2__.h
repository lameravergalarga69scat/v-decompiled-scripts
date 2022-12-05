void func_0(struct<3> Param0, float fParam1, int iParam2)//Position - 0x94E52
{
	if (!Global_2667225.f_1753)
	{
	}
	if (Global_2667225.f_714 < 100)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2667225.f_714.f_1[Global_2667225.f_714 /*5*/] = { Param0 };
		Global_2667225.f_714.f_1[Global_2667225.f_714 /*5*/].f_3 = fParam1;
		Global_2667225.f_714.f_1[Global_2667225.f_714 /*5*/].f_4 = iParam2;
		Global_2667225.f_714++;
	}
}

int func_1()//Position - 0x94F17
{
	if (SYSTEM::VDIST(Global_2676213, Global_2676213.f_1, 0f, -323.1f, -1970.9f, 0f) < 20f)
	{
		return 1;
	}
	return 0;
}

var func_2(int iParam0)//Position - 0x9539D
{
	return Global_2683918.f_97[iParam0 /*33*/];
}

bool func_3(struct<3> Param0)//Position - 0x955DD
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 4776.643f, -4927.201f, -16.635f, 5007.543f, -4922.876f, 50f, 181.675f, false, true);
}

bool func_4(int iParam0)//Position - 0x95659
{
	return __LIB_0__.func_492(&(Global_2689235[iParam0 /*453*/].f_434), 0);
}

void func_5()//Position - 0x957CD
{
	struct<31> Var0;
	Var0.f_16 = 1;
	Var0.f_22 = 1;
	Var0.f_23 = 1;
	Var0.f_24 = 1;
	Var0.f_28 = -1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_555), &Var0, 31);
	}
	else
	{
		Global_2667225.f_555 = { Var0 };
	}
}

void func_6()//Position - 0x9581E
{
	struct<35> Var0;
	Var0.f_5 = 1115815936;
	Var0.f_13 = 2;
	Var0.f_20 = 2;
	Var0.f_32 = -1082130432;
	Var0.f_34 = 1;
	if (Global_2703734)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_520), &Var0, 35);
	}
	else
	{
		Global_2667225.f_520 = { Var0 };
	}
}

int func_7(bool bParam0)//Position - 0x9AE23
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

void func_8(int iParam0)//Position - 0x9B2B1
{
	int iVar0;
	if (Global_262145.f_9035 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

bool func_9(char* sParam0, char* sParam1)//Position - 0x9C625
{
	if (!__LIB_1__.func_273())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

bool func_10(char* sParam0, char* sParam1, char* sParam2)//Position - 0x9CCA2
{
	if (!__LIB_1__.func_273())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574757.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1574757.f_32));
}

int func_11(var uParam0)//Position - 0xA2B7D
{
	if (Global_2660249)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2660249.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_12(int iParam0)//Position - 0xA2BA2
{
	return iParam0 == 9999;
}

int func_13(int iParam0)//Position - 0xA6DA4
{
	switch (iParam0)
	{
		case 136:
			return 12;
		case 139:
			return 14;
		case 141:
			return 16;
		case 133:
			return 9;
		case 138:
			return 13;
		case 144:
			return 17;
		case 132:
			return 8;
		case 131:
			return 10;
		case 146:
			return 18;
		case 129:
			return 11;
		case 140:
			return 15;
		case 236:
			return 19;
		case 150:
			return 20;
		default:
	}
	return -1;
}

int func_14(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)//Position - 0x1C5F
{
	bool bVar0;
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2)//Position - 0x216B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_16(int iParam0)//Position - 0x66C4
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2676209, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

var func_17()//Position - 0x678D
{
	return Global_2678393.f_1865;
}

void func_18(int iParam0, int iParam1)//Position - 0x1F40
{
	Global_1641031.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_19(int iParam0)//Position - 0x1F7D
{
	MISC::SET_BIT(&(Global_1641031.f_59[iParam0 /*16*/]), 5);
}

void func_20(int iParam0)//Position - 0x1F94
{
	MISC::SET_BIT(&(Global_1641031.f_59[iParam0 /*16*/]), 4);
}

void func_21(int iParam0, char* sParam1)//Position - 0x1FAB
{
	struct<4> Var0;
	StringCopy(&Var0, sParam1, 16);
	Global_1641031.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_22(int iParam0, var uParam1, bool bParam2)//Position - 0x1FCB
{
	Global_1641031.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1641031.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1641031.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1641031.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1641031.f_59[iParam0 /*16*/]), 2);
	}
}

void func_23(int iParam0, var uParam1)//Position - 0x2025
{
	Global_1641031.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_24(int iParam0)//Position - 0x203B
{
	MISC::SET_BIT(&(Global_1641031.f_59[iParam0 /*16*/]), 0);
}

bool func_25(int iParam0)//Position - 0x2080
{
	return BitTest(Global_1641031.f_59[iParam0 /*16*/], 0);
}

void func_26(struct<12> Param0, int iParam1)//Position - 0x6619
{
	Global_2667225.f_45[iParam1 /*12*/] = { Param0 };
	Global_2667225.f_45[iParam1 /*12*/].f_9 = 1;
}

int func_27(var uParam0)//Position - 0x95F
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x994
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

void func_29(int iParam0)//Position - 0x596D
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

int func_30(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x6929
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x69C2
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (__LIB_0__.func_154(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_32(int iParam0, bool bParam1, bool bParam2)//Position - 0x6A1F
{
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, bParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*iParam0))
		{
			CAM::SET_CAM_ACTIVE(*iParam0, false);
		}
		CAM::DESTROY_CAM(*iParam0, bParam1);
	}
	if (iParam0->f_23)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		iParam0->f_23 = 0;
	}
	iParam0->f_1 = { 0f, 0f, 0f };
	iParam0->f_4 = { 0f, 0f, 0f };
	iParam0->f_7 = 0f;
	iParam0->f_20 = 0;
	iParam0->f_21 = 0;
	iParam0->f_22 = 0;
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_11 = { 0f, 0f, 0f };
	iParam0->f_14 = { 0f, 0f, 0f };
	iParam0->f_17 = 0f;
	iParam0->f_18 = 0f;
}

void func_33(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0x74A0
{
	int iVar0;
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

int func_34(int iParam0)//Position - 0x9BF
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2)//Position - 0x13D0
{
	if (iParam1 != __LIB_0__.func_160())
	{
		if (iParam0 != __LIB_0__.func_160())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__.func_160())
			{
				if (Global_1892703[iParam0 /*599*/].f_10 == iParam0)
				{
					if (Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

float func_36(struct<3> Param0, var uParam1, var uParam2)//Position - 0x76A5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	iVar3 = -1;
	fVar2 = 10000000f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2667225.f_2735) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

int func_37(int iParam0)//Position - 0x9172
{
	if (!__LIB_0__.func_154(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

int func_38(struct<3> Param0)//Position - 0xB0A3
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__.func_616(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674493[iVar1])
	{
		if (__LIB_0__.func_615(Param0, &(Global_2673790[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674493[8])
	{
		if (__LIB_0__.func_615(Param0, &(Global_2673790[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0, int iParam1)//Position - 0xC66B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

struct<16> func_40(char* sParam0)//Position - 0x107E2
{
	struct<16> Var0;
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_41(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x1259B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_42(int iParam0)//Position - 0x1260A
{
	var uVar0;
	var uVar1;
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

int func_43(struct<6> Param0, struct<6> Param1)//Position - 0x12753
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
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

int func_44(int iParam0)//Position - 0x12DCF
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_45(int iParam0)//Position - 0x136CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_113386.f_14141[iParam0 /*104*/].f_18 = iVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = iVar5;
}

int func_46(int iParam0)//Position - 0x151E7
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_47(var uParam0, int iParam1, bool bParam2)//Position - 0x15277
{
	if (iParam1 == -1)
	{
		return 1;
	}
	__LIB_0__.func_580(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x152D5
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x15487
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x1557B
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_51(int iParam0, int iParam1)//Position - 0x156F3
{
	int iVar0;
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

void func_52(int iParam0, bool bParam1)//Position - 0x1DD4
{
	if (bParam1)
	{
		Global_100493.f_9[iParam0] = 1;
	}
	else
	{
		Global_100493.f_9[iParam0] = 0;
	}
}

int func_53(int iParam0)//Position - 0x25A9
{
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 25);
}

bool func_54()//Position - 0x2635
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_143, 7);
}

bool func_55(int iParam0)//Position - 0x2EA2
{
	return Global_1931618.f_16[iParam0 /*44*/].f_3;
}

bool func_56(int iParam0, int iParam1)//Position - 0x3001
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__.func_5();
	}
	iVar0 = __LIB_0__.func_737(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_57(int iParam0)//Position - 0x56B9
{
	if (__LIB_1__.func_330(iParam0))
	{
		return Global_2824571.f_2[iParam0];
	}
	return 0;
}

int func_58()//Position - 0x6016
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	Var3 = { __LIB_0__.func_85(PLAYER::PLAYER_ID()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (__LIB_0__.func_154(iVar1, 1, 1))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				if (!iVar1 == PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
					{
						fVar2 = SYSTEM::VMAG(__LIB_0__.func_85(iVar1) - Var3);
						if (fVar2 < 0.2f)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_59(int iParam0)//Position - 0x388B3
{
	return __LIB_0__.func_287(&(Global_2703735.f_169), iParam0);
}

int func_60(var uParam0, bool bParam1)//Position - 0x464A5
{
	int iVar0;
	struct<3> Var1;
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2674503[iVar0 /*7*/].f_2 + Global_2674503[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (__LIB_0__.func_615(Var1, &(Global_2674503[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				__LIB_1__.func_942(&Var1, Global_2674503[iVar0 /*7*/], Global_2674503[iVar0 /*7*/].f_3, Global_2674503[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_61()//Position - 0x4678B
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2667225.f_517 == MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!__LIB_0__.func_640(PLAYER::PLAYER_ID()) && !__LIB_0__.func_155(0))
	{
		return 0;
	}
	return 1;
}

int func_62(int iParam0)//Position - 0x49E61
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	if (!__LIB_0__.func_112())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_63(int iParam0)//Position - 0x4A807
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !__LIB_0__.func_578(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_64()//Position - 0x4B57D
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == __LIB_0__.func_662())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38))
		{
			return NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
		}
	}
	return Global_2815059.f_298;
}

int func_65()//Position - 0x4B607
{
	if (__LIB_1__.func_165() > -1 && __LIB_1__.func_165() < 363)
	{
		if (Global_2667225.f_45.f_66)
		{
			if (!BitTest(Global_1585857[__LIB_1__.func_165() /*142*/].f_103, 1) && !BitTest(Global_1585857[__LIB_1__.func_165() /*142*/].f_103, 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x4BAF1
{
	if (__LIB_0__.func_154(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false), false))
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
	return 0;
}

int func_67(int iParam0)//Position - 0x4D141
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!iVar1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_0__.func_154(iVar1, 1, 1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), true))
				{
					if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(iVar1)) == iParam0)
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

int func_68(struct<3> Param0, float fParam1)//Position - 0x4D7AB
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		__LIB_0__.func_639();
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2667225.f_687[iVar0] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Global_2667225.f_687[iVar0] = NETWORK::NETWORK_ADD_CLIENT_ENTITY_AREA(Param0 - Vector(fParam1, fParam1, fParam1), Param0 + Vector(fParam1, fParam1, fParam1));
				Global_2667225.f_691[iVar0] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2667225.f_699 = Global_2667225.f_687[iVar0];
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)//Position - 0x4D99E
{
	int iVar0;
	if (iParam0 != __LIB_0__.func_160() && iParam1 != __LIB_0__.func_160())
	{
		iVar0 = __LIB_0__.func_603(iParam0);
		if (iVar0 != __LIB_0__.func_160())
		{
			return iVar0 == __LIB_0__.func_603(iParam1);
		}
	}
	return 0;
}

int func_70(var uParam0, bool bParam1)//Position - 0x544B4
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	Var1 = { *uParam0 };
	iVar2 = __LIB_0__.func_616(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2673770[iVar2])
	{
		if (__LIB_0__.func_615(Var1, &(Global_2672374[iVar2 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				__LIB_1__.func_942(&Var1, Global_2672374[iVar2 /*155*/][iVar0 /*7*/], Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_3, Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673770[8])
	{
		if (__LIB_0__.func_615(Var1, &(Global_2672374[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				__LIB_1__.func_942(&Var1, Global_2672374[8 /*155*/][iVar0 /*7*/], Global_2672374[8 /*155*/][iVar0 /*7*/].f_3, Global_2672374[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_71(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x56A95
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				__LIB_1__.func_120(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_72(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x5793C
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { Param1 - Param0 };
	Var1 = { __LIB_0__.func_620(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var1 = { Var1 / FtoV(SYSTEM::VMAG(Var1)) };
	Var1 = { Var1 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE((fParam2 * -0.5f), (fParam2 * 0.5f))) };
	Var0 = { Var0 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, SYSTEM::VDIST(Param0, Param1))) };
	return Param0 + Var0 + Var1;
}

Vector3 func_73(struct<3> Param0, float fParam1)//Position - 0x57F43
{
	struct<3> Var0;
	float fVar1;
	Var0 = { 0f, 1f, 0f };
	fVar1 = (IntToFloat(PLAYER::PLAYER_ID()) * (360f / 32f));
	__LIB_0__.func_602(&Var0, 0f, 0f, fVar1);
	Var0 = { Var0 * Vector(fParam1, fParam1, fParam1) };
	return Param0 + Var0;
}

int func_74(struct<3> Param0)//Position - 0x5976C
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	float fVar5;
	fVar0 = 1E+12f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 168)
	{
		__LIB_1__.func_978(iVar2, &Var3, &uVar4);
		Var3.f_2 = Param0.f_2;
		fVar5 = SYSTEM::VDIST2(Var3, Param0);
		if (fVar5 < fVar0)
		{
			iVar1 = iVar2;
			fVar0 = fVar5;
		}
		iVar2++;
	}
	return iVar1;
}

Vector3 func_75(struct<3> Param0, float fParam1, float fParam2)//Position - 0x59880
{
	struct<3> Var0;
	Var0 = { 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam2, fParam1), 0f };
	__LIB_0__.func_602(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	return Param0 + Var0;
}

Vector3 func_76()//Position - 0x598B1
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar3 = iVar2;
		if (__LIB_0__.func_154(iVar3, 1, 1))
		{
			if (!iVar3 == PLAYER::PLAYER_ID())
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar3))
				{
					Var0 = { Var0 + __LIB_0__.func_85(iVar3) };
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 > 0)
	{
		Var0 = { Var0 / FtoV(SYSTEM::TO_FLOAT(iVar1)) };
	}
	else
	{
		Var0 = { __LIB_0__.func_85(PLAYER::PLAYER_ID()) };
	}
	return Var0;
}

int func_77(int iParam0)//Position - 0x59C72
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_2, 30);
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x5A8A3
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_142;
}

float func_79(int iParam0, float fParam1)//Position - 0x5CEDE
{
	float fVar0;
	fVar0 = __LIB_1__.func_913(iParam0);
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

Vector3 func_80(int iParam0, struct<3> Param1)//Position - 0x5CF23
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(__LIB_1__.func_328(iParam0), __LIB_1__.func_913(iParam0), Param1);
}

int func_81(int iParam0)//Position - 0x5D40D
{
	int iVar0;
	if (iParam0 != __LIB_0__.func_160() && (__LIB_0__.func_154(iParam0, 1, 1) || Global_2667225.f_2680))
	{
		iVar0 = BitTest(Global_2689235[iParam0 /*453*/].f_318, 1);
		return iVar0;
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x5D8F3
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x5D93A
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_84(int iParam0)//Position - 0x5D981
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x5DB02
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
		else if (((Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_1575058) && iParam0 == PLAYER::PLAYER_ID()) && __LIB_0__.func_154(iParam0, 1, 0))
		{
			return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
		}
	}
	return 0;
}

Vector3 func_86(int iParam0)//Position - 0x5F4D3
{
	return Global_2689235[iParam0 /*453*/].f_71.f_7;
}

int func_87(int iParam0)//Position - 0x5F4EA
{
	if (Global_2689235[iParam0 /*453*/].f_71.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

var func_88(struct<3> Param0)//Position - 0x61842
{
	var uVar0;
	__LIB_1__.func_989(Param0, &(Global_2667225.f_45), &uVar0);
	return uVar0;
}

void func_89(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, float fParam5)//Position - 0x61BC6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	float fVar12;
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { Param2 - *uParam0 };
	Var2.f_2 = 0f;
	Var3 = { __LIB_0__.func_620(0f, 0f, 1f, Var0) };
	Var3 = { Var3 / FtoV(SYSTEM::VMAG(Var3)) };
	fVar4 = (SYSTEM::VMAG(Var1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	Var3 = { Var3 * Vector(fVar4, fVar4, fVar4) };
	if (!__LIB_0__.func_156(Var3, Var1) >= 0f)
	{
		Var3 = { Var3 * Vector(-1f, -1f, -1f) };
	}
	Var6 = { Param1 + Var3 };
	Var7 = { Param2 + Var3 };
	Var8 = { Var6 - *uParam0 };
	Var9 = { Var7 - *uParam0 };
	if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1) > 90f)
	{
		fVar5 = SYSTEM::VMAG(Var8);
		Var8 = { Var8 / Vector(fVar5, fVar5, fVar5) };
		Var8 = { Var8 * FtoV((fVar5 + fParam4)) };
		*uParam0 = { *uParam0 + Var8 };
	}
	if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var2.f_0, Var2.f_1) > 90f)
	{
		fVar5 = SYSTEM::VMAG(Var9);
		Var9 = { Var9 / Vector(fVar5, fVar5, fVar5) };
		Var9 = { Var9 * FtoV((fVar5 + fParam4)) };
		*uParam0 = { *uParam0 + Var9 };
	}
	if (fVar4 > ((fParam3 * 0.5f) - fParam4))
	{
		Var3 = { Var3 / FtoV(SYSTEM::VMAG(Var3)) };
		fVar5 = (fVar4 - (fParam3 * 0.5f));
		fVar5 = (fVar5 + fParam4);
		Var3 = { Var3 * Vector(fVar5, fVar5, fVar5) };
		Var3 = { Var3 * Vector(-1f, -1f, -1f) };
		*uParam0 = { *uParam0 + Var3 };
	}
	if (Param1.f_2 > Param2.f_2)
	{
		fVar10 = Param2.f_2;
		fVar11 = Param1.f_2;
	}
	else
	{
		fVar10 = Param1.f_2;
		fVar11 = Param2.f_2;
	}
	fVar12 = (fVar11 - fVar10);
	if (uParam0->f_2 > (fVar11 - (fVar12 * fParam5)))
	{
		uParam0->f_2 = (fVar11 - (fVar12 * fParam5));
	}
	if (uParam0->f_2 < (fVar10 + (fVar12 * fParam5)))
	{
		uParam0->f_2 = (fVar10 + (fVar12 * fParam5));
	}
}

int func_90(int iParam0, bool bParam1)//Position - 0x63241
{
	if (__LIB_0__.func_154(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2689235[iParam0 /*453*/].f_269.f_14;
		}
		else
		{
			return Global_2689235[iParam0 /*453*/].f_269.f_16;
		}
	}
	return -1;
}

int func_91()//Position - 0x632FC
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__.func_582();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && (((PED::IS_PED_IN_FLYING_VEHICLE(iVar1) || Global_2689235[iVar0 /*453*/].f_71.f_3 == 2) || Global_2689235[iVar0 /*453*/].f_71.f_3 == 3) || Global_2689235[iVar0 /*453*/].f_71.f_3 == 4))
	{
		return 1;
	}
	return 0;
}

bool func_92()//Position - 0x634AB
{
	return !__LIB_0__.func_492(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_434), 2);
}

int func_93()//Position - 0x634E0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			switch (Global_2667225.f_45[iVar0 /*12*/].f_10)
			{
				case 0:
					return __LIB_1__.func_66(Global_2667225.f_45[iVar0 /*12*/].f_6);
					break;
				case 1:
					return __LIB_1__.func_65(Global_2667225.f_45[iVar0 /*12*/], Global_2667225.f_45[iVar0 /*12*/].f_3, 0f);
					break;
				case 2:
					return __LIB_1__.func_65(Global_2667225.f_45[iVar0 /*12*/], Global_2667225.f_45[iVar0 /*12*/].f_3, Global_2667225.f_45[iVar0 /*12*/].f_6);
					break;
				}
		}
		iVar0++;
	}
	return 0;
}

void func_94(bool bParam0, bool bParam1)//Position - 0x648E8
{
	if (bParam0 == __LIB_0__.func_160())
	{
		return;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (!bParam1)
	{
		if (!BitTest(Global_2824374, bParam0))
		{
			__LIB_0__.func_580(&(Global_2824375[bParam0 /*2*/]), 1, 0);
			MISC::SET_BIT(&Global_2824374, bParam0);
		}
	}
	else if (BitTest(Global_2824374, bParam0))
	{
		__LIB_0__.func_579(&(Global_2824375[bParam0 /*2*/]));
		MISC::CLEAR_BIT(&Global_2824374, bParam0);
	}
}

bool func_95()//Position - 0x64954
{
	return Global_1946250.f_4533.f_1 != -1;
}

float func_96(int iParam0, int iParam1)//Position - 0x6D502
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866176[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
	if (HUD::GET_MENU_PED_FLOAT_STAT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

float func_97(int iParam0, int iParam1)//Position - 0x6D641
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866176[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_98(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9CD2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_0__.func_153();
	if (((iParam1 >= 0 && iParam1 < 21) && Global_2359296[iVar2 /*5567*/].f_681.f_2305[iParam1]) && iParam3 == iParam1 == 20)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iVar0 != 1 || iParam2)
			{
				if (Global_2359296[iVar2 /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar0] != -1)
				{
					(*uParam0)[iVar0] = Global_2359296[iVar2 /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar0];
					uParam0->f_13[iVar0] = Global_2359296[iVar2 /*5567*/].f_681.f_1609[iParam1 /*13*/][iVar0];
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_2359296[iVar2 /*5567*/].f_681.f_1883[iParam1 /*10*/][iVar1] != -1)
			{
				uParam0->f_26[iVar1] = Global_2359296[iVar2 /*5567*/].f_681.f_1883[iParam1 /*10*/][iVar1];
				uParam0->f_36[iVar1] = Global_2359296[iVar2 /*5567*/].f_681.f_2094[iParam1 /*10*/][iVar1];
			}
			iVar1++;
		}
		uParam0->f_46[0] = Global_2359296[iVar2 /*5567*/].f_681.f_2628[iParam1];
		return 1;
	}
	return 0;
}

var func_99()//Position - 0x9CE73
{
	return Global_2715699.f_6305;
}

int func_100(int iParam0)//Position - 0x9CE82
{
	if (iParam0 <= -1 || iParam0 >= Global_2715699.f_6300)
	{
		return -1;
	}
	return Global_2715699.f_6300[iParam0];
}

bool func_101()//Position - 0x9D713
{
	return Global_2703735.f_2724.f_582;
}

int func_102(int iParam0)//Position - 0x9DB91
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_103(int iParam0)//Position - 0x9DC1F
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != __LIB_0__.func_160())
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_104()//Position - 0x9DC7F
{
	return Global_1963976;
}

int func_105()//Position - 0x9DCE0
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_193;
}

int func_106(int iParam0)//Position - 0x9DDB9
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
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
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
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
			return 6;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x9E17D
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		return BitTest(Global_1853348[iVar0 /*834*/].f_139, 21);
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x9E31D
{
	if (!__LIB_0__.func_43(iParam0))
	{
		return __LIB_0__.func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_109()//Position - 0x744
{
	Global_1641031.f_40.f_10 = 0;
}

void func_110()//Position - 0x755
{
	Global_1641031.f_40.f_10 = 1;
}

int func_111(int iParam0)//Position - 0x766
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		default:
	}
	return 0;
}

bool func_112(int iParam0)//Position - 0x7AE
{
	return iParam0 > Global_1641031.f_40.f_8;
}

void func_113(int iParam0)//Position - 0x8F1
{
	Global_1641031.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1641031.f_40.f_12 = 1;
}

void func_114()//Position - 0xA5C
{
	Global_1641031.f_57 = 0;
	Global_1641031.f_57.f_1 = 0;
}

void func_115()//Position - 0xA74
{
	Global_1641031.f_40 = 3;
}

void func_116()//Position - 0xA83
{
	MISC::SET_BIT(&Global_8136, 8);
}

void func_117(int iParam0)//Position - 0x16B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4539964[iParam0 /*104*/].f_18 = iVar0;
	Global_4539964[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4539964[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4539964[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4539964[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4539964[iParam0 /*104*/].f_18.f_5 = iVar5;
}

int func_118()//Position - 0x18C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0)
		{
			Global_4541213 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!__LIB_2__.func_43(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
			{
				Global_4541213 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4541213 == 11)
	{
		return 0;
	}
	Global_4539964[Global_4541213 /*104*/].f_99[0] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[1] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[2] = 0;
	return 1;
}

void func_119(int iParam0, var uParam1)//Position - 0x1CCA
{
	bool bVar0;
	bool bVar1;
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		case 2:
			bVar1 = true;
			break;
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			case 0:
				*uParam1 = 1;
				break;
			case 2:
				*uParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			case 0:
				*uParam1 = 2;
				break;
			case 1:
				*uParam1 = 3;
				break;
			default:
				return;
		}
		return;
	}
}

void func_120()//Position - 0x1FEE
{
	Global_1641031.f_40.f_9 = 4;
}

void func_121()//Position - 0x2196
{
	Global_1641031.f_40.f_9 = 3;
}

int func_122()//Position - 0x2998
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!__LIB_2__.func_43(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

void func_123()//Position - 0x2C95
{
	Global_2824944 = 0;
}

void func_124()//Position - 0x2CA2
{
	Global_1641031.f_57 = 1;
	Global_1641031.f_57.f_1 = 0;
}

void func_125()//Position - 0x2CBA
{
	Global_1641031.f_40.f_9 = 1;
}

void func_126(int iParam0)//Position - 0x2CCB
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8138, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8138, 0);
	}
}

void func_127(int iParam0)//Position - 0x2CEC
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 20);
	}
}

void func_128()//Position - 0x33C4
{
	Global_22623 = 0;
}

void func_129()//Position - 0x3450
{
	Global_1641031.f_40.f_9 = 2;
}

void func_130()//Position - 0x34AF
{
	Global_1641031.f_55 = Global_1641031.f_40.f_1;
	Global_1641031.f_55.f_1 = Global_1641031.f_40.f_10;
}

void func_131()//Position - 0x34D5
{
	Global_1641031.f_40 = 1;
}

bool func_132()//Position - 0x34E4
{
	return Global_1641031.f_40 == 1;
}

int func_133()//Position - 0x355B
{
	if (Global_1641031.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_134()//Position - 0x35D3
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1659413);
}

bool func_135()//Position - 0x35FF
{
	return Global_1641031.f_40 == 3;
}

bool func_136()//Position - 0x360F
{
	return __LIB_0__.func_73();
}

int func_137(char* sParam0, char* sParam1)//Position - 0x3639
{
	char cVar0[64];
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_138()//Position - 0x3653
{
	return Global_2821909.f_1;
}

int func_139(int iParam0)//Position - 0x6A98
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_140(int iParam0)//Position - 0x6AC8
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_141(int iParam0)//Position - 0x889E
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

void func_142(int iParam0, var uParam1)//Position - 0xC498
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		case 2:
			*uParam1 = { 896.3665f, -1035.7493f, 34.1096f };
			break;
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		case 5:
			*uParam1 = { -1042.482f, -2023.5159f, 12.1616f };
			break;
		case 6:
			*uParam1 = { -1268.1187f, -812.2741f, 16.1075f };
			break;
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		case 9:
			*uParam1 = { 1569.6896f, -2129.7925f, 77.3351f };
			break;
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		case 12:
			*uParam1 = { -528.5296f, -1784.5729f, 20.5853f };
			break;
		case 13:
			*uParam1 = { -295.8596f, -1353.2384f, 30.3138f };
			break;
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		case 15:
			*uParam1 = { 926.2818f, -1560.3114f, 29.7404f };
			break;
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		case 17:
			*uParam1 = { 1037.8134f, -2173.0623f, 30.5334f };
			break;
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		case 21:
			*uParam1 = { 96.1538f, -2216.3997f, 5.1712f };
			break;
	}
}

int func_143(int iParam0)//Position - 0xC70F
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
			return 6;
			break;
		case 8:
			return 7;
			break;
		case 9:
			return 8;
			break;
		case 10:
			return 9;
			break;
		case 11:
			return 10;
			break;
		case 12:
			return 11;
			break;
		case 13:
			return 12;
			break;
		case 14:
			return 13;
			break;
		case 15:
			return 14;
			break;
		case 16:
			return 15;
			break;
		case 17:
			return 16;
			break;
		case 18:
			return 17;
			break;
		case 19:
			return 18;
			break;
		case 20:
			return 19;
			break;
		case 21:
			return 20;
			break;
		case 22:
			return 21;
			break;
	}
	return -1;
}

int func_144(int iParam0)//Position - 0xCABD
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 26);
}

int func_145(int iParam0, int iParam1)//Position - 0xD65A
{
	int iVar0;
	iVar0 = __LIB_0__.func_603(iParam0);
	if (!iVar0 == __LIB_0__.func_160())
	{
		if (iVar0 == __LIB_0__.func_603(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_146(int iParam0)//Position - 0x12CEC
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_147(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x12D5B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_148(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x12D7A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_149(bool bParam0)//Position - 0x12DA9
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_150(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x137B3
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		case 54:
			*iParam5 = 100;
			break;
		case 62:
			*iParam5 = 100;
			break;
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_151(float fParam0)//Position - 0x138C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_152(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x13927
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_153()//Position - 0x1398C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23150.f_8783)
	{
		iVar0 = Global_23150.f_8779;
		iVar1 = Global_23150.f_8780;
		iVar2 = Global_23150.f_8781;
		iVar3 = Global_23150.f_8782;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_154(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x13A16
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

char* func_155(int iParam0)//Position - 0x13F77
{
	var uVar0;
	struct<13> Var1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return __LIB_1__.func_192(&uVar0);
		}
		else
		{
			return __LIB_1__.func_192(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

char* func_156(int iParam0)//Position - 0x14DC7
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0" /* GXT: Pacific Bait Storage */;
			break;
		case 2:
			return "MP_WHOUSE_1" /* GXT: White Widow Garage */;
			break;
		case 3:
			return "MP_WHOUSE_2" /* GXT: Celltowa Unit */;
			break;
		case 4:
			return "MP_WHOUSE_3" /* GXT: Convenience Store Lockup */;
			break;
		case 5:
			return "MP_WHOUSE_4" /* GXT: Foreclosed Garage */;
			break;
		case 6:
			return "MP_WHOUSE_5" /* GXT: Xero Gas Factory */;
			break;
		case 7:
			return "MP_WHOUSE_6" /* GXT: Derriere Lingerie Backlot */;
			break;
		case 8:
			return "MP_WHOUSE_7" /* GXT: Bilgeco Warehouse */;
			break;
		case 9:
			return "MP_WHOUSE_8" /* GXT: Pier 400 Utility Building */;
			break;
		case 10:
			return "MP_WHOUSE_9" /* GXT: GEE Warehouse */;
			break;
		case 11:
			return "MP_WHOUSE_10" /* GXT: LS Marine Building 3 */;
			break;
		case 12:
			return "MP_WHOUSE_11" /* GXT: Railyard Warehouse */;
			break;
		case 13:
			return "MP_WHOUSE_12" /* GXT: Fridgit Annexe */;
			break;
		case 14:
			return "MP_WHOUSE_13" /* GXT: Disused Factory Outlet */;
			break;
		case 15:
			return "MP_WHOUSE_14" /* GXT: Discount Retail Unit */;
			break;
		case 16:
			return "MP_WHOUSE_15" /* GXT: Logistics Depot */;
			break;
		case 17:
			return "MP_WHOUSE_16" /* GXT: Darnell Bros Warehouse */;
			break;
		case 18:
			return "MP_WHOUSE_17" /* GXT: Wholesale Furniture */;
			break;
		case 19:
			return "MP_WHOUSE_18" /* GXT: Cypress Warehouses */;
			break;
		case 20:
			return "MP_WHOUSE_19" /* GXT: West Vinewood Backlot */;
			break;
		case 21:
			return "MP_WHOUSE_20" /* GXT: Old Power Station */;
			break;
		case 22:
			return "MP_WHOUSE_21" /* GXT: Walker & Sons Warehouse */;
			break;
	}
	return "";
}

int func_157()//Position - 0x1611C
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4539961 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158(int iParam0, int iParam1, bool bParam2)//Position - 0x16143
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4539961 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
		else
		{
			Global_4539961 = -1;
			return 0;
		}
	}
	if (((Global_4539961 > -1 || Global_4539961 == -3) || Global_4539961 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4539961 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4539961 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_159()//Position - 0x16558
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	Global_4539956 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

int func_160(int iParam0, bool bParam1)//Position - 0x16E6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

bool func_161(char* sParam0, char* sParam1)//Position - 0x18502
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

Vector3 func_162(struct<3> Param0)//Position - 0xAB14
{
	return (-SYSTEM::SIN(Param0.f_2) * SYSTEM::COS(Param0.f_0)), (SYSTEM::COS(Param0.f_2) * SYSTEM::COS(Param0.f_0)), SYSTEM::SIN(Param0.f_0);
}

void func_163(var uParam0, bool bParam1)//Position - 0x12DB
{
	uParam0->f_6 = bParam1;
	if (bParam1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MUTES_RADIO_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("MUTES_RADIO_SCENE");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MUTES_RADIO_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MUTES_RADIO_SCENE");
	}
}

void func_164()//Position - 0x13CE
{
	STREAMING::SET_FOCUS_POS_AND_VEL(CAM::GET_FINAL_RENDERED_CAM_COORD(), 0f, 0f, 0f);
}

void func_165(int iParam0)//Position - 0x1458
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				}
				else
				{
					PED::DELETE_PED(&iVar0);
				}
			}
			iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1, false))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
						}
						else
						{
							PED::DELETE_PED(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

int func_166(int iParam0)//Position - 0xA7F4
{
	if (!__LIB_0__.func_114() && func_149(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_167(var uParam0)//Position - 0xAA0C
{
	char* sVar0;
	if (!uParam0->f_16)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		{
			__LIB_1__.func_0(uParam0, 4);
			return;
		}
		sVar0 = uParam0->f_1;
		if (uParam0->f_2)
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sVar0, uParam0->f_17, 24);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE(sVar0, 8);
		}
		uParam0->f_16 = 1;
	}
}

int func_168(var uParam0)//Position - 0xC88C
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	if ((__LIB_0__.func_3() == 0 || __LIB_0__.func_63() == 0) || (__LIB_0__.func_3() == 999 && __LIB_0__.func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1049;
				break;
			case 1:
				return 1050;
				break;
			case 2:
				return 1051;
				break;
			case 3:
				return 1052;
				break;
			case 4:
				return 1053;
				break;
			case 5:
				return 1054;
				break;
			case 6:
				return 1488;
				break;
			case 7:
				return 1489;
				break;
			case 8:
				return 1490;
				break;
			case 9:
				return 1491;
				break;
			case 10:
				return 1949;
				break;
			case 11:
				return 1950;
				break;
			case 12:
				return 1951;
				break;
			case 13:
				return 2425;
				break;
			case 14:
				return 2445;
				break;
			case 15:
				return 2448;
				break;
			case 16:
				return 2451;
				break;
			case 17:
				return 2615;
				break;
			case 18:
				return 2618;
				break;
			case 19:
				return 2621;
				break;
			case 20:
				return 3787;
				break;
			case 21:
				return 3790;
				break;
			case 22:
				return 3865;
				break;
			case 23:
				return 3868;
				break;
			case 24:
				return 3871;
				break;
			case 25:
				return 3874;
				break;
			case 26:
				return 5365;
			case 27:
				return 5368;
				break;
			case 28:
				return 5470;
				break;
			case 29:
				return 5473;
				break;
			case 30:
				return 6432;
				break;
			case 31:
				return 6435;
				break;
			case 32:
				return 7256;
				break;
			case 33:
				return 7259;
				break;
			case 34:
				return 7262;
				break;
			case 35:
				return 7971;
				break;
			case 36:
				return 7974;
				break;
			case 37:
				return 7977;
				break;
			case 38:
				return 7980;
				break;
			case 39:
				return 8502;
				break;
			case 40:
				return 8505;
				break;
			case 41:
				return 8508;
				break;
			case 42:
				return 8511;
				break;
			case 43:
				return 8907;
				break;
			case 44:
				return 8910;
				break;
			case 45:
				return 8913;
				break;
			case 46:
				return 10288;
				break;
			case 47:
				return 10291;
				break;
			case 48:
				return 10414;
				break;
			case 49:
				return 10417;
				break;
			case 50:
				break;
		}
		return 13122;
	}
	if (__LIB_0__.func_3() == 2 && __LIB_0__.func_63() == 2)
	{
		return 13122;
	}
	return 13122;
}

int func_169(var uParam0)//Position - 0x23582
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	if ((__LIB_0__.func_3() == 0 || __LIB_0__.func_63() == 0) || (__LIB_0__.func_3() == 999 && __LIB_0__.func_63() == 999))
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

void func_170(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x331FA
{
	uParam0->f_1 = uParam1;
	uParam0->f_2 = uParam3;
	uParam0->f_17 = uParam4;
	uParam0->f_3 = uParam2;
	uParam0->f_16 = 0;
	__LIB_0__.func_579(&(uParam0->f_18));
}

void func_171(var uParam0, int iParam1, char* sParam2)//Position - 0x33227
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = sParam2;
}

int func_172(int iParam0)//Position - 0x9BF
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("MP_M_Freemode_01") || iParam0 == joaat("MP_M_FIBSec_01")) || iParam0 == joaat("MP_S_M_Armoured_01")) || iParam0 == joaat("S_F_Y_AirHostess_01")) || iParam0 == joaat("S_F_Y_Baywatch_01")) || iParam0 == joaat("S_F_Y_Cop_01")) || iParam0 == joaat("S_F_Y_Ranger_01")) || iParam0 == joaat("S_F_Y_Scrubs_01")) || iParam0 == joaat("S_F_Y_Sheriff_01")) || iParam0 == joaat("S_M_M_Armoured_01")) || iParam0 == joaat("S_M_M_Armoured_02")) || iParam0 == joaat("S_M_M_Bouncer_01")) || iParam0 == joaat("S_M_M_CIASec_01")) || iParam0 == joaat("S_M_M_ChemSec_01")) || iParam0 == joaat("S_M_M_Doctor_01")) || iParam0 == joaat("S_M_M_FIBOffice_01")) || iParam0 == joaat("S_M_M_FIBOffice_02")) || iParam0 == joaat("S_M_M_HighSec_01")) || iParam0 == joaat("S_M_M_HighSec_02")) || iParam0 == joaat("S_M_M_Janitor")) || iParam0 == joaat("S_M_M_LSMetro_01")) || iParam0 == joaat("S_M_M_Marine_01")) || iParam0 == joaat("S_M_M_Marine_02")) || iParam0 == joaat("S_M_M_Paramedic_01")) || iParam0 == joaat("S_M_M_Pilot_01")) || iParam0 == joaat("S_M_M_Pilot_02")) || iParam0 == joaat("S_M_M_Postal_01")) || iParam0 == joaat("S_M_M_Postal_02")) || iParam0 == joaat("S_M_M_PrisGuard_01")) || iParam0 == joaat("S_M_M_Scientist_01")) || iParam0 == joaat("S_M_M_Security_01")) || iParam0 == joaat("S_M_M_UPS_01")) || iParam0 == joaat("S_M_M_UPS_02")) || iParam0 == joaat("S_M_Y_AirWorker")) || iParam0 == joaat("S_M_Y_ArmyMech_01")) || iParam0 == joaat("S_M_Y_BayWatch_01")) || iParam0 == joaat("S_M_Y_BlackOps_01")) || iParam0 == joaat("S_M_Y_BlackOps_02")) || iParam0 == joaat("S_M_Y_Cop_01")) || iParam0 == joaat("S_M_Y_Doorman_01")) || iParam0 == joaat("S_M_Y_Fireman_01")) || iParam0 == joaat("S_M_Y_Garbage")) || iParam0 == joaat("S_M_Y_HwayCop_01")) || iParam0 == joaat("S_M_Y_Marine_01")) || iParam0 == joaat("S_M_Y_Marine_02")) || iParam0 == joaat("S_M_Y_Marine_03")) || iParam0 == joaat("S_M_Y_Pilot_01")) || iParam0 == joaat("S_M_Y_Ranger_01")) || iParam0 == joaat("S_M_Y_Sheriff_01")) || iParam0 == joaat("S_M_Y_Swat_01")) || iParam0 == joaat("S_M_Y_USCG_01")) || iParam0 == joaat("S_M_Y_Valet_01")) || iParam0 == joaat("S_M_Y_Waiter_01")) || iParam0 == joaat("U_M_M_JewelSec_01")) || iParam0 == joaat("S_M_Y_Casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_173(var uParam0, int iParam1, bool bParam2)//Position - 0x22A4
{
	if (iParam1 == -1)
	{
		return 1;
	}
	__LIB_0__.func_580(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			__LIB_0__.func_579(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		__LIB_0__.func_579(uParam0);
		return 1;
	}
	return 0;
}

int func_174()//Position - 0x720F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0)//Position - 0x817C
{
	Global_2703735.f_1570 = iParam0;
}

float func_176(int iParam0)//Position - 0x9020
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		case 144:
			return 0f;
		case 185:
			return 0f;
		default:
	}
	return 1f;
}

int func_177(int iParam0, int iParam1)//Position - 0x9118
{
	float fVar0;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		default:
			break;
	}
	return iParam0;
}

int func_178(int iParam0)//Position - 0xACFF
{
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
		case joaat("WEAPON_PIPEBOMB"):
			return 1;
			break;
	}
	return 0;
}

int func_179(int iParam0)//Position - 0xAD41
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
		default:
	}
	return 0;
}

int func_180(var* uParam0)//Position - 0xD931
{
	var uVar0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar0, 35, uParam0);
				return uVar0;
			}
		}
	}
	return -1;
}

int func_181(int iParam0, int iParam1, int iParam2)//Position - 0xDEFE
{
	if (iParam0 == joaat("CATEGORY_SERVICE") || iParam0 == joaat("CATEGORY_SERVICE_WITH_THRESHOLD"))
	{
		switch (iParam1)
		{
			case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			case joaat("SERVICE_EARN_PICKUP"):
			case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
			case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
			case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
			case joaat("SERVICE_EARN_CASHING_OUT"):
			case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			case joaat("SERVICE_EARN_DEBUG"):
				return 0;
				break;
			case joaat("SERVICE_EARN_INITIAL_CASH"):
			case joaat("SERVICE_EARN_JOBS"):
			case joaat("SERVICE_EARN_BETTING"):
			case joaat("SERVICE_EARN_LOTTERY"):
			case joaat("SERVICE_EARN_CHALLENGE_WIN"):
			case joaat("SERVICE_EARN_PROPERTY_SALES"):
			case joaat("SERVICE_EARN_VEHICLE_SALES"):
			case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
			case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
			case joaat("SERVICE_EARN_CRATE_DROP"):
			case joaat("SERVICE_EARN_HOLDUPS"):
			case joaat("SERVICE_EARN_IMPORT_EXPORT"):
			case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
			case joaat("SERVICE_EARN_JOBSHARE_CASH"):
			case joaat("SERVICE_EARN_NOT_BADSPORT"):
			case joaat("SERVICE_EARN_BANK_INTEREST"):
			case joaat("SERVICE_EARN_ROCKSTAR"):
			case joaat("SERVICE_EARN_CNCW"):
			case joaat("SERVICE_EARN_CNCB"):
			case joaat("SERVICE_EARN_JOB_BONUS"):
			case joaat("SERVICE_EARN_BEND_JOB"):
			case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
			case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
			case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
			case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
			case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
			case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
			case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
			case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
			case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
			case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
			case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
			case joaat("SERVICE_EARN_REFUND_LOTTERY"):
			case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
			case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
			case joaat("SERVICE_EARN_BOSS"):
			case joaat("SERVICE_EARN_GOON"):
			case joaat("SERVICE_EARN_BOSS_AGENCY"):
			case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
			case joaat("SERVICE_EARN_PREMIUM_JOB"):
			case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
			case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
			case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
			case joaat("SERVICE_EARN_REFUNDAMMODROP"):
			case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
			case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
			case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
			case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
			case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
			case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
			case joaat("SERVICE_EARN_GANGOPS_WAGES"):
			case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
			case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
			case joaat("SERVICE_EARN_GANGOPS_SETUP"):
			case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
			case joaat("SERVICE_EARN_GANGOPS_FINALE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
			case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
			case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
			case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
			case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
			case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
			case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
			case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
			case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
			case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
			case joaat("SERVICE_EARN_NIGHTCLUB_DANCING_AWARD"):
			case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
			case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
			case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
			case joaat("SERVICE_EARN_ARENA_WAR"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
			case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
			case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
			case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
			case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
			case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
			case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
			case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
			case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
			case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
				return 1;
				break;
			case joaat("SERVICE_SPEND_AIRSTRIKE"):
			case joaat("SERVICE_SPEND_AMMO_DROP"):
			case joaat("SERVICE_SPEND_BACKUP_GANG"):
			case joaat("SERVICE_SPEND_BACKUP_HELI"):
			case joaat("SERVICE_SPEND_BOAT_PICKUP"):
			case joaat("SERVICE_SPEND_BOUNTY"):
			case joaat("SERVICE_SPEND_BULL_SHARK"):
			case joaat("SERVICE_SPEND_CAR_IMPOUND"):
			case joaat("SERVICE_SPEND_CASH_SHARED"):
			case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
			case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
			case joaat("SERVICE_SPEND_HELI_PICKUP"):
			case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
			case joaat("SERVICE_SPEND_HIRE_MUGGER"):
			case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
			case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
			case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
				return 2;
				break;
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
			case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
			case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
			case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
			case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
			case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
			case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
			case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
			case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
			case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
			case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
			case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
			case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
			case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
			case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
			case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
			case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
			case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
			case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
			case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
			case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
			case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
			case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
			case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
			case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
			case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
			case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
			case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
			case joaat("SERVICE_EARN_FROM_CONTRABAND"):
			case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
			case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
			case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
				return 1;
				break;
			case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
			case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
				return 2;
				break;
		}
	}
	else if ((iParam0 == joaat("CATEGORY_SERVICE_WITH_LIMIT") || iParam0 == joaat("CATEGORY_PRICE_MODIFIER")) || iParam0 == joaat("CATEGORY_PRICE_OVERRIDE"))
	{
		return 0;
	}
	return 1;
}

void func_182(bool bParam0)//Position - 0xF870
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		__LIB_2__.func_154(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4539961 == -3)
	{
		__LIB_2__.func_154(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_183(var uParam0, bool bParam1, int iParam2)//Position - 0x14088
{
	int iVar0;
	int iVar1;
	Global_23150.f_6130 = uParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

void func_184(int iParam0, char* sParam1, char* sParam2)//Position - 0x14DFF
{
	StringCopy(&(Global_23150.f_6411[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_7420[iParam0 /*16*/]), sParam2, 64);
}

void func_185()//Position - 0x15BFC
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
	}
}

void func_186(int* iParam0, float fParam1)//Position - 0x15E24
{
	iParam0->f_1 = (__LIB_0__.func_484(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_187(int iParam0, bool bParam1)//Position - 0x15E4F
{
	int iVar0;
	iVar0 = __LIB_1__.func_184(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (__LIB_0__.func_77(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_188(int iParam0, int iParam1, int iParam2)//Position - 0x17B03
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)//Position - 0x191E7
{
	switch (iParam0)
	{
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
			return 1;
		default:
	}
	return 0;
}

var func_190()//Position - 0x19231
{
	return Global_262145.f_30925 /* Tunable: 2071833430 */;
}

int func_191(bool bParam0)//Position - 0x27EB
{
	if (bParam0 != __LIB_0__.func_160())
	{
		return Global_1892703[bParam0 /*599*/].f_10;
	}
	return __LIB_0__.func_160();
}

int func_192(bool bParam0)//Position - 0x29E3
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != __LIB_0__.func_160())
		{
			return Global_1892703[bParam0 /*599*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_193(int iParam0)//Position - 0x3074
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

int func_194()//Position - 0x413E
{
	if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

void func_195(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5247
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
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
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam5);
}

int func_196(int iParam0)//Position - 0x61E5
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
	}
	return 0;
}

int func_197(bool bParam0)//Position - 0x67CF
{
	if (__LIB_1__.func_417(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 8);
}

bool func_198()//Position - 0x6D3D
{
	return BitTest(Global_1836844.f_1, 24);
}

int func_199(int iParam0, int iParam1)//Position - 0xE3BB
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { __LIB_1__.func_267(iParam0) };
		Global_2787518 = { __LIB_1__.func_267(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_200(int iParam0)//Position - 0x128A6
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_152057;
}

bool func_201(bool bParam0, bool bParam1)//Position - 0x14751
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2689235[bParam0 /*453*/].f_244 != -1 || __LIB_0__.func_743(bParam0));
}

int func_202(bool bParam0)//Position - 0x19A78
{
	if (Global_2689235[bParam0 /*453*/].f_215 != 0)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0, int iParam1)//Position - 0x21F58
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
	if (HUD::GET_MENU_PED_INT_STAT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

var func_204(int iParam0)//Position - 0x46101
{
	return __LIB_1__.func_424(iParam0, 10);
}

void func_205(int iParam0, char* sParam1, int iParam2)//Position - 0x6792C
{
	int iVar0;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__.func_443(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

void func_206(int iParam0)//Position - 0x72486
{
	switch (iParam0)
	{
		case 53:
			__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[53 /*2*/]), 1, 0);
			Global_2715699.f_4316.f_388[53] = Global_262145.f_24518 /* Tunable: 464940095 */;
			break;
		case 54:
			__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[54 /*2*/]), 1, 0);
			Global_2715699.f_4316.f_388[54] = Global_262145.f_24518 /* Tunable: 464940095 */;
			break;
		case 55:
			__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[55 /*2*/]), 1, 0);
			Global_2715699.f_4316.f_388[55] = Global_262145.f_24518 /* Tunable: 464940095 */;
			break;
		case 56:
			__LIB_0__.func_495(&(Global_2715699.f_4316.f_233[56 /*2*/]), 1, 0);
			Global_2715699.f_4316.f_388[56] = Global_262145.f_24518 /* Tunable: 464940095 */;
			break;
	}
}

int func_207(bool bParam0)//Position - 0x94203
{
	var uVar0;
	uVar0 = Global_1659747[__LIB_1__.func_443(-1)];
	if (BitTest(uVar0, bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_208(bool bParam0)//Position - 0x97960
{
	if (bParam0 == __LIB_0__.func_160())
	{
		return bParam0;
	}
	return Global_2689235[bParam0 /*453*/].f_318.f_9;
}

int func_209(int iParam0)//Position - 0x97C00
{
	int iVar0;
	if (iParam0 != __LIB_0__.func_160())
	{
		iVar0 = __LIB_1__.func_234(iParam0);
		if (iVar0 != 0)
		{
			return __LIB_1__.func_231(iVar0);
		}
	}
	return -1;
}

int func_210(int iParam0)//Position - 0x97EB2
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return -1;
	}
	iVar0 = __LIB_1__.func_292(iParam0);
	if (!iVar0 == 0)
	{
		return __LIB_1__.func_248(iVar0);
	}
	return -1;
}

Vector3 func_211(bool bParam0)//Position - 0x9922F
{
	return Global_2689235[bParam0 /*453*/].f_71.f_7;
}

int func_212(bool bParam0)//Position - 0x99246
{
	if (Global_2689235[bParam0 /*453*/].f_71.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x9CBAE
{
	int iVar0;
	if (__LIB_1__.func_330(iParam0))
	{
		iVar0 = __LIB_2__.func_2(iParam0);
		if (!iVar0 == __LIB_0__.func_160())
		{
			return Global_2689235[iVar0 /*453*/].f_269.f_47;
		}
	}
	return -1;
}

int func_214(bool bParam0, bool bParam1, int iParam2)//Position - 0x9D066
{
	if (Global_2689235[bParam0 /*453*/].f_230 == 99)
	{
		if ((iParam2 && Global_2689235[bParam0 /*453*/].f_233 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689235[bParam0 /*453*/].f_230 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_215(int iParam0, int iParam1)//Position - 0x9EDFD
{
	if (iParam0 == 45)
	{
		if (iParam1 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_216(int iParam0, int iParam1)//Position - 0x9EE18
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0, int iParam1)//Position - 0x9EE33
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 6:
			case 7:
			case 8:
			case 9:
				return 1;
			}
		default:
	}
	return 0;
}

int func_218(int iParam0, int iParam1)//Position - 0x9EE66
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
				return 1;
			}
		default:
	}
	return 0;
}

Vector3 func_219(int iParam0)//Position - 0x9F613
{
	switch (iParam0)
	{
		case joaat("MP_GAR_SIMEON"):
			return 1204.4286f, -3110.847f, 4.3988f;
			break;
		case joaat("MP_GAR_PNS_2"):
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		case joaat("MP_GAR_PNS_3"):
			return -1164.8867f, -2011.1052f, 12.253714f;
			break;
		case joaat("MP_GAR_PNS_4"):
			return -330.44f, -143.39f, 39.33f;
			break;
		case joaat("MP_GAR_PNS_5"):
			return 106.28f, 6620.01f, 32.12f;
			break;
		case joaat("MP_GAR_PNS_6"):
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_220(var uParam0, int iParam1)//Position - 0x9F6C7
{
	switch (iParam1)
	{
		case 0:
		case joaat("MP_GAR_SIMEON"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_SIMEON");
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.4286f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.4019f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.4019f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.1573f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		case 1:
		case joaat("MP_GAR_PNS_2"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_2");
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.7905f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.0035f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.88574f, -1088.5156f, 20.559574f };
			uParam0->f_27.f_3 = { 718.61304f, -1088.7799f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		case 2:
		case joaat("MP_GAR_PNS_3"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_3");
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.8867f, -2011.1052f, 12.253714f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.7738f, -2010.2699f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.6388f, -2010.2107f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.7228f, -2015.9226f, 11.504413f };
			uParam0->f_27.f_3 = { -1160.5583f, -2007.0046f, 15.680271f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		case 3:
		case joaat("MP_GAR_PNS_4"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_4");
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.79984f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.34323f, -141.7261f, 40.759644f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		case 4:
		case joaat("MP_GAR_PNS_5"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_5");
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.3223f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.0483f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.97591f, 6625.0464f, 30.603012f };
			uParam0->f_27.f_3 = { 111.252235f, 6615.6567f, 33.629288f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		case 5:
		case joaat("MP_GAR_PNS_6"):
			*uParam0 = 99;
			uParam0->f_1 = joaat("MP_GAR_PNS_6");
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.3448f, 2644.4177f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.8348f, 2634.7754f, 36.550064f };
			uParam0->f_27.f_3 = { 1182.5776f, 2647.9546f, 39.586018f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

void func_221(bool bParam0, int iParam1)//Position - 0xA0687
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__.func_5();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		default:
			iVar1 = __LIB_1__.func_33(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

void func_222()//Position - 0xA0E93
{
	__LIB_1__.func_311();
}

int func_223(int iParam0)//Position - 0xA0EE6
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		case 144:
			return 0;
		default:
	}
	return 5;
}

float func_224(int iParam0)//Position - 0xA0FE0
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
		case 236:
		case 150:
			return 0f;
		default:
	}
	if (__LIB_0__.func_684(iParam0) == 1)
	{
		return 0f;
	}
	return 1f;
}

int func_225(int iParam0, int iParam1)//Position - 0xA2735
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_32 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

float func_226(int iParam0, int iParam1)//Position - 0xA4362
{
	return SYSTEM::VDIST(__LIB_1__.func_265(iParam0), __LIB_1__.func_265(iParam1));
	return 0f;
}

bool func_227()//Position - 0xA6709
{
	return BitTest(Global_2621446, 11);
}

void func_228()//Position - 0xA70FC
{
	MISC::SET_BIT(&(Global_2815059.f_1797), 18);
}

void func_229(bool bParam0)//Position - 0xA7111
{
	if (bParam0)
	{
		if (!BitTest(Global_2815059.f_1797, 9))
		{
			MISC::SET_BIT(&(Global_2815059.f_1797), 9);
		}
	}
	else if (BitTest(Global_2815059.f_1797, 9))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1797), 9);
	}
}

void func_230()//Position - 0xA778C
{
	if (BitTest(Global_2815059.f_1798, 3) || BitTest(Global_2815059.f_1798, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2815059.f_1798, 5))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1798), 5);
	}
	if (BitTest(Global_2815059.f_1798, 3))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1798), 3);
	}
	if (BitTest(Global_2815059.f_1798, 4))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_1798), 4);
	}
	__LIB_1__.func_550(0);
	__LIB_1__.func_549(0);
	__LIB_1__.func_548(0);
}

int func_231(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA7A4C
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						case 3:
							return 3;
						default:
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 5;
						case 2:
							return 6;
						case 3:
							return 7;
						default:
					}
					break;
			}
			break;
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
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
								default:
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								case 1:
									return 6;
								case 2:
									return 7;
								case 3:
									return 8;
								case 4:
									return 9;
								default:
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								case 1:
									return 11;
								case 2:
									return 12;
								case 3:
									return 13;
								case 4:
									return 14;
								default:
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								case 1:
									return 16;
								case 2:
									return 17;
								case 3:
									return 18;
								case 4:
									return 19;
								default:
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								case 1:
									return 21;
								case 2:
									return 22;
								case 3:
									return 24;
								case 4:
									return 25;
								default:
							}
							break;
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								case 1:
									return 27;
								case 2:
									return 28;
								case 3:
									return 29;
								case 4:
									return 30;
								default:
							}
							break;
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								case 1:
									return 32;
								case 2:
									return 33;
								case 3:
									return 34;
								case 4:
									return 35;
								default:
							}
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
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
								default:
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								case 1:
									return 6;
								case 2:
									return 7;
								case 3:
									return 8;
								case 4:
									return 9;
								default:
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								case 1:
									return 11;
								case 2:
									return 12;
								case 3:
									return 13;
								case 4:
									return 14;
								default:
							}
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								default:
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								default:
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								default:
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								default:
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								default:
							}
							break;
					}
					break;
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						case 3:
							return 3;
						default:
					}
					break;
				case 1:
					switch (iParam2)
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
						default:
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						case 1:
							return 13;
						case 2:
							return 14;
						case 3:
							return 15;
						case 4:
							return 16;
						default:
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						case 1:
							return 18;
						case 2:
							return 19;
						case 3:
							return 20;
						case 4:
							return 21;
						default:
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						case 1:
							return 24;
						case 2:
							return 25;
						case 3:
							return 26;
						default:
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						case 1:
							return 28;
						case 2:
							return 29;
						default:
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						case 1:
							return 31;
						case 2:
							return 32;
						default:
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						case 1:
							return 34;
						case 2:
							return 35;
						case 3:
							return 36;
						default:
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						case 1:
							return 38;
						case 2:
							return 39;
						case 3:
							return 40;
						default:
					}
					break;
			}
			break;
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						default:
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 4;
						case 2:
							return 5;
						default:
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 7;
						case 2:
							return 8;
						default:
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						case 1:
							return 13;
						case 2:
							return 14;
						default:
					}
					break;
			}
			break;
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						default:
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 4;
						case 2:
							return 5;
						default:
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 7;
						case 2:
							return 8;
						default:
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
					}
					break;
			}
			break;
	}
	if (__LIB_0__.func_684(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

bool func_232()//Position - 0x5666
{
	return __LIB_2__.func_192(PLAYER::PLAYER_ID());
}

int func_233()//Position - 0xBB60
{
	if (__LIB_0__.func_3() != 0)
	{
		return 0;
	}
	if (!__LIB_0__.func_640(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_234(bool bParam0)//Position - 0x65763
{
	if (__LIB_1__.func_425(bParam0, 0))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_235(bool bParam0, bool bParam1)//Position - 0x8294D
{
	int iVar0;
	if (bParam0 != __LIB_0__.func_160() && bParam1 != __LIB_0__.func_160())
	{
		iVar0 = __LIB_2__.func_191(bParam0);
		if (iVar0 != __LIB_0__.func_160())
		{
			return iVar0 == __LIB_2__.func_191(bParam1);
		}
	}
	return 0;
}

bool func_236()//Position - 0x8F176
{
	return __LIB_2__.func_207(26);
}

int func_237(bool bParam0)//Position - 0x923EC
{
	if (bParam0 != __LIB_0__.func_160())
	{
		return Global_2689235[bParam0 /*453*/].f_318.f_15;
	}
	return -1;
}

void func_238(char* sParam0, char* sParam1, int iParam2)//Position - 0x9D723
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

void func_239(int iParam0)//Position - 0x9D77A
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !__LIB_1__.func_159())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x9D9B4
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar2 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	fVar3 = ((Var1.f_2 - Var0.f_2) / 2f);
	fVar4 = (Var1.f_2 - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, true, true, 2, false, 0, 0, false);
}

void func_241()//Position - 0xA1218
{
	Global_1649593.f_1173 = 1;
}

int func_242(bool bParam0)//Position - 0xA2535
{
	if (__LIB_1__.func_182(bParam0) == 236 || __LIB_1__.func_182(bParam0) == 150)
	{
		return __LIB_1__.func_476(bParam0);
	}
	return 0;
}

int func_243(int iParam0)//Position - 0xA3476
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_2__.func_4(PLAYER::PLAYER_ID());
	bVar1 = __LIB_2__.func_4(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

void func_244(bool bParam0)//Position - 0xA6920
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 1);
	}
}

bool func_245()//Position - 0xA723B
{
	return Global_2703735.f_833.f_10;
}

int func_246(int iParam0)//Position - 0xA8180
{
	if (__LIB_1__.func_188(Global_1853348[iParam0 /*834*/].f_267.f_32))
	{
		return 1;
	}
	return 0;
}

int func_247()//Position - 0xA85A6
{
	return Local_91.f_0;
}

void func_248(var uParam0)//Position - 0x18F3
{
	__LIB_2__.func_164();
	CAM::DO_SCREEN_FADE_IN(800);
	__LIB_1__.func_0(uParam0, 3);
}

void func_249(int iParam0)//Position - 0x251E
{
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iParam0);
	PED::RELEASE_PED_PRELOAD_PROP_DATA(iParam0);
}

bool func_250(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x6D1B
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_JBIB_22_0"):
		case joaat("DLC_MP_BIKER_M_JBIB_22_1"):
		case joaat("DLC_MP_BIKER_M_JBIB_22_2"):
		case joaat("DLC_MP_BIKER_M_JBIB_22_3"):
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_000_M");
					break;
				case 1:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_001_M");
					break;
				case 3:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_002_M");
					break;
				case 2:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_003_M");
					break;
				case 5:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_004_M");
					break;
				case 4:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_015_M");
					break;
			}
			break;
		case joaat("DLC_MP_BIKER_M_JBIB_23_0"):
		case joaat("DLC_MP_BIKER_M_JBIB_23_1"):
		case joaat("DLC_MP_BIKER_M_JBIB_23_2"):
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_005_M");
					break;
				case 1:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_006_M");
					break;
				case 3:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_007_M");
					break;
				case 2:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_008_M");
					break;
				case 5:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_009_M");
					break;
				case 4:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_016_M");
					break;
			}
			break;
		case joaat("DLC_MP_BIKER_M_JBIB_24_0"):
		case joaat("DLC_MP_BIKER_M_JBIB_24_1"):
		case joaat("DLC_MP_BIKER_M_JBIB_24_2"):
		case joaat("DLC_MP_BIKER_M_JBIB_24_3"):
		case joaat("DLC_MP_BIKER_M_JBIB_24_4"):
		case joaat("DLC_MP_BIKER_M_JBIB_24_5"):
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_010_M");
					break;
				case 1:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_011_M");
					break;
				case 3:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_012_M");
					break;
				case 2:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_013_M");
					break;
				case 5:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_014_M");
					break;
				case 4:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_017_M");
					break;
			}
			break;
		case joaat("DLC_MP_BIKER_F_JBIB_27_0"):
		case joaat("DLC_MP_BIKER_F_JBIB_27_1"):
		case joaat("DLC_MP_BIKER_F_JBIB_27_2"):
		case joaat("DLC_MP_BIKER_F_JBIB_27_3"):
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_000_F");
					break;
				case 1:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_001_F");
					break;
				case 3:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_002_F");
					break;
				case 2:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_003_F");
					break;
				case 5:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_004_F");
					break;
				case 4:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_015_F");
					break;
			}
			break;
		case joaat("DLC_MP_BIKER_F_JBIB_28_0"):
		case joaat("DLC_MP_BIKER_F_JBIB_28_1"):
		case joaat("DLC_MP_BIKER_F_JBIB_28_2"):
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_005_F");
					break;
				case 1:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_006_F");
					break;
				case 3:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_007_F");
					break;
				case 2:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_008_F");
					break;
				case 5:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_009_F");
					break;
				case 4:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_016_F");
					break;
			}
			break;
		case joaat("DLC_MP_BIKER_F_JBIB_29_0"):
		case joaat("DLC_MP_BIKER_F_JBIB_29_1"):
		case joaat("DLC_MP_BIKER_F_JBIB_29_2"):
		case joaat("DLC_MP_BIKER_F_JBIB_29_3"):
		case joaat("DLC_MP_BIKER_F_JBIB_29_4"):
		case joaat("DLC_MP_BIKER_F_JBIB_29_5"):
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_010_F");
					break;
				case 1:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_011_F");
					break;
				case 3:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_012_F");
					break;
				case 2:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_013_F");
					break;
				case 5:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_014_F");
					break;
				case 4:
					*uParam2 = joaat("mpBiker_overlays");
					*uParam3 = joaat("MP_Biker_Rank_017_F");
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

int func_251(int iParam0)//Position - 0x34CDB
{
	switch (iParam0)
	{
		case 714:
		case 715:
		case 716:
		case 717:
		case 870:
		case 871:
		case 872:
		case 873:
		case 718:
		case 719:
		case 720:
		case 721:
		case 874:
		case 875:
		case 876:
		case 877:
		case 722:
		case 723:
		case 724:
		case 725:
		case 878:
		case 879:
		case 880:
		case 881:
		case 726:
		case 727:
		case 728:
		case 729:
		case 882:
		case 883:
		case 884:
		case 885:
		case 730:
		case 731:
		case 732:
		case 733:
		case 886:
		case 887:
		case 888:
		case 889:
		case 734:
		case 735:
		case 736:
		case 737:
		case 890:
		case 891:
		case 892:
		case 893:
		case 738:
		case 739:
		case 740:
		case 741:
		case 894:
		case 895:
		case 896:
		case 897:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 933:
		case 934:
		case 935:
		case 936:
		case 937:
		case 938:
		case 939:
		case 940:
		case 941:
		case 942:
		case 943:
		case 944:
		case 945:
		case 946:
		case 947:
		case 948:
		case 949:
			return 1;
		default:
	}
	switch (iParam0)
	{
		case 1090:
		case 1091:
		case 1092:
		case 1093:
		case 1094:
		case 1095:
		case 1096:
		case 1097:
		case 1060:
		case 1061:
		case 1062:
		case 1063:
		case 1064:
		case 1065:
		case 1066:
		case 1067:
		case 1114:
		case 1115:
		case 1116:
		case 1117:
		case 1118:
		case 1119:
		case 1120:
		case 1121:
		case 1122:
		case 1123:
		case 1124:
		case 1125:
		case 1126:
		case 1127:
		case 1128:
		case 1129:
			return 1;
		default:
	}
	switch (iParam0)
	{
		case 1171:
		case 1172:
		case 1173:
		case 1174:
		case 1175:
		case 1176:
		case 1177:
		case 1178:
		case 1185:
		case 1186:
		case 1187:
		case 1188:
		case 1189:
		case 1190:
		case 1191:
		case 1192:
			return 1;
		default:
	}
	return 0;
}

int func_252(int iParam0)//Position - 0x360A9
{
	int iVar0;
	iVar0 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HAZ_HOOD"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HOOD_UP"), 0))
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0, bool bParam1)//Position - 0x360F0
{
	struct<4> Var0;
	bool bVar1;
	bVar1 = ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01");
	Var0.f_3 = -1;
	if (bVar1)
	{
		if (bParam1)
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var0);
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var0);
		}
	}
	else if (bParam1)
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var0);
	}
	else
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var0);
	}
	return Var0.f_3;
}

int func_254(int iParam0)//Position - 0x36153
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAZ_MASK")))
	{
		return 1;
	}
	return 0;
}

void func_255(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4F0F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<4> Var11;
	iVar0 = 0;
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iVar0, iParam1, iParam2);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("HELMET"), 1))
	{
		if (FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(iVar1) > 0)
		{
			iVar6 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(iVar1);
			iVar7 = 0;
			iVar2 = 0;
			while (iVar2 < iVar6)
			{
				FILES::GET_VARIANT_PROP(iVar1, iVar2, &iVar3, &uVar4, &uVar5);
				if (iVar3 != 0 && iVar3 != joaat("0"))
				{
					iVar7 = iVar3;
				}
				iVar2 = iVar6 + 1;
				iVar2++;
			}
			if (iVar7 != 0)
			{
				bVar8 = false;
				iVar9 = -1;
				iVar10 = -1;
				FILES::GET_SHOP_PED_PROP(iVar7, &Var11);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ALT_HELMET"), 1))
				{
					bVar8 = true;
					iVar9 = iParam1;
					iVar10 = Var11.f_3;
				}
				else
				{
					bVar8 = false;
					iVar9 = Var11.f_3;
					iVar10 = iParam1;
				}
				PED::SET_PED_HELMET_VISOR_PROP_INDICES(iParam0, bVar8, iVar9, iVar10);
				if (bParam3)
				{
					PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
					if (!PED::IS_PED_ON_ANY_BIKE(iParam0))
					{
						PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
					}
				}
				return;
			}
		}
		if (bParam3)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
			if (!PED::IS_PED_ON_ANY_BIKE(iParam0))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
			}
		}
	}
}

int func_256(int iParam0)//Position - 0x4FB61
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		case 8:
		case 9:
		case 10:
		case 11:
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
			return 2;
		case 34:
		case 35:
		case 36:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
			return 4;
		case 42:
		case 43:
		case 44:
		case 45:
			return 5;
		case 46:
		case 47:
		case 48:
		case 49:
			return 6;
		case 50:
			return 7;
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 8;
		case 60:
		case 61:
		case 62:
		case 63:
			return 9;
		case 64:
		case 65:
		case 66:
		case 67:
			return 10;
		case 68:
		case 69:
		case 70:
		case 71:
			return 11;
		case 72:
		case 73:
		case 74:
		case 75:
			return 12;
		case 76:
		case 77:
		case 78:
		case 79:
			return 13;
		case 80:
		case 81:
		case 82:
		case 83:
			return 14;
		case 84:
		case 85:
		case 86:
		case 87:
			return 15;
		case 88:
		case 89:
		case 90:
		case 91:
			return 16;
		case 92:
		case 93:
		case 94:
		case 95:
			return 17;
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 18;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
			return 19;
		case 114:
		case 115:
		case 116:
		case 117:
			return 20;
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
			return 21;
		case 124:
		case 125:
		case 126:
		case 127:
			return 22;
		case 128:
		case 129:
		case 130:
		case 131:
			return 23;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
			return 24;
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 25;
		case 144:
		case 145:
		case 146:
		case 147:
			return 26;
		case 148:
		case 149:
		case 150:
		case 151:
			return 27;
		case 152:
		case 153:
		case 154:
		case 155:
			return 28;
		case 156:
		case 157:
		case 158:
		case 159:
			return 29;
		case 160:
		case 161:
		case 162:
		case 163:
			return 30;
		default:
	}
	switch (iVar0)
	{
		case 164:
		case 165:
			return 31;
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
			return 32;
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
			return 33;
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
			return 34;
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
			return 35;
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
			return 36;
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			return 37;
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
			return 38;
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 39;
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
			return 40;
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
			return 41;
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
			return 42;
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
			return 43;
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
			return 44;
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
			return 45;
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
			return 46;
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
			return 47;
		case 286:
		case 287:
		case 288:
		case 289:
		case 290:
		case 291:
			return 48;
		case 292:
		case 293:
		case 294:
		case 295:
			return 49;
		case 296:
		case 297:
		case 298:
		case 299:
			return 50;
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 305:
		case 306:
		case 307:
			return 51;
		case 308:
		case 309:
		case 310:
		case 311:
		case 312:
		case 313:
		case 314:
		case 315:
			return 52;
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
			return 53;
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
			return 54;
		default:
	}
	return -1;
}

int func_257(var uParam0, var uParam1)//Position - 0x50541
{
	int iVar0;
	switch (uParam0->f_5)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if ((*uParam1)[iVar0] != -1)
				{
					PED::SET_PED_PRELOAD_VARIATION_DATA(*uParam0, iVar0, (*uParam1)[iVar0], uParam1->f_13[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam1->f_26)
			{
				if (uParam1->f_26[iVar0] != -1 && uParam1->f_26[iVar0] != 255)
				{
					PED::SET_PED_PRELOAD_PROP_DATA(*uParam0, iVar0, uParam1->f_26[iVar0], uParam1->f_36[iVar0]);
				}
				iVar0++;
			}
			uParam0->f_5 = 1;
			return 0;
			break;
		case 1:
			if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(*uParam0))
			{
				return 0;
			}
			if (!PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(*uParam0))
			{
				return 0;
			}
			uParam0->f_5 = 2;
			return 1;
			break;
		default:
			return 0;
			break;
	}
	return 0;
}

void func_258(int iParam0, bool bParam1, var uParam2, var uParam3)//Position - 0x586F1
{
	struct<5> Var0;
	switch (iParam0)
	{
		case 579:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_0"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_0"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 580:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 581:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_2"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_2"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 582:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 583:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_0"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_0"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 584:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 585:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_2"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_2"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 586:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 587:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_2"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_2"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 588:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_0"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_0"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 589:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_2"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_2"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		case 590:
			if (bParam1)
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_M_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_XMAS3_F_BERD_9_1"), &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
	}
}

int func_259(int iParam0)//Position - 0x58D07
{
	int iVar0;
	if (Global_4718592.f_168757 == 29)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9674[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_260()//Position - 0x72393
{
	Global_2653193 = { 0f, 0f, 0f };
	Global_2653196 = 0;
	Global_2653197 = 100f;
}

int func_261(int iParam0)//Position - 0x77E20
{
	if ((((iParam0 == 952 || iParam0 == 966) || iParam0 == 967) || iParam0 == 968) || iParam0 == 1107)
	{
		return 1;
	}
	return 0;
}

int func_262(int iParam0)//Position - 0x77E66
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 705 || iParam0 == 706) || iParam0 == 707) || iParam0 == 734) || iParam0 == 735) || iParam0 == 736) || iParam0 == 737) || iParam0 == 890) || iParam0 == 891) || iParam0 == 892) || iParam0 == 893) || iParam0 == 952) || iParam0 == 966) || iParam0 == 967) || iParam0 == 968) || iParam0 == 961) || iParam0 == 993) || iParam0 == 994) || iParam0 == 995) || iParam0 == 962) || iParam0 == 996) || iParam0 == 997) || iParam0 == 998) || iParam0 == 1071) || iParam0 == 1081) || iParam0 == 1082) || iParam0 == 1083) || iParam0 == 1106) || iParam0 == 1108) || iParam0 == 1109) || iParam0 == 1110) || iParam0 == 1107) || iParam0 == 1111) || iParam0 == 1112) || iParam0 == 1113) || iParam0 == 1090) || iParam0 == 1091) || iParam0 == 1092) || iParam0 == 1093) || iParam0 == 1094) || iParam0 == 1095) || iParam0 == 1096) || iParam0 == 1097) || iParam0 == 1114) || iParam0 == 1115) || iParam0 == 1116) || iParam0 == 1117) || iParam0 == 1118) || iParam0 == 1119) || iParam0 == 1120) || iParam0 == 1121) || iParam0 == 1171) || iParam0 == 1172) || iParam0 == 1173) || iParam0 == 1174) || iParam0 == 1175) || iParam0 == 1176) || iParam0 == 1177) || iParam0 == 1178) || iParam0 == 1185) || iParam0 == 1186) || iParam0 == 1187) || iParam0 == 1188) || iParam0 == 1189) || iParam0 == 1190) || iParam0 == 1191) || iParam0 == 1192)
	{
		return 0;
	}
	return 1;
}

int func_263(int iParam0)//Position - 0x781F9
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 5, joaat("DUFFEL_BAG")))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0, int iParam1)//Position - 0x789DD
{
	int iVar0;
	iVar0 = Global_1892703[iParam1 /*599*/].f_10.f_76.f_19;
	switch (iParam0)
	{
		case 1:
			return 598;
		case 2:
			return 599;
		case 3:
			return 600;
		case 4:
			return 601;
		case 0:
			return 0;
		case 5:
			return 602;
		case 6:
			return 603;
		case 7:
			return 604;
		case 8:
			return 605;
		case 9:
			return 606;
		case 10:
			return 607;
		case 11:
			return 608;
		case 12:
			return 609;
		default:
	}
	switch (iParam0)
	{
		case 13:
			return 610;
		case 14:
			return 611;
		case 15:
			return 612;
		case 16:
			return 613;
		case 17:
			return 614;
		case 18:
			return 615;
		case 19:
			return 616;
		case 20:
			return 617;
		case 21:
			return 618;
		case 22:
			return 619;
		case 23:
			return 620;
		case 24:
			return 621;
		default:
	}
	switch (iParam0)
	{
		case 25:
			return 951;
		case 26:
			return 952;
		case 33:
			return 959;
		case 34:
			return 960;
		case 31:
			return 957;
		case 32:
			return 958;
		case 35:
			return 961;
		case 36:
			return 962;
		case 27:
			return 953;
		case 28:
			return 954;
		case 29:
			return 955;
		case 30:
			return 956;
		default:
	}
	switch (iParam0)
	{
		case 37:
			return 1068;
		case 38:
			return 1069;
		case 39:
			return 1070;
		case 40:
			return 1071;
		case 41:
			return 1106;
		case 42:
			return 1107;
		default:
	}
	switch (iParam0)
	{
		case 43:
			return 1163;
		case 44:
			return 1164;
		default:
	}
	switch (iParam0)
	{
		case 45:
			switch (iVar0)
			{
				case 0:
					return 918;
				case 1:
					return 919;
				case 2:
					return 920;
				case 3:
					return 921;
				case 4:
					return 922;
				case 5:
					return 923;
				case 6:
					return 924;
				case 7:
					return 925;
				default:
			}
			break;
		case 46:
			switch (iVar0)
			{
				case 0:
					return 726;
				case 1:
					return 727;
				case 2:
					return 728;
				case 3:
					return 729;
				case 4:
					return 882;
				case 5:
					return 883;
				case 6:
					return 884;
				case 7:
					return 885;
				default:
			}
			break;
		case 47:
			switch (iVar0)
			{
				case 0:
					return 730;
				case 1:
					return 731;
				case 2:
					return 732;
				case 3:
					return 733;
				case 4:
					return 886;
				case 5:
					return 887;
				case 6:
					return 888;
				case 7:
					return 889;
				default:
			}
			break;
		case 48:
			switch (iVar0)
			{
				case 0:
					return 714;
				case 1:
					return 715;
				case 2:
					return 716;
				case 3:
					return 717;
				case 4:
					return 870;
				case 5:
					return 871;
				case 6:
					return 872;
				case 7:
					return 873;
				default:
			}
			break;
		case 49:
			switch (iVar0)
			{
				case 0:
					return 718;
				case 1:
					return 719;
				case 2:
					return 720;
				case 3:
					return 721;
				case 4:
					return 874;
				case 5:
					return 875;
				case 6:
					return 876;
				case 7:
					return 877;
				default:
			}
			break;
		case 50:
			switch (iVar0)
			{
				case 0:
					return 722;
				case 1:
					return 723;
				case 2:
					return 724;
				case 3:
					return 725;
				case 4:
					return 878;
				case 5:
					return 879;
				case 6:
					return 880;
				case 7:
					return 881;
				default:
			}
			break;
		case 51:
			switch (iVar0)
			{
				case 0:
					return 734;
				case 1:
					return 735;
				case 2:
					return 736;
				case 3:
					return 737;
				case 4:
					return 890;
				case 5:
					return 891;
				case 6:
					return 892;
				case 7:
					return 893;
				default:
			}
			break;
		case 52:
			switch (iVar0)
			{
				case 0:
					return 738;
				case 1:
					return 739;
				case 2:
					return 740;
				case 3:
					return 741;
				case 4:
					return 894;
				case 5:
					return 895;
				case 6:
					return 896;
				case 7:
					return 897;
				default:
			}
			break;
		case 53:
			switch (iVar0)
			{
				case 0:
					return 926;
				case 1:
					return 927;
				case 2:
					return 928;
				case 3:
					return 929;
				case 4:
					return 930;
				case 5:
					return 931;
				case 6:
					return 932;
				case 7:
					return 933;
				default:
			}
			break;
		case 54:
			switch (iVar0)
			{
				case 0:
					return 934;
				case 1:
					return 935;
				case 2:
					return 936;
				case 3:
					return 937;
				case 4:
					return 938;
				case 5:
					return 939;
				case 6:
					return 940;
				case 7:
					return 941;
				default:
			}
			break;
		case 55:
			switch (iVar0)
			{
				case 0:
					return 942;
				case 1:
					return 943;
				case 2:
					return 944;
				case 3:
					return 945;
				case 4:
					return 946;
				case 5:
					return 947;
				case 6:
					return 948;
				case 7:
					return 949;
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 56:
			switch (iVar0)
			{
				case 0:
					return 1090;
				case 1:
					return 1091;
				case 2:
					return 1092;
				case 3:
					return 1093;
				case 4:
					return 1094;
				case 5:
					return 1095;
				case 6:
					return 1096;
				case 7:
					return 1097;
				default:
			}
			break;
		case 57:
			switch (iVar0)
			{
				case 0:
					return 1060;
				case 1:
					return 1061;
				case 2:
					return 1062;
				case 3:
					return 1063;
				case 4:
					return 1064;
				case 5:
					return 1065;
				case 6:
					return 1066;
				case 7:
					return 1067;
				default:
			}
			break;
		case 58:
			switch (iVar0)
			{
				case 0:
					return 1114;
				case 1:
					return 1115;
				case 2:
					return 1116;
				case 3:
					return 1117;
				case 4:
					return 1118;
				case 5:
					return 1119;
				case 6:
					return 1120;
				case 7:
					return 1121;
				default:
			}
			break;
		case 59:
			switch (iVar0)
			{
				case 0:
					return 1122;
				case 1:
					return 1123;
				case 2:
					return 1124;
				case 3:
					return 1125;
				case 4:
					return 1126;
				case 5:
					return 1127;
				case 6:
					return 1128;
				case 7:
					return 1129;
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 60:
			switch (iVar0)
			{
				case 0:
					return 1171;
				case 1:
					return 1172;
				case 2:
					return 1173;
				case 3:
					return 1174;
				case 4:
					return 1175;
				case 5:
					return 1176;
				case 6:
					return 1177;
				case 7:
					return 1178;
				default:
			}
			break;
		case 61:
			switch (iVar0)
			{
				case 0:
					return 1185;
				case 1:
					return 1186;
				case 2:
					return 1187;
				case 3:
					return 1188;
				case 4:
					return 1189;
				case 5:
					return 1190;
				case 6:
					return 1191;
				case 7:
					return 1192;
				default:
			}
			break;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0x79B14
{
	int iVar0;
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != __LIB_0__.func_160() && Global_1892703[iVar0 /*599*/].f_10.f_428 == 1)
	{
		return 8;
	}
	return 4;
}

int func_266(int iParam0)//Position - 0x7C92B
{
	var uVar0;
	uVar0 = __LIB_1__.func_556(2537, -1, 0);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

bool func_267(bool bParam0)//Position - 0x81E23
{
	return __LIB_0__.func_163(bParam0, 19);
}

int func_268(bool bParam0)//Position - 0x81E33
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return __LIB_0__.func_163(bParam0, 9);
	}
	return 0;
}

void func_269(struct<3> Param0, int iParam1)//Position - 0x83CF4
{
	Global_2653193 = { Param0 };
	Global_2653196 = 1;
	Global_2653197 = iParam1;
}

int func_270(int iParam0)//Position - 0xBE1EA
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_480.f_1, 23))
		{
			return 1;
		}
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return __LIB_1__.func_556(10286, -1, 0) != 0;
		}
	}
	return 0;
}

bool func_271()//Position - 0xBE257
{
	return __LIB_1__.func_556(7863, -1, 0) != 0;
}

bool func_272()//Position - 0xBE7EC
{
	return __LIB_1__.func_556(6167, -1, 0) == 1;
}

bool func_273()//Position - 0xBE7FF
{
	return __LIB_1__.func_556(6167, -1, 0) != 0;
}

bool func_274()//Position - 0xBE834
{
	return (__LIB_1__.func_556(6109, -1, 0) == 1 || __LIB_1__.func_556(6109, -1, 0) == 2);
}

bool func_275(int iParam0)//Position - 0xC54C7
{
	return __LIB_1__.func_556(9517, iParam0, 0) != 0;
}

bool func_276(int iParam0)//Position - 0xC54DB
{
	if (!Global_262145.f_24199 /* Tunable: ENABLE_TERBYTE */)
	{
		return 0;
	}
	return __LIB_1__.func_556(7210, iParam0, 0) != 0;
}

int func_277(int iParam0)//Position - 0xC90F1
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		case 141:
			if (__LIB_1__.func_471(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_278(int iParam0, int iParam1)//Position - 0xCA63B
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_1__.func_184(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_43792[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_43792[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_43792[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_43987);
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_43792[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_43987);
		if (Global_43792[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_43792[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_43792[iVar0 /*32*/].f_13));
		}
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return bVar1;
}

bool func_279()//Position - 0xCC190
{
	return Global_1573860[0 /*4*/] > 0;
}

int func_280(int iParam0)//Position - 0xD2BD1
{
	if (Global_1835502.f_4[iParam0 /*3*/] == 1)
	{
		return 1;
	}
	return 0;
}

void func_281(int iParam0, int iParam1)//Position - 0xD307B
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(iParam0, __LIB_1__.func_443(iParam1), 0);
	iVar0++;
	if (!__LIB_0__.func_692(iParam0))
	{
		__LIB_1__.func_597(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		__LIB_1__.func_603(iParam0, iVar0, iParam1, 1);
	}
}

int func_282()//Position - 0xD33CE
{
	if (__LIB_0__.func_491() == 1 || __LIB_0__.func_491() == 4)
	{
		return 1;
	}
	return 0;
}

int func_283()//Position - 0xD33F0
{
	if (__LIB_0__.func_491() == 3 || __LIB_0__.func_491() == 2)
	{
		return 1;
	}
	return 0;
}

var func_284()//Position - 0x3CD6
{
	return Global_2656955;
}

bool func_285(int iParam0)//Position - 0x63EA
{
	bool bVar0;
	switch (iParam0)
	{
		case 39:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[39]);
			break;
		case 40:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[40]);
			break;
		case 41:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[41]);
			break;
		case 42:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[42]);
			break;
		case 43:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[43]);
			break;
		case 44:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_100493.f_255[44]);
			break;
	}
	return bVar0;
}

int func_286(int iParam0)//Position - 0xBF59
{
	if (Global_2689235[iParam0 /*453*/].f_216 == 0)
	{
		return 0;
	}
	return 1;
}

char* func_287(char* sParam0, bool bParam1, int iParam2)//Position - 0xDBC3
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	__LIB_2__.func_119(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_288(struct<3> Param0, char* sParam1, char* sParam2)//Position - 0xF3BB
{
	int iVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam1))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2815059.f_4033[iVar0 /*26*/].f_4)))
				{
					Global_2815059.f_4033[iVar0 /*26*/] = 1;
					Global_2815059.f_4033[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!__LIB_0__.func_78(Global_2815059.f_4033[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2815059.f_4033[iVar0 /*26*/] = 1;
				Global_2815059.f_4033[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_289(int iParam0)//Position - 0x10E4F
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 22;
			}
		}
	}
	return 0;
}

bool func_290(int iParam0)//Position - 0x10E96
{
	return DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_291(int iParam0, bool bParam1)//Position - 0x10F7F
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "TestDrive"))
				{
					return DECORATOR::DECOR_GET_BOOL(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

int func_292(int iParam0)//Position - 0x1632F
{
	if ((Global_113386.f_14141[iParam0 /*104*/].f_99[0] == 1 || Global_113386.f_14141[iParam0 /*104*/].f_99[1] == 1) || Global_113386.f_14141[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

int func_293()//Position - 0x2283
{
	if (CLOCK::GET_CLOCK_HOURS() >= 22)
	{
		return 1;
	}
	if (CLOCK::GET_CLOCK_HOURS() <= 6 && CLOCK::GET_CLOCK_HOURS() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_294()//Position - 0x149E
{
	return Local_61.f_0;
}

void func_295(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xCE90
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__.func_667(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__.func_666(4, iVar0);
		Global_1649593.f_3347[iVar0] = iParam0;
		Global_1649593.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3347.f_183[iVar0] = iParam3;
		Global_1649593.f_3347.f_216[iVar0] = iParam5;
		Global_1649593.f_3347.f_194[iVar0] = iParam4;
		Global_1649593.f_3347.f_227[iVar0] = iParam6;
		Global_1649593.f_3347.f_270[iVar0] = iParam7;
		Global_1649593.f_3347.f_281[iVar0] = iParam8;
		Global_1649593.f_3347.f_292[iVar0] = iParam9;
		Global_1649593.f_3347.f_303[iVar0] = iParam10;
		Global_1649593.f_3347.f_314[iVar0] = iParam11;
		Global_1649593.f_3347.f_325[iVar0] = iParam13;
		Global_1649593.f_3347.f_336[iVar0] = iParam14;
		Global_1649593.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1649593.f_1172 = 1;
		}
	}
}

bool func_296(int iParam0)//Position - 0xE90F
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 2);
}

int func_297(int iParam0)//Position - 0x10E14
{
	if (__LIB_1__.func_182(iParam0) == 236 || __LIB_1__.func_182(iParam0) == 150)
	{
		return __LIB_2__.func_193(iParam0);
	}
	return 0;
}

int func_298(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)//Position - 0x15163
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

void func_299(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x19BC4
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_300(int iParam0, int iParam1)//Position - 0x1CA6D
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__.func_5();
	}
	iVar0 = __LIB_1__.func_33(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

bool func_301(char* sParam0, char* sParam1, int iParam2)//Position - 0x1CB7F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_302(int iParam0)//Position - 0x212BE
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		case 141:
			if (__LIB_0__.func_740(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_303(int iParam0, int iParam1)//Position - 0x21B4A
{
	if (Global_1892703[iParam0 /*599*/] == iParam1)
	{
		return __LIB_0__.func_740(iParam0);
	}
	return 0;
}

void func_304(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x21F54
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_305(int iParam0)//Position - 0x25DEB
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(2537, -1, 0);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!BitTest(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!BitTest(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	__LIB_1__.func_597(2537, iVar0, -1, 1, 0);
}

int func_306(int iParam0)//Position - 0x2740F
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		case 146:
			if (__LIB_0__.func_740(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_307(struct<3> Param0, var uParam1, var uParam2)//Position - 0x321B
{
	if (!Global_2667225.f_1753)
	{
	}
	if (Global_2667225.f_714 < 100)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2667225.f_714.f_1[Global_2667225.f_714 /*5*/] = { Param0 };
		Global_2667225.f_714.f_1[Global_2667225.f_714 /*5*/].f_3 = uParam1;
		Global_2667225.f_714.f_1[Global_2667225.f_714 /*5*/].f_4 = uParam2;
		Global_2667225.f_714++;
	}
}

bool func_308(bool bParam0)//Position - 0x8F8F
{
	return __LIB_1__.func_424(bParam0, 20);
}

int func_309(int iParam0, int iParam1)//Position - 0xBD01
{
	int iVar0;
	iVar0 = __LIB_2__.func_191(iParam0);
	if (!iVar0 == __LIB_0__.func_160())
	{
		if (iVar0 == __LIB_2__.func_191(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_310(bool bParam0, int iParam1)//Position - 0xE373
{
	if (Global_1892703[bParam0 /*599*/] == iParam1)
	{
		return __LIB_1__.func_471(bParam0);
	}
	return 0;
}

void func_311()//Position - 0x15A41
{
	if (iLocal_645 >= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iLocal_645 = 0;
	}
}

void func_312()//Position - 0x15A59
{
	if (iLocal_645 == 0)
	{
	}
}

int func_313(var uParam0)//Position - 0x16364
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_314(bool bParam0, bool bParam1)//Position - 0x1645D
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2678393.f_368), bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2678393.f_368), bParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2678393[bParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2678393[bParam0], true);
		}
	}
}

void func_315()//Position - 0x16513
{
	Global_2678393.f_1651 = 1;
}

int func_316(int iParam0, var uParam1)//Position - 0x1A14F
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*iParam0, *uParam1));
}

void func_317(int iParam0, int iParam1)//Position - 0x10B0
{
	struct<3> Var0;
	Var0.f_0 = 2144233578;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_318(int iParam0, var uParam1)//Position - 0x25AC
{
	switch (iParam0)
	{
		case 0:
			return 1;
		default:
	}
	return 0;
}

bool func_319(var uParam0, int iParam1)//Position - 0x2B29
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

float func_320(float fParam0, float fParam1)//Position - 0x4ECA
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_321(int iParam0)//Position - 0x6839
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
		case 12:
			return 13;
			break;
		case 13:
			return 14;
			break;
		case 14:
			return 15;
			break;
		case 15:
			return 16;
			break;
		case 16:
			return 17;
			break;
		case 17:
			return 18;
			break;
		case 18:
			return 19;
			break;
		case 19:
			return 20;
			break;
		case 20:
			return 21;
			break;
		case 21:
			return 22;
			break;
	}
	return 0;
}

int func_322(int iParam0)//Position - 0x6976
{
	switch (iParam0)
	{
		case 882:
			return 145;
			break;
		case 757:
			return 147;
			break;
		case 756:
			return 146;
			break;
		case 765:
			return 149;
			break;
		case 766:
			return 150;
			break;
		case 767:
			return 151;
			break;
		case 768:
			return 152;
			break;
		case 769:
			return 153;
			break;
		case 795:
			return 155;
			break;
		case 797:
			return 156;
			break;
		case 799:
			return 157;
			break;
		case 801:
			return 158;
			break;
		case 796:
			return 155;
			break;
		case 798:
			return 156;
			break;
		case 800:
			return 157;
			break;
		case 802:
			return 158;
			break;
		case 845:
			return 0;
			break;
		case 846:
			return 1;
			break;
		case 847:
			return 2;
			break;
		case 848:
			return 3;
			break;
		case 849:
			return 4;
			break;
		case 850:
			return 5;
			break;
		case 851:
			return 6;
			break;
		case 852:
			return 7;
			break;
		case 853:
			return 8;
			break;
		case 854:
			return 9;
			break;
		case 855:
			return 10;
			break;
		case 856:
			return 11;
			break;
		case 857:
			return 12;
			break;
		case 858:
			return 13;
			break;
		case 859:
			return 14;
			break;
		case 860:
			return 15;
			break;
		case 861:
			return 16;
			break;
		case 862:
			return 17;
			break;
		case 863:
			return 18;
			break;
		case 864:
			return 19;
			break;
		case 865:
			return 20;
			break;
		case 866:
			return 21;
			break;
	}
	return -1;
}

int func_323(int iParam0)//Position - 0xFEF0
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 1;
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
			return 1;
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
		default:
	}
	return 0;
}

int func_324()//Position - 0x11D64
{
	switch (Global_2666788)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
			return 0;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		default:
	}
	return 0;
}

int func_325()//Position - 0x12796
{
	return Global_1973186;
}

int func_326()//Position - 0x205
{
	if (BitTest(Local_83.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_327()//Position - 0x21B
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

int func_328(var uParam0, int iParam1)//Position - 0x5674
{
	int iVar0;
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_329(int iParam0)//Position - 0x6DE3
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_330(int iParam0)//Position - 0x6E2A
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 24;
			}
		}
	}
	return 0;
}

int func_331(int iParam0)//Position - 0x6F46
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 17;
			}
		}
	}
	return 0;
}

var func_332()//Position - 0x7014
{
	return Global_1943927;
}

void func_333()//Position - 0x73CA
{
	Global_2703735.f_833.f_9 = 0;
}

bool func_334()//Position - 0x73DC
{
	return Global_2703735.f_833.f_9;
}

int func_335(int iParam0, struct<3> Param1)//Position - 0x1338
{
	struct<3> Var0;
	var uVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar1, false, false))
	{
		Var0.f_2 = uVar1;
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, Var0 + Vector(1f, 0f, 0f), false, false, true);
		return 1;
	}
	return 0;
}

int func_336(float fParam0, float fParam1, float fParam2)//Position - 0x266
{
	float fVar0;
	float fVar1;
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_337(int iParam0, int iParam1)//Position - 0x2B3F
{
	if (iParam0 == 10)
	{
		if (iParam1 >= 0 && iParam1 <= 8)
		{
			return 1;
		}
		else if (Global_78319)
		{
			if (iParam1 >= 14 && iParam1 < 184)
			{
				return 1;
			}
		}
		else if (!Global_78319)
		{
			if (iParam1 >= 14 && iParam1 < 184)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (iParam1 >= 0 && iParam1 <= 30)
		{
			return 1;
		}
		else if ((Global_78319 && iParam1 >= 35) && iParam1 < 247)
		{
			return 1;
		}
		else if ((!Global_78319 && iParam1 >= 35) && iParam1 < 247)
		{
			return 1;
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam1 >= 0 && iParam1 <= 5)
		{
			return 1;
		}
		else if (iParam1 >= 12 && iParam1 < 37)
		{
			return 1;
		}
	}
	else if (iParam0 == 12)
	{
		if ((((iParam1 == 0 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 7)
		{
			return 1;
		}
		else if (Global_78319)
		{
			if ((((iParam1 == 14 || iParam1 == 15) || iParam1 == 17) || iParam1 == 18) || (iParam1 >= 21 && iParam1 < 157))
			{
				if ((iParam1 == 57 || iParam1 == 58) || iParam1 == 59)
				{
					return 0;
				}
				if ((iParam1 == 85 || iParam1 == 86) || iParam1 == 87)
				{
					return 0;
				}
				if ((iParam1 == 105 || iParam1 == 106) || iParam1 == 107)
				{
					return 0;
				}
				if ((iParam1 == 142 || iParam1 == 143) || iParam1 == 144)
				{
					return 0;
				}
				return 1;
			}
		}
		else if (!Global_78319)
		{
			if ((((iParam1 == 14 || iParam1 == 15) || iParam1 == 17) || iParam1 == 18) || (iParam1 >= 21 && iParam1 < 157))
			{
				if ((iParam1 == 57 || iParam1 == 58) || iParam1 == 59)
				{
					return 0;
				}
				if ((iParam1 == 85 || iParam1 == 86) || iParam1 == 87)
				{
					return 0;
				}
				if ((iParam1 == 105 || iParam1 == 106) || iParam1 == 107)
				{
					return 0;
				}
				if ((iParam1 == 142 || iParam1 == 143) || iParam1 == 144)
				{
					return 0;
				}
				return 1;
			}
		}
	}
	else if (iParam0 == 13)
	{
		if ((((iParam1 >= 0 && iParam1 <= 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 14)
		{
			return 1;
		}
		else if (iParam1 >= 16 && iParam1 < 28)
		{
			if ((iParam1 == 23 || iParam1 == 24) || iParam1 == 25)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == 15)
	{
		if (iParam1 >= 0 && iParam1 <= 5)
		{
			return 1;
		}
	}
	else if (iParam0 == 26)
	{
		if (iParam1 == 10)
		{
			return 0;
		}
		if (iParam1 >= 0 && iParam1 < 32)
		{
			return 1;
		}
		if (iParam1 >= 12 && iParam1 <= 44)
		{
			return 1;
		}
	}
	else if (iParam0 == 29)
	{
		if (Global_78319)
		{
			return 1;
		}
	}
	return 0;
}

int func_338()//Position - 0xBF5A
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
		{
			return 1;
		}
	}
	return 0;
}

int func_339(int iParam0)//Position - 0xE8A7
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

var func_340(var uParam0)//Position - 0xEA78
{
	return uParam0->f_11;
}

void func_341(int iParam0)//Position - 0x19971
{
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_2 = iParam0;
}

int func_342(int iParam0, int iParam1)//Position - 0x1A936
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_343(int iParam0)//Position - 0x1B235
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 1;
			break;
	}
	return 0;
}

int func_344(int iParam0)//Position - 0x1BEBA
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 25);
	}
	return 0;
}

int func_345()//Position - 0x1E732
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_1__.func_375(iVar0) != 2147483647)
		{
			if (__LIB_0__.func_676(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_346(int iParam0)//Position - 0x2619A
{
	switch (iParam0)
	{
		case joaat("CATEGORY_INVENTORY_ITEM"):
		case joaat("CATEGORY_INVENTORY_VEHICLE"):
		case joaat("CATEGORY_INVENTORY_VEHICLE_MOD"):
		case joaat("CATEGORY_INVENTORY_PROPERTIE"):
		case joaat("CATEGORY_INVENTORY_BEARD"):
		case joaat("CATEGORY_INVENTORY_MKUP"):
		case joaat("CATEGORY_INVENTORY_HAIR"):
		case joaat("CATEGORY_INVENTORY_EYEBROWS"):
		case joaat("CATEGORY_INVENTORY_CHEST_HAIR"):
		case joaat("CATEGORY_INVENTORY_CONTACTS"):
		case joaat("CATEGORY_INVENTORY_FACEPAINT"):
		case joaat("CATEGORY_INVENTORY_BLUSHER"):
		case joaat("CATEGORY_INVENTORY_LIPSTICK"):
		case joaat("CATEGORY_INVENTORY_PROPERTY_INTERIOR"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE"):
		case joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_QNTY"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE_INTERIOR"):
		case joaat("CATEGORY_WAREHOUSE_VEHICLE_INDEX"):
			return 1;
			break;
	}
	return 0;
}

int func_347()//Position - 0x2763C
{
	switch (NETWORK::GET_USER_STARTER_ACCESS())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

int func_348()//Position - 0x2766A
{
	switch (NETWORK::GET_USER_PREMIUM_ACCESS())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

int func_349(int iParam0)//Position - 0x50B96
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("ardent"):
		case joaat("nightshark"):
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("comet4"):
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("viseris"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
		case joaat("caracara"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("scramjet"):
		case joaat("oppressor2"):
		case joaat("menacer"):
		case joaat("paragon2"):
			return 1;
			break;
		default:
			if (Global_2787862 != 0)
			{
				if (Global_2787862 == iParam0)
				{
					return 1;
				}
			}
			if (__LIB_1__.func_323(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_350()//Position - 0x5D68F
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
	{
		return 1;
	}
	return 0;
}

int func_351()//Position - 0x5D928
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
	{
		return 1;
	}
	return 0;
}

int func_352(int iParam0, int iParam1)//Position - 0x6232A
{
	int iVar0;
	iVar0 = __LIB_0__.func_228(__LIB_1__.func_370(iParam0), iParam1);
	iVar0 = (iVar0 + __LIB_0__.func_228(__LIB_1__.func_369(iParam0), iParam1));
	return iVar0;
}

void func_353(char* sParam0)//Position - 0x62353
{
	if (Global_23150.f_5156 >= 3 || Global_23150.f_5153 >= 4)
	{
		return;
	}
	Global_23150.f_5087[Global_23150.f_5153] = 1;
	Global_23150.f_5153++;
	StringCopy(&(Global_23150.f_5104[Global_23150.f_5156 /*16*/]), sParam0, 64);
	Global_23150.f_5156++;
}

int func_354(int iParam0)//Position - 0x63B1D
{
	switch (iParam0)
	{
		case joaat("faction3"):
		case joaat("contender"):
			return 0;
			break;
	}
	return 1;
}

int func_355(int iParam0, var uParam1, int iParam2)//Position - 0x63B40
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!BitTest(uParam1, 1) && !BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if ((!BitTest(uParam1, 1) && !BitTest(uParam1, 2)) && !BitTest(uParam1, 3))
			{
				return 1;
			}
			break;
		case joaat("coquette"):
			if (!BitTest(uParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		case joaat("mamba"):
			if (!BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		case joaat("pfister811"):
			if (!BitTest(uParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		case joaat("contender"):
		case joaat("kamacho"):
			if (!BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
		case joaat("manana2"):
			if (BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_356(var uParam0)//Position - 0x63C84
{
	switch (uParam0->f_66)
	{
		case joaat("windsor"):
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0x63E10
{
	return (1000 + iParam0);
}

char* func_358(int iParam0)//Position - 0x63E1E
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK" /* GXT: Mobile Operations Center */;
		case 2:
			return "MP_BHUB_CLUBT" /* GXT: Terrorbyte */;
		case 1:
			return "MP_BHUB_GAR0" /* GXT: Nightclub Garage B1 */;
		case 3:
			return "MP_BHUB_SUB" /* GXT: Kosatka */;
		default:
	}
	return "";
}

char* func_359(int iParam0)//Position - 0x64022
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0" /* GXT: Arena Workshop */;
			break;
		case 2:
			return "ARENA_GAR_F1" /* GXT: Arena Workshop B1 */;
			break;
		case 3:
			return "ARENA_GAR_F2" /* GXT: Arena Workshop B2 */;
			break;
	}
	return "";
}

char* func_360(int iParam0)//Position - 0x64064
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1" /* GXT: Nightclub Garage B2 */;
			break;
		case 2:
			return "MP_BHUB_GAR2" /* GXT: Nightclub Garage B3 */;
			break;
		case 3:
			return "MP_BHUB_GAR3" /* GXT: Nightclub Garage B4 */;
			break;
	}
	return "";
}

char* func_361(int iParam0)//Position - 0x640A6
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1" /* GXT: Grand Senora Desert Facility */;
			break;
		case 2:
			return "MP_DBASE_2" /* GXT: Route 68 Facility */;
			break;
		case 3:
			return "MP_DBASE_3" /* GXT: Sandy Shores Facility */;
			break;
		case 4:
			return "MP_DBASE_4" /* GXT: Mount Gordo Facility */;
			break;
		case 5:
			return "MP_DBASE_6" /* GXT: Paleto Bay Facility */;
			break;
		case 6:
			return "MP_DBASE_7" /* GXT: Lago Zancudo Facility */;
			break;
		case 7:
			return "MP_DBASE_8" /* GXT: Zancudo River Facility */;
			break;
		case 8:
			return "MP_DBASE_9" /* GXT: Ron Alternates Wind Farm Facility */;
			break;
		case 9:
			return "MP_DBASE_10" /* GXT: Land Act Reservoir Facility */;
			break;
	}
	return "";
}

char* func_362(int iParam0)//Position - 0x6416C
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1" /* GXT: LSIA Hangar 1 */;
			break;
		case 2:
			return "MP_HANGAR_2" /* GXT: LSIA Hangar A17 */;
			break;
		case 3:
			return "MP_HANGAR_3" /* GXT: Fort Zancudo Hangar A2 */;
			break;
		case 4:
			return "MP_HANGAR_4" /* GXT: Fort Zancudo Hangar 3497 */;
			break;
		case 5:
			return "MP_HANGAR_5" /* GXT: Fort Zancudo Hangar 3499 */;
			break;
	}
	return "";
}

int func_363(int iParam0)//Position - 0x65E20
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

Vector3 func_364()//Position - 0x70F5D
{
	return 0f, 0f, 0f;
}

float func_365(float fParam0)//Position - 0x711CC
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

int func_366(int iParam0, int iParam1, int iParam2)//Position - 0x72BAA
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4539961 == -3)
		{
			if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/) || (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_367(int iParam0, int iParam1, int iParam2)//Position - 0x72C0F
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4539961 == -2)
		{
			if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) || (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_368()//Position - 0x72D8A
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

bool func_369()//Position - 0x739AC
{
	return Global_1946250.f_504 != -1;
}

int func_370(int iParam0, bool bParam1)//Position - 0x636A
{
	if (bParam1)
	{
	}
	return __LIB_1__.func_555(iParam0);
}

int func_371()//Position - 0x7DF3
{
	if (Global_22621)
	{
		return 1;
	}
	return 0;
}

bool func_372()//Position - 0xA8C0
{
	return __LIB_2__.func_136();
}

bool func_373()//Position - 0xB629
{
	return Global_1836578;
}

int func_374()//Position - 0xBD0F
{
	return Local_83.f_1;
}

bool func_375(int iParam0, int iParam1)//Position - 0xA18C
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		case 1:
			*iParam1 = 5;
			break;
		case 2:
			*iParam1 = 6;
			break;
		case 3:
			*iParam1 = 7;
			break;
		case 4:
			*iParam1 = 111;
			break;
		case 5:
			*iParam1 = 112;
			break;
		case 6:
			*iParam1 = 107;
			break;
		case 7:
			*iParam1 = 104;
			break;
		case 8:
			*iParam1 = 98;
			break;
		case 9:
			*iParam1 = 100;
			break;
		case 10:
			*iParam1 = 102;
			break;
		case 11:
			*iParam1 = 99;
			break;
		case 12:
			*iParam1 = 105;
			break;
		case 13:
			*iParam1 = 106;
			break;
		case 14:
			*iParam1 = 37;
			break;
		case 15:
			*iParam1 = 90;
			break;
		case 16:
			*iParam1 = 88;
			break;
		case 17:
			*iParam1 = 89;
			break;
		case 18:
			*iParam1 = 91;
			break;
		case 19:
			*iParam1 = 38;
			break;
		case 20:
			*iParam1 = 138;
			break;
		case 21:
			*iParam1 = 36;
			break;
		case 22:
			*iParam1 = 27;
			break;
		case 23:
			*iParam1 = 28;
			break;
		case 24:
			*iParam1 = 29;
			break;
		case 25:
			*iParam1 = 150;
			break;
		case 26:
			*iParam1 = 30;
			break;
		case 27:
			*iParam1 = 31;
			break;
		case 28:
			*iParam1 = 32;
			break;
		case 29:
			*iParam1 = 35;
			break;
		case 30:
			*iParam1 = 135;
			break;
		case 31:
			*iParam1 = 137;
			break;
		case 32:
			*iParam1 = 136;
			break;
		case 33:
			*iParam1 = 71;
			break;
		case 34:
			*iParam1 = 145;
			break;
		case 35:
			*iParam1 = 63;
			break;
		case 36:
			*iParam1 = 64;
			break;
		case 37:
			*iParam1 = 65;
			break;
		case 38:
			*iParam1 = 66;
			break;
		case 39:
			*iParam1 = 67;
			break;
		case 40:
			*iParam1 = 68;
			break;
		case 41:
			*iParam1 = 69;
			break;
		case 42:
			*iParam1 = 73;
			break;
		case 43:
			*iParam1 = 70;
			break;
		case 44:
			*iParam1 = 74;
			break;
		case 45:
			*iParam1 = 51;
			break;
		case 46:
			*iParam1 = 53;
			break;
		case 47:
			*iParam1 = 54;
			break;
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_376(int iParam0)//Position - 0xF416
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1, 2);
	}
	return 0;
}

int func_377(bool bParam0, int iParam1)//Position - 0x22379
{
	if (__LIB_2__.func_192(bParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1892703[bParam0 /*599*/].f_10.f_11[iParam1];
		}
	}
	return __LIB_0__.func_160();
}

int func_378(int iParam0, int iParam1)//Position - 0x43979
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_7, 0);
			break;
		case 1:
			return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_7, 1);
			break;
		case 4:
			return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_7, 2);
			break;
		case 2:
			return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_7, 3);
			break;
		case 3:
			return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_7, 4);
			break;
		case 5:
			return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_295.f_7, 5);
			break;
	}
	return 0;
}

bool func_379()//Position - 0x43ACF
{
	return Global_2815059.f_6758;
}

bool func_380()//Position - 0x43ADE
{
	return Global_2815059.f_6757;
}

bool func_381()//Position - 0x43B75
{
	return BitTest(Global_1946250, 6);
}

bool func_382()//Position - 0x43B83
{
	return BitTest(Global_1946250, 22);
}

void func_383(bool bParam0)//Position - 0x447AE
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_1964720, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1964720, 0);
	}
}

int func_384(int iParam0, bool bParam1)//Position - 0x4488A
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Company_SUV" /* GXT: Company SUV */))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_385(int iParam0)//Position - 0x44904
{
	Global_2703735.f_61.f_17 = iParam0;
}

int func_386(var uParam0)//Position - 0x44B17
{
	return 3;
}

int func_387(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x44B20
{
	switch (iParam0)
	{
		case 155:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 386.7567f, -82.8658f, 56.5481f };
					*uParam3 = 234.36f;
					break;
				case 1:
					*uParam2 = { 385.5914f, -84.4912f, 56.3455f };
					*uParam3 = 234.36f;
					break;
				case 2:
					*uParam2 = { 387.9221f, -81.2404f, 56.7203f };
					*uParam3 = 234.36f;
					break;
				case 3:
					*uParam2 = { 384.426f, -86.1166f, 56.6214f };
					*uParam3 = 234.36f;
					break;
				case 4:
					*uParam2 = { 389.0875f, -79.615f, 56.766f };
					*uParam3 = 234.36f;
					break;
				case 5:
					*uParam2 = { 388.3821f, -84.0312f, 56.563f };
					*uParam3 = 234.36f;
					break;
				case 6:
					*uParam2 = { 387.2168f, -85.6565f, 56.3148f };
					*uParam3 = 234.36f;
					break;
				case 7:
					*uParam2 = { 389.5475f, -82.4058f, 56.7553f };
					*uParam3 = 234.36f;
					break;
				case 8:
					*uParam2 = { 386.0514f, -87.2819f, 56.5587f };
					*uParam3 = 234.36f;
					break;
				case 9:
					*uParam2 = { 390.7129f, -80.7804f, 56.8973f };
					*uParam3 = 234.36f;
					break;
				case 10:
					*uParam2 = { 390.0075f, -85.1965f, 56.5443f };
					*uParam3 = 234.36f;
					break;
				case 11:
					*uParam2 = { 388.8422f, -86.8219f, 56.3265f };
					*uParam3 = 234.36f;
					break;
				case 12:
					*uParam2 = { 391.1729f, -83.5712f, 56.7465f };
					*uParam3 = 234.36f;
					break;
				case 13:
					*uParam2 = { 387.6768f, -88.4473f, 56.5014f };
					*uParam3 = 234.36f;
					break;
				case 14:
					*uParam2 = { 392.3383f, -81.9458f, 56.9399f };
					*uParam3 = 234.36f;
					break;
				case 15:
					*uParam2 = { 391.6329f, -86.3619f, 56.5104f };
					*uParam3 = 234.36f;
					break;
				case 16:
					*uParam2 = { 390.4676f, -87.9873f, 56.2491f };
					*uParam3 = 234.36f;
					break;
				case 17:
					*uParam2 = { 392.7983f, -84.7365f, 56.7377f };
					*uParam3 = 234.36f;
					break;
				case 18:
					*uParam2 = { 389.3022f, -89.6127f, 56.1363f };
					*uParam3 = 234.36f;
					break;
				case 19:
					*uParam2 = { 393.9637f, -83.1111f, 56.9237f };
					*uParam3 = 234.36f;
					break;
				case 20:
					*uParam2 = { 393.2583f, -87.5273f, 56.5391f };
					*uParam3 = 234.36f;
					break;
				case 21:
					*uParam2 = { 392.093f, -89.1527f, 56.3355f };
					*uParam3 = 234.36f;
					break;
				case 22:
					*uParam2 = { 394.4237f, -85.9019f, 56.7352f };
					*uParam3 = 234.36f;
					break;
				case 23:
					*uParam2 = { 390.9276f, -90.7781f, 56.2237f };
					*uParam3 = 234.36f;
					break;
				case 24:
					*uParam2 = { 395.5891f, -84.2765f, 56.9455f };
					*uParam3 = 234.36f;
					break;
				case 25:
					*uParam2 = { 394.8837f, -88.6927f, 56.5269f };
					*uParam3 = 234.36f;
					break;
				case 26:
					*uParam2 = { 393.7184f, -90.3181f, 56.3503f };
					*uParam3 = 234.36f;
					break;
				case 27:
					*uParam2 = { 396.0491f, -87.0673f, 56.7554f };
					*uParam3 = 234.36f;
					break;
				case 28:
					*uParam2 = { 392.553f, -91.9435f, 56.1504f };
					*uParam3 = 234.36f;
					break;
				case 29:
					*uParam2 = { 397.2145f, -85.4419f, 56.9611f };
					*uParam3 = 234.36f;
					break;
				default:
					return 0;
			}
			break;
		case 156:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1022.3623f, -405.3558f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 1:
					*uParam2 = { -1023.3572f, -403.6208f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 2:
					*uParam2 = { -1021.3674f, -407.0909f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 3:
					*uParam2 = { -1024.352f, -401.8858f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 4:
					*uParam2 = { -1020.3726f, -408.8259f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 5:
					*uParam2 = { -1024.0973f, -406.3507f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 6:
					*uParam2 = { -1025.0922f, -404.6157f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 7:
					*uParam2 = { -1023.1024f, -408.0857f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 8:
					*uParam2 = { -1026.087f, -402.8806f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 9:
					*uParam2 = { -1022.1075f, -409.8207f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 10:
					*uParam2 = { -1025.8323f, -407.3455f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 11:
					*uParam2 = { -1026.8271f, -405.6105f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 12:
					*uParam2 = { -1024.8374f, -409.0805f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 13:
					*uParam2 = { -1027.822f, -403.8755f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 14:
					*uParam2 = { -1023.8425f, -410.8156f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 15:
					*uParam2 = { -1027.5673f, -408.3404f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 16:
					*uParam2 = { -1028.5621f, -406.6053f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 17:
					*uParam2 = { -1026.5724f, -410.0754f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 18:
					*uParam2 = { -1029.557f, -404.8703f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 19:
					*uParam2 = { -1025.5775f, -411.8104f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 20:
					*uParam2 = { -1029.3022f, -409.3352f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 21:
					*uParam2 = { -1030.2971f, -407.6002f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 22:
					*uParam2 = { -1028.3074f, -411.0702f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 23:
					*uParam2 = { -1031.292f, -405.8652f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 24:
					*uParam2 = { -1027.3125f, -412.8052f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 25:
					*uParam2 = { -1031.0372f, -410.33f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 26:
					*uParam2 = { -1032.0321f, -408.595f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 27:
					*uParam2 = { -1030.0424f, -412.0651f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 28:
					*uParam2 = { -1033.027f, -406.86f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				case 29:
					*uParam2 = { -1029.0475f, -413.8001f, 28.6161f };
					*uParam3 = 119.83f;
					break;
				default:
					return 0;
			}
			break;
		case 157:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -613.4739f, -699.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 1:
					*uParam2 = { -611.4739f, -699.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 2:
					*uParam2 = { -615.4739f, -699.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 3:
					*uParam2 = { -609.4739f, -699.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 4:
					*uParam2 = { -617.4739f, -699.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 5:
					*uParam2 = { -613.4739f, -697.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 6:
					*uParam2 = { -611.4739f, -697.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 7:
					*uParam2 = { -615.4739f, -697.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 8:
					*uParam2 = { -609.4739f, -697.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 9:
					*uParam2 = { -617.4739f, -697.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 10:
					*uParam2 = { -613.4739f, -695.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 11:
					*uParam2 = { -611.4739f, -695.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 12:
					*uParam2 = { -615.4739f, -695.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 13:
					*uParam2 = { -609.4739f, -695.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 14:
					*uParam2 = { -617.4739f, -695.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 15:
					*uParam2 = { -613.4739f, -693.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 16:
					*uParam2 = { -611.4739f, -693.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 17:
					*uParam2 = { -615.4739f, -693.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 18:
					*uParam2 = { -609.4739f, -693.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 19:
					*uParam2 = { -617.4739f, -693.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 20:
					*uParam2 = { -613.4739f, -691.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 21:
					*uParam2 = { -611.4739f, -691.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 22:
					*uParam2 = { -615.4739f, -691.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 23:
					*uParam2 = { -609.4739f, -691.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 24:
					*uParam2 = { -617.4739f, -691.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 25:
					*uParam2 = { -613.4739f, -689.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 26:
					*uParam2 = { -611.4739f, -689.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 27:
					*uParam2 = { -615.4739f, -689.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 28:
					*uParam2 = { -609.4739f, -689.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				case 29:
					*uParam2 = { -617.4739f, -689.9587f, 25.2921f };
					*uParam3 = 360f;
					break;
				default:
					return 0;
			}
			break;
		case 158:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1042.755f, -753.4515f, 8.1996f };
					*uParam3 = 36.72f;
					break;
				case 1:
					*uParam2 = { -1041.1519f, -752.2557f, 8.2265f };
					*uParam3 = 36.72f;
					break;
				case 2:
					*uParam2 = { -1044.3582f, -754.6473f, 8.1738f };
					*uParam3 = 36.72f;
					break;
				case 3:
					*uParam2 = { -1039.5487f, -751.0599f, 8.2358f };
					*uParam3 = 36.72f;
					break;
				case 4:
					*uParam2 = { -1045.9613f, -755.8431f, 8.1738f };
					*uParam3 = 36.72f;
					break;
				case 5:
					*uParam2 = { -1043.9508f, -751.8483f, 8.2013f };
					*uParam3 = 36.72f;
					break;
				case 6:
					*uParam2 = { -1042.3477f, -750.6525f, 8.2047f };
					*uParam3 = 36.72f;
					break;
				case 7:
					*uParam2 = { -1045.554f, -753.0441f, 8.1744f };
					*uParam3 = 36.72f;
					break;
				case 8:
					*uParam2 = { -1040.7445f, -749.4567f, 8.2065f };
					*uParam3 = 36.72f;
					break;
				case 9:
					*uParam2 = { -1047.1571f, -754.2399f, 8.1738f };
					*uParam3 = 36.72f;
					break;
				case 10:
					*uParam2 = { -1045.1466f, -750.2452f, 8.1738f };
					*uParam3 = 36.72f;
					break;
				case 11:
					*uParam2 = { -1043.5435f, -749.0494f, 8.1754f };
					*uParam3 = 36.72f;
					break;
				case 12:
					*uParam2 = { -1046.7498f, -751.441f, 8.1738f };
					*uParam3 = 36.72f;
					break;
				case 13:
					*uParam2 = { -1041.9403f, -747.8536f, 8.1772f };
					*uParam3 = 36.72f;
					break;
				case 14:
					*uParam2 = { -1048.3529f, -752.6368f, 8.1738f };
					*uParam3 = 36.72f;
					break;
				case 15:
					*uParam2 = { -1046.3424f, -748.642f, 8.074f };
					*uParam3 = 36.72f;
					break;
				case 16:
					*uParam2 = { -1044.7393f, -747.4462f, 8.0678f };
					*uParam3 = 36.72f;
					break;
				case 17:
					*uParam2 = { -1047.9456f, -749.8378f, 8.0803f };
					*uParam3 = 36.72f;
					break;
				case 18:
					*uParam2 = { -1043.1361f, -746.2504f, 8.0656f };
					*uParam3 = 36.72f;
					break;
				case 19:
					*uParam2 = { -1049.5487f, -751.0336f, 8.1086f };
					*uParam3 = 36.72f;
					break;
				case 20:
					*uParam2 = { -1047.5382f, -747.0389f, 8.1667f };
					*uParam3 = 36.72f;
					break;
				case 21:
					*uParam2 = { -1045.935f, -745.8431f, 8.1666f };
					*uParam3 = 36.72f;
					break;
				case 22:
					*uParam2 = { -1049.1414f, -748.2347f, 8.1668f };
					*uParam3 = 36.72f;
					break;
				case 23:
					*uParam2 = { -1044.3319f, -744.6473f, 8.1729f };
					*uParam3 = 36.72f;
					break;
				case 24:
					*uParam2 = { -1050.7445f, -749.4305f, 8.1776f };
					*uParam3 = 36.72f;
					break;
				case 25:
					*uParam2 = { -1048.734f, -745.4357f, 8.1689f };
					*uParam3 = 36.72f;
					break;
				case 26:
					*uParam2 = { -1047.1309f, -744.2399f, 8.1688f };
					*uParam3 = 36.72f;
					break;
				case 27:
					*uParam2 = { -1050.3372f, -746.6315f, 8.1625f };
					*uParam3 = 36.72f;
					break;
				case 28:
					*uParam2 = { -1045.5277f, -743.0441f, 8.1791f };
					*uParam3 = 36.72f;
					break;
				case 29:
					*uParam2 = { -1051.9403f, -747.8273f, 8.1804f };
					*uParam3 = 36.72f;
					break;
				default:
					return 0;
			}
			break;
	}
	return 1;
}

int func_388(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x45C72
{
	switch (iParam0)
	{
		case 155:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 364.5448f, -79.1803f, 66.3426f };
					*uParam3 = 245.9319f;
					break;
				case 1:
					*uParam2 = { 370.1169f, -84.5707f, 66.3876f };
					*uParam3 = 219.5961f;
					break;
				case 2:
					*uParam2 = { 371.8242f, -90.885f, 66.0253f };
					*uParam3 = 185.803f;
					break;
				case 3:
					*uParam2 = { 334.9244f, -92.1943f, 67.0739f };
					*uParam3 = 70.5939f;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 156:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1077.3188f, -420.6488f, 35.5302f };
					*uParam3 = 29.4522f;
					break;
				case 1:
					*uParam2 = { -1074.047f, -426.8217f, 35.5279f };
					*uParam3 = 27.5028f;
					break;
				case 2:
					*uParam2 = { -1071.0863f, -432.4955f, 35.5265f };
					*uParam3 = 27.4536f;
					break;
				case 3:
					*uParam2 = { -1067.3652f, -439.5144f, 35.5211f };
					*uParam3 = 26.9821f;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 157:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -627.9521f, -727.1566f, 27.1411f };
					*uParam3 = 0f;
					break;
				case 1:
					*uParam2 = { -627.9301f, -716.2112f, 28.04f };
					*uParam3 = 0f;
					break;
				case 2:
					*uParam2 = { -628.0103f, -746.1389f, 25.7673f };
					*uParam3 = 0f;
					break;
				case 3:
					*uParam2 = { -627.9656f, -773.0213f, 24.5675f };
					*uParam3 = 0f;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 158:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -989.0981f, -773.5846f, 15.1322f };
					*uParam3 = 179.9036f;
					break;
				case 1:
					*uParam2 = { -984.7885f, -773.4471f, 15.1256f };
					*uParam3 = 184.7396f;
					break;
				case 2:
					*uParam2 = { -1010.0784f, -796.0438f, 15.546f };
					*uParam3 = 65.2295f;
					break;
				case 3:
					*uParam2 = { -1001.455f, -801.0335f, 15.241f };
					*uParam3 = 63.1109f;
					break;
				default:
					return 0;
					break;
			}
			break;
	}
	return 1;
}

Vector3 func_389(int iParam0)//Position - 0x45F84
{
	switch (iParam0)
	{
		case 155:
			return 394.2626f, -64.7225f, 123.3813f;
		case 156:
			return -1007.6817f, -415.8003f, 79.1788f;
		case 157:
			return -597.309f, -717.4868f, 130.0455f;
		case 158:
			return -1012.9604f, -757.0606f, 80.7534f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_390(int iParam0, int iParam1)//Position - 0x4618B
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return Vector(60.8945f, -772.6675f, -1000.051f) - Vector(60.89419f, -759.604f, -1003.911f);
				break;
			case 1:
				return Vector(60.8945f, -772.6675f, -1003.0509f) - Vector(60.89419f, -759.604f, -1003.911f);
				break;
			case 2:
				return Vector(69.4942f, -773.0669f, -999.4467f) - Vector(60.89419f, -759.604f, -1003.911f);
				break;
			case 3:
				return Vector(69.4942f, -773.0669f, -1002.4468f) - Vector(60.89419f, -759.604f, -1003.911f);
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return Vector(-99.9999f, -86.2977f, -1063.9899f) - Vector(-100f, -70f, -1070f);
				break;
			case 1:
				return Vector(-99.9999f, -86.2977f, -1066.982f) - Vector(-100f, -70f, -1070f);
				break;
			case 2:
				return Vector(-95.5998f, -86.2977f, -1063.9899f) - Vector(-100f, -70f, -1070f);
				break;
			case 3:
				return Vector(-95.5998f, -86.2977f, -1066.984f) - Vector(-100f, -70f, -1070f);
				break;
			case 4:
				return Vector(-91.2f, -86.2977f, -1063.9899f) - Vector(-100f, -70f, -1070f);
				break;
			case 5:
				return Vector(-91.2f, -86.2977f, -1066.982f) - Vector(-100f, -70f, -1070f);
				break;
			}
	}
	return 0f, 0f, 0f;
}

float func_391(int iParam0, int iParam1)//Position - 0x46361
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 155:
				return -110f;
				break;
			case 156:
				return -63.05f;
				break;
			case 157:
				return 89.85f;
				break;
			case 158:
				return 0f;
				break;
			default:
				return 0f;
				break;
			}
	}
	return 0f;
}

Vector3 func_392(int iParam0, int iParam1)//Position - 0x463BE
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 155:
				return 384.814f, -60.727f, 102.363f;
				break;
			case 156:
				return -1020.2864f, -427.30176f, 62.861137f;
				break;
			case 157:
				return -589.4757f, -716.52594f, 112.00506f;
				break;
			case 158:
				return -1003.911f, -759.604f, 60.89419f;
				break;
			default:
				return -1120f, -70f, -100f;
				break;
			}
	}
	return -1070f, -70f, -100f;
}

Vector3 func_393(int iParam0, int iParam1)//Position - 0x46B5E
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return -0.8827f, 0.091f, -143.6323f;
				break;
			case 1:
				return 2.098f, 0.034f, 147.4528f;
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 4:
				return 9.3832f, 0.0374f, -148.4983f;
				break;
			case 5:
				return 4.3212f, 0.0527f, 152.212f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_394(int iParam0, int iParam1)//Position - 0x46C16
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return Vector(62.3348f, -771.5936f, -1001.0275f) - Vector(60.89419f, -759.604f, -1003.911f);
				break;
			case 1:
				return Vector(62.3118f, -771.5381f, -1002.1396f) - Vector(60.89419f, -759.604f, -1003.911f);
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 4:
				return Vector(-89.945f, -85.2465f, -1064.8148f) - Vector(-100f, -70f, -1070f);
				break;
			case 5:
				return Vector(-89.8279f, -85.0176f, -1066.2104f) - Vector(-100f, -70f, -1070f);
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_395(int iParam0, int iParam1)//Position - 0x46D06
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 18.801f, 0.091f, -143.6323f;
				break;
			case 1:
				return 18.1344f, 0.0387f, 147.3108f;
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 4:
				return 24.6977f, 0.0374f, -148.4983f;
				break;
			case 5:
				return 16.7036f, 0.0527f, 152.212f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_396(int iParam0, int iParam1)//Position - 0x46DBE
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return Vector(62.3348f, -771.5936f, -1001.0275f) - Vector(60.89419f, -759.604f, -1003.911f);
				break;
			case 1:
				return Vector(62.3118f, -771.5388f, -1002.1385f) - Vector(60.89419f, -759.604f, -1003.911f);
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 4:
				return Vector(-89.945f, -85.2465f, -1064.8148f) - Vector(-100f, -70f, -1070f);
				break;
			case 5:
				return Vector(-89.8279f, -85.0176f, -1066.2104f) - Vector(-100f, -70f, -1070f);
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_397(var uParam0, var uParam1)//Position - 0x46E92
{
	STREAMING::REQUEST_MODEL(joaat("v_ilev_garageliftdoor"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_garageliftdoor")))
	{
		return 1;
	}
	return 0;
}

var func_398()//Position - 0x46F60
{
	return BitTest(Global_1946250.f_10, 11);
}

int func_399()//Position - 0x46F71
{
	return Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_26;
}

int func_400(int iParam0)//Position - 0x47034
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 19);
}

int func_401(int iParam0, int iParam1)//Position - 0x47086
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27.f_3, iParam1);
	}
	return 0;
}

int func_402(int iParam0)//Position - 0x47165
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 18);
}

bool func_403()//Position - 0x4718B
{
	return __LIB_0__.func_137(28257, -1);
}

int func_404(int iParam0)//Position - 0x4719B
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 0);
	}
	return 0;
}

int func_405(int iParam0)//Position - 0x47210
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 17);
}

Vector3 func_406(float fParam0)//Position - 0x4794D
{
	return -SYSTEM::SIN(fParam0), SYSTEM::COS(fParam0), 0f;
}

float func_407(float fParam0)//Position - 0x47963
{
	float fVar0;
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(__LIB_0__.func_407(((fParam0 * 3.1415927f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

void func_408(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x479B8
{
	switch (iParam0)
	{
		case 155:
			*uParam1 = { 356.52747f, -79.62252f, 66.108696f };
			*uParam2 = { 360.318f, -68.95592f, 69.321915f };
			*uParam3 = 2.6875f;
			break;
		case 156:
			*uParam1 = { -1028.9136f, -410.96973f, 32.287163f };
			*uParam2 = { -1032.7822f, -412.94595f, 35.47135f };
			*uParam3 = 1.625f;
			break;
		case 157:
			*uParam1 = { -614.9235f, -736.2521f, 26.88276f };
			*uParam2 = { -614.9235f, -740.2846f, 30.055063f };
			*uParam3 = 1.75f;
			break;
		case 158:
			*uParam1 = { -991.0212f, -763.97107f, 14.772817f };
			*uParam2 = { -983.22906f, -763.99115f, 17.870977f };
			*uParam3 = 1.75f;
			break;
	}
}

Vector3 func_409(int iParam0)//Position - 0x47AA3
{
	switch (iParam0)
	{
		case 155:
			return 354.3929f, -72.7361f, 66.1927f;
			break;
		case 156:
			return -1028.6725f, -416.8604f, 32.2732f;
			break;
		case 157:
			return -608.4036f, -737.7643f, 27.9711f;
			break;
		case 158:
			return -986.098f, -756.233f, 15.0415f;
			break;
	}
	return 354.3929f, -72.7361f, 66.1927f;
}

float func_410(int iParam0)//Position - 0x47B2D
{
	switch (iParam0)
	{
		case 155:
			return 71.2684f;
			break;
		case 156:
			return 206.9174f;
			break;
		case 157:
			return 271.1021f;
			break;
		case 158:
			return 359.9032f;
			break;
	}
	return 71.2684f;
}

Vector3 func_411(int iParam0)//Position - 0x47B85
{
	switch (iParam0)
	{
		case 155:
			return 366.6149f, -77.1692f, 66.3368f;
			break;
		case 156:
			return -1033.7303f, -406.1613f, 32.2732f;
			break;
		case 157:
			return -621.3941f, -738.3404f, 26.4838f;
			break;
		case 158:
			return -987.0657f, -771.4231f, 15.031f;
			break;
	}
	return 366.6149f, -77.1692f, 66.3368f;
}

int func_412(int iParam0)//Position - 0x47CD7
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == joaat("hydra") || iVar0 == joaat("tula"))
	{
		return 1;
	}
	return 0;
}

bool func_413(var uParam0, int iParam1)//Position - 0x47D13
{
	return (uParam0->f_382 == iParam1 && BitTest(uParam0->f_379, iParam1));
}

void func_414(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x4858C
{
	switch (iParam0)
	{
		case 155:
			if (bParam4)
			{
				*uParam1 = { 356.607f, -73.9607f, 75.2911f };
				*uParam2 = { -43.1941f, 0f, -110.2383f };
				*uParam3 = 50f;
			}
			else
			{
				*uParam1 = { 356.607f, -73.9607f, 75.2911f };
				*uParam2 = { -39.1249f, 0f, -110.2383f };
				*uParam3 = 44.4882f;
			}
			break;
		case 156:
			if (bParam4)
			{
				*uParam1 = { -1031.503f, -410.8954f, 36.2155f };
				*uParam2 = { -89.5003f, 0.01f, 26.6034f };
				*uParam3 = 53.3332f;
			}
			else
			{
				*uParam1 = { -1031.503f, -410.8954f, 36.2155f };
				*uParam2 = { -78.931f, 0.01f, 26.6034f };
				*uParam3 = 53.3332f;
			}
			break;
		case 157:
			if (bParam4)
			{
				*uParam1 = { -615.5153f, -738.1968f, 30.0297f };
				*uParam2 = { -67.8093f, 0f, 89.6926f };
				*uParam3 = 64.2624f;
			}
			else
			{
				*uParam1 = { -615.5153f, -738.1968f, 30.0297f };
				*uParam2 = { -55.5349f, 0f, 90.6095f };
				*uParam3 = 59.5343f;
			}
			break;
		case 158:
			if (bParam4)
			{
				*uParam1 = { -987.0026f, -762.7603f, 25.2175f };
				*uParam2 = { -53.2631f, 0f, -179.7312f };
				*uParam3 = 50f;
			}
			else
			{
				*uParam1 = { -986.9971f, -763.7416f, 23.9028f };
				*uParam2 = { -53.2631f, 0f, -179.7312f };
				*uParam3 = 50f;
			}
			break;
	}
}

void func_415(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x48737
{
	switch (iParam0)
	{
		case 155:
			if (bParam4)
			{
				*uParam1 = { 354.3741f, -87.0751f, 67.1874f };
				*uParam2 = { 2.182f, 0f, -41.542f };
				*uParam3 = 42.2345f;
			}
			else
			{
				*uParam1 = { 354.731f, -86.6725f, 67.2079f };
				*uParam2 = { 2.182f, 0f, -39.5927f };
				*uParam3 = 42.2345f;
			}
			break;
		case 156:
			if (bParam4)
			{
				*uParam1 = { -1040.3522f, -415.9691f, 34.5024f };
				*uParam2 = { -8.048f, 0f, -32.6623f };
				*uParam3 = 50f;
			}
			else
			{
				*uParam1 = { -1039.9851f, -415.8102f, 34.462f };
				*uParam2 = { -6.8319f, 0f, -33.9982f };
				*uParam3 = 41.1604f;
			}
			break;
		case 157:
			if (bParam4)
			{
				*uParam1 = { -616.0862f, -731.4946f, 28.0871f };
				*uParam2 = { -1.7343f, 0f, 146.6427f };
				*uParam3 = 50f;
			}
			else
			{
				*uParam1 = { -616.0862f, -731.4946f, 28.0871f };
				*uParam2 = { -1.7343f, 0f, 159.1888f };
				*uParam3 = 50f;
			}
			break;
		case 158:
			if (bParam4)
			{
				*uParam1 = { -981.8072f, -765.3933f, 19.5463f };
				*uParam2 = { -20.947f, 0f, 135.3802f };
				*uParam3 = 46.6754f;
			}
			else
			{
				*uParam1 = { -981.8072f, -765.3933f, 19.5463f };
				*uParam2 = { -30.809f, 0f, 125.9392f };
				*uParam3 = 46.6754f;
			}
			break;
	}
}

void func_416(var uParam0)//Position - 0x48C4A
{
	int iVar0;
	if (!__LIB_0__.func_121(*uParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
	{
		VEHICLE::SET_DISABLE_AUTOMATIC_CRASH_TASK(*uParam0, true);
	}
}

int func_417(int iParam0)//Position - 0x49C86
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_293, 28);
	}
	return 0;
}

void func_418(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x49CAD
{
	*uParam1 = 0;
}

void func_419()//Position - 0x4A09E
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

int func_420(int iParam0)//Position - 0x4A0E7
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_480.f_1, 22);
	}
	return 0;
}

void func_421(bool bParam0)//Position - 0x4A1D7
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_2, 16))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 16);
		}
	}
	else if (BitTest(Global_1946250.f_2, 16))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 16);
	}
}

void func_422(int iParam0)//Position - 0x4A36F
{
	int iVar0;
	int iVar1;
	GRAPHICS::SET_DISABLE_DECAL_RENDERING_THIS_FRAME();
	switch (iParam0)
	{
		case 155:
			iVar1 = MISC::GET_HASH_KEY("hei_hw1_08_hotplaz01");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			iVar1 = MISC::GET_HASH_KEY("HW1_08_hotplaz_rail");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			iVar1 = MISC::GET_HASH_KEY("hw1_08_emissive_c");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
			break;
		case 156:
			iVar1 = MISC::GET_HASH_KEY("bh1_05_build1");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			iVar1 = MISC::GET_HASH_KEY("bh1_05_em");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
			break;
		case 157:
			iVar1 = MISC::GET_HASH_KEY("hei_kt1_08_buildingtop_a");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			iVar1 = MISC::GET_HASH_KEY("hei_kt1_08_kt1_emissive_ema");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
			break;
		case 158:
			iVar1 = MISC::GET_HASH_KEY("hei_kt1_05_01");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			iVar1 = MISC::GET_HASH_KEY("kt1_05_glue_b");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			iVar1 = MISC::GET_HASH_KEY("kt1_05_kt_emissive_kt1_05");
			iVar0 = iVar1;
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar0);
			INTERIOR::ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(iVar0);
			GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
			break;
	}
}

bool func_423()//Position - 0x4A4BA
{
	return Global_2789735;
}

void func_424(bool bParam0)//Position - 0x4A8BC
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 29))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 29);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 29))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 29);
	}
}

void func_425()//Position - 0x4A925
{
	Global_2815059.f_841 = 0;
}

int func_426(int iParam0)//Position - 0x4A935
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_1, 29);
	}
	return 0;
}

int func_427(bool bParam0)//Position - 0x4A95B
{
	if (bParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[bParam0 /*453*/].f_318, 5);
	}
	return 0;
}

void func_428(int iParam0)//Position - 0x4A9B1
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam0, iVar0) > 0f)
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, false);
					return;
				}
				iVar0++;
			}
		}
	}
}

Vector3 func_429(int iParam0)//Position - 0x4AADB
{
	switch (iParam0)
	{
		case 155:
			return 359.35f, -74.67f, 66.12f;
			break;
		case 156:
			return -1031.25f, -411.55f, 32.27f;
			break;
		case 157:
			return -615.77f, -738.3f, 26.86f;
			break;
		case 158:
			return -986.94f, -765.11f, 14.74f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_430(var uParam0)//Position - 0x4AB59
{
	return 357;
}

int func_431()//Position - 0x4AC0B
{
	return Global_1946250.f_504;
}

int func_432(int iParam0, int iParam1)//Position - 0x4ACEE
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_480 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_433(int iParam0)//Position - 0x4AD18
{
	switch (iParam0)
	{
		case 155:
			return 1;
		case 156:
			return 2;
		case 157:
			return 3;
		case 158:
			return 4;
		default:
	}
	return 0;
}

bool func_434(int iParam0)//Position - 0x4AFDA
{
	return (iParam0 >= 795 && iParam0 <= 802);
}

int func_435(var uParam0)//Position - 0x4AFF3
{
	switch (*uParam0)
	{
		case 714:
			return 128;
		case 715:
			return 129;
		case 716:
			return 130;
		case 717:
			return 131;
		case 718:
			return 132;
		case 719:
			return 133;
		case 720:
			return 128;
		case 721:
			return 129;
		case 722:
			return 130;
		case 723:
			return 131;
		case 724:
			return 132;
		case 725:
			return 133;
		case 726:
			return 128;
		case 727:
			return 129;
		case 728:
			return 130;
		case 729:
			return 131;
		case 730:
			return 132;
		case 731:
			return 133;
		default:
	}
	return -1;
}

int func_436(var uParam0)//Position - 0x4B0CA
{
	switch (*uParam0)
	{
		case 675:
			return 89;
		case 676:
			return 90;
		case 677:
			return 91;
		case 678:
			return 92;
		case 679:
			return 93;
		case 680:
			return 94;
		case 681:
			return 95;
		case 682:
			return 96;
		case 683:
			return 97;
		default:
	}
	return -1;
}

int func_437(int iParam0)//Position - 0x4B151
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_480.f_1, 24);
	}
	return 0;
}

Vector3 func_438(int iParam0)//Position - 0x4B18C
{
	switch (iParam0)
	{
		case 155:
			return 384.7453f, -60.9975f, 102.8112f;
			break;
		case 156:
			return -1014.2617f, -424.8082f, 61.871f;
			break;
		case 157:
			return -589.4549f, -713.5506f, 90.0165f;
			break;
		case 158:
			return -1009.2408f, -755.2996f, 43.8975f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_439(var uParam0, bool bParam1)//Position - 0x4B6C3
{
	if (bParam1)
	{
		return 6;
	}
	return 9;
}

int func_440(var uParam0)//Position - 0x4B8D7
{
	return 826;
}

var func_441(var uParam0, var uParam1)//Position - 0x4BA5F
{
	return BitTest(Global_1946250.f_506, 31);
}

void func_442(int iParam0, bool bParam1, bool bParam2)//Position - 0x4BCC7
{
	Global_1946250.f_3377 = iParam0;
	if (bParam1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_1946250.f_9), 25);
		}
		MISC::SET_BIT(&(Global_1946250.f_5), 8);
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 9);
	}
}

void func_443(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4BD09
{
	struct<8> Var0;
	Var0.f_7 = -1;
	Var0.f_0 = -1549662639;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_5 = iParam4;
	Var0.f_7 = iParam6;
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iParam0);
	}
}

int func_444(int iParam0, int iParam1)//Position - 0x4BDE6
{
	if (BitTest(iParam1->f_2, 1))
	{
		return iParam1->f_5 == iParam0;
	}
	return 0;
}

bool func_445(var uParam0, int iParam1)//Position - 0x4BE63
{
	return (iParam1 > -1 && iParam1 < uParam0->f_6);
}

char* func_446()//Position - 0x4BEDB
{
	return "SHOP_BANNER_CLINTON_PARTNER";
}

void func_447(int iParam0)//Position - 0x4BF78
{
	MISC::SET_BITS_IN_RANGE(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 28, 31, iParam0);
}

Vector3 func_448(var uParam0)//Position - 0x4BF99
{
	return -1072.187f, -72.2913f, -91.2f;
}

int func_449(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x4F884
{
	switch (iParam0)
	{
		case 155:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 383.3511f, -51.5242f, 121.5352f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 1:
					*uParam2 = { 383.7697f, -52.8958f, 121.5353f };
					*uParam3 = 240.0372f;
					return 1;
					break;
				case 2:
					*uParam2 = { 385.3097f, -51.051f, 121.5353f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 3:
					*uParam2 = { 382.3282f, -53.1638f, 121.5352f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 4:
					*uParam2 = { 384.4826f, -49.6213f, 121.5352f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 5:
					*uParam2 = { 382.7582f, -54.8339f, 121.5353f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 6:
					*uParam2 = { 386.4066f, -48.758f, 121.5353f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 7:
					*uParam2 = { 381.3278f, -55.4588f, 121.5352f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 8:
					*uParam2 = { 386.3192f, -47.0408f, 121.5352f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 9:
					*uParam2 = { 387.4181f, -52.5635f, 121.5355f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 10:
					*uParam2 = { 385.9428f, -53.6502f, 121.5354f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 11:
					*uParam2 = { 387.1299f, -50.3539f, 121.5354f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 12:
					*uParam2 = { 384.8974f, -55.0706f, 121.5354f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 13:
					*uParam2 = { 388.2802f, -47.2683f, 121.5354f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 14:
					*uParam2 = { 383.8618f, -56.9051f, 121.5354f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 15:
					*uParam2 = { 389.4442f, -45.2931f, 121.5354f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 16:
					*uParam2 = { 380.7207f, -57.8121f, 121.5352f };
					*uParam3 = 166.2675f;
					return 1;
					break;
				case 17:
					*uParam2 = { 388.7301f, -48.9656f, 121.5355f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 18:
					*uParam2 = { 389.8947f, -46.9905f, 121.5355f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 19:
					*uParam2 = { 382.2274f, -59.1154f, 121.5354f };
					*uParam3 = 162.6617f;
					return 1;
					break;
				case 20:
					*uParam2 = { 389.2241f, -50.7f, 121.5356f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 21:
					*uParam2 = { 380.6781f, -61.0557f, 121.5352f };
					*uParam3 = 166.4233f;
					return 1;
					break;
				case 22:
					*uParam2 = { 392.328f, -47.3384f, 121.5357f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 23:
					*uParam2 = { 381.5929f, -62.6245f, 121.5351f };
					*uParam3 = 166.2954f;
					return 1;
					break;
				case 24:
					*uParam2 = { 389.7635f, -52.5763f, 121.5357f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 25:
					*uParam2 = { 379.5436f, -64.9926f, 121.5348f };
					*uParam3 = 166.7747f;
					return 1;
					break;
				case 26:
					*uParam2 = { 391.3289f, -48.9723f, 121.5356f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 27:
					*uParam2 = { 393.336f, -54.9584f, 121.536f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 28:
					*uParam2 = { 391.6137f, -50.929f, 121.5357f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 29:
					*uParam2 = { 393.0905f, -52.7851f, 121.5359f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 30:
					*uParam2 = { 393.548f, -49.195f, 121.5358f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 31:
					*uParam2 = { 393.9195f, -51.1526f, 121.5359f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 32:
					*uParam2 = { 401.8415f, -52.6241f, 121.5365f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 33:
					*uParam2 = { 395.3404f, -49.1711f, 121.5359f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 34:
					*uParam2 = { 400.4191f, -54.6107f, 121.5365f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 35:
					*uParam2 = { 395.787f, -53.3038f, 121.5361f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 36:
					*uParam2 = { 398.9008f, -53.0481f, 121.5364f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 37:
					*uParam2 = { 396.7147f, -55.2141f, 121.5363f };
					*uParam3 = 256.2439f;
					return 1;
					break;
				case 38:
					*uParam2 = { 398.8676f, -50.9139f, 121.5363f };
					*uParam3 = 240.11f;
					return 1;
					break;
				case 39:
					*uParam2 = { 396.568f, -51.2049f, 121.5361f };
					*uParam3 = 240.11f;
					return 1;
					break;
			}
			break;
		case 156:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1023.7141f, -432.9633f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 1:
					*uParam2 = { -1024.9391f, -431.954f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 2:
					*uParam2 = { -1024.496f, -434.8176f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 3:
					*uParam2 = { -1025.8069f, -430.4092f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 4:
					*uParam2 = { -1022.9628f, -435.6069f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 5:
					*uParam2 = { -1027.295f, -429.6659f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 6:
					*uParam2 = { -1022.1215f, -437.4305f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 7:
					*uParam2 = { -1028.2616f, -427.5654f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 8:
					*uParam2 = { -1021.59f, -439.0559f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 9:
					*uParam2 = { -1027.435f, -433.8905f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 10:
					*uParam2 = { -1028.4099f, -431.7833f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 11:
					*uParam2 = { -1026.3687f, -436.0705f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 12:
					*uParam2 = { -1028.8445f, -429.2856f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 13:
					*uParam2 = { -1025.4346f, -437.7362f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 14:
					*uParam2 = { -1030.2188f, -427.2231f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 15:
					*uParam2 = { -1029.076f, -425.8294f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 16:
					*uParam2 = { -1030.2666f, -424.949f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 17:
					*uParam2 = { -1023.6295f, -438.4677f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 18:
					*uParam2 = { -1030.0717f, -434.1438f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 19:
					*uParam2 = { -1030.9481f, -431.9151f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 20:
					*uParam2 = { -1028.8877f, -436.6289f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 21:
					*uParam2 = { -1031.3175f, -429.0727f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 22:
					*uParam2 = { -1028.2112f, -438.492f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 23:
					*uParam2 = { -1032.126f, -426.5874f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 24:
					*uParam2 = { -1026.4995f, -439.4539f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 25:
					*uParam2 = { -1032.7517f, -424.4265f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 26:
					*uParam2 = { -1023.9661f, -440.0644f, 76.3691f };
					*uParam3 = 117.245f;
					return 1;
					break;
				case 27:
					*uParam2 = { -1021.363f, -417.8599f, 77.2823f };
					*uParam3 = 298.2955f;
					return 1;
					break;
				case 28:
					*uParam2 = { -1023.119f, -417.44f, 77.2823f };
					*uParam3 = 301.1121f;
					return 1;
					break;
				case 29:
					*uParam2 = { -1029.201f, -420.6512f, 76.3691f };
					*uParam3 = 296.6637f;
					return 1;
					break;
				case 30:
					*uParam2 = { -1027.3218f, -419.3205f, 76.3691f };
					*uParam3 = 292.8746f;
					return 1;
					break;
				case 31:
					*uParam2 = { -1018.6714f, -435.7663f, 76.3691f };
					*uParam3 = 292.8325f;
					return 1;
					break;
				case 32:
					*uParam2 = { -1027.5007f, -420.8155f, 76.3691f };
					*uParam3 = 296.6711f;
					return 1;
					break;
				case 33:
					*uParam2 = { -1018.1292f, -437.495f, 76.3691f };
					*uParam3 = 295.1799f;
					return 1;
					break;
				case 34:
					*uParam2 = { -1029.8138f, -422.23f, 76.3691f };
					*uParam3 = 299.0331f;
					return 1;
					break;
				case 35:
					*uParam2 = { -1019.8424f, -437.1166f, 76.3691f };
					*uParam3 = 300.8826f;
					return 1;
					break;
				case 36:
					*uParam2 = { -1014.1097f, -433.8477f, 77.2823f };
					*uParam3 = 294.4105f;
					return 1;
					break;
				case 37:
					*uParam2 = { -1014.335f, -435.5909f, 77.2823f };
					*uParam3 = 293.251f;
					return 1;
					break;
				case 38:
					*uParam2 = { -1012.4176f, -434.1538f, 77.2823f };
					*uParam3 = 293.6146f;
					return 1;
					break;
				case 39:
					*uParam2 = { -1021.3528f, -415.9177f, 77.2823f };
					*uParam3 = 292.8264f;
					return 1;
					break;
			}
			break;
		case 157:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -580.3527f, -716.7365f, 128.8879f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 1:
					*uParam2 = { -580.9628f, -715.4064f, 128.8879f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 2:
					*uParam2 = { -581.1256f, -717.9428f, 128.8879f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 3:
					*uParam2 = { -582.9131f, -716.5585f, 128.8911f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 4:
					*uParam2 = { -585.501f, -716.8457f, 128.2432f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 5:
					*uParam2 = { -581.3821f, -713.0486f, 128.8879f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 6:
					*uParam2 = { -581.1449f, -720.1678f, 128.8879f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 7:
					*uParam2 = { -580.3187f, -711.9366f, 128.8879f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 8:
					*uParam2 = { -580.3866f, -721.5363f, 128.8879f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 9:
					*uParam2 = { -586.1561f, -708.3428f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 10:
					*uParam2 = { -585.8657f, -725.1776f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 11:
					*uParam2 = { -586.8713f, -712.1591f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 12:
					*uParam2 = { -588.0793f, -723.3629f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 13:
					*uParam2 = { -585.1337f, -711.0507f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 14:
					*uParam2 = { -589.1079f, -725.1152f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 15:
					*uParam2 = { -585.2281f, -720.9713f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 16:
					*uParam2 = { -587.6344f, -721.4442f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 17:
					*uParam2 = { -587.697f, -726.739f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 18:
					*uParam2 = { -589.6013f, -708.9386f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 19:
					*uParam2 = { -588.0237f, -706.9711f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 20:
					*uParam2 = { -590.4169f, -710.6247f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 21:
					*uParam2 = { -587.851f, -710.4512f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 22:
					*uParam2 = { -590.3234f, -706.6827f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 23:
					*uParam2 = { -590.6022f, -726.5602f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 24:
					*uParam2 = { -590.2703f, -723.3373f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 25:
					*uParam2 = { -592.2151f, -708.5901f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 26:
					*uParam2 = { -591.8657f, -725.1407f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 27:
					*uParam2 = { -595.7155f, -706.3638f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 28:
					*uParam2 = { -595.1345f, -707.9813f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 29:
					*uParam2 = { -597.7416f, -707.8489f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 30:
					*uParam2 = { -592.8076f, -706.3218f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 31:
					*uParam2 = { -598.8878f, -706.3211f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 32:
					*uParam2 = { -594.1351f, -725.7796f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 33:
					*uParam2 = { -600.3218f, -708.0649f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 34:
					*uParam2 = { -595.4318f, -727.032f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 35:
					*uParam2 = { -593.0121f, -727.0811f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 36:
					*uParam2 = { -599.7281f, -725.3347f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 37:
					*uParam2 = { -597.8259f, -726.7187f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 38:
					*uParam2 = { -600.8898f, -726.9184f, 128.1876f };
					*uParam3 = 89.595f;
					return 1;
					break;
				case 39:
					*uParam2 = { -596.8016f, -725.3956f, 128.2443f };
					*uParam3 = 89.595f;
					return 1;
					break;
			}
			break;
		case 158:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1018.6049f, -766.3321f, 75.5368f };
					*uParam3 = 94.9699f;
					return 1;
					break;
				case 1:
					*uParam2 = { -1019.0214f, -768.2593f, 75.5368f };
					*uParam3 = 89.4902f;
					return 1;
					break;
				case 2:
					*uParam2 = { -1020.4077f, -765.2088f, 75.5368f };
					*uParam3 = 85.8069f;
					return 1;
					break;
				case 3:
					*uParam2 = { -1020.4288f, -769.6422f, 75.5368f };
					*uParam3 = 89.9133f;
					return 1;
					break;
				case 4:
					*uParam2 = { -1021.4285f, -767.4817f, 75.5368f };
					*uParam3 = 88.0222f;
					return 1;
					break;
				case 5:
					*uParam2 = { -1022.7448f, -768.4294f, 75.5368f };
					*uParam3 = 61.9704f;
					return 1;
					break;
				case 6:
					*uParam2 = { -1022.6946f, -765.9832f, 75.5368f };
					*uParam3 = 78.3283f;
					return 1;
					break;
				case 7:
					*uParam2 = { -1021.895f, -770.6505f, 75.5368f };
					*uParam3 = 66.2507f;
					return 1;
					break;
				case 8:
					*uParam2 = { -1019.0621f, -770.8001f, 75.5368f };
					*uParam3 = 78.2209f;
					return 1;
					break;
				case 9:
					*uParam2 = { -1023.854f, -764.3358f, 75.5368f };
					*uParam3 = 78.3465f;
					return 1;
					break;
				case 10:
					*uParam2 = { -1025.2915f, -764.9492f, 75.5368f };
					*uParam3 = 73.9312f;
					return 1;
					break;
				case 11:
					*uParam2 = { -1024.9607f, -762.7647f, 75.5368f };
					*uParam3 = 82.4261f;
					return 1;
					break;
				case 12:
					*uParam2 = { -1027.391f, -767.6008f, 75.5368f };
					*uParam3 = 49.382f;
					return 1;
					break;
				case 13:
					*uParam2 = { -1029.6895f, -765.7699f, 75.5368f };
					*uParam3 = 53.3548f;
					return 1;
					break;
				case 14:
					*uParam2 = { -1024.6643f, -769.2707f, 75.5368f };
					*uParam3 = 57.5917f;
					return 1;
					break;
				case 15:
					*uParam2 = { -1031.6178f, -763.4458f, 75.5368f };
					*uParam3 = 53.8646f;
					return 1;
					break;
				case 16:
					*uParam2 = { -1025.0514f, -767.0775f, 75.5368f };
					*uParam3 = 57.4218f;
					return 1;
					break;
				case 17:
					*uParam2 = { -1034.4298f, -763.2808f, 75.5368f };
					*uParam3 = 57.7487f;
					return 1;
					break;
				case 18:
					*uParam2 = { -1032.7072f, -759.8542f, 75.5368f };
					*uParam3 = 0.0222f;
					return 1;
					break;
				case 19:
					*uParam2 = { -1029.0887f, -761.9126f, 75.5368f };
					*uParam3 = 16.4818f;
					return 1;
					break;
				case 20:
					*uParam2 = { -1035.3777f, -759.3333f, 75.5368f };
					*uParam3 = 355.9618f;
					return 1;
					break;
				case 21:
					*uParam2 = { -1026.8274f, -762.761f, 75.5368f };
					*uParam3 = 12.3584f;
					return 1;
					break;
				case 22:
					*uParam2 = { -1030.389f, -760.5051f, 75.5368f };
					*uParam3 = 355.9047f;
					return 1;
					break;
				case 23:
					*uParam2 = { -1028.5247f, -763.8235f, 75.5368f };
					*uParam3 = 69.6907f;
					return 1;
					break;
				case 24:
					*uParam2 = { -1034.1583f, -760.7309f, 75.5368f };
					*uParam3 = 352.0284f;
					return 1;
					break;
				case 25:
					*uParam2 = { -1027.3567f, -765.2846f, 75.5368f };
					*uParam3 = 69.7315f;
					return 1;
					break;
				case 26:
					*uParam2 = { -1031.9412f, -761.6457f, 75.5368f };
					*uParam3 = 347.7986f;
					return 1;
					break;
				case 27:
					*uParam2 = { -1026.4178f, -759.6399f, 75.5368f };
					*uParam3 = 8.2985f;
					return 1;
					break;
				case 28:
					*uParam2 = { -1029.1381f, -759.1717f, 75.5368f };
					*uParam3 = 0.0748f;
					return 1;
					break;
				case 29:
					*uParam2 = { -1027.8171f, -757.282f, 75.5368f };
					*uParam3 = 8.2879f;
					return 1;
					break;
				case 30:
					*uParam2 = { -1031.1754f, -758.3996f, 75.5368f };
					*uParam3 = 0.2051f;
					return 1;
					break;
				case 31:
					*uParam2 = { -1029.6887f, -755.987f, 75.5368f };
					*uParam3 = 4.2033f;
					return 1;
					break;
				case 32:
					*uParam2 = { -1033.741f, -757.8523f, 75.5368f };
					*uParam3 = 0.1429f;
					return 1;
					break;
				case 33:
					*uParam2 = { -1032.2386f, -755.6213f, 75.5368f };
					*uParam3 = 4.2997f;
					return 1;
					break;
				case 34:
					*uParam2 = { -1027.7748f, -760.6725f, 75.5368f };
					*uParam3 = 4.4259f;
					return 1;
					break;
				case 35:
					*uParam2 = { -1034.9515f, -755.2717f, 75.5368f };
					*uParam3 = 4.2445f;
					return 1;
					break;
				case 36:
					*uParam2 = { -1030.7645f, -753.2176f, 75.5368f };
					*uParam3 = 0.3148f;
					return 1;
					break;
				case 37:
					*uParam2 = { -1027.8511f, -753.7901f, 75.5368f };
					*uParam3 = 8.8956f;
					return 1;
					break;
				case 38:
					*uParam2 = { -1033.1608f, -752.6885f, 75.5368f };
					*uParam3 = 4.1484f;
					return 1;
					break;
				case 39:
					*uParam2 = { -1026.0026f, -755.6667f, 75.5368f };
					*uParam3 = 12.6563f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

struct<4> func_450(var uParam0)//Position - 0x511D8
{
	struct<4> Var0;
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1008981770;
	Var0.f_3 = 1073741824;
	return Var0;
}

int func_451()//Position - 0x52076
{
	switch (Global_1977044)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 5:
			return 1;
			break;
	}
	return 0;
}

void func_452(int iParam0)//Position - 0x522EA
{
	Global_1946250.f_3280 = iParam0;
}

void func_453(bool bParam0)//Position - 0x522FB
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 19);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 19);
	}
}

void func_454(bool bParam0)//Position - 0x52337
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 18);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 18);
	}
}

void func_455(bool bParam0)//Position - 0x52373
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 17);
	}
}

int func_456(bool bParam0)//Position - 0x52473
{
	if (bParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 26);
}

int func_457(int iParam0, bool bParam1)//Position - 0x52496
{
	int iVar0;
	iVar0 = __LIB_2__.func_191(iParam0);
	if (!iVar0 == __LIB_0__.func_160())
	{
		if (iVar0 == __LIB_2__.func_191(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_458()//Position - 0x52581
{
	return BitTest(Global_1946250.f_3, 29);
}

bool func_459()//Position - 0x52626
{
	return BitTest(Global_1946250.f_4, 7);
}

int func_460()//Position - 0x528CF
{
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_1574632.f_18 != 0) || Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

int func_461(int iParam0)//Position - 0x52FB3
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_827;
	}
	return -1;
}

Vector3 func_462(int iParam0, int iParam1)//Position - 0x5304D
{
	switch (iParam1)
	{
		case 5:
		case 0:
			switch (iParam0)
			{
				case 155:
					return 391.31f, -75.76f, 67.18f;
					break;
				case 156:
					return -1019.17f, -414.74f, 38.62f;
					break;
				case 157:
					return -591.11f, -707.96f, 35.28f;
					break;
				case 158:
					return -1038.72f, -758.01f, 18.84f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 155:
					return 359.15f, -74.61f, 66.11f;
					break;
				case 156:
					return -1030.96f, -411.51f, 32.27f;
					break;
				case 157:
					return -615.79f, -738.3f, 26.86f;
					break;
				case 158:
					return -986.93f, -764.86f, 14.72f;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 155:
					return 383.43f, -50.34f, 121.54f;
					break;
				case 156:
					return -1022.8f, -434.35f, 76.37f;
					break;
				case 157:
					return -579.71f, -717.74f, 128.89f;
					break;
				case 158:
					return -1017.83f, -767.05f, 75.54f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_463(var uParam0, char* sParam1, var uParam2)//Position - 0x531F9
{
	StringCopy(sParam1, "FHQ_BUZZ_T" /* GXT: AGENCY BUZZER */, 16);
	(*uParam2)[0] = "FHQ_BUZZ_RC" /* GXT: Someone is buzzing your Agency. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer. */;
	(*uParam2)[1] = "FHQ_BUZZ_R0" /* GXT: Let ~a~ into your Agency. */;
}

void func_464(var uParam0, char* sParam1, var uParam2)//Position - 0x5321B
{
	StringCopy(sParam1, "FHQ_ENT_BT" /* GXT: AGENCY OPTIONS */, 16);
	(*uParam2)[0] = "FHQ_E_O_3" /* GXT: Agency */;
	(*uParam2)[1] = "FHQ_BUZZ_ENT" /* GXT: Enter your Agency. */;
	(*uParam2)[2] = "FHQ_BUZZ_D0" /* GXT: Request access to the Agency. */;
}

int func_465(int iParam0, int iParam1)//Position - 0x53341
{
	if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false)))
	{
		return 0;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iParam0, 2))
	{
		return 1;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_466(struct<2> Param0, struct<2> Param1)//Position - 0x5351B
{
	if (Param0.f_1 != -1 && Param1.f_1 != -1)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return 0;
}

bool func_467(struct<2> Param0)//Position - 0x535A0
{
	return (Param0.f_1 != -1 && Param0.f_0 != __LIB_0__.func_160());
}

int func_468(int iParam0)//Position - 0x5362E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<27> Var4;
	var uVar5[26];
	iVar0 = 27;
	iVar1 = 27;
	iVar2 = 26;
	iVar3 = 26;
	if (iVar0 != iVar1)
	{
		return 0;
	}
	if (iVar3 != iVar2)
	{
	}
	Var4 = 26;
	Var4.f_2 = 1;
	Var4.f_3 = 1;
	Var4.f_4 = 1;
	Var4.f_5 = 1;
	Var4.f_6 = 1;
	Var4.f_7 = 1;
	Var4.f_8 = 1;
	Var4.f_9 = 1;
	Var4.f_10 = 1;
	Var4.f_11 = 1;
	Var4.f_12 = 1;
	Var4.f_13 = 1;
	Var4.f_14 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_17 = 1;
	Var4.f_18 = 1;
	Var4.f_19 = 1;
	Var4.f_20 = 1;
	Var4.f_21 = 1;
	Var4.f_22 = 1;
	Var4.f_23 = 1;
	Var4.f_24 = 1;
	Var4.f_25 = 1;
	Var4.f_26 = 1;
	MISC::COPY_SCRIPT_STRUCT(&uVar5, &Var4, 27);
	return uVar5[iParam0];
}

int func_469(int iParam0)//Position - 0x539EE
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_480 != 0;
	}
	return 0;
}

int func_470(var uParam0, var uParam1)//Position - 0x53A14
{
	if (BitTest(Global_1946250.f_10, 28))
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x53E02
{
	int iVar0;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			if (DECORATOR::DECOR_GET_INT(iParam0, "Not_Allow_As_Saved_Veh") != 0)
			{
				return 1;
			}
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 20))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_472(int iParam0)//Position - 0x53F58
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x53FB7
{
	switch (iParam0)
	{
		case 271:
			return 1;
		default:
	}
	return 0;
}

bool func_474(int iParam0)//Position - 0x53FD1
{
	return Global_1853348[iParam0 /*834*/].f_267.f_480 != 0;
}

int func_475()//Position - 0x5405A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			iVar0 = -1;
			while (iVar0 <= 8)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, iVar0, true))
				{
					iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, iVar0, true);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!PED::IS_PED_A_PLAYER(iVar2))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x540C6
{
	if (__LIB_1__.func_182(iParam0) == 146)
	{
		if (iParam0 == Global_2815059.f_5120)
		{
			return 1;
		}
	}
	return 0;
}

int func_477()//Position - 0x540F6
{
	int iVar0;
	if (Global_32110)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_478()//Position - 0x54160
{
	return BitTest(Global_2715699.f_1.f_2810, 4);
}

int func_479(int iParam0)//Position - 0x546FB
{
	if (iParam0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0)//Position - 0x5470E
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_26;
	}
	return -1;
}

void func_481()//Position - 0x548E7
{
	Global_2815059.f_841 = 1;
}

bool func_482()//Position - 0x548F7
{
	return BitTest(Global_1946250.f_5, 12);
}

int func_483(int iParam0)//Position - 0x549E1
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, false));
			if (((VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_484(bool bParam0, int iParam1)//Position - 0x54BAD
{
	if (bParam0)
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_17 = iParam1;
	}
	else
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_17 = -1;
	}
}

int func_485(int iParam0, int iParam1)//Position - 0x5A5C1
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("faction3"):
			return joaat("faction");
			break;
		case joaat("buccaneer2"):
			return joaat("buccaneer");
			break;
		case joaat("chino2"):
			return joaat("chino");
			break;
		case joaat("moonbeam2"):
			return joaat("moonbeam");
			break;
		case joaat("primo2"):
			return joaat("primo");
			break;
		case joaat("voodoo"):
			return joaat("voodoo2");
			break;
		case joaat("sabregt2"):
			return joaat("sabregt");
			break;
		case joaat("tornado5"):
			return joaat("tornado");
			break;
		case joaat("virgo2"):
			return joaat("virgo3");
			break;
		case joaat("minivan2"):
			return joaat("minivan");
			break;
		case joaat("slamvan3"):
			return joaat("slamvan");
			break;
		case joaat("sultanrs"):
			return joaat("sultan");
			break;
		case joaat("banshee2"):
			return joaat("banshee");
			break;
		case joaat("comet3"):
			return joaat("comet2");
			break;
		case joaat("diablous2"):
			return joaat("diablous");
			break;
		case joaat("fcr2"):
			return joaat("fcr");
			break;
		case joaat("italigtb2"):
			return joaat("italigtb");
			break;
		case joaat("specter2"):
			return joaat("specter");
			break;
		case joaat("nero2"):
			return joaat("nero");
			break;
		case joaat("elegy"):
			return joaat("elegy2");
			break;
		case joaat("technical3"):
			return joaat("technical");
			break;
		case joaat("insurgent3"):
			return joaat("insurgent");
			break;
		case joaat("monster3"):
			if (iParam1 == 0)
			{
				return joaat("monster4");
			}
			else if (iParam1 == 1)
			{
				return joaat("monster5");
			}
			break;
		case joaat("monster5"):
			if (iParam1 == 0)
			{
				return joaat("monster3");
			}
			else if (iParam1 == 1)
			{
				return joaat("monster4");
			}
			break;
		case joaat("monster4"):
			if (iParam1 == 0)
			{
				return joaat("monster3");
			}
			else if (iParam1 == 1)
			{
				return joaat("monster5");
			}
			break;
		case joaat("bruiser"):
			if (iParam1 == 0)
			{
				return joaat("glendale");
			}
			else if (iParam1 == 1)
			{
				return joaat("bruiser2");
			}
			else if (iParam1 == 2)
			{
				return joaat("bruiser3");
			}
			break;
		case joaat("bruiser2"):
			if (iParam1 == 0)
			{
				return joaat("bruiser");
			}
			else if (iParam1 == 1)
			{
				return joaat("bruiser3");
			}
			break;
		case joaat("bruiser3"):
			if (iParam1 == 0)
			{
				return joaat("bruiser");
			}
			else if (iParam1 == 1)
			{
				return joaat("bruiser2");
			}
			break;
		case joaat("impaler2"):
			if (iParam1 == 0)
			{
				return joaat("impaler");
			}
			else if (iParam1 == 1)
			{
				return joaat("impaler3");
			}
			else if (iParam1 == 2)
			{
				return joaat("impaler4");
			}
			break;
		case joaat("impaler4"):
			if (iParam1 == 0)
			{
				return joaat("impaler");
			}
			else if (iParam1 == 1)
			{
				return joaat("impaler2");
			}
			else if (iParam1 == 2)
			{
				return joaat("impaler3");
			}
			break;
		case joaat("impaler3"):
			if (iParam1 == 0)
			{
				return joaat("impaler");
			}
			else if (iParam1 == 1)
			{
				return joaat("impaler2");
			}
			else if (iParam1 == 2)
			{
				return joaat("impaler4");
			}
			break;
		case joaat("issi4"):
			if (iParam1 == 0)
			{
				return joaat("issi3");
			}
			else if (iParam1 == 1)
			{
				return joaat("issi5");
			}
			else if (iParam1 == 2)
			{
				return joaat("issi6");
			}
			break;
		case joaat("issi6"):
			if (iParam1 == 0)
			{
				return joaat("issi4");
			}
			else if (iParam1 == 1)
			{
				return joaat("issi5");
			}
			break;
		case joaat("issi5"):
			if (iParam1 == 0)
			{
				return joaat("issi4");
			}
			else if (iParam1 == 1)
			{
				return joaat("issi6");
			}
			break;
		case joaat("deathbike"):
			if (iParam1 == 0)
			{
				return joaat("gargoyle");
			}
			else if (iParam1 == 1)
			{
				return joaat("deathbike2");
			}
			else if (iParam1 == 2)
			{
				return joaat("deathbike3");
			}
			break;
		case joaat("dominator4"):
			if (iParam1 == 0)
			{
				return joaat("dominator");
			}
			else if (iParam1 == 1)
			{
				return joaat("dominator2");
			}
			else if (iParam1 == 2)
			{
				return joaat("dominator5");
			}
			else if (iParam1 == 3)
			{
				return joaat("dominator6");
			}
			break;
		case joaat("dominator5"):
			if (iParam1 == 0)
			{
				return joaat("dominator4");
			}
			else if (iParam1 == 1)
			{
				return joaat("dominator6");
			}
			break;
		case joaat("dominator6"):
			if (iParam1 == 0)
			{
				return joaat("dominator4");
			}
			else if (iParam1 == 1)
			{
				return joaat("dominator5");
			}
			break;
		case joaat("imperator"):
			if (iParam1 == 0)
			{
				return joaat("imperator2");
			}
			else if (iParam1 == 1)
			{
				return joaat("imperator3");
			}
			break;
		case joaat("imperator2"):
			if (iParam1 == 0)
			{
				return joaat("imperator");
			}
			else if (iParam1 == 1)
			{
				return joaat("imperator3");
			}
			break;
		case joaat("imperator3"):
			if (iParam1 == 0)
			{
				return joaat("imperator");
			}
			else if (iParam1 == 1)
			{
				return joaat("imperator2");
			}
			break;
		case joaat("deathbike2"):
			if (iParam1 == 0)
			{
				return joaat("deathbike");
			}
			else if (iParam1 == 1)
			{
				return joaat("deathbike3");
			}
			break;
		case joaat("deathbike3"):
			if (iParam1 == 0)
			{
				return joaat("deathbike");
			}
			else if (iParam1 == 1)
			{
				return joaat("deathbike2");
			}
			break;
		case joaat("zr380"):
			if (iParam1 == 0)
			{
				return joaat("zr3802");
			}
			else if (iParam1 == 1)
			{
				return joaat("zr3803");
			}
			break;
		case joaat("zr3802"):
			if (iParam1 == 0)
			{
				return joaat("zr380");
			}
			else if (iParam1 == 1)
			{
				return joaat("zr3803");
			}
			break;
		case joaat("zr3803"):
			if (iParam1 == 0)
			{
				return joaat("zr380");
			}
			else if (iParam1 == 1)
			{
				return joaat("zr3802");
			}
			break;
		case joaat("cerberus"):
			if (iParam1 == 0)
			{
				return joaat("cerberus2");
			}
			else if (iParam1 == 1)
			{
				return joaat("cerberus3");
			}
			break;
		case joaat("cerberus2"):
			if (iParam1 == 0)
			{
				return joaat("cerberus");
			}
			else if (iParam1 == 1)
			{
				return joaat("cerberus3");
			}
			break;
		case joaat("cerberus3"):
			if (iParam1 == 0)
			{
				return joaat("cerberus");
			}
			else if (iParam1 == 1)
			{
				return joaat("cerberus2");
			}
			break;
		case joaat("scarab"):
			if (iParam1 == 0)
			{
				return joaat("scarab2");
			}
			else if (iParam1 == 1)
			{
				return joaat("scarab3");
			}
			break;
		case joaat("scarab2"):
			if (iParam1 == 0)
			{
				return joaat("scarab");
			}
			else if (iParam1 == 1)
			{
				return joaat("scarab3");
			}
			break;
		case joaat("scarab3"):
			if (iParam1 == 0)
			{
				return joaat("scarab");
			}
			else if (iParam1 == 1)
			{
				return joaat("scarab2");
			}
			break;
		case joaat("slamvan4"):
			if (iParam1 == 0)
			{
				return joaat("slamvan");
			}
			else if (iParam1 == 1)
			{
				return joaat("slamvan5");
			}
			else if (iParam1 == 2)
			{
				return joaat("slamvan6");
			}
			break;
		case joaat("slamvan5"):
			if (iParam1 == 0)
			{
				return joaat("slamvan");
			}
			else if (iParam1 == 1)
			{
				return joaat("slamvan4");
			}
			else if (iParam1 == 2)
			{
				return joaat("slamvan6");
			}
			break;
		case joaat("slamvan6"):
			if (iParam1 == 0)
			{
				return joaat("slamvan");
			}
			else if (iParam1 == 1)
			{
				return joaat("slamvan4");
			}
			else if (iParam1 == 2)
			{
				return joaat("slamvan5");
			}
			break;
		case joaat("brutus"):
			if (iParam1 == 0)
			{
				return joaat("brutus2");
			}
			else if (iParam1 == 1)
			{
				return joaat("brutus3");
			}
			break;
		case joaat("brutus2"):
			if (iParam1 == 0)
			{
				return joaat("brutus");
			}
			else if (iParam1 == 1)
			{
				return joaat("brutus3");
			}
			break;
		case joaat("brutus3"):
			if (iParam1 == 0)
			{
				return joaat("brutus");
			}
			else if (iParam1 == 1)
			{
				return joaat("brutus2");
			}
			break;
		case joaat("youga3"):
			return joaat("youga2");
			break;
		case joaat("gauntlet5"):
			return joaat("gauntlet3");
			break;
		case joaat("manana2"):
			return joaat("manana");
			break;
		case joaat("peyote3"):
			return joaat("peyote");
		case joaat("yosemite3"):
			return joaat("yosemite");
		case joaat("glendale2"):
			return joaat("glendale");
		case joaat("tenf2"):
			return joaat("tenf");
		case joaat("weevil2"):
			return joaat("weevil");
		case joaat("brioso3"):
			return joaat("brioso2");
		case joaat("sentinel4"):
			return joaat("sentinel3");
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x5B9CD
{
	int iVar0;
	struct<2> Var1;
	iVar0 = 0;
	while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
	{
		if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
		{
			if (iParam0 == Var1.f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_487(int iParam0, int iParam1)//Position - 0x5C581
{
	if ((((iParam1 == 103 && Global_1853348[iParam0 /*834*/].f_267[5] == 87) || (iParam1 == 106 && Global_1853348[iParam0 /*834*/].f_267[5] == 88)) || (iParam1 == 109 && Global_1853348[iParam0 /*834*/].f_267[5] == 89)) || (iParam1 == 112 && Global_1853348[iParam0 /*834*/].f_267[5] == 90))
	{
		if (Global_1853348[iParam0 /*834*/].f_267[8] == 103)
		{
			return 1;
		}
	}
	if ((((iParam1 == 104 && Global_1853348[iParam0 /*834*/].f_267[5] == 87) || (iParam1 == 107 && Global_1853348[iParam0 /*834*/].f_267[5] == 88)) || (iParam1 == 110 && Global_1853348[iParam0 /*834*/].f_267[5] == 89)) || (iParam1 == 113 && Global_1853348[iParam0 /*834*/].f_267[5] == 90))
	{
		if (Global_1853348[iParam0 /*834*/].f_267[9] == 104)
		{
			return 1;
		}
	}
	if ((((iParam1 == 105 && Global_1853348[iParam0 /*834*/].f_267[5] == 87) || (iParam1 == 108 && Global_1853348[iParam0 /*834*/].f_267[5] == 88)) || (iParam1 == 111 && Global_1853348[iParam0 /*834*/].f_267[5] == 89)) || (iParam1 == 114 && Global_1853348[iParam0 /*834*/].f_267[5] == 90))
	{
		if (Global_1853348[iParam0 /*834*/].f_267[10] == 105)
		{
			return 1;
		}
	}
	return 0;
}

void func_488(var uParam0)//Position - 0x5C946
{
	int iVar0;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_489(var uParam0, int iParam1)//Position - 0x5C96E
{
	switch (iParam1)
	{
		case 1:
			(*uParam0)[0] = 1;
			(*uParam0)[1] = 2;
			(*uParam0)[2] = 3;
			(*uParam0)[3] = 4;
			(*uParam0)[4] = 61;
			(*uParam0)[5] = 83;
			(*uParam0)[6] = 84;
			(*uParam0)[7] = 85;
			uParam0->f_9 = 8;
			break;
		case 2:
			(*uParam0)[0] = 5;
			(*uParam0)[1] = 6;
			uParam0->f_9 = 2;
			break;
		case 3:
			(*uParam0)[0] = 7;
			(*uParam0)[1] = 34;
			(*uParam0)[2] = 62;
			uParam0->f_9 = 3;
			break;
		case 4:
			(*uParam0)[0] = 35;
			(*uParam0)[1] = 36;
			(*uParam0)[2] = 37;
			uParam0->f_9 = 3;
			break;
		case 5:
			(*uParam0)[0] = 38;
			(*uParam0)[1] = 39;
			(*uParam0)[2] = 65;
			uParam0->f_9 = 3;
			break;
		case 6:
			(*uParam0)[0] = 40;
			(*uParam0)[1] = 41;
			(*uParam0)[2] = 63;
			uParam0->f_9 = 3;
			break;
		case 7:
			(*uParam0)[0] = 42;
			(*uParam0)[1] = 43;
			(*uParam0)[2] = 64;
			uParam0->f_9 = 3;
			break;
		case 8:
			(*uParam0)[0] = 8;
			uParam0->f_9 = 1;
			break;
		case 9:
			(*uParam0)[0] = 9;
			uParam0->f_9 = 1;
			break;
		case 10:
			(*uParam0)[0] = 10;
			uParam0->f_9 = 1;
			break;
		case 11:
			(*uParam0)[0] = 11;
			uParam0->f_9 = 1;
			break;
		case 12:
			(*uParam0)[0] = 12;
			uParam0->f_9 = 1;
			break;
		case 13:
			(*uParam0)[0] = 13;
			uParam0->f_9 = 1;
			break;
		case 14:
			(*uParam0)[0] = 14;
			uParam0->f_9 = 1;
			break;
		case 15:
			(*uParam0)[0] = 15;
			uParam0->f_9 = 1;
			break;
		case 16:
			(*uParam0)[0] = 16;
			uParam0->f_9 = 1;
			break;
		case 17:
			(*uParam0)[0] = 17;
			uParam0->f_9 = 1;
			break;
		case 18:
			(*uParam0)[0] = 18;
			uParam0->f_9 = 1;
			break;
		case 19:
			(*uParam0)[0] = 19;
			uParam0->f_9 = 1;
			break;
		case 20:
			(*uParam0)[0] = 20;
			uParam0->f_9 = 1;
			break;
		case 21:
			(*uParam0)[0] = 21;
			uParam0->f_9 = 1;
			break;
		case 22:
			(*uParam0)[0] = 22;
			uParam0->f_9 = 1;
			break;
		case 23:
			(*uParam0)[0] = 23;
			uParam0->f_9 = 1;
			break;
		case 24:
			(*uParam0)[0] = 24;
			uParam0->f_9 = 1;
			break;
		case 25:
			(*uParam0)[0] = 25;
			uParam0->f_9 = 1;
			break;
		case 26:
			(*uParam0)[0] = 26;
			uParam0->f_9 = 1;
			break;
		case 27:
			(*uParam0)[0] = 27;
			uParam0->f_9 = 1;
			break;
		case 28:
			(*uParam0)[0] = 28;
			uParam0->f_9 = 1;
			break;
		case 29:
			(*uParam0)[0] = 29;
			uParam0->f_9 = 1;
			break;
		case 30:
			(*uParam0)[0] = 30;
			uParam0->f_9 = 1;
			break;
		case 31:
			(*uParam0)[0] = 31;
			uParam0->f_9 = 1;
			break;
		case 32:
			(*uParam0)[0] = 32;
			uParam0->f_9 = 1;
			break;
		case 33:
			(*uParam0)[0] = 33;
			uParam0->f_9 = 1;
			break;
		case 34:
			(*uParam0)[0] = 44;
			uParam0->f_9 = 1;
			break;
		case 35:
			(*uParam0)[0] = 45;
			uParam0->f_9 = 1;
			break;
		case 36:
			(*uParam0)[0] = 46;
			uParam0->f_9 = 1;
			break;
		case 37:
			(*uParam0)[0] = 47;
			uParam0->f_9 = 1;
			break;
		case 38:
			(*uParam0)[0] = 48;
			uParam0->f_9 = 1;
			break;
		case 39:
			(*uParam0)[0] = 49;
			uParam0->f_9 = 1;
			break;
		case 40:
			(*uParam0)[0] = 50;
			uParam0->f_9 = 1;
			break;
		case 41:
			(*uParam0)[0] = 51;
			uParam0->f_9 = 1;
			break;
		case 42:
			(*uParam0)[0] = 52;
			uParam0->f_9 = 1;
			break;
		case 43:
			(*uParam0)[0] = 53;
			uParam0->f_9 = 1;
			break;
		case 44:
			(*uParam0)[0] = 54;
			uParam0->f_9 = 1;
			break;
		case 45:
			(*uParam0)[0] = 55;
			uParam0->f_9 = 1;
			break;
		case 46:
			(*uParam0)[0] = 56;
			uParam0->f_9 = 1;
			break;
		case 47:
			(*uParam0)[0] = 57;
			uParam0->f_9 = 1;
			break;
		case 48:
			(*uParam0)[0] = 58;
			uParam0->f_9 = 1;
			break;
		case 49:
			(*uParam0)[0] = 59;
			uParam0->f_9 = 1;
			break;
		case 50:
			(*uParam0)[0] = 60;
			uParam0->f_9 = 1;
			break;
		case 51:
			(*uParam0)[0] = 66;
			uParam0->f_9 = 1;
			break;
		case 52:
			(*uParam0)[0] = 67;
			uParam0->f_9 = 1;
			break;
		case 53:
			(*uParam0)[0] = 68;
			uParam0->f_9 = 1;
			break;
		case 54:
			(*uParam0)[0] = 69;
			uParam0->f_9 = 1;
			break;
		case 55:
			(*uParam0)[0] = 70;
			uParam0->f_9 = 1;
			break;
		case 56:
			(*uParam0)[0] = 71;
			uParam0->f_9 = 1;
			break;
		case 57:
			(*uParam0)[0] = 72;
			uParam0->f_9 = 1;
			break;
		case 58:
			(*uParam0)[0] = 73;
			uParam0->f_9 = 1;
			break;
		case 59:
			(*uParam0)[0] = 74;
			uParam0->f_9 = 1;
			break;
		case 60:
			(*uParam0)[0] = 75;
			uParam0->f_9 = 1;
			break;
		case 61:
			(*uParam0)[0] = 76;
			uParam0->f_9 = 1;
			break;
		case 62:
			(*uParam0)[0] = 77;
			uParam0->f_9 = 1;
			break;
		case 63:
			(*uParam0)[0] = 78;
			uParam0->f_9 = 1;
			break;
		case 64:
			(*uParam0)[0] = 79;
			uParam0->f_9 = 1;
			break;
		case 65:
			(*uParam0)[0] = 80;
			uParam0->f_9 = 1;
			break;
		case 66:
			(*uParam0)[0] = 81;
			uParam0->f_9 = 1;
			break;
		case 67:
			(*uParam0)[0] = 82;
			uParam0->f_9 = 1;
			break;
		case 68:
			(*uParam0)[0] = 87;
			(*uParam0)[1] = 103;
			(*uParam0)[2] = 104;
			(*uParam0)[3] = 105;
			uParam0->f_9 = 4;
			break;
		case 69:
			(*uParam0)[0] = 88;
			(*uParam0)[1] = 106;
			(*uParam0)[2] = 107;
			(*uParam0)[3] = 108;
			uParam0->f_9 = 4;
			break;
		case 70:
			(*uParam0)[0] = 89;
			(*uParam0)[1] = 109;
			(*uParam0)[2] = 110;
			(*uParam0)[3] = 111;
			uParam0->f_9 = 4;
			break;
		case 71:
			(*uParam0)[0] = 90;
			(*uParam0)[1] = 112;
			(*uParam0)[2] = 113;
			(*uParam0)[3] = 114;
			uParam0->f_9 = 4;
			break;
		case 72:
			(*uParam0)[0] = 91;
			uParam0->f_9 = 1;
			break;
		case 73:
			(*uParam0)[0] = 92;
			uParam0->f_9 = 1;
			break;
		case 74:
			(*uParam0)[0] = 93;
			uParam0->f_9 = 1;
			break;
		case 75:
			(*uParam0)[0] = 94;
			uParam0->f_9 = 1;
			break;
		case 76:
			(*uParam0)[0] = 95;
			uParam0->f_9 = 1;
			break;
		case 77:
			(*uParam0)[0] = 96;
			uParam0->f_9 = 1;
			break;
		case 78:
			(*uParam0)[0] = 97;
			uParam0->f_9 = 1;
			break;
		case 79:
			(*uParam0)[0] = 98;
			uParam0->f_9 = 1;
			break;
		case 80:
			(*uParam0)[0] = 99;
			uParam0->f_9 = 1;
			break;
		case 81:
			(*uParam0)[0] = 100;
			uParam0->f_9 = 1;
			break;
		case 82:
			(*uParam0)[0] = 101;
			uParam0->f_9 = 1;
			break;
		case 83:
			(*uParam0)[0] = 102;
			uParam0->f_9 = 1;
			break;
	}
}

int func_490(int iParam0)//Position - 0x5D5A3
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return 1;
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x5D6D7
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		default:
	}
	return 0;
}

int func_492(int iParam0)//Position - 0x5D73F
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		default:
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x5D84D
{
	if (iParam0 == 117)
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x5D933
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("rallytruck"):
			return 0;
			break;
	}
	return 1;
}

float func_495(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x5E0C5
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

void func_496(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x5E0E1
{
	struct<3> Var0;
	struct<2> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var1);
	Var2.f_0 = Var0.f_0;
	Var2.f_1 = Var1.f_1;
	Var2.f_2 = Var0.f_2;
	Var3.f_0 = Var1.f_0;
	Var3.f_1 = Var1.f_1;
	Var3.f_2 = Var0.f_2;
	Var4.f_0 = Var0.f_0;
	Var4.f_1 = Var0.f_1;
	Var4.f_2 = Var0.f_2;
	Var5.f_0 = Var1.f_0;
	Var5.f_1 = Var0.f_1;
	Var5.f_2 = Var0.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var3) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var5) };
}

void func_497(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x5E17B
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var1);
	Var2.f_0 = Var0.f_0;
	Var2.f_1 = Var1.f_1;
	Var2.f_2 = Var1.f_2;
	Var3 = { Var1 };
	Var4.f_0 = Var0.f_0;
	Var4.f_1 = Var0.f_1;
	Var4.f_2 = Var1.f_2;
	Var5.f_0 = Var1.f_0;
	Var5.f_1 = Var0.f_1;
	Var5.f_2 = Var1.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var2) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var3) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var5) };
}

bool func_498(var uParam0)//Position - 0x5E2DE
{
	return BitTest(uParam0->f_3, 2);
}

bool func_499()//Position - 0x5E78D
{
	return Global_1963987;
}

bool func_500()//Position - 0x5E9E0
{
	return Global_2714762.f_20;
}

char* func_501(int iParam0)//Position - 0x5EF53
{
	switch (iParam0)
	{
		case 155:
			return "sf_plaque_hw1_08";
			break;
		case 156:
			return "sf_plaque_bh1_05";
			break;
		case 157:
			return "sf_plaque_kt1_08";
			break;
		case 158:
			return "sf_plaque_kt1_05";
			break;
	}
	return "";
}

int func_502()//Position - 0x5F057
{
	return Global_1946250.f_4547;
}

bool func_503()//Position - 0x5F066
{
	return Global_1946250.f_4547 > -1;
}

int func_504(int iParam0, int iParam1)//Position - 0x5F077
{
	switch (iParam1)
	{
		case 0:
		case 1:
			return joaat("prop_ld_keypad_01");
			break;
		case 2:
			return joaat("hei_prop_bank_cctv_02");
			break;
		case 3:
			if (iParam0 == 157)
			{
				return joaat("prop_cctv_cam_01a");
			}
			return joaat("ba_prop_battle_cctv_cam_01a");
		case 4:
			if (iParam0 == 157)
			{
				return joaat("hei_prop_bank_cctv_02");
			}
			return joaat("ba_prop_battle_cctv_cam_01a");
			break;
	}
	return 0;
}

void func_505(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x5F0EC
{
	switch (iParam0)
	{
		case 155:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 391.451f, -75.35263f, 68.45f };
					*uParam2 = { 0f, 0f, -20f };
					break;
				case 1:
					*uParam1 = { 383.075f, -50.15f, 122.825f };
					*uParam2 = { 0f, 0f, 60f };
					break;
				case 2:
					*uParam1 = { 384.226f, -72.47763f, 70.02846f };
					*uParam2 = { -90f, 0f, -20f };
					break;
				case 3:
					*uParam1 = { 356.2125f, -81.8875f, 69.925f };
					*uParam2 = { 0f, 0f, 70f };
					break;
				case 4:
					*uParam1 = { 381.575f, -52.725f, 124.3125f };
					*uParam2 = { 0f, 0f, 59.25f };
					break;
			}
			break;
		case 156:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -1018.961f, -415.1118f, 39.85159f };
					*uParam2 = { 0f, 0f, -153.5f };
					break;
				case 1:
					*uParam1 = { -1022.427f, -434.1618f, 77.635f };
					*uParam2 = { 0f, 0f, -62.75f };
					break;
				case 2:
					*uParam1 = { -1013.557f, -412.375f, 42f };
					*uParam2 = { -90f, 0f, -150.5f };
					break;
				case 3:
					*uParam1 = { -1028.453f, -410.4f, 34.825f };
					*uParam2 = { 0f, 0f, -152.5f };
					break;
				case 4:
					*uParam1 = { -1024.046f, -430.9875f, 78.7875f };
					*uParam2 = { 0f, 0f, -63f };
					break;
			}
			break;
		case 157:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -591.108f, -708.4575f, 36.55f };
					*uParam2 = { 0f, 0f, -180f };
					break;
				case 1:
					*uParam1 = { -579.2225f, -717.75f, 130.1625f };
					*uParam2 = { 0f, 0f, -90f };
					break;
				case 2:
					*uParam1 = { -586.0375f, -706.8125f, 38.4875f };
					*uParam2 = { -90f, 0f, -90f };
					break;
				case 3:
					*uParam1 = { -619.9575f, -729.75f, 29.4875f };
					*uParam2 = { 0f, 0f, 0f };
					break;
				case 4:
					*uParam1 = { -579.2125f, -712.55f, 131.625f };
					*uParam2 = { -90f, 0f, -90f };
					break;
			}
			break;
		case 158:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -1038.136f, -758.0125f, 20.1075f };
					*uParam2 = { 0f, 0f, -90f };
					break;
				case 1:
					*uParam1 = { -1017.346f, -767.0375f, 76.8f };
					*uParam2 = { 0f, 0f, -90f };
					break;
				case 2:
					*uParam1 = { -1038.554f, -752.5875f, 22.1375f };
					*uParam2 = { 90f, 45f, 90f };
					break;
				case 3:
					*uParam1 = { -992.055f, -772.05f, 19f };
					*uParam2 = { 0f, 0f, 90f };
					break;
				case 4:
					*uParam1 = { -1021.534f, -764.0625f, 78.1625f };
					*uParam2 = { 0f, 0f, 0f };
					break;
			}
			break;
	}
}

void func_506(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x60D7D
{
	switch (iParam0)
	{
		case 155:
			*uParam1 = { 427.5123f, -160.5509f, 103.1491f };
			*uParam2 = { -1.0657f, 0f, 20.9943f };
			*uParam3 = 50f;
			*uParam4 = 0.2f;
			break;
		case 156:
			*uParam1 = { -1033.5122f, -318.5802f, 68.0958f };
			*uParam2 = { -11.6218f, 0f, -170.781f };
			*uParam3 = 50f;
			*uParam4 = 0.2f;
			break;
		case 157:
			*uParam1 = { -628.0563f, -568.3111f, 94.1208f };
			*uParam2 = { -8.7356f, 0f, -165.3025f };
			*uParam3 = 50f;
			*uParam4 = 0.2f;
			break;
		case 158:
			*uParam1 = { -1157.1329f, -772.0897f, 79.3577f };
			*uParam2 = { -12.2731f, 0f, -81.5029f };
			*uParam3 = 40.1457f;
			*uParam4 = 0.2f;
			break;
	}
}

void func_507(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x60FF5
{
	switch (iParam0)
	{
		case 155:
			switch (iParam6)
			{
				case 2:
					*uParam2 = { 356.677f, -79.67894f, 65.79122f };
					*uParam3 = { 360.38672f, -68.97014f, 69.22055f };
					*uParam4 = 5.25f;
					*uParam1 = { 359.35f, -74.67f, 66.12f };
					*uParam5 = 67.5064f;
					break;
			}
			break;
		case 156:
			switch (iParam6)
			{
				case 2:
					*uParam2 = { -1029.0083f, -411.0182f, 32.033886f };
					*uParam3 = { -1032.8182f, -412.8707f, 34.710655f };
					*uParam4 = 4f;
					*uParam1 = { -1031.25f, -411.55f, 32.27f };
					*uParam5 = 209.2887f;
					break;
			}
			break;
		case 157:
			switch (iParam6)
			{
				case 2:
					*uParam2 = { -615.075f, -736.23285f, 26.586899f };
					*uParam3 = { -614.9235f, -740.30756f, 29.301296f };
					*uParam4 = 4f;
					*uParam1 = { -615.77f, -738.3f, 26.86f };
					*uParam5 = 270f;
					break;
			}
			break;
		case 158:
			switch (iParam6)
			{
				case 2:
					*uParam2 = { -990.9838f, -763.8625f, 14.364941f };
					*uParam3 = { -983.2039f, -763.9245f, 17.613226f };
					*uParam4 = 5.9375f;
					*uParam1 = { -986.94f, -765.11f, 14.74f };
					*uParam5 = 0f;
					break;
			}
			break;
	}
}

void func_508(int iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4)//Position - 0x61180
{
	HUD::GET_HUD_COLOUR(9, iParam1, iParam2, iParam3, iParam4);
	*iParam4 = 100;
}

bool func_509(bool bParam0, int iParam1)//Position - 0x618D5
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_10.f_5, iParam1);
}

int func_510(var uParam0)//Position - 0x618ED
{
	return 7;
}

int func_511(var uParam0)//Position - 0x61B33
{
	return 128;
}

char* func_512(var uParam0)//Position - 0x61B3D
{
	return "MP_FIXER_HQ_1";
}

Vector3 func_513(int iParam0)//Position - 0x61B49
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 6);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[0]), 0);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[0]), 11);
	MISC::SET_BIT(&(Var0[0]), 1);
	MISC::SET_BIT(&(Var0[0]), 19);
	MISC::SET_BIT(&(Var0[0]), 4);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[1]), 0);
	MISC::SET_BIT(&(Var0[1]), 6);
	MISC::SET_BIT(&(Var0[1]), 10);
	MISC::SET_BIT(&(Var0[1]), 7);
	MISC::SET_BIT(&(Var0[1]), 20);
	MISC::SET_BIT(&(Var0[1]), 3);
	MISC::SET_BIT(&(Var0[1]), 21);
	MISC::SET_BIT(&(Var0[1]), 22);
	return Var0;
}

char* func_514(int iParam0, int iParam1)//Position - 0x61D2C
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 155:
				return "hei_shadowsun_hw1_08";
				break;
			case 156:
				return "hei_ShadowSunMesh_BH1_05";
				break;
			case 157:
				return "hei_ShadowSunMesh_KT1_08";
				break;
			case 158:
				return "hei_ShadowSunMesh_KT1_05";
				break;
			default:
				return "";
				break;
			}
	}
	return "";
}

char* func_515(int iParam0, int iParam1)//Position - 0x61D8F
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 155:
				return "sf_fixeroffice_hw1_08";
				break;
			case 156:
				return "sf_fixeroffice_bh1_05";
				break;
			case 157:
				return "sf_fixeroffice_kt1_08";
				break;
			case 158:
				return "sf_fixeroffice_kt1_05";
				break;
			default:
				return "";
				break;
			}
	}
	return "";
}

void func_516(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x61DF2
{
	if (iParam5 == 0)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 1.6f;
				*uParam2 = 180f;
				*uParam3 = { 4.7964f, -13.1159f, 0.0002f };
				*uParam4 = { 2.2617f, -13.0668f, 2.0002f };
				break;
			case 1:
				*uParam1 = 1.6f;
				*uParam2 = 180f;
				*uParam3 = { 2.2482f, -12.9667f, 0.0002f };
				*uParam4 = { -0.1765f, -12.985f, 2.0002f };
				break;
			case 2:
				*uParam1 = 1.6f;
				*uParam2 = 180f;
				*uParam3 = { 5.1173f, -13.5653f, 8.5999f };
				*uParam4 = { 2.8708f, -13.5379f, 10.5999f };
				break;
			case 3:
				*uParam1 = 1.6f;
				*uParam2 = 180f;
				*uParam3 = { 0.5385f, -13.5421f, 8.5999f };
				*uParam4 = { 2.8628f, -13.5289f, 10.5999f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 2.425f;
				*uParam2 = 1f;
				*uParam3 = { -4.6281f, 7.8072f, 0.0003f };
				*uParam4 = { -0.7776f, 7.7847f, 2.3003f };
				break;
			case 1:
				*uParam1 = 2.425f;
				*uParam2 = 1f;
				*uParam3 = { -4.6281f, 7.8072f, 4.4003f };
				*uParam4 = { -0.7776f, 7.7847f, 6.7003f };
				break;
			case 2:
				*uParam1 = 2.425f;
				*uParam2 = 1f;
				*uParam3 = { -4.6281f, 7.8072f, 8.8003f };
				*uParam4 = { -0.7776f, 7.7847f, 11.1003f };
				break;
			case 3:
				*uParam1 = 2.5f;
				*uParam2 = 180f;
				*uParam3 = { 6.7277f, -16.5376f, 0.0002f };
				*uParam4 = { 4.4182f, -16.553f, 2.0045f };
				break;
			case 4:
				*uParam1 = 2.5f;
				*uParam2 = 180f;
				*uParam3 = { 2.0472f, -16.5497f, 0.0002f };
				*uParam4 = { 4.407f, -16.5425f, 2.0002f };
				break;
			case 5:
				*uParam1 = 2.5f;
				*uParam2 = 180f;
				*uParam3 = { 6.7106f, -16.54f, 4.4002f };
				*uParam4 = { 4.4191f, -16.553f, 6.4194f };
				break;
			case 6:
				*uParam1 = 2.5f;
				*uParam2 = 180f;
				*uParam3 = { 2.1104f, -16.5466f, 4.4002f };
				*uParam4 = { 4.4117f, -16.553f, 6.4128f };
				break;
			case 7:
				*uParam1 = 2.5f;
				*uParam2 = 180f;
				*uParam3 = { 6.6978f, -16.5464f, 8.8f };
				*uParam4 = { 4.4166f, -16.5514f, 10.8f };
				break;
			case 8:
				*uParam1 = 2.5f;
				*uParam2 = 180f;
				*uParam3 = { 2.1085f, -16.5437f, 8.8f };
				*uParam4 = { 4.4144f, -16.5504f, 10.8f };
				break;
			}
	}
}

int func_517(int iParam0)//Position - 0x62138
{
	if (iParam0 == 0)
	{
		return 4;
	}
	return 9;
}

void func_518(var uParam0, var uParam1)//Position - 0x6214C
{
	uParam1->f_21 = "AM_MP_FIXER_HQ";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

void func_519(bool bParam0)//Position - 0x62A37
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198, 15))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 15);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198, 15))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_198), 15);
	}
}

void func_520()//Position - 0x62B74
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_298) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2815059.f_298, false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2815059.f_298))
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(Global_2815059.f_298, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_2815059.f_298, true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_2815059.f_298, true);
			Global_2703735.f_61.f_60 = 0;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2815059.f_298);
		}
	}
	else
	{
		Global_2703735.f_61.f_60 = 0;
	}
}

void func_521()//Position - 0x62CBA
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_298) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2815059.f_298, false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2815059.f_298))
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(Global_2815059.f_298, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_2815059.f_298, true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_2815059.f_298, true);
			Global_2703735.f_61.f_56 = 0;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2815059.f_298);
		}
	}
	else
	{
		Global_2703735.f_61.f_56 = 0;
	}
}

void func_522()//Position - 0x62D43
{
	MISC::SET_BIT(&(Global_1946250.f_8), 16);
}

var func_523(var uParam0)//Position - 0x62D57
{
	return BitTest(Global_1946250.f_8, 15);
}

int func_524(var uParam0)//Position - 0x62D68
{
	if (!BitTest(Global_2703735.f_61.f_56, 3) && !BitTest(Global_2703735.f_61.f_60, 3))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_298))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2815059.f_298, false))
	{
		return 0;
	}
	return 1;
}

int func_525(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x62DBA
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 808.2927f, -1879.2704f, 9.0555f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 1:
			*uParam2 = { 816.1741f, -1880.6423f, 8.2235f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 2:
			*uParam2 = { 800.4112f, -1877.8984f, 8.0409f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 3:
			*uParam2 = { 824.0556f, -1882.0143f, 8.1576f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 4:
			*uParam2 = { 792.5297f, -1876.5265f, 8.2561f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 5:
			*uParam2 = { 809.6647f, -1871.3889f, 8.7546f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 6:
			*uParam2 = { 817.5461f, -1872.7609f, 8.2051f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 7:
			*uParam2 = { 801.7832f, -1870.017f, 8.189f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 8:
			*uParam2 = { 825.4276f, -1874.1328f, 8.1987f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 9:
			*uParam2 = { 793.9017f, -1868.645f, 8.2357f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 10:
			*uParam2 = { 811.0367f, -1863.5074f, 8.7689f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 11:
			*uParam2 = { 818.9182f, -1864.8794f, 8.1959f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 12:
			*uParam2 = { 803.1552f, -1862.1355f, 8.1891f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 13:
			*uParam2 = { 826.7996f, -1866.2513f, 8.1803f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 14:
			*uParam2 = { 795.2737f, -1860.7635f, 8.2216f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 15:
			*uParam2 = { 812.4087f, -1855.626f, 8.7829f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 16:
			*uParam2 = { 820.2902f, -1856.9979f, 8.1886f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 17:
			*uParam2 = { 804.5272f, -1854.254f, 8.1929f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 18:
			*uParam2 = { 828.1716f, -1858.3699f, 8.2279f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 19:
			*uParam2 = { 796.6458f, -1852.8821f, 8.2893f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 20:
			*uParam2 = { 813.7807f, -1847.7445f, 8.7969f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 21:
			*uParam2 = { 821.6622f, -1849.1165f, 8.1562f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 22:
			*uParam2 = { 805.8992f, -1846.3726f, 8.2504f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 23:
			*uParam2 = { 829.5436f, -1850.4884f, 8.1501f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 24:
			*uParam2 = { 798.0178f, -1845.0006f, 8.4174f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 25:
			*uParam2 = { 815.1527f, -1839.863f, 8.8108f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 26:
			*uParam2 = { 823.0342f, -1841.235f, 8.1405f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 27:
			*uParam2 = { 807.2712f, -1838.4911f, 8.2516f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 28:
			*uParam2 = { 830.9156f, -1842.6069f, 8.1292f };
			*uParam3 = 350.125f;
			return 1;
			break;
		case 29:
			*uParam2 = { 799.3898f, -1837.1191f, 8.4129f };
			*uParam3 = 350.125f;
			return 1;
			break;
		default:
			return 0;
	}
	return 1;
}

Vector3 func_526(float fParam0)//Position - 0x6396E
{
	if (fParam0 >= 6.5f)
	{
		return 923.6102f, 56.465f, 79.8982f;
	}
	else if (fParam0 >= 4.875f)
	{
		return 923.7418f, 56.447f, 79.8982f;
	}
	else if (fParam0 <= 2.1f)
	{
		return 921.7211f, 54.8358f, 79.8982f;
	}
	else if (fParam0 <= 2.75f)
	{
		return 922.2322f, 55.1365f, 79.8982f;
	}
	else if (fParam0 <= 3.5f)
	{
		return 922.7203f, 55.2826f, 79.8982f;
	}
	return 923.1972f, 55.3635f, 79.8982f;
}

Vector3 func_527()//Position - 0x63A37
{
	return 965.8581f, 42.3771f, 123.1199f;
}

void func_528(bool bParam0)//Position - 0x63C45
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_5, 11))
		{
			MISC::SET_BIT(&(Global_1946250.f_5), 11);
		}
	}
	else if (BitTest(Global_1946250.f_5, 11))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 11);
	}
}

void func_529(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x640D6
{
	switch (iParam0)
	{
		case 154:
			switch (iParam4)
			{
				case 1:
					*uParam1 = { 778.45953f, -1870.1523f, 28.294498f };
					*uParam2 = { 778.90405f, -1864.8406f, 31.485394f };
					*uParam3 = 1.75f;
					break;
				case 3:
					*uParam1 = { 756.90454f, -1840.0155f, 28.302418f };
					*uParam2 = { 756.42773f, -1845.4231f, 31.505926f };
					*uParam3 = 1.75f;
					break;
				case 5:
					*uParam1 = { 756.22845f, -1847.4299f, 28.29157f };
					*uParam2 = { 755.80835f, -1852.7968f, 31.492182f };
					*uParam3 = 1.75f;
					break;
				case 7:
					*uParam1 = { 755.58887f, -1854.89f, 28.291565f };
					*uParam2 = { 755.13446f, -1860.1766f, 31.47979f };
					*uParam3 = 1.75f;
					break;
				case 9:
					*uParam1 = { 748.5336f, -1803.6957f, 28.36608f };
					*uParam2 = { 748.0899f, -1808.5944f, 31.552439f };
					*uParam3 = 1.5f;
					break;
				case 10:
					*uParam1 = { 748.0818f, -1809.9927f, 28.291628f };
					*uParam2 = { 747.62384f, -1814.887f, 31.47912f };
					*uParam3 = 1.5f;
					break;
			}
			break;
	}
}

Vector3 func_530(int iParam0, int iParam1)//Position - 0x6423F
{
	switch (iParam0)
	{
		case 154:
			switch (iParam1)
			{
				case 1:
					return 770.4337f, -1867.8657f, 28.2083f;
					break;
				case 3:
					return 764.2823f, -1843.7294f, 28.2916f;
					break;
				case 5:
					return 762.9415f, -1851.1494f, 28.2916f;
					break;
				case 7:
					return 759.0652f, -1857.2537f, 28.2916f;
					break;
				case 9:
					return 757.6086f, -1805.9791f, 28.2916f;
					break;
				case 10:
					return 757.4571f, -1813.6506f, 28.2916f;
					break;
			}
			break;
	}
	return 932.9553f, -4.2065f, 77.7649f;
}

float func_531(int iParam0, int iParam1)//Position - 0x6430F
{
	switch (iParam0)
	{
		case 154:
			switch (iParam1)
			{
				case 1:
					return 83.9708f;
					break;
				case 3:
					return 265.6487f;
					break;
				case 5:
					return 265.6487f;
					break;
				case 7:
					return 265.6487f;
					break;
				case 9:
					return 264.0071f;
					break;
				case 10:
					return 263.7541f;
					break;
			}
			break;
	}
	return 328.1944f;
}

Vector3 func_532(int iParam0, int iParam1)//Position - 0x64399
{
	switch (iParam0)
	{
		case 154:
			switch (iParam1)
			{
				case 1:
					return 785.4491f, -1868.1067f, 28.2078f;
					break;
				case 3:
					return 748.6603f, -1841.9105f, 28.2916f;
					break;
				case 5:
					return 748.6603f, -1849.6157f, 28.2916f;
					break;
				case 7:
					return 748.6603f, -1857.0468f, 28.2916f;
					break;
				case 9:
					return 742.2817f, -1805.5862f, 28.2916f;
					break;
				case 10:
					return 741.6192f, -1811.7297f, 28.2916f;
					break;
			}
			break;
	}
	return 932.9553f, -4.2065f, 77.7649f;
}

void func_533(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x645C2
{
	switch (iParam0)
	{
		case 154:
			switch (iParam5)
			{
				case 1:
					if (bParam4)
					{
						*uParam1 = { 781.3653f, -1867.6373f, 34.6402f };
						*uParam2 = { -76.5866f, 0.0002f, -94.8908f };
						*uParam3 = 52.9729f;
					}
					else
					{
						*uParam1 = { 781.3682f, -1867.6373f, 34.4291f };
						*uParam2 = { -88.6735f, 0.0002f, -94.8908f };
						*uParam3 = 52.9729f;
					}
					break;
				case 3:
					if (bParam4)
					{
						*uParam1 = { 755.6494f, -1842.3337f, 42.4f };
						*uParam2 = { -81.5082f, 0.0003f, 84.7222f };
						*uParam3 = 49.1566f;
					}
					else
					{
						*uParam1 = { 755.6877f, -1842.3374f, 40.5429f };
						*uParam2 = { -86.3909f, 0.0003f, 84.7222f };
						*uParam3 = 49.1566f;
					}
					break;
				case 5:
					if (bParam4)
					{
						*uParam1 = { 755.103f, -1849.6759f, 42.0458f };
						*uParam2 = { -81.2714f, -0.0001f, 84.7228f };
						*uParam3 = 49.1633f;
					}
					else
					{
						*uParam1 = { 755.0181f, -1849.668f, 40.6918f };
						*uParam2 = { -86.0508f, -0.0001f, 84.7228f };
						*uParam3 = 49.1633f;
					}
					break;
				case 7:
					if (bParam4)
					{
						*uParam1 = { 754.3546f, -1857.4052f, 42.0803f };
						*uParam2 = { -78.1038f, 0f, 84.7226f };
						*uParam3 = 49.164f;
					}
					else
					{
						*uParam1 = { 754.3737f, -1857.407f, 40.2171f };
						*uParam2 = { -82.7042f, 0f, 84.7226f };
						*uParam3 = 49.164f;
					}
					break;
				case 9:
					if (bParam4)
					{
						*uParam1 = { 747.1359f, -1806.0055f, 31.9912f };
						*uParam2 = { -55.1934f, 0f, 83.7685f };
						*uParam3 = 54.7613f;
					}
					else
					{
						*uParam1 = { 747.1359f, -1806.0055f, 31.9912f };
						*uParam2 = { -81.6737f, 0f, 83.7685f };
						*uParam3 = 54.7613f;
					}
					break;
				case 10:
					if (bParam4)
					{
						*uParam1 = { 745.9258f, -1812.2091f, 32.063f };
						*uParam2 = { -58.9147f, 0f, 84.2079f };
						*uParam3 = 57.201f;
					}
					else
					{
						*uParam1 = { 745.9258f, -1812.2091f, 32.063f };
						*uParam2 = { -87.8811f, 0f, 84.2079f };
						*uParam3 = 57.201f;
					}
					break;
			}
			break;
	}
}

void func_534(int iParam0)//Position - 0x64875
{
	if (iParam0 != -1)
	{
		Global_1946250.f_4533.f_1 = iParam0;
	}
	else
	{
		Global_1946250.f_4533.f_1 = -1;
	}
}

void func_535(int iParam0)//Position - 0x648A8
{
	if (iParam0 != -1)
	{
		Global_1946250.f_4533 = iParam0;
	}
	else
	{
		Global_1946250.f_4533 = -1;
	}
}

int func_536(int iParam0)//Position - 0x64A93
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 11);
	}
	return 0;
}

int func_537(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x64AEE
{
	*uParam3 = 20f;
	*uParam4 = 300f;
	*uParam6 = 0;
	switch (iParam0)
	{
		case 154:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 753.187f, -1850.307f, 28.2916f };
					*uParam5 = joaat("prop_boxpile_02b");
					return 1;
					break;
				case 1:
					*uParam2 = { 753.187f, -1850.307f, 28.2916f };
					*uParam5 = joaat("prop_box_wood01a");
					return 1;
					break;
				case 2:
					*uParam2 = { 753.187f, -1850.307f, 28.2916f };
					*uParam5 = joaat("prop_box_wood03a");
					return 1;
					break;
				case 3:
					*uParam2 = { 749.586f, -1864.34f, 28.379f };
					*uParam3 = 0.1f;
					*uParam5 = joaat("prop_box_wood07a");
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_538(var uParam0, var uParam1)//Position - 0x64E7F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, false);
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(false);
		}
	}
}

void func_539(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x64FE4
{
	if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CAR_TA_EXT_T" /* GXT: Test Track */);
		HUD::SET_BLIP_SCALE(*uParam1, 0.8f);
	}
}

Vector3 func_540(var uParam0)//Position - 0x65016
{
	return 747.5443f, -1809.2288f, 28.2916f;
}

int func_541(var uParam0)//Position - 0x6502D
{
	return 778;
}

Vector3 func_542(int iParam0)//Position - 0x650C2
{
	switch (iParam0)
	{
		case 154:
			return 770.1085f, -1827.174f, 48.2917f;
		default:
	}
	return 0f, 0f, 0f;
}

bool func_543()//Position - 0x65106
{
	return __LIB_0__.func_137(31737, -1);
}

int func_544(var uParam0, bool bParam1)//Position - 0x65116
{
	if (bParam1)
	{
		return 5;
	}
	return 7;
}

void func_545(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x65128
{
	if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CAR_MET_BLIP" /* GXT: LS Car Meet */);
		if (!HUD::IS_MISSION_CREATOR_BLIP(*uParam1))
		{
			HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(*uParam1, true);
		}
	}
}

Vector3 func_546(var uParam0)//Position - 0x65158
{
	return 779.5378f, -1867.5258f, 28.2964f;
}

int func_547(var uParam0)//Position - 0x6516F
{
	return 777;
}

void func_548(bool bParam0)//Position - 0x653AE
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_5, 4))
		{
			MISC::SET_BIT(&(Global_1946250.f_5), 4);
		}
	}
	else if (BitTest(Global_1946250.f_5, 4))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 4);
	}
}

void func_549(int iParam0, int iParam1)//Position - 0x653EB
{
	if (Global_1946250.f_4590 != -1 && iParam0 != -1)
	{
	}
	else
	{
		Global_1946250.f_4591 = iParam1;
		Global_1946250.f_4590 = iParam0;
	}
}

bool func_550()//Position - 0x65442
{
	return !BitTest(Global_1946250.f_5, 4);
}

char* func_551()//Position - 0x655CE
{
	return "ShopUI_Title_Los_Santos_Car_Meet";
}

int func_552(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x6654C
{
	switch (iParam3)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 766.4371f, -1763.4393f, 29.3625f };
					*uParam2 = 267.4955f;
					return 1;
					break;
				case 1:
					*uParam1 = { 767.46f, -1762.9282f, 29.3625f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 2:
					*uParam1 = { 769.6495f, -1763.4108f, 28.4028f };
					*uParam2 = 263.4559f;
					return 1;
					break;
				case 3:
					*uParam1 = { 770.5439f, -1762.4114f, 28.4244f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 4:
					*uParam1 = { 771.412f, -1764.1685f, 28.3983f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 5:
					*uParam1 = { 771.4398f, -1759.6747f, 28.4762f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 6:
					*uParam1 = { 772.3966f, -1761.7529f, 28.4464f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 7:
					*uParam1 = { 773.2761f, -1760.3422f, 28.4761f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 8:
					*uParam1 = { 772.7398f, -1763.4707f, 28.4189f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 9:
					*uParam1 = { 773.3835f, -1758.7313f, 28.4957f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 10:
					*uParam1 = { 775.2499f, -1760.3196f, 28.4886f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 11:
					*uParam1 = { 774.882f, -1761.7991f, 28.4611f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 12:
					*uParam1 = { 773.9506f, -1756.9426f, 28.505f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 13:
					*uParam1 = { 774.4133f, -1763.3225f, 28.4321f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 14:
					*uParam1 = { 775.411f, -1758.5142f, 28.5064f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 15:
					*uParam1 = { 777.0307f, -1761.8456f, 28.4734f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 16:
					*uParam1 = { 776.4119f, -1763.2166f, 28.4462f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 17:
					*uParam1 = { 776.7046f, -1759.9456f, 28.5039f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 18:
					*uParam1 = { 774.2799f, -1764.6897f, 28.4076f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 19:
					*uParam1 = { 776.6541f, -1757.5258f, 28.5158f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 20:
					*uParam1 = { 768.5948f, -1760.9738f, 28.4404f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 21:
					*uParam1 = { 770.0656f, -1760.9047f, 28.4484f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 22:
					*uParam1 = { 769.7081f, -1759.2922f, 28.4749f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 23:
					*uParam1 = { 771.5834f, -1756.9005f, 28.4883f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 24:
					*uParam1 = { 769.9863f, -1757.3447f, 28.4839f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 25:
					*uParam1 = { 766.2816f, -1758.4315f, 28.4694f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 26:
					*uParam1 = { 767.7616f, -1759.1681f, 28.468f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 27:
					*uParam1 = { 767.9699f, -1757.0989f, 28.4781f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 28:
					*uParam1 = { 766.0939f, -1760.7665f, 28.4321f };
					*uParam2 = 267.48f;
					return 1;
					break;
				case 29:
					*uParam1 = { 766.5537f, -1755.6692f, 28.4767f };
					*uParam2 = 267.48f;
					return 1;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 743.3644f, -1797.3401f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 1:
					*uParam1 = { 742.908f, -1795.8556f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 2:
					*uParam1 = { 742.0773f, -1798.7184f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 3:
					*uParam1 = { 742.3347f, -1794.654f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 4:
					*uParam1 = { 741.9161f, -1800.2631f, 28.2916f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 5:
					*uParam1 = { 740.9834f, -1795.6342f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 6:
					*uParam1 = { 741.304f, -1793.5789f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 7:
					*uParam1 = { 740.8039f, -1797.4532f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 8:
					*uParam1 = { 741.6805f, -1796.6836f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 9:
					*uParam1 = { 740.521f, -1799.4304f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 10:
					*uParam1 = { 739.3143f, -1796.2478f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 11:
					*uParam1 = { 739.9173f, -1794.4971f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 12:
					*uParam1 = { 739.1259f, -1798.3969f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 13:
					*uParam1 = { 740.9387f, -1801.4473f, 28.2916f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 14:
					*uParam1 = { 738.9479f, -1800.2032f, 28.2916f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 15:
					*uParam1 = { 736.9346f, -1796.8785f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 16:
					*uParam1 = { 737.0015f, -1794.7413f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 17:
					*uParam1 = { 736.7055f, -1799.1385f, 28.2916f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 18:
					*uParam1 = { 738.8239f, -1792.9391f, 28.2917f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 19:
					*uParam1 = { 736.8397f, -1801.5756f, 28.2916f };
					*uParam2 = 84.96f;
					return 1;
					break;
				case 20:
					*uParam1 = { 741.7639f, -1805.6863f, 28.2916f };
					*uParam2 = 162.46f;
					return 1;
					break;
				case 21:
					*uParam1 = { 738.9185f, -1803.4725f, 28.2916f };
					*uParam2 = 174.742f;
					return 1;
					break;
				case 22:
					*uParam1 = { 738.3981f, -1805.7612f, 28.2916f };
					*uParam2 = 170.433f;
					return 1;
					break;
				case 23:
					*uParam1 = { 740.8278f, -1803.1522f, 28.2916f };
					*uParam2 = 171.338f;
					return 1;
					break;
				case 24:
					*uParam1 = { 740.1954f, -1806.2218f, 28.2916f };
					*uParam2 = 174.467f;
					return 1;
					break;
				case 25:
					*uParam1 = { 735.6307f, -1789.9536f, 28.2917f };
					*uParam2 = 355.594f;
					return 1;
					break;
				case 26:
					*uParam1 = { 738.7963f, -1787.8193f, 28.2917f };
					*uParam2 = 351.074f;
					return 1;
					break;
				case 27:
					*uParam1 = { 737.4086f, -1790.147f, 28.2917f };
					*uParam2 = 350.721f;
					return 1;
					break;
				case 28:
					*uParam1 = { 736.7042f, -1787.6915f, 28.2917f };
					*uParam2 = 3.1263f;
					return 1;
					break;
				case 29:
					*uParam1 = { 738.7238f, -1790.5001f, 28.2917f };
					*uParam2 = 3.2789f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_553(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x66F49
{
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 774.1501f, -1862.0875f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 1:
				*uParam1 = { 775.3038f, -1861.3802f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 2:
				*uParam1 = { 773.0775f, -1861.0594f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 3:
				*uParam1 = { 776.6942f, -1862.1182f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 4:
				*uParam1 = { 771.5445f, -1861.5446f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 5:
				*uParam1 = { 773.8427f, -1859.0173f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 6:
				*uParam1 = { 775.7537f, -1859.7452f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 7:
				*uParam1 = { 772.2427f, -1859.498f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 8:
				*uParam1 = { 777.3881f, -1860.8525f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 9:
				*uParam1 = { 771.4808f, -1857.6525f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 10:
				*uParam1 = { 774.4088f, -1855.619f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 11:
				*uParam1 = { 775.1494f, -1857.6492f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 12:
				*uParam1 = { 773.1945f, -1856.9606f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 13:
				*uParam1 = { 777.2197f, -1858.2959f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 14:
				*uParam1 = { 772.5533f, -1855.3364f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 15:
				*uParam1 = { 775.4579f, -1851.3174f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 16:
				*uParam1 = { 772.7836f, -1852.6174f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 17:
				*uParam1 = { 772.2502f, -1850.6443f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 18:
				*uParam1 = { 774.4244f, -1852.9585f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 19:
				*uParam1 = { 774.4341f, -1849.2444f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 20:
				*uParam1 = { 758.9518f, -1860.6432f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 21:
				*uParam1 = { 760.9756f, -1860.2714f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 22:
				*uParam1 = { 757.3215f, -1859.6545f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 23:
				*uParam1 = { 762.433f, -1858.8214f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 24:
				*uParam1 = { 756.3214f, -1858.3965f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 25:
				*uParam1 = { 760.4328f, -1857.7064f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 26:
				*uParam1 = { 758.5695f, -1857.8832f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 27:
				*uParam1 = { 757.249f, -1856.212f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 28:
				*uParam1 = { 759.8027f, -1855.0675f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 29:
				*uParam1 = { 761.943f, -1855.6628f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 30:
				*uParam1 = { 758.1324f, -1854.6097f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 31:
				*uParam1 = { 759.2907f, -1852.3281f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 32:
				*uParam1 = { 761.3683f, -1853.6554f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 33:
				*uParam1 = { 756.7616f, -1852.5529f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 34:
				*uParam1 = { 758.0482f, -1850.5702f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 35:
				*uParam1 = { 760.7033f, -1851.4066f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 36:
				*uParam1 = { 761.6776f, -1849.924f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 37:
				*uParam1 = { 759.438f, -1849.8164f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 38:
				*uParam1 = { 757.0759f, -1849.1172f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
			case 39:
				*uParam1 = { 759.4453f, -1847.5543f, 48.2917f };
				*uParam2 = 355.45f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 781.6766f, -1775.3383f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 1:
				*uParam1 = { 780.0789f, -1775.9702f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 2:
				*uParam1 = { 783.2767f, -1775.8215f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 3:
				*uParam1 = { 778.7612f, -1775.443f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 4:
				*uParam1 = { 784.6552f, -1776.6879f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 5:
				*uParam1 = { 782.4398f, -1777.6877f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 6:
				*uParam1 = { 780.3754f, -1777.8625f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 7:
				*uParam1 = { 781.2623f, -1779.3704f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 8:
				*uParam1 = { 778.6085f, -1778.7124f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 9:
				*uParam1 = { 783.7348f, -1778.9071f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 10:
				*uParam1 = { 771.1954f, -1776.9929f, 48.2917f };
				*uParam2 = 265.9597f;
				return 1;
				break;
			case 11:
				*uParam1 = { 771.4833f, -1778.6454f, 48.2917f };
				*uParam2 = 261.0853f;
				return 1;
				break;
			case 12:
				*uParam1 = { 771.8001f, -1775.5751f, 48.2917f };
				*uParam2 = 269.6741f;
				return 1;
				break;
			case 13:
				*uParam1 = { 772.0091f, -1780.3313f, 48.2917f };
				*uParam2 = 261.7144f;
				return 1;
				break;
			case 14:
				*uParam1 = { 773.1207f, -1775.2037f, 48.2917f };
				*uParam2 = 274.0299f;
				return 1;
				break;
			case 15:
				*uParam1 = { 773.2678f, -1776.995f, 48.2917f };
				*uParam2 = 261.0934f;
				return 1;
				break;
			case 16:
				*uParam1 = { 773.0046f, -1778.9913f, 48.2917f };
				*uParam2 = 265.5221f;
				return 1;
				break;
			case 17:
				*uParam1 = { 774.0911f, -1779.9592f, 48.2917f };
				*uParam2 = 274.1443f;
				return 1;
				break;
			case 18:
				*uParam1 = { 775.424f, -1778.04f, 48.2917f };
				*uParam2 = 269.7965f;
				return 1;
				break;
			case 19:
				*uParam1 = { 774.8325f, -1775.8751f, 48.2917f };
				*uParam2 = 269.9395f;
				return 1;
				break;
			case 20:
				*uParam1 = { 760.7133f, -1775.9738f, 48.2917f };
				*uParam2 = 82.11785f;
				return 1;
				break;
			case 21:
				*uParam1 = { 760.4229f, -1777.9335f, 48.2917f };
				*uParam2 = 89.83625f;
				return 1;
				break;
			case 22:
				*uParam1 = { 760.4479f, -1774.2328f, 48.2917f };
				*uParam2 = 94.23635f;
				return 1;
				break;
			case 23:
				*uParam1 = { 758.9888f, -1778.8391f, 48.2917f };
				*uParam2 = 94.32655f;
				return 1;
				break;
			case 24:
				*uParam1 = { 758.7886f, -1775.4288f, 48.2917f };
				*uParam2 = 85.56795f;
				return 1;
				break;
			case 25:
				*uParam1 = { 758.9867f, -1777.1754f, 48.2917f };
				*uParam2 = 90.07555f;
				return 1;
				break;
			case 26:
				*uParam1 = { 758.5129f, -1773.7765f, 48.2917f };
				*uParam2 = 81.31315f;
				return 1;
				break;
			case 27:
				*uParam1 = { 757.3785f, -1778.0258f, 48.2917f };
				*uParam2 = 93.73565f;
				return 1;
				break;
			case 28:
				*uParam1 = { 756.9255f, -1776.3695f, 48.2917f };
				*uParam2 = 85.76955f;
				return 1;
				break;
			case 29:
				*uParam1 = { 757.2964f, -1774.4816f, 48.2917f };
				*uParam2 = 81.59765f;
				return 1;
				break;
			case 30:
				*uParam1 = { 750.7384f, -1772.6974f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 31:
				*uParam1 = { 752.9285f, -1773.2183f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 32:
				*uParam1 = { 749.9798f, -1774.5995f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 33:
				*uParam1 = { 749.48f, -1776.2957f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 34:
				*uParam1 = { 751.7671f, -1774.9592f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 35:
				*uParam1 = { 751.1798f, -1776.5876f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 36:
				*uParam1 = { 753.2664f, -1776.4678f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 37:
				*uParam1 = { 751.7179f, -1778.3856f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 38:
				*uParam1 = { 749.8848f, -1778.2922f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 39:
				*uParam1 = { 753.0905f, -1779.6797f, 48.2917f };
				*uParam2 = 175.575f;
				return 1;
				break;
			case 40:
				*uParam1 = { 748.7654f, -1792.7366f, 48.2917f };
				*uParam2 = 353.2805f;
				return 1;
				break;
			case 41:
				*uParam1 = { 750.7243f, -1792.5243f, 48.2917f };
				*uParam2 = 353.2839f;
				return 1;
				break;
			case 42:
				*uParam1 = { 751.976f, -1790.9146f, 48.2917f };
				*uParam2 = 351.3232f;
				return 1;
				break;
			case 43:
				*uParam1 = { 748.1843f, -1791.048f, 48.2917f };
				*uParam2 = 350.8063f;
				return 1;
				break;
			case 44:
				*uParam1 = { 750.2267f, -1790.1165f, 48.2917f };
				*uParam2 = 354.5182f;
				return 1;
				break;
			case 45:
				*uParam1 = { 749.0535f, -1788.0408f, 48.2917f };
				*uParam2 = 355.1894f;
				return 1;
				break;
			case 46:
				*uParam1 = { 752.9353f, -1789.0752f, 48.2917f };
				*uParam2 = 359.6781f;
				return 1;
				break;
			case 47:
				*uParam1 = { 751.477f, -1788.0387f, 48.2917f };
				*uParam2 = 359.5834f;
				return 1;
				break;
			case 48:
				*uParam1 = { 750.2484f, -1786.408f, 48.2917f };
				*uParam2 = 354.5188f;
				return 1;
				break;
			case 49:
				*uParam1 = { 752.8595f, -1786.3813f, 48.2917f };
				*uParam2 = 358.4494f;
				return 1;
				break;
			}
	}
	return 0;
}

int func_554(int iParam0, var uParam1, var uParam2)//Position - 0x67D78
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 783.9418f, -1879.3696f, 28.2126f };
			*uParam2 = 255.3995f;
			break;
		case 1:
			*uParam1 = { 782.8903f, -1884.1683f, 28.1461f };
			*uParam2 = 255.3995f;
			break;
		case 2:
			*uParam1 = { 781.7282f, -1888.7421f, 28.1451f };
			*uParam2 = 255.3995f;
			break;
		case 3:
			*uParam1 = { 780.5828f, -1893.4851f, 28.1501f };
			*uParam2 = 255.3995f;
			break;
		case 4:
			*uParam1 = { 779.4014f, -1897.8271f, 28.1506f };
			*uParam2 = 255.3995f;
			break;
		case 5:
			*uParam1 = { 778.2338f, -1902.4661f, 28.1688f };
			*uParam2 = 255.3995f;
			break;
		case 6:
			*uParam1 = { 792.5484f, -1877.0704f, 28.2637f };
			*uParam2 = 167.1994f;
			break;
		case 7:
			*uParam1 = { 790.4992f, -1886.178f, 28.2625f };
			*uParam2 = 167.1994f;
			break;
		case 8:
			*uParam1 = { 788.3503f, -1895.1862f, 28.2651f };
			*uParam2 = 167.1994f;
			break;
		case 9:
			*uParam1 = { 786.2491f, -1904.1055f, 28.2449f };
			*uParam2 = 167.1994f;
			break;
		case 10:
			*uParam1 = { 783.9786f, -1913.5616f, 28.2653f };
			*uParam2 = 167.1994f;
			break;
		case 11:
			*uParam1 = { 782.1191f, -1921.9948f, 28.2736f };
			*uParam2 = 167.1994f;
			break;
		case 12:
			*uParam1 = { 796.2546f, -1860.8225f, 28.2775f };
			*uParam2 = 170.1993f;
			break;
		case 13:
			*uParam1 = { 797.65f, -1852.0984f, 28.3048f };
			*uParam2 = 170.1993f;
			break;
		case 14:
			*uParam1 = { 798.9823f, -1843.4268f, 28.419f };
			*uParam2 = 170.1993f;
			break;
		case 15:
			*uParam1 = { 800.4713f, -1834.4548f, 28.4128f };
			*uParam2 = 170.1993f;
			break;
		case 16:
			*uParam1 = { 801.8967f, -1825.6267f, 28.3985f };
			*uParam2 = 170.1993f;
			break;
		case 17:
			*uParam1 = { 803.3854f, -1816.5177f, 28.3797f };
			*uParam2 = 170.1993f;
			break;
		case 18:
			*uParam1 = { 798.0822f, -1878.5621f, 28.2753f };
			*uParam2 = 167.5992f;
			break;
		case 19:
			*uParam1 = { 795.933f, -1887.6099f, 28.2731f };
			*uParam2 = 166.3991f;
			break;
		case 20:
			*uParam1 = { 793.7545f, -1896.521f, 28.2786f };
			*uParam2 = 166.3991f;
			break;
		case 21:
			*uParam1 = { 791.6768f, -1905.3256f, 28.2721f };
			*uParam2 = 166.3991f;
			break;
		case 22:
			*uParam1 = { 789.2997f, -1914.6699f, 28.2799f };
			*uParam2 = 166.3991f;
			break;
		case 23:
			*uParam1 = { 787.3499f, -1923.5356f, 28.2715f };
			*uParam2 = 166.3991f;
			break;
		case 24:
			*uParam1 = { 801.5248f, -1862.0479f, 28.2778f };
			*uParam2 = 168.7991f;
			break;
		case 25:
			*uParam1 = { 803.2521f, -1853.2603f, 28.277f };
			*uParam2 = 168.7991f;
			break;
		case 26:
			*uParam1 = { 804.6951f, -1844.863f, 28.3407f };
			*uParam2 = 168.7991f;
			break;
		case 27:
			*uParam1 = { 806.1588f, -1835.8086f, 28.3406f };
			*uParam2 = 168.7991f;
			break;
		case 28:
			*uParam1 = { 807.7903f, -1826.9572f, 28.2758f };
			*uParam2 = 168.7991f;
			break;
		case 29:
			*uParam1 = { 809.2761f, -1818.3562f, 28.3077f };
			*uParam2 = 168.7991f;
			break;
		default:
			return 0;
	}
	return 1;
}

struct<4> func_555(var uParam0)//Position - 0x681C5
{
	struct<4> Var0;
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1008981770;
	Var0.f_3 = 1073741824;
	Var0.f_0 = 0;
	return Var0;
}

char* func_556(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x6A594
{
	if (Global_1946250.f_506 == 0)
	{
		return "";
	}
	return "";
}

int func_557(int iParam0)//Position - 0x6A618
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 7);
	}
	return 0;
}

void func_558(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6A8C0
{
	StringCopy(sParam1, "CAR_M_EXT_V_T" /* GXT: LS CAR MEET */, 64);
	(*uParam2)[0] = "CAR_M_EXT_V_1" /* GXT: LS Car Meet */;
	(*uParam2)[1] = "CAR_M_EXT_V_2" /* GXT: Takeover */;
	*uParam4 = 2;
}

int func_559(int iParam0, int iParam1)//Position - 0x6A9A6
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_560()//Position - 0x6ABD8
{
	int iVar0;
	iVar0 = SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_smpl_interior_int"));
	return iVar0 > 0;
}

Vector3 func_561(int iParam0)//Position - 0x6ABEF
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 779.3155f, -1867.5061f, 28.2965f;
			break;
		case 2:
		case 3:
			return 755.8645f, -1842.6772f, 28.2916f;
			break;
		case 4:
		case 5:
			return 755.299f, -1850.0665f, 28.2916f;
			break;
		case 6:
		case 7:
			return 754.568f, -1857.5647f, 28.2916f;
			break;
		case 8:
			return 787.0688f, -1770.2451f, 28.2945f;
			break;
		case 9:
		case 14:
			return 747.74f, -1806.15f, 28.29f;
			break;
		case 10:
		case 15:
			return 747.26f, -1812.43f, 28.29f;
			break;
		case 12:
			return 765.4774f, -1763.5566f, 29.3625f;
			break;
		case 13:
			return 743.68f, -1797.36f, 28.29f;
			break;
		case 19:
			return 750.64f, -1771.99f, 48.29f;
			break;
		case 20:
			return 761.36f, -1776.06f, 48.29f;
			break;
		case 21:
			return 770.59f, -1776.83f, 48.29f;
			break;
		case 22:
			return 781.91f, -1774.7f, 48.29f;
			break;
		case 23:
			return 748.79f, -1792.97f, 48.29f;
			break;
		case 16:
			return 774.22f, -1862.14f, 48.29f;
			break;
		case 17:
			return 758.91f, -1860.91f, 48.29f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_562(int iParam0, bool bParam1, int iParam2)//Position - 0x6B105
{
	int iVar0;
	int iVar1;
	Global_23150.f_6130 = iParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

int func_563(int iParam0, bool bParam1, bool bParam2)//Position - 0x6C8E6
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return bParam2;
		case 2:
			return bParam1;
		default:
	}
	return 0;
}

int func_564(int iParam0)//Position - 0x6CBEC
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_476, 0);
}

void func_565(int iParam0)//Position - 0x6CC26
{
	Global_1946250.f_4550++;
	Global_1946250.f_4551[Global_1946250.f_4550] = iParam0;
}

int func_566()//Position - 0x6CC6B
{
	return Global_1946250.f_4551[Global_1946250.f_4550];
}

int func_567(int iParam0)//Position - 0x6CDF4
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_3, 2);
	}
	return 0;
}

int func_568(int iParam0)//Position - 0x6D859
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 10:
			return 1;
			break;
	}
	return 0;
}

void func_569(var uParam0)//Position - 0x6DF01
{
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_11))
	{
		CAM::DESTROY_CAM(uParam0->f_11, false);
	}
}

bool func_570(int iParam0)//Position - 0x6DF29
{
	return Global_1946250.f_4700 == iParam0;
}

int func_571(int iParam0)//Position - 0x6EFB8
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 6);
	}
	return 0;
}

void func_572(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x6EFDD
{
	switch (iParam0)
	{
		case 154:
			*uParam1 = { 798.6246f, -1888.7765f, 28.876f };
			*uParam2 = { 21.0341f, 0f, 34.4311f };
			*uParam3 = 50f;
			*uParam4 = 0.2f;
			break;
	}
}

void func_573(int iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4)//Position - 0x6F204
{
	HUD::GET_HUD_COLOUR(9, iParam1, iParam2, iParam3, iParam4);
	*iParam4 = (*iParam4 - 100);
}

int func_574(var uParam0)//Position - 0x6F897
{
	return 24;
}

int func_575(int iParam0)//Position - 0x6F916
{
	if (BitTest(Global_2689235[iParam0 /*453*/].f_198, 27))
	{
		return 1;
	}
	return 0;
}

char* func_576(var uParam0, int iParam1)//Position - 0x6F986
{
	switch (iParam1)
	{
		case 0:
			return "PIM_CM_INV_D" /* GXT: Invite players to the LS Car Meet. */;
			break;
		case 1:
			return "PIM_CM_INV_M" /* GXT: Invite to LS Car Meet */;
			break;
		case 3:
			return "PIM_CM_INV_T" /* GXT: INVITE TO LS CAR MEET */;
			break;
		case 4:
			return "PIM_INV_CM" /* GXT: Invite to LS Car Meet has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_A_T_CM" /* GXT: Invite to LS Car Meet has been sent to all players. */;
			break;
		case 6:
			return "CELL_CM_INV" /* GXT: Hey, come over to the LS Car Meet. */;
			break;
		case 8:
			return "CELL_CM_INV_P" /* GXT: Hey, come over to my private gathering at the LS Car Meet. */;
			break;
	}
	return "";
}

char* func_577(var uParam0)//Position - 0x6FA6C
{
	return "MP_CAR_MEET_1";
}

Vector3 func_578(int iParam0)//Position - 0x6FA78
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 9);
	MISC::SET_BIT(&(Var0[0]), 10);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 27);
	MISC::SET_BIT(&(Var0[0]), 29);
	MISC::SET_BIT(&(Var0[0]), 1);
	MISC::SET_BIT(&(Var0[0]), 0);
	MISC::SET_BIT(&(Var0[0]), 31);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[0]), 15);
	MISC::SET_BIT(&(Var0[0]), 17);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[0]), 5);
	MISC::SET_BIT(&(Var0[0]), 18);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[0]), 28);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[1]), 7);
	MISC::SET_BIT(&(Var0[1]), 14);
	MISC::SET_BIT(&(Var0[1]), 15);
	MISC::SET_BIT(&(Var0[1]), 2);
	MISC::SET_BIT(&(Var0[1]), 17);
	MISC::SET_BIT(&(Var0[1]), 18);
	return Var0;
}

void func_579(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x6FC1A
{
	if (iParam5 == 1)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 1.925f;
				*uParam2 = 90f;
				*uParam3 = { -75.6914f, -137.2278f, 0.1467f };
				*uParam4 = { -75.6914f, -136.0832f, 2.3502f };
				break;
			case 1:
				*uParam1 = 1.925f;
				*uParam2 = 90f;
				*uParam3 = { 15.3146f, 131.9415f, 0.0987f };
				*uParam4 = { 15.3146f, 133.1484f, 2.315f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = 2.675f;
				*uParam2 = 1f;
				*uParam3 = { -223.7695f, 47.8348f, 1.1033f };
				*uParam4 = { -217.271f, 47.8438f, 3.7783f };
				break;
			case 1:
				*uParam1 = 1.8f;
				*uParam2 = 88.56f;
				*uParam3 = { -215.5474f, -41.2273f, 1.3212f };
				*uParam4 = { -215.5474f, -39.8118f, 3.5165f };
				break;
			case 2:
				*uParam1 = 2.275f;
				*uParam2 = 178.92f;
				*uParam3 = { -141.2019f, -42.5658f, 0.0541f };
				*uParam4 = { -142.4995f, -42.5419f, 2.537f };
				break;
			case 3:
				*uParam1 = 2.275f;
				*uParam2 = 0.36f;
				*uParam3 = { -141.6733f, 47.833f, -0.0096f };
				*uParam4 = { -142.9204f, 47.8389f, 2.4904f };
				break;
			}
	}
}

Vector3 func_580(int iParam0)//Position - 0x6FE20
{
	if (iParam0 == 1)
	{
		return -2000f, 1113.2114f, 27.66735f;
	}
	return -2000f, 1113.2114f, -25.362434f;
}

int func_581(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x706CB
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 931.9263f, 42.1522f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 1:
			*uParam2 = { 932.8716f, 43.684f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 2:
			*uParam2 = { 930.981f, 40.6205f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 3:
			*uParam2 = { 933.817f, 45.2158f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 4:
			*uParam2 = { 930.0357f, 39.0887f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 5:
			*uParam2 = { 934.7623f, 46.7476f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 6:
			*uParam2 = { 929.0904f, 37.5569f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 7:
			*uParam2 = { 930.3945f, 43.0976f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 8:
			*uParam2 = { 931.3398f, 44.6293f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 9:
			*uParam2 = { 929.4492f, 41.5658f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 10:
			*uParam2 = { 932.2852f, 46.1611f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 11:
			*uParam2 = { 928.5039f, 40.034f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 12:
			*uParam2 = { 933.2305f, 47.6929f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 13:
			*uParam2 = { 927.5586f, 38.5022f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 14:
			*uParam2 = { 928.8627f, 44.0429f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 15:
			*uParam2 = { 929.808f, 45.5747f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 16:
			*uParam2 = { 927.9174f, 42.5111f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 17:
			*uParam2 = { 930.7534f, 47.1065f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 18:
			*uParam2 = { 926.9721f, 40.9793f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 19:
			*uParam2 = { 931.6987f, 48.6382f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 20:
			*uParam2 = { 926.0268f, 39.4475f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 21:
			*uParam2 = { 927.3309f, 44.9882f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 22:
			*uParam2 = { 928.2762f, 46.52f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 23:
			*uParam2 = { 926.3856f, 43.4564f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 24:
			*uParam2 = { 929.2216f, 48.0518f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 25:
			*uParam2 = { 925.4403f, 41.9246f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 26:
			*uParam2 = { 930.1669f, 49.5836f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 27:
			*uParam2 = { 924.495f, 40.3928f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 28:
			*uParam2 = { 932.0979f, 39.8551f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		case 29:
			*uParam2 = { 933.553f, 42.2353f, 69.8997f };
			*uParam3 = 58.32f;
			return 1;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_582(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x70E18
{
	switch (iParam0)
	{
		case 149:
			*uParam1 = { 758.52264f, -679.63153f, 27.97869f };
			*uParam2 = { 758.5227f, -675.6404f, 29.39465f };
			*uParam3 = 1.1875f;
			break;
		case 150:
			*uParam1 = { -149.6184f, -1341.0222f, 28.9074f };
			*uParam2 = { -145.0549f, -1340.4674f, 30.5574f };
			*uParam3 = 1.1875f;
			break;
		case 151:
			*uParam1 = { -173.46794f, -35.72792f, 51.21305f };
			*uParam2 = { -172.00858f, -31.398167f, 54.74356f };
			*uParam3 = 2.0625f;
			break;
		case 152:
			*uParam1 = { 231.43645f, -1874.8008f, 25.55129f };
			*uParam2 = { 234.2596f, -1871.3091f, 27.628351f };
			*uParam3 = 1.1875f;
			break;
		case 153:
			*uParam1 = { 488.30176f, -896.9004f, 24.8533f };
			*uParam2 = { 488.32303f, -892.7372f, 26.763819f };
			*uParam3 = 1.1875f;
			break;
	}
}

Vector3 func_583(int iParam0)//Position - 0x70F3A
{
	switch (iParam0)
	{
		case 149:
			return 754.8494f, -677.9884f, 28.5541f;
			break;
		case 150:
			return -146.9951f, -1333.1234f, 30.5706f;
			break;
		case 151:
			return -177.5643f, -31.5117f, 51.838f;
			break;
		case 152:
			return 228.9574f, -1870.1523f, 27.5952f;
			break;
		case 153:
			return 482.3782f, -894.6564f, 26.0874f;
			break;
	}
	return 932.9553f, -4.2065f, 77.7649f;
}

float func_584(int iParam0)//Position - 0x70FDF
{
	switch (iParam0)
	{
		case 149:
			return 90.5946f;
			break;
		case 150:
			return 0.6857f;
			break;
		case 151:
			return 70.3923f;
			break;
		case 152:
			return 49.5846f;
			break;
		case 153:
			return 90.4914f;
			break;
	}
	return 328.1944f;
}

Vector3 func_585(int iParam0)//Position - 0x71048
{
	switch (iParam0)
	{
		case 149:
			return 765.1f, -677.7876f, 27.7726f;
			break;
		case 150:
			return -147.2083f, -1345.2749f, 28.7559f;
			break;
		case 151:
			return -167.7497f, -35.4431f, 51.5349f;
			break;
		case 152:
			return 236.3819f, -1876.3363f, 25.3664f;
			break;
		case 153:
			return 494.0564f, -894.8048f, 24.7491f;
			break;
	}
	return 932.9553f, -4.2065f, 77.7649f;
}

void func_586(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x7123C
{
	switch (iParam0)
	{
		case 149:
			if (bParam4)
			{
				*uParam1 = { 759.4226f, -677.9504f, 39.5003f };
				*uParam2 = { -85.5862f, 0.0742f, -89.9097f };
				*uParam3 = 43.5114f;
			}
			else
			{
				*uParam1 = { 759.4663f, -677.9504f, 38.4264f };
				*uParam2 = { -87.7742f, 0.0742f, -89.9097f };
				*uParam3 = 43.5114f;
			}
			break;
		case 150:
			if (bParam4)
			{
				*uParam1 = { -147.4761f, -1341.6118f, 42.8117f };
				*uParam2 = { -87.8327f, 0.1252f, 179.9003f };
				*uParam3 = 31.4376f;
			}
			else
			{
				*uParam1 = { -147.4761f, -1341.6366f, 42.1584f };
				*uParam2 = { -87.8327f, 0.1252f, 179.9003f };
				*uParam3 = 31.4376f;
			}
			break;
		case 151:
			if (bParam4)
			{
				*uParam1 = { -171.712f, -34.102f, 55.0434f };
				*uParam2 = { -75.1224f, -0.0292f, -108.9881f };
				*uParam3 = 56.1554f;
			}
			else
			{
				*uParam1 = { -171.66f, -34.1199f, 54.7362f };
				*uParam2 = { -79.8577f, -0.0292f, -108.9881f };
				*uParam3 = 56.1554f;
			}
			break;
		case 152:
			if (bParam4)
			{
				*uParam1 = { 233.3552f, -1873.8276f, 36.9918f };
				*uParam2 = { -79.1643f, -0.1211f, -129.8822f };
				*uParam3 = 45.6248f;
			}
			else
			{
				*uParam1 = { 233.5042f, -1873.9519f, 35.9422f };
				*uParam2 = { -80.9424f, -0.1211f, -129.8822f };
				*uParam3 = 45.6248f;
			}
			break;
		case 153:
			if (bParam4)
			{
				*uParam1 = { 489.4361f, -894.9392f, 35.6433f };
				*uParam2 = { -85.3787f, 0.1425f, -90.2019f };
				*uParam3 = 47.319f;
			}
			else
			{
				*uParam1 = { 489.4505f, -894.9392f, 34.6432f };
				*uParam2 = { -89.1722f, 0.1425f, -90.2019f };
				*uParam3 = 47.319f;
			}
			break;
	}
}

int func_587(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x715F0
{
	*uParam3 = 0.1f;
	*uParam4 = 300f;
	*uParam6 = 0;
	switch (iParam0)
	{
		case 149:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 758.8233f, -677.748f, 32.4722f };
					*uParam5 = joaat("prop_wall_light_03a");
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_588(var uParam0, var uParam1)//Position - 0x7195D
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

Vector3 func_589(int iParam0)//Position - 0x71E92
{
	switch (iParam0)
	{
		case 149:
			return 742.8774f, -685.6455f, 27.8356f;
			break;
		case 150:
			return -143.1386f, -1332.7018f, 28.9145f;
			break;
		case 151:
			return -188.7504f, -38.8705f, 51.256f;
			break;
		case 152:
			return 236.9541f, -1854.8497f, 25.5283f;
			break;
		case 153:
			return 479.2497f, -899.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_590(int iParam0, int iParam1)//Position - 0x7205C
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_465 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_591(int iParam0)//Position - 0x72086
{
	switch (iParam0)
	{
		case 149:
			return 1;
		case 150:
			return 2;
		case 151:
			return 3;
		case 152:
			return 4;
		case 153:
			return 5;
		default:
	}
	return 0;
}

int func_592(var uParam0)//Position - 0x72253
{
	return 779;
}

bool func_593(int iParam0)//Position - 0x725EB
{
	return Global_1853348[iParam0 /*834*/].f_267.f_465 != 0;
}

char* func_594()//Position - 0x72693
{
	return "ShopUI_Title_Auto_Shop";
}

void func_595(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x7269F
{
	if (*uParam2 != 9)
	{
		return;
	}
	StringCopy(sParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */, 64);
	*uParam3 = 2;
	(*uParam2)[0] = "AUT_SHP_E_O_0" /* GXT: Exit Auto Shop */;
	(*uParam2)[1] = "AUT_SHP_E_O_1" /* GXT: All Exit Auto Shop */;
}

Vector3 func_596(var uParam0)//Position - 0x726D0
{
	return -1335.1687f, 146.8197f, -100.1944f;
}

int func_597(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x72738
{
	switch (iParam0)
	{
		case 149:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 759.8251f, -677.7496f, 27.8368f };
					*uParam3 = 269f;
					return 1;
					break;
				case 1:
					*uParam2 = { 760.4485f, -679.4465f, 27.8204f };
					*uParam3 = 269f;
					return 1;
					break;
				case 2:
					*uParam2 = { 760.387f, -676.1782f, 27.8299f };
					*uParam3 = 269f;
					return 1;
					break;
				case 3:
					*uParam2 = { 760.8215f, -681.5239f, 27.7878f };
					*uParam3 = 269f;
					return 1;
					break;
				case 4:
					*uParam2 = { 760.7934f, -674.3735f, 27.8938f };
					*uParam3 = 269f;
					return 1;
					break;
				case 5:
					*uParam2 = { 761.8605f, -677.1605f, 27.8013f };
					*uParam3 = 269f;
					return 1;
					break;
				case 6:
					*uParam2 = { 761.7225f, -679.9875f, 27.775f };
					*uParam3 = 269f;
					return 1;
					break;
				case 7:
					*uParam2 = { 761.9053f, -675.4466f, 27.8646f };
					*uParam3 = 269f;
					return 1;
					break;
				case 8:
					*uParam2 = { 762.2933f, -681.3085f, 27.7426f };
					*uParam3 = 269f;
					return 1;
					break;
				case 9:
					*uParam2 = { 761.8655f, -672.9365f, 27.8582f };
					*uParam3 = 269f;
					return 1;
					break;
				case 10:
					*uParam2 = { 764.0724f, -677.8572f, 27.7743f };
					*uParam3 = 269f;
					return 1;
					break;
				case 11:
					*uParam2 = { 763.8348f, -679.9297f, 27.7158f };
					*uParam3 = 269f;
					return 1;
					break;
				case 12:
					*uParam2 = { 762.7513f, -678.8962f, 27.7593f };
					*uParam3 = 269f;
					return 1;
					break;
				case 13:
					*uParam2 = { 764.1096f, -681.581f, 27.6922f };
					*uParam3 = 269f;
					return 1;
					break;
				case 14:
					*uParam2 = { 763.0571f, -674.0865f, 27.8776f };
					*uParam3 = 269f;
					return 1;
					break;
				case 15:
					*uParam2 = { 759.6169f, -685.1659f, 27.8196f };
					*uParam3 = 269f;
					return 1;
					break;
				case 16:
					*uParam2 = { 762.7162f, -683.0012f, 27.7185f };
					*uParam3 = 269f;
					return 1;
					break;
				case 17:
					*uParam2 = { 764.1715f, -676.3522f, 27.799f };
					*uParam3 = 269f;
					return 1;
					break;
				case 18:
					*uParam2 = { 760.5835f, -687.8524f, 27.7802f };
					*uParam3 = 269f;
					return 1;
					break;
				case 19:
					*uParam2 = { 764.3815f, -674.8098f, 27.7768f };
					*uParam3 = 269f;
					return 1;
					break;
				case 20:
					*uParam2 = { 762.2743f, -686.5251f, 27.7207f };
					*uParam3 = 269f;
					return 1;
					break;
				case 21:
					*uParam2 = { 764.5283f, -687.7918f, 27.6712f };
					*uParam3 = 269f;
					return 1;
					break;
				case 22:
					*uParam2 = { 759.4023f, -672.651f, 27.8872f };
					*uParam3 = 269f;
					return 1;
					break;
				case 23:
					*uParam2 = { 762.7588f, -688.6258f, 27.7151f };
					*uParam3 = 269f;
					return 1;
					break;
				case 24:
					*uParam2 = { 762.812f, -671.3493f, 27.8283f };
					*uParam3 = 269f;
					return 1;
					break;
				case 25:
					*uParam2 = { 764.0538f, -686.1609f, 27.6801f };
					*uParam3 = 269f;
					return 1;
					break;
				case 26:
					*uParam2 = { 761.0745f, -683.4571f, 27.7681f };
					*uParam3 = 269f;
					return 1;
					break;
				case 27:
					*uParam2 = { 764.2141f, -684.0512f, 27.6795f };
					*uParam3 = 269f;
					return 1;
					break;
				case 28:
					*uParam2 = { 761.3752f, -685.5024f, 27.7542f };
					*uParam3 = 269f;
					return 1;
					break;
				case 29:
					*uParam2 = { 763.2472f, -669.6841f, 27.8451f };
					*uParam3 = 269f;
					return 1;
					break;
				case 30:
					*uParam2 = { 760.5939f, -670.4605f, 27.894f };
					*uParam3 = 269f;
					return 1;
					break;
				case 31:
					*uParam2 = { 763.0845f, -666.9993f, 27.8453f };
					*uParam3 = 269f;
					return 1;
					break;
				case 32:
					*uParam2 = { 760.6654f, -668.2957f, 27.8956f };
					*uParam3 = 269f;
					return 1;
					break;
				case 33:
					*uParam2 = { 761.8182f, -690.6009f, 27.7493f };
					*uParam3 = 269f;
					return 1;
					break;
				case 34:
					*uParam2 = { 760.6378f, -665.8895f, 27.8919f };
					*uParam3 = 269f;
					return 1;
					break;
				case 35:
					*uParam2 = { 760.5612f, -692.1468f, 27.7908f };
					*uParam3 = 269f;
					return 1;
					break;
				case 36:
					*uParam2 = { 763.5109f, -695.3099f, 27.6662f };
					*uParam3 = 269f;
					return 1;
					break;
				case 37:
					*uParam2 = { 761.84f, -693.6394f, 27.7408f };
					*uParam3 = 269f;
					return 1;
					break;
				case 38:
					*uParam2 = { 763.8282f, -693.0667f, 27.6939f };
					*uParam3 = 269f;
					return 1;
					break;
				case 39:
					*uParam2 = { 760.9043f, -695.2354f, 27.7414f };
					*uParam3 = 269f;
					return 1;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 150:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -147.065f, -1342.0518f, 28.9133f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 1:
					*uParam2 = { -148.2343f, -1342.7131f, 28.9326f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 2:
					*uParam2 = { -145.515f, -1342.6785f, 28.8876f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 3:
					*uParam2 = { -149.9926f, -1343.0524f, 28.9644f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 4:
					*uParam2 = { -143.6074f, -1342.443f, 28.8659f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 5:
					*uParam2 = { -147.7145f, -1345.5072f, 28.7253f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 6:
					*uParam2 = { -149.3208f, -1344.8466f, 28.7954f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 7:
					*uParam2 = { -146.1948f, -1344.5249f, 28.798f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 8:
					*uParam2 = { -151.1579f, -1344.3348f, 28.8994f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 9:
					*uParam2 = { -143.449f, -1344.9194f, 28.7877f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 10:
					*uParam2 = { -146.6625f, -1346.8226f, 28.69f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 11:
					*uParam2 = { -148.3826f, -1346.7731f, 28.6703f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 12:
					*uParam2 = { -145.2146f, -1345.6555f, 28.7396f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 13:
					*uParam2 = { -151.1208f, -1346.3986f, 28.8246f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 14:
					*uParam2 = { -141.7078f, -1344.8984f, 28.7994f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 15:
					*uParam2 = { -145.4565f, -1348.4674f, 28.6682f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 16:
					*uParam2 = { -147.6067f, -1348.9288f, 28.6541f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 17:
					*uParam2 = { -143.405f, -1346.9255f, 28.7121f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 18:
					*uParam2 = { -149.7663f, -1347.5719f, 28.7435f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 19:
					*uParam2 = { -140.2267f, -1346.3871f, 28.6937f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 20:
					*uParam2 = { -142.9632f, -1350.4049f, 28.6361f };
					*uParam3 = 225.8229f;
					return 1;
					break;
				case 21:
					*uParam2 = { -146.6553f, -1352.0723f, 28.6363f };
					*uParam3 = 234.4669f;
					return 1;
					break;
				case 22:
					*uParam2 = { -140.4687f, -1349.0103f, 28.6183f };
					*uParam3 = 226.0259f;
					return 1;
					break;
				case 23:
					*uParam2 = { -142.2636f, -1348.749f, 28.6548f };
					*uParam3 = 222.5222f;
					return 1;
					break;
				case 24:
					*uParam2 = { -137.7031f, -1347.8674f, 28.6004f };
					*uParam3 = 214.1613f;
					return 1;
					break;
				case 25:
					*uParam2 = { -144.4039f, -1353.063f, 28.6302f };
					*uParam3 = 242.7659f;
					return 1;
					break;
				case 26:
					*uParam2 = { -145.9078f, -1354.6302f, 28.6315f };
					*uParam3 = 258.8366f;
					return 1;
					break;
				case 27:
					*uParam2 = { -140.5323f, -1351.7559f, 28.5349f };
					*uParam3 = 226.7887f;
					return 1;
					break;
				case 28:
					*uParam2 = { -135.3275f, -1349.107f, 28.4925f };
					*uParam3 = 181.44f;
					return 1;
					break;
				case 29:
					*uParam2 = { -138.3403f, -1350.9214f, 28.5082f };
					*uParam3 = 222.575f;
					return 1;
					break;
				case 30:
					*uParam2 = { -142.6594f, -1355.4287f, 28.5269f };
					*uParam3 = 230.6291f;
					return 1;
					break;
				case 31:
					*uParam2 = { -136.7717f, -1350.1193f, 28.4833f };
					*uParam3 = 230.9391f;
					return 1;
					break;
				case 32:
					*uParam2 = { -138.7072f, -1353.4835f, 28.4373f };
					*uParam3 = 226.6675f;
					return 1;
					break;
				case 33:
					*uParam2 = { -141.9145f, -1353.3605f, 28.5494f };
					*uParam3 = 230.4625f;
					return 1;
					break;
				case 34:
					*uParam2 = { -140.0004f, -1355.4569f, 28.4291f };
					*uParam3 = 218.488f;
					return 1;
					break;
				case 35:
					*uParam2 = { -137.401f, -1356.017f, 28.326f };
					*uParam3 = 214.3119f;
					return 1;
					break;
				case 36:
					*uParam2 = { -139.7744f, -1357.8953f, 28.3337f };
					*uParam3 = 226.1735f;
					return 1;
					break;
				case 37:
					*uParam2 = { -134.4491f, -1355.9976f, 28.2916f };
					*uParam3 = 226.5135f;
					return 1;
					break;
				case 38:
					*uParam2 = { -136.3415f, -1352.9817f, 28.3729f };
					*uParam3 = 226.2963f;
					return 1;
					break;
				case 39:
					*uParam2 = { -133.7638f, -1354.294f, 28.2815f };
					*uParam3 = 226.6827f;
					return 1;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 151:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -170.2913f, -34.3022f, 51.3549f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 1:
					*uParam2 = { -171.0078f, -36.4857f, 51.3566f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 2:
					*uParam2 = { -169.7862f, -32.3321f, 51.3468f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 3:
					*uParam2 = { -171.942f, -37.7951f, 51.3283f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 4:
					*uParam2 = { -169.5665f, -30.6256f, 51.3263f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 5:
					*uParam2 = { -172.3112f, -39.8476f, 51.3451f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 6:
					*uParam2 = { -169.253f, -28.8251f, 51.3116f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 7:
					*uParam2 = { -168.8342f, -34.9476f, 51.4579f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 8:
					*uParam2 = { -169.3873f, -36.7653f, 51.4599f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 9:
					*uParam2 = { -168.281f, -33.1299f, 51.4559f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 10:
					*uParam2 = { -169.9404f, -38.583f, 51.4637f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 11:
					*uParam2 = { -167.7279f, -31.3122f, 51.4538f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 12:
					*uParam2 = { -170.4935f, -40.4007f, 51.4657f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 13:
					*uParam2 = { -167.1748f, -29.4945f, 51.4521f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 14:
					*uParam2 = { -167.0164f, -35.5008f, 51.5822f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 15:
					*uParam2 = { -167.5696f, -37.3185f, 51.5842f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 16:
					*uParam2 = { -166.4633f, -33.6831f, 51.58f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 17:
					*uParam2 = { -168.1227f, -39.1362f, 51.586f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 18:
					*uParam2 = { -165.9102f, -31.8654f, 51.5779f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 19:
					*uParam2 = { -168.6758f, -40.9539f, 51.5883f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 20:
					*uParam2 = { -165.3571f, -30.0477f, 51.5762f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 21:
					*uParam2 = { -165.1987f, -36.0539f, 51.7077f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 22:
					*uParam2 = { -165.7519f, -37.8716f, 51.7095f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 23:
					*uParam2 = { -164.6456f, -34.2362f, 51.7057f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 24:
					*uParam2 = { -166.305f, -39.6893f, 51.7114f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 25:
					*uParam2 = { -164.0925f, -32.4185f, 51.7036f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 26:
					*uParam2 = { -166.8581f, -41.507f, 51.7134f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 27:
					*uParam2 = { -163.5394f, -30.6008f, 51.7021f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 28:
					*uParam2 = { -163.381f, -36.607f, 51.8329f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 29:
					*uParam2 = { -163.9342f, -38.4247f, 51.8347f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 30:
					*uParam2 = { -162.8279f, -34.7893f, 51.8311f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 31:
					*uParam2 = { -164.4873f, -40.2424f, 51.8367f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 32:
					*uParam2 = { -162.2748f, -32.9716f, 51.8293f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 33:
					*uParam2 = { -165.0404f, -42.0601f, 51.8388f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 34:
					*uParam2 = { -161.7216f, -31.1539f, 51.8278f };
					*uParam3 = 253.075f;
					return 1;
					break;
				case 35:
					*uParam2 = { -170.4285f, -58.1994f, 51.7112f };
					*uParam3 = 167.5416f;
					return 1;
					break;
				case 36:
					*uParam2 = { -171.9901f, -54.7612f, 51.6149f };
					*uParam3 = 164.7125f;
					return 1;
					break;
				case 37:
					*uParam2 = { -167.2586f, -55.992f, 51.9457f };
					*uParam3 = 166.0956f;
					return 1;
					break;
				case 38:
					*uParam2 = { -177.5161f, -55.1844f, 51.2674f };
					*uParam3 = 156.8264f;
					return 1;
					break;
				case 39:
					*uParam2 = { -164.5141f, -60.0229f, 52.1959f };
					*uParam3 = 175.1454f;
					return 1;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 152:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 234.794f, -1874.4448f, 25.4964f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 1:
					*uParam2 = { 233.458f, -1875.7991f, 25.4279f };
					*uParam3 = 217.194f;
					return 1;
					break;
				case 2:
					*uParam2 = { 235.9541f, -1872.8291f, 25.5771f };
					*uParam3 = 249.9738f;
					return 1;
					break;
				case 3:
					*uParam2 = { 232.9225f, -1877.479f, 25.3157f };
					*uParam3 = 221.0692f;
					return 1;
					break;
				case 4:
					*uParam2 = { 237.3328f, -1872.0342f, 25.608f };
					*uParam3 = 253.3901f;
					return 1;
					break;
				case 5:
					*uParam2 = { 231.0165f, -1878.4376f, 25.2425f };
					*uParam3 = 212.0997f;
					return 1;
					break;
				case 6:
					*uParam2 = { 238.0106f, -1870.1373f, 25.7241f };
					*uParam3 = 253.4841f;
					return 1;
					break;
				case 7:
					*uParam2 = { 230.0577f, -1880.3887f, 25.1153f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 8:
					*uParam2 = { 239.5304f, -1868.501f, 25.7217f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 9:
					*uParam2 = { 228.8736f, -1881.8746f, 25.0073f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 10:
					*uParam2 = { 240.7144f, -1867.015f, 25.7771f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 11:
					*uParam2 = { 227.6895f, -1883.3606f, 24.894f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 12:
					*uParam2 = { 241.8985f, -1865.529f, 25.8077f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 13:
					*uParam2 = { 226.5055f, -1884.8466f, 24.8489f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 14:
					*uParam2 = { 243.0826f, -1864.0431f, 25.8063f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 15:
					*uParam2 = { 236.28f, -1875.6289f, 25.4312f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 16:
					*uParam2 = { 235.0959f, -1877.1149f, 25.35f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 17:
					*uParam2 = { 237.464f, -1874.143f, 25.505f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 18:
					*uParam2 = { 233.9118f, -1878.6008f, 25.2653f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 19:
					*uParam2 = { 238.6481f, -1872.657f, 25.5741f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 20:
					*uParam2 = { 232.7277f, -1880.0868f, 25.1669f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 21:
					*uParam2 = { 239.8322f, -1871.171f, 25.6281f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 22:
					*uParam2 = { 231.5436f, -1881.5728f, 25.0336f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 23:
					*uParam2 = { 241.0163f, -1869.685f, 25.6834f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 24:
					*uParam2 = { 230.3595f, -1883.0587f, 24.9259f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 25:
					*uParam2 = { 242.2004f, -1868.1991f, 25.7387f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 26:
					*uParam2 = { 229.1755f, -1884.5447f, 24.8167f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 27:
					*uParam2 = { 243.3844f, -1866.7131f, 25.7687f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 28:
					*uParam2 = { 227.9914f, -1886.0306f, 24.7812f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 29:
					*uParam2 = { 244.5685f, -1865.2272f, 25.7981f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 30:
					*uParam2 = { 237.7659f, -1876.813f, 25.2823f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 31:
					*uParam2 = { 236.5818f, -1878.299f, 25.2078f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 32:
					*uParam2 = { 238.95f, -1875.327f, 25.3546f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 33:
					*uParam2 = { 235.3977f, -1879.7849f, 25.1184f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 34:
					*uParam2 = { 267.1221f, -1900.9136f, 25.5119f };
					*uParam3 = 51.6928f;
					return 1;
					break;
				case 35:
					*uParam2 = { 264.3239f, -1904.3074f, 25.3021f };
					*uParam3 = 56.3069f;
					return 1;
					break;
				case 36:
					*uParam2 = { 248.3886f, -1862.738f, 25.7155f };
					*uParam3 = 247.7295f;
					return 1;
					break;
				case 37:
					*uParam2 = { 212.0327f, -1906.2974f, 23.1074f };
					*uParam3 = 231.45f;
					return 1;
					break;
				case 38:
					*uParam2 = { 247.9868f, -1858.3102f, 25.7456f };
					*uParam3 = 318.4438f;
					return 1;
					break;
				case 39:
					*uParam2 = { 209.3248f, -1907.1631f, 22.9774f };
					*uParam3 = 171.009f;
					return 1;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 153:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 490.1025f, -894.7929f, 24.74f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 1:
					*uParam2 = { 490.8212f, -896.7137f, 24.7796f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 2:
					*uParam2 = { 490.7076f, -893.0989f, 24.7051f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 3:
					*uParam2 = { 490.1257f, -898.5928f, 24.8183f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 4:
					*uParam2 = { 490.0793f, -890.993f, 24.6617f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 5:
					*uParam2 = { 491.8594f, -899.6064f, 24.8392f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 6:
					*uParam2 = { 493.0944f, -897.7169f, 24.8003f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 7:
					*uParam2 = { 493.2911f, -900.3856f, 24.8552f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 8:
					*uParam2 = { 492.2706f, -893.241f, 24.7081f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 9:
					*uParam2 = { 490.4995f, -900.7985f, 24.8637f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 10:
					*uParam2 = { 490.3914f, -886.3822f, 24.5667f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 11:
					*uParam2 = { 491.9692f, -902.0974f, 24.9014f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 12:
					*uParam2 = { 490.0329f, -883.3931f, 24.5066f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 13:
					*uParam2 = { 491.624f, -905.6348f, 24.9743f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 14:
					*uParam2 = { 492.3618f, -904.0577f, 24.937f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 15:
					*uParam2 = { 490.9335f, -888.5898f, 24.6122f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 16:
					*uParam2 = { 493.0676f, -889.4637f, 24.6303f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 17:
					*uParam2 = { 493.3077f, -891.4521f, 24.6713f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 18:
					*uParam2 = { 492.6438f, -909.4443f, 25.0664f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 19:
					*uParam2 = { 491.9792f, -890.9814f, 24.6616f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 20:
					*uParam2 = { 491.1205f, -878.9357f, 24.4331f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 21:
					*uParam2 = { 491.7231f, -884.7498f, 24.5331f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 22:
					*uParam2 = { 490.0637f, -908.2242f, 25.0363f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 23:
					*uParam2 = { 492.8905f, -879.8257f, 24.4479f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 24:
					*uParam2 = { 490.7675f, -913.584f, 25.139f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 25:
					*uParam2 = { 492.7434f, -886.1409f, 24.5619f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 26:
					*uParam2 = { 492.6178f, -907.1302f, 25.0096f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 27:
					*uParam2 = { 490.3861f, -904.4345f, 24.9463f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 28:
					*uParam2 = { 491.9104f, -911.2998f, 25.112f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 29:
					*uParam2 = { 491.4126f, -876.2236f, 24.3884f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 30:
					*uParam2 = { 493.2147f, -912.7482f, 25.1477f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 31:
					*uParam2 = { 491.829f, -916.1559f, 25.2336f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 32:
					*uParam2 = { 491.2556f, -872.5351f, 24.3275f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 33:
					*uParam2 = { 491.8356f, -934.1288f, 25.7318f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 34:
					*uParam2 = { 493.4412f, -874.494f, 24.3601f };
					*uParam3 = 276.6566f;
					return 1;
					break;
				case 35:
					*uParam2 = { 493.9084f, -918.9222f, 25.3039f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 36:
					*uParam2 = { 493.8215f, -865.5049f, 24.2136f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 37:
					*uParam2 = { 493.3736f, -937.6335f, 25.8342f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 38:
					*uParam2 = { 493.4813f, -860.3619f, 24.1427f };
					*uParam3 = 270.35f;
					return 1;
					break;
				case 39:
					*uParam2 = { 493.8413f, -930.9785f, 25.6398f };
					*uParam3 = 270.35f;
					return 1;
					break;
				default:
					return 0;
					break;
			}
			break;
	}
	return 1;
}

int func_598(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x746FF
{
	switch (iParam0)
	{
		case 149:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 766.5528f, -677.0346f, 27.7239f };
					*uParam3 = 180.0686f;
					break;
				case 1:
					*uParam2 = { 766.511f, -683.7249f, 27.6963f };
					*uParam3 = 179.7884f;
					break;
				case 2:
					*uParam2 = { 766.5951f, -690.1119f, 27.695f };
					*uParam3 = 179.4445f;
					break;
				case 3:
					*uParam2 = { 766.4852f, -695.7795f, 27.6356f };
					*uParam3 = 180.3876f;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 150:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -145.7606f, -1346.8221f, 28.7008f };
					*uParam3 = 179.2141f;
					break;
				case 1:
					*uParam2 = { -142.264f, -1346.8312f, 28.7035f };
					*uParam3 = 182.7879f;
					break;
				case 2:
					*uParam2 = { -139.0863f, -1346.9342f, 28.6597f };
					*uParam3 = 181.6855f;
					break;
				case 3:
					*uParam2 = { -151.0585f, -1354.4122f, 28.7813f };
					*uParam3 = 270.0883f;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 151:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -163.4841f, -30.7421f, 51.7085f };
					*uParam3 = 158.9757f;
					break;
				case 1:
					*uParam2 = { -160.7258f, -31.2863f, 51.8935f };
					*uParam3 = 160.4497f;
					break;
				case 2:
					*uParam2 = { -166.1153f, -29.8404f, 51.5246f };
					*uParam3 = 159.2512f;
					break;
				case 3:
					*uParam2 = { -168.5638f, -28.4791f, 51.3472f };
					*uParam3 = 158.5516f;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 152:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 238.091f, -1878.5231f, 25.2772f };
					*uParam3 = 318.5577f;
					break;
				case 1:
					*uParam2 = { 242.4768f, -1873.4667f, 25.5075f };
					*uParam3 = 319.0237f;
					break;
				case 2:
					*uParam2 = { 246.0482f, -1869.2915f, 25.6252f };
					*uParam3 = 319.0708f;
					break;
				case 3:
					*uParam2 = { 233.3068f, -1884.1449f, 24.9013f };
					*uParam3 = 319.4133f;
					break;
				default:
					return 0;
					break;
			}
			break;
		case 153:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 496.2674f, -895.2114f, 24.5897f };
					*uParam3 = 359.5538f;
					break;
				case 1:
					*uParam2 = { 496.239f, -900.9498f, 24.7157f };
					*uParam3 = 359.6566f;
					break;
				case 2:
					*uParam2 = { 496.1095f, -907.8199f, 24.8771f };
					*uParam3 = 358.9418f;
					break;
				case 3:
					*uParam2 = { 496.2871f, -913.8695f, 25.0668f };
					*uParam3 = 359.6065f;
					break;
				default:
					return 0;
					break;
			}
			break;
	}
	return 1;
}

var func_599()//Position - 0x7509A
{
	return BitTest(Global_1946250.f_9, 3);
}

var func_600()//Position - 0x750AA
{
	return BitTest(Global_1946250.f_9, 4);
}

bool func_601()//Position - 0x750BA
{
	return BitTest(Global_1946250.f_2, 16);
}

Vector3 func_602(int iParam0)//Position - 0x750CB
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_603(bool bParam0)//Position - 0x753D2
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 10);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 10);
	}
}

int func_604(int iParam0)//Position - 0x75485
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 10);
}

bool func_605()//Position - 0x754AB
{
	return __LIB_0__.func_137(31753, -1);
}

void func_606(bool bParam0)//Position - 0x754BB
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 9);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5), 9);
	}
}

int func_607(int iParam0)//Position - 0x75563
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 9);
}

bool func_608()//Position - 0x75589
{
	return __LIB_0__.func_137(22193, -1);
}

void func_609(bool bParam0)//Position - 0x75774
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 15))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 15);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 15))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 15);
	}
}

void func_610(bool bParam0)//Position - 0x7582F
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293, 28))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293), 28);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293, 28))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_293), 28);
	}
}

Vector3 func_611(int iParam0)//Position - 0x759D5
{
	switch (iParam0)
	{
		case 149:
			return 759.36f, -675.13f, 27.86f;
			break;
		case 150:
			return -144.58f, -1341.37f, 28.87f;
			break;
		case 151:
			return -171f, -31.4f, 51.27f;
			break;
		case 152:
			return 231.54f, -1875.7f, 25.41f;
			break;
		case 153:
			return 488.98f, -897.41f, 24.79f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_612(var uParam0)//Position - 0x75ACB
{
	uParam0->f_8 = 1;
	uParam0->f_6 = 1;
	uParam0->f_11 = 10;
	*uParam0 = 1;
	uParam0->f_9 = 1;
	uParam0->f_1 = 0;
}

int func_613(int iParam0)//Position - 0x77099
{
	switch (iParam0)
	{
		case joaat("insurgent"):
		case joaat("technical"):
		case joaat("rhino"):
		case joaat("boxville4"):
		case joaat("mule3"):
		case joaat("limo2"):
		case joaat("brickade"):
		case joaat("rallytruck"):
		case joaat("phantom2"):
		case joaat("wastelander"):
		case joaat("boxville5"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailersmall2"):
		case joaat("marshall"):
		case joaat("monster"):
			return 1;
		default:
	}
	return 0;
}

int func_614(int iParam0)//Position - 0x77698
{
	if (iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

int func_615(int iParam0, int iParam1)//Position - 0x781F8
{
	switch (iParam1)
	{
		case 0:
			return joaat("prop_ld_keypad_01");
			break;
		case 1:
			switch (iParam0)
			{
				case 150:
					return joaat("ba_prop_battle_cctv_cam_01a");
					break;
				case 151:
					return joaat("prop_cctv_cam_01b");
					break;
				default:
					return joaat("ba_prop_battle_cctv_cam_01b");
					break;
			}
			break;
	}
	return 0;
}

void func_616(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x78256
{
	switch (iParam0)
	{
		case 151:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -171.6415f, -31.23009f, 52.48432f };
					*uParam2 = { 0f, 0f, 69.8f };
					break;
				case 1:
					*uParam1 = { -165.082f, -26.265f, 54.495f };
					*uParam2 = { 0f, 0f, -18.401f };
					break;
			}
			break;
		case 149:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 758.814f, -675.134f, 29.086f };
					*uParam2 = { 0f, 0f, 89.4f };
					break;
				case 1:
					*uParam1 = { 758.811f, -675.133f, 31.4f };
					*uParam2 = { 0f, 0f, 91.6f };
					break;
			}
			break;
		case 153:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 488.457f, -897.452f, 26.095f };
					*uParam2 = { 0f, 0f, 88.799f };
					break;
				case 1:
					*uParam1 = { 488.45f, -892.188f, 28.119f };
					*uParam2 = { 0f, 0f, 88.799f };
					break;
			}
			break;
		case 152:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 231.208f, -1875.368f, 26.636f };
					*uParam2 = { 0f, 0f, 49.999f };
					break;
				case 1:
					*uParam1 = { 235.422f, -1870.321f, 28.909f };
					*uParam2 = { 0f, 0f, 50.399f };
					break;
			}
			break;
		case 150:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -144.592f, -1340.924f, 30.3f };
					*uParam2 = { 0f, 0f, 0f };
					break;
				case 1:
					*uParam1 = { -150.148f, -1340.923f, 32.007f };
					*uParam2 = { 0f, 0f, 0f };
					break;
			}
			break;
	}
}

void func_617(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x792E6
{
	switch (iParam0)
	{
		case 149:
			*uParam1 = { 779.3525f, -673.0083f, 34.8915f };
			*uParam2 = { -8.8356f, 0f, 113.8331f };
			*uParam3 = 43.7232f;
			*uParam4 = 0.2f;
			break;
		case 150:
			*uParam1 = { -156.0827f, -1359.4873f, 35.0172f };
			*uParam2 = { -5.9665f, 0f, -27.4596f };
			*uParam3 = 50f;
			*uParam4 = 0.2f;
			break;
		case 151:
			*uParam1 = { -158.4775f, -29.5276f, 55.558f };
			*uParam2 = { -7.9026f, 0f, 102.8789f };
			*uParam3 = 50.4142f;
			*uParam4 = 0.2f;
			break;
		case 152:
			*uParam1 = { 235.2492f, -1890.0453f, 30.867f };
			*uParam2 = { -7.873f, 0f, 7.5572f };
			*uParam3 = 50f;
			*uParam4 = 0.2f;
			break;
		case 153:
			*uParam1 = { 510.0993f, -883.3337f, 30.8193f };
			*uParam2 = { -3.2867f, 0f, 119.6309f };
			*uParam3 = 42.847f;
			*uParam4 = 0.2f;
			break;
	}
}

void func_618(int iParam0, var uParam1, var uParam2)//Position - 0x79AFF
{
	switch (iParam0)
	{
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
			*uParam1 = { -1372.786f, 135.814f, -100.586f };
			uParam1->f_3 = { -1319.589f, 169.764f, -87.918f };
			break;
	}
}

char* func_619(var uParam0, int iParam1)//Position - 0x79BA2
{
	switch (iParam1)
	{
		case 0:
			return "PIM_AUTO_INV_D" /* GXT: Invite players to your Auto Shop. */;
			break;
		case 1:
			return "PIM_AUTO_INV_M" /* GXT: Invite to Auto Shop */;
			break;
		case 3:
			return "PIM_AUTO_INV_T" /* GXT: INVITE TO AUTO SHOP */;
			break;
		case 4:
			return "PIM_INVAUT_SHP" /* GXT: Invite to Auto Shop has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_A_T_AS" /* GXT: Invite to Auto Shop has been sent to all players. */;
			break;
		case 6:
			return "CELL_AUT_SHPINV" /* GXT: Hey, come over to the Auto Shop. */;
			break;
	}
	return "";
}

int func_620(var uParam0)//Position - 0x79C15
{
	return 127;
}

char* func_621(var uParam0)//Position - 0x79C1F
{
	return "MP_AUTO_SHOP_1";
}

Vector3 func_622(int iParam0)//Position - 0x79C2B
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 5);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[0]), 31);
	MISC::SET_BIT(&(Var0[0]), 6);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[1]), 0);
	MISC::SET_BIT(&(Var0[1]), 6);
	MISC::SET_BIT(&(Var0[1]), 10);
	MISC::SET_BIT(&(Var0[1]), 16);
	MISC::SET_BIT(&(Var0[1]), 19);
	return Var0;
}

void func_623(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x79D4E
{
	*uParam1 = 3f;
	*uParam2 = 0f;
	*uParam3 = { -9.7584f, 8.5368f, 0f };
	*uParam4 = { -5.7761f, 8.497f, 3f };
}

void func_624(var uParam0, var uParam1)//Position - 0x79D7C
{
	uParam1->f_21 = "AM_MP_AUTO_SHOP";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

Vector3 func_625()//Position - 0x79DE9
{
	return -1350f, 160f, -100f;
}

int func_626()//Position - 0x7A8FB
{
	if (BitTest(Global_1946250.f_506, 29) || BitTest(Global_1946250.f_506, 30))
	{
		return 1;
	}
	return 0;
}

int func_627(int iParam0)//Position - 0x7A925
{
	if (__LIB_0__.func_121(iParam0))
	{
		if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1007.0067f, -67.74328f, -100.00306f, -997.22614f, -71.63141f, -97.50306f, 2.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -993.5614f, -65.56306f, -100.00306f, -1001.25824f, -59.708443f, -97.50306f, 2.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -997.79944f, -72.184265f, -100.00306f, -994.4507f, -71.84905f, -97.50306f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -993.5514f, -64.75508f, -100.00306f, -992.06525f, -68.0528f, -97.50306f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -993.00256f, -70.21102f, -99.99685f, -994.8303f, -69.17576f, -97.50306f, 6.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1005.71704f, -62.71286f, -99.99789f, -995.0664f, -69.02559f, -97.50306f, 9.5f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_628(int iParam0)//Position - 0x7AAA5
{
	switch (iParam0)
	{
		case 148:
			return -852.0666f, -232.8966f, 43.006f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_629(var uParam0)//Position - 0x7AACF
{
	return __LIB_1__.func_48(1);
}

Vector3 func_630(var uParam0)//Position - 0x7AAED
{
	return -841.3613f, -228.9672f, 36.2652f;
}

int func_631(var uParam0)//Position - 0x7AB04
{
	return 819;
}

int func_632(int iParam0)//Position - 0x7AC41
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		default:
	}
	return -1;
}

void func_633(int iParam0)//Position - 0x7AF83
{
	struct<2> Var0;
	Var0.f_0 = -943159965;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_634(int iParam0)//Position - 0x7B0FC
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_428, 0);
	}
	return 0;
}

char* func_635()//Position - 0x7B1B6
{
	return "SHOP_BANNER_RECORD_A_STUDIOS";
}

int func_636(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x7B7A5
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { -867.6506f, -222.5992f, 38.5316f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 1:
			*uParam2 = { -868.3824f, -221.1764f, 38.4929f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 2:
			*uParam2 = { -866.9187f, -224.022f, 38.5538f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 3:
			*uParam2 = { -869.1143f, -219.7536f, 38.4786f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 4:
			*uParam2 = { -866.1868f, -225.4448f, 38.5893f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 5:
			*uParam2 = { -871.1924f, -219.0621f, 38.2898f };
			*uParam3 = 115.0625f;
			return 1;
			break;
		case 6:
			*uParam2 = { -867.5739f, -226.261f, 38.4616f };
			*uParam3 = 116.5811f;
			return 1;
			break;
		case 7:
			*uParam2 = { -869.0734f, -223.331f, 38.3863f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 8:
			*uParam2 = { -869.8052f, -221.9082f, 38.3469f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 9:
			*uParam2 = { -868.3415f, -224.7538f, 38.424f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 10:
			*uParam2 = { -870.5371f, -220.4854f, 38.3146f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 11:
			*uParam2 = { -866.4519f, -227.9854f, 38.4968f };
			*uParam3 = 187.8233f;
			return 1;
			break;
		case 12:
			*uParam2 = { -872.2457f, -217.4308f, 38.2688f };
			*uParam3 = 62.8331f;
			return 1;
			break;
		case 13:
			*uParam2 = { -865.9856f, -231.5049f, 38.5547f };
			*uParam3 = 187.7955f;
			return 1;
			break;
		case 14:
			*uParam2 = { -870.7441f, -224.5327f, 38.415f };
			*uParam3 = 117.22f;
			return 1;
			break;
		case 15:
			*uParam2 = { -872.4733f, -223.0749f, 38.3561f };
			*uParam3 = 105.3484f;
			return 1;
			break;
		case 16:
			*uParam2 = { -871.1952f, -226.316f, 38.436f };
			*uParam3 = 149.9333f;
			return 1;
			break;
		case 17:
			*uParam2 = { -874.212f, -221.9103f, 38.3122f };
			*uParam3 = 59.3073f;
			return 1;
			break;
		case 18:
			*uParam2 = { -870.0831f, -227.9919f, 38.4824f };
			*uParam3 = 167.1115f;
			return 1;
			break;
		case 19:
			*uParam2 = { -873.1171f, -220.0514f, 38.3142f };
			*uParam3 = 59.6646f;
			return 1;
			break;
		case 20:
			*uParam2 = { -867.8115f, -229.7522f, 38.5395f };
			*uParam3 = 175.238f;
			return 1;
			break;
		case 21:
			*uParam2 = { -863.9053f, -240.5234f, 38.4992f };
			*uParam3 = 209.9996f;
			return 1;
			break;
		case 22:
			*uParam2 = { -875.2635f, -218.9687f, 38.2755f };
			*uParam3 = 32.1745f;
			return 1;
			break;
		case 23:
			*uParam2 = { -862.0453f, -238.6436f, 38.506f };
			*uParam3 = 207.7185f;
			return 1;
			break;
		case 24:
			*uParam2 = { -875.087f, -211.2759f, 38.2034f };
			*uParam3 = 50.483f;
			return 1;
			break;
		case 25:
			*uParam2 = { -865.8464f, -234.1235f, 38.5485f };
			*uParam3 = 196.1654f;
			return 1;
			break;
		case 26:
			*uParam2 = { -877.8221f, -213.0414f, 38.2281f };
			*uParam3 = 13.9619f;
			return 1;
			break;
		case 27:
			*uParam2 = { -869.0695f, -232.0845f, 38.5443f };
			*uParam3 = 186.8014f;
			return 1;
			break;
		case 28:
			*uParam2 = { -860.6093f, -246.403f, 38.4948f };
			*uParam3 = 211.2507f;
			return 1;
			break;
		case 29:
			*uParam2 = { -882.6034f, -201.2675f, 37.7077f };
			*uParam3 = 8.7719f;
			return 1;
			break;
		default:
			return 0;
			break;
	}
	return 1;
}

int func_637(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x7BC6C
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { -844.1654f, -235.3939f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 1:
			*uParam2 = { -843.0667f, -234.5262f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 2:
			*uParam2 = { -845.2641f, -236.2616f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 3:
			*uParam2 = { -845.0331f, -234.2952f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 4:
			*uParam2 = { -843.9344f, -233.4275f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 5:
			*uParam2 = { -846.1318f, -235.1629f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 6:
			*uParam2 = { -845.9008f, -233.1965f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 7:
			*uParam2 = { -842.9956f, -232.3676f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 8:
			*uParam2 = { -849.8991f, -231.4483f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 9:
			*uParam2 = { -846.7684f, -232.0978f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 10:
			*uParam2 = { -845.6697f, -231.2301f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 11:
			*uParam2 = { -852.0716f, -230.714f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 12:
			*uParam2 = { -847.6361f, -230.9991f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 13:
			*uParam2 = { -849.5703f, -225.2719f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 14:
			*uParam2 = { -856.9199f, -229.5531f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		case 15:
			*uParam2 = { -853.1341f, -226.7959f, 60.0156f };
			*uParam3 = 38.3f;
			return 1;
			break;
		default:
			return 0;
			break;
	}
	return 1;
}

int func_638(int iParam0, var uParam1, var uParam2)//Position - 0x7C84A
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 5.1517f, -3.2974f, 0.4f };
			*uParam2 = 0f;
			return 1;
			break;
		case 1:
			*uParam1 = { 6.3788f, -3.0294f, 0.4f };
			*uParam2 = 36.9422f;
			return 1;
			break;
		case 2:
			*uParam1 = { 4.0087f, -2.8674f, 0.4f };
			*uParam2 = 0f;
			return 1;
			break;
		case 3:
			*uParam1 = { 7.0366f, -3.8192f, 0.4f };
			*uParam2 = 16.3534f;
			return 1;
			break;
		case 4:
			*uParam1 = { 2.9628f, -3.6428f, 0.4f };
			*uParam2 = 0f;
			return 1;
			break;
		case 5:
			*uParam1 = { 4.6304f, -1.6515f, 0.4f };
			*uParam2 = 327.5109f;
			return 1;
			break;
		case 6:
			*uParam1 = { 5.5178f, -2.2534f, 0.4f };
			*uParam2 = 339.3779f;
			return 1;
			break;
		case 7:
			*uParam1 = { 5.3979f, -1.2355f, 0.4f };
			*uParam2 = 331.9128f;
			return 1;
			break;
		case 8:
			*uParam1 = { -0.9456f, -3.2807f, 0f };
			*uParam2 = 93.7325f;
			return 1;
			break;
		case 9:
			*uParam1 = { 0.6642f, -2.7879f, 0f };
			*uParam2 = 89.0705f;
			return 1;
			break;
		case 10:
			*uParam1 = { -0.7213f, -5.309f, 0f };
			*uParam2 = 183.6788f;
			return 1;
			break;
		case 11:
			*uParam1 = { 0.5266f, -4.2436f, 0f };
			*uParam2 = 186.8069f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1.9974f, -6.1791f, 0f };
			*uParam2 = 179.254f;
			return 1;
			break;
		case 13:
			*uParam1 = { -2.0268f, -4.1156f, 0f };
			*uParam2 = 179.2435f;
			return 1;
			break;
		case 14:
			*uParam1 = { -0.6484f, -7.1687f, 0f };
			*uParam2 = 179.2753f;
			return 1;
			break;
		case 15:
			*uParam1 = { 0.496f, -9.5398f, 0f };
			*uParam2 = 179.5091f;
			return 1;
			break;
		case 16:
			*uParam1 = { 0.6616f, -8.0923f, 0f };
			*uParam2 = 176.7754f;
			return 1;
			break;
		case 17:
			*uParam1 = { -0.496f, -8.8664f, 0f };
			*uParam2 = 175.5715f;
			return 1;
			break;
		case 18:
			*uParam1 = { -1.7845f, -8.2893f, 0f };
			*uParam2 = 181.021f;
			return 1;
			break;
		case 19:
			*uParam1 = { 0.5093f, -6.1245f, 0f };
			*uParam2 = 179.4888f;
			return 1;
			break;
		case 20:
			*uParam1 = { 0.7598f, -0.0208f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 21:
			*uParam1 = { -0.5044f, -0.6497f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { -1.8692f, 0.2012f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 23:
			*uParam1 = { -1.7379f, -1.535f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 24:
			*uParam1 = { -0.761f, 0.8454f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 25:
			*uParam1 = { 0.6981f, 3.619f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 26:
			*uParam1 = { -1.6534f, 2.0621f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 27:
			*uParam1 = { -0.5641f, 3.1004f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 28:
			*uParam1 = { 0.7647f, 1.7091f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		case 29:
			*uParam1 = { -1.8282f, 3.9064f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_639(int iParam0, var uParam1, var uParam2)//Position - 0x7CC7E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 5.0054f, -5.6538f, 0.4f };
			*uParam2 = 180f;
			return 1;
			break;
		case 1:
			*uParam1 = { 3.8278f, -6.6482f, 0.4f };
			*uParam2 = 180f;
			return 1;
			break;
		case 2:
			*uParam1 = { 6.0638f, -6.0647f, 0.4f };
			*uParam2 = 180f;
			return 1;
			break;
		case 3:
			*uParam1 = { 5.0622f, -7.2667f, 0.4f };
			*uParam2 = 180f;
			return 1;
			break;
		case 4:
			*uParam1 = { 6.3787f, -6.983f, 0.4f };
			*uParam2 = 180f;
			return 1;
			break;
		case 5:
			*uParam1 = { 4.9478f, -9.208f, 0.4001f };
			*uParam2 = 0f;
			return 1;
			break;
		case 6:
			*uParam1 = { 3.4117f, -10.6669f, 0.4f };
			*uParam2 = 323.853f;
			return 1;
			break;
		case 7:
			*uParam1 = { 5.0435f, -10.5682f, 0.4f };
			*uParam2 = 0f;
			return 1;
			break;
	}
	return 0;
}

Vector3 func_640(var uParam0, int iParam1)//Position - 0x7D011
{
	switch (iParam1)
	{
		case 0:
			return -841.3613f, -228.9672f, 36.2652f;
			break;
		case 1:
			return -866.613f, -221.8429f, 38.6f;
			break;
		case 2:
			return -852.9012f, -235.8366f, 59.9961f;
			break;
	}
	return -841.3613f, -228.9672f, 36.2652f;
}

char* func_641(var uParam0, var uParam1, var uParam2)//Position - 0x7D1F5
{
	return "";
}

void func_642(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x7D771
{
	switch (iParam0)
	{
		case 148:
			*uParam1 = { -822.1176f, -198.5518f, 40.085f };
			*uParam2 = { 13.7424f, 0f, 145.7582f };
			*uParam3 = 65.2994f;
			*uParam4 = 0.2f;
			break;
	}
}

void func_643(int iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4)//Position - 0x7D880
{
	if (Global_1973170.f_3 > Global_1973170.f_4)
	{
		HUD::GET_HUD_COLOUR(12, iParam1, iParam2, iParam3, iParam4);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, iParam1, iParam2, iParam3, iParam4);
	}
	*iParam4 = (*iParam4 - 100);
}

void func_644(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x7D8BF
{
	switch (iParam0)
	{
		case 148:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { -841.3821f, -230.9289f, 38.8367f };
					*uParam3 = { -842.932f, -228.3405f, 36.0898f };
					*uParam4 = 3.25f;
					*uParam1 = { -841.3613f, -228.9672f, 36.2652f };
					*uParam5 = 122.4732f;
					break;
				case 1:
					*uParam2 = { -865.4588f, -224.2019f, 38.6137f };
					*uParam3 = { -867.5791f, -219.6411f, 40.6135f };
					*uParam4 = 3.25f;
					*uParam1 = { -866.613f, -221.8429f, 38.6f };
					*uParam5 = 294.3865f;
					break;
				case 2:
					*uParam2 = { -844.1016f, -237.6996f, 61.9961f };
					*uParam3 = { -842.339f, -236.6993f, 60f };
					*uParam4 = 3.25f;
					*uParam1 = { -843.8115f, -236.1727f, 60.0156f };
					*uParam5 = 211.2302f;
					break;
			}
			break;
	}
}

void func_645(int iParam0, var uParam1, var uParam2)//Position - 0x7D9E6
{
	switch (iParam0)
	{
		case 148:
			*uParam1 = { -976.9088f, -47.1964f, -100.0031f };
			uParam1->f_3 = { -1024.3755f, -93.5348f, -97.4031f };
			break;
	}
}

int func_646(var uParam0, var uParam1, var uParam2)//Position - 0x7DA26
{
	*uParam1 = 0;
	return 0;
}

char* func_647(var uParam0)//Position - 0x7DBF9
{
	return "MP_MUSIC_STUDIO_1";
}

Vector3 func_648(int iParam0)//Position - 0x7DC05
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 9);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 27);
	MISC::SET_BIT(&(Var0[0]), 29);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[0]), 0);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[0]), 18);
	MISC::SET_BIT(&(Var0[1]), 15);
	MISC::SET_BIT(&(Var0[1]), 2);
	MISC::SET_BIT(&(Var0[1]), 18);
	MISC::SET_BIT(&(Var0[1]), 21);
	return Var0;
}

void func_649(var uParam0, var uParam1)//Position - 0x7DE28
{
	uParam1->f_21 = "AM_MP_MUSIC_STUDIO";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

Vector3 func_650()//Position - 0x7DE7D
{
	return -1009.9955f, -70.0099f, -100.4031f;
}

int func_651(var uParam0)//Position - 0x7E3ED
{
	if (BitTest(Global_1946250.f_506, 9) && !BitTest(Global_1946250.f_4523.f_1, 4))
	{
		return 1;
	}
	return 0;
}

void func_652(char* sParam0, bool bParam1)//Position - 0x7E42D
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (AUDIO::IS_AMBIENT_ZONE_ENABLED(sParam0))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(sParam0, bParam1, true);
	}
}

char* func_653()//Position - 0x7E453
{
	return "AZ_dlc_hei4_int_sub_command";
}

char* func_654()//Position - 0x7E47A
{
	return "dlc_hei4_submarine_interior_mixerscene";
}

int func_655(int iParam0)//Position - 0x7E4F1
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_459, 5);
}

void func_656(bool bParam0)//Position - 0x7E517
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 6))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 6);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 6))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 6);
	}
}

int func_657(int iParam0)//Position - 0x7E580
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_459, 3);
}

void func_658(bool bParam0)//Position - 0x7E5A6
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 7))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 7);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458, 7))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_458), 7);
	}
}

int func_659(int iParam0)//Position - 0x7E60F
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_459, 4);
}

int func_660(int iParam0)//Position - 0x7E70C
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_459, 8);
}

void func_661(var uParam0)//Position - 0x7E84A
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_231))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_231, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_232))
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET(uParam0->f_232);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_233))
	{
		uParam0->f_233 = "";
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_234))
	{
		uParam0->f_234 = "";
	}
}

void func_662(bool bParam0)//Position - 0x7E8A2
{
	if (PLAYER::PLAYER_ID() == __LIB_0__.func_160() || PLAYER::PLAYER_ID() != Global_1853194)
	{
		return;
	}
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 16))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 16);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 16))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 16);
	}
}

void func_663(bool bParam0)//Position - 0x7E92D
{
	if (PLAYER::PLAYER_ID() == __LIB_0__.func_160())
	{
		return;
	}
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 15))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 15);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 15))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 15);
	}
}

void func_664()//Position - 0x7E9EC
{
	ENTITY::CREATE_MODEL_HIDE(1561.613f, 419.6257f, -48.1646f, 50f, joaat("v_ilev_cd_lampal"), true);
}

void func_665(var uParam0, var uParam1, var uParam2)//Position - 0x7EA31
{
	*uParam0 = { 1561.5623f, 412.5084f, -50.6669f };
	*uParam1 = 1f;
	*uParam2 = joaat("h4_prop_sub_lift_platfom");
}

void func_666(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x7EA58
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1561.5829f, 412.508f, -47.3105f };
			*uParam2 = 5f;
			*uParam3 = joaat("h4_int_sub_lift_doors_l");
			*uParam4 = joaat("h4_int_sub_lift_doors_r");
			break;
		case 1:
			*uParam1 = { 1561.487f, 410.6379f, -55.4424f };
			*uParam2 = 4f;
			*uParam3 = joaat("h4_prop_sub_pool_hatch_l_01a");
			*uParam4 = joaat("h4_prop_sub_pool_hatch_r_01a");
			break;
		case 2:
			*uParam1 = { 1561.487f, 416.959f, -55.4424f };
			*uParam2 = 4f;
			*uParam3 = joaat("h4_prop_sub_pool_hatch_l_02a");
			*uParam4 = joaat("h4_prop_sub_pool_hatch_r_02a");
			break;
	}
}

int func_667(int iParam0)//Position - 0x7EAF7
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_459, 7);
}

int func_668(int iParam0)//Position - 0x7EB1D
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_459, 6);
}

char* func_669(bool bParam0, bool bParam1)//Position - 0x7EB43
{
	if (bParam1)
	{
		return "anim@scripted@submarine@ig24_submarine_exit@male@";
	}
	else if (bParam0)
	{
		return "anim@scripted@submarine@ig24_submarine_exit@heeled@";
	}
	return "anim@scripted@submarine@ig24_submarine_exit@male@";
}

void func_670(bool bParam0)//Position - 0x7EDEF
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_1946250, 22);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1946250, 22);
	}
}

int func_671()//Position - 0x7F15A
{
	return Global_1946250.f_4533.f_2;
}

int func_672()//Position - 0x7F1A9
{
	if (Global_1853194 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[Global_1853194 /*834*/].f_267.f_459, 16);
}

void func_673(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7F218
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) != 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
	}
	switch (iParam1)
	{
		case 0:
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != -1)
			{
				VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 10);
			}
			break;
		case 1:
			VEHICLE::SET_VEHICLE_MOD(iParam0, 10, 0, false);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_MOD(iParam0, 10, 1, false);
			break;
	}
	switch (iParam3)
	{
		case 0:
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) != -1)
			{
				VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 1);
			}
			break;
		case 1:
			VEHICLE::SET_VEHICLE_MOD(iParam0, 1, 0, false);
			VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(iParam0, Global_262145.f_21989 /* Tunable: SMUGGLER_CHAFF_AMMO */);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_MOD(iParam0, 1, 1, false);
			VEHICLE::SET_VEHICLE_COUNTERMEASURE_AMMO(iParam0, Global_262145.f_21988 /* Tunable: SMUGGLER_FLARE_AMMO */);
			break;
	}
	switch (iParam2)
	{
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 10, 111);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 5, 111);
			break;
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 111, 111);
			break;
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 36, 111);
			break;
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 150, 150);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 43, 111);
			break;
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 32, 32);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 25, 111);
			break;
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 143, 143);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 31, 111);
			break;
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 135, 135);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 135, 111);
			break;
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 137, 137);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 3, 111);
			break;
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 136, 136);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 5, 111);
			break;
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 38, 38);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 37, 111);
			break;
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 138, 138);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 89, 111);
			break;
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 88, 111);
			break;
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 89, 89);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 88, 111);
			break;
		case 15:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 91, 91);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 91, 111);
			break;
		case 16:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 50, 50);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 53, 111);
			break;
		case 17:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 51, 51);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 66, 111);
			break;
		case 18:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 59, 111);
			break;
		case 19:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 54, 54);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 60, 111);
			break;
		case 20:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 92, 92);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 92, 111);
			break;
		case 21:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 141, 141);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 73, 111);
			break;
		case 22:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 64, 64);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 68, 111);
			break;
		case 23:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 68, 111);
			break;
		case 24:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 70, 70);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 70, 111);
			break;
		case 25:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 104, 104);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 104, 111);
			break;
		case 26:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 99, 99);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 106, 111);
			break;
		case 27:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 146, 146);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 145, 111);
			break;
		case 28:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 145, 145);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 74, 111);
			break;
		case 29:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 107, 107);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 107, 111);
			break;
		case 30:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 111, 111);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 0, 111);
			break;
	}
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, 1);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, 132);
}

void func_674(int iParam0)//Position - 0x7F618
{
	if (__LIB_0__.func_121(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("seasparrow3"))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	}
}

bool func_675()//Position - 0x7F642
{
	return BitTest(Global_1946250.f_506, 9);
}

void func_676(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x7FAEA
{
	*uParam0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam2->f_3, uParam2->f_221[iParam3], uParam2->f_28, uParam2->f_31, 0f, 2) };
	*uParam1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam2->f_3, uParam2->f_221[iParam3], uParam2->f_28, uParam2->f_31, 0f, 2) };
}

void func_677(var uParam0, int iParam1)//Position - 0x7FB36
{
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_233) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_232)) && __LIB_0__.func_121(iParam1))
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET(uParam0->f_232);
		uParam0->f_231 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_233, iParam1, uParam0->f_235, uParam0->f_238, 1f, false, false, false);
	}
}

void func_678()//Position - 0x7FBCD
{
	ENTITY::REMOVE_MODEL_HIDE(1561.613f, 419.6257f, -48.1646f, 50f, joaat("v_ilev_cd_lampal"), false);
}

int func_679(int iParam0)//Position - 0x7FC9E
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_459, 15);
}

int func_680(int iParam0, int iParam1)//Position - 0x7FD99
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("h4_prop_sub_lift_platfom");
					break;
				case 1:
					return joaat("h4_int_sub_lift_doors_l");
					break;
				case 2:
					return joaat("h4_int_sub_lift_doors_r");
					break;
				default:
					return 0;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("h4_prop_sub_pool_hatch_l_01a");
					break;
				case 1:
					return joaat("h4_prop_sub_pool_hatch_r_01a");
					break;
				default:
					return 0;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("h4_prop_sub_pool_hatch_l_02a");
					break;
				case 1:
					return joaat("h4_prop_sub_pool_hatch_r_02a");
					break;
				default:
					return 0;
					break;
			}
			break;
	}
	return 0;
}

void func_681(int* iParam0, int iParam1, char* sParam2, struct<3> Param3, struct<3> Param4, char* sParam5, char* sParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x7FE65
{
	if (iParam0->f_372 == 1)
	{
		return;
	}
	iParam0->f_18[iParam0->f_372 /*36*/] = iParam1;
	StringCopy(&(iParam0->f_18[iParam0->f_372 /*36*/].f_16), sParam2, 32);
	iParam0->f_18[iParam0->f_372 /*36*/].f_24 = iParam8;
	iParam0->f_18[iParam0->f_372 /*36*/].f_25 = iParam9;
	iParam0->f_394 = -1;
	StringCopy(&(iParam0->f_395), sParam5, 64);
	StringCopy(&(iParam0->f_411), sParam6, 64);
	iParam0->f_427 = { Param3 };
	iParam0->f_430 = { Param4 };
	iParam0->f_433 = iParam10;
	iParam0->f_434 = iParam11;
	iParam0->f_372++;
	iParam0->f_378 = (iParam0->f_378 + iParam1);
	MISC::SET_BIT(iParam0, 0);
	if (bParam7)
	{
		MISC::SET_BIT(iParam0, 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 1);
	}
}

char* func_682(bool bParam0, bool bParam1)//Position - 0x7FF27
{
	if (bParam1)
	{
		return "action_cam";
	}
	else if (bParam0)
	{
		return "action_heeled";
	}
	return "action_male";
}

Vector3 func_683(int iParam0)//Position - 0x7FF4E
{
	switch (iParam0)
	{
		case 1:
			return 0f, 0f, 0f;
			break;
		case 2:
			return 0f, 0f, -180f;
			break;
		case 3:
			return 0f, 0f, 0f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_684(int iParam0)//Position - 0x7FF91
{
	switch (iParam0)
	{
		case 1:
			return 1564.621f, 448.563f, -54.237f;
			break;
		case 2:
			return 1563.448f, 369.754f, -50.679f;
			break;
		case 3:
			return 1561.502f, 392.491f, -50.679f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_685(int iParam0, bool bParam1)//Position - 0xB7903
{
	if (bParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1:
			return 5;
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		default:
	}
	return -1;
}

int func_686(var uParam0)//Position - 0xB8ABD
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_232))
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(uParam0->f_232);
		if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(uParam0->f_232))
		{
			return 0;
		}
	}
	return 1;
}

void func_687(var uParam0)//Position - 0xB8AEA
{
	uParam0->f_232 = "scr_ih_sub";
	uParam0->f_233 = "scr_ih_sub_pool_door";
	uParam0->f_235 = { 0.2f, 0f, 0f };
	uParam0->f_238 = { 0f, 0f, 0f };
}

char* func_688()//Position - 0xB8B47
{
	return "Submarine_Vehicles_Enter_Exit_Sounds";
}

int func_689()//Position - 0xB8CC3
{
	if (Global_1853194 != __LIB_0__.func_160())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1640763))
		{
			return Global_1640763;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1963860[Global_1853194]))
		{
			return Global_1963860[Global_1853194];
		}
	}
	return -1;
}

bool func_690()//Position - 0xB8D07
{
	return Global_2815059.f_342;
}

void func_691(bool bParam0)//Position - 0xB8E21
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 5))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 5);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 5))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 5);
	}
}

void func_692(bool bParam0)//Position - 0xB8E8A
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 4))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 4);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 4))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 4);
	}
}

void func_693(bool bParam0)//Position - 0xB8EF3
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 3))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 3);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459, 3))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_459), 3);
	}
}

void func_694(int iParam0)//Position - 0xB8F5C
{
	Global_2787855 = iParam0;
}

void func_695(int iParam0)//Position - 0xB9465
{
	if (*iParam0 == joaat("seasparrow2"))
	{
		*iParam0 = joaat("seasparrow3");
	}
}

int func_696()//Position - 0xB9480
{
	return Global_1946250.f_4533.f_3;
}

bool func_697()//Position - 0xB974F
{
	return __LIB_0__.func_137(30522, -1);
}

void func_698(var uParam0, var uParam1, var uParam2)//Position - 0xB9788
{
	MISC::CLEAR_BIT(&(Global_1946250.f_7), 2);
	MISC::CLEAR_BIT(&(uParam1->f_188), 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_3))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_3);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		PED::DELETE_PED(&(uParam1->f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam1->f_109));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__.func_704());
}

int func_699(var uParam0, var uParam1)//Position - 0xB97E6
{
	MISC::SET_BIT(&(Global_1946250.f_7), 2);
	return 1;
}

int func_700(int iParam0, bool bParam1)//Position - 0xB9C6B
{
	if (Global_78319)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_VEHICLE(iParam0)) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Submarine"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_701(int iParam0, int iParam1)//Position - 0xB9E15
{
	int iVar0;
	switch (iParam0)
	{
		case 147:
			switch (iParam1)
			{
				case 1:
				case 0:
					iVar0 = 7000;
					break;
				case 2:
					iVar0 = 4200;
					break;
				default:
					iVar0 = 1000;
					break;
			}
			break;
	}
	return iVar0;
}

Vector3 func_702(int iParam0, int iParam1, int iParam2)//Position - 0xB9F2F
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 147:
			switch (iParam1)
			{
				case 1:
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, 0f, 38.8955f, 3.7412f) };
					break;
				case 0:
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, 0f, 30.75f, 3.7806f) };
					break;
				case 2:
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, 0f, 30.75f, 3.7806f) };
					break;
			}
			break;
	}
	return Var0;
}

void func_703(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0xBA1A4
{
	switch (iParam0)
	{
		case 147:
			switch (iParam5)
			{
				case 1:
					*uParam1 = { 1563.4794f, 377.9258f, -49.7108f };
					*uParam2 = { 2.3201f, 0f, -168.8085f };
					*uParam3 = 50f;
					*uParam4 = 0.2f;
					break;
				case 0:
					*uParam1 = { 1563.9391f, 440.0663f, -53.0908f };
					*uParam2 = { 0.5528f, 0f, -6.9646f };
					*uParam3 = 44.7001f;
					*uParam4 = 0.2f;
					break;
				case 2:
					*uParam1 = { 1559.6917f, 386.3576f, -49.568f };
					*uParam2 = { 4.9114f, 0f, -24.4355f };
					*uParam3 = 50f;
					*uParam4 = 0.2f;
					break;
				default:
					*uParam1 = { 1559.6917f, 386.3576f, -49.568f };
					*uParam2 = { 4.9114f, 0f, -24.4355f };
					*uParam3 = 50f;
					*uParam4 = 0.2f;
					break;
			}
			break;
	}
}

void func_704()//Position - 0xBA3D4
{
	Global_1946250.f_4533.f_2 = __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0);
}

int func_705(int iParam0)//Position - 0xBA5B1
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("avisa"):
			case joaat("seasparrow2"):
			case joaat("seasparrow3"):
			case joaat("toreador"):
			case joaat("stromberg"):
				return 1;
				break;
			}
	}
	return 0;
}

bool func_706()//Position - 0xBAA1D
{
	return BitTest(Global_1946250.f_7, 14);
}

int func_707(int iParam0)//Position - 0xBAAD7
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1, 24);
	}
	return 0;
}

int func_708(int iParam0)//Position - 0xBAB00
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_292, 1);
	}
	return 0;
}

int func_709(int iParam0)//Position - 0xBAB26
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (((((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_710(int iParam0)//Position - 0xBABEB
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_353 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_711(int iParam0)//Position - 0xBAC73
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_458, 3);
}

void func_712(bool bParam0)//Position - 0xBAD21
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_7), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_7), 12);
	}
}

int func_713(int iParam0)//Position - 0xBB070
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1892703[iVar0 /*599*/].f_9)
		{
			return 1;
		}
	}
	return 0;
}

void func_714(bool bParam0)//Position - 0xBB14A
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_1, 21))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 21);
		}
	}
	else if (BitTest(Global_1946250.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 21);
	}
}

bool func_715()//Position - 0xBB18B
{
	return BitTest(Global_1946250.f_1, 21);
}

char* func_716()//Position - 0xBB216
{
	return "DLC_HEI4/DLC_HEI4_SUB_ENTRY";
}

void func_717(bool bParam0)//Position - 0xBB61C
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_7), 8);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_7), 8);
	}
}

int func_718(int iParam0, struct<3> Param1, float* fParam2)//Position - 0xBB9F3
{
	float fVar0;
	struct<3> Var1;
	MISC::GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, false, false);
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	MISC::GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(Param1, fParam2, false, false);
	*fParam2 = (*fParam2 + ((Var1.f_2 - fVar0) + 0.5f));
	return 1;
}

int func_719(var uParam0)//Position - 0xBBB2F
{
	return 61;
}

int func_720(var uParam0, var uParam1)//Position - 0xBBB39
{
	return 5;
}

int func_721(var uParam0)//Position - 0xBBB99
{
	return 324;
}

int func_722(var uParam0, var uParam1)//Position - 0xBBC14
{
	if (BitTest(Global_1946250.f_506, 0))
	{
		return 1;
	}
	return 0;
}

void func_723(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xBBC2D
{
	if (*uParam2 != 9)
	{
		return;
	}
	*uParam3 = 2;
	StringCopy(sParam1, "SUBMARINE_TITLE" /* GXT: KOSATKA */, 64);
	(*uParam2)[0] = "SUBMARINE_EX1" /* GXT: Exit Kosatka */;
	(*uParam2)[1] = "SUBMARINE_EX2" /* GXT: All Exit Kosatka */;
}

Vector3 func_724(var uParam0)//Position - 0xBBC5E
{
	return 1561.5117f, 409.7281f, -57.0887f;
}

void func_725(struct<3> Param0, var uParam1)//Position - 0xBD1A1
{
	float fVar0;
	struct<3> Var1;
	Var1 = { 0f, 0f, 6.7f };
	WATER::GET_WATER_HEIGHT_NO_WAVES(Param0, &fVar0);
	if ((Param0.f_2 + Var1.f_2) <= fVar0)
	{
		*uParam1 = { Param0.f_0, Param0.f_1, (fVar0 + 20f) };
	}
}

struct<4> func_726(var uParam0)//Position - 0xBD1E0
{
	struct<4> Var0;
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1008981770;
	Var0.f_3 = 1073741824;
	Var0.f_0 = 0;
	Var0.f_1 = 0;
	return Var0;
}

int func_727(int iParam0, var uParam1, var uParam2)//Position - 0xBD634
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 4.5f, 9f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 1:
			*uParam1 = { 4.5f, 9.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 2:
			*uParam1 = { 4.5f, 10f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 3:
			*uParam1 = { 4.5f, 10.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 4:
			*uParam1 = { 4.5f, 11f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 5:
			*uParam1 = { 4.5f, 11.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 6:
			*uParam1 = { 4.5f, 12f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 7:
			*uParam1 = { 4.5f, 12.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 8:
			*uParam1 = { 4.5f, 13f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 9:
			*uParam1 = { 4.5f, 13.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 10:
			*uParam1 = { 4.5f, 14f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 11:
			*uParam1 = { 4.5f, 14.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 12:
			*uParam1 = { 4.5f, 15f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 13:
			*uParam1 = { 4.5f, 15.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 14:
			*uParam1 = { 4.5f, 16f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 15:
			*uParam1 = { 4.5f, 16.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 16:
			*uParam1 = { 4.5f, 17f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 17:
			*uParam1 = { 4.5f, 17.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 18:
			*uParam1 = { 4.5f, 18f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 19:
			*uParam1 = { 4.5f, 18.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 20:
			*uParam1 = { 4.5f, 19f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 21:
			*uParam1 = { 4.5f, 19.5f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 22:
			*uParam1 = { -1.5f, 9f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 23:
			*uParam1 = { -1.5f, 10f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 24:
			*uParam1 = { -1.5f, 11f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 25:
			*uParam1 = { -1.5f, 12f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 26:
			*uParam1 = { -1.5f, 13f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 27:
			*uParam1 = { -1.5f, 14f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 28:
			*uParam1 = { -1.5f, 15f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 29:
			*uParam1 = { -1.5f, 16f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 30:
			*uParam1 = { -1.5f, 17f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
		case 31:
			*uParam1 = { -1.5f, 18f, -4.176f };
			*uParam2 = 180f;
			return 1;
			break;
	}
	return 0;
}

int func_728(int iParam0, var uParam1, var uParam2)//Position - 0xBDB44
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1.4561f, -8.5826f, -0.6871f };
			*uParam2 = 180f;
			return 1;
			break;
		case 1:
			*uParam1 = { 2.855f, -9.3059f, -0.6865f };
			*uParam2 = 145.44f;
			return 1;
			break;
		case 2:
			*uParam1 = { 0.5104f, -9.262f, -0.6869f };
			*uParam2 = 184.32f;
			return 1;
			break;
		case 3:
			*uParam1 = { 2.923f, -11.9576f, -1.12f };
			*uParam2 = 184.32f;
			return 1;
			break;
		case 4:
			*uParam1 = { -0.8422f, -9.2354f, -0.6864f };
			*uParam2 = 184.32f;
			return 1;
			break;
		case 5:
			*uParam1 = { -0.401f, -10.6919f, -0.6858f };
			*uParam2 = 184.32f;
			return 1;
			break;
		case 6:
			*uParam1 = { 0.5361f, -12.3384f, -0.6855f };
			*uParam2 = 184.32f;
			return 1;
			break;
		case 7:
			*uParam1 = { 0.0859f, -13.6388f, -0.6855f };
			*uParam2 = 184.32f;
			return 1;
			break;
		case 8:
			*uParam1 = { 3.0016f, -13.8134f, -0.6853f };
			*uParam2 = 95.04f;
			return 1;
			break;
		case 9:
			*uParam1 = { 2.9137f, -12.8173f, -0.6853f };
			*uParam2 = 95.04f;
			return 1;
			break;
	}
	return 0;
}

int func_729(int iParam0)//Position - 0xBE056
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 28);
	}
	return 0;
}

int func_730(int iParam0)//Position - 0xBE07C
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_458, 0);
}

int func_731(int iParam0)//Position - 0xBE19C
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 25);
	}
	return 0;
}

int func_732(int iParam0)//Position - 0xBE3B5
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_458, 8);
	}
	return 0;
}

int func_733(int iParam0)//Position - 0xBE3DC
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 27);
	}
	return 0;
}

bool func_734()//Position - 0xBE7C4
{
	return BitTest(Global_1946250.f_7, 12);
}

int func_735(int iParam0)//Position - 0xBE8A9
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 3);
	}
	return 0;
}

void func_736(bool bParam0)//Position - 0xBE8CE
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_1, 5))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 5);
		}
	}
	else if (BitTest(Global_1946250.f_1, 5))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 5);
	}
}

int func_737(int iParam0)//Position - 0xBE90B
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_459, 9);
}

void func_738(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xBEC99
{
	switch (iParam0)
	{
		case 147:
			StringCopy(sParam1, "SUBMARINE_TITLE" /* GXT: KOSATKA */, 64);
			break;
	}
	(*uParam2)[0] = "BWH_ENTRM_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_739()//Position - 0xBF92A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0;
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
		{
			if (!PED::IS_PED_A_PLAYER(iVar2))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_740(int iParam0, int iParam1, int iParam2)//Position - 0xBFBB1
{
	if (iParam2 == -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 147:
			switch (iParam2)
			{
				case 1:
				case 0:
				case 2:
				case 5:
					return 0;
					break;
				case 3:
					if (iParam1 == joaat("seasparrow2"))
					{
						return 1;
					}
					break;
				case 4:
					if ((iParam1 == joaat("avisa") || iParam1 == joaat("toreador")) || iParam1 == joaat("stromberg"))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_741(int iParam0, bool bParam1)//Position - 0xC0025
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Moon_Pool"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Moon_Pool") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_742(int iParam0)//Position - 0xC022D
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_26 != __LIB_0__.func_160())
	{
		return 1;
	}
	return 0;
}

int func_743(int iParam0)//Position - 0xC0744
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_293, 13);
	}
	return 0;
}

int func_744()//Position - 0xC076B
{
	int iVar0;
	if (Global_1659440 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1659440)
		{
			if (iVar0 < 12 && Global_2656326[iVar0 /*46*/].f_2)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_745()//Position - 0xC08C9
{
	if (__LIB_0__.func_1("MATC_DPADRIGH5" /* GXT: ~s~Press ~INPUT_CONTEXT~ to enter. ~n~Press ~INPUT_FRONTEND_LEFT~ to go on call. */) || __LIB_0__.func_1("MATC_DPADRIGHT" /* GXT: Press ~INPUT_CONTEXT~ to enter. */))
	{
		return 1;
	}
	return 0;
}

bool func_746()//Position - 0xC08EF
{
	return BitTest(Global_1946250, 13);
}

void func_747(int iParam0, var uParam1, var uParam2)//Position - 0xC09C2
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_748(int iParam0)//Position - 0xC09F1
{
	if (iParam0 > -1 && iParam0 < 159)
	{
		return 1;
	}
	return 0;
}

void func_749(int iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4)//Position - 0xC0CAE
{
	HUD::GET_HUD_COLOUR(9, iParam1, iParam2, iParam3, iParam4);
}

int func_750(var uParam0)//Position - 0xC0CC4
{
	return 6;
}

char* func_751(var uParam0, int iParam1)//Position - 0xC0D2D
{
	switch (iParam1)
	{
		case 0:
			return "PIM_INVSUB_H" /* GXT: Invite players to your Kosatka. */;
			break;
		case 1:
			return "PIM_INVSUBMA" /* GXT: Invite to Kosatka */;
			break;
		case 3:
			return "PIM_TITLE_SUBMA" /* GXT: INVITE TO KOSATKA */;
			break;
		case 4:
			return "PIM_INVSUB_TCK" /* GXT: Invite to Kosatka has been sent to ~a~. */;
			break;
		case 5:
			return "";
			break;
		case 6:
			return "CELL_SUB_PINV" /* GXT: Hey, come over to the Kosatka. */;
			break;
	}
	return "";
}

void func_752(int iParam0, var uParam1, var uParam2)//Position - 0xC0DC0
{
	switch (iParam0)
	{
		case 147:
			*uParam1 = { 1553.2885f, 364.1557f, -58.4556f };
			uParam1->f_3 = { 1566.749f, 448.591f, -47.2756f };
			break;
	}
}

int func_753(var uParam0)//Position - 0xC0E00
{
	return 1238;
}

char* func_754(int iParam0)//Position - 0xC0E0B
{
	switch (iParam0)
	{
		case 147:
			return "SUBMARINE_1";
		default:
	}
	return "MISSING";
}

Vector3 func_755(var uParam0)//Position - 0xC0E2B
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[0]), 21);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[0]), 30);
	MISC::SET_BIT(&(Var0[1]), 2);
	MISC::SET_BIT(&(Var0[1]), 9);
	MISC::SET_BIT(&(Var0[1]), 12);
	MISC::SET_BIT(&(Var0[1]), 13);
	MISC::SET_BIT(&(Var0[1]), 21);
	return Var0;
}

void func_756(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4)//Position - 0xC113E
{
	switch (iParam0)
	{
		case 147:
			*uParam2 = { 1560f, 400f, -50f };
			*uParam3 = 0f;
			StringCopy(sParam1, "h4_int_sub_h4", 64);
			break;
	}
}

int func_757(var uParam0, var uParam1)//Position - 0xC1D7F
{
	char* sVar0;
	bool bVar1;
	MISC::SET_BIT(&(Global_1946250.f_5), 27);
	sVar0 = "mini@strip_club@throwout_d@";
	bVar1 = true;
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		bVar1 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_ClubBar_01"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_ClubBar_01")))
	{
		bVar1 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Bouncer_01"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Bouncer_01")))
	{
		bVar1 = false;
	}
	if (!bVar1)
	{
		return 0;
	}
	return 1;
}

int func_758(var uParam0, var uParam1)//Position - 0xC1DEC
{
	if (BitTest(Global_1946250.f_506, 1))
	{
		return 1;
	}
	return 0;
}

Vector3 func_759(int iParam0)//Position - 0xC22D2
{
	switch (iParam0)
	{
		case 146:
			return 962.8551f, 63.9879f, 82.1782f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_760(var uParam0)//Position - 0xC24FC
{
	return 987.32f, 79.32f, 79.99f;
}

int func_761(var uParam0)//Position - 0xC2513
{
	return 136;
}

int func_762(int iParam0)//Position - 0xC2A0A
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_408 != 0;
	}
	return 0;
}

void func_763(int iParam0)//Position - 0xC2A51
{
	if (iParam0 != -1)
	{
		if (Global_1946250.f_4701 == -1)
		{
			Global_1946250.f_4701 = iParam0;
		}
	}
}

void func_764(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC2AE7
{
	if (*uParam2 != 9)
	{
		return;
	}
	StringCopy(sParam1, "CAS_NCLB_EXT_T" /* GXT: THE MUSIC LOCKER */, 64);
	*uParam3 = 8;
	(*uParam2)[0] = "CAS_NCLB_E_O_0" /* GXT: Exit The Music Locker */;
	(*uParam2)[1] = "CAS_NCLB_E_O_1";
	(*uParam2)[2] = "CASINO_APT_EXIT_C" /* GXT: Casino */;
	(*uParam2)[3] = "CASINO_ENT_F1" /* GXT: Penthouse */;
	(*uParam2)[4] = "CASINO_ENT_F2" /* GXT: Penthouse Garage */;
	(*uParam2)[5] = "CASINO_ENT_F3" /* GXT: Parking Garage */;
	(*uParam2)[6] = "CASINO_ENT_F4" /* GXT: Roof Terrace */;
	(*uParam2)[7] = "CASINO_ENT_F5" /* GXT: Roof */;
}

int func_765(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0xC2BF0
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 987.6998f, 79.6174f, 79.9906f };
			*uParam3 = 325.8119f;
			return 1;
			break;
		case 1:
			*uParam2 = { 988.838f, 79.1121f, 79.9906f };
			*uParam3 = 330.0994f;
			return 1;
			break;
		case 2:
			*uParam2 = { 985.5862f, 84.4155f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 3:
			*uParam2 = { 986.7773f, 80.4501f, 79.9906f };
			*uParam3 = 334.274f;
			return 1;
			break;
		case 4:
			*uParam2 = { 985.0731f, 83.1928f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 5:
			*uParam2 = { 983.9196f, 82.9472f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 6:
			*uParam2 = { 983.9998f, 84.5737f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 7:
			*uParam2 = { 982.5625f, 82.4819f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 8:
			*uParam2 = { 985.6527f, 82.2686f, 79.9906f };
			*uParam3 = 350.7229f;
			return 1;
			break;
		case 9:
			*uParam2 = { 982.5352f, 80.6484f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 10:
			*uParam2 = { 980.6038f, 81.2832f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 11:
			*uParam2 = { 981.9153f, 84.7201f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 12:
			*uParam2 = { 981.047f, 82.9033f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 13:
			*uParam2 = { 983.127f, 85.9735f, 79.9907f };
			*uParam3 = 64.3531f;
			return 1;
			break;
		case 14:
			*uParam2 = { 979.0856f, 82.2783f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 15:
			*uParam2 = { 980.5722f, 84.4286f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 16:
			*uParam2 = { 980.5979f, 86.0491f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 17:
			*uParam2 = { 979.4668f, 84.0393f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 18:
			*uParam2 = { 981.4636f, 87.2133f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 19:
			*uParam2 = { 977.7943f, 83.2559f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 20:
			*uParam2 = { 978.3337f, 87.0449f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 21:
			*uParam2 = { 979.3495f, 85.6261f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 22:
			*uParam2 = { 975.6777f, 86.726f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 23:
			*uParam2 = { 980.027f, 88.0974f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 24:
			*uParam2 = { 977.4577f, 85.2751f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 25:
			*uParam2 = { 974.8323f, 89.2286f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 26:
			*uParam2 = { 976.7056f, 88.7798f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 27:
			*uParam2 = { 973.9108f, 87.725f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 28:
			*uParam2 = { 978.2062f, 89.4353f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 29:
			*uParam2 = { 975.322f, 84.7579f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 30:
			*uParam2 = { 972.6411f, 91.2214f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 31:
			*uParam2 = { 973.9681f, 92.0315f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 32:
			*uParam2 = { 971.3626f, 89.7511f, 79.9906f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 33:
			*uParam2 = { 976.3371f, 90.3089f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 34:
			*uParam2 = { 973.2603f, 86.0688f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 35:
			*uParam2 = { 991.7577f, 78.5492f, 79.9906f };
			*uParam3 = 237.7406f;
			return 1;
			break;
		case 36:
			*uParam2 = { 992.4178f, 79.9915f, 79.9906f };
			*uParam3 = 251.9052f;
			return 1;
			break;
		case 37:
			*uParam2 = { 970.2983f, 86.4567f, 79.9902f };
			*uParam3 = 148.09f;
			return 1;
			break;
		case 38:
			*uParam2 = { 969.8869f, 92.5477f, 79.9907f };
			*uParam3 = 56.16f;
			return 1;
			break;
		case 39:
			*uParam2 = { 969.7424f, 88.262f, 79.9907f };
			*uParam3 = 150.6809f;
			return 1;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_766()//Position - 0xC3244
{
	MISC::CLEAR_BIT(&(Global_1946250.f_5), 14);
}

int func_767(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xC3258
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 977.7286f, 61.4553f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 1:
			*uParam2 = { 976.6138f, 62.124f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 2:
			*uParam2 = { 978.8434f, 60.7865f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 3:
			*uParam2 = { 974.825f, 63.1637f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 4:
			*uParam2 = { 979.9583f, 60.1177f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 5:
			*uParam2 = { 973.1671f, 63.9873f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 6:
			*uParam2 = { 981.0731f, 59.449f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 7:
			*uParam2 = { 971.5465f, 65.3677f, 119.2259f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 8:
			*uParam2 = { 977.0599f, 60.3405f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 9:
			*uParam2 = { 975.9451f, 61.0093f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 10:
			*uParam2 = { 978.1747f, 59.6717f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 11:
			*uParam2 = { 974.1289f, 62.1058f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 12:
			*uParam2 = { 979.2895f, 59.0029f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 13:
			*uParam2 = { 969.6888f, 62.1277f, 119.2259f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 14:
			*uParam2 = { 983.0764f, 58.3915f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 15:
			*uParam2 = { 970.5819f, 63.6996f, 119.2259f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 16:
			*uParam2 = { 974.6773f, 55.0764f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 17:
			*uParam2 = { 975.2763f, 59.8945f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 18:
			*uParam2 = { 977.5059f, 58.5569f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 19:
			*uParam2 = { 973.7545f, 60.2713f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 20:
			*uParam2 = { 978.6972f, 56.3623f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 21:
			*uParam2 = { 972.3776f, 60.8114f, 119.2408f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 22:
			*uParam2 = { 981.9325f, 55.7656f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 23:
			*uParam2 = { 967.3163f, 59.0168f, 119.2259f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 24:
			*uParam2 = { 973.1139f, 55.9958f, 119.2261f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 25:
			*uParam2 = { 970.9693f, 59.9194f, 119.2259f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 26:
			*uParam2 = { 977.3831f, 56.9464f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 27:
			*uParam2 = { 968.829f, 59.7325f, 119.2259f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 28:
			*uParam2 = { 981.9651f, 53.9143f, 119.2257f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 29:
			*uParam2 = { 971.2009f, 57.0126f, 119.2259f };
			*uParam3 = 149.04f;
			return 1;
			break;
		case 30:
			*uParam2 = { 959.439f, 32.1849f, 119.226f };
			*uParam3 = 147.0743f;
			return 1;
			break;
		case 31:
			*uParam2 = { 957.7834f, 33.3199f, 119.226f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 32:
			*uParam2 = { 960.403f, 31.025f, 119.226f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 33:
			*uParam2 = { 953.8661f, 35.6682f, 119.2258f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 34:
			*uParam2 = { 961.8635f, 30.7777f, 119.226f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 35:
			*uParam2 = { 955.4436f, 33.7557f, 119.2258f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 36:
			*uParam2 = { 956.9995f, 31.7663f, 119.2259f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 37:
			*uParam2 = { 960.4615f, 29.7253f, 119.226f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 38:
			*uParam2 = { 952.8369f, 34.4785f, 119.2259f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 39:
			*uParam2 = { 964.4356f, 27.3626f, 119.226f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 40:
			*uParam2 = { 958.9203f, 28.3665f, 119.226f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 41:
			*uParam2 = { 954.9124f, 31.0344f, 119.2258f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 42:
			*uParam2 = { 960.4018f, 26.7007f, 119.226f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 43:
			*uParam2 = { 951.7661f, 32.4964f, 119.2259f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 44:
			*uParam2 = { 963.2364f, 25.7707f, 119.226f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 45:
			*uParam2 = { 956.8428f, 28.132f, 119.2259f };
			*uParam3 = 149.76f;
			return 1;
			break;
		case 46:
			*uParam2 = { 964.2562f, 59.0137f, 111.553f };
			*uParam3 = 58.68f;
			return 1;
			break;
		case 47:
			*uParam2 = { 965.21f, 59.9826f, 111.5531f };
			*uParam3 = 58.68f;
			return 1;
			break;
		case 48:
			*uParam2 = { 963.6317f, 57.9828f, 111.5529f };
			*uParam3 = 58.68f;
			return 1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_768()//Position - 0xC3A14
{
	return BitTest(Global_1946250.f_5, 14);
}

void func_769()//Position - 0xC3A25
{
	MISC::CLEAR_BIT(&(Global_1946250.f_4), 30);
}

int func_770(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xC3A39
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 964.287f, 58.9797f, 111.553f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 1:
			*uParam2 = { 964.0721f, 60.4364f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 2:
			*uParam2 = { 963.3423f, 57.6183f, 111.5529f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 3:
			*uParam2 = { 964.8136f, 61.2717f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 4:
			*uParam2 = { 962.4945f, 56.4102f, 111.5529f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 5:
			*uParam2 = { 961.5035f, 60.657f, 111.553f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 6:
			*uParam2 = { 962.7609f, 59.3626f, 111.553f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 7:
			*uParam2 = { 962.7224f, 61.2828f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 8:
			*uParam2 = { 961.489f, 58.8472f, 111.5529f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 9:
			*uParam2 = { 963.8465f, 62.6046f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 10:
			*uParam2 = { 961.3293f, 57.5069f, 111.5529f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 11:
			*uParam2 = { 963.5379f, 64.0844f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 12:
			*uParam2 = { 959.9266f, 61.5612f, 111.553f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 13:
			*uParam2 = { 961.0929f, 62.182f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 14:
			*uParam2 = { 959.7714f, 59.0508f, 111.5529f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 15:
			*uParam2 = { 962.4349f, 63.0316f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 16:
			*uParam2 = { 959.7065f, 57.4739f, 111.5528f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 17:
			*uParam2 = { 963.9102f, 65.7979f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 18:
			*uParam2 = { 957.485f, 63.318f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 19:
			*uParam2 = { 959.2108f, 63.6873f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 20:
			*uParam2 = { 958.4797f, 61.6645f, 111.553f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 21:
			*uParam2 = { 961.2648f, 63.54f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 22:
			*uParam2 = { 958.0678f, 58.2828f, 111.5528f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 23:
			*uParam2 = { 962.3433f, 65.3979f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 24:
			*uParam2 = { 957.6443f, 59.5736f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 25:
			*uParam2 = { 956.7937f, 60.8593f, 111.5528f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 26:
			*uParam2 = { 958.7524f, 56.807f, 111.5528f };
			*uParam3 = 146.5252f;
			return 1;
			break;
		case 27:
			*uParam2 = { 958.6348f, 60.0536f, 111.553f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 28:
			*uParam2 = { 957.549f, 55.1038f, 111.5526f };
			*uParam3 = 146.3119f;
			return 1;
			break;
		case 29:
			*uParam2 = { 960.8799f, 67.3903f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 30:
			*uParam2 = { 955.5912f, 64.5573f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 31:
			*uParam2 = { 957.2928f, 65.6837f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 32:
			*uParam2 = { 956.0101f, 62.1252f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 33:
			*uParam2 = { 957.9618f, 66.9349f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 34:
			*uParam2 = { 956.1443f, 58.301f, 111.5526f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 35:
			*uParam2 = { 958.2112f, 68.6648f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 36:
			*uParam2 = { 953.5358f, 64.8645f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 37:
			*uParam2 = { 956.1406f, 69.1216f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 38:
			*uParam2 = { 955.8687f, 67.8361f, 111.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 39:
			*uParam2 = { 955.2102f, 66.5096f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 40:
			*uParam2 = { 954.9066f, 59.8987f, 111.5527f };
			*uParam3 = 147.9058f;
			return 1;
			break;
		case 41:
			*uParam2 = { 955.2508f, 70.5964f, 111.5532f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 42:
			*uParam2 = { 949.4545f, 63.4966f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 43:
			*uParam2 = { 951.0095f, 65.5424f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 44:
			*uParam2 = { 950.2859f, 61.3399f, 111.5529f };
			*uParam3 = 152.999f;
			return 1;
			break;
		case 45:
			*uParam2 = { 951.9775f, 67.1016f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 46:
			*uParam2 = { 948.4278f, 60.0821f, 111.5529f };
			*uParam3 = 155.192f;
			return 1;
			break;
		case 47:
			*uParam2 = { 952.2723f, 63.6054f, 111.5527f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 48:
			*uParam2 = { 948.7949f, 70.1563f, 112.551f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 49:
			*uParam2 = { 945.9695f, 65.8314f, 112.5512f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 50:
			*uParam2 = { 949.2806f, 68.6292f, 112.5537f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 51:
			*uParam2 = { 948.2241f, 57.6969f, 111.5527f };
			*uParam3 = 151.4906f;
			return 1;
			break;
		case 52:
			*uParam2 = { 948.2211f, 67.5482f, 112.553f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 53:
			*uParam2 = { 952.9069f, 56.6578f, 111.5524f };
			*uParam3 = 146.504f;
			return 1;
			break;
		case 54:
			*uParam2 = { 943.211f, 64.1246f, 112.5499f };
			*uParam3 = 146.0803f;
			return 1;
			break;
		case 55:
			*uParam2 = { 946.695f, 64.3657f, 112.5531f };
			*uParam3 = 56.19f;
			return 1;
			break;
		case 56:
			*uParam2 = { 950.0883f, 52.2144f, 111.5526f };
			*uParam3 = 152.2559f;
			return 1;
			break;
		case 57:
			*uParam2 = { 954.5706f, 50.9862f, 111.5525f };
			*uParam3 = 144.6391f;
			return 1;
			break;
		case 58:
			*uParam2 = { 946.467f, 56.8877f, 111.5529f };
			*uParam3 = 154.3817f;
			return 1;
			break;
		case 59:
			*uParam2 = { 947.4856f, 66.2685f, 112.553f };
			*uParam3 = 56.19f;
			return 1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_771()//Position - 0xC43AE
{
	return BitTest(Global_1946250.f_4, 30);
}

struct<4> func_772(var uParam0)//Position - 0xC43BF
{
	struct<4> Var0;
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1008981770;
	Var0.f_3 = 1073741824;
	Var0.f_0 = 0;
	Var0.f_2 = 0.4f;
	return Var0;
}

bool func_773()//Position - 0xC53D0
{
	return BitTest(Global_1946250.f_7, 25);
}

Vector3 func_774(var uParam0)//Position - 0xC53E1
{
	return 1578.0829f, 253.3995f, -57.0051f;
}

char* func_775(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xC543D
{
	if (BitTest(Global_1946250.f_506, 1))
	{
		return "CAS_CLUB_KICK" /* GXT: You have been temporarily banned from entering The Music Locker due to being thrown out. */;
	}
	if (Global_1946250.f_506 == 0)
	{
		return "";
	}
	return "";
}

Vector3 func_776(int iParam0)//Position - 0xC57B9
{
	switch (iParam0)
	{
		case 146:
			return 987.5f, 79.66f, 79.99f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_777(var uParam0, int iParam1)//Position - 0xC5865
{
	if (iParam1 == __LIB_0__.func_160())
	{
		return 0;
	}
	return 1;
}

int func_778(var uParam0, var uParam1)//Position - 0xC587B
{
	if (BitTest(Global_1946250.f_4523.f_1, 7))
	{
		return 0;
	}
	return 1;
}

int func_779(int iParam0)//Position - 0xC58D9
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 29);
	}
	return 0;
}

char* func_780(int iParam0)//Position - 0xC5CEF
{
	return "DLC_H4_Nightclub_Club_Entry_Transition_Scene";
}

void func_781(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0xC5E55
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 146:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					*uParam1 = { 988.8f, 79.6f, 81.8f };
					*uParam2 = { 24.9f, 0f, 99.3f };
					*uParam3 = 27.1f;
					*uParam4 = 0.2f;
					break;
				case 1:
					*uParam1 = { 989.5103f, 79.3254f, 81.7974f };
					*uParam2 = { 16.2301f, 13.3398f, 92.724f };
					*uParam3 = 37.0352f;
					*uParam4 = 0.2f;
					break;
				case 2:
					*uParam1 = { 988.3433f, 80.7809f, 80.4239f };
					*uParam2 = { 45.704f, 2.3763f, 145.6315f };
					*uParam3 = 41.2941f;
					*uParam4 = 0.2f;
					break;
				case 3:
					*uParam1 = { 986.3133f, 81.6441f, 80.573f };
					*uParam2 = { 31.6791f, -22.9264f, -157.0946f };
					*uParam3 = 41.2941f;
					*uParam4 = 0.2f;
					break;
				case 4:
					*uParam1 = { 989.2166f, 79.0797f, 82.087f };
					*uParam2 = { 11.7124f, 0.4637f, 78.9157f };
					*uParam3 = 26.4791f;
					*uParam4 = 0.2f;
					break;
				case 5:
					*uParam1 = { 991.3379f, 89.1965f, 80.1336f };
					*uParam2 = { 9.7423f, 0.4638f, 159.2625f };
					*uParam3 = 19.2722f;
					*uParam4 = 0.2f;
					break;
			}
			break;
	}
}

void func_782(int iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4)//Position - 0xC60C2
{
	HUD::GET_HUD_COLOUR(22, iParam1, iParam2, iParam3, iParam4);
	*iParam4 = 100;
}

void func_783(int iParam0, var uParam1, var uParam2)//Position - 0xC6157
{
	switch (iParam0)
	{
		case 146:
			*uParam1 = { 1539.804f, 237.182f, -50.1786f };
			uParam1->f_3 = { 1580.376f, 264.4942f, -43.0136f };
			break;
	}
}

char* func_784(var uParam0)//Position - 0xC6197
{
	return "MP_CASINO_NIGHTCLUB_1";
}

Vector3 func_785(int iParam0)//Position - 0xC61A3
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 9);
	MISC::SET_BIT(&(Var0[0]), 15);
	MISC::SET_BIT(&(Var0[0]), 24);
	MISC::SET_BIT(&(Var0[0]), 27);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[0]), 28);
	MISC::SET_BIT(&(Var0[0]), 29);
	MISC::SET_BIT(&(Var0[0]), 10);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[0]), 21);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[1]), 10);
	MISC::SET_BIT(&(Var0[1]), 11);
	return Var0;
}

void func_786(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xC62D4
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 2.125f;
			*uParam2 = 357.2254f;
			*uParam3 = { 27.05542f, 4.652252f, 3.06506f };
			*uParam4 = { 29.519775f, 4.662247f, 5.047455f };
			break;
		case 2:
			*uParam1 = 1.5f;
			*uParam2 = 180f;
			*uParam3 = { -3.928467f, 3.857803f, 2.803677f };
			*uParam4 = { -5.29126f, 3.857849f, 5.000687f };
			break;
	}
}

void func_787(var uParam0, var uParam1)//Position - 0xC6361
{
	uParam1->f_21 = "AM_MP_CASINO_NIGHTCLUB";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

Vector3 func_788()//Position - 0xC63B6
{
	return 1550f, 250f, -50f;
}

void func_789(var uParam0, var uParam1)//Position - 0xC6D61
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.499f);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

Vector3 func_790(int iParam0)//Position - 0xC6E8B
{
	switch (iParam0)
	{
		case 145:
			return 962.8551f, 63.9879f, 82.1782f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_791(var uParam0)//Position - 0xC6EB5
{
	return __LIB_1__.func_48(0);
}

Vector3 func_792(var uParam0)//Position - 0xC6ED3
{
	return -1012.8768f, -480.9299f, 38.7536f;
}

int func_793(var uParam0)//Position - 0xC6EEA
{
	return 790;
}

void func_794(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC703E
{
	if (*uParam2 != 9)
	{
		return;
	}
	StringCopy(sParam1, "SOL_OFF_EXT_T" /* GXT: Solomon's Office */, 64);
	*uParam3 = 1;
	(*uParam2)[0] = "SOL_OFF_E_O_0" /* GXT: Exit Solomon's Office */;
}

int func_795(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0xC70A7
{
	if (BitTest(Global_1973170.f_2, 5))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1020.85266f, -485.2944f, 36.132f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 1:
				*uParam2 = { -1021.9348f, -483.4786f, 36.10646f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 2:
				*uParam2 = { -1019.76575f, -487.26797f, 36.13196f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 3:
				*uParam2 = { -1017.25714f, -491.75278f, 36.13027f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 4:
				*uParam2 = { -1018.14764f, -490.06827f, 36.12716f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 5:
				*uParam2 = { -1016.4797f, -493.62418f, 36.12882f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 6:
				*uParam2 = { -1022.9514f, -487.45755f, 35.98511f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 7:
				*uParam2 = { -1024.2673f, -485.2275f, 35.97783f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 8:
				*uParam2 = { -1021.9015f, -489.20312f, 35.98236f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 9:
				*uParam2 = { -1019.25714f, -493.01685f, 35.99312f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 10:
				*uParam2 = { -1020.3736f, -491.25003f, 35.98717f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 11:
				*uParam2 = { -1018.03973f, -495.2139f, 36.13805f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 12:
				*uParam2 = { -1025.0885f, -488.3943f, 35.96515f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 13:
				*uParam2 = { -1026.2195f, -486.52646f, 35.96374f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 14:
				*uParam2 = { -1023.5433f, -490.519f, 35.96862f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 15:
				*uParam2 = { -1020.7815f, -494.59302f, 35.98621f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 16:
				*uParam2 = { -1022.1952f, -492.45633f, 35.97348f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 17:
				*uParam2 = { -1019.44226f, -496.98065f, 36.13781f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 18:
				*uParam2 = { -1026.0928f, -493.4885f, 35.94408f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 19:
				*uParam2 = { -1027.73f, -490.79886f, 35.95347f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 20:
				*uParam2 = { -1024.3757f, -496.2902f, 35.93388f };
				*uParam3 = 118.08f;
				return 1;
				break;
			default:
				return 0;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1011.6633f, -480.2768f, 38.9756f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 1:
				*uParam2 = { -1007.9286f, -486.8348f, 38.9746f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 2:
				*uParam2 = { -1009.256f, -485.7311f, 38.9738f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 3:
				*uParam2 = { -1012.9647f, -479.2841f, 38.9756f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 4:
				*uParam2 = { -1007.9945f, -488.0365f, 38.9743f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 5:
				*uParam2 = { -1017.0176f, -483.1423f, 36.0778f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 6:
				*uParam2 = { -1017.7471f, -481.5103f, 36.0732f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 7:
				*uParam2 = { -1016.2355f, -484.552f, 36.0748f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 8:
				*uParam2 = { -1011.6303f, -481.8437f, 38.9756f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 9:
				*uParam2 = { -1012.3557f, -491.0156f, 36.0406f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 10:
				*uParam2 = { -1013.9744f, -491.7814f, 36.0681f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 11:
				*uParam2 = { -1015.6669f, -489.3714f, 36.0925f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 12:
				*uParam2 = { -1014.1392f, -488.2277f, 36.0671f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 13:
				*uParam2 = { -1018.6514f, -482.584f, 36.0898f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 14:
				*uParam2 = { -1013.5862f, -489.8783f, 36.0595f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 15:
				*uParam2 = { -1016.1624f, -491.3677f, 36.1057f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 16:
				*uParam2 = { -1017.6911f, -489.7937f, 36.1218f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 17:
				*uParam2 = { -1015.6785f, -493.4104f, 36.1161f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 18:
				*uParam2 = { -1017.722f, -484.6487f, 36.0935f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 19:
				*uParam2 = { -1021.4108f, -483.1241f, 36.1092f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 20:
				*uParam2 = { -1016.8652f, -495.2568f, 36.1346f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 21:
				*uParam2 = { -1019.5073f, -487.1007f, 36.1263f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 22:
				*uParam2 = { -1017.8352f, -493.2981f, 36.1378f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 23:
				*uParam2 = { -1019.817f, -484.5065f, 36.1145f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 24:
				*uParam2 = { -1019.9048f, -492.2968f, 35.9888f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 25:
				*uParam2 = { -1022.1738f, -487.0536f, 35.9947f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 26:
				*uParam2 = { -1023.614f, -484.6698f, 35.968f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 27:
				*uParam2 = { -1021.9133f, -489.2026f, 35.9823f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 28:
				*uParam2 = { -1024.6744f, -486.6668f, 35.9741f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 29:
				*uParam2 = { -1020.5405f, -490.3336f, 35.9882f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 30:
				*uParam2 = { -1021.2786f, -492.9433f, 35.9792f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 31:
				*uParam2 = { -1022.5963f, -490.9483f, 35.9738f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 32:
				*uParam2 = { -1027.4838f, -487.1444f, 35.957f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 33:
				*uParam2 = { -1024.0352f, -489.0841f, 35.9712f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 34:
				*uParam2 = { -1019.4782f, -495.5743f, 35.9932f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 35:
				*uParam2 = { -1023.5174f, -493.7074f, 35.959f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 36:
				*uParam2 = { -1024.8386f, -491.2399f, 35.9611f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 37:
				*uParam2 = { -1022.2177f, -495.3266f, 35.9793f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 38:
				*uParam2 = { -1026.3606f, -489.1367f, 35.9591f };
				*uParam3 = 118.08f;
				return 1;
				break;
			case 39:
				*uParam2 = { -1026.9543f, -492.6161f, 35.9533f };
				*uParam3 = 118.08f;
				return 1;
				break;
			default:
				return 0;
			}
	}
	return 1;
}

int func_796(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xC7A89
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 3.3875f, -1.9908f, 0.004f };
			*uParam3 = 90f;
			return 1;
			break;
		case 1:
			*uParam2 = { 1.5943f, -1.6141f, 0.0031f };
			*uParam3 = 90f;
			return 1;
			break;
	}
	return 0;
}

Vector3 func_797(var uParam0)//Position - 0xC7AE9
{
	return 1550f, 250f, -60f;
}

void func_798(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC7BAF
{
	*uParam4 = 0;
}

int func_799(var uParam0, int iParam1)//Position - 0xC7BC4
{
	if (iParam1 == __LIB_0__.func_160())
	{
		return 0;
	}
	return 0;
}

bool func_800()//Position - 0xC7D6E
{
	return __LIB_0__.func_137(30251, -1);
}

void func_801(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0xC8080
{
	switch (iParam0)
	{
		case 145:
			*uParam1 = { -1064.3585f, -504.2871f, 55.8963f };
			*uParam2 = { -11.5539f, 0f, -86.9972f };
			*uParam3 = 50f;
			*uParam4 = 0.2f;
			break;
	}
}

void func_802(int iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4)//Position - 0xC8189
{
	if (Global_1973170.f_3 > Global_1973170.f_4)
	{
		HUD::GET_HUD_COLOUR(12, iParam1, iParam2, iParam3, iParam4);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, iParam1, iParam2, iParam3, iParam4);
	}
}

void func_803(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0xC81BF
{
	switch (iParam0)
	{
		case 145:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { -1011.34485f, -478.75452f, 38.66314f };
					*uParam3 = { -1010.28625f, -480.53842f, 41.22564f };
					*uParam4 = 2.25f;
					*uParam1 = { -1011.42f, -480.01f, 38.98f };
					*uParam5 = 314.3788f;
					break;
				case 1:
					*uParam2 = { -1007.447f, -485.6576f, 38.97538f };
					*uParam3 = { -1006.3978f, -487.41052f, 41.225796f };
					*uParam4 = 2.25f;
					*uParam1 = { -1007.58f, -486.9f, 38.97f };
					*uParam5 = 314.3788f;
					break;
			}
			break;
	}
}

void func_804(int iParam0, var uParam1, var uParam2)//Position - 0xC8294
{
	switch (iParam0)
	{
		case 145:
			*uParam1 = { -1012.5625f, -482.7209f, 48.8623f };
			uParam1->f_3 = { -1001.6045f, -472.3809f, 52.7248f };
			break;
	}
}

char* func_805(var uParam0)//Position - 0xC82D4
{
	return "MP_SOLOMON_OFFICE_1";
}

Vector3 func_806(int iParam0)//Position - 0xC82E0
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 10);
	return Var0;
}

void func_807(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xC839A
{
	*uParam1 = 1.375f;
	*uParam2 = 300f;
	*uParam3 = { 4.00077f, -1.3792f, 0.00453949f };
	*uParam4 = { 4.00457f, -2.6684f, 2.25445f };
}

void func_808(var uParam0, var uParam1)//Position - 0xC83D8
{
	uParam1->f_21 = "AM_MP_SOLOMON_OFFICE";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

Vector3 func_809()//Position - 0xC8431
{
	return -1006.9864f, -477.78665f, 49.02309f;
}

Vector3 func_810(var uParam0)//Position - 0xC8A2C
{
	return 2727.3303f, -370.1591f, -61.8636f;
}

char* func_811(int iParam0, int iParam1)//Position - 0xC8CF7
{
	char* sVar0;
	switch (iParam1)
	{
		case 130:
			switch (iParam0)
			{
				case 0:
					sVar0 = "anim_heist@arcade_property@mission_start@davies@exit_01@";
					break;
				case 1:
					sVar0 = "anim_heist@arcade_property@mission_start@davies@exit_02@";
					break;
				case 2:
					sVar0 = "anim_heist@arcade_property@mission_start@davies@exit_03@";
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 0:
					sVar0 = "anim_heist@arcade_property@mission_start@grapeseed@exit_01@";
					break;
				case 1:
					sVar0 = "anim_heist@arcade_property@mission_start@grapeseed@exit_02@";
					break;
				case 2:
					sVar0 = "anim_heist@arcade_property@mission_start@grapeseed@exit_03@";
					break;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 0:
					sVar0 = "anim_heist@arcade_property@mission_start@la_mesa@exit_01@";
					break;
				case 1:
					sVar0 = "anim_heist@arcade_property@mission_start@la_mesa@exit_02@";
					break;
				case 2:
					sVar0 = "anim_heist@arcade_property@mission_start@la_mesa@exit_03@";
					break;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 0:
					sVar0 = "anim_heist@arcade_property@mission_start@paleto_bay@exit_01@";
					break;
				case 1:
					sVar0 = "anim_heist@arcade_property@mission_start@paleto_bay@exit_02@";
					break;
				case 2:
					sVar0 = "anim_heist@arcade_property@mission_start@paleto_bay@exit_03@";
					break;
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 0:
					sVar0 = "anim_heist@arcade_property@mission_start@rockford_hills@exit_01@";
					break;
				case 1:
					sVar0 = "anim_heist@arcade_property@mission_start@rockford_hills@exit_02@";
					break;
				case 2:
					sVar0 = "anim_heist@arcade_property@mission_start@rockford_hills@exit_03@";
					break;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 0:
					sVar0 = "anim_heist@arcade_property@mission_start@west_vinewood@exit_01@";
					break;
				case 1:
					sVar0 = "anim_heist@arcade_property@mission_start@west_vinewood@exit_02@";
					break;
				case 2:
					sVar0 = "anim_heist@arcade_property@mission_start@west_vinewood@exit_03@";
					break;
			}
			break;
	}
	return sVar0;
}

int func_812()//Position - 0xC9378
{
	if (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) != 127 || PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) != 127)
	{
		return 1;
	}
	return 0;
}

float func_813(int iParam0, int iParam1)//Position - 0xC93A2
{
	switch (iParam0)
	{
		case 130:
			switch (iParam1)
			{
				case 0:
					return 15.12f;
				case 1:
					return 15.12f;
				case 2:
					return 15.12f;
				case 3:
					return 11.52f;
				default:
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				default:
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				default:
			}
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				default:
			}
			break;
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				default:
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return 10.8f;
				case 3:
					return 2.52f;
				default:
			}
			break;
	}
	return 0f;
}

float func_814(int iParam0, int iParam1)//Position - 0xC951A
{
	switch (iParam0)
	{
		case 130:
			switch (iParam1)
			{
				case 0:
					return 48.24f;
				case 1:
					return 53.64f;
				case 2:
					return 42.84f;
				case 3:
					return 24.12f;
				default:
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					return 40.32f;
				case 1:
					return 3.6f;
				case 2:
					return 28.08f;
				case 3:
					return 18.36f;
				default:
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					return 63f;
				case 1:
					return 20f;
				case 2:
					return 0f;
				case 3:
					return 20f;
				default:
			}
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return 70.56f;
				case 1:
					return 73.8f;
				case 2:
					return 43.56f;
				case 3:
					return 24.84f;
				default:
			}
			break;
		case 132:
			switch (iParam1)
			{
				case 0:
					return 65.16f;
				case 1:
					return 0f;
				case 2:
					return 50.76f;
				case 3:
					return 0f;
				default:
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					return 10.8f;
				case 1:
					return 22.32f;
				case 2:
					return 7.92f;
				case 3:
					return 18.72f;
				default:
			}
			break;
	}
	return 0f;
}

Vector3 func_815(int iParam0, int iParam1)//Position - 0xC96CE
{
	switch (iParam0)
	{
		case 130:
			switch (iParam1)
			{
				case 0:
					return 4.842f, 0f, 5.833f;
				case 1:
					return 4.12f, 0f, 31.7f;
				case 2:
					return 4.12f, 0f, 31.7f;
				case 3:
					return 3.8f, 0f, 46f;
				default:
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					return 2.287f, -0.148f, 106.047f;
				case 1:
					return -2.91f, 0f, 105.037f;
				case 2:
					return -2.797f, -0.001f, 119.255f;
				case 3:
					return -2.782f, 0f, 121.518f;
				default:
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0.3321f, -0.0001f, -138.3868f;
				case 1:
					return 0.3321f, -0.0001f, 163.6945f;
				case 2:
					return 0.3321f, -0.0001f, -162.2905f;
				case 3:
					return 0.3321f, -0.0001f, 163.6945f;
				default:
			}
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0.609f, 0f, 134.296f;
				case 1:
					return -0.002f, 0f, 107.499f;
				case 2:
					return -0.047f, 0f, 176.1f;
				case 3:
					return -2.993f, 0f, 155.8f;
				default:
			}
			break;
		case 132:
			switch (iParam1)
			{
				case 0:
					return -2.4327f, 0f, 11.2692f;
				case 1:
					return -2.4327f, 0f, 11.2692f;
				case 2:
					return -1.9326f, 0f, 17.9294f;
				case 3:
					return -1.689f, 0f, -19.4813f;
				default:
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					return -3.115f, 0f, 151.606f;
				case 1:
					return -3.022f, 0f, 162.3f;
				case 2:
					return -4.5f, 0f, 172.9f;
				case 3:
					return 1.153f, 0f, -161.7f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_816(int iParam0, int iParam1)//Position - 0xC9938
{
	switch (iParam0)
	{
		case 130:
			switch (iParam1)
			{
				case 0:
					return -116.144f, -1771.851f, 29.625f;
				case 1:
					return -116.1f, -1771.7f, 29.8f;
				case 2:
					return -116.1f, -1771.7f, 29.8f;
				case 3:
					return -114.7f, -1770.8f, 30.1f;
				default:
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					return 1696.319f, 4787.586f, 42.097f;
				case 1:
					return 1695.919f, 4786.139f, 42.578f;
				case 2:
					return 1696.181f, 4787.985f, 42.37f;
				case 3:
					return 1695.298f, 4786.753f, 42.816f;
				default:
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					return 717.9708f, -826.2355f, 24.7015f;
				case 1:
					return 725.0974f, -824.2504f, 25.0311f;
				case 2:
					return 720.4291f, -825.0405f, 24.7031f;
				case 3:
					return 725.0974f, -824.2504f, 25.0311f;
				default:
			}
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return -250.294f, 6212.955f, 31.916f;
				case 1:
					return -246.63f, 6208.913f, 32.176f;
				case 2:
					return -252.291f, 6213.661f, 32.1f;
				case 3:
					return -251.08f, 6213.5f, 31.9f;
				default:
			}
			break;
		case 132:
			switch (iParam1)
			{
				case 0:
					return -1288.0018f, -277.5216f, 39.743f;
				case 1:
					return -1288.0018f, -277.5216f, 39.743f;
				case 2:
					return -1287.8239f, -276.5296f, 39.1537f;
				case 3:
					return -1292.16f, -279.1505f, 39.1551f;
				default:
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					return -600f, 279.5f, 82.7f;
				case 1:
					return -598.5f, 279.4f, 82.9f;
				case 2:
					return -599.8f, 279.7f, 82.7f;
				case 3:
					return -601.3f, 279.2f, 82.4f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_817()//Position - 0xC9EA3
{
	Global_2825122.f_3.f_170[0] = 0;
}

int func_818(var uParam0, bool bParam1)//Position - 0xC9FE0
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, bParam1, false);
		ENTITY::SET_ENTITY_COLLISION(*uParam0, bParam1, false);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, !bParam1);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, bParam1, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_12, bParam1, false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, !bParam1);
		}
		iVar0 = 0;
		while (iVar0 < uParam0->f_1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iVar0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1[iVar0], bParam1, false);
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

char* func_819(int iParam0, int iParam1)//Position - 0xCA074
{
	switch (iParam0)
	{
		case 130:
			switch (iParam1)
			{
				case 0:
					return "exit_01_davies_cam";
				case 1:
					return "exit_02_davies_cam";
				case 2:
					return "exit_03_davies_cam";
				default:
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					return "exit_01_grapeseed_cam";
				case 1:
					return "exit_02_grapeseed_cam";
				case 2:
					return "exit_03_grapeseed_cam";
				default:
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					return "exit_01_la_mesa_cam";
				case 1:
					return "exit_02_la_mesa_cam";
				case 2:
					return "exit_03_la_mesa_cam";
				default:
			}
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return "exit_01_paleto_bay_cam";
				case 1:
					return "exit_02_paleto_bay_cam";
				case 2:
					return "exit_03_paleto_bay_cam";
				default:
			}
			break;
		case 132:
			switch (iParam1)
			{
				case 0:
					return "exit_01_rockford_hills_cam";
				case 1:
					return "exit_02_rockford_hills_cam";
				case 2:
					return "exit_03_rockford_hills_cam";
				default:
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					return "exit_01_west_vinewood_cam";
				case 1:
					return "exit_02_west_vinewood_cam";
				case 2:
					return "exit_03_west_vinewood_cam";
				default:
			}
			break;
	}
	return "";
}

char* func_820(int iParam0, int iParam1)//Position - 0xCA1D1
{
	switch (iParam0)
	{
		case 130:
			switch (iParam1)
			{
				case 0:
					return "exit_01_davies_door";
				case 1:
					return "exit_02_davies_door";
				case 2:
					return "exit_03_davies_door";
				default:
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					return "exit_01_grapeseed_door";
				case 1:
					return "exit_02_grapeseed_door";
				case 2:
					return "exit_03_grapeseed_door";
				default:
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					return "exit_01_la_mesa_door";
				case 1:
					return "exit_02_la_mesa_door";
				case 2:
					return "exit_03_la_mesa_door";
				default:
			}
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return "exit_01_paleto_bay_door";
				case 1:
					return "exit_02_paleto_bay_door";
				case 2:
					return "exit_03_paleto_bay_door";
				default:
			}
			break;
		case 132:
			switch (iParam1)
			{
				case 0:
					return "exit_01_rockford_hills_door";
				case 1:
					return "exit_02_rockford_hills_door";
				case 2:
					return "exit_03_rockford_hills_door";
				default:
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					return "exit_01_west_vinewood_door";
				case 1:
					return "exit_02_west_vinewood_door";
				case 2:
					return "exit_03_west_vinewood_door";
				default:
			}
			break;
	}
	return "";
}

Vector3 func_821(int iParam0)//Position - 0xCAED6
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 130:
			Var0 = { -115.9818f, -1772.6947f, 28.8264f };
			break;
		case 129:
			Var0 = { 1696.2306f, 4785.183f, 41.0263f };
			break;
		case 133:
			Var0 = { 758.3558f, -815.9442f, 25.2905f };
			break;
		case 128:
			Var0 = { -247.3299f, 6213.446f, 30.944f };
			break;
		case 132:
			Var0 = { -1270.5914f, -305.0002f, 36.0744f };
			break;
		case 131:
			Var0 = { -599.4943f, 280.4063f, 81.074f };
			break;
	}
	return Var0;
}

bool func_822()//Position - 0xCB838
{
	return Global_1888107;
}

bool func_823(int iParam0)//Position - 0xCB955
{
	return iParam0 == 64;
}

bool func_824(int iParam0)//Position - 0xCB96F
{
	return iParam0 == 69;
}

bool func_825(int iParam0)//Position - 0xCB97C
{
	return iParam0 == 67;
}

bool func_826(int iParam0)//Position - 0xCB989
{
	return iParam0 == 68;
}

int func_827()//Position - 0xCBA5A
{
	if (Global_2725430 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_828()//Position - 0xCBA6F
{
	return Global_2787909;
}

struct<8> func_829(var uParam0, int iParam1)//Position - 0xCBBA4
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = { 175.0434f, -998.7965f, -100.225586f };
			uParam0->f_3 = { 175.08784f, -1009.0036f, -95.99992f };
			uParam0->f_6 = 14f;
			break;
		case 6:
			*uParam0 = { 212.9084f, -999.67755f, -99.99996f };
			uParam0->f_3 = { 189.68436f, -1000.068f, -95.2507f };
			uParam0->f_6 = 16.75f;
			break;
		case 10:
			*uParam0 = { 230.00945f, -1009.12354f, -100.65389f };
			uParam0->f_3 = { 230.59389f, -964.022f, -94.53618f };
			uParam0->f_6 = 23.5f;
			break;
	}
	return *uParam0;
}

int func_830(struct<3> Param0)//Position - 0xCBC66
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_2726703))
	{
		STREAMING::REQUEST_MODEL(joaat("U_M_M_FilmDirector"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_FilmDirector")))
		{
			Global_2726703 = PED::CREATE_PED(25, joaat("U_M_M_FilmDirector"), Param0, 0f, false, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2726703, false, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_2726703);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_DESIRED_HEADING(Global_2726703, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			}
			ENTITY::SET_ENTITY_COLLISION(Global_2726703, false, false);
			ENTITY::SET_ENTITY_VISIBLE(Global_2726703, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_2726703, true);
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				STREAMING::SET_FOCUS_ENTITY(Global_2726703);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_FilmDirector"));
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Global_2726703))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Global_2726703, true);
			TASK::CLEAR_PED_TASKS(Global_2726703);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_2726703, true);
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				STREAMING::SET_FOCUS_ENTITY(Global_2726703);
			}
		}
		return 1;
	}
	return 0;
}

int func_831()//Position - 0xCBD4D
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1577840))
	{
		STREAMING::REQUEST_MODEL(joaat("U_M_M_FilmDirector"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_FilmDirector")))
		{
			Global_1577840 = PED::CREATE_PED(25, joaat("U_M_M_FilmDirector"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 0f, false, false);
			ENTITY::SET_ENTITY_VISIBLE(Global_1577840, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1577840, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577840, false, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1577840);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_DESIRED_HEADING(Global_1577840, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			}
			ENTITY::SET_ENTITY_COLLISION(Global_1577840, false, false);
			ENTITY::SET_ENTITY_VISIBLE(Global_1577840, false, false);
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				STREAMING::SET_FOCUS_ENTITY(Global_1577840);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_FilmDirector"));
			MISC::SET_BIT(&(Global_1940663[1]), 6);
		}
		else
		{
			MISC::SET_BIT(&(Global_1940663[1]), 7);
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Global_1577840))
		{
			ENTITY::SET_ENTITY_VISIBLE(Global_1577840, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(Global_1577840, true);
			TASK::CLEAR_PED_TASKS(Global_1577840);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1577840, true);
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				STREAMING::SET_FOCUS_ENTITY(Global_1577840);
			}
		}
		return 1;
	}
	return 0;
}

void func_832(int iParam0)//Position - 0xCC3AA
{
	Global_2703732 = iParam0;
}

bool func_833()//Position - 0xCC3B8
{
	return Global_2703732;
}

void func_834()//Position - 0xCC4CE
{
	Global_1931975.f_1767 = 0;
}

int func_835()//Position - 0xCC4ED
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_836(int iParam0)//Position - 0xCC512
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 130:
			iVar0 = joaat("ch_prop_davies_door_01a");
			break;
		case 129:
			iVar0 = joaat("ch_prop_grapessed_door_l_01a");
			break;
		case 133:
			iVar0 = joaat("ch_prop_mesa_door_01a");
			break;
		case 128:
			iVar0 = joaat("ch_prop_paleto_bay_door_01a");
			break;
		case 132:
			iVar0 = joaat("ch_prop_rockford_door_l_01a");
			break;
		case 131:
			iVar0 = joaat("ch_prop_west_door_l_01a");
			break;
	}
	return iVar0;
}

void func_837(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xCC9A8
{
	switch (iParam0)
	{
		case 128:
			*uParam1 = { -235.26677f, 6229.922f, 30.538643f };
			*uParam2 = { -238.63527f, 6226.7197f, 33.163376f };
			*uParam3 = 1.1875f;
			break;
		case 129:
			*uParam1 = { 1708.7355f, 4760.5396f, 41.115116f };
			*uParam2 = { 1712.7014f, 4760.571f, 43.54729f };
			*uParam3 = 1.1875f;
			break;
		case 130:
			*uParam1 = { -103.76051f, -1780.2114f, 28.464218f };
			*uParam2 = { -107.20426f, -1777.3217f, 30.66756f };
			*uParam3 = 0.875f;
			break;
		case 131:
			*uParam1 = { -621.24695f, 286.46252f, 80.73659f };
			*uParam2 = { -614.4493f, 286.06735f, 83.28288f };
			*uParam3 = 1.1875f;
			break;
		case 132:
			*uParam1 = { -1285.2744f, -277.54468f, 37.530235f };
			*uParam2 = { -1288.5453f, -279.22604f, 40.265617f };
			*uParam3 = 1.1875f;
			break;
		case 133:
			*uParam1 = { 727.3716f, -818.6205f, 23.966417f };
			*uParam2 = { 727.2856f, -826.729f, 26.347073f };
			*uParam3 = 1.1875f;
			break;
	}
}

Vector3 func_838(int iParam0)//Position - 0xCCB01
{
	switch (iParam0)
	{
		case 128:
			return -232.4173f, 6223.398f, 30.5007f;
			break;
		case 129:
			return 1710.8247f, 4768.6216f, 40.9536f;
			break;
		case 130:
			return -114.4315f, -1788.0199f, 28.8434f;
			break;
		case 131:
			return -617.1379f, 294.3576f, 80.8443f;
			break;
		case 132:
			return -1284.0056f, -285.7313f, 37.8272f;
			break;
		case 133:
			return 732.7964f, -822.5511f, 23.77f;
			break;
	}
	return 932.9553f, -4.2065f, 77.7649f;
}

float func_839(int iParam0)//Position - 0xCCBC1
{
	switch (iParam0)
	{
		case 128:
			return 225.5915f;
			break;
		case 129:
			return 0f;
			break;
		case 130:
			return 140f;
			break;
		case 131:
			return 356.9625f;
			break;
		case 132:
			return 209.0581f;
			break;
		case 133:
			return 270.1881f;
			break;
	}
	return 328.1944f;
}

Vector3 func_840(int iParam0)//Position - 0xCCC37
{
	switch (iParam0)
	{
		case 128:
			return -240.5463f, 6231.8438f, 30.5007f;
			break;
		case 129:
			return 1710.8445f, 4756.1006f, 40.9536f;
			break;
		case 130:
			return -102.16f, -1774.8447f, 28.5096f;
			break;
		case 131:
			return -618.1414f, 281.1915f, 80.6491f;
			break;
		case 132:
			return -1289.0105f, -274.4506f, 37.8272f;
			break;
		case 133:
			return 722.2872f, -822.524f, 23.7002f;
			break;
	}
	return 932.9553f, -4.2065f, 77.7649f;
}

void func_841(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xCCEAE
{
	switch (iParam0)
	{
		case 128:
			if (bParam4)
			{
				*uParam1 = { -237.2117f, 6228.624f, 35.6918f };
				*uParam2 = { -66.513f, 0f, 45.1252f };
				*uParam3 = 49.1648f;
			}
			else
			{
				*uParam1 = { -237.2117f, 6228.624f, 35.6918f };
				*uParam2 = { -74.4648f, 0f, 45.1252f };
				*uParam3 = 47.3068f;
			}
			break;
		case 129:
			if (bParam4)
			{
				*uParam1 = { 1710.2523f, 4760.227f, 51.6616f };
				*uParam2 = { -68.9907f, 0f, -179.5606f };
				*uParam3 = 39.0799f;
			}
			else
			{
				*uParam1 = { 1710.2523f, 4760.227f, 51.6616f };
				*uParam2 = { -74.5165f, 0f, -179.5606f };
				*uParam3 = 35.7653f;
			}
			break;
		case 130:
			if (bParam4)
			{
				*uParam1 = { -105.0969f, -1778.5424f, 35.8331f };
				*uParam2 = { -67.0651f, 0f, -39.5561f };
				*uParam3 = 48.1341f;
			}
			else
			{
				*uParam1 = { -105.0969f, -1778.5424f, 35.8331f };
				*uParam2 = { -72.2993f, 0f, -39.5561f };
				*uParam3 = 43.2427f;
			}
			break;
		case 131:
			if (bParam4)
			{
				*uParam1 = { -617.9399f, 285.6634f, 90.0322f };
				*uParam2 = { -73.1215f, 0f, 175.2004f };
				*uParam3 = 42.9193f;
			}
			else
			{
				*uParam1 = { -617.9399f, 285.6634f, 90.0322f };
				*uParam2 = { -76.3587f, 0f, 175.2004f };
				*uParam3 = 40.2511f;
			}
			break;
		case 132:
			if (bParam4)
			{
				*uParam1 = { -1287.2186f, -278.602f, 42.3763f };
				*uParam2 = { -52.1909f, 0f, 28.1493f };
				*uParam3 = 47.3291f;
			}
			else
			{
				*uParam1 = { -1287.2186f, -278.602f, 42.3763f };
				*uParam2 = { -58.1325f, 0f, 28.1493f };
				*uParam3 = 46.3116f;
			}
			break;
		case 133:
			if (bParam4)
			{
				*uParam1 = { 726.3692f, -822.6578f, 32.3964f };
				*uParam2 = { -73.7051f, 0f, 90.6333f };
				*uParam3 = 43.3019f;
			}
			else
			{
				*uParam1 = { 726.3692f, -822.6578f, 32.3964f };
				*uParam2 = { -78.1773f, 0f, 89.9843f };
				*uParam3 = 40.5193f;
			}
			break;
	}
}

void func_842(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xCD11B
{
	switch (iParam0)
	{
		case 128:
			if (bParam4)
			{
				*uParam1 = { -220.014f, 6247.5166f, 33.8697f };
				*uParam2 = { 0.0311f, 0f, 124.6053f };
				*uParam3 = 30.2298f;
			}
			else
			{
				*uParam1 = { -220.014f, 6247.5166f, 33.8697f };
				*uParam2 = { 0.0311f, 0f, 127.5214f };
				*uParam3 = 23.743f;
			}
			break;
		case 129:
			if (bParam4)
			{
				*uParam1 = { 1718.5936f, 4760.5703f, 42.4261f };
				*uParam2 = { 1.5524f, 0.0022f, 115.6666f };
				*uParam3 = 31.4556f;
			}
			else
			{
				*uParam1 = { 1718.5936f, 4760.5703f, 42.4261f };
				*uParam2 = { 1.5524f, 0.0022f, 114.1547f };
				*uParam3 = 30.1227f;
			}
			break;
		case 130:
			if (bParam4)
			{
				*uParam1 = { -116.4524f, -1769.1952f, 31.3916f };
				*uParam2 = { -4.0945f, 0f, -117.4567f };
				*uParam3 = 22.4654f;
			}
			else
			{
				*uParam1 = { -116.4779f, -1769.182f, 30.9893f };
				*uParam2 = { -4.0945f, 0f, -117.4567f };
				*uParam3 = 20.7577f;
			}
			break;
		case 131:
			if (bParam4)
			{
				*uParam1 = { -625.7614f, 286.7776f, 81.9695f };
				*uParam2 = { 0.0916f, 0f, -121.0861f };
				*uParam3 = 39.0858f;
			}
			else
			{
				*uParam1 = { -625.7614f, 286.7776f, 81.9695f };
				*uParam2 = { 0.0916f, 0f, -110.8978f };
				*uParam3 = 39.0858f;
			}
			break;
		case 132:
			if (bParam4)
			{
				*uParam1 = { -1296.5879f, -282.8706f, 39.7636f };
				*uParam2 = { 6.405f, 0f, -40.6575f };
				*uParam3 = 46.2505f;
			}
			else
			{
				*uParam1 = { -1296.5463f, -282.8279f, 39.2322f };
				*uParam2 = { 6.405f, 0f, -47.5068f };
				*uParam3 = 41.6065f;
			}
			break;
		case 133:
			if (bParam4)
			{
				*uParam1 = { 726.3473f, -835.1234f, 26.9047f };
				*uParam2 = { -0.3097f, 0f, 15.5395f };
				*uParam3 = 39.2696f;
			}
			else
			{
				*uParam1 = { 726.3483f, -835.1268f, 26.2383f };
				*uParam2 = { -0.3097f, 0f, 15.5395f };
				*uParam3 = 37.3025f;
			}
			break;
	}
}

int func_843(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xCD461
{
	switch (iParam0)
	{
		case 129:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1693.014f, 4755.538f, 40.9142f };
					*uParam5 = joaat("prop_gas_tank_01a");
					*uParam3 = 0.1f;
					*uParam4 = 600f;
					*uParam6 = 1;
					return 1;
					break;
				case 1:
					*uParam2 = { 1690.6273f, 4756.2188f, 40.8907f };
					*uParam5 = joaat("prop_fnccorgm_02pole");
					*uParam3 = 0.1f;
					*uParam4 = 300f;
					*uParam6 = 1;
					return 1;
					break;
				case 2:
					*uParam2 = { 1690.629f, 4756.214f, 40.9397f };
					*uParam5 = joaat("prop_fnclink_02c");
					*uParam3 = 0.1f;
					*uParam4 = 300f;
					*uParam6 = 1;
					return 1;
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 718.5597f, -822.5104f, 23.4737f };
					*uParam5 = joaat("prop_barier_conc_02a");
					*uParam3 = 0.1f;
					*uParam4 = 300f;
					*uParam6 = 1;
					return 1;
					break;
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -594.001f, 298.5285f, 87.6521f };
					*uParam5 = joaat("ss1_11_clth_ss1_11_04");
					*uParam3 = 0.1f;
					*uParam4 = 300f;
					*uParam6 = 1;
					return 1;
					break;
				case 1:
					*uParam2 = { -594.001f, 298.5285f, 87.6521f };
					*uParam5 = joaat("ss1_11_clth_ss1_11_");
					*uParam3 = 0.1f;
					*uParam4 = 300f;
					*uParam6 = 1;
					return 1;
					break;
				case 2:
					*uParam2 = { -594.001f, 298.5285f, 87.6521f };
					*uParam5 = joaat("ss1_11_clth_ss1_11_02");
					*uParam3 = 0.1f;
					*uParam4 = 300f;
					*uParam6 = 1;
					return 1;
					break;
				case 3:
					*uParam2 = { -594.001f, 298.5285f, 87.6521f };
					*uParam5 = joaat("ss1_11_clth_ss1_11_03");
					*uParam3 = 0.1f;
					*uParam4 = 300f;
					*uParam6 = 1;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_844(int iParam0)//Position - 0xCDA1C
{
	return Global_100493.f_374 == iParam0;
}

void func_845(var uParam0, var uParam1)//Position - 0xCDA2E
{
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 23))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 23);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, false);
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(false);
		}
	}
}

void func_846()//Position - 0xCE001
{
	if (Global_1946250.f_4807 > 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_wpngun_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_gun_bird_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_race_bike_02a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_race_car_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_race_car_01b"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_race_truck_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_race_truck_01b"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_ch_usb_drive01x"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_fingerprint_scanner_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_street_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_street_01b"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_street_01c"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_street_01d"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_invade_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_penetrator_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_monkey_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_degenatron_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_wizard_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_race_01b"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_race_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_race_02a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_gun_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_space_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_love_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_fortune_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_plush_04a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_master_09a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_shiny_wasabi_plush_08a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_princess_robo_plush_07a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_plush_06a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_plush_05a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_plush_03a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_plush_02a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_plush_01a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_01a_c"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_01a_c_d"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_01a_r1"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_arcade_claw_01a_r2"));
		Global_1946250.f_4807 = 0;
	}
}

int func_847(int iParam0)//Position - 0xCE230
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("ch_prop_arcade_wpngun_01a");
			break;
		case 1:
			iVar0 = joaat("ch_prop_arcade_gun_bird_01a");
			break;
		case 2:
			iVar0 = joaat("ch_prop_arcade_race_bike_02a");
			break;
		case 3:
			iVar0 = joaat("ch_prop_arcade_race_car_01a");
			break;
		case 4:
			iVar0 = joaat("ch_prop_arcade_race_car_01b");
			break;
		case 5:
			iVar0 = joaat("ch_prop_arcade_race_truck_01a");
			break;
		case 6:
			iVar0 = joaat("ch_prop_arcade_race_truck_01b");
			break;
		case 7:
			iVar0 = joaat("ch_prop_ch_usb_drive01x");
			break;
		case 8:
			iVar0 = joaat("ch_prop_fingerprint_scanner_01a");
			break;
		case 9:
			iVar0 = joaat("ch_prop_arcade_street_01a");
			break;
		case 10:
			iVar0 = joaat("ch_prop_arcade_street_01b");
			break;
		case 11:
			iVar0 = joaat("ch_prop_arcade_street_01c");
			break;
		case 12:
			iVar0 = joaat("ch_prop_arcade_street_01d");
			break;
		case 13:
			iVar0 = joaat("ch_prop_arcade_invade_01a");
			break;
		case 14:
			iVar0 = joaat("ch_prop_arcade_penetrator_01a");
			break;
		case 15:
			iVar0 = joaat("ch_prop_arcade_monkey_01a");
			break;
		case 16:
			iVar0 = joaat("ch_prop_arcade_degenatron_01a");
			break;
		case 17:
			iVar0 = joaat("ch_prop_arcade_wizard_01a");
			break;
		case 18:
			iVar0 = joaat("ch_prop_arcade_race_01b");
			break;
		case 19:
			iVar0 = joaat("ch_prop_arcade_race_01a");
			break;
		case 20:
			iVar0 = joaat("ch_prop_arcade_race_02a");
			break;
		case 21:
			iVar0 = joaat("ch_prop_arcade_gun_01a");
			break;
		case 22:
			iVar0 = joaat("ch_prop_arcade_space_01a");
			break;
		case 23:
			iVar0 = joaat("ch_prop_arcade_love_01a");
			break;
		case 24:
			iVar0 = joaat("ch_prop_arcade_fortune_01a");
			break;
		case 25:
			iVar0 = joaat("ch_prop_master_09a");
			break;
		case 26:
			iVar0 = joaat("ch_prop_shiny_wasabi_plush_08a");
			break;
		case 27:
			iVar0 = joaat("ch_prop_princess_robo_plush_07a");
			break;
		case 28:
			iVar0 = joaat("ch_prop_arcade_claw_plush_06a");
			break;
		case 29:
			iVar0 = joaat("ch_prop_arcade_claw_plush_05a");
			break;
		case 30:
			iVar0 = joaat("ch_prop_arcade_claw_plush_04a");
			break;
		case 31:
			iVar0 = joaat("ch_prop_arcade_claw_plush_03a");
			break;
		case 32:
			iVar0 = joaat("ch_prop_arcade_claw_plush_02a");
			break;
		case 33:
			iVar0 = joaat("ch_prop_arcade_claw_plush_01a");
			break;
		case 34:
			iVar0 = joaat("ch_prop_arcade_claw_01a_c");
			break;
		case 35:
			iVar0 = joaat("ch_prop_arcade_claw_01a_c_d");
			break;
		case 36:
			iVar0 = joaat("ch_prop_arcade_claw_01a_r1");
			break;
		case 37:
			iVar0 = joaat("ch_prop_arcade_claw_01a_r2");
			break;
	}
	return iVar0;
}

Vector3 func_848(int iParam0, int iParam1)//Position - 0xCE505
{
	if (iParam1 == 3 || iParam1 == 0)
	{
		switch (iParam0)
		{
			case 128:
				return -245.64f, 6210.96f, 30.94f;
				break;
			case 129:
				return 1695.85f, 4783.85f, 41.02f;
				break;
			case 130:
				return -115.17f, -1771.64f, 28.86f;
				break;
			case 131:
				return -601.11f, 280.47f, 81.04f;
				break;
			case 132:
				return -1269.72f, -304.09f, 36f;
				break;
			case 133:
				return 758.46f, -814.57f, 25.3f;
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 128:
				return -237.12f, 6228.7554f, 30.5005f;
				break;
			case 129:
				return 1710.83f, 4760.13f, 41.0504f;
				break;
			case 130:
				return -105.19f, -1778.3f, 28.51f;
				break;
			case 131:
				return -617.7421f, 285.8363f, 80.6871f;
				break;
			case 132:
				return -1287.1135f, -278.0045f, 37.5935f;
				break;
			case 133:
				return 726.7626f, -822.4685f, 23.8603f;
				break;
			}
	}
	return 1f, 1f, 1f;
}

bool func_849(int iParam0)//Position - 0xCE67C
{
	return Global_1946250.f_4519 == iParam0;
}

Vector3 func_850(int iParam0)//Position - 0xCE7D9
{
	switch (iParam0)
	{
		case 128:
			return -236.1645f, 6227.5366f, 35.634f;
		case 129:
			return 1710.9613f, 4761.0938f, 41.9967f;
		case 130:
			return -106.2879f, -1779.3842f, 29.0749f;
		case 131:
			return -617.5596f, 286.6166f, 85.5191f;
		case 132:
			return -1286.964f, -279.0526f, 39.0088f;
		case 133:
			return 729.1619f, -822.7321f, 28.5876f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_851(int iParam0, int iParam1)//Position - 0xCE95C
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_408 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_852(int iParam0)//Position - 0xCE986
{
	switch (iParam0)
	{
		case 128:
			return 1;
		case 129:
			return 2;
		case 130:
			return 3;
		case 131:
			return 4;
		case 132:
			return 5;
		case 133:
			return 6;
		default:
	}
	return 0;
}

int func_853(int iParam0)//Position - 0xCE9D2
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_408.f_1, 0);
	}
	return 0;
}

Vector3 func_854(int iParam0)//Position - 0xCEA37
{
	switch (iParam0)
	{
		case 128:
			return -235.9612f, 6213.8784f, 32.9591f;
		case 129:
			return 1706.8604f, 4774.6777f, 43.0686f;
		case 130:
			return -116.3134f, -1789.5789f, 32.9948f;
		case 131:
			return -598.6816f, 290.3971f, 85.0203f;
		case 132:
			return -1280.9379f, -297.6806f, 39.6303f;
		case 133:
			return 745.9311f, -816.1904f, 25.6833f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_855(int iParam0)//Position - 0xCEDC9
{
	return 591;
}

Vector3 func_856(int iParam0)//Position - 0xCEDF3
{
	switch (iParam0)
	{
		case 128:
			return -247.6898f, 6212.915f, 30.944f;
		case 129:
			return 1695.1714f, 4785.1177f, 40.9847f;
		case 130:
			return -116.3816f, -1772.1368f, 28.8592f;
		case 131:
			return -599.5152f, 279.6308f, 81.074f;
		case 132:
			return -1273.2231f, -304.1054f, 37.2289f;
		case 133:
			return 758.3455f, -815.9312f, 25.2905f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_857(var uParam0)//Position - 0xCEE95
{
	return 740;
}

bool func_858(int iParam0)//Position - 0xCEF42
{
	return __LIB_1__.func_424(iParam0, 20);
}

int func_859(int iParam0)//Position - 0xCEF52
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		default:
	}
	return 0;
}

bool func_860(int iParam0)//Position - 0xCF244
{
	return Global_1853348[iParam0 /*834*/].f_267.f_408 != 0;
}

int func_861(var uParam0, var uParam1)//Position - 0xCF25D
{
	if (BitTest(Global_1946250.f_506, 30))
	{
		return 1;
	}
	return 0;
}

void func_862(char* sParam0, var uParam1, var uParam2, var uParam3)//Position - 0xCF316
{
	StringCopy(sParam0, "ARC_PROP_ET" /* GXT: ARCADE */, 64);
	(*uParam1)[0] = "ARC_PROP_EX_A" /* GXT: Exit Arcade */;
	(*uParam1)[1] = "ARC_PROP_EX_B" /* GXT: All Exit Arcade */;
	*uParam2 = 2;
}

Vector3 func_863(var uParam0)//Position - 0xCF33F
{
	return 2680.9685f, -361.9938f, -55.1867f;
}

int func_864(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xCF3A7
{
	switch (iParam0)
	{
		case 128:
			if (Global_1946250.f_3377 == 1 || (Global_1946250.f_3377 == 0 && (Global_1946250.f_3378 == joaat("Mainw_RM") || Global_1946250.f_3378 == joaat("Bathroom"))))
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -248.1222f, 6212.625f, 30.944f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 1:
						*uParam2 = { -249.6992f, 6212.1763f, 30.9884f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 2:
						*uParam2 = { -248.2611f, 6210.6797f, 30.9884f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 3:
						*uParam2 = { -251.3997f, 6211.8384f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 4:
						*uParam2 = { -248.9989f, 6209.1567f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 5:
						*uParam2 = { -250.3239f, 6207.4224f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 6:
						*uParam2 = { -251.5719f, 6209.9653f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 7:
						*uParam2 = { -248.6514f, 6207.261f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 8:
						*uParam2 = { -253.0078f, 6211.7397f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 9:
						*uParam2 = { -247.4091f, 6206.7534f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 10:
						*uParam2 = { -251.5396f, 6206.9116f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 11:
						*uParam2 = { -253.247f, 6209.859f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 12:
						*uParam2 = { -247.3753f, 6205.321f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 13:
						*uParam2 = { -254.5969f, 6211.211f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 14:
						*uParam2 = { -250.3387f, 6206.0933f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 15:
						*uParam2 = { -249.5904f, 6205.1226f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 16:
						*uParam2 = { -251.1836f, 6208.5537f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 17:
						*uParam2 = { -251.6312f, 6205.6035f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 18:
						*uParam2 = { -255.267f, 6212.613f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 19:
						*uParam2 = { -249.1066f, 6203.8105f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 20:
						*uParam2 = { -253.0797f, 6208.3447f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 21:
						*uParam2 = { -254.6879f, 6209.651f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 22:
						*uParam2 = { -252.7942f, 6206.5f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 23:
						*uParam2 = { -256.1451f, 6209.103f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 24:
						*uParam2 = { -252.0445f, 6204.161f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 25:
						*uParam2 = { -254.2214f, 6206.455f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 26:
						*uParam2 = { -254.8112f, 6208.065f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 27:
						*uParam2 = { -253.6325f, 6203.9673f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 28:
						*uParam2 = { -257.7664f, 6209.0605f, 30.4932f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 29:
						*uParam2 = { -252.6843f, 6202.331f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 30:
						*uParam2 = { -255.5072f, 6204.3516f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					case 31:
						*uParam2 = { -256.5598f, 6207.2344f, 30.4892f };
						*uParam3 = 136.405f;
						return 1;
						break;
					default:
						return 0;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -237.3731f, 6229.0815f, 30.5009f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 1:
						*uParam2 = { -236.8922f, 6230.5283f, 30.4999f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 2:
						*uParam2 = { -239.0041f, 6229.0483f, 30.5037f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 3:
						*uParam2 = { -235.3235f, 6231.3f, 30.4971f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 4:
						*uParam2 = { -239.3641f, 6227.692f, 30.5044f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 5:
						*uParam2 = { -236.0484f, 6233.0664f, 30.4981f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 6:
						*uParam2 = { -240.4026f, 6230.9863f, 30.5021f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 7:
						*uParam2 = { -239.9078f, 6232.3184f, 30.4989f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 8:
						*uParam2 = { -241.1307f, 6227.568f, 30.5064f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 9:
						*uParam2 = { -238.1056f, 6233.1904f, 30.4949f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 10:
						*uParam2 = { -241.4227f, 6229.431f, 30.5063f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 11:
						*uParam2 = { -236.7221f, 6234.552f, 30.4909f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 12:
						*uParam2 = { -241.8892f, 6230.987f, 30.5041f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 13:
						*uParam2 = { -241.9555f, 6232.81f, 30.492f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 14:
						*uParam2 = { -234.4535f, 6232.7207f, 30.4967f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 15:
						*uParam2 = { -239.6665f, 6234.0264f, 30.4975f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 16:
						*uParam2 = { -243.9234f, 6232.16f, 30.4421f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 17:
						*uParam2 = { -237.7995f, 6236.329f, 30.4921f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 18:
						*uParam2 = { -241.7916f, 6234.1836f, 30.4372f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 19:
						*uParam2 = { -241.9397f, 6235.7383f, 30.4904f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 20:
						*uParam2 = { -243.8097f, 6233.5596f, 30.4901f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 21:
						*uParam2 = { -239.9622f, 6235.9f, 30.4331f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 22:
						*uParam2 = { -243.4643f, 6230.576f, 30.4943f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 23:
						*uParam2 = { -239.6083f, 6237.585f, 30.4922f };
						*uParam3 = 44.445f;
						return 1;
						break;
					case 24:
						*uParam2 = { -243.1767f, 6229.2266f, 30.506f };
						*uParam3 = 147.3634f;
						return 1;
						break;
					case 25:
						*uParam2 = { -246.074f, 6231.274f, 30.4892f };
						*uParam3 = 142.8987f;
						return 1;
						break;
					case 26:
						*uParam2 = { -248.5486f, 6231.8975f, 30.4901f };
						*uParam3 = 140.5989f;
						return 1;
						break;
					case 27:
						*uParam2 = { -242.9735f, 6228.015f, 30.5061f };
						*uParam3 = 138.3502f;
						return 1;
						break;
					case 28:
						*uParam2 = { -244.8226f, 6229.296f, 30.4906f };
						*uParam3 = 149.2934f;
						return 1;
						break;
					case 29:
						*uParam2 = { -247.1982f, 6232.9653f, 30.4904f };
						*uParam3 = 137.5006f;
						return 1;
						break;
					case 30:
						*uParam2 = { -246.1442f, 6227.079f, 30.4964f };
						*uParam3 = 132.8095f;
						return 1;
						break;
					case 31:
						*uParam2 = { -247.4527f, 6228.7695f, 30.4712f };
						*uParam3 = 135.8213f;
						return 1;
						break;
					case 32:
						*uParam2 = { -250.0141f, 6227.5283f, 30.4892f };
						*uParam3 = 143.925f;
						return 1;
						break;
					case 33:
						*uParam2 = { -248.5747f, 6230.3774f, 30.4892f };
						*uParam3 = 137.0155f;
						return 1;
						break;
					case 34:
						*uParam2 = { -248.9461f, 6226.105f, 30.4914f };
						*uParam3 = 145.621f;
						return 1;
						break;
					case 35:
						*uParam2 = { -244.1111f, 6227.0747f, 30.5054f };
						*uParam3 = 141.4393f;
						return 1;
						break;
					case 36:
						*uParam2 = { -251.5869f, 6224.4253f, 30.4601f };
						*uParam3 = 139.2103f;
						return 1;
						break;
					case 37:
						*uParam2 = { -252.197f, 6226.2983f, 30.4892f };
						*uParam3 = 133.4893f;
						return 1;
						break;
					case 38:
						*uParam2 = { -249.729f, 6221.7954f, 30.4933f };
						*uParam3 = 138.528f;
						return 1;
						break;
					case 39:
						*uParam2 = { -251.9458f, 6228.426f, 30.4892f };
						*uParam3 = 138.7032f;
						return 1;
						break;
					case 40:
						*uParam2 = { -254.5259f, 6225.741f, 30.4892f };
						*uParam3 = 143.9689f;
						return 1;
						break;
					case 41:
						*uParam2 = { -247.9293f, 6224.588f, 30.4928f };
						*uParam3 = 145.1109f;
						return 1;
						break;
					case 42:
						*uParam2 = { -252.7037f, 6220.016f, 30.4892f };
						*uParam3 = 137.4455f;
						return 1;
						break;
					case 43:
						*uParam2 = { -254.0635f, 6221.527f, 30.4664f };
						*uParam3 = 144.2192f;
						return 1;
						break;
					case 44:
						*uParam2 = { -257.2596f, 6222.7637f, 30.4892f };
						*uParam3 = 132.3997f;
						return 1;
						break;
					case 45:
						*uParam2 = { -254.9104f, 6223.4023f, 30.4892f };
						*uParam3 = 140.3669f;
						return 1;
						break;
					case 46:
						*uParam2 = { -256.6811f, 6220.5225f, 30.4892f };
						*uParam3 = 137.0939f;
						return 1;
						break;
					case 47:
						*uParam2 = { -251.5813f, 6222.4106f, 30.4894f };
						*uParam3 = 138.8432f;
						return 1;
						break;
					case 48:
						*uParam2 = { -253.4735f, 6217.691f, 30.4892f };
						*uParam3 = 131.9765f;
						return 1;
						break;
					case 49:
						*uParam2 = { -255.5643f, 6218.636f, 30.4892f };
						*uParam3 = 133.2283f;
						return 1;
						break;
					default:
						return 0;
					}
			}
			break;
		case 129:
			if (Global_1946250.f_3377 == 1 || (Global_1946250.f_3377 == 0 && (Global_1946250.f_3378 == joaat("Mainw_RM") || Global_1946250.f_3378 == joaat("Bathroom"))))
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { 1695.4316f, 4785.1533f, 40.9945f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 1:
						*uParam2 = { 1694.6282f, 4786.3804f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 2:
						*uParam2 = { 1694.3663f, 4783.868f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 3:
						*uParam2 = { 1695.256f, 4787.729f, 41.0064f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 4:
						*uParam2 = { 1695.2238f, 4782.53f, 40.9969f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 5:
						*uParam2 = { 1691.9537f, 4784.3354f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 6:
						*uParam2 = { 1692.4321f, 4785.9688f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 7:
						*uParam2 = { 1692.5757f, 4782.652f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 8:
						*uParam2 = { 1693.0813f, 4788.7173f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 9:
						*uParam2 = { 1691.8206f, 4781.549f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 10:
						*uParam2 = { 1690.6025f, 4785.1357f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 11:
						*uParam2 = { 1690.9365f, 4786.9717f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 12:
						*uParam2 = { 1691.1058f, 4783.1978f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 13:
						*uParam2 = { 1691.5765f, 4789.791f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 14:
						*uParam2 = { 1690.5009f, 4780.289f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 15:
						*uParam2 = { 1689.4181f, 4785.978f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 16:
						*uParam2 = { 1691.4163f, 4788.1436f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 17:
						*uParam2 = { 1689.4575f, 4784.063f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 18:
						*uParam2 = { 1688.9154f, 4787.915f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 19:
						*uParam2 = { 1689.5396f, 4782.2017f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 20:
						*uParam2 = { 1687.8275f, 4785.002f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 21:
						*uParam2 = { 1687.9714f, 4786.7905f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 22:
						*uParam2 = { 1687.779f, 4783.0063f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 23:
						*uParam2 = { 1689.7009f, 4789.387f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 24:
						*uParam2 = { 1688.2631f, 4781.2383f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 25:
						*uParam2 = { 1686.3535f, 4783.87f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 26:
						*uParam2 = { 1687.2826f, 4788.4375f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 27:
						*uParam2 = { 1686.7247f, 4781.8003f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 28:
						*uParam2 = { 1687.6715f, 4790.424f, 40.9213f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 29:
						*uParam2 = { 1687.2826f, 4780.017f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 30:
						*uParam2 = { 1685.6761f, 4785.421f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					case 31:
						*uParam2 = { 1685.6873f, 4787.532f, 40.9215f };
						*uParam3 = 89.645f;
						return 1;
						break;
					default:
						return 0;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { 1710.7269f, 4759.521f, 41.0355f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 1:
						*uParam2 = { 1712.6154f, 4759.4087f, 41.0405f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 2:
						*uParam2 = { 1708.8563f, 4759.359f, 41.0305f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 3:
						*uParam2 = { 1708.0349f, 4757.9033f, 40.9322f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 4:
						*uParam2 = { 1713.8221f, 4757.8486f, 40.9327f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 5:
						*uParam2 = { 1709.8958f, 4757.995f, 40.9303f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 6:
						*uParam2 = { 1711.7915f, 4757.621f, 40.9314f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 7:
						*uParam2 = { 1709.0493f, 4756.091f, 40.9547f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 8:
						*uParam2 = { 1712.7241f, 4756.1787f, 40.9525f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 9:
						*uParam2 = { 1710.9431f, 4756.238f, 40.9499f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 10:
						*uParam2 = { 1712.0415f, 4755.2085f, 40.9788f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 11:
						*uParam2 = { 1710.0933f, 4755.091f, 40.9809f };
						*uParam3 = 180.49f;
						return 1;
						break;
					case 12:
						*uParam2 = { 1707.7708f, 4755.1514f, 40.9779f };
						*uParam3 = 93.5629f;
						return 1;
						break;
					case 13:
						*uParam2 = { 1706.5254f, 4756.0166f, 40.9591f };
						*uParam3 = 84.6349f;
						return 1;
						break;
					case 14:
						*uParam2 = { 1707.2963f, 4753.323f, 41.019f };
						*uParam3 = 83.9721f;
						return 1;
						break;
					case 15:
						*uParam2 = { 1706.3838f, 4757.537f, 40.9363f };
						*uParam3 = 77.6863f;
						return 1;
						break;
					case 16:
						*uParam2 = { 1705.7288f, 4758.5337f, 40.931f };
						*uParam3 = 82.3255f;
						return 1;
						break;
					case 17:
						*uParam2 = { 1706.53f, 4759.511f, 41.0243f };
						*uParam3 = 86.3678f;
						return 1;
						break;
					case 18:
						*uParam2 = { 1706.078f, 4754.6216f, 40.9915f };
						*uParam3 = 81.9158f;
						return 1;
						break;
					case 19:
						*uParam2 = { 1704.6593f, 4758.096f, 40.9348f };
						*uParam3 = 99.3405f;
						return 1;
						break;
					case 20:
						*uParam2 = { 1704.6703f, 4755.361f, 40.9758f };
						*uParam3 = 85.1751f;
						return 1;
						break;
					case 21:
						*uParam2 = { 1702.7057f, 4756.551f, 40.9514f };
						*uParam3 = 83.9637f;
						return 1;
						break;
					case 22:
						*uParam2 = { 1704.7751f, 4756.5396f, 40.9494f };
						*uParam3 = 88.8382f;
						return 1;
						break;
					case 23:
						*uParam2 = { 1704.4825f, 4759.6567f, 41.0188f };
						*uParam3 = 130.3569f;
						return 1;
						break;
					case 24:
						*uParam2 = { 1700.6929f, 4753.5503f, 41.0143f };
						*uParam3 = 66.6536f;
						return 1;
						break;
					case 25:
						*uParam2 = { 1700.6122f, 4755.681f, 40.9711f };
						*uParam3 = 82.491f;
						return 1;
						break;
					case 26:
						*uParam2 = { 1702.2054f, 4758.4062f, 40.9356f };
						*uParam3 = 88.7856f;
						return 1;
						break;
					case 27:
						*uParam2 = { 1702.6523f, 4753.5645f, 41.0134f };
						*uParam3 = 63.0919f;
						return 1;
						break;
					case 28:
						*uParam2 = { 1700.6804f, 4757.6094f, 40.9412f };
						*uParam3 = 89.715f;
						return 1;
						break;
					case 29:
						*uParam2 = { 1702.7029f, 4754.9575f, 40.9859f };
						*uParam3 = 70.0756f;
						return 1;
						break;
					case 30:
						*uParam2 = { 1698.8773f, 4753.353f, 41.0191f };
						*uParam3 = 86.049f;
						return 1;
						break;
					case 31:
						*uParam2 = { 1698.9443f, 4754.8125f, 40.9908f };
						*uParam3 = 70.9739f;
						return 1;
						break;
					case 32:
						*uParam2 = { 1700.2158f, 4759.578f, 41.0074f };
						*uParam3 = 100.9413f;
						return 1;
						break;
					case 33:
						*uParam2 = { 1699.331f, 4756.6953f, 40.9505f };
						*uParam3 = 81.0058f;
						return 1;
						break;
					case 34:
						*uParam2 = { 1704.8477f, 4753.603f, 41.013f };
						*uParam3 = 78.8148f;
						return 1;
						break;
					case 35:
						*uParam2 = { 1697.7108f, 4759.3813f, 41.0007f };
						*uParam3 = 85.8291f;
						return 1;
						break;
					case 36:
						*uParam2 = { 1696.1394f, 4757.867f, 40.9284f };
						*uParam3 = 46.9801f;
						return 1;
						break;
					case 37:
						*uParam2 = { 1697.1632f, 4756.4443f, 40.9477f };
						*uParam3 = 79.4826f;
						return 1;
						break;
					case 38:
						*uParam2 = { 1698.757f, 4758.1763f, 40.9385f };
						*uParam3 = 87.2237f;
						return 1;
						break;
					case 39:
						*uParam2 = { 1696.2676f, 4754.837f, 40.9769f };
						*uParam3 = 57.5834f;
						return 1;
						break;
					case 40:
						*uParam2 = { 1694.3175f, 4756.302f, 40.9308f };
						*uParam3 = 39.3518f;
						return 1;
						break;
					case 41:
						*uParam2 = { 1694.4005f, 4759.9556f, 40.9239f };
						*uParam3 = 39.5788f;
						return 1;
						break;
					case 42:
						*uParam2 = { 1693.5491f, 4754.733f, 40.9333f };
						*uParam3 = 23.632f;
						return 1;
						break;
					case 43:
						*uParam2 = { 1693.645f, 4762.715f, 40.9215f };
						*uParam3 = 88.7683f;
						return 1;
						break;
					case 44:
						*uParam2 = { 1692.9003f, 4758.728f, 40.9215f };
						*uParam3 = 40.1481f;
						return 1;
						break;
					case 45:
						*uParam2 = { 1691.6898f, 4761.478f, 40.9215f };
						*uParam3 = 88.2001f;
						return 1;
						break;
					case 46:
						*uParam2 = { 1695.6528f, 4753.5137f, 40.9804f };
						*uParam3 = 23.0364f;
						return 1;
						break;
					case 47:
						*uParam2 = { 1691.7615f, 4757.2334f, 40.9215f };
						*uParam3 = 40.4442f;
						return 1;
						break;
					case 48:
						*uParam2 = { 1690.5007f, 4759.023f, 40.9215f };
						*uParam3 = 51.4953f;
						return 1;
						break;
					case 49:
						*uParam2 = { 1691.3269f, 4765.1196f, 40.9215f };
						*uParam3 = 80.0986f;
						return 1;
						break;
					default:
						return 0;
					}
			}
			break;
		case 130:
			if (Global_1946250.f_3377 == 1 || (Global_1946250.f_3377 == 0 && (Global_1946250.f_3378 == joaat("Mainw_RM") || Global_1946250.f_3378 == joaat("Bathroom"))))
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -116.2575f, -1772.1418f, 28.8594f };
						*uParam3 = 34.56f;
						return 1;
						break;
					case 1:
						*uParam2 = { -114.5074f, -1770.8457f, 28.8603f };
						*uParam3 = 34.56f;
						return 1;
						break;
					case 2:
						*uParam2 = { -115.1306f, -1769.5851f, 28.858f };
						*uParam3 = 34.56f;
						return 1;
						break;
					case 3:
						*uParam2 = { -116.2916f, -1770.2202f, 28.8571f };
						*uParam3 = 34.56f;
						return 1;
						break;
					case 4:
						*uParam2 = { -113.1359f, -1770.0033f, 28.8598f };
						*uParam3 = 43.7914f;
						return 1;
						break;
					case 5:
						*uParam2 = { -117.8483f, -1770.6753f, 28.8555f };
						*uParam3 = 37.8446f;
						return 1;
						break;
					case 6:
						*uParam2 = { -117.4233f, -1767.052f, 28.8523f };
						*uParam3 = 78.5371f;
						return 1;
						break;
					case 7:
						*uParam2 = { -115.2802f, -1766.7279f, 28.8545f };
						*uParam3 = 70.2009f;
						return 1;
						break;
					case 8:
						*uParam2 = { -112.1441f, -1768.8486f, 28.8563f };
						*uParam3 = 52.8321f;
						return 1;
						break;
					case 9:
						*uParam2 = { -112.7604f, -1767.4811f, 28.8543f };
						*uParam3 = 47.2876f;
						return 1;
						break;
					case 10:
						*uParam2 = { -119.6623f, -1768.7754f, 28.8512f };
						*uParam3 = 68.1225f;
						return 1;
						break;
					case 11:
						*uParam2 = { -119.9412f, -1767.2526f, 28.8054f };
						*uParam3 = 67.8489f;
						return 1;
						break;
					case 12:
						*uParam2 = { -116.9613f, -1765.3673f, 28.8531f };
						*uParam3 = 93.686f;
						return 1;
						break;
					case 13:
						*uParam2 = { -114.169f, -1768.4578f, 28.8576f };
						*uParam3 = 34.56f;
						return 1;
						break;
					case 14:
						*uParam2 = { -118.1158f, -1769.1304f, 28.8533f };
						*uParam3 = 60.8943f;
						return 1;
						break;
					case 15:
						*uParam2 = { -122.8298f, -1768.307f, 28.8258f };
						*uParam3 = 56.6903f;
						return 1;
						break;
					case 16:
						*uParam2 = { -121.2604f, -1768.6912f, 28.8292f };
						*uParam3 = 65.5591f;
						return 1;
						break;
					case 17:
						*uParam2 = { -118.5386f, -1765.9597f, 28.8404f };
						*uParam3 = 64.8751f;
						return 1;
						break;
					case 18:
						*uParam2 = { -118.6255f, -1767.6039f, 28.8519f };
						*uParam3 = 50.3946f;
						return 1;
						break;
					case 19:
						*uParam2 = { -116.8735f, -1768.4451f, 28.8542f };
						*uParam3 = 52.6494f;
						return 1;
						break;
					case 20:
						*uParam2 = { -123.7927f, -1771.0717f, 28.8223f };
						*uParam3 = 55.202f;
						return 1;
						break;
					case 21:
						*uParam2 = { -121.6083f, -1767.1146f, 28.8067f };
						*uParam3 = 87.8617f;
						return 1;
						break;
					case 22:
						*uParam2 = { -122.1663f, -1765.5925f, 28.7853f };
						*uParam3 = 84.4341f;
						return 1;
						break;
					case 23:
						*uParam2 = { -120.8104f, -1764.2589f, 28.7833f };
						*uParam3 = 99.9928f;
						return 1;
						break;
					case 24:
						*uParam2 = { -120.3463f, -1765.9005f, 28.7872f };
						*uParam3 = 49.8951f;
						return 1;
						break;
					case 25:
						*uParam2 = { -124.7342f, -1768.3091f, 28.8268f };
						*uParam3 = 93.9984f;
						return 1;
						break;
					case 26:
						*uParam2 = { -123.8092f, -1764.5833f, 28.7718f };
						*uParam3 = 93.7455f;
						return 1;
						break;
					case 27:
						*uParam2 = { -124.3321f, -1772.0813f, 28.8223f };
						*uParam3 = 49.3921f;
						return 1;
						break;
					case 28:
						*uParam2 = { -119.5127f, -1764.7441f, 28.7682f };
						*uParam3 = 83.9202f;
						return 1;
						break;
					case 29:
						*uParam2 = { -122.7322f, -1769.866f, 28.8484f };
						*uParam3 = 45.8397f;
						return 1;
						break;
					case 30:
						*uParam2 = { -124.5867f, -1765.7944f, 28.7898f };
						*uParam3 = 99.4482f;
						return 1;
						break;
					case 31:
						*uParam2 = { -124.1192f, -1767.0051f, 28.8076f };
						*uParam3 = 100.3556f;
						return 1;
						break;
					default:
						return 0;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -104.8722f, -1778.331f, 28.5017f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 1:
						*uParam2 = { -103.7559f, -1778.8312f, 28.4544f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 2:
						*uParam2 = { -105.5397f, -1777.2885f, 28.5496f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 3:
						*uParam2 = { -102.8682f, -1779.9331f, 28.398f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 4:
						*uParam2 = { -106.8902f, -1776.7936f, 28.604f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 5:
						*uParam2 = { -103.5376f, -1777.3862f, 28.4859f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 6:
						*uParam2 = { -102.21f, -1778.4575f, 28.4162f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 7:
						*uParam2 = { -105.5613f, -1776.0249f, 28.5836f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 8:
						*uParam2 = { -101.0901f, -1780.29f, 28.3241f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 9:
						*uParam2 = { -107.156f, -1775.2905f, 28.6502f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 10:
						*uParam2 = { -103.1182f, -1776.0183f, 28.5088f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 11:
						*uParam2 = { -102.578f, -1777.3682f, 28.4564f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 12:
						*uParam2 = { -104.4464f, -1775.8618f, 28.5538f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 13:
						*uParam2 = { -101.3292f, -1776.9618f, 28.4279f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 14:
						*uParam2 = { -105.8051f, -1774.6005f, 28.6279f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 15:
						*uParam2 = { -102.4781f, -1775.1914f, 28.5105f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 16:
						*uParam2 = { -100.1295f, -1777.7821f, 28.3687f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 17:
						*uParam2 = { -104.0297f, -1774.2809f, 28.5828f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 18:
						*uParam2 = { -99.0312f, -1778.8402f, 28.2089f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 19:
						*uParam2 = { -105.9866f, -1772.1339f, 28.6962f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 20:
						*uParam2 = { -101.031f, -1781.3824f, 28.2702f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 21:
						*uParam2 = { -100.3231f, -1779.8973f, 28.2611f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 22:
						*uParam2 = { -108.7361f, -1774.8032f, 28.7205f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 23:
						*uParam2 = { -100.3367f, -1776.6458f, 28.4051f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 24:
						*uParam2 = { -107.1934f, -1773.5015f, 28.6995f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 25:
						*uParam2 = { -100.5816f, -1778.579f, 28.362f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 26:
						*uParam2 = { -98.2342f, -1779.8804f, 28.1402f };
						*uParam3 = 230.104f;
						return 1;
						break;
					case 27:
						*uParam2 = { -105.5641f, -1773.4847f, 28.6493f };
						*uParam3 = 321.12f;
						return 1;
						break;
					case 28:
						*uParam2 = { -99.1763f, -1781.434f, 28.1649f };
						*uParam3 = 238.9633f;
						return 1;
						break;
					case 29:
						*uParam2 = { -96.9683f, -1779.8693f, 28.067f };
						*uParam3 = 222.6673f;
						return 1;
						break;
					case 30:
						*uParam2 = { -107.1161f, -1771.4421f, 28.7514f };
						*uParam3 = 47.0637f;
						return 1;
						break;
					case 31:
						*uParam2 = { -97.9348f, -1781.5597f, 28.0999f };
						*uParam3 = 221.5299f;
						return 1;
						break;
					case 32:
						*uParam2 = { -108.5608f, -1772.6768f, 28.7712f };
						*uParam3 = 55.3939f;
						return 1;
						break;
					case 33:
						*uParam2 = { -98.8754f, -1782.7817f, 28.1491f };
						*uParam3 = 233.0531f;
						return 1;
						break;
					case 34:
						*uParam2 = { -109.9125f, -1773.8741f, 28.788f };
						*uParam3 = 32.6016f;
						return 1;
						break;
					case 35:
						*uParam2 = { -95.8186f, -1781.063f, 28.0068f };
						*uParam3 = 222.0026f;
						return 1;
						break;
					case 36:
						*uParam2 = { -96.5697f, -1782.4407f, 28.0733f };
						*uParam3 = 218.8545f;
						return 1;
						break;
					case 37:
						*uParam2 = { -94.4729f, -1781.933f, 27.9802f };
						*uParam3 = 216.0452f;
						return 1;
						break;
					case 38:
						*uParam2 = { -97.6634f, -1783.7355f, 28.1099f };
						*uParam3 = 227.7258f;
						return 1;
						break;
					case 39:
						*uParam2 = { -95.1349f, -1783.558f, 27.9847f };
						*uParam3 = 215.7288f;
						return 1;
						break;
					case 40:
						*uParam2 = { -93.3091f, -1785.0189f, 27.8594f };
						*uParam3 = 226.0544f;
						return 1;
						break;
					case 41:
						*uParam2 = { -94.7725f, -1785.9386f, 27.9202f };
						*uParam3 = 220.746f;
						return 1;
						break;
					case 42:
						*uParam2 = { -92.9168f, -1783.3448f, 27.8907f };
						*uParam3 = 228.373f;
						return 1;
						break;
					case 43:
						*uParam2 = { -96.263f, -1784.6345f, 28.0246f };
						*uParam3 = 225.2945f;
						return 1;
						break;
					case 44:
						*uParam2 = { -111.65f, -1772.3359f, 28.8628f };
						*uParam3 = 27.9735f;
						return 1;
						break;
					case 45:
						*uParam2 = { -109.8474f, -1769.3995f, 28.8532f };
						*uParam3 = 58.6387f;
						return 1;
						break;
					case 46:
						*uParam2 = { -110.2079f, -1771.5961f, 28.8556f };
						*uParam3 = 51.1077f;
						return 1;
						break;
					case 47:
						*uParam2 = { -111.4897f, -1770.4478f, 28.8589f };
						*uParam3 = 58.2501f;
						return 1;
						break;
					case 48:
						*uParam2 = { -108.4152f, -1770.4701f, 28.82f };
						*uParam3 = 54.1872f;
						return 1;
						break;
					case 49:
						*uParam2 = { -112.9994f, -1771.0801f, 28.8619f };
						*uParam3 = 32.3382f;
						return 1;
						break;
					default:
						return 0;
					}
			}
			break;
		case 131:
			if (Global_1946250.f_3377 == 1 || (Global_1946250.f_3377 == 0 && (Global_1946250.f_3378 == joaat("Mainw_RM") || Global_1946250.f_3378 == joaat("Bathroom"))))
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -599.5079f, 279.6345f, 81.0742f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 1:
						*uParam2 = { -601.0746f, 278.6846f, 81.0384f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 2:
						*uParam2 = { -598.5162f, 277.9129f, 81.0994f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 3:
						*uParam2 = { -602.5452f, 277.6736f, 81.0062f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 4:
						*uParam2 = { -597.343f, 277.1742f, 81.1299f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 5:
						*uParam2 = { -600.9913f, 276.9923f, 81.0437f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 6:
						*uParam2 = { -603.4954f, 276.7165f, 80.986f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 7:
						*uParam2 = { -599.4063f, 276.8264f, 81.0809f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 8:
						*uParam2 = { -605.5212f, 277.0737f, 80.9423f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 9:
						*uParam2 = { -595.1296f, 275.912f, 81.189f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 10:
						*uParam2 = { -598.3068f, 275.3163f, 81.1095f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 11:
						*uParam2 = { -604.3764f, 275.6471f, 80.9677f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 12:
						*uParam2 = { -596.6371f, 275.582f, 81.1513f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 13:
						*uParam2 = { -606.2702f, 275.8792f, 80.9294f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 14:
						*uParam2 = { -594.1651f, 274.873f, 81.2158f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 15:
						*uParam2 = { -603.4553f, 274.3747f, 80.9916f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 16:
						*uParam2 = { -600.5521f, 275.1102f, 81.0577f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 17:
						*uParam2 = { -599.4542f, 274.189f, 81.0898f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 18:
						*uParam2 = { -602.7007f, 275.2907f, 81.0073f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 19:
						*uParam2 = { -597.4311f, 274.0721f, 81.1344f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 20:
						*uParam2 = { -592.0862f, 275.2241f, 81.2684f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 21:
						*uParam2 = { -607.1044f, 277.4207f, 80.909f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 22:
						*uParam2 = { -592.6564f, 276.6369f, 81.2503f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 23:
						*uParam2 = { -605.5082f, 274.8545f, 80.9465f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 24:
						*uParam2 = { -595.7557f, 274.0238f, 81.1772f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 25:
						*uParam2 = { -592.5223f, 273.0869f, 81.2617f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 26:
						*uParam2 = { -608.9496f, 277.9978f, 80.8678f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 27:
						*uParam2 = { -591.1089f, 273.9494f, 81.2998f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 28:
						*uParam2 = { -607.2863f, 274.2857f, 80.908f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 29:
						*uParam2 = { -593.1434f, 274.4834f, 81.2427f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 30:
						*uParam2 = { -594.5435f, 272.7795f, 81.2108f };
						*uParam3 = 173.975f;
						return 1;
						break;
					case 31:
						*uParam2 = { -590.2137f, 276.2841f, 81.32f };
						*uParam3 = 173.975f;
						return 1;
						break;
					default:
						return 0;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -617.9044f, 284.8121f, 80.6844f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 1:
						*uParam2 = { -619.4274f, 285.544f, 80.6583f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 2:
						*uParam2 = { -616.4741f, 285.342f, 80.7093f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 3:
						*uParam2 = { -621.0435f, 285.3562f, 80.634f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 4:
						*uParam2 = { -615.1828f, 284.3087f, 80.7321f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 5:
						*uParam2 = { -622.7971f, 285.4996f, 80.6135f };
						*uParam3 = 151.147f;
						return 1;
						break;
					case 6:
						*uParam2 = { -617.7243f, 282.4009f, 80.6865f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 7:
						*uParam2 = { -619.925f, 282.2562f, 80.6254f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 8:
						*uParam2 = { -616.3848f, 282.9466f, 80.7115f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 9:
						*uParam2 = { -621.5775f, 283.5002f, 80.6307f };
						*uParam3 = 166.0283f;
						return 1;
						break;
					case 10:
						*uParam2 = { -615.7123f, 281.4957f, 80.7197f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 11:
						*uParam2 = { -623.3156f, 283.1504f, 80.6127f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 12:
						*uParam2 = { -621.3702f, 281.4852f, 80.571f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 13:
						*uParam2 = { -619.535f, 279.3781f, 80.5725f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 14:
						*uParam2 = { -618.6343f, 280.7062f, 80.6256f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 15:
						*uParam2 = { -621.1133f, 279.7757f, 80.5401f };
						*uParam3 = 167.583f;
						return 1;
						break;
					case 16:
						*uParam2 = { -616.9281f, 280.3102f, 80.6606f };
						*uParam3 = 164.1599f;
						return 1;
						break;
					case 17:
						*uParam2 = { -622.9047f, 280.7597f, 80.6212f };
						*uParam3 = 165.6209f;
						return 1;
						break;
					case 18:
						*uParam2 = { -614.8651f, 276.7271f, 80.7573f };
						*uParam3 = 281.8844f;
						return 1;
						break;
					case 19:
						*uParam2 = { -614.5068f, 278.7322f, 80.7622f };
						*uParam3 = 266.1656f;
						return 1;
						break;
					case 20:
						*uParam2 = { -617.9952f, 278.4264f, 80.5886f };
						*uParam3 = 174.6f;
						return 1;
						break;
					case 21:
						*uParam2 = { -624.9069f, 284.5534f, 80.5907f };
						*uParam3 = 88.7833f;
						return 1;
						break;
					case 22:
						*uParam2 = { -615.9415f, 278.0429f, 80.6319f };
						*uParam3 = 157.3788f;
						return 1;
						break;
					case 23:
						*uParam2 = { -624.3425f, 279.6837f, 80.6081f };
						*uParam3 = 76.5037f;
						return 1;
						break;
					case 24:
						*uParam2 = { -626.0756f, 283.6465f, 80.5807f };
						*uParam3 = 80.9668f;
						return 1;
						break;
					case 25:
						*uParam2 = { -626.5473f, 280.5354f, 80.5843f };
						*uParam3 = 72.1615f;
						return 1;
						break;
					case 26:
						*uParam2 = { -625.4733f, 285.9632f, 80.5799f };
						*uParam3 = 93.117f;
						return 1;
						break;
					case 27:
						*uParam2 = { -628.0434f, 282.6355f, 80.5627f };
						*uParam3 = 95.569f;
						return 1;
						break;
					case 28:
						*uParam2 = { -625.7477f, 282.1786f, 80.5889f };
						*uParam3 = 81.789f;
						return 1;
						break;
					case 29:
						*uParam2 = { -627.8185f, 285.0144f, 80.5579f };
						*uParam3 = 86.9762f;
						return 1;
						break;
					case 30:
						*uParam2 = { -630.5635f, 283.2386f, 80.537f };
						*uParam3 = 81.6269f;
						return 1;
						break;
					case 31:
						*uParam2 = { -629.5343f, 284.0024f, 80.5446f };
						*uParam3 = 97.988f;
						return 1;
						break;
					case 32:
						*uParam2 = { -629.6445f, 281.206f, 80.5516f };
						*uParam3 = 77.4155f;
						return 1;
						break;
					case 33:
						*uParam2 = { -629.3381f, 286.4361f, 80.5389f };
						*uParam3 = 85.9017f;
						return 1;
						break;
					case 34:
						*uParam2 = { -627.425f, 287.3147f, 80.556f };
						*uParam3 = 89.2222f;
						return 1;
						break;
					case 35:
						*uParam2 = { -629.6642f, 288.4045f, 80.5424f };
						*uParam3 = 96.5188f;
						return 1;
						break;
					case 36:
						*uParam2 = { -611.8183f, 278.2617f, 80.8063f };
						*uParam3 = 252.5364f;
						return 1;
						break;
					case 37:
						*uParam2 = { -605.4224f, 274.8452f, 80.9482f };
						*uParam3 = 265.405f;
						return 1;
						break;
					case 38:
						*uParam2 = { -612.364f, 275.5598f, 80.7995f };
						*uParam3 = 271.5479f;
						return 1;
						break;
					case 39:
						*uParam2 = { -609.0061f, 276.5768f, 80.8702f };
						*uParam3 = 259.3604f;
						return 1;
						break;
					case 40:
						*uParam2 = { -613.3268f, 277.2934f, 80.7793f };
						*uParam3 = 257.3938f;
						return 1;
						break;
					case 41:
						*uParam2 = { -606.3709f, 277.1691f, 80.9251f };
						*uParam3 = 266.8769f;
						return 1;
						break;
					case 42:
						*uParam2 = { -634.7041f, 282.1702f, 80.4958f };
						*uParam3 = 78.2949f;
						return 1;
						break;
					case 43:
						*uParam2 = { -631.5027f, 285.2523f, 80.5207f };
						*uParam3 = 85.2213f;
						return 1;
						break;
					case 44:
						*uParam2 = { -633.9324f, 284.1674f, 80.5f };
						*uParam3 = 97.2923f;
						return 1;
						break;
					case 45:
						*uParam2 = { -632.6902f, 282.6127f, 80.5186f };
						*uParam3 = 77.1841f;
						return 1;
						break;
					case 46:
						*uParam2 = { -634.4039f, 286.2485f, 80.4826f };
						*uParam3 = 91.4416f;
						return 1;
						break;
					case 47:
						*uParam2 = { -632.4951f, 287.2809f, 80.5066f };
						*uParam3 = 86.578f;
						return 1;
						break;
					case 48:
						*uParam2 = { -602.8696f, 276.8906f, 81.0002f };
						*uParam3 = 275.0941f;
						return 1;
						break;
					case 49:
						*uParam2 = { -602.3043f, 274.3171f, 81.0185f };
						*uParam3 = 272.0846f;
						return 1;
						break;
					default:
						return 0;
					}
			}
			break;
		case 132:
			if (Global_1946250.f_3377 == 1 || (Global_1946250.f_3377 == 0 && (Global_1946250.f_3378 == joaat("Mainw_RM") || Global_1946250.f_3378 == joaat("Bathroom"))))
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -1269.7025f, -305.4233f, 35.9952f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 1:
						*uParam2 = { -1269.849f, -306.9097f, 35.9833f };
						*uParam3 = 240.7798f;
						return 1;
						break;
					case 2:
						*uParam2 = { -1268.752f, -303.8601f, 36.0197f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 3:
						*uParam2 = { -1271.0302f, -308.2669f, 35.9579f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 4:
						*uParam2 = { -1268.719f, -301.4868f, 36.0452f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 5:
						*uParam2 = { -1266.3884f, -306.9414f, 35.9965f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 6:
						*uParam2 = { -1268.5963f, -308.8217f, 35.9803f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 7:
						*uParam2 = { -1265.9424f, -303.769f, 36.078f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 8:
						*uParam2 = { -1272.2999f, -309.7179f, 35.9294f };
						*uParam3 = 208.8064f;
						return 1;
						break;
					case 9:
						*uParam2 = { -1266.8041f, -301.6832f, 36.0822f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 10:
						*uParam2 = { -1266.8096f, -305.2502f, 36.0447f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 11:
						*uParam2 = { -1265.976f, -308.689f, 35.9489f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 12:
						*uParam2 = { -1263.8547f, -305.3242f, 36.069f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 13:
						*uParam2 = { -1272.4437f, -311.7817f, 35.9079f };
						*uParam3 = 211.2713f;
						return 1;
						break;
					case 14:
						*uParam2 = { -1264.3657f, -302.724f, 36.108f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 15:
						*uParam2 = { -1264.0968f, -308.4624f, 35.97f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 16:
						*uParam2 = { -1268.1908f, -310.9919f, 35.9641f };
						*uParam3 = 219.0706f;
						return 1;
						break;
					case 17:
						*uParam2 = { -1262.6827f, -306.7761f, 36.0276f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 18:
						*uParam2 = { -1270.2489f, -311.4794f, 35.9359f };
						*uParam3 = 211.9174f;
						return 1;
						break;
					case 19:
						*uParam2 = { -1262.1532f, -304.3869f, 36.0907f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 20:
						*uParam2 = { -1261.0702f, -306.0089f, 36.0456f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 21:
						*uParam2 = { -1261.9846f, -308.3197f, 35.9847f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 22:
						*uParam2 = { -1260.1774f, -304.241f, 36.1414f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 23:
						*uParam2 = { -1264.3652f, -309.9094f, 35.9202f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 24:
						*uParam2 = { -1260.7188f, -302.7078f, 36.1436f };
						*uParam3 = 250.2f;
						return 1;
						break;
					case 25:
						*uParam2 = { -1274.4365f, -312.0487f, 35.883f };
						*uParam3 = 208.7611f;
						return 1;
						break;
					case 26:
						*uParam2 = { -1274.9987f, -314.5594f, 35.8642f };
						*uParam3 = 206.9062f;
						return 1;
						break;
					case 27:
						*uParam2 = { -1266.3141f, -299.4484f, 36.1192f };
						*uParam3 = 209.2712f;
						return 1;
						break;
					case 28:
						*uParam2 = { -1274.3173f, -310.5081f, 35.8988f };
						*uParam3 = 210.0792f;
						return 1;
						break;
					case 29:
						*uParam2 = { -1262.9135f, -301.0805f, 36.1299f };
						*uParam3 = 202.3864f;
						return 1;
						break;
					case 30:
						*uParam2 = { -1264.7368f, -299.1727f, 36.1216f };
						*uParam3 = 205.7585f;
						return 1;
						break;
					case 31:
						*uParam2 = { -1275.8334f, -311.4582f, 35.8723f };
						*uParam3 = 214.6592f;
						return 1;
						break;
					default:
						return 0;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -1287.6573f, -277.1252f, 37.6529f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 1:
						*uParam2 = { -1285.9908f, -277.1624f, 37.5792f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 2:
						*uParam2 = { -1288.5918f, -278.7067f, 37.6207f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 3:
						*uParam2 = { -1284.603f, -276.2882f, 37.5412f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 4:
						*uParam2 = { -1290.0999f, -279.0659f, 37.6665f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 5:
						*uParam2 = { -1284.2897f, -274.7838f, 37.5909f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 6:
						*uParam2 = { -1288.9452f, -275.6217f, 37.7717f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 7:
						*uParam2 = { -1287.5261f, -275.3952f, 37.7199f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 8:
						*uParam2 = { -1290.3878f, -277.055f, 37.7683f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 9:
						*uParam2 = { -1286.4324f, -274.2005f, 37.7177f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 10:
						*uParam2 = { -1292.5833f, -278.6696f, 37.7898f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 11:
						*uParam2 = { -1283.564f, -273.1079f, 37.6616f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 12:
						*uParam2 = { -1290.4216f, -274.8435f, 37.8716f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 13:
						*uParam2 = { -1288.3306f, -273.6209f, 37.8319f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 14:
						*uParam2 = { -1292.8544f, -276.2648f, 37.9149f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 15:
						*uParam2 = { -1286.1741f, -272.5339f, 37.8009f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 16:
						*uParam2 = { -1295.1681f, -277.5684f, 37.9737f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 17:
						*uParam2 = { -1283.3888f, -271.2895f, 37.7981f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 18:
						*uParam2 = { -1289.6721f, -273.2169f, 37.9081f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 19:
						*uParam2 = { -1287.5945f, -272.0844f, 37.8856f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 20:
						*uParam2 = { -1292.0646f, -274.9053f, 37.9412f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 21:
						*uParam2 = { -1285.1418f, -271.3297f, 37.848f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 22:
						*uParam2 = { -1294.6029f, -276.3492f, 38.0067f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 23:
						*uParam2 = { -1281.6682f, -270.5674f, 37.8297f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 24:
						*uParam2 = { -1291.386f, -273.4031f, 37.9788f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 25:
						*uParam2 = { -1289.536f, -271.7056f, 37.9799f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 26:
						*uParam2 = { -1293.847f, -274.5046f, 38.0663f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 27:
						*uParam2 = { -1283.0079f, -269.7893f, 37.9236f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 28:
						*uParam2 = { -1296.6891f, -276.806f, 38.1769f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 29:
						*uParam2 = { -1280.9818f, -269.0326f, 37.9616f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 30:
						*uParam2 = { -1291.1405f, -271.5458f, 38.0557f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 31:
						*uParam2 = { -1288.884f, -270.0433f, 38.0577f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 32:
						*uParam2 = { -1293.3529f, -272.6419f, 38.152f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 33:
						*uParam2 = { -1286.478f, -270.0254f, 38.0056f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 34:
						*uParam2 = { -1295.4305f, -274.128f, 38.2477f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 35:
						*uParam2 = { -1284.6566f, -269.2559f, 38.0185f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 36:
						*uParam2 = { -1292.7896f, -270.4086f, 38.2186f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 37:
						*uParam2 = { -1290.5381f, -269.4683f, 38.1491f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 38:
						*uParam2 = { -1295.2128f, -270.9482f, 38.3656f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 39:
						*uParam2 = { -1287.0906f, -268.1455f, 38.1721f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 40:
						*uParam2 = { -1297.584f, -275.2004f, 38.38f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 41:
						*uParam2 = { -1283.7217f, -267.0681f, 38.3228f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 42:
						*uParam2 = { -1292.3865f, -268.1239f, 38.3399f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 43:
						*uParam2 = { -1290.192f, -267.8021f, 38.2848f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 44:
						*uParam2 = { -1294.4761f, -268.989f, 38.4221f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 45:
						*uParam2 = { -1287.9408f, -265.5807f, 38.4868f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 46:
						*uParam2 = { -1296.5715f, -272.1013f, 38.4391f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 47:
						*uParam2 = { -1285.2041f, -265.6668f, 38.5438f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 48:
						*uParam2 = { -1296.314f, -268.3275f, 38.6175f };
						*uParam3 = 29.52f;
						return 1;
						break;
					case 49:
						*uParam2 = { -1290.948f, -265.7283f, 38.4823f };
						*uParam3 = 29.52f;
						return 1;
						break;
					default:
						return 0;
					}
			}
			break;
		case 133:
			if (Global_1946250.f_3377 == 1 || (Global_1946250.f_3377 == 0 && (Global_1946250.f_3378 == joaat("Mainw_RM") || Global_1946250.f_3378 == joaat("Bathroom"))))
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { 759.0959f, -816.0111f, 25.2974f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 1:
						*uParam2 = { 759.1497f, -817.6514f, 25.2878f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 2:
						*uParam2 = { 759.0805f, -814.525f, 25.3062f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 3:
						*uParam2 = { 759.0091f, -819.2879f, 25.2725f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 4:
						*uParam2 = { 758.8737f, -813.0327f, 25.3044f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 5:
						*uParam2 = { 760.5521f, -816.7493f, 25.3074f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 6:
						*uParam2 = { 760.4383f, -818.5463f, 25.2825f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 7:
						*uParam2 = { 760.3769f, -815.1404f, 25.3156f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 8:
						*uParam2 = { 760.2189f, -820.262f, 25.274f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 9:
						*uParam2 = { 760.3217f, -812.4975f, 25.3189f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 10:
						*uParam2 = { 761.6768f, -817.6132f, 25.3019f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 11:
						*uParam2 = { 761.713f, -819.4532f, 25.2837f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 12:
						*uParam2 = { 761.3945f, -813.7826f, 25.3293f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 13:
						*uParam2 = { 761.38f, -821.9919f, 25.2717f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 14:
						*uParam2 = { 761.5972f, -811.0649f, 25.3175f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 15:
						*uParam2 = { 762.0217f, -815.5744f, 25.3293f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 16:
						*uParam2 = { 762.9988f, -814.4871f, 25.3451f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 17:
						*uParam2 = { 762.5789f, -812.5934f, 25.3345f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 18:
						*uParam2 = { 762.3146f, -820.7635f, 25.2813f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 19:
						*uParam2 = { 762.7283f, -809.3175f, 25.3308f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 20:
						*uParam2 = { 763.4736f, -817.1971f, 25.3161f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 21:
						*uParam2 = { 763.5562f, -819.5054f, 25.2916f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 22:
						*uParam2 = { 763.5206f, -811.4362f, 25.3295f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 23:
						*uParam2 = { 763.3862f, -822.6628f, 25.2786f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 24:
						*uParam2 = { 763.8901f, -810.0634f, 25.3283f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 25:
						*uParam2 = { 760.4294f, -810.1245f, 25.312f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 26:
						*uParam2 = { 759.9083f, -822.9441f, 25.2565f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 27:
						*uParam2 = { 759.4079f, -808.7551f, 25.3155f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 28:
						*uParam2 = { 759.0952f, -821.6871f, 25.2591f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 29:
						*uParam2 = { 759.027f, -811.0308f, 25.3051f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 30:
						*uParam2 = { 761.2005f, -807.7498f, 25.3318f };
						*uParam3 = 268.95f;
						return 1;
						break;
					case 31:
						*uParam2 = { 761.4733f, -824.2816f, 25.2571f };
						*uParam3 = 268.95f;
						return 1;
						break;
					default:
						return 0;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						*uParam2 = { 726.2093f, -822.5177f, 23.84f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 1:
						*uParam2 = { 725.2628f, -821.1919f, 23.8098f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 2:
						*uParam2 = { 725.217f, -824.1523f, 23.7991f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 3:
						*uParam2 = { 726.0624f, -819.7414f, 23.8434f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 4:
						*uParam2 = { 726.1193f, -825.5561f, 23.8245f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 5:
						*uParam2 = { 725.0648f, -818.4267f, 23.811f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 6:
						*uParam2 = { 721.7838f, -824.0378f, 23.6809f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 7:
						*uParam2 = { 722.4434f, -822.1356f, 23.7059f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 8:
						*uParam2 = { 722.3344f, -825.8267f, 23.6761f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 9:
						*uParam2 = { 723.2622f, -820.1746f, 23.7401f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 10:
						*uParam2 = { 723.3819f, -824.9603f, 23.7301f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 11:
						*uParam2 = { 722.7582f, -818.4664f, 23.7267f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 12:
						*uParam2 = { 718.6959f, -828.3732f, 23.4483f };
						*uParam3 = 194.4947f;
						return 1;
						break;
					case 13:
						*uParam2 = { 718.6706f, -825.9783f, 23.4493f };
						*uParam3 = 187.9496f;
						return 1;
						break;
					case 14:
						*uParam2 = { 720.2532f, -827.5706f, 23.5068f };
						*uParam3 = 197.9925f;
						return 1;
						break;
					case 15:
						*uParam2 = { 720.1088f, -819.7177f, 23.5075f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 16:
						*uParam2 = { 722.4982f, -827.7947f, 23.6448f };
						*uParam3 = 188.3256f;
						return 1;
						break;
					case 17:
						*uParam2 = { 720.0851f, -817.5421f, 23.5317f };
						*uParam3 = 90.7f;
						return 1;
						break;
					case 18:
						*uParam2 = { 723.6707f, -815.5744f, 23.7484f };
						*uParam3 = 357.3411f;
						return 1;
						break;
					case 19:
						*uParam2 = { 719.7384f, -815.2855f, 23.5224f };
						*uParam3 = 359.1795f;
						return 1;
						break;
					case 20:
						*uParam2 = { 721.1891f, -815.5744f, 23.6397f };
						*uParam3 = 352.0764f;
						return 1;
						break;
					case 21:
						*uParam2 = { 722.2142f, -814.4636f, 23.6816f };
						*uParam3 = 11.3659f;
						return 1;
						break;
					case 22:
						*uParam2 = { 724.6776f, -826.9924f, 23.7475f };
						*uParam3 = 185.3005f;
						return 1;
						break;
					case 23:
						*uParam2 = { 725.3159f, -814.2562f, 23.8154f };
						*uParam3 = 359.1728f;
						return 1;
						break;
					case 24:
						*uParam2 = { 719.9294f, -832.2664f, 23.45f };
						*uParam3 = 217.5851f;
						return 1;
						break;
					case 25:
						*uParam2 = { 723.6857f, -829.8093f, 23.6548f };
						*uParam3 = 182.855f;
						return 1;
						break;
					case 26:
						*uParam2 = { 722.1923f, -831.6027f, 23.5585f };
						*uParam3 = 187.844f;
						return 1;
						break;
					case 27:
						*uParam2 = { 720.7712f, -829.8999f, 23.5331f };
						*uParam3 = 177.9801f;
						return 1;
						break;
					case 28:
						*uParam2 = { 724.6137f, -831.6417f, 23.659f };
						*uParam3 = 190.3327f;
						return 1;
						break;
					case 29:
						*uParam2 = { 718.2791f, -830.687f, 23.413f };
						*uParam3 = 219.617f;
						return 1;
						break;
					case 30:
						*uParam2 = { 726.2815f, -811.6838f, 23.8593f };
						*uParam3 = 11.6494f;
						return 1;
						break;
					case 31:
						*uParam2 = { 724.5588f, -810.0483f, 23.7846f };
						*uParam3 = 1.8916f;
						return 1;
						break;
					case 32:
						*uParam2 = { 723.718f, -812.9148f, 23.7432f };
						*uParam3 = 9.4265f;
						return 1;
						break;
					case 33:
						*uParam2 = { 722.359f, -810.9883f, 23.6788f };
						*uParam3 = 357.9069f;
						return 1;
						break;
					case 34:
						*uParam2 = { 720.3674f, -813.3376f, 23.5816f };
						*uParam3 = 359.4649f;
						return 1;
						break;
					case 35:
						*uParam2 = { 725.7687f, -808.5059f, 23.8467f };
						*uParam3 = 19.3412f;
						return 1;
						break;
					case 36:
						*uParam2 = { 725.9354f, -805.6938f, 23.8645f };
						*uParam3 = 2.6159f;
						return 1;
						break;
					case 37:
						*uParam2 = { 723.9787f, -806.1445f, 23.7734f };
						*uParam3 = 358.3303f;
						return 1;
						break;
					case 38:
						*uParam2 = { 721.085f, -809.2068f, 23.6266f };
						*uParam3 = 354.0882f;
						return 1;
						break;
					case 39:
						*uParam2 = { 721.9927f, -806.9178f, 23.6784f };
						*uParam3 = 5.9723f;
						return 1;
						break;
					case 40:
						*uParam2 = { 723.6841f, -808.683f, 23.7497f };
						*uParam3 = 14.7835f;
						return 1;
						break;
					case 41:
						*uParam2 = { 720.0433f, -807.3752f, 23.4988f };
						*uParam3 = 6.244f;
						return 1;
						break;
					case 42:
						*uParam2 = { 720.4771f, -840.1825f, 23.3698f };
						*uParam3 = 230.1388f;
						return 1;
						break;
					case 43:
						*uParam2 = { 718.1904f, -837.3969f, 23.3144f };
						*uParam3 = 222.7605f;
						return 1;
						break;
					case 44:
						*uParam2 = { 722.4776f, -838.2476f, 23.4679f };
						*uParam3 = 216.0075f;
						return 1;
						break;
					case 45:
						*uParam2 = { 719.8634f, -835.5109f, 23.4027f };
						*uParam3 = 209.7983f;
						return 1;
						break;
					case 46:
						*uParam2 = { 724.9616f, -836.8006f, 23.5792f };
						*uParam3 = 188.6178f;
						return 1;
						break;
					case 47:
						*uParam2 = { 722.648f, -834.8339f, 23.5166f };
						*uParam3 = 193.9971f;
						return 1;
						break;
					case 48:
						*uParam2 = { 726.0676f, -839.9238f, 23.5954f };
						*uParam3 = 263.205f;
						return 1;
						break;
					case 49:
						*uParam2 = { 724.0559f, -842.3041f, 23.4832f };
						*uParam3 = 248.8527f;
						return 1;
						break;
					default:
						return 0;
					}
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_865(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xD42E9
{
	switch (iParam0)
	{
		case 128:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -248.4501f, 6205.4844f, 30.4892f };
					*uParam3 = 134.1996f;
					break;
				case 1:
					*uParam2 = { -246.1738f, 6203.06f, 30.4892f };
					*uParam3 = 134.1996f;
					break;
				case 2:
					*uParam2 = { -243.8512f, 6200.678f, 30.4892f };
					*uParam3 = 134.1996f;
					break;
				case 3:
					*uParam2 = { -241.4754f, 6198.2876f, 30.4892f };
					*uParam3 = 134.1996f;
					break;
				case 4:
					*uParam2 = { -238.958f, 6195.679f, 30.4892f };
					*uParam3 = 134.1996f;
					break;
				case 5:
					*uParam2 = { -231.5955f, 6197.832f, 30.4897f };
					*uParam3 = 134.1996f;
					break;
				case 6:
					*uParam2 = { -225.9865f, 6203.3813f, 30.4895f };
					*uParam3 = 134.1996f;
					break;
				case 7:
					*uParam2 = { -220.2609f, 6209.1064f, 30.4894f };
					*uParam3 = 134.1996f;
					break;
				case 8:
					*uParam2 = { -214.7162f, 6214.7812f, 30.4904f };
					*uParam3 = 134.1996f;
					break;
				case 9:
					*uParam2 = { -252.3168f, 6218.884f, 30.4901f };
					*uParam3 = 134.1996f;
					break;
				case 10:
					*uParam2 = { -246.5397f, 6224.6396f, 30.5f };
					*uParam3 = 134.1996f;
					break;
				case 11:
					*uParam2 = { -265.8493f, 6198.71f, 30.3681f };
					*uParam3 = 44.3995f;
					break;
				case 12:
					*uParam2 = { -260.3218f, 6193.1196f, 30.3511f };
					*uParam3 = 44.3995f;
					break;
				case 13:
					*uParam2 = { -254.5724f, 6187.238f, 30.3386f };
					*uParam3 = 44.3995f;
					break;
				case 14:
					*uParam2 = { -249.0055f, 6181.376f, 30.3315f };
					*uParam3 = 44.3995f;
					break;
				case 15:
					*uParam2 = { -239.4141f, 6171.5635f, 30.3706f };
					*uParam3 = 44.3995f;
					break;
				case 16:
					*uParam2 = { -233.7582f, 6165.907f, 30.3178f };
					*uParam3 = 44.3995f;
					break;
				case 17:
					*uParam2 = { -278.6558f, 6211.626f, 30.3907f };
					*uParam3 = 44.3995f;
					break;
				case 18:
					*uParam2 = { -284.0484f, 6217.076f, 30.3912f };
					*uParam3 = 44.3995f;
					break;
				case 19:
					*uParam2 = { -281.3423f, 6198.199f, 30.2895f };
					*uParam3 = 224.5992f;
					break;
				case 20:
					*uParam2 = { -286.5002f, 6203.6963f, 30.3526f };
					*uParam3 = 224.5992f;
					break;
				case 21:
					*uParam2 = { -292.1113f, 6209.2373f, 30.3446f };
					*uParam3 = 224.5992f;
					break;
				case 22:
					*uParam2 = { -272.9692f, 6193.3867f, 30.3007f };
					*uParam3 = 223.9992f;
					break;
				case 23:
					*uParam2 = { -267.3003f, 6187.796f, 30.3f };
					*uParam3 = 223.9992f;
					break;
				case 24:
					*uParam2 = { -256.9435f, 6177.0674f, 30.2773f };
					*uParam3 = 223.9992f;
					break;
				case 25:
					*uParam2 = { -251.3147f, 6171.3716f, 30.3181f };
					*uParam3 = 223.9992f;
					break;
				case 26:
					*uParam2 = { -245.3688f, 6165.553f, 30.4368f };
					*uParam3 = 223.9992f;
					break;
				case 27:
					*uParam2 = { -290.0738f, 6223.178f, 30.3937f };
					*uParam3 = 43.3992f;
					break;
				case 28:
					*uParam2 = { -258.0834f, 6224.707f, 30.4892f };
					*uParam3 = 134.399f;
					break;
				case 29:
					*uParam2 = { -251.4225f, 6231.095f, 30.4903f };
					*uParam3 = 134.399f;
					break;
				default:
					return 0;
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1702.1973f, 4757.08f, 40.9435f };
					*uParam3 = 90.2f;
					break;
				case 1:
					*uParam2 = { 1692.3119f, 4757.728f, 40.9435f };
					*uParam3 = 88.8f;
					break;
				case 2:
					*uParam2 = { 1690.4354f, 4762.429f, 40.9215f };
					*uParam3 = 88.8f;
					break;
				case 3:
					*uParam2 = { 1690.2657f, 4766.277f, 40.9215f };
					*uParam3 = 88.8f;
					break;
				case 4:
					*uParam2 = { 1690.437f, 4770.252f, 40.921f };
					*uParam3 = 88.7999f;
					break;
				case 5:
					*uParam2 = { 1690.3195f, 4774.2847f, 40.9215f };
					*uParam3 = 88.7999f;
					break;
				case 6:
					*uParam2 = { 1690.4467f, 4778.276f, 40.9215f };
					*uParam3 = 88.7999f;
					break;
				case 7:
					*uParam2 = { 1699.696f, 4796.8325f, 40.8764f };
					*uParam3 = 88.7999f;
					break;
				case 8:
					*uParam2 = { 1708.1959f, 4798.3496f, 40.8493f };
					*uParam3 = 88.7999f;
					break;
				case 9:
					*uParam2 = { 1716.4602f, 4798.3867f, 40.8234f };
					*uParam3 = 88.7999f;
					break;
				case 10:
					*uParam2 = { 1690.7396f, 4806.889f, 40.8076f };
					*uParam3 = 178.9995f;
					break;
				case 11:
					*uParam2 = { 1694.8484f, 4806.8057f, 40.8521f };
					*uParam3 = 178.9995f;
					break;
				case 12:
					*uParam2 = { 1698.8262f, 4806.8193f, 40.8376f };
					*uParam3 = 178.9995f;
					break;
				case 13:
					*uParam2 = { 1703.1881f, 4806.55f, 40.8267f };
					*uParam3 = 178.9995f;
					break;
				case 14:
					*uParam2 = { 1707.474f, 4806.3794f, 40.818f };
					*uParam3 = 178.9995f;
					break;
				case 15:
					*uParam2 = { 1711.983f, 4806.3022f, 40.8003f };
					*uParam3 = 178.9995f;
					break;
				case 16:
					*uParam2 = { 1716.364f, 4806.2285f, 40.7696f };
					*uParam3 = 178.9995f;
					break;
				case 17:
					*uParam2 = { 1686.6223f, 4799.362f, 40.8922f };
					*uParam3 = 178.9995f;
					break;
				case 18:
					*uParam2 = { 1670.2235f, 4776.5044f, 40.9566f };
					*uParam3 = 184.3996f;
					break;
				case 19:
					*uParam2 = { 1669.5865f, 4784.928f, 40.9351f };
					*uParam3 = 184.3996f;
					break;
				case 20:
					*uParam2 = { 1672.044f, 4763.81f, 40.9509f };
					*uParam3 = 192.9997f;
					break;
				case 21:
					*uParam2 = { 1674.0391f, 4755.6978f, 40.9414f };
					*uParam3 = 198.9998f;
					break;
				case 22:
					*uParam2 = { 1676.9014f, 4747.547f, 40.9668f };
					*uParam3 = 198.9998f;
					break;
				case 23:
					*uParam2 = { 1668.747f, 4796.0923f, 40.9155f };
					*uParam3 = 182.6001f;
					break;
				case 24:
					*uParam2 = { 1668.2135f, 4805.669f, 40.9418f };
					*uParam3 = 182.6001f;
					break;
				case 25:
					*uParam2 = { 1667.9766f, 4814.4434f, 40.9923f };
					*uParam3 = 182.6001f;
					break;
				case 26:
					*uParam2 = { 1667.397f, 4823.437f, 41.0039f };
					*uParam3 = 182.6001f;
					break;
				case 27:
					*uParam2 = { 1680.1855f, 4795.7954f, 40.9876f };
					*uParam3 = 2.9999f;
					break;
				case 28:
					*uParam2 = { 1679.5941f, 4804.2095f, 40.9935f };
					*uParam3 = 2.9999f;
					break;
				case 29:
					*uParam2 = { 1679.0059f, 4813.5825f, 41.0039f };
					*uParam3 = 2.9999f;
					break;
				default:
					return 0;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -110.4489f, -1765.9297f, 28.7325f };
					*uParam3 = 231.3998f;
					break;
				case 1:
					*uParam2 = { -89.7955f, -1782.5729f, 27.7071f };
					*uParam3 = 230.7998f;
					break;
				case 2:
					*uParam2 = { -83.5185f, -1787.7004f, 27.3854f };
					*uParam3 = 230.7998f;
					break;
				case 3:
					*uParam2 = { -77.1917f, -1792.8613f, 27.0624f };
					*uParam3 = 230.7998f;
					break;
				case 4:
					*uParam2 = { -122.3197f, -1762.5067f, 28.7445f };
					*uParam3 = 268.1997f;
					break;
				case 5:
					*uParam2 = { -131.6911f, -1763.8687f, 28.7406f };
					*uParam3 = 292.1995f;
					break;
				case 6:
					*uParam2 = { -139.5986f, -1767.8801f, 28.7726f };
					*uParam3 = 304.1992f;
					break;
				case 7:
					*uParam2 = { -146.6312f, -1772.8712f, 28.8022f };
					*uParam3 = 313.1991f;
					break;
				case 8:
					*uParam2 = { -152.7109f, -1778.5717f, 28.6009f };
					*uParam3 = 313.1991f;
					break;
				case 9:
					*uParam2 = { -159.1879f, -1784.2058f, 28.6667f };
					*uParam3 = 309.9989f;
					break;
				case 10:
					*uParam2 = { -166.1156f, -1789.3536f, 28.7508f };
					*uParam3 = 306.9988f;
					break;
				case 11:
					*uParam2 = { -96.6108f, -1765.3512f, 28.4872f };
					*uParam3 = 48.9986f;
					break;
				case 12:
					*uParam2 = { -90.4396f, -1770.6748f, 28.1066f };
					*uParam3 = 48.9986f;
					break;
				case 13:
					*uParam2 = { -84.3582f, -1775.7971f, 27.7278f };
					*uParam3 = 48.9986f;
					break;
				case 14:
					*uParam2 = { -78.072f, -1781.1416f, 27.398f };
					*uParam3 = 48.9986f;
					break;
				case 15:
					*uParam2 = { -71.6792f, -1786.6155f, 27.0283f };
					*uParam3 = 48.9986f;
					break;
				case 16:
					*uParam2 = { -65.4547f, -1791.7174f, 26.7344f };
					*uParam3 = 48.9986f;
					break;
				case 17:
					*uParam2 = { -59.0784f, -1797.0457f, 26.3999f };
					*uParam3 = 48.9986f;
					break;
				case 18:
					*uParam2 = { -52.636f, -1802.4165f, 26.0584f };
					*uParam3 = 48.9986f;
					break;
				case 19:
					*uParam2 = { -46.7053f, -1807.7549f, 25.7511f };
					*uParam3 = 48.9986f;
					break;
				case 20:
					*uParam2 = { -70.8185f, -1798.1768f, 26.7295f };
					*uParam3 = 229.7984f;
					break;
				case 21:
					*uParam2 = { -64.4738f, -1803.3257f, 26.4087f };
					*uParam3 = 229.7984f;
					break;
				case 22:
					*uParam2 = { -58.3468f, -1808.6398f, 26.0731f };
					*uParam3 = 229.7984f;
					break;
				case 23:
					*uParam2 = { -51.9562f, -1814.062f, 25.7328f };
					*uParam3 = 229.7984f;
					break;
				case 24:
					*uParam2 = { -173.6185f, -1793.8274f, 28.7666f };
					*uParam3 = 302.1982f;
					break;
				case 25:
					*uParam2 = { -180.6448f, -1798.2623f, 28.7799f };
					*uParam3 = 302.1982f;
					break;
				case 26:
					*uParam2 = { -188.3259f, -1802.7966f, 28.789f };
					*uParam3 = 301.5982f;
					break;
				case 27:
					*uParam2 = { -195.5584f, -1807.2383f, 28.8001f };
					*uParam3 = 301.5982f;
					break;
				case 28:
					*uParam2 = { -90.905f, -1743.4176f, 28.3558f };
					*uParam3 = 293.1996f;
					break;
				case 29:
					*uParam2 = { -82.9063f, -1740.2799f, 28.1818f };
					*uParam3 = 291.9995f;
					break;
				default:
					return 0;
			}
			break;
		case 131:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -607.5692f, 272.1053f, 80.8044f };
					*uParam3 = 83.9999f;
					break;
				case 1:
					*uParam2 = { -599.2756f, 271.2213f, 80.9949f };
					*uParam3 = 83.9999f;
					break;
				case 2:
					*uParam2 = { -591.1301f, 270.2731f, 81.2118f };
					*uParam3 = 83.9999f;
					break;
				case 3:
					*uParam2 = { -582.926f, 269.355f, 81.4601f };
					*uParam3 = 83.9999f;
					break;
				case 4:
					*uParam2 = { -574.7137f, 268.5576f, 81.7356f };
					*uParam3 = 83.9999f;
					break;
				case 5:
					*uParam2 = { -608.596f, 252.6856f, 80.79f };
					*uParam3 = 263.3996f;
					break;
				case 6:
					*uParam2 = { -600.6058f, 252.0582f, 80.9918f };
					*uParam3 = 263.3996f;
					break;
				case 7:
					*uParam2 = { -592.0613f, 251.1527f, 81.2249f };
					*uParam3 = 263.3996f;
					break;
				case 8:
					*uParam2 = { -584.215f, 250.219f, 81.462f };
					*uParam3 = 263.3996f;
					break;
				case 9:
					*uParam2 = { -576.1588f, 249.1438f, 81.7298f };
					*uParam3 = 263.3996f;
					break;
				case 10:
					*uParam2 = { -617.6698f, 253.7521f, 80.6471f };
					*uParam3 = 263.3996f;
					break;
				case 11:
					*uParam2 = { -626.1518f, 254.6767f, 80.5493f };
					*uParam3 = 263.3996f;
					break;
				case 12:
					*uParam2 = { -634.6567f, 255.6258f, 80.4239f };
					*uParam3 = 263.3996f;
					break;
				case 13:
					*uParam2 = { -566.8086f, 267.9262f, 81.9157f };
					*uParam3 = 85.5995f;
					break;
				case 14:
					*uParam2 = { -558.6803f, 267.2133f, 81.9158f };
					*uParam3 = 85.5995f;
					break;
				case 15:
					*uParam2 = { -629.1894f, 278.5395f, 80.4048f };
					*uParam3 = 75.1994f;
					break;
				case 16:
					*uParam2 = { -637.0896f, 279.8163f, 80.3181f };
					*uParam3 = 84.1993f;
					break;
				case 17:
					*uParam2 = { -645.0776f, 280.3085f, 80.2333f };
					*uParam3 = 85.3993f;
					break;
				case 18:
					*uParam2 = { -654.7103f, 283.3653f, 80.2253f };
					*uParam3 = 58.7992f;
					break;
				case 19:
					*uParam2 = { -661.8472f, 287.6438f, 80.3395f };
					*uParam3 = 60.7992f;
					break;
				case 20:
					*uParam2 = { -669.7346f, 290.2578f, 80.6404f };
					*uParam3 = 71.9991f;
					break;
				case 21:
					*uParam2 = { -677.8343f, 291.7336f, 80.975f };
					*uParam3 = 82.999f;
					break;
				case 22:
					*uParam2 = { -685.7792f, 292.4209f, 81.4088f };
					*uParam3 = 82.999f;
					break;
				case 23:
					*uParam2 = { -693.678f, 293.1662f, 81.8451f };
					*uParam3 = 82.999f;
					break;
				case 24:
					*uParam2 = { -566.7025f, 247.1422f, 81.9103f };
					*uParam3 = 249.1988f;
					break;
				case 25:
					*uParam2 = { -559.0399f, 243.5592f, 81.906f };
					*uParam3 = 235.9987f;
					break;
				case 26:
					*uParam2 = { -548.2921f, 269.1266f, 81.8675f };
					*uParam3 = 123.7987f;
					break;
				case 27:
					*uParam2 = { -542.962f, 275.1614f, 81.8732f };
					*uParam3 = 158.7984f;
					break;
				case 28:
					*uParam2 = { -541.4852f, 282.8287f, 81.9117f };
					*uParam3 = 173.9982f;
					break;
				case 29:
					*uParam2 = { -540.627f, 290.9766f, 81.9084f };
					*uParam3 = 173.9982f;
					break;
				default:
					return 0;
			}
			break;
		case 132:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1296.3137f, -280.4846f, 37.8717f };
					*uParam3 = 117.5988f;
					break;
				case 1:
					*uParam2 = { -1303.9059f, -284.3518f, 38.026f };
					*uParam3 = 117.5988f;
					break;
				case 2:
					*uParam2 = { -1311.4249f, -288.1701f, 38.1763f };
					*uParam3 = 117.5988f;
					break;
				case 3:
					*uParam2 = { -1281.5615f, -276.7003f, 37.4227f };
					*uParam3 = 207.5987f;
					break;
				case 4:
					*uParam2 = { -1277.7695f, -283.9301f, 37.0144f };
					*uParam3 = 207.5987f;
					break;
				case 5:
					*uParam2 = { -1273.8785f, -291.4245f, 36.591f };
					*uParam3 = 207.5987f;
					break;
				case 6:
					*uParam2 = { -1269.9781f, -298.942f, 36.1723f };
					*uParam3 = 207.5987f;
					break;
				case 7:
					*uParam2 = { -1266.2936f, -306.1437f, 36.0236f };
					*uParam3 = 207.5987f;
					break;
				case 8:
					*uParam2 = { -1326.3171f, -287.3057f, 38.7536f };
					*uParam3 = 29.7988f;
					break;
				case 9:
					*uParam2 = { -1330.6328f, -280.1898f, 39.5615f };
					*uParam3 = 29.7988f;
					break;
				case 10:
					*uParam2 = { -1318.5548f, -300.6749f, 37.5258f };
					*uParam3 = 29.7988f;
					break;
				case 11:
					*uParam2 = { -1314.3457f, -307.7754f, 36.85f };
					*uParam3 = 29.7988f;
					break;
				case 12:
					*uParam2 = { -1309.5482f, -316.0833f, 36.1096f };
					*uParam3 = 29.7988f;
					break;
				case 13:
					*uParam2 = { -1268.275f, -314.7202f, 35.8342f };
					*uParam3 = 117.1985f;
					break;
				case 14:
					*uParam2 = { -1275.5542f, -318.5551f, 35.6993f };
					*uParam3 = 117.1985f;
					break;
				case 15:
					*uParam2 = { -1282.9237f, -322.3701f, 35.6296f };
					*uParam3 = 117.1985f;
					break;
				case 16:
					*uParam2 = { -1255.3049f, -308.1782f, 36.0569f };
					*uParam3 = 117.1985f;
					break;
				case 17:
					*uParam2 = { -1248.0236f, -304.3667f, 36.2288f };
					*uParam3 = 117.1985f;
					break;
				case 18:
					*uParam2 = { -1240.8876f, -300.6572f, 36.3839f };
					*uParam3 = 117.1985f;
					break;
				case 19:
					*uParam2 = { -1233.464f, -296.9758f, 36.528f };
					*uParam3 = 117.1985f;
					break;
				case 20:
					*uParam2 = { -1290.3629f, -326.1772f, 35.5606f };
					*uParam3 = 117.1985f;
					break;
				case 21:
					*uParam2 = { -1299.1244f, -326.015f, 35.5431f };
					*uParam3 = 72.1983f;
					break;
				case 22:
					*uParam2 = { -1288.9725f, -263.0262f, 38.7848f };
					*uParam3 = 215.5983f;
					break;
				case 23:
					*uParam2 = { -1293.6522f, -256.5831f, 39.5002f };
					*uParam3 = 215.5983f;
					break;
				case 24:
					*uParam2 = { -1298.2913f, -249.9728f, 40.2326f };
					*uParam3 = 215.5983f;
					break;
				case 25:
					*uParam2 = { -1300.391f, -269.6429f, 38.9335f };
					*uParam3 = 210.3983f;
					break;
				case 26:
					*uParam2 = { -1301.6636f, -261.3142f, 39.5827f };
					*uParam3 = 210.3983f;
					break;
				case 27:
					*uParam2 = { -1305.9572f, -253.838f, 40.3995f };
					*uParam3 = 210.3983f;
					break;
				case 28:
					*uParam2 = { -1271.9799f, -272.4831f, 37.6859f };
					*uParam3 = 294.5983f;
					break;
				case 29:
					*uParam2 = { -1264.3232f, -268.9492f, 37.9549f };
					*uParam3 = 294.5983f;
					break;
				default:
					return 0;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 724.0896f, -830.781f, 23.6547f };
					*uParam3 = 178.1994f;
					break;
				case 1:
					*uParam2 = { 713.7972f, -837.1287f, 23.2802f };
					*uParam3 = 272.5992f;
					break;
				case 2:
					*uParam2 = { 728.9916f, -840.8984f, 23.7093f };
					*uParam3 = 269.9992f;
					break;
				case 3:
					*uParam2 = { 737.3323f, -841.0092f, 24.0455f };
					*uParam3 = 269.9992f;
					break;
				case 4:
					*uParam2 = { 746.1074f, -841.1715f, 24.4022f };
					*uParam3 = 269.9992f;
					break;
				case 5:
					*uParam2 = { 754.3201f, -841.1013f, 24.7404f };
					*uParam3 = 269.9992f;
					break;
				case 6:
					*uParam2 = { 766.4455f, -802.0778f, 25.2469f };
					*uParam3 = 179.7992f;
					break;
				case 7:
					*uParam2 = { 766.4344f, -810.2006f, 25.2409f };
					*uParam3 = 179.7992f;
					break;
				case 8:
					*uParam2 = { 766.4787f, -818.3661f, 25.1898f };
					*uParam3 = 179.7992f;
					break;
				case 9:
					*uParam2 = { 766.3892f, -826.2004f, 25.1701f };
					*uParam3 = 179.7992f;
					break;
				case 10:
					*uParam2 = { 766.4588f, -834.3219f, 25.0364f };
					*uParam3 = 179.7992f;
					break;
				case 11:
					*uParam2 = { 766.3101f, -848.366f, 24.6192f };
					*uParam3 = 179.7992f;
					break;
				case 12:
					*uParam2 = { 720.5275f, -813.0569f, 23.5895f };
					*uParam3 = 179.7992f;
					break;
				case 13:
					*uParam2 = { 720.6581f, -803.9616f, 23.6156f };
					*uParam3 = 179.7992f;
					break;
				case 14:
					*uParam2 = { 720.7546f, -795.1878f, 23.6585f };
					*uParam3 = 179.7992f;
					break;
				case 15:
					*uParam2 = { 763.0613f, -792.1644f, 25.2847f };
					*uParam3 = 179.7992f;
					break;
				case 16:
					*uParam2 = { 763.1049f, -784.0815f, 25.2836f };
					*uParam3 = 179.7992f;
					break;
				case 17:
					*uParam2 = { 763.1053f, -775.3024f, 25.3153f };
					*uParam3 = 179.7992f;
					break;
				case 18:
					*uParam2 = { 713.6017f, -841.9813f, 23.223f };
					*uParam3 = 271.5992f;
					break;
				case 19:
					*uParam2 = { 713.4549f, -846.8925f, 23.2516f };
					*uParam3 = 271.5992f;
					break;
				case 20:
					*uParam2 = { 725.3552f, -846.2646f, 23.531f };
					*uParam3 = 271.5992f;
					break;
				case 21:
					*uParam2 = { 735.3039f, -846.7419f, 23.8728f };
					*uParam3 = 271.5992f;
					break;
				case 22:
					*uParam2 = { 711.9955f, -831.0701f, 23.3924f };
					*uParam3 = 271.5992f;
					break;
				case 23:
					*uParam2 = { 785.7368f, -847.1367f, 24.6626f };
					*uParam3 = 359.9991f;
					break;
				case 24:
					*uParam2 = { 785.7744f, -837.8985f, 24.9709f };
					*uParam3 = 359.9991f;
					break;
				case 25:
					*uParam2 = { 785.7438f, -829.4268f, 25.0975f };
					*uParam3 = 359.9991f;
					break;
				case 26:
					*uParam2 = { 785.6484f, -803.8941f, 25.2491f };
					*uParam3 = 359.9991f;
					break;
				case 27:
					*uParam2 = { 785.6351f, -794.9322f, 25.2771f };
					*uParam3 = 359.9991f;
					break;
				case 28:
					*uParam2 = { 785.7021f, -785.6635f, 25.3047f };
					*uParam3 = 359.9991f;
					break;
				case 29:
					*uParam2 = { 785.4986f, -776.5608f, 25.3479f };
					*uParam3 = 359.9991f;
					break;
				default:
					return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

struct<4> func_866(var uParam0)//Position - 0xD5CC5
{
	struct<4> Var0;
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1008981770;
	Var0.f_3 = 1073741824;
	Var0.f_0 = 0;
	Var0.f_2 = 0.7f;
	return Var0;
}

void func_867(int iParam0, int iParam1, var uParam2)//Position - 0xD6CB8
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	Var2.f_1 = -1;
	Var2.f_0 = __LIB_0__.func_160();
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*2*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if ((Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2681762.f_199.f_1[iVar0 /*15*/].f_3 == iParam0) && (iParam1 == __LIB_0__.func_160() || iParam1 == Global_2681762.f_199.f_1[iVar0 /*15*/].f_1))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (*uParam2)[iVar1 /*2*/] == __LIB_0__.func_160()
				{
					*(uParam2[iVar1 /*2*/]) = { Global_2681762.f_199.f_1[iVar0 /*15*/].f_1 };
					if (iVar1 + 1 == *uParam2)
					{
						return;
					}
					Jump @229; //curOff = 201
				}
				else if (iVar1 + 1 == *uParam2)
				{
					return;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_868(var uParam0)//Position - 0xD6F4E
{
	uParam0->f_8 = 1;
	uParam0->f_6 = 1;
	uParam0->f_11 = 10;
	*uParam0 = 1;
	uParam0->f_9 = 1;
	uParam0->f_1 = 1;
}

void func_869(var uParam0, char* sParam1, var uParam2)//Position - 0xD76E6
{
	StringCopy(sParam1, "CAS_APT_BUZZ_T" /* GXT: PENTHOUSE BUZZER */, 16);
	(*uParam2)[0] = "CAS_APT_BUZZ_RC" /* GXT: Someone is buzzing your Penthouse. ~n~Press ~INPUT_CONTEXT~ to answer the buzzer. */;
	(*uParam2)[1] = "CAS_APT_BUZZ_R0" /* GXT: Let ~a~ into your Penthouse. */;
}

void func_870(var uParam0, char* sParam1, var uParam2)//Position - 0xD770B
{
	StringCopy(sParam1, "CAS_APT_ENT_BT" /* GXT: PENTHOUSE OPTIONS */, 16);
	(*uParam2)[0] = "ARCADE_EXIT_F0";
	(*uParam2)[1] = "CASINO_ENT_F1_H" /* GXT: Enter your Penthouse. */;
	(*uParam2)[2] = "CAS_APT_BUZZ_D0" /* GXT: Request access to Penthouse. */;
}

int func_871(int iParam0)//Position - 0xD92C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6086[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_872(int iParam0, int iParam1)//Position - 0xD92F7
{
	switch (iParam1)
	{
		case 0:
			return joaat("prop_ld_keypad_01");
			break;
		case 1:
			if (iParam0 == 129)
			{
				return joaat("prop_fnccorgm_02pole");
			}
			break;
	}
	return 0;
}

void func_873(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0xD9330
{
	switch (iParam0)
	{
		case 128:
			*uParam1 = { -245.365f, 6211.274f, 32.198f };
			*uParam2 = { 0f, 0f, -45f };
			break;
		case 129:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 1696.262f, 4783.87f, 42.243f };
					*uParam2 = { 0f, 0f, -90f };
					break;
				case 1:
					*uParam1 = { 1692.068f, 4752.388f, 40.94361f };
					*uParam2 = { 0f, 0f, 0f };
					break;
			}
			break;
		case 130:
			*uParam1 = { -114.855f, -1771.892f, 30.103f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		case 131:
			*uParam1 = { -601.51f, 280.53f, 82.273f };
			*uParam2 = { 0f, 0f, 84.3f };
			break;
		case 132:
			*uParam1 = { -1270.101f, -303.9875f, 37.24f };
			*uParam2 = { 0f, 0f, 69.5f };
			break;
		case 133:
			*uParam1 = { 758.075f, -814.5875f, 26.56f };
			*uParam2 = { 0f, 0f, 90f };
			break;
	}
}

void func_874(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0xDAC7D
{
	switch (iParam0)
	{
		case 128:
			*uParam1 = { -269.3482f, 6200.766f, 32.6705f };
			*uParam2 = { 5.1378f, 0f, -74.1411f };
			*uParam3 = 36.105f;
			*uParam4 = 0.2f;
			break;
		case 129:
			*uParam1 = { 1670.5297f, 4756.6704f, 42.5699f };
			*uParam2 = { 3.9552f, 0f, -58.0985f };
			*uParam3 = 34.5627f;
			*uParam4 = 0.2f;
			break;
		case 130:
			*uParam1 = { -129.9988f, -1742.1764f, 31.9587f };
			*uParam2 = { 1.3876f, 0f, -164.0752f };
			*uParam3 = 33.6369f;
			*uParam4 = 0.2f;
			break;
		case 131:
			*uParam1 = { -598.3345f, 272.2048f, 82.4993f };
			*uParam2 = { 13.1052f, 0f, 30.696f };
			*uParam3 = 59.5008f;
			*uParam4 = 0.2f;
			break;
		case 132:
			*uParam1 = { -1264.4387f, -329.3491f, 36.621f };
			*uParam2 = { 12.9383f, 0f, 26.1853f };
			*uParam3 = 34.8935f;
			*uParam4 = 0.2f;
			break;
		case 133:
			*uParam1 = { 787.8809f, -798.9783f, 27.4958f };
			*uParam2 = { 5.564f, 0f, 116.4444f };
			*uParam3 = 33.9314f;
			*uParam4 = 0.2f;
			break;
	}
}

void func_875(int iParam0, var uParam1, var uParam2)//Position - 0xDB29A
{
	switch (iParam0)
	{
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			*uParam1 = { 2661.738f, -402.823f, -57.637f };
			uParam1->f_3 = { 2741.5615f, -351.346f, -44.5974f };
			break;
	}
}

char* func_876(var uParam0, int iParam1)//Position - 0xDB379
{
	switch (iParam1)
	{
		case 0:
			return "PIM_HARCMO1" /* GXT: Invite Players to your Arcade. */;
			break;
		case 1:
			return "PIM_TARCMO1" /* GXT: Invite to Arcade */;
			break;
		case 2:
			return "PIM_TARCMAN" /* GXT: Arcade Management */;
			break;
		case 3:
			return "PIM_UARCMO1" /* GXT: INVITE TO ARCADE */;
			break;
		case 4:
			return "PIM_INVARC_P" /* GXT: Invite to Arcade has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_A_T_AR" /* GXT: Invite to Arcade has been sent to all players. */;
			break;
		case 6:
			return "CELL_ARC_PINV" /* GXT: Hey, come over to the Arcade. */;
			break;
	}
	return "";
}

int func_877(var uParam0)//Position - 0xDB403
{
	return 126;
}

char* func_878(int iParam0)//Position - 0xDB40D
{
	switch (iParam0)
	{
		case 128:
			return "MP_ARCADE_1";
			break;
		case 129:
			return "MP_ARCADE_2";
			break;
		case 130:
			return "MP_ARCADE_3";
			break;
		case 131:
			return "MP_ARCADE_4";
			break;
		case 132:
			return "MP_ARCADE_5";
			break;
		case 133:
			return "MP_ARCADE_6";
			break;
	}
	return "MP_ARCADE_UNKNOWN";
}

Vector3 func_879(int iParam0)//Position - 0xDB487
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 6);
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 10);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 5);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[0]), 28);
	MISC::SET_BIT(&(Var0[0]), 25);
	MISC::SET_BIT(&(Var0[0]), 31);
	MISC::SET_BIT(&(Var0[1]), 0);
	MISC::SET_BIT(&(Var0[1]), 5);
	MISC::SET_BIT(&(Var0[1]), 7);
	MISC::SET_BIT(&(Var0[1]), 10);
	MISC::SET_BIT(&(Var0[1]), 19);
	MISC::SET_BIT(&(Var0[1]), 22);
	return Var0;
}

void func_880(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0xDB607
{
	if (bParam6)
	{
		if (iParam0 == 1)
		{
			*uParam3 = { -2.79767f, 39.7439f, 7.46206f };
			*uParam4 = { -2.80493f, 40.8328f, 9.52456f };
			*uParam1 = 1.425f;
			*uParam2 = 90f;
		}
		else
		{
			*uParam3 = { -13.0686f, -20.8318f, 0.275181f };
			*uParam4 = { -17.005f, -20.8027f, 3.15018f };
			*uParam1 = 1.5f;
			*uParam2 = 180f;
		}
	}
	else if (iParam0 == 1)
	{
		*uParam3 = { 7.30396f, 6.40656f, 1.02129f };
		*uParam4 = { 8.51367f, 6.43805f, 3.25013f };
		*uParam1 = 1.425f;
		*uParam2 = 0f;
	}
	else
	{
		*uParam3 = { -53.2168f, 16.679438f, -6.18674f };
		*uParam4 = { -53.1877f, 20.615837f, -3.31174f };
		*uParam1 = 1.5f;
		*uParam2 = 90f;
	}
}

void func_881(var uParam0, var uParam1)//Position - 0xDB706
{
	uParam1->f_21 = "AM_MP_ARCADE";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

Vector3 func_882(bool bParam0)//Position - 0xDB79E
{
	if (bParam0)
	{
		return 2697.615f, -376.38916f, -56.461926f;
	}
	return 2730f, -380f, -50f;
}

void func_883()//Position - 0xDBDF1
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_298) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2815059.f_298, false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2815059.f_298))
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(Global_2815059.f_298, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_2815059.f_298, true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_2815059.f_298, true);
			Global_2703735.f_61.f_52 = 0;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2815059.f_298);
		}
	}
	else
	{
		Global_2703735.f_61.f_52 = 0;
	}
}

void func_884(var uParam0, var uParam1, var uParam2)//Position - 0xDC1EA
{
	*uParam0 = { 934.1485f, 3.296672f, 77.76491f };
	*uParam1 = { 938.99426f, 0.124347f, 81.13991f };
	*uParam2 = 1.4375f;
}

Vector3 func_885()//Position - 0xDC220
{
	return 940.2556f, 6.9082f, 77.7649f;
}

Vector3 func_886()//Position - 0xDC237
{
	return 932.9553f, -4.2065f, 77.7649f;
}

float func_887()//Position - 0xDC24E
{
	return 328.1944f;
}

bool func_888()//Position - 0xDC25B
{
	return BitTest(Global_2703735.f_61.f_52, 0);
}

void func_889(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xDC42A
{
	if (bParam3)
	{
		*uParam0 = { 936.4088f, 1.3674f, 85.4383f };
		*uParam1 = { -68.3827f, 0f, 147.8355f };
		*uParam2 = 50f;
	}
	else
	{
		*uParam0 = { 936.4088f, 1.3674f, 85.4383f };
		*uParam1 = { -58.3432f, 0f, 147.8355f };
		*uParam2 = 50f;
	}
}

void func_890(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xDC48E
{
	if (bParam3)
	{
		*uParam0 = { 937.2059f, -3.9669f, 78.4233f };
		*uParam1 = { 2.4913f, 0f, 84.4146f };
		*uParam2 = 49.2248f;
	}
	else
	{
		*uParam0 = { 937.5319f, -3.2264f, 78.4233f };
		*uParam1 = { 2.4913f, 0f, 67.1525f };
		*uParam2 = 49.2248f;
	}
}

int func_891(var uParam0, var uParam1)//Position - 0xDC503
{
	if (BitTest(Global_1946250.f_7, 31))
	{
		return 1;
	}
	return 0;
}

Vector3 func_892(int iParam0)//Position - 0xDCB33
{
	switch (iParam0)
	{
		case 125:
			return 957.1829f, 24.7781f, 88.5438f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_893(var uParam0)//Position - 0xDCB82
{
	return 272;
}

void func_894(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xDCFF4
{
	if (*uParam2 != 9)
	{
		return;
	}
	StringCopy(sParam1, "CASINO_CP_TITLE" /* GXT: PARKING GARAGE */, 64);
	(*uParam2)[0] = "CASINO_CP_EXIT" /* GXT: Exit Parking Garage */;
	(*uParam2)[1] = "CASINO_CP_EXIT" /* GXT: Exit Parking Garage */;
	(*uParam2)[2] = "CASINO_ENT_F0" /* GXT: Casino */;
	(*uParam2)[3] = "CASINO_ENT_F1" /* GXT: Penthouse */;
	(*uParam2)[4] = "CASINO_ENT_F2" /* GXT: Penthouse Garage */;
	(*uParam2)[5] = "CASINO_ENT_F4" /* GXT: Roof Terrace */;
	(*uParam2)[6] = "CASINO_ENT_F5" /* GXT: Roof */;
	(*uParam2)[7] = "CASINO_ENT_F6" /* GXT: The Music Locker */;
	*uParam3 = 8;
}

int func_895(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDD104
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 935.7125f, 0.771f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 1:
			*uParam2 = { 934.273f, 0.6677f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 2:
			*uParam2 = { 936.958f, -0.0769f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 3:
			*uParam2 = { 933.6446f, 1.8578f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 4:
			*uParam2 = { 937.3975f, -1.4726f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 5:
			*uParam2 = { 933.1326f, -2.0737f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 6:
			*uParam2 = { 934.7734f, -1.283f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 7:
			*uParam2 = { 934.5783f, -2.6454f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 8:
			*uParam2 = { 932.5691f, -0.1218f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 9:
			*uParam2 = { 935.9344f, -2.5826f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 10:
			*uParam2 = { 932.7231f, -3.9223f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 11:
			*uParam2 = { 931.9151f, -2.9457f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 12:
			*uParam2 = { 934.1415f, -4.1674f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 13:
			*uParam2 = { 931.9166f, -1.0247f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 14:
			*uParam2 = { 935.6564f, -4.1572f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 15:
			*uParam2 = { 931.8552f, -5.5122f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 16:
			*uParam2 = { 930.3812f, -4.4871f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 17:
			*uParam2 = { 933.3884f, -5.9307f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 18:
			*uParam2 = { 930.6068f, -2.5251f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 19:
			*uParam2 = { 934.9482f, -6.1534f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 20:
			*uParam2 = { 932.0659f, -7.2615f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 21:
			*uParam2 = { 930.1447f, -6.2657f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 22:
			*uParam2 = { 934.0477f, -8.676f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 23:
			*uParam2 = { 928.1719f, -4.3595f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 24:
			*uParam2 = { 936.4449f, -9.2537f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 25:
			*uParam2 = { 927.2251f, -7.2683f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 26:
			*uParam2 = { 925.9214f, -5.4871f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 27:
			*uParam2 = { 929.058f, -8.5637f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 28:
			*uParam2 = { 936.0305f, -11.4261f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 29:
			*uParam2 = { 931.5402f, -9.947f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 30:
			*uParam2 = { 928.1652f, -10.2493f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 31:
			*uParam2 = { 925.4908f, -8.5805f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 32:
			*uParam2 = { 930.8953f, -11.9554f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 33:
			*uParam2 = { 933.6464f, -11.0328f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 34:
			*uParam2 = { 933.4933f, -13.3052f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 35:
			*uParam2 = { 927.1553f, -13.0672f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 36:
			*uParam2 = { 926.1167f, -11.5367f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 37:
			*uParam2 = { 928.8705f, -14.8647f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 38:
			*uParam2 = { 923.7054f, -11.1116f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 39:
			*uParam2 = { 931.1321f, -16.1201f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 40:
			*uParam2 = { 921.8865f, -10.1871f, 77.7644f };
			*uParam3 = 61.122f;
			return 1;
			break;
		case 41:
			*uParam2 = { 923.049f, -8.6886f, 77.7644f };
			*uParam3 = 48.863f;
			return 1;
			break;
		case 42:
			*uParam2 = { 934.8026f, -16.9447f, 77.7644f };
			*uParam3 = 245.8883f;
			return 1;
			break;
		case 43:
			*uParam2 = { 924.6136f, -14.5658f, 77.7644f };
			*uParam3 = 151.9227f;
			return 1;
			break;
		case 44:
			*uParam2 = { 933.7977f, -18.5146f, 77.7644f };
			*uParam3 = 246.2589f;
			return 1;
			break;
		case 45:
			*uParam2 = { 924.7784f, -16.9379f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 46:
			*uParam2 = { 921.8671f, -13.938f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		case 47:
			*uParam2 = { 928.1649f, -18.8884f, 77.7644f };
			*uParam3 = 149.4f;
			return 1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_896(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDD898
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 924.052f, -4.005f, 77.765f };
			*uParam3 = 57.2f;
			break;
		case 1:
			*uParam2 = { 915.259f, 1.509f, 77.765f };
			*uParam3 = 57.2f;
			break;
		case 2:
			*uParam2 = { 906.685f, 7.03f, 77.765f };
			*uParam3 = 57.2f;
			break;
		case 3:
			*uParam2 = { 889.058f, 17.804f, 77.765f };
			*uParam3 = 57.2f;
			break;
		case 4:
			*uParam2 = { 880.825f, 22.945f, 77.675f };
			*uParam3 = 57.2f;
			break;
		case 5:
			*uParam2 = { 921.13f, -18.489f, 77.764f };
			*uParam3 = 148.8f;
			break;
		case 6:
			*uParam2 = { 910.593f, -35.637f, 77.764f };
			*uParam3 = 148.8f;
			break;
		case 7:
			*uParam2 = { 905.636f, -43.594f, 77.764f };
			*uParam3 = 148.8f;
			break;
		case 8:
			*uParam2 = { 899.957f, -52.24f, 77.764f };
			*uParam3 = 148.8f;
			break;
		case 9:
			*uParam2 = { 894.429f, -61.114f, 77.764f };
			*uParam3 = 148.8f;
			break;
		case 10:
			*uParam2 = { 925.339f, -21.281f, 77.764f };
			*uParam3 = 148.399f;
			break;
		case 11:
			*uParam2 = { 914.57f, -37.98f, 77.764f };
			*uParam3 = 148.399f;
			break;
		case 12:
			*uParam2 = { 909.303f, -46.14f, 77.764f };
			*uParam3 = 148.399f;
			break;
		case 13:
			*uParam2 = { 903.683f, -54.935f, 77.764f };
			*uParam3 = 148.399f;
			break;
		case 14:
			*uParam2 = { 898.272f, -63.613f, 77.764f };
			*uParam3 = 148.399f;
			break;
		case 15:
			*uParam2 = { 888.951f, -70.134f, 77.764f };
			*uParam3 = 148.399f;
			break;
		case 16:
			*uParam2 = { 892.872f, -72.496f, 77.764f };
			*uParam3 = 148.399f;
			break;
		case 17:
			*uParam2 = { 938.143f, -13.115f, 77.764f };
			*uParam3 = 57.999f;
			break;
		case 18:
			*uParam2 = { 935.213f, -17.698f, 77.764f };
			*uParam3 = 57.999f;
			break;
		case 19:
			*uParam2 = { 946.786f, -18.372f, 77.764f };
			*uParam3 = 57.999f;
			break;
		case 20:
			*uParam2 = { 943.945f, -23.017f, 77.764f };
			*uParam3 = 57.999f;
			break;
		case 21:
			*uParam2 = { 915.869f, -26.854f, 77.764f };
			*uParam3 = 148.198f;
			break;
		case 22:
			*uParam2 = { 919.862f, -29.385f, 77.764f };
			*uParam3 = 148.198f;
			break;
		case 23:
			*uParam2 = { 897.965f, 12.355f, 77.765f };
			*uParam3 = 57.998f;
			break;
		case 24:
			*uParam2 = { 920.9344f, -8.934f, 77.7649f };
			*uParam3 = 57.2f;
			break;
		case 25:
			*uParam2 = { 912.012f, -3.5562f, 77.7649f };
			*uParam3 = 57.2f;
			break;
		case 26:
			*uParam2 = { 903.32f, 1.7794f, 77.7649f };
			*uParam3 = 57.2f;
			break;
		case 27:
			*uParam2 = { 894.5089f, 7.3714f, 77.7649f };
			*uParam3 = 57.2f;
			break;
		case 28:
			*uParam2 = { 885.74f, 12.7861f, 77.7655f };
			*uParam3 = 57.2f;
			break;
		case 29:
			*uParam2 = { 876.5641f, 18.9969f, 77.7887f };
			*uParam3 = 57.2f;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_897(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0xDF23A
{
	switch (iParam0)
	{
		case 125:
			*uParam1 = { 849.6088f, 63.8541f, 138.2693f };
			*uParam2 = { -28.9245f, 0f, -107.2211f };
			*uParam3 = 50f;
			*uParam4 = 0.2f;
			break;
	}
}

void func_898(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0xDF3FA
{
	switch (iParam0)
	{
		case 125:
			switch (iParam6)
			{
				case 2:
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = { 0f, 0f, 0f };
					*uParam4 = 0f;
					*uParam1 = { 926.4164f, 45.5401f, 59.9018f };
					*uParam5 = 0f;
					break;
			}
			break;
	}
}

void func_899(int iParam0, var uParam1, var uParam2)//Position - 0xDF463
{
	switch (iParam0)
	{
		case 125:
			*uParam1 = { 1333.9764f, 176.982f, -51.1537f };
			uParam1->f_3 = { 1427.7905f, 260.917f, -43.4137f };
			break;
	}
}

char* func_900(var uParam0)//Position - 0xDF4A3
{
	return "MP_CASINO_VAL_GARAGE_1";
}

Vector3 func_901(int iParam0)//Position - 0xDF4B0
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 9);
	MISC::SET_BIT(&(Var0[0]), 15);
	MISC::SET_BIT(&(Var0[0]), 17);
	MISC::SET_BIT(&(Var0[0]), 19);
	MISC::SET_BIT(&(Var0[0]), 27);
	MISC::SET_BIT(&(Var0[0]), 29);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[1]), 2);
	return Var0;
}

void func_902(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xDF5A8
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 1.5f;
			*uParam2 = 180f;
			*uParam3 = { 1.23999f, -19.651459f, 0.356388f };
			*uParam4 = { -0.979736f, -19.607285f, 2.018631f };
			break;
		case 2:
			*uParam1 = 1.6f;
			*uParam2 = 0f;
			*uParam3 = { -0.981079f, 57.581665f, 0.080719f };
			*uParam4 = { 1.246948f, 57.56546f, 2.178364f };
			break;
		case 3:
			*uParam1 = 1.8125f;
			*uParam2 = 270f;
			*uParam3 = { 31.017944f, -13.619324f, 0.413025f };
			*uParam4 = { 30.957275f, -19.202698f, 2.785095f };
			break;
		case 4:
			*uParam1 = 1.8125f;
			*uParam2 = 90f;
			*uParam3 = { -45.8479f, -12.329773f, 0.883591f };
			*uParam4 = { -45.868042f, -6.373169f, 4.33992f };
			break;
	}
}

void func_903(var uParam0, var uParam1)//Position - 0xDF6AF
{
	uParam1->f_21 = "AM_MP_CASINO_VALET_GARAGE";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

Vector3 func_904()//Position - 0xDF706
{
	return 1380f, 200f, -50f;
}

void func_905(var uParam0)//Position - 0xDFD68
{
	if (Global_1946244 == 31)
	{
		Global_1966099 = 1;
		Global_1966101 = 1;
	}
}

void func_906()//Position - 0xDFE3B
{
	__LIB_1__.func_123(5);
}

int func_907(int iParam0, var uParam1)//Position - 0xDFEB6
{
	return __LIB_0__.func_834(iParam0);
}

void func_908(int iParam0, var uParam1)//Position - 0xDFEE9
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		PED::DELETE_PED(&(uParam1->f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_50))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_50));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_58))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_58));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_176[0]));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_3))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_3);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam1->f_109));
	}
	uParam1->f_188 = 0;
}

bool func_909(int iParam0)//Position - 0xDFF6F
{
	return Global_1946250.f_4716 == iParam0;
}

int func_910(var uParam0)//Position - 0xE0128
{
	int iVar0;
	iVar0 = 0;
	if (BitTest(uParam0->f_188, 3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_911(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xE04F9
{
	*uParam0 = OBJECT::CREATE_OBJECT(iParam3, Param1, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, Param1, false, false, false);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, 0f, 0f, fParam2, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	}
	return 1;
}

void func_912(struct<3> Param0, int iParam1)//Position - 0xE0550
{
	ENTITY::CREATE_MODEL_HIDE(Param0, 0.1f, iParam1, false);
}

Vector3 func_913(int iParam0)//Position - 0xE0568
{
	switch (iParam0)
	{
		case -395939522:
			return 927.7387f, 49.6035f, 81.5419f;
			break;
		case -401740561:
			return 926.4083f, 47.4744f, 81.5419f;
			break;
		case -1805228339:
			return 926.2393f, 47.2141f, 81.5419f;
			break;
		case -2142560346:
			return 924.9089f, 45.085f, 81.5419f;
			break;
		case -89171747:
			return 924.75f, 44.8309f, 81.5419f;
			break;
		case -212930257:
			return 923.4196f, 42.7018f, 81.5419f;
			break;
		case -1952323495:
			return 987.0839f, 75.1889f, 111.3965f;
			break;
		case 389984559:
			return 952.6142f, 4.0863f, 111.3965f;
			break;
		case 599745705:
			return 938.7839f, -0.0078f, 111.3965f;
			break;
		case -1871024115:
			return 962.7585f, 20.2098f, 111.3826f;
			break;
		case -105492995:
			return 977.8685f, 44.4055f, 111.3826f;
			break;
		case 943188950:
			return 984.1353f, 54.5306f, 111.3965f;
			break;
		case -810585513:
			return 987.0408f, 59.1805f, 111.3965f;
			break;
		case -84048984:
			return 991.9919f, 67.1038f, 111.3965f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_914(int iParam0)//Position - 0xE06F4
{
	switch (iParam0)
	{
		case -395939522:
		case -1805228339:
		case -89171747:
			return joaat("vw_prop_vw_casino_door_02a");
			break;
		case -212930257:
		case -2142560346:
		case -401740561:
			return joaat("vw_prop_vw_casino_door_r_02a");
			break;
		case 389984559:
		case -1952323495:
		case 599745705:
		case 943188950:
		case -810585513:
		case -84048984:
			return joaat("vw_prop_vw_roof_door_02a");
			break;
		case -1871024115:
		case -105492995:
			return joaat("vw_prop_vw_roof_door_01a");
			break;
	}
	return 0;
}

int func_915()//Position - 0xE0784
{
	return joaat("lr_prop_carkey_fob");
}

void func_916(var uParam0)//Position - 0xE080F
{
	if (__LIB_0__.func_121(*uParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 1, 4, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 2, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 10, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 11, 1, 1, 0);
	}
}

int func_917()//Position - 0xE0899
{
	return joaat("S_M_Y_Casino_01");
}

char* func_918(int iParam0)//Position - 0xE0A2B
{
	switch (iParam0)
	{
		case 0:
			return "anim@amb@casino@valet@exit@var01@";
			break;
		case 1:
			return "anim@amb@casino@valet@exit@var02@";
			break;
	}
	return "**UNKNOWN**";
}

int func_919(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xE0B6A
{
	switch (iParam0)
	{
		case 124:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 972.2429f, 50.9566f, 120.3824f };
					*uParam3 = 0.5f;
					*uParam4 = 600f;
					*uParam5 = joaat("prop_ld_keypad_01");
					*uParam6 = 1;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_920(int iParam0)//Position - 0xE152D
{
	switch (iParam0)
	{
		case 124:
			return 0f, 0f, 0f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_921(int iParam0)//Position - 0xE1568
{
	switch (iParam0)
	{
		case 124:
			return 938.0455f, 34.6973f, 89.9426f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_922(int iParam0)//Position - 0xE15AC
{
	switch (iParam0)
	{
		case 124:
			return 935.9587f, 1.2996f, 79.004f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_923(int iParam0)//Position - 0xE1681
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 30);
	}
	return 0;
}

void func_924()//Position - 0xE1F23
{
	if (!BitTest(Global_1946250.f_4, 1))
	{
		MISC::SET_BIT(&(Global_1946250.f_4), 1);
	}
}

void func_925(char* sParam0, var uParam1, var uParam2, int iParam3)//Position - 0xE1F78
{
	StringCopy(sParam0, "CSNAPT_T1" /* GXT: PENTHOUSE GARAGE */, 64);
	(*uParam1)[0] = "CASINO_APT_EXT_H" /* GXT: Exit Penthouse Garage */;
	(*uParam1)[1] = "CASINO_APT_EXT_A_H" /* GXT: All Exit Penthouse Garage */;
	(*uParam1)[3] = "CASINO_APT_EXIT_F0" /* GXT: Penthouse */;
	(*uParam1)[2] = "CASINO_APT_EXIT_C" /* GXT: Casino */;
	(*uParam1)[5] = "CASINO_ENT_F3" /* GXT: Parking Garage */;
	(*uParam1)[6] = "CASINO_ENT_F4" /* GXT: Roof Terrace */;
	(*uParam1)[4] = "CASINO_APT_EXIT_F3" /* GXT: All Exit to Penthouse */;
	(*uParam1)[7] = "CASINO_ENT_F5" /* GXT: Roof */;
	(*uParam1)[8] = "CASINO_ENT_F6" /* GXT: The Music Locker */;
	*uParam2 = 9;
}

void func_926(char* sParam0, var uParam1, var uParam2, int iParam3)//Position - 0xE1FE4
{
	StringCopy(sParam0, "CSNAPT_T0" /* GXT: PENTHOUSE */, 64);
	(*uParam1)[1] = "CASINO_APT_EXIT_A" /* GXT: All Exit Penthouse */;
	if (iParam3 != 2)
	{
		(*uParam1)[0] = "CASINO_APT_EXIT" /* GXT: Exit Penthouse */;
		(*uParam1)[3] = "CASINO_APT_EXIT_F1" /* GXT: Penthouse Garage */;
		(*uParam1)[2] = "CASINO_APT_EXIT_C" /* GXT: Casino */;
		(*uParam1)[5] = "CASINO_ENT_F3" /* GXT: Parking Garage */;
		(*uParam1)[6] = "CASINO_ENT_F4" /* GXT: Roof Terrace */;
		(*uParam1)[4] = "CASINO_APT_EXIT_F2" /* GXT: All Exit to Penthouse Garage */;
		(*uParam1)[7] = "CASINO_ENT_F5" /* GXT: Roof */;
		(*uParam1)[8] = "CASINO_ENT_F6" /* GXT: The Music Locker */;
		*uParam2 = 9;
	}
	else
	{
		(*uParam1)[0] = "CASINO_ENT_F4" /* GXT: Roof Terrace */;
		*uParam2 = 2;
	}
}

Vector3 func_927(var uParam0)//Position - 0xE2073
{
	return 1269.321f, 226.544f, -49.5838f;
}

int func_928(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xE2B0C
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = { 924.0214f, 45.981f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 1:
			*uParam2 = { 925.0367f, 47.5067f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 2:
			*uParam2 = { 922.7727f, 44.3121f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 3:
			*uParam2 = { 925.6932f, 49.6108f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 4:
			*uParam2 = { 921.4413f, 43.2125f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 5:
			*uParam2 = { 926.1833f, 51.5652f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 6:
			*uParam2 = { 922.1965f, 48.3703f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 7:
			*uParam2 = { 923.5712f, 49.6449f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 8:
			*uParam2 = { 921.5172f, 46.3417f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 9:
			*uParam2 = { 924.003f, 51.6185f, 79.8963f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 10:
			*uParam2 = { 920.2224f, 44.8788f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 11:
			*uParam2 = { 925.1751f, 52.5721f, 80.0959f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 12:
			*uParam2 = { 919.7559f, 49.629f, 79.8961f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 13:
			*uParam2 = { 921.3201f, 51.0796f, 79.8963f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 14:
			*uParam2 = { 919.9817f, 47.7266f, 79.8963f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 15:
			*uParam2 = { 922.5366f, 53.5411f, 79.8963f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 16:
			*uParam2 = { 917.2034f, 47.0593f, 79.8961f };
			*uParam3 = 57.6f;
			return 1;
			break;
		case 17:
			*uParam2 = { 926.5344f, 54.0223f, 80.0959f };
			*uParam3 = 328.5122f;
			return 1;
			break;
		case 18:
			*uParam2 = { 910.5871f, 49.354f, 79.8961f };
			*uParam3 = 151.3175f;
			return 1;
			break;
		case 19:
			*uParam2 = { 924.6784f, 54.9418f, 79.8963f };
			*uParam3 = 321.8538f;
			return 1;
			break;
		case 20:
			*uParam2 = { 912.798f, 47.3785f, 79.8961f };
			*uParam3 = 153.6041f;
			return 1;
			break;
		case 21:
			*uParam2 = { 922.3555f, 56.2383f, 79.8963f };
			*uParam3 = 323.4198f;
			return 1;
			break;
		case 22:
			*uParam2 = { 916.6665f, 45.3245f, 79.8961f };
			*uParam3 = 152.7008f;
			return 1;
			break;
		case 23:
			*uParam2 = { 920.2661f, 57.8243f, 79.8963f };
			*uParam3 = 327.1542f;
			return 1;
			break;
		case 24:
			*uParam2 = { 926.2833f, 56.9722f, 79.8963f };
			*uParam3 = 330.8231f;
			return 1;
			break;
		case 25:
			*uParam2 = { 923.6321f, 57.3753f, 79.8963f };
			*uParam3 = 328.2698f;
			return 1;
			break;
		case 26:
			*uParam2 = { 928.2498f, 56.0584f, 80.0959f };
			*uParam3 = 332.2401f;
			return 1;
			break;
		case 27:
			*uParam2 = { 922.7319f, 59.6312f, 79.8963f };
			*uParam3 = 322.5325f;
			return 1;
			break;
		case 28:
			*uParam2 = { 918.3226f, 60.3755f, 79.8961f };
			*uParam3 = 317.9934f;
			return 1;
			break;
		case 29:
			*uParam2 = { 920.806f, 60.7145f, 79.8961f };
			*uParam3 = 327.9775f;
			return 1;
			break;
		case 30:
			*uParam2 = { 915.0543f, 44.9063f, 79.8961f };
			*uParam3 = 150.4646f;
			return 1;
			break;
		case 31:
			*uParam2 = { 912.9003f, 45.4279f, 79.8961f };
			*uParam3 = 155.0189f;
			return 1;
			break;
		case 32:
			*uParam2 = { 916.0872f, 42.9597f, 79.8961f };
			*uParam3 = 143.9354f;
			return 1;
			break;
		case 33:
			*uParam2 = { 911.2024f, 47.772f, 79.8964f };
			*uParam3 = 155.3554f;
			return 1;
			break;
		case 34:
			*uParam2 = { 918.6417f, 41.6886f, 80.0963f };
			*uParam3 = 142.454f;
			return 1;
			break;
		case 35:
			*uParam2 = { 918.5939f, 43.749f, 79.8961f };
			*uParam3 = 135.7811f;
			return 1;
			break;
		case 36:
			*uParam2 = { 925.293f, 62.4365f, 79.5737f };
			*uParam3 = 331.5186f;
			return 1;
			break;
		case 37:
			*uParam2 = { 925.4841f, 60.2395f, 79.8356f };
			*uParam3 = 329.6761f;
			return 1;
			break;
		case 38:
			*uParam2 = { 923.4069f, 63.1084f, 79.6376f };
			*uParam3 = 325.0549f;
			return 1;
			break;
		case 39:
			*uParam2 = { 928.2126f, 60.5921f, 79.5766f };
			*uParam3 = 332.8898f;
			return 1;
			break;
		case 40:
			*uParam2 = { 921.652f, 64.8097f, 79.5628f };
			*uParam3 = 325.775f;
			return 1;
			break;
		case 41:
			*uParam2 = { 929.6193f, 58.5147f, 79.9291f };
			*uParam3 = 331.7317f;
			return 1;
			break;
		case 42:
			*uParam2 = { 913.1684f, 40.8677f, 79.8961f };
			*uParam3 = 141.4518f;
			return 1;
			break;
		case 43:
			*uParam2 = { 912.3802f, 43.0171f, 79.8961f };
			*uParam3 = 144.9305f;
			return 1;
			break;
		case 44:
			*uParam2 = { 914.5126f, 38.9252f, 79.8563f };
			*uParam3 = 137.5591f;
			return 1;
			break;
		case 45:
			*uParam2 = { 910.4434f, 42.8315f, 79.8963f };
			*uParam3 = 144.088f;
			return 1;
			break;
		case 46:
			*uParam2 = { 917.1274f, 38.2923f, 80.0963f };
			*uParam3 = 144.7904f;
			return 1;
			break;
		case 47:
			*uParam2 = { 909.9447f, 45.3507f, 79.8974f };
			*uParam3 = 142.9947f;
			return 1;
			break;
		case 48:
			*uParam2 = { 909.96f, 36.8224f, 79.5372f };
			*uParam3 = 146.728f;
			return 1;
			break;
		case 49:
			*uParam2 = { 909.5275f, 39.2422f, 79.6758f };
			*uParam3 = 162.0746f;
			return 1;
			break;
		case 50:
			*uParam2 = { 910.8312f, 33.7939f, 79.377f };
			*uParam3 = 146.3022f;
			return 1;
			break;
		case 51:
			*uParam2 = { 907.1073f, 38.2415f, 79.5141f };
			*uParam3 = 144.2117f;
			return 1;
			break;
		case 52:
			*uParam2 = { 913.5198f, 33.5385f, 79.6689f };
			*uParam3 = 134.6851f;
			return 1;
			break;
		case 53:
			*uParam2 = { 906.9109f, 41.03f, 79.6877f };
			*uParam3 = 149.4363f;
			return 1;
			break;
		case 54:
			*uParam2 = { 926.5994f, 66.2424f, 78.9909f };
			*uParam3 = 325.0552f;
			return 1;
			break;
		case 55:
			*uParam2 = { 927.9213f, 64.527f, 79.103f };
			*uParam3 = 323.2315f;
			return 1;
			break;
		case 56:
			*uParam2 = { 924.4518f, 66.6107f, 79.1143f };
			*uParam3 = 329.3598f;
			return 1;
			break;
		case 57:
			*uParam2 = { 929.8293f, 63.4097f, 79.0939f };
			*uParam3 = 328.6109f;
			return 1;
			break;
		case 58:
			*uParam2 = { 933.1887f, 64.5893f, 78.9224f };
			*uParam3 = 328.6626f;
			return 1;
			break;
		case 59:
			*uParam2 = { 931.6279f, 61.3492f, 79.4262f };
			*uParam3 = 329.7645f;
			return 1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_929(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xE3480
{
	switch (iParam0)
	{
		case 124:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 924.052f, -4.005f, 77.765f };
					*uParam3 = 57.2f;
					break;
				case 1:
					*uParam2 = { 915.259f, 1.509f, 77.765f };
					*uParam3 = 57.2f;
					break;
				case 2:
					*uParam2 = { 906.685f, 7.03f, 77.765f };
					*uParam3 = 57.2f;
					break;
				case 3:
					*uParam2 = { 889.058f, 17.804f, 77.765f };
					*uParam3 = 57.2f;
					break;
				case 4:
					*uParam2 = { 880.825f, 22.945f, 77.675f };
					*uParam3 = 57.2f;
					break;
				case 5:
					*uParam2 = { 921.13f, -18.489f, 77.764f };
					*uParam3 = 148.8f;
					break;
				case 6:
					*uParam2 = { 910.593f, -35.637f, 77.764f };
					*uParam3 = 148.8f;
					break;
				case 7:
					*uParam2 = { 905.636f, -43.594f, 77.764f };
					*uParam3 = 148.8f;
					break;
				case 8:
					*uParam2 = { 899.957f, -52.24f, 77.764f };
					*uParam3 = 148.8f;
					break;
				case 9:
					*uParam2 = { 894.429f, -61.114f, 77.764f };
					*uParam3 = 148.8f;
					break;
				case 10:
					*uParam2 = { 925.339f, -21.281f, 77.764f };
					*uParam3 = 148.399f;
					break;
				case 11:
					*uParam2 = { 914.57f, -37.98f, 77.764f };
					*uParam3 = 148.399f;
					break;
				case 12:
					*uParam2 = { 909.303f, -46.14f, 77.764f };
					*uParam3 = 148.399f;
					break;
				case 13:
					*uParam2 = { 903.683f, -54.935f, 77.764f };
					*uParam3 = 148.399f;
					break;
				case 14:
					*uParam2 = { 898.272f, -63.613f, 77.764f };
					*uParam3 = 148.399f;
					break;
				case 15:
					*uParam2 = { 888.951f, -70.134f, 77.764f };
					*uParam3 = 148.399f;
					break;
				case 16:
					*uParam2 = { 892.872f, -72.496f, 77.764f };
					*uParam3 = 148.399f;
					break;
				case 17:
					*uParam2 = { 938.143f, -13.115f, 77.764f };
					*uParam3 = 57.999f;
					break;
				case 18:
					*uParam2 = { 935.213f, -17.698f, 77.764f };
					*uParam3 = 57.999f;
					break;
				case 19:
					*uParam2 = { 946.786f, -18.372f, 77.764f };
					*uParam3 = 57.999f;
					break;
				case 20:
					*uParam2 = { 943.945f, -23.017f, 77.764f };
					*uParam3 = 57.999f;
					break;
				case 21:
					*uParam2 = { 915.869f, -26.854f, 77.764f };
					*uParam3 = 148.198f;
					break;
				case 22:
					*uParam2 = { 919.862f, -29.385f, 77.764f };
					*uParam3 = 148.198f;
					break;
				case 23:
					*uParam2 = { 897.965f, 12.355f, 77.765f };
					*uParam3 = 57.998f;
					break;
				case 24:
					*uParam2 = { 920.9344f, -8.934f, 77.7649f };
					*uParam3 = 57.2f;
					break;
				case 25:
					*uParam2 = { 912.012f, -3.5562f, 77.7649f };
					*uParam3 = 57.2f;
					break;
				case 26:
					*uParam2 = { 903.32f, 1.7794f, 77.7649f };
					*uParam3 = 57.2f;
					break;
				case 27:
					*uParam2 = { 894.5089f, 7.3714f, 77.7649f };
					*uParam3 = 57.2f;
					break;
				case 28:
					*uParam2 = { 885.74f, 12.7861f, 77.7655f };
					*uParam3 = 57.2f;
					break;
				case 29:
					*uParam2 = { 876.5641f, 18.9969f, 77.7887f };
					*uParam3 = 57.2f;
					break;
				default:
					return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

void func_930(bool bParam0)//Position - 0xE5091
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 3);
	}
}

void func_931(bool bParam0)//Position - 0xE50B7
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_5, 10))
		{
			MISC::SET_BIT(&(Global_1946250.f_5), 10);
		}
	}
	else if (BitTest(Global_1946250.f_5, 10))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 10);
	}
}

void func_932(int iParam0, int iParam1)//Position - 0xE50F8
{
	if (iParam1 != -1)
	{
		if (Global_1946250.f_4700 == -1)
		{
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", iParam1, true, 0))
			{
				Global_1946250.f_4700 = iParam1;
				Global_1946250.f_4699 = iParam0;
			}
		}
	}
}

void func_933(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xE5139
{
	StringCopy(sParam1, "CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */, 64);
	(*uParam2)[0] = "CASINO_ENT_F3" /* GXT: Parking Garage */;
	(*uParam2)[1] = "CASINO_ENT_F2" /* GXT: Penthouse Garage */;
	*uParam4 = 2;
}

int func_934(int iParam0)//Position - 0xE529D
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 18);
}

Vector3 func_935(int iParam0)//Position - 0xE55CE
{
	switch (iParam0)
	{
		case 124:
			return 936.3319f, 1.1849f, 77.7649f;
			break;
	}
	return 0f, 0f, 0f;
}

char* func_936()//Position - 0xE58D8
{
	return "ShopUI_Title_Casino";
}

char* func_937(bool bParam0, int iParam1)//Position - 0xE5A69
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 1:
				return "CASINO_ENT_F2_H" /* GXT: Enter your Penthouse Garage. */;
			case 0:
				return "CASINO_ENT_F3_H" /* GXT: Enter the Parking Garage. */;
			}
		default:
	}
	return "CSNAPT_EXT_F1HC" /* GXT: Purchase the Penthouse Garage from www.thediamondcasinoandresort.com. */;
}

int func_938(int iParam0)//Position - 0xE5A9D
{
	switch (iParam0)
	{
		case 0:
			return !Global_262145.f_26910 /* Tunable: VC_PENTHOUSE_DISABLE_GARAGE */;
		case 1:
			return (__LIB_0__.func_833(PLAYER::PLAYER_ID()) && !Global_262145.f_26912 /* Tunable: VC_PENTHOUSE_DISABLE_PARKING */);
		default:
	}
	return 0;
}

char* func_939(int iParam0)//Position - 0xE5ADC
{
	switch (iParam0)
	{
		case 1:
			return "CASINO_ENT_F2" /* GXT: Penthouse Garage */;
		case 0:
			return "CASINO_ENT_F3" /* GXT: Parking Garage */;
		default:
	}
	return "UNKNOWN";
}

void func_940(var uParam0, char* sParam1, var uParam2)//Position - 0xE5B9D
{
	StringCopy(sParam1, "CAS_APT_ENT_BT" /* GXT: PENTHOUSE OPTIONS */, 16);
	(*uParam2)[0] = "CASINO_APT_EXIT_F0" /* GXT: Penthouse */;
	(*uParam2)[1] = "CASINO_ENT_F1_H" /* GXT: Enter your Penthouse. */;
	(*uParam2)[2] = "CAS_APT_BUZZ_D0" /* GXT: Request access to Penthouse. */;
}

int func_941(int iParam0)//Position - 0xE66F9
{
	switch (iParam0)
	{
		case 1:
			return 1;
			break;
	}
	return 0;
}

int func_942(int iParam0)//Position - 0xE70F8
{
	if (iParam0 == 124)
	{
		return 1;
	}
	return 0;
}

int func_943(var uParam0, int iParam1)//Position - 0xE71B1
{
	if (iParam1 == 0)
	{
		return joaat("prop_ld_keypad_01");
	}
	return 0;
}

void func_944(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0xE71C8
{
	if (iParam3 == 0)
	{
		*uParam1 = { 967.608f, 62.454f, 112.845f };
		*uParam2 = { 0f, 0f, -121.375f };
	}
}

void func_945(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0xE77F5
{
	switch (iParam0)
	{
		case 124:
			switch (iParam6)
			{
				case 1:
					*uParam2 = { 933.9017f, 3.243445f, 77.900055f };
					*uParam3 = { 939.6001f, -0.414966f, 81.08749f };
					*uParam4 = 9f;
					*uParam1 = { 936.5542f, 1.1273f, 77.7649f };
					*uParam5 = 333.0089f;
					break;
			}
			break;
	}
}

void func_946(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0xE7881
{
	switch (iParam0)
	{
		case 124:
			switch (iParam6)
			{
				case 0:
					*uParam2 = { 934.3319f, 3.657836f, 77.76491f };
					*uParam3 = { 939.348f, -0.142928f, 79.900055f };
					*uParam4 = 2.625f;
					*uParam1 = { 936.3319f, 1.1849f, 77.7649f };
					*uParam5 = 310f;
					break;
				case 2:
					*uParam2 = { 968.591f, 63.923855f, 111.55298f };
					*uParam3 = { 967.9729f, 62.845036f, 113.89449f };
					*uParam4 = 1.5f;
					*uParam1 = { 0f, 0f, 0f };
					*uParam5 = 240f;
					break;
				case 6:
					*uParam2 = { 967.8361f, 62.833813f, 111.55298f };
					*uParam3 = { 967.3209f, 61.992443f, 113.88218f };
					*uParam4 = 1.9375f;
					*uParam1 = { 967.22f, 62.69f, 111.5531f };
					*uParam5 = 240f;
					break;
			}
			break;
	}
}

bool func_947()//Position - 0xE7A14
{
	return __LIB_0__.func_137(27090, -1);
}

int func_948(var uParam0)//Position - 0xE7BBB
{
	return 125;
}

char* func_949(var uParam0)//Position - 0xE7BC5
{
	return "MP_CASINO_APT_1";
}

Vector3 func_950(int iParam0)//Position - 0xE7BD2
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 0);
	MISC::SET_BIT(&(Var0[0]), 1);
	MISC::SET_BIT(&(Var0[0]), 6);
	MISC::SET_BIT(&(Var0[0]), 11);
	MISC::SET_BIT(&(Var0[0]), 19);
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 5);
	MISC::SET_BIT(&(Var0[0]), 10);
	MISC::SET_BIT(&(Var0[0]), 15);
	MISC::SET_BIT(&(Var0[0]), 4);
	MISC::SET_BIT(&(Var0[0]), 18);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[0]), 25);
	MISC::SET_BIT(&(Var0[0]), 26);
	MISC::SET_BIT(&(Var0[0]), 27);
	MISC::SET_BIT(&(Var0[0]), 29);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[0]), 31);
	MISC::SET_BIT(&(Var0[1]), 2);
	MISC::SET_BIT(&(Var0[1]), 3);
	return Var0;
}

void func_951(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0xE7DB3
{
	if (iParam5 == 0)
	{
		switch (iParam0)
		{
			case 1:
				*uParam3 = { -8.4843f, -11.1186f, 0.0642776f };
				*uParam4 = { -10.4843f, -11.1767f, 2.70219f };
				*uParam1 = 1.1875f;
				*uParam2 = 180f;
				break;
			case 2:
				*uParam3 = { -10.4445f, 2.96125f, -3.61106f };
				*uParam4 = { -9.18204f, 2.96815f, -0.923561f };
				*uParam1 = 1.4375f;
				*uParam2 = 2f;
				break;
			default:
				*uParam3 = { 0f, 0f, -1f };
				*uParam4 = { 0f, 0f, 1f };
				*uParam1 = 0f;
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				*uParam3 = { 1.335327f, -10.50708f, 0.007973f };
				*uParam4 = { -0.622803f, -10.576263f, 2.522243f };
				*uParam1 = 1.375f;
				*uParam2 = 180f;
				break;
			case 2:
				*uParam3 = { -0.748291f, 32.47513f, -0.01229f };
				*uParam4 = { 1.228882f, 32.538177f, 2.505112f };
				*uParam1 = 1.375f;
				*uParam2 = 0f;
				break;
			case 3:
				*uParam3 = { -45.57019f, -2.678101f, 1.069805f };
				*uParam4 = { -45.48987f, 2.637283f, 3.721886f };
				*uParam1 = 2.0625f;
				*uParam2 = 90f;
				break;
			default:
				*uParam3 = { 0f, 0f, -1f };
				*uParam4 = { 0f, 0f, 1f };
				*uParam1 = 0f;
				*uParam2 = 0f;
				break;
			}
	}
}

int func_952(int iParam0)//Position - 0xE7F37
{
	if (iParam0 == 0)
	{
		return 2;
	}
	return 3;
}

void func_953(var uParam0, var uParam1)//Position - 0xE7F4A
{
	uParam1->f_21 = "AM_MP_CASINO_APARTMENT";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

Vector3 func_954(int iParam0)//Position - 0xE7FC7
{
	if (iParam0 == 0)
	{
		return 976.6364f, 70.29476f, 115.16413f;
	}
	return 1295f, 230f, -50f;
}

int func_955(int iParam0, var uParam1, var uParam2)//Position - 0xE7FF6
{
	if (__LIB_0__.func_834(iParam0))
	{
		return 124;
	}
	return -1;
}

void func_956(var uParam0)//Position - 0xE860D
{
	if (Global_1946244 == 8 || Global_1946244 == 31)
	{
		Global_1966099 = 1;
		Global_1966101 = 1;
		Global_1966102 = 1;
		Global_1966100 = 1;
		Global_1966103 = 1;
	}
}

void func_957(int* iParam0, int iParam1)//Position - 0xE8C0F
{
	iParam0->f_259 = iParam1;
}

void func_958(var uParam0)//Position - 0xE8C1E
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_11))
	{
		CAM::DESTROY_CAM(uParam0->f_11, false);
	}
	uParam0->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
	CAM::SET_CAM_PARAMS(uParam0->f_11, uParam0->f_13, uParam0->f_16, uParam0->f_19, 0, 1, 1, 2);
	CAM::SET_CAM_FAR_CLIP(uParam0->f_11, 1000f);
	CAM::SHAKE_CAM(uParam0->f_11, "HAND_SHAKE", uParam0->f_40);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_959(var uParam0, int iParam1)//Position - 0xE9937
{
	if (uParam0->f_372 > 0)
	{
		if (!uParam0->f_386 && !BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_533, 0))
		{
			__LIB_1__.func_128(uParam0);
			uParam0->f_1 = iParam1;
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

void func_960(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0xE9D9D
{
	switch (iParam0)
	{
		case 123:
			*uParam1 = { 813.803f, 59.6572f, 85.5153f };
			*uParam2 = { 10.4325f, -0.0699f, -97.1885f };
			*uParam3 = 42.878f;
			*uParam4 = 0.2f;
			break;
	}
}

void func_961()//Position - 0xE9DEB
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__.func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2]))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], true, true);
		}
		iVar2++;
	}
}

void func_962(int* iParam0, int iParam1)//Position - 0xE9E50
{
	iParam0->f_258 = iParam1;
}

void func_963(var uParam0)//Position - 0xEA0F9
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_4);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		PED::DELETE_PED(&(uParam0->f_2));
	}
}

void func_964(var uParam0)//Position - 0xEA1B2
{
	__LIB_1__.func_128(uParam0);
	*uParam0 = 0;
	uParam0->f_372 = 0;
	uParam0->f_373 = 0;
	uParam0->f_378 = 0;
}

int func_965(int iParam0)//Position - 0xEA2AE
{
	switch (iParam0)
	{
		case 158:
			return 1;
		default:
	}
	return 0;
}

void func_966(int iParam0, var uParam1)//Position - 0xEA940
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 2, 0, 0);
			break;
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 2, 0, 0);
			break;
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 2, 0, 0);
			break;
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 2, 0, 0);
			break;
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 2, 0, 0);
			break;
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 2, 0, 0);
			break;
	}
}

void func_967(int iParam0)//Position - 0xEAEA2
{
	struct<2> Var0;
	Var0.f_0 = 385584794;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_968(int iParam0)//Position - 0xEB3B5
{
	if ((((Global_1946250.f_3638.f_386 && Global_1946250.f_3638.f_372 > 0) && Global_1946250.f_3638.f_382 == (Global_1946250.f_3638.f_372 - 1)) && (Global_1946250.f_3638.f_18[Global_1946250.f_3638.f_382 /*36*/] - Global_1946250.f_3638.f_375) <= iParam0) || !Global_1946250.f_3638.f_386)
	{
		if ((MISC::GET_FRAME_COUNT() % 60) == 0)
		{
		}
		return 1;
	}
	return 0;
}

void func_969(bool bParam0)//Position - 0xEB440
{
	MISC::SET_BIT(&(Global_2703735.f_61.f_52), 0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_52), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_52), 4);
	}
}

int func_970(var uParam0)//Position - 0xEB6D8
{
	int iVar0;
	iVar0 = 0;
	if (BitTest(uParam0->f_188, 6))
	{
		iVar0 = 1;
	}
	else if (BitTest(uParam0->f_188, 7))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_971(int iParam0, int iParam1)//Position - 0xEBB26
{
	Global_2703735.f_61.f_18 = 1;
	Global_2703735.f_61.f_21 = iParam0;
	Global_2703735.f_61.f_19 = iParam1;
	if ((BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 31) || BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 30)) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_380 == 1)
	{
		Global_2703735.f_61.f_80 = 1;
	}
}

char* func_972(int iParam0)//Position - 0xEBB9C
{
	switch (iParam0)
	{
		case 0:
			return "intro_mp_m_freemode_01";
			break;
		case 3:
			return "intro_s_m_y_valet_01";
			break;
		case 5:
			return "intro_vw_prop_vw_valet_01a";
			break;
		case 6:
			return "intro_cam";
			break;
		case 7:
			return "intro_vw_prop_vw_casino_door_02a";
			break;
	}
	return "**Invalid**";
}

int func_973(int iParam0)//Position - 0xEC0DE
{
	switch (iParam0)
	{
		case 0:
			return 4800;
			break;
		case 1:
			return 5850;
			break;
		case 2:
			return 5850;
			break;
	}
	return 0;
}

float func_974(int iParam0)//Position - 0xEC11B
{
	switch (iParam0)
	{
		case -395939522:
			return -122f;
			break;
		case -401740561:
			return -122f;
			break;
		case -1805228339:
			return -122f;
			break;
		case -2142560346:
			return -122f;
			break;
		case -89171747:
			return -122f;
			break;
		case -212930257:
			return -122f;
			break;
		case -1952323495:
			return 148f;
			break;
		case 389984559:
			return 58f;
			break;
		case 599745705:
			return -32f;
			break;
		case -1871024115:
			return 58f;
			break;
		case -105492995:
			return 58f;
			break;
		case 943188950:
			return 58f;
			break;
		case -810585513:
			return 58f;
			break;
		case -84048984:
			return 58f;
			break;
	}
	return 0f;
}

char* func_975(int iParam0)//Position - 0xEC3DF
{
	switch (iParam0)
	{
		case 0:
			return "anim@amb@casino@valet@enter@var01@";
			break;
		case 1:
			return "anim@amb@casino@valet@enter@var02@";
			break;
		case 2:
			return "anim@amb@casino@valet@enter@var03@";
			break;
	}
	return "**UNKNOWN**";
}

void func_976(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xEC444
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 123:
			*uParam2 = { 948.4517f, -39.27819f, 76.75584f };
			*uParam3 = { 863.8833f, 22.64865f, 81.86767f };
			break;
		default:
			*uParam1 = 0;
			break;
	}
}

bool func_977()//Position - 0xEC938
{
	return BitTest(Global_1946250.f_6, 6);
}

Vector3 func_978(int iParam0)//Position - 0xEC979
{
	switch (iParam0)
	{
		case 123:
			return 943.4506f, 33.8918f, 83.8723f;
		default:
	}
	return 0f, 0f, 0f;
}

bool func_979()//Position - 0xEC9BD
{
	return __LIB_0__.func_137(27089, -1);
}

void func_980(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xEC9D6
{
	if (HUD::DOES_BLIP_EXIST(*uParam1) && !HUD::IS_MISSION_CREATOR_BLIP(*uParam1))
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(*uParam1, true);
	}
}

Vector3 func_981(int iParam0)//Position - 0xEC9FD
{
	switch (iParam0)
	{
		case 123:
			return 927.6243f, 44.8511f, 79.8999f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_982(var uParam0)//Position - 0xECA27
{
	return 679;
}

void func_983(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xECE5F
{
	if (*uParam2 != 9)
	{
		return;
	}
	StringCopy(sParam1, "CASINO_TITLE" /* GXT: CASINO */, 64);
	(*uParam2)[0] = "CASINO_EXIT" /* GXT: Exit Casino */;
	(*uParam2)[1] = "CASINO_EXIT" /* GXT: Exit Casino */;
	(*uParam2)[2] = "CASINO_ENT_F1" /* GXT: Penthouse */;
	(*uParam2)[3] = "CASINO_ENT_F2" /* GXT: Penthouse Garage */;
	(*uParam2)[4] = "CASINO_ENT_F3" /* GXT: Parking Garage */;
	(*uParam2)[5] = "CASINO_ENT_F4" /* GXT: Roof Terrace */;
	(*uParam2)[6] = "CASINO_ENT_F5" /* GXT: Roof */;
	(*uParam2)[7] = "CASINO_ENT_F6" /* GXT: The Music Locker */;
	*uParam3 = 8;
}

int func_984(int iParam0, var uParam1, var uParam2)//Position - 0xED438
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -14.1832f, -5.3591f, -0.2003f };
			*uParam2 = 312.12f;
			return 1;
			break;
		case 1:
			*uParam1 = { -13.3929f, -6.1835f, -0.2003f };
			*uParam2 = 329.101f;
			return 1;
			break;
		case 2:
			*uParam1 = { -14.8292f, -4.3853f, -0.2003f };
			*uParam2 = 312.12f;
			return 1;
			break;
		case 3:
			*uParam1 = { -12.3601f, -5.6195f, -0.2f };
			*uParam2 = 323.6673f;
			return 1;
			break;
		case 4:
			*uParam1 = { -14.9988f, -3.3775f, -0.2003f };
			*uParam2 = 263.465f;
			return 1;
			break;
		case 5:
			*uParam1 = { -13.4404f, -4.2049f, -0.2001f };
			*uParam2 = 312.12f;
			return 1;
			break;
		case 6:
			*uParam1 = { -11.9783f, -4.3566f, -0.2f };
			*uParam2 = 251.1484f;
			return 1;
			break;
		case 7:
			*uParam1 = { -13.9919f, -2.7342f, -0.2001f };
			*uParam2 = 246.3606f;
			return 1;
			break;
		case 8:
			*uParam1 = { -11.0413f, -5.6771f, -0.2f };
			*uParam2 = 312.12f;
			return 1;
			break;
		case 9:
			*uParam1 = { -13.9098f, -1.5371f, -0.2001f };
			*uParam2 = 225.2466f;
			return 1;
			break;
		case 10:
			*uParam1 = { -12.6666f, -2.8129f, -0.2001f };
			*uParam2 = 227.9167f;
			return 1;
			break;
		case 11:
			*uParam1 = { -10.9982f, -2.7781f, -0.2001f };
			*uParam2 = 210.5342f;
			return 1;
			break;
		case 12:
			*uParam1 = { -10.6558f, -1.2602f, -0.2002f };
			*uParam2 = 189.3277f;
			return 1;
			break;
		case 13:
			*uParam1 = { -10.1273f, -6.82f, 0.0002f };
			*uParam2 = 242.8318f;
			return 1;
			break;
		case 14:
			*uParam1 = { -12.2262f, -1.4907f, -0.2002f };
			*uParam2 = 236.1977f;
			return 1;
			break;
		case 15:
			*uParam1 = { -9.7859f, -3.226f, -0.2001f };
			*uParam2 = 195.8292f;
			return 1;
			break;
		case 16:
			*uParam1 = { -9.5698f, -8.0513f, 0.0003f };
			*uParam2 = 255.0655f;
			return 1;
			break;
		case 17:
			*uParam1 = { -9.3732f, -1.2821f, -0.2002f };
			*uParam2 = 186.6664f;
			return 1;
			break;
		case 18:
			*uParam1 = { -8.7578f, -6.1672f, 0.0002f };
			*uParam2 = 230.1071f;
			return 1;
			break;
		case 19:
			*uParam1 = { -10.0491f, -4.911f, -0.2f };
			*uParam2 = 208.8895f;
			return 1;
			break;
		case 20:
			*uParam1 = { -7.3876f, -7.5546f, 0.0004f };
			*uParam2 = 237.7242f;
			return 1;
			break;
		case 21:
			*uParam1 = { -8.3694f, -9.0664f, 0.0003f };
			*uParam2 = 271.5263f;
			return 1;
			break;
		case 22:
			*uParam1 = { -7.3264f, -5.2868f, 0.0004f };
			*uParam2 = 230.5949f;
			return 1;
			break;
		case 23:
			*uParam1 = { -5.2288f, -6.3636f, 0.0006f };
			*uParam2 = 312.12f;
			return 1;
			break;
		case 24:
			*uParam1 = { -8.2013f, -4.4705f, -0.2002f };
			*uParam2 = 212.1861f;
			return 1;
			break;
		case 25:
			*uParam1 = { -2.8704f, -6.597f, 0.0006f };
			*uParam2 = 312.12f;
			return 1;
			break;
		case 26:
			*uParam1 = { -5.0946f, -4.7964f, 0.0006f };
			*uParam2 = 312.12f;
			return 1;
			break;
		case 27:
			*uParam1 = { -3.8627f, -9.1222f, 0.0005f };
			*uParam2 = 266.4321f;
			return 1;
			break;
		case 28:
			*uParam1 = { -2.4327f, -10.1533f, 0.0004f };
			*uParam2 = 266.885f;
			return 1;
			break;
		case 29:
			*uParam1 = { -5.3257f, -10.0378f, 0.0006f };
			*uParam2 = 276.3441f;
			return 1;
			break;
		case 30:
			*uParam1 = { -1.2311f, -11.4457f, -0.4399f };
			*uParam2 = 262.2451f;
			return 1;
			break;
		case 31:
			*uParam1 = { -2.4812f, -8.5056f, 0.0005f };
			*uParam2 = 256.7386f;
			return 1;
			break;
	}
	return 0;
}

Vector3 func_985(var uParam0)//Position - 0xED976
{
	return 1089.6075f, 207.224f, -59.9998f;
}

char* func_986(bool bParam0, int iParam1)//Position - 0xEE24D
{
	if (bParam0)
	{
		switch (iParam1)
		{
			case 0:
				return "CASINO_ENT_F0_H" /* GXT: Enter the Casino. */;
			case 1:
				return "CASINO_ENT_F1_H" /* GXT: Enter your Penthouse. */;
			}
		default:
	}
	return "CASINO_BUY_PROP" /* GXT: Purchase the Penthouse from www.thediamondcasinoandresort.com. */;
}

char* func_987(int iParam0)//Position - 0xEE396
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_ENT_F0" /* GXT: Casino */;
		case 1:
			return "CASINO_ENT_F1" /* GXT: Penthouse */;
		case 2:
			return "CASINO_ENT_F2" /* GXT: Penthouse Garage */;
		case 3:
			return "CASINO_ENT_F3" /* GXT: Parking Garage */;
		case 4:
			return "CASINO_ENT_F6" /* GXT: The Music Locker */;
		default:
	}
	return "UNKNOWN";
}

int func_988(int iParam0)//Position - 0xEE3EB
{
	switch (iParam0)
	{
		case 0:
			return 0;
		default:
	}
	return 0;
}

char* func_989(int iParam0)//Position - 0xEE489
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_ENT_F0" /* GXT: Casino */;
		case 1:
			return "CASINO_ENT_F1" /* GXT: Penthouse */;
		default:
	}
	return "UNKNOWN";
}

void func_990(int iParam0, var uParam1, var uParam2)//Position - 0xEF2C8
{
	switch (iParam0)
	{
		case 123:
			*uParam1 = { 1081.171f, 189.428f, -52.868f };
			uParam1->f_3 = { 1167.204f, 285.143f, -41.435f };
			break;
	}
}

char* func_991(var uParam0)//Position - 0xEF308
{
	return "MP_CASINO_1";
}

Vector3 func_992(int iParam0)//Position - 0xEF315
{
	struct<3> Var0;
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 9);
	MISC::SET_BIT(&(Var0[0]), 5);
	MISC::SET_BIT(&(Var0[0]), 10);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[0]), 14);
	MISC::SET_BIT(&(Var0[0]), 16);
	MISC::SET_BIT(&(Var0[0]), 19);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[0]), 21);
	MISC::SET_BIT(&(Var0[0]), 24);
	MISC::SET_BIT(&(Var0[0]), 6);
	MISC::SET_BIT(&(Var0[0]), 27);
	MISC::SET_BIT(&(Var0[0]), 28);
	MISC::SET_BIT(&(Var0[0]), 29);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[1]), 2);
	MISC::SET_BIT(&(Var0[1]), 3);
	MISC::SET_BIT(&(Var0[1]), 4);
	MISC::SET_BIT(&(Var0[1]), 8);
	MISC::SET_BIT(&(Var0[1]), 22);
	return Var0;
}

void func_993(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xEF4A8
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 2.25f;
			*uParam2 = 180f;
			*uParam3 = { -8.975098f, -14.600998f, 7.2E-05f };
			*uParam4 = { -11.682983f, -14.613327f, 2.062572f };
			break;
		case 2:
			*uParam1 = 1.575f;
			*uParam2 = 140f;
			*uParam3 = { -14.087891f, -6.69397f, -0.200249f };
			*uParam4 = { -15.712524f, -5.07576f, 2.132462f };
			break;
	}
}

void func_994(var uParam0, var uParam1)//Position - 0xEF535
{
	uParam1->f_21 = "AM_MP_CASINO";
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

Vector3 func_995()//Position - 0xEF58C
{
	return 1100f, 220f, -50f;
}

void func_996(var uParam0)//Position - 0xEFB44
{
	if (Global_1946244 == 8)
	{
		if (Global_2779522.f_7)
		{
			Global_2779522.f_10 = 1;
		}
	}
}

void func_997(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0xEFEBF
{
	switch (iParam0)
	{
		case 122:
			switch (iParam4)
			{
				case 3:
					*uParam1 = { -360.0815f, -1874.2406f, 19.587643f };
					*uParam2 = { -368.446f, -1876.1884f, 23.255402f };
					*uParam3 = 1.5f;
					break;
				case 4:
					*uParam1 = { -371.95502f, -1877.256f, 19.574017f };
					*uParam2 = { -380.0627f, -1880.4047f, 23.469097f };
					*uParam3 = 1f;
					break;
				case 5:
					*uParam1 = { -383.21204f, -1881.9692f, 19.597858f };
					*uParam2 = { -390.73145f, -1886.2819f, 23.500357f };
					*uParam3 = 1f;
					break;
			}
			break;
	}
}

Vector3 func_998(int iParam0, int iParam1)//Position - 0xEFF7B
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 122:
			switch (iParam1)
			{
				case 3:
					Var0 = { -363.3629f, -1881.8674f, 19.5279f };
					break;
				case 4:
					Var0 = { -373.5051f, -1885.4291f, 20.2217f };
					break;
				case 5:
					Var0 = { -381.3691f, -1895.0382f, 19.3018f };
					break;
			}
			break;
	}
	return Var0;
}

float func_999(int iParam0, int iParam1)//Position - 0xEFFF2
{
	float fVar0;
	switch (iParam0)
	{
		case 122:
			switch (iParam1)
			{
				case 3:
					fVar0 = 191.3271f;
					break;
				case 4:
					fVar0 = 200.9823f;
					break;
				case 5:
					fVar0 = 209.693f;
					break;
			}
			break;
	}
	return fVar0;
}
